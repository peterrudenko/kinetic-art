
#include "main.h"


// -------------------- //
// Static body && walls //
// -------------------- //

inline void staticBodyInit(void)
{
	if (staticBody) goPanic("staticBody already exists");
	staticBody = cpBodyNew(INFINITY, INFINITY);
	if (!staticBody) goPanic("Error creating staticBody"); /* Erroar here */
}

inline void staticBodyFree(void)
{
	if (!staticBody) goPanic("Error destroying ststicBody");
	cpBodyFree(staticBody);
	staticBody = NULL;
}

static void makeWallsEx(cpSpace *space)
{
	if (!staticBody) goPanic("Error creating walls");

	cpShape *ground1 = cpSegmentShapeNew(staticBody, cpv(0, SIZE_Y+5), cpv(SIZE_X, SIZE_Y+5), 5.0f); /* <<< hmmm... */
	ground1->e = 1.0f; ground1->u = 1.0f; ground1->layers = FLOOR_LAYER; ground1->collision_type = FLOOR_CT;
	cpSpaceAddStaticShape(space, ground1);

	cpShape *ground2 = cpSegmentShapeNew(staticBody, cpv(0, 0), cpv(0, SIZE_Y+5), 2.0f);
	ground2->e = 1.0f; ground2->u = 1.0f; ground2->layers = WALL_LAYER; ground2->collision_type = WALL_CT;
	cpSpaceAddStaticShape(space, ground2);

	cpShape *ground3 = cpSegmentShapeNew(staticBody, cpv(0, 0), cpv(SIZE_X, 0), 2.0f);
	ground3->e = 1.0f; ground3->u = 1.0f; ground3->layers = WALL_LAYER; ground3->collision_type = WALL_CT;
	cpSpaceAddStaticShape(space, ground3);

	cpShape *ground4 = cpSegmentShapeNew(staticBody, cpv(SIZE_X, 0), cpv(SIZE_X, SIZE_Y+5), 2.0f);
	ground4->e = 1.0f; ground4->u = 1.0f; ground4->layers = WALL_LAYER; ground4->collision_type = WALL_CT;
	cpSpaceAddStaticShape(space, ground4);
}

inline void makeWalls(void)
{
	makeWallsEx(space);
	makeWallsEx(partspace);
}


// ------ //
// Spaces //
// ------ //

cpSpace *spaceInit(int iters, cpVect gravity, cpFloat hashDim, int hashCount)
{
	cpSpace *space = cpSpaceNew();
	if (!space) goPanic("Error creating space");
	space->iterations = iters;
	cpSpaceResizeStaticHash(space, hashDim, hashCount);
	cpSpaceResizeActiveHash(space, hashDim, hashCount);
	space->gravity = gravity;
	return space;
}

void spaceFree(cpSpace *space)
{
	int q = space->bodies->num;
	for(int i=0; i<q; i++) {
		cpBody *body = space->bodies->arr[0];
		if (body->id == 0) {
			deleteParticle(body);
		} else {
			/*allegro_message("deleting body: %i", i+1);*/
			bodyFree(body);
		}
	}

	cpSpaceFreeChildren(space); /* just to be sure. */
	cpSpaceFree(space);

	idCounter = 1; /* for the editor */
}

void makeSpaces(void) /* shorthand: spaceInit for all spaces */
{
	space = spaceInit(4, cpv(0, 98), 40.0f, 200);
	partspace = spaceInit(1, cpv(0, 98), 15.0f, 150);
	overspace = spaceInit(1, cpv(0, 98), 10.0f, 20);
	underspace = spaceInit(1, cpv(0, 98), 10.0f, 20);
}

void makeSpaces2(cpVect gravity) /* shorthand: spaceInit for all spaces */
{
	space = spaceInit(4, gravity, 40.0f, 200);
	partspace = spaceInit(1, cpv(0, 98), 15.0f, 150);
	overspace = spaceInit(1, cpv(0, 98), 10.0f, 20);
	underspace = spaceInit(1, cpv(0, 98), 10.0f, 20);
}

void freeSpaces(void) /* shorthand: spaceFree for all spaces */
{
	emittersUpdate(&emitterRemove);
	spaceFree(space);
	spaceFree(partspace);
	spaceFree(overspace);
	spaceFree(underspace);
	staticBodyFree();

	/* and, just in case: */
	Player = NULL;
	Bite = NULL;
	ballJoint = NULL;
	rocketJoint = NULL;
	Rocket = NULL;
}


