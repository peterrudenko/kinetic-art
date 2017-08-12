
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level47;
extern kineticArtLevel Level49;
#define PREV_LEVEL &Level47
#define NEXT_LEVEL &Level49


static void init(void)
{
	makeSpaces2(cpv(0, 70));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 32, total joints: 38 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body33 = createPolyUniWrapper(10, 33, 1.0, inf, cpv(58.0, 267.0), cpv(15.0, -40.0), cpvzero, 0.052583, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(11, 34, 1.0, 107.584618, cpv(166.0, 263.0), cpvzero, cpvzero, -0.296546, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(12, 35, 1.0, 107.584618, cpv(111.0, 268.0), cpvzero, cpvzero, -0.052583, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(13, 36, 1.0, 107.584618, cpv(215.0, 244.0), cpvzero, cpvzero, -0.530216, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(10, 37, 1.0, inf, cpv(746.0, 273.0), cpv(28.0, 6.0), cpvzero, -0.031240, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(11, 38, 1.0, 107.584618, cpv(645.0, 260.0), cpvzero, cpvzero, 0.269167, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(12, 39, 1.0, 107.584618, cpv(333.0, 94.0), cpvzero, cpvzero, -1.223410, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(13, 40, 1.0, 107.584618, cpv(286.0, 179.0), cpvzero, cpvzero, -1.024007, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(10, 41, 1.0, inf, cpv(342.0, 49.0), cpv(18.0, 16.0), cpvzero, -1.348714, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(11, 42, 1.0, 107.584618, cpv(314.0, 137.0), cpvzero, cpvzero, -1.169568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(9, 43, 1.0, inf, cpv(253.0, 213.0), cpv(19.0, 51.0), cpvzero, -0.728317, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(12, 44, 1.0, 107.584618, cpv(695.0, 272.0), cpvzero, cpvzero, 0.110657, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(12, 45, 1.0, 107.584618, cpv(485.0, 97.0), cpvzero, cpvzero, 1.262744, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(9, 46, 1.0, inf, cpv(563.0, 210.0), cpv(18.0, -28.0), cpvzero, 0.817645, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(13, 47, 1.0, 107.584618, cpv(600.0, 239.0), cpvzero, cpvzero, 0.649870, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(13, 48, 1.0, 107.584618, cpv(531.0, 175.0), cpvzero, cpvzero, 1.019141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(11, 49, 1.0, 107.584618, cpv(505.0, 137.0), cpvzero, cpvzero, 1.196463, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(10, 50, 1.0, inf, cpv(474.0, 52.0), cpv(19.0, -71.0), cpvzero, 1.304544, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(193, 51, 1.0, inf, cpv(204.0, 34.0), cpv(29.0, -28.0), cpvzero, -0.287281, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(193, 52, 1.0, inf, cpv(609.0, 29.0), cpv(19.0, -21.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(185, 53, 1.0, 88.659334, cpv(217.0, 69.0), cpvzero, cpvzero, 1.310194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(185, 54, 1.0, 88.659334, cpv(599.0, 69.0), cpvzero, cpvzero, 2.022249, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(183, 55, 1.0, 88.659334, cpv(238.0, 110.0), cpvzero, cpvzero, 0.963809, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(183, 56, 1.0, 88.659334, cpv(575.0, 108.0), cpvzero, cpvzero, 2.282255, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(185, 57, 1.0, 88.659334, cpv(543.0, 142.0), cpvzero, cpvzero, 2.487510, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(185, 58, 1.0, 88.659334, cpv(269.0, 138.0), cpvzero, cpvzero, 0.593003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(183, 59, 1.0, 88.659334, cpv(316.0, 165.0), cpvzero, cpvzero, -2.863293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(183, 60, 1.0, 88.659334, cpv(496.0, 167.0), cpvzero, cpvzero, -0.211093, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(118, 61, 1.0, 99.155539, cpv(363.0, 184.0), cpvzero, cpvzero, 0.117109, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(118, 62, 1.0, 99.155539, cpv(455.0, 185.0), cpvzero, cpvzero, -0.096474, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(185, 63, 1.0, 88.659334, cpv(408.0, 178.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(22, 64, 1.0, 183.743659, cpv(411.0, 240.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(342.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(474.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(746.0, 263.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(58.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(204.0, 24.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(609.0, 19.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(563.0, 200.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(253.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body45, cpvzero, cpvzero, 46.324939, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body45, cpvzero, cpvzero, 44.721360, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body48, cpvzero, cpvzero, 46.043458, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body48, cpvzero, cpvzero, 47.423623, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body47, cpvzero, cpvzero, 47.010637, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body47, cpvzero, cpvzero, 49.658836, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body44, cpvzero, cpvzero, 51.419841, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body44, cpvzero, cpvzero, 51.009803, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body41, cpvzero, cpvzero, 45.891176, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body42, cpvzero, cpvzero, 47.010637, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body42, cpvzero, cpvzero, 50.477718, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body43, cpvzero, cpvzero, 47.381431, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body43, cpvzero, cpvzero, 49.040799, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body34, cpvzero, cpvzero, 52.554733, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body34, cpvzero, cpvzero, 55.226805, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body33, cpvzero, cpvzero, 53.009433, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body53, cpv(1.176976, 6.604145), cpv(-17.971970, 1.417145), 12.649111, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body53, cpv(-16.381768, 0.798554), cpv(15.008849, 1.932470), 15.811388, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body55, cpv(-16.639411, 0.360551), cpv(13.027840, 0.524764), 12.806248, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body58, cpv(17.032710, 1.373606), cpv(14.980878, 0.757156), 22.472205, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body59, cpv(-14.313053, -10.398871), cpv(-14.560220, 0.0), 20.223748, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body61, cpv(-16.0, -1.0), cpv(10.866236, -10.340450), 17.117243, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body63, cpv(-12.072632, -10.210365), cpv(16.0, 0.0), 18.110770, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body62, cpv(-16.273426, -0.419058), cpv(11.109390, -10.980958), 15.297059, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body60, cpv(15.792767, 0.767153), cpv(15.505153, -0.768273), 22.472205, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body57, cpv(16.166785, 1.906584), cpv(-16.216023, 1.428491), 14.422205, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body56, cpv(15.187771, 1.526957), cpv(-16.375726, 0.914115), 14.317821, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body54, cpv(0.0, 5.0), cpv(-17.014667, 1.581491), 19.416488, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body61, cpv(-15.0, -14.0), cpv(-1.460516, 13.261482), 46.227697, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body62, cpv(11.0, -14.0), cpv(-0.160540, 12.040524), 44.687806, 100.0, 3.0));
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


const kineticArtLevel Level48 = {
	48,
	"Level 48",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

