
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level26;
extern kineticArtLevel Level28;
#define PREV_LEVEL &Level26
#define NEXT_LEVEL &Level28


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

{  /* Total bodies: 31, total joints: 33 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(38, 1, 1.0, 302.045261, cpv(24.0, 295.0), cpv(0.0, 45.733336), cpvzero, 0.516614, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(38, 2, 1.0, 302.045261, cpv(25.0, 203.0), cpvzero, cpvzero, 0.540420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(38, 3, 1.0, 302.045261, cpv(25.0, 135.0), cpvzero, cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(38, 4, 1.0, 302.045261, cpv(25.0, 60.0), cpvzero, cpvzero, 0.519146, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(38, 5, 1.0, 302.045261, cpv(773.0, 306.0), cpvzero, cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(38, 6, 1.0, 302.045261, cpv(773.0, 219.0), cpvzero, cpvzero, -0.689800, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(38, 7, 1.0, 302.045261, cpv(773.0, 146.0), cpvzero, cpvzero, -0.720971, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(38, 8, 1.0, 302.045261, cpv(774.0, 70.0), cpvzero, cpvzero, -0.712358, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(38, 9, 1.0, 302.045261, cpv(127.0, 23.0), cpvzero, cpvzero, 2.142134, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(38, 10, 1.0, 302.045261, cpv(692.0, 24.0), cpvzero, cpvzero, -2.122451, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(40, 11, 1.0, 302.045261, cpv(204.0, 21.0), cpvzero, cpvzero, 2.158799, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(40, 12, 1.0, 302.045261, cpv(606.0, 23.0), cpvzero, cpvzero, -2.181522, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(41, 13, 1.0, 302.045261, cpv(275.0, 20.0), cpvzero, cpvzero, 2.181522, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(41, 14, 1.0, 302.045261, cpv(529.0, 25.0), cpvzero, cpvzero, -2.236766, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(39, 15, 1.0, 302.045261, cpv(353.0, 22.0), cpvzero, cpvzero, 2.191046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(39, 16, 1.0, 302.045261, cpv(453.0, 23.0), cpvzero, cpvzero, -2.170847, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(43, 17, 1.0, 103.311066, cpv(247.0, 100.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(43, 18, 1.0, 103.311066, cpv(575.0, 105.0), cpvzero, cpvzero, -0.040794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(46, 19, 1.0, 103.311066, cpv(303.0, 135.0), cpvzero, cpvzero, 0.575072, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(46, 20, 1.0, 103.311066, cpv(520.0, 139.0), cpvzero, cpvzero, -0.528074, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(44, 21, 1.0, 103.311066, cpv(374.0, 164.0), cpvzero, cpvzero, 0.260602, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(44, 22, 1.0, 103.311066, cpv(443.0, 166.0), cpvzero, cpvzero, -0.097516, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(47, 23, 1.0, 103.311066, cpv(185.0, 190.0), cpvzero, cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(47, 24, 1.0, 103.311066, cpv(644.0, 186.0), cpvzero, cpvzero, 2.426255, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(45, 25, 1.0, 103.311066, cpv(139.0, 135.0), cpvzero, cpvzero, -2.098871, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(45, 26, 1.0, 103.311066, cpv(683.0, 127.0), cpvzero, cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(44, 27, 1.0, 103.311066, cpv(246.0, 236.0), cpvzero, cpvzero, -2.512796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(44, 28, 1.0, 103.311066, cpv(586.0, 231.0), cpvzero, cpvzero, 2.568627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(43, 29, 1.0, 103.311066, cpv(319.0, 267.0), cpvzero, cpvzero, -2.986596, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(43, 30, 1.0, 103.311066, cpv(506.0, 265.0), cpvzero, cpvzero, 2.789776, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(46, 31, 1.0, 103.311066, cpv(411.0, 277.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpv(-1.187926, 28.277002), cpv(9.0, 319.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpv(-1.0, 27.0), cpv(10.251122, 225.637813)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpv(-0.0, 31.0), cpv(11.136379, 162.727243)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpv(-1.0, 32.0), cpv(8.255311, 87.287642)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpv(-0.0, 33.0), cpv(796.334524, 329.334524)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body0, cpv(-0.0, 33.0), cpv(794.000638, 244.455318)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body0, cpv(0.0, 33.0), cpv(794.783782, 170.788442)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body0, cpv(-1.0, 31.0), cpv(793.505393, 94.115133)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body0, cpv(0.0, 30.0), cpv(101.764646, 6.777272)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpv(-0.0, 32.0), cpv(719.253066, 7.228882)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body0, cpv(0.0, 31.0), cpv(631.396190, 5.222667)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body0, cpv(-0.0, 30.0), cpv(179.038491, 4.358994)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body0, cpv(0.0, 31.0), cpv(553.375869, 5.847532)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body0, cpv(-0.0, 31.0), cpv(249.603810, 2.222667)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body0, cpv(-0.0, 31.0), cpv(478.584525, 5.494799)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body0, cpv(-0.0, 30.0), cpv(328.587996, 4.562854)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpv(-9.0, -13.0), cpv(228.0, 70.0), 19.723083, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpv(10.0, -13.0), cpv(602.0, 77.0), 22.671568, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body19, cpv(15.0, -8.0), cpv(-16.0, -7.0), 43.829214, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body20, cpv(-16.0, -6.0), cpv(15.0, -8.0), 41.725292, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body19, cpv(-17.0, -6.0), cpv(14.0, -7.0), 44.045431, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body21, cpv(-16.0, -7.0), cpv(15.0, -7.0), 43.289722, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body22, cpv(-17.0, -7.0), cpv(14.0, -7.0), 51.400389, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpv(17.563504, -8.277881), cpv(118.0, 106.0), 18.681542, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body25, cpv(17.000510, -7.140214), cpv(-15.691983, -6.838250), 42.720019, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body23, cpv(15.513029, -7.572711), cpv(-14.382431, -8.194246), 48.548944, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body27, cpv(16.024320, -7.564467), cpv(-15.513029, -6.028760), 50.990195, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body29, cpv(16.0, -7.0), cpv(-16.209572, -6.576455), 63.890531, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpv(16.409977, -6.611556), cpv(-14.0, -7.0), 68.658576, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body30, cpv(15.992743, -6.342884), cpv(-14.459805, -6.849382), 53.488316, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body28, cpv(17.287803, -6.175099), cpv(-15.911424, -6.695267), 47.801674, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body24, cpv(14.310835, -7.155418), cpv(-17.423928, -5.865726), 42.190046, 20.0, 19.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body0, body26, cpv(705.0, 96.0), cpv(-16.546903, -6.260990), 21.023796, 20.0, 19.0));
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


const kineticArtLevel Level27 = {
	27,
	"Level 27",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

