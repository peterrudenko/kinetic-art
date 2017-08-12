
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level53;
extern kineticArtLevel Level55;
#define PREV_LEVEL &Level53
#define NEXT_LEVEL &Level55


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 90, total joints: 90 */
	//bg1
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(112, 1, 1.0, 63.887283, cpv(37.0, 41.0), cpvzero, cpvzero, -3.041924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(113, 2, 1.0, 63.887283, cpv(63.0, 48.0), cpvzero, cpvzero, 1.288241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(109, 3, 1.0, 75.803873, cpv(83.0, 67.0), cpvzero, cpvzero, 2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(110, 4, 1.0, 63.887283, cpv(90.0, 92.0), cpvzero, cpvzero, 2.717398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(111, 5, 1.0, 63.887283, cpv(83.0, 120.0), cpvzero, cpvzero, -1.978052, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(112, 6, 1.0, 63.887283, cpv(73.0, 143.0), cpvzero, cpvzero, -0.502843, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(113, 7, 1.0, 63.887283, cpv(70.0, 169.0), cpvzero, cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(109, 8, 1.0, 75.803873, cpv(89.0, 187.0), cpvzero, cpvzero, -1.207649, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(110, 9, 1.0, 63.887283, cpv(117.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(111, 10, 1.0, 63.887283, cpv(144.0, 200.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(112, 11, 1.0, 63.887283, cpv(172.0, 186.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(111, 12, 1.0, 63.887283, cpv(173.0, 53.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(107, 13, 1.0, 75.803873, cpv(164.0, 78.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(108, 14, 1.0, 75.803873, cpv(166.0, 103.0), cpvzero, cpvzero, 2.541542, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(109, 15, 1.0, 75.803873, cpv(183.0, 123.0), cpvzero, cpvzero, -0.931410, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(110, 16, 1.0, 63.887283, cpv(204.0, 139.0), cpvzero, cpvzero, 1.869295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(111, 17, 1.0, 63.887283, cpv(226.0, 161.0), cpvzero, cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(107, 18, 1.0, 75.803873, cpv(230.0, 179.0), cpvzero, cpvzero, -0.655696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(108, 19, 1.0, 75.803873, cpv(224.0, 208.0), cpvzero, cpvzero, -2.361542, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(109, 20, 1.0, 75.803873, cpv(202.0, 226.0), cpvzero, cpvzero, 0.033321, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(110, 21, 1.0, 63.887283, cpv(172.0, 243.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(111, 22, 1.0, 63.887283, cpv(144.0, 245.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(107, 23, 1.0, 75.803873, cpv(112.0, 239.0), cpvzero, cpvzero, -1.170556, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(110, 92, 1.0, 63.887283, cpv(750.0, 154.0), cpvzero, cpvzero, 1.823351, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(111, 91, 1.0, 63.887283, cpv(703.0, 176.0), cpvzero, cpvzero, -1.262744, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(107, 99, 1.0, 75.803873, cpv(737.0, 301.0), cpvzero, cpvzero, -0.917950, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(111, 98, 1.0, 63.887283, cpv(710.0, 289.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(110, 97, 1.0, 63.887283, cpv(709.0, 261.0), cpvzero, cpvzero, -1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(110, 29, 1.0, 63.887283, cpv(232.0, 64.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(106, 30, 1.0, 75.803873, cpv(262.0, 67.0), cpvzero, cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(107, 31, 1.0, 75.803873, cpv(289.0, 81.0), cpvzero, cpvzero, 2.268699, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(108, 32, 1.0, 75.803873, cpv(307.0, 97.0), cpvzero, cpvzero, -1.469107, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(109, 33, 1.0, 75.803873, cpv(321.0, 124.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(110, 34, 1.0, 63.887283, cpv(323.0, 148.0), cpvzero, cpvzero, 0.711459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(106, 35, 1.0, 75.803873, cpv(316.0, 175.0), cpvzero, cpvzero, -1.961403, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(107, 36, 1.0, 75.803873, cpv(302.0, 196.0), cpvzero, cpvzero, -2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(108, 37, 1.0, 75.803873, cpv(292.0, 218.0), cpvzero, cpvzero, -0.499347, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(109, 38, 1.0, 75.803873, cpv(290.0, 248.0), cpvzero, cpvzero, -2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(109, 96, 1.0, 75.803873, cpv(728.0, 245.0), cpvzero, cpvzero, -1.623379, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(108, 95, 1.0, 75.803873, cpv(751.0, 234.0), cpvzero, cpvzero, -0.062419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(107, 94, 1.0, 75.803873, cpv(757.0, 209.0), cpvzero, cpvzero, 1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(109, 42, 1.0, 75.803873, cpv(342.0, 49.0), cpvzero, cpvzero, -1.269876, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(110, 43, 1.0, 63.887283, cpv(339.0, 80.0), cpvzero, cpvzero, -1.007480, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(111, 44, 1.0, 63.887283, cpv(351.0, 101.0), cpvzero, cpvzero, -3.036716, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(107, 45, 1.0, 75.803873, cpv(373.0, 107.0), cpvzero, cpvzero, -1.729452, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(108, 46, 1.0, 75.803873, cpv(394.0, 119.0), cpvzero, cpvzero, 2.384758, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(109, 47, 1.0, 75.803873, cpv(416.0, 129.0), cpvzero, cpvzero, -1.083897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(110, 48, 1.0, 63.887283, cpv(431.0, 151.0), cpvzero, cpvzero, 2.231839, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(111, 49, 1.0, 63.887283, cpv(427.0, 178.0), cpvzero, cpvzero, 2.125792, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(107, 50, 1.0, 75.803873, cpv(414.0, 198.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(108, 51, 1.0, 75.803873, cpv(388.0, 209.0), cpvzero, cpvzero, 1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(109, 52, 1.0, 75.803873, cpv(362.0, 216.0), cpvzero, cpvzero, 0.708626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(110, 53, 1.0, 63.887283, cpv(343.0, 239.0), cpvzero, cpvzero, -1.227772, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(111, 54, 1.0, 63.887283, cpv(355.0, 270.0), cpvzero, cpvzero, -3.014083, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(105, 55, 1.0, 75.803873, cpv(426.0, 84.0), cpvzero, cpvzero, 1.318242, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(106, 56, 1.0, 75.803873, cpv(452.0, 89.0), cpvzero, cpvzero, -1.901892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(107, 57, 1.0, 75.803873, cpv(474.0, 103.0), cpvzero, cpvzero, -0.607802, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(108, 58, 1.0, 75.803873, cpv(487.0, 124.0), cpvzero, cpvzero, 1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(109, 59, 1.0, 75.803873, cpv(477.0, 152.0), cpvzero, cpvzero, 0.066568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(105, 60, 1.0, 75.803873, cpv(471.0, 175.0), cpvzero, cpvzero, -3.086094, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(106, 61, 1.0, 75.803873, cpv(476.0, 203.0), cpvzero, cpvzero, -1.390943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(107, 62, 1.0, 75.803873, cpv(496.0, 230.0), cpvzero, cpvzero, -0.773634, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(112, 63, 1.0, 63.887283, cpv(496.0, 60.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(108, 64, 1.0, 75.803873, cpv(530.0, 56.0), cpvzero, cpvzero, 0.942000, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(109, 65, 1.0, 75.803873, cpv(560.0, 56.0), cpvzero, cpvzero, 1.972667, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(110, 66, 1.0, 63.887283, cpv(584.0, 67.0), cpvzero, cpvzero, 1.624798, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(111, 67, 1.0, 63.887283, cpv(601.0, 86.0), cpvzero, cpvzero, -3.017238, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(112, 68, 1.0, 63.887283, cpv(591.0, 115.0), cpvzero, cpvzero, -1.138389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(108, 69, 1.0, 75.803873, cpv(568.0, 126.0), cpvzero, cpvzero, 0.844154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(109, 70, 1.0, 75.803873, cpv(545.0, 134.0), cpvzero, cpvzero, -1.606495, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(110, 71, 1.0, 63.887283, cpv(522.0, 152.0), cpvzero, cpvzero, 0.493941, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(111, 72, 1.0, 63.887283, cpv(516.0, 175.0), cpvzero, cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(112, 73, 1.0, 63.887283, cpv(530.0, 199.0), cpvzero, cpvzero, -1.004067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(111, 93, 1.0, 63.887283, cpv(757.0, 181.0), cpvzero, cpvzero, -1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(109, 75, 1.0, 75.803873, cpv(553.0, 221.0), cpvzero, cpvzero, 0.439843, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(110, 76, 1.0, 63.887283, cpv(572.0, 243.0), cpvzero, cpvzero, -2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(111, 77, 1.0, 63.887283, cpv(558.0, 270.0), cpvzero, cpvzero, 1.203622, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(110, 78, 1.0, 63.887283, cpv(600.0, 173.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(106, 79, 1.0, 75.803873, cpv(624.0, 176.0), cpvzero, cpvzero, 1.147942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(107, 80, 1.0, 75.803873, cpv(647.0, 188.0), cpvzero, cpvzero, 2.792822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(108, 81, 1.0, 75.803873, cpv(663.0, 210.0), cpvzero, cpvzero, -2.723368, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(109, 82, 1.0, 75.803873, cpv(654.0, 236.0), cpvzero, cpvzero, 1.279340, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(110, 83, 1.0, 63.887283, cpv(632.0, 260.0), cpvzero, cpvzero, 1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(106, 84, 1.0, 75.803873, cpv(632.0, 285.0), cpvzero, cpvzero, -2.308611, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(110, 85, 1.0, 63.887283, cpv(692.0, 51.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(111, 86, 1.0, 63.887283, cpv(668.0, 64.0), cpvzero, cpvzero, 1.438245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(112, 87, 1.0, 63.887283, cpv(655.0, 87.0), cpvzero, cpvzero, -2.053310, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(113, 88, 1.0, 63.887283, cpv(658.0, 115.0), cpvzero, cpvzero, 2.992703, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(109, 89, 1.0, 75.803873, cpv(675.0, 134.0), cpvzero, cpvzero, 2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(110, 90, 1.0, 63.887283, cpv(694.0, 151.0), cpvzero, cpvzero, -0.753151, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(37.0, 41.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 27.586228, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 25.961510, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 28.861739, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 28.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body12, cpv(173.0, 53.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpvzero, cpvzero, 26.570661, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 27.313001, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 30.149627, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 26.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 25.553865, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 29.206164, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 26.476405, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body75, body0, cpv(-5.748260, -2.820905), cpv(549.0, 216.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body91, cpvzero, cpvzero, 26.570661, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body99, cpvzero, cpvzero, 26.832816, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body98, cpvzero, cpvzero, 27.202941, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body97, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body29, cpv(232.0, 64.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 30.149627, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 30.413813, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 26.907248, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body33, cpvzero, cpvzero, 29.068884, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body34, cpvzero, cpvzero, 29.546573, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 31.304952, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 25.455844, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 29.154759, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 29.120440, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body96, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body95, cpvzero, cpvzero, 25.709920, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body94, cpvzero, cpvzero, 28.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body93, cpvzero, cpvzero, 27.892651, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body43, cpvzero, cpvzero, 29.966648, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body44, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body45, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body46, cpvzero, cpvzero, 28.231188, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body47, cpvzero, cpvzero, 31.400637, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body48, cpvzero, cpvzero, 31.622777, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body49, cpvzero, cpvzero, 27.018512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body50, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body51, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body52, cpvzero, cpvzero, 25.298221, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body53, cpvzero, cpvzero, 27.294688, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body54, cpvzero, cpvzero, 26.172505, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body55, cpv(426.0, 84.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body56, cpvzero, cpvzero, 26.476405, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body57, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body58, cpvzero, cpvzero, 29.410882, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body59, cpvzero, cpvzero, 27.073973, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body60, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body61, cpvzero, cpvzero, 28.017851, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body62, cpvzero, cpvzero, 25.298221, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body63, cpv(496.0, 60.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body64, cpvzero, cpvzero, 34.234486, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body65, cpvzero, cpvzero, 30.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body66, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body67, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body68, cpvzero, cpvzero, 30.265492, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body69, cpvzero, cpvzero, 27.802878, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body70, cpvzero, cpvzero, 26.476405, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body71, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body72, cpvzero, cpvzero, 26.305893, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body73, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body42, body0, cpv(1.317330, -2.502927), cpv(340.0, 47.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body92, cpv(750.0, 154.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body76, cpvzero, cpvzero, 27.166155, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body77, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body78, cpv(590.0, 174.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body79, cpvzero, cpvzero, 34.058773, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body80, cpvzero, cpvzero, 25.942244, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body81, cpvzero, cpvzero, 27.202941, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body82, cpvzero, cpvzero, 27.513633, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body83, cpvzero, cpvzero, 26.870058, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body84, cpvzero, cpvzero, 30.149627, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body85, cpv(692.0, 51.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body86, cpvzero, cpvzero, 27.294688, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body87, cpvzero, cpvzero, 26.419690, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body88, cpvzero, cpvzero, 28.160256, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body89, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body90, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
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
	BGBLIT(rc_bg01)
}


const kineticArtLevel Level54 = {
	54,
	"Level 54",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

