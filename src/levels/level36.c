
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level35;
extern kineticArtLevel Level37;
#define PREV_LEVEL &Level35
#define NEXT_LEVEL &Level37


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_b].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 34, total joints: 34 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(17, 1, 1.0, 183.743659, cpv(478.0, 244.0), cpvzero, cpvzero, -1.620755, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(17, 2, 1.0, 183.743659, cpv(564.0, 163.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(17, 3, 1.0, 183.743659, cpv(636.0, 250.0), cpvzero, cpvzero, 1.543026, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(17, 4, 1.0, 183.743659, cpv(561.0, 327.0), cpvzero, cpvzero, 3.129688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(17, 5, 1.0, 183.743659, cpv(287.0, 302.0), cpvzero, cpvzero, 2.489262, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(17, 6, 1.0, 183.743659, cpv(289.0, 188.0), cpvzero, cpvzero, 0.703016, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(17, 7, 1.0, 183.743659, cpv(172.0, 182.0), cpvzero, cpvzero, -0.807617, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(17, 8, 1.0, 183.743659, cpv(180.0, 294.0), cpvzero, cpvzero, -2.368852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(46, 9, 1.0, 103.311066, cpv(437.0, 242.0), cpvzero, cpvzero, -1.506369, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(46, 10, 1.0, 103.311066, cpv(679.0, 252.0), cpvzero, cpvzero, 1.625536, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(46, 11, 1.0, 103.311066, cpv(563.0, 124.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(46, 12, 1.0, 103.311066, cpv(562.0, 364.0), cpvzero, cpvzero, 3.112615, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(46, 13, 1.0, 103.311066, cpv(311.0, 330.0), cpvzero, cpvzero, 2.429235, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(46, 14, 1.0, 103.311066, cpv(141.0, 157.0), cpvzero, cpvzero, -0.927295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(46, 15, 1.0, 103.311066, cpv(316.0, 162.0), cpvzero, cpvzero, 0.841519, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(46, 16, 1.0, 103.311066, cpv(150.0, 323.0), cpvzero, cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(50, 17, 1.0, 167.604256, cpv(261.0, 214.0), cpvzero, cpvzero, 0.839400, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(50, 18, 1.0, 167.604256, cpv(214.0, 265.0), cpvzero, cpvzero, -2.377025, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(50, 19, 1.0, 167.604256, cpv(520.0, 243.0), cpvzero, cpvzero, -1.539061, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(50, 20, 1.0, 167.604256, cpv(593.0, 247.0), cpvzero, cpvzero, 1.612439, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(58, 21, 1.0, 179.365914, cpv(206.0, 216.0), cpvzero, cpvzero, -0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(58, 22, 1.0, 179.365914, cpv(258.0, 268.0), cpvzero, cpvzero, 2.419401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(58, 23, 1.0, 179.365914, cpv(561.0, 208.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(58, 24, 1.0, 179.365914, cpv(561.0, 285.0), cpvzero, cpvzero, 3.129688, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(118, 35, 1.0, inf, cpv(233.0, 244.0), cpvzero, cpvzero, -0.292443, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(107, 26, 1.0, 75.803873, cpv(400.0, 240.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(107, 27, 1.0, 75.803873, cpv(566.0, 88.0), cpvzero, cpvzero, 1.527345, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(107, 28, 1.0, 75.803873, cpv(719.0, 253.0), cpvzero, cpvzero, 3.107124, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(107, 29, 1.0, 75.803873, cpv(561.0, 401.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(107, 30, 1.0, 75.803873, cpv(339.0, 360.0), cpvzero, cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(107, 31, 1.0, 75.803873, cpv(344.0, 137.0), cpvzero, cpvzero, 2.394151, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(107, 32, 1.0, 75.803873, cpv(110.0, 134.0), cpvzero, cpvzero, 0.671144, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(107, 33, 1.0, 75.803873, cpv(120.0, 350.0), cpvzero, cpvzero, -0.749699, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(118, 34, 1.0, inf, cpv(559.0, 248.0), cpvzero, cpvzero, -0.244979, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body35, cpv(0.678896, 21.921202), cpv(7.269086, 10.543263)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body22, cpv(-0.596003, 22.195603), cpv(-1.429255, -22.582233)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body5, cpv(0.378412, 14.861252), cpv(-1.600379, -22.615012)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body30, body13, cpv(21.920310, -0.707107), cpv(0.722422, -19.195784)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body35, cpv(0.0, 18.384776), cpv(-9.081209, -18.399229)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body21, cpv(-0.502707, 22.621832), cpv(-0.0, -25.455844)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body7, cpv(0.600000, 15.800000), cpv(-0.879738, -24.067116)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body32, body14, cpv(17.804255, -0.092131), cpv(-0.600000, -20.800000)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body35, cpv(0.324413, 19.102219), cpv(18.306564, -12.242129)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body17, cpv(-1.745609, 21.141259), cpv(0.496162, -17.022157)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body6, cpv(-0.539411, 15.611183), cpv(1.099087, -21.904155)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body31, body15, cpv(18.425200, 0.715542), cpv(-0.364896, -19.101488)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body35, cpv(1.060430, 16.996337), cpv(-13.508556, 3.243289)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body18, cpv(-0.304300, 24.039705), cpv(3.961885, -20.428007)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body8, cpv(0.707107, 16.263456), cpv(1.736300, -25.435905)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body33, body16, cpv(20.518269, -0.025238), cpv(1.414214, -19.798990)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body35, body0, cpvzero, cpv(233.0, 244.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body34, cpv(0.571141, 17.990937), cpv(-19.160314, -9.943961)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body19, cpv(0.898877, 22.072427), cpv(0.364896, -20.021660)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body1, cpv(0.096573, 17.029113), cpv(2.197255, -23.920119)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body9, cpv(19.0, 0.0), cpv(0.836970, -18.091420)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body34, cpv(0.874241, 20.981795), cpv(18.432708, 0.485071)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body20, cpv(-1.638257, 22.963365), cpv(1.165655, -20.065923)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body3, cpv(0.984824, 17.973039), cpv(2.693406, -24.934826)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body10, cpv(20.022582, -0.310160), cpv(0.902755, -20.079468)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body34, cpv(-1.0, 19.0), cpv(6.063391, -20.130457)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body23, cpv(-1.0, 22.0), cpv(2.0, -23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body2, cpv(0.0, 17.0), cpv(-1.0, -22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body11, cpv(17.939574, 1.780926), cpv(2.0, -18.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body34, cpv(0.761851, 20.010487), cpv(-3.152963, 16.734958)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body24, cpv(0.738043, 22.010345), cpv(1.238008, -19.986679)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body4, cpv(0.536007, 16.022256), cpv(0.249982, -20.998512)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body12, cpv(19.0, -0.0), cpv(1.521100, -17.963470)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body34, body0, cpvzero, cpv(559.0, 248.0)));
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
	BGBLIT(rc_bg08)
}


const kineticArtLevel Level36 = {
	36,
	"Level 36",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

