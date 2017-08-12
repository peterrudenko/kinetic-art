
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level68;
extern kineticArtLevel Level70;
#define PREV_LEVEL &Level68
#define NEXT_LEVEL &Level70


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_b].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 24, total joints: 33 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(117, 1, 1.0, 99.155539, cpv(206.046974, 126.995299), cpv(87.630996, 149.503892), cpvzero, -38.804120, 0.110821, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(117, 2, 1.0, 99.155539, cpv(182.219137, 182.675592), cpv(-185.951869, 14.411549), cpvzero, -52.568301, -10.469895, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(117, 3, 1.0, 99.155539, cpv(150.656980, 124.723357), cpv(111.773396, -125.548106), cpvzero, -28.696154, 9.861463, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(124, 4, 1.0, inf, cpv(176.714574, 145.940334), cpv(0.253343, 0.103209), cpvzero, 695.333370, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(122, 5, 1.0, inf, cpv(401.100951, 167.261925), cpv(-1.055071, 6.361974), cpvzero, -682.083369, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(119, 6, 1.0, 99.155539, cpv(370.903286, 145.459100), cpv(-97.674816, 155.749023), cpvzero, 153.064879, 11.318635, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(119, 7, 1.0, 99.155539, cpv(428.841474, 147.804986), cpv(-104.738751, -127.554074), cpvzero, 39.040391, -13.492548, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(119, 8, 1.0, 99.155539, cpv(402.712477, 205.267060), cpv(191.936040, -9.854532), cpvzero, -18.113615, -17.666911, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(124, 9, 1.0, inf, cpv(621.605047, 158.124596), cpv(0.536194, -0.105768), cpvzero, 626.666699, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(117, 10, 1.0, 99.155539, cpv(592.268847, 163.103630), cpv(-20.149850, -152.501687), cpvzero, 357.729205, 4.562148, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(117, 11, 1.0, 99.155539, cpv(633.753226, 126.147868), cpv(157.978162, 67.726671), cpvzero, 95.075414, 8.564456, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(117, 12, 1.0, 99.155539, cpv(644.919634, 187.694754), cpv(-152.856747, 105.659841), cpvzero, -5.524544, 9.260355, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(118, 13, 1.0, 99.155539, cpv(316.314591, 268.568202), cpv(7.208940, -183.991627), cpvzero, 11.395356, -14.802265, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(118, 14, 1.0, 99.155539, cpv(261.673802, 227.181417), cpv(-192.097478, 101.056538), cpvzero, 7.066788, 19.305321, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(118, 15, 1.0, 99.155539, cpv(252.256752, 298.240596), cpv(163.178071, 126.330265), cpvzero, -17.374587, -6.545766, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(120, 16, 1.0, inf, cpv(280.303858, 265.967204), cpv(-2.461389, -0.708912), cpvzero, -626.666699, -5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(120, 17, 1.0, inf, cpv(511.611797, 273.042308), cpv(0.504785, 0.315513), cpvzero, 626.666699, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(118, 18, 1.0, 99.155539, cpv(537.593081, 306.489328), cpv(-168.214289, 117.297108), cpvzero, 36.369379, -11.986515, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(118, 19, 1.0, 99.155539, cpv(477.298638, 277.531234), cpv(-14.956330, -177.983320), cpvzero, 59.816499, 20.514677, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(118, 20, 1.0, 99.155539, cpv(529.225484, 234.357893), cpv(189.854045, 97.058504), cpvzero, -43.469751, -12.475285, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(116, 21, 1.0, 99.155539, cpv(374.418253, 345.186128), cpv(-9.549784, -174.802678), cpvzero, 62.038391, 5.058863, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(116, 22, 1.0, 99.155539, cpv(434.832986, 374.978863), cpv(-176.457326, 109.480445), cpvzero, 4.581282, -10.673405, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(116, 23, 1.0, 99.155539, cpv(428.861314, 303.753627), cpv(184.615208, 97.234740), cpvzero, 34.871258, -3.152206, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(123, 24, 1.0, inf, cpv(410.0, 341.0), cpvzero, cpvzero, 626.666699, 5.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(177.0, 146.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body4, cpv(0.0, -0.0), cpv(-33.0, -15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body4, cpvzero, cpv(1.0, 34.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body4, cpvzero, cpv(31.0, -11.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body0, cpvzero, cpv(401.0, 167.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body5, cpv(-0.0, 0.0), cpv(11.0, -36.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body5, cpvzero, cpv(21.0, 29.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body5, cpvzero, cpv(-32.0, 9.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body0, cpvzero, cpv(622.0, 158.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body9, cpvzero, cpv(-31.0, 19.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body9, cpvzero, cpv(-2.0, -30.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body11, body9, cpvzero, cpv(30.0, 15.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body0, cpvzero, cpv(512.0, 273.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body0, cpvzero, cpv(280.0, 266.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body16, cpvzero, cpv(-1.0, -36.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body16, cpvzero, cpv(34.0, 23.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body16, cpvzero, cpv(-36.0, 22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body17, cpvzero, cpv(-35.0, 21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body17, cpvzero, cpv(-1.0, -35.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body17, cpvzero, cpv(36.0, 21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body24, cpvzero, cpv(0.0, -35.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body24, cpvzero, cpv(35.0, 22.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body24, cpvzero, cpv(-36.0, 21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body0, cpvzero, cpv(410.0, 341.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body20, cpv(12.290495, -12.995793), cpv(-15.278368, -12.124829), 240.133296, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body19, cpv(13.226937, -11.929797), cpv(-15.016397, -11.579344), 216.148097, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body18, cpv(12.372265, -12.149529), cpv(-15.531448, -12.554032), 211.116082, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body7, cpv(13.330218, -13.786042), cpv(1.542355, 10.995524), 178.907797, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body8, cpv(12.632354, -12.651831), cpv(-12.379855, -10.095952), 166.508258, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body6, cpv(12.037956, -13.477896), cpv(0.447161, 10.229540), 184.097800, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body12, cpv(12.858162, -12.147658), cpv(-16.833773, -11.034123), 435.239015, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body11, cpv(-11.654497, -10.802514), cpv(0.842903, 12.419952), 451.473144, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body10, cpv(-15.829509, -11.273021), cpv(15.543977, -12.486253), 427.042152, 100.0, 3.0));
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


const kineticArtLevel Level69 = {
	69,
	"Level 69",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

