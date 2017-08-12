
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level76;
extern kineticArtLevel Scores;
#define PREV_LEVEL &Level76
#define NEXT_LEVEL &Scores


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 69, total joints: 69 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body70 = createPolyUniWrapper(182, 70, 1.0, inf, cpv(360.0, 389.0), cpv(28.0, 21.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(182, 71, 1.0, inf, cpv(332.0, 403.0), cpv(23.0, -43.0), cpvzero, -0.158655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(182, 72, 1.0, inf, cpv(321.0, 378.0), cpv(28.0, 67.0), cpvzero, 0.665969, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(182, 73, 1.0, inf, cpv(292.0, 388.0), cpv(25.0, -2.0), cpvzero, 0.099669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(182, 74, 1.0, inf, cpv(252.0, 340.0), cpv(28.0, -16.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(182, 75, 1.0, inf, cpv(222.0, 338.0), cpv(25.0, 61.0), cpvzero, 0.388319, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(182, 76, 1.0, inf, cpv(229.0, 310.0), cpv(18.0, -4.0), cpvzero, 1.482789, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(182, 77, 1.0, inf, cpv(200.0, 303.0), cpv(16.0, -4.0), cpvzero, 0.708626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(182, 78, 1.0, inf, cpv(227.0, 198.0), cpv(23.0, 19.0), cpvzero, 2.419938, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(182, 79, 1.0, inf, cpv(206.0, 176.0), cpv(27.0, 53.0), cpvzero, 1.545802, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(182, 80, 1.0, inf, cpv(243.0, 165.0), cpv(16.0, 40.0), cpvzero, 2.704965, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(182, 81, 1.0, inf, cpv(232.0, 139.0), cpv(28.0, 2.0), cpvzero, 1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(182, 82, 1.0, inf, cpv(466.0, 379.0), cpv(24.0, -36.0), cpvzero, 2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(182, 83, 1.0, inf, cpv(418.0, 391.0), cpv(23.0, -29.0), cpvzero, 2.334921, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(182, 84, 1.0, inf, cpv(490.0, 387.0), cpv(18.0, -8.0), cpvzero, 3.038511, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(182, 85, 1.0, inf, cpv(513.0, 365.0), cpv(25.0, -35.0), cpvzero, 2.512796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(182, 86, 1.0, inf, cpv(539.0, 371.0), cpv(15.0, 21.0), cpvzero, 3.017238, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(182, 87, 1.0, inf, cpv(541.0, 346.0), cpv(16.0, 13.0), cpvzero, 2.098871, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(182, 88, 1.0, inf, cpv(569.0, 277.0), cpv(21.0, 41.0), cpvzero, 1.283515, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(182, 89, 1.0, inf, cpv(591.0, 262.0), cpv(21.0, -13.0), cpvzero, 2.057696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(182, 90, 1.0, inf, cpv(587.0, 216.0), cpv(25.0, -11.0), cpvzero, 1.774814, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(182, 91, 1.0, inf, cpv(568.0, 236.0), cpv(23.0, -39.0), cpvzero, 1.099902, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(182, 92, 1.0, inf, cpv(572.0, 171.0), cpv(22.0, -26.0), cpvzero, 1.450173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(182, 93, 1.0, inf, cpv(562.0, 196.0), cpv(15.0, 45.0), cpvzero, 0.955176, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(186, 94, 1.0, inf, cpv(248.0, 391.0), cpv(29.0, 67.0), cpvzero, -0.418224, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(186, 95, 1.0, inf, cpv(183.0, 321.0), cpv(29.0, 19.0), cpvzero, 0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(186, 96, 1.0, inf, cpv(209.0, 360.0), cpv(16.0, 15.0), cpvzero, -0.105666, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(186, 97, 1.0, inf, cpv(167.0, 277.0), cpv(18.0, -13.0), cpvzero, 0.300920, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(186, 98, 1.0, inf, cpv(169.0, 224.0), cpv(21.0, -25.0), cpvzero, 0.682317, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(148, 99, 1.0, inf, cpv(500.0, 277.0), cpvzero, cpvzero, 1.854590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(186, 100, 1.0, inf, cpv(255.0, 104.0), cpv(21.0, 45.0), cpvzero, 1.927016, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(186, 101, 1.0, inf, cpv(186.0, 178.0), cpv(29.0, -26.0), cpvzero, 1.041207, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(186, 102, 1.0, inf, cpv(207.0, 130.0), cpv(16.0, 5.0), cpvzero, 1.302886, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(186, 103, 1.0, inf, cpv(537.0, 390.0), cpv(27.0, 19.0), cpvzero, -2.896614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(186, 104, 1.0, inf, cpv(582.0, 362.0), cpv(27.0, -15.0), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(186, 105, 1.0, inf, cpv(603.0, 320.0), cpv(27.0, 56.0), cpvzero, 2.672165, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(186, 106, 1.0, inf, cpv(613.0, 271.0), cpv(27.0, -45.0), cpvzero, 2.431322, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(148, 107, 1.0, inf, cpv(511.0, 246.0), cpvzero, cpvzero, 2.020556, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(186, 108, 1.0, inf, cpv(597.0, 174.0), cpv(17.0, 14.0), cpvzero, 2.119346, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(186, 109, 1.0, inf, cpv(612.0, 219.0), cpv(19.0, -2.0), cpvzero, 2.137526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(186, 110, 1.0, inf, cpv(573.0, 124.0), cpv(24.0, -22.0), cpvzero, 1.943784, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(186, 111, 1.0, inf, cpv(525.0, 105.0), cpv(20.0, 8.0), cpvzero, 1.196463, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(182, 112, 1.0, inf, cpv(449.0, 399.0), cpv(27.0, -73.0), cpvzero, -3.103150, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(182, 113, 1.0, inf, cpv(571.0, 343.0), cpv(22.0, 66.0), cpvzero, 2.750986, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(182, 114, 1.0, inf, cpv(559.0, 314.0), cpv(29.0, 52.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(182, 115, 1.0, inf, cpv(585.0, 304.0), cpv(24.0, 17.0), cpvzero, 2.223643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(182, 116, 1.0, inf, cpv(538.0, 160.0), cpv(29.0, 67.0), cpvzero, 0.441179, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(182, 117, 1.0, inf, cpv(548.0, 136.0), cpv(19.0, 42.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(182, 118, 1.0, inf, cpv(506.0, 143.0), cpv(24.0, 70.0), cpvzero, -0.114877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(182, 119, 1.0, inf, cpv(503.0, 121.0), cpv(29.0, -34.0), cpvzero, 0.745419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(148, 120, 1.0, inf, cpv(484.0, 271.0), cpvzero, cpvzero, 1.339706, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(182, 121, 1.0, inf, cpv(271.0, 146.0), cpv(28.0, 42.0), cpvzero, -3.064821, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(182, 122, 1.0, inf, cpv(271.0, 123.0), cpv(27.0, 7.0), cpvzero, 2.452668, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(182, 123, 1.0, inf, cpv(283.0, 365.0), cpv(19.0, 11.0), cpvzero, 0.917950, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(182, 124, 1.0, inf, cpv(251.0, 366.0), cpv(18.0, 70.0), cpvzero, 0.209023, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(182, 125, 1.0, inf, cpv(213.0, 277.0), cpv(27.0, -22.0), cpvzero, 1.717875, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(182, 126, 1.0, inf, cpv(190.0, 259.0), cpv(26.0, -32.0), cpvzero, 1.136126, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(182, 127, 1.0, inf, cpv(212.0, 238.0), cpv(18.0, 59.0), cpvzero, 2.129396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(182, 128, 1.0, inf, cpv(193.0, 220.0), cpv(24.0, -10.0), cpvzero, 1.317122, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(14, 129, 1.0, 183.743659, cpv(399.0, 184.0), cpvzero, cpvzero, 0.0, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(148, 130, 1.0, inf, cpv(480.0, 241.0), cpvzero, cpvzero, 1.490966, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(148, 131, 1.0, inf, cpv(305.0, 229.0), cpvzero, cpvzero, 2.731465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(148, 132, 1.0, inf, cpv(311.0, 280.0), cpvzero, cpvzero, 0.960070, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(148, 133, 1.0, inf, cpv(295.0, 253.0), cpvzero, cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(148, 134, 1.0, inf, cpv(321.0, 256.0), cpvzero, cpvzero, 2.714965, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(148, 135, 1.0, inf, cpv(398.0, 228.0), cpvzero, cpvzero, 1.633215, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(148, 136, 1.0, inf, cpv(397.0, 259.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(148, 137, 1.0, inf, cpv(460.0, 261.0), cpvzero, cpvzero, 1.681454, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(148, 138, 1.0, inf, cpv(467.0, 231.0), cpvzero, cpvzero, 1.913820, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(503.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(506.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(525.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(548.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(538.0, 150.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(573.0, 114.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(572.0, 161.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(562.0, 186.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(597.0, 164.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(587.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(568.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(612.0, 209.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(591.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(613.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(569.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(585.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(603.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(559.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(571.0, 333.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(582.0, 352.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(541.0, 336.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(539.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(537.0, 380.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(513.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(490.0, 377.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(466.0, 369.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(449.0, 389.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(418.0, 381.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(255.0, 94.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(271.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(271.0, 136.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(207.0, 120.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(232.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(243.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(186.0, 168.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(206.0, 166.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(227.0, 188.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(169.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(193.0, 210.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(212.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(167.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(190.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(213.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(183.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(200.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(229.0, 300.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(209.0, 350.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(222.0, 328.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(252.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(248.0, 381.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(251.0, 356.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(283.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(292.0, 378.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(321.0, 368.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(332.0, 393.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(360.0, 379.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body129, body0, cpv(0.0, -5.0), cpv(399.0, 179.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body133, body0, cpvzero, cpv(295.0, 253.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body131, body0, cpv(0.0, -0.0), cpv(305.0, 229.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body134, body0, cpv(0.0, -0.0), cpv(321.0, 256.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body132, body0, cpvzero, cpv(311.0, 280.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body136, body0, cpvzero, cpv(397.0, 259.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body135, body0, cpv(0.0, -0.0), cpv(398.0, 228.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body137, body0, cpv(0.0, -0.0), cpv(460.0, 261.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body138, body0, cpv(0.0, -0.0), cpv(467.0, 231.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body130, body0, cpvzero, cpv(480.0, 241.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body120, body0, cpvzero, cpv(484.0, 271.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body99, body0, cpv(0.0, -0.0), cpv(500.0, 277.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body107, body0, cpv(0.0, -0.0), cpv(511.0, 246.0)));
}

}

static void destroy(void)
{
	if (space->bodies->num <= 3) {
		gameOver = true;
		settings.currentLevelIndex = 1;
	}
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


const kineticArtLevel Level77 = {
	77,
	"The End!",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

