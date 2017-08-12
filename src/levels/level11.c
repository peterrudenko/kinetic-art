
#include "../main.h"

extern kineticArtLevel Level10;
extern kineticArtLevel Level12;
#define PREV_LEVEL &Level10
#define NEXT_LEVEL &Level12


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 15, total joints: 15 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(98, 1, 1.0, 355.0, cpv(113.0, 245.0), cpv(-0.0, 0.0), cpvzero, 0.250000, 1.250000, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(99, 2, 1.0, 355.0, cpv(404.0, 263.0), cpv(0.0, -0.0), cpvzero, -2.928571, 0.333333, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(98, 3, 1.0, 355.0, cpv(688.0, 238.0), cpv(-0.0, 0.0), cpvzero, 0.142857, -1.0, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(97, 4, 1.0, 355.0, cpv(543.0, 136.0), cpv(-0.0, -0.0), cpvzero, 1.5, 1.0, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(97, 5, 1.0, 355.0, cpv(239.0, 140.0), cpv(-0.0, -0.0), cpvzero, 0.5, 1.0, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(93, 6, 1.0, 209.2, cpv(401.333333, 367.5), cpv(4.5, 15.0), cpvzero, -1.750000, -0.5, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(92, 7, 1.0, 209.2, cpv(200.142857, 221.0), cpv(9.333333, -28.0), cpvzero, -1.5, 0.100000, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(91, 8, 1.0, 209.2, cpv(271.0, 273.0), cpv(0.0, -23.0), cpvzero, -1.923077, 1.5, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(90, 9, 1.0, 209.2, cpv(82.0, 346.0), cpv(3.333333, -20.0), cpvzero, -1.984375, 1.2, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(89, 10, 1.0, 209.2, cpv(128.111111, 331.0), cpv(12.0, 13.5), cpvzero, -0.966667, -2.5, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(93, 11, 1.0, 209.2, cpv(418.100000, 318.0), cpv(1.0, 13.5), cpvzero, -2.0, 0.0, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(92, 12, 1.0, 209.2, cpv(580.0, 209.0), cpv(1.0, 18.5), cpvzero, -1.5, 0.111111, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(91, 13, 1.0, 209.2, cpv(510.0, 241.0), cpv(0.0, 19.0), cpvzero, -1.5, 0.083333, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(90, 14, 1.0, 209.2, cpv(717.250000, 342.0), cpv(-1.0, 19.0), cpvzero, -1.5, 0.037037, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(89, 15, 1.0, 209.2, cpv(650.076923, 313.0), cpv(0.0, 18.5), cpvzero, -1.5, 0.333333, 0.0, 1.0, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpvzero, cpv(113.0, 245.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpvzero, cpv(239.0, 140.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(404.0, 263.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(543.0, 136.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpvzero, cpv(688.0, 238.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body1, cpv(25.0, 1.0), cpv(32.0, 1.0), 31.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body1, cpv(26.0, 1.0), cpv(-31.0, 1.0), 62.024390, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body5, cpv(26.333333, 0.0), cpv(33.0, 0.0), 68.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body5, cpv(25.0, 1.0), cpv(-31.0, 0.0), 42.166667, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body2, cpv(25.0, 1.0), cpv(1.5, -30.0), 23.002611, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body2, cpv(25.0, 1.0), cpv(0.250000, 33.0), 51.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body4, cpv(26.0, 0.0), cpv(1.333333, -31.990566), 30.2, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body4, cpv(26.0, 1.0), cpv(1.0, 32.166667), 58.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body3, cpv(26.0, 2.0), cpv(-32.0, 1.0), 34.090909, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body3, cpv(26.0, 1.0), cpv(32.250000, 0.5), 55.166667, 10.0, 0.0));
}

}

static void destroy(void)
{
	removeCommonHandlers();
	freeSpaces();
}

static void update(void)
{
	finishHelper();
	if (space->bodies->num == 3 && partspace->bodies->num == 0) runLevel(NEXT_LEVEL);
	if (key[KEY_ESC]) escPause();

	#ifndef RELEASE
	if (key[KEY_F11]) runLevel(PREV_LEVEL);
	if (key[KEY_F12]) runLevel(NEXT_LEVEL);
	#endif
}

static void draw(void)
{
	BGBLIT(rc_bg10)
}


const kineticArtLevel Level11 = {
	11,
	"Level 11",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

