
#include "../main.h"

extern kineticArtLevel Menu;

int cBmp = 0; /* for autochain funcs */
cpBody *prevBody; /* for autochain funcs */

cpBody *selA = NULL, *selB = NULL; /* cursors */
cpVect anchorA, anchorB; /* cursor anchors */
float cursorAngle = 10; /* for cursor rotation */

char polyStr[1024]; /* for poly build mode */
char temp[128]; /* for poly build mode */
cpVect mlast; /* for poly build mode */

int currentBitmap = 20; /* objects cycling */
int currentBg = rc_bg18; /* bitmap cycling */

#define MIN_CURRENT_BITMAP 1
#define MAX_CURRENT_BITMAP (rc_the_last - 1)
#define MIN_CURRENT_BG rc_bg00
#define MAX_CURRENT_BG rc_bg25

/*nmap <F11> :%s/<C-v><C-m>//g<CR>:%s/\<000000\>/0/g<CR>:%s/\<900000\>/9/g<CR>:%s/\<500000\>/5/g<CR>:%s/cpv(0.0, 0.0)/cpvzero/g<CR>*/


// ------- //
// Helpers //
// ------- //

static void editorsMouse(void)
{
	draw_trans2((BITMAP *)data[rc_mouse].dat, buffer, mouse_x - 31, mouse_y - 42);

	cpVect a = cpv(mouse_x, mouse_y);
	putpixel(buffer, a.x, a.y, makeacol(255, 255, 255, 255));
	putpixel(buffer, a.x+1, a.y, makeacol(255, 255, 255, 255));
	putpixel(buffer, a.x, a.y+1, makeacol(255, 255, 255, 255));

	/* Draw cursors */
	if (selA) {
		cpVect a = cpvadd(selA->p, cpvrotate(anchorA, selA->rot));
		putpixel(buffer, a.x, a.y, makeacol(255, 255, 255, 200));
		putpixel(buffer, a.x-1, a.y, makeacol(200, 200, 200, 100));
		putpixel(buffer, a.x+1, a.y, makeacol(200, 200, 200, 100));
		putpixel(buffer, a.x, a.y-1, makeacol(200, 200, 200, 100));
		putpixel(buffer, a.x, a.y+1, makeacol(200, 200, 200, 100));
	}
	if (selB) {
		cpVect b = cpvadd(selB->p, cpvrotate(anchorB, selB->rot));
		putpixel(buffer, b.x, b.y, makeacol(255, 255, 255, 200));
		putpixel(buffer, b.x-1, b.y, makeacol(200, 200, 200, 100));
		putpixel(buffer, b.x+1, b.y, makeacol(200, 200, 200, 100));
		putpixel(buffer, b.x, b.y-1, makeacol(200, 200, 200, 100));
		putpixel(buffer, b.x, b.y+1, makeacol(200, 200, 200, 100));
	}

}

static void selectA(cpBody *body, void *unused)
{
	if (body->id != 0) {
		float dist = (selA == NULL) ? 65545 : cpvdist(cpv(selA->p.x, selA->p.y), cpv(mouse_x, mouse_y));
		float new_dist = cpvdist(cpv(body->p.x, body->p.y), cpv(mouse_x, mouse_y));
		if (new_dist < dist) selA = body;
	}
}

static void selectB(cpBody *body, void *unused)
{
	if (body->id != 0) {
		float dist = (selB == NULL) ? 65545 : cpvdist(cpv(selB->p.x, selB->p.y), cpv(mouse_x, mouse_y));
		float new_dist = cpvdist(cpv(body->p.x, body->p.y), cpv(mouse_x, mouse_y));
		if (new_dist < dist) selB = body;
	}
}

static void randI(cpBody *body, void *unused)
{
	/*body->p = cpvadd(body->p, cpv(0, 5));*/
	/* for lvl32 */
	body->v = cpv(15+rand()%15, rand()%150-75);
	cpBodySetMoment(body, INFINITY);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body, staticBody, cpvzero, cpvadd(body->p, cpv(0, -10.0)), 10.0, 300.0f, 1.0f));
}

static void randW(cpBody *body, void *unused)
{
	cpFloat q = (rand()%1000) / 100.0f;
	if (rand()%10 < 5) q *= -1.0f;
	body->w = q;
}


