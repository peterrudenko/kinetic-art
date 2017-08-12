
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level15;
extern kineticArtLevel Level17;
#define PREV_LEVEL &Level15
#define NEXT_LEVEL &Level17


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 82, total joints: 82 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body83 = createPolyUniWrapper(8, 83, 1.0, inf, cpv(108.0, 213.0), cpv(21.0, 40.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(6, 84, 1.0, inf, cpv(494.0, 157.0), cpv(23.0, 47.0), cpvzero, -0.384864, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(4, 85, 1.0, inf, cpv(683.0, 222.0), cpv(20.0, -13.0), cpvzero, -1.279340, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(6, 86, 1.0, inf, cpv(292.0, 246.0), cpv(27.0, -52.0), cpvzero, -1.021422, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(185, 87, 1.0, inf, cpv(425.0, 345.0), cpv(25.0, 45.0), cpvzero, 0.045423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(185, 88, 1.0, inf, cpv(395.0, 329.0), cpv(27.0, -26.0), cpvzero, 0.402912, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(185, 89, 1.0, inf, cpv(378.0, 302.0), cpv(23.0, -31.0), cpvzero, 1.128422, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(185, 90, 1.0, inf, cpv(392.0, 167.0), cpv(18.0, 41.0), cpvzero, 1.312025, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(185, 91, 1.0, inf, cpv(392.0, 201.0), cpv(22.0, -15.0), cpvzero, 1.438245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(181, 92, 1.0, inf, cpv(366.0, 230.0), cpv(25.0, 61.0), cpvzero, 1.076855, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(185, 93, 1.0, inf, cpv(386.0, 233.0), cpv(25.0, 53.0), cpvzero, 1.594048, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(185, 94, 1.0, inf, cpv(370.0, 371.0), cpv(28.0, -5.0), cpvzero, -0.390607, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(185, 95, 1.0, inf, cpv(333.0, 384.0), cpv(21.0, 45.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(185, 96, 1.0, inf, cpv(295.0, 387.0), cpv(26.0, 54.0), cpvzero, 0.218669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(185, 97, 1.0, inf, cpv(219.0, 367.0), cpv(28.0, -68.0), cpvzero, 0.741947, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(185, 98, 1.0, inf, cpv(193.0, 340.0), cpv(29.0, 25.0), cpvzero, 1.310194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(185, 99, 1.0, inf, cpv(188.0, 303.0), cpv(25.0, 28.0), cpvzero, 1.878849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(185, 100, 1.0, inf, cpv(191.0, 265.0), cpv(18.0, -61.0), cpvzero, 2.051684, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(185, 101, 1.0, inf, cpv(207.0, 229.0), cpv(16.0, -48.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(185, 102, 1.0, inf, cpv(222.0, 189.0), cpv(26.0, -26.0), cpvzero, 1.989021, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(185, 103, 1.0, inf, cpv(362.0, 354.0), cpv(16.0, -47.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(185, 104, 1.0, inf, cpv(323.0, 347.0), cpv(29.0, 18.0), cpvzero, 0.530216, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(185, 105, 1.0, inf, cpv(294.0, 320.0), cpv(17.0, 68.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(185, 106, 1.0, inf, cpv(406.0, 359.0), cpv(26.0, -31.0), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(185, 107, 1.0, inf, cpv(453.0, 327.0), cpv(29.0, -14.0), cpvzero, 2.601173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(185, 108, 1.0, inf, cpv(487.0, 322.0), cpv(21.0, -54.0), cpvzero, 2.926235, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(185, 109, 1.0, inf, cpv(606.0, 305.0), cpv(17.0, 68.0), cpvzero, 1.390943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(185, 110, 1.0, inf, cpv(598.0, 269.0), cpv(26.0, 69.0), cpvzero, 1.024007, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(185, 111, 1.0, inf, cpv(586.0, 234.0), cpv(26.0, -28.0), cpvzero, 0.990040, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(185, 112, 1.0, inf, cpv(539.0, 380.0), cpv(22.0, 60.0), cpvzero, -2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(185, 113, 1.0, inf, cpv(609.0, 385.0), cpv(16.0, -35.0), cpvzero, 3.046641, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(185, 114, 1.0, inf, cpv(638.0, 370.0), cpv(22.0, 45.0), cpvzero, 2.846152, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(185, 115, 1.0, inf, cpv(677.0, 320.0), cpv(22.0, -55.0), cpvzero, 2.239086, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(185, 116, 1.0, inf, cpv(680.0, 287.0), cpv(19.0, -72.0), cpvzero, 1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(185, 117, 1.0, inf, cpv(671.0, 254.0), cpv(26.0, 27.0), cpvzero, 1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(185, 118, 1.0, inf, cpv(478.0, 348.0), cpv(24.0, 61.0), cpvzero, -2.536048, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(185, 119, 1.0, inf, cpv(509.0, 365.0), cpv(28.0, -2.0), cpvzero, -2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(185, 120, 1.0, inf, cpv(378.0, 264.0), cpv(25.0, 52.0), cpvzero, 1.510264, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(185, 121, 1.0, inf, cpv(286.0, 285.0), cpv(23.0, 66.0), cpvzero, 1.901892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(185, 122, 1.0, inf, cpv(255.0, 382.0), cpv(19.0, 53.0), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(185, 123, 1.0, inf, cpv(212.0, 157.0), cpv(24.0, -51.0), cpvzero, 1.359703, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(185, 124, 1.0, inf, cpv(519.0, 332.0), cpv(29.0, -74.0), cpvzero, -2.875341, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(185, 125, 1.0, inf, cpv(553.0, 340.0), cpv(28.0, 7.0), cpvzero, 2.994514, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(185, 126, 1.0, inf, cpv(588.0, 335.0), cpv(15.0, 41.0), cpvzero, 2.480549, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(185, 127, 1.0, inf, cpv(582.0, 198.0), cpv(26.0, 46.0), cpvzero, 1.380808, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(185, 128, 1.0, inf, cpv(591.0, 165.0), cpv(21.0, -73.0), cpvzero, 1.801887, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(185, 129, 1.0, inf, cpv(481.0, 296.0), cpv(22.0, -50.0), cpvzero, 1.986861, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(185, 130, 1.0, inf, cpv(495.0, 263.0), cpv(17.0, 64.0), cpvzero, 1.504228, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(185, 131, 1.0, inf, cpv(498.0, 227.0), cpv(22.0, 21.0), cpvzero, 1.337053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(185, 132, 1.0, inf, cpv(493.0, 191.0), cpv(25.0, 33.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(185, 133, 1.0, inf, cpv(573.0, 388.0), cpv(25.0, 66.0), cpvzero, -2.819842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(185, 134, 1.0, inf, cpv(664.0, 349.0), cpv(25.0, -47.0), cpvzero, 2.695487, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(185, 135, 1.0, inf, cpv(165.0, 338.0), cpv(21.0, -59.0), cpvzero, 0.348771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(185, 136, 1.0, inf, cpv(138.0, 314.0), cpv(22.0, -70.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(185, 137, 1.0, inf, cpv(119.0, 285.0), cpv(19.0, 7.0), cpvzero, 1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(185, 138, 1.0, inf, cpv(124.0, 250.0), cpv(18.0, 71.0), cpvzero, 1.647568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(6, 139, 1.0, inf, cpv(394.0, 125.0), cpv(24.0, -49.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(8, 140, 1.0, inf, cpv(189.0, 131.0), cpv(24.0, 29.0), cpvzero, 0.432408, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(4, 141, 1.0, inf, cpv(615.0, 136.0), cpv(19.0, -21.0), cpvzero, -0.339293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(183, 142, 1.0, inf, cpv(678.0, 373.0), cpv(23.0, 59.0), cpvzero, -3.101614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(183, 143, 1.0, inf, cpv(698.0, 321.0), cpv(26.0, 6.0), cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(183, 144, 1.0, inf, cpv(705.0, 269.0), cpv(17.0, 15.0), cpvzero, 2.158799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(181, 145, 1.0, inf, cpv(106.0, 313.0), cpv(18.0, -13.0), cpvzero, 0.286051, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(181, 146, 1.0, inf, cpv(91.0, 259.0), cpv(28.0, -74.0), cpvzero, 0.832981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(181, 147, 1.0, inf, cpv(152.0, 357.0), cpv(18.0, 47.0), cpvzero, -0.302885, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(181, 148, 1.0, inf, cpv(168.0, 265.0), cpv(20.0, -9.0), cpvzero, 1.225241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(181, 149, 1.0, inf, cpv(186.0, 210.0), cpv(22.0, 36.0), cpvzero, 1.480136, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(183, 150, 1.0, inf, cpv(621.0, 274.0), cpv(22.0, -34.0), cpvzero, 2.056418, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(183, 151, 1.0, inf, cpv(613.0, 215.0), cpv(21.0, -53.0), cpvzero, 2.083186, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(181, 152, 1.0, inf, cpv(298.0, 356.0), cpv(26.0, -10.0), cpvzero, -0.058756, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(181, 153, 1.0, inf, cpv(270.0, 324.0), cpv(19.0, 45.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(181, 154, 1.0, inf, cpv(265.0, 278.0), cpv(28.0, 15.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(183, 155, 1.0, inf, cpv(508.0, 303.0), cpv(20.0, -70.0), cpvzero, 2.918116, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(183, 156, 1.0, inf, cpv(520.0, 251.0), cpv(17.0, 73.0), cpvzero, 2.439336, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(183, 157, 1.0, inf, cpv(517.0, 200.0), cpv(16.0, -29.0), cpvzero, 2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(181, 158, 1.0, inf, cpv(368.0, 156.0), cpv(29.0, -61.0), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(183, 159, 1.0, inf, cpv(400.0, 286.0), cpv(26.0, -33.0), cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(181, 160, 1.0, inf, cpv(370.0, 195.0), cpv(22.0, -57.0), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(181, 161, 1.0, inf, cpv(359.0, 267.0), cpv(25.0, 3.0), cpvzero, 1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(183, 162, 1.0, inf, cpv(415.0, 169.0), cpv(27.0, 61.0), cpvzero, 2.279423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(183, 163, 1.0, inf, cpv(403.0, 243.0), cpv(17.0, -57.0), cpvzero, 2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(183, 164, 1.0, inf, cpv(415.0, 201.0), cpv(20.0, -70.0), cpvzero, 2.384758, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(108.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(494.0, 147.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(683.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(292.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(425.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(395.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(378.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(392.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(392.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(366.0, 220.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(386.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(370.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(333.0, 374.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(295.0, 377.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(219.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(193.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(188.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(191.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(207.0, 219.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(222.0, 179.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(362.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(323.0, 337.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(294.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(406.0, 349.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(453.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(487.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(606.0, 295.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(598.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(586.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(539.0, 370.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(609.0, 375.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(638.0, 360.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(677.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(680.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(671.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(478.0, 338.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(509.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(378.0, 254.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(286.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(255.0, 372.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(212.0, 147.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(519.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(553.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(588.0, 325.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(582.0, 188.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(591.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(481.0, 286.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(495.0, 253.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(498.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(493.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(573.0, 378.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(664.0, 339.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(165.0, 328.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(138.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(119.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(124.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(394.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(189.0, 121.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(615.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(678.0, 363.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(698.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(705.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(106.0, 303.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(91.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(152.0, 347.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(168.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(186.0, 200.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(621.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(613.0, 205.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(298.0, 346.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(270.0, 314.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(265.0, 268.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(508.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(520.0, 241.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(517.0, 190.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(368.0, 146.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(400.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(370.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(359.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(415.0, 159.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(403.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(415.0, 191.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level16 = {
	16,
	"La flor de mal",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

