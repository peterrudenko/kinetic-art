
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level28;
extern kineticArtLevel Level30;
#define PREV_LEVEL &Level28
#define NEXT_LEVEL &Level30


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 94, total joints: 120 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(122, 1, 1.0, 60.5, cpv(33.0, 33.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(123, 2, 1.0, 60.5, cpv(40.0, 59.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(124, 3, 1.0, 60.5, cpv(44.0, 84.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(120, 4, 1.0, 60.5, cpv(55.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(121, 5, 1.0, 60.5, cpv(75.0, 124.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(122, 6, 1.0, 60.5, cpv(101.0, 136.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(123, 7, 1.0, 60.5, cpv(128.0, 139.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(124, 8, 1.0, 60.5, cpv(155.0, 139.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(120, 9, 1.0, 60.5, cpv(180.0, 128.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(121, 10, 1.0, 60.5, cpv(202.0, 111.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(122, 11, 1.0, 60.5, cpv(222.0, 94.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(123, 12, 1.0, 60.5, cpv(247.0, 88.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(124, 13, 1.0, 60.5, cpv(272.0, 91.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(120, 14, 1.0, 60.5, cpv(294.0, 103.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(121, 15, 1.0, 60.5, cpv(314.0, 119.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(122, 16, 1.0, 60.5, cpv(335.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(123, 17, 1.0, 60.5, cpv(363.0, 134.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(124, 18, 1.0, 60.5, cpv(387.0, 126.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(120, 19, 1.0, 60.5, cpv(411.0, 112.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(121, 20, 1.0, 60.5, cpv(434.0, 94.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(122, 21, 1.0, 60.5, cpv(459.0, 80.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(123, 22, 1.0, 60.5, cpv(484.0, 75.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(124, 23, 1.0, 60.5, cpv(510.0, 78.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(120, 24, 1.0, 60.5, cpv(533.0, 95.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(121, 25, 1.0, 60.5, cpv(551.0, 113.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(122, 26, 1.0, 60.5, cpv(572.0, 128.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(123, 27, 1.0, 60.5, cpv(595.0, 138.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(124, 28, 1.0, 60.5, cpv(620.0, 142.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(120, 29, 1.0, 60.5, cpv(646.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(121, 30, 1.0, 60.5, cpv(670.0, 120.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(122, 31, 1.0, 60.5, cpv(687.0, 99.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(123, 32, 1.0, 60.5, cpv(710.0, 87.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(124, 33, 1.0, 60.5, cpv(737.0, 87.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(120, 34, 1.0, 60.5, cpv(756.0, 104.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(121, 35, 1.0, 60.5, cpv(760.0, 129.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(122, 36, 1.0, 60.5, cpv(760.0, 156.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(123, 37, 1.0, 60.5, cpv(760.0, 182.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(124, 38, 1.0, 60.5, cpv(749.0, 205.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(120, 39, 1.0, 60.5, cpv(729.0, 227.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(121, 40, 1.0, 60.5, cpv(702.0, 236.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(122, 41, 1.0, 60.5, cpv(662.0, 241.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(123, 42, 1.0, 60.5, cpv(635.0, 241.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(124, 43, 1.0, 60.5, cpv(608.0, 241.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(120, 44, 1.0, 60.5, cpv(583.0, 234.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(121, 45, 1.0, 60.5, cpv(562.0, 217.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(122, 46, 1.0, 60.5, cpv(542.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(123, 47, 1.0, 60.5, cpv(519.0, 186.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(124, 48, 1.0, 60.5, cpv(495.0, 177.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(120, 49, 1.0, 60.5, cpv(470.0, 181.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(121, 50, 1.0, 60.5, cpv(447.0, 194.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(122, 51, 1.0, 60.5, cpv(424.0, 210.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(123, 52, 1.0, 60.5, cpv(403.0, 225.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(124, 53, 1.0, 60.5, cpv(373.0, 237.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(120, 54, 1.0, 60.5, cpv(344.0, 237.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(121, 55, 1.0, 60.5, cpv(319.0, 228.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(122, 56, 1.0, 60.5, cpv(296.0, 213.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(123, 57, 1.0, 60.5, cpv(275.0, 198.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(124, 58, 1.0, 60.5, cpv(252.0, 187.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(120, 59, 1.0, 60.5, cpv(227.0, 188.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(121, 60, 1.0, 60.5, cpv(202.0, 195.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(122, 61, 1.0, 60.5, cpv(179.0, 206.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(123, 62, 1.0, 60.5, cpv(157.0, 221.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(124, 63, 1.0, 60.5, cpv(134.0, 234.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(120, 64, 1.0, 60.5, cpv(111.0, 246.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(121, 65, 1.0, 60.5, cpv(96.0, 267.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(122, 66, 1.0, 60.5, cpv(86.0, 296.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(123, 67, 1.0, 60.5, cpv(87.0, 321.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(124, 68, 1.0, 60.5, cpv(104.0, 342.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(120, 69, 1.0, 60.5, cpv(130.0, 347.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(121, 70, 1.0, 60.5, cpv(155.0, 345.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(122, 71, 1.0, 60.5, cpv(178.0, 335.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(123, 72, 1.0, 60.5, cpv(202.0, 322.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(124, 73, 1.0, 60.5, cpv(223.0, 308.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(120, 74, 1.0, 60.5, cpv(244.0, 293.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(121, 75, 1.0, 60.5, cpv(269.0, 291.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(122, 76, 1.0, 60.5, cpv(296.0, 300.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(123, 77, 1.0, 60.5, cpv(320.0, 319.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(124, 78, 1.0, 60.5, cpv(340.0, 335.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(120, 79, 1.0, 60.5, cpv(365.0, 347.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(121, 80, 1.0, 60.5, cpv(390.0, 344.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(122, 81, 1.0, 60.5, cpv(411.0, 330.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(123, 82, 1.0, 60.5, cpv(434.0, 316.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(124, 83, 1.0, 60.5, cpv(457.0, 302.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(120, 84, 1.0, 60.5, cpv(480.0, 292.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(121, 85, 1.0, 60.5, cpv(520.0, 295.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(122, 86, 1.0, 60.5, cpv(544.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(123, 87, 1.0, 60.5, cpv(568.0, 319.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(124, 88, 1.0, 60.5, cpv(590.0, 331.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(120, 89, 1.0, 60.5, cpv(618.0, 336.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(121, 90, 1.0, 60.5, cpv(647.0, 336.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(122, 91, 1.0, 60.5, cpv(673.0, 332.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(123, 92, 1.0, 60.5, cpv(697.0, 320.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(124, 93, 1.0, 60.5, cpv(719.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(120, 94, 1.0, 60.5, cpv(740.0, 289.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(33.0, 33.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body49, cpvzero, cpvzero));
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
	cpSpaceAddConstraint(space, cpPinJointNew(body69, body70, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body70, body71, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body71, body72, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body72, body73, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body73, body74, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body75, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body75, body76, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body76, body77, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body77, body78, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body78, body79, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body79, body80, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body80, body81, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body81, body82, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body82, body83, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body83, body84, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body84, body85, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body85, body86, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body86, body87, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body87, body88, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body88, body89, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body89, body90, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body90, body91, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body91, body92, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body92, body93, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body93, body94, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body0, cpv(1.0, -8.0), cpv(246.0, 71.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body0, cpv(-4.0, -7.0), cpv(187.0, 90.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body0, cpv(6.0, -8.0), cpv(306.0, 88.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body0, cpv(-3.0, -2.0), cpv(423.0, 83.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body0, cpv(0.0, -11.0), cpv(484.0, 55.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body0, cpv(3.0, -3.0), cpv(548.0, 79.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body0, cpv(-1.0, -7.0), cpv(671.0, 80.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body33, body0, cpv(1.0, -7.0), cpv(742.0, 70.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body0, cpv(9.0, -5.0), cpv(780.0, 112.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body0, cpv(3.0, -8.0), cpv(639.0, 223.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body0, cpv(4.0, -7.0), cpv(548.0, 181.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body0, cpv(-1.0, -9.0), cpv(495.0, 154.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body50, body0, cpv(-3.0, -10.0), cpv(436.0, 173.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body56, body0, cpv(1.0, -7.0), cpv(310.0, 193.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body0, cpv(0.0, -9.0), cpv(254.0, 165.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body0, cpv(5.0, -7.0), cpv(201.0, 175.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body64, body0, cpv(-3.0, -7.0), cpv(94.0, 216.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body72, body0, cpv(-4.0, -7.0), cpv(197.0, 302.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body72, body0, cpv(-4.0, -7.0), cpv(197.0, 302.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body0, cpv(2.0, -8.0), cpv(247.0, 267.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body76, body0, cpv(4.0, -6.0), cpv(306.0, 284.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body82, body0, cpv(-5.0, -5.0), cpv(428.0, 300.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body84, body0, cpv(2.0, -9.0), cpv(484.0, 270.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body86, body0, cpv(5.0, -6.0), cpv(553.0, 284.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body92, body0, cpv(-3.0, -7.0), cpv(692.0, 295.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body94, body0, cpv(2.0, -8.0), cpv(745.0, 273.0)));
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


const kineticArtLevel Level29 = {
	29,
	"Level 29",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

