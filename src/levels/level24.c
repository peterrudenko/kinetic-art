
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level23;
extern kineticArtLevel Level25;
#define PREV_LEVEL &Level23
#define NEXT_LEVEL &Level25


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 77, total joints: 77 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body78 = createPolyUniWrapper(151, 78, 1.0, inf, cpv(517.0, 293.0), cpv(20.0, 10.0), cpvzero, 1.190290, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(151, 79, 1.0, inf, cpv(536.0, 279.0), cpv(28.0, -58.0), cpvzero, 1.035841, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(151, 80, 1.0, inf, cpv(514.0, 212.0), cpv(28.0, 67.0), cpvzero, 1.452306, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(151, 81, 1.0, inf, cpv(519.0, 174.0), cpv(25.0, 54.0), cpvzero, 1.940130, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(151, 82, 1.0, inf, cpv(543.0, 144.0), cpv(16.0, 49.0), cpvzero, 2.411693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(151, 83, 1.0, inf, cpv(578.0, 127.0), cpv(27.0, 73.0), cpvzero, 2.931410, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(151, 84, 1.0, inf, cpv(618.0, 127.0), cpv(28.0, -49.0), cpvzero, -2.969402, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(151, 85, 1.0, inf, cpv(658.0, 132.0), cpv(27.0, -29.0), cpvzero, 3.104573, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(149, 86, 1.0, inf, cpv(133.0, 274.0), cpv(17.0, -43.0), cpvzero, -1.997424, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(151, 87, 1.0, inf, cpv(522.0, 247.0), cpv(22.0, -66.0), cpvzero, 1.258754, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(151, 88, 1.0, inf, cpv(499.0, 262.0), cpv(26.0, -13.0), cpvzero, 0.977047, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(151, 89, 1.0, inf, cpv(474.0, 234.0), cpv(20.0, 56.0), cpvzero, 0.649870, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(151, 90, 1.0, inf, cpv(442.0, 217.0), cpv(21.0, -69.0), cpvzero, 0.308053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(151, 91, 1.0, inf, cpv(403.0, 211.0), cpv(15.0, 31.0), cpvzero, 0.041643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(151, 92, 1.0, inf, cpv(493.0, 303.0), cpv(27.0, -3.0), cpvzero, -0.718830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(151, 93, 1.0, inf, cpv(462.0, 322.0), cpv(28.0, -1.0), cpvzero, -0.390607, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(151, 94, 1.0, inf, cpv(424.0, 328.0), cpv(27.0, 2.0), cpvzero, 0.058756, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(151, 95, 1.0, inf, cpv(384.0, 320.0), cpv(23.0, -52.0), cpvzero, 0.363979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(151, 96, 1.0, inf, cpv(350.0, 304.0), cpv(29.0, -2.0), cpvzero, 0.600050, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(151, 97, 1.0, inf, cpv(324.0, 281.0), cpv(16.0, 13.0), cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(151, 98, 1.0, inf, cpv(305.0, 247.0), cpv(24.0, -49.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(151, 99, 1.0, inf, cpv(290.0, 213.0), cpv(17.0, 26.0), cpvzero, 1.197809, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(151, 100, 1.0, inf, cpv(274.0, 177.0), cpv(29.0, 2.0), cpvzero, 1.126377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(151, 101, 1.0, inf, cpv(253.0, 140.0), cpv(28.0, 9.0), cpvzero, 1.024007, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(151, 102, 1.0, inf, cpv(152.0, 77.0), cpv(22.0, -46.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(149, 103, 1.0, inf, cpv(713.0, 91.0), cpv(25.0, -63.0), cpvzero, 1.837048, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(149, 104, 1.0, inf, cpv(348.0, 175.0), cpv(23.0, 27.0), cpvzero, 1.335251, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(151, 105, 1.0, inf, cpv(378.0, 346.0), cpv(15.0, 31.0), cpvzero, -0.448723, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(151, 106, 1.0, inf, cpv(301.0, 358.0), cpv(27.0, 14.0), cpvzero, 0.135528, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(151, 107, 1.0, inf, cpv(243.0, 303.0), cpv(22.0, 26.0), cpvzero, 1.264917, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(151, 108, 1.0, inf, cpv(233.0, 260.0), cpv(24.0, 14.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(151, 109, 1.0, inf, cpv(218.0, 221.0), cpv(21.0, -66.0), cpvzero, 0.950547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(151, 110, 1.0, inf, cpv(186.0, 199.0), cpv(15.0, -5.0), cpvzero, 0.066568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(151, 111, 1.0, inf, cpv(150.0, 209.0), cpv(21.0, -43.0), cpvzero, -0.610726, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(150, 112, 1.0, inf, cpv(693.0, 122.0), cpv(29.0, 25.0), cpvzero, 2.417343, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(150, 113, 1.0, inf, cpv(129.0, 238.0), cpv(21.0, 25.0), cpvzero, -1.314645, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(150, 114, 1.0, inf, cpv(369.0, 203.0), cpv(15.0, 68.0), cpvzero, 0.510488, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(150, 115, 1.0, inf, cpv(115.0, 71.0), cpv(19.0, -3.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(149, 116, 1.0, inf, cpv(81.0, 82.0), cpv(23.0, -23.0), cpvzero, -0.499347, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(151, 117, 1.0, inf, cpv(189.0, 91.0), cpv(20.0, -17.0), cpvzero, 0.480887, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(151, 118, 1.0, inf, cpv(225.0, 112.0), cpv(19.0, -63.0), cpvzero, 0.607802, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(151, 119, 1.0, inf, cpv(341.0, 358.0), cpv(18.0, -9.0), cpvzero, -0.152649, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(151, 120, 1.0, inf, cpv(266.0, 340.0), cpv(21.0, -49.0), cpvzero, 0.674741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(148, 121, 1.0, inf, cpv(354.0, 143.0), cpv(19.0, 58.0), cpvzero, 2.134113, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(148, 122, 1.0, inf, cpv(707.0, 60.0), cpv(20.0, 64.0), cpvzero, 0.822418, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(148, 123, 1.0, inf, cpv(58.0, 110.0), cpv(29.0, -69.0), cpvzero, -1.284745, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(183, 124, 1.0, inf, cpv(731.0, 117.0), cpv(27.0, 3.0), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(183, 125, 1.0, inf, cpv(110.0, 227.0), cpv(27.0, 13.0), cpvzero, -0.699893, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(183, 126, 1.0, inf, cpv(97.0, 98.0), cpv(23.0, -12.0), cpvzero, -1.304544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(183, 127, 1.0, inf, cpv(369.0, 170.0), cpv(26.0, -52.0), cpvzero, 2.003204, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(185, 128, 1.0, inf, cpv(612.0, 105.0), cpv(29.0, 43.0), cpvzero, 2.411693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(185, 129, 1.0, inf, cpv(552.0, 165.0), cpv(21.0, 18.0), cpvzero, -3.089010, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(185, 130, 1.0, inf, cpv(493.0, 180.0), cpv(27.0, 23.0), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(185, 131, 1.0, inf, cpv(651.0, 153.0), cpv(21.0, -21.0), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(185, 132, 1.0, inf, cpv(462.0, 199.0), cpv(18.0, -27.0), cpvzero, 1.400061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(185, 133, 1.0, inf, cpv(466.0, 254.0), cpv(25.0, 31.0), cpvzero, -0.099669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(185, 134, 1.0, inf, cpv(434.0, 308.0), cpv(29.0, 10.0), cpvzero, 0.888480, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(185, 135, 1.0, inf, cpv(372.0, 292.0), cpv(26.0, 42.0), cpvzero, 1.605265, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(185, 136, 1.0, inf, cpv(326.0, 245.0), cpv(16.0, -69.0), cpvzero, 1.800028, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(185, 137, 1.0, inf, cpv(293.0, 175.0), cpv(23.0, -25.0), cpvzero, 1.663553, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(185, 138, 1.0, inf, cpv(248.0, 103.0), cpv(18.0, 74.0), cpvzero, 1.484058, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(185, 139, 1.0, inf, cpv(171.0, 62.0), cpv(21.0, -42.0), cpvzero, 1.037088, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(185, 140, 1.0, inf, cpv(188.0, 114.0), cpv(21.0, -24.0), cpvzero, -0.257324, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(185, 141, 1.0, inf, cpv(243.0, 158.0), cpv(24.0, 1.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(185, 142, 1.0, inf, cpv(279.0, 233.0), cpv(18.0, 26.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(185, 143, 1.0, inf, cpv(313.0, 300.0), cpv(15.0, 52.0), cpvzero, 0.135528, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(185, 144, 1.0, inf, cpv(411.0, 230.0), cpv(27.0, -56.0), cpvzero, -0.554307, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(185, 145, 1.0, inf, cpv(307.0, 380.0), cpv(20.0, 39.0), cpvzero, -0.566729, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(185, 146, 1.0, inf, cpv(229.0, 323.0), cpv(21.0, -52.0), cpvzero, 0.197396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(185, 147, 1.0, inf, cpv(205.0, 236.0), cpv(22.0, -65.0), cpvzero, 0.358771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(185, 148, 1.0, inf, cpv(284.0, 328.0), cpv(19.0, -66.0), cpvzero, 1.423718, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(185, 149, 1.0, inf, cpv(255.0, 266.0), cpv(15.0, -71.0), cpvzero, 2.102520, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(14, 150, 1.0, inf, cpv(383.0, 121.0), cpv(18.0, -74.0), cpvzero, 1.035841, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(16, 151, 1.0, inf, cpv(54.0, 147.0), cpv(29.0, -60.0), cpvzero, 3.036716, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(16, 152, 1.0, inf, cpv(158.0, 304.0), cpv(24.0, -25.0), cpvzero, 2.199593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(14, 153, 1.0, inf, cpv(673.0, 50.0), cpv(29.0, -60.0), cpvzero, -1.719686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(26, 154, 1.0, inf, cpv(551.0, 327.0), cpv(26.0, -13.0), cpvzero, -0.685730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(517.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(536.0, 269.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(514.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(519.0, 164.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(543.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(578.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(618.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(658.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(133.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(522.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(499.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(474.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(442.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(403.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(493.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(462.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(424.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(384.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(350.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(324.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(305.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(290.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(274.0, 167.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(253.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(152.0, 67.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(713.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(348.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(378.0, 336.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(301.0, 348.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(243.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(233.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(218.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(186.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(150.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(693.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(129.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(369.0, 193.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(115.0, 61.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(81.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(189.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(225.0, 102.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(341.0, 348.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(266.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(354.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(707.0, 50.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(58.0, 100.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(731.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(110.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(97.0, 88.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(369.0, 160.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(612.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(552.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(493.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(651.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(462.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(466.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(434.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(372.0, 282.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(326.0, 235.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(293.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(248.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(171.0, 52.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(188.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(243.0, 148.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(279.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(313.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(411.0, 220.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(307.0, 370.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(229.0, 313.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(205.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(284.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(255.0, 256.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(383.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(54.0, 137.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(158.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(673.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(551.0, 317.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg13)
}


const kineticArtLevel Level24 = {
	24,
	"La flor de mal",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

