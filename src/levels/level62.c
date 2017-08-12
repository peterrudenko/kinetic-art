
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level61;
extern kineticArtLevel Level63;
#define PREV_LEVEL &Level61
#define NEXT_LEVEL &Level63


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 81, total joints: 81 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(122, 1, 1.0, 60.5, cpv(47.0, 63.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(120, 2, 1.0, 60.5, cpv(54.0, 97.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(121, 3, 1.0, 60.5, cpv(48.0, 151.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(122, 4, 1.0, 60.5, cpv(31.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(120, 5, 1.0, 60.5, cpv(33.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(121, 6, 1.0, 60.5, cpv(31.0, 306.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(122, 7, 1.0, 60.5, cpv(95.0, 91.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(120, 8, 1.0, 60.5, cpv(100.0, 140.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(121, 9, 1.0, 60.5, cpv(79.0, 196.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(122, 10, 1.0, 60.5, cpv(94.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(120, 11, 1.0, 60.5, cpv(102.0, 297.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(121, 12, 1.0, 60.5, cpv(70.0, 346.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(122, 13, 1.0, 60.5, cpv(134.0, 178.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(120, 14, 1.0, 60.5, cpv(158.0, 235.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(121, 15, 1.0, 60.5, cpv(155.0, 299.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(122, 16, 1.0, 60.5, cpv(140.0, 349.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(120, 17, 1.0, 60.5, cpv(203.0, 49.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(121, 18, 1.0, 60.5, cpv(183.0, 106.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(122, 19, 1.0, 60.5, cpv(206.0, 171.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(120, 20, 1.0, 60.5, cpv(225.0, 222.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(121, 21, 1.0, 60.5, cpv(204.0, 267.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(122, 22, 1.0, 60.5, cpv(205.0, 318.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(120, 23, 1.0, 60.5, cpv(251.0, 102.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(121, 24, 1.0, 60.5, cpv(273.0, 151.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(122, 25, 1.0, 60.5, cpv(261.0, 207.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(120, 26, 1.0, 60.5, cpv(257.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(121, 27, 1.0, 60.5, cpv(256.0, 306.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(122, 28, 1.0, 60.5, cpv(241.0, 354.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(120, 29, 1.0, 60.5, cpv(261.0, 411.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(121, 30, 1.0, 60.5, cpv(301.0, 35.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(122, 31, 1.0, 60.5, cpv(317.0, 99.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(120, 32, 1.0, 60.5, cpv(297.0, 156.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(121, 33, 1.0, 60.5, cpv(296.0, 218.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(122, 34, 1.0, 60.5, cpv(331.0, 157.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(120, 35, 1.0, 60.5, cpv(349.0, 209.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(121, 36, 1.0, 60.5, cpv(344.0, 280.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(122, 37, 1.0, 60.5, cpv(331.0, 334.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(120, 38, 1.0, 60.5, cpv(370.0, 41.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(121, 39, 1.0, 60.5, cpv(385.0, 79.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(122, 40, 1.0, 60.5, cpv(372.0, 138.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(120, 41, 1.0, 60.5, cpv(439.0, 158.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(121, 42, 1.0, 60.5, cpv(437.0, 218.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(122, 43, 1.0, 60.5, cpv(414.0, 288.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(120, 44, 1.0, 60.5, cpv(402.0, 345.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(121, 45, 1.0, 60.5, cpv(422.0, 394.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(122, 46, 1.0, 60.5, cpv(446.0, 33.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(120, 47, 1.0, 60.5, cpv(467.0, 82.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(121, 48, 1.0, 60.5, cpv(470.0, 142.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(122, 49, 1.0, 60.5, cpv(499.0, 223.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(120, 50, 1.0, 60.5, cpv(476.0, 276.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(121, 51, 1.0, 60.5, cpv(519.0, 128.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(122, 52, 1.0, 60.5, cpv(525.0, 174.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(120, 53, 1.0, 60.5, cpv(543.0, 236.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(121, 54, 1.0, 60.5, cpv(522.0, 297.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(122, 55, 1.0, 60.5, cpv(548.0, 33.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(120, 56, 1.0, 60.5, cpv(553.0, 76.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(121, 57, 1.0, 60.5, cpv(553.0, 137.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(122, 58, 1.0, 60.5, cpv(583.0, 196.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(120, 59, 1.0, 60.5, cpv(597.0, 253.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(121, 60, 1.0, 60.5, cpv(572.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(122, 61, 1.0, 60.5, cpv(474.0, 328.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(120, 62, 1.0, 60.5, cpv(494.0, 364.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(121, 63, 1.0, 60.5, cpv(543.0, 335.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(122, 64, 1.0, 60.5, cpv(539.0, 359.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(120, 65, 1.0, 60.5, cpv(520.0, 404.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(121, 66, 1.0, 60.5, cpv(626.0, 89.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(122, 67, 1.0, 60.5, cpv(627.0, 157.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(120, 68, 1.0, 60.5, cpv(650.0, 233.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(121, 69, 1.0, 60.5, cpv(612.0, 307.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(122, 70, 1.0, 60.5, cpv(644.0, 30.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(120, 71, 1.0, 60.5, cpv(683.0, 82.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(121, 72, 1.0, 60.5, cpv(667.0, 169.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(122, 73, 1.0, 60.5, cpv(711.0, 160.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(120, 74, 1.0, 60.5, cpv(698.0, 244.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(121, 75, 1.0, 60.5, cpv(671.0, 321.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(122, 76, 1.0, 60.5, cpv(697.0, 387.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(120, 77, 1.0, 60.5, cpv(743.0, 53.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(121, 78, 1.0, 60.5, cpv(752.0, 134.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(122, 79, 1.0, 60.5, cpv(745.0, 199.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(120, 80, 1.0, 60.5, cpv(742.0, 274.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(121, 81, 1.0, 60.5, cpv(762.0, 360.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(47.0, 63.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body7, cpv(95.0, 91.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body8, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body13, cpv(134.0, 178.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body17, cpv(203.0, 49.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body23, cpv(251.0, 102.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body24, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body27, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body28, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body30, cpv(301.0, 35.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body31, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body32, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body34, cpv(331.0, 157.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body34, body35, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body36, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body38, cpv(370.0, 41.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body39, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body40, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body41, cpv(439.0, 158.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body44, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body46, cpv(446.0, 33.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body47, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body48, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body49, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body49, body50, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body51, cpv(519.0, 128.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body52, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body53, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body54, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body55, cpv(548.0, 33.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body55, body56, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body56, body57, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body58, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body59, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body60, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body61, cpv(474.0, 328.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body61, body62, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body63, cpv(543.0, 335.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body63, body64, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body64, body65, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body66, cpv(626.0, 89.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body66, body67, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body68, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body68, body69, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body70, cpv(644.0, 30.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body70, body71, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body71, body72, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body73, cpv(711.0, 160.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body73, body74, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body75, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body75, body76, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body77, cpv(743.0, 53.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body77, body78, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body78, body79, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body79, body80, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body80, body81, cpvzero, cpvzero));
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
	BGBLIT(rc_bg02)
}


const kineticArtLevel Level62 = {
	62,
	"Level 62",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

