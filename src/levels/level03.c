
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level02;
extern kineticArtLevel Level04;
#define PREV_LEVEL &Level02
#define NEXT_LEVEL &Level04


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

{  /* Total bodies: 27, total joints: 27 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(86, 1, 5.0, inf, cpv(178.0, 274.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body2 = createPolyUniWrapper(86, 2, 1.0, inf, cpv(620.0, 277.0), cpvzero, cpvzero, 0.0, -5.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body3 = createPolyUniWrapper(88, 3, 1.0, inf, cpv(399.0, 156.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body4 = createPolyUniWrapper(69, 4, 0.200000, 255.739515, cpv(254.0, 290.0), cpvzero, cpvzero, 0.266252, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body5 = createPolyUniWrapper(69, 5, 0.200000, 255.739515, cpv(118.0, 320.0), cpvzero, cpvzero, -0.528074, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body6 = createPolyUniWrapper(69, 6, 0.200000, 255.739515, cpv(158.0, 199.0), cpvzero, cpvzero, 1.276562, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body7 = createPolyUniWrapper(69, 7, 1.0, 255.739515, cpv(555.0, 319.0), cpvzero, cpvzero, -0.562498, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body8 = createPolyUniWrapper(69, 8, 1.0, 255.739515, cpv(617.0, 200.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body9 = createPolyUniWrapper(69, 9, 1.0, 255.739515, cpv(695.0, 295.0), cpvzero, cpvzero, -2.976444, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body10 = createPolyUniWrapper(71, 10, 0.200000, 255.739515, cpv(243.0, 232.0), cpvzero, cpvzero, 2.574863, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body11 = createPolyUniWrapper(71, 11, 0.200000, 255.739515, cpv(204.0, 344.0), cpvzero, cpvzero, -1.910089, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body12 = createPolyUniWrapper(71, 12, 0.200000, 255.739515, cpv(108.0, 244.0), cpvzero, cpvzero, 0.438859, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body13 = createPolyUniWrapper(71, 13, 1.0, 255.739515, cpv(551.0, 242.0), cpvzero, cpvzero, 0.524180, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body14 = createPolyUniWrapper(71, 14, 1.0, 255.739515, cpv(674.0, 223.0), cpvzero, cpvzero, 2.078859, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body15 = createPolyUniWrapper(71, 15, 1.0, 255.739515, cpv(640.0, 349.0), cpvzero, cpvzero, -1.882838, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body16 = createPolyUniWrapper(45, 16, 1.0, 103.311066, cpv(399.0, 213.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body17 = createPolyUniWrapper(45, 17, 1.0, 103.311066, cpv(447.0, 128.0), cpvzero, cpvzero, 0.896055, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body18 = createPolyUniWrapper(45, 18, 1.0, 103.311066, cpv(354.0, 124.0), cpvzero, cpvzero, -0.954499, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body19 = createPolyUniWrapper(46, 19, 1.0, 103.311066, cpv(350.0, 180.0), cpvzero, cpvzero, 1.042722, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body20 = createPolyUniWrapper(46, 20, 1.0, 103.311066, cpv(399.0, 101.0), cpvzero, cpvzero, -3.121595, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body21 = createPolyUniWrapper(46, 21, 1.0, 103.311066, cpv(449.0, 181.0), cpvzero, cpvzero, -1.058407, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body22 = createPolyUniWrapper(44, 22, 1.0, 103.311066, cpv(476.0, 197.0), cpvzero, cpvzero, 2.191046, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body23 = createPolyUniWrapper(44, 23, 1.0, 103.311066, cpv(398.0, 249.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body24 = createPolyUniWrapper(44, 24, 1.0, 103.311066, cpv(322.0, 199.0), cpvzero, cpvzero, -2.253113, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body25 = createPolyUniWrapper(44, 25, 1.0, 103.311066, cpv(327.0, 103.0), cpvzero, cpvzero, 2.181522, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body26 = createPolyUniWrapper(44, 26, 1.0, 103.311066, cpv(397.0, 70.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpBody *body27 = createPolyUniWrapper(44, 27, 1.0, 103.311066, cpv(478.0, 109.0), cpvzero, cpvzero, -2.098871, 0.0, 0.0, 0.9, 0.500000, 6, 4159, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpvzero, cpv(178.0, 274.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body0, cpvzero, cpv(399.0, 156.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body0, cpvzero, cpv(620.0, 277.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body1, cpv(31.0, 0.0), cpv(-27.0, 25.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body1, cpv(-32.0, 0.0), cpv(35.0, 5.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body1, cpv(32.0, 1.0), cpv(-10.0, -36.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body1, cpv(32.0, 1.0), cpv(-33.0, -12.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body1, cpv(32.0, 1.0), cpv(30.0, -21.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body1, cpv(31.950731, -0.388290), cpv(12.0, 34.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body2, cpv(31.0, 0.0), cpv(-30.0, 20.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body2, cpv(31.0, 1.0), cpv(36.0, 10.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body2, cpv(-32.0, 1.0), cpv(-2.0, -37.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body2, cpv(31.0, 1.0), cpv(8.0, 35.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body2, cpv(30.517153, 0.838681), cpv(-33.0, -16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body2, cpv(32.0, 1.0), cpv(31.0, -20.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body3, cpv(-1.0, 13.0), cpv(30.0, -18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body3, cpv(0.166410, 15.032375), cpv(-1.0, 36.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body3, cpv(0.0, 14.0), cpv(-29.0, -21.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body3, cpv(0.0, -14.0), cpv(32.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body3, cpv(1.0, -13.0), cpv(-32.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body3, cpv(0.0, -13.0), cpv(0.0, -37.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body21, cpv(0.116248, 12.206002), cpv(0.163420, 12.528898)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body20, cpv(0.0, 13.0), cpv(1.239752, 11.977605)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body19, cpv(-1.0, 14.0), cpv(0.0, 13.892444)));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body16, cpv(0.0, -13.0), cpv(1.0, -13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body17, cpv(0.0, -14.0), cpv(0.624695, -13.587117)));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body18, cpv(0.0, -14.0), cpv(1.564047, -13.362401)));
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


const kineticArtLevel Level03 = {
	3,
	"Level 3",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

