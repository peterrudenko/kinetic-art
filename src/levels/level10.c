
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level09;
extern kineticArtLevel Level11;
#define PREV_LEVEL &Level09
#define NEXT_LEVEL &Level11


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

{  /* Total bodies: 47, total joints: 47 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body48 = createPolyUniWrapper(182, 48, 1.0, inf, cpv(78.0, 308.0), cpv(20.0, 28.0), cpvzero, 0.257324, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(182, 49, 1.0, inf, cpv(119.0, 317.0), cpv(27.0, 37.0), cpvzero, -0.363979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(182, 50, 1.0, inf, cpv(154.0, 308.0), cpv(29.0, 71.0), cpvzero, -0.828849, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(182, 51, 1.0, inf, cpv(184.0, 290.0), cpv(17.0, 48.0), cpvzero, -0.904827, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(182, 52, 1.0, inf, cpv(219.0, 275.0), cpv(28.0, -15.0), cpvzero, -0.769526, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(182, 53, 1.0, inf, cpv(255.0, 267.0), cpv(18.0, -51.0), cpvzero, -0.708626, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(182, 54, 1.0, inf, cpv(292.0, 262.0), cpv(22.0, 13.0), cpvzero, -0.566729, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(182, 55, 1.0, inf, cpv(328.0, 265.0), cpv(25.0, 50.0), cpvzero, -0.188222, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(182, 56, 1.0, inf, cpv(364.0, 271.0), cpv(25.0, 7.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(182, 57, 1.0, inf, cpv(399.0, 287.0), cpv(16.0, 23.0), cpvzero, 0.218669, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(182, 58, 1.0, inf, cpv(434.0, 300.0), cpv(26.0, 54.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(182, 59, 1.0, inf, cpv(467.0, 307.0), cpv(21.0, 39.0), cpvzero, -0.436627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(182, 60, 1.0, inf, cpv(500.0, 309.0), cpv(29.0, 2.0), cpvzero, -0.335639, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(182, 61, 1.0, inf, cpv(536.0, 313.0), cpv(18.0, 11.0), cpvzero, -0.375961, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(182, 62, 1.0, inf, cpv(428.0, 208.0), cpv(25.0, -39.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(182, 63, 1.0, inf, cpv(471.0, 202.0), cpv(15.0, -27.0), cpvzero, -0.352990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(182, 64, 1.0, inf, cpv(512.0, 192.0), cpv(28.0, 37.0), cpvzero, -0.674741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(182, 65, 1.0, inf, cpv(548.0, 182.0), cpv(19.0, 32.0), cpvzero, -0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(182, 66, 1.0, inf, cpv(585.0, 180.0), cpv(24.0, 67.0), cpvzero, -0.262995, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(182, 67, 1.0, inf, cpv(618.0, 183.0), cpv(21.0, 66.0), cpvzero, -0.185348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(182, 68, 1.0, inf, cpv(651.0, 194.0), cpv(23.0, 64.0), cpvzero, 0.119429, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(182, 69, 1.0, inf, cpv(690.0, 202.0), cpv(18.0, 22.0), cpvzero, -0.068856, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(182, 70, 1.0, inf, cpv(733.0, 206.0), cpv(15.0, -52.0), cpvzero, -0.183943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(145, 71, 1.0, inf, cpv(170.0, 265.0), cpv(24.0, -54.0), cpvzero, 1.959115, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(144, 72, 1.0, inf, cpv(180.0, 227.0), cpv(29.0, 71.0), cpvzero, 1.675673, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(143, 73, 1.0, inf, cpv(176.0, 188.0), cpv(26.0, 63.0), cpvzero, 1.363300, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(144, 74, 1.0, inf, cpv(370.0, 246.0), cpv(19.0, 14.0), cpvzero, 1.394857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(143, 75, 1.0, inf, cpv(369.0, 212.0), cpv(27.0, 41.0), cpvzero, 1.833791, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(145, 76, 1.0, inf, cpv(665.0, 177.0), cpv(26.0, -37.0), cpvzero, 1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(144, 77, 1.0, inf, cpv(651.0, 142.0), cpv(27.0, 32.0), cpvzero, 1.405648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(143, 78, 1.0, inf, cpv(657.0, 105.0), cpv(20.0, 18.0), cpvzero, 2.013171, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(144, 79, 1.0, inf, cpv(495.0, 170.0), cpv(19.0, -64.0), cpvzero, 1.869295, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(143, 80, 1.0, inf, cpv(496.0, 131.0), cpv(23.0, 19.0), cpvzero, 1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(28, 81, 1.0, inf, cpv(154.0, 159.0), cpv(28.0, 65.0), cpvzero, -0.879459, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(28, 82, 1.0, inf, cpv(381.0, 179.0), cpv(25.0, 32.0), cpvzero, 0.448723, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(28, 83, 1.0, inf, cpv(482.0, 99.0), cpv(17.0, -30.0), cpvzero, -0.550386, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(28, 84, 1.0, inf, cpv(682.0, 79.0), cpv(22.0, 45.0), cpvzero, 1.024007, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(186, 85, 1.0, inf, cpv(347.0, 213.0), cpv(21.0, -56.0), cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(186, 86, 1.0, inf, cpv(675.0, 143.0), cpv(29.0, 16.0), cpvzero, 1.913820, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(186, 87, 1.0, inf, cpv(473.0, 131.0), cpv(27.0, -59.0), cpvzero, 0.728855, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(106, 88, 1.0, inf, cpv(281.0, 204.0), cpv(19.0, 22.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(186, 89, 1.0, inf, cpv(516.0, 144.0), cpv(19.0, -50.0), cpvzero, 2.034444, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(186, 90, 1.0, inf, cpv(149.0, 231.0), cpv(27.0, -43.0), cpvzero, 0.607802, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(186, 91, 1.0, inf, cpv(200.0, 190.0), cpv(29.0, 37.0), cpvzero, 2.003204, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(182, 92, 1.0, inf, cpv(278.0, 234.0), cpv(16.0, -63.0), cpvzero, 0.945311, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(182, 93, 1.0, inf, cpv(299.0, 217.0), cpv(28.0, -37.0), cpvzero, 1.971037, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(186, 94, 1.0, inf, cpv(630.0, 111.0), cpv(20.0, 22.0), cpvzero, 1.047518, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(78.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(119.0, 307.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(154.0, 298.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(184.0, 280.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(219.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(255.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(292.0, 252.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(328.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(364.0, 261.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(399.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(434.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(467.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(500.0, 299.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(536.0, 303.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(428.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(471.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(512.0, 182.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(548.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(585.0, 170.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(618.0, 173.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(651.0, 184.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(690.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(733.0, 196.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(170.0, 255.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(180.0, 217.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(176.0, 178.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(370.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(369.0, 202.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(665.0, 167.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(651.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(657.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(495.0, 160.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(496.0, 121.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(154.0, 149.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(381.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(482.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(682.0, 69.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(347.0, 203.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(675.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(473.0, 121.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(281.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(516.0, 134.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(149.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(200.0, 180.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(278.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(299.0, 207.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(630.0, 101.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level10 = {
	10,
	"Level 10",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

