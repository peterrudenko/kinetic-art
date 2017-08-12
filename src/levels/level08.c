
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level07;
extern kineticArtLevel Level09;
#define PREV_LEVEL &Level07
#define NEXT_LEVEL &Level09


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 113, total joints: 113 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body114 = createPolyUniWrapper(136, 114, 1.0, inf, cpv(24.0, 21.0), cpv(20.0, -48.0), cpvzero, -2.283154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(137, 115, 1.0, inf, cpv(39.0, 54.0), cpv(17.0, -21.0), cpvzero, -2.429235, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(135, 116, 1.0, inf, cpv(64.0, 87.0), cpv(15.0, -18.0), cpvzero, -2.782822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(136, 117, 1.0, inf, cpv(87.0, 113.0), cpv(29.0, 49.0), cpvzero, -2.903757, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(137, 118, 1.0, inf, cpv(115.0, 132.0), cpv(17.0, 60.0), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(135, 119, 1.0, inf, cpv(151.0, 141.0), cpv(28.0, -53.0), cpvzero, 2.480549, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(136, 120, 1.0, inf, cpv(178.0, 125.0), cpv(26.0, -25.0), cpvzero, 1.700499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(137, 121, 1.0, inf, cpv(193.0, 99.0), cpv(20.0, 19.0), cpvzero, 1.410883, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(135, 122, 1.0, inf, cpv(199.0, 64.0), cpv(21.0, -8.0), cpvzero, 1.352127, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(136, 123, 1.0, inf, cpv(220.0, 41.0), cpv(21.0, -41.0), cpvzero, 1.937970, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(137, 124, 1.0, inf, cpv(256.0, 34.0), cpv(18.0, 54.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(135, 125, 1.0, inf, cpv(288.0, 35.0), cpv(29.0, -27.0), cpvzero, 2.884269, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(136, 126, 1.0, inf, cpv(314.0, 52.0), cpv(23.0, 73.0), cpvzero, -2.896614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(137, 127, 1.0, inf, cpv(323.0, 80.0), cpv(18.0, 44.0), cpvzero, 0.600050, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(135, 128, 1.0, inf, cpv(338.0, 106.0), cpv(17.0, 25.0), cpvzero, -2.829551, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(136, 129, 1.0, inf, cpv(363.0, 128.0), cpv(17.0, -5.0), cpvzero, 2.853005, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(137, 130, 1.0, inf, cpv(396.0, 137.0), cpv(25.0, 20.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(135, 131, 1.0, inf, cpv(430.0, 121.0), cpv(25.0, -11.0), cpvzero, 1.925502, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(136, 132, 1.0, inf, cpv(444.0, 95.0), cpv(25.0, -20.0), cpvzero, -2.408778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(118, 133, 1.0, inf, cpv(413.0, 65.0), cpv(21.0, -11.0), cpvzero, 1.506369, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(137, 134, 1.0, inf, cpv(783.0, 31.0), cpv(18.0, 47.0), cpvzero, 0.769526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(135, 135, 1.0, inf, cpv(749.0, 19.0), cpv(19.0, 23.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(136, 136, 1.0, inf, cpv(717.0, 19.0), cpv(26.0, 36.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(137, 137, 1.0, inf, cpv(678.0, 21.0), cpv(23.0, -64.0), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(135, 138, 1.0, inf, cpv(642.0, 26.0), cpv(27.0, 35.0), cpvzero, 0.165149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(136, 139, 1.0, inf, cpv(609.0, 34.0), cpv(16.0, -69.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(137, 140, 1.0, inf, cpv(572.0, 49.0), cpv(23.0, -37.0), cpvzero, -0.191184, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(135, 141, 1.0, inf, cpv(548.0, 69.0), cpv(16.0, -70.0), cpvzero, -0.439843, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(136, 142, 1.0, inf, cpv(534.0, 103.0), cpv(27.0, 8.0), cpvzero, -0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(137, 143, 1.0, inf, cpv(533.0, 134.0), cpv(16.0, 9.0), cpvzero, -1.183273, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(135, 144, 1.0, inf, cpv(551.0, 166.0), cpv(26.0, -18.0), cpvzero, -1.394857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(136, 145, 1.0, inf, cpv(578.0, 185.0), cpv(20.0, -73.0), cpvzero, -2.024135, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(137, 146, 1.0, inf, cpv(609.0, 196.0), cpv(20.0, -27.0), cpvzero, -2.574863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(135, 147, 1.0, inf, cpv(641.0, 193.0), cpv(27.0, 17.0), cpvzero, -2.922924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(136, 148, 1.0, inf, cpv(666.0, 172.0), cpv(27.0, 35.0), cpvzero, 2.654693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(137, 149, 1.0, inf, cpv(670.0, 144.0), cpv(27.0, -21.0), cpvzero, 1.951303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(135, 150, 1.0, inf, cpv(650.0, 124.0), cpv(25.0, -31.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(136, 151, 1.0, inf, cpv(773.0, 189.0), cpv(15.0, 11.0), cpvzero, -1.860300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(137, 152, 1.0, inf, cpv(756.0, 221.0), cpv(27.0, -60.0), cpvzero, -1.679738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(135, 153, 1.0, inf, cpv(737.0, 254.0), cpv(19.0, 39.0), cpvzero, -1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(136, 154, 1.0, inf, cpv(712.0, 281.0), cpv(23.0, 17.0), cpvzero, -1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(137, 155, 1.0, inf, cpv(685.0, 300.0), cpv(26.0, -22.0), cpvzero, -1.152572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(135, 156, 1.0, inf, cpv(654.0, 314.0), cpv(24.0, -10.0), cpvzero, 2.321725, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(136, 157, 1.0, inf, cpv(616.0, 319.0), cpv(16.0, 27.0), cpvzero, 2.609869, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(137, 158, 1.0, inf, cpv(581.0, 316.0), cpv(22.0, 2.0), cpvzero, 2.718739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(137, 159, 1.0, inf, cpv(258.0, 384.0), cpv(29.0, -47.0), cpvzero, 1.789465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(136, 160, 1.0, inf, cpv(551.0, 302.0), cpv(25.0, -9.0), cpvzero, -2.880990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(137, 161, 1.0, inf, cpv(526.0, 276.0), cpv(25.0, -20.0), cpvzero, 0.348771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(135, 162, 1.0, inf, cpv(505.0, 251.0), cpv(24.0, 63.0), cpvzero, -2.863293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(136, 163, 1.0, inf, cpv(483.0, 225.0), cpv(20.0, 72.0), cpvzero, -2.850136, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(137, 164, 1.0, inf, cpv(462.0, 201.0), cpv(15.0, -21.0), cpvzero, 2.944197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(135, 165, 1.0, inf, cpv(431.0, 197.0), cpv(28.0, 39.0), cpvzero, -0.576375, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(136, 166, 1.0, inf, cpv(403.0, 203.0), cpv(22.0, -54.0), cpvzero, 2.016902, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(137, 167, 1.0, inf, cpv(375.0, 221.0), cpv(22.0, 46.0), cpvzero, 1.609239, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(135, 168, 1.0, inf, cpv(355.0, 243.0), cpv(22.0, -25.0), cpvzero, 1.124691, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(136, 169, 1.0, inf, cpv(353.0, 273.0), cpv(29.0, -4.0), cpvzero, 0.579074, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(137, 170, 1.0, inf, cpv(37.0, 165.0), cpv(18.0, 63.0), cpvzero, 2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(135, 171, 1.0, inf, cpv(73.0, 165.0), cpv(24.0, -53.0), cpvzero, 2.701750, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(136, 172, 1.0, inf, cpv(102.0, 180.0), cpv(26.0, 18.0), cpvzero, 2.880990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(137, 173, 1.0, inf, cpv(125.0, 202.0), cpv(23.0, -56.0), cpvzero, -2.782822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(135, 174, 1.0, inf, cpv(131.0, 236.0), cpv(20.0, -61.0), cpvzero, -2.140110, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(136, 175, 1.0, inf, cpv(124.0, 269.0), cpv(26.0, -7.0), cpvzero, -1.884417, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(135, 176, 1.0, inf, cpv(279.0, 361.0), cpv(26.0, -25.0), cpvzero, 1.346085, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(135, 177, 1.0, inf, cpv(119.0, 304.0), cpv(17.0, -34.0), cpvzero, -2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(136, 178, 1.0, inf, cpv(121.0, 339.0), cpv(15.0, -63.0), cpvzero, -2.753274, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(137, 179, 1.0, inf, cpv(136.0, 365.0), cpv(19.0, -63.0), cpvzero, 3.111299, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(135, 180, 1.0, inf, cpv(163.0, 383.0), cpv(15.0, -24.0), cpvzero, 2.846152, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(136, 181, 1.0, inf, cpv(194.0, 391.0), cpv(18.0, 40.0), cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(136, 182, 1.0, inf, cpv(291.0, 331.0), cpv(25.0, 72.0), cpvzero, 0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(137, 183, 1.0, inf, cpv(279.0, 302.0), cpv(17.0, -71.0), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(136, 184, 1.0, inf, cpv(228.0, 393.0), cpv(29.0, 11.0), cpvzero, 2.265535, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(135, 185, 1.0, inf, cpv(369.0, 302.0), cpv(24.0, 34.0), cpvzero, 0.104877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(135, 186, 1.0, inf, cpv(253.0, 284.0), cpv(26.0, -57.0), cpvzero, -0.179853, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(115, 187, 1.0, inf, cpv(411.0, 297.0), cpv(19.0, 9.0), cpvzero, 1.380157, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(116, 188, 1.0, inf, cpv(616.0, 109.0), cpv(15.0, 30.0), cpvzero, -1.231504, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(117, 189, 1.0, inf, cpv(212.0, 288.0), cpv(19.0, -66.0), cpvzero, 2.165556, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(119, 190, 1.0, inf, cpv(273.0, 167.0), cpv(20.0, -3.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body191 = createPolyUniWrapper(186, 191, 1.0, inf, cpv(315.0, 162.0), cpv(28.0, -44.0), cpvzero, 0.050590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body192 = createPolyUniWrapper(186, 192, 1.0, inf, cpv(247.0, 130.0), cpv(29.0, -15.0), cpvzero, -2.169215, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body193 = createPolyUniWrapper(186, 193, 1.0, inf, cpv(256.0, 204.0), cpv(29.0, -56.0), cpvzero, 1.999574, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body194 = createPolyUniWrapper(183, 194, 1.0, inf, cpv(273.0, 123.0), cpv(28.0, -23.0), cpvzero, 1.520838, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body195 = createPolyUniWrapper(183, 195, 1.0, inf, cpv(233.0, 181.0), cpv(28.0, 20.0), cpvzero, 2.772897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body196 = createPolyUniWrapper(183, 196, 1.0, inf, cpv(306.0, 188.0), cpv(16.0, 44.0), cpvzero, 0.597177, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body197 = createPolyUniWrapper(184, 197, 1.0, inf, cpv(230.0, 153.0), cpv(23.0, -49.0), cpvzero, -2.919511, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body198 = createPolyUniWrapper(184, 198, 1.0, inf, cpv(285.0, 206.0), cpv(22.0, -68.0), cpvzero, 1.200890, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body199 = createPolyUniWrapper(184, 199, 1.0, inf, cpv(305.0, 134.0), cpv(22.0, 29.0), cpvzero, 2.471954, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body200 = createPolyUniWrapper(185, 200, 1.0, inf, cpv(625.0, 142.0), cpv(28.0, 32.0), cpvzero, -1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body201 = createPolyUniWrapper(185, 201, 1.0, inf, cpv(442.0, 269.0), cpv(17.0, 70.0), cpvzero, 2.403778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body202 = createPolyUniWrapper(185, 202, 1.0, inf, cpv(443.0, 321.0), cpv(21.0, -71.0), cpvzero, -2.455863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body203 = createPolyUniWrapper(182, 203, 1.0, inf, cpv(454.0, 71.0), cpv(26.0, -26.0), cpvzero, -2.964884, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body204 = createPolyUniWrapper(182, 204, 1.0, inf, cpv(225.0, 254.0), cpv(20.0, 38.0), cpvzero, 1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body205 = createPolyUniWrapper(182, 205, 1.0, inf, cpv(244.0, 311.0), cpv(21.0, -61.0), cpvzero, -2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body206 = createPolyUniWrapper(185, 206, 1.0, inf, cpv(634.0, 79.0), cpv(16.0, -26.0), cpvzero, 2.516108, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body207 = createPolyUniWrapper(186, 207, 1.0, inf, cpv(387.0, 272.0), cpv(26.0, 43.0), cpvzero, 0.868539, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body208 = createPolyUniWrapper(186, 208, 1.0, inf, cpv(176.0, 277.0), cpv(27.0, 73.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body209 = createPolyUniWrapper(186, 209, 1.0, inf, cpv(388.0, 323.0), cpv(24.0, -40.0), cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body210 = createPolyUniWrapper(184, 210, 1.0, inf, cpv(193.0, 256.0), cpv(27.0, 59.0), cpvzero, 1.055247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body211 = createPolyUniWrapper(184, 211, 1.0, inf, cpv(456.0, 293.0), cpv(15.0, 50.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body212 = createPolyUniWrapper(184, 212, 1.0, inf, cpv(222.0, 332.0), cpv(22.0, 29.0), cpvzero, -1.750650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body213 = createPolyUniWrapper(186, 213, 1.0, inf, cpv(191.0, 326.0), cpv(25.0, 41.0), cpvzero, -1.061204, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body214 = createPolyUniWrapper(182, 214, 1.0, inf, cpv(409.0, 95.0), cpv(20.0, -19.0), cpvzero, 1.965587, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body215 = createPolyUniWrapper(183, 215, 1.0, inf, cpv(423.0, 29.0), cpv(25.0, -54.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body216 = createPolyUniWrapper(183, 216, 1.0, inf, cpv(377.0, 60.0), cpv(25.0, -28.0), cpvzero, 0.156602, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body217 = createPolyUniWrapper(185, 217, 1.0, inf, cpv(392.0, 31.0), cpv(24.0, -20.0), cpvzero, -2.224879, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body218 = createPolyUniWrapper(186, 218, 1.0, inf, cpv(449.0, 43.0), cpv(26.0, -23.0), cpvzero, -0.746457, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body219 = createPolyUniWrapper(186, 219, 1.0, inf, cpv(385.0, 83.0), cpv(24.0, -41.0), cpvzero, 2.624561, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body220 = createPolyUniWrapper(181, 220, 1.0, inf, cpv(415.0, 262.0), cpv(16.0, -60.0), cpvzero, 1.717875, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body221 = createPolyUniWrapper(181, 221, 1.0, inf, cpv(416.0, 330.0), cpv(26.0, 12.0), cpvzero, -1.768192, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body222 = createPolyUniWrapper(183, 222, 1.0, inf, cpv(169.0, 303.0), cpv(24.0, -51.0), cpvzero, -0.278300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body223 = createPolyUniWrapper(181, 223, 1.0, inf, cpv(594.0, 140.0), cpv(17.0, -39.0), cpvzero, -1.126377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body224 = createPolyUniWrapper(181, 224, 1.0, inf, cpv(602.0, 70.0), cpv(29.0, -27.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body225 = createPolyUniWrapper(184, 225, 1.0, inf, cpv(574.0, 118.0), cpv(24.0, 47.0), cpvzero, -0.348771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body226 = createPolyUniWrapper(183, 226, 1.0, inf, cpv(580.0, 87.0), cpv(21.0, 15.0), cpvzero, 0.745419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(24.0, 11.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(39.0, 44.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(64.0, 77.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(87.0, 103.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(115.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(151.0, 131.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(178.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(193.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(199.0, 54.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(220.0, 31.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(256.0, 24.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(288.0, 25.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(314.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(323.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(338.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(363.0, 118.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(396.0, 127.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(430.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(444.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(413.0, 55.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(783.0, 21.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(749.0, 9.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(717.0, 9.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(678.0, 11.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(642.0, 16.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(609.0, 24.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(572.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(548.0, 59.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(534.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(533.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(551.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(578.0, 175.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(609.0, 186.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(641.0, 183.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(666.0, 162.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(670.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(650.0, 114.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(773.0, 179.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(756.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(737.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(712.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(685.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(654.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(616.0, 309.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(581.0, 306.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(258.0, 374.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(551.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(526.0, 266.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(505.0, 241.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(483.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(462.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(431.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(403.0, 193.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(375.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(355.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(353.0, 263.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(37.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(73.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(102.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(125.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(131.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(124.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(279.0, 351.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(119.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(121.0, 329.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(136.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(163.0, 373.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(194.0, 381.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(291.0, 321.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(279.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(228.0, 383.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(369.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(253.0, 274.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(411.0, 287.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(616.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(212.0, 278.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(273.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body191, body0, cpvzero, cpv(315.0, 152.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body192, body0, cpvzero, cpv(247.0, 120.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body193, body0, cpvzero, cpv(256.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body194, body0, cpvzero, cpv(273.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body195, body0, cpvzero, cpv(233.0, 171.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body196, body0, cpvzero, cpv(306.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body197, body0, cpvzero, cpv(230.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body198, body0, cpvzero, cpv(285.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body199, body0, cpvzero, cpv(305.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body200, body0, cpvzero, cpv(625.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body201, body0, cpvzero, cpv(442.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body202, body0, cpvzero, cpv(443.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body203, body0, cpvzero, cpv(454.0, 61.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body204, body0, cpvzero, cpv(225.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body205, body0, cpvzero, cpv(244.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body206, body0, cpvzero, cpv(634.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body207, body0, cpvzero, cpv(387.0, 262.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body208, body0, cpvzero, cpv(176.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body209, body0, cpvzero, cpv(388.0, 313.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body210, body0, cpvzero, cpv(193.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body211, body0, cpvzero, cpv(456.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body212, body0, cpvzero, cpv(222.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body213, body0, cpvzero, cpv(191.0, 316.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body214, body0, cpvzero, cpv(409.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body215, body0, cpvzero, cpv(423.0, 19.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body216, body0, cpvzero, cpv(377.0, 50.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body217, body0, cpvzero, cpv(392.0, 21.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body218, body0, cpvzero, cpv(449.0, 33.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body219, body0, cpvzero, cpv(385.0, 73.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body220, body0, cpvzero, cpv(415.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body221, body0, cpvzero, cpv(416.0, 320.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body222, body0, cpvzero, cpv(169.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body223, body0, cpvzero, cpv(594.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body224, body0, cpvzero, cpv(602.0, 60.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body225, body0, cpvzero, cpv(574.0, 108.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body226, body0, cpvzero, cpv(580.0, 77.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg14)
}


const kineticArtLevel Level08 = {
	8,
	"Level 8",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

