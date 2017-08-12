
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level38;
extern kineticArtLevel Level40;
#define PREV_LEVEL &Level38
#define NEXT_LEVEL &Level40


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 62, total joints: 90 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(198, 1, 3.0, 70.876156, cpv(72.0, 343.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(198, 2, 3.0, 70.876156, cpv(252.0, 313.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(198, 3, 3.0, 70.876156, cpv(448.0, 326.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(198, 4, 3.0, 70.876156, cpv(639.0, 356.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(194, 5, 3.0, 70.876156, cpv(559.0, 252.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(194, 6, 3.0, 70.876156, cpv(360.0, 245.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(194, 7, 3.0, 70.876156, cpv(150.0, 270.0), cpvzero, cpvzero, 0.064844, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(194, 8, 3.0, 70.876156, cpv(746.0, 251.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(193, 9, 1.0, 70.876156, cpv(125.0, 120.0), cpvzero, cpvzero, -1.418147, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(193, 10, 1.0, 70.876156, cpv(743.0, 120.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(193, 11, 1.0, 70.876156, cpv(172.0, 106.0), cpvzero, cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(196, 12, 1.0, 70.876156, cpv(357.0, 88.0), cpvzero, cpvzero, 0.150371, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(196, 13, 1.0, 70.876156, cpv(554.0, 91.0), cpvzero, cpvzero, -0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(196, 14, 1.0, 70.876156, cpv(594.0, 109.0), cpvzero, cpvzero, 1.657535, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(197, 15, 1.0, 70.876156, cpv(141.0, 93.0), cpvzero, cpvzero, -0.236245, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(197, 16, 1.0, 70.876156, cpv(580.0, 85.0), cpvzero, cpvzero, 0.392340, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(195, 17, 1.0, 70.876156, cpv(327.0, 103.0), cpvzero, cpvzero, -1.136126, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(188, 18, 1.0, 47.856161, cpv(351.0, 114.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(187, 19, 1.0, 47.856161, cpv(465.0, 223.0), cpvzero, cpvzero, 1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(189, 20, 1.0, 47.856161, cpv(569.0, 108.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(190, 21, 1.0, 47.856161, cpv(720.0, 122.0), cpvzero, cpvzero, -1.012197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(191, 22, 1.0, 47.856161, cpv(81.0, 202.0), cpvzero, cpvzero, -3.048116, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(192, 23, 1.0, 47.856161, cpv(150.0, 120.0), cpvzero, cpvzero, 0.755995, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(186, 24, 1.0, 88.659334, cpv(130.0, 171.0), cpvzero, cpvzero, -2.347186, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(186, 25, 1.0, 88.659334, cpv(178.0, 212.0), cpvzero, cpvzero, 2.181522, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(182, 26, 1.0, 88.659334, cpv(328.0, 138.0), cpvzero, cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(182, 27, 1.0, 88.659334, cpv(384.0, 151.0), cpvzero, cpvzero, 1.985303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(138, 28, 1.0, 90.166667, cpv(158.0, 234.0), cpvzero, cpvzero, 1.690225, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(138, 29, 1.0, 90.166667, cpv(163.0, 192.0), cpvzero, cpvzero, 1.606495, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(138, 30, 1.0, 90.166667, cpv(160.0, 151.0), cpvzero, cpvzero, 1.332960, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(137, 31, 1.0, 90.166667, cpv(555.0, 181.0), cpvzero, cpvzero, 1.543026, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(137, 32, 1.0, 90.166667, cpv(366.0, 186.0), cpvzero, cpvzero, 1.451367, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(137, 33, 1.0, 90.166667, cpv(361.0, 148.0), cpvzero, cpvzero, 1.304544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(138, 34, 1.0, 90.166667, cpv(363.0, 217.0), cpvzero, cpvzero, 1.701624, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(138, 35, 1.0, 90.166667, cpv(559.0, 142.0), cpvzero, cpvzero, 1.741532, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(138, 36, 1.0, 90.166667, cpv(559.0, 223.0), cpvzero, cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(195, 37, 1.0, 70.876156, cpv(380.0, 109.0), cpvzero, cpvzero, 1.433730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(193, 38, 1.0, 70.876156, cpv(700.0, 111.0), cpvzero, cpvzero, -1.310194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(182, 39, 1.0, 88.659334, cpv(720.0, 165.0), cpvzero, cpvzero, 0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(182, 40, 1.0, 88.659334, cpv(239.0, 216.0), cpvzero, cpvzero, 1.347320, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(181, 41, 1.0, 88.659334, cpv(627.0, 286.0), cpvzero, cpvzero, 0.737815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(181, 42, 1.0, 88.659334, cpv(666.0, 265.0), cpvzero, cpvzero, 2.299651, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(182, 43, 1.0, 88.659334, cpv(432.0, 245.0), cpvzero, cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(184, 44, 1.0, 88.659334, cpv(640.0, 248.0), cpvzero, cpvzero, 1.264917, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(186, 45, 1.0, 88.659334, cpv(534.0, 155.0), cpvzero, cpvzero, 0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(186, 46, 1.0, 88.659334, cpv(271.0, 254.0), cpvzero, cpvzero, 2.283857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(137, 47, 1.0, 90.166667, cpv(749.0, 184.0), cpvzero, cpvzero, 1.400061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(138, 48, 1.0, 90.166667, cpv(749.0, 223.0), cpvzero, cpvzero, 1.684588, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(137, 49, 1.0, 90.166667, cpv(644.0, 323.0), cpvzero, cpvzero, 1.659452, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(138, 50, 1.0, 90.166667, cpv(647.0, 286.0), cpvzero, cpvzero, 1.513716, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(137, 51, 1.0, 90.166667, cpv(738.0, 149.0), cpvzero, cpvzero, 0.997830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(138, 52, 1.0, 90.166667, cpv(252.0, 284.0), cpvzero, cpvzero, 1.439969, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(138, 53, 1.0, 90.166667, cpv(253.0, 246.0), cpvzero, cpvzero, 1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(197, 54, 1.0, 70.876156, cpv(724.0, 99.0), cpvzero, cpvzero, 0.283794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(183, 55, 1.0, 88.659334, cpv(268.0, 207.0), cpvzero, cpvzero, 1.975688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(137, 56, 1.0, 90.166667, cpv(448.0, 291.0), cpvzero, cpvzero, 1.379612, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(138, 57, 1.0, 90.166667, cpv(78.0, 310.0), cpvzero, cpvzero, 1.691420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(137, 58, 1.0, 90.166667, cpv(450.0, 255.0), cpvzero, cpvzero, 1.779819, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(138, 59, 1.0, 90.166667, cpv(76.0, 274.0), cpvzero, cpvzero, 1.448954, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(138, 60, 1.0, 90.166667, cpv(73.0, 236.0), cpvzero, cpvzero, -1.423718, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(181, 61, 1.0, 88.659334, cpv(57.0, 278.0), cpvzero, cpvzero, 0.726642, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(186, 62, 1.0, 88.659334, cpv(93.0, 243.0), cpvzero, cpvzero, 1.941688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body0, cpvzero, cpv(81.0, 202.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body59, body0, cpvzero, cpv(76.0, 274.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body61, body0, cpv(-14.117732, -0.830455), cpv(47.0, 268.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body62, body0, cpv(-10.407385, 0.828449), cpv(96.0, 233.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body0, cpvzero, cpv(150.0, 120.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body0, cpvzero, cpv(351.0, 114.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body0, cpv(0.0, -0.0), cpv(465.0, 223.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body0, cpvzero, cpv(569.0, 108.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body0, cpvzero, cpv(720.0, 122.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body0, cpv(-1.788854, -5.366563), cpv(176.0, 102.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body0, cpv(-0.072017, -8.245897), cpv(139.0, 85.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body0, cpv(1.216457, -5.245973), cpv(120.0, 118.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body0, cpv(16.269166, 0.560566), cpv(119.0, 159.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body25, body0, cpv(-14.090789, 2.539619), cpv(184.0, 199.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body40, body0, cpv(-14.759965, 1.772969), cpv(234.0, 202.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body55, body0, cpv(-13.524563, 1.444371), cpv(272.0, 194.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body46, body0, cpv(-14.207362, 0.388403), cpv(280.0, 243.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body0, cpv(2.008377, -7.547610), cpv(321.0, 98.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body0, cpv(-0.059922, -7.070814), cpv(358.0, 81.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body37, body0, cpv(-1.024780, -7.207623), cpv(387.0, 107.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpv(-16.658734, 1.867243), cpv(389.0, 135.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body0, cpv(-14.862705, -0.316228), cpv(314.0, 133.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body43, body0, cpv(-14.512594, 1.176697), cpv(428.0, 231.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body45, body0, cpv(-16.954545, 0.737154), cpv(522.0, 143.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body0, cpv(1.831984, -7.851359), cpv(550.0, 84.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body0, cpv(-2.134798, -7.774486), cpv(581.0, 77.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body0, cpv(-1.516018, -5.890814), cpv(600.0, 108.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body44, body0, cpv(-15.809397, 0.250943), cpv(635.0, 233.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body41, body0, cpv(-16.951354, -0.807207), cpv(615.0, 274.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body42, body0, cpv(-15.611410, 0.532813), cpv(676.0, 253.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body39, body0, cpv(-17.492856, 0.0), cpv(705.0, 156.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body38, body0, cpv(1.803639, -8.760530), cpv(692.0, 107.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body54, body0, cpv(0.360000, -9.480000), cpv(727.0, 90.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpv(-1.0, -7.0), cpv(750.0, 119.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body23, cpv(-14.548302, 0.589000), cpv(5.571256, 2.993511), 11.704700, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpv(-14.026771, -0.499681), cpv(12.369001, -0.088350), 15.033296, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpv(-13.900276, 1.668033), cpv(11.992354, -0.428298), 16.763055, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body28, cpv(-1.516287, -7.918388), cpv(13.264835, 1.429743), 16.155494, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body0, cpv(0.0, -0.0), cpv(163.0, 192.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body29, cpv(-17.683322, -0.547826), cpv(7.102615, 2.748248), 23.430749, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body23, cpv(1.216457, 7.906974), cpv(-5.820715, 5.488103), 9.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body23, cpv(0.072017, 8.245897), cpv(-7.712448, -2.349074), 12.369317, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body11, cpv(0.852319, -4.926820), cpv(-1.788854, 8.049845), 13.453624, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body25, cpv(-4.448088, -3.494926), cpv(11.141554, 1.966157), 12.806248, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body22, cpv(13.995397, -1.062478), cpv(1.244543, -8.151755), 13.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body60, cpv(-14.260833, 1.276182), cpv(-11.027787, 0.622832), 13.038405, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body59, cpv(-14.018604, 0.691905), cpv(12.032578, 0.465908), 10.198039, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body57, cpv(0.0, -9.0), cpv(11.040403, -0.330911), 13.928388, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body62, cpv(-1.499008, -4.213428), cpv(16.517194, 1.087339), 15.231546, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body61, cpv(-10.559077, 4.301846), cpv(15.612550, -0.498273), 12.529964, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body40, cpv(6.505382, 3.111270), cpv(16.045368, 1.595672), 21.540659, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body46, cpv(-3.704908, -2.504727), cpv(16.169818, 1.880687), 15.811388, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body55, cpv(-9.050967, 0.282843), cpv(16.938530, 1.444371), 16.155494, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body53, cpv(-12.158361, 0.417454), cpv(12.020815, -0.707107), 14.142136, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body52, cpv(2.0, -8.0), cpv(12.027906, 0.574000), 9.055385, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpv(1.198548, 4.956156), cpv(-7.0, -3.0), 13.892444, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body18, cpv(-1.767703, 8.359140), cpv(1.0, -8.0), 10.198039, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body18, cpv(-0.239115, 9.052228), cpv(6.0, -2.0), 14.142136, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body33, cpv(2.0, 8.0), cpv(-14.559163, 0.175412), 12.649111, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body32, cpv(12.103401, 1.227881), cpv(-13.026544, -0.556011), 13.152946, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body34, cpv(11.040790, 0.317721), cpv(-14.010815, 0.834909), 6.708204, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body6, cpv(11.036452, -0.443545), cpv(-1.0, -10.0), 7.615773, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body32, cpv(16.439058, 2.599495), cpv(-8.578456, -4.050938), 13.416408, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body33, cpv(14.862705, 0.316228), cpv(-0.789352, 2.894291), 16.763055, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body58, cpv(8.309921, 2.223782), cpv(-13.339556, -0.237148), 13.892444, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body56, cpv(11.145940, 13.991712), cpv(-12.731468, 2.628636), 18.357560, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body58, cpv(-12.351424, 0.665077), cpv(12.361322, 0.444652), 12.165525, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body56, cpv(1.0, -8.0), cpv(12.953160, 1.488505), 14.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body13, cpv(-5.0, -5.0), cpv(0.209370, 5.652978), 10.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body16, cpv(3.0, -6.0), cpv(-1.019605, 7.997525), 10.770330, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body14, cpv(9.0, -1.0), cpv(-0.216574, 9.052795), 7.071068, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body20, cpv(-14.136255, 0.407777), cpv(-3.0, 6.0), 14.866069, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body45, cpv(-12.134208, 4.664867), cpv(14.865942, 0.061430), 6.708204, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body35, cpv(-13.050522, 1.638257), cpv(13.320702, 0.747590), 13.341664, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body31, cpv(-14.512594, 1.176697), cpv(12.967220, 1.360586), 15.033296, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body36, cpv(0.0, -8.0), cpv(14.120362, 0.784465), 7.280110, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body43, cpv(-13.903269, 3.420394), cpv(14.120362, 0.784465), 20.615528, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body44, cpv(-12.094556, 1.312145), cpv(15.207134, 1.656223), 11.180340, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body50, cpv(-13.037484, 0.154945), cpv(12.921778, 1.740019), 11.045361, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body49, cpv(0.0, -9.0), cpv(13.126024, 0.841128), 11.401754, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body42, cpv(-2.938064, -1.169521), cpv(11.961643, 1.385313), 13.453624, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body41, cpv(-13.679398, 4.227775), cpv(12.713516, 0.605406), 14.866069, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body54, cpv(8.161984, -3.921992), cpv(0.320000, 8.240000), 6.082763, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body38, cpv(2.437995, -7.419985), cpv(-0.128831, 7.278970), 8.544004, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body10, cpv(7.101986, 3.815992), cpv(-1.0, 8.0), 8.062258, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body21, cpv(-15.260871, -0.325276), cpv(-1.271997, 5.511989), 11.661904, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body51, cpv(-15.291622, 0.407777), cpv(11.953897, 1.761912), 9.486833, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body47, cpv(-14.023004, 0.596120), cpv(12.165335, 0.067963), 13.038405, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body48, cpv(0.0, -9.0), cpv(13.029471, -0.482573), 6.324555, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body39, cpv(-7.747755, 3.737952), cpv(16.635363, 0.514496), 10.440307, 400.0, 0.0));
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
	BGBLIT(rc_bg12)
}


const kineticArtLevel Level39 = {
	39,
	"Level 39",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

