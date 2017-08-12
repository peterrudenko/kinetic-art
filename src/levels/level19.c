
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level18;
extern kineticArtLevel Level20;
#define PREV_LEVEL &Level18
#define NEXT_LEVEL &Level20


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 45, total joints: 67 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(6, 1, 1.0, 128.0, cpv(55.0, 309.225000), cpv(0.0, 16.333334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(8, 2, 1.0, 128.0, cpv(110.0, 309.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(8, 3, 1.0, 128.0, cpv(210.0, 309.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(8, 4, 1.0, 128.0, cpv(308.0, 310.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(8, 5, 1.0, 128.0, cpv(405.0, 312.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(8, 6, 1.0, 128.0, cpv(497.0, 312.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(8, 7, 1.0, 128.0, cpv(587.0, 311.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(8, 8, 1.0, 128.0, cpv(680.0, 311.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(6, 9, 1.0, 128.0, cpv(162.0, 309.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(6, 10, 1.0, 128.0, cpv(259.0, 309.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(6, 11, 1.0, 128.0, cpv(355.0, 310.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(6, 12, 1.0, 128.0, cpv(453.0, 312.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(6, 13, 1.0, 128.0, cpv(541.0, 312.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(6, 14, 1.0, 128.0, cpv(633.0, 311.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(6, 15, 1.0, 128.0, cpv(729.0, 312.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(4, 16, 1.0, 128.0, cpv(57.0, 182.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(4, 17, 1.0, 128.0, cpv(153.0, 182.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(4, 18, 1.0, 128.0, cpv(255.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(4, 19, 1.0, 128.0, cpv(354.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(4, 20, 1.0, 128.0, cpv(452.0, 185.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(4, 21, 1.0, 128.0, cpv(546.0, 187.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(4, 22, 1.0, 128.0, cpv(638.0, 189.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(4, 23, 1.0, 128.0, cpv(731.0, 189.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(7, 24, 1.0, 128.0, cpv(106.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(7, 25, 1.0, 128.0, cpv(203.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(7, 26, 1.0, 128.0, cpv(304.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(7, 27, 1.0, 128.0, cpv(403.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(7, 28, 1.0, 128.0, cpv(499.0, 187.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(7, 29, 1.0, 128.0, cpv(591.0, 188.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(7, 30, 1.0, 128.0, cpv(684.0, 190.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(5, 31, 1.0, 128.0, cpv(46.0, 56.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(5, 32, 1.0, 128.0, cpv(157.0, 55.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(5, 33, 1.0, 128.0, cpv(258.0, 56.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(5, 34, 1.0, 128.0, cpv(358.0, 55.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(5, 35, 1.0, 128.0, cpv(453.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(5, 36, 1.0, 128.0, cpv(546.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(5, 37, 1.0, 128.0, cpv(638.0, 55.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(5, 38, 1.0, 128.0, cpv(731.0, 56.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(95, 39, 1.0, 142.734280, cpv(100.0, 57.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(96, 40, 1.0, 142.734280, cpv(208.0, 59.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(95, 41, 1.0, 142.734280, cpv(308.0, 57.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(96, 42, 1.0, 142.734280, cpv(405.0, 56.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(96, 43, 1.0, 142.734280, cpv(593.0, 56.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(95, 44, 1.0, 142.734280, cpv(500.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(95, 45, 1.0, 142.734280, cpv(686.0, 55.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpv(-11.0, -12.225000), cpv(25.0, 278.0), 26.870058, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpv(-1.0, -17.0), cpv(160.0, 276.0), 16.031220, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpv(-1.0, -16.0), cpv(258.0, 276.0), 17.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpv(0.0, -17.0), cpv(354.0, 276.0), 17.029386, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpv(0.0, -17.0), cpv(452.0, 277.0), 18.027756, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpv(-1.0, -17.0), cpv(538.0, 279.0), 16.124515, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpv(10.0, -12.0), cpv(752.0, 285.0), 19.849433, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpv(16.0, -1.225000), cpv(-16.0, -1.0), 23.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body9, cpv(16.0, -1.0), cpv(-17.0, -1.0), 19.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body3, cpv(15.0, 0.0), cpv(-16.0, 0.0), 17.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body10, cpv(16.0, 0.0), cpv(-17.0, 0.0), 16.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body4, cpv(17.0, -1.0), cpv(-16.0, -1.0), 16.031220, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body11, cpv(16.0, -1.0), cpv(-16.0, 0.0), 15.033296, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body11, cpv(16.0, -1.0), cpv(-16.0, 0.0), 15.033296, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body5, cpv(16.0, 1.0), cpv(-16.0, 0.0), 18.027756, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body12, cpv(16.0, 0.0), cpv(-16.0, 0.0), 16.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body6, cpv(16.0, 0.0), cpv(-16.0, 0.0), 12.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body13, cpv(16.0, 0.0), cpv(-15.0, 0.0), 13.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body7, cpv(16.0, -1.0), cpv(-17.0, 1.0), 13.038405, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body14, cpv(16.0, 1.0), cpv(-17.0, -1.0), 13.152946, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body8, cpv(17.0, 0.0), cpv(-17.0, 1.0), 13.038405, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body15, cpv(17.0, 0.0), cpv(-16.0, -1.0), 16.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpv(2.0, -16.0), cpv(637.0, 282.0), 13.152946, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpv(-12.0, -11.0), cpv(25.0, 153.0), 26.907248, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body16, cpv(-17.0, 1.0), cpv(17.0, 2.0), 15.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body24, cpv(-16.0, 2.0), cpv(17.0, 1.0), 14.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body17, cpv(-16.0, 1.0), cpv(17.0, 3.0), 17.029386, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body25, cpv(-16.0, 1.0), cpv(17.0, 1.0), 19.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body18, cpv(-17.0, 1.0), cpv(17.0, 1.0), 15.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body26, cpv(-16.0, 1.0), cpv(16.0, 0.0), 18.027756, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body19, cpv(-15.0, 0.0), cpv(17.0, 0.0), 17.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body27, cpv(-17.0, 0.0), cpv(17.0, 2.0), 15.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body20, cpv(-17.0, 0.0), cpv(17.0, 2.0), 13.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body28, cpv(-16.0, 1.0), cpv(16.0, 1.0), 15.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body21, cpv(-17.0, -1.0), cpv(16.0, -1.0), 12.041595, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body29, cpv(-17.0, -1.0), cpv(17.0, 0.0), 13.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body22, cpv(-17.0, -1.0), cpv(17.0, 0.0), 12.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body30, cpv(-16.0, 0.0), cpv(17.0, -1.0), 14.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpv(12.0, -12.0), cpv(762.0, 160.0), 25.495098, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpv(0.0, -17.0), cpv(152.0, 148.0), 17.029386, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpv(1.0, -16.0), cpv(255.0, 149.0), 18.027756, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpv(1.0, -16.0), cpv(355.0, 151.0), 16.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpv(0.0, -16.0), cpv(452.0, 151.0), 18.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpv(0.0, -16.0), cpv(545.0, 154.0), 17.029386, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpv(-1.0, -16.0), cpv(636.0, 154.0), 19.026298, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpv(-11.0, -13.0), cpv(21.0, 26.0), 22.022716, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body39, cpv(16.0, -1.0), cpv(-21.0, -1.0), 17.029386, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body32, cpv(19.0, 0.0), cpv(-17.0, 1.0), 21.023796, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body40, cpv(16.0, 1.0), cpv(-20.0, -1.0), 15.132746, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body33, cpv(20.0, 1.0), cpv(-17.0, 0.0), 13.601471, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body41, cpv(17.0, 0.0), cpv(-20.0, -1.0), 13.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body34, cpv(20.0, 1.0), cpv(-16.0, 1.0), 14.142136, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body42, cpv(16.0, 1.0), cpv(-20.0, 0.0), 11.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body35, cpv(20.0, 0.0), cpv(-16.0, 0.0), 12.165525, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body44, cpv(16.0, -1.0), cpv(-19.0, 0.0), 12.041595, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body36, cpv(19.0, 0.0), cpv(-16.0, 0.0), 11.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body43, cpv(16.0, 1.0), cpv(-19.0, 0.0), 12.041595, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body37, cpv(20.0, 0.0), cpv(-16.0, 0.0), 9.055385, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body45, cpv(16.0, 0.0), cpv(-20.0, 0.0), 12.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body38, cpv(19.0, 0.0), cpv(-17.0, 0.0), 9.055385, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpv(16.0, -7.0), cpv(763.0, 26.0), 28.017851, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpv(0.0, -17.0), cpv(156.0, 23.0), 15.033296, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpv(-1.0, -16.0), cpv(257.0, 23.0), 17.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpv(-1.0, -16.0), cpv(355.0, 23.0), 16.124515, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpv(-1.0, -16.0), cpv(451.0, 22.0), 16.031220, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpv(0.0, -16.0), cpv(544.0, 23.0), 15.132746, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpv(-1.0, -17.0), cpv(637.0, 24.0), 14.0, 10.0, 0.0));
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
	BGBLIT(rc_bg21)
}


const kineticArtLevel Level19 = {
	19,
	"Level 19",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

