
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level22;
extern kineticArtLevel Level24;
#define PREV_LEVEL &Level22
#define NEXT_LEVEL &Level24


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

{  /* Total bodies: 16, total joints: 16 */
	int health = 4;
	cpBody *body0 = staticBody;
	cpBody *body17 = createPolyUniWrapper(14, 17, 1.0, 183.743659, cpv(195.961712, 143.916183), cpv(11.059372, 3.740278), cpvzero, 0.029288, 0.294215, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(14, 18, 1.0, 183.743659, cpv(423.078994, 104.542461), cpv(-16.726986, 0.509612), cpvzero, 0.269930, 0.577964, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(14, 19, 1.0, 183.743659, cpv(633.078395, 149.550434), cpv(38.831504, -9.248157), cpvzero, -0.184853, 1.688358, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(16, 20, 2.0, 183.743659, cpv(169.653149, 233.300146), cpv(-1.398472, 0.143084), cpvzero, -2.575229, -0.052506, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(17, 21, 2.0, 183.743659, cpv(401.764071, 204.035631), cpv(-6.964145, -7.949079), cpvzero, -3.049015, -0.138032, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(16, 22, 2.0, 183.743659, cpv(223.985152, 235.957417), cpv(1.401553, -1.210818), cpvzero, 2.714498, 0.093062, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(17, 23, 2.0, 183.743659, cpv(452.021217, 200.275879), cpv(1.753459, -0.206047), cpvzero, 2.572455, -0.573325, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(16, 24, 2.0, 183.743659, cpv(618.586144, 238.042002), cpv(-7.031923, -1.937320), cpvzero, -2.450757, -0.387187, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(28, 25, 1.0, 141.849016, cpv(395.530604, 327.598147), cpv(8.580482, -5.809766), cpvzero, -2.276805, -1.896991, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(31, 26, 1.0, 141.849016, cpv(194.099800, 308.575519), cpv(3.007516, 1.030714), cpvzero, -2.981134, -0.281920, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(41, 27, 1.0, 302.045261, cpv(426.702363, 232.117369), cpv(-4.673297, 13.343747), cpvzero, -3.062215, -0.526919, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(41, 28, 1.0, 302.045261, cpv(195.079669, 256.949397), cpv(-0.123421, -1.333457), cpvzero, 3.123278, -0.061646, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(41, 29, 1.0, 302.045261, cpv(635.514570, 270.361709), cpv(3.194854, -6.943307), cpvzero, 3.173054, -0.118255, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(50, 30, 1.0, 167.604256, cpv(418.836166, 286.992143), cpv(4.043290, -21.825142), cpvzero, -2.858922, 1.315152, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(31, 31, 1.0, 141.849016, cpv(629.418034, 323.798161), cpv(15.815055, 3.540815), cpvzero, -2.821222, -1.327170, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(16, 32, 2.0, 183.743659, cpv(658.852501, 242.244846), cpv(1.233649, 9.211336), cpvzero, 2.714330, -0.784057, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(194.0, 130.0), 9.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(419.0, 92.0), 8.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(636.0, 138.0), 8.513334, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body17, cpv(-0.0, 22.0), cpv(-1.0, 18.0), 72.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body17, cpv(0.792624, 17.010930), cpv(-1.0, 18.0), 57.706152, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body17, cpv(0.171499, 19.722337), cpv(-1.0, 18.0), 58.855756, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body28, cpv(1.213225, 15.985246), cpv(-0.632628, -22.874185), 12.0, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body18, cpv(-0.271607, 19.103042), cpv(0.0, 18.217989), 65.620119, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body21, cpv(0.0, 17.217989), cpv(0.409616, 18.023102), 65.375837, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body18, cpv(-0.158077, 23.171051), cpv(0.0, 16.217989), 88.900631, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body27, cpv(1.478207, 15.077714), cpv(-1.871490, -23.947808), 14.849998, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body30, cpv(1.217821, 15.100976), cpv(-0.370771, -14.030771), 17.849998, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body19, cpv(1.231781, 18.883995), cpv(0.0, 17.704655), 54.962008, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body19, cpv(0.496888, 19.899137), cpv(0.0, 17.704655), 58.886520, 200.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body19, cpv(-0.0, 23.150002), cpv(0.0, 17.704655), 78.875359, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body29, cpv(1.362577, 16.123459), cpv(-1.0, -23.0), 13.849998, 200.0, 0.0));
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


const kineticArtLevel Level23 = {
	23,
	"Level 23",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

