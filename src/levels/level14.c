
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level13;
extern kineticArtLevel Level15;
#define PREV_LEVEL &Level13
#define NEXT_LEVEL &Level15


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

{  /* Total bodies: 93, total joints: 93 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(112, 1, 1.0, 63.887283, cpv(131.0, 34.0), cpvzero, cpvzero, 0.0, -6.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(108, 2, 1.0, 75.803873, cpv(104.0, 29.0), cpvzero, cpvzero, 0.0, 2.230000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(109, 3, 1.0, 75.803873, cpv(74.0, 39.0), cpvzero, cpvzero, 0.0, -6.280000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(110, 4, 1.0, 63.887283, cpv(71.0, 69.0), cpvzero, cpvzero, 0.0, -6.690000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(111, 5, 1.0, 63.887283, cpv(96.0, 99.0), cpvzero, cpvzero, 0.0, 7.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(112, 6, 1.0, 63.887283, cpv(115.0, 118.0), cpvzero, cpvzero, 0.0, 3.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(108, 7, 1.0, 75.803873, cpv(135.0, 141.0), cpvzero, cpvzero, 0.0, -1.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(109, 8, 1.0, 75.803873, cpv(135.0, 167.0), cpvzero, cpvzero, 0.0, -7.290000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(110, 9, 1.0, 63.887283, cpv(123.0, 189.0), cpvzero, cpvzero, 0.0, -9.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(111, 10, 1.0, 63.887283, cpv(100.0, 206.0), cpvzero, cpvzero, 0.0, -7.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(112, 11, 1.0, 63.887283, cpv(105.0, 239.0), cpvzero, cpvzero, 0.0, 8.220000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(108, 12, 1.0, 75.803873, cpv(122.0, 268.0), cpvzero, cpvzero, 0.0, -5.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(109, 13, 1.0, 75.803873, cpv(132.0, 295.0), cpvzero, cpvzero, 0.0, -8.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(110, 14, 1.0, 63.887283, cpv(123.0, 321.0), cpvzero, cpvzero, 0.0, 3.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(111, 15, 1.0, 63.887283, cpv(117.0, 348.0), cpvzero, cpvzero, 0.0, 0.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(112, 16, 1.0, 63.887283, cpv(178.0, 107.0), cpvzero, cpvzero, 0.0, 9.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(108, 17, 1.0, 75.803873, cpv(207.0, 108.0), cpvzero, cpvzero, 0.0, 3.790000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(109, 18, 1.0, 75.803873, cpv(224.0, 129.0), cpvzero, cpvzero, 0.0, -0.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(110, 19, 1.0, 63.887283, cpv(210.0, 154.0), cpvzero, cpvzero, 0.0, -9.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(111, 20, 1.0, 63.887283, cpv(190.0, 173.0), cpvzero, cpvzero, 0.0, 9.800000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(112, 21, 1.0, 63.887283, cpv(184.0, 201.0), cpvzero, cpvzero, 0.0, -4.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(108, 22, 1.0, 75.803873, cpv(190.0, 233.0), cpvzero, cpvzero, 0.0, -2.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(109, 23, 1.0, 75.803873, cpv(201.0, 259.0), cpvzero, cpvzero, 0.0, -6.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(110, 24, 1.0, 63.887283, cpv(235.0, 58.0), cpvzero, cpvzero, 0.0, 3.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(111, 25, 1.0, 63.887283, cpv(262.0, 47.0), cpvzero, cpvzero, 0.0, 6.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(112, 26, 1.0, 63.887283, cpv(291.0, 51.0), cpvzero, cpvzero, 0.0, -3.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(108, 27, 1.0, 75.803873, cpv(296.0, 81.0), cpvzero, cpvzero, 0.0, 5.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(109, 28, 1.0, 75.803873, cpv(276.0, 103.0), cpvzero, cpvzero, 0.0, -5.040000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(110, 29, 1.0, 63.887283, cpv(259.0, 127.0), cpvzero, cpvzero, 0.0, -4.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(111, 30, 1.0, 63.887283, cpv(266.0, 153.0), cpvzero, cpvzero, 0.0, 8.310000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(112, 31, 1.0, 63.887283, cpv(281.0, 182.0), cpvzero, cpvzero, 0.0, 9.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(108, 32, 1.0, 75.803873, cpv(293.0, 209.0), cpvzero, cpvzero, 0.0, -7.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(109, 33, 1.0, 75.803873, cpv(297.0, 237.0), cpvzero, cpvzero, 0.0, -3.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(110, 34, 1.0, 63.887283, cpv(282.0, 260.0), cpvzero, cpvzero, 0.0, -5.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(111, 35, 1.0, 63.887283, cpv(261.0, 276.0), cpvzero, cpvzero, 0.0, 7.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(112, 36, 1.0, 63.887283, cpv(308.0, 142.0), cpvzero, cpvzero, 0.0, 2.150000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(108, 37, 1.0, 75.803873, cpv(333.0, 151.0), cpvzero, cpvzero, 0.0, 8.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(109, 38, 1.0, 75.803873, cpv(358.0, 167.0), cpvzero, cpvzero, 0.0, 5.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(110, 39, 1.0, 63.887283, cpv(376.0, 196.0), cpvzero, cpvzero, 0.0, -1.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(111, 40, 1.0, 63.887283, cpv(367.0, 227.0), cpvzero, cpvzero, 0.0, 2.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(112, 41, 1.0, 63.887283, cpv(347.0, 257.0), cpvzero, cpvzero, 0.0, 3.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(108, 42, 1.0, 75.803873, cpv(330.0, 281.0), cpvzero, cpvzero, 0.0, -4.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(109, 43, 1.0, 75.803873, cpv(321.0, 316.0), cpvzero, cpvzero, 0.0, -7.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(110, 44, 1.0, 63.887283, cpv(341.0, 342.0), cpvzero, cpvzero, 0.0, -1.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(111, 45, 1.0, 63.887283, cpv(367.0, 366.0), cpvzero, cpvzero, 0.0, -9.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(112, 46, 1.0, 63.887283, cpv(374.0, 61.0), cpvzero, cpvzero, 0.0, 0.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(108, 47, 1.0, 75.803873, cpv(400.0, 61.0), cpvzero, cpvzero, 0.0, -0.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(109, 48, 1.0, 75.803873, cpv(434.0, 61.0), cpvzero, cpvzero, 0.0, -9.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(110, 49, 1.0, 63.887283, cpv(465.0, 64.0), cpvzero, cpvzero, 0.0, 2.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(111, 50, 1.0, 63.887283, cpv(483.0, 85.0), cpvzero, cpvzero, 0.0, 5.070000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(112, 51, 1.0, 63.887283, cpv(458.0, 100.0), cpvzero, cpvzero, 0.0, 8.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(108, 52, 1.0, 75.803873, cpv(426.0, 109.0), cpvzero, cpvzero, 0.0, -8.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(109, 53, 1.0, 75.803873, cpv(402.0, 120.0), cpvzero, cpvzero, 0.0, -8.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(110, 54, 1.0, 63.887283, cpv(386.0, 140.0), cpvzero, cpvzero, 0.0, -7.740000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(111, 55, 1.0, 63.887283, cpv(402.0, 163.0), cpvzero, cpvzero, 0.0, -0.150000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(112, 56, 1.0, 63.887283, cpv(426.0, 178.0), cpvzero, cpvzero, 0.0, 0.830000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(108, 57, 1.0, 75.803873, cpv(438.0, 201.0), cpvzero, cpvzero, 0.0, 8.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(109, 58, 1.0, 75.803873, cpv(422.0, 223.0), cpvzero, cpvzero, 0.0, -4.080000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(110, 59, 1.0, 63.887283, cpv(425.0, 249.0), cpvzero, cpvzero, 0.0, 2.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(111, 60, 1.0, 63.887283, cpv(513.0, 141.0), cpvzero, cpvzero, 0.0, 5.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(112, 61, 1.0, 63.887283, cpv(475.0, 146.0), cpvzero, cpvzero, 0.0, -9.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(108, 62, 1.0, 75.803873, cpv(448.0, 158.0), cpvzero, cpvzero, 0.0, -9.620000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(109, 63, 1.0, 75.803873, cpv(468.0, 180.0), cpvzero, cpvzero, 0.0, 9.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(110, 64, 1.0, 63.887283, cpv(504.0, 196.0), cpvzero, cpvzero, 0.0, -4.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(111, 65, 1.0, 63.887283, cpv(529.0, 204.0), cpvzero, cpvzero, 0.0, -0.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(112, 66, 1.0, 63.887283, cpv(555.0, 213.0), cpvzero, cpvzero, 0.0, -3.310000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(108, 67, 1.0, 75.803873, cpv(577.0, 230.0), cpvzero, cpvzero, 0.0, -9.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(109, 68, 1.0, 75.803873, cpv(560.0, 260.0), cpvzero, cpvzero, 0.0, -2.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(110, 69, 1.0, 63.887283, cpv(537.0, 272.0), cpvzero, cpvzero, 0.0, 6.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(111, 70, 1.0, 63.887283, cpv(525.0, 296.0), cpvzero, cpvzero, 0.0, 8.200000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(112, 71, 1.0, 63.887283, cpv(526.0, 329.0), cpvzero, cpvzero, 0.0, 2.970000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(108, 72, 1.0, 75.803873, cpv(536.0, 356.0), cpvzero, cpvzero, 0.0, 5.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(109, 73, 1.0, 75.803873, cpv(550.0, 68.0), cpvzero, cpvzero, 0.0, -8.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(110, 74, 1.0, 63.887283, cpv(575.0, 63.0), cpvzero, cpvzero, 0.0, -8.440000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(111, 75, 1.0, 63.887283, cpv(619.0, 68.0), cpvzero, cpvzero, 0.0, 8.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(112, 76, 1.0, 63.887283, cpv(654.0, 84.0), cpvzero, cpvzero, 0.0, -2.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(108, 77, 1.0, 75.803873, cpv(673.0, 104.0), cpvzero, cpvzero, 0.0, -8.460000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(109, 78, 1.0, 75.803873, cpv(649.0, 121.0), cpvzero, cpvzero, 0.0, 1.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(110, 79, 1.0, 63.887283, cpv(614.0, 130.0), cpvzero, cpvzero, 0.0, 6.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(111, 80, 1.0, 63.887283, cpv(585.0, 141.0), cpvzero, cpvzero, 0.0, -9.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(112, 81, 1.0, 63.887283, cpv(600.0, 172.0), cpvzero, cpvzero, 0.0, 1.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(108, 82, 1.0, 75.803873, cpv(625.0, 189.0), cpvzero, cpvzero, 0.0, -7.420000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(109, 83, 1.0, 75.803873, cpv(677.0, 174.0), cpvzero, cpvzero, 0.0, -1.440000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(110, 84, 1.0, 63.887283, cpv(708.0, 174.0), cpvzero, cpvzero, 0.0, -6.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(111, 85, 1.0, 63.887283, cpv(729.0, 188.0), cpvzero, cpvzero, 0.0, 9.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(112, 86, 1.0, 63.887283, cpv(722.0, 214.0), cpvzero, cpvzero, 0.0, 3.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(108, 87, 1.0, 75.803873, cpv(699.0, 236.0), cpvzero, cpvzero, 0.0, -7.070000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(109, 88, 1.0, 75.803873, cpv(678.0, 253.0), cpvzero, cpvzero, 0.0, -0.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(110, 89, 1.0, 63.887283, cpv(659.0, 273.0), cpvzero, cpvzero, 0.0, -6.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(111, 90, 1.0, 63.887283, cpv(671.0, 310.0), cpvzero, cpvzero, 0.0, 4.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(112, 91, 1.0, 63.887283, cpv(683.0, 332.0), cpvzero, cpvzero, 0.0, 6.630000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(108, 92, 1.0, 75.803873, cpv(692.0, 357.0), cpvzero, cpvzero, 0.0, 7.710000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(109, 93, 1.0, 75.803873, cpv(680.0, 382.0), cpvzero, cpvzero, 0.0, 8.180000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(131.0, 34.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body16, cpv(178.0, 107.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body24, cpv(235.0, 58.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body36, cpv(308.0, 142.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body39, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body40, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body44, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body46, cpv(374.0, 61.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body60, cpv(513.0, 141.0), cpvzero));
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
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body73, cpv(550.0, 68.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body73, body74, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body75, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body75, body76, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body76, body77, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body77, body78, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body78, body79, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body79, body80, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body80, body81, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body81, body82, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body83, cpv(677.0, 174.0), cpvzero));
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
	BGBLIT(rc_bg18)
}


const kineticArtLevel Level14 = {
	14,
	"Level 14",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

