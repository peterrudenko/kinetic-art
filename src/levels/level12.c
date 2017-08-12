
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level11;
extern kineticArtLevel Level13;
#define PREV_LEVEL &Level11
#define NEXT_LEVEL &Level13


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_b].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 27, total joints: 27 */
	int health = 3;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(16, 1, 1.0, 183.743659, cpv(430.236837, 289.784046), cpv(-162.044430, 135.690371), cpvzero, 68.400550, 3.762692, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(35, 2, 1.0, 141.778018, cpv(457.932751, 322.129748), cpv(-284.139921, 233.247308), cpvzero, 68.385614, 3.570823, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(46, 3, 1.0, 103.311066, cpv(482.697166, 350.406631), cpv(-407.002139, 334.295718), cpvzero, 68.390958, 5.041954, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(97, 4, 1.0, inf, cpv(391.0, 246.166668), cpv(0.0, -0.0), cpvzero, 68.366670, 3.5, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(16, 5, 1.0, 183.743659, cpv(433.878892, 206.092519), cpv(125.207866, 141.130292), cpvzero, 66.779721, 2.797940, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(16, 6, 1.0, 183.743659, cpv(348.887612, 205.069719), cpv(131.097814, -126.003655), cpvzero, 71.373896, 2.355180, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(16, 7, 1.0, 183.743659, cpv(348.377474, 288.260663), cpv(-155.553824, -167.032533), cpvzero, 69.895683, 4.321995, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(46, 8, 1.0, 103.311066, cpv(489.720326, 149.237919), cpv(277.616408, 295.645898), cpvzero, 66.725395, 0.798210, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(46, 9, 1.0, 103.311066, cpv(288.812557, 152.673928), cpv(280.010892, -287.360403), cpvzero, 65.038847, 2.031109, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(46, 10, 1.0, 103.311066, cpv(290.984514, 345.636827), cpv(-347.262815, -371.089277), cpvzero, 69.858829, 3.737079, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(35, 11, 1.0, 141.778018, cpv(464.198001, 176.445376), cpv(216.045378, 238.312489), cpvzero, 68.306647, 3.480513, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(35, 12, 1.0, 141.778018, cpv(316.929553, 177.241062), cpv(210.656761, -212.381739), cpvzero, 68.287597, 3.265532, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(35, 13, 1.0, 141.778018, cpv(317.846801, 319.548799), cpv(-265.157476, -282.328460), cpvzero, 68.358708, 2.774596, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(45, 14, 1.0, 103.311066, cpv(456.869540, 245.987719), cpv(-6.342062, 228.312772), cpvzero, 67.533406, 3.411961, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(45, 15, 1.0, 103.311066, cpv(387.255986, 306.829797), cpv(-203.932737, -18.615965), cpvzero, 69.199658, 3.029618, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(45, 16, 1.0, 103.311066, cpv(326.385532, 252.132299), cpv(-13.563963, -221.990054), cpvzero, 70.250639, 3.226295, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(45, 17, 1.0, 103.311066, cpv(387.034947, 182.691775), cpv(243.971894, -11.753619), cpvzero, 65.634143, 4.633657, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(66, 18, 1.0, 93.009818, cpv(144.854234, 149.097678), cpv(-46.724987, 26.161923), cpvzero, 40.348051, -0.997883, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(66, 19, 1.0, 93.009818, cpv(200.345962, 115.213030), cpv(-23.243476, 127.783779), cpvzero, 39.668759, 4.030131, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(66, 20, 1.0, 93.009818, cpv(139.015283, 65.383276), cpv(89.025713, -27.579509), cpvzero, 38.819231, 1.633463, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(66, 21, 1.0, 93.009818, cpv(110.581744, 129.932431), cpv(-39.212359, -101.187179), cpvzero, 38.704350, 2.646372, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(66, 22, 1.0, 93.009818, cpv(609.126552, 104.909346), cpv(-6.623987, 131.551486), cpvzero, -39.287653, -3.971710, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(66, 23, 1.0, 93.009818, cpv(699.017839, 125.216596), cpv(39.662027, -108.360811), cpvzero, -38.736022, -3.069736, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(66, 24, 1.0, 93.009818, cpv(680.983857, 78.597052), cpv(-63.609435, -50.701747), cpvzero, -37.903701, -1.990693, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(66, 25, 1.0, 93.009818, cpv(659.591677, 154.408879), cpv(28.036960, 23.666544), cpvzero, -39.834547, 1.662266, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(94, 26, 1.0, inf, cpv(654.991059, 110.007577), cpv(0.015278, -0.010135), cpvzero, -39.066669, -2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(94, 27, 1.0, inf, cpv(154.998234, 112.998999), cpv(0.004387, 0.018802), cpvzero, 39.066669, 2.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpPivotJointNew2(body6, body4, cpv(1.312123, -20.982810), cpv(-1.0, -37.166668)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body1, body4, cpv(0.617227, -22.991717), cpv(0.0, 34.833332)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body4, cpv(0.664163, -23.012147), cpv(35.0, -0.166668)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body7, body4, cpv(0.476056, -22.017570), cpv(-37.0, 0.833332)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body16, body4, cpv(0.911649, -17.668302), cpv(-34.0, -33.166668)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body17, body4, cpv(2.525645, -19.688096), cpv(30.0, -31.166668)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body14, body4, cpv(0.950649, -19.185835), cpv(34.0, 30.833332)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body15, body4, cpv(0.159862, -18.384081), cpv(-30.0, 28.833332)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body5, body11, cpv(0.306537, 20.997763), cpv(-21.0, -1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body8, body11, cpv(1.0, -17.0), cpv(20.0, -1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body13, body7, cpv(19.0, -1.0), cpv(-0.428450, 24.017003)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body10, body13, cpv(0.0, -17.0), cpv(-20.0, -1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body12, body6, cpv(0.0, 19.0), cpv(-0.341970, 22.997458)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body9, body12, cpv(0.947536, -16.003193), cpv(0.0, -21.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body2, body1, cpv(-0.670239, -20.013765), cpv(-1.590031, 21.965241)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body3, body2, cpv(0.268223, -16.997884), cpv(-0.329626, 19.997283)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body4, body0, cpvzero, cpv(391.0, 246.166668)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body27, body0, cpvzero, cpv(155.0, 113.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body26, body0, cpvzero, cpv(655.0, 110.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body21, body27, cpv(0.0, -21.0), cpv(0.0, 27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body18, body27, cpv(-18.0, 0.0), cpv(28.0, 0.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body19, body27, cpv(0.0, 20.0), cpv(0.0, -27.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body20, body27, cpv(20.0, 1.0), cpv(-30.0, 2.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body25, body26, cpv(19.0, 1.0), cpv(-28.0, 1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body22, body26, cpv(0.0, 20.0), cpv(0.0, -26.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body24, body26, cpv(-20.0, 1.0), cpv(27.0, 1.0)));
	cpSpaceAddConstraint(space, cpPivotJointNew2(body23, body26, cpv(0.0, -21.0), cpv(1.0, 26.0)));
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
	BGBLIT(rc_bg08)
}


const kineticArtLevel Level12 = {
	12,
	"Level 12",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

