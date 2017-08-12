
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level72;
extern kineticArtLevel Level74;
#define PREV_LEVEL &Level72
#define NEXT_LEVEL &Level74


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 43, total joints: 47 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(188, 1, 1.0, 47.856161, cpv(277.0, 48.0), cpvzero, cpvzero, -1.211333, -4.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(189, 2, 1.0, 47.856161, cpv(294.384623, 71.034509), cpv(12.819397, -0.830334), cpvzero, 0.237667, -5.060000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(190, 3, 1.0, 47.856161, cpv(311.476808, 93.618257), cpv(7.741997, 9.108688), cpvzero, -2.277000, -1.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(191, 4, 1.0, 47.856161, cpv(331.708336, 112.053036), cpv(-9.616994, 34.138484), cpvzero, 7.505667, -7.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(187, 5, 1.0, 47.856161, cpv(365.963125, 127.985302), cpv(-9.951955, 45.933726), cpvzero, 5.182667, -0.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(188, 6, 1.0, 47.856161, cpv(396.509908, 130.861279), cpv(-0.938914, 1.942534), cpvzero, -3.703000, 3.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(189, 7, 1.0, 47.856161, cpv(427.397455, 128.458208), cpv(4.396589, -3.506008), cpvzero, -7.574667, -1.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(190, 8, 1.0, 47.856161, cpv(456.0, 119.0), cpv(10.558292, 9.382196), cpvzero, -2.629667, -3.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(191, 9, 1.0, 47.856161, cpv(479.387575, 103.986021), cpv(14.158032, 11.562330), cpvzero, 1.249667, 5.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(187, 10, 1.0, 47.856161, cpv(496.615386, 77.154105), cpv(0.046539, 2.713684), cpvzero, 4.201334, -5.780000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(188, 11, 1.0, 47.856161, cpv(514.0, 46.0), cpvzero, cpvzero, 5.343667, 9.880000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(181, 12, 1.0, 88.659334, cpv(396.0, 168.0), cpvzero, cpvzero, 1.530818, -3.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(183, 13, 1.0, 88.659334, cpv(456.0, 157.0), cpvzero, cpvzero, 1.629552, -9.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(183, 14, 1.0, 88.659334, cpv(329.0, 150.0), cpvzero, cpvzero, 1.616220, -1.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(189, 15, 1.0, 47.856161, cpv(129.0, 56.0), cpvzero, cpvzero, 0.0, 8.790000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(190, 16, 1.0, 47.856161, cpv(134.0, 81.0), cpvzero, cpvzero, 0.0, 1.970000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(191, 17, 1.0, 47.856161, cpv(148.0, 106.0), cpvzero, cpvzero, 0.0, -0.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(187, 18, 1.0, 47.856161, cpv(158.0, 129.0), cpvzero, cpvzero, 0.0, -9.680000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(188, 19, 1.0, 47.856161, cpv(172.0, 150.0), cpvzero, cpvzero, 0.0, 4.960000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(189, 20, 1.0, 47.856161, cpv(189.0, 171.0), cpvzero, cpvzero, 0.0, -0.330000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(190, 21, 1.0, 47.856161, cpv(205.0, 191.0), cpvzero, cpvzero, 0.0, -0.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(191, 22, 1.0, 47.856161, cpv(225.0, 208.0), cpvzero, cpvzero, 0.0, -4.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(187, 23, 1.0, 47.856161, cpv(248.0, 220.0), cpvzero, cpvzero, 0.0, 1.030000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(188, 24, 1.0, 47.856161, cpv(270.0, 232.0), cpvzero, cpvzero, 0.0, -3.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(189, 25, 1.0, 47.856161, cpv(295.0, 238.0), cpvzero, cpvzero, 0.0, 7.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(190, 26, 1.0, 47.856161, cpv(322.0, 238.0), cpvzero, cpvzero, 0.0, -0.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(191, 27, 1.0, 47.856161, cpv(347.0, 234.0), cpvzero, cpvzero, 0.0, 1.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(190, 28, 1.0, 47.856161, cpv(443.0, 232.0), cpvzero, cpvzero, 0.0, 7.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(191, 29, 1.0, 47.856161, cpv(466.0, 243.0), cpvzero, cpvzero, 0.0, 5.830000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(187, 30, 1.0, 47.856161, cpv(491.0, 244.0), cpvzero, cpvzero, 0.0, 0.210000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(188, 31, 1.0, 47.856161, cpv(517.0, 243.0), cpvzero, cpvzero, 0.0, -6.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(189, 32, 1.0, 47.856161, cpv(543.0, 234.0), cpvzero, cpvzero, 0.0, -5.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(190, 33, 1.0, 47.856161, cpv(564.0, 221.0), cpvzero, cpvzero, 0.0, -0.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(191, 34, 1.0, 47.856161, cpv(587.0, 206.0), cpvzero, cpvzero, 0.0, 7.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(187, 35, 1.0, 47.856161, cpv(603.0, 186.0), cpvzero, cpvzero, 0.0, -4.740000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(188, 36, 1.0, 47.856161, cpv(619.0, 165.0), cpvzero, cpvzero, 0.0, -6.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(189, 37, 1.0, 47.856161, cpv(631.0, 140.0), cpvzero, cpvzero, 0.0, -8.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(190, 38, 1.0, 47.856161, cpv(641.0, 114.0), cpvzero, cpvzero, 0.0, -3.700000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(191, 39, 1.0, 47.856161, cpv(646.0, 88.0), cpvzero, cpvzero, 0.0, 8.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(187, 40, 1.0, 47.856161, cpv(648.0, 61.0), cpvzero, cpvzero, 0.0, 0.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(14, 41, 1.0, 183.743659, cpv(401.0, 298.0), cpvzero, cpvzero, 0.0, -2.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(185, 42, 1.0, 88.659334, cpv(269.0, 271.0), cpvzero, cpvzero, -1.570796, -9.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(185, 43, 1.0, 88.659334, cpv(519.0, 283.0), cpvzero, cpvzero, -1.570796, -4.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(277.0, 48.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 26.627054, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 25.238859, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 35.735137, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 28.635642, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 29.068884, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 27.856777, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 27.586228, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 29.732137, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpvzero, cpvzero, 33.301652, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body0, cpvzero, cpv(514.0, 46.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body12, cpvzero, cpv(-18.025585, 0.279776), 19.198189, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body8, cpv(-18.027661, 0.058722), cpvzero, 20.024984, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body4, cpv(-18.026841, -0.181631), cpvzero, 20.019984, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body15, cpv(129.0, 56.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 28.653098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 25.238859, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 27.018512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 25.612497, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 25.942244, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body25, cpvzero, cpvzero, 25.709920, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body27, cpvzero, cpvzero, 25.317978, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpvzero, cpv(347.0, 234.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body28, cpv(443.0, 232.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 25.019992, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 25.709920, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body33, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body34, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 25.806976, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 28.635642, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body39, cpvzero, cpvzero, 25.317978, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body40, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body0, cpvzero, cpv(648.0, 61.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body41, cpvzero, cpv(-13.0, -16.0), 63.126856, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body41, cpvzero, cpv(11.0, -16.0), 58.830264, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body43, cpvzero, cpv(18.0, -1.0), 22.022716, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body24, cpv(18.0, -0.0), cpvzero, 21.023796, 100.0, 3.0));
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


const kineticArtLevel Level73 = {
	73,
	"Level 73",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

