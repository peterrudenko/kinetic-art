
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level51;
extern kineticArtLevel Level53;
#define PREV_LEVEL &Level51
#define NEXT_LEVEL &Level53


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_g].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_g].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 46, total joints: 46 */
	int health = 1;
	cpBody *body0 = staticBody;
	cpBody *body41 = createPolyUniWrapper(148, 41, 1.0, inf, cpv(595.940381, 315.080679), cpv(22.130530, -7.069105), cpvzero, 0.244979, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(148, 42, 1.0, inf, cpv(190.071760, 242.507566), cpv(8.128613, 11.374027), cpvzero, -1.797595, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(147, 43, 1.0, inf, cpv(402.822629, 366.400032), cpv(8.033591, 10.595493), cpvzero, 1.508378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(147, 44, 1.0, inf, cpv(408.513457, 326.316229), cpv(6.822181, 15.522467), cpvzero, 1.837048, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(146, 45, 1.0, inf, cpv(418.559551, 283.991950), cpv(7.554192, 11.989022), cpvzero, 1.965587, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(146, 46, 1.0, inf, cpv(436.323756, 245.429074), cpv(16.387801, 5.983227), cpvzero, 2.089942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(145, 47, 1.0, inf, cpv(464.056093, 212.209711), cpv(16.694137, 6.689844), cpvzero, 2.408778, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(145, 48, 1.0, inf, cpv(499.368052, 187.950958), cpv(4.625006, 15.498853), cpvzero, 2.726101, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(146, 49, 1.0, inf, cpv(391.897528, 305.444409), cpv(4.644291, 17.834431), cpvzero, 1.483519, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(146, 50, 1.0, inf, cpv(383.583243, 267.280245), cpv(9.015629, 8.974477), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(145, 51, 1.0, inf, cpv(372.394162, 230.098819), cpv(18.359453, 1.989553), cpvzero, 1.257176, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(145, 52, 1.0, inf, cpv(351.828863, 195.400063), cpv(8.207884, 10.140218), cpvzero, 0.997830, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(146, 53, 1.0, inf, cpv(322.958677, 162.293849), cpv(11.015613, 10.174200), cpvzero, 0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(147, 54, 1.0, inf, cpv(287.208899, 144.161690), cpv(6.755187, 15.094419), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(146, 55, 1.0, inf, cpv(544.143786, 180.769850), cpv(11.361364, 2.408731), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(147, 56, 1.0, inf, cpv(582.797188, 185.086220), cpv(12.131040, 8.679554), cpvzero, -2.790148, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body57 = createPolyUniWrapper(146, 57, 1.0, inf, cpv(243.275906, 139.427309), cpv(17.680086, 9.172564), cpvzero, 0.073939, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(146, 58, 1.0, inf, cpv(621.223213, 207.142311), cpv(7.218872, 13.400914), cpvzero, -2.545394, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(145, 59, 1.0, inf, cpv(204.716542, 153.050512), cpv(10.558919, 9.622455), cpvzero, -0.266252, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body60 = createPolyUniWrapper(145, 60, 1.0, inf, cpv(640.052119, 239.122953), cpv(7.310899, 11.879574), cpvzero, -1.610775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(146, 61, 1.0, inf, cpv(178.642446, 180.020651), cpv(9.109637, 10.655218), cpvzero, -0.620249, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(146, 62, 1.0, inf, cpv(644.031044, 277.185879), cpv(2.989051, -6.121933), cpvzero, -0.857735, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(147, 63, 1.0, inf, cpv(173.578424, 208.997978), cpv(7.898014, 11.670553), cpvzero, -1.274251, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(147, 64, 1.0, inf, cpv(622.408409, 301.975344), cpv(24.332361, 31.135442), cpvzero, -0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(146, 65, 1.0, inf, cpv(404.170494, 265.524269), cpv(13.459180, 1.821027), cpvzero, 1.428899, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(145, 66, 1.0, inf, cpv(397.144813, 226.440053), cpv(8.343666, 11.262217), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(144, 67, 1.0, inf, cpv(398.711962, 190.325778), cpv(11.291899, 5.469836), cpvzero, 1.934775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(143, 68, 1.0, inf, cpv(403.139963, 151.704158), cpv(4.999297, 14.298299), cpvzero, 2.070143, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(142, 69, 1.0, inf, cpv(433.241073, 92.723654), cpv(11.152864, 13.180157), cpvzero, 2.755710, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(142, 70, 1.0, inf, cpv(413.910291, 120.888273), cpv(12.133711, 6.667054), cpvzero, 2.457883, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(130, 71, 1.0, inf, cpv(511.916185, 77.379458), cpv(3.212734, 11.766324), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(142, 72, 1.0, inf, cpv(454.373820, 71.980940), cpv(10.857133, 2.951988), cpvzero, 3.024484, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(130, 73, 1.0, inf, cpv(217.209887, 252.909909), cpv(12.358210, 7.897623), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(130, 74, 1.0, inf, cpv(191.934633, 278.431303), cpv(10.320186, 6.028967), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(125, 75, 1.0, inf, cpv(235.035564, 293.455702), cpv(15.253014, 1.041157), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(126, 76, 1.0, inf, cpv(543.248185, 283.562011), cpv(10.789538, 4.335911), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(127, 77, 1.0, inf, cpv(578.654322, 291.747900), cpv(2.912983, 8.582810), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(127, 78, 1.0, inf, cpv(566.517015, 326.589052), cpv(8.772640, 5.616747), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(129, 79, 1.0, inf, cpv(477.570869, 91.687045), cpv(11.254364, 2.466553), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(129, 80, 1.0, inf, cpv(480.615932, 48.365941), cpv(1.977683, 17.278021), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(119, 81, 1.0, inf, cpv(220.870757, 275.525280), cpv(13.541454, 1.509058), cpvzero, -1.937970, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(118, 82, 1.0, inf, cpv(493.925620, 70.744020), cpv(9.113645, -2.482294), cpvzero, -2.310771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(119, 83, 1.0, inf, cpv(561.015139, 299.190247), cpv(18.931011, 10.969186), cpvzero, -2.940638, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(106, 87, 1.0, inf, cpv(319.310835, 188.918772), cpv(16.825230, -5.188431), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(109, 85, 1.0, inf, cpv(568.641609, 164.878639), cpv(9.055357, 8.575510), cpvzero, 2.649783, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(106, 88, 1.0, inf, cpv(469.822030, 236.370493), cpv(12.845205, 3.578568), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(597.0, 305.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(197.0, 235.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(407.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(413.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(425.0, 276.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(442.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(470.0, 204.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(506.0, 180.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(398.0, 297.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(388.0, 258.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(377.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(356.0, 186.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(330.0, 155.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(292.0, 135.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(547.0, 171.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(589.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body57, body0, cpvzero, cpv(250.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(626.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(211.0, 145.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body60, body0, cpvzero, cpv(647.0, 231.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(185.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(647.0, 267.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(180.0, 201.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(629.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(408.0, 256.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(403.0, 218.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(403.0, 181.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(410.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(436.0, 83.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(419.0, 112.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(519.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(461.0, 64.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(224.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(196.0, 269.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(239.0, 284.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(547.0, 274.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(587.0, 286.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(568.0, 317.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(481.0, 82.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(488.0, 41.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(224.0, 266.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(500.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(566.0, 290.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(322.0, 179.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(574.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(474.0, 227.0), 10.0, 300.0, 1.0));
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


const kineticArtLevel Level52 = {
	52,
	"Level 52",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

