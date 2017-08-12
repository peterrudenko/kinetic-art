
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level34;
extern kineticArtLevel Level36;
#define PREV_LEVEL &Level34
#define NEXT_LEVEL &Level36


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 150, total joints: 191 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(121, 1, 1.0, 60.5, cpv(45.0, 64.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(122, 2, 1.0, 60.5, cpv(70.0, 65.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(123, 3, 1.0, 60.5, cpv(96.0, 68.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(124, 4, 1.0, 60.5, cpv(125.0, 76.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(120, 5, 1.0, 60.5, cpv(143.0, 94.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(121, 6, 1.0, 60.5, cpv(154.0, 119.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(122, 7, 1.0, 60.5, cpv(156.0, 144.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(123, 8, 1.0, 60.5, cpv(143.0, 167.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(124, 9, 1.0, 60.5, cpv(121.0, 184.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(120, 10, 1.0, 60.5, cpv(97.0, 196.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(121, 11, 1.0, 60.5, cpv(76.0, 211.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(122, 12, 1.0, 60.5, cpv(55.0, 227.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(123, 13, 1.0, 60.5, cpv(42.0, 250.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(124, 14, 1.0, 60.5, cpv(34.0, 274.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(120, 15, 1.0, 60.5, cpv(34.0, 303.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(121, 16, 1.0, 60.5, cpv(39.0, 330.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(122, 17, 1.0, 60.5, cpv(51.0, 352.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(123, 18, 1.0, 60.5, cpv(66.0, 374.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(124, 19, 1.0, 60.5, cpv(87.0, 388.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(120, 20, 1.0, 60.5, cpv(112.0, 400.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(121, 21, 1.0, 60.5, cpv(138.0, 403.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(122, 22, 1.0, 60.5, cpv(165.0, 404.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(123, 23, 1.0, 60.5, cpv(197.0, 403.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(124, 24, 1.0, 60.5, cpv(220.0, 393.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(120, 25, 1.0, 60.5, cpv(242.0, 378.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(121, 26, 1.0, 60.5, cpv(261.0, 355.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(122, 27, 1.0, 60.5, cpv(272.0, 331.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(123, 28, 1.0, 60.5, cpv(276.0, 306.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(124, 29, 1.0, 60.5, cpv(277.0, 280.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(120, 30, 1.0, 60.5, cpv(271.0, 255.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(121, 31, 1.0, 60.5, cpv(256.0, 234.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(122, 32, 1.0, 60.5, cpv(233.0, 219.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(123, 33, 1.0, 60.5, cpv(209.0, 210.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(124, 34, 1.0, 60.5, cpv(183.0, 210.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(120, 35, 1.0, 60.5, cpv(153.0, 215.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(121, 36, 1.0, 60.5, cpv(125.0, 224.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(122, 37, 1.0, 60.5, cpv(106.0, 242.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(123, 38, 1.0, 60.5, cpv(94.0, 265.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(124, 39, 1.0, 60.5, cpv(92.0, 290.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(120, 40, 1.0, 60.5, cpv(101.0, 314.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(121, 41, 1.0, 60.5, cpv(119.0, 332.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(122, 42, 1.0, 60.5, cpv(145.0, 340.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(123, 43, 1.0, 60.5, cpv(177.0, 340.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(124, 44, 1.0, 60.5, cpv(200.0, 328.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(120, 45, 1.0, 60.5, cpv(211.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(121, 46, 1.0, 60.5, cpv(207.0, 279.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(122, 47, 1.0, 60.5, cpv(186.0, 265.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(123, 48, 1.0, 60.5, cpv(162.0, 276.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(110, 49, 1.0, 63.887283, cpv(200.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(111, 50, 1.0, 63.887283, cpv(205.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(112, 51, 1.0, 63.887283, cpv(221.0, 86.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(113, 52, 1.0, 63.887283, cpv(242.0, 72.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(114, 53, 1.0, 63.887283, cpv(265.0, 61.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(110, 54, 1.0, 63.887283, cpv(291.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(111, 55, 1.0, 63.887283, cpv(320.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(112, 56, 1.0, 63.887283, cpv(348.0, 54.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(113, 57, 1.0, 63.887283, cpv(374.0, 61.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(114, 58, 1.0, 63.887283, cpv(394.0, 83.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(110, 59, 1.0, 63.887283, cpv(402.0, 112.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(111, 60, 1.0, 63.887283, cpv(404.0, 139.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(112, 61, 1.0, 63.887283, cpv(391.0, 161.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(113, 62, 1.0, 63.887283, cpv(368.0, 179.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(114, 63, 1.0, 63.887283, cpv(345.0, 190.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(110, 64, 1.0, 63.887283, cpv(315.0, 195.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(111, 65, 1.0, 63.887283, cpv(284.0, 186.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(112, 66, 1.0, 63.887283, cpv(272.0, 159.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(113, 67, 1.0, 63.887283, cpv(282.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(114, 68, 1.0, 63.887283, cpv(303.0, 117.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(110, 69, 1.0, 63.887283, cpv(331.0, 109.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(122, 146, 1.0, 60.5, cpv(620.0, 252.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(121, 145, 1.0, 60.5, cpv(629.0, 227.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(120, 144, 1.0, 60.5, cpv(629.0, 199.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(124, 143, 1.0, 60.5, cpv(607.0, 182.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(123, 142, 1.0, 60.5, cpv(585.0, 194.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(122, 141, 1.0, 60.5, cpv(577.0, 220.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(121, 140, 1.0, 60.5, cpv(577.0, 246.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(120, 139, 1.0, 60.5, cpv(579.0, 276.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(124, 138, 1.0, 60.5, cpv(591.0, 298.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(123, 137, 1.0, 60.5, cpv(615.0, 306.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(122, 136, 1.0, 60.5, cpv(643.0, 307.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(121, 135, 1.0, 60.5, cpv(663.0, 289.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(120, 134, 1.0, 60.5, cpv(671.0, 262.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(124, 133, 1.0, 60.5, cpv(674.0, 232.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(123, 132, 1.0, 60.5, cpv(674.0, 206.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(122, 131, 1.0, 60.5, cpv(670.0, 181.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(121, 130, 1.0, 60.5, cpv(655.0, 159.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(120, 129, 1.0, 60.5, cpv(630.0, 145.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(124, 128, 1.0, 60.5, cpv(602.0, 144.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(123, 127, 1.0, 60.5, cpv(573.0, 149.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(122, 126, 1.0, 60.5, cpv(546.0, 168.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(122, 91, 1.0, 60.5, cpv(432.0, 33.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(123, 92, 1.0, 60.5, cpv(442.0, 57.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(124, 93, 1.0, 60.5, cpv(456.0, 80.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(120, 94, 1.0, 60.5, cpv(481.0, 94.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(121, 95, 1.0, 60.5, cpv(505.0, 102.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(122, 96, 1.0, 60.5, cpv(531.0, 107.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(123, 97, 1.0, 60.5, cpv(557.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(124, 98, 1.0, 60.5, cpv(583.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(120, 99, 1.0, 60.5, cpv(611.0, 107.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(121, 100, 1.0, 60.5, cpv(635.0, 99.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(122, 101, 1.0, 60.5, cpv(660.0, 96.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(123, 102, 1.0, 60.5, cpv(686.0, 97.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(124, 103, 1.0, 60.5, cpv(710.0, 113.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(120, 104, 1.0, 60.5, cpv(729.0, 138.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(121, 105, 1.0, 60.5, cpv(738.0, 162.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(122, 106, 1.0, 60.5, cpv(740.0, 187.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(123, 107, 1.0, 60.5, cpv(740.0, 213.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(124, 108, 1.0, 60.5, cpv(738.0, 239.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(120, 109, 1.0, 60.5, cpv(732.0, 265.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(121, 110, 1.0, 60.5, cpv(725.0, 291.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(122, 111, 1.0, 60.5, cpv(715.0, 314.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(123, 112, 1.0, 60.5, cpv(705.0, 339.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(124, 113, 1.0, 60.5, cpv(691.0, 360.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(120, 114, 1.0, 60.5, cpv(670.0, 375.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(121, 115, 1.0, 60.5, cpv(645.0, 387.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(122, 116, 1.0, 60.5, cpv(618.0, 389.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(123, 117, 1.0, 60.5, cpv(593.0, 382.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(124, 118, 1.0, 60.5, cpv(569.0, 371.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(120, 119, 1.0, 60.5, cpv(547.0, 350.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(121, 120, 1.0, 60.5, cpv(534.0, 328.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(122, 121, 1.0, 60.5, cpv(524.0, 302.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(123, 122, 1.0, 60.5, cpv(524.0, 276.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(124, 123, 1.0, 60.5, cpv(525.0, 247.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(120, 124, 1.0, 60.5, cpv(527.0, 218.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(121, 125, 1.0, 60.5, cpv(533.0, 191.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(113, 147, 1.0, 63.887283, cpv(451.0, 123.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(114, 148, 1.0, 63.887283, cpv(460.0, 150.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(110, 149, 1.0, 63.887283, cpv(463.0, 175.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(111, 150, 1.0, 63.887283, cpv(453.0, 199.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(112, 151, 1.0, 63.887283, cpv(436.0, 219.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(113, 152, 1.0, 63.887283, cpv(411.0, 231.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(114, 153, 1.0, 63.887283, cpv(386.0, 239.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(110, 154, 1.0, 63.887283, cpv(360.0, 247.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(111, 155, 1.0, 63.887283, cpv(339.0, 264.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(112, 156, 1.0, 63.887283, cpv(327.0, 287.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(113, 157, 1.0, 63.887283, cpv(327.0, 313.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(114, 158, 1.0, 63.887283, cpv(342.0, 336.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(110, 159, 1.0, 63.887283, cpv(361.0, 354.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(111, 160, 1.0, 63.887283, cpv(383.0, 367.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(112, 161, 1.0, 63.887283, cpv(411.0, 367.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(113, 162, 1.0, 63.887283, cpv(439.0, 365.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(114, 163, 1.0, 63.887283, cpv(464.0, 355.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(110, 164, 1.0, 63.887283, cpv(474.0, 332.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(111, 165, 1.0, 63.887283, cpv(473.0, 306.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(112, 166, 1.0, 63.887283, cpv(460.0, 283.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(113, 167, 1.0, 63.887283, cpv(432.0, 274.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(114, 168, 1.0, 63.887283, cpv(407.0, 279.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(110, 169, 1.0, 63.887283, cpv(384.0, 293.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(111, 170, 1.0, 63.887283, cpv(389.0, 318.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(112, 171, 1.0, 63.887283, cpv(420.0, 324.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(45.0, 64.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
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
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body36, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body39, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body40, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body44, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body45, body46, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body47, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body48, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body49, cpv(200.0, 133.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body49, body50, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body50, body51, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body52, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body53, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body54, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body55, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body55, body56, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body56, body57, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body58, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body59, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body60, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body61, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body61, body62, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body62, body63, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body63, body64, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body64, body65, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body65, body66, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body66, body67, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body68, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body68, body69, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body0, cpv(-4.0, -6.0), cpv(157.0, 257.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body0, cpv(2.0, -8.0), cpv(214.0, 256.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body0, cpv(-1.0, -7.0), cpv(186.0, 249.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body0, cpv(-6.0, -7.0), cpv(84.0, 249.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body0, cpv(-5.0, -7.0), cpv(123.0, 203.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body34, body0, cpv(-3.0, -6.0), cpv(187.0, 190.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body0, cpv(5.0, -5.0), cpv(240.0, 200.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body0, cpv(3.0, -3.0), cpv(278.0, 239.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body0, cpv(-3.0, -5.0), cpv(32.0, 231.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body0, cpv(-4.0, -7.0), cpv(70.0, 190.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body0, cpv(-3.0, -7.0), cpv(114.0, 165.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body0, cpv(5.0, -2.0), cpv(167.0, 104.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body0, cpv(3.0, -9.0), cpv(99.0, 48.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body0, cpv(1.0, -10.0), cpv(242.0, 50.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body0, cpv(0.0, -9.0), cpv(293.0, 38.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body56, body0, cpv(3.0, -7.0), cpv(352.0, 36.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body0, cpv(7.0, -5.0), cpv(406.0, 68.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body69, body0, cpv(-4.0, -9.0), cpv(327.0, 86.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body0, cpv(-7.0, -8.0), cpv(271.0, 111.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body145, body146, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body144, body145, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body143, body144, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body142, body143, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body141, body142, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body140, body141, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body139, body140, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body138, body139, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body137, body138, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body136, body137, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body135, body136, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body134, body135, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body133, body134, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body132, body133, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body131, body132, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body130, body131, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body129, body130, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body128, body129, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body127, body128, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body126, body127, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body125, body126, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body91, cpv(432.0, 33.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body91, body92, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body92, body93, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body93, body94, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body94, body95, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body95, body96, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body96, body97, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body97, body98, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body98, body99, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body99, body100, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body100, body101, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body101, body102, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body102, body103, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body103, body104, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body104, body105, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body105, body106, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body106, body107, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body107, body108, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body108, body109, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body109, body110, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body110, body111, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body111, body112, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body112, body113, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body113, body114, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body114, body115, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body115, body116, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body116, body117, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body117, body118, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body118, body119, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body119, body120, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body120, body121, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body121, body122, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body122, body123, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body123, body124, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body124, body125, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body147, cpv(451.0, 123.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body147, body148, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body148, body149, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body149, body150, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body150, body151, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body151, body152, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body152, body153, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body153, body154, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body154, body155, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body155, body156, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body156, body157, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body157, body158, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body158, body159, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body159, body160, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body160, body161, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body161, body162, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body162, body163, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body163, body164, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body164, body165, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body165, body166, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body166, body167, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body167, body168, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body168, body169, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body169, body170, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body170, body171, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body95, body0, cpv(2.0, -10.0), cpv(507.0, 85.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body99, body0, cpv(-3.0, -8.0), cpv(610.0, 86.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body102, body0, cpv(3.0, -7.0), cpv(691.0, 83.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body104, body0, cpv(2.0, -9.0), cpv(735.0, 122.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body112, body0, cpv(-2.0, -8.0), cpv(703.0, 324.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body118, body0, cpv(0.0, -6.0), cpv(570.0, 354.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body121, body0, cpv(-5.0, -7.0), cpv(514.0, 292.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body124, body0, cpv(-5.0, -3.0), cpv(517.0, 206.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body127, body0, cpv(0.0, -5.0), cpv(574.0, 134.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body129, body0, cpv(5.0, -5.0), cpv(640.0, 126.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body131, body0, cpv(6.0, 1.0), cpv(681.0, 168.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body141, body0, cpv(-2.0, -2.0), cpv(567.0, 204.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body143, body0, cpv(0.0, -10.0), cpv(607.0, 162.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body144, body0, cpv(5.0, -5.0), cpv(641.0, 187.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body149, body0, cpv(7.0, -6.0), cpv(480.0, 162.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body153, body0, cpv(-5.0, -7.0), cpv(382.0, 221.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body155, body0, cpv(-7.0, -8.0), cpv(329.0, 245.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body157, body0, cpv(-7.0, -6.0), cpv(312.0, 298.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body165, body0, cpv(8.0, -5.0), cpv(484.0, 288.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body167, body0, cpv(2.0, -9.0), cpv(436.0, 255.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body169, body0, cpv(-8.0, -11.0), cpv(375.0, 271.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body171, body0, cpv(6.0, -7.0), cpv(429.0, 310.0)));
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


const kineticArtLevel Level35 = {
	35,
	"Level 35",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

