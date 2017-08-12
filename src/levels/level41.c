
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level40;
extern kineticArtLevel Level42;
#define PREV_LEVEL &Level40
#define NEXT_LEVEL &Level42


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 37, total joints: 37 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(118, 1, 1.0, 99.155539, cpv(61.0, 55.0), cpvzero, cpvzero, 0.0, -5.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(117, 2, 1.0, 99.155539, cpv(92.0, 76.0), cpvzero, cpvzero, 0.0, -0.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(118, 3, 1.0, 99.155539, cpv(99.0, 118.0), cpvzero, cpvzero, 0.0, -8.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(117, 4, 1.0, 99.155539, cpv(86.0, 156.0), cpvzero, cpvzero, 0.0, 9.290000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(118, 5, 1.0, 99.155539, cpv(72.0, 195.0), cpvzero, cpvzero, 0.0, 3.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(117, 6, 1.0, 99.155539, cpv(75.0, 239.0), cpvzero, cpvzero, 0.0, -7.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(118, 7, 1.0, 99.155539, cpv(93.0, 273.0), cpvzero, cpvzero, 0.0, -1.250000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(117, 8, 1.0, 99.155539, cpv(740.0, 50.0), cpvzero, cpvzero, 0.0, -6.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(118, 9, 1.0, 99.155539, cpv(703.0, 78.0), cpvzero, cpvzero, 0.0, 5.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(117, 10, 1.0, 99.155539, cpv(687.0, 113.0), cpvzero, cpvzero, 0.0, 7.760000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(118, 11, 1.0, 99.155539, cpv(705.0, 151.0), cpvzero, cpvzero, 0.0, 0.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(117, 12, 1.0, 99.155539, cpv(718.0, 193.0), cpvzero, cpvzero, 0.0, -4.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(118, 13, 1.0, 99.155539, cpv(719.0, 236.0), cpvzero, cpvzero, 0.0, 5.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(117, 14, 1.0, 99.155539, cpv(697.0, 269.0), cpvzero, cpvzero, 0.0, 7.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(116, 15, 1.0, 99.155539, cpv(168.0, 170.0), cpvzero, cpvzero, 0.0, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(115, 16, 1.0, 99.155539, cpv(158.0, 217.0), cpvzero, cpvzero, 0.0, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(116, 17, 1.0, 99.155539, cpv(168.0, 258.0), cpvzero, cpvzero, 0.0, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(115, 18, 1.0, 99.155539, cpv(198.0, 288.0), cpvzero, cpvzero, 0.0, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(116, 19, 1.0, 99.155539, cpv(622.0, 161.0), cpvzero, cpvzero, 0.0, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(115, 20, 1.0, 99.155539, cpv(629.0, 198.0), cpvzero, cpvzero, 0.0, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(116, 21, 1.0, 99.155539, cpv(628.0, 235.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(115, 22, 1.0, 99.155539, cpv(609.0, 265.0), cpvzero, cpvzero, 0.0, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(116, 23, 1.0, 99.155539, cpv(577.0, 290.0), cpvzero, cpvzero, 0.0, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(105, 58, 1.0, 75.803873, cpv(471.0, 193.0), cpvzero, cpvzero, -1.614247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(105, 57, 1.0, 75.803873, cpv(512.0, 128.0), cpvzero, cpvzero, 2.521343, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(106, 47, 1.0, 75.803873, cpv(502.0, 174.0), cpvzero, cpvzero, -2.381830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(106, 48, 1.0, 75.803873, cpv(473.0, 115.0), cpvzero, cpvzero, 1.661456, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(106, 49, 1.0, 75.803873, cpv(441.0, 175.0), cpvzero, cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(106, 50, 1.0, 75.803873, cpv(330.0, 118.0), cpvzero, cpvzero, 2.317752, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(106, 51, 1.0, 75.803873, cpv(269.0, 121.0), cpvzero, cpvzero, 0.507099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(106, 52, 1.0, 75.803873, cpv(304.0, 179.0), cpvzero, cpvzero, -1.665748, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(105, 53, 1.0, 75.803873, cpv(263.0, 165.0), cpvzero, cpvzero, -0.529849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(105, 54, 1.0, 75.803873, cpv(297.0, 94.0), cpvzero, cpvzero, 1.412141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(105, 55, 1.0, 75.803873, cpv(345.0, 158.0), cpvzero, cpvzero, -2.835714, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(105, 56, 1.0, 75.803873, cpv(434.0, 128.0), cpvzero, cpvzero, 0.679414, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(118, 59, 1.0, inf, cpv(302.0, 144.0), cpvzero, cpvzero, 0.0, 3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(118, 60, 1.0, inf, cpv(471.0, 149.0), cpvzero, cpvzero, 3.141593, -3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(61.0, 55.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body8, cpv(740.0, 50.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body13, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body15, cpv(168.0, 170.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body19, cpv(622.0, 161.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body52, body59, cpv(17.113041, -0.379236), cpv(0.0, 18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body50, body59, cpv(15.544856, 0.597879), cpv(17.0, -15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body51, body59, cpv(16.608988, 1.068414), cpv(-19.0, -14.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body54, body59, cpv(19.077353, 1.026938), cpv(-3.0, -31.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body55, body59, cpv(18.971276, 0.301131), cpv(25.0, 8.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body53, body59, cpv(18.354762, 0.320500), cpv(-23.0, 12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body47, body60, cpv(17.0, -0.0), cpv(-18.675010, -13.291259)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body48, body60, cpv(16.0, 0.0), cpv(-0.551428, 18.065709)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body60, cpv(17.0, -0.0), cpv(17.979185, -13.979185)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body58, body60, cpv(20.0, 1.0), cpv(-0.130312, -23.975440)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body57, body60, cpv(19.413356, 0.348743), cpv(-25.0, 10.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body56, body60, cpv(19.209163, -0.089762), cpv(22.0, 9.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body60, body0, cpv(0.0, -0.0), cpv(471.0, 149.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body59, body0, cpvzero, cpv(302.0, 144.0)));
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


const kineticArtLevel Level41 = {
	41,
	"Level 41",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

