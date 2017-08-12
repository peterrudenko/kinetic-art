
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level36;
extern kineticArtLevel Level38;
#define PREV_LEVEL &Level36
#define NEXT_LEVEL &Level38


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

{  /* Total bodies: 51, total joints: 55 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(121, 1, 1.0, 60.5, cpv(412.0, 35.0), cpvzero, cpvzero, 0.0, -5.420000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(120, 2, 1.0, 60.5, cpv(423.0, 70.0), cpvzero, cpvzero, 0.0, -9.420000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(121, 3, 1.0, 60.5, cpv(441.0, 102.0), cpvzero, cpvzero, 0.0, 5.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(120, 4, 1.0, 60.5, cpv(469.0, 134.0), cpvzero, cpvzero, 0.0, 0.520000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(121, 5, 1.0, 60.5, cpv(502.0, 156.0), cpvzero, cpvzero, 0.0, -1.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(120, 6, 1.0, 60.5, cpv(537.0, 176.0), cpvzero, cpvzero, 0.0, 3.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(121, 7, 1.0, 60.5, cpv(582.0, 194.0), cpvzero, cpvzero, 0.0, -4.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(120, 8, 1.0, 60.5, cpv(621.0, 196.0), cpvzero, cpvzero, 0.0, -2.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(121, 9, 1.0, 60.5, cpv(660.0, 198.0), cpvzero, cpvzero, 0.0, -3.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(120, 10, 1.0, 60.5, cpv(700.0, 190.0), cpvzero, cpvzero, 0.0, 5.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(121, 11, 1.0, 60.5, cpv(738.0, 182.0), cpvzero, cpvzero, 0.0, 2.490000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(120, 12, 1.0, 60.5, cpv(768.0, 163.0), cpvzero, cpvzero, 0.0, 3.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(121, 13, 1.0, 60.5, cpv(390.0, 65.0), cpvzero, cpvzero, 0.0, 5.740000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(120, 14, 1.0, 60.5, cpv(376.0, 100.0), cpvzero, cpvzero, 0.0, 1.370000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(121, 15, 1.0, 60.5, cpv(357.0, 134.0), cpvzero, cpvzero, 0.0, -7.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(120, 16, 1.0, 60.5, cpv(330.0, 160.0), cpvzero, cpvzero, 0.0, -7.400000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(121, 17, 1.0, 60.5, cpv(301.0, 181.0), cpvzero, cpvzero, 0.0, -4.320000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(120, 18, 1.0, 60.5, cpv(262.0, 198.0), cpvzero, cpvzero, 0.0, -0.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(121, 19, 1.0, 60.5, cpv(221.0, 208.0), cpvzero, cpvzero, 0.0, 7.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(120, 20, 1.0, 60.5, cpv(183.0, 214.0), cpvzero, cpvzero, 0.0, -9.9, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(121, 21, 1.0, 60.5, cpv(137.0, 214.0), cpvzero, cpvzero, 0.0, 0.660000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(120, 22, 1.0, 60.5, cpv(101.0, 210.0), cpvzero, cpvzero, 0.0, -0.330000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(121, 23, 1.0, 60.5, cpv(64.0, 199.0), cpvzero, cpvzero, 0.0, 8.540000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(120, 24, 1.0, 60.5, cpv(34.0, 180.0), cpvzero, cpvzero, 0.0, 0.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(123, 25, 1.0, 60.5, cpv(523.0, 19.0), cpvzero, cpvzero, 0.0, -8.890000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(122, 26, 1.0, 60.5, cpv(534.0, 56.0), cpvzero, cpvzero, 0.0, 0.650000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(123, 27, 1.0, 60.5, cpv(554.0, 88.0), cpvzero, cpvzero, 0.0, 9.510000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(122, 28, 1.0, 60.5, cpv(588.0, 115.0), cpvzero, cpvzero, 0.0, -9.720000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(123, 29, 1.0, 60.5, cpv(621.0, 129.0), cpvzero, cpvzero, 0.0, 5.040000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(122, 30, 1.0, 60.5, cpv(658.0, 133.0), cpvzero, cpvzero, 0.0, 8.950000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(123, 31, 1.0, 60.5, cpv(695.0, 134.0), cpvzero, cpvzero, 0.0, -1.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(122, 32, 1.0, 60.5, cpv(733.0, 134.0), cpvzero, cpvzero, 0.0, -9.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(123, 33, 1.0, 60.5, cpv(768.0, 126.0), cpvzero, cpvzero, 0.0, 6.780000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(122, 34, 1.0, 60.5, cpv(308.0, 20.0), cpvzero, cpvzero, 0.0, -0.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(123, 35, 1.0, 60.5, cpv(292.0, 52.0), cpvzero, cpvzero, 0.0, 3.820000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(122, 36, 1.0, 60.5, cpv(273.0, 83.0), cpvzero, cpvzero, 0.0, 0.480000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(123, 37, 1.0, 60.5, cpv(249.0, 111.0), cpvzero, cpvzero, 0.0, -7.790000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(122, 38, 1.0, 60.5, cpv(215.0, 132.0), cpvzero, cpvzero, 0.0, -5.810000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(123, 39, 1.0, 60.5, cpv(180.0, 146.0), cpvzero, cpvzero, 0.0, -7.050000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(122, 40, 1.0, 60.5, cpv(142.0, 151.0), cpvzero, cpvzero, 0.0, -9.940000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(123, 41, 1.0, 60.5, cpv(106.0, 151.0), cpvzero, cpvzero, 0.0, 6.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(122, 42, 1.0, 60.5, cpv(69.0, 151.0), cpvzero, cpvzero, 0.0, 5.090000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(123, 43, 1.0, 60.5, cpv(27.0, 143.0), cpvzero, cpvzero, 0.0, -8.120000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(58, 44, 1.0, 179.365914, cpv(411.0, 170.0), cpvzero, cpvzero, 0.0, -6.190000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(105, 45, 1.0, 75.803873, cpv(419.0, 285.0), cpvzero, cpvzero, -1.851634, -9.160000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(105, 46, 1.0, 75.803873, cpv(419.0, 210.0), cpvzero, cpvzero, -1.922241, -3.140000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(106, 47, 1.0, 75.803873, cpv(416.0, 248.0), cpvzero, cpvzero, -1.735945, -3.250000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(107, 48, 1.0, 75.803873, cpv(399.0, 266.0), cpvzero, cpvzero, -1.530818, -4.260000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(107, 49, 1.0, 75.803873, cpv(422.0, 324.0), cpvzero, cpvzero, -1.703348, 4.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(108, 50, 1.0, 75.803873, cpv(401.0, 306.0), cpvzero, cpvzero, -1.453688, 0.740000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(109, 51, 1.0, 75.803873, cpv(398.0, 226.0), cpvzero, cpvzero, -1.292497, -4.910000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(412.0, 35.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body8, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body9, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body13, cpv(390.0, 65.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body17, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body18, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body20, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body21, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body22, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body23, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body24, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body25, cpv(523.0, 19.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body26, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body27, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body28, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body29, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body30, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body31, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body32, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body33, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body34, cpv(308.0, 20.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body34, body35, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body36, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body37, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body38, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body39, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body39, body40, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body41, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body41, body42, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body43, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpv(-2.0, -8.0), cpv(24.0, 166.0), 10.0, 30.0, 20.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpv(-6.0, -7.0), cpv(16.0, 132.0), 6.403124, 30.0, 20.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpv(2.0, -8.0), cpv(778.0, 110.0), 11.313708, 30.0, 20.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpv(1.0, -8.0), cpv(775.0, 148.0), 9.219544, 30.0, 20.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body44, cpv(15.0, 1.0), cpv(-1.0, 17.0), 9.812780, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body44, cpv(15.0, 0.0), cpv(-1.0, 17.0), 25.809250, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body44, cpv(14.0, 0.0), cpv(-1.0, 17.0), 47.335189, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body44, cpv(15.0, 1.0), cpv(-1.0, 17.0), 64.738217, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body44, cpv(14.864774, -0.196163), cpv(-1.0, 17.0), 83.903214, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body44, cpv(15.0, 1.0), cpv(-1.0, 17.0), 104.407072, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body44, cpv(14.0, 0.0), cpv(-1.0, 17.0), 123.540450, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body0, body44, cpv(410.0, 147.0), cpv(-1.0, -19.0), 4.0, 10.0, 0.0));
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


const kineticArtLevel Level37 = {
	37,
	"Level 37",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

