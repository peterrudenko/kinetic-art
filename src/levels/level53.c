
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level52;
extern kineticArtLevel Level54;
#define PREV_LEVEL &Level52
#define NEXT_LEVEL &Level54


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 69, total joints: 74 */
	//bg10
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(198, 1, 1.0, inf, cpv(43.0, 33.0), cpv(21.0, 12.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(197, 2, 1.0, inf, cpv(89.0, 63.0), cpv(22.0, 56.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(198, 3, 1.0, inf, cpv(144.0, 82.0), cpv(19.0, 17.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(197, 4, 1.0, inf, cpv(200.0, 85.0), cpv(22.0, 4.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(198, 5, 1.0, inf, cpv(253.0, 79.0), cpv(21.0, -67.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(197, 6, 1.0, inf, cpv(307.0, 66.0), cpv(27.0, 27.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(198, 7, 1.0, inf, cpv(357.0, 47.0), cpv(29.0, 46.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(197, 8, 1.0, inf, cpv(404.0, 35.0), cpv(29.0, -17.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(198, 9, 1.0, inf, cpv(451.0, 47.0), cpv(19.0, -1.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(197, 10, 1.0, inf, cpv(501.0, 66.0), cpv(29.0, -51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(198, 11, 1.0, inf, cpv(549.0, 84.0), cpv(17.0, 51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(197, 12, 1.0, inf, cpv(602.0, 93.0), cpv(27.0, 24.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(198, 13, 1.0, inf, cpv(657.0, 84.0), cpv(28.0, 39.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(197, 14, 1.0, inf, cpv(707.0, 64.0), cpv(24.0, -34.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(198, 15, 1.0, inf, cpv(747.0, 39.0), cpv(24.0, 68.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(193, 16, 1.0, 70.876156, cpv(296.0, 106.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(193, 17, 1.0, 70.876156, cpv(506.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(196, 18, 1.0, 70.876156, cpv(347.0, 125.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(196, 19, 1.0, 70.876156, cpv(455.0, 126.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(195, 20, 1.0, 70.876156, cpv(404.0, 142.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(187, 21, 1.0, 47.856161, cpv(743.0, 79.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(187, 22, 1.0, 47.856161, cpv(49.0, 73.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(188, 23, 1.0, 47.856161, cpv(65.0, 118.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(188, 24, 1.0, 47.856161, cpv(731.0, 122.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(191, 25, 1.0, 47.856161, cpv(91.0, 158.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(191, 26, 1.0, 47.856161, cpv(708.0, 163.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(192, 27, 1.0, 47.856161, cpv(124.0, 197.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(192, 28, 1.0, 47.856161, cpv(680.0, 202.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(189, 29, 1.0, 47.856161, cpv(158.0, 228.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(189, 30, 1.0, 47.856161, cpv(645.0, 234.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(190, 31, 1.0, 47.856161, cpv(200.0, 251.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(190, 32, 1.0, 47.856161, cpv(603.0, 255.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(189, 33, 1.0, 47.856161, cpv(244.0, 263.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(189, 34, 1.0, 47.856161, cpv(560.0, 262.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(192, 35, 1.0, 47.856161, cpv(284.0, 252.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(192, 36, 1.0, 47.856161, cpv(522.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(191, 37, 1.0, 47.856161, cpv(318.0, 228.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(191, 38, 1.0, 47.856161, cpv(488.0, 229.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(188, 39, 1.0, 47.856161, cpv(336.0, 191.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(188, 40, 1.0, 47.856161, cpv(465.0, 196.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(187, 41, 1.0, 47.856161, cpv(346.0, 157.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(187, 42, 1.0, 47.856161, cpv(455.0, 157.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(184, 43, 1.0, 88.659334, cpv(406.0, 178.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(183, 44, 1.0, 88.659334, cpv(406.0, 225.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(185, 45, 1.0, inf, cpv(393.0, 268.0), cpvzero, cpvzero, 2.064738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(181, 46, 1.0, inf, cpv(365.0, 304.0), cpvzero, cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(181, 47, 1.0, inf, cpv(449.0, 304.0), cpvzero, cpvzero, 0.657889, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(185, 48, 1.0, inf, cpv(420.0, 268.0), cpvzero, cpvzero, 1.034985, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(182, 49, 1.0, inf, cpv(326.0, 330.0), cpvzero, cpvzero, -0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(182, 50, 1.0, inf, cpv(488.0, 329.0), cpvzero, cpvzero, -2.920278, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(186, 51, 1.0, inf, cpv(534.0, 338.0), cpvzero, cpvzero, -3.108272, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(186, 52, 1.0, inf, cpv(280.0, 340.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(182, 53, 1.0, inf, cpv(659.0, 286.0), cpvzero, cpvzero, 2.259721, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(182, 54, 1.0, inf, cpv(155.0, 282.0), cpvzero, cpvzero, 0.832981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(184, 55, 1.0, inf, cpv(580.0, 334.0), cpvzero, cpvzero, 2.812543, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(184, 56, 1.0, inf, cpv(235.0, 332.0), cpvzero, cpvzero, 0.369334, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(186, 57, 1.0, inf, cpv(623.0, 316.0), cpvzero, cpvzero, 2.506566, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(186, 58, 1.0, inf, cpv(192.0, 311.0), cpvzero, cpvzero, 0.580003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(181, 59, 1.0, inf, cpv(686.0, 248.0), cpvzero, cpvzero, 2.045196, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(181, 60, 1.0, inf, cpv(123.0, 246.0), cpvzero, cpvzero, 0.950547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(185, 61, 1.0, inf, cpv(101.0, 207.0), cpvzero, cpvzero, -1.932526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(185, 62, 1.0, inf, cpv(706.0, 206.0), cpvzero, cpvzero, 1.922241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(105, 63, 1.0, 75.803873, cpv(404.0, 295.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(109, 64, 1.0, 75.803873, cpv(611.0, 354.0), cpvzero, cpvzero, -1.684231, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(109, 65, 1.0, 75.803873, cpv(203.0, 349.0), cpvzero, cpvzero, -1.679738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(107, 66, 1.0, 75.803873, cpv(124.0, 290.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(107, 67, 1.0, 75.803873, cpv(687.0, 295.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(106, 70, 1.0, 75.803873, cpv(310.0, 365.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(106, 71, 1.0, 75.803873, cpv(498.0, 359.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(43.0, 23.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(89.0, 53.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(144.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(200.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(253.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(307.0, 56.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(357.0, 37.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(404.0, 25.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(451.0, 37.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(501.0, 56.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(549.0, 74.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(602.0, 83.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(657.0, 74.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(707.0, 54.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(747.0, 29.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body49, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body49, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body56, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body56, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body54, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body54, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body61, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body61, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body34, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body34, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body30, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body30, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body48, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body48, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body50, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body50, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body55, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body55, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body53, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body53, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body62, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body62, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body44, cpv(14.0, -0.0), cpv(15.0, 0.0), 41.048752, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body49, cpv(14.0, -0.0), cpv(-15.598408, 1.299867), 14.142136, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body58, cpv(13.140385, -0.574698), cpv(13.037256, -0.173061), 18.110770, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body60, cpv(14.0, -0.0), cpv(10.927278, 5.347391), 18.027756, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body50, cpv(15.0, -0.0), cpv(-11.073171, -3.658537), 9.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body57, cpv(16.123554, -0.176076), cpv(16.609573, 1.059284), 13.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body59, cpv(13.0, -0.0), cpv(10.266084, -1.899346), 24.331050, 200.0, 0.0));
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
	BGBLIT(rc_bg10)
}


const kineticArtLevel Level53 = {
	53,
	"Level 53",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

