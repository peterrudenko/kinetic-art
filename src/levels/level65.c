
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level64;
extern kineticArtLevel Level66;
#define PREV_LEVEL &Level64
#define NEXT_LEVEL &Level66


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

{  /* Total bodies: 66, total joints: 73 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(182, 1, 1.0, 88.659334, cpv(334.253982, 165.198338), cpv(-0.089906, -0.172928), cpvzero, -1.395977, 0.035194, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(182, 2, 1.0, 88.659334, cpv(354.744652, 63.896854), cpv(-0.525944, -1.056408), cpvzero, -0.662674, 0.087283, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(182, 3, 1.0, 88.659334, cpv(355.590591, 206.815692), cpv(0.876472, 0.255101), cpvzero, -1.406671, -0.030171, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(182, 4, 1.0, 88.659334, cpv(357.332490, 117.989167), cpv(0.688194, -0.416569), cpvzero, -1.647298, 0.147169, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(182, 5, 1.0, 88.659334, cpv(644.738488, 120.222320), cpv(0.140486, -0.530812), cpvzero, 1.838118, 0.016635, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(182, 6, 1.0, 88.659334, cpv(131.887430, 186.049517), cpv(-0.427918, -0.798849), cpvzero, -1.184448, 0.084292, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(182, 7, 1.0, 88.659334, cpv(363.337092, 154.716358), cpv(0.145989, 0.206281), cpvzero, -2.403478, 0.011095, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(182, 8, 1.0, 88.659334, cpv(382.088152, 199.170090), cpv(0.596942, -0.604159), cpvzero, 0.697197, -0.043768, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(182, 9, 1.0, 88.659334, cpv(383.100739, 78.212372), cpv(0.465215, -0.238948), cpvzero, -1.655970, -0.012449, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(182, 10, 1.0, 88.659334, cpv(700.989570, 149.910566), cpv(-4.619834, 1.148255), cpvzero, -1.703856, 0.011373, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(182, 11, 1.0, 88.659334, cpv(329.128923, 105.289431), cpv(-0.352188, 0.316468), cpvzero, -0.467480, -0.026640, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(182, 12, 1.0, 88.659334, cpv(671.689114, 111.507620), cpv(0.492587, 0.226114), cpvzero, 0.135167, 0.004194, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(182, 13, 1.0, 88.659334, cpv(761.631180, 80.811143), cpv(0.412922, 0.145840), cpvzero, -1.615329, -0.024107, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(182, 14, 1.0, 88.659334, cpv(736.875069, 65.274114), cpv(0.273013, 0.136405), cpvzero, -0.689488, -0.022661, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(182, 15, 1.0, 88.659334, cpv(705.359336, 101.407213), cpv(-0.097715, 0.030051), cpvzero, -0.480293, 0.008260, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(182, 16, 1.0, 88.659334, cpv(731.282086, 121.858253), cpv(-2.367854, -0.286483), cpvzero, -1.455007, 0.084384, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(182, 17, 1.0, 88.659334, cpv(176.788638, 270.268913), cpv(-16.854894, 0.987839), cpvzero, 4.946050, 0.194546, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(182, 18, 1.0, 88.659334, cpv(97.055023, 47.471518), cpv(-0.409328, 0.475772), cpvzero, 3.486161, 0.019663, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(182, 19, 1.0, 88.659334, cpv(104.529973, 101.369857), cpv(-1.291969, -0.200389), cpvzero, -1.320183, 0.036896, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(182, 20, 1.0, 88.659334, cpv(126.024584, 132.122274), cpv(0.497873, -0.024161), cpvzero, -1.069314, -0.009970, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(182, 21, 1.0, 88.659334, cpv(154.058015, 130.079121), cpv(0.419578, -0.571249), cpvzero, -2.110549, -0.033494, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(182, 22, 1.0, 88.659334, cpv(158.943719, 177.719095), cpv(-0.170172, 0.354634), cpvzero, -2.214597, 0.022575, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(182, 23, 1.0, 88.659334, cpv(162.466180, 263.330590), cpv(-18.044767, -10.433324), cpvzero, -1.100162, 1.132327, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(182, 24, 1.0, 88.659334, cpv(137.910352, 71.782770), cpv(-0.275906, 0.284582), cpvzero, -3.118254, 0.027599, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(182, 25, 1.0, 88.659334, cpv(76.599532, 62.413519), cpv(-4.675228, -0.019897), cpvzero, -1.969305, 0.326851, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(186, 26, 1.0, inf, cpv(51.999898, 33.999504), cpv(-0.003833, -0.010386), cpvzero, -3.017238, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(186, 27, 1.0, inf, cpv(96.656117, 64.253470), cpv(-0.549000, 0.430484), cpvzero, -2.525973, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(186, 28, 1.0, 88.659334, cpv(132.000391, 92.001279), cpv(0.002915, -0.015267), cpvzero, -2.045641, -0.034657, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(186, 29, 1.0, 88.659334, cpv(141.157343, 140.938782), cpv(0.674170, -0.191570), cpvzero, -1.673081, -0.019157, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(186, 30, 1.0, 88.659334, cpv(148.303013, 191.617799), cpv(-0.456364, 0.093758), cpvzero, -1.718133, 0.022026, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(186, 31, 1.0, inf, cpv(169.179505, 229.747494), cpv(-0.485283, -0.110183), cpvzero, -2.611377, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(186, 32, 1.0, inf, cpv(395.000176, 43.999658), cpv(-0.001439, 0.004591), cpvzero, -0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(184, 33, 1.0, inf, cpv(205.015869, 237.943685), cpv(-0.099380, 0.210712), cpvzero, 0.628686, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(184, 34, 1.0, 88.659334, cpv(210.483281, 273.543329), cpv(-6.899458, -2.233545), cpvzero, -1.367238, 0.205194, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(186, 35, 1.0, 88.659334, cpv(230.021044, 259.427725), cpv(4.739287, -4.337415), cpvzero, 4.187617, -0.519627, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(186, 36, 1.0, 88.659334, cpv(197.325437, 261.869297), cpv(-6.570298, -7.787987), cpvzero, -0.768623, 0.580352, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(186, 37, 1.0, 88.659334, cpv(190.771456, 285.858676), cpv(-12.682852, -11.039923), cpvzero, -0.867007, 0.200186, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(186, 38, 1.0, 88.659334, cpv(215.545513, 299.184382), cpv(-20.022926, -7.359739), cpvzero, 4.911359, 1.194513, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(186, 39, 1.0, inf, cpv(364.766028, 76.687420), cpv(-0.704785, -0.303626), cpvzero, -0.962107, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(186, 40, 1.0, 88.659334, cpv(341.999793, 121.999570), cpv(0.005820, 0.007360), cpvzero, -1.566198, -0.021171, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(186, 41, 1.0, inf, cpv(352.183928, 166.516778), cpv(0.120720, 0.109978), cpvzero, -2.067219, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(184, 42, 1.0, 88.659334, cpv(372.308924, 212.514425), cpv(1.042713, -0.234154), cpvzero, -1.978566, -0.029480, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(184, 43, 1.0, 88.659334, cpv(576.999179, 152.000955), cpv(-0.010772, 0.004097), cpvzero, -0.527562, -0.002737, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(183, 44, 1.0, 88.659334, cpv(386.714576, 246.784901), cpv(1.684348, -0.464253), cpvzero, -2.062819, -0.006185, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(185, 45, 1.0, 88.659334, cpv(411.603377, 258.584337), cpv(1.749967, -0.598937), cpvzero, -2.568158, -0.005055, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(185, 46, 1.0, 88.659334, cpv(380.800418, 271.420324), cpv(1.816791, -0.429468), cpvzero, -1.567009, -0.005370, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(186, 47, 1.0, 88.659334, cpv(368.804492, 253.636067), cpv(1.774178, -0.384848), cpvzero, -1.326109, -0.000231, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(186, 48, 1.0, 88.659334, cpv(397.507566, 233.724913), cpv(1.604917, -0.523565), cpvzero, -2.557645, -0.005166, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(196, 49, 1.0, 70.876156, cpv(401.857250, 272.878691), cpv(1.822409, -0.545590), cpvzero, 2.812616, -0.005434, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(186, 50, 1.0, 88.659334, cpv(767.999960, 34.999995), cpv(0.001596, -0.002547), cpvzero, -1.189044, -0.007199, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(186, 51, 1.0, 88.659334, cpv(743.372907, 80.719686), cpv(0.183961, 0.038724), cpvzero, -0.950487, 0.018165, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(186, 52, 1.0, 88.659334, cpv(711.727470, 114.289506), cpv(0.113194, 0.187479), cpvzero, -0.496113, -0.023103, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(186, 53, 1.0, 88.659334, cpv(664.998600, 127.999549), cpv(0.000788, -0.001174), cpvzero, -0.378823, 0.048086, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(186, 54, 1.0, 88.659334, cpv(621.745074, 141.429240), cpv(-0.083258, -0.289524), cpvzero, -0.127074, -0.019369, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(183, 55, 1.0, 88.659334, cpv(562.757680, 186.315321), cpv(1.901665, 0.012969), cpvzero, -1.625294, -0.041659, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(182, 56, 1.0, 88.659334, cpv(640.670908, 156.258828), cpv(-9.833851, -4.396418), cpvzero, -1.138431, 0.290266, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(186, 57, 1.0, 88.659334, cpv(595.123606, 167.438873), cpv(3.424699, 1.938836), cpvzero, -1.262586, -0.102736, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(186, 58, 1.0, 88.659334, cpv(612.403100, 168.783717), cpv(4.310802, -0.866497), cpvzero, -1.741213, -0.224948, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(193, 59, 1.0, 70.876156, cpv(566.085382, 222.590043), cpv(-1.676450, 0.410245), cpvzero, 3.010696, 0.084415, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(181, 60, 1.0, 88.659334, cpv(547.353987, 219.145966), cpv(-0.672489, -1.472410), cpvzero, -1.041723, 0.174184, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(181, 61, 1.0, 88.659334, cpv(582.692345, 212.841461), cpv(-0.375019, 1.847493), cpvzero, -2.275961, 0.130438, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(184, 62, 1.0, 88.659334, cpv(547.004861, 178.518399), cpv(1.546013, 0.707132), cpvzero, -1.022087, -0.044425, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(184, 63, 1.0, 88.659334, cpv(578.831890, 181.582035), cpv(2.069257, -1.824810), cpvzero, -2.026883, -0.165798, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(182, 64, 1.0, 88.659334, cpv(147.851248, 240.271052), cpv(-3.900664, 0.455407), cpvzero, -1.477413, 0.333000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(182, 65, 1.0, 88.659334, cpv(175.198743, 216.059151), cpv(-0.891225, 0.159247), cpvzero, 0.655958, -0.036895, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(195, 66, 1.0, 70.876156, cpv(197.548627, 305.823676), cpv(-14.026330, -10.166664), cpvzero, -2.563879, 0.006725, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body0, cpv(-0.0, 0.0), cpv(52.0, 34.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body32, body0, cpvzero, cpv(395.0, 44.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body50, body0, cpvzero, cpv(768.0, 35.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body0, cpv(-0.0, 0.0), cpv(132.0, 92.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body0, cpvzero, cpv(205.0, 238.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body0, cpvzero, cpv(342.0, 122.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body53, body0, cpvzero, cpv(665.0, 128.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body43, body0, cpvzero, cpv(577.0, 152.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body27, cpv(-16.124515, -0.0), cpv(17.204466, 0.079650)));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body28, cpv(-15.571635, -1.234580), cpv(18.732192, -1.450858)));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body29, cpv(-15.443580, -1.579823), cpv(14.559306, -0.163129)));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body30, cpv(-18.005416, -0.897212), cpv(14.794673, -1.455214)));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body31, cpv(-14.067066, -1.455214), cpv(17.640686, 2.409605)));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body33, cpv(-18.354643, 0.327230), cpv(-17.0, -1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body33, body34, cpv(18.0, 0.0), cpv(16.333621, 2.685673)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body26, cpv(17.237693, 2.803913), cpv(-15.008203, 0.868243), 15.132746, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpv(17.705101, -0.727607), cpv(-15.008203, 0.868243), 10.630146, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body27, cpv(18.055125, 1.418617), cpv(-15.810586, 0.159301), 10.049876, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body27, cpv(18.406316, -1.098885), cpv(-15.810586, 0.159301), 9.219544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body28, cpv(19.414507, -0.277350), cpv(-14.863237, -0.290172), 8.944272, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body28, cpv(16.858232, -2.408319), cpv(-14.863237, -0.290172), 11.704700, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body29, cpv(17.691277, 0.136788), cpv(-15.517692, 0.448606), 8.062258, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body29, cpv(17.753129, -1.351449), cpv(-15.517692, 0.448606), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body30, cpv(-17.0, -1.0), cpv(-11.156639, -0.727607), 13.152946, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body30, cpv(17.419260, -1.252755), cpv(-11.156639, -0.727607), 19.104973, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body31, cpv(15.556349, 1.414214), cpv(-14.755110, 0.535468), 17.888544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body31, cpv(17.719513, -0.137361), cpv(-14.755110, 0.535468), 15.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body33, cpv(16.079802, 1.562038), cpv(3.0, -7.0), 14.212670, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body33, cpv(12.163563, 0.218507), cpv(4.0, 4.0), 10.770330, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body34, cpv(16.492423, 0.0), cpv(8.901570, 5.810512), 15.264338, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body34, cpv(17.021436, 0.520306), cpv(12.364230, -0.354712), 13.601471, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body32, cpv(17.452106, -1.193306), cpv(-16.994117, -1.788854)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body39, cpv(13.230769, 9.846154), cpv(-16.954895, -1.591075)));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body40, cpv(18.355220, -0.293097), cpv(-16.200947, -1.590384)));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body41, cpv(13.824531, 9.943961), cpv(-13.885486, 0.439646)));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body42, cpv(14.945970, -1.271997), cpv(-14.826238, 1.087499)));
	cpSpaceAddConstraint(space, cpPinJointNew(body49, body44, cpv(2.565578, 8.855383), cpv(-14.733971, -0.953998)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body32, cpv(16.117546, -0.474045), cpv(-14.310835, -2.683282), 14.035669, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body32, cpv(16.276672, -0.264466), cpv(-14.310835, -2.683282), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body39, cpv(16.538462, -0.692308), cpv(-14.170514, -1.093864), 14.142136, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body39, cpv(16.992759, 0.496139), cpv(-14.170514, -1.093864), 12.369317, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body40, cpv(17.455303, -0.558914), cpv(-14.208597, -1.765152), 11.180340, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body40, cpv(17.204651, -0.0), cpv(-14.208597, -1.765152), 11.704700, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body41, cpv(16.492423, 0.0), cpv(-14.764778, -0.036637), 10.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body41, cpv(-18.095470, -0.744287), cpv(-14.764778, -0.036637), 11.401754, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body42, cpv(16.552118, 0.165521), cpv(-9.243743, -1.884999), 9.219544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body42, cpv(16.272630, 0.448900), cpv(-9.243743, -1.884999), 15.297059, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body44, cpv(13.0, 1.0), cpv(5.723989, -3.497993), 13.928388, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body44, cpv(12.996287, 0.310668), cpv(4.875990, 5.405989), 15.524175, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body39, cpv(14.942621, -1.310756), cpv(-17.203501, -0.198884)));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body41, cpv(17.689986, 0.253750), cpv(-15.241061, 0.842655)));
	cpSpaceAddConstraint(space, cpPinJointNew(body51, body50, cpv(18.015661, -0.660260), cpv(-17.441330, -0.894427)));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body51, cpv(14.764789, -0.031481), cpv(-18.015661, 0.660260)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body52, cpv(14.846307, -0.766261), cpv(-17.881451, -0.503703)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body53, cpv(16.0, -2.0), cpv(-18.390265, -1.340957)));
	cpSpaceAddConstraint(space, cpPinJointNew(body43, body54, cpv(17.171966, -1.059998), cpv(-18.0, 0.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body55, body43, cpv(16.030991, 0.085575), cpv(-16.959966, -1.165998)));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body55, cpv(0.394369, 10.432855), cpv(-14.034248, -0.199674)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body50, cpv(16.552555, -0.113633), cpv(-13.505851, -1.609969), 13.601471, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body50, cpv(18.004027, 0.924678), cpv(-13.505851, -1.609969), 14.866069, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body51, cpv(18.072249, -1.180599), cpv(-19.411639, 0.433885), 6.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body51, cpv(16.263456, 0.707107), cpv(-19.411639, 0.433885), 11.661904, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body52, cpv(18.022263, -0.444994), cpv(-16.527749, -0.912961), 9.899495, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body52, cpv(17.171966, 1.059998), cpv(-16.527749, -0.912961), 10.816654, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body53, cpv(14.995392, 0.371787), cpv(-17.432438, -1.053609), 8.485281, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body53, cpv(16.949926, -1.303840), cpv(-17.432438, -1.053609), 6.082763, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body54, cpv(15.556349, 0.0), cpv(-17.0, 0.0), 9.219544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body54, cpv(17.975121, -0.946059), cpv(-17.0, 0.0), 7.280110, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body43, cpv(16.277083, -0.237870), cpv(-16.429967, -2.013996), 8.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body43, cpv(17.788298, -0.759257), cpv(-16.429967, -2.013996), 10.295630, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body55, cpv(16.943738, -1.381936), cpv(-4.221684, -3.765286), 13.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body55, cpv(16.398245, 0.312348), cpv(-2.766915, 4.164635), 11.661904, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body66, cpv(-14.041782, -0.643714), cpv(0.824163, 10.164682), 8.944272, 100.0, 3.0));
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


const kineticArtLevel Level65 = {
	65,
	"Level 65",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

