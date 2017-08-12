
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level50;
extern kineticArtLevel Level52;
#define PREV_LEVEL &Level50
#define NEXT_LEVEL &Level52


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 29, total joints: 23 */
	//TODO: add 2 object emitters with rr
	//bg21 | 22
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(181, 1, 1.0, inf, cpv(74.0, 79.0), cpv(20.0, -18.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(182, 2, 1.0, inf, cpv(113.0, 112.0), cpv(17.0, 49.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(181, 3, 1.0, inf, cpv(153.0, 145.0), cpv(29.0, -58.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(182, 4, 1.0, inf, cpv(194.0, 174.0), cpv(28.0, 14.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(181, 5, 1.0, inf, cpv(715.0, 83.0), cpv(23.0, 4.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(182, 6, 1.0, inf, cpv(680.0, 116.0), cpv(19.0, 9.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(181, 7, 1.0, inf, cpv(640.0, 146.0), cpv(28.0, 20.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(182, 8, 1.0, inf, cpv(604.0, 178.0), cpv(20.0, -44.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(181, 9, 1.0, inf, cpv(241.0, 268.0), cpv(19.0, 45.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(182, 10, 1.0, inf, cpv(277.0, 231.0), cpv(19.0, -45.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(181, 11, 1.0, inf, cpv(316.0, 197.0), cpv(21.0, -73.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(182, 12, 1.0, inf, cpv(359.0, 165.0), cpv(19.0, 27.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(182, 13, 1.0, inf, cpv(440.0, 165.0), cpv(26.0, 69.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(181, 14, 1.0, inf, cpv(479.0, 197.0), cpv(24.0, 12.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(182, 15, 1.0, inf, cpv(515.0, 232.0), cpv(24.0, 68.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(181, 16, 1.0, inf, cpv(557.0, 270.0), cpv(23.0, -66.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(181, 17, 1.0, inf, cpv(119.0, 294.0), cpv(28.0, 41.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(182, 18, 1.0, inf, cpv(156.0, 333.0), cpv(23.0, 25.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(181, 19, 1.0, inf, cpv(202.0, 371.0), cpv(23.0, 36.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(181, 20, 1.0, inf, cpv(676.0, 300.0), cpv(16.0, -37.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(182, 21, 1.0, inf, cpv(633.0, 338.0), cpv(25.0, 26.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(181, 22, 1.0, inf, cpv(590.0, 375.0), cpv(28.0, 34.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(181, 23, 1.0, inf, cpv(399.0, 137.0), cpv(24.0, 42.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(15, 24, 0.100000, 183.743659, cpv(703.0, 37.0), cpvzero, cpvzero, 0.499347, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpBody *body25 = createPolyUniWrapper(16, 25, 0.100000, 183.743659, cpv(668.0, 67.0), cpvzero, cpvzero, 0.294730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpBody *body30 = createPolyUniWrapper(17, 30, 0.200000, 183.743659, cpv(639.0, 106.0), cpvzero, cpvzero, 0.236849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpBody *body27 = createPolyUniWrapper(15, 27, 0.100000, 183.743659, cpv(91.0, 37.0), cpvzero, cpvzero, -0.422854, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpBody *body28 = createPolyUniWrapper(16, 28, 0.100000, 183.743659, cpv(129.0, 64.0), cpvzero, cpvzero, -0.479519, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpBody *body31 = createPolyUniWrapper(17, 31, 0.200000, 183.743659, cpv(163.0, 98.0), cpvzero, cpvzero, -0.332059, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, 10);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(74.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(113.0, 102.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(153.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(194.0, 164.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(715.0, 73.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(680.0, 106.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(640.0, 136.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(604.0, 168.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(241.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(277.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(316.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(359.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(440.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(479.0, 187.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(515.0, 222.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(557.0, 260.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(119.0, 284.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(156.0, 323.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(202.0, 361.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(676.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(633.0, 328.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(590.0, 365.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(399.0, 127.0), 10.0, 300.0, 1.0));
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

	if (space->bodies->num > 7) {
		if (rand() % 350 < 1) {
			cpBody *body = createPolyUniWrapper(rc_gem03g+rand()%3, 0, 1.0f, 0, cpv(125, 33), cpv(rand()%25, rand()%25), cpvzero, 0, (float)(rand()%20-10), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);
			body->alpha = FADE_IN;
		}
		if (rand() % 350 < 1) {
			cpBody *body = createPolyUniWrapper(rc_gem03g+rand()%3, 0, 1.0f, 0, cpv(685, 33), cpv(-rand()%25, rand()%25), cpvzero, 0, (float)(rand()%20-10), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);
			body->alpha = FADE_IN;
		}
	}
}

static void draw(void)
{
	BGBLIT(rc_bg22)
}


const kineticArtLevel Level51 = {
	51,
	"Level 51",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

