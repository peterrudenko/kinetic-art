
#include "../main.h"

extern kineticArtLevel Menu;
int counter = 0;
#define COUNTER_DELAY 100

static int flyers[] = {rc_gem03r, rc_gem03g, rc_gem03b, rc_gem03v,
					rc_gem06r, rc_gem06v,
					rc_gem10b, rc_gem28r, rc_gem28b, rc_gem28v,
					rc_gem21r, rc_gem21g, rc_gem21b, rc_gem21v, rc_gem21y,
					rc_gem27r, rc_gem27g, rc_gem27b, rc_gem27v, rc_gem27y,
					rc_gem22r, rc_gem22b, rc_gem22v, };


static void init(void)
{
	counter = 0;

	makeSpaces();
	staticBodyInit();
	makeWalls();

	cpSpaceAddCollisionHandler(space, OBJECT_CT, WALL_CT, ccObjectWall, NULL, NULL, NULL, NULL); /* smashed the wall */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, FLOOR_CT, ccObjectWall, NULL, NULL, NULL, NULL); /* smashed the floor */

	clear_to_color(buffer, makeacol(0, 0, 0, 255));
	blit((BITMAP *)data[rc_bg_copy].dat, buffer, 0, 0, 30, 100, SIZE_X, SIZE_Y);

}

static void destroy(void)
{
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, WALL_CT);
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, FLOOR_CT);
	freeSpaces();
}

static void update(void)
{
	counter++;

	if (key[KEY_ESC] || key[KEY_F12] || (mouse_b & 1) || (counter > 7000)) runLevel(&Menu);
	/*if (counter < COUNTER_DELAY) counter++;*/

	if (rand() % 100 < 3 && counter >= COUNTER_DELAY) {
		/*cpBody *body = createPolyUniWrapper(rc_gem01b+rand()%12, 0, 1.0f, 0, cpv(rand()%580+30, rand()%400+40), cpvmult(cpv(rand()%50-25, rand()%50-25), 10.0f), cpvzero, 0, (float)(rand()%20-10), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);*/
		cpBody *body = createPolyUniWrapper(flyers[rand()%(int)(sizeof(flyers)/sizeof(int)-1)], 0, 1.0f, 0, cpv(rand()%550+50, rand()%450+75), cpvmult(cpv(rand()%90-45, rand()%90-45), 15.0f), cpvzero, 0, (float)(rand()%30-15), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);
		body->alpha = FADE_IN;
		if (rand() % 5 < 3) emitterNew(150, 3, (BITMAP *)data[rc_p_big_g].dat, body, underspace); else emitterNew(150, 3, (BITMAP *)data[rc_p_big_r].dat, body, underspace);
	}
}

static void draw(void)
{
}


const kineticArtLevel Author = {
	1100,
	"Made by:",
	"Music/menu.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

