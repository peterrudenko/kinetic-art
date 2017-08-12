
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level29;
extern kineticArtLevel Level31;
#define PREV_LEVEL &Level29
#define NEXT_LEVEL &Level31


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 48, total joints: 48 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(142, 1, 1.0, inf, cpv(767.0, 332.0), cpv(18.0, 51.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(143, 2, 1.0, inf, cpv(675.0, 301.0), cpv(17.0, -75.0), cpvzero, 0.622671, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(143, 3, 1.0, inf, cpv(640.0, 268.0), cpv(23.0, 24.0), cpvzero, 0.737815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(142, 4, 1.0, inf, cpv(718.0, 324.0), cpv(28.0, 19.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(144, 5, 1.0, inf, cpv(602.0, 226.0), cpv(18.0, -59.0), cpvzero, 0.909753, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(144, 6, 1.0, inf, cpv(566.0, 188.0), cpv(21.0, 29.0), cpvzero, 0.785398, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(145, 7, 1.0, inf, cpv(517.0, 145.0), cpv(26.0, 21.0), cpvzero, 0.598419, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(145, 8, 1.0, inf, cpv(480.0, 122.0), cpv(26.0, 24.0), cpvzero, 0.491164, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(146, 9, 1.0, inf, cpv(437.0, 103.0), cpv(21.0, 57.0), cpvzero, 0.321751, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(146, 10, 1.0, inf, cpv(399.0, 94.0), cpv(28.0, 29.0), cpvzero, 0.137066, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(147, 11, 1.0, inf, cpv(317.0, 87.0), cpv(22.0, -32.0), cpvzero, -0.099669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(147, 12, 1.0, inf, cpv(230.0, 114.0), cpv(26.0, -60.0), cpvzero, -0.513252, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(146, 13, 1.0, inf, cpv(193.0, 145.0), cpv(26.0, 6.0), cpvzero, -0.755995, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(146, 14, 1.0, inf, cpv(166.0, 178.0), cpv(27.0, 71.0), cpvzero, -1.012197, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(145, 15, 1.0, inf, cpv(151.0, 222.0), cpv(15.0, 54.0), cpvzero, -1.295886, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(145, 16, 1.0, inf, cpv(146.0, 268.0), cpv(25.0, 45.0), cpvzero, -1.735945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(144, 17, 1.0, inf, cpv(166.0, 310.0), cpv(22.0, 0.0), cpvzero, -2.129396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(144, 18, 1.0, inf, cpv(202.0, 346.0), cpv(29.0, -13.0), cpvzero, -2.482283, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(143, 19, 1.0, inf, cpv(243.0, 371.0), cpv(26.0, -27.0), cpvzero, -2.863293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(143, 20, 1.0, inf, cpv(290.0, 378.0), cpv(26.0, -65.0), cpvzero, 3.033322, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(142, 21, 1.0, inf, cpv(334.0, 371.0), cpv(17.0, 7.0), cpvzero, 2.780389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(142, 22, 1.0, inf, cpv(378.0, 354.0), cpv(27.0, -7.0), cpvzero, 2.518393, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(143, 23, 1.0, inf, cpv(599.0, 254.0), cpv(21.0, -13.0), cpvzero, 0.138640, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(144, 24, 1.0, inf, cpv(551.0, 248.0), cpv(21.0, -73.0), cpvzero, -0.064427, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(144, 25, 1.0, inf, cpv(512.0, 259.0), cpv(22.0, -49.0), cpvzero, -0.633633, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(145, 26, 1.0, inf, cpv(490.0, 290.0), cpv(17.0, 44.0), cpvzero, -1.203622, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(146, 27, 1.0, inf, cpv(493.0, 331.0), cpv(29.0, -65.0), cpvzero, -1.847124, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(145, 28, 1.0, inf, cpv(532.0, 171.0), cpv(23.0, 72.0), cpvzero, 0.234723, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(145, 29, 1.0, inf, cpv(493.0, 164.0), cpv(29.0, -68.0), cpvzero, 0.175940, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(146, 30, 1.0, inf, cpv(448.0, 161.0), cpv(16.0, -25.0), cpvzero, -0.135528, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(146, 31, 1.0, inf, cpv(404.0, 170.0), cpv(28.0, -14.0), cpvzero, -0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(147, 32, 1.0, inf, cpv(367.0, 194.0), cpv(19.0, 17.0), cpvzero, -0.866302, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(147, 33, 1.0, inf, cpv(358.0, 239.0), cpv(17.0, 74.0), cpvzero, -1.854590, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(148, 34, 1.0, inf, cpv(388.0, 268.0), cpv(25.0, 48.0), cpvzero, -2.819842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(146, 35, 1.0, inf, cpv(332.0, 217.0), cpv(19.0, 14.0), cpvzero, -0.401229, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(147, 36, 1.0, inf, cpv(359.0, 89.0), cpv(26.0, 68.0), cpvzero, 0.076772, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(148, 37, 1.0, inf, cpv(273.0, 96.0), cpv(22.0, -34.0), cpvzero, -0.269167, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(174, 38, 1.0, inf, cpv(297.0, 223.0), cpv(21.0, 70.0), cpvzero, -1.452306, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(170, 39, 1.0, inf, cpv(423.0, 269.0), cpv(25.0, 15.0), cpvzero, 0.962107, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(169, 40, 1.0, inf, cpv(403.0, 332.0), cpv(28.0, 24.0), cpvzero, 0.456348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(172, 41, 1.0, inf, cpv(515.0, 359.0), cpv(21.0, 35.0), cpvzero, 2.135366, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(182, 42, 1.0, inf, cpv(520.0, 231.0), cpv(23.0, 46.0), cpvzero, 0.363979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(183, 43, 1.0, inf, cpv(281.0, 71.0), cpv(20.0, -39.0), cpvzero, 0.507099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(185, 44, 1.0, inf, cpv(379.0, 384.0), cpv(26.0, 16.0), cpvzero, -2.882822, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(181, 45, 1.0, inf, cpv(278.0, 354.0), cpv(28.0, 18.0), cpvzero, 2.570255, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(182, 46, 1.0, inf, cpv(423.0, 188.0), cpv(25.0, 53.0), cpvzero, -0.948126, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(182, 47, 1.0, inf, cpv(470.0, 91.0), cpv(24.0, -32.0), cpvzero, 1.352127, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(182, 48, 1.0, inf, cpv(140.0, 311.0), cpv(22.0, -19.0), cpvzero, -1.292497, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(767.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(675.0, 291.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(640.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(718.0, 314.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(602.0, 216.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(566.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(517.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(480.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(437.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(399.0, 84.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(317.0, 77.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(230.0, 104.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(193.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(166.0, 168.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(151.0, 212.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(146.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(166.0, 300.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(202.0, 336.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(243.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(290.0, 368.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(334.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(378.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(599.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(551.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(512.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(490.0, 280.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body0, cpvzero, cpv(493.0, 321.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(532.0, 161.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(493.0, 154.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body0, cpvzero, cpv(448.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(404.0, 160.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(367.0, 184.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(358.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(388.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(332.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(359.0, 79.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(273.0, 86.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(297.0, 213.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(423.0, 259.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(403.0, 322.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(515.0, 349.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(520.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(281.0, 61.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(379.0, 374.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(278.0, 344.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(423.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(470.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(140.0, 301.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg14)
}


const kineticArtLevel Level30 = {
	30,
	"Level 30",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

