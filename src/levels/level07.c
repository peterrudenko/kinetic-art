
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level06;
extern kineticArtLevel Level08;
#define PREV_LEVEL &Level06
#define NEXT_LEVEL &Level08


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 80, total joints: 91 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(117, 1, 1.0, 99.155539, cpv(68.000577, 54.992430), cpv(-0.001331, 0.039093), cpvzero, -1.354667, 9.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(116, 2, 1.0, 99.155539, cpv(55.282917, 92.774955), cpv(-19.588064, -6.685829), cpvzero, 1.459520, 6.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(117, 3, 1.0, 99.155539, cpv(52.274274, 129.838800), cpv(-5.303962, -5.551263), cpvzero, 26.278396, 3.310000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(116, 4, 1.0, 99.155539, cpv(63.992326, 166.055294), cpv(-22.129576, -0.285226), cpvzero, -87.535792, 7.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(117, 5, 1.0, 99.155539, cpv(49.793670, 204.563372), cpv(13.503320, 12.683819), cpvzero, 24.717762, -3.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(116, 6, 1.0, 99.155539, cpv(54.260606, 246.272111), cpv(25.646743, 11.261448), cpvzero, -75.451758, 8.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(117, 7, 1.0, 99.155539, cpv(30.505999, 278.327437), cpv(-14.624863, -19.371442), cpvzero, -160.073342, 8.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(116, 8, 1.0, 99.155539, cpv(179.996376, 44.959116), cpv(0.044519, 0.608753), cpvzero, 5.101105, 6.100000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(117, 9, 1.0, 99.155539, cpv(182.183595, 79.864852), cpv(-23.830268, 2.498705), cpvzero, 11.487730, 7.620000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(116, 10, 1.0, 99.155539, cpv(178.975952, 116.105733), cpv(-41.366669, 0.951291), cpvzero, -120.962137, 5.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(117, 11, 1.0, 99.155539, cpv(193.521782, 152.559838), cpv(14.404084, -22.230349), cpvzero, 51.790163, 4.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(116, 12, 1.0, 99.155539, cpv(192.492447, 191.632234), cpv(-6.833188, -22.941831), cpvzero, -86.849862, -6.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(117, 13, 1.0, 99.155539, cpv(207.814986, 228.789260), cpv(-15.446785, -19.770786), cpvzero, -27.169572, -8.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(116, 14, 1.0, 99.155539, cpv(192.316438, 260.458146), cpv(0.664777, -12.418196), cpvzero, 39.931796, -9.970000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(117, 15, 1.0, 99.155539, cpv(121.000565, 88.000376), cpv(-0.013440, 0.065607), cpvzero, 27.980267, 3.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(116, 16, 1.0, 99.155539, cpv(115.815196, 123.017742), cpv(5.402905, 0.858123), cpvzero, -47.991941, 6.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(117, 17, 1.0, 99.155539, cpv(123.781914, 160.273950), cpv(-39.372431, 10.278556), cpvzero, 37.591882, 1.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(116, 18, 1.0, 99.155539, cpv(116.223912, 196.572677), cpv(-34.273569, 11.252248), cpvzero, -35.709971, 2.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(117, 19, 1.0, 99.155539, cpv(125.283803, 232.771151), cpv(45.196105, -10.325847), cpvzero, 30.473374, 4.200000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(117, 20, 1.0, 99.155539, cpv(740.001988, 61.983862), cpv(-0.012123, -0.033181), cpvzero, -11.656360, -8.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(116, 21, 1.0, 99.155539, cpv(740.057768, 98.986891), cpv(38.455630, -0.466513), cpvzero, -11.064041, 7.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(117, 22, 1.0, 99.155539, cpv(741.216784, 134.976755), cpv(0.758836, 0.486257), cpvzero, 19.381901, 8.200000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(116, 23, 1.0, 99.155539, cpv(730.361929, 172.581472), cpv(-14.289081, -4.590768), cpvzero, -1.133883, -9.420000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(117, 24, 1.0, 99.155539, cpv(741.673200, 209.084747), cpv(26.261343, -17.912613), cpvzero, -0.549078, -4.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(116, 25, 1.0, 99.155539, cpv(747.394548, 244.723109), cpv(-23.620084, -10.316638), cpvzero, 19.149401, -5.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(117, 26, 1.0, 99.155539, cpv(744.159786, 288.634669), cpv(3.455103, -8.397244), cpvzero, -45.875002, 7.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(116, 27, 1.0, 99.155539, cpv(635.999419, 41.991188), cpv(0.001287, -0.317461), cpvzero, 5.423415, 1.700000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(117, 28, 1.0, 99.155539, cpv(636.213702, 78.039197), cpv(0.692373, -0.617408), cpvzero, 5.571712, -0.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(116, 29, 1.0, 99.155539, cpv(631.259906, 113.730130), cpv(-20.144068, -3.900984), cpvzero, -27.779807, -7.240000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(117, 30, 1.0, 99.155539, cpv(626.476554, 149.448781), cpv(-43.823271, -7.344159), cpvzero, 24.638378, -5.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(116, 31, 1.0, 99.155539, cpv(630.507394, 186.415318), cpv(14.963931, -14.782849), cpvzero, 19.169282, 9.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(117, 32, 1.0, 99.155539, cpv(621.413773, 221.273030), cpv(42.080419, -7.778852), cpvzero, 8.117871, 7.030000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(116, 33, 1.0, 99.155539, cpv(642.791114, 249.069148), cpv(23.983534, 5.901646), cpvzero, -8.434670, -4.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(117, 34, 1.0, 99.155539, cpv(689.034336, 94.066927), cpv(-0.473394, -1.358070), cpvzero, 9.707756, -9.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(116, 35, 1.0, 99.155539, cpv(698.758539, 128.854115), cpv(-21.013303, 3.524397), cpvzero, -30.684396, 5.460000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(117, 36, 1.0, 99.155539, cpv(694.278091, 167.594171), cpv(-25.560726, 2.701346), cpvzero, -19.723035, -6.980000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(116, 37, 1.0, 99.155539, cpv(691.191520, 203.617565), cpv(-7.528455, 4.020852), cpvzero, 29.934145, 8.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(117, 38, 1.0, 99.155539, cpv(690.873212, 241.649503), cpv(9.373563, 4.086567), cpvzero, -4.827667, 0.250000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(115, 39, 1.0, 99.155539, cpv(29.002291, 331.001502), cpv(0.047659, 0.030185), cpvzero, 0.454667, -8.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(114, 40, 1.0, 63.887283, cpv(60.365839, 351.020516), cpv(8.064364, -12.474760), cpvzero, 12.152001, -8.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(115, 41, 1.0, 99.155539, cpv(94.203852, 361.571487), cpv(4.295723, -0.277739), cpvzero, 24.841335, -5.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(114, 42, 1.0, 63.887283, cpv(130.969323, 366.222184), cpv(2.739299, 12.272273), cpvzero, 25.626668, -3.380000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(115, 43, 1.0, 99.155539, cpv(165.984385, 366.600067), cpv(2.804231, 9.615254), cpvzero, -22.072001, -9.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(114, 44, 1.0, 63.887283, cpv(200.814548, 358.787795), cpv(1.302654, 2.747727), cpvzero, -38.605335, -6.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(115, 45, 1.0, 99.155539, cpv(233.0, 343.0), cpv(-0.0, -0.0), cpvzero, 10.457334, 6.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(114, 46, 1.0, 63.887283, cpv(257.368703, 315.321748), cpv(0.043433, 0.093501), cpvzero, 27.445335, 3.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(115, 47, 1.0, 99.155539, cpv(257.853784, 279.814412), cpv(1.990588, 0.118869), cpvzero, 23.932001, 5.360000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(114, 48, 1.0, 63.887283, cpv(260.185585, 243.889881), cpv(-0.980690, -0.075253), cpvzero, -8.266667, 3.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(115, 49, 1.0, 99.155539, cpv(263.0, 208.0), cpvzero, cpvzero, 3.058667, 5.610000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(114, 50, 1.0, 63.887283, cpv(266.243590, 172.186617), cpv(19.500079, 5.414257), cpvzero, 3.802667, -9.990000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(115, 51, 1.0, 99.155539, cpv(266.589762, 137.124136), cpv(45.146918, 7.593893), cpvzero, -22.609335, 8.360000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(114, 52, 1.0, 63.887283, cpv(274.0, 102.0), cpv(0.0, -0.0), cpvzero, 28.602668, 1.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(115, 53, 1.0, 99.155539, cpv(299.0, 77.0), cpv(-0.0, 0.0), cpvzero, 38.977335, -1.320000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(114, 54, 1.0, 63.887283, cpv(330.037377, 59.105829), cpv(-0.851196, -3.664396), cpvzero, 38.068002, 0.620000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(115, 55, 1.0, 99.155539, cpv(365.0, 53.0), cpv(-0.0, 0.0), cpvzero, -27.114668, -3.630000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(114, 56, 1.0, 63.887283, cpv(400.101772, 52.209463), cpv(-1.775501, -19.693689), cpvzero, -21.782668, 3.010000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(115, 57, 1.0, 99.155539, cpv(435.0, 48.0), cpvzero, cpvzero, 26.908001, -8.730000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(114, 58, 1.0, 63.887283, cpv(469.972919, 47.096910), cpv(0.050998, 0.575881), cpvzero, 14.466667, 0.060000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(115, 59, 1.0, 99.155539, cpv(504.0, 60.0), cpvzero, cpvzero, 5.662667, -1.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(114, 60, 1.0, 63.887283, cpv(528.0, 86.0), cpv(-0.0, -0.0), cpvzero, -38.316002, 1.960000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(115, 61, 1.0, 99.155539, cpv(534.849623, 120.433271), cpv(-5.795644, 2.770302), cpvzero, -10.498667, 6.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(114, 62, 1.0, 63.887283, cpv(548.674612, 154.104926), cpv(5.836267, -1.278334), cpvzero, 21.038668, -6.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(115, 63, 1.0, 99.155539, cpv(552.0, 189.0), cpv(-0.0, 0.0), cpvzero, 24.180001, -8.520000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(114, 64, 1.0, 63.887283, cpv(552.323053, 226.006606), cpv(7.809146, -0.823667), cpvzero, -6.324000, -9.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(115, 65, 1.0, 99.155539, cpv(554.929708, 261.139415), cpv(-0.269607, -0.232722), cpvzero, 30.669335, -5.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(114, 66, 1.0, 63.887283, cpv(551.644873, 299.208740), cpv(0.306193, -0.185282), cpvzero, -35.174669, 8.710000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(115, 67, 1.0, 99.155539, cpv(570.0, 330.0), cpvzero, cpvzero, -36.373335, -7.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(114, 68, 1.0, 63.887283, cpv(599.623123, 349.048410), cpv(-2.930259, 4.395355), cpvzero, 14.797334, -9.450000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(115, 69, 1.0, 99.155539, cpv(633.748531, 360.925669), cpv(-1.790630, 1.019364), cpvzero, -14.673334, -1.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(114, 70, 1.0, 63.887283, cpv(669.753312, 363.216483), cpv(-0.163399, -27.683546), cpvzero, -26.949335, 8.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(115, 71, 1.0, 99.155539, cpv(705.764084, 362.887017), cpv(-0.095208, -5.396608), cpvzero, -27.156001, -9.560000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(114, 72, 1.0, 63.887283, cpv(739.998062, 353.459202), cpv(2.376483, 3.762894), cpvzero, 32.116002, -1.410000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(115, 73, 1.0, 99.155539, cpv(770.0, 335.0), cpv(0.0, -0.0), cpvzero, -12.317334, -9.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(118, 74, 1.0, 99.155539, cpv(352.0, 130.0), cpvzero, cpvzero, -0.878462, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(118, 75, 1.0, 99.155539, cpv(459.0, 126.0), cpvzero, cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(118, 76, 1.0, 99.155539, cpv(409.0, 232.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(119, 77, 1.0, inf, cpv(408.0, 168.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(112, 78, 1.0, 63.887283, cpv(440.0, 181.0), cpvzero, cpvzero, 2.117585, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(112, 79, 1.0, 63.887283, cpv(408.0, 132.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(112, 80, 1.0, 63.887283, cpv(379.0, 182.0), cpvzero, cpvzero, -2.226492, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(68.0, 55.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body8, cpv(180.0, 45.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body13, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body15, cpv(121.0, 88.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body20, cpv(740.0, 62.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body24, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body25, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body27, cpv(636.0, 42.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body28, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body30, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body31, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body32, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body34, cpv(689.0, 94.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body34, body35, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body36, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body39, cpv(29.0, 331.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body40, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body44, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body45, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body45, body46, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body46, body47, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body47, body48, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body49, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body49, body50, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body50, body51, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body52, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body53, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body54, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body55, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body55, body56, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body56, body57, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body58, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body59, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body60, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body61, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body61, body62, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body62, body63, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body63, body64, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body64, body65, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body65, body66, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body66, body67, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body68, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body68, body69, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body69, body70, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body70, body71, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body71, body72, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body72, body73, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body73, body0, cpvzero, cpv(770.0, 335.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body67, body0, cpvzero, cpv(570.0, 330.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body45, body0, cpvzero, cpv(233.0, 343.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body63, body0, cpvzero, cpv(552.0, 189.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body0, cpvzero, cpv(263.0, 208.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body60, body0, cpvzero, cpv(528.0, 86.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body52, body0, cpvzero, cpv(274.0, 102.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body53, body0, cpvzero, cpv(299.0, 77.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body59, body0, cpvzero, cpv(504.0, 60.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body57, body0, cpvzero, cpv(435.0, 48.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body55, body0, cpvzero, cpv(365.0, 53.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body75, body77, cpv(-0.0, 21.0), cpv(36.150758, -27.150758)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body74, body77, cpv(-0.0, 20.0), cpv(-40.604841, -25.233283)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body76, body77, cpv(1.0, 22.0), cpv(0.0, 42.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body77, body0, cpvzero, cpv(408.0, 168.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body78, body77, cpv(-1.0, 15.0), cpv(19.706969, 4.346597)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body79, body77, cpv(0.0, 14.0), cpv(0.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body80, body77, cpv(-1.0, 15.0), cpv(-16.500929, 5.646963)));
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


const kineticArtLevel Level07 = {
	7,
	"Level 7",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

