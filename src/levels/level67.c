
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level66;
extern kineticArtLevel Level68;
#define PREV_LEVEL &Level66
#define NEXT_LEVEL &Level68


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

{  /* Total bodies: 36, total joints: 36 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body28 = createPolyUniWrapper(142, 28, 1.0, 85.083333, cpv(624.658970, 143.710131), cpv(36.883716, -31.587159), cpvzero, 2.628375, -9.380068, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(142, 29, 1.0, 85.083333, cpv(631.674782, 189.484914), cpv(-83.636585, -110.753460), cpvzero, 1.237953, -4.881181, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(143, 30, 1.0, 85.083333, cpv(635.256904, 244.528683), cpv(44.978524, -1.589914), cpvzero, -1.469403, -3.738851, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(151, 31, 1.0, 85.083333, cpv(190.892416, 135.618128), cpv(48.080516, 34.992738), cpvzero, 1.562556, -15.734962, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(151, 32, 1.0, 85.083333, cpv(199.213366, 202.920624), cpv(-107.657672, -105.021640), cpvzero, 1.620223, 20.081072, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(150, 33, 1.0, 85.083333, cpv(385.674022, 207.986202), cpv(28.177217, 6.129605), cpvzero, 2.559587, -4.069569, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(150, 34, 1.0, 85.083333, cpv(403.482651, 137.121649), cpv(-78.879302, 110.185148), cpvzero, -2.273226, -1.385375, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(149, 35, 1.0, 85.083333, cpv(385.967342, 252.024966), cpv(-9.745416, 109.702147), cpvzero, -0.122516, -2.554575, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(142, 36, 1.0, 85.083333, cpv(169.594197, 227.718286), cpv(12.320711, 49.127044), cpvzero, 1.222217, -3.174712, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(123, 37, 1.0, 60.5, cpv(187.934077, 175.885750), cpv(-133.088791, -14.022004), cpvzero, -0.314909, 0.829681, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(122, 38, 1.0, 60.5, cpv(636.912291, 215.348905), cpv(-89.794104, -109.118358), cpvzero, 0.592340, -6.503854, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(122, 39, 1.0, 60.5, cpv(614.934377, 166.566035), cpv(50.864889, -5.273467), cpvzero, -1.666033, 5.812835, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(117, 40, 1.0, 99.155539, cpv(615.048805, 270.896823), cpv(46.162524, 41.204618), cpvzero, 0.734280, 3.492442, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(118, 41, 1.0, 99.155539, cpv(192.230759, 248.223185), cpv(-23.683454, -3.276789), cpvzero, -0.614099, 1.821684, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(123, 42, 1.0, 60.5, cpv(181.169775, 216.669591), cpv(81.702669, -4.623830), cpvzero, 2.274786, -1.219119, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(16, 76, 1.0, 183.743659, cpv(163.276419, 272.764861), cpv(-48.211626, -29.250100), cpvzero, -2.261216, 0.830128, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(16, 77, 1.0, 183.743659, cpv(221.808940, 255.471044), cpv(55.647648, -80.842339), cpvzero, 2.343847, -4.930215, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(115, 45, 1.0, 99.155539, cpv(398.203847, 277.130113), cpv(-33.455543, -46.789964), cpvzero, -0.167325, -1.110645, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(111, 46, 1.0, 63.887283, cpv(361.463917, 265.762625), cpv(-38.844566, 31.384173), cpvzero, -1.726669, -3.746366, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(111, 47, 1.0, 63.887283, cpv(424.629039, 256.653830), cpv(-61.129657, -88.019177), cpvzero, 1.705618, -1.844862, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(111, 48, 1.0, 63.887283, cpv(406.247504, 303.876488), cpv(-4.910527, -62.937442), cpvzero, 3.419845, -1.470563, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(112, 49, 1.0, 63.887283, cpv(209.028527, 216.881532), cpv(23.568968, 23.330998), cpvzero, 0.788646, 1.490617, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(112, 50, 1.0, 63.887283, cpv(152.136888, 245.550789), cpv(-21.812396, -18.757211), cpvzero, -1.429714, -0.379014, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(112, 51, 1.0, 63.887283, cpv(194.741557, 273.753351), cpv(-16.430923, -117.396604), cpvzero, 2.571721, -6.809087, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(113, 52, 1.0, 63.887283, cpv(598.730696, 244.753953), cpv(140.008711, -20.698427), cpvzero, -1.327320, 4.134713, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(113, 53, 1.0, 63.887283, cpv(607.403708, 291.080728), cpv(-37.754288, 44.645486), cpvzero, 3.686314, 6.379181, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(113, 54, 1.0, 63.887283, cpv(652.091625, 268.890216), cpv(15.683466, 47.796487), cpvzero, 1.265299, -6.733660, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(97, 55, 5.0, 354.953125, cpv(398.403481, 96.413445), cpv(55.649317, -8.996027), cpvzero, -0.231376, 4.245038, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(41, 73, 5.0, 302.045261, cpv(629.263630, 102.509971), cpv(-22.310085, -11.585845), cpvzero, -0.342408, -1.645525, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(17, 78, 1.0, 183.743659, cpv(584.269920, 274.564787), cpv(34.265554, -71.386846), cpvzero, -2.123118, 3.736586, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(17, 79, 1.0, 183.743659, cpv(633.575984, 304.139437), cpv(-65.900580, 100.602474), cpvzero, 2.756611, 3.179790, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(58, 68, 1.0, 179.365914, cpv(373.897845, 297.714699), cpv(-34.443792, -28.185790), cpvzero, 0.110376, 0.015322, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(58, 69, 1.0, 179.365914, cpv(431.839076, 290.051816), cpv(-5.744322, -86.562948), cpvzero, -0.404865, -1.745619, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(41, 72, 5.0, 302.045261, cpv(187.545126, 97.220571), cpv(16.458022, -26.893540), cpvzero, -0.247769, -5.406580, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(31, 74, 1.0, 141.849016, cpv(400.148822, 176.247203), cpv(31.230237, 143.441941), cpvzero, 0.426388, -6.992223, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(28, 75, 1.0, 141.849016, cpv(377.491985, 234.704375), cpv(57.125555, -51.050578), cpvzero, -3.734431, 7.238586, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body72, cpv(-13.0, 1.0), cpv(0.0, 21.0), 11.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body31, cpv(0.0, -11.0), cpv(14.0, 1.0), 11.704700, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body32, cpv(-1.0, 9.0), cpv(-13.0, -0.0), 13.152946, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body42, cpv(15.0, 1.0), cpv(-2.0, -11.0), 8.062258, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body36, cpv(-2.0, 9.0), cpv(-14.084620, 1.274159), 10.198039, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body34, cpv(0.0, 26.0), cpv(14.980151, -1.262964), 13.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body74, cpv(-13.033082, -1.771657), cpv(1.194704, -14.985749), 7.280110, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body33, cpv(-0.194789, 14.998735), cpv(-12.0, -0.0), 10.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body75, cpv(13.0, 0.0), cpv(1.325223, 13.972966), 7.280110, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body35, cpv(0.650987, -15.019195), cpv(-13.0, -0.0), 7.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body45, cpv(14.0, 0.0), cpv(0.0, -14.0), 7.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body28, cpv(0.0, 22.0), cpv(-14.0, 1.0), 10.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body28, cpv(-1.0, -11.0), cpv(15.0, 0.0), 8.246211, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body39, cpv(-15.0, -0.0), cpv(0.0, 8.0), 9.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body29, cpv(-1.0, -12.0), cpv(15.0, 0.0), 6.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body38, cpv(14.062463, -1.499044), cpv(-1.0, 9.0), 8.246211, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body30, cpv(-1.0, -15.0), cpv(-13.991080, -0.499681), 8.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpv(-1.0, -13.0), cpv(194.0, 52.0), 7.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpv(0.0, -16.0), cpv(406.0, 52.0), 8.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpv(1.0, -16.0), cpv(612.0, 56.0), 6.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body36, cpv(-1.0, -14.0), cpv(13.981310, 0.723171), 10.049876, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body76, body41, cpv(2.005869, 22.715116), cpv(-15.0, 0.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body77, body41, cpv(2.613031, 23.941012), cpv(13.0, -1.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body41, cpv(-0.610170, 10.983064), cpv(-1.0, 12.0), 10.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body50, body41, cpv(0.929981, 11.624764), cpv(-21.0, -18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body49, body41, cpv(-2.504156, 11.389873), cpv(19.0, -17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body68, body45, cpv(-0.589610, -21.946580), cpv(-22.0, -5.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body69, body45, cpv(-2.937213, -21.757132), cpv(23.0, -2.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body45, cpv(-0.0, 12.0), cpv(0.0, 12.0), 9.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body47, body45, cpv(-0.050702, 13.892351), cpv(16.0, -20.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body46, body45, cpv(0.0, 14.142136), cpv(-20.0, -17.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body78, body40, cpv(0.255485, 22.802077), cpv(-14.0, 1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body79, body40, cpv(1.084652, 23.320024), cpv(14.0, 3.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body40, cpv(-0.379085, 10.993466), cpv(-1.0, 13.0), 7.071068, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body54, body40, cpv(-0.741999, 12.507975), cpv(19.0, -15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body52, body40, cpv(0.905097, 12.049100), cpv(-19.0, -15.0)));
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


const kineticArtLevel Level67 = {
	67,
	"Level 67",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

