
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level20;
extern kineticArtLevel Level22;
#define PREV_LEVEL &Level20
#define NEXT_LEVEL &Level22


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 31, total joints: 31 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(16, 1, 1.0, 183.743659, cpv(245.0, 110.0), cpvzero, cpvzero, 0.0, -30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(16, 2, 1.0, 183.743659, cpv(562.0, 115.0), cpvzero, cpvzero, 0.0, -30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(15, 3, 1.0, 183.743659, cpv(92.0, 71.0), cpvzero, cpvzero, 0.0, 30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(15, 4, 1.0, 183.743659, cpv(403.0, 69.0), cpvzero, cpvzero, 0.0, 30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(15, 5, 1.0, 183.743659, cpv(704.0, 80.0), cpvzero, cpvzero, 0.0, 30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(66, 6, 1.0, 93.009818, cpv(92.0, 114.0), cpvzero, cpvzero, 0.0, 9.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(66, 7, 1.0, 93.009818, cpv(703.0, 125.0), cpvzero, cpvzero, 0.0, -9.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(67, 8, 1.0, 93.009818, cpv(92.0, 160.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(67, 9, 1.0, 93.009818, cpv(703.0, 169.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(68, 10, 1.0, 93.009818, cpv(94.0, 299.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(68, 11, 1.0, 93.009818, cpv(706.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(66, 12, 1.0, 93.009818, cpv(93.0, 254.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(66, 13, 1.0, 93.009818, cpv(705.0, 259.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(65, 14, 1.0, 93.009818, cpv(93.0, 207.0), cpvzero, cpvzero, 0.0, -30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(65, 15, 1.0, 93.009818, cpv(704.0, 213.0), cpvzero, cpvzero, 0.0, 30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(64, 16, 1.0, 93.009818, cpv(94.0, 345.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(64, 17, 1.0, 93.009818, cpv(706.0, 348.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(64, 18, 1.0, 93.009818, cpv(246.0, 286.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(64, 19, 1.0, 93.009818, cpv(565.0, 289.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(64, 20, 1.0, 93.009818, cpv(406.0, 342.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(68, 21, 1.0, 93.009818, cpv(246.0, 245.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(68, 22, 1.0, 93.009818, cpv(405.0, 206.0), cpvzero, cpvzero, 0.0, -30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(68, 23, 1.0, 93.009818, cpv(563.0, 243.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(65, 24, 1.0, 93.009818, cpv(246.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(65, 25, 1.0, 93.009818, cpv(562.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(68, 26, 1.0, 93.009818, cpv(245.0, 156.0), cpvzero, cpvzero, 0.0, -9.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(68, 27, 1.0, 93.009818, cpv(561.0, 161.0), cpvzero, cpvzero, 0.0, 9.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(67, 28, 1.0, 93.009818, cpv(403.0, 117.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(64, 29, 1.0, 93.009818, cpv(405.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(65, 30, 1.0, 93.009818, cpv(404.0, 162.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(66, 31, 1.0, 93.009818, cpv(405.0, 297.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body0, cpv(0.0, -19.0), cpv(92.0, 39.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body0, cpv(0.0, -20.0), cpv(403.0, 38.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body0, cpv(0.0, -20.0), cpv(704.0, 47.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body0, cpv(0.0, -20.0), cpv(245.0, 77.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body0, cpv(-1.0, -20.0), cpv(561.0, 80.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body3, cpv(0.0, -14.0), cpv(-1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body6, cpv(0.0, -15.0), cpv(-1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body8, cpv(0.0, -15.0), cpv(1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body14, cpv(0.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body12, cpv(-1.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body10, cpv(0.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body5, cpv(0.0, -15.0), cpv(-1.0, 18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body7, cpv(0.0, -15.0), cpv(0.0, 14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body9, cpv(-1.0, -15.0), cpv(1.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body15, cpv(0.0, -15.0), cpv(0.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body13, cpv(-1.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body11, cpv(0.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body4, cpv(0.0, -16.0), cpv(0.0, 18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body28, cpv(-1.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body30, cpv(0.0, -15.0), cpv(0.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body22, cpv(0.0, -16.0), cpv(1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body29, cpv(0.0, -16.0), cpv(0.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body31, cpv(0.0, -15.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body2, cpv(0.0, -15.0), cpv(-1.0, 19.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body27, cpv(0.0, -14.0), cpv(0.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body25, cpv(0.0, -14.0), cpv(2.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body23, cpv(0.0, -16.0), cpv(1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body1, cpv(-1.0, -14.0), cpv(0.0, 17.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body26, cpv(-1.0, -16.0), cpv(1.0, 12.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body24, cpv(0.0, -15.0), cpv(1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body21, cpv(0.0, -15.0), cpv(0.0, 16.0)));
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
	BGBLIT(rc_bg18)
}


const kineticArtLevel Level21 = {
	21,
	"Level 21",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

