
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level03;
extern kineticArtLevel Level05;
#define PREV_LEVEL &Level03
#define NEXT_LEVEL &Level05


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 93, total joints: 93 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(183, 1, 1.0, inf, cpv(205.0, 86.0), cpv(25.0, 4.0), cpvzero, -2.767259, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(185, 29, 1.0, inf, cpv(162.0, 63.0), cpv(22.0, -74.0), cpvzero, -2.645170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(183, 3, 1.0, inf, cpv(308.0, 120.0), cpv(19.0, 8.0), cpvzero, 3.113822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(183, 4, 1.0, inf, cpv(408.0, 115.0), cpv(21.0, 7.0), cpvzero, 2.798569, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(183, 5, 1.0, inf, cpv(456.0, 102.0), cpv(22.0, -30.0), cpvzero, 2.634494, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(183, 6, 1.0, inf, cpv(558.0, 60.0), cpv(24.0, -50.0), cpvzero, 2.768605, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(183, 7, 1.0, inf, cpv(665.0, 73.0), cpv(19.0, 41.0), cpvzero, -2.699218, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(183, 8, 1.0, inf, cpv(702.0, 108.0), cpv(19.0, -75.0), cpvzero, -2.326791, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(183, 9, 1.0, inf, cpv(692.0, 257.0), cpv(25.0, -29.0), cpvzero, -1.206817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(183, 10, 1.0, inf, cpv(610.0, 304.0), cpv(22.0, 71.0), cpvzero, -0.029403, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(183, 11, 1.0, inf, cpv(521.0, 258.0), cpv(28.0, 72.0), cpvzero, 0.548549, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(183, 12, 1.0, inf, cpv(420.0, 217.0), cpv(17.0, -51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(183, 13, 1.0, inf, cpv(370.0, 222.0), cpv(29.0, 64.0), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(106, 92, 1.0, inf, cpv(703.0, 83.0), cpv(22.0, -15.0), cpvzero, 3.079174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(69, 62, 1.0, inf, cpv(371.0, 329.0), cpv(16.0, 44.0), cpvzero, -2.558853, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(183, 16, 1.0, inf, cpv(713.0, 211.0), cpv(27.0, -40.0), cpvzero, -1.490966, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(185, 28, 1.0, inf, cpv(122.0, 29.0), cpv(28.0, 71.0), cpvzero, -2.122451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(183, 18, 1.0, inf, cpv(258.0, 108.0), cpv(24.0, 20.0), cpvzero, -2.934096, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(183, 19, 1.0, inf, cpv(358.0, 122.0), cpv(18.0, -31.0), cpvzero, 2.993743, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(183, 20, 1.0, inf, cpv(506.0, 81.0), cpv(27.0, -12.0), cpvzero, 2.505084, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(183, 21, 1.0, inf, cpv(611.0, 56.0), cpv(20.0, 66.0), cpvzero, 3.112189, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(183, 22, 1.0, inf, cpv(719.0, 159.0), cpv(20.0, 35.0), cpvzero, -1.703348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(183, 23, 1.0, inf, cpv(657.0, 293.0), cpv(25.0, 43.0), cpvzero, -0.750929, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(183, 24, 1.0, inf, cpv(563.0, 286.0), cpv(16.0, -43.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(183, 25, 1.0, inf, cpv(472.0, 232.0), cpv(21.0, 20.0), cpvzero, 0.302885, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(183, 26, 1.0, inf, cpv(339.0, 252.0), cpv(21.0, -30.0), cpvzero, -1.152572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(186, 30, 1.0, inf, cpv(365.0, 300.0), cpv(19.0, 54.0), cpvzero, 2.984991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(186, 31, 1.0, inf, cpv(337.0, 330.0), cpv(29.0, 40.0), cpvzero, -1.700499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(182, 32, 1.0, inf, cpv(158.0, 34.0), cpv(24.0, 62.0), cpvzero, 2.638749, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(182, 33, 1.0, inf, cpv(249.0, 85.0), cpv(19.0, 16.0), cpvzero, 2.601173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(182, 34, 1.0, inf, cpv(344.0, 103.0), cpv(16.0, 54.0), cpvzero, 2.176341, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(182, 35, 1.0, inf, cpv(435.0, 85.0), cpv(23.0, -1.0), cpvzero, 1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(182, 36, 1.0, inf, cpv(533.0, 47.0), cpv(23.0, 9.0), cpvzero, 1.961403, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(182, 37, 1.0, inf, cpv(656.0, 50.0), cpv(21.0, 50.0), cpvzero, 2.731465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(182, 38, 1.0, inf, cpv(734.0, 139.0), cpv(26.0, -12.0), cpvzero, -2.562518, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(182, 39, 1.0, inf, cpv(715.0, 256.0), cpv(26.0, 0.0), cpvzero, -1.670465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(182, 40, 1.0, inf, cpv(626.0, 321.0), cpv(15.0, -1.0), cpvzero, -0.896055, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(182, 41, 1.0, inf, cpv(521.0, 282.0), cpv(24.0, -70.0), cpvzero, -0.119429, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(182, 42, 1.0, inf, cpv(434.0, 237.0), cpv(18.0, -23.0), cpvzero, -0.563316, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(182, 43, 1.0, inf, cpv(359.0, 258.0), cpv(16.0, -46.0), cpvzero, -1.759018, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(182, 109, 1.0, inf, cpv(177.0, 179.0), cpv(21.0, -14.0), cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(182, 45, 1.0, inf, cpv(285.0, 136.0), cpv(29.0, -28.0), cpvzero, -2.231839, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(182, 46, 1.0, inf, cpv(393.0, 139.0), cpv(24.0, -75.0), cpvzero, -2.530867, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(182, 47, 1.0, inf, cpv(494.0, 107.0), cpv(17.0, -55.0), cpvzero, -2.804918, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(182, 48, 1.0, inf, cpv(591.0, 73.0), cpv(21.0, -57.0), cpvzero, -2.089942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(182, 49, 1.0, inf, cpv(674.0, 105.0), cpv(27.0, 3.0), cpvzero, -1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(182, 50, 1.0, inf, cpv(663.0, 175.0), cpv(21.0, 55.0), cpvzero, 0.901157, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(182, 51, 1.0, inf, cpv(659.0, 265.0), cpv(15.0, -4.0), cpvzero, 0.062419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(182, 52, 1.0, inf, cpv(582.0, 279.0), cpv(27.0, 19.0), cpvzero, 1.071450, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(182, 53, 1.0, inf, cpv(499.0, 225.0), cpv(21.0, -66.0), cpvzero, 1.299849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(182, 54, 1.0, inf, cpv(384.0, 199.0), cpv(21.0, -53.0), cpvzero, 0.531724, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(182, 55, 1.0, inf, cpv(307.0, 274.0), cpv(20.0, 57.0), cpvzero, -0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(106, 63, 1.0, inf, cpv(228.0, 116.0), cpv(15.0, 47.0), cpvzero, -1.837048, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(106, 64, 1.0, inf, cpv(198.0, 62.0), cpv(21.0, -1.0), cpvzero, 2.709185, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(106, 65, 1.0, inf, cpv(298.0, 97.0), cpv(15.0, -8.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(106, 66, 1.0, inf, cpv(336.0, 143.0), cpv(24.0, 74.0), cpvzero, -2.167973, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(106, 67, 1.0, inf, cpv(390.0, 99.0), cpv(16.0, -57.0), cpvzero, 1.904041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(106, 68, 1.0, inf, cpv(441.0, 128.0), cpv(17.0, -41.0), cpvzero, -2.703256, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(106, 88, 1.0, inf, cpv(483.0, 73.0), cpv(26.0, -24.0), cpvzero, 1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(106, 87, 1.0, inf, cpv(132.0, 65.0), cpv(22.0, 38.0), cpvzero, -1.438245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(106, 89, 1.0, inf, cpv(540.0, 82.0), cpv(29.0, -44.0), cpvzero, -2.723368, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(106, 90, 1.0, inf, cpv(593.0, 38.0), cpv(28.0, -43.0), cpvzero, 2.293776, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(106, 91, 1.0, inf, cpv(636.0, 79.0), cpv(22.0, -22.0), cpvzero, -1.760785, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(184, 96, 1.0, inf, cpv(334.0, 293.0), cpv(19.0, 34.0), cpvzero, 1.261093, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(106, 97, 1.0, inf, cpv(694.0, 140.0), cpv(17.0, -35.0), cpvzero, -0.906750, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(107, 76, 1.0, inf, cpv(683.0, 227.0), cpv(20.0, 36.0), cpvzero, -0.358771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(107, 77, 1.0, inf, cpv(681.0, 297.0), cpv(24.0, 21.0), cpvzero, -1.405648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(107, 78, 1.0, inf, cpv(627.0, 286.0), cpv(16.0, -9.0), cpvzero, 0.702257, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(107, 79, 1.0, inf, cpv(570.0, 311.0), cpv(28.0, -71.0), cpvzero, -0.507099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(107, 80, 1.0, inf, cpv(548.0, 256.0), cpv(24.0, 8.0), cpvzero, 1.460139, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(107, 81, 1.0, inf, cpv(483.0, 255.0), cpv(15.0, 2.0), cpvzero, -0.302885, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(107, 82, 1.0, inf, cpv(445.0, 204.0), cpv(25.0, 42.0), cpvzero, 1.279340, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(107, 83, 1.0, inf, cpv(335.0, 219.0), cpv(28.0, 7.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(107, 84, 1.0, inf, cpv(390.0, 233.0), cpv(16.0, -66.0), cpvzero, -1.076855, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(106, 98, 1.0, inf, cpv(736.0, 195.0), cpv(26.0, -33.0), cpvzero, -2.541542, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(183, 99, 1.0, inf, cpv(183.0, 103.0), cpv(19.0, 30.0), cpvzero, -1.937970, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(183, 100, 1.0, inf, cpv(200.0, 149.0), cpv(27.0, -41.0), cpvzero, -1.647568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(184, 105, 1.0, inf, cpv(177.0, 234.0), cpv(17.0, -72.0), cpvzero, -1.060308, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(186, 103, 1.0, inf, cpv(203.0, 231.0), cpv(19.0, -34.0), cpvzero, -1.994991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(186, 104, 1.0, inf, cpv(167.0, 212.0), cpv(24.0, 1.0), cpvzero, -0.146012, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(185, 106, 1.0, inf, cpv(199.0, 193.0), cpv(15.0, -12.0), cpvzero, 1.871717, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(182, 107, 1.0, inf, cpv(222.0, 183.0), cpv(27.0, 13.0), cpvzero, -2.323948, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(182, 108, 1.0, inf, cpv(161.0, 98.0), cpv(18.0, 15.0), cpvzero, -1.382575, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(182, 119, 1.0, inf, cpv(613.0, 211.0), cpv(25.0, -58.0), cpvzero, -0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(106, 111, 1.0, inf, cpv(179.0, 138.0), cpv(29.0, -72.0), cpvzero, -0.950547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(183, 112, 1.0, inf, cpv(692.0, 182.0), cpv(18.0, -63.0), cpvzero, -0.685730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(183, 113, 1.0, inf, cpv(652.0, 197.0), cpv(15.0, -54.0), cpvzero, -0.104877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(186, 115, 1.0, inf, cpv(603.0, 152.0), cpv(18.0, -29.0), cpvzero, 1.605265, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(185, 116, 1.0, inf, cpv(613.0, 185.0), cpv(28.0, -54.0), cpvzero, 0.628796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(186, 117, 1.0, inf, cpv(576.0, 179.0), cpv(19.0, 53.0), cpvzero, -0.211093, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(184, 118, 1.0, inf, cpv(583.0, 154.0), cpv(17.0, -35.0), cpvzero, 0.851966, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(182, 120, 1.0, inf, cpv(97.0, 30.0), cpv(22.0, 51.0), cpvzero, -1.292497, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(182, 121, 1.0, inf, cpv(632.0, 172.0), cpv(22.0, -9.0), cpvzero, 1.412141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(205.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(162.0, 53.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(308.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(408.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(456.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(558.0, 50.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(665.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(702.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(692.0, 247.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(610.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(521.0, 248.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(420.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(370.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(703.0, 73.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(371.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(713.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(122.0, 19.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(258.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(358.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(506.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(611.0, 46.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(719.0, 149.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(657.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(563.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(472.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(339.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body0, cpvzero, cpv(365.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(337.0, 320.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(158.0, 24.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(249.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(344.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(435.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(533.0, 37.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(656.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(734.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(715.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(626.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(521.0, 272.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(434.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(359.0, 248.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(177.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(285.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(393.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(494.0, 97.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(591.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(674.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(663.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(659.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(582.0, 269.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(499.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(384.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(307.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(228.0, 106.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(198.0, 52.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(298.0, 87.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(336.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(390.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(441.0, 118.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(483.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(132.0, 55.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(540.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(593.0, 28.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(636.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(334.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(694.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(683.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(681.0, 287.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(627.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(570.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(548.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(483.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(445.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(335.0, 209.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(390.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(736.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(183.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(200.0, 139.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(177.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(203.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(167.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(199.0, 183.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(222.0, 173.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(161.0, 88.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(613.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(179.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(692.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(652.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(603.0, 142.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(613.0, 175.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(576.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(583.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(97.0, 20.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(632.0, 162.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level04 = {
	4,
	"Level 4",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

