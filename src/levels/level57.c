
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level56;
extern kineticArtLevel Level58;
#define PREV_LEVEL &Level56
#define NEXT_LEVEL &Level58


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 101, total joints: 101 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body102 = createPolyUniWrapper(133, 102, 1.0, inf, cpv(463.0, 192.0), cpv(18.0, 57.0), cpvzero, -1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(135, 103, 1.0, inf, cpv(267.0, 265.0), cpv(20.0, -67.0), cpvzero, 3.022164, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(134, 104, 1.0, inf, cpv(319.0, 310.0), cpv(21.0, 70.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(136, 105, 1.0, inf, cpv(669.0, 125.0), cpv(15.0, 27.0), cpvzero, 0.822418, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(135, 106, 1.0, inf, cpv(544.0, 80.0), cpv(25.0, -25.0), cpvzero, -0.119429, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(132, 107, 1.0, inf, cpv(144.0, 328.0), cpv(22.0, 48.0), cpvzero, 0.999459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(132, 108, 1.0, inf, cpv(133.0, 287.0), cpv(28.0, 20.0), cpvzero, 1.546991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(132, 109, 1.0, inf, cpv(141.0, 246.0), cpv(26.0, -18.0), cpvzero, 1.994991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(186, 110, 1.0, inf, cpv(241.0, 325.0), cpv(24.0, -21.0), cpvzero, -1.919567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(132, 111, 1.0, inf, cpv(170.0, 211.0), cpv(20.0, 66.0), cpvzero, 2.553590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(132, 112, 1.0, inf, cpv(215.0, 195.0), cpv(22.0, 37.0), cpvzero, 2.972491, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(132, 113, 1.0, inf, cpv(263.0, 194.0), cpv(23.0, -51.0), cpvzero, -3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(131, 114, 1.0, inf, cpv(353.0, 233.0), cpv(15.0, -56.0), cpvzero, 0.602287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(131, 115, 1.0, inf, cpv(311.0, 208.0), cpv(28.0, 48.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(132, 116, 1.0, inf, cpv(427.0, 283.0), cpv(16.0, 12.0), cpvzero, -2.618314, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(132, 117, 1.0, inf, cpv(464.0, 300.0), cpv(16.0, -10.0), cpvzero, -2.779863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(132, 118, 1.0, inf, cpv(507.0, 314.0), cpv(18.0, -29.0), cpvzero, -2.922924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(133, 119, 1.0, inf, cpv(549.0, 321.0), cpv(25.0, -9.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(133, 120, 1.0, inf, cpv(590.0, 320.0), cpv(28.0, 35.0), cpvzero, 2.956245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(134, 121, 1.0, inf, cpv(627.0, 307.0), cpv(27.0, -41.0), cpvzero, 2.690140, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(134, 122, 1.0, inf, cpv(685.0, 247.0), cpv(20.0, 53.0), cpvzero, 2.022950, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(135, 123, 1.0, inf, cpv(694.0, 206.0), cpv(28.0, -36.0), cpvzero, 1.530818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(135, 124, 1.0, inf, cpv(689.0, 165.0), cpv(28.0, 41.0), cpvzero, 1.315614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(133, 125, 1.0, inf, cpv(302.0, 348.0), cpv(28.0, 24.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(133, 126, 1.0, inf, cpv(263.0, 371.0), cpv(17.0, -43.0), cpvzero, 2.857799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(133, 127, 1.0, inf, cpv(484.0, 225.0), cpv(28.0, -25.0), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(133, 128, 1.0, inf, cpv(460.0, 154.0), cpv(25.0, 69.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(132, 129, 1.0, inf, cpv(554.0, 249.0), cpv(15.0, -16.0), cpvzero, 2.954613, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(131, 130, 1.0, inf, cpv(598.0, 170.0), cpv(19.0, 26.0), cpvzero, -1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(134, 131, 1.0, inf, cpv(473.0, 117.0), cpv(22.0, 60.0), cpvzero, -1.063698, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(135, 132, 1.0, inf, cpv(592.0, 81.0), cpv(23.0, -31.0), cpvzero, 0.179853, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(132, 133, 1.0, inf, cpv(518.0, 244.0), cpv(15.0, 9.0), cpvzero, -2.704965, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(132, 134, 1.0, inf, cpv(606.0, 204.0), cpv(15.0, -47.0), cpvzero, 1.599360, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(134, 135, 1.0, inf, cpv(503.0, 90.0), cpv(22.0, 62.0), cpvzero, -0.571337, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(184, 136, 1.0, inf, cpv(482.0, 188.0), cpv(22.0, -66.0), cpvzero, -2.485897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(181, 137, 1.0, inf, cpv(519.0, 159.0), cpv(26.0, -47.0), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(132, 138, 1.0, inf, cpv(177.0, 360.0), cpv(17.0, 63.0), cpvzero, 0.564569, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(135, 139, 1.0, inf, cpv(243.0, 286.0), cpv(28.0, 47.0), cpvzero, 1.951303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(132, 140, 1.0, inf, cpv(588.0, 235.0), cpv(19.0, 52.0), cpvzero, 2.375060, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(136, 141, 1.0, inf, cpv(634.0, 96.0), cpv(19.0, 35.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(131, 142, 1.0, inf, cpv(391.0, 259.0), cpv(24.0, 8.0), cpvzero, 0.614663, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(133, 143, 1.0, inf, cpv(216.0, 373.0), cpv(29.0, 53.0), cpvzero, 0.158655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(105, 144, 1.0, inf, cpv(336.0, 334.0), cpv(29.0, -51.0), cpvzero, 2.854311, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(105, 145, 1.0, inf, cpv(247.0, 393.0), cpv(15.0, -55.0), cpvzero, -2.279423, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(105, 146, 1.0, inf, cpv(282.0, 340.0), cpv(24.0, -59.0), cpvzero, 1.703348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(105, 147, 1.0, inf, cpv(176.0, 336.0), cpv(26.0, 34.0), cpvzero, 2.912361, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(108, 148, 1.0, inf, cpv(200.0, 222.0), cpv(21.0, -1.0), cpvzero, -1.763497, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(108, 149, 1.0, inf, cpv(121.0, 323.0), cpv(21.0, 13.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(108, 150, 1.0, inf, cpv(275.0, 212.0), cpv(24.0, -30.0), cpvzero, -0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(108, 151, 1.0, inf, cpv(134.0, 220.0), cpv(22.0, 50.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(108, 152, 1.0, inf, cpv(376.0, 226.0), cpv(23.0, -68.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(108, 153, 1.0, inf, cpv(469.0, 322.0), cpv(26.0, -59.0), cpvzero, -0.528074, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(108, 154, 1.0, inf, cpv(526.0, 298.0), cpv(18.0, -75.0), cpvzero, 0.999459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(105, 155, 1.0, inf, cpv(647.0, 318.0), cpv(23.0, -45.0), cpvzero, -1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(105, 156, 1.0, inf, cpv(671.0, 228.0), cpv(29.0, 22.0), cpvzero, -0.218669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(106, 157, 1.0, inf, cpv(702.0, 144.0), cpv(24.0, -13.0), cpvzero, -2.838708, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(106, 158, 1.0, inf, cpv(612.0, 107.0), cpv(15.0, 33.0), cpvzero, -1.951303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(185, 159, 1.0, inf, cpv(574.0, 221.0), cpv(28.0, 21.0), cpvzero, 1.750650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(186, 160, 1.0, inf, cpv(669.0, 161.0), cpv(16.0, -48.0), cpvzero, -1.203622, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(105, 161, 1.0, inf, cpv(519.0, 101.0), cpv(16.0, -39.0), cpvzero, -1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(105, 162, 1.0, inf, cpv(443.0, 138.0), cpv(23.0, 30.0), cpvzero, -0.658806, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(105, 163, 1.0, inf, cpv(461.0, 227.0), cpv(17.0, 28.0), cpvzero, -1.523213, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(181, 164, 1.0, inf, cpv(538.0, 198.0), cpv(15.0, 53.0), cpvzero, -1.797595, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(134, 165, 1.0, inf, cpv(662.0, 282.0), cpv(19.0, 24.0), cpvzero, -0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(183, 166, 1.0, inf, cpv(559.0, 339.0), cpv(17.0, -4.0), cpvzero, -0.699893, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(183, 167, 1.0, inf, cpv(450.0, 271.0), cpv(17.0, -41.0), cpvzero, 1.004067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(183, 168, 1.0, inf, cpv(389.0, 283.0), cpv(23.0, 20.0), cpvzero, -0.298499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(183, 169, 1.0, inf, cpv(287.0, 179.0), cpv(17.0, -38.0), cpvzero, 0.999459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(185, 170, 1.0, inf, cpv(170.0, 249.0), cpv(17.0, 19.0), cpvzero, -1.975688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(185, 171, 1.0, inf, cpv(109.0, 278.0), cpv(22.0, 60.0), cpvzero, -0.682317, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(183, 172, 1.0, inf, cpv(201.0, 393.0), cpv(17.0, -8.0), cpvzero, -2.245537, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(184, 173, 1.0, inf, cpv(319.0, 269.0), cpv(21.0, -4.0), cpvzero, 1.523213, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(186, 174, 1.0, inf, cpv(224.0, 269.0), cpv(29.0, 11.0), cpvzero, -0.169778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(184, 175, 1.0, inf, cpv(591.0, 296.0), cpv(17.0, -51.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(184, 176, 1.0, inf, cpv(685.0, 286.0), cpv(29.0, 0.0), cpvzero, -1.687905, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(186, 177, 1.0, inf, cpv(673.0, 101.0), cpv(25.0, -62.0), cpvzero, -3.112189, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(186, 178, 1.0, inf, cpv(583.0, 61.0), cpv(18.0, -39.0), cpvzero, 2.565217, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(185, 179, 1.0, inf, cpv(628.0, 188.0), cpv(22.0, -35.0), cpvzero, 2.187093, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(134, 180, 1.0, inf, cpv(300.0, 278.0), cpv(26.0, 1.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(186, 181, 1.0, inf, cpv(713.0, 197.0), cpv(26.0, 38.0), cpvzero, -2.437099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(185, 182, 1.0, inf, cpv(424.0, 308.0), cpv(29.0, 12.0), cpvzero, -0.358771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(185, 183, 1.0, inf, cpv(413.0, 246.0), cpv(23.0, 57.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(185, 184, 1.0, inf, cpv(488.0, 285.0), cpv(28.0, -71.0), cpvzero, 1.292497, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(185, 185, 1.0, inf, cpv(511.0, 337.0), cpv(28.0, -4.0), cpvzero, -0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(185, 186, 1.0, inf, cpv(608.0, 337.0), cpv(23.0, -16.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(185, 187, 1.0, inf, cpv(335.0, 199.0), cpv(28.0, 3.0), cpvzero, 1.525373, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(185, 188, 1.0, inf, cpv(228.0, 172.0), cpv(23.0, -53.0), cpvzero, 0.813962, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(185, 189, 1.0, inf, cpv(351.0, 255.0), cpv(17.0, -52.0), cpvzero, -0.152649, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(183, 190, 1.0, inf, cpv(316.0, 233.0), cpv(20.0, -72.0), cpvzero, -0.339293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body191 = createPolyUniWrapper(183, 191, 1.0, inf, cpv(234.0, 212.0), cpv(27.0, -64.0), cpvzero, -1.158386, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body192 = createPolyUniWrapper(183, 192, 1.0, inf, cpv(176.0, 184.0), cpv(17.0, -64.0), cpvzero, 0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body193 = createPolyUniWrapper(183, 193, 1.0, inf, cpv(157.0, 283.0), cpv(23.0, 70.0), cpvzero, -2.308611, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body194 = createPolyUniWrapper(183, 194, 1.0, inf, cpv(152.0, 365.0), cpv(24.0, 12.0), cpvzero, -1.464061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body195 = createPolyUniWrapper(185, 195, 1.0, inf, cpv(562.0, 298.0), cpv(27.0, 33.0), cpvzero, 0.745419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body196 = createPolyUniWrapper(183, 196, 1.0, inf, cpv(627.0, 282.0), cpv(21.0, 54.0), cpvzero, 0.432408, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body197 = createPolyUniWrapper(184, 197, 1.0, inf, cpv(652.0, 260.0), cpv(21.0, -22.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body198 = createPolyUniWrapper(184, 198, 1.0, inf, cpv(459.0, 95.0), cpv(25.0, 9.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body199 = createPolyUniWrapper(184, 199, 1.0, inf, cpv(708.0, 245.0), cpv(24.0, 45.0), cpvzero, -2.055274, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body200 = createPolyUniWrapper(141, 200, 1.0, inf, cpv(569.0, 151.0), cpv(21.0, -34.0), cpvzero, 0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body201 = createPolyUniWrapper(141, 201, 1.0, inf, cpv(541.0, 161.0), cpv(15.0, -71.0), cpvzero, -1.225241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body202 = createPolyUniWrapper(185, 202, 1.0, inf, cpv(586.0, 134.0), cpv(19.0, 66.0), cpvzero, 1.144169, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(463.0, 182.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(267.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(319.0, 300.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(669.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(544.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(144.0, 318.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(133.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(141.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(241.0, 315.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(170.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(215.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(263.0, 184.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(353.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(311.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(427.0, 273.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(464.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(507.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(549.0, 311.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(590.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(627.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(685.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(694.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(689.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(302.0, 338.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(263.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(484.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(460.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(554.0, 239.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(598.0, 160.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(473.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(592.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(518.0, 234.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(606.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(503.0, 80.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(482.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(519.0, 149.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(177.0, 350.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(243.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(588.0, 225.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(634.0, 86.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(391.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(216.0, 363.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(336.0, 324.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(247.0, 383.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(282.0, 330.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(176.0, 326.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(200.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(121.0, 313.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(275.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(134.0, 210.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(376.0, 216.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(469.0, 312.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(526.0, 288.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(647.0, 308.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(671.0, 218.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(702.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(612.0, 97.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(574.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(669.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(519.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(443.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(461.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(538.0, 188.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(662.0, 272.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(559.0, 329.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(450.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(389.0, 273.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(287.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(170.0, 239.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(109.0, 268.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(201.0, 383.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(319.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(224.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(591.0, 286.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(685.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(673.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(583.0, 51.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(628.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(300.0, 268.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(713.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(424.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(413.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(488.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(511.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(608.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(335.0, 189.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(228.0, 162.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(351.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(316.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body191, body0, cpvzero, cpv(234.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body192, body0, cpvzero, cpv(176.0, 174.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body193, body0, cpvzero, cpv(157.0, 273.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body194, body0, cpvzero, cpv(152.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body195, body0, cpvzero, cpv(562.0, 288.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body196, body0, cpvzero, cpv(627.0, 272.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body197, body0, cpvzero, cpv(652.0, 250.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body198, body0, cpvzero, cpv(459.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body199, body0, cpvzero, cpv(708.0, 235.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body200, body0, cpvzero, cpv(569.0, 141.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body201, body0, cpvzero, cpv(541.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body202, body0, cpvzero, cpv(586.0, 124.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg18)
}


const kineticArtLevel Level57 = {
	57,
	"Level 57",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

