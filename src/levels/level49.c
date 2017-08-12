
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level48;
extern kineticArtLevel Level50;
#define PREV_LEVEL &Level48
#define NEXT_LEVEL &Level50


static void init(void)
{
	makeSpaces2(cpv(0, 130));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 57, total joints: 28 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(157, 1, 1.0, inf, cpv(171.888555, 71.034127), cpv(0.470500, -0.324330), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(158, 2, 1.0, inf, cpv(220.0, 100.062582), cpv(0.0, -0.375493), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(157, 3, 1.0, inf, cpv(270.0, 123.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(158, 4, 1.0, inf, cpv(313.0, 151.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(157, 5, 1.0, inf, cpv(359.0, 179.0), cpv(-0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(158, 6, 1.0, inf, cpv(668.962964, 89.026577), cpv(0.064276, -0.078858), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(157, 7, 1.0, inf, cpv(620.0, 114.014228), cpv(0.0, -0.085366), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(158, 8, 1.0, inf, cpv(575.0, 143.0), cpv(0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(157, 9, 1.0, inf, cpv(530.0, 172.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(158, 10, 1.0, inf, cpv(491.0, 204.0), cpv(-0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(157, 11, 1.0, inf, cpv(449.0, 237.0), cpv(-0.0, 0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(158, 12, 1.0, inf, cpv(406.0, 270.0), cpv(0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(157, 13, 1.0, inf, cpv(365.0, 302.0), cpv(-0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(158, 14, 1.0, inf, cpv(327.0, 337.0), cpv(-0.0, 0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(157, 15, 1.0, inf, cpv(291.0, 380.0), cpv(-0.0, -0.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(110, 16, 1.0, 63.887283, cpv(631.808990, 15.928972), cpv(24.465475, -17.366967), cpvzero, 1.362085, -0.287241, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(110, 17, 1.0, 63.887283, cpv(603.613714, 21.216593), cpv(4.174574, 25.056687), cpvzero, 0.843741, 1.835166, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(110, 18, 1.0, 63.887283, cpv(646.266592, 44.083421), cpv(32.456810, 33.214033), cpvzero, -0.839655, 1.124404, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(110, 19, 1.0, 63.887283, cpv(616.922284, 45.902988), cpv(-7.947558, 45.663112), cpvzero, -0.132011, 0.212910, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(110, 20, 1.0, 63.887283, cpv(603.315593, 69.779155), cpv(-8.086490, 49.364460), cpvzero, 0.150785, -0.409660, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(110, 21, 1.0, 63.887283, cpv(637.566619, 63.251404), cpv(20.614982, 29.415886), cpvzero, 0.266232, 0.090380, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(110, 22, 1.0, 63.887283, cpv(588.871050, 42.678078), cpv(-22.985170, 47.859309), cpvzero, 0.768391, 0.432160, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(110, 23, 1.0, 63.887283, cpv(530.192063, 23.853040), cpv(-28.923711, 9.983068), cpvzero, -1.078023, -2.026765, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(110, 24, 1.0, 63.887283, cpv(550.698254, 37.301410), cpv(-52.541864, 83.342327), cpvzero, -1.742327, -2.281380, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(110, 25, 1.0, 63.887283, cpv(560.721911, 58.321998), cpv(-30.044309, 89.052374), cpvzero, 0.125656, -0.602959, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(110, 26, 1.0, 63.887283, cpv(624.594108, 78.629721), cpv(2.743162, 40.765602), cpvzero, -1.156138, -0.289543, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(110, 27, 1.0, 63.887283, cpv(582.361194, 64.035404), cpv(-21.473805, 67.447708), cpvzero, -0.252070, -1.839889, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(110, 28, 1.0, 63.887283, cpv(574.574393, 27.905969), cpv(-28.366215, 47.843139), cpvzero, 0.130250, 0.460076, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(112, 29, 1.0, 63.887283, cpv(329.120531, 31.988148), cpv(17.337873, 48.707616), cpvzero, -0.034446, -0.468893, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(112, 30, 1.0, 63.887283, cpv(303.240337, 30.524131), cpv(0.381153, 48.832053), cpvzero, 0.023568, -0.136768, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(112, 31, 1.0, 63.887283, cpv(266.918574, 52.100282), cpv(17.952279, 53.672440), cpvzero, -0.579203, 1.472759, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(112, 32, 1.0, 63.887283, cpv(291.475695, 52.429170), cpv(6.395401, 62.040823), cpvzero, -0.299539, -0.297796, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(112, 33, 1.0, 63.887283, cpv(217.478992, 42.598946), cpv(-14.250713, 20.125874), cpvzero, -0.296810, -1.294122, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(112, 34, 1.0, 63.887283, cpv(211.802548, 20.239919), cpv(-15.700446, 20.898423), cpvzero, 0.017180, 0.619432, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(112, 35, 1.0, 63.887283, cpv(233.979378, 28.008453), cpv(-2.690447, 37.939076), cpvzero, 0.268362, -0.237442, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(112, 36, 1.0, 63.887283, cpv(192.535301, 38.735141), cpv(-32.064793, 44.235668), cpvzero, -0.155410, -2.985753, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(112, 37, 1.0, 63.887283, cpv(205.409154, 59.730258), cpv(5.864922, 30.374352), cpvzero, 0.497334, 0.279727, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(112, 38, 1.0, 63.887283, cpv(243.987008, 48.835375), cpv(-4.713386, 33.346601), cpvzero, 0.065139, 0.001770, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(112, 39, 1.0, 63.887283, cpv(251.653146, 70.865646), cpv(0.014442, 68.605746), cpvzero, 0.166534, 0.000687, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(112, 40, 1.0, 63.887283, cpv(228.955172, 65.912939), cpv(6.853568, 48.512735), cpvzero, -0.449253, -0.311758, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(112, 41, 1.0, 63.887283, cpv(314.385262, 49.404955), cpv(12.927150, 60.098964), cpvzero, -0.626107, 0.061423, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(112, 42, 1.0, 63.887283, cpv(258.241068, 31.116411), cpv(-1.546425, 36.770389), cpvzero, -0.154663, -0.859712, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(112, 43, 1.0, 63.887283, cpv(280.088434, 32.279855), cpv(-0.477561, 49.479190), cpvzero, 0.184855, 0.084482, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(113, 44, 1.0, 63.887283, cpv(428.963036, 27.135476), cpv(0.0, 19.600001), cpvzero, 0.003726, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(113, 45, 1.0, 63.887283, cpv(428.011740, 49.904683), cpv(0.0, 19.600001), cpvzero, -0.044299, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(113, 46, 1.0, 63.887283, cpv(426.603265, 79.898727), cpv(0.0, 19.600001), cpvzero, -0.010684, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(113, 47, 1.0, 63.887283, cpv(429.0, 107.0), cpv(0.0, 19.600001), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(113, 48, 1.0, 63.887283, cpv(448.926856, 28.873139), cpv(0.0, 19.600001), cpvzero, 0.056625, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(113, 49, 1.0, 63.887283, cpv(447.675041, 53.699014), cpv(0.0, 19.600001), cpvzero, 0.190804, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(113, 50, 1.0, 63.887283, cpv(447.593664, 76.686726), cpv(0.0, 19.600001), cpvzero, 0.000954, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(113, 51, 1.0, 63.887283, cpv(407.992310, 25.606827), cpv(0.0, 19.600001), cpvzero, 0.058946, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(113, 52, 1.0, 63.887283, cpv(407.728724, 53.464462), cpv(0.0, 19.600001), cpvzero, -0.102981, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(113, 53, 1.0, 63.887283, cpv(404.803071, 78.804548), cpv(0.0, 19.600001), cpvzero, -0.011050, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(113, 54, 1.0, 63.887283, cpv(472.0, 25.0), cpv(0.0, 19.600001), cpvzero, 0.066816, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(113, 55, 1.0, 63.887283, cpv(466.993743, 45.279208), cpv(0.0, 19.600001), cpvzero, 0.235315, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(113, 56, 1.0, 63.887283, cpv(386.202945, 22.503933), cpv(0.0, 19.600001), cpvzero, 0.001356, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(113, 57, 1.0, 63.887283, cpv(389.528702, 42.977614), cpv(0.0, 19.600001), cpvzero, -0.096896, 0.0, 0.0, 0.9, 0.3, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(172.0, 71.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body6, cpv(669.0, 89.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body8, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body13, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(220.0, 100.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpvzero, cpv(270.0, 123.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(313.0, 151.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpvzero, cpv(359.0, 179.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body0, cpvzero, cpv(620.0, 114.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body0, cpvzero, cpv(575.0, 143.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body0, cpvzero, cpv(530.0, 172.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpvzero, cpv(491.0, 204.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body0, cpvzero, cpv(449.0, 237.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body0, cpvzero, cpv(406.0, 270.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body0, cpvzero, cpv(365.0, 302.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body0, cpvzero, cpv(327.0, 337.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body0, cpvzero, cpv(291.0, 380.0)));
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


const kineticArtLevel Level49 = {
	49,
	"Level 49",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

