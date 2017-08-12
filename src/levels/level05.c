
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level04;
extern kineticArtLevel Level06;
#define PREV_LEVEL &Level04
#define NEXT_LEVEL &Level06


static void init(void)
{
	makeSpaces2(cpv(0, 70));
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 32, total joints: 56 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(15, 1, 1.0, 183.743659, cpv(97.168537, 91.785636), cpv(4.932764, -35.752024), cpvzero, -0.269616, 1.205130, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(15, 2, 1.0, 183.743659, cpv(275.863226, 149.601114), cpv(-30.877518, 3.534743), cpvzero, 0.260073, 0.965145, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(15, 3, 1.0, 183.743659, cpv(484.581207, 156.206577), cpv(-13.729364, 12.090455), cpvzero, -0.708369, 0.970718, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(15, 4, 1.0, 183.743659, cpv(672.219264, 86.624166), cpv(-37.248328, 11.381612), cpvzero, -0.146713, -1.151258, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(16, 5, 1.0, 183.743659, cpv(100.389288, 225.672561), cpv(36.829361, 33.469827), cpvzero, -0.713477, 1.211689, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(17, 6, 1.0, 183.743659, cpv(155.333652, 210.273338), cpv(-2.580198, 32.072678), cpvzero, 1.256170, 0.889260, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(16, 7, 1.0, 183.743659, cpv(136.238327, 272.593560), cpv(10.324652, 19.221967), cpvzero, 2.797332, -0.405916, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(17, 8, 1.0, 183.743659, cpv(260.756050, 251.022375), cpv(4.503044, 16.869183), cpvzero, -1.240412, -0.859305, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(16, 9, 1.0, 183.743659, cpv(317.085126, 234.644434), cpv(2.993302, 14.092572), cpvzero, 0.756679, -0.703890, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(17, 10, 1.0, 183.743659, cpv(303.784603, 300.419194), cpv(13.639944, 12.943635), cpvzero, 2.577830, -0.950016, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(16, 11, 1.0, 183.743659, cpv(488.340187, 262.129290), cpv(-1.371471, -9.919321), cpvzero, -0.853678, 0.749078, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(17, 12, 1.0, 183.743659, cpv(549.533737, 259.753597), cpv(1.068911, 21.139999), cpvzero, 0.908853, -0.714604, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(16, 13, 1.0, 183.743659, cpv(509.225507, 314.856957), cpv(-16.321340, -22.514152), cpvzero, 2.956122, 0.312573, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(17, 14, 1.0, 183.743659, cpv(663.196844, 210.262408), cpv(-9.127038, 26.000536), cpvzero, -1.243167, -0.029475, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(16, 15, 1.0, 183.743659, cpv(720.033268, 213.624056), cpv(-9.174545, -28.627487), cpvzero, 0.650198, -0.921839, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(17, 16, 1.0, 183.743659, cpv(707.987859, 265.440358), cpv(4.029766, -24.892074), cpvzero, 3.084156, 0.151893, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(109, 17, 1.0, 75.803873, cpv(126.170268, 231.767507), cpv(5.517552, 23.328809), cpvzero, -1.529333, -0.561729, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(109, 18, 1.0, 75.803873, cpv(297.422004, 261.850627), cpv(5.154491, 22.269594), cpvzero, -1.630247, 0.441406, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(109, 19, 1.0, 75.803873, cpv(513.299259, 279.371924), cpv(-11.697682, -21.071237), cpvzero, -1.327692, -0.263254, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(109, 20, 1.0, 75.803873, cpv(696.499946, 224.991770), cpv(0.645944, -20.757765), cpvzero, -1.875867, 0.448275, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(110, 21, 1.0, 63.887283, cpv(491.829032, 291.879311), cpv(-14.127114, -23.826653), cpvzero, -1.522534, 0.497096, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(110, 22, 1.0, 63.887283, cpv(520.676949, 243.582391), cpv(8.083429, -13.036210), cpvzero, -0.022815, -0.184126, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(110, 23, 1.0, 63.887283, cpv(542.962250, 288.502539), cpv(-6.363259, -9.621171), cpvzero, 2.279266, -0.029276, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(110, 24, 1.0, 63.887283, cpv(325.896209, 268.375299), cpv(15.219247, 7.013405), cpvzero, 1.367216, 0.451499, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(110, 25, 1.0, 63.887283, cpv(287.789501, 228.685429), cpv(-0.421346, 27.378578), cpvzero, -0.409617, -0.705451, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(110, 26, 1.0, 63.887283, cpv(276.721007, 280.396776), cpv(17.383060, 28.396620), cpvzero, -2.144591, -0.057771, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(110, 27, 1.0, 63.887283, cpv(157.090487, 242.905246), cpv(7.110551, 20.064405), cpvzero, 1.661518, -0.111217, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(110, 28, 1.0, 63.887283, cpv(124.411811, 197.433911), cpv(12.511548, 21.583354), cpvzero, -0.183426, -3.296667, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(110, 29, 1.0, 63.887283, cpv(106.070689, 257.290493), cpv(15.477703, 26.492813), cpvzero, -1.938766, 0.595120, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(110, 30, 1.0, 63.887283, cpv(676.385469, 243.340001), cpv(6.782981, -25.055912), cpvzero, -1.575402, 0.466441, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(110, 31, 1.0, 63.887283, cpv(690.474551, 192.806269), cpv(-13.537938, -18.823182), cpvzero, 0.014962, -0.518038, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(110, 32, 1.0, 63.887283, cpv(723.713804, 238.995126), cpv(9.768025, -32.289865), cpvzero, 2.358555, -1.070576, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(95.0, 80.0), 9.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(273.0, 143.0), 7.071068, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(483.0, 145.0), 9.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(673.0, 77.0), 10.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body1, cpv(0.0, -12.0), cpv(-1.0, 16.0), 81.024688, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body2, cpv(-1.0, -12.0), cpv(0.0, 17.0), 54.332311, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body3, cpv(0.0, -13.0), cpv(-1.0, 17.0), 65.764732, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body4, cpv(-1.0, -12.0), cpv(0.0, 17.0), 78.102497, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body7, cpv(9.851876, -1.985079), cpv(-13.462873, 7.794295)));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body6, cpv(-10.072440, -2.132122), cpv(13.227634, 4.362305)));
	cpSpaceAddConstraint(space, cpPinJointNew(body28, body6, cpv(6.0, 1.0), cpv(-11.468640, 6.121299)));
	cpSpaceAddConstraint(space, cpPinJointNew(body5, body28, cpv(16.512979, 2.078831), cpv(-9.0, 1.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body29, body5, cpv(9.764802, 1.627467), cpv(-13.492790, 4.236109)));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body29, cpv(16.168331, 5.346500), cpv(-6.509868, -3.952420)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body28, cpv(14.023179, -0.591982), cpv(-1.0, 7.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body27, body17, cpv(0.367607, 11.395827), cpv(-4.202101, 6.880577)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body29, cpv(-7.734584, -9.229096), cpv(2.208705, 8.253582)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body5, cpv(2.202949, -6.938805), cpv(-0.274563, 15.650068)));
	cpSpaceAddConstraint(space, cpPinJointNew(body17, body6, cpv(5.822773, 6.172140), cpv(-1.758994, 17.941737)));
	cpSpaceAddConstraint(space, cpPinJointNew(body7, body17, cpv(1.159482, 18.938205), cpv(-12.082255, 2.649362)));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body8, cpv(-12.0, -5.0), cpv(17.769509, -2.060233)));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body25, cpv(-17.453158, -1.177821), cpv(10.0, -4.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body9, cpv(-12.279299, -3.635770), cpv(15.811348, 0.035692)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body24, cpv(-15.197323, 1.743955), cpv(9.466722, -0.617395)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body10, cpv(-9.694965, -3.873971), cpv(15.861687, 2.325273)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body26, cpv(-17.705126, -5.150582), cpv(11.862783, -2.067456)));
	cpSpaceAddConstraint(space, cpPinJointNew(body26, body18, cpv(2.368542, 8.269825), cpv(-3.801382, -9.723657)));
	cpSpaceAddConstraint(space, cpPinJointNew(body8, body18, cpv(-0.160956, 18.027038), cpv(3.337799, -8.298138)));
	cpSpaceAddConstraint(space, cpPinJointNew(body25, body18, cpv(-1.0, 7.0), cpv(15.031684, -0.220202)));
	cpSpaceAddConstraint(space, cpPinJointNew(body9, body18, cpv(-3.390695, 17.131935), cpv(8.379265, 4.334502)));
	cpSpaceAddConstraint(space, cpPinJointNew(body24, body18, cpv(-1.234790, 10.221316), cpv(-1.587772, 5.145773)));
	cpSpaceAddConstraint(space, cpPinJointNew(body10, body18, cpv(-0.581318, 19.017415), cpv(-14.034980, 0.139075)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body21, cpv(-16.528849, -4.098434), cpv(13.226773, -2.460180)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body22, cpv(19.276151, -4.053396), cpv(-10.0, -4.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body12, cpv(11.0, -4.0), cpv(-17.413016, -4.097180)));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body12, cpv(-9.848808, 0.031466), cpv(16.132647, -2.176627)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body23, cpv(-16.118062, -0.456172), cpv(9.030696, -1.856484)));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body13, cpv(-7.327632, -6.877922), cpv(17.410548, -1.368515)));
	cpSpaceAddConstraint(space, cpPinJointNew(body22, body19, cpv(0.0, 10.0), cpv(15.131609, 0.185537)));
	cpSpaceAddConstraint(space, cpPinJointNew(body11, body19, cpv(0.900755, 16.618924), cpv(7.936879, -5.916583)));
	cpSpaceAddConstraint(space, cpPinJointNew(body21, body19, cpv(1.296224, 9.814265), cpv(-3.793210, -8.637798)));
	cpSpaceAddConstraint(space, cpPinJointNew(body13, body19, cpv(1.216457, 18.398919), cpv(-13.152543, 0.103076)));
	cpSpaceAddConstraint(space, cpPinJointNew(body23, body19, cpv(-0.471988, 11.170373), cpv(-4.267361, 8.472876)));
	cpSpaceAddConstraint(space, cpPinJointNew(body12, body19, cpv(-0.512148, 17.797126), cpv(5.071357, 6.803039)));
	cpSpaceAddConstraint(space, cpPinJointNew(body30, body14, cpv(11.007158, -4.882875), cpv(-16.978360, -4.973459)));
	cpSpaceAddConstraint(space, cpPinJointNew(body16, body30, cpv(18.564868, -3.917357), cpv(-7.365692, -5.544959)));
	cpSpaceAddConstraint(space, cpPinJointNew(body32, body16, cpv(9.780072, -3.653791), cpv(-17.770042, -3.037371)));
	cpSpaceAddConstraint(space, cpPinJointNew(body15, body32, cpv(16.578437, -7.082051), cpv(-8.818548, -3.351598)));
	cpSpaceAddConstraint(space, cpPinJointNew(body31, body15, cpv(9.0, -3.0), cpv(-18.896199, -3.991701)));
	cpSpaceAddConstraint(space, cpPinJointNew(body14, body31, cpv(17.492856, -5.830952), cpv(-10.0, -3.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body31, cpv(13.325518, -0.656181), cpv(-2.0, 8.0)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body14, cpv(8.580826, -2.523772), cpv(1.543487, 14.234383)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body30, cpv(-4.668979, -7.949883), cpv(-0.082761, 9.848510)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body16, cpv(-12.164583, -0.151426), cpv(1.050306, 17.230695)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body32, cpv(-5.350397, 7.167513), cpv(-0.137361, 11.400927)));
	cpSpaceAddConstraint(space, cpPinJointNew(body20, body15, cpv(4.038036, 5.804676), cpv(-1.512984, 16.932539)));
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
	BGBLIT(rc_bg25)
}


const kineticArtLevel Level05 = {
	5,
	"Level 5",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

