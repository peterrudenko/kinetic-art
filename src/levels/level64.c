
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level63;
extern kineticArtLevel Level65;
#define PREV_LEVEL &Level63
#define NEXT_LEVEL &Level65


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 37, total joints: 40 */
	int health = 4;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(195, 1, 1.0, 70.876156, cpv(246.999196, 53.999473), cpv(-0.007105, -0.005828), cpvzero, 21.700001, 9.020000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(196, 2, 1.0, 70.876156, cpv(278.529277, 77.764014), cpv(-26.923071, 14.785600), cpvzero, 112.816673, -2.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(194, 3, 1.0, 70.876156, cpv(312.393049, 100.640507), cpv(-11.742073, -35.488871), cpvzero, -14.816667, -1.880000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(195, 4, 1.0, 70.876156, cpv(343.264137, 127.534163), cpv(-3.423665, -56.494948), cpvzero, 37.450002, 1.240000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(196, 5, 1.0, 70.876156, cpv(378.511852, 148.005013), cpv(-33.613739, -2.976846), cpvzero, 23.545083, 6.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(194, 6, 1.0, 70.876156, cpv(410.838897, 160.147996), cpv(-20.251916, -27.951012), cpvzero, -0.173356, -5.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(195, 7, 1.0, 70.876156, cpv(448.253555, 133.807427), cpv(-31.493150, -52.166765), cpvzero, -113.166673, 4.080000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(196, 8, 1.0, 70.876156, cpv(480.481274, 108.539708), cpv(-3.852569, -20.784016), cpvzero, -90.883338, -3.360000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(194, 9, 1.0, 70.876156, cpv(515.366007, 84.737048), cpv(-17.328935, -35.490315), cpvzero, 33.950002, -0.150000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(195, 10, 1.0, 70.876156, cpv(546.0, 56.0), cpv(0.0, -0.0), cpvzero, 46.900002, 2.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(196, 11, 1.0, 70.876156, cpv(67.999872, 102.999698), cpv(0.002957, 0.010977), cpvzero, -104.183339, 8.160000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(194, 12, 1.0, 70.876156, cpv(76.116285, 136.954025), cpv(5.580650, 7.478143), cpvzero, -0.836992, 7.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(195, 13, 1.0, 70.876156, cpv(97.123660, 162.863715), cpv(10.064671, 6.034783), cpvzero, -20.174782, -0.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(196, 14, 1.0, 70.876156, cpv(129.736568, 188.622785), cpv(35.771999, -25.737395), cpvzero, 102.316672, 0.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(194, 15, 1.0, 70.876156, cpv(161.766579, 211.968790), cpv(12.264851, -3.316956), cpvzero, -0.552595, 9.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(195, 16, 1.0, 70.876156, cpv(200.416604, 195.270997), cpv(9.895602, 15.155850), cpvzero, -34.766668, -6.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(196, 17, 1.0, 70.876156, cpv(232.183830, 182.403750), cpv(-5.700023, -8.351543), cpvzero, -24.966668, -8.600000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(194, 18, 1.0, 70.876156, cpv(254.0, 155.0), cpv(-0.0, -0.0), cpvzero, 26.950001, -8.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(195, 19, 1.0, 70.876156, cpv(536.000059, 152.000138), cpv(0.001647, 0.003013), cpvzero, -89.250005, -6.970000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(196, 20, 1.0, 70.876156, cpv(551.064345, 180.967000), cpv(-17.948546, 15.790090), cpvzero, -31.850002, -8.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(194, 21, 1.0, 70.876156, cpv(570.275598, 206.353938), cpv(1.892582, 3.821663), cpvzero, -68.950004, 9.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(195, 22, 1.0, 70.876156, cpv(593.132543, 227.208801), cpv(5.283421, 0.851290), cpvzero, 92.166671, -0.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(196, 23, 1.0, 70.876156, cpv(622.156371, 237.137632), cpv(4.815495, 5.264270), cpvzero, -109.666672, -2.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(194, 24, 1.0, 70.876156, cpv(654.823578, 235.400467), cpv(7.134684, 4.697212), cpvzero, -1.107184, 4.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(195, 25, 1.0, 70.876156, cpv(678.661073, 212.443747), cpv(-5.075779, -12.595073), cpvzero, 57.655863, 8.590000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(196, 26, 1.0, 70.876156, cpv(701.261444, 188.391320), cpv(15.604056, 6.098110), cpvzero, 21.449488, 7.520000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(194, 27, 1.0, 70.876156, cpv(719.912953, 161.146937), cpv(11.462456, 3.603908), cpvzero, -0.094894, 2.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(195, 28, 1.0, 70.876156, cpv(732.0, 127.0), cpv(-0.0, -0.0), cpvzero, -3.616667, 3.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(24, 29, 1.0, 404.942221, cpv(406.916234, 224.711456), cpv(-2.163958, -18.193124), cpvzero, 0.096125, -1.530000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(31, 30, 1.0, 141.849016, cpv(390.007789, 313.573279), cpv(3.602903, -18.698314), cpvzero, -1.946537, 8.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(31, 31, 1.0, 141.849016, cpv(421.293160, 323.854690), cpv(10.373331, -10.215451), cpvzero, 3.003390, -1.930000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(49, 32, 1.0, 167.604256, cpv(400.556249, 279.954659), cpv(-9.800675, -27.868463), cpvzero, 3.035739, 3.260000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(49, 33, 1.0, 167.604256, cpv(650.877389, 267.839246), cpv(-16.579775, 9.619360), cpvzero, 3.448235, -1.920000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(49, 34, 1.0, 167.604256, cpv(148.756175, 245.754201), cpv(-4.771011, -7.738893), cpvzero, -2.438312, 4.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(58, 35, 1.0, 179.365914, cpv(390.175609, 352.416326), cpv(13.460346, -22.858420), cpvzero, 3.306408, 0.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(49, 36, 1.0, 167.604256, cpv(726.359201, 206.911114), cpv(12.918595, 7.296771), cpvzero, 3.245985, -4.210000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(49, 37, 1.0, 167.604256, cpv(71.168820, 180.518744), cpv(-15.065488, 5.459161), cpvzero, -3.001735, 1.210000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(247.0, 54.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 33.015148, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 34.481879, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 35.468296, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 36.221541, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 31.0, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 41.773197, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 36.400549, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 37.121422, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 36.400549, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body11, cpv(68.0, 103.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body12, cpvzero, cpvzero, 31.622777, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpvzero, cpvzero, 30.479501, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 38.832976, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 37.696154, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 40.112342, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 32.202484, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body18, cpvzero, cpvzero, 32.802439, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body19, cpv(536.0, 152.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 30.870698, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 30.528675, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 30.083218, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 30.066593, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 32.0, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body25, cpvzero, cpvzero, 31.320920, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 30.610456, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body27, cpvzero, cpvzero, 30.083218, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body28, cpvzero, cpvzero, 32.249031, 200.0, 1.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body0, cpvzero, cpv(546.0, 56.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body28, body0, cpvzero, cpv(732.0, 127.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body0, cpvzero, cpv(254.0, 155.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body6, cpv(-1.0, -30.0), cpv(-0.810277, 7.589190), 21.840330, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body15, cpv(0.981499, 14.967854), cpv(-1.090407, 6.052682), 15.033296, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body33, cpv(-1.715378, 7.357152), cpv(0.523424, 14.132446), 14.142136, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body29, cpv(1.0, 14.0), cpv(-0.250098, 24.890225), 14.035669, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body29, cpv(1.697749, 15.037209), cpv(-0.250098, 24.890225), 56.462377, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body29, cpv(1.030116, 15.097644), cpv(-0.250098, 24.890225), 60.827625, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body32, cpv(-0.0, 17.0), cpv(0.0, -15.0), 40.012498, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body37, cpv(-0.081402, 6.473546), cpv(1.476641, 13.957777), 26.172505, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body27, cpv(1.304180, 14.808751), cpv(-0.702926, 8.633179), 21.840330, 100.0, 3.0));
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


const kineticArtLevel Level64 = {
	64,
	"Level 64",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

