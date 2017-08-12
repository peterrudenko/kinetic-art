
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level62;
extern kineticArtLevel Level64;
#define PREV_LEVEL &Level62
#define NEXT_LEVEL &Level64


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 21, total joints: 13 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(rc_gem05g, 1, 1.0, 265.905844, cpv(402.000664, 116.115374), cpv(0.007694, -0.043125), cpvzero, -0.063685, -0.605914, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(183, 2, 1.0, inf, cpv(331.629801, 320.738771), cpv(2.667988, 7.890948), cpvzero, 0.375271, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(184, 3, 1.0, 88.659334, cpv(354.067444, 192.754103), cpv(-29.262840, 2.792196), cpvzero, -29.519436, 1.657563, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(183, 4, 1.0, 88.659334, cpv(318.474432, 256.846574), cpv(-16.070325, 0.801983), cpvzero, 2.254064, 0.796720, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(184, 5, 1.0, inf, cpv(368.617820, 329.757227), cpv(2.846990, 7.332508), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(183, 6, 1.0, inf, cpv(408.620789, 331.740208), cpv(2.683620, 7.396842), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(184, 7, 1.0, inf, cpv(445.625709, 329.717616), cpv(2.481997, 7.606907), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(183, 8, 1.0, inf, cpv(483.621538, 324.683242), cpv(2.235297, 7.558195), cpvzero, 2.914794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(184, 9, 1.0, 88.659334, cpv(475.022643, 179.292330), cpv(-68.072082, 23.821862), cpvzero, 7.416289, -0.637688, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(183, 10, 1.0, 88.659334, cpv(507.692428, 252.480666), cpv(-70.345904, 32.047787), cpvzero, -5.056850, -1.105499, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(185, 11, 1.0, inf, cpv(518.622487, 308.679177), cpv(2.219688, 7.566988), cpvzero, 2.450256, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(185, 12, 1.0, inf, cpv(296.643274, 301.714675), cpv(2.093369, 9.267797), cpvzero, -2.493781, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(6, 13, 1.0, 128.0, cpv(443.0, 288.0), cpv(-3.360721, 12.602423), cpvzero, -10.203870, -0.225614, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(6, 14, 1.0, 128.0, cpv(427.0, 254.0), cpv(7.002574, 6.406405), cpvzero, 3.955619, -0.056221, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(6, 15, 1.0, 128.0, cpv(392.0, 262.0), cpv(0.675695, 8.587139), cpvzero, -1.050330, -0.260216, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(6, 16, 1.0, 128.0, cpv(435.0, 215.0), cpv(4.393294, -5.528777), cpvzero, -1.762718, 0.105907, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(6, 17, 1.0, 128.0, cpv(364.0, 291.0), cpv(-11.386895, 34.581290), cpvzero, -8.457433, -0.836849, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(6, 18, 1.0, 128.0, cpv(405.0, 296.0), cpv(0.684624, 13.479307), cpvzero, 2.133004, -0.150630, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(6, 19, 1.0, 128.0, cpv(401.0, 223.0), cpv(-6.147200, 0.631891), cpvzero, 0.850622, -0.367669, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(6, 20, 1.0, 128.0, cpv(410.0, 181.0), cpv(0.116240, 3.590281), cpvzero, 4.645207, 1.993607, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(6, 21, 1.0, 128.0, cpv(459.0, 254.0), cpv(-14.334255, 14.026118), cpvzero, 1.687458, 0.293578, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpvzero, cpv(402.0, 116.123334)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body2, cpv(-0.0, 0.0), cpv(-39.528260, -4.849401)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body2, cpvzero, cpv(37.723831, -5.187732)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body6, cpvzero, cpv(-40.0, -2.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body6, cpvzero, cpv(37.0, -2.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body8, cpvzero, cpv(38.151163, 3.672705)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body8, cpv(0.0, -0.0), cpv(-37.701444, 7.720176)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body3, cpv(-25.0, -14.123334), cpv(-19.221154, 0.739757), 64.404969, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body4, cpv(18.493935, 1.993583), cpv(-16.969515, 1.017621), 30.805844, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body12, cpv(17.162038, 1.210144), cpv(19.202408, 0.517237), 25.806976, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body9, cpv(23.0, -15.123334), cpv(-18.842946, 0.971286), 67.542579, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body10, cpv(18.357303, -0.097129), cpv(-18.564676, 1.163104), 35.510562, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body11, cpv(17.485110, 0.520505), cpv(-16.895544, 1.593919), 25.0, 100.0, 3.0));
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
	BGBLIT(rc_bg03)
}


const kineticArtLevel Level63 = {
	63,
	"Level 63",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

