
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level65;
extern kineticArtLevel Level67;
#define PREV_LEVEL &Level65
#define NEXT_LEVEL &Level67


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 68, total joints: 68 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(184, 1, 1.0, inf, cpv(43.620689, 199.114562), cpv(16.0, 52.0), cpvzero, -2.181522, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(185, 2, 1.0, inf, cpv(57.765423, 233.403541), cpv(23.0, -73.0), cpvzero, -2.480549, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(183, 3, 1.0, inf, cpv(77.415365, 257.736179), cpv(29.0, -59.0), cpvzero, 0.269849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(184, 4, 1.0, inf, cpv(107.225647, 279.892592), cpv(29.0, -5.0), cpvzero, 0.214061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(185, 5, 1.0, inf, cpv(140.862016, 297.293555), cpv(21.0, 65.0), cpvzero, 0.170735, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(183, 6, 1.0, inf, cpv(173.266352, 307.584903), cpv(24.0, -44.0), cpvzero, -0.266252, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(184, 7, 1.0, inf, cpv(205.833660, 308.248615), cpv(28.0, 72.0), cpvzero, -0.294235, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(185, 8, 1.0, inf, cpv(245.601987, 309.806118), cpv(27.0, 6.0), cpvzero, -0.434670, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(183, 9, 1.0, inf, cpv(277.666681, 301.012193), cpv(24.0, 20.0), cpvzero, -0.755104, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(184, 10, 1.0, inf, cpv(313.136011, 285.433640), cpv(28.0, 73.0), cpvzero, 2.235899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(185, 11, 1.0, inf, cpv(343.265979, 267.083803), cpv(19.0, 32.0), cpvzero, 2.089942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(183, 12, 1.0, inf, cpv(368.537927, 239.636308), cpv(16.0, 70.0), cpvzero, 1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(184, 13, 1.0, inf, cpv(390.484434, 212.904984), cpv(22.0, 46.0), cpvzero, 1.683947, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(185, 14, 1.0, inf, cpv(412.353676, 185.754736), cpv(20.0, -72.0), cpvzero, 1.811914, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(183, 15, 1.0, inf, cpv(442.546246, 166.498881), cpv(18.0, 48.0), cpvzero, 1.886767, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(184, 16, 1.0, inf, cpv(471.291277, 143.768348), cpv(26.0, -18.0), cpvzero, 1.869295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(185, 17, 1.0, inf, cpv(496.725559, 126.841150), cpv(25.0, -43.0), cpvzero, -0.890275, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(183, 18, 1.0, inf, cpv(525.415661, 112.427198), cpv(22.0, -45.0), cpvzero, -0.732815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(184, 19, 1.0, inf, cpv(557.135075, 101.620927), cpv(15.0, -52.0), cpvzero, -0.661043, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(185, 20, 1.0, inf, cpv(588.117759, 97.420736), cpv(24.0, 2.0), cpvzero, -0.444419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(183, 21, 1.0, inf, cpv(622.029381, 98.232439), cpv(18.0, -48.0), cpvzero, -0.086738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(184, 22, 1.0, inf, cpv(651.353362, 113.302950), cpv(24.0, -61.0), cpvzero, 0.432408, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(185, 23, 1.0, inf, cpv(664.204909, 137.186505), cpv(28.0, 27.0), cpvzero, -2.429235, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(183, 24, 1.0, inf, cpv(669.984057, 168.008810), cpv(19.0, -28.0), cpvzero, -1.989021, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(184, 25, 1.0, inf, cpv(660.038595, 195.994043), cpv(23.0, -17.0), cpvzero, -1.876675, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(185, 26, 1.0, inf, cpv(643.668017, 221.408495), cpv(18.0, 30.0), cpvzero, 1.797595, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(177, 27, 1.0, inf, cpv(578.196322, 284.614321), cpv(17.0, 58.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(173, 28, 1.0, inf, cpv(577.894768, 254.970591), cpv(19.0, -42.0), cpvzero, 0.076772, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(172, 29, 1.0, inf, cpv(555.423484, 267.683906), cpv(20.0, -6.0), cpvzero, -0.902507, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(172, 30, 1.0, inf, cpv(580.010817, 307.413022), cpv(24.0, 1.0), cpvzero, 3.080444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(173, 31, 1.0, inf, cpv(555.215371, 301.626151), cpv(16.0, 5.0), cpvzero, -2.182949, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(172, 32, 1.0, inf, cpv(602.986591, 266.458426), cpv(23.0, -66.0), cpvzero, 0.974597, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(173, 33, 1.0, inf, cpv(610.899770, 294.929794), cpv(22.0, 4.0), cpvzero, 1.826605, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(170, 34, 1.0, inf, cpv(551.043845, 235.542086), cpv(22.0, -23.0), cpvzero, -0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(171, 35, 1.0, inf, cpv(529.990734, 282.381171), cpv(20.0, -39.0), cpvzero, -1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(170, 36, 1.0, inf, cpv(562.704007, 330.347947), cpv(28.0, 27.0), cpvzero, -2.756729, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(171, 37, 1.0, inf, cpv(610.894026, 319.489309), cpv(24.0, 14.0), cpvzero, 2.382504, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(170, 38, 1.0, inf, cpv(628.294637, 275.547425), cpv(15.0, 1.0), cpvzero, 1.504228, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(171, 39, 1.0, inf, cpv(604.664435, 236.752588), cpv(23.0, -21.0), cpvzero, 0.420197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(174, 40, 1.0, inf, cpv(578.631443, 223.160134), cpv(21.0, 19.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(174, 41, 1.0, inf, cpv(530.931127, 252.896736), cpv(25.0, 8.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(174, 42, 1.0, inf, cpv(529.997205, 315.956447), cpv(24.0, -9.0), cpvzero, -2.221873, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(174, 43, 1.0, inf, cpv(593.113883, 336.868864), cpv(25.0, 24.0), cpvzero, 2.896614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(174, 44, 1.0, inf, cpv(633.904631, 305.308084), cpv(17.0, -5.0), cpvzero, 2.070143, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(174, 45, 1.0, inf, cpv(628.521712, 251.796027), cpv(29.0, -10.0), cpvzero, 0.942000, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(107, 46, 1.0, inf, cpv(499.086651, 297.377889), cpv(18.0, 33.0), cpvzero, -0.685730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(105, 47, 1.0, inf, cpv(527.460315, 209.660234), cpv(19.0, -7.0), cpvzero, 0.488334, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(106, 48, 1.0, inf, cpv(138.811309, 272.470426), cpv(29.0, 66.0), cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(107, 49, 1.0, inf, cpv(615.098738, 204.014055), cpv(18.0, 65.0), cpvzero, 1.604117, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(107, 50, 1.0, inf, cpv(641.578230, 333.052011), cpv(21.0, 18.0), cpvzero, 3.098142, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(105, 51, 1.0, inf, cpv(560.760460, 364.844256), cpv(20.0, 24.0), cpvzero, -2.062606, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(105, 52, 1.0, inf, cpv(661.573669, 263.043895), cpv(29.0, 29.0), cpvzero, 2.312744, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(101, 53, 1.0, inf, cpv(501.098681, 250.048039), cpv(27.0, -29.0), cpvzero, -1.541393, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(102, 54, 1.0, inf, cpv(568.427908, 190.798935), cpv(27.0, -72.0), cpvzero, -0.621660, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(102, 55, 1.0, inf, cpv(519.662750, 352.866335), cpv(23.0, -51.0), cpvzero, -3.004526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(101, 56, 1.0, inf, cpv(671.379268, 298.576694), cpv(19.0, -32.0), cpvzero, 1.296348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(101, 57, 1.0, inf, cpv(611.719438, 363.920883), cpv(26.0, -3.0), cpvzero, 2.143256, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(90, 58, 1.0, inf, cpv(241.861118, 279.249020), cpv(27.0, -45.0), cpvzero, 2.137526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(90, 59, 1.0, inf, cpv(474.228709, 96.634315), cpv(17.0, 46.0), cpvzero, 1.785612, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(90, 60, 1.0, inf, cpv(417.921334, 231.331197), cpv(23.0, 0.0), cpvzero, -3.117788, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(89, 61, 1.0, inf, cpv(620.627163, 159.276542), cpv(29.0, -21.0), cpvzero, 1.051650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(89, 62, 1.0, inf, cpv(457.091633, 292.449576), cpv(27.0, 51.0), cpvzero, -0.628796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(89, 63, 1.0, inf, cpv(671.927492, 365.000244), cpv(19.0, -17.0), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(91, 64, 1.0, inf, cpv(506.251394, 179.844093), cpv(27.0, 12.0), cpvzero, 0.337878, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(91, 65, 1.0, inf, cpv(564.057111, 407.593374), cpv(25.0, 18.0), cpvzero, -2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(91, 66, 1.0, inf, cpv(700.599884, 244.122289), cpv(20.0, -6.0), cpvzero, 1.998745, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(182, 67, 1.0, inf, cpv(584.764699, 70.848315), cpv(17.0, 74.0), cpvzero, 2.143762, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(182, 68, 1.0, inf, cpv(356.129378, 289.350668), cpv(24.0, -43.0), cpvzero, -3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(51.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(62.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(83.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(111.0, 270.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(148.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(179.0, 299.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(213.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(251.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(284.0, 293.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(319.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(348.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(374.0, 231.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(397.0, 205.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(418.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(441.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(467.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(493.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(524.0, 102.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(561.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(592.0, 88.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(624.0, 88.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(650.0, 103.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(669.0, 128.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(673.0, 158.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(665.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(648.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body0, cpvzero, cpv(582.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(583.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(559.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body0, cpvzero, cpv(588.0, 301.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(559.0, 292.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(607.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(614.0, 285.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(559.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(538.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(567.0, 321.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(615.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(636.0, 269.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(610.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(585.0, 215.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(536.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(535.0, 307.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(596.0, 327.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(640.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(632.0, 242.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(505.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(533.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(140.0, 262.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(618.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(648.0, 325.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(566.0, 356.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(668.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(506.0, 241.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(572.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(525.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(677.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(617.0, 355.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(248.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(478.0, 87.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(424.0, 223.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(625.0, 150.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(465.0, 286.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(677.0, 356.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(513.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(568.0, 398.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(708.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(590.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(364.0, 283.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg03)
}


const kineticArtLevel Level66 = {
	66,
	"Level 66",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

