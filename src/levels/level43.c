
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level42;
extern kineticArtLevel Level44;
#define PREV_LEVEL &Level42
#define NEXT_LEVEL &Level44


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 62, total joints: 62 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(148, 1, 1.0, 85.083333, cpv(105.0, 47.0), cpvzero, cpvzero, 0.0, 8.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(149, 2, 1.0, 85.083333, cpv(84.0, 66.0), cpvzero, cpvzero, 0.0, -8.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(150, 3, 1.0, 85.083333, cpv(76.0, 95.0), cpvzero, cpvzero, 0.0, 5.230000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(151, 4, 1.0, 85.083333, cpv(76.0, 122.0), cpvzero, cpvzero, 0.0, -0.630000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(147, 5, 1.0, 85.083333, cpv(89.0, 144.0), cpvzero, cpvzero, 0.0, -6.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(148, 6, 1.0, 85.083333, cpv(105.0, 167.0), cpvzero, cpvzero, 0.0, -2.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(149, 7, 1.0, 85.083333, cpv(117.0, 190.0), cpvzero, cpvzero, 0.0, 9.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(150, 8, 1.0, 85.083333, cpv(121.0, 215.0), cpvzero, cpvzero, 0.0, 0.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(151, 9, 1.0, 85.083333, cpv(121.0, 242.0), cpvzero, cpvzero, 0.0, -2.210000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(147, 10, 1.0, 85.083333, cpv(110.0, 267.0), cpvzero, cpvzero, 0.0, 3.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(148, 11, 1.0, 85.083333, cpv(100.0, 293.0), cpvzero, cpvzero, 0.0, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(149, 12, 1.0, 85.083333, cpv(89.0, 318.0), cpvzero, cpvzero, 0.0, 3.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(150, 13, 1.0, 85.083333, cpv(670.0, 47.0), cpvzero, cpvzero, 0.0, 5.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(151, 14, 1.0, 85.083333, cpv(688.0, 66.0), cpvzero, cpvzero, 0.0, 2.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(147, 15, 1.0, 85.083333, cpv(696.0, 91.0), cpvzero, cpvzero, 0.0, -3.030000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(148, 16, 1.0, 85.083333, cpv(698.0, 116.0), cpvzero, cpvzero, 0.0, 1.690000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(149, 17, 1.0, 85.083333, cpv(698.0, 143.0), cpvzero, cpvzero, 0.0, -4.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(150, 18, 1.0, 85.083333, cpv(687.0, 169.0), cpvzero, cpvzero, 0.0, 3.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(151, 19, 1.0, 85.083333, cpv(675.0, 191.0), cpvzero, cpvzero, 0.0, 4.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(147, 20, 1.0, 85.083333, cpv(664.0, 217.0), cpvzero, cpvzero, 0.0, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(148, 21, 1.0, 85.083333, cpv(661.0, 246.0), cpvzero, cpvzero, 0.0, -1.930000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(149, 22, 1.0, 85.083333, cpv(662.0, 271.0), cpvzero, cpvzero, 0.0, 1.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(150, 23, 1.0, 85.083333, cpv(670.0, 300.0), cpvzero, cpvzero, 0.0, 9.390000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(151, 24, 1.0, 85.083333, cpv(679.0, 324.0), cpvzero, cpvzero, 0.0, -4.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(134, 25, 1.0, 90.166667, cpv(203.0, 97.0), cpvzero, cpvzero, 0.0, 8.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(135, 26, 1.0, 90.166667, cpv(196.0, 124.0), cpvzero, cpvzero, 0.0, 4.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(131, 27, 1.0, 90.166667, cpv(203.0, 153.0), cpvzero, cpvzero, 0.0, 6.530000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(132, 28, 1.0, 90.166667, cpv(215.0, 179.0), cpvzero, cpvzero, 0.0, -6.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(133, 29, 1.0, 90.166667, cpv(226.0, 203.0), cpvzero, cpvzero, 0.0, 1.380000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(134, 30, 1.0, 90.166667, cpv(236.0, 228.0), cpvzero, cpvzero, 0.0, -0.060000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(135, 31, 1.0, 90.166667, cpv(234.0, 256.0), cpvzero, cpvzero, 0.0, -8.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(131, 32, 1.0, 90.166667, cpv(223.0, 282.0), cpvzero, cpvzero, 0.0, 1.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(132, 33, 1.0, 90.166667, cpv(202.0, 305.0), cpvzero, cpvzero, 0.0, 2.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(133, 34, 1.0, 90.166667, cpv(571.0, 103.0), cpvzero, cpvzero, 0.0, 4.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(134, 35, 1.0, 90.166667, cpv(579.0, 127.0), cpvzero, cpvzero, 0.0, -8.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(135, 36, 1.0, 90.166667, cpv(577.0, 154.0), cpvzero, cpvzero, 0.0, -1.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(131, 37, 1.0, 90.166667, cpv(566.0, 177.0), cpvzero, cpvzero, 0.0, -9.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(132, 38, 1.0, 90.166667, cpv(549.0, 199.0), cpvzero, cpvzero, 0.0, -7.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(133, 39, 1.0, 90.166667, cpv(540.0, 223.0), cpvzero, cpvzero, 0.0, -5.990000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(134, 40, 1.0, 90.166667, cpv(536.0, 250.0), cpvzero, cpvzero, 0.0, 5.140000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(135, 41, 1.0, 90.166667, cpv(542.0, 275.0), cpvzero, cpvzero, 0.0, 1.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(131, 42, 1.0, 90.166667, cpv(556.0, 297.0), cpvzero, cpvzero, 0.0, -0.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(132, 43, 1.0, 90.166667, cpv(566.0, 322.0), cpvzero, cpvzero, 0.0, -7.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(105, 44, 1.0, 75.803873, cpv(363.0, 202.0), cpvzero, cpvzero, -0.880350, -1.680000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(105, 45, 1.0, 75.803873, cpv(342.0, 163.0), cpvzero, cpvzero, 0.067693, -9.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(105, 46, 1.0, 75.803873, cpv(366.0, 123.0), cpvzero, cpvzero, 1.009633, 2.290000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(105, 47, 1.0, 75.803873, cpv(423.0, 130.0), cpvzero, cpvzero, 2.235571, -4.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(105, 48, 1.0, 75.803873, cpv(436.0, 170.0), cpvzero, cpvzero, -3.071938, 7.360000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(105, 49, 1.0, 75.803873, cpv(412.0, 208.0), cpvzero, cpvzero, -2.409906, -0.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(106, 50, 1.0, 75.803873, cpv(335.0, 219.0), cpvzero, cpvzero, -0.581380, -8.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(106, 51, 1.0, 75.803873, cpv(315.0, 144.0), cpvzero, cpvzero, 0.927295, 7.360000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(106, 52, 1.0, 75.803873, cpv(371.0, 89.0), cpvzero, cpvzero, 1.789465, -9.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(106, 53, 1.0, 75.803873, cpv(452.0, 113.0), cpvzero, cpvzero, 2.677945, -5.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(106, 54, 1.0, 75.803873, cpv(462.0, 189.0), cpvzero, cpvzero, -2.488746, -1.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(106, 55, 1.0, 75.803873, cpv(424.0, 238.0), cpvzero, cpvzero, -1.963136, 1.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(109, 56, 1.0, 75.803873, cpv(353.0, 234.0), cpvzero, cpvzero, -1.325818, 1.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(109, 57, 1.0, 75.803873, cpv(309.0, 172.0), cpvzero, cpvzero, -0.288055, -8.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(109, 58, 1.0, 75.803873, cpv(340.0, 100.0), cpvzero, cpvzero, 0.785398, 7.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(109, 59, 1.0, 75.803873, cpv(429.0, 93.0), cpvzero, cpvzero, 1.614247, 9.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(109, 60, 1.0, 75.803873, cpv(468.0, 157.0), cpvzero, cpvzero, 2.697173, -8.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(109, 61, 1.0, 75.803873, cpv(444.0, 218.0), cpvzero, cpvzero, -3.070285, 5.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(100, 62, 1.0, inf, cpv(388.0, 166.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(105.0, 47.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 28.319605, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 30.083218, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 25.553865, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 28.017851, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 25.942244, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 25.317978, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 27.313001, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpvzero, cpvzero, 27.856777, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body12, cpvzero, cpvzero, 27.313001, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body13, cpv(670.0, 47.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 28.231188, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 28.231188, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 29.154759, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 25.019992, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 30.083218, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body25, cpv(203.0, 97.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 27.892651, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body27, cpvzero, cpvzero, 29.832868, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body28, cpvzero, cpvzero, 28.635642, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 28.071338, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 28.231188, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body33, cpvzero, cpvzero, 31.144823, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body34, cpv(571.0, 103.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 25.298221, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 27.073973, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 27.802878, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body39, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body40, cpvzero, cpvzero, 27.294688, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body41, cpvzero, cpvzero, 25.709920, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body42, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body43, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body62, body0, cpvzero, cpv(388.0, 166.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body47, body62, cpv(20.0, 0.0), cpv(22.662367, -20.258882)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body48, body62, cpv(24.080999, 0.324792), cpv(24.0, 2.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body62, cpv(22.0, 1.0), cpv(8.299054, 26.557193)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body44, body62, cpv(22.200472, 0.372908), cpv(-10.573434, 19.121784)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body45, body62, cpv(22.0, 1.0), cpv(-24.118028, -0.514181)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body46, body62, cpv(21.0, 1.0), cpv(-11.671034, -24.688461)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body48, cpv(12.803179, 0.280362), cpv(-10.323742, -4.291893), 8.485281, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body48, cpv(16.0, 1.0), cpv(-10.555737, 6.751031), 6.209303, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body47, cpv(17.0, 1.0), cpv(-12.252546, 7.062231), 6.468097, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body47, cpv(14.310835, 0.447214), cpv(-12.635438, -1.531568), 7.280110, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body46, cpv(15.0, 1.0), cpv(-11.538447, -6.071594), 6.808194, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body46, cpv(15.0, 0.0), cpv(-12.941444, 3.676822), 6.372119, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body49, cpv(14.0, 1.0), cpv(-13.013260, 4.965386), 5.925385, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body49, cpv(14.0, 1.0), cpv(-11.145546, -3.431735), 6.863644, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body44, cpv(14.0, 1.0), cpv(-13.039310, -4.793371), 4.896382, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body44, cpv(15.0, 0.0), cpv(-12.301868, 2.379925), 6.458014, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body45, cpv(15.0, 1.0), cpv(-13.376074, -5.106921), 5.813777, 500.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body45, cpv(15.0, 0.0), cpv(-12.767302, 3.872466), 5.880921, 500.0, 0.0));
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
	BGBLIT(rc_bg05)
}


const kineticArtLevel Level43 = {
	43,
	"Level 43",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

