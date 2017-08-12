
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level08;
extern kineticArtLevel Level10;
#define PREV_LEVEL &Level08
#define NEXT_LEVEL &Level10


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 31, total joints: 31 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body22 = createPolyUniWrapper(9, 22, 1.0, inf, cpv(129.351281, 326.458626), cpv(-0.825279, 10.422578), cpvzero, -2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(10, 23, 1.0, inf, cpv(196.268070, 329.365895), cpv(-0.887857, 10.677857), cpvzero, 2.411084, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(11, 24, 1.0, 107.584618, cpv(161.479090, 261.098128), cpv(-15.432549, -1.984559), cpvzero, 0.121468, -1.589028, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(12, 25, 1.0, 107.584618, cpv(409.613402, 277.243957), cpv(15.217078, -7.429686), cpvzero, 3.077399, 0.707111, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(13, 26, 1.0, inf, cpv(437.713248, 348.700418), cpv(0.641986, -12.427685), cpvzero, -0.496423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(9, 27, 1.0, inf, cpv(672.755071, 341.283766), cpv(-0.122384, 3.887046), cpvzero, 2.366503, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(10, 28, 1.0, inf, cpv(608.810784, 340.163134), cpv(-0.135124, 4.161585), cpvzero, -2.396173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(11, 29, 1.0, 107.584618, cpv(640.847343, 272.916544), cpv(-2.937747, 5.336728), cpvzero, 0.012987, 1.306647, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(13, 30, 1.0, inf, cpv(380.082727, 342.879513), cpv(-3.657357, 21.214462), cpvzero, 0.722979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(11, 31, 1.0, 107.584618, cpv(279.377066, 185.540634), cpv(0.106920, -0.245827), cpvzero, 2.207786, 0.170157, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(11, 32, 1.0, 107.584618, cpv(314.237509, 182.189130), cpv(-2.500456, -4.213042), cpvzero, -1.788331, -0.485482, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(11, 33, 1.0, 107.584618, cpv(499.790846, 180.721290), cpv(7.656743, -4.131572), cpvzero, 2.247825, -0.085124, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(11, 34, 1.0, 107.584618, cpv(553.450520, 180.491813), cpv(-20.453177, -16.409079), cpvzero, -1.811910, -0.922961, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(9, 35, 1.0, 107.584618, cpv(293.425592, 212.357330), cpv(0.781982, -8.032882), cpvzero, 3.330174, -0.676653, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(9, 36, 1.0, 107.584618, cpv(515.453092, 209.618118), cpv(7.747267, 0.768285), cpvzero, 3.114978, 1.359542, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(19, 37, 1.0, inf, cpv(290.498300, 85.933960), cpv(1.583480, -6.600039), cpvzero, 3.113431, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(19, 38, 1.0, inf, cpv(526.848951, 88.244472), cpv(-16.986488, -7.828887), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(30, 39, 1.0, inf, cpv(645.761520, 164.089922), cpv(12.540696, -11.537551), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(30, 40, 1.0, inf, cpv(160.007158, 153.345590), cpv(62.120084, 5.142201), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(14, 41, 1.0, inf, cpv(405.539391, 151.724832), cpv(14.510304, -1.201415), cpvzero, 0.018516, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(28, 42, 1.0, 141.849016, cpv(411.367611, 316.744967), cpv(-15.856596, 3.705783), cpvzero, 3.271419, -0.753761, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(31, 44, 1.0, 141.849016, cpv(162.133809, 303.908894), cpv(-0.777486, 10.532677), cpvzero, 3.180615, 0.004215, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(31, 45, 1.0, 141.849016, cpv(641.149258, 315.738652), cpv(-0.222709, 4.037269), cpvzero, -3.101787, -0.003039, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(58, 46, 1.0, 179.365914, cpv(293.473168, 265.463375), cpv(-0.521787, -3.972493), cpvzero, 0.287857, 0.053810, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(58, 47, 1.0, 179.365914, cpv(509.157683, 265.823943), cpv(-4.255515, -2.056476), cpvzero, 0.271685, 0.975054, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(110, 50, 1.0, 63.887283, cpv(160.047517, 342.815518), cpv(-0.003710, 11.463357), cpvzero, 0.102297, 0.225828, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(110, 51, 1.0, 63.887283, cpv(638.099567, 355.979378), cpv(2.544301, 3.426969), cpvzero, 0.191535, 0.101316, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(113, 58, 1.0, inf, cpv(675.462217, 297.359423), cpv(-0.263505, 3.954320), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(113, 59, 1.0, inf, cpv(608.502150, 296.098769), cpv(-0.336421, 4.210256), cpvzero, 2.265535, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(113, 60, 1.0, inf, cpv(130.940706, 284.446904), cpv(-0.704321, 10.409267), cpvzero, 2.416363, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(113, 61, 1.0, inf, cpv(194.758562, 288.367338), cpv(-0.733242, 10.644966), cpvzero, -2.329652, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(164.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(295.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(410.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(521.0, 79.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(640.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body35, cpv(-1.0, -19.0), cpv(1.0, -13.0), 23.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body36, cpv(-2.0, -18.0), cpv(1.178973, -11.983740), 26.019224, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body37, cpv(2.0, 15.0), cpv(1.506445, -17.964705), 93.134312, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body38, cpv(1.790845, 14.028288), cpv(2.0, -17.0), 91.005494, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body37, cpv(7.651093, 2.541806), cpv(-1.576839, -15.050368), 76.118329, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body37, cpv(-6.060365, 2.876105), cpv(6.419989, -14.825105), 76.485293, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body38, cpv(-5.023835, 3.429444), cpv(7.0, -17.0), 71.589105, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body38, cpv(8.278999, 4.632297), cpv(-1.0, -17.0), 69.123079, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body40, cpv(-1.0, -15.0), cpv(0.0, 15.0), 70.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body24, cpv(0.770388, 14.014510), cpv(0.0, 12.0), 11.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body39, cpv(0.0, -13.0), cpv(0.0, 14.0), 75.006666, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body29, cpv(1.220164, 12.981186), cpv(0.0, 13.0), 11.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body41, cpv(1.0, 13.0), cpv(0.314761, 16.997086), 90.049986, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body25, cpv(2.0, 13.0), cpv(1.0, -11.0), 11.045361, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body30, body42, cpv(-0.617514, -12.791352), cpv(21.0, -19.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body42, cpv(0.366372, -11.174335), cpv(-24.0, -19.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body44, cpv(-1.0, -11.0), cpv(1.245734, -14.981594), 12.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body45, cpv(-2.0, -11.0), cpv(1.745512, -15.031739), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body44, cpv(0.937043, 10.775990), cpv(26.242376, -14.571813)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body44, cpv(-0.046552, 12.041505), cpv(-26.750504, -15.440548)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body45, cpv(1.639177, 12.095995), cpv(24.742209, -15.421514)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body45, cpv(0.116630, 11.313107), cpv(-24.284648, -16.590837)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body60, body44, cpv(-1.088505, -6.309925), cpv(26.766895, 14.440683)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body61, body44, cpv(0.500430, -7.794201), cpv(-26.193202, 11.572216)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body59, body45, cpv(-0.128037, -6.401844), cpv(28.250180, 14.523338)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body58, body45, cpv(1.414214, -8.485281), cpv(-26.758869, 14.455551)));
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
	BGBLIT(rc_bg24)
}


const kineticArtLevel Level09 = {
	9,
	"Level 9",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

