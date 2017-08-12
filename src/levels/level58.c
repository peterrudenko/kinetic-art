
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level57;
extern kineticArtLevel Level59;
#define PREV_LEVEL &Level57
#define NEXT_LEVEL &Level59


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

{  /* Total bodies: 15, total joints: 15 */
	//bg04
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(58, 1, 37.0, 179.365914, cpv(721.0, 73.0), cpvzero, cpvzero, -0.620249, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 5);
	cpBody *body2 = createPolyUniWrapper(58, 2, 37.0, 179.365914, cpv(151.0, 114.0), cpvzero, cpvzero, 0.694738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 5);
	cpBody *body3 = createPolyUniWrapper(58, 3, 40.0, 179.365914, cpv(487.0, 158.0), cpvzero, cpvzero, -0.432408, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 5);
	cpBody *body4 = createPolyUniWrapper(58, 4, 50.0, 179.365914, cpv(302.0, 253.0), cpvzero, cpvzero, -0.694738, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 5);
	cpBody *body5 = createPolyUniWrapper(58, 5, 45.0, 179.365914, cpv(631.0, 313.0), cpvzero, cpvzero, 0.718830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 5);
	cpBody *body6 = createPolyUniWrapper(147, 6, 1.0, inf, cpv(282.0, 273.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body7 = createPolyUniWrapper(147, 7, 1.0, inf, cpv(312.0, 273.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body8 = createPolyUniWrapper(148, 8, 1.0, inf, cpv(141.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body9 = createPolyUniWrapper(148, 9, 1.0, inf, cpv(171.0, 133.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body10 = createPolyUniWrapper(148, 10, 1.0, inf, cpv(471.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body11 = createPolyUniWrapper(148, 11, 1.0, inf, cpv(501.0, 183.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body12 = createPolyUniWrapper(148, 12, 1.0, inf, cpv(707.0, 93.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body13 = createPolyUniWrapper(148, 13, 1.0, inf, cpv(737.0, 93.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body14 = createPolyUniWrapper(147, 14, 1.0, inf, cpv(616.0, 333.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpBody *body15 = createPolyUniWrapper(147, 15, 1.0, inf, cpv(646.0, 333.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 2);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(141.0, 129.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(171.0, 129.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(282.0, 269.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(312.0, 269.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body8, cpv(-9.0, -2.0), cpv(8.0, -2.0), 13.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body7, cpv(8.0, -2.0), cpv(-10.0, -2.0), 12.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(471.0, 180.0), 3.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(501.0, 179.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpv(9.0, -2.0), cpv(-10.0, -2.0), 11.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(616.0, 330.0), 3.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(646.0, 329.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body15, cpv(10.0, -1.0), cpv(-10.0, -1.0), 10.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(707.0, 89.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(737.0, 89.0), 4.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body13, cpv(10.0, -1.0), cpv(-10.0, -1.0), 10.0, 200.0, 0.0));
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


const kineticArtLevel Level58 = {
	58,
	"Level 58",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

