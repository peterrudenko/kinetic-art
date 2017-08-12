
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level12;
extern kineticArtLevel Level14;
#define PREV_LEVEL &Level12
#define NEXT_LEVEL &Level14


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 119, total joints: 119 */
	//bg24
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body120 = createPolyUniWrapper(191, 120, 1.0, inf, cpv(75.0, 335.0), cpv(19.0, -29.0), cpvzero, 0.482513, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(192, 121, 1.0, inf, cpv(86.0, 309.0), cpv(29.0, 47.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(189, 122, 1.0, inf, cpv(95.0, 282.0), cpv(28.0, -10.0), cpvzero, 0.255182, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(191, 123, 1.0, inf, cpv(59.0, 358.0), cpv(21.0, -19.0), cpvzero, 0.602287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(190, 124, 1.0, inf, cpv(138.0, 82.0), cpv(22.0, 47.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(188, 125, 1.0, inf, cpv(37.0, 375.0), cpv(29.0, -14.0), cpvzero, 0.968509, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(187, 126, 1.0, inf, cpv(13.0, 389.0), cpv(27.0, 63.0), cpvzero, 1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(192, 127, 1.0, inf, cpv(99.0, 252.0), cpv(25.0, 69.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(191, 128, 1.0, inf, cpv(97.0, 224.0), cpv(17.0, -15.0), cpvzero, -0.235545, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(191, 129, 1.0, inf, cpv(89.0, 196.0), cpv(22.0, 61.0), cpvzero, -0.331096, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(192, 130, 1.0, inf, cpv(75.0, 167.0), cpv(27.0, -73.0), cpvzero, -0.477345, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(192, 131, 1.0, inf, cpv(52.0, 117.0), cpv(16.0, 27.0), cpvzero, -0.308053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(191, 132, 1.0, inf, cpv(51.0, 88.0), cpv(18.0, 23.0), cpvzero, 0.071307, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(189, 133, 1.0, inf, cpv(63.0, 142.0), cpv(18.0, -58.0), cpvzero, -0.496423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(191, 134, 1.0, inf, cpv(66.0, 66.0), cpv(28.0, -70.0), cpvzero, 0.938047, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(192, 135, 1.0, inf, cpv(91.0, 58.0), cpv(16.0, -22.0), cpvzero, 1.494024, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(189, 136, 1.0, inf, cpv(119.0, 62.0), cpv(29.0, 36.0), cpvzero, 2.089942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(192, 137, 1.0, inf, cpv(774.0, 23.0), cpv(21.0, 1.0), cpvzero, 1.022247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(191, 138, 1.0, inf, cpv(750.0, 40.0), cpv(19.0, 33.0), cpvzero, 0.844154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(191, 139, 1.0, inf, cpv(721.0, 86.0), cpv(20.0, 43.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(192, 140, 1.0, inf, cpv(723.0, 115.0), cpv(16.0, 60.0), cpvzero, -0.237836, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(192, 141, 1.0, inf, cpv(741.0, 167.0), cpv(20.0, -10.0), cpvzero, -0.436627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(191, 142, 1.0, inf, cpv(748.0, 196.0), cpv(18.0, 56.0), cpvzero, -0.296546, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(191, 143, 1.0, inf, cpv(753.0, 259.0), cpv(21.0, -70.0), cpvzero, -0.041643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(192, 144, 1.0, inf, cpv(749.0, 289.0), cpv(28.0, -14.0), cpvzero, 0.135528, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(191, 145, 1.0, inf, cpv(690.0, 351.0), cpv(21.0, 35.0), cpvzero, 1.518213, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(192, 146, 1.0, inf, cpv(716.0, 341.0), cpv(28.0, 32.0), cpvzero, 0.851966, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(192, 147, 1.0, inf, cpv(619.0, 309.0), cpv(23.0, -59.0), cpvzero, -0.110657, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(191, 148, 1.0, inf, cpv(633.0, 334.0), cpv(29.0, -75.0), cpvzero, -0.885067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(191, 149, 1.0, inf, cpv(209.0, 24.0), cpv(23.0, -75.0), cpvzero, -0.999459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(192, 150, 1.0, inf, cpv(228.0, 44.0), cpv(28.0, 18.0), cpvzero, -0.568525, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(192, 151, 1.0, inf, cpv(249.0, 96.0), cpv(27.0, 55.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(191, 152, 1.0, inf, cpv(243.0, 123.0), cpv(23.0, 65.0), cpvzero, 0.340979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(191, 153, 1.0, inf, cpv(224.0, 174.0), cpv(20.0, 73.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(192, 154, 1.0, inf, cpv(228.0, 201.0), cpv(18.0, -67.0), cpvzero, -0.255182, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(191, 155, 1.0, inf, cpv(305.0, 38.0), cpv(25.0, -48.0), cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(192, 156, 1.0, inf, cpv(329.0, 55.0), cpv(15.0, -14.0), cpvzero, -1.004067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(192, 157, 1.0, inf, cpv(385.0, 67.0), cpv(27.0, -53.0), cpvzero, -1.759018, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(191, 158, 1.0, inf, cpv(414.0, 58.0), cpv(17.0, -7.0), cpvzero, -2.053310, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(191, 159, 1.0, inf, cpv(469.0, 40.0), cpv(21.0, 25.0), cpvzero, -1.543026, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(192, 160, 1.0, inf, cpv(496.0, 42.0), cpv(22.0, -61.0), cpvzero, -1.339706, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(192, 161, 1.0, inf, cpv(545.0, 68.0), cpv(29.0, -51.0), cpvzero, -0.907593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(191, 162, 1.0, inf, cpv(563.0, 92.0), cpv(20.0, -32.0), cpvzero, -0.424832, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(191, 163, 1.0, inf, cpv(392.0, 99.0), cpv(22.0, -17.0), cpvzero, -1.786154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(192, 164, 1.0, inf, cpv(404.0, 126.0), cpv(24.0, -46.0), cpvzero, -2.194819, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(192, 165, 1.0, inf, cpv(458.0, 166.0), cpv(21.0, 64.0), cpvzero, 2.125104, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(191, 166, 1.0, inf, cpv(477.0, 191.0), cpv(15.0, 0.0), cpvzero, 2.835714, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(191, 167, 1.0, inf, cpv(475.0, 253.0), cpv(15.0, -72.0), cpvzero, -2.653259, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(188, 168, 1.0, inf, cpv(752.0, 225.0), cpv(18.0, -26.0), cpvzero, -0.188222, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(188, 169, 1.0, inf, cpv(732.0, 60.0), cpv(19.0, -6.0), cpvzero, 0.529590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(189, 170, 1.0, inf, cpv(732.0, 141.0), cpv(27.0, 34.0), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(189, 171, 1.0, inf, cpv(738.0, 320.0), cpv(23.0, -59.0), cpvzero, 0.524796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(188, 172, 1.0, inf, cpv(659.0, 349.0), cpv(20.0, -71.0), cpvzero, -1.464061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(189, 173, 1.0, inf, cpv(620.0, 281.0), cpv(24.0, 73.0), cpvzero, 0.273009, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(188, 174, 1.0, inf, cpv(180.0, 11.0), cpv(15.0, -54.0), cpvzero, -1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(189, 175, 1.0, inf, cpv(241.0, 69.0), cpv(24.0, 72.0), cpvzero, -0.351445, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(188, 176, 1.0, inf, cpv(231.0, 147.0), cpv(18.0, -57.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(189, 177, 1.0, inf, cpv(239.0, 226.0), cpv(28.0, 25.0), cpvzero, -0.763180, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(188, 178, 1.0, inf, cpv(285.0, 16.0), cpv(15.0, -28.0), cpvzero, -0.745419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(189, 179, 1.0, inf, cpv(357.0, 66.0), cpv(25.0, -35.0), cpvzero, -1.339706, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(188, 180, 1.0, inf, cpv(441.0, 46.0), cpv(28.0, 35.0), cpvzero, -2.081285, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(189, 181, 1.0, inf, cpv(430.0, 147.0), cpv(28.0, -69.0), cpvzero, 2.191046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(188, 182, 1.0, inf, cpv(483.0, 221.0), cpv(18.0, -28.0), cpvzero, -3.104573, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(189, 183, 1.0, inf, cpv(522.0, 52.0), cpv(23.0, 6.0), cpvzero, -0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(188, 184, 1.0, inf, cpv(574.0, 120.0), cpv(26.0, 71.0), cpvzero, -0.225277, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(189, 185, 1.0, inf, cpv(454.0, 274.0), cpv(26.0, 17.0), cpvzero, -2.111216, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(190, 186, 1.0, inf, cpv(430.0, 289.0), cpv(26.0, 14.0), cpvzero, -1.854590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(109, 187, 1.0, inf, cpv(283.0, 258.0), cpv(29.0, -53.0), cpvzero, -3.087591, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(110, 188, 1.0, inf, cpv(255.0, 248.0), cpv(16.0, 19.0), cpvzero, 2.601173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(109, 189, 1.0, inf, cpv(265.0, 275.0), cpv(18.0, -74.0), cpvzero, -2.223643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(107, 190, 1.0, inf, cpv(415.0, 273.0), cpv(26.0, -33.0), cpvzero, 2.060754, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body191 = createPolyUniWrapper(107, 191, 1.0, inf, cpv(126.0, 123.0), cpv(15.0, -30.0), cpvzero, -0.114877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body192 = createPolyUniWrapper(108, 192, 1.0, inf, cpv(68.0, 216.0), cpv(16.0, -55.0), cpvzero, 0.620249, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body193 = createPolyUniWrapper(108, 193, 1.0, inf, cpv(350.0, 33.0), cpv(29.0, 36.0), cpvzero, 2.394637, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body194 = createPolyUniWrapper(108, 194, 1.0, inf, cpv(122.0, 100.0), cpv(21.0, 14.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body195 = createPolyUniWrapper(108, 195, 1.0, inf, cpv(163.0, 81.0), cpv(25.0, -10.0), cpvzero, 2.231839, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body196 = createPolyUniWrapper(108, 196, 1.0, inf, cpv(468.0, 69.0), cpv(27.0, 13.0), cpvzero, -2.136280, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body197 = createPolyUniWrapper(108, 197, 1.0, inf, cpv(725.0, 276.0), cpv(21.0, -29.0), cpvzero, -0.597177, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body198 = createPolyUniWrapper(107, 198, 1.0, inf, cpv(178.0, 99.0), cpv(29.0, -19.0), cpvzero, 3.038511, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body199 = createPolyUniWrapper(106, 199, 1.0, inf, cpv(182.0, 125.0), cpv(16.0, -24.0), cpvzero, -2.607884, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body200 = createPolyUniWrapper(106, 200, 1.0, inf, cpv(143.0, 141.0), cpv(28.0, 26.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body201 = createPolyUniWrapper(109, 201, 1.0, inf, cpv(167.0, 142.0), cpv(24.0, -40.0), cpvzero, -1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body202 = createPolyUniWrapper(109, 202, 1.0, inf, cpv(613.0, 150.0), cpv(18.0, -45.0), cpvzero, -3.041924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body203 = createPolyUniWrapper(109, 203, 1.0, inf, cpv(553.0, 163.0), cpv(27.0, 45.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body204 = createPolyUniWrapper(106, 204, 1.0, inf, cpv(646.0, 278.0), cpv(19.0, -50.0), cpvzero, -1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body205 = createPolyUniWrapper(106, 205, 1.0, inf, cpv(601.0, 267.0), cpv(15.0, 57.0), cpvzero, -0.218669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body206 = createPolyUniWrapper(106, 206, 1.0, inf, cpv(566.0, 184.0), cpv(21.0, 17.0), cpvzero, -0.876058, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body207 = createPolyUniWrapper(106, 207, 1.0, inf, cpv(609.0, 173.0), cpv(20.0, -54.0), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body208 = createPolyUniWrapper(107, 208, 1.0, inf, cpv(429.0, 312.0), cpv(28.0, -37.0), cpvzero, -2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body209 = createPolyUniWrapper(107, 209, 1.0, inf, cpv(425.0, 175.0), cpv(25.0, -9.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body210 = createPolyUniWrapper(105, 210, 1.0, inf, cpv(602.0, 128.0), cpv(20.0, 56.0), cpvzero, 2.408778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body211 = createPolyUniWrapper(108, 211, 1.0, inf, cpv(79.0, 117.0), cpv(15.0, 25.0), cpvzero, 1.862253, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body212 = createPolyUniWrapper(108, 212, 1.0, inf, cpv(105.0, 335.0), cpv(23.0, -64.0), cpvzero, 2.944197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body213 = createPolyUniWrapper(105, 213, 1.0, inf, cpv(554.0, 138.0), cpv(21.0, -21.0), cpvzero, 0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body214 = createPolyUniWrapper(109, 214, 1.0, inf, cpv(601.0, 242.0), cpv(19.0, -53.0), cpvzero, 0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body215 = createPolyUniWrapper(109, 215, 1.0, inf, cpv(660.0, 260.0), cpv(20.0, 34.0), cpvzero, -2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body216 = createPolyUniWrapper(108, 216, 1.0, inf, cpv(641.0, 224.0), cpv(29.0, -59.0), cpvzero, 2.122451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body217 = createPolyUniWrapper(105, 217, 1.0, inf, cpv(618.0, 227.0), cpv(26.0, 16.0), cpvzero, 1.236059, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body218 = createPolyUniWrapper(105, 218, 1.0, inf, cpv(657.0, 239.0), cpv(29.0, -53.0), cpvzero, 2.843094, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body219 = createPolyUniWrapper(105, 219, 1.0, inf, cpv(371.0, 311.0), cpv(16.0, -27.0), cpvzero, -0.071307, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body220 = createPolyUniWrapper(105, 220, 1.0, inf, cpv(239.0, 271.0), cpv(19.0, -27.0), cpvzero, -1.051650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body221 = createPolyUniWrapper(109, 221, 1.0, inf, cpv(388.0, 329.0), cpv(20.0, 15.0), cpvzero, -0.927295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body222 = createPolyUniWrapper(105, 222, 1.0, inf, cpv(590.0, 188.0), cpv(21.0, 40.0), cpvzero, -1.653938, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body223 = createPolyUniWrapper(106, 223, 1.0, inf, cpv(393.0, 274.0), cpv(27.0, 68.0), cpvzero, 1.681454, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body224 = createPolyUniWrapper(106, 224, 1.0, inf, cpv(410.0, 326.0), cpv(23.0, 37.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body225 = createPolyUniWrapper(107, 225, 1.0, inf, cpv(566.0, 48.0), cpv(23.0, 36.0), cpvzero, 2.956245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body226 = createPolyUniWrapper(107, 226, 1.0, inf, cpv(201.0, 191.0), cpv(21.0, 26.0), cpvzero, -0.822418, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body227 = createPolyUniWrapper(107, 227, 1.0, inf, cpv(605.0, 342.0), cpv(16.0, -68.0), cpvzero, -0.029403, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body228 = createPolyUniWrapper(108, 228, 1.0, inf, cpv(762.0, 151.0), cpv(19.0, -26.0), cpvzero, -2.582993, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body229 = createPolyUniWrapper(111, 229, 1.0, inf, cpv(152.0, 110.0), cpv(24.0, 37.0), cpvzero, 2.624105, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body230 = createPolyUniWrapper(109, 230, 1.0, inf, cpv(375.0, 290.0), cpv(26.0, 24.0), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body231 = createPolyUniWrapper(105, 231, 1.0, inf, cpv(282.0, 236.0), cpv(25.0, 11.0), cpvzero, 2.384758, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body232 = createPolyUniWrapper(108, 232, 1.0, inf, cpv(263.0, 220.0), cpv(16.0, -12.0), cpvzero, 1.719686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body233 = createPolyUniWrapper(108, 233, 1.0, inf, cpv(229.0, 248.0), cpv(24.0, -7.0), cpvzero, -0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body234 = createPolyUniWrapper(107, 234, 1.0, inf, cpv(505.0, 239.0), cpv(15.0, 43.0), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body235 = createPolyUniWrapper(107, 235, 1.0, inf, cpv(268.0, 114.0), cpv(21.0, -51.0), cpvzero, -1.923787, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body236 = createPolyUniWrapper(112, 236, 1.0, inf, cpv(583.0, 154.0), cpv(19.0, -26.0), cpvzero, 2.863293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body237 = createPolyUniWrapper(113, 237, 1.0, inf, cpv(630.0, 257.0), cpv(28.0, -25.0), cpvzero, 0.370891, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body238 = createPolyUniWrapper(112, 238, 1.0, inf, cpv(404.0, 301.0), cpv(28.0, 50.0), cpvzero, -2.158799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(75.0, 325.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(86.0, 299.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(95.0, 272.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(59.0, 348.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(138.0, 72.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(37.0, 365.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(13.0, 379.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(99.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(97.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(89.0, 186.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(75.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(52.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(51.0, 78.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(63.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(66.0, 56.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(91.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(119.0, 52.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(774.0, 13.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(750.0, 30.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(721.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(723.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(741.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(748.0, 186.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(753.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(749.0, 279.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(690.0, 341.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(716.0, 331.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(619.0, 299.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(633.0, 324.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(209.0, 14.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(228.0, 34.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(249.0, 86.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(243.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(224.0, 164.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(228.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(305.0, 28.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(329.0, 45.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(385.0, 57.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(414.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(469.0, 30.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(496.0, 32.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(545.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(563.0, 82.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(392.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(404.0, 116.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(458.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(477.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(475.0, 243.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(752.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(732.0, 50.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(732.0, 131.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(738.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(659.0, 339.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(620.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(180.0, 1.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(241.0, 59.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(231.0, 137.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(239.0, 216.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(285.0, 6.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(357.0, 56.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(441.0, 36.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(430.0, 137.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(483.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(522.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(574.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(454.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(430.0, 279.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(283.0, 248.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(255.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(265.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(415.0, 263.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body191, body0, cpvzero, cpv(126.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body192, body0, cpvzero, cpv(68.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body193, body0, cpvzero, cpv(350.0, 23.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body194, body0, cpvzero, cpv(122.0, 90.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body195, body0, cpvzero, cpv(163.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body196, body0, cpvzero, cpv(468.0, 59.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body197, body0, cpvzero, cpv(725.0, 266.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body198, body0, cpvzero, cpv(178.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body199, body0, cpvzero, cpv(182.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body200, body0, cpvzero, cpv(143.0, 131.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body201, body0, cpvzero, cpv(167.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body202, body0, cpvzero, cpv(613.0, 140.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body203, body0, cpvzero, cpv(553.0, 153.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body204, body0, cpvzero, cpv(646.0, 268.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body205, body0, cpvzero, cpv(601.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body206, body0, cpvzero, cpv(566.0, 174.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body207, body0, cpvzero, cpv(609.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body208, body0, cpvzero, cpv(429.0, 302.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body209, body0, cpvzero, cpv(425.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body210, body0, cpvzero, cpv(602.0, 118.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body211, body0, cpvzero, cpv(79.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body212, body0, cpvzero, cpv(105.0, 325.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body213, body0, cpvzero, cpv(554.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body214, body0, cpvzero, cpv(601.0, 232.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body215, body0, cpvzero, cpv(660.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body216, body0, cpvzero, cpv(641.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body217, body0, cpvzero, cpv(618.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body218, body0, cpvzero, cpv(657.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body219, body0, cpvzero, cpv(371.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body220, body0, cpvzero, cpv(239.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body221, body0, cpvzero, cpv(388.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body222, body0, cpvzero, cpv(590.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body223, body0, cpvzero, cpv(393.0, 264.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body224, body0, cpvzero, cpv(410.0, 316.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body225, body0, cpvzero, cpv(566.0, 38.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body226, body0, cpvzero, cpv(201.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body227, body0, cpvzero, cpv(605.0, 332.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body228, body0, cpvzero, cpv(762.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body229, body0, cpvzero, cpv(152.0, 100.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body230, body0, cpvzero, cpv(375.0, 280.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body231, body0, cpvzero, cpv(282.0, 226.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body232, body0, cpvzero, cpv(263.0, 210.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body233, body0, cpvzero, cpv(229.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body234, body0, cpvzero, cpv(505.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body235, body0, cpvzero, cpv(268.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body236, body0, cpvzero, cpv(583.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body237, body0, cpvzero, cpv(630.0, 247.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body238, body0, cpvzero, cpv(404.0, 291.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg24)
}


const kineticArtLevel Level13 = {
	13,
	"Level 13",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