// --------- //
// Std funcs //
// --------- //

static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	prevBody = staticBody;
	selA = NULL;
	selB = NULL;
	mlast = cpvzero;
}

static void destroy(void)
{
	freeSpaces();
}

static void update(void)
{
	handleBtnDelay(); /* important! */

	cursorAngle = (cursorAngle < PI) ? (cursorAngle + (PI / 360)) : 0;

	/*
	 * 'V' pressed  ==  poly draw mode
	 *
	 * Ootherwise:
	 * Normal click  ==  select body && set anchor
	 * Shift-click  ==  select static body
	 * Ctrl-click  ==  do not select anything, adjust anchor only
	 * Alt-click  ==  set anchor to center
	 *
	 */

	if (keyPressed(KEY_F5, key[KEY_F5])) {
		FILE *textfile = fopen("poly.c", "w");
		fprintf(textfile, "cpVect verts[] = { ");
		fprintf(textfile, polyStr);
		fprintf(textfile, "};"); //\ncreatePoly(space, currentBitmap, 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, 1, 1, verts, sizeof(verts) / sizeof(verts[0]));");
		fclose(textfile);
	}

	if (keyPressed(1, mouse_b & 1)) {
		if (!key[KEY_V]) {
			if (key_shifts & KB_SHIFT_FLAG) selA = staticBody; else if (!(key_shifts & KB_CTRL_FLAG)) cpSpaceEachBody(space, &selectA, NULL);
			if (key_shifts & KB_ALT_FLAG) anchorA = cpvzero; else if (selA != NULL) anchorA = cpvunrotate(cpv(mouse_x - selA->p.x, mouse_y - selA->p.y), selA->rot);
		} else {
			mlast = cpv(mouse_x, mouse_y);
			sprintf(temp, "cpv(%.2f, %.2f), ", (float)(mouse_x - SIZE_X/2)/4.0f, (float)(mouse_y - SIZE_Y/2)/4.0f);
			/*allegro_message("cpv(%.3f, %.3f), ", (float)mouse_x - SIZE_X/2, (float)mouse_y - SIZE_Y/2);*/
			strcat(polyStr, temp);
		}
	}

	if (keyPressed(2, mouse_b & 2)) {
		if (key_shifts & KB_SHIFT_FLAG) selB = staticBody; else if (!(key_shifts & KB_CTRL_FLAG)) cpSpaceEachBody(space, &selectB, NULL);
		if (key_shifts & KB_ALT_FLAG) anchorB = cpvzero; else if (selB != NULL) anchorB = cpvunrotate(cpv(mouse_x - selB->p.x, mouse_y - selB->p.y), selB->rot);
	}

	/* Bitmaps cycling */
	if (keyPressed(KEY_Z, key[KEY_Z])) if (--currentBitmap < MIN_CURRENT_BITMAP) currentBitmap = MAX_CURRENT_BITMAP;
	if (keyPressed(KEY_X, key[KEY_X])) if (++currentBitmap > MAX_CURRENT_BITMAP) currentBitmap = MIN_CURRENT_BITMAP;
	if ((key[KEY_Z] || key[KEY_X]) && (KB_SHIFT_FLAG & key_shifts)) {
		if (btnDelay[KEY_Z] > 5) btnDelay[KEY_Z] = 5;
		if (btnDelay[KEY_X] > 5) btnDelay[KEY_X] = 5;
	}

	/* Backgrounds cycling */
	if (keyPressed(KEY_LEFT, key[KEY_LEFT])) if (--currentBg < MIN_CURRENT_BG) currentBg = MAX_CURRENT_BG;
	if (keyPressed(KEY_RIGHT, key[KEY_RIGHT])) if (++currentBg > MAX_CURRENT_BG) currentBg = MIN_CURRENT_BG;

	/* Ctrl-S - SaveAsCode */
	if ((key_shifts & KB_CTRL_FLAG) && keyPressed(KEY_S, key[KEY_S])) SaveAsCode("temp.c");
	if ((key_shifts & KB_SHIFT_FLAG) && keyPressed(KEY_S, key[KEY_S])) fSaveAsCode("temp.as");

	/* F2 - save */
	if (keyPressed(KEY_F2, key[KEY_F2])) {
		drawing_mode(DRAW_MODE_SOLID, NULL, 0, 0);
		editorsPause = true;
		char fname[50] = "temp";
		if (adime_dialogf("Save as:", ADIME_ALIGN_CENTRE, ADIME_ALIGN_CENTRE, 200, "File:%string[50]", &fname) == 1) {
			strcat(fname, ".sav");
			Save(fname);
		}
		drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);
		playState = true;
	}

	/* F3 - load */
	if (keyPressed(KEY_F3, key[KEY_F3])) {
		drawing_mode(DRAW_MODE_SOLID, NULL, 0, 0);
		editorsPause = true;
		char fname[50] = "";
		if (adime_dialogf("Load:", ADIME_ALIGN_CENTRE, ADIME_ALIGN_CENTRE, 200, "File:%string[50]", &fname) == 1) {
			strcat(fname, ".sav");
			destroy();
			init();
			if (key_shifts & KB_SHIFT_FLAG) Load(fname, true); else
				if (key_shifts & KB_CTRL_FLAG) fLoad(fname); else
					Load(fname, false);
		}
		drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);
		playState = true;
	}

	/* F4 - edit parameters */
	if (keyPressed(KEY_F4, key[KEY_F4]) && selA) {
		drawing_mode(DRAW_MODE_SOLID, NULL, 0, 0);
		/*drawing_mode(DRAW_MODE_COPY_PATTERN, (BITMAP *)data[rc_bg10].dat, 200, 0);*/
		editorsPause = true;
		cpShape *sh = (cpShape *)selA->shape;
		double m = selA->m;
		int i_inf = selA->i == INFINITY;
		int h = selA->health;
		/*int e = selA->shape->e;*/
		/*int f = selA->shape->f;*/
		double i = selA->i;
		adime_dialogf("Object properties:",
			ADIME_ALIGN_CENTRE, ADIME_ALIGN_CENTRE, 200,
			"Mass:%double[,]"
			"INF moment:%bool[]"
			"Moment:%double[,]"
			"Angular velocity:%double[,]"
			"Health:%int[1,255]"
			"Elasticity:%double[0,1]"
			"Friction:%double[0,2]",
			&m,
			&i_inf,
			&i,
			&selA->w,
			&h,
			&sh->e,
			&sh->u);
		selA->health = (unsigned char)h;
		cpBodySetMass(selA, m);
		if (i_inf != 0) cpBodySetMoment(selA, INFINITY); else cpBodySetMoment(selA, i);
		drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);
		playState = true;
	}

	/* Space - pause */
	if (keyPressed(KEY_SPACE, key[KEY_SPACE])) editorsPause = !editorsPause;

	/* Esc - reset cursors */
	if (key[KEY_ESC]) {
		selA = NULL;
		selB = NULL;
		prevBody = staticBody;
	}

	/* Del - delete object */
	if (keyPressed(KEY_DEL, key[KEY_DEL]) && selA) {
		bodyFree(selA);
		selA = NULL;
		/*selB = NULL;*/
		/* Ugly hack. */
		/*Save("temp.sav");
		prevBody = staticBody;
		destroy();
		init();
		Load("temp.sav", true);
		delete_file("temp.sav");*/
	}

	/* Ctrl-N - new scene */
	if ((key_shifts & KB_CTRL_FLAG) && keyPressed(KEY_N, key[KEY_N])) {
		selA = NULL;
		selB = NULL;
		prevBody = staticBody;
		destroy();
		init();
	}

	/* Transform */
	if (key[KEY_T] && selA) {
		editorsPause = true;
		selA->p = cpv(mouse_x, mouse_y);
	}

	/* Rotate */
	if (key[KEY_R] && selA) {
		editorsPause = true;
		cpBodySetAngle(selA, cpvtoangle(cpvsub(selA->p, cpv(mouse_x, mouse_y))));
	}

	/* U - switch cursors */
	if (keyPressed(KEY_U, key[KEY_U])) { cpBody* temp = selA; selA = selB; selB = temp; cpVect tempA = anchorA; anchorA = anchorB; anchorB = tempA; }

	/* 1, 2, 3 ,4 - create joints */
	if (keyPressed(KEY_1, key[KEY_1]) && selA && selB && (selA != selB)) cpSpaceAddConstraint(space, cpPinJointNew(selA, selB, anchorA, anchorB));
	if (keyPressed(KEY_2, key[KEY_2]) && selA && selB && (selA != selB)) cpSpaceAddConstraint(space, cpSlideJointNew(selA, selB, anchorA, anchorB, cpvdist(selA->p, selB->p), cpvdist(selA->p, selB->p) + 20));
	if (keyPressed(KEY_3, key[KEY_3]) && selA && selB && (selA != selB)) cpSpaceAddConstraint(space, cpPivotJointNew(selA, selB, cpvadd(selA->p, cpvrotate(anchorA, selA->rot))));
	if (keyPressed(KEY_4, key[KEY_4]) && selA && selB && (selA != selB)) cpSpaceAddConstraint(space, cpDampedSpringNew(selA, selB, anchorA, anchorB, cpvdist(cpvadd(selA->p, cpvrotate(anchorA, selA->rot)), cpvadd(selB->p, cpvrotate(anchorB, selB->rot))), 100.0f, 3.0f));
	if (keyPressed(KEY_5, key[KEY_5]) && selA && selB && (selA != selB)) cpSpaceAddConstraint(space, cpDampedSpringNew(selA, selB, anchorA, anchorB, cpvdist(cpvadd(selA->p, cpvrotate(anchorA, selA->rot)), cpvadd(selB->p, cpvrotate(anchorB, selB->rot))), 400.0f, 0.0f));

	/* Create objects */
	/*if (keyPressed(KEY_Q, key[KEY_Q])) createBox(space, currentBitmap, 0, 0.1f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, 1, 1, 10, ((BITMAP *)data[currentBitmap].dat)->w, ((BITMAP *)data[currentBitmap].dat)->h);*/
	/*if (keyPressed(KEY_W, key[KEY_W])) createCircle(space, currentBitmap, 0, 0.1f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, 1, 1, 10, ((BITMAP *)data[currentBitmap].dat)->w / 2 - 2);*/
	if (keyPressed(KEY_Q, key[KEY_Q])) {
		cpBody *b = createPolyUniWrapper(currentBitmap, 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 3);
		b->alpha = 255;
	}
	if (keyPressed(KEY_W, key[KEY_W])) {
		cpBody *b = createPolyUniWrapper(currentBitmap+1, 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 3);
		b->alpha = 255;
	}

	/* random ang.vel. for all (Shift-I) or for the current (I) */
	if (keyPressed(KEY_I, key[KEY_I])) {
		if (key_shifts & KB_SHIFT_FLAG) cpSpaceEachBody(space, &randI, NULL);
			else if (selA) randI(selA, NULL);
	}

	if (keyPressed(KEY_O, key[KEY_O])) {
		if (key_shifts & KB_SHIFT_FLAG) cpSpaceEachBody(space, &randW, NULL);
			else if (selA) randW(selA, NULL);
	}

	/* reset autochain start node */
	if (keyPressed(KEY_F, key[KEY_F])) prevBody = staticBody;

	/* 5 gems autochain, linked (A) or unlinked (Shift-A) */
	if (key[KEY_A] && cpvdist(prevBody->p, cpv(mouse_x, mouse_y)) > 30) {
		cpBody *b = createPolyUniWrapper(currentBitmap+(++cBmp%5), 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 3);
		b->alpha = 255;
		if (prevBody == staticBody) {
			if (!(key_shifts & KB_SHIFT_FLAG)) cpSpaceAddConstraint(space, cpPivotJointNew(staticBody, b, b->p));
		} else {
			if (!(key_shifts & KB_SHIFT_FLAG)) {
				if (key_shifts & KB_ALT_FLAG) cpSpaceAddConstraint(space, cpDampedSpringNew(prevBody, b, cpvzero, cpvzero, cpvdist(prevBody->p, b->p), 300.0f, 0.0f));
					else cpSpaceAddConstraint(space, cpPinJointNew(prevBody, b, cpvzero, cpvzero));
			}
		}
		prevBody = b;
	}

	/* 3 gems autochain, linked (S) or unlinked (Shift-S) */
	if (key[KEY_S] && cpvdist(prevBody->p, cpv(mouse_x, mouse_y)) > 30) {
		if (!(key_shifts & KB_CTRL_FLAG)) {
			cpBody *b = createPolyUniWrapper(currentBitmap+(++cBmp%3), 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 3);
			b->alpha = 255;
			if (prevBody == staticBody) {
				if (!(key_shifts & KB_SHIFT_FLAG)) cpSpaceAddConstraint(space, cpPivotJointNew(staticBody, b, b->p));
			} else {
				if (!(key_shifts & KB_SHIFT_FLAG)) {
					if (key_shifts & KB_ALT_FLAG) cpSpaceAddConstraint(space, cpDampedSpringNew(prevBody, b, cpvzero, cpvzero, cpvdist(prevBody->p, b->p), 200.0f, 1.0f));
						else cpSpaceAddConstraint(space, cpPinJointNew(prevBody, b, cpvzero, cpvzero));
				}
			}
			prevBody = b;
		}
	}

	/* 2 gems autochain, linked (D) or unlinked (Shift-D) */
	if (key[KEY_D] && cpvdist(prevBody->p, cpv(mouse_x, mouse_y)) > 30) {
		cpBody *b = createPolyUniWrapper(currentBitmap+(++cBmp%2), 0, 1.0f, 0, cpv(mouse_x, mouse_y), cpvzero, cpvzero, 0, 0, 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 3);
		b->alpha = 255;
		if (prevBody == staticBody) {
			if (!(key_shifts & KB_SHIFT_FLAG)) cpSpaceAddConstraint(space, cpPivotJointNew(staticBody, b, b->p));
		} else {
			if (!(key_shifts & KB_SHIFT_FLAG)) {
				if (key_shifts & KB_ALT_FLAG) cpSpaceAddConstraint(space, cpDampedSpringNew(prevBody, b, cpvzero, cpvzero, cpvdist(prevBody->p, b->p), 300.0f, 0.0f));
					else cpSpaceAddConstraint(space, cpPinJointNew(prevBody, b, cpvzero, cpvzero));
			}
		}
		prevBody = b;
	}

	if (keyPressed(KEY_F6, key[KEY_F6])) emittersUpdate(&emitterRemove);

	/* Exit to menu */
	if (keyPressed(KEY_F12, key[KEY_F12])) {
		editorsPause = false;
		runLevel(&Menu);
	}
	/*if (keyPressed(KEY_F9, key[KEY_F9])) {
		packfile_password(NULL);
		char tmp[128] = "";
		sprintf(tmp, "Bg%i.tga", currentBg);
		save_bitmap(tmp, screen, (PALETTE *)data[rc_palette].dat);
		packfile_password("tesla");
	}*/
}

