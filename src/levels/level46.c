
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level45;
extern kineticArtLevel Level47;
#define PREV_LEVEL &Level45
#define NEXT_LEVEL &Level47


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 70, total joints: 70 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body33 = createPolyUniWrapper(145, 33, 1.0, inf, cpv(777.0, 151.0), cpv(21.0, 23.0), cpvzero, -0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(145, 34, 1.0, inf, cpv(685.0, 216.0), cpv(16.0, -42.0), cpvzero, -1.051650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(148, 35, 1.0, inf, cpv(562.0, 362.0), cpv(27.0, -35.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(148, 36, 1.0, inf, cpv(599.0, 373.0), cpv(17.0, -12.0), cpvzero, -0.037020, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(147, 37, 1.0, inf, cpv(654.0, 328.0), cpv(17.0, 17.0), cpvzero, -1.266285, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(147, 38, 1.0, inf, cpv(634.0, 361.0), cpv(24.0, -32.0), cpvzero, -0.657889, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(147, 39, 1.0, inf, cpv(214.0, 154.0), cpv(17.0, -73.0), cpvzero, -2.657115, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(149, 40, 1.0, inf, cpv(349.0, 140.0), cpv(19.0, -44.0), cpvzero, -1.910089, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(145, 41, 1.0, inf, cpv(68.0, 32.0), cpv(16.0, 3.0), cpvzero, -2.169215, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(145, 42, 1.0, inf, cpv(134.0, 64.0), cpv(27.0, -73.0), cpvzero, -2.958482, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(145, 43, 1.0, inf, cpv(177.0, 66.0), cpv(27.0, -16.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(149, 44, 1.0, inf, cpv(540.0, 334.0), cpv(15.0, 35.0), cpvzero, 1.225241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(147, 45, 1.0, inf, cpv(178.0, 143.0), cpv(27.0, -27.0), cpvzero, -3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(146, 46, 1.0, inf, cpv(220.0, 67.0), cpv(16.0, -43.0), cpvzero, -3.096169, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(145, 47, 1.0, inf, cpv(27.0, 33.0), cpv(26.0, 57.0), cpvzero, -1.849096, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(145, 48, 1.0, inf, cpv(44.0, 73.0), cpv(18.0, 59.0), cpvzero, -2.101012, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(145, 49, 1.0, inf, cpv(73.0, 108.0), cpv(17.0, -73.0), cpvzero, -2.327631, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(150, 50, 1.0, inf, cpv(351.0, 179.0), cpv(22.0, 23.0), cpvzero, -1.446441, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(148, 51, 1.0, inf, cpv(241.0, 176.0), cpv(19.0, 65.0), cpvzero, -2.234842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(146, 52, 1.0, inf, cpv(105.0, 129.0), cpv(20.0, -48.0), cpvzero, -2.761086, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(146, 53, 1.0, inf, cpv(139.0, 139.0), cpv(23.0, 60.0), cpvzero, -2.987648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(147, 54, 1.0, inf, cpv(300.0, 85.0), cpv(27.0, 8.0), cpvzero, -2.622447, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(145, 55, 1.0, inf, cpv(96.0, 53.0), cpv(16.0, 5.0), cpvzero, -2.718739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(145, 56, 1.0, inf, cpv(710.0, 186.0), cpv(26.0, 52.0), cpvzero, -0.665969, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(149, 57, 1.0, inf, cpv(248.0, 209.0), cpv(28.0, 72.0), cpvzero, -1.438245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(150, 58, 1.0, inf, cpv(534.0, 299.0), cpv(29.0, -69.0), cpvzero, 1.494024, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(148, 59, 1.0, inf, cpv(329.0, 106.0), cpv(18.0, 25.0), cpvzero, -2.332389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(150, 60, 1.0, inf, cpv(227.0, 242.0), cpv(29.0, -74.0), cpvzero, -0.605545, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(146, 61, 1.0, inf, cpv(263.0, 72.0), cpv(26.0, 25.0), cpvzero, -2.961739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(146, 62, 1.0, inf, cpv(670.0, 252.0), cpv(22.0, -56.0), cpvzero, -1.315614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(145, 63, 1.0, inf, cpv(742.0, 165.0), cpv(21.0, -50.0), cpvzero, -0.531724, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(146, 64, 1.0, inf, cpv(662.0, 290.0), cpv(20.0, 51.0), cpvzero, -1.355439, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(182, 65, 1.0, inf, cpv(736.0, 134.0), cpv(16.0, 68.0), cpvzero, 0.436627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(182, 66, 1.0, inf, cpv(644.0, 239.0), cpv(26.0, -66.0), cpvzero, -0.624023, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(183, 67, 1.0, inf, cpv(559.0, 325.0), cpv(21.0, -28.0), cpvzero, 1.780436, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(183, 68, 1.0, inf, cpv(367.0, 129.0), cpv(18.0, -26.0), cpvzero, -2.439336, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(183, 69, 1.0, inf, cpv(255.0, 246.0), cpv(29.0, -34.0), cpvzero, -1.876675, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(184, 70, 1.0, inf, cpv(255.0, 152.0), cpv(23.0, -11.0), cpvzero, -3.034857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(184, 71, 1.0, inf, cpv(309.0, 121.0), cpv(27.0, 17.0), cpvzero, -1.536327, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(184, 72, 1.0, inf, cpv(591.0, 397.0), cpv(17.0, 17.0), cpvzero, -0.643501, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(182, 73, 1.0, inf, cpv(47.0, 112.0), cpv(20.0, -2.0), cpvzero, -1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(182, 74, 1.0, inf, cpv(166.0, 89.0), cpv(22.0, 53.0), cpvzero, -2.308611, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(186, 75, 1.0, inf, cpv(155.0, 163.0), cpv(29.0, -43.0), cpvzero, -2.259721, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(186, 76, 1.0, inf, cpv(252.0, 50.0), cpv(24.0, -24.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(186, 77, 1.0, inf, cpv(675.0, 328.0), cpv(25.0, 46.0), cpvzero, -1.801887, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(182, 78, 1.0, inf, cpv(720.0, 222.0), cpv(15.0, -75.0), cpvzero, -1.631328, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(11, 79, 1.0, inf, cpv(528.0, 262.0), cpv(29.0, -16.0), cpvzero, -0.291457, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(12, 80, 1.0, inf, cpv(354.0, 213.0), cpv(18.0, -62.0), cpvzero, 2.988943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(13, 81, 1.0, inf, cpv(194.0, 257.0), cpv(28.0, 36.0), cpvzero, -1.847594, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(31, 82, 1.0, inf, cpv(518.0, 229.0), cpv(23.0, 59.0), cpvzero, -0.394791, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(30, 83, 1.0, inf, cpv(162.0, 267.0), cpv(22.0, -47.0), cpvzero, -1.902856, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(28, 84, 1.0, inf, cpv(362.0, 245.0), cpv(15.0, 3.0), cpvzero, 2.910502, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(74, 85, 1.0, inf, cpv(565.0, 222.0), cpv(23.0, 36.0), cpvzero, 2.439336, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(74, 86, 1.0, inf, cpv(477.0, 246.0), cpv(17.0, 28.0), cpvzero, 0.117109, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(69, 87, 1.0, inf, cpv(151.0, 224.0), cpv(21.0, 60.0), cpvzero, 0.743170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(69, 88, 1.0, inf, cpv(182.0, 306.0), cpv(28.0, -40.0), cpvzero, -1.397551, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(107, 89, 1.0, inf, cpv(493.0, 270.0), cpv(18.0, -16.0), cpvzero, -0.718830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(107, 90, 1.0, inf, cpv(560.0, 256.0), cpv(26.0, -66.0), cpvzero, -2.863293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(108, 91, 1.0, inf, cpv(511.0, 288.0), cpv(21.0, -24.0), cpvzero, -1.264917, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(108, 92, 1.0, inf, cpv(553.0, 281.0), cpv(28.0, -66.0), cpvzero, -2.253113, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(108, 93, 1.0, inf, cpv(384.0, 227.0), cpv(27.0, -67.0), cpvzero, -2.709185, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(108, 94, 1.0, inf, cpv(330.0, 240.0), cpv(15.0, 74.0), cpvzero, -0.927295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(109, 95, 1.0, inf, cpv(373.0, 185.0), cpv(18.0, -44.0), cpvzero, 2.134113, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(109, 96, 1.0, inf, cpv(326.0, 197.0), cpv(15.0, 34.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(105, 97, 1.0, inf, cpv(389.0, 205.0), cpv(24.0, -36.0), cpvzero, 3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(105, 98, 1.0, inf, cpv(320.0, 221.0), cpv(16.0, -5.0), cpvzero, -0.348771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(105, 99, 1.0, inf, cpv(226.0, 267.0), cpv(29.0, 74.0), cpvzero, -2.750986, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(105, 100, 1.0, inf, cpv(208.0, 232.0), cpv(20.0, -55.0), cpvzero, 1.719686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(107, 101, 1.0, inf, cpv(183.0, 223.0), cpv(25.0, 47.0), cpvzero, 1.487655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(107, 102, 1.0, inf, cpv(210.0, 285.0), cpv(23.0, 42.0), cpvzero, -2.129396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(777.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(685.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(562.0, 352.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(599.0, 363.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(654.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(634.0, 351.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(214.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(349.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(68.0, 22.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(134.0, 54.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(177.0, 56.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(540.0, 324.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(178.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(220.0, 57.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(27.0, 23.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(44.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(73.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(351.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(241.0, 166.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(105.0, 119.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(139.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(300.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(96.0, 43.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(710.0, 176.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(248.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(534.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(329.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(227.0, 232.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(263.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(670.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(742.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(662.0, 280.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(736.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(644.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(559.0, 315.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(367.0, 119.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(255.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(255.0, 142.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(309.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(591.0, 387.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(47.0, 102.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(166.0, 79.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(155.0, 153.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(252.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(675.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(720.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(528.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(354.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(194.0, 247.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(518.0, 219.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(162.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(362.0, 235.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(565.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(477.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(151.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(182.0, 296.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(493.0, 260.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(560.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(511.0, 278.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(553.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(384.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(330.0, 230.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(373.0, 175.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(326.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(389.0, 195.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(320.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(226.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(208.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(183.0, 213.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(210.0, 275.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level46 = {
	46,
	"Level 46",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