// ---------------- //
// Om Namah Shivaya //
// ---------------- //

/* main obj-destruction working-horse */
void demolitionFunctionEx(cpBody *body, int cellSize, cpVect offset,
						cpFloat force, int nW, int nH, cpFloat mass,
						cpFloat elast, cpFloat frict)
{
	if (!body) goPanic("No body to destroy");

	cpVect center = cpBodyGetPos(body);
	BITMAP *bitmap = bodyGetBitmap(body);

	if (!bitmap) goPanic("Body to be destroyed has no bitmap data");

	cpFloat qW = bitmap->w, qH = bitmap->h;

	if (cellSize > 0) {
		nW = ceil(qW / cellSize);
		nH = ceil(qH / cellSize);
	}

	/* here comes the math */
	cpFloat qW4 = qW / nW, qH4 = qH / nH;
	cpFloat a = body->a; /* angle */
	cpVect fp = cpvadd(cpvsub(cpvzero, cpv(qW / 2, qH / 2)), cpv(qW4 / 2, qH4 / 2));

	for (int i=0, count=nW; i<count; i++) {
		for (int j=0, count=nH; j<count; j++) {
			cpVect al = cpvadd(cpvrotate(cpvadd(fp, cpv(0, qH4 * j)), body->rot), center);
			cpBody *piece = createBox(partspace, 0, 1, mass, 0, al, cpvzero, cpvzero, a, 0, 0, 0.9f, 0.5f, PIECE_CT, PIECE_LAYER, 1, qW4, qH4);
			cpBodySetVel(piece, cpvadd(offset, cpvmult(cpv(rand()%50-25, rand()%50-25), force)));
			cpVect qH4xy = cpv(0, qH4*j);
			piece->data = create_sub_bitmap(bitmap, cpvadd(fp, qH4xy).x + qW/2 -qW4/2, cpvadd(fp, qH4xy).y + qH/2 -qH4/2, qW4, qH4);
			piece->alpha = 254 - (rand() % 30); /* TODO: adjust this random? */
		}
		fp = cpvadd(fp, cpv(qW4, 0));
	}
}

/* wrapper for common calls */
void demolitionFunction(cpBody *body, int cellSize, cpVect offset,
						cpFloat force, int nW, int nH, cpFloat mass,
						cpFloat elast, cpFloat frict)
{
	demolitionFunctionEx(body, cellSize, offset, force, nW, nH, mass, elast, frict);
	bodyFree(body);
	/*body->alpha = FADE_LOWER_BORDER; [> do not delete directly, just mark for deletion <]*/
}

cpBody *bodyFree(cpBody *body)
{
	if (body && (body != staticBody)) {
		cpSpace *space = body->space;
		cpArray *constraints = space->constraints;

		for (int i=0, count=constraints->num; i<count;) {
			/*allegro_message ("Check for joint #%2i", i);*/
			cpConstraint *joint = ((cpConstraint *)constraints->arr[i]);
			if ((joint->a == body) || (joint->b == body)) {
				cpSpaceRemoveConstraint(space, joint);
				cpConstraintFree(joint);
				/*allegro_message ("Removed joint #%i (was %i, left %i):", i, count, constraints->num);*/
				count = constraints->num;
				i = 0;
			} else {
				i++;
			}
		}

		if (!body->shape) goPanic("Error deleting body with no shape attached");

		/* delete piece's bitmap */
		if (((cpShape *)body->shape)->layers == PIECE_LAYER) {
			destroy_bitmap((BITMAP *)body->data);
		}

		/* iterating linked emitters */
		/*cpArrayEach(emittArr, &emitterDeathEx, body);*/
		for(int i=0, q=emittArr->num; i<q;) {
			kineticEmitter *emitter = (kineticEmitter *)emittArr->arr[i];
			if (body == (cpBody *)emitter->body) {
				emitterRemove(emitter, NULL);
				q = emittArr->num;
				i = 0;
			} else {
				i++;
			}
		}

		cpSpaceRemoveShape(space, (cpShape *)body->shape);
		cpShapeFree((cpShape *)body->shape);

		cpSpaceRemoveBody(space, body);
		cpBodyFree(body);
	}

	if (body != staticBody) return NULL;
}


// ------------------ //
// Deletion callbacks //
// ------------------ //

