
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level31;
extern kineticArtLevel Level33;
#define PREV_LEVEL &Level31
#define NEXT_LEVEL &Level33


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 50, total joints: 50 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(193, 1, 1.0, 70.876156, cpv(434.357636, 249.410702), cpv(76.708105, 128.965261), cpvzero, 195.338737, 4.589247, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(194, 2, 1.0, 70.876156, cpv(550.647477, 159.908290), cpv(-181.229173, 19.366177), cpvzero, 159.924022, 6.554959, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(197, 3, 1.0, 70.876156, cpv(516.811987, 114.872885), cpv(53.072553, -134.790748), cpvzero, 162.301428, 3.831262, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(196, 4, 1.0, 70.876156, cpv(410.675853, 298.484113), cpv(-171.906911, -0.004239), cpvzero, 197.962600, 6.845366, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(198, 5, 1.0, 70.876156, cpv(572.500149, 108.049706), cpv(75.279501, 138.009863), cpvzero, 157.971264, 4.156184, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(193, 6, 1.0, 70.876156, cpv(382.332979, 248.413662), cpv(91.394634, -124.926923), cpvzero, 193.968232, 3.140912, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(183, 7, 1.0, 88.659334, cpv(447.785955, 293.150363), cpv(-139.389217, 183.642698), cpvzero, 198.645934, 4.447031, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(184, 8, 1.0, 88.659334, cpv(408.976584, 221.455143), cpv(231.468739, 9.677936), cpvzero, 193.227192, 6.042852, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(183, 9, 1.0, 88.659334, cpv(372.121313, 292.860466), cpv(-120.623875, -182.788398), cpvzero, 193.975288, 4.256592, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(186, 10, 1.0, 88.659334, cpv(583.568014, 146.782317), cpv(-114.311774, 184.583379), cpvzero, 160.844469, 4.603564, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(182, 11, 1.0, 88.659334, cpv(515.808057, 157.470654), cpv(-143.538124, -143.066704), cpvzero, 159.138947, 3.690131, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(182, 12, 1.0, 88.659334, cpv(537.653137, 84.591643), cpv(223.345747, -32.373116), cpvzero, 161.626225, 6.770408, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(182, 13, 1.0, 88.659334, cpv(292.775491, 90.157677), cpv(-194.233900, -106.261029), cpvzero, -160.903815, -8.532817, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(182, 14, 1.0, 88.659334, cpv(240.883846, 146.597831), cpv(125.800133, 175.478042), cpvzero, -158.067221, -4.198492, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(183, 15, 1.0, 88.659334, cpv(625.264721, 360.282104), cpv(215.497814, -4.937763), cpvzero, -177.435900, -3.911244, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(183, 16, 1.0, 88.659334, cpv(587.703259, 295.740521), cpv(-90.170126, 205.242983), cpvzero, -175.776804, -5.892776, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(183, 17, 1.0, 88.659334, cpv(664.687050, 297.237179), cpv(-98.044172, -198.922347), cpvzero, -179.263590, -5.793849, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(181, 18, 1.0, 88.659334, cpv(193.769965, 354.373740), cpv(-208.433984, 56.796422), cpvzero, 180.314562, 3.632816, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(181, 19, 1.0, 88.659334, cpv(207.699631, 274.244578), cpv(178.491853, 152.312012), cpvzero, 178.406588, 5.934162, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(181, 20, 1.0, 88.659334, cpv(134.443240, 309.886105), cpv(9.235693, -229.171793), cpvzero, 175.774373, 5.189447, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(186, 21, 1.0, 88.659334, cpv(301.428736, 156.153665), cpv(154.628454, -117.924046), cpvzero, -159.055169, -3.589837, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(197, 22, 1.0, 70.876156, cpv(251.933131, 104.946420), cpv(-79.077605, 132.603040), cpvzero, -157.783269, -4.792015, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(198, 23, 1.0, 70.876156, cpv(275.013304, 159.829911), cpv(194.496644, 5.350860), cpvzero, -160.467689, -7.110333, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(194, 24, 1.0, 70.876156, cpv(304.467309, 116.242514), cpv(-33.365006, -130.169362), cpvzero, -162.183417, -4.689739, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(195, 25, 1.0, 70.876156, cpv(210.046608, 314.467995), cpv(-28.260610, 149.320387), cpvzero, 177.436829, 5.112338, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(195, 26, 1.0, 70.876156, cpv(158.520663, 334.177361), cpv(-115.499083, -111.963215), cpvzero, 180.135155, 4.710118, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(195, 27, 1.0, 70.876156, cpv(160.021114, 283.483054), cpv(135.237881, -89.216005), cpvzero, 175.481194, 2.326283, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(196, 28, 1.0, 70.876156, cpv(598.425368, 332.940813), cpv(95.892557, 138.385343), cpvzero, -177.823446, -7.134843, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(196, 29, 1.0, 70.876156, cpv(630.603872, 284.211030), cpv(-148.918616, -12.062575), cpvzero, -175.535775, -2.984268, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(196, 30, 1.0, 70.876156, cpv(653.740138, 330.284283), cpv(70.171914, -142.938314), cpvzero, -180.332896, -5.267518, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(53, 31, 1.0, inf, cpv(180.111231, 310.003172), cpv(-0.020789, 0.543719), cpvzero, 177.650009, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(53, 32, 1.0, inf, cpv(409.090011, 265.994554), cpv(-0.090301, 0.244935), cpvzero, 195.833344, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(53, 33, 1.0, inf, cpv(625.875884, 315.039363), cpv(0.240496, 0.901035), cpvzero, -177.650009, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(119, 34, 1.0, inf, cpv(544.936099, 125.060053), cpv(-0.435916, -0.473010), cpvzero, 159.466675, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(119, 35, 1.0, inf, cpv(278.074530, 122.178093), cpv(1.051409, -1.207478), cpvzero, -159.466675, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(106, 36, 1.0, 75.803873, cpv(336.521759, 106.409169), cpv(-85.642560, -277.170444), cpvzero, -160.712506, -4.417477, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(106, 37, 1.0, 75.803873, cpv(230.189628, 82.092773), cpv(-180.885492, 235.392991), cpvzero, -156.394821, -4.204038, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(106, 38, 1.0, 75.803873, cpv(277.268513, 194.600662), cpv(455.321371, -29.699158), cpvzero, -158.745656, -8.885726, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(106, 39, 1.0, 75.803873, cpv(597.189692, 85.402817), cpv(181.120364, 254.749226), cpvzero, 159.275009, 6.540546, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(106, 40, 1.0, 75.803873, cpv(559.810237, 192.902555), cpv(-417.042120, 69.694268), cpvzero, 161.383953, 8.842148, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(106, 41, 1.0, 75.803873, cpv(488.123791, 100.168282), cpv(122.740450, -255.613531), cpvzero, 157.579798, 5.593461, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(108, 42, 1.0, 75.803873, cpv(365.365515, 226.144943), cpv(156.107463, -170.063542), cpvzero, 195.682099, 1.466197, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(108, 43, 1.0, 75.803873, cpv(450.528298, 224.908046), cpv(185.806643, 204.944619), cpvzero, 197.084366, 4.378935, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(108, 44, 1.0, 75.803873, cpv(414.407662, 330.607179), cpv(-386.888162, 13.110680), cpvzero, 193.217979, 6.216130, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(107, 45, 1.0, 75.803873, cpv(570.674541, 340.947687), cpv(166.916126, 349.956865), cpvzero, -176.255914, -10.062382, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(107, 46, 1.0, 75.803873, cpv(681.574391, 338.343494), cpv(104.554128, -296.883331), cpvzero, -179.123614, -5.670673, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(107, 47, 1.0, 75.803873, cpv(635.673458, 257.340813), cpv(-223.023540, -24.728054), cpvzero, -180.678482, -2.108378, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(107, 48, 1.0, 75.803873, cpv(243.730260, 312.303424), cpv(-21.717498, 338.623173), cpvzero, 178.901003, 7.683632, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(107, 49, 1.0, 75.803873, cpv(132.836312, 349.105462), cpv(-195.190844, -270.461175), cpvzero, 175.431319, 9.043064, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(107, 50, 1.0, 75.803873, cpv(146.469346, 257.461389), cpv(197.719269, -118.784241), cpvzero, 176.507733, 2.255810, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body31, body0, cpvzero, cpv(180.0, 310.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body35, body0, cpvzero, cpv(278.0, 122.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body32, body0, cpvzero, cpv(409.0, 266.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body34, body0, cpvzero, cpv(545.0, 125.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body0, cpvzero, cpv(626.0, 315.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body34, cpv(-1.583595, 3.239171), cpv(17.0, -26.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body34, cpv(-12.0, -1.0), cpv(31.0, 0.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body34, cpv(-0.632456, 4.427189), cpv(12.0, 22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body34, cpv(-11.614011, 1.055819), cpv(-17.0, 23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body34, cpv(1.517929, 4.867842), cpv(-26.0, -8.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body34, cpv(11.660855, 1.012154), cpv(-11.0, -30.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body2, cpv(7.706706, 1.267550), cpv(1.511613, -25.193551)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body41, body3, cpv(8.057274, 0.283422), cpv(-0.695701, -23.590591)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body39, body5, cpv(8.0, 0.0), cpv(0.366397, -25.176691)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body35, cpv(-0.672484, 5.054480), cpv(25.0, -7.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body35, cpv(8.437528, 1.675746), cpv(9.0, -34.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body35, cpv(-0.277350, 2.218801), cpv(-22.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body35, cpv(9.187275, -0.770703), cpv(-31.0, -5.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body35, cpv(0.334992, 6.699834), cpv(-12.0, 16.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body35, cpv(14.416705, 0.398252), cpv(14.0, 18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body37, body22, cpv(9.984695, 1.142741), cpv(-1.366662, -20.955482)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body38, body23, cpv(8.940168, 0.270914), cpv(3.050851, -24.406809)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body36, body24, cpv(8.931909, -0.470100), cpv(3.729574, -23.918409)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body31, cpv(11.990631, 1.491565), cpv(30.0, -15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body25, body31, cpv(1.0, 3.0), cpv(2.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body31, cpv(8.866742, -1.175110), cpv(-31.0, -17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body31, cpv(1.539516, 1.276672), cpv(-23.0, 21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body31, cpv(11.030306, -0.576497), cpv(2.0, 34.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body31, cpv(0.015086, 3.605520), cpv(24.0, 15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body48, body25, cpv(6.997700, 0.179428), cpv(1.0, -26.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body50, body27, cpv(6.656402, 0.832050), cpv(2.121528, -22.923768)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body26, cpv(8.061936, -0.071982), cpv(0.467662, -20.803396)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body32, cpv(11.645324, 0.621637), cpv(31.0, -16.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body32, cpv(12.0, -0.0), cpv(1.0, 33.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body32, cpv(-8.598933, 0.241543), cpv(-30.0, -18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body32, cpv(0.0, 3.0), cpv(0.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body32, cpv(1.133687, 2.591284), cpv(-26.0, 12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body32, cpv(-0.240363, 4.994219), cpv(24.0, 12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body43, body1, cpv(5.998126, -0.149953), cpv(0.0, -23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body42, body6, cpv(6.324470, -0.032769), cpv(3.927415, -21.013696)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body44, body4, cpv(7.206340, 0.262049), cpv(-4.059472, -23.822693)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body33, cpv(-0.506055, 1.934918), cpv(-14.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body33, cpv(10.519320, 1.530981), cpv(19.0, -25.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body33, cpv(-1.062162, 3.445550), cpv(27.0, 6.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body33, cpv(12.995391, 0.346124), cpv(12.0, 27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body30, body33, cpv(1.511219, 3.836172), cpv(-18.0, 21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body33, cpv(9.981310, -0.611101), cpv(-34.0, -5.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body45, body28, cpv(6.898221, 1.189348), cpv(-0.744199, -20.867347)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body47, body29, cpv(7.978957, 1.155962), cpv(-3.497362, -18.782131)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body46, body30, cpv(8.433383, 0.937043), cpv(0.464991, -19.994594)));
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


const kineticArtLevel Level32 = {
	32,
	"Level 32",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

