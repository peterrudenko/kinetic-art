
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level54;
extern kineticArtLevel Level56;
#define PREV_LEVEL &Level54
#define NEXT_LEVEL &Level56


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 65, total joints: 65 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body66 = createPolyUniWrapper(142, 66, 1.000000, inf, cpv(133.000000, 193.000000), cpv(29.000000, 24.000000), cpv(0.000000, 0.000000), -1.441094, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(143, 67, 1.000000, inf, cpv(144.000000, 157.000000), cpv(21.000000, 29.000000), cpv(0.000000, 0.000000), -0.885067, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(144, 68, 1.000000, inf, cpv(175.000000, 132.000000), cpv(24.000000, 48.000000), cpv(0.000000, 0.000000), -0.444419, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(145, 69, 1.000000, inf, cpv(211.000000, 128.000000), cpv(28.000000, -37.000000), cpv(0.000000, 0.000000), 0.183111, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(146, 70, 1.000000, inf, cpv(246.000000, 145.000000), cpv(25.000000, 4.000000), cpv(0.000000, 0.000000), 0.748378, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(147, 71, 1.000000, inf, cpv(270.000000, 177.000000), cpv(27.000000, -66.000000), cpv(0.000000, 0.000000), 1.078987, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(148, 72, 1.000000, inf, cpv(281.000000, 214.000000), cpv(19.000000, -4.000000), cpv(0.000000, 0.000000), 1.343997, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(149, 73, 1.000000, inf, cpv(299.000000, 251.000000), cpv(24.000000, -18.000000), cpv(0.000000, 0.000000), 0.968509, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(150, 74, 1.000000, inf, cpv(329.000000, 278.000000), cpv(18.000000, 13.000000), cpv(0.000000, 0.000000), 0.605545, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(151, 75, 1.000000, inf, cpv(365.000000, 299.000000), cpv(29.000000, -74.000000), cpv(0.000000, 0.000000), 0.489957, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(142, 76, 1.000000, inf, cpv(690.000000, 172.000000), cpv(26.000000, -70.000000), cpv(0.000000, 0.000000), 1.367751, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(143, 77, 1.000000, inf, cpv(690.000000, 211.000000), cpv(19.000000, -17.000000), cpv(0.000000, 0.000000), 1.729452, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(144, 78, 1.000000, inf, cpv(681.000000, 247.000000), cpv(22.000000, -10.000000), cpv(0.000000, 0.000000), 1.989021, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(145, 79, 1.000000, inf, cpv(661.000000, 280.000000), cpv(28.000000, -67.000000), cpv(0.000000, 0.000000), 2.356194, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(146, 80, 1.000000, inf, cpv(626.000000, 301.000000), cpv(26.000000, -7.000000), cpv(0.000000, 0.000000), 2.779048, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(147, 81, 1.000000, inf, cpv(587.000000, 305.000000), cpv(27.000000, 51.000000), cpv(0.000000, 0.000000), -3.041924, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(148, 82, 1.000000, inf, cpv(549.000000, 297.000000), cpv(23.000000, -37.000000), cpv(0.000000, 0.000000), -2.798569, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(149, 83, 1.000000, inf, cpv(512.000000, 286.000000), cpv(17.000000, -20.000000), cpv(0.000000, 0.000000), -2.887919, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(150, 84, 1.000000, inf, cpv(474.000000, 282.000000), cpv(27.000000, -18.000000), cpv(0.000000, 0.000000), 3.011890, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(151, 85, 1.000000, inf, cpv(441.000000, 298.000000), cpv(29.000000, -67.000000), cpv(0.000000, 0.000000), 2.462930, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(142, 86, 1.000000, inf, cpv(502.000000, 138.000000), cpv(26.000000, -67.000000), cpv(0.000000, 0.000000), 2.546183, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(143, 87, 1.000000, inf, cpv(466.000000, 149.000000), cpv(19.000000, 3.000000), cpv(0.000000, 0.000000), 3.115957, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(144, 88, 1.000000, inf, cpv(430.000000, 139.000000), cpv(16.000000, -5.000000), cpv(0.000000, 0.000000), -2.706922, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(145, 89, 1.000000, inf, cpv(396.000000, 128.000000), cpv(25.000000, 63.000000), cpv(0.000000, 0.000000), -2.999696, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(146, 90, 1.000000, inf, cpv(358.000000, 133.000000), cpv(17.000000, 41.000000), cpv(0.000000, 0.000000), 2.572279, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(147, 91, 1.000000, inf, cpv(332.000000, 164.000000), cpv(24.000000, 2.000000), cpv(0.000000, 0.000000), 1.843805, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(148, 92, 1.000000, inf, cpv(332.000000, 200.000000), cpv(20.000000, 4.000000), cpv(0.000000, 0.000000), 1.267911, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(149, 93, 1.000000, inf, cpv(355.000000, 232.000000), cpv(20.000000, 45.000000), cpv(0.000000, 0.000000), 0.830821, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(150, 94, 1.000000, inf, cpv(382.000000, 259.000000), cpv(19.000000, -18.000000), cpv(0.000000, 0.000000), 0.844154, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(151, 95, 1.000000, inf, cpv(405.000000, 289.000000), cpv(17.000000, -53.000000), cpv(0.000000, 0.000000), 1.107149, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(26, 96, 1.000000, inf, cpv(405.000000, 337.000000), cpv(20.000000, -64.000000), cpv(0.000000, 0.000000), 0.000000, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(16, 97, 1.000000, inf, cpv(528.000000, 106.000000), cpv(15.000000, -1.000000), cpv(0.000000, 0.000000), 0.426627, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(30, 98, 1.000000, inf, cpv(677.000000, 137.000000), cpv(21.000000, 67.000000), cpv(0.000000, 0.000000), -0.549853, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(30, 99, 1.000000, inf, cpv(137.000000, 231.000000), cpv(15.000000, -61.000000), cpv(0.000000, 0.000000), 2.969402, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(186, 100, 1.000000, inf, cpv(585.000000, 280.000000), cpv(16.000000, -5.000000), cpv(0.000000, 0.000000), 2.605781, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(186, 101, 1.000000, inf, cpv(336.000000, 118.000000), cpv(19.000000, 57.000000), cpv(0.000000, 0.000000), 1.773118, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(186, 102, 1.000000, inf, cpv(671.000000, 302.000000), cpv(17.000000, 68.000000), cpv(0.000000, 0.000000), 3.141593, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(186, 103, 1.000000, inf, cpv(250.000000, 189.000000), cpv(25.000000, 33.000000), cpv(0.000000, 0.000000), 0.528074, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(185, 104, 1.000000, inf, cpv(294.000000, 277.000000), cpv(19.000000, 2.000000), cpv(0.000000, 0.000000), 0.000000, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(185, 105, 1.000000, inf, cpv(458.000000, 262.000000), cpv(28.000000, 49.000000), cpv(0.000000, 0.000000), 1.985303, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(183, 106, 1.000000, inf, cpv(375.000000, 220.000000), cpv(24.000000, 0.000000), cpv(0.000000, 0.000000), 1.570796, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(118, 107, 1.000000, inf, cpv(657.000000, 107.000000), cpv(21.000000, 44.000000), cpv(0.000000, 0.000000), -0.502843, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(119, 108, 1.000000, inf, cpv(641.000000, 160.000000), cpv(27.000000, 56.000000), cpv(0.000000, 0.000000), -2.016902, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(119, 109, 1.000000, inf, cpv(715.000000, 116.000000), cpv(23.000000, -62.000000), cpv(0.000000, 0.000000), -3.045119, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(117, 110, 1.000000, inf, cpv(641.000000, 131.000000), cpv(20.000000, -34.000000), cpv(0.000000, 0.000000), -1.313473, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(117, 111, 1.000000, inf, cpv(691.000000, 99.000000), cpv(21.000000, 14.000000), cpv(0.000000, 0.000000), -1.839163, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(116, 112, 1.000000, inf, cpv(567.000000, 93.000000), cpv(20.000000, -9.000000), cpv(0.000000, 0.000000), 1.396124, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(116, 113, 1.000000, inf, cpv(522.000000, 68.000000), cpv(27.000000, 35.000000), cpv(0.000000, 0.000000), -0.185348, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(117, 114, 1.000000, inf, cpv(562.000000, 128.000000), cpv(26.000000, -36.000000), cpv(0.000000, 0.000000), 0.226799, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(115, 115, 1.000000, inf, cpv(141.000000, 271.000000), cpv(27.000000, 48.000000), cpv(0.000000, 0.000000), 0.900674, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(115, 116, 1.000000, inf, cpv(554.000000, 70.000000), cpv(16.000000, -7.000000), cpv(0.000000, 0.000000), -1.467715, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(117, 117, 1.000000, inf, cpv(498.000000, 84.000000), cpv(28.000000, -53.000000), cpv(0.000000, 0.000000), -1.203622, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(118, 118, 1.000000, inf, cpv(169.000000, 249.000000), cpv(21.000000, 50.000000), cpv(0.000000, 0.000000), 2.356194, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(118, 119, 1.000000, inf, cpv(116.000000, 259.000000), cpv(23.000000, -28.000000), cpv(0.000000, 0.000000), -2.570255, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(117, 120, 1.000000, inf, cpv(179.000000, 224.000000), cpv(24.000000, -23.000000), cpv(0.000000, 0.000000), 1.377174, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(117, 121, 1.000000, inf, cpv(98.000000, 236.000000), cpv(21.000000, -15.000000), cpv(0.000000, 0.000000), -1.811331, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(106, 122, 1.000000, inf, cpv(493.000000, 112.000000), cpv(19.000000, -24.000000), cpv(0.000000, 0.000000), 0.000000, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(106, 123, 1.000000, inf, cpv(532.000000, 140.000000), cpv(18.000000, -51.000000), cpv(0.000000, 0.000000), -1.768192, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(107, 124, 1.000000, inf, cpv(131.000000, 133.000000), cpv(16.000000, -28.000000), cpv(0.000000, 0.000000), -0.207496, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(107, 125, 1.000000, inf, cpv(711.000000, 202.000000), cpv(17.000000, 66.000000), cpv(0.000000, 0.000000), 2.439336, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(106, 126, 1.000000, inf, cpv(666.000000, 170.000000), cpv(24.000000, -16.000000), cpv(0.000000, 0.000000), -1.570796, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(106, 127, 1.000000, inf, cpv(711.000000, 151.000000), cpv(17.000000, 66.000000), cpv(0.000000, 0.000000), -2.455863, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(106, 128, 1.000000, inf, cpv(159.000000, 201.000000), cpv(26.000000, 50.000000), cpv(0.000000, 0.000000), 1.781890, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(106, 129, 1.000000, inf, cpv(108.000000, 209.000000), cpv(23.000000, 33.000000), cpv(0.000000, 0.000000), 0.643501, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(107, 130, 1.000000, inf, cpv(493.000000, 169.000000), cpv(24.000000, -2.000000), cpv(0.000000, 0.000000), -2.480549, 0.000000, 0.000000, 0.900000, 0.500000, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpv(0.000000, 0.000000), cpv(133.000000, 183.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpv(0.000000, 0.000000), cpv(144.000000, 147.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpv(0.000000, 0.000000), cpv(175.000000, 122.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpv(0.000000, 0.000000), cpv(211.000000, 118.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpv(0.000000, 0.000000), cpv(246.000000, 135.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpv(0.000000, 0.000000), cpv(270.000000, 167.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpv(0.000000, 0.000000), cpv(281.000000, 204.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpv(0.000000, 0.000000), cpv(299.000000, 241.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpv(0.000000, 0.000000), cpv(329.000000, 268.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpv(0.000000, 0.000000), cpv(365.000000, 289.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpv(0.000000, 0.000000), cpv(690.000000, 162.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpv(0.000000, 0.000000), cpv(690.000000, 201.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpv(0.000000, 0.000000), cpv(681.000000, 237.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpv(0.000000, 0.000000), cpv(661.000000, 270.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpv(0.000000, 0.000000), cpv(626.000000, 291.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpv(0.000000, 0.000000), cpv(587.000000, 295.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpv(0.000000, 0.000000), cpv(549.000000, 287.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpv(0.000000, 0.000000), cpv(512.000000, 276.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpv(0.000000, 0.000000), cpv(474.000000, 272.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpv(0.000000, 0.000000), cpv(441.000000, 288.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpv(0.000000, 0.000000), cpv(502.000000, 128.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpv(0.000000, 0.000000), cpv(466.000000, 139.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpv(0.000000, 0.000000), cpv(430.000000, 129.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpv(0.000000, 0.000000), cpv(396.000000, 118.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpv(0.000000, 0.000000), cpv(358.000000, 123.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpv(0.000000, 0.000000), cpv(332.000000, 154.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpv(0.000000, 0.000000), cpv(332.000000, 190.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpv(0.000000, 0.000000), cpv(355.000000, 222.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpv(0.000000, 0.000000), cpv(382.000000, 249.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpv(0.000000, 0.000000), cpv(405.000000, 279.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpv(0.000000, 0.000000), cpv(405.000000, 327.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpv(0.000000, 0.000000), cpv(528.000000, 96.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpv(0.000000, 0.000000), cpv(677.000000, 127.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpv(0.000000, 0.000000), cpv(137.000000, 221.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpv(0.000000, 0.000000), cpv(585.000000, 270.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpv(0.000000, 0.000000), cpv(336.000000, 108.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpv(0.000000, 0.000000), cpv(671.000000, 292.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpv(0.000000, 0.000000), cpv(250.000000, 179.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpv(0.000000, 0.000000), cpv(294.000000, 267.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpv(0.000000, 0.000000), cpv(458.000000, 252.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpv(0.000000, 0.000000), cpv(375.000000, 210.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpv(0.000000, 0.000000), cpv(657.000000, 97.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpv(0.000000, 0.000000), cpv(641.000000, 150.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpv(0.000000, 0.000000), cpv(715.000000, 106.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpv(0.000000, 0.000000), cpv(641.000000, 121.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpv(0.000000, 0.000000), cpv(691.000000, 89.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpv(0.000000, 0.000000), cpv(567.000000, 83.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpv(0.000000, 0.000000), cpv(522.000000, 58.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpv(0.000000, 0.000000), cpv(562.000000, 118.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpv(0.000000, 0.000000), cpv(141.000000, 261.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpv(0.000000, 0.000000), cpv(554.000000, 60.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpv(0.000000, 0.000000), cpv(498.000000, 74.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpv(0.000000, 0.000000), cpv(169.000000, 239.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpv(0.000000, 0.000000), cpv(116.000000, 249.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpv(0.000000, 0.000000), cpv(179.000000, 214.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpv(0.000000, 0.000000), cpv(98.000000, 226.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpv(0.000000, 0.000000), cpv(493.000000, 102.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpv(0.000000, 0.000000), cpv(532.000000, 130.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpv(0.000000, 0.000000), cpv(131.000000, 123.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpv(0.000000, 0.000000), cpv(711.000000, 192.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpv(0.000000, 0.000000), cpv(666.000000, 160.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpv(0.000000, 0.000000), cpv(711.000000, 141.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpv(0.000000, 0.000000), cpv(159.000000, 191.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpv(0.000000, 0.000000), cpv(108.000000, 199.000000), 10.000000, 300.000000, 1.000000));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpv(0.000000, 0.000000), cpv(493.000000, 159.000000), 10.000000, 300.000000, 1.000000));
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


const kineticArtLevel Level55 = {
	55,
	"Level 55",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

