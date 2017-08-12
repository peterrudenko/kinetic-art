
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level73;
extern kineticArtLevel Level75;
#define PREV_LEVEL &Level73
#define NEXT_LEVEL &Level75


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 34, total joints: 34 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(197, 1, 1.0, inf, cpv(130.999994, 103.000103), cpv(-0.000160, -0.003961), cpvzero, 0.000001, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(198, 2, 1.0, 70.876156, cpv(267.000021, 188.000183), cpv(0.000118, 0.001104), cpvzero, -2.898877, 0.022145, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(197, 3, 1.0, inf, cpv(399.999993, 133.000164), cpv(-0.000101, 0.003778), cpvzero, 0.013747, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(198, 4, 1.0, 70.876156, cpv(532.000031, 190.999405), cpv(0.000003, 0.000391), cpvzero, -2.716376, 0.204329, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(197, 5, 1.0, inf, cpv(660.000016, 105.000168), cpv(0.000364, 0.002690), cpvzero, 0.073055, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(194, 6, 1.0, 70.876156, cpv(398.999967, 272.000129), cpv(-0.000346, -0.024868), cpvzero, -2.634109, 0.032701, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(126, 7, 1.0, 40.5, cpv(385.382574, 171.861511), cpv(4.902297, 0.420140), cpvzero, 0.051356, -0.099017, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(127, 8, 1.0, 40.5, cpv(384.516971, 204.847997), cpv(12.153170, 0.466037), cpvzero, -0.028740, -0.192874, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(126, 9, 1.0, 40.5, cpv(413.935311, 172.197711), cpv(-1.662349, 0.325217), cpvzero, -0.362560, 0.008819, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(127, 10, 1.0, 40.5, cpv(413.587735, 205.147838), cpv(4.040826, 0.095232), cpvzero, -0.369476, -0.353470, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(128, 11, 1.0, 40.5, cpv(383.995648, 239.873768), cpv(20.932179, 0.111391), cpvzero, -0.255263, -0.008059, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(128, 12, 1.0, 40.5, cpv(409.870158, 240.002460), cpv(10.970734, 0.679391), cpvzero, -1.137988, -0.107994, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(128, 13, 1.0, 40.5, cpv(415.851636, 320.889674), cpv(-5.670816, 0.129281), cpvzero, -0.003143, -0.277304, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(128, 14, 1.0, 40.5, cpv(383.421908, 314.375665), cpv(-5.305983, -1.446299), cpvzero, 0.257773, -0.114955, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(127, 15, 1.0, 40.5, cpv(417.008737, 347.067758), cpv(-8.401420, -2.792211), cpvzero, 0.261227, 0.489220, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(127, 16, 1.0, 40.5, cpv(380.496582, 340.250771), cpv(0.366073, -2.523581), cpvzero, 0.112596, -0.475062, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(126, 17, 1.0, 40.5, cpv(407.079143, 374.232580), cpv(0.546746, 0.754387), cpvzero, 0.438504, -0.039983, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(126, 18, 1.0, 40.5, cpv(375.876923, 368.867603), cpv(-0.402559, -3.102207), cpvzero, 0.533097, -0.187355, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(127, 19, 1.0, 40.5, cpv(540.547574, 243.463551), cpv(-3.478957, 2.138432), cpvzero, 0.149678, 0.034616, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(127, 20, 1.0, 40.5, cpv(518.942492, 233.827089), cpv(0.009723, -2.612991), cpvzero, 0.138987, -0.064185, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(128, 21, 1.0, 40.5, cpv(537.873454, 284.290162), cpv(-4.877807, 1.811139), cpvzero, -0.037165, -0.009564, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(128, 22, 1.0, 40.5, cpv(513.406629, 275.431241), cpv(2.836383, -2.316952), cpvzero, 0.115272, -0.405932, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(127, 23, 1.0, 40.5, cpv(287.126953, 240.458572), cpv(3.088303, -0.044100), cpvzero, -0.095202, -0.159695, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(127, 24, 1.0, 40.5, cpv(259.119789, 232.509090), cpv(-2.662413, 0.093784), cpvzero, -0.123463, 0.228119, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(128, 25, 1.0, 40.5, cpv(293.044227, 284.951895), cpv(4.076215, 0.134478), cpvzero, -0.150951, 0.054430, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(128, 26, 1.0, 40.5, cpv(264.368102, 275.271609), cpv(-12.365493, 1.218217), cpvzero, -0.048700, -0.014804, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(127, 27, 1.0, 40.5, cpv(117.427321, 134.624799), cpv(2.768266, -0.664381), cpvzero, 0.025688, -0.063075, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(127, 28, 1.0, 40.5, cpv(141.286031, 132.988271), cpv(-6.389879, -0.406870), cpvzero, 0.066262, -0.105688, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(126, 29, 1.0, 40.5, cpv(114.077902, 176.411761), cpv(1.591765, -0.807791), cpvzero, 0.220212, -0.177715, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(126, 30, 1.0, 40.5, cpv(142.596321, 176.066832), cpv(-9.747739, -0.608348), cpvzero, 0.020672, 0.754172, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(127, 31, 1.0, 40.5, cpv(650.487924, 140.528337), cpv(-2.691998, 0.933849), cpvzero, -0.024257, 0.400581, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(127, 32, 1.0, 40.5, cpv(672.898028, 142.321110), cpv(-4.359021, -0.032379), cpvzero, 0.086147, 0.440610, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(126, 33, 1.0, 40.5, cpv(656.635846, 178.911464), cpv(-12.712250, 2.701369), cpvzero, -0.214273, 0.474592, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(126, 34, 1.0, 40.5, cpv(675.614652, 182.155603), cpv(-6.860967, -0.767488), cpvzero, -0.126206, -0.078760, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(267.0, 188.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpvzero, cpv(131.0, 103.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpvzero, cpv(400.0, 133.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body0, cpvzero, cpv(399.0, 272.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(532.0, 191.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpvzero, cpv(660.0, 105.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body1, cpv(0.0, -9.0), cpv(13.0, -3.000056), 22.090722, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body1, cpv(-1.0, -9.0), cpv(-15.0, -3.000056), 23.537205, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body28, cpv(0.0, -8.0), cpv(1.0, 7.0), 27.018512, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body29, cpv(-1.0, 8.0), cpv(0.0, -9.0), 24.020824, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body2, cpv(-1.0, -10.0), cpv(-15.999871, -3.999613), 33.136083, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body23, cpv(0.0, -10.0), cpv(-1.0, 9.0), 25.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body2, cpv(0.0, -9.0), cpv(13.000129, -2.999613), 34.058773, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body24, cpv(-1.0, -10.0), cpv(0.0, 8.0), 24.020824, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body3, cpv(2.979858, -9.597940), cpv(14.0, -3.0), 29.068884, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body7, cpv(0.0, -9.0), cpv(-1.0, 7.0), 15.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body9, cpv(2.308012, -7.724835), cpv(-4.041304, 6.976236), 15.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body12, cpv(-3.223253, 7.321929), cpv(9.518777, -3.223798), 16.031220, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body8, cpv(3.542637, -9.351456), cpv(0.0, 8.0), 16.031220, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body3, cpv(-1.0, -10.0), cpv(-14.0, -3.0), 29.017236, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body13, cpv(-15.852708, -2.283190), cpv(-1.0, -10.0), 26.172505, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body14, cpv(11.379004, -4.136256), cpv(-2.0, -8.0), 33.136083, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body13, cpv(-1.0, -8.0), cpv(1.0, 7.0), 9.219544, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body14, cpv(-1.0, -8.0), cpv(0.0, 7.0), 9.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body16, cpv(-2.0, -9.0), cpv(-1.0, 8.0), 11.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body15, cpv(-1.0, -8.0), cpv(0.0, 7.0), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body4, cpv(-1.0, -8.0), cpv(-14.0, -3.0), 34.058773, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body4, cpv(-1.0, -9.0), cpv(12.0, -3.0), 34.058773, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body22, cpv(0.0, 9.0), cpv(0.0, -10.0), 22.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body19, cpv(0.0, -9.0), cpv(0.0, 8.0), 23.021729, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body5, cpv(-1.0, -9.0), cpv(-15.0, -3.0), 29.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body5, cpv(-1.0, -10.0), cpv(13.0, -3.0), 27.294688, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body31, cpv(0.0, -9.0), cpv(0.0, 7.0), 22.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body32, cpv(0.0, -9.0), cpv(0.0, 8.0), 22.022716, 100.0, 3.0));
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


const kineticArtLevel Level74 = {
	74,
	"Level 74",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

