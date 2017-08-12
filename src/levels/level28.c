
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level27;
extern kineticArtLevel Level29;
#define PREV_LEVEL &Level27
#define NEXT_LEVEL &Level29


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

{  /* Total bodies: 97, total joints: 97 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(185, 1, 1.0, inf, cpv(775.0, 281.0), cpv(27.0, 15.0), cpvzero, -0.674741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(185, 2, 1.0, inf, cpv(740.0, 308.0), cpv(15.0, -20.0), cpvzero, -0.610726, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(185, 3, 1.0, inf, cpv(701.0, 329.0), cpv(16.0, 34.0), cpvzero, -0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(185, 4, 1.0, inf, cpv(656.0, 337.0), cpv(22.0, 6.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(185, 5, 1.0, inf, cpv(612.0, 328.0), cpv(26.0, -37.0), cpvzero, 0.329050, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(185, 6, 1.0, inf, cpv(577.0, 308.0), cpv(29.0, 20.0), cpvzero, 0.688924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(185, 7, 1.0, inf, cpv(547.0, 277.0), cpv(27.0, -46.0), cpvzero, 0.849141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(185, 8, 1.0, inf, cpv(515.0, 246.0), cpv(19.0, 6.0), cpvzero, 0.657075, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(185, 9, 1.0, inf, cpv(479.0, 221.0), cpv(18.0, 60.0), cpvzero, 0.546789, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(185, 10, 1.0, inf, cpv(441.0, 201.0), cpv(23.0, -5.0), cpvzero, 0.298499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(185, 11, 1.0, inf, cpv(349.0, 182.0), cpv(27.0, -18.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(185, 12, 1.0, inf, cpv(395.0, 187.0), cpv(24.0, 55.0), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(185, 13, 1.0, inf, cpv(301.0, 188.0), cpv(28.0, 12.0), cpvzero, -0.209023, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(185, 14, 1.0, inf, cpv(258.0, 202.0), cpv(17.0, -73.0), cpvzero, -0.372988, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(185, 15, 1.0, inf, cpv(217.0, 224.0), cpv(22.0, 25.0), cpvzero, -0.489957, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(185, 16, 1.0, inf, cpv(618.0, 355.0), cpv(20.0, -67.0), cpvzero, -0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(184, 68, 1.0, inf, cpv(115.0, 299.0), cpv(17.0, 29.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(185, 18, 1.0, inf, cpv(503.0, 214.0), cpv(28.0, 11.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(185, 19, 1.0, inf, cpv(460.0, 147.0), cpv(28.0, -17.0), cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(185, 20, 1.0, inf, cpv(432.0, 121.0), cpv(20.0, -9.0), cpvzero, 0.825377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(185, 21, 1.0, inf, cpv(399.0, 102.0), cpv(21.0, 59.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(185, 22, 1.0, inf, cpv(358.0, 91.0), cpv(21.0, -59.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(185, 23, 1.0, inf, cpv(316.0, 87.0), cpv(21.0, 65.0), cpvzero, 0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(185, 24, 1.0, inf, cpv(274.0, 88.0), cpv(21.0, 16.0), cpvzero, 0.045423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(185, 25, 1.0, inf, cpv(671.0, 308.0), cpv(24.0, -31.0), cpvzero, 0.372988, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(185, 26, 1.0, inf, cpv(633.0, 281.0), cpv(20.0, -58.0), cpvzero, 0.694738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(185, 27, 1.0, inf, cpv(614.0, 242.0), cpv(24.0, -33.0), cpvzero, 1.237552, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(185, 28, 1.0, inf, cpv(620.0, 201.0), cpv(29.0, 45.0), cpvzero, 1.826948, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(185, 29, 1.0, inf, cpv(641.0, 168.0), cpv(26.0, -56.0), cpvzero, 2.129396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(184, 71, 1.0, inf, cpv(670.0, 151.0), cpv(19.0, 25.0), cpvzero, 2.782822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(185, 31, 1.0, inf, cpv(183.0, 254.0), cpv(27.0, -47.0), cpvzero, -0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(185, 32, 1.0, inf, cpv(152.0, 288.0), cpv(19.0, -45.0), cpvzero, -0.741947, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(184, 70, 1.0, inf, cpv(641.0, 134.0), cpv(18.0, -73.0), cpvzero, 1.149377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(184, 69, 1.0, inf, cpv(248.0, 109.0), cpv(19.0, 58.0), cpvzero, -1.232918, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(184, 73, 1.0, inf, cpv(587.0, 341.0), cpv(24.0, 45.0), cpvzero, 0.904827, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(184, 72, 1.0, inf, cpv(592.0, 381.0), cpv(22.0, -5.0), cpvzero, -1.012197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(185, 37, 1.0, inf, cpv(486.0, 180.0), cpv(22.0, 1.0), cpvzero, 1.128422, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(184, 67, 1.0, inf, cpv(237.0, 75.0), cpv(26.0, -11.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(181, 39, 1.0, inf, cpv(123.0, 317.0), cpv(16.0, 17.0), cpvzero, -0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(181, 40, 1.0, inf, cpv(228.0, 93.0), cpv(16.0, 61.0), cpvzero, -0.214061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(181, 41, 1.0, inf, cpv(660.0, 127.0), cpv(25.0, 63.0), cpvzero, 1.792878, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(181, 42, 1.0, inf, cpv(572.0, 361.0), cpv(21.0, 25.0), cpvzero, 0.128323, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(183, 43, 1.0, inf, cpv(764.0, 319.0), cpv(20.0, 50.0), cpvzero, -1.315614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(183, 44, 1.0, inf, cpv(671.0, 359.0), cpv(17.0, 62.0), cpvzero, -1.042722, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(183, 45, 1.0, inf, cpv(534.0, 300.0), cpv(24.0, -23.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(183, 46, 1.0, inf, cpv(478.0, 243.0), cpv(22.0, -2.0), cpvzero, -0.152649, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(183, 47, 1.0, inf, cpv(404.0, 212.0), cpv(23.0, 70.0), cpvzero, -0.688924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(183, 48, 1.0, inf, cpv(322.0, 207.0), cpv(28.0, 22.0), cpvzero, -1.019141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(183, 49, 1.0, inf, cpv(242.0, 236.0), cpv(27.0, -56.0), cpvzero, -1.414194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(183, 50, 1.0, inf, cpv(462.0, 191.0), cpv(26.0, -58.0), cpvzero, 1.275355, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(183, 51, 1.0, inf, cpv(704.0, 300.0), cpv(15.0, -43.0), cpvzero, 0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(183, 52, 1.0, inf, cpv(600.0, 294.0), cpv(18.0, -6.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(183, 53, 1.0, inf, cpv(543.0, 236.0), cpv(29.0, 39.0), cpvzero, 1.786881, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(183, 54, 1.0, inf, cpv(365.0, 160.0), cpv(25.0, -65.0), cpvzero, 0.994421, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(183, 55, 1.0, inf, cpv(267.0, 173.0), cpv(20.0, 28.0), cpvzero, 0.486899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(183, 56, 1.0, inf, cpv(174.0, 234.0), cpv(29.0, -73.0), cpvzero, -0.207496, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(183, 57, 1.0, inf, cpv(484.0, 139.0), cpv(25.0, 27.0), cpvzero, 1.761981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(183, 58, 1.0, inf, cpv(416.0, 80.0), cpv(18.0, -70.0), cpvzero, 1.609239, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(183, 59, 1.0, inf, cpv(324.0, 68.0), cpv(21.0, -50.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(183, 60, 1.0, inf, cpv(424.0, 147.0), cpv(19.0, -45.0), cpvzero, -0.156602, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(183, 61, 1.0, inf, cpv(367.0, 114.0), cpv(26.0, -5.0), cpvzero, -0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(183, 62, 1.0, inf, cpv(289.0, 109.0), cpv(17.0, 47.0), cpvzero, -0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(183, 63, 1.0, inf, cpv(638.0, 250.0), cpv(17.0, 35.0), cpvzero, 2.119346, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(183, 64, 1.0, inf, cpv(593.0, 200.0), cpv(26.0, 4.0), cpvzero, 1.231504, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(183, 65, 1.0, inf, cpv(772.0, 260.0), cpv(18.0, -47.0), cpvzero, 0.215358, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(184, 66, 1.0, inf, cpv(145.0, 323.0), cpv(15.0, 34.0), cpvzero, -1.494024, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(108, 74, 1.0, inf, cpv(743.0, 282.0), cpv(24.0, -19.0), cpvzero, 0.257324, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(108, 75, 1.0, inf, cpv(724.0, 342.0), cpv(21.0, -55.0), cpvzero, -1.190290, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(107, 76, 1.0, inf, cpv(420.0, 175.0), cpv(26.0, 44.0), cpvzero, 1.304544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(107, 77, 1.0, inf, cpv(367.0, 207.0), cpv(16.0, 43.0), cpvzero, -1.016489, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(108, 78, 1.0, inf, cpv(658.0, 277.0), cpv(21.0, 67.0), cpvzero, 1.685673, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(108, 79, 1.0, inf, cpv(633.0, 314.0), cpv(18.0, -6.0), cpvzero, 1.289564, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(107, 80, 1.0, inf, cpv(574.0, 274.0), cpv(19.0, -9.0), cpvzero, 1.854590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(107, 81, 1.0, inf, cpv(512.0, 270.0), cpv(25.0, -36.0), cpvzero, -0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(107, 82, 1.0, inf, cpv(513.0, 180.0), cpv(22.0, -10.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(107, 83, 1.0, inf, cpv(451.0, 108.0), cpv(28.0, -60.0), cpvzero, 1.512041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(107, 84, 1.0, inf, cpv(444.0, 222.0), cpv(19.0, -43.0), cpvzero, -0.606988, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(109, 85, 1.0, inf, cpv(203.0, 260.0), cpv(17.0, -28.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(109, 86, 1.0, inf, cpv(217.0, 197.0), cpv(22.0, -16.0), cpvzero, 0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(109, 87, 1.0, inf, cpv(279.0, 216.0), cpv(25.0, 31.0), cpvzero, -1.307802, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(109, 88, 1.0, inf, cpv(317.0, 168.0), cpv(18.0, -13.0), cpvzero, 0.685730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(109, 89, 1.0, inf, cpv(328.0, 106.0), cpv(22.0, -10.0), cpvzero, -0.881872, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(109, 90, 1.0, inf, cpv(372.0, 74.0), cpv(17.0, -45.0), cpvzero, 0.896055, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(109, 91, 1.0, inf, cpv(176.0, 288.0), cpv(15.0, -60.0), cpvzero, -1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(109, 92, 1.0, inf, cpv(149.0, 264.0), cpv(28.0, 65.0), cpvzero, 0.086738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(109, 93, 1.0, inf, cpv(564.0, 381.0), cpv(26.0, -2.0), cpvzero, -0.493941, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(109, 94, 1.0, inf, cpv(288.0, 67.0), cpv(24.0, -67.0), cpvzero, 0.708626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(109, 95, 1.0, inf, cpv(647.0, 191.0), cpv(29.0, -52.0), cpvzero, 3.024484, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(109, 96, 1.0, inf, cpv(621.0, 163.0), cpv(18.0, -28.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(109, 97, 1.0, inf, cpv(563.0, 340.0), cpv(15.0, 30.0), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(110, 98, 1.0, inf, cpv(496.0, 109.0), cpv(24.0, -66.0), cpvzero, 0.449760, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(110, 99, 1.0, inf, cpv(233.0, 165.0), cpv(17.0, -70.0), cpvzero, -1.515298, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(112, 100, 1.0, inf, cpv(555.0, 206.0), cpv(22.0, -5.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(113, 101, 1.0, inf, cpv(241.0, 271.0), cpv(21.0, 38.0), cpvzero, 2.910502, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(113, 102, 1.0, inf, cpv(660.0, 391.0), cpv(22.0, -42.0), cpvzero, -2.988943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(113, 103, 1.0, inf, cpv(501.0, 309.0), cpv(20.0, 37.0), cpvzero, -2.199593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(112, 104, 1.0, inf, cpv(388.0, 238.0), cpv(15.0, 17.0), cpvzero, -2.878598, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(775.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(740.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(701.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(656.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(612.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(577.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(547.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(515.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(479.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(441.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(349.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(395.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(301.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(258.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(217.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(618.0, 345.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(115.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(503.0, 204.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(460.0, 137.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(432.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(399.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(358.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(316.0, 77.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(274.0, 78.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(671.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(633.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body0, cpvzero, cpv(614.0, 232.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(620.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(641.0, 158.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(670.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(183.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(152.0, 278.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(641.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(248.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(587.0, 331.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(592.0, 371.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(486.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(237.0, 65.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(123.0, 307.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(228.0, 83.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(660.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(572.0, 351.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(764.0, 309.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(671.0, 349.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(534.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(478.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(404.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(322.0, 197.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(242.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(462.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(704.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(600.0, 284.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(543.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(365.0, 150.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(267.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(174.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(484.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(416.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(324.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(424.0, 137.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(367.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(289.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(638.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(593.0, 190.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(772.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(145.0, 313.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(743.0, 272.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(724.0, 332.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(420.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(367.0, 197.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(658.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(633.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(574.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(512.0, 260.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(513.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(451.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(444.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(203.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(217.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(279.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(317.0, 158.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(328.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(372.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(176.0, 278.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(149.0, 254.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(564.0, 371.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(288.0, 57.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(647.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(621.0, 153.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(563.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(496.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(233.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(555.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(241.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(660.0, 381.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(501.0, 299.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(388.0, 228.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg08)
}


const kineticArtLevel Level28 = {
	28,
	"Level 28",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

