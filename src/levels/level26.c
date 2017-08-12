
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level25;
extern kineticArtLevel Level27;
#define PREV_LEVEL &Level25
#define NEXT_LEVEL &Level27


static void init(void)
{
	makeSpaces2(cpv(0, 90));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 53, total joints: 24 */
	int health = 4;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(140, 1, 1.0, inf, cpv(59.0, 284.0), cpvzero, cpvzero, 0.0, -6.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(141, 2, 1.0, inf, cpv(91.0, 284.0), cpvzero, cpvzero, 0.0, 6.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(139, 3, 1.0, inf, cpv(123.0, 282.0), cpvzero, cpvzero, 0.0, -4.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(140, 4, 1.0, inf, cpv(158.0, 281.0), cpvzero, cpvzero, 0.0, 5.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(141, 5, 1.0, inf, cpv(193.0, 281.0), cpvzero, cpvzero, 0.0, 1.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(139, 6, 1.0, inf, cpv(226.0, 281.0), cpvzero, cpvzero, 0.0, 3.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(140, 7, 1.0, inf, cpv(257.0, 282.0), cpvzero, cpvzero, 0.0, -5.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(141, 8, 1.0, inf, cpv(289.0, 282.0), cpvzero, cpvzero, 0.0, 2.080000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(139, 9, 1.0, inf, cpv(319.0, 283.0), cpvzero, cpvzero, 0.0, -1.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(140, 10, 1.0, inf, cpv(352.0, 285.0), cpvzero, cpvzero, 0.0, -6.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(141, 11, 1.0, inf, cpv(383.0, 286.0), cpvzero, cpvzero, 0.0, 0.630000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(139, 12, 1.0, inf, cpv(414.0, 287.0), cpvzero, cpvzero, 0.0, 5.280000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(140, 13, 1.0, inf, cpv(447.0, 287.0), cpvzero, cpvzero, 0.0, 3.760000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(141, 14, 1.0, inf, cpv(479.0, 287.0), cpvzero, cpvzero, 0.0, 8.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(139, 15, 1.0, inf, cpv(510.0, 287.0), cpvzero, cpvzero, 0.0, 4.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(140, 16, 1.0, inf, cpv(541.0, 287.0), cpvzero, cpvzero, 0.0, -5.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(141, 17, 1.0, inf, cpv(575.0, 287.0), cpvzero, cpvzero, 0.0, 0.280000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(139, 18, 1.0, inf, cpv(607.0, 287.0), cpvzero, cpvzero, 0.0, -7.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(140, 19, 1.0, inf, cpv(639.0, 288.0), cpvzero, cpvzero, 0.0, -2.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(141, 20, 1.0, inf, cpv(670.0, 288.0), cpvzero, cpvzero, 0.0, -8.320000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(139, 21, 1.0, inf, cpv(701.0, 288.0), cpvzero, cpvzero, 0.0, -9.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(140, 22, 1.0, inf, cpv(732.0, 289.0), cpvzero, cpvzero, 0.0, -3.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(141, 23, 1.0, inf, cpv(763.0, 289.0), cpvzero, cpvzero, 0.0, 7.620000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(111, 50, 1.0, 63.887283, cpv(136.0, 179.0), cpvzero, cpvzero, 0.0, 1.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(112, 51, 1.0, 63.887283, cpv(152.0, 159.0), cpvzero, cpvzero, 0.0, -1.800000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(113, 52, 1.0, 63.887283, cpv(176.0, 131.0), cpvzero, cpvzero, 0.0, 1.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(114, 53, 1.0, 63.887283, cpv(201.0, 107.0), cpvzero, cpvzero, 0.0, -6.800000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(110, 54, 1.0, 63.887283, cpv(223.0, 92.0), cpvzero, cpvzero, 0.0, 1.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(111, 55, 1.0, 63.887283, cpv(252.0, 77.0), cpvzero, cpvzero, 0.0, -5.770000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(112, 56, 1.0, 63.887283, cpv(281.0, 67.0), cpvzero, cpvzero, 0.0, 5.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(113, 57, 1.0, 63.887283, cpv(311.0, 79.0), cpvzero, cpvzero, 0.0, 5.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(114, 58, 1.0, 63.887283, cpv(316.0, 106.0), cpvzero, cpvzero, 0.0, -1.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(110, 59, 1.0, 63.887283, cpv(312.0, 132.0), cpvzero, cpvzero, 0.0, 8.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(111, 60, 1.0, 63.887283, cpv(310.0, 159.0), cpvzero, cpvzero, 0.0, 1.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(112, 61, 1.0, 63.887283, cpv(318.0, 185.0), cpvzero, cpvzero, 0.0, -4.060000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(113, 62, 1.0, 63.887283, cpv(350.0, 195.0), cpvzero, cpvzero, 0.0, -9.200000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(114, 63, 1.0, 63.887283, cpv(380.0, 184.0), cpvzero, cpvzero, 0.0, 4.450000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(110, 64, 1.0, 63.887283, cpv(409.0, 165.0), cpvzero, cpvzero, 0.0, -1.530000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(111, 65, 1.0, 63.887283, cpv(428.0, 138.0), cpvzero, cpvzero, 0.0, -3.230000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(112, 66, 1.0, 63.887283, cpv(446.0, 117.0), cpvzero, cpvzero, 0.0, 1.710000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(113, 67, 1.0, 63.887283, cpv(474.0, 102.0), cpvzero, cpvzero, 0.0, 2.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(114, 68, 1.0, 63.887283, cpv(503.0, 95.0), cpvzero, cpvzero, 0.0, 2.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(110, 69, 1.0, 63.887283, cpv(529.0, 101.0), cpvzero, cpvzero, 0.0, -1.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(111, 70, 1.0, 63.887283, cpv(530.0, 127.0), cpvzero, cpvzero, 0.0, 1.150000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(112, 71, 1.0, 63.887283, cpv(530.0, 154.0), cpvzero, cpvzero, 0.0, -4.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(113, 72, 1.0, 63.887283, cpv(544.0, 181.0), cpvzero, cpvzero, 0.0, 5.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(114, 73, 1.0, 63.887283, cpv(576.0, 185.0), cpvzero, cpvzero, 0.0, -7.710000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(110, 74, 1.0, 63.887283, cpv(604.0, 171.0), cpvzero, cpvzero, 0.0, -2.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(111, 75, 1.0, 63.887283, cpv(634.0, 154.0), cpvzero, cpvzero, 0.0, 7.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(112, 76, 1.0, 63.887283, cpv(663.0, 141.0), cpvzero, cpvzero, 0.0, -7.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(113, 77, 1.0, 63.887283, cpv(692.0, 127.0), cpvzero, cpvzero, 0.0, -5.240000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(114, 78, 1.0, 63.887283, cpv(724.0, 119.0), cpvzero, cpvzero, 0.0, 9.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(110, 79, 1.0, 63.887283, cpv(754.0, 116.0), cpvzero, cpvzero, 0.0, 7.440000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(59.0, 284.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body0, cpvzero, cpv(763.0, 289.0)));
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
	BGBLIT(rc_bg03)
}


const kineticArtLevel Level26 = {
	26,
	"Level 26",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