static void draw(void)
{
	blit((BITMAP *)data[currentBg].dat, buffer, 0, 0, 0, 0, SIZE_X, SIZE_Y);
	/*stretch_blit((BITMAP *)data[currentBg].dat, buffer, 0, 0, 800, 600, 0, 0, 640, 480);*/

	if (key[KEY_C]) draw_trans3((BITMAP *)data[currentBitmap].dat, buffer, SIZE_X/2 - bmp_w(currentBitmap)/2, SIZE_Y/2 - bmp_h(currentBitmap)/2, 230);

	if (key[KEY_V]) {
		stretch_blit((BITMAP *)data[currentBitmap].dat, buffer, 0, 0, bmp_w(currentBitmap), bmp_h(currentBitmap), SIZE_X/2 - bmp_w(currentBitmap)*2, SIZE_Y/2 - bmp_h(currentBitmap)*2, bmp_w(currentBitmap)*4, bmp_h(currentBitmap)*4);
		line(buffer, mlast.x, mlast.y, mouse_x, mouse_y, makeacol(255, 255, 255, 150));
	}

	if (selA) drawRotate((BITMAP *)data[rc_selected].dat, selA->p.x, selA->p.y, cursorAngle, 200);
	if (selB) drawRotate((BITMAP *)data[rc_selfirst].dat, selB->p.x, selB->p.y, cursorAngle + (PI / 4), 200);
}


// --------- //
// Interface //
// --------- //

const kineticArtLevel Editor = {
	1001,
	"Editor",
	"",
	init,
	update,
	draw,
	editorsMouse,
	destroy,
};

