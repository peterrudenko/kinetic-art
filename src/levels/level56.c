
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level55;
extern kineticArtLevel Level57;
#define PREV_LEVEL &Level55
#define NEXT_LEVEL &Level57


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 27, total joints: 27 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body28 = createPolyUniWrapper(22, 28, 1.0, 183.743659, cpv(659.0, 250.0), cpvzero, cpvzero, 0.722979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(22, 29, 1.0, 183.743659, cpv(660.0, 332.0), cpvzero, cpvzero, 2.329174, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(22, 30, 1.0, 183.743659, cpv(581.0, 326.0), cpvzero, cpvzero, -2.389739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(25, 31, 1.0, 404.942221, cpv(137.0, 295.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(26, 32, 1.0, 404.942221, cpv(689.0, 290.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(24, 33, 1.0, 404.942221, cpv(418.0, 231.0), cpvzero, cpvzero, -3.129965, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(26, 34, 1.0, 404.942221, cpv(550.0, 291.0), cpvzero, cpvzero, -1.588338, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(24, 35, 1.0, 404.942221, cpv(416.0, 86.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(25, 36, 1.0, 404.942221, cpv(279.0, 294.0), cpvzero, cpvzero, 1.692148, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(38, 37, 1.0, 302.045261, cpv(208.0, 225.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(38, 38, 1.0, 302.045261, cpv(209.0, 356.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(38, 39, 1.0, 302.045261, cpv(618.0, 224.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(38, 40, 1.0, 302.045261, cpv(620.0, 356.0), cpvzero, cpvzero, 3.125465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(39, 41, 1.0, 302.045261, cpv(349.0, 160.0), cpvzero, cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(39, 42, 1.0, 302.045261, cpv(485.0, 160.0), cpvzero, cpvzero, 1.618379, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(20, 43, 1.0, 183.743659, cpv(456.0, 122.0), cpvzero, cpvzero, 0.754158, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(21, 44, 1.0, 183.743659, cpv(455.0, 200.0), cpvzero, cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(22, 45, 1.0, 183.743659, cpv(251.0, 254.0), cpvzero, cpvzero, 0.885067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(22, 46, 1.0, 183.743659, cpv(166.0, 254.0), cpvzero, cpvzero, -0.685730, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(22, 47, 1.0, 183.743659, cpv(169.0, 331.0), cpvzero, cpvzero, -2.418613, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(22, 48, 1.0, 183.743659, cpv(249.0, 331.0), cpvzero, cpvzero, 2.316999, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(21, 49, 1.0, 183.743659, cpv(380.0, 124.0), cpvzero, cpvzero, -0.749699, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(20, 50, 1.0, 183.743659, cpv(379.0, 198.0), cpvzero, cpvzero, -2.394637, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(22, 51, 1.0, 183.743659, cpv(582.0, 252.0), cpvzero, cpvzero, -0.839400, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(98, 52, 1.0, inf, cpv(208.0, 293.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(99, 53, 1.0, inf, cpv(621.0, 291.0), cpvzero, cpvzero, 0.0, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(97, 54, 1.0, inf, cpv(417.0, 160.0), cpvzero, cpvzero, 0.0, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body53, body0, cpvzero, cpv(621.0, 291.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body54, body0, cpvzero, cpv(417.0, 160.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body52, body0, cpvzero, cpv(208.0, 293.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body37, body52, cpv(0.0, 21.0), cpv(0.0, -30.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body36, body52, cpv(0.048422, 25.179310), cpv(30.0, 0.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body38, body52, cpv(1.0, 21.0), cpv(0.0, 28.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body52, cpv(1.0, 26.0), cpv(-29.0, 0.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body46, cpv(-15.0, -16.0), cpv(1.055396, 17.660298)));
	cpSpaceAddConstraint(space, cpPinJointNew(body45, body52, cpv(-0.351799, 17.801018), cpv(15.0, -15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body48, body52, cpv(0.692709, 18.426073), cpv(13.0, 16.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body52, body47, cpv(-16.0, 16.0), cpv(1.014487, 17.775568)));
	cpSpaceAddConstraint(space, cpPinJointNew(body35, body54, cpv(0.0, 26.0), cpv(-1.0, -30.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body42, body54, cpv(0.095130, 23.021532), cpv(30.0, -1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body33, body54, cpv(1.313865, 26.986548), cpv(0.0, 30.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body41, cpv(-30.0, 0.0), cpv(0.0, 22.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body49, cpv(-16.0, -15.0), cpv(-0.807607, 17.010225)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body43, cpv(14.0, -16.0), cpv(-1.258919, 17.646958)));
	cpSpaceAddConstraint(space, cpPinJointNew(body44, body54, cpv(1.414214, 18.384776), cpv(14.0, 15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body54, body50, cpv(-15.0, 15.0), cpv(2.174106, 17.066730)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body39, cpv(0.0, -31.0), cpv(0.0, 22.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body34, cpv(-30.0, -1.0), cpv(0.543776, 26.013541)));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body53, cpv(-2.0, 27.0), cpv(29.0, 2.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body40, body53, cpv(0.645077, 22.013266), cpv(1.0, 29.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body30, cpv(-15.0, 15.0), cpv(2.257674, 17.055876)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body51, cpv(-15.0, -16.0), cpv(-0.171748, 16.277915)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body28, cpv(15.0, -16.0), cpv(-1.058595, 16.937514)));
	cpSpaceAddConstraint(space, cpPinJointNew(body53, body29, cpv(16.0, 16.0), cpv(-0.496704, 18.378065)));
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
	BGBLIT(rc_bg13)
}


const kineticArtLevel Level56 = {
	56,
	"Level 56",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

