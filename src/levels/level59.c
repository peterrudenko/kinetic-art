
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level58;
extern kineticArtLevel Level60;
#define PREV_LEVEL &Level58
#define NEXT_LEVEL &Level60


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 28, total joints: 28 */
	//bg03
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(140, 1, 1.0, inf, cpv(150.0, 170.0), cpvzero, cpvzero, 1.667270, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body2 = createPolyUniWrapper(141, 2, 1.0, inf, cpv(158.0, 140.0), cpvzero, cpvzero, -1.158386, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body3 = createPolyUniWrapper(139, 3, 1.0, inf, cpv(175.0, 112.0), cpvzero, cpvzero, 2.297439, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body4 = createPolyUniWrapper(140, 4, 1.0, inf, cpv(201.0, 94.0), cpvzero, cpvzero, 2.642246, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body5 = createPolyUniWrapper(141, 5, 1.0, inf, cpv(231.0, 88.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body6 = createPolyUniWrapper(139, 6, 1.0, inf, cpv(261.0, 90.0), cpvzero, cpvzero, -2.880990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 7);
	cpBody *body7 = createPolyUniWrapper(140, 7, 1.0, inf, cpv(289.0, 102.0), cpvzero, cpvzero, -2.543174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body8 = createPolyUniWrapper(141, 8, 1.0, inf, cpv(313.0, 123.0), cpvzero, cpvzero, -2.199593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body9 = createPolyUniWrapper(139, 9, 1.0, inf, cpv(323.0, 150.0), cpvzero, cpvzero, -1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body10 = createPolyUniWrapper(140, 10, 1.0, inf, cpv(320.0, 181.0), cpvzero, cpvzero, 1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body11 = createPolyUniWrapper(141, 11, 1.0, inf, cpv(309.0, 212.0), cpvzero, cpvzero, 2.013171, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body12 = createPolyUniWrapper(139, 12, 1.0, inf, cpv(290.0, 239.0), cpvzero, cpvzero, -0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body13 = createPolyUniWrapper(140, 13, 1.0, inf, cpv(258.0, 253.0), cpvzero, cpvzero, -0.229232, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body14 = createPolyUniWrapper(141, 14, 1.0, inf, cpv(227.0, 254.0), cpvzero, cpvzero, 0.170735, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body15 = createPolyUniWrapper(139, 15, 1.0, inf, cpv(197.0, 247.0), cpvzero, cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body16 = createPolyUniWrapper(140, 16, 1.0, inf, cpv(170.0, 230.0), cpvzero, cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body17 = createPolyUniWrapper(141, 17, 1.0, inf, cpv(155.0, 202.0), cpvzero, cpvzero, 1.272297, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body18 = createPolyUniWrapper(139, 18, 1.0, 90.166667, cpv(400.0, 38.0), cpvzero, cpvzero, -1.623379, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 7);
	cpBody *body19 = createPolyUniWrapper(140, 19, 1.0, 90.166667, cpv(329.0, 70.0), cpvzero, cpvzero, -0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 7);
	cpBody *body20 = createPolyUniWrapper(106, 20, 0.200000, 75.803873, cpv(205.0, 171.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body21 = createPolyUniWrapper(106, 21, 0.200000, 75.803873, cpv(233.0, 146.0), cpvzero, cpvzero, 1.545161, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body22 = createPolyUniWrapper(106, 22, 0.200000, 75.803873, cpv(260.0, 170.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body23 = createPolyUniWrapper(106, 23, 0.200000, 75.803873, cpv(233.0, 198.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body24 = createPolyUniWrapper(114, 24, 0.200000, 63.887283, cpv(254.0, 189.0), cpvzero, cpvzero, 2.379446, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body25 = createPolyUniWrapper(114, 25, 0.200000, 63.887283, cpv(254.0, 151.0), cpvzero, cpvzero, 0.625485, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body26 = createPolyUniWrapper(114, 26, 0.200000, 63.887283, cpv(213.0, 152.0), cpvzero, cpvzero, -0.753151, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body27 = createPolyUniWrapper(114, 27, 0.200000, 63.887283, cpv(214.0, 191.0), cpvzero, cpvzero, -2.524401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpBody *body29 = createPolyUniWrapper(122, 29, 0.200000, 60.5, cpv(232.0, 172.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 3);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body18, cpv(400.0, 38.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body3, cpv(10.215512, 2.154835), cpv(-12.041595, -0.0), 10.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body4, cpv(10.0, 2.0), cpv(-12.130921, 1.356748), 10.049876, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body5, cpv(12.883133, 1.739223), cpv(-12.0, 2.0), 6.082763, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body6, cpv(12.768968, 0.976450), cpv(-12.110145, 1.159482), 6.324555, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body7, cpv(14.998378, -0.220564), cpv(-12.205631, -0.150223), 5.385165, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body8, cpv(12.303658, -1.272792), cpv(-8.822575, -1.470429), 7.615773, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body9, cpv(-10.429032, -0.485071), cpv(-12.162237, 0.282843), 9.219544, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body10, cpv(-12.129113, 2.425823), cpv(9.458889, 0.727607), 11.180340, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body11, cpv(10.688735, -1.658597), cpv(11.605896, 1.141564), 10.630146, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body12, cpv(13.049472, -3.116292), cpv(-12.654479, -1.965744), 10.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body13, cpv(11.825521, -2.038883), cpv(-12.887165, -1.980144), 6.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body14, cpv(12.016655, -1.897367), cpv(-12.335242, -0.917497), 6.324555, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body15, cpv(-10.606602, 2.121320), cpv(-13.914022, -0.632456), 7.810250, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body16, cpv(8.822575, -1.470429), cpv(13.435029, 2.121320), 9.486833, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body17, cpv(11.045174, -0.064216), cpv(-13.307385, -0.955779), 8.544004, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body1, cpv(-12.482644, -1.087937), cpv(-12.939550, 1.252215), 6.324555, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body2, cpv(14.117732, 0.830455), cpv(12.196345, -2.061354), 7.211103, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body6, cpv(-0.424264, 2.969848), cpv(-0.644157, 5.346500), 67.082039, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body20, cpvzero, cpv(27.0, 1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body21, cpvzero, cpv(25.965825, 1.666119)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body22, cpvzero, cpv(28.0, -2.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body23, cpvzero, cpv(26.0, -1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body24, cpvzero, cpv(4.175734, 27.487511)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body25, cpvzero, cpv(-5.539641, 29.905056)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body26, cpvzero, cpv(0.182384, 27.585626)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body29, body27, cpvzero, cpv(-3.682935, 25.912082)));
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


const kineticArtLevel Level59 = {
	59,
	"Level 59",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

