
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level74;
extern kineticArtLevel Level76;
#define PREV_LEVEL &Level74
#define NEXT_LEVEL &Level76


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

{  /* Total bodies: 39, total joints: 41 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(142, 1, 1.0, 85.083333, cpv(495.419020, 101.752194), cpv(-1.693457, 0.796404), cpvzero, -1.824280, 0.337739, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(142, 2, 1.0, 85.083333, cpv(724.527738, 264.555237), cpv(-7.297707, -4.904194), cpvzero, -0.767601, 0.191724, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(151, 3, 1.0, 85.083333, cpv(527.892764, 189.199551), cpv(0.952740, -1.209438), cpvzero, -2.080687, -0.372563, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(151, 4, 1.0, 85.083333, cpv(650.347349, 295.214724), cpv(-4.024654, -2.012751), cpvzero, -3.143776, -0.000366, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(150, 5, 1.0, 85.083333, cpv(241.165011, 255.342659), cpv(-4.974983, -6.617193), cpvzero, -0.911147, 0.177354, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(150, 6, 1.0, 85.083333, cpv(577.495572, 260.195977), cpv(-2.188347, -0.771141), cpvzero, -2.288827, -0.177170, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(151, 7, 1.0, 85.083333, cpv(287.013432, 184.293723), cpv(4.219269, -1.045943), cpvzero, -1.108980, 0.387708, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(151, 8, 1.0, 85.083333, cpv(165.918528, 290.477742), cpv(-0.200749, -2.603478), cpvzero, 0.031200, 0.515214, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(142, 9, 1.0, 85.083333, cpv(320.860980, 98.515025), cpv(9.105154, 1.581487), cpvzero, -1.277237, -0.045434, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(142, 10, 1.0, 85.083333, cpv(95.813560, 258.116326), cpv(-3.613703, 2.003534), cpvzero, 0.934052, 0.221788, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(191, 11, 1.0, inf, cpv(67.732899, 231.647941), cpv(2.241741, -1.413641), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(191, 12, 1.0, inf, cpv(753.329870, 241.230100), cpv(-0.169913, -0.072346), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(188, 13, 1.0, inf, cpv(331.869386, 51.460935), cpv(3.598588, 0.501994), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(188, 14, 1.0, inf, cpv(485.495598, 52.679093), cpv(-1.096810, -0.054634), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(193, 15, 1.0, 70.876156, cpv(204.474947, 322.306668), cpv(16.837537, 3.509738), cpvzero, -2.736732, -1.162281, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(193, 16, 1.0, 70.876156, cpv(615.457721, 325.048099), cpv(-16.745840, 3.663278), cpvzero, 2.805290, 0.738963, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(196, 17, 1.0, 70.876156, cpv(326.664984, 176.630003), cpv(-5.822657, 1.938378), cpvzero, -3.413188, 0.311276, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(196, 18, 1.0, 70.876156, cpv(482.769573, 183.636098), cpv(0.883186, 6.072966), cpvzero, -2.610172, -0.359921, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(10, 19, 1.0, 107.584618, cpv(268.654712, 225.111068), cpv(-0.975263, -3.369060), cpvzero, -0.965365, 0.051846, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(10, 20, 1.0, 107.584618, cpv(546.181516, 228.051562), cpv(-2.897835, 1.316465), cpvzero, 0.859514, -0.033987, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(9, 21, 1.0, 107.584618, cpv(307.233996, 144.517695), cpv(8.594855, 0.288143), cpvzero, -1.117513, -0.021950, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(9, 22, 1.0, 107.584618, cpv(504.303046, 149.868889), cpv(-8.216275, 2.404780), cpvzero, 0.955164, -0.136294, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(12, 23, 1.0, 107.584618, cpv(210.137007, 287.525191), cpv(-1.850966, -3.444636), cpvzero, -0.257160, -0.175762, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(12, 24, 1.0, 107.584618, cpv(607.864517, 291.712284), cpv(-2.934760, -2.405970), cpvzero, 0.408387, 0.051487, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(10, 25, 1.0, 107.584618, cpv(124.088813, 286.631079), cpv(0.916112, -4.118967), cpvzero, 0.426478, -0.457582, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(10, 26, 1.0, 107.584618, cpv(691.835316, 291.584719), cpv(-3.935878, -1.582618), cpvzero, -0.491485, -0.241904, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(11, 27, 1.0, 107.584618, cpv(447.868913, 251.567717), cpv(-66.637694, 98.245754), cpvzero, 78.642981, 2.420800, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(11, 28, 1.0, 107.584618, cpv(410.788581, 205.626240), cpv(110.946288, -83.916534), cpvzero, 74.024582, 8.605844, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(11, 29, 1.0, 107.584618, cpv(401.025120, 257.332927), cpv(-39.892157, -64.504295), cpvzero, 78.982586, -2.403128, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(30, 30, 2.0, 141.849016, cpv(427.690027, 302.283770), cpv(33.898956, -17.624785), cpvzero, 2.981792, 0.892630, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(108, 31, 1.0, 75.803873, cpv(464.444574, 351.800632), cpv(-1.929029, 29.371872), cpvzero, -2.610691, 3.332515, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(108, 32, 1.0, 75.803873, cpv(423.344353, 344.326869), cpv(-5.643180, -39.772817), cpvzero, -1.230348, 0.921180, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(118, 33, 1.0, inf, cpv(422.980458, 231.994032), cpv(0.047911, -0.308850), cpvzero, 77.333337, 4.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(31, 34, 1.0, inf, cpv(155.249089, 86.038257), cpv(-2.662785, 0.418407), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(31, 35, 1.0, inf, cpv(665.294751, 90.888263), cpv(-0.453816, 0.063653), cpvzero, -0.032247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(192, 36, 1.0, 47.856161, cpv(158.979796, 127.118723), cpv(-19.006273, 3.862727), cpvzero, 1.448184, 0.793419, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(191, 37, 1.0, 47.856161, cpv(147.502818, 152.503442), cpv(2.536704, 0.534922), cpvzero, 1.560829, -0.438614, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(191, 38, 1.0, 47.856161, cpv(667.159204, 127.747044), cpv(-1.114314, 0.090662), cpvzero, -0.226543, -0.042713, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(192, 39, 1.0, 47.856161, cpv(676.865287, 145.153016), cpv(-1.849428, 0.407935), cpvzero, -0.237201, 0.060546, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(335.0, 38.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(483.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(760.0, 232.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(62.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body0, cpvzero, cpv(423.0, 232.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body33, cpv(1.249978, 8.392708), cpv(-23.0, 12.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body33, cpv(0.0, 10.0), cpv(0.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body33, cpv(0.261349, 9.996584), cpv(21.0, 11.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body30, cpv(-1.0, 4.0), cpv(1.0, 16.0), 51.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body30, cpv(13.995155, 0.368294), cpv(5.0, -12.0), 13.152946, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body30, cpv(14.028781, -0.439648), cpv(-2.0, -13.0), 35.735137, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body21, cpv(1.356278, 9.957937), cpv(0.951943, 12.613239), 17.464249, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body22, cpv(1.414214, 9.899495), cpv(-0.694618, 15.248525), 16.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body24, cpv(1.512377, 8.106338), cpv(0.416777, 12.642243), 15.297059, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body23, cpv(0.310160, 8.994654), cpv(0.294086, 12.645692), 13.928388, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body35, cpv(1.0, -10.0), cpv(-1.354134, 10.962040), 15.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body35, cpv(0.0, -9.0), cpv(1.612065, 12.058244), 33.376639, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body34, cpv(-10.432855, 0.394369), cpv(-1.0, 13.0), 17.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body34, cpv(-10.196470, 0.178885), cpv(-4.0, 12.0), 43.416587, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(155.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(664.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body13, cpv(12.161402, -0.316703), cpv(0.0, 9.0), 17.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body9, cpv(14.606369, -3.956511), cpv(-12.351424, -0.665077), 11.180340, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body21, cpv(13.376890, -1.028992), cpv(-10.084642, -3.361547), 13.892444, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body7, cpv(12.195777, -4.501446), cpv(-13.033892, -0.342997), 12.727922, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body19, cpv(12.526460, -0.296325), cpv(-11.148930, -4.658473), 11.661904, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body5, cpv(12.498649, -6.616932), cpv(-12.957478, -1.050606), 13.416408, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body23, cpv(12.323999, -1.057854), cpv(-12.131041, -4.778895), 17.117243, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body8, cpv(12.0, -5.0), cpv(-14.139981, -0.246833), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body25, cpv(12.0, -1.0), cpv(-14.0, -5.0), 11.045361, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body10, cpv(8.0, -1.0), cpv(-13.0, 0.0), 18.110770, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body14, cpv(13.581995, -0.727607), cpv(0.0, 9.0), 17.117243, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body1, cpv(-13.793134, -8.170034), cpv(-12.126781, -0.970143), 11.401754, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body22, cpv(14.960006, 1.094635), cpv(12.503129, -2.381548), 11.180340, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body3, cpv(-13.568936, -5.820993), cpv(-12.795062, -0.535155), 9.219544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body20, cpv(14.764744, 0.048330), cpv(12.505100, -3.552813), 12.206556, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body6, cpv(-13.788380, -5.557030), cpv(-12.529492, -0.108742), 12.083046, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body24, cpv(14.554796, 0.397401), cpv(12.433854, -6.737899), 12.165525, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body4, cpv(-13.0, -8.0), cpv(-12.369092, 0.074513), 12.369317, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body26, cpv(-15.0, -2.0), cpv(14.0, -5.0), 10.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body2, cpv(-9.0, -1.0), cpv(12.0, -1.0), 16.031220, 100.0, 3.0));
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
	BGBLIT(rc_bg13)
}


const kineticArtLevel Level75 = {
	75,
	"Level 75",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