void postStepPlayerFail(cpSpace *s, cpShape *shape, void *unused)
{
	if (!shape) goPanic("Cannot access shape");

	for(int i=0; i<6; i++) {
		effects[i] = 1;
	}

	/* R.I.P. nasty bug */
	if (ballJoint) {
		cpSpaceRemoveConstraint(space, ballJoint);
		cpConstraintFree(ballJoint);
		ballJoint = NULL;
	}

	if (--settings.lives <= 0) {
		if (!gameOver) {
			cpBody *note = createBox(overspace, rc_msg_gameover, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
			note->alpha = FADE_IN - 17;
			play_sample((SAMPLE *)data[rc_gameover].dat, getRandSndVol(), 128, 990+rand()%20, 0);
			/*emittersUpdate(&emitterRemove);*/
			for(int i=0, q=space->bodies->num; i<q;) {
				cpBody *body = space->bodies->arr[i];
				/*if (body->id != 0) {*/
				if (body != mouseBody) {
					demolitionFunction(body, 0, cpBodyGetVel(body), 5.5f, 2, 2, 0.5f, 1.0f, 1.0f);
					if (q!=space->bodies->num+1) goPanic("Unexpected behaviour");
					q = space->bodies->num;
					i = 0;
				} else {
					i++;
				}
			}
			gameOver = true;
		}
	} else {
		demolitionFunctionEx(shape->body, 0, cpBodyGetVel(shape->body), 5.5f, 7, 7, 0.5f, 1.0f, 1.0f);
		shape->body->p = cpvadd(Bite->p, cpv(0, -20));
		levelStarted = false;
	}

	SHOCKWAVE
}

void postStepRemove(cpSpace *space, cpShape *shape, void *unused)
{
	if (shape->body) demolitionFunction(shape->body, 5+rand()%3, cpBodyGetVel(shape->body), 3.5f, 7, 7, 0.5f, 1.0f, 1.0f);
}

void postStepRemoveSmash(cpSpace *space, cpShape *shape, void *unused)
{
	if (shape->body) demolitionFunction(shape->body, 5+rand()%3, cpBodyGetVel(shape->body), 9.0f, 7, 7, 0.5f, 1.0f, 1.0f);
}


// ------- //
// Objects //
// ------- //

inline void createRocket()
{
	if (Rocket || rocketJoint) goPanic("Rocket already created");
	Rocket = createCircle(space, rc_b_rocket, 0, 0.22f, INFINITY, cpvadd(Bite->p, cpv(0, -20)), cpvzero, cpvzero, 0, 0.0f, 0, 0.0f, 1.0f, ROCKET_CT, ROCKET_LAYER, 13, 0);
	Rocket->alpha = FADE_IN;
	emitterNew(-1, 1, (BITMAP *)data[rc_p_std_y].dat, Rocket, underspace);
	emitterNew(-1, 2, (BITMAP *)data[rc_p_big_r].dat, Rocket, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_sml_y].dat, Rocket, underspace);
	rocketJoint = cpSpaceAddConstraint(space, cpDampedSpringNew(Bite, Rocket, cpvzero, cpvzero, 0.0f, 99.9f, 0.0f));
}

cpBody *createBox(cpSpace *space, uint bitmap, uint id, cpFloat m, cpFloat i,
					cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w,
					cpFloat t, cpFloat e, cpFloat u, int ct, int layers,
					uchar health, cpFloat width, cpFloat height)
{
	if (!space) goPanic("Object creation failure - no space given.");

	if (width == 0) width = ((BITMAP *)data[bitmap].dat)->w;
	if (height == 0) height = ((BITMAP *)data[bitmap].dat)->h;

	cpVect verts[] = {
		cpv(-width/2, -height/2),
		cpv(-width/2, height/2),
		cpv(width/2, height/2),
		cpv(width/2, -height/2),
	};

	cpBody *body = cpSpaceAddBody(space, cpBodyNew(m, cpMomentForPoly(m, 4, verts, cpvzero)));
	if (!body) goPanic("Memory allocation failure.");

	if (i != 0) cpBodySetMoment(body, i);
	cpBodySetAngle(body, a);
	body->w = w;
	body->t = t;
	body->p = p;
	body->v = v;
	body->f = f;
	body->health = health;
	body->alpha = 255;	// = 255 for normal alpha,
						// = FADE_IN (defined to 507) - for quick fade in,
						// < 255 for fade out.

	cpShape *shape = cpSpaceAddShape(space, cpPolyShapeNew(body, 4, verts, cpvzero));
	if (!shape) goPanic("Memory allocation failure.");

    shape->e = e;
	shape->u = u;
	shape->collision_type = ct;
	shape->layers = layers;

	body->shape = shape;
	body->bitmap = bitmap;
	body->id = (id == 0) ? idCounter++ : id;

	return body;

}

