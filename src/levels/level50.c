
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level49;
extern kineticArtLevel Level51;
#define PREV_LEVEL &Level49
#define NEXT_LEVEL &Level51


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

{  /* Total bodies: 67, total joints: 67 */
	//bg05
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body68 = createPolyUniWrapper(142, 68, 1.0, inf, cpv(82.0, 56.0), cpv(27.0, -70.0), cpvzero, 2.896614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(143, 69, 1.0, inf, cpv(122.0, 55.0), cpv(15.0, -1.0), cpvzero, -3.058451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(142, 70, 1.0, inf, cpv(164.0, 68.0), cpv(27.0, 10.0), cpvzero, -2.668686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(142, 71, 1.0, inf, cpv(207.0, 132.0), cpv(20.0, 34.0), cpvzero, -1.670465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(143, 72, 1.0, inf, cpv(194.0, 93.0), cpv(18.0, 10.0), cpvzero, -2.220667, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(142, 73, 1.0, inf, cpv(209.0, 219.0), cpv(18.0, 70.0), cpvzero, -1.609239, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(143, 74, 1.0, inf, cpv(209.0, 174.0), cpv(15.0, 37.0), cpvzero, -1.475198, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(142, 75, 1.0, inf, cpv(461.0, 285.0), cpv(25.0, -50.0), cpvzero, 2.408778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(142, 76, 1.0, inf, cpv(423.0, 312.0), cpv(29.0, 61.0), cpvzero, 2.706922, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(143, 77, 1.0, inf, cpv(219.0, 261.0), cpv(18.0, 48.0), cpvzero, -2.070143, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(142, 78, 1.0, inf, cpv(46.0, 74.0), cpv(18.0, 20.0), cpvzero, 2.334921, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(143, 79, 1.0, inf, cpv(379.0, 326.0), cpv(16.0, -42.0), cpvzero, 2.903757, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(142, 80, 1.0, inf, cpv(247.0, 292.0), cpv(15.0, 22.0), cpvzero, -2.319174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(143, 81, 1.0, inf, cpv(287.0, 315.0), cpv(21.0, 52.0), cpvzero, -2.701750, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(142, 82, 1.0, inf, cpv(331.0, 327.0), cpv(17.0, -63.0), cpvzero, -3.006065, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(133, 83, 1.0, inf, cpv(579.0, 91.0), cpv(15.0, -35.0), cpvzero, -2.911688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(134, 84, 1.0, inf, cpv(538.0, 82.0), cpv(20.0, 72.0), cpvzero, -3.061763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(133, 85, 1.0, inf, cpv(705.0, 280.0), cpv(27.0, 38.0), cpvzero, 0.657889, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(134, 86, 1.0, inf, cpv(459.0, 86.0), cpv(20.0, -13.0), cpvzero, 2.829551, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(58, 87, 1.0, inf, cpv(570.0, 265.0), cpv(17.0, 15.0), cpvzero, 1.828120, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(134, 88, 1.0, inf, cpv(775.0, 310.0), cpv(19.0, -6.0), cpvzero, 0.185348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(133, 89, 1.0, inf, cpv(665.0, 216.0), cpv(29.0, -9.0), cpvzero, -1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(134, 90, 1.0, inf, cpv(615.0, 110.0), cpv(18.0, 29.0), cpvzero, 0.732815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(133, 91, 1.0, inf, cpv(640.0, 142.0), cpv(23.0, 35.0), cpvzero, 1.056345, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(134, 92, 1.0, inf, cpv(655.0, 179.0), cpv(23.0, -50.0), cpvzero, 1.206817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(133, 93, 1.0, inf, cpv(498.0, 80.0), cpv(27.0, 43.0), cpvzero, 3.017238, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(134, 94, 1.0, inf, cpv(425.0, 104.0), cpv(21.0, -14.0), cpvzero, 2.544416, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(58, 95, 1.0, inf, cpv(453.0, 222.0), cpv(15.0, 5.0), cpvzero, -1.212026, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(47, 96, 1.0, inf, cpv(345.0, 124.0), cpv(20.0, 9.0), cpvzero, 0.110657, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(135, 97, 1.0, inf, cpv(391.0, 132.0), cpv(28.0, 18.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(47, 98, 1.0, inf, cpv(390.0, 173.0), cpv(25.0, -53.0), cpvzero, 1.687905, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(181, 99, 1.0, inf, cpv(77.0, 84.0), cpv(21.0, 49.0), cpvzero, -2.800614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(181, 100, 1.0, inf, cpv(147.0, 37.0), cpv(29.0, 22.0), cpvzero, 2.664247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(181, 101, 1.0, inf, cpv(182.0, 124.0), cpv(26.0, -23.0), cpvzero, -1.152572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(181, 102, 1.0, inf, cpv(229.0, 205.0), cpv(25.0, 23.0), cpvzero, -2.270689, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(181, 103, 1.0, inf, cpv(282.0, 337.0), cpv(16.0, 19.0), cpvzero, -2.131960, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(181, 104, 1.0, inf, cpv(367.0, 297.0), cpv(21.0, 71.0), cpvzero, 2.152177, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(134, 105, 1.0, inf, cpv(679.0, 249.0), cpv(22.0, 24.0), cpvzero, 0.973620, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(134, 106, 1.0, inf, cpv(737.0, 298.0), cpv(16.0, -57.0), cpvzero, 0.266252, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(184, 107, 1.0, inf, cpv(696.0, 232.0), cpv(23.0, 19.0), cpvzero, 1.746736, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(184, 108, 1.0, inf, cpv(717.0, 315.0), cpv(19.0, -2.0), cpvzero, -0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(184, 109, 1.0, inf, cpv(623.0, 169.0), cpv(20.0, -9.0), cpvzero, 0.296546, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(186, 110, 1.0, inf, cpv(527.0, 103.0), cpv(15.0, -51.0), cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(186, 111, 1.0, inf, cpv(612.0, 78.0), cpv(25.0, 7.0), cpvzero, 1.421906, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(186, 112, 1.0, inf, cpv(435.0, 73.0), cpv(27.0, 31.0), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(58, 113, 1.0, inf, cpv(522.0, 301.0), cpv(22.0, 60.0), cpvzero, 3.071938, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(58, 114, 1.0, inf, cpv(503.0, 179.0), cpv(16.0, -11.0), cpvzero, -0.096474, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(47, 115, 1.0, inf, cpv(305.0, 141.0), cpv(28.0, 54.0), cpvzero, -0.732815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(47, 116, 1.0, inf, cpv(304.0, 180.0), cpv(24.0, 9.0), cpvzero, -2.057696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(38, 117, 1.0, inf, cpv(355.0, 163.0), cpv(25.0, -47.0), cpvzero, -2.369527, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(58, 118, 1.0, inf, cpv(559.0, 204.0), cpv(24.0, 32.0), cpvzero, 0.862170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(41, 119, 1.0, inf, cpv(502.0, 250.0), cpv(16.0, 28.0), cpvzero, 0.901753, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(47, 120, 1.0, inf, cpv(369.0, 206.0), cpv(26.0, -40.0), cpvzero, 2.451146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(44, 121, 1.0, inf, cpv(467.0, 249.0), cpv(21.0, -67.0), cpvzero, -1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(44, 122, 1.0, inf, cpv(484.0, 209.0), cpv(29.0, -23.0), cpvzero, -0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(44, 123, 1.0, inf, cpv(522.0, 208.0), cpv(26.0, 16.0), cpvzero, 0.426627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(44, 124, 1.0, inf, cpv(548.0, 238.0), cpv(22.0, -29.0), cpvzero, 1.471128, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(44, 125, 1.0, inf, cpv(539.0, 275.0), cpv(25.0, 42.0), cpvzero, 2.363828, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(44, 126, 1.0, inf, cpv(493.0, 284.0), cpv(20.0, -3.0), cpvzero, -2.909489, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(47, 127, 1.0, inf, cpv(332.0, 211.0), cpv(22.0, -31.0), cpvzero, -2.517570, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(32, 128, 1.0, inf, cpv(354.0, 240.0), cpv(18.0, -22.0), cpvzero, 3.048836, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(32, 129, 1.0, inf, cpv(295.0, 219.0), cpv(15.0, -13.0), cpvzero, -2.401618, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(32, 130, 1.0, inf, cpv(273.0, 158.0), cpv(29.0, -35.0), cpvzero, -1.443287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(32, 131, 1.0, inf, cpv(314.0, 101.0), cpv(29.0, 55.0), cpvzero, -0.508730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(32, 132, 1.0, inf, cpv(407.0, 206.0), cpv(16.0, -66.0), cpvzero, 2.096863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(32, 133, 1.0, inf, cpv(418.0, 145.0), cpv(24.0, -50.0), cpvzero, 1.275355, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(32, 134, 1.0, inf, cpv(377.0, 105.0), cpv(23.0, 26.0), cpvzero, 0.358771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(82.0, 46.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(122.0, 45.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(164.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(207.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(194.0, 83.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(209.0, 209.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(209.0, 164.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(461.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(423.0, 302.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(219.0, 251.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(46.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(379.0, 316.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(247.0, 282.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(287.0, 305.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(331.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(579.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(538.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(705.0, 270.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(459.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(570.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(775.0, 300.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(665.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(615.0, 100.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(640.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(655.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(498.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(425.0, 94.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(453.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(345.0, 114.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(391.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(390.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(77.0, 74.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(147.0, 27.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(182.0, 114.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(229.0, 195.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(282.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(367.0, 287.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(679.0, 239.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(737.0, 288.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(696.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(717.0, 305.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(623.0, 159.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(527.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(612.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(435.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(522.0, 291.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(503.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(305.0, 131.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(304.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(355.0, 153.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(559.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(502.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(369.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(467.0, 239.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(484.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(522.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(548.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(539.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(493.0, 274.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(332.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(354.0, 230.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(295.0, 209.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(273.0, 148.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(314.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(407.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(418.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(377.0, 95.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg05)
}


const kineticArtLevel Level50 = {
	50,
	"Level 50",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

