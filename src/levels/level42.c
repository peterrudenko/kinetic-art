
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level41;
extern kineticArtLevel Level43;
#define PREV_LEVEL &Level41
#define NEXT_LEVEL &Level43


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_g].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 26, total joints: 26 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(188, 1, 1.0, 47.856161, cpv(221.0, 53.0), cpvzero, cpvzero, 0.0, -4.470000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(187, 2, 1.0, 47.856161, cpv(204.0, 79.0), cpvzero, cpvzero, 0.0, -9.430000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(188, 3, 1.0, 47.856161, cpv(211.0, 110.0), cpvzero, cpvzero, 0.0, 8.850000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(187, 4, 1.0, 47.856161, cpv(240.0, 121.0), cpvzero, cpvzero, 0.0, 5.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(188, 5, 1.0, 47.856161, cpv(276.0, 127.0), cpvzero, cpvzero, 0.0, -7.640000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(187, 6, 1.0, 47.856161, cpv(307.0, 125.0), cpvzero, cpvzero, 0.0, 3.210000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(188, 7, 1.0, 47.856161, cpv(339.0, 119.0), cpvzero, cpvzero, 0.0, 6.840000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(187, 8, 1.0, 47.856161, cpv(365.0, 101.0), cpvzero, cpvzero, 0.0, 2.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(188, 9, 1.0, 47.856161, cpv(482.0, 57.0), cpvzero, cpvzero, 0.0, 9.330000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(187, 10, 1.0, 47.856161, cpv(496.0, 87.0), cpvzero, cpvzero, 0.0, 9.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(188, 11, 1.0, 47.856161, cpv(499.0, 117.0), cpvzero, cpvzero, 0.0, 4.330000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(187, 12, 1.0, 47.856161, cpv(485.0, 145.0), cpvzero, cpvzero, 0.0, 7.110000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(188, 13, 1.0, 47.856161, cpv(455.0, 153.0), cpvzero, cpvzero, 0.0, 1.380000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(187, 14, 1.0, 47.856161, cpv(422.0, 157.0), cpvzero, cpvzero, 0.0, -1.130000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(188, 15, 1.0, 47.856161, cpv(388.0, 166.0), cpvzero, cpvzero, 0.0, -1.270000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(187, 16, 1.0, 47.856161, cpv(361.0, 190.0), cpvzero, cpvzero, 0.0, -7.080000, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(181, 17, 1.0, 88.659334, cpv(514.0, 148.0), cpvzero, cpvzero, -1.801887, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(181, 18, 1.0, 88.659334, cpv(429.0, 135.0), cpvzero, cpvzero, 0.334737, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(181, 19, 1.0, 88.659334, cpv(224.0, 145.0), cpvzero, cpvzero, -2.152177, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(181, 20, 1.0, 88.659334, cpv(300.0, 100.0), cpvzero, cpvzero, 2.455863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(28, 21, 1.0, 141.849016, cpv(346.0, 213.0), cpvzero, cpvzero, -2.667741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(28, 22, 1.0, 141.849016, cpv(386.0, 77.0), cpvzero, cpvzero, 0.628796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(44, 23, 1.0, 103.311066, cpv(378.0, 212.0), cpvzero, cpvzero, 2.761086, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(44, 24, 1.0, 103.311066, cpv(338.0, 183.0), cpvzero, cpvzero, -1.538549, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(44, 25, 1.0, 103.311066, cpv(388.0, 111.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(44, 26, 1.0, 103.311066, cpv(353.0, 80.0), cpvzero, cpvzero, -0.110657, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body1, cpv(221.0, 53.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body1, body2, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body2, body3, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body3, body4, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body5, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body6, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body6, body7, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body8, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body0, body9, cpv(482.0, 57.0), cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body10, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body12, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body13, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body14, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body15, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body16, cpvzero, cpvzero));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body8, cpv(-0.220564, 14.998378), cpv(5.0, -6.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body8, cpv(-1.214747, 10.932721), cpv(-8.0, -2.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body25, cpv(2.0, 8.0), cpv(-0.0, 11.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body21, cpv(-3.0, 4.0), cpv(1.483029, 13.849210)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body23, cpv(8.0, 2.0), cpv(1.485563, 12.441588)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body24, cpv(-4.0, -6.0), cpv(0.354654, 10.994281)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body17, cpv(8.0, 3.0), cpv(16.490832, -0.229039), 12.369317, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body18, cpv(1.0, -10.0), cpv(14.865558, 0.123195), 13.341664, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body20, cpv(1.0, -10.0), cpv(15.760585, 1.266476), 12.806248, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body19, cpv(1.0, 10.0), cpv(18.863067, 0.429791), 9.219544, 100.0, 3.0));
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
	BGBLIT(rc_bg01)
}


const kineticArtLevel Level42 = {
	42,
	"Level 42",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

