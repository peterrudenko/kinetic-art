
#include "../main.h"

extern kineticArtLevel Level01;
extern kineticArtLevel Level03;
#define PREV_LEVEL &Level01
#define NEXT_LEVEL &Level03


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 91, total joints: 91 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(147, 1, 1.0, inf, cpv(750.0, 42.0), cpv(21.0, -6.0), cpvzero, -0.614663, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(147, 2, 1.0, inf, cpv(718.0, 63.0), cpv(16.0, 41.0), cpvzero, -0.478352, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(151, 37, 1.0, inf, cpv(396.0, 273.0), cpv(21.0, 30.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(148, 4, 1.0, inf, cpv(682.0, 84.0), cpv(27.0, 6.0), cpvzero, -0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(149, 5, 1.0, inf, cpv(644.0, 101.0), cpv(23.0, -1.0), cpvzero, -0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(149, 6, 1.0, inf, cpv(607.0, 111.0), cpv(29.0, 48.0), cpvzero, -0.132552, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(150, 7, 1.0, inf, cpv(566.0, 115.0), cpv(28.0, -19.0), cpvzero, -0.041643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(144, 43, 1.0, inf, cpv(630.0, 172.0), cpv(24.0, -36.0), cpvzero, -0.414507, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(151, 9, 1.0, inf, cpv(524.0, 114.0), cpv(15.0, -28.0), cpvzero, 0.159913, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(143, 42, 1.0, inf, cpv(545.0, 197.0), cpv(22.0, -56.0), cpvzero, -0.084307, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(146, 11, 1.0, inf, cpv(782.0, 16.0), cpv(18.0, -40.0), cpvzero, -0.754158, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(145, 12, 1.0, inf, cpv(731.0, 104.0), cpv(25.0, 33.0), cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(144, 13, 1.0, inf, cpv(589.0, 188.0), cpv(24.0, 69.0), cpvzero, -0.273009, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(143, 14, 1.0, inf, cpv(456.0, 194.0), cpv(17.0, 20.0), cpvzero, 0.073939, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(142, 15, 1.0, inf, cpv(411.0, 187.0), cpv(29.0, 74.0), cpvzero, 0.179853, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(142, 16, 1.0, inf, cpv(364.0, 175.0), cpv(24.0, 24.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(143, 17, 1.0, inf, cpv(500.0, 199.0), cpv(25.0, 23.0), cpvzero, -0.034469, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(144, 18, 1.0, inf, cpv(666.0, 154.0), cpv(21.0, 55.0), cpvzero, -0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(145, 19, 1.0, inf, cpv(699.0, 132.0), cpv(26.0, -1.0), cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(145, 20, 1.0, inf, cpv(759.0, 74.0), cpv(19.0, 39.0), cpvzero, -0.872137, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(146, 21, 1.0, inf, cpv(782.0, 44.0), cpv(18.0, 23.0), cpvzero, -1.035841, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(146, 22, 1.0, inf, cpv(785.0, 79.0), cpv(16.0, 47.0), cpvzero, -1.199905, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(147, 23, 1.0, inf, cpv(769.0, 114.0), cpv(26.0, 6.0), cpvzero, -1.066630, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(147, 24, 1.0, inf, cpv(747.0, 148.0), cpv(20.0, 14.0), cpvzero, -0.870903, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(148, 25, 1.0, inf, cpv(689.0, 214.0), cpv(21.0, -63.0), cpvzero, -0.694738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(148, 26, 1.0, inf, cpv(691.0, 238.0), cpv(19.0, -59.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(146, 38, 1.0, inf, cpv(670.0, 307.0), cpv(25.0, -50.0), cpvzero, -1.876675, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(147, 28, 1.0, inf, cpv(673.0, 272.0), cpv(15.0, 21.0), cpvzero, 2.106608, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(148, 29, 1.0, inf, cpv(719.0, 184.0), cpv(21.0, -43.0), cpvzero, -0.764125, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(148, 30, 1.0, inf, cpv(652.0, 241.0), cpv(25.0, 0.0), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(149, 31, 1.0, inf, cpv(611.0, 261.0), cpv(26.0, -65.0), cpvzero, -0.310998, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(149, 32, 1.0, inf, cpv(570.0, 275.0), cpv(18.0, -21.0), cpvzero, -0.263964, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(150, 33, 1.0, inf, cpv(527.0, 283.0), cpv(20.0, 56.0), cpvzero, -0.104877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(150, 34, 1.0, inf, cpv(482.0, 284.0), cpv(15.0, 70.0), cpvzero, 0.029403, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(145, 39, 1.0, inf, cpv(693.0, 332.0), cpv(22.0, 24.0), cpvzero, -2.622447, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(151, 36, 1.0, inf, cpv(439.0, 281.0), cpv(20.0, 4.0), cpvzero, 0.107690, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(183, 44, 1.0, inf, cpv(644.0, 78.0), cpv(28.0, 74.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(183, 45, 1.0, inf, cpv(574.0, 299.0), cpv(16.0, 48.0), cpvzero, -0.872894, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(184, 46, 1.0, inf, cpv(673.0, 199.0), cpv(24.0, -67.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(185, 47, 1.0, inf, cpv(458.0, 259.0), cpv(29.0, 3.0), cpvzero, 0.862170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(185, 48, 1.0, inf, cpv(568.0, 136.0), cpv(18.0, -4.0), cpvzero, -0.682317, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(182, 49, 1.0, inf, cpv(662.0, 133.0), cpv(23.0, 38.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(181, 50, 1.0, inf, cpv(530.0, 223.0), cpv(26.0, 5.0), cpvzero, -0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(182, 51, 1.0, inf, cpv(669.0, 342.0), cpv(16.0, -15.0), cpvzero, -1.487655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(31, 57, 1.0, inf, cpv(353.0, 277.0), cpv(28.0, 62.0), cpvzero, -2.015578, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(29, 53, 1.0, inf, cpv(724.0, 343.0), cpv(17.0, 49.0), cpvzero, 1.655698, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(30, 54, 1.0, inf, cpv(327.0, 167.0), cpv(18.0, 1.0), cpvzero, -1.382575, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(31, 55, 1.0, inf, cpv(485.0, 106.0), cpv(22.0, 6.0), cpvzero, -1.173717, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(71, 58, 1.0, inf, cpv(300.0, 293.0), cpv(21.0, 31.0), cpvzero, -0.343024, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(72, 59, 1.0, inf, cpv(322.0, 322.0), cpv(17.0, -70.0), cpvzero, -1.020943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(72, 60, 1.0, inf, cpv(302.0, 260.0), cpv(16.0, -67.0), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(70, 61, 1.0, inf, cpv(274.0, 166.0), cpv(19.0, -55.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(71, 62, 1.0, inf, cpv(289.0, 126.0), cpv(24.0, -30.0), cpvzero, 0.992894, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(71, 63, 1.0, inf, cpv(282.0, 198.0), cpv(18.0, -65.0), cpvzero, -0.551655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(72, 64, 1.0, inf, cpv(434.0, 84.0), cpv(25.0, -70.0), cpvzero, 0.444419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(69, 65, 1.0, inf, cpv(456.0, 58.0), cpv(29.0, 25.0), cpvzero, 1.063698, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(69, 66, 1.0, inf, cpv(431.0, 120.0), cpv(26.0, 59.0), cpvzero, -0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(105, 69, 1.0, inf, cpv(384.0, 293.0), cpv(27.0, 16.0), cpvzero, -2.582993, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(105, 70, 1.0, inf, cpv(373.0, 248.0), cpv(21.0, -9.0), cpvzero, 2.319174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(106, 71, 1.0, inf, cpv(371.0, 311.0), cpv(19.0, 64.0), cpvzero, -1.997424, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(106, 72, 1.0, inf, cpv(347.0, 239.0), cpv(28.0, 55.0), cpvzero, 1.642104, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(107, 73, 1.0, inf, cpv(350.0, 320.0), cpv(20.0, -63.0), cpvzero, -1.315614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(107, 74, 1.0, inf, cpv(324.0, 240.0), cpv(23.0, 36.0), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(107, 75, 1.0, inf, cpv(348.0, 143.0), cpv(18.0, -39.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(106, 76, 1.0, inf, cpv(748.0, 315.0), cpv(19.0, 20.0), cpvzero, 2.147172, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(109, 77, 1.0, inf, cpv(761.0, 350.0), cpv(29.0, -65.0), cpvzero, -2.984991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(106, 78, 1.0, inf, cpv(740.0, 378.0), cpv(25.0, -42.0), cpvzero, -1.856848, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(107, 79, 1.0, inf, cpv(339.0, 199.0), cpv(17.0, 15.0), cpvzero, -2.214297, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(109, 80, 1.0, inf, cpv(460.0, 132.0), cpv(21.0, 2.0), cpvzero, -1.144169, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(109, 81, 1.0, inf, cpv(487.0, 68.0), cpv(29.0, 32.0), cpvzero, 2.057696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(106, 82, 1.0, inf, cpv(514.0, 90.0), cpv(26.0, -3.0), cpvzero, 3.079174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(106, 83, 1.0, inf, cpv(494.0, 136.0), cpv(20.0, 68.0), cpvzero, -2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(108, 84, 1.0, inf, cpv(318.0, 128.0), cpv(28.0, -62.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(108, 85, 1.0, inf, cpv(313.0, 206.0), cpv(17.0, -52.0), cpvzero, -1.363300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(146, 94, 1.0, inf, cpv(51.0, 153.0), cpv(21.0, 52.0), cpvzero, -1.633215, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(147, 95, 1.0, inf, cpv(62.0, 190.0), cpv(17.0, -9.0), cpvzero, -2.169215, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(142, 88, 1.0, inf, cpv(56.0, 20.0), cpv(22.0, 56.0), cpvzero, -2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(143, 89, 1.0, inf, cpv(79.0, 49.0), cpv(18.0, -27.0), cpvzero, 1.216091, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(144, 90, 1.0, inf, cpv(77.0, 83.0), cpv(18.0, -42.0), cpvzero, -1.176005, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(148, 96, 1.0, inf, cpv(89.0, 218.0), cpv(28.0, 27.0), cpvzero, -2.570255, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(145, 92, 1.0, inf, cpv(60.0, 117.0), cpv(15.0, 25.0), cpvzero, -1.076855, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(182, 98, 1.0, inf, cpv(36.0, 187.0), cpv(19.0, 44.0), cpvzero, -1.337053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(181, 99, 1.0, inf, cpv(100.0, 78.0), cpv(17.0, 60.0), cpvzero, -2.145101, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(32, 100, 1.0, inf, cpv(121.0, 237.0), cpv(25.0, 71.0), cpvzero, 2.186416, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(73, 101, 1.0, inf, cpv(167.0, 262.0), cpv(17.0, -19.0), cpvzero, 0.418224, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(70, 102, 1.0, inf, cpv(175.0, 232.0), cpv(27.0, 19.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(70, 103, 1.0, inf, cpv(143.0, 287.0), cpv(28.0, -15.0), cpvzero, -2.201876, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(105, 104, 1.0, inf, cpv(121.0, 205.0), cpv(26.0, -75.0), cpvzero, 1.435269, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(105, 105, 1.0, inf, cpv(85.0, 250.0), cpv(24.0, 29.0), cpvzero, -0.602287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(108, 106, 1.0, inf, cpv(149.0, 209.0), cpv(28.0, -55.0), cpvzero, 2.083186, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(108, 107, 1.0, inf, cpv(111.0, 274.0), cpv(23.0, 51.0), cpvzero, -1.352127, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(750.0, 32.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(718.0, 53.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(396.0, 263.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(682.0, 74.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(644.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(607.0, 101.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(566.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(630.0, 162.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(524.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(545.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(782.0, 6.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(731.0, 94.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(589.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(456.0, 184.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(411.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(364.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(500.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(666.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(699.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(759.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(782.0, 34.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(785.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(769.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(747.0, 138.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(689.0, 204.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(691.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(670.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(673.0, 262.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(719.0, 174.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body0, cpvzero, cpv(652.0, 231.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(611.0, 251.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(570.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(527.0, 273.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(482.0, 274.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(693.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(439.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(644.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(574.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(673.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(458.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(568.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(662.0, 123.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(530.0, 213.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(669.0, 332.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(353.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(724.0, 333.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(327.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(485.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(300.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(322.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(302.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(274.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(289.0, 116.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(282.0, 188.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(434.0, 74.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(456.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(431.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(384.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(373.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(371.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(347.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(350.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(324.0, 230.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(348.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(748.0, 305.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(761.0, 340.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(740.0, 368.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(339.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(460.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(487.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(514.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(494.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(318.0, 118.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(313.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(51.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(62.0, 180.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(56.0, 10.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(79.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(77.0, 73.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(89.0, 208.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(60.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(36.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(100.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(121.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(167.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(175.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(143.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(121.0, 195.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(85.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(149.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(111.0, 264.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level02 = {
	2,
	"Level 2",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

