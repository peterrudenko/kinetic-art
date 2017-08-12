
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level37;
extern kineticArtLevel Level39;
#define PREV_LEVEL &Level37
#define NEXT_LEVEL &Level39


static void init(void)
{
	makeSpaces2(cpv(0, 82));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 53, total joints: 56 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(183, 1, 1.0, 88.659334, cpv(186.0, 37.0), cpvzero, cpvzero, 0.0, 2.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(184, 2, 1.0, 88.659334, cpv(226.877176, 71.576672), cpv(3.010307, -1.391232), cpvzero, 0.0, -6.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(183, 3, 1.0, 88.659334, cpv(284.186423, 96.040176), cpv(8.414133, -9.814545), cpvzero, 0.0, 7.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(184, 4, 1.0, 88.659334, cpv(334.186274, 106.185371), cpv(8.614271, -4.571960), cpvzero, 0.0, 8.230000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(183, 5, 1.0, 88.659334, cpv(385.446326, 111.608064), cpv(4.572945, 25.974340), cpvzero, 0.0, -9.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(184, 6, 1.0, 88.659334, cpv(436.668941, 109.901876), cpv(2.790400, 22.013241), cpvzero, 0.0, 7.800000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(183, 7, 1.0, 88.659334, cpv(486.000969, 99.253732), cpv(-6.680035, -10.406982), cpvzero, 0.0, -7.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(184, 8, 1.0, 88.659334, cpv(540.262734, 91.453673), cpv(-10.387361, -22.093545), cpvzero, 0.0, -4.700000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(183, 9, 1.0, 88.659334, cpv(590.722142, 68.121338), cpv(-13.208600, -20.515551), cpvzero, 0.0, -1.290000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(184, 10, 1.0, 88.659334, cpv(628.0, 33.0), cpvzero, cpvzero, 0.0, -8.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(184, 11, 1.0, 88.659334, cpv(48.0, 94.0), cpvzero, cpvzero, 0.0, -1.040000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(185, 12, 1.0, 88.659334, cpv(85.0, 131.0), cpvzero, cpvzero, 0.0, 6.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(183, 13, 1.0, 88.659334, cpv(124.0, 162.0), cpvzero, cpvzero, 0.0, 5.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(184, 14, 1.0, 88.659334, cpv(171.0, 197.0), cpvzero, cpvzero, 0.0, 3.530000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(185, 15, 1.0, 88.659334, cpv(209.0, 222.0), cpvzero, cpvzero, 0.0, -2.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(183, 16, 1.0, 88.659334, cpv(252.0, 244.0), cpvzero, cpvzero, 0.0, 7.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(184, 17, 1.0, 88.659334, cpv(308.0, 261.0), cpvzero, cpvzero, 0.0, -0.450000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(185, 18, 1.0, 88.659334, cpv(354.0, 267.0), cpvzero, cpvzero, 0.0, -3.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(183, 19, 1.0, 88.659334, cpv(408.0, 270.0), cpvzero, cpvzero, 0.0, -2.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(184, 20, 1.0, 88.659334, cpv(455.0, 266.0), cpvzero, cpvzero, 0.0, -7.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(185, 21, 1.0, 88.659334, cpv(507.0, 259.0), cpvzero, cpvzero, 0.0, -9.760000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(183, 22, 1.0, 88.659334, cpv(557.0, 247.0), cpvzero, cpvzero, 0.0, 6.930000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(184, 23, 1.0, 88.659334, cpv(605.0, 229.0), cpvzero, cpvzero, 0.0, 8.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(185, 24, 1.0, 88.659334, cpv(646.0, 205.0), cpvzero, cpvzero, 0.0, 3.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(183, 25, 1.0, 88.659334, cpv(685.0, 169.0), cpvzero, cpvzero, 0.0, -2.680000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(184, 26, 1.0, 88.659334, cpv(716.0, 132.0), cpvzero, cpvzero, 0.0, -6.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(185, 27, 1.0, 88.659334, cpv(739.0, 91.0), cpvzero, cpvzero, 0.0, 1.740000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(191, 28, 1.0, 47.856161, cpv(135.0, 89.0), cpvzero, cpvzero, 0.0, -3.030000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(187, 29, 1.0, 47.856161, cpv(155.0, 116.0), cpvzero, cpvzero, 0.0, -4.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(188, 30, 1.0, 47.856161, cpv(185.0, 139.0), cpvzero, cpvzero, 0.0, 8.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(189, 31, 1.0, 47.856161, cpv(208.0, 150.0), cpvzero, cpvzero, 0.0, 6.150000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(190, 32, 1.0, 47.856161, cpv(241.0, 165.0), cpvzero, cpvzero, 0.0, 3.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(191, 33, 1.0, 47.856161, cpv(274.0, 179.0), cpvzero, cpvzero, 0.0, 8.410000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(187, 34, 1.0, 47.856161, cpv(301.0, 188.0), cpvzero, cpvzero, 0.0, 6.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(188, 35, 1.0, 47.856161, cpv(332.0, 191.0), cpvzero, cpvzero, 0.0, -1.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(189, 36, 1.0, 47.856161, cpv(368.0, 197.0), cpvzero, cpvzero, 0.0, -8.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(190, 37, 1.0, 47.856161, cpv(404.0, 199.0), cpvzero, cpvzero, 0.0, -4.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(191, 38, 1.0, 47.856161, cpv(429.0, 200.0), cpvzero, cpvzero, 0.0, 7.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(187, 39, 1.0, 47.856161, cpv(457.0, 196.0), cpvzero, cpvzero, 0.0, -4.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(188, 40, 1.0, 47.856161, cpv(483.0, 190.0), cpvzero, cpvzero, 0.0, 3.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(189, 41, 1.0, 47.856161, cpv(510.0, 181.0), cpvzero, cpvzero, 0.0, -4.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(190, 42, 1.0, 47.856161, cpv(537.0, 171.0), cpvzero, cpvzero, 0.0, -6.310000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(191, 43, 1.0, 47.856161, cpv(564.0, 155.0), cpvzero, cpvzero, 0.0, -4.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(187, 44, 1.0, 47.856161, cpv(591.0, 139.0), cpvzero, cpvzero, 0.0, -9.410000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(188, 45, 1.0, 47.856161, cpv(613.0, 122.0), cpvzero, cpvzero, 0.0, 3.280000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(189, 46, 1.0, 47.856161, cpv(638.0, 108.0), cpvzero, cpvzero, 0.0, 2.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(190, 47, 1.0, 47.856161, cpv(658.0, 91.0), cpvzero, cpvzero, 0.0, -4.160000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(191, 48, 1.0, 47.856161, cpv(676.0, 72.0), cpvzero, cpvzero, 0.0, -7.770000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(15, 55, 1.0, 183.743659, cpv(408.0, 315.0), cpvzero, cpvzero, 0.0, -7.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(17, 54, 1.0, 183.743659, cpv(556.0, 292.0), cpvzero, cpvzero, 0.0, -7.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(16, 51, 1.0, 183.743659, cpv(122.0, 206.0), cpvzero, cpvzero, 0.0, 6.230000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(16, 52, 1.0, 183.743659, cpv(686.0, 214.0), cpvzero, cpvzero, 0.0, 1.800000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(17, 53, 1.0, 183.743659, cpv(251.0, 287.0), cpvzero, cpvzero, 0.0, 0.460000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(186.0, 37.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 52.773099, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 61.717096, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 50.596443, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 51.244512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 51.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 50.159745, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 54.405882, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 55.009090, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 50.447993, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpvzero, cpv(628.0, 33.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body11, cpv(48.0, 94.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body12, cpvzero, cpvzero, 52.325902, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpvzero, cpvzero, 49.819675, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 58.600341, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 45.486262, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 48.301139, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 58.523500, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 46.389654, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 54.083269, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 47.169906, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 52.469038, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 51.419841, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 51.264022, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 47.507894, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body25, cpvzero, cpvzero, 53.075418, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 48.270074, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body27, cpvzero, cpvzero, 47.010637, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpvzero, cpv(739.0, 91.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body28, cpv(135.0, 89.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpvzero, cpvzero, 33.600595, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 37.802116, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 36.249138, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body33, cpvzero, cpvzero, 35.846897, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body34, cpvzero, cpvzero, 28.460499, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 31.144823, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 36.496575, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 36.055513, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 25.019992, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body39, cpvzero, cpvzero, 28.284271, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body40, cpvzero, cpvzero, 26.683328, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body41, cpvzero, cpvzero, 28.460499, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body42, cpvzero, cpvzero, 28.792360, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body43, cpvzero, cpvzero, 31.384710, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body44, cpvzero, cpvzero, 31.384710, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body45, cpvzero, cpvzero, 27.802878, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body46, cpvzero, cpvzero, 28.653098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body47, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body48, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body48, body0, cpvzero, cpv(676.0, 72.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body25, cpv(1.0, -19.0), cpv(-1.0, 6.0), 20.223748, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body22, cpv(1.0, -19.0), cpv(1.0, 5.0), 21.023796, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body19, cpv(-1.0, -20.0), cpv(-1.0, 6.0), 19.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body16, cpv(0.0, -20.0), cpv(1.0, 6.0), 17.117243, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body13, cpv(1.0, -19.0), cpv(-1.0, 7.0), 18.0, 200.0, 0.0));
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


const kineticArtLevel Level38 = {
	38,
	"Level 38",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

