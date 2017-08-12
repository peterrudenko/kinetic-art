
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level33;
extern kineticArtLevel Level35;
#define PREV_LEVEL &Level33
#define NEXT_LEVEL &Level35


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 40, total joints: 60 */
	int health = 4;
	cpBody *body0 = staticBody;
	cpBody *body41 = createPolyUniWrapper(15, 41, 1.0, inf, cpv(384.0, 248.0), cpvzero, cpvzero, 2.220667, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(15, 42, 1.0, inf, cpv(454.0, 249.0), cpvzero, cpvzero, -2.154667, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(14, 43, 1.0, inf, cpv(419.0, 304.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(16, 44, 1.0, inf, cpv(618.0, 216.0), cpvzero, cpvzero, 2.311779, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(16, 45, 1.0, inf, cpv(684.0, 219.0), cpvzero, cpvzero, -2.132718, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(16, 46, 1.0, inf, cpv(217.0, 218.0), cpvzero, cpvzero, -2.151553, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(16, 47, 1.0, inf, cpv(149.0, 216.0), cpvzero, cpvzero, 2.194498, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(17, 48, 1.0, inf, cpv(182.0, 269.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(17, 49, 1.0, inf, cpv(650.0, 270.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(190, 50, 1.0, 47.856161, cpv(373.0, 103.0), cpvzero, cpvzero, -0.252554, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(190, 51, 1.0, 47.856161, cpv(463.0, 106.0), cpvzero, cpvzero, 0.298499, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(188, 52, 1.0, 47.856161, cpv(609.0, 79.0), cpvzero, cpvzero, -0.426627, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(46, 53, 1.0, 103.311066, cpv(264.0, 90.0), cpvzero, cpvzero, -2.819842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(46, 54, 1.0, 103.311066, cpv(580.0, 97.0), cpvzero, cpvzero, 2.723368, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(43, 55, 1.0, 103.311066, cpv(340.0, 108.0), cpvzero, cpvzero, -2.960273, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(43, 56, 1.0, 103.311066, cpv(503.0, 111.0), cpvzero, cpvzero, 2.880990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(105, 57, 1.0, 75.803873, cpv(217.0, 256.0), cpvzero, cpvzero, -2.593043, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(105, 58, 1.0, 75.803873, cpv(183.0, 203.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(105, 59, 1.0, 75.803873, cpv(148.0, 255.0), cpvzero, cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(109, 60, 1.0, 75.803873, cpv(386.0, 283.0), cpvzero, cpvzero, -0.551655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(109, 61, 1.0, 75.803873, cpv(454.0, 287.0), cpvzero, cpvzero, -2.466852, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(109, 62, 1.0, 75.803873, cpv(419.0, 237.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(105, 63, 1.0, 75.803873, cpv(617.0, 251.0), cpvzero, cpvzero, -0.588003, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(105, 64, 1.0, 75.803873, cpv(651.0, 204.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(105, 65, 1.0, 75.803873, cpv(683.0, 256.0), cpvzero, cpvzero, -2.521343, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(126, 66, 1.0, 40.5, cpv(420.0, 269.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(129, 67, 1.0, 40.5, cpv(649.0, 235.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(129, 68, 1.0, 40.5, cpv(183.0, 234.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(186, 69, 1.0, 88.659334, cpv(418.0, 193.0), cpvzero, cpvzero, 1.533776, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(186, 70, 1.0, 88.659334, cpv(418.0, 147.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(185, 71, 1.0, 88.659334, cpv(183.0, 160.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(185, 72, 1.0, 88.659334, cpv(184.0, 111.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(185, 73, 1.0, 88.659334, cpv(655.0, 161.0), cpvzero, cpvzero, 1.546991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(185, 74, 1.0, 88.659334, cpv(656.0, 114.0), cpvzero, cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(187, 75, 1.0, 47.856161, cpv(304.0, 94.0), cpvzero, cpvzero, 0.274167, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(187, 76, 1.0, 47.856161, cpv(541.0, 98.0), cpvzero, cpvzero, -0.291457, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(188, 77, 1.0, 47.856161, cpv(231.0, 74.0), cpvzero, cpvzero, 0.339293, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(31, 78, 1.0, 141.849016, cpv(184.0, 61.0), cpvzero, cpvzero, -3.128935, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(31, 79, 1.0, 141.849016, cpv(657.0, 63.0), cpvzero, cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(28, 80, 1.0, 141.849016, cpv(418.0, 104.0), cpvzero, cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpv(1.0, -8.0), cpv(419.0, 90.0), 6.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpv(1.063206, 4.986942), cpv(183.0, 49.0), 7.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpv(-0.0, 7.0), cpv(657.0, 50.0), 6.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body78, cpv(-18.0, 1.0), cpv(0.810062, -15.011456), 17.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body72, cpv(-18.0, 1.0), cpv(17.0, 1.0), 14.035669, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body71, cpv(-15.0, -0.0), cpv(17.0, 0.0), 11.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body74, cpv(0.0, -16.0), cpv(-17.0, 1.0), 18.110770, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body73, cpv(17.0, 0.0), cpv(-17.994900, -0.428450), 12.041595, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body64, cpv(17.994900, 0.428450), cpv(-14.0, -0.0), 11.704700, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body80, cpv(-19.0, 1.0), cpv(1.0, 16.0), 8.246211, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body70, cpv(-17.025364, 0.370117), cpv(18.0, 1.0), 11.0, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body69, cpv(-14.0, -0.0), cpv(17.987667, 0.666210), 12.041595, 400.0, 0.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body78, cpv(-9.485373, 0.166410), cpv(-20.011055, -0.746776), 20.124612, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body77, cpv(6.324555, 6.324555), cpv(8.209563, -0.776580), 21.840330, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body53, cpv(-10.438746, -0.180497), cpv(-5.059644, 6.957011), 23.769729, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body75, cpv(5.377049, 7.147541), cpv(10.438746, 0.180497), 22.203603, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body55, cpv(-8.964374, -1.280625), cpv(-3.655738, 7.786885), 19.235384, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body50, cpv(-21.0, -2.0), cpv(11.150807, 0.812104), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body80, cpv(-10.440048, 0.073521), cpv(21.0, -2.0), 14.035669, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body51, cpv(6.441566, 6.892476), cpv(10.440048, -0.073521), 22.203603, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body56, cpv(-8.237306, -0.383131), cpv(-5.668578, 5.732994), 26.305893, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body76, cpv(5.685939, 6.904354), cpv(11.685481, -0.670478), 20.024984, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body54, cpv(-8.938144, 0.331042), cpv(-5.584404, 5.178265), 19.313208, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body52, cpv(22.0, -1.0), cpv(11.172679, -0.413803), 18.867962, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body58, cpv(0.0, -10.0), cpv(13.0, 1.0), 8.062258, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body68, cpv(1.0, -16.0), cpv(0.0, 8.0), 11.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body58, cpv(-15.254435, -7.503480), cpv(-1.0, 9.0), 11.661904, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body47, cpv(5.547002, -4.714952), cpv(14.254631, -12.720279), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body59, cpv(-16.0, -6.0), cpv(4.437602, 4.160251), 13.892444, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body48, cpv(3.555341, -5.688546), cpv(17.0, -6.0), 12.649111, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body57, cpv(-16.407440, -5.982968), cpv(1.943586, 7.015873), 14.142136, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body46, cpv(-4.0, -8.0), cpv(15.205621, -6.766763), 15.620499, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body47, cpv(-8.0, -4.0), cpv(-2.039204, -18.243948), 11.180340, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body68, cpv(1.541463, -16.929970), cpv(6.0, -3.0), 13.928388, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body59, cpv(-7.0, 2.0), cpv(14.422205, -0.0), 19.416488, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body57, cpv(8.0, 2.0), cpv(15.785714, 0.900686), 17.029386, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body62, cpv(-1.0, -9.0), cpv(14.0, 1.0), 9.055385, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body66, cpv(0.0, -16.0), cpv(0.0, 7.0), 12.041595, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body62, cpv(-14.267227, -10.509341), cpv(-1.0, 9.0), 11.401754, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body41, cpv(4.520340, -5.437511), cpv(12.133512, -10.477494), 12.165525, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body43, cpv(2.489463, 7.402876), cpv(-15.0, -8.0), 14.422205, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body43, cpv(0.0, -6.403124), cpv(15.0, -9.0), 16.278821, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body61, cpv(-16.671808, -7.419625), cpv(-0.156174, 7.808688), 14.142136, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body42, cpv(-3.0, -9.0), cpv(14.943542, -8.104972), 13.038405, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body41, cpv(-8.0, -5.0), cpv(-1.305706, -16.592020), 15.652476, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body60, cpv(-6.0, 4.0), cpv(13.364484, 1.179219), 16.492423, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body66, cpv(14.992681, -0.468521), cpv(7.0, 3.0), 16.155494, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body66, cpv(0.208584, -16.642010), cpv(7.0, -5.0), 14.317821, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body64, cpv(0.0, -10.0), cpv(13.0, 1.0), 8.062258, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body67, cpv(0.0, -17.0), cpv(0.0, 7.0), 11.045361, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body64, cpv(-13.814229, -7.692014), cpv(-4.0, 9.0), 14.212670, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body44, cpv(2.218801, -6.933752), cpv(13.829927, -8.586799), 12.0, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body63, cpv(-14.0, -9.0), cpv(1.109400, 5.547002), 16.155494, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body49, cpv(2.906191, -4.533658), cpv(15.0, -10.0), 13.152946, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body65, cpv(-14.385958, -9.057826), cpv(1.859962, 6.044877), 14.035669, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body45, cpv(-4.0, -9.0), cpv(15.608295, -7.898173), 13.453624, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body44, cpv(-7.0, -4.0), cpv(-2.809940, -16.404397), 11.661904, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body67, cpv(1.755150, -17.802232), cpv(6.0, -5.0), 13.341664, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body65, cpv(7.0, 2.0), cpv(14.995945, 0.348743), 18.027756, 100.0, 3.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body63, cpv(-6.0, 1.0), cpv(12.758105, -1.109400), 17.464249, 100.0, 3.0));
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


const kineticArtLevel Level34 = {
	34,
	"Level 34",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

