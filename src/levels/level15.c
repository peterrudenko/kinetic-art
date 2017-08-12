
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level14;
extern kineticArtLevel Level16;
#define PREV_LEVEL &Level14
#define NEXT_LEVEL &Level16


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 55, total joints: 82 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(112, 1, 1.0, 63.887283, cpv(48.973881, 44.962123), cpv(0.364177, 0.528804), cpvzero, 0.0, -2.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(111, 2, 1.0, 63.887283, cpv(68.798733, 73.776927), cpv(-0.349068, 2.043472), cpvzero, 0.0, 4.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(112, 3, 1.0, 63.887283, cpv(90.417334, 105.119781), cpv(-11.933280, 11.217773), cpvzero, 0.0, -0.690000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(111, 4, 1.0, 63.887283, cpv(114.985699, 133.527726), cpv(-13.201537, 13.674251), cpvzero, 0.0, -3.450000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(112, 5, 1.0, 63.887283, cpv(138.744151, 160.708402), cpv(-14.442719, 15.655485), cpvzero, 0.0, 7.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(111, 6, 1.0, 63.887283, cpv(167.275027, 181.702310), cpv(-31.897088, 39.653826), cpvzero, 0.0, -1.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(112, 7, 1.0, 63.887283, cpv(197.721224, 203.072834), cpv(-18.449821, 19.407049), cpvzero, 0.0, -7.070000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(111, 8, 1.0, 63.887283, cpv(231.817631, 223.372711), cpv(-40.255664, 52.242481), cpvzero, 0.0, -0.960000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(112, 9, 1.0, 63.887283, cpv(270.456739, 225.646178), cpv(-47.153892, 125.162100), cpvzero, 0.0, 0.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(111, 10, 1.0, 63.887283, cpv(303.957687, 212.580489), cpv(-33.500893, 167.463643), cpvzero, 0.0, -5.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(112, 11, 1.0, 63.887283, cpv(336.337116, 193.082042), cpv(-33.156286, 173.378068), cpvzero, 0.0, 8.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(111, 12, 1.0, 63.887283, cpv(368.264004, 172.566782), cpv(-42.747528, 163.314627), cpvzero, 0.0, -0.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(112, 13, 1.0, 63.887283, cpv(399.455397, 153.447341), cpv(-50.375090, 155.075989), cpvzero, 0.0, -1.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(111, 14, 1.0, 63.887283, cpv(431.465823, 136.168290), cpv(-55.327918, 149.345930), cpvzero, 0.0, -7.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(112, 15, 1.0, 63.887283, cpv(463.408885, 120.087558), cpv(-64.412580, 133.776351), cpvzero, 0.0, -4.200000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(111, 16, 1.0, 63.887283, cpv(498.117226, 103.544067), cpv(-70.209504, 123.166640), cpvzero, 0.0, -9.710000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(112, 17, 1.0, 63.887283, cpv(535.246113, 89.520565), cpv(-79.385383, 99.786602), cpvzero, 0.0, -8.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(111, 18, 1.0, 63.887283, cpv(578.012691, 75.925881), cpv(-84.043082, 85.508482), cpvzero, 0.0, 0.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(112, 19, 1.0, 63.887283, cpv(612.596622, 66.715794), cpv(-86.962450, 75.522149), cpvzero, 0.0, -7.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(111, 20, 1.0, 63.887283, cpv(647.317295, 58.858801), cpv(-88.916785, 70.537721), cpvzero, 0.0, 8.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(112, 21, 1.0, 63.887283, cpv(688.505617, 50.962131), cpv(-97.664920, 37.028565), cpvzero, 0.0, 1.330000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(111, 22, 1.0, 63.887283, cpv(725.193542, 48.600052), cpv(-104.669684, 11.866702), cpvzero, 0.0, -2.700000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(113, 23, 1.0, 63.887283, cpv(155.0, 37.0), cpvzero, cpvzero, 0.0, 0.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(114, 24, 1.0, 63.887283, cpv(171.0, 69.0), cpvzero, cpvzero, 0.0, 0.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(113, 25, 1.0, 63.887283, cpv(194.0, 100.0), cpvzero, cpvzero, 0.0, -2.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(114, 26, 1.0, 63.887283, cpv(222.0, 124.0), cpvzero, cpvzero, 0.0, 4.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(113, 27, 1.0, 63.887283, cpv(259.0, 133.0), cpvzero, cpvzero, 0.0, 2.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(114, 28, 1.0, 63.887283, cpv(299.0, 127.0), cpvzero, cpvzero, 0.0, -0.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(113, 29, 1.0, 63.887283, cpv(334.0, 112.0), cpvzero, cpvzero, 0.0, 9.030000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(114, 30, 1.0, 63.887283, cpv(367.0, 94.0), cpvzero, cpvzero, 0.0, 2.970000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(113, 31, 1.0, 63.887283, cpv(404.0, 76.0), cpvzero, cpvzero, 0.0, -1.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(114, 32, 1.0, 63.887283, cpv(446.0, 62.0), cpvzero, cpvzero, 0.0, 7.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(113, 33, 1.0, 63.887283, cpv(486.0, 50.0), cpvzero, cpvzero, 0.0, 7.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(114, 34, 1.0, 63.887283, cpv(523.0, 41.0), cpvzero, cpvzero, 0.0, 1.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(113, 35, 1.0, 63.887283, cpv(558.0, 37.0), cpvzero, cpvzero, 0.0, -3.390000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(105, 36, 1.0, 75.803873, cpv(720.0, 206.0), cpvzero, cpvzero, 1.675673, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(106, 37, 1.0, 75.803873, cpv(705.0, 228.0), cpvzero, cpvzero, 1.006227, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(107, 38, 1.0, 75.803873, cpv(730.0, 235.0), cpvzero, cpvzero, 2.089942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(105, 39, 1.0, 75.803873, cpv(569.0, 160.0), cpvzero, cpvzero, 1.614247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(106, 40, 1.0, 75.803873, cpv(578.0, 182.0), cpvzero, cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(105, 41, 1.0, 75.803873, cpv(437.0, 237.0), cpvzero, cpvzero, 1.178456, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(106, 42, 1.0, 75.803873, cpv(455.0, 256.0), cpvzero, cpvzero, 2.009133, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(105, 43, 1.0, 75.803873, cpv(291.0, 298.0), cpvzero, cpvzero, 1.849096, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(106, 44, 1.0, 75.803873, cpv(270.0, 321.0), cpvzero, cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(105, 45, 1.0, 75.803873, cpv(102.0, 261.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(106, 46, 1.0, 75.803873, cpv(114.0, 284.0), cpvzero, cpvzero, 2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(107, 47, 1.0, 75.803873, cpv(88.0, 280.0), cpvzero, cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(107, 48, 1.0, 75.803873, cpv(299.0, 325.0), cpvzero, cpvzero, 2.414950, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(107, 49, 1.0, 75.803873, cpv(429.0, 260.0), cpvzero, cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(107, 50, 1.0, 75.803873, cpv(556.0, 181.0), cpvzero, cpvzero, 1.152572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(116, 51, 1.0, 99.155539, cpv(566.0, 221.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(117, 52, 1.0, 99.155539, cpv(713.0, 271.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(116, 55, 1.0, 99.155539, cpv(99.0, 322.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(119, 54, 1.0, 99.155539, cpv(281.0, 360.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(115, 56, 1.0, 99.155539, cpv(445.0, 298.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(49.0, 45.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body0, cpvzero, cpv(725.193542, 48.600052)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body0, cpvzero, cpv(647.317295, 58.858801)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body0, cpvzero, cpv(578.012691, 75.925881)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body0, cpvzero, cpv(498.117226, 103.544067)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body0, cpvzero, cpv(431.465823, 136.168290)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body0, cpvzero, cpv(368.264004, 172.566782)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpvzero, cpv(303.957687, 212.580489)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body0, cpvzero, cpv(231.817631, 223.372711)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body0, cpvzero, cpv(167.275027, 181.702310)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(114.985699, 133.527726)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(68.798733, 73.776927)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body23, cpv(155.0, 37.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body24, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body27, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body28, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body30, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body31, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body32, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body33, body34, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body34, body35, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body35, body0, cpvzero, cpv(558.0, 37.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body0, cpvzero, cpv(486.0, 50.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body31, body0, cpvzero, cpv(404.0, 76.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body0, cpvzero, cpv(334.0, 112.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpvzero, cpv(259.0, 133.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body25, body0, cpvzero, cpv(194.0, 100.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body55, cpv(9.877569, -0.658505), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body45, body55, cpv(12.0, 1.0), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body55, cpv(8.597853, 3.328201), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body54, cpv(11.675648, 0.824163), cpv(-2.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body54, cpv(9.135003, -1.245682), cpv(-2.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body54, cpv(6.708204, 4.472136), cpv(-2.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body56, cpv(9.422432, -1.103528), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body56, cpv(10.387224, 1.051467), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body49, body56, cpv(10.606602, 3.535534), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body51, cpv(9.899495, -1.414214), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body51, cpv(13.074605, 1.433428), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body50, body51, cpv(9.950392, 2.233762), cpv(0.0, -14.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body52, cpv(12.031369, -1.116313), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body52, cpv(13.242625, 1.622614), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body52, cpv(9.518295, 3.660883), cpv(0.0, -13.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body47, body0, cpv(-9.429903, -0.277350), cpv(83.0, 272.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body45, body0, cpv(-7.0, -0.0), cpv(102.0, 254.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body46, body0, cpv(-8.372416, 1.975514), cpv(119.0, 277.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body44, body0, cpv(-8.049845, 0.447214), cpv(266.0, 314.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body43, body0, cpv(-7.417470, 3.159293), cpv(290.0, 290.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body48, body0, cpv(-6.394502, -0.332182), cpv(304.0, 321.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body0, cpv(-6.363961, 2.121320), cpv(423.0, 257.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body41, body0, cpv(-8.921542, 0.637253), cpv(433.0, 229.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body42, body0, cpv(-9.846866, 0.198069), cpv(459.0, 247.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body50, body0, cpv(-6.295146, -0.609208), cpv(554.0, 175.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body39, body0, cpv(-8.948068, 1.389991), cpv(568.0, 151.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body0, cpv(-8.485281, -1.414214), cpv(585.0, 177.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body37, body0, cpv(-8.279227, 1.858602), cpv(699.0, 222.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body36, body0, cpv(-8.950549, 0.942163), cpv(720.0, 197.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body38, body0, cpv(-7.566119, 0.868243), cpv(733.0, 228.0)));
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
	BGBLIT(rc_bg14)
}


const kineticArtLevel Level15 = {
	15,
	"Level 15",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

