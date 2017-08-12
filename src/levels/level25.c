
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level24;
extern kineticArtLevel Level26;
#define PREV_LEVEL &Level24
#define NEXT_LEVEL &Level26


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 56, total joints: 61 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body57 = createPolyUniWrapper(149, 57, 1.0, 85.083333, cpv(81.0, 76.0), cpvzero, cpvzero, -2.567288, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(150, 58, 1.0, 85.083333, cpv(148.0, 109.0), cpvzero, cpvzero, -2.659929, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(149, 59, 1.0, 85.083333, cpv(222.0, 136.0), cpvzero, cpvzero, -2.922924, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(150, 60, 1.0, 85.083333, cpv(301.0, 136.0), cpvzero, cpvzero, 2.866167, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(149, 61, 1.0, 85.083333, cpv(358.0, 106.0), cpvzero, cpvzero, 2.462179, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(150, 62, 1.0, 85.083333, cpv(411.0, 72.0), cpvzero, cpvzero, -3.104573, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(149, 63, 1.0, 85.083333, cpv(467.0, 108.0), cpvzero, cpvzero, -2.432966, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(150, 64, 1.0, 85.083333, cpv(528.0, 141.0), cpvzero, cpvzero, -2.831890, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(149, 65, 1.0, 85.083333, cpv(604.0, 146.0), cpvzero, cpvzero, 2.932570, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(150, 66, 1.0, 85.083333, cpv(672.0, 129.0), cpvzero, cpvzero, 2.631104, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(149, 67, 1.0, 85.083333, cpv(738.0, 89.0), cpvzero, cpvzero, 2.504044, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(150, 68, 1.0, 85.083333, cpv(296.0, 249.0), cpvzero, cpvzero, -2.227284, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(149, 69, 1.0, 85.083333, cpv(351.0, 299.0), cpvzero, cpvzero, -2.563691, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(150, 70, 1.0, 85.083333, cpv(408.0, 319.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(149, 71, 1.0, 85.083333, cpv(468.0, 301.0), cpvzero, cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(150, 72, 1.0, 85.083333, cpv(521.0, 258.0), cpvzero, cpvzero, 2.289626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(142, 73, 1.0, 85.083333, cpv(68.0, 259.0), cpvzero, cpvzero, 0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(143, 74, 1.0, 85.083333, cpv(134.0, 274.0), cpvzero, cpvzero, -0.064427, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(142, 75, 1.0, 85.083333, cpv(207.0, 262.0), cpvzero, cpvzero, 2.694750, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(143, 76, 1.0, 85.083333, cpv(269.0, 229.0), cpvzero, cpvzero, 2.492597, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(142, 77, 1.0, 85.083333, cpv(320.0, 180.0), cpvzero, cpvzero, 2.116451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(142, 78, 1.0, 85.083333, cpv(510.0, 186.0), cpvzero, cpvzero, 1.024007, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(143, 79, 1.0, 85.083333, cpv(556.0, 243.0), cpvzero, cpvzero, 0.718830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(142, 80, 1.0, 85.083333, cpv(617.0, 283.0), cpvzero, cpvzero, 0.486899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(143, 81, 1.0, 85.083333, cpv(681.0, 294.0), cpvzero, cpvzero, -3.114572, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(142, 82, 1.0, 85.083333, cpv(747.0, 279.0), cpvzero, cpvzero, 2.649783, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(188, 83, 1.0, 47.856161, cpv(412.0, 138.0), cpvzero, cpvzero, -3.108272, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(193, 84, 1.0, 70.876156, cpv(98.0, 279.0), cpvzero, cpvzero, -2.958482, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(31, 85, 1.0, 141.849016, cpv(108.0, 108.0), cpvzero, cpvzero, -2.723368, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(193, 86, 1.0, 70.876156, cpv(244.0, 253.0), cpvzero, cpvzero, 2.657115, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(31, 87, 1.0, 141.849016, cpv(173.0, 284.0), cpvzero, cpvzero, 2.932570, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(194, 88, 1.0, 70.876156, cpv(300.0, 212.0), cpvzero, cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(193, 89, 1.0, 70.876156, cpv(582.0, 270.0), cpvzero, cpvzero, -2.443690, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(194, 90, 1.0, 70.876156, cpv(526.0, 220.0), cpvzero, cpvzero, -2.312744, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(32, 91, 0.300000, 141.849016, cpv(448.0, 326.0), cpvzero, cpvzero, 2.916881, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(193, 92, 1.0, 70.876156, cpv(719.0, 301.0), cpvzero, cpvzero, 2.896614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(31, 93, 1.0, 141.849016, cpv(714.0, 124.0), cpvzero, cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(183, 94, 1.0, inf, cpv(411.0, 41.0), cpv(20.0, 53.0), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(184, 95, 1.0, 88.659334, cpv(183.0, 138.0), cpvzero, cpvzero, -1.487655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body96 = createPolyUniWrapper(183, 96, 1.0, 88.659334, cpv(263.0, 154.0), cpvzero, cpvzero, -1.593015, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(32, 97, 0.300000, 141.849016, cpv(375.0, 327.0), cpvzero, cpvzero, -2.880990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(184, 98, 1.0, 88.659334, cpv(642.0, 156.0), cpvzero, cpvzero, -1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(183, 99, 1.0, 88.659334, cpv(565.0, 163.0), cpvzero, cpvzero, -1.616220, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(183, 100, 1.0, inf, cpv(45.0, 56.0), cpv(23.0, 11.0), cpvzero, -0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(183, 101, 1.0, inf, cpv(774.0, 73.0), cpv(18.0, 61.0), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(185, 102, 1.0, 88.659334, cpv(389.0, 101.0), cpvzero, cpvzero, -1.794273, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(185, 103, 1.0, 88.659334, cpv(434.0, 99.0), cpvzero, cpvzero, -1.279340, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(181, 104, 1.0, 88.659334, cpv(332.0, 139.0), cpvzero, cpvzero, -1.487655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(181, 105, 1.0, 88.659334, cpv(495.0, 140.0), cpvzero, cpvzero, 1.435269, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(38, 106, 1.0, 302.045261, cpv(412.0, 199.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(28, 107, 1.0, 141.849016, cpv(315.0, 288.0), cpvzero, cpvzero, -2.468760, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(28, 108, 0.300000, 141.849016, cpv(409.0, 361.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(28, 109, 1.0, 141.849016, cpv(504.0, 292.0), cpvzero, cpvzero, 2.421039, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(31, 110, 1.0, 141.849016, cpv(648.0, 308.0), cpvzero, cpvzero, -3.030935, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(196, 111, 1.0, inf, cpv(35.0, 243.0), cpv(16.0, 20.0), cpvzero, -2.158799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(196, 112, 1.0, inf, cpv(779.0, 265.0), cpv(19.0, -37.0), cpvzero, 2.173084, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(411.0, 31.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(774.0, 63.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(45.0, 46.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(35.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(779.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body100, cpv(13.877601, -0.642024), cpv(12.129730, -1.367351)));
	cpSpaceAddConstraint(space, cpPinJointNew(body57, body85, cpv(-11.655209, 0.395092), cpv(1.116881, 14.824054)));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body85, cpv(13.877485, 0.644528), cpv(1.116881, 14.824054)));
	cpSpaceAddConstraint(space, cpPinJointNew(body58, body95, cpv(-12.064751, 0.664669), cpv(15.031232, -0.249136)));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body95, cpv(13.558154, 1.084652), cpv(15.031232, -0.249136)));
	cpSpaceAddConstraint(space, cpPinJointNew(body59, body96, cpv(-10.954988, 1.410048), cpv(14.018761, -0.688719)));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body96, cpv(12.091627, 1.338865), cpv(14.018761, -0.688719)));
	cpSpaceAddConstraint(space, cpPinJointNew(body60, body104, cpv(-11.401274, -0.104599), cpv(13.951641, -1.162637)));
	cpSpaceAddConstraint(space, cpPinJointNew(body61, body104, cpv(12.177772, 0.837783), cpv(13.951641, -1.162637)));
	cpSpaceAddConstraint(space, cpPinJointNew(body102, body61, cpv(18.660497, -0.886484), cpv(-12.656505, 1.346437)));
	cpSpaceAddConstraint(space, cpPinJointNew(body102, body62, cpv(18.660497, -0.886484), cpv(13.028104, 0.518163)));
	cpSpaceAddConstraint(space, cpPinJointNew(body62, body94, cpv(1.110350, 2.960933), cpv(15.0, 1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body101, cpv(-13.392620, 1.279739), cpv(10.606602, -0.707107)));
	cpSpaceAddConstraint(space, cpPinJointNew(body67, body93, cpv(14.404507, 0.714273), cpv(1.341641, 15.205262)));
	cpSpaceAddConstraint(space, cpPinJointNew(body66, body93, cpv(-13.017790, 0.732905), cpv(1.341641, 15.205262)));
	cpSpaceAddConstraint(space, cpPinJointNew(body98, body66, cpv(18.412687, -0.986394), cpv(13.401692, 0.628204)));
	cpSpaceAddConstraint(space, cpPinJointNew(body98, body65, cpv(18.412687, -0.986394), cpv(-11.383088, 0.652156)));
	cpSpaceAddConstraint(space, cpPinJointNew(body65, body99, cpv(14.110286, 0.948591), cpv(16.074312, -1.271415)));
	cpSpaceAddConstraint(space, cpPinJointNew(body64, body99, cpv(-12.343417, 0.800036), cpv(16.074312, -1.271415)));
	cpSpaceAddConstraint(space, cpPinJointNew(body105, body64, cpv(-15.267792, 0.945792), cpv(14.857817, 0.495261)));
	cpSpaceAddConstraint(space, cpPinJointNew(body105, body63, cpv(-15.267792, 0.945792), cpv(-12.039640, -0.216930)));
	cpSpaceAddConstraint(space, cpPinJointNew(body63, body103, cpv(13.449688, 0.325396), cpv(16.761960, 0.191565)));
	cpSpaceAddConstraint(space, cpPinJointNew(body62, body103, cpv(-12.954081, 1.480466), cpv(16.761960, 0.191565)));
	cpSpaceAddConstraint(space, cpPinJointNew(body73, body111, cpv(-13.885972, 0.423999), cpv(-3.605551, 3.605551)));
	cpSpaceAddConstraint(space, cpPinJointNew(body73, body84, cpv(13.037974, 0.106000), cpv(1.456714, 7.866256)));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body84, cpv(-12.973029, -0.836970), cpv(1.456714, 7.866256)));
	cpSpaceAddConstraint(space, cpPinJointNew(body74, body87, cpv(13.101794, -1.158881), cpv(0.800373, 15.503529)));
	cpSpaceAddConstraint(space, cpPinJointNew(body75, body87, cpv(14.786025, 1.540602), cpv(0.800373, 15.503529)));
	cpSpaceAddConstraint(space, cpPinJointNew(body86, body75, cpv(0.232873, 10.292996), cpv(-12.944818, 1.559390)));
	cpSpaceAddConstraint(space, cpPinJointNew(body86, body76, cpv(0.232873, 10.292996), cpv(12.197618, 0.467026)));
	cpSpaceAddConstraint(space, cpPinJointNew(body88, body76, cpv(0.707107, 10.606602), cpv(-12.609700, 1.730743)));
	cpSpaceAddConstraint(space, cpPinJointNew(body88, body77, cpv(0.707107, 10.606602), cpv(12.699700, 1.648519)));
	cpSpaceAddConstraint(space, cpPinJointNew(body77, body104, cpv(-13.371319, 1.099013), cpv(-16.110823, -0.664364)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body62, cpv(1.399223, 11.960024), cpv(0.814257, -5.033586), 49.010203, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body83, cpv(-1.0, -23.0), cpv(0.699611, -9.028319), 29.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body82, body112, cpv(-13.001830, 0.975924), cpv(3.965702, 5.768293)));
	cpSpaceAddConstraint(space, cpPinJointNew(body92, body82, cpv(0.727607, 9.458889), cpv(14.764789, -0.031481)));
	cpSpaceAddConstraint(space, cpPinJointNew(body92, body81, cpv(0.727607, 9.458889), cpv(-11.968602, 1.323841)));
	cpSpaceAddConstraint(space, cpPinJointNew(body110, body81, cpv(-0.331295, 15.129119), cpv(14.021907, 0.621395)));
	cpSpaceAddConstraint(space, cpPinJointNew(body110, body80, cpv(-0.331295, 15.129119), cpv(12.528993, 0.155963)));
	cpSpaceAddConstraint(space, cpPinJointNew(body80, body89, cpv(-15.232345, -0.987763), cpv(1.433520, 7.933790)));
	cpSpaceAddConstraint(space, cpPinJointNew(body79, body89, cpv(12.793804, -0.564433), cpv(1.433520, 7.933790)));
	cpSpaceAddConstraint(space, cpPinJointNew(body90, body79, cpv(1.105731, 9.152997), cpv(-14.110813, -0.940721)));
	cpSpaceAddConstraint(space, cpPinJointNew(body90, body78, cpv(1.105731, 9.152997), cpv(13.890011, 0.259973)));
	cpSpaceAddConstraint(space, cpPinJointNew(body78, body105, cpv(-14.409958, 0.594225), cpv(18.105169, 0.450377)));
	cpSpaceAddConstraint(space, cpPinJointNew(body68, body76, cpv(14.206594, -0.415549), cpv(-10.192154, -1.456022)));
	cpSpaceAddConstraint(space, cpPinJointNew(body107, body68, cpv(1.221968, 14.370344), cpv(-11.401636, 0.051944)));
	cpSpaceAddConstraint(space, cpPinJointNew(body107, body69, cpv(1.221968, 14.370344), cpv(14.967737, 0.983282)));
	cpSpaceAddConstraint(space, cpPinJointNew(body69, body97, cpv(-11.653713, 0.437014), cpv(0.966235, 15.266512)));
	cpSpaceAddConstraint(space, cpPinJointNew(body70, body97, cpv(-14.0, -2.0), cpv(0.966235, 15.266512)));
	cpSpaceAddConstraint(space, cpPinJointNew(body91, body70, cpv(0.557062, 15.514177), cpv(13.0, -1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body91, body71, cpv(0.557062, 15.514177), cpv(13.863621, 1.341641)));
	cpSpaceAddConstraint(space, cpPinJointNew(body71, body109, cpv(-12.074767, 1.788854), cpv(1.008030, 15.523655)));
	cpSpaceAddConstraint(space, cpPinJointNew(body72, body109, cpv(13.358236, 1.599225), cpv(1.008030, 15.523655)));
	cpSpaceAddConstraint(space, cpPinJointNew(body79, body72, cpv(-13.546381, 1.222937), cpv(-12.887876, 1.975514)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body70, cpv(1.0, 15.0), cpv(0.0, 4.0), 23.0, 100.0, 3.0));
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
	BGBLIT(rc_bg04)
}


const kineticArtLevel Level25 = {
	25,
	"Level 25",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