cpBody *createCircle(cpSpace *space, uint bitmap, uint id, cpFloat m, cpFloat i,
					cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w,
					cpFloat t, cpFloat e, cpFloat u, int ct, int layers,
					uchar health, cpFloat radius)
{
	if (!space) goPanic("Object creation failure - no space given.");

	if (radius == 0) radius = (((BITMAP *)data[bitmap].dat)->w + ((BITMAP *)data[bitmap].dat)->w) / 4;

	cpBody *body = cpSpaceAddBody(space, cpBodyNew(m, cpMomentForCircle(m, 0.0f, radius, cpvzero)));
	if (!body) goPanic("Memory allocation failure.");

	if (i != 0) cpBodySetMoment(body, i);
	cpBodySetAngle(body, a);
	body->w = w;
	body->t = t;
	body->p = p;
	body->v = v;
	body->f = f;
	body->alpha = 255;
	body->health = health;

	cpShape *shape = cpSpaceAddShape(space, cpCircleShapeNew(body, radius, cpvzero));
	if (!shape) goPanic("Memory allocation failure.");

    shape->e = e;
	shape->u = u;
	shape->collision_type = ct;
	shape->layers = layers;

	body->shape = shape;
	body->bitmap = bitmap;
	body->id = (id == 0) ? idCounter++ : id;

	return body;

}

cpBody *createPoly(cpSpace *space, uint bitmap, uint id, cpFloat m, cpFloat i,
					cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w,
					cpFloat t, cpFloat e, cpFloat u, int ct, int layers,
					uchar health, cpVect *verts, int numverts)
{
	if (!space) goPanic("Object creation failure - no space given.");

	cpBody *body = cpSpaceAddBody(space, cpBodyNew(m, cpMomentForPoly(m, numverts, verts, cpvzero)));
	if (!body) goPanic("Memory allocation failure.");

	if (i != 0) cpBodySetMoment(body, i);
	cpBodySetAngle(body, a);
	body->w = w;
	body->t = t;
	body->p = p;
	body->v = v;
	body->f = f;
	body->health = health;
	body->alpha = (currentLevel->id == 1001) ? 255 : FADE_IN; /* no fading-in in the editor */

	cpShape *shape = cpSpaceAddShape(space, cpPolyShapeNew(body, numverts, verts, cpvzero));
	if (!shape) goPanic("Memory allocation failure.");

    shape->e = e;
	shape->u = u;
	shape->collision_type = ct;
	shape->layers = layers;

	body->shape = shape;
	body->bitmap = bitmap;
	body->id = (id == 0) ? idCounter++ : id;

	return body;

}


// ----------------------- //
// Shorthand poly creators //
// ----------------------- //

