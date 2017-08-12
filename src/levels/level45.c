
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level44;
extern kineticArtLevel Level46;
#define PREV_LEVEL &Level44
#define NEXT_LEVEL &Level46


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 25, total joints: 28 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(26, 1, 1.0, inf, cpv(402.0, 217.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.0, 4.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(38, 2, 1.0, 302.045261, cpv(325.0, 159.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -0.839238, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(38, 3, 1.0, 302.045261, cpv(477.0, 158.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.831118, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(38, 4, 1.0, 302.045261, cpv(402.0, 307.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -3.121187, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(29, 5, 1.0, 141.849016, cpv(401.0, 156.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(29, 6, 1.0, 141.849016, cpv(454.0, 238.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 2.114629, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(29, 7, 1.0, 141.849016, cpv(353.0, 235.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -2.103640, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(48, 8, 1.0, 167.604256, cpv(320.0, 252.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -2.102070, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(50, 9, 1.0, 167.604256, cpv(455.0, 359.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 2.446854, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(50, 10, 1.0, 167.604256, cpv(343.0, 352.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -2.250210, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(52, 11, 1.0, 167.604256, cpv(398.0, 375.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -3.076467, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(52, 12, 1.0, 167.604256, cpv(271.0, 113.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -0.864182, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(50, 13, 1.0, 167.604256, cpv(549.0, 161.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 1.697104, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(50, 14, 1.0, 167.604256, cpv(256.0, 165.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -1.691420, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(48, 15, 1.0, 167.604256, cpv(488.0, 255.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 2.068619, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(48, 16, 1.0, 167.604256, cpv(401.0, 120.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(50, 17, 1.0, 167.604256, cpv(320.0, 89.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -0.150746, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(50, 18, 1.0, 167.604256, cpv(484.0, 90.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.073168, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(52, 19, 1.0, 167.604256, cpv(536.0, 110.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 0.858949, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(70, 20, 1.0, 255.739515, cpv(709.0, 237.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 1.606495, 3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(73, 21, 1.0, 255.739515, cpv(706.0, 307.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 1.647568, -3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(70, 22, 1.0, 255.739515, cpv(90.0, 240.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -1.518213, -3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(73, 23, 1.0, 255.739515, cpv(89.0, 312.0), cpv(0.0, 0.0), cpv(0.0, 0.0), 1.508378, 3.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(89, 24, 1.0, 209.190093, cpv(707.0, 167.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -1.590025, 1.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(89, 25, 1.0, 209.190093, cpv(91.0, 171.0), cpv(0.0, 0.0), cpv(0.0, 0.0), -1.570796, -1.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body1, cpv(2.849697, 39.100885), cpv(-46.0, -34.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body1, cpv(0.918176, 44.990632), cpv(0.0, 45.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body1, cpv(-2.493063, 38.337770), cpv(45.0, -35.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body0, cpv(0.0, 0.0), cpv(402.0, 217.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body6, cpv(30.0, 9.0), cpv(1.114442, 25.035136)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body5, cpv(0.0, -37.0), cpv(1.0, 24.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body7, cpv(-29.0, 6.0), cpv(0.176690, 23.323138)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body7, cpv(1.324353, 13.536842), cpv(3.312946, -15.460414)));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body6, cpv(0.534815, 15.643336), cpv(-0.736328, -14.746451)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body5, cpv(0.0, 14.0), cpv(0.0, -15.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body2, cpv(0.025029, 13.152923), cpv(15.339318, -21.833583)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body2, cpv(0.541491, 12.153468), cpv(-14.392238, -22.019616)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body12, cpv(22.802794, -5.294580), cpv(-22.334626, -4.600488)));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body17, cpv(21.592612, -3.969776), cpv(-20.611668, -4.142357)));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body3, cpv(0.877228, 11.967893), cpv(-13.748781, -22.022057)));
	cpSpaceAddConstraint(space, cpPinJointNew(body18, body19, cpv(20.797609, -3.529798), cpv(-22.878010, -2.568394)));
	cpSpaceAddConstraint(space, cpPinJointNew(body19, body13, cpv(21.705160, -3.726399), cpv(-22.580577, -3.180807)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body3, cpv(0.771582, 14.014445), cpv(13.157833, -21.837386)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body4, cpv(1.346437, 12.656505), cpv(14.527587, -23.301271)));
	cpSpaceAddConstraint(space, cpPinJointNew(body4, body9, cpv(-14.486779, -23.709349), cpv(1.280369, 14.084057)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body11, cpv(-22.470532, -4.009389), cpv(22.821084, -3.492580)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body9, cpv(-23.276638, -3.492580), cpv(22.406454, -3.456996)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body0, cpv(24.0, 1.0), cpv(706.0, 124.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body24, cpv(-28.945831, 2.034417), cpv(-23.034203, 1.557404), 18.027756, 20.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body24, cpv(-30.0, 1.0), cpv(-23.957109, -2.461083), 86.042518, 20.0, 0.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body0, cpv(24.0, 0.0), cpv(91.0, 128.0)));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body25, cpv(32.008329, -0.683265), cpv(-25.0, 2.0), 12.165525, 20.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body25, cpv(-30.066334, 0.124757), cpv(-25.0, -3.0), 86.005814, 20.0, 0.0));
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
	BGBLIT(rc_bg21)
}


const kineticArtLevel Level45 = {
	45,
	"Level 45",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

