
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level46;
extern kineticArtLevel Level48;
#define PREV_LEVEL &Level46
#define NEXT_LEVEL &Level48


static void init(void)
{
	makeSpaces2(cpv(0, 70));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 27, total joints: 27 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(187, 1, 1.0, 47.856161, cpv(238.0, 29.0), cpvzero, cpvzero, 0.0, -3.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(188, 2, 1.0, 47.856161, cpv(243.0, 54.0), cpvzero, cpvzero, 0.0, 2.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(189, 3, 1.0, 47.856161, cpv(259.0, 76.0), cpvzero, cpvzero, 0.0, 3.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(190, 4, 1.0, 47.856161, cpv(279.0, 94.0), cpvzero, cpvzero, 0.0, -6.120000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(191, 5, 1.0, 47.856161, cpv(303.0, 107.0), cpvzero, cpvzero, 0.0, 0.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(187, 6, 1.0, 47.856161, cpv(328.0, 114.0), cpvzero, cpvzero, 0.0, -6.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(188, 7, 1.0, 47.856161, cpv(355.0, 114.0), cpvzero, cpvzero, 0.0, 0.460000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(189, 8, 1.0, 47.856161, cpv(383.0, 114.0), cpvzero, cpvzero, 0.0, -9.120000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(190, 9, 1.0, 47.856161, cpv(409.0, 114.0), cpvzero, cpvzero, 0.0, 3.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(191, 10, 1.0, 47.856161, cpv(434.0, 108.0), cpvzero, cpvzero, 0.0, 6.320000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(187, 11, 1.0, 47.856161, cpv(456.0, 95.0), cpvzero, cpvzero, 0.0, -2.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(188, 12, 1.0, 47.856161, cpv(477.0, 81.0), cpvzero, cpvzero, 0.0, -2.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(189, 13, 1.0, 47.856161, cpv(494.0, 62.0), cpvzero, cpvzero, 0.0, -8.620000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(190, 14, 1.0, 47.856161, cpv(501.0, 37.0), cpvzero, cpvzero, 0.0, 3.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(189, 15, 1.0, 47.856161, cpv(514.0, 196.0), cpvzero, cpvzero, 0.0, -6.680000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(190, 16, 1.0, 47.856161, cpv(497.0, 218.0), cpvzero, cpvzero, 0.0, 5.080000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(191, 17, 1.0, 47.856161, cpv(476.0, 233.0), cpvzero, cpvzero, 0.0, -2.440000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(187, 18, 1.0, 47.856161, cpv(450.0, 238.0), cpvzero, cpvzero, 0.0, -4.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(188, 19, 1.0, 47.856161, cpv(424.0, 238.0), cpvzero, cpvzero, 0.0, -9.140000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(189, 20, 1.0, 47.856161, cpv(398.0, 238.0), cpvzero, cpvzero, 0.0, -8.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(190, 21, 1.0, 47.856161, cpv(371.0, 238.0), cpvzero, cpvzero, 0.0, 4.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(191, 22, 1.0, 47.856161, cpv(345.0, 238.0), cpvzero, cpvzero, 0.0, -0.760000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(187, 23, 1.0, 47.856161, cpv(316.0, 238.0), cpvzero, cpvzero, 0.0, 5.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(188, 24, 1.0, 47.856161, cpv(289.0, 238.0), cpvzero, cpvzero, 0.0, 7.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(189, 25, 1.0, 47.856161, cpv(264.0, 236.0), cpvzero, cpvzero, 0.0, -5.960000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(190, 26, 1.0, 47.856161, cpv(241.0, 223.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(191, 27, 1.0, 47.856161, cpv(222.0, 204.0), cpvzero, cpvzero, 0.0, 8.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(238.0, 29.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body8, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body13, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body15, cpv(514.0, 196.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body24, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body27, cpvzero, cpvzero));
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
	BGBLIT(rc_bg22)
}


const kineticArtLevel Level47 = {
	47,
	"Level 47",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

