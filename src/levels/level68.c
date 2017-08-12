
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level67;
extern kineticArtLevel Level69;
#define PREV_LEVEL &Level67
#define NEXT_LEVEL &Level69


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 42, total joints: 57 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(111, 1, 1.0, inf, cpv(247.453502, 297.986223), cpv(13.073371, 5.634030), cpvzero, -174.633342, -6.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(110, 2, 1.0, inf, cpv(279.934166, 150.903898), cpv(-0.511037, 4.557492), cpvzero, 155.450008, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(112, 3, 1.0, inf, cpv(411.243639, 227.009630), cpv(-0.192052, 1.450772), cpvzero, -117.083339, -3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(110, 4, 1.0, inf, cpv(534.491191, 159.020893), cpv(1.792824, 0.558111), cpvzero, 155.450008, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(111, 5, 1.0, inf, cpv(580.922897, 296.771809), cpv(13.848186, -0.839900), cpvzero, -174.633342, -6.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(109, 6, 1.0, 75.803873, cpv(287.161847, 289.879338), cpv(-40.925232, -103.479293), cpvzero, -173.036956, 5.329998, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(109, 7, 1.0, 75.803873, cpv(254.717667, 318.107106), cpv(126.166469, -32.852493), cpvzero, -170.000042, -7.195629, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(109, 8, 1.0, 75.803873, cpv(231.056681, 309.375034), cpv(93.023649, 102.426641), cpvzero, -174.981394, -5.031114, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(109, 9, 1.0, 75.803873, cpv(232.606890, 276.624116), cpv(-213.408446, 67.907046), cpvzero, -173.928663, -15.851567, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(109, 10, 1.0, 75.803873, cpv(260.415210, 280.500328), cpv(-92.945756, -73.442879), cpvzero, -172.083450, -6.640812, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(109, 11, 1.0, 75.803873, cpv(598.339415, 308.667114), cpv(76.658017, -103.715032), cpvzero, -170.627798, -6.748694, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(109, 12, 1.0, 75.803873, cpv(604.489759, 272.218631), cpv(-154.903419, -192.342626), cpvzero, -172.899154, -10.878167, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(109, 13, 1.0, 75.803873, cpv(558.435698, 267.559466), cpv(-219.196758, 178.121254), cpvzero, -174.928465, -12.647997, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(109, 14, 1.0, 75.803873, cpv(562.819556, 295.066473), cpv(-9.282389, 105.191228), cpvzero, -174.072693, -7.246053, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(109, 15, 1.0, 75.803873, cpv(588.694497, 332.744547), cpv(357.993528, -123.760836), cpvzero, -177.941988, -16.733898, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(106, 16, 1.0, 75.803873, cpv(438.609876, 255.119878), cpv(69.131145, -68.071017), cpvzero, -115.560138, -1.051752, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(106, 17, 1.0, 75.803873, cpv(396.211138, 239.316478), cpv(42.316074, 44.308459), cpvzero, -112.196227, -2.760464, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(106, 18, 1.0, 75.803873, cpv(396.409034, 214.606505), cpv(-36.199952, 50.714463), cpvzero, -117.172999, -3.440066, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(106, 19, 1.0, 75.803873, cpv(409.586174, 193.081873), cpv(-113.918863, 11.756289), cpvzero, -117.932560, -3.969311, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(106, 20, 1.0, 75.803873, cpv(436.951946, 206.549801), cpv(-115.841361, -75.024997), cpvzero, -117.737024, -7.866944, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(107, 21, 1.0, 75.803873, cpv(514.311252, 172.469708), cpv(-57.994554, -108.053103), cpvzero, 155.181313, 4.306545, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(107, 22, 1.0, 75.803873, cpv(511.540922, 136.583706), cpv(115.536878, -106.352449), cpvzero, 157.210454, 4.668839, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(107, 23, 1.0, 75.803873, cpv(526.370938, 194.725639), cpv(-153.471237, -50.107404), cpvzero, 155.644246, 2.605566, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(107, 24, 1.0, 75.803873, cpv(562.519975, 163.956054), cpv(-110.285806, 45.616769), cpvzero, 153.226958, -6.048303, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(107, 25, 1.0, 75.803873, cpv(540.009246, 136.652542), cpv(109.715307, 35.083030), cpvzero, 151.249598, 4.924162, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(107, 26, 1.0, 75.803873, cpv(299.732536, 151.982024), cpv(-11.942689, 104.432173), cpvzero, 152.603175, 5.131367, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(107, 27, 1.0, 75.803873, cpv(284.832148, 129.987371), cpv(104.095400, 34.166899), cpvzero, 151.273328, 4.839257, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(107, 28, 1.0, 75.803873, cpv(258.412770, 137.335077), cpv(54.847729, -127.509570), cpvzero, 156.446046, 7.471707, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(107, 29, 1.0, 75.803873, cpv(269.391825, 184.816171), cpv(-176.454649, -58.535761), cpvzero, 155.773027, 5.695928, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(107, 30, 1.0, 75.803873, cpv(251.656270, 165.644827), cpv(-184.798935, -169.855009), cpvzero, 155.623212, 14.977191, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(113, 31, 1.0, inf, cpv(686.108733, 215.123407), cpv(-0.561361, 1.333628), cpvzero, 206.566677, 7.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(113, 32, 1.0, inf, cpv(118.625027, 209.378575), cpv(5.039303, -5.930436), cpvzero, 206.566677, 7.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(105, 33, 1.0, 75.803873, cpv(646.980814, 213.400618), cpv(26.329762, -271.978647), cpvzero, 207.192916, 7.054838, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(105, 34, 1.0, 75.803873, cpv(669.441568, 194.595422), cpv(157.045606, -88.175769), cpvzero, 206.668817, 5.636213, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(105, 35, 1.0, 75.803873, cpv(694.784481, 195.717664), cpv(132.390892, 69.806088), cpvzero, 201.535769, 7.410346, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(105, 36, 1.0, 75.803873, cpv(710.819718, 242.447585), cpv(-190.117738, 154.854890), cpvzero, 205.166197, 5.538077, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(105, 37, 1.0, 75.803873, cpv(685.377465, 238.048117), cpv(-162.433496, -146.282503), cpvzero, 204.222146, -5.368733, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(105, 38, 1.0, 75.803873, cpv(82.024747, 217.222407), cpv(-101.214285, -339.412858), cpvzero, 206.504045, 16.603690, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(105, 39, 1.0, 75.803873, cpv(115.244347, 170.005022), cpv(291.615316, -3.500094), cpvzero, 209.024538, 7.781580, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(105, 40, 1.0, 75.803873, cpv(143.737300, 218.097141), cpv(18.461744, 248.951324), cpvzero, 203.342992, 17.890814, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(105, 41, 1.0, 75.803873, cpv(128.423412, 190.536774), cpv(136.412117, 73.336190), cpvzero, 201.663710, 7.627450, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(105, 42, 1.0, 75.803873, cpv(109.486982, 243.993196), cpv(-276.393511, -76.563165), cpvzero, 205.450267, 10.824153, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body32, body0, cpvzero, cpv(118.0, 210.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(280.0, 151.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpvzero, cpv(411.0, 227.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(535.0, 159.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body31, body0, cpvzero, cpv(686.0, 215.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpvzero, cpv(581.0, 297.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpvzero, cpv(248.0, 298.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body41, body32, cpv(12.968801, 0.900118), cpv(22.0, 7.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body39, body32, cpv(12.579918, 1.935372), cpv(15.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body38, body32, cpv(10.289915, 0.342997), cpv(-19.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body42, body32, cpv(11.388965, 0.539883), cpv(-25.0, 6.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body32, cpv(11.0, -0.0), cpv(-1.0, 25.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body30, body2, cpv(12.0, 1.0), cpv(0.0, -26.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body2, cpv(12.645225, 0.313518), cpv(22.0, -9.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body2, cpv(12.202952, 0.296600), cpv(14.0, 17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body2, cpv(11.397712, -0.303571), cpv(-14.0, 16.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body2, cpv(9.848835, 0.021272), cpv(-23.0, -10.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body1, cpv(12.037036, 0.331295), cpv(0.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body1, cpv(11.611558, 1.473677), cpv(21.0, -13.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body1, cpv(11.313708, -0.0), cpv(18.0, 15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body1, cpv(10.752325, -0.622503), cpv(-15.0, 16.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body1, cpv(11.401729, -0.024105), cpv(-23.0, -10.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body3, cpv(11.0, 0.0), cpv(3.0, -28.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body3, cpv(12.112248, 1.137300), cpv(22.0, -9.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body3, cpv(11.624764, 0.929981), cpv(13.0, 18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body3, cpv(11.400685, -0.156174), cpv(-16.0, 15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body3, cpv(10.770025, 0.080978), cpv(-23.0, -12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body4, cpv(11.399174, 0.242536), cpv(-23.0, -9.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body4, cpv(12.033030, 0.454077), cpv(0.0, -24.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body4, cpv(11.377075, 0.749779), cpv(21.0, -10.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body25, body4, cpv(11.641176, 0.694996), cpv(15.0, 17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body4, cpv(11.401591, 0.060971), cpv(-14.0, 18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body5, cpv(10.683818, 1.362366), cpv(9.0, -23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body5, cpv(11.390342, 0.510015), cpv(-21.0, -17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body5, cpv(10.289915, 0.342997), cpv(-23.0, 12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body5, cpv(11.394707, -0.400819), cpv(4.0, 23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body5, cpv(12.325479, 1.040463), cpv(23.0, 0.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body31, cpv(10.280162, 0.564155), cpv(-17.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body34, body31, cpv(12.656505, 1.346437), cpv(16.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body35, body31, cpv(11.604524, 1.155429), cpv(22.0, 5.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body36, body31, cpv(11.0, -0.0), cpv(-1.0, 25.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body37, body31, cpv(10.290554, -0.323263), cpv(-24.0, 7.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body41, cpv(-10.991393, -3.982372), cpv(-7.126554, -0.078016), 136.795468, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body42, cpv(-5.960682, 1.592289), cpv(-5.666216, 0.097126), 156.540730, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body40, cpv(-8.004386, 3.462825), cpv(-8.154027, 1.099584), 137.713471, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body38, cpv(-5.528358, -1.486873), cpv(-5.856120, -0.345049), 164.347193, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body26, cpv(-10.085259, 4.160069), cpv(-9.014863, 0.988559), 163.975608, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body28, cpv(-4.381524, -0.527090), cpv(-9.468829, -2.637465), 192.774480, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body17, cpv(-10.279898, 0.317976), cpv(-9.320982, -1.785916), 133.764719, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body19, cpv(-4.733688, -1.814557), cpv(-6.943138, -2.778374), 117.324337, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body24, cpv(-6.985015, 2.629900), cpv(-10.632912, -1.012510), 195.386796, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body22, cpv(-4.790359, -3.596924), cpv(-9.155259, -3.357905), 141.039002, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body11, cpv(-10.064655, 0.441662), cpv(-7.469154, 5.038749), 118.258192, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body14, cpv(-6.485793, 0.736263), cpv(-6.349771, 0.489624), 144.201248, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body6, cpv(-7.406337, -2.497596), cpv(-10.400721, 0.541913), 305.785873, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body8, cpv(-9.711537, 1.169418), cpv(-8.401848, -0.154062), 306.858273, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body10, cpv(-3.610899, -1.855283), cpv(-7.799701, -1.495002), 393.471727, 100.0, 3.0));
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
	BGBLIT(rc_bg12)
}


const kineticArtLevel Level68 = {
	68,
	"Level 68",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

