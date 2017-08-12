
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level19;
extern kineticArtLevel Level21;
#define PREV_LEVEL &Level19
#define NEXT_LEVEL &Level21


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

{  /* Total bodies: 95, total joints: 95 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body96 = createPolyUniWrapper(186, 96, 1.0, inf, cpv(770.0, 74.0), cpv(15.0, -42.0), cpvzero, 0.614663, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(186, 97, 1.0, inf, cpv(677.0, 61.0), cpv(25.0, 71.0), cpvzero, -0.280838, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(186, 98, 1.0, inf, cpv(628.0, 79.0), cpv(23.0, -22.0), cpvzero, -0.283794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(186, 99, 1.0, inf, cpv(579.0, 92.0), cpv(19.0, -74.0), cpvzero, -0.149812, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(186, 100, 1.0, inf, cpv(418.0, 102.0), cpv(18.0, -66.0), cpvzero, 0.117109, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(186, 101, 1.0, inf, cpv(365.0, 91.0), cpv(16.0, 27.0), cpvzero, 0.398522, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(186, 102, 1.0, inf, cpv(315.0, 74.0), cpv(25.0, 71.0), cpvzero, 0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(186, 103, 1.0, inf, cpv(217.0, 61.0), cpv(27.0, -23.0), cpvzero, 0.129703, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(186, 104, 1.0, inf, cpv(173.0, 72.0), cpv(17.0, 5.0), cpvzero, -0.104877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(186, 105, 1.0, inf, cpv(97.0, 131.0), cpv(17.0, -66.0), cpvzero, -0.896055, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(186, 106, 1.0, inf, cpv(87.0, 176.0), cpv(22.0, -22.0), cpvzero, -1.349482, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(186, 107, 1.0, inf, cpv(94.0, 225.0), cpv(28.0, 9.0), cpvzero, -1.862253, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(186, 108, 1.0, inf, cpv(129.0, 265.0), cpv(21.0, -44.0), cpvzero, -2.293776, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(186, 109, 1.0, inf, cpv(223.0, 292.0), cpv(18.0, -14.0), cpvzero, -2.855541, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(186, 110, 1.0, inf, cpv(319.0, 276.0), cpv(25.0, -21.0), cpvzero, 3.098142, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(186, 111, 1.0, inf, cpv(362.0, 259.0), cpv(23.0, 30.0), cpvzero, 2.988943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(186, 112, 1.0, inf, cpv(407.0, 237.0), cpv(26.0, -58.0), cpvzero, 2.961739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(186, 113, 1.0, inf, cpv(455.0, 224.0), cpv(23.0, 21.0), cpvzero, -3.082837, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(186, 114, 1.0, inf, cpv(508.0, 222.0), cpv(26.0, 55.0), cpvzero, -2.966920, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(186, 115, 1.0, inf, cpv(561.0, 229.0), cpv(28.0, -8.0), cpvzero, -2.618314, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(186, 116, 1.0, inf, cpv(605.0, 252.0), cpv(29.0, -66.0), cpvzero, -2.275290, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(186, 117, 1.0, inf, cpv(623.0, 290.0), cpv(23.0, 25.0), cpvzero, -1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(186, 118, 1.0, inf, cpv(610.0, 340.0), cpv(20.0, -56.0), cpvzero, -1.165905, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(186, 119, 1.0, inf, cpv(578.0, 367.0), cpv(29.0, -42.0), cpvzero, -0.185348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(186, 120, 1.0, inf, cpv(725.0, 58.0), cpv(21.0, 57.0), cpvzero, 0.093477, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(186, 121, 1.0, inf, cpv(524.0, 101.0), cpv(16.0, 64.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(186, 122, 1.0, inf, cpv(472.0, 105.0), cpv(23.0, 65.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(186, 123, 1.0, inf, cpv(265.0, 61.0), cpv(27.0, 34.0), cpvzero, 0.336675, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(186, 124, 1.0, inf, cpv(131.0, 95.0), cpv(26.0, 32.0), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(186, 125, 1.0, inf, cpv(171.0, 283.0), cpv(21.0, 29.0), cpvzero, -2.657115, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(186, 126, 1.0, inf, cpv(271.0, 289.0), cpv(27.0, -73.0), cpvzero, -3.058451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(182, 127, 1.0, inf, cpv(691.0, 36.0), cpv(29.0, 54.0), cpvzero, 0.714091, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(182, 128, 1.0, inf, cpv(589.0, 71.0), cpv(27.0, -47.0), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(182, 129, 1.0, inf, cpv(487.0, 82.0), cpv(25.0, 32.0), cpvzero, 0.919720, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(182, 130, 1.0, inf, cpv(390.0, 74.0), cpv(19.0, -42.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(182, 131, 1.0, inf, cpv(286.0, 44.0), cpv(19.0, -17.0), cpvzero, 1.152572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(182, 132, 1.0, inf, cpv(175.0, 49.0), cpv(16.0, 37.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(182, 133, 1.0, inf, cpv(86.0, 107.0), cpv(27.0, -17.0), cpvzero, -0.132552, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(182, 134, 1.0, inf, cpv(109.0, 161.0), cpv(20.0, 2.0), cpvzero, -2.158799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(182, 135, 1.0, inf, cpv(70.0, 216.0), cpv(19.0, 11.0), cpvzero, -1.172274, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(182, 136, 1.0, inf, cpv(130.0, 237.0), cpv(25.0, 41.0), cpvzero, 3.054854, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(182, 137, 1.0, inf, cpv(151.0, 302.0), cpv(23.0, 20.0), cpvzero, -1.781890, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(182, 138, 1.0, inf, cpv(207.0, 266.0), cpv(18.0, 65.0), cpvzero, 2.459276, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(182, 139, 1.0, inf, cpv(263.0, 314.0), cpv(18.0, -3.0), cpvzero, -2.573068, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(182, 140, 1.0, inf, cpv(294.0, 262.0), cpv(29.0, -55.0), cpvzero, 2.279423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(182, 141, 1.0, inf, cpv(362.0, 286.0), cpv(25.0, -5.0), cpvzero, -2.802300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(182, 142, 1.0, inf, cpv(378.0, 224.0), cpv(22.0, -53.0), cpvzero, 1.975688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(182, 143, 1.0, inf, cpv(647.0, 102.0), cpv(19.0, 38.0), cpvzero, -1.124691, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(182, 144, 1.0, inf, cpv(735.0, 86.0), cpv(15.0, 3.0), cpvzero, -0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(182, 145, 1.0, inf, cpv(438.0, 125.0), cpv(19.0, 15.0), cpvzero, -1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(182, 146, 1.0, inf, cpv(548.0, 120.0), cpv(23.0, 74.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(182, 147, 1.0, inf, cpv(328.0, 106.0), cpv(20.0, 70.0), cpvzero, -0.628796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(182, 148, 1.0, inf, cpv(243.0, 85.0), cpv(17.0, -66.0), cpvzero, -1.019141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(182, 149, 1.0, inf, cpv(164.0, 107.0), cpv(19.0, -29.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(182, 150, 1.0, inf, cpv(444.0, 250.0), cpv(24.0, -60.0), cpvzero, -2.388441, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(182, 151, 1.0, inf, cpv(539.0, 247.0), cpv(19.0, 0.0), cpvzero, -1.789465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(182, 152, 1.0, inf, cpv(602.0, 285.0), cpv(27.0, -46.0), cpvzero, -1.063698, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(106, 153, 1.0, inf, cpv(746.0, 39.0), cpv(29.0, 45.0), cpvzero, 1.264917, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(106, 154, 1.0, inf, cpv(642.0, 56.0), cpv(28.0, -21.0), cpvzero, 0.422854, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(106, 155, 1.0, inf, cpv(109.0, 201.0), cpv(21.0, 13.0), cpvzero, -2.792822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(106, 156, 1.0, inf, cpv(440.0, 86.0), cpv(16.0, 4.0), cpvzero, 0.825377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(106, 157, 1.0, inf, cpv(250.0, 268.0), cpv(16.0, -8.0), cpvzero, 2.170847, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(106, 158, 1.0, inf, cpv(233.0, 41.0), cpv(28.0, -18.0), cpvzero, 0.904827, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(106, 159, 1.0, inf, cpv(424.0, 208.0), cpv(24.0, -11.0), cpvzero, 1.959115, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(106, 160, 1.0, inf, cpv(779.0, 100.0), cpv(17.0, 57.0), cpvzero, -0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(106, 161, 1.0, inf, cpv(69.0, 160.0), cpv(17.0, -16.0), cpvzero, -0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(106, 162, 1.0, inf, cpv(101.0, 265.0), cpv(16.0, 69.0), cpvzero, -1.272297, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(106, 163, 1.0, inf, cpv(205.0, 310.0), cpv(25.0, 12.0), cpvzero, -2.003204, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(106, 164, 1.0, inf, cpv(309.0, 303.0), cpv(15.0, -75.0), cpvzero, -2.454468, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(106, 165, 1.0, inf, cpv(396.0, 264.0), cpv(18.0, -70.0), cpvzero, -2.534605, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(106, 166, 1.0, inf, cpv(488.0, 240.0), cpv(19.0, -50.0), cpvzero, -2.446854, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(106, 167, 1.0, inf, cpv(579.0, 258.0), cpv(21.0, -8.0), cpvzero, -1.416478, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(106, 168, 1.0, inf, cpv(600.0, 318.0), cpv(16.0, 18.0), cpvzero, -0.390607, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(106, 169, 1.0, inf, cpv(201.0, 87.0), cpv(29.0, -64.0), cpvzero, -1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(106, 170, 1.0, inf, cpv(601.0, 107.0), cpv(19.0, 66.0), cpvzero, -1.088283, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(106, 171, 1.0, inf, cpv(382.0, 115.0), cpv(25.0, 28.0), cpvzero, -0.813962, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(106, 172, 1.0, inf, cpv(540.0, 78.0), cpv(23.0, 64.0), cpvzero, 0.909753, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(106, 173, 1.0, inf, cpv(341.0, 60.0), cpv(19.0, -58.0), cpvzero, 1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(106, 174, 1.0, inf, cpv(131.0, 70.0), cpv(15.0, -63.0), cpvzero, 0.308053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(106, 175, 1.0, inf, cpv(545.0, 203.0), cpv(15.0, 45.0), cpvzero, 2.485897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(106, 176, 1.0, inf, cpv(639.0, 264.0), cpv(21.0, -6.0), cpvzero, -2.934096, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(106, 177, 1.0, inf, cpv(606.0, 379.0), cpv(25.0, -4.0), cpvzero, -1.719686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(106, 178, 1.0, inf, cpv(496.0, 122.0), cpv(26.0, -19.0), cpvzero, -1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(106, 179, 1.0, inf, cpv(696.0, 81.0), cpv(21.0, -41.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(106, 180, 1.0, inf, cpv(287.0, 90.0), cpv(26.0, -34.0), cpvzero, -0.968509, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(106, 181, 1.0, inf, cpv(131.0, 128.0), cpv(19.0, -17.0), cpvzero, -1.943784, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(106, 182, 1.0, inf, cpv(165.0, 255.0), cpv(16.0, -50.0), cpvzero, 2.782822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(106, 183, 1.0, inf, cpv(335.0, 243.0), cpv(17.0, -5.0), cpvzero, 1.829567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(182, 184, 1.0, inf, cpv(488.0, 199.0), cpv(17.0, 12.0), cpvzero, 2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(182, 185, 1.0, inf, cpv(601.0, 221.0), cpv(26.0, -17.0), cpvzero, 2.833540, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(182, 186, 1.0, inf, cpv(633.0, 332.0), cpv(28.0, 43.0), cpvzero, -1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(182, 187, 1.0, inf, cpv(575.0, 347.0), cpv(27.0, 4.0), cpvzero, 0.189988, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(28, 188, 1.0, inf, cpv(537.0, 380.0), cpv(25.0, -67.0), cpvzero, -2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(185, 189, 1.0, inf, cpv(542.0, 354.0), cpv(24.0, 17.0), cpvzero, 0.679414, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(185, 190, 1.0, inf, cpv(560.0, 394.0), cpv(16.0, 4.0), cpvzero, -1.529154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(770.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(677.0, 51.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(628.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(579.0, 82.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(418.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(365.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(315.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(217.0, 51.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(173.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(97.0, 121.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(87.0, 166.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(94.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(129.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(223.0, 282.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(319.0, 266.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(362.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(407.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(455.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(508.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(561.0, 219.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(605.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(623.0, 280.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(610.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(578.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(725.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(524.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(472.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(265.0, 51.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(131.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(171.0, 273.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(271.0, 279.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(691.0, 26.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(589.0, 61.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(487.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(390.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(286.0, 34.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(175.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(86.0, 97.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(109.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(70.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(130.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(151.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(207.0, 256.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(263.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(294.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(362.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(378.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(647.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(735.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(438.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(548.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(328.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(243.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(164.0, 97.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(444.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(539.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(602.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(746.0, 29.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(642.0, 46.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(109.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(440.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(250.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(233.0, 31.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(424.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(779.0, 90.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(69.0, 150.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(101.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(205.0, 300.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(309.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(396.0, 254.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(488.0, 230.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(579.0, 248.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(600.0, 308.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(201.0, 77.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(601.0, 97.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(382.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(540.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(341.0, 50.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(131.0, 60.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(545.0, 193.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(639.0, 254.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(606.0, 369.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(496.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(696.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(287.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(131.0, 118.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(165.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(335.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(488.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(601.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(633.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(575.0, 337.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(537.0, 370.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(542.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(560.0, 384.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level20 = {
	20,
	"Level 20",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

