
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level30;
extern kineticArtLevel Level32;
#define PREV_LEVEL &Level30
#define NEXT_LEVEL &Level32


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 90, total joints: 69 */
	//bg22
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(143, 1, 1.0, 85.083333, cpv(38.001079, 27.003729), cpv(0.014797, 0.040598), cpvzero, -0.563124, 0.686733, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(144, 2, 1.0, 85.083333, cpv(62.615641, 53.943052), cpv(8.639982, -20.171563), cpvzero, 3.778534, 2.030713, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(145, 3, 1.0, 85.083333, cpv(85.706750, 78.502532), cpv(1.247453, 1.559337), cpvzero, 4.655663, 0.063271, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(146, 4, 1.0, 85.083333, cpv(117.488047, 105.810120), cpv(6.435177, -17.187584), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(142, 5, 1.0, 85.083333, cpv(146.308637, 125.817093), cpv(0.698383, -24.012073), cpvzero, -23.665042, 1.946162, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(143, 6, 1.0, 85.083333, cpv(173.223454, 136.100609), cpv(-14.777305, -35.985633), cpvzero, 1.883495, 0.472935, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(144, 7, 1.0, 85.083333, cpv(200.682687, 139.872031), cpv(3.768240, -5.647917), cpvzero, 1.290576, -0.143374, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(145, 8, 1.0, 85.083333, cpv(233.648380, 139.004647), cpv(13.215665, -5.384956), cpvzero, -0.006164, 0.298168, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(146, 9, 1.0, 85.083333, cpv(263.400185, 125.475189), cpv(-9.284678, 1.324642), cpvzero, 7.195209, 1.097034, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(142, 10, 1.0, 85.083333, cpv(291.081653, 111.585350), cpv(24.308787, 12.304420), cpvzero, -12.977117, -2.389119, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(143, 11, 1.0, 85.083333, cpv(318.576332, 99.742999), cpv(9.483943, 48.691283), cpvzero, 4.799645, 1.749162, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(144, 12, 1.0, 85.083333, cpv(342.783918, 86.141127), cpv(12.579625, 1.312569), cpvzero, -14.511559, -3.654071, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(145, 13, 1.0, 85.083333, cpv(365.008155, 65.997998), cpv(-0.048932, 0.012011), cpvzero, 0.014391, 1.307623, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(146, 14, 1.0, 85.083333, cpv(381.234256, 87.026674), cpv(14.231536, 7.533288), cpvzero, -16.713973, -0.599992, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(142, 15, 1.0, 85.083333, cpv(399.637092, 113.316120), cpv(-19.549172, 6.888339), cpvzero, 23.809005, -2.506105, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(143, 16, 1.0, 85.083333, cpv(426.060295, 130.413014), cpv(12.243717, 1.117640), cpvzero, -5.322602, 0.260411, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(144, 17, 1.0, 85.083333, cpv(456.969268, 149.591432), cpv(-7.072284, -24.486046), cpvzero, -0.662554, -0.001035, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(145, 18, 1.0, 85.083333, cpv(487.492405, 167.472188), cpv(7.945233, 11.836133), cpvzero, -0.365998, 0.745226, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(146, 19, 1.0, 85.083333, cpv(522.643463, 170.871748), cpv(3.454329, 6.482203), cpvzero, 8.934439, -0.154691, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(142, 20, 1.0, 85.083333, cpv(553.054655, 161.612695), cpv(-13.345843, -7.607682), cpvzero, 3.686839, -0.966060, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(143, 21, 1.0, 85.083333, cpv(583.012717, 145.647946), cpv(1.582497, 5.714594), cpvzero, 4.988983, -2.247896, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(144, 22, 1.0, 85.083333, cpv(609.994831, 129.426982), cpv(22.232284, -5.335459), cpvzero, -1.092883, -2.405834, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(145, 23, 1.0, 85.083333, cpv(637.326801, 110.999346), cpv(0.842235, -39.179448), cpvzero, 14.563470, 2.984141, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(146, 24, 1.0, 85.083333, cpv(662.496643, 93.828115), cpv(40.745931, -21.861123), cpvzero, 2.699547, 1.614707, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(142, 25, 1.0, 85.083333, cpv(682.524787, 69.392733), cpv(-23.249741, -4.620180), cpvzero, 4.735306, 1.690559, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(143, 26, 1.0, 85.083333, cpv(707.375597, 47.951211), cpv(-10.814270, -17.012917), cpvzero, -1.547478, 0.970125, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(144, 27, 1.0, 85.083333, cpv(726.0, 28.0), cpv(-0.0, 0.0), cpvzero, -7.867997, 1.514559, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(134, 28, 1.0, 90.166667, cpv(714.418335, 90.616669), cpv(1.692448, 14.971062), cpvzero, -15.669477, -3.692198, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(135, 29, 1.0, 90.166667, cpv(709.498354, 119.810638), cpv(-4.750658, 13.431253), cpvzero, -6.131475, -1.376878, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(131, 30, 1.0, 90.166667, cpv(705.955379, 149.626524), cpv(-12.772951, -22.032377), cpvzero, 3.739018, 1.023246, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(132, 31, 1.0, 90.166667, cpv(700.853181, 176.514135), cpv(-22.418260, -32.958271), cpvzero, -5.170630, 0.062478, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(133, 32, 1.0, 90.166667, cpv(684.226516, 199.795218), cpv(5.623826, -8.494472), cpvzero, -0.414016, 0.174551, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(134, 33, 1.0, 90.166667, cpv(657.464579, 215.922014), cpv(2.937523, -13.121742), cpvzero, -0.413563, 0.202799, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(135, 34, 1.0, 90.166667, cpv(629.287757, 228.721810), cpv(0.350206, -18.929208), cpvzero, -0.417169, 0.208404, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(131, 35, 1.0, 90.166667, cpv(593.292966, 230.397721), cpv(-19.257130, 21.795363), cpvzero, 5.416324, 0.245214, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(132, 36, 1.0, 90.166667, cpv(566.001514, 230.960556), cpv(7.497917, 55.147565), cpvzero, -1.879952, 0.999857, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(133, 37, 1.0, 90.166667, cpv(540.056975, 231.859111), cpv(-17.557755, 32.834355), cpvzero, -2.127752, -0.587111, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(134, 38, 1.0, 90.166667, cpv(519.150261, 215.331490), cpv(-35.179598, 24.169025), cpvzero, -3.713460, 0.335736, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(135, 39, 1.0, 90.166667, cpv(494.080395, 210.009210), cpv(-14.931557, -1.446805), cpvzero, 3.012685, 0.451660, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(131, 40, 1.0, 90.166667, cpv(478.302153, 188.744436), cpv(14.763481, 10.788212), cpvzero, 0.777403, 0.145424, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(132, 41, 1.0, 90.166667, cpv(462.707473, 210.570117), cpv(0.268609, 23.740346), cpvzero, 6.942430, -1.209162, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(133, 42, 1.0, 90.166667, cpv(449.882724, 235.054850), cpv(-10.569057, 0.823126), cpvzero, 2.610208, 0.881078, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(134, 43, 1.0, 90.166667, cpv(431.748723, 259.014046), cpv(-16.687240, 11.179836), cpvzero, 1.293857, -1.942628, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(135, 44, 1.0, 90.166667, cpv(414.145550, 276.539459), cpv(-14.044417, 14.308146), cpvzero, 1.214826, 1.900193, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(131, 45, 1.0, 90.166667, cpv(386.804650, 270.581338), cpv(-20.107291, -7.372133), cpvzero, -7.854189, -0.046897, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(132, 46, 1.0, 90.166667, cpv(360.819187, 258.792538), cpv(-4.428535, 13.944834), cpvzero, 1.228207, -2.959040, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(133, 47, 1.0, 90.166667, cpv(331.481205, 262.600409), cpv(21.462077, 66.579351), cpvzero, -0.284038, 3.095628, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(134, 48, 1.0, 90.166667, cpv(305.897934, 252.976656), cpv(-16.818638, 28.673146), cpvzero, 14.110177, 1.854745, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(135, 49, 1.0, 90.166667, cpv(280.507247, 243.323117), cpv(10.459272, 48.441887), cpvzero, 0.047618, 2.235963, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(131, 50, 1.0, 90.166667, cpv(254.459636, 229.845236), cpv(12.608298, -1.345963), cpvzero, -1.120040, 2.089488, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(132, 51, 1.0, 90.166667, cpv(249.455574, 204.417589), cpv(18.518132, -22.471208), cpvzero, -9.859036, -2.913383, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(133, 52, 1.0, 90.166667, cpv(241.319835, 178.320413), cpv(17.107094, -32.732594), cpvzero, 4.321608, -0.001107, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(134, 53, 1.0, 90.166667, cpv(232.345111, 155.107282), cpv(17.457849, -5.620310), cpvzero, 0.110428, -1.487202, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(135, 54, 1.0, 90.166667, cpv(214.463015, 171.076224), cpv(3.931401, -22.890592), cpvzero, 0.696713, 0.074840, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(131, 55, 1.0, 90.166667, cpv(198.031616, 188.732948), cpv(-13.458420, -4.096977), cpvzero, -2.905009, -1.334056, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(132, 56, 1.0, 90.166667, cpv(181.507805, 208.982985), cpv(1.326207, -0.931881), cpvzero, -1.649303, -1.928703, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(133, 57, 1.0, 90.166667, cpv(150.343871, 214.067006), cpv(22.660203, -22.238304), cpvzero, 0.259933, -0.357022, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(134, 58, 1.0, 90.166667, cpv(120.824498, 204.604056), cpv(19.304938, -11.721995), cpvzero, 0.259811, -0.355124, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(135, 59, 1.0, 90.166667, cpv(99.675356, 188.893286), cpv(-3.370103, 16.317027), cpvzero, -0.671453, -1.229456, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(131, 60, 1.0, 90.166667, cpv(83.030145, 170.345238), cpv(-14.664667, -1.361028), cpvzero, -2.508619, -0.759867, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(132, 61, 1.0, 90.166667, cpv(71.932759, 147.255429), cpv(5.918109, -12.365691), cpvzero, -0.619631, -1.366700, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(133, 62, 1.0, 90.166667, cpv(64.496319, 121.290288), cpv(-7.736891, -13.444953), cpvzero, -1.385076, 1.675895, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(134, 63, 1.0, 90.166667, cpv(57.300405, 94.343916), cpv(-15.701674, 19.254886), cpvzero, 2.144429, -0.494520, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(135, 64, 1.0, 90.166667, cpv(47.602364, 68.600801), cpv(12.192130, -2.496337), cpvzero, 0.963602, -0.786433, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(120, 65, 1.0, 60.5, cpv(314.689539, 187.451432), cpv(0.0, 78.400004), cpvzero, -0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(121, 66, 1.0, 60.5, cpv(350.950781, 166.363564), cpv(0.0, 78.400004), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(120, 67, 1.0, 60.5, cpv(390.0, 180.706670), cpv(0.0, 78.400004), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(121, 68, 1.0, 60.5, cpv(426.0, 208.706670), cpv(0.0, 78.400004), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(120, 69, 1.0, 60.5, cpv(383.0, 217.706670), cpv(29.132363, 52.699530), cpvzero, 0.0, -0.910537, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(121, 70, 1.0, 60.5, cpv(358.0, 199.706670), cpv(0.0, 78.400004), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(120, 71, 1.0, 60.5, cpv(326.815655, 219.476906), cpv(25.204703, 20.636136), cpvzero, 0.095632, 1.511440, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(121, 72, 1.0, 60.5, cpv(304.911842, 222.201320), cpv(18.354113, -4.938285), cpvzero, -0.193287, -1.808056, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(120, 73, 1.0, 60.5, cpv(282.026281, 219.564464), cpv(-13.994256, 69.646486), cpvzero, -0.037328, -0.414167, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(121, 74, 1.0, 60.5, cpv(293.639026, 201.069293), cpv(0.337991, 77.048384), cpvzero, 0.005755, 0.060554, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(120, 75, 1.0, 60.5, cpv(335.924444, 182.075190), cpv(0.0, 78.400004), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(121, 76, 1.0, 60.5, cpv(351.097698, 144.464902), cpv(0.0, 78.400004), cpvzero, -0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(120, 77, 1.0, 60.5, cpv(370.337538, 156.178261), cpv(0.0, 78.400004), cpvzero, -0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(121, 78, 1.0, 60.5, cpv(383.0, 217.706670), cpv(29.475096, 52.397172), cpvzero, 0.0, -0.921249, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(120, 79, 1.0, 60.5, cpv(368.613079, 234.180640), cpv(-8.013242, 89.189492), cpvzero, 0.247093, 1.274090, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(121, 80, 1.0, 60.5, cpv(346.557968, 231.134836), cpv(39.128866, 24.707114), cpvzero, -0.286939, -1.911972, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(120, 81, 1.0, 60.5, cpv(609.0, 182.123334), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(121, 82, 1.0, 60.5, cpv(637.548801, 167.034600), cpv(-0.255767, 21.699967), cpvzero, -0.004169, -0.020973, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(120, 83, 1.0, 60.5, cpv(640.963523, 146.040462), cpv(-0.378832, 21.635101), cpvzero, 0.002566, 0.012703, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(121, 84, 1.0, 60.5, cpv(658.993386, 136.607336), cpv(8.109973, 31.877391), cpvzero, -0.109199, -0.545994, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(120, 85, 1.0, 60.5, cpv(672.0, 160.123334), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(120, 86, 1.0, 60.5, cpv(124.0, 170.123334), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(121, 87, 1.0, 60.5, cpv(145.784608, 189.415688), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(120, 88, 1.0, 60.5, cpv(149.215392, 168.830979), cpv(0.0, 21.233334), cpvzero, -0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(121, 89, 1.0, 60.5, cpv(119.0, 146.123334), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(120, 90, 1.0, 60.5, cpv(96.0, 134.123334), cpv(0.0, 21.233334), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(38.0, 27.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 33.970576, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 30.805844, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 38.910153, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 32.695565, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 28.160256, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 26.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 31.400637, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 29.966648, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 27.730849, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpvzero, cpvzero, 27.459060, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body12, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 26.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 28.071338, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 31.780497, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 34.539832, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 32.557641, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 27.018512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 30.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 27.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 28.460499, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body25, cpvzero, cpvzero, 28.284271, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 28.284271, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body27, cpvzero, cpvzero, 25.612497, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body28, cpvzero, cpvzero, 60.133186, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 27.313001, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 26.627054, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body33, cpvzero, cpvzero, 29.068884, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body34, cpvzero, cpvzero, 27.073973, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 35.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 27.166155, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 25.806976, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body39, cpvzero, cpvzero, 25.806976, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body40, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body41, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body42, cpvzero, cpvzero, 27.459060, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body43, cpvzero, cpvzero, 29.068884, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body44, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body45, cpvzero, cpvzero, 26.683328, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body46, cpvzero, cpvzero, 28.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body47, cpvzero, cpvzero, 28.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body48, cpvzero, cpvzero, 25.079872, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body49, cpvzero, cpvzero, 25.059928, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body50, cpvzero, cpvzero, 26.400758, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body51, cpvzero, cpvzero, 25.455844, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body52, cpvzero, cpvzero, 27.658633, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body53, cpvzero, cpvzero, 25.238859, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body54, cpvzero, cpvzero, 25.019992, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body55, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body56, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body57, cpvzero, cpvzero, 30.149627, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body58, cpvzero, cpvzero, 28.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body59, cpvzero, cpvzero, 26.0, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body60, cpvzero, cpvzero, 25.553865, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body61, cpvzero, cpvzero, 26.627054, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body62, cpvzero, cpvzero, 26.419690, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body63, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body64, cpvzero, cpvzero, 25.553865, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpvzero, cpv(726.0, 28.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body18, cpv(-2.0, -6.0), cpv(-4.0, 1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body53, cpv(-2.0, 1.0), cpv(0.0, -3.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body64, cpv(-1.0, -1.0), cpv(-3.0, -4.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body0, cpvzero, cpv(365.0, 66.0)));
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
	BGBLIT(rc_bg22)
}


const kineticArtLevel Level31 = {
	31,
	"Level 31",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

