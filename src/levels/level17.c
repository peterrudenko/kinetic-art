
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level16;
extern kineticArtLevel Level18;
#define PREV_LEVEL &Level16
#define NEXT_LEVEL &Level18


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 21, total joints: 21 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body21 = createPolyUniWrapper(73, 21, 1.0, 255.739515, cpv(410.0, 233.0), cpvzero, cpvzero, 1.540503, 20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(17, 2, 2.0, 183.743659, cpv(223.0, 206.0), cpvzero, cpvzero, 0.0, -20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(17, 3, 3.0, 183.743659, cpv(408.0, 82.0), cpvzero, cpvzero, 0.0, 20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(17, 4, 2.0, 183.743659, cpv(580.0, 206.0), cpvzero, cpvzero, 0.0, 20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(17, 5, 3.0, 183.743659, cpv(720.0, 72.0), cpvzero, cpvzero, 0.0, 30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(36, 6, 1.0, 141.778018, cpv(409.0, 173.0), cpvzero, cpvzero, 0.0, 20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(36, 7, 1.0, 141.778018, cpv(720.0, 197.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(36, 8, 1.0, 141.778018, cpv(61.0, 195.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(41, 9, 1.0, 302.045261, cpv(61.0, 328.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(41, 10, 5.0, 302.045261, cpv(408.0, 305.0), cpvzero, cpvzero, 0.0, -20.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(41, 11, 1.0, 302.045261, cpv(719.0, 327.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(45, 12, 1.0, 103.311066, cpv(221.0, 318.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(45, 13, 1.0, 103.311066, cpv(580.0, 324.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(68, 14, 1.0, 93.009818, cpv(408.0, 129.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(71, 15, 1.0, 255.739515, cpv(720.0, 256.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(71, 16, 1.0, 255.739515, cpv(62.0, 254.0), cpvzero, cpvzero, -1.607144, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(72, 17, 1.0, 255.739515, cpv(223.0, 262.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(72, 18, 1.0, 255.739515, cpv(580.0, 263.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(73, 19, 1.0, 255.739515, cpv(719.0, 134.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(73, 20, 1.0, 255.739515, cpv(62.0, 134.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(17, 22, 3.0, 183.743659, cpv(65.0, 70.0), cpvzero, cpvzero, 0.0, -30.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body15, cpv(0.0, -24.0), cpv(32.0, 0.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body7, cpv(-31.0, 1.0), cpv(1.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body8, cpv(-29.0, -1.0), cpv(0.0, -16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body8, cpv(31.015864, 0.127189), cpv(1.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body9, cpv(-30.016525, -0.090849), cpv(0.0, -24.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body0, cpv(0.0, -19.0), cpv(720.0, 40.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body5, cpv(-30.0, -1.0), cpv(0.0, 18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body19, cpv(0.0, -18.0), cpv(30.0, 1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body0, cpv(0.0, -20.0), cpv(67.0, 37.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body22, cpv(30.0, -0.0), cpv(0.0, 18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body0, cpv(0.0, -19.0), cpv(224.0, 171.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body0, cpv(-1.0, -20.0), cpv(580.0, 173.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body2, cpv(-31.0, -0.0), cpv(0.0, 17.0), 8.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body2, cpv(1.0, -15.0), cpv(0.0, 17.0), 80.006250, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body4, cpv(-30.0, -0.0), cpv(0.0, 18.0), 9.0, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body4, cpv(1.0, -14.0), cpv(0.0, 18.0), 86.005814, 10.0, 0.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body0, cpv(0.0, -21.0), cpv(408.0, 49.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body3, cpv(0.0, -15.0), cpv(-1.0, 18.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body14, cpv(-1.0, -17.0), cpv(-1.0, 13.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body6, cpv(-29.986235, -0.908674), cpv(1.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body21, cpv(1.0, -23.0), cpv(30.955487, 1.938504)));
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
	BGBLIT(rc_bg16)
}


const kineticArtLevel Level17 = {
	17,
	"Level 17",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

