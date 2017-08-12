
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level05;
extern kineticArtLevel Level07;
#define PREV_LEVEL &Level05
#define NEXT_LEVEL &Level07


static void init(void)
{
	makeSpaces2(cpv(0, 50));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 127, total joints: 127 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body128 = createPolyUniWrapper(183, 128, 1.0, inf, cpv(515.0, 357.0), cpv(26.0, -48.0), cpvzero, -0.020830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(183, 129, 1.0, inf, cpv(686.0, 330.0), cpv(20.0, -70.0), cpvzero, 0.362544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(183, 130, 1.0, inf, cpv(597.0, 332.0), cpv(16.0, -53.0), cpvzero, -0.104877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(183, 131, 1.0, inf, cpv(472.0, 358.0), cpv(23.0, 6.0), cpvzero, 0.278300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(183, 132, 1.0, inf, cpv(533.0, 213.0), cpv(15.0, 12.0), cpvzero, -1.706324, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(183, 133, 1.0, inf, cpv(369.0, 263.0), cpv(23.0, 67.0), cpvzero, 1.651700, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(183, 134, 1.0, inf, cpv(512.0, 179.0), cpv(17.0, -36.0), cpvzero, -2.403778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(183, 135, 1.0, inf, cpv(335.0, 363.0), cpv(16.0, -10.0), cpvzero, 2.946907, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(183, 136, 1.0, inf, cpv(436.0, 167.0), cpv(19.0, -30.0), cpvzero, 2.798569, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(183, 137, 1.0, inf, cpv(375.0, 224.0), cpv(25.0, 71.0), cpvzero, 2.118359, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(183, 138, 1.0, inf, cpv(480.0, 155.0), cpv(25.0, -44.0), cpvzero, -3.064821, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(183, 139, 1.0, inf, cpv(166.0, 344.0), cpv(16.0, 3.0), cpvzero, 2.955106, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(183, 140, 1.0, inf, cpv(206.0, 355.0), cpv(27.0, 56.0), cpvzero, -2.999696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(183, 141, 1.0, inf, cpv(248.0, 366.0), cpv(15.0, 28.0), cpvzero, -3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(183, 142, 1.0, inf, cpv(421.0, 314.0), cpv(28.0, 15.0), cpvzero, 2.327631, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(183, 143, 1.0, inf, cpv(447.0, 278.0), cpv(29.0, -22.0), cpvzero, 1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(183, 144, 1.0, inf, cpv(398.0, 190.0), cpv(22.0, 28.0), cpvzero, 2.642246, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(183, 145, 1.0, inf, cpv(449.0, 237.0), cpv(25.0, 31.0), cpvzero, 1.299849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(183, 146, 1.0, inf, cpv(361.0, 144.0), cpv(21.0, -75.0), cpvzero, 0.298499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(183, 147, 1.0, inf, cpv(320.0, 136.0), cpv(18.0, -43.0), cpvzero, -0.102207, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(185, 148, 1.0, inf, cpv(169.0, 175.0), cpv(19.0, 14.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(184, 149, 1.0, inf, cpv(534.0, 250.0), cpv(17.0, -57.0), cpvzero, -1.177738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(183, 150, 1.0, inf, cpv(643.0, 325.0), cpv(27.0, 73.0), cpvzero, 0.076772, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(185, 151, 1.0, inf, cpv(729.0, 345.0), cpv(20.0, 16.0), cpvzero, 0.476467, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(185, 152, 1.0, inf, cpv(766.0, 365.0), cpv(22.0, -42.0), cpvzero, 0.750929, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(184, 153, 1.0, inf, cpv(555.0, 345.0), cpv(21.0, 48.0), cpvzero, -0.114877, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(184, 154, 1.0, inf, cpv(523.0, 162.0), cpv(21.0, -70.0), cpvzero, -2.688814, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(184, 155, 1.0, inf, cpv(563.0, 175.0), cpv(20.0, 17.0), cpvzero, -2.703256, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(185, 156, 1.0, inf, cpv(667.0, 140.0), cpv(22.0, -69.0), cpvzero, 1.620755, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(183, 157, 1.0, inf, cpv(605.0, 182.0), cpv(22.0, -35.0), cpvzero, 2.953371, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(183, 158, 1.0, inf, cpv(644.0, 171.0), cpv(24.0, -1.0), cpvzero, 2.403778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(183, 159, 1.0, inf, cpv(290.0, 367.0), cpv(15.0, 34.0), cpvzero, 2.939271, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(183, 160, 1.0, inf, cpv(279.0, 138.0), cpv(19.0, -29.0), cpvzero, -0.270325, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(183, 161, 1.0, inf, cpv(278.0, 324.0), cpv(22.0, 73.0), cpvzero, 2.265535, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(183, 162, 1.0, inf, cpv(241.0, 345.0), cpv(24.0, 46.0), cpvzero, 2.743070, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(183, 163, 1.0, inf, cpv(301.0, 291.0), cpv(15.0, 20.0), cpvzero, 1.721812, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(183, 164, 1.0, inf, cpv(298.0, 252.0), cpv(22.0, 1.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(185, 165, 1.0, inf, cpv(240.0, 151.0), cpv(22.0, -42.0), cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(185, 166, 1.0, inf, cpv(141.0, 153.0), cpv(20.0, 46.0), cpvzero, 0.950547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(185, 167, 1.0, inf, cpv(206.0, 167.0), cpv(20.0, -31.0), cpvzero, -0.756835, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(183, 168, 1.0, inf, cpv(376.0, 346.0), cpv(24.0, -1.0), cpvzero, 2.866683, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(183, 169, 1.0, inf, cpv(126.0, 345.0), cpv(24.0, -67.0), cpvzero, 2.690931, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(185, 170, 1.0, inf, cpv(664.0, 103.0), cpv(17.0, -29.0), cpvzero, 1.030377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(185, 171, 1.0, inf, cpv(54.0, 381.0), cpv(20.0, 55.0), cpvzero, 2.273053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(185, 172, 1.0, inf, cpv(88.0, 359.0), cpv(20.0, 70.0), cpvzero, 2.506566, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(184, 173, 1.0, inf, cpv(434.0, 199.0), cpv(16.0, -72.0), cpvzero, 0.813962, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(184, 174, 1.0, inf, cpv(400.0, 165.0), cpv(16.0, -36.0), cpvzero, 0.551655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(184, 175, 1.0, inf, cpv(427.0, 344.0), cpv(28.0, -33.0), cpvzero, 0.479519, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(184, 176, 1.0, inf, cpv(383.0, 307.0), cpv(27.0, 20.0), cpvzero, 0.866302, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(185, 177, 1.0, inf, cpv(26.0, 408.0), cpv(21.0, 25.0), cpvzero, 1.951303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(181, 178, 1.0, inf, cpv(71.0, 337.0), cpv(17.0, 1.0), cpvzero, 1.752445, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(181, 179, 1.0, inf, cpv(157.0, 321.0), cpv(15.0, 74.0), cpvzero, 2.498092, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(181, 180, 1.0, inf, cpv(125.0, 374.0), cpv(15.0, -16.0), cpvzero, -2.601173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(182, 181, 1.0, inf, cpv(112.0, 133.0), cpv(16.0, 0.0), cpvzero, 0.718830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(182, 182, 1.0, inf, cpv(651.0, 132.0), cpv(27.0, 52.0), cpvzero, 1.347320, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(181, 183, 1.0, inf, cpv(190.0, 371.0), cpv(19.0, -10.0), cpvzero, -2.477546, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(181, 184, 1.0, inf, cpv(276.0, 388.0), cpv(26.0, 44.0), cpvzero, -2.521343, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(181, 185, 1.0, inf, cpv(376.0, 369.0), cpv(28.0, -64.0), cpvzero, -2.767259, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(181, 186, 1.0, inf, cpv(755.0, 326.0), cpv(23.0, -72.0), cpvzero, 1.435269, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(181, 187, 1.0, inf, cpv(689.0, 357.0), cpv(18.0, -65.0), cpvzero, -0.339293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(181, 188, 1.0, inf, cpv(56.0, 403.0), cpv(18.0, -68.0), cpvzero, 3.087591, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(181, 189, 1.0, inf, cpv(655.0, 300.0), cpv(15.0, -71.0), cpvzero, 0.999459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(181, 190, 1.0, inf, cpv(617.0, 349.0), cpv(26.0, 65.0), cpvzero, -0.936774, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body191 = createPolyUniWrapper(181, 191, 1.0, inf, cpv(554.0, 320.0), cpv(18.0, 69.0), cpvzero, 0.661043, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body192 = createPolyUniWrapper(181, 192, 1.0, inf, cpv(535.0, 377.0), cpv(28.0, -28.0), cpvzero, -1.040581, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body193 = createPolyUniWrapper(181, 193, 1.0, inf, cpv(479.0, 336.0), cpv(22.0, -57.0), cpvzero, 0.822418, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body194 = createPolyUniWrapper(181, 194, 1.0, inf, cpv(433.0, 370.0), cpv(20.0, -38.0), cpvzero, -0.426627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body195 = createPolyUniWrapper(181, 195, 1.0, inf, cpv(322.0, 345.0), cpv(16.0, 51.0), cpvzero, 2.528385, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body196 = createPolyUniWrapper(181, 196, 1.0, inf, cpv(256.0, 313.0), cpv(27.0, -25.0), cpvzero, 1.432790, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body197 = createPolyUniWrapper(181, 197, 1.0, inf, cpv(312.0, 319.0), cpv(29.0, 55.0), cpvzero, 2.831890, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body198 = createPolyUniWrapper(181, 198, 1.0, inf, cpv(472.0, 248.0), cpv(22.0, -66.0), cpvzero, 2.269456, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body199 = createPolyUniWrapper(181, 199, 1.0, inf, cpv(461.0, 195.0), cpv(18.0, -10.0), cpvzero, 1.661456, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body200 = createPolyUniWrapper(181, 200, 1.0, inf, cpv(457.0, 301.0), cpv(26.0, 24.0), cpvzero, 2.835714, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body201 = createPolyUniWrapper(181, 201, 1.0, inf, cpv(348.0, 231.0), cpv(18.0, 55.0), cpvzero, 1.022247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body202 = createPolyUniWrapper(181, 202, 1.0, inf, cpv(369.0, 187.0), cpv(21.0, -72.0), cpvzero, 1.418147, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body203 = createPolyUniWrapper(181, 203, 1.0, inf, cpv(350.0, 281.0), cpv(21.0, -65.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body204 = createPolyUniWrapper(181, 204, 1.0, inf, cpv(281.0, 259.0), cpv(15.0, 9.0), cpvzero, 0.688924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body205 = createPolyUniWrapper(182, 205, 1.0, inf, cpv(552.0, 192.0), cpv(24.0, -68.0), cpvzero, 0.986926, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body206 = createPolyUniWrapper(182, 206, 1.0, inf, cpv(593.0, 160.0), cpv(16.0, 52.0), cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body207 = createPolyUniWrapper(182, 207, 1.0, inf, cpv(515.0, 134.0), cpv(22.0, 18.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body208 = createPolyUniWrapper(182, 208, 1.0, inf, cpv(476.0, 175.0), cpv(22.0, 3.0), cpvzero, -2.601173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body209 = createPolyUniWrapper(182, 209, 1.0, inf, cpv(511.0, 209.0), cpv(19.0, 66.0), cpvzero, -1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body210 = createPolyUniWrapper(182, 210, 1.0, inf, cpv(558.0, 240.0), cpv(29.0, -18.0), cpvzero, -2.238102, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body211 = createPolyUniWrapper(182, 211, 1.0, inf, cpv(328.0, 158.0), cpv(25.0, -36.0), cpvzero, -0.927295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body212 = createPolyUniWrapper(182, 212, 1.0, inf, cpv(291.0, 112.0), cpv(23.0, 61.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body213 = createPolyUniWrapper(182, 213, 1.0, inf, cpv(382.0, 127.0), cpv(23.0, -18.0), cpvzero, 1.443287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body214 = createPolyUniWrapper(182, 214, 1.0, inf, cpv(257.0, 168.0), cpv(17.0, 17.0), cpvzero, -1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body215 = createPolyUniWrapper(182, 215, 1.0, inf, cpv(213.0, 133.0), cpv(15.0, 15.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body216 = createPolyUniWrapper(182, 216, 1.0, inf, cpv(173.0, 197.0), cpv(15.0, 45.0), cpvzero, -0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body217 = createPolyUniWrapper(182, 217, 1.0, inf, cpv(160.0, 143.0), cpv(26.0, 7.0), cpvzero, 1.717875, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body218 = createPolyUniWrapper(182, 218, 1.0, inf, cpv(689.0, 109.0), cpv(25.0, -25.0), cpvzero, 2.209116, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body219 = createPolyUniWrapper(182, 219, 1.0, inf, cpv(641.0, 194.0), cpv(25.0, 8.0), cpvzero, -2.944197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body220 = createPolyUniWrapper(186, 220, 1.0, inf, cpv(461.0, 139.0), cpv(20.0, -14.0), cpvzero, 2.231839, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body221 = createPolyUniWrapper(186, 221, 1.0, inf, cpv(599.0, 203.0), cpv(16.0, 57.0), cpvzero, -2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body222 = createPolyUniWrapper(186, 222, 1.0, inf, cpv(335.0, 115.0), cpv(27.0, 74.0), cpvzero, 0.870903, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body223 = createPolyUniWrapper(186, 223, 1.0, inf, cpv(293.0, 161.0), cpv(27.0, 64.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body224 = createPolyUniWrapper(186, 224, 1.0, inf, cpv(242.0, 121.0), cpv(27.0, 54.0), cpvzero, 0.507099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body225 = createPolyUniWrapper(186, 225, 1.0, inf, cpv(220.0, 185.0), cpv(27.0, -12.0), cpvzero, -1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body226 = createPolyUniWrapper(186, 226, 1.0, inf, cpv(127.0, 173.0), cpv(17.0, 20.0), cpvzero, 0.030294, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body227 = createPolyUniWrapper(186, 227, 1.0, inf, cpv(358.0, 163.0), cpv(20.0, 5.0), cpvzero, -0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body228 = createPolyUniWrapper(186, 228, 1.0, inf, cpv(557.0, 150.0), cpv(23.0, -42.0), cpvzero, 2.753274, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body229 = createPolyUniWrapper(186, 229, 1.0, inf, cpv(682.0, 162.0), cpv(21.0, 40.0), cpvzero, 2.919511, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body230 = createPolyUniWrapper(186, 230, 1.0, inf, cpv(625.0, 148.0), cpv(27.0, 68.0), cpvzero, 1.623379, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body231 = createPolyUniWrapper(186, 231, 1.0, inf, cpv(185.0, 150.0), cpv(18.0, -67.0), cpvzero, 1.363300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body232 = createPolyUniWrapper(106, 232, 1.0, inf, cpv(656.0, 345.0), cpv(24.0, -23.0), cpvzero, -0.876058, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body233 = createPolyUniWrapper(106, 233, 1.0, inf, cpv(708.0, 313.0), cpv(16.0, 64.0), cpvzero, 1.229817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body234 = createPolyUniWrapper(106, 234, 1.0, inf, cpv(609.0, 306.0), cpv(23.0, -43.0), cpvzero, 0.690446, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body235 = createPolyUniWrapper(106, 235, 1.0, inf, cpv(580.0, 360.0), cpv(15.0, 10.0), cpvzero, -1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body236 = createPolyUniWrapper(106, 236, 1.0, inf, cpv(488.0, 381.0), cpv(22.0, -8.0), cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body237 = createPolyUniWrapper(106, 237, 1.0, inf, cpv(519.0, 329.0), cpv(26.0, 8.0), cpvzero, 1.063698, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body238 = createPolyUniWrapper(106, 238, 1.0, inf, cpv(93.0, 386.0), cpv(25.0, 36.0), cpvzero, -3.034857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body239 = createPolyUniWrapper(106, 239, 1.0, inf, cpv(113.0, 327.0), cpv(26.0, 74.0), cpvzero, 1.956679, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body240 = createPolyUniWrapper(106, 240, 1.0, inf, cpv(154.0, 364.0), cpv(17.0, 6.0), cpvzero, -2.587285, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body241 = createPolyUniWrapper(106, 241, 1.0, inf, cpv(202.0, 327.0), cpv(19.0, -27.0), cpvzero, 2.330559, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body242 = createPolyUniWrapper(106, 242, 1.0, inf, cpv(232.0, 383.0), cpv(29.0, -16.0), cpvzero, -2.205823, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body243 = createPolyUniWrapper(106, 243, 1.0, inf, cpv(318.0, 389.0), cpv(15.0, -6.0), cpvzero, -2.330559, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body244 = createPolyUniWrapper(106, 244, 1.0, inf, cpv(275.0, 286.0), cpv(18.0, -22.0), cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body245 = createPolyUniWrapper(106, 245, 1.0, inf, cpv(276.0, 225.0), cpv(25.0, -35.0), cpvzero, 0.211093, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body246 = createPolyUniWrapper(31, 246, 1.0, inf, cpv(140.0, 110.0), cpv(17.0, -47.0), cpvzero, 0.368696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body247 = createPolyUniWrapper(105, 247, 1.0, inf, cpv(519.0, 280.0), cpv(20.0, -20.0), cpvzero, -0.722979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body248 = createPolyUniWrapper(28, 248, 1.0, inf, cpv(631.0, 81.0), cpv(27.0, -67.0), cpvzero, -1.054101, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body249 = createPolyUniWrapper(181, 249, 1.0, inf, cpv(124.0, 76.0), cpv(19.0, 64.0), cpvzero, 0.927295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body250 = createPolyUniWrapper(185, 250, 1.0, inf, cpv(157.0, 75.0), cpv(15.0, 50.0), cpvzero, 2.003204, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body251 = createPolyUniWrapper(181, 251, 1.0, inf, cpv(179.0, 97.0), cpv(24.0, -67.0), cpvzero, 2.819842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body252 = createPolyUniWrapper(183, 252, 1.0, inf, cpv(620.0, 45.0), cpv(20.0, 3.0), cpvzero, 1.467715, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body253 = createPolyUniWrapper(183, 253, 1.0, inf, cpv(595.0, 91.0), cpv(21.0, -42.0), cpvzero, -0.394791, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body254 = createPolyUniWrapper(184, 254, 1.0, inf, cpv(598.0, 64.0), cpv(24.0, -58.0), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(515.0, 347.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(686.0, 320.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(597.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(472.0, 348.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(533.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(369.0, 253.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(512.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(335.0, 353.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(436.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(375.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(480.0, 145.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(166.0, 334.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(206.0, 345.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(248.0, 356.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(421.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(447.0, 268.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(398.0, 180.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(449.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(361.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(320.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(169.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(534.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(643.0, 315.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(729.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(766.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(555.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(523.0, 152.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(563.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(667.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(605.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(644.0, 161.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(290.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(279.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(278.0, 314.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(241.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(301.0, 281.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(298.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(240.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(141.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(206.0, 157.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(376.0, 336.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(126.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(664.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(54.0, 371.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(88.0, 349.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(434.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(400.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(427.0, 334.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(383.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(26.0, 398.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(71.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(157.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(125.0, 364.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(112.0, 123.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(651.0, 122.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(190.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(276.0, 378.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(376.0, 359.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(755.0, 316.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(689.0, 347.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(56.0, 393.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(655.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(617.0, 339.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body191, body0, cpvzero, cpv(554.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body192, body0, cpvzero, cpv(535.0, 367.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body193, body0, cpvzero, cpv(479.0, 326.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body194, body0, cpvzero, cpv(433.0, 360.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body195, body0, cpvzero, cpv(322.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body196, body0, cpvzero, cpv(256.0, 303.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body197, body0, cpvzero, cpv(312.0, 309.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body198, body0, cpvzero, cpv(472.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body199, body0, cpvzero, cpv(461.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body200, body0, cpvzero, cpv(457.0, 291.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body201, body0, cpvzero, cpv(348.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body202, body0, cpvzero, cpv(369.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body203, body0, cpvzero, cpv(350.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body204, body0, cpvzero, cpv(281.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body205, body0, cpvzero, cpv(552.0, 182.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body206, body0, cpvzero, cpv(593.0, 150.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body207, body0, cpvzero, cpv(515.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body208, body0, cpvzero, cpv(476.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body209, body0, cpvzero, cpv(511.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body210, body0, cpvzero, cpv(558.0, 230.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body211, body0, cpvzero, cpv(328.0, 148.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body212, body0, cpvzero, cpv(291.0, 102.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body213, body0, cpvzero, cpv(382.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body214, body0, cpvzero, cpv(257.0, 158.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body215, body0, cpvzero, cpv(213.0, 123.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body216, body0, cpvzero, cpv(173.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body217, body0, cpvzero, cpv(160.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body218, body0, cpvzero, cpv(689.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body219, body0, cpvzero, cpv(641.0, 184.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body220, body0, cpvzero, cpv(461.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body221, body0, cpvzero, cpv(599.0, 193.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body222, body0, cpvzero, cpv(335.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body223, body0, cpvzero, cpv(293.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body224, body0, cpvzero, cpv(242.0, 111.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body225, body0, cpvzero, cpv(220.0, 175.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body226, body0, cpvzero, cpv(127.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body227, body0, cpvzero, cpv(358.0, 153.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body228, body0, cpvzero, cpv(557.0, 140.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body229, body0, cpvzero, cpv(682.0, 152.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body230, body0, cpvzero, cpv(625.0, 138.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body231, body0, cpvzero, cpv(185.0, 140.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body232, body0, cpvzero, cpv(656.0, 335.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body233, body0, cpvzero, cpv(708.0, 303.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body234, body0, cpvzero, cpv(609.0, 296.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body235, body0, cpvzero, cpv(580.0, 350.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body236, body0, cpvzero, cpv(488.0, 371.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body237, body0, cpvzero, cpv(519.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body238, body0, cpvzero, cpv(93.0, 376.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body239, body0, cpvzero, cpv(113.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body240, body0, cpvzero, cpv(154.0, 354.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body241, body0, cpvzero, cpv(202.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body242, body0, cpvzero, cpv(232.0, 373.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body243, body0, cpvzero, cpv(318.0, 379.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body244, body0, cpvzero, cpv(275.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body245, body0, cpvzero, cpv(276.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body246, body0, cpvzero, cpv(140.0, 100.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body247, body0, cpvzero, cpv(519.0, 270.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body248, body0, cpvzero, cpv(631.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body249, body0, cpvzero, cpv(124.0, 66.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body250, body0, cpvzero, cpv(157.0, 65.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body251, body0, cpvzero, cpv(179.0, 87.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body252, body0, cpvzero, cpv(620.0, 35.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body253, body0, cpvzero, cpv(595.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body254, body0, cpvzero, cpv(598.0, 54.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level06 = {
	6,
	"Level 6",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