cpBody *createGem02(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(8.75, -14.00), cpv(-9.00, -14.00), cpv(-14.25, -7.50), cpv(-13.75, 1.75), cpv(-7.00, 11.00), cpv(-0.50, 15.25), cpv(5.50, 13.00), cpv(14.75, 0.75), cpv(14.50, -10.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem03(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(11.25, -19.00), cpv(-11.50, -19.00), cpv(-19.00, -11.50), cpv(-19.00, -0.75), cpv(-11.00, 11.25), cpv(0.00, 19.50), cpv(10.75, 12.25), cpv(18.75, -0.25), cpv(18.75, -11.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem04(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.25, -23.00), cpv(-12.25, 3.50), cpv(-11.75, 15.25), cpv(-5.00, 21.75), cpv(4.50, 21.75), cpv(11.25, 15.25), cpv(11.50, 1.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem05(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(10.75, -28.00), cpv(-10.50, -28.00), cpv(-30.25, -24.50), cpv(-22.75, -1.50), cpv(-10.25, 17.00), cpv(0.50, 28.25), cpv(13.25, 14.00), cpv(24.25, -5.50), cpv(30.25, -24.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem06(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(5.00, -15.50), cpv(-4.50, -15.50), cpv(-13.75, -10.25), cpv(-22.50, -1.75), cpv(0.50, 16.00), cpv(22.50, -1.50), cpv(14.00, -10.25) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem07(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(7.75, -15.75), cpv(-8.25, -16.25), cpv(-15.75, -8.50), cpv(-16.00, 6.50), cpv(-8.25, 15.75), cpv(8.00, 15.75), cpv(16.00, 8.50), cpv(16.00, -8.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem08(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(16.25, -23.50), cpv(-16.00, -23.50), cpv(-28.75, -13.00), cpv(0.00, 23.75), cpv(28.50, -12.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem09(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(10.00, -13.50), cpv(-9.75, -13.50), cpv(-17.00, -7.50), cpv(0.25, 14.00), cpv(16.75, -7.25) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem10(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(13.25, -14.50), cpv(-12.75, -14.50), cpv(-24.50, -4.50), cpv(0.25, 15.00), cpv(25.00, -4.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem11(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.75, -16.25), cpv(-10.75, -11.75), cpv(-16.25, 0.25), cpv(-11.25, 11.75), cpv(0.75, 16.25), cpv(12.25, 12.00), cpv(16.75, 0.50), cpv(12.00, -11.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem12(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p, /* very unclear */
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(-2.75, -41.50), cpv(-24.50, -36.00), cpv(-33.75, -0.25), cpv(-12.75, 41.00), cpv(23.00, 31.50), cpv(32.75, -12.75), cpv(23.50, -34.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem13(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p, /* too complex */
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(4.25, -21.00), cpv(-3.50, -21.00), cpv(-10.50, -14.00), cpv(-15.50, 0.25), cpv(-15.50, 8.75), cpv(-11.00, 16.25), cpv(-5.75, 20.75), cpv(5.50, 21.00), cpv(12.00, 17.25), cpv(16.00, 10.00), cpv(15.75, -3.75), cpv(11.50, -14.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem14(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(13.50, -14.25), cpv(-13.50, -14.75), cpv(-24.75, -4.50), cpv(0.50, 16.50), cpv(25.00, -4.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem15(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.50, -16.25), cpv(-16.75, 0.25), cpv(0.25, 16.75), cpv(17.00, 0.75) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem16(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(-0.25, -11.25), cpv(-19.00, -9.00), cpv(-33.25, 0.00), cpv(-20.75, 8.50), cpv(-1.25, 12.25), cpv(19.50, 8.75), cpv(32.75, 0.50), cpv(22.00, -7.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem17(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p, /* melkiy */
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.25, -10.75), cpv(-9.25, -7.00), cpv(-8.75, 4.75), cpv(0.25, 11.00), cpv(9.75, 5.00), cpv(10.00, -6.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem18(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(7.25, -7.25), cpv(-7.25, -7.50), cpv(-14.50, 0.25), cpv(-7.75, 7.75), cpv(7.50, 7.75), cpv(14.50, 1.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem19(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.25, -14.75), cpv(-16.00, -11.25), cpv(-26.00, -0.50), cpv(-20.00, 8.75), cpv(-9.50, 14.00), cpv(11.50, 14.00), cpv(21.75, 8.75), cpv(25.25, 1.25), cpv(23.00, -6.75), cpv(13.00, -12.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}
/* #20 == Circle */
cpBody *createGem21(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(-10.00, -15.75), cpv(-17.50, -13.50), cpv(-24.50, -5.75), cpv(-24.50, 6.00), cpv(-19.50, 12.75), cpv(-10.00, 16.50), cpv(2.75, 14.75), cpv(17.25, 7.75), cpv(25.75, 0.50), cpv(14.25, -8.50), cpv(0.50, -14.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem22(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.50, -20.75), cpv(-20.50, 0.00), cpv(0.50, 20.75), cpv(20.75, 0.25) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem23(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.25, -32.50), cpv(-32.25, 0.25), cpv(0.50, 33.00), cpv(32.75, 0.25) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem24(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(7.00, -15.75), cpv(-6.25, -16.00), cpv(-16.00, -12.25), cpv(-13.75, 0.25), cpv(-6.75, 11.00), cpv(0.25, 16.75), cpv(8.75, 10.00), cpv(15.75, -3.00), cpv(16.50, -11.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem25(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(7.75, -9.75), cpv(-8.00, -10.25), cpv(-8.00, 9.50), cpv(7.75, 10.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem26(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(15.25, -0.50), cpv(6.25, -6.75), cpv(-6.75, -10.25), cpv(-14.50, -4.75), cpv(-15.00, 3.75), cpv(-10.50, 8.50), cpv(0.00, 9.25), cpv(8.75, 6.00) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem27(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(6.25, -11.50), cpv(-7.00, -11.25), cpv(-11.25, -6.00), cpv(-10.75, 1.00), cpv(-6.25, 7.00), cpv(0.25, 11.75), cpv(7.00, 6.25), cpv(11.00, -0.25), cpv(11.00, -6.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem28(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(11.25, -18.50), cpv(-12.25, -18.50), cpv(-22.00, -10.50), cpv(-1.00, 16.75), cpv(21.50, -10.25) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem29(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.50, -14.50), cpv(-15.75, -12.00), cpv(-9.25, 3.50), cpv(-0.50, 14.25), cpv(8.75, 4.25), cpv(15.00, -11.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem38(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(6.00, -12.25), cpv(-6.00, -12.50), cpv(-12.25, -8.50), cpv(-12.00, -0.50), cpv(-5.50, 9.50), cpv(-0.25, 13.00), cpv(6.50, 8.25), cpv(12.75, -1.25), cpv(12.75, -8.75) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem39(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.00, -11.75), cpv(-12.00, -8.50), cpv(-7.25, 3.25), cpv(-0.50, 10.75), cpv(7.00, 3.50), cpv(10.75, -7.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem40(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(7.00, -8.25), cpv(-7.50, -8.50), cpv(-15.25, -2.50), cpv(-14.25, 3.50), cpv(-7.50, 7.75), cpv(7.25, 8.50), cpv(15.00, 3.00), cpv(14.25, -3.75) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem41(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(8.00, -7.25), cpv(-8.75, -7.25), cpv(-19.50, -0.50), cpv(-10.00, 7.00), cpv(7.25, 7.00), cpv(19.25, 0.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem42(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(0.00, -11.75), cpv(-11.25, 0.25), cpv(0.25, 12.25), cpv(12.50, 0.75) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}

cpBody *createGem43(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(8.75, -9.50), cpv(-9.50, -9.50), cpv(-15.75, -2.75), cpv(-0.50, 9.75), cpv(15.75, -2.50) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}


// ----------- //
// gem creator //
// ----------- //

cpBody *createPolyUniWrapper(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
							cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
							cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	switch (bitmap) {
	case rc_gem01r:
	case rc_gem01g:
	case rc_gem01b:
	case rc_gem01y:
	case rc_gem01v:
		return createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_h(bitmap)/2-2);
		break;
	case rc_gem02a:
	case rc_gem02b:
	case rc_gem02c:
	case rc_gem02d:
	case rc_gem02e:
		return createGem02(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem03r:
	case rc_gem03g:
	case rc_gem03b:
	case rc_gem03y:
	case rc_gem03v:
	case rc_gem03b1:
	case rc_gem03b2:
	case rc_gem03g1:
	case rc_gem03r1:
		return createGem03(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem05r:
	case rc_gem05g:
	case rc_gem05b:
	case rc_gem05y:
	case rc_gem05v:
		return createGem05(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem06r:
	case rc_gem06g:
	case rc_gem06b:
	case rc_gem06y:
	case rc_gem06v:
		return createGem06(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem07r:
	case rc_gem07g:
	case rc_gem07b:
	case rc_gem07y:
	case rc_gem07v:
		return createGem07(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem08r:
	case rc_gem08g:
	case rc_gem08b:
	case rc_gem08y:
	case rc_gem08v:
		return createGem08(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem09r:
	case rc_gem09g:
	case rc_gem09b:
	case rc_gem09y:
	case rc_gem09v:
		return createGem09(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem10r:
	case rc_gem10g:
	case rc_gem10b:
	case rc_gem10y:
	case rc_gem10v:
		return createGem10(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem11b:
	case rc_gem11m:
		return createGem11(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem13r:
	case rc_gem13y:
		return createGem13(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem14b:
	case rc_gem14r:
		return createGem14(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem15r:
	case rc_gem15g:
	case rc_gem15b:
	case rc_gem15y:
	case rc_gem15v:
		return createGem15(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem16r:
	case rc_gem16g:
	case rc_gem16b:
	case rc_gem16y:
	case rc_gem16v:
	case rc_gem16m:
		return createGem16(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem17r:
		return createGem17(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem18r:
	case rc_gem18g:
	case rc_gem18b:
	case rc_gem18y:
	case rc_gem18v:
		return createGem18(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem19r:
	case rc_gem19g:
	case rc_gem19b:
	case rc_gem19y:
	case rc_gem19v:
		return createGem19(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem20r:
	case rc_gem20b:
	case rc_gem20v:
		return createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_h(bitmap)/2-2);
		break;
	case rc_gem21r:
	case rc_gem21g:
	case rc_gem21b:
	case rc_gem21y:
	case rc_gem21v:
		return createGem21(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem22r:
	case rc_gem22b:
	case rc_gem22v:
		return createGem22(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem23r:
	case rc_gem23b:
	case rc_gem23v:
		return createGem23(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem24r:
	case rc_gem24g:
	case rc_gem24y:
		return createGem24(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem25g:
	case rc_gem25y:
		return createGem25(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem26r:
	case rc_gem26g:
	case rc_gem26b:
	case rc_gem26y:
	case rc_gem26v:
		return createGem26(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem27r:
	case rc_gem27g:
	case rc_gem27b:
	case rc_gem27y:
	case rc_gem27v:
		return createGem27(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem28r:
	case rc_gem28g:
	case rc_gem28b:
	case rc_gem28y:
	case rc_gem28v:
		return createGem28(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem29r:
	case rc_gem29g:
	case rc_gem29b:
	case rc_gem29y:
	case rc_gem29v:
		return createGem29(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem30r:
	case rc_gem30g:
	case rc_gem30b:
	case rc_gem30v:
	case rc_gem30y:
		return createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_h(bitmap)/2-1);
		break;
	case rc_gem33a:
	case rc_gem33b:
	case rc_gem33c:
	case rc_gem33d:
	case rc_gem33e:
	case rc_gem33f:
		return createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_h(bitmap)/2-1);
		break;
	case rc_gem35a:
	case rc_gem35b:
	case rc_gem35c:
	case rc_gem35d:
	case rc_gem35e:
	case rc_gem35f:
	case rc_gem35g:
	case rc_gem35h:
	case rc_gem35i:
	case rc_gem35j:
	case rc_gem35k:
		return createBox(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_w(bitmap)-1, bmp_h(bitmap)-1);
		break;
	case rc_gem36a:
	case rc_gem36b:
	case rc_gem36c:
	case rc_gem36d:
	case rc_gem36e:
	case rc_gem36f:
	case rc_gem36g:
	case rc_gem36h:
	case rc_gem36i:
	case rc_gem36j:
		return createBox(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_w(bitmap)-2, bmp_h(bitmap)-2);
		break;
	case rc_gem37a:
	case rc_gem37b:
	case rc_gem37c:
	case rc_gem37d:
	case rc_gem37e:
	case rc_gem37f:
	case rc_gem37g:
	case rc_gem37h:
	case rc_gem37i:
	case rc_gem37j:
	case rc_gem37k:
		return createBox(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_w(bitmap)-1, bmp_h(bitmap)-1);
		break;
	case rc_gem38a:
	case rc_gem38b:
	case rc_gem38c:
	case rc_gem38d:
	case rc_gem38e:
	case rc_gem38f:
		return createGem38(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem39a:
	case rc_gem39b:
	case rc_gem39c:
	case rc_gem39d:
	case rc_gem39e:
	case rc_gem39f:
		return createGem39(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem40a:
	case rc_gem40b:
	case rc_gem40c:
	case rc_gem40d:
	case rc_gem40e:
	case rc_gem40f:
		return createGem40(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem41a:
	case rc_gem41b:
	case rc_gem41c:
	case rc_gem41d:
	case rc_gem41e:
	case rc_gem41f:
		return createGem41(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem42a:
	case rc_gem42b:
	case rc_gem42c:
	case rc_gem42d:
	case rc_gem42e:
	case rc_gem42f:
		return createGem42(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	case rc_gem43a:
	case rc_gem43b:
	case rc_gem43c:
	case rc_gem43d:
	case rc_gem43e:
	case rc_gem43f:
		return createGem43(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health);
		break;
	default:
		return createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, bmp_h(bitmap)/2);
		;
	}
}

