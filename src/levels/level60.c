
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level59;
extern kineticArtLevel Level61;
#define PREV_LEVEL &Level59
#define NEXT_LEVEL &Level61


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

{  /* Total bodies: 50, total joints: 51 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(12, 1, 1.0, 107.584618, cpv(207.0, 46.0), cpvzero, cpvzero, 0.0, 1.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(13, 2, 1.0, 107.584618, cpv(221.0, 79.0), cpvzero, cpvzero, 0.0, 3.170000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(9, 3, 1.0, 107.584618, cpv(242.0, 108.0), cpvzero, cpvzero, 0.0, -0.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(10, 4, 1.0, 107.584618, cpv(259.0, 127.0), cpvzero, cpvzero, 0.0, -7.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(11, 5, 1.0, 107.584618, cpv(278.0, 148.0), cpvzero, cpvzero, 0.0, -1.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(12, 6, 1.0, 107.584618, cpv(307.0, 169.0), cpvzero, cpvzero, 0.0, -7.240000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(13, 7, 1.0, 107.584618, cpv(339.0, 184.0), cpvzero, cpvzero, 0.0, 4.780000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(9, 8, 1.0, 107.584618, cpv(366.0, 191.0), cpvzero, cpvzero, 0.0, 8.670000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(10, 9, 1.0, 107.584618, cpv(400.0, 193.0), cpvzero, cpvzero, 0.0, 2.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(11, 10, 1.0, 107.584618, cpv(433.0, 188.0), cpvzero, cpvzero, 0.0, 3.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(12, 11, 1.0, 107.584618, cpv(459.0, 181.0), cpvzero, cpvzero, 0.0, 1.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(13, 12, 1.0, 107.584618, cpv(489.0, 170.0), cpvzero, cpvzero, 0.0, -0.550000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(9, 13, 1.0, 107.584618, cpv(509.0, 152.0), cpvzero, cpvzero, 0.0, -2.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(10, 14, 1.0, 107.584618, cpv(537.0, 123.0), cpvzero, cpvzero, 0.0, 4.860000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(11, 15, 1.0, 107.584618, cpv(558.0, 106.0), cpvzero, cpvzero, 0.0, -2.790000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(12, 16, 1.0, 107.584618, cpv(576.0, 81.0), cpvzero, cpvzero, 0.0, -1.690000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(13, 17, 1.0, 107.584618, cpv(586.0, 48.0), cpvzero, cpvzero, 0.0, -4.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(11, 18, 1.0, 107.584618, cpv(63.0, 81.0), cpvzero, cpvzero, 0.0, 8.040000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(12, 19, 1.0, 107.584618, cpv(95.0, 103.0), cpvzero, cpvzero, 0.0, 9.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(13, 20, 1.0, 107.584618, cpv(118.0, 125.0), cpvzero, cpvzero, 0.0, 1.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(9, 21, 1.0, 107.584618, cpv(124.0, 152.0), cpvzero, cpvzero, 0.0, 6.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(10, 22, 1.0, 107.584618, cpv(110.0, 175.0), cpvzero, cpvzero, 0.0, 8.390000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(11, 23, 1.0, 107.584618, cpv(92.0, 198.0), cpvzero, cpvzero, 0.0, 9.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(12, 24, 1.0, 107.584618, cpv(75.0, 218.0), cpvzero, cpvzero, 0.0, -7.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(13, 25, 1.0, 107.584618, cpv(66.0, 242.0), cpvzero, cpvzero, 0.0, 9.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(9, 26, 1.0, 107.584618, cpv(83.0, 264.0), cpvzero, cpvzero, 0.0, 6.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(10, 27, 1.0, 107.584618, cpv(144.0, 214.0), cpvzero, cpvzero, 0.0, -1.830000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(11, 28, 1.0, 107.584618, cpv(166.0, 228.0), cpvzero, cpvzero, 0.0, -0.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(12, 29, 1.0, 107.584618, cpv(178.0, 255.0), cpvzero, cpvzero, 0.0, -6.780000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(13, 30, 1.0, 107.584618, cpv(167.0, 285.0), cpvzero, cpvzero, 0.0, 4.350000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(9, 31, 1.0, 107.584618, cpv(145.0, 301.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(10, 32, 1.0, 107.584618, cpv(123.0, 315.0), cpvzero, cpvzero, 0.0, 7.580000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(11, 33, 1.0, 107.584618, cpv(717.0, 81.0), cpvzero, cpvzero, 0.0, -2.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(12, 34, 1.0, 107.584618, cpv(692.0, 96.0), cpvzero, cpvzero, 0.0, -0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(13, 35, 1.0, 107.584618, cpv(675.0, 123.0), cpvzero, cpvzero, 0.0, -7.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(9, 36, 1.0, 107.584618, cpv(669.0, 154.0), cpvzero, cpvzero, 0.0, -9.240000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(10, 37, 1.0, 107.584618, cpv(679.0, 180.0), cpvzero, cpvzero, 0.0, 7.300000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(11, 38, 1.0, 107.584618, cpv(697.0, 200.0), cpvzero, cpvzero, 0.0, 1.680000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(12, 39, 1.0, 107.584618, cpv(716.0, 220.0), cpvzero, cpvzero, 0.0, -5.390000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(13, 40, 1.0, 107.584618, cpv(717.0, 254.0), cpvzero, cpvzero, 0.0, -6.870000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(9, 41, 1.0, 107.584618, cpv(712.0, 282.0), cpvzero, cpvzero, 0.0, -4.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(10, 42, 1.0, 107.584618, cpv(686.0, 304.0), cpvzero, cpvzero, 0.0, 9.750000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(11, 43, 1.0, 107.584618, cpv(658.0, 310.0), cpvzero, cpvzero, 0.0, 0.570000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(12, 44, 1.0, 107.584618, cpv(634.0, 229.0), cpvzero, cpvzero, 0.0, 8.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(13, 45, 1.0, 107.584618, cpv(613.0, 244.0), cpvzero, cpvzero, 0.0, -6.310000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(9, 46, 1.0, 107.584618, cpv(596.0, 265.0), cpvzero, cpvzero, 0.0, 8.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(10, 47, 1.0, 107.584618, cpv(584.0, 290.0), cpvzero, cpvzero, 0.0, 8.780000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(11, 48, 1.0, 107.584618, cpv(585.0, 316.0), cpvzero, cpvzero, 0.0, -4.340000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(12, 49, 1.0, 107.584618, cpv(599.0, 337.0), cpvzero, cpvzero, 0.0, -6.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(25, 50, 1.0, 404.942221, cpv(399.0, 241.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(207.0, 46.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body2, cpvzero, cpvzero, 35.846897, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body3, cpvzero, cpvzero, 35.805028, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpvzero, cpvzero, 25.495098, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body5, cpvzero, cpvzero, 28.319605, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body6, cpvzero, cpvzero, 35.805028, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpvzero, cpvzero, 35.341194, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body8, cpvzero, cpvzero, 27.892651, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body9, cpvzero, cpvzero, 34.058773, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpvzero, cpvzero, 33.376639, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body12, cpvzero, cpvzero, 31.953091, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpvzero, cpvzero, 26.907248, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body14, cpvzero, cpvzero, 40.311289, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpvzero, cpvzero, 27.018512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body16, cpvzero, cpvzero, 30.805844, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body17, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body0, cpvzero, cpv(586.0, 48.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body18, cpv(63.0, 81.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body19, cpvzero, cpvzero, 38.832976, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body20, cpvzero, cpvzero, 31.827661, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body21, cpvzero, cpvzero, 27.658633, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body22, cpvzero, cpvzero, 26.925824, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body23, cpvzero, cpvzero, 29.206164, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body24, cpvzero, cpvzero, 26.248809, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body25, cpvzero, cpvzero, 25.632011, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body26, cpvzero, cpvzero, 27.802878, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body27, cpv(144.0, 214.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body28, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body29, cpvzero, cpvzero, 29.546573, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body30, cpvzero, cpvzero, 31.953091, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body31, cpvzero, cpvzero, 27.202941, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body32, cpvzero, cpvzero, 26.076810, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body33, cpv(717.0, 81.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body34, cpvzero, cpvzero, 29.154759, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body35, cpvzero, cpvzero, 31.906112, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body36, cpvzero, cpvzero, 31.575307, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body37, cpvzero, cpvzero, 27.856777, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body38, cpvzero, cpvzero, 26.907248, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body39, cpvzero, cpvzero, 27.586228, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body40, cpvzero, cpvzero, 34.014703, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body41, cpvzero, cpvzero, 28.442925, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body42, cpvzero, cpvzero, 34.058773, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body43, cpvzero, cpvzero, 28.635642, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body44, cpv(634.0, 229.0), cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body45, cpvzero, cpvzero, 25.806976, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body46, cpvzero, cpvzero, 27.018512, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body47, cpvzero, cpvzero, 27.730849, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body48, cpvzero, cpvzero, 26.019224, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body49, cpvzero, cpvzero, 25.238859, 300.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body9, cpv(-1.0, -28.0), cpv(-2.0, 13.0), 18.439089, 100.0, 3.0));
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
	BGBLIT(rc_bg24)
}


const kineticArtLevel Level60 = {
	60,
	"Level 60",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

