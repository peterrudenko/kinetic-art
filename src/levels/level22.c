
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level21;
extern kineticArtLevel Level23;
#define PREV_LEVEL &Level21
#define NEXT_LEVEL &Level23


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

{  /* Total bodies: 106, total joints: 106 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body107 = createPolyUniWrapper(160, 107, 1.0, inf, cpv(91.0, 343.0), cpv(20.0, -53.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(159, 108, 1.0, inf, cpv(204.0, 306.0), cpv(28.0, 74.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(160, 109, 1.0, inf, cpv(281.0, 358.0), cpv(22.0, -52.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(159, 110, 1.0, inf, cpv(386.0, 313.0), cpv(23.0, 33.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(160, 111, 1.0, inf, cpv(453.0, 367.0), cpv(22.0, -72.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(159, 112, 1.0, inf, cpv(566.0, 322.0), cpv(28.0, 46.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(160, 113, 1.0, inf, cpv(680.0, 354.0), cpv(15.0, 39.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(137, 114, 1.0, inf, cpv(550.0, 238.0), cpv(26.0, 60.0), cpvzero, 0.896055, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(138, 115, 1.0, inf, cpv(575.0, 293.0), cpv(23.0, -71.0), cpvzero, -1.696709, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(128, 116, 1.0, inf, cpv(531.0, 217.0), cpv(21.0, -21.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(138, 117, 1.0, inf, cpv(677.0, 210.0), cpv(17.0, 57.0), cpvzero, 1.725793, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(130, 118, 1.0, inf, cpv(639.0, 81.0), cpv(23.0, -51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(138, 119, 1.0, inf, cpv(666.0, 247.0), cpv(18.0, 1.0), cpvzero, -1.359703, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(137, 120, 1.0, inf, cpv(680.0, 173.0), cpv(20.0, 7.0), cpvzero, 1.438245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(138, 121, 1.0, inf, cpv(663.0, 286.0), cpv(16.0, -75.0), cpvzero, -1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(138, 122, 1.0, inf, cpv(671.0, 322.0), cpv(29.0, -34.0), cpvzero, -1.745469, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(137, 123, 1.0, inf, cpv(581.0, 181.0), cpv(25.0, 68.0), cpvzero, 1.907471, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(107, 124, 1.0, inf, cpv(494.0, 94.0), cpv(28.0, -70.0), cpvzero, 1.487655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(128, 125, 1.0, inf, cpv(749.0, 229.0), cpv(29.0, -2.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(138, 126, 1.0, inf, cpv(571.0, 253.0), cpv(21.0, 15.0), cpvzero, -1.681454, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(136, 127, 1.0, inf, cpv(717.0, 244.0), cpv(29.0, -23.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(137, 128, 1.0, inf, cpv(689.0, 271.0), cpv(17.0, 70.0), cpvzero, 2.203545, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(129, 129, 1.0, inf, cpv(595.0, 152.0), cpv(17.0, -51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(106, 130, 1.0, inf, cpv(503.0, 154.0), cpv(22.0, -25.0), cpvzero, -1.841743, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(130, 131, 1.0, inf, cpv(447.0, 126.0), cpv(25.0, -74.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(135, 132, 1.0, inf, cpv(659.0, 106.0), cpv(17.0, -22.0), cpvzero, 0.919720, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(137, 133, 1.0, inf, cpv(265.0, 217.0), cpv(29.0, -61.0), cpvzero, 1.649580, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(135, 134, 1.0, inf, cpv(335.0, 187.0), cpv(25.0, 39.0), cpvzero, 0.885067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(136, 135, 1.0, inf, cpv(82.0, 156.0), cpv(21.0, -57.0), cpvzero, 1.980924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(133, 136, 1.0, inf, cpv(123.0, 90.0), cpv(17.0, 7.0), cpvzero, 2.372066, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(128, 137, 1.0, inf, cpv(158.0, 200.0), cpv(20.0, 18.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(136, 138, 1.0, inf, cpv(674.0, 138.0), cpv(24.0, 15.0), cpvzero, -1.808632, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(138, 139, 1.0, inf, cpv(67.0, 273.0), cpv(21.0, 35.0), cpvzero, 1.331565, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(137, 140, 1.0, inf, cpv(68.0, 195.0), cpv(26.0, -36.0), cpvzero, 1.761981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(138, 141, 1.0, inf, cpv(572.0, 215.0), cpv(16.0, -20.0), cpvzero, 1.691420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(138, 142, 1.0, inf, cpv(467.0, 337.0), cpv(26.0, 59.0), cpvzero, 2.050316, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(138, 143, 1.0, inf, cpv(480.0, 299.0), cpv(26.0, -11.0), cpvzero, 1.699120, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(138, 144, 1.0, inf, cpv(478.0, 261.0), cpv(17.0, -4.0), cpvzero, 1.304544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(138, 145, 1.0, inf, cpv(467.0, 226.0), cpv(17.0, -63.0), cpvzero, 1.282741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(138, 146, 1.0, inf, cpv(294.0, 327.0), cpv(19.0, -36.0), cpvzero, 1.821239, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(138, 147, 1.0, inf, cpv(290.0, 292.0), cpv(16.0, -44.0), cpvzero, 1.147942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(138, 148, 1.0, inf, cpv(272.0, 257.0), cpv(24.0, 3.0), cpvzero, 1.121037, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(138, 149, 1.0, inf, cpv(382.0, 280.0), cpv(28.0, 74.0), cpvzero, 1.502720, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(138, 150, 1.0, inf, cpv(207.0, 275.0), cpv(20.0, -5.0), cpvzero, -1.969319, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(138, 151, 1.0, inf, cpv(197.0, 239.0), cpv(18.0, -64.0), cpvzero, 1.405648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(138, 152, 1.0, inf, cpv(202.0, 201.0), cpv(16.0, 69.0), cpvzero, 1.768192, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(137, 153, 1.0, inf, cpv(59.0, 161.0), cpv(17.0, -38.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(136, 154, 1.0, inf, cpv(55.0, 119.0), cpv(16.0, -75.0), cpvzero, 1.473543, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(137, 155, 1.0, inf, cpv(205.0, 162.0), cpv(15.0, 69.0), cpvzero, 1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(136, 156, 1.0, inf, cpv(476.0, 155.0), cpv(17.0, -58.0), cpvzero, 2.001489, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(137, 157, 1.0, inf, cpv(466.0, 190.0), cpv(24.0, 31.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(136, 158, 1.0, inf, cpv(372.0, 206.0), cpv(29.0, 13.0), cpvzero, -1.746736, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(137, 159, 1.0, inf, cpv(379.0, 244.0), cpv(26.0, -17.0), cpvzero, 1.436475, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(137, 160, 1.0, inf, cpv(301.0, 262.0), cpv(28.0, -8.0), cpvzero, 1.989021, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(138, 161, 1.0, inf, cpv(82.0, 239.0), cpv(28.0, 50.0), cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(134, 162, 1.0, inf, cpv(367.0, 170.0), cpv(29.0, 27.0), cpvzero, 1.460139, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(135, 163, 1.0, inf, cpv(100.0, 122.0), cpv(27.0, -60.0), cpvzero, 2.135366, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(134, 164, 1.0, inf, cpv(271.0, 135.0), cpv(16.0, -21.0), cpvzero, 1.436985, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(135, 165, 1.0, inf, cpv(270.0, 176.0), cpv(24.0, -9.0), cpvzero, 1.730709, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(134, 166, 1.0, inf, cpv(399.0, 175.0), cpv(26.0, 43.0), cpvzero, 2.101012, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(135, 167, 1.0, inf, cpv(390.0, 209.0), cpv(21.0, -52.0), cpvzero, 1.744042, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(137, 168, 1.0, inf, cpv(178.0, 225.0), cpv(29.0, 23.0), cpvzero, 1.158386, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(138, 169, 1.0, inf, cpv(76.0, 311.0), cpv(17.0, 7.0), cpvzero, 1.231504, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(129, 170, 1.0, inf, cpv(59.0, 85.0), cpv(18.0, -20.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(132, 171, 1.0, inf, cpv(367.0, 134.0), cpv(22.0, -8.0), cpvzero, 1.681454, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(138, 172, 1.0, inf, cpv(63.0, 234.0), cpv(28.0, -65.0), cpvzero, 1.625288, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(126, 173, 1.0, inf, cpv(195.0, 131.0), cpv(26.0, 70.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(131, 174, 1.0, inf, cpv(379.0, 93.0), cpv(27.0, -14.0), cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(132, 175, 1.0, inf, cpv(421.0, 144.0), cpv(21.0, 54.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(126, 176, 1.0, inf, cpv(492.0, 126.0), cpv(26.0, 14.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(137, 177, 1.0, inf, cpv(356.0, 219.0), cpv(27.0, -19.0), cpvzero, 1.144169, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(127, 178, 1.0, inf, cpv(122.0, 183.0), cpv(18.0, -4.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(128, 179, 1.0, inf, cpv(316.0, 235.0), cpv(28.0, 11.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(125, 180, 1.0, inf, cpv(395.0, 64.0), cpv(15.0, -10.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(126, 181, 1.0, inf, cpv(259.0, 98.0), cpv(22.0, 28.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(129, 182, 1.0, inf, cpv(309.0, 164.0), cpv(18.0, -31.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(130, 183, 1.0, inf, cpv(149.0, 68.0), cpv(22.0, -28.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(105, 184, 1.0, inf, cpv(645.0, 50.0), cpv(24.0, -36.0), cpvzero, 1.789465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(137, 185, 1.0, inf, cpv(102.0, 208.0), cpv(26.0, -12.0), cpvzero, 2.289626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(105, 186, 1.0, inf, cpv(609.0, 86.0), cpv(23.0, 14.0), cpvzero, -0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(106, 187, 1.0, inf, cpv(616.0, 58.0), cpv(18.0, 33.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(107, 188, 1.0, inf, cpv(252.0, 69.0), cpv(29.0, -32.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(108, 189, 1.0, inf, cpv(394.0, 34.0), cpv(15.0, -74.0), cpvzero, 1.315614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(107, 190, 1.0, inf, cpv(420.0, 45.0), cpv(27.0, -51.0), cpvzero, 2.452668, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body191 = createPolyUniWrapper(108, 191, 1.0, inf, cpv(425.0, 69.0), cpv(22.0, 62.0), cpvzero, -2.992703, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body192 = createPolyUniWrapper(109, 192, 1.0, inf, cpv(633.0, 109.0), cpv(15.0, 65.0), cpvzero, -1.659452, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body193 = createPolyUniWrapper(109, 193, 1.0, inf, cpv(669.0, 74.0), cpv(19.0, -54.0), cpvzero, 2.973386, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body194 = createPolyUniWrapper(109, 194, 1.0, inf, cpv(240.0, 122.0), cpv(25.0, -22.0), cpvzero, -1.012197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body195 = createPolyUniWrapper(109, 195, 1.0, inf, cpv(289.0, 104.0), cpv(28.0, 13.0), cpvzero, -2.860360, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body196 = createPolyUniWrapper(109, 196, 1.0, inf, cpv(141.0, 36.0), cpv(17.0, 0.0), cpvzero, 1.361773, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body197 = createPolyUniWrapper(109, 197, 1.0, inf, cpv(183.0, 72.0), cpv(17.0, 22.0), cpvzero, -3.082837, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body198 = createPolyUniWrapper(107, 198, 1.0, inf, cpv(519.0, 133.0), cpv(27.0, -16.0), cpvzero, -2.659079, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body199 = createPolyUniWrapper(108, 199, 1.0, inf, cpv(517.0, 106.0), cpv(20.0, 63.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body200 = createPolyUniWrapper(107, 200, 1.0, inf, cpv(626.0, 151.0), cpv(28.0, -5.0), cpvzero, -2.912361, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body201 = createPolyUniWrapper(108, 201, 1.0, inf, cpv(566.0, 155.0), cpv(29.0, 24.0), cpvzero, -0.165149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body202 = createPolyUniWrapper(105, 202, 1.0, inf, cpv(117.0, 61.0), cpv(16.0, -32.0), cpvzero, 0.214061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body203 = createPolyUniWrapper(108, 203, 1.0, inf, cpv(612.0, 173.0), cpv(20.0, 33.0), cpvzero, -2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body204 = createPolyUniWrapper(105, 204, 1.0, inf, cpv(604.0, 127.0), cpv(25.0, -51.0), cpvzero, 1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body205 = createPolyUniWrapper(105, 205, 1.0, inf, cpv(282.0, 76.0), cpv(15.0, 69.0), cpvzero, 2.279423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body206 = createPolyUniWrapper(105, 206, 1.0, inf, cpv(164.0, 95.0), cpv(26.0, -16.0), cpvzero, -2.080389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body207 = createPolyUniWrapper(107, 207, 1.0, inf, cpv(575.0, 129.0), cpv(23.0, -40.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body208 = createPolyUniWrapper(105, 208, 1.0, inf, cpv(408.0, 90.0), cpv(24.0, -22.0), cpvzero, -2.007423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body209 = createPolyUniWrapper(106, 209, 1.0, inf, cpv(171.0, 45.0), cpv(23.0, -40.0), cpvzero, 2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body210 = createPolyUniWrapper(105, 210, 1.0, inf, cpv(371.0, 50.0), cpv(24.0, -3.0), cpvzero, 0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body211 = createPolyUniWrapper(106, 211, 1.0, inf, cpv(472.0, 108.0), cpv(25.0, 19.0), cpvzero, 0.454719, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body212 = createPolyUniWrapper(105, 212, 1.0, inf, cpv(229.0, 93.0), cpv(29.0, -5.0), cpvzero, 0.165149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(91.0, 333.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(204.0, 296.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(281.0, 348.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(386.0, 303.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(453.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(566.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(680.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(550.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(575.0, 283.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(531.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(677.0, 200.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(639.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(666.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(680.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(663.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(671.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(581.0, 171.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(494.0, 84.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(749.0, 219.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(571.0, 243.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(717.0, 234.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(689.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(595.0, 142.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(503.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(447.0, 116.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(659.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(265.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(335.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(82.0, 146.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(123.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(158.0, 190.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(674.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(67.0, 263.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(68.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(572.0, 205.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(467.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(480.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(478.0, 251.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(467.0, 216.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(294.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(290.0, 282.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(272.0, 247.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(382.0, 270.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(207.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(197.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(202.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(59.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(55.0, 109.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(205.0, 152.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(476.0, 145.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(466.0, 180.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(372.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(379.0, 234.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(301.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(82.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(367.0, 160.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(100.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(271.0, 125.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(270.0, 166.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(399.0, 165.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(390.0, 199.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(178.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(76.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(59.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(367.0, 124.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(63.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(195.0, 121.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(379.0, 83.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(421.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(492.0, 116.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(356.0, 209.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(122.0, 173.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(316.0, 225.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(395.0, 54.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(259.0, 88.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(309.0, 154.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(149.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(645.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(102.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(609.0, 76.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(616.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(252.0, 59.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(394.0, 24.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(420.0, 35.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body191, body0, cpvzero, cpv(425.0, 59.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body192, body0, cpvzero, cpv(633.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body193, body0, cpvzero, cpv(669.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body194, body0, cpvzero, cpv(240.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body195, body0, cpvzero, cpv(289.0, 94.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body196, body0, cpvzero, cpv(141.0, 26.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body197, body0, cpvzero, cpv(183.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body198, body0, cpvzero, cpv(519.0, 123.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body199, body0, cpvzero, cpv(517.0, 96.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body200, body0, cpvzero, cpv(626.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body201, body0, cpvzero, cpv(566.0, 145.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body202, body0, cpvzero, cpv(117.0, 51.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body203, body0, cpvzero, cpv(612.0, 163.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body204, body0, cpvzero, cpv(604.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body205, body0, cpvzero, cpv(282.0, 66.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body206, body0, cpvzero, cpv(164.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body207, body0, cpvzero, cpv(575.0, 119.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body208, body0, cpvzero, cpv(408.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body209, body0, cpvzero, cpv(171.0, 35.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body210, body0, cpvzero, cpv(371.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body211, body0, cpvzero, cpv(472.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body212, body0, cpvzero, cpv(229.0, 83.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level22 = {
	22,
	"Level 22",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

