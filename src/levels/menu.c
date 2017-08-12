
#include "../main.h"

extern kineticArtLevel Level01;
extern kineticArtLevel Level02;
extern kineticArtLevel Level03;
extern kineticArtLevel Level04;
extern kineticArtLevel Level05;
extern kineticArtLevel Level06;
extern kineticArtLevel Level07;
extern kineticArtLevel Level08;
extern kineticArtLevel Level09;
extern kineticArtLevel Level10;
extern kineticArtLevel Level11;
extern kineticArtLevel Level12;
extern kineticArtLevel Level13;
extern kineticArtLevel Level14;
extern kineticArtLevel Level15;
extern kineticArtLevel Level16;
extern kineticArtLevel Level17;
extern kineticArtLevel Level18;
extern kineticArtLevel Level19;
extern kineticArtLevel Level20;
extern kineticArtLevel Level21;
extern kineticArtLevel Level22;
extern kineticArtLevel Level23;
extern kineticArtLevel Level24;
extern kineticArtLevel Level25;
extern kineticArtLevel Level26;
extern kineticArtLevel Level27;
extern kineticArtLevel Level28;
extern kineticArtLevel Level29;
extern kineticArtLevel Level30;
extern kineticArtLevel Level31;
extern kineticArtLevel Level32;
extern kineticArtLevel Level33;
extern kineticArtLevel Level34;
extern kineticArtLevel Level35;
extern kineticArtLevel Level36;
extern kineticArtLevel Level37;
extern kineticArtLevel Level38;
extern kineticArtLevel Level39;
extern kineticArtLevel Level40;
extern kineticArtLevel Level41;
extern kineticArtLevel Level42;
extern kineticArtLevel Level43;
extern kineticArtLevel Level44;
extern kineticArtLevel Level45;
extern kineticArtLevel Level46;
extern kineticArtLevel Level47;
extern kineticArtLevel Level48;
extern kineticArtLevel Level49;
extern kineticArtLevel Level50;
extern kineticArtLevel Level51;
extern kineticArtLevel Level52;
extern kineticArtLevel Level53;
extern kineticArtLevel Level54;
extern kineticArtLevel Level55;
extern kineticArtLevel Level56;
extern kineticArtLevel Level57;
extern kineticArtLevel Level58;
extern kineticArtLevel Level59;
extern kineticArtLevel Level60;
extern kineticArtLevel Level61;
extern kineticArtLevel Level62;
extern kineticArtLevel Level63;
extern kineticArtLevel Level64;
extern kineticArtLevel Level65;
extern kineticArtLevel Level66;
extern kineticArtLevel Level67;
extern kineticArtLevel Level68;
extern kineticArtLevel Level69;
extern kineticArtLevel Level70;
extern kineticArtLevel Level71;
extern kineticArtLevel Level72;
extern kineticArtLevel Level73;
extern kineticArtLevel Level74;
extern kineticArtLevel Level75;
extern kineticArtLevel Level76;
extern kineticArtLevel Level77;

extern kineticArtLevel Options;
extern kineticArtLevel Scores;
extern kineticArtLevel Editor;
extern kineticArtLevel Author;

extern kineticArtLevel *levels[] = {
	&Level01,
	&Level02,
	&Level03,
	&Level04,
	&Level05,
	&Level06,
	&Level07,
	&Level08,
	&Level09,
	&Level10,
	&Level11,
	&Level12,
	&Level13,
	&Level14,
	&Level15,
	&Level16,
	&Level17,
	&Level18,
	&Level19,
	&Level20,
	&Level21,
	&Level22,
	&Level23,
	&Level24,
	&Level25,
	&Level26,
	&Level27,
	&Level28,
	&Level29,
	&Level30,
	&Level31,
	&Level32,
	&Level33,
	&Level34,
	&Level35,
	&Level36,
	&Level37,
	&Level38,
	&Level39,
	&Level40,
	&Level41,
	&Level42,
	&Level43,
	&Level44,
	&Level45,
	&Level46,
	&Level47,
	&Level48,
	&Level49,
	&Level50,
	&Level51,
	&Level52,
	&Level53,
	&Level54,
	&Level55,
	&Level56,
	&Level57,
	&Level58,
	&Level59,
	&Level60,
	&Level61,
	&Level62,
	&Level63,
	&Level64,
	&Level65,
	&Level66,
	&Level67,
	&Level68,
	&Level69,
	&Level70,
	&Level71,
	&Level72,
	&Level73,
	&Level74,
	&Level75,
	&Level76,
	&Level77
};

static int flyers[] = {rc_gem03r, rc_gem03g, rc_gem03b, rc_gem03v,
					rc_gem06r, rc_gem06v,
					rc_gem10b, rc_gem28r, rc_gem28b, rc_gem28v,
					rc_gem21r, rc_gem21g, rc_gem21b, rc_gem21v, rc_gem21y,
					/*rc_gem26r, rc_gem26g, rc_gem26b, rc_gem26v, rc_gem26y,*/
					rc_gem27r, rc_gem27g, rc_gem27b, rc_gem27v, rc_gem27y,
					/*rc_gem29r, rc_gem29g, rc_gem29b, rc_gem29v, rc_gem29y,*/
					rc_gem22r, rc_gem22b, rc_gem22v, };

int credits_counter = 0;
#define CREDITS_DELAY 2000

static void playon(DIALOG *d)
{
	if (stream) logg_update_stream(stream);
}


static void init(void)
{

	credits_counter = 0;

	ballSpeed = 370;
	levelStarted = true;

	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	Bite->velocity_func = (cpBodyVelocityFunc)biteVelocityMenu; /* fix it to the right one */
	Player->velocity_func = (cpBodyVelocityFunc)ballVelocityMenu; /* fix it to the right one */

	mouseBody->data = (BITMAP *)data[rc_mouse].dat;

	emitterNew(-1, 2, (BITMAP *)data[rc_p_std_y].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_y].dat, Bite, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_r].dat, mouseBody, underspace);

	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, WALL_CT, ccPlayerWall, NULL, NULL, NULL, NULL); /* player hits the wall */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, PLAYER_BITE_CT, ccPlayerWall, NULL, NULL, NULL, NULL); /* player hits the wall */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, WALL_CT, ccObjectWall, NULL, NULL, NULL, NULL); /* smashed the wall */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, FLOOR_CT, ccObjectWall, NULL, NULL, NULL, NULL); /* smashed the floor */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, PLAYER_BITE_CT, ccObjectWall, NULL, NULL, NULL, NULL); /* smashed the bite */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, OBJECT_CT, ccPlayerObject2, NULL, NULL, NULL, NULL); /* destroyed by player */

	/*position_mouse(SIZE_X - 100, SIZE_Y / 2);*/

{  /* Total bodies: 93, total joints: 93 */
	int health = 50;
	cpBody *body0 = staticBody;
	cpBody *body1 = createPolyUniWrapper(182, 1, 1.0, inf, cpv(703.0, 356.0), cpv(25.0, 31.0), cpvzero, 0.274693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body2 = createPolyUniWrapper(182, 2, 1.0, inf, cpv(762.0, 304.0), cpv(21.0, 66.0), cpvzero, 2.521343, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body3 = createPolyUniWrapper(182, 3, 1.0, inf, cpv(743.0, 456.0), cpv(21.0, 65.0), cpvzero, 0.602287, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body4 = createPolyUniWrapper(145, 4, 1.0, inf, cpv(767.0, 505.0), cpv(26.0, -1.0), cpvzero, 1.482789, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body5 = createPolyUniWrapper(145, 5, 1.0, inf, cpv(765.0, 464.0), cpv(26.0, 17.0), cpvzero, 1.703348, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body6 = createPolyUniWrapper(145, 6, 1.0, inf, cpv(766.0, 425.0), cpv(18.0, -18.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body7 = createPolyUniWrapper(145, 7, 1.0, inf, cpv(782.0, 544.0), cpv(22.0, -66.0), cpvzero, 1.118642, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body8 = createPolyUniWrapper(146, 8, 1.0, inf, cpv(752.0, 392.0), cpv(21.0, -50.0), cpvzero, 0.917950, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body9 = createPolyUniWrapper(145, 9, 1.0, inf, cpv(734.0, 363.0), cpv(28.0, 62.0), cpvzero, 1.373401, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body10 = createPolyUniWrapper(146, 10, 1.0, inf, cpv(727.0, 330.0), cpv(26.0, 12.0), cpvzero, 1.685673, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body11 = createPolyUniWrapper(146, 11, 1.0, inf, cpv(743.0, 256.0), cpv(21.0, 38.0), cpvzero, 1.675673, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body12 = createPolyUniWrapper(147, 12, 1.0, inf, cpv(735.0, 297.0), cpv(17.0, -38.0), cpvzero, 1.951303, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body13 = createPolyUniWrapper(147, 13, 1.0, inf, cpv(742.0, 221.0), cpv(29.0, 64.0), cpvzero, 1.257176, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body14 = createPolyUniWrapper(148, 14, 1.0, inf, cpv(725.0, 187.0), cpv(23.0, -47.0), cpvzero, 0.881872, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body15 = createPolyUniWrapper(149, 15, 1.0, inf, cpv(695.0, 166.0), cpv(24.0, -50.0), cpvzero, 0.551655, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body16 = createPolyUniWrapper(150, 16, 1.0, inf, cpv(660.0, 162.0), cpv(15.0, 32.0), cpvzero, -0.223477, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body17 = createPolyUniWrapper(151, 17, 1.0, inf, cpv(629.0, 182.0), cpv(26.0, -27.0), cpvzero, -0.832981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body18 = createPolyUniWrapper(198, 18, 1.0, inf, cpv(236.0, 91.0), cpv(20.0, -64.0), cpvzero, 1.892547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body19 = createPolyUniWrapper(57, 19, 1.0, inf, cpv(609.0, 216.0), cpv(18.0, 11.0), cpvzero, -2.761086, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body20 = createPolyUniWrapper(72, 20, 1.0, inf, cpv(651.0, 263.0), cpv(21.0, -58.0), cpvzero, -2.214297, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body21 = createPolyUniWrapper(71, 21, 1.0, inf, cpv(587.0, 267.0), cpv(24.0, -15.0), cpvzero, 1.943784, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body22 = createPolyUniWrapper(72, 22, 1.0, inf, cpv(559.0, 210.0), cpv(15.0, 54.0), cpvzero, -0.128323, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body23 = createPolyUniWrapper(109, 23, 1.0, inf, cpv(148.0, 52.0), cpv(18.0, 50.0), cpvzero, 0.973620, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body24 = createPolyUniWrapper(105, 24, 1.0, inf, cpv(616.0, 255.0), cpv(20.0, 46.0), cpvzero, -1.775218, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body25 = createPolyUniWrapper(109, 25, 1.0, inf, cpv(721.0, 231.0), cpv(28.0, 6.0), cpvzero, 0.380506, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body26 = createPolyUniWrapper(105, 26, 1.0, inf, cpv(572.0, 235.0), cpv(17.0, 11.0), cpvzero, -0.318217, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body27 = createPolyUniWrapper(107, 27, 1.0, inf, cpv(642.0, 216.0), cpv(17.0, -69.0), cpvzero, -3.038511, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body28 = createPolyUniWrapper(107, 28, 1.0, inf, cpv(598.0, 186.0), cpv(29.0, 42.0), cpvzero, 0.904827, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body29 = createPolyUniWrapper(138, 29, 1.0, inf, cpv(23.0, 515.0), cpv(23.0, -34.0), cpvzero, 2.312744, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body30 = createPolyUniWrapper(138, 30, 1.0, inf, cpv(48.0, 482.0), cpv(22.0, 66.0), cpvzero, 1.882838, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body31 = createPolyUniWrapper(138, 31, 1.0, inf, cpv(52.0, 439.0), cpv(16.0, 7.0), cpvzero, 1.594601, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body32 = createPolyUniWrapper(138, 32, 1.0, inf, cpv(56.0, 394.0), cpv(28.0, -18.0), cpvzero, 1.773118, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body33 = createPolyUniWrapper(138, 33, 1.0, inf, cpv(72.0, 352.0), cpv(24.0, 9.0), cpvzero, 2.142134, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body34 = createPolyUniWrapper(137, 34, 1.0, inf, cpv(100.0, 319.0), cpv(22.0, -21.0), cpvzero, 2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body35 = createPolyUniWrapper(137, 35, 1.0, inf, cpv(128.0, 285.0), cpv(22.0, 24.0), cpvzero, 1.929567, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body36 = createPolyUniWrapper(136, 36, 1.0, inf, cpv(136.0, 246.0), cpv(28.0, 64.0), cpvzero, 1.471128, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body37 = createPolyUniWrapper(135, 37, 1.0, inf, cpv(124.0, 208.0), cpv(16.0, -49.0), cpvzero, 0.982794, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body38 = createPolyUniWrapper(134, 38, 1.0, inf, cpv(103.0, 178.0), cpv(21.0, -67.0), cpvzero, 0.862170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body39 = createPolyUniWrapper(133, 39, 1.0, inf, cpv(85.0, 142.0), cpv(24.0, -58.0), cpvzero, 1.325818, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body40 = createPolyUniWrapper(132, 40, 1.0, inf, cpv(91.0, 103.0), cpv(25.0, 48.0), cpvzero, 2.013171, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body41 = createPolyUniWrapper(131, 41, 1.0, inf, cpv(124.0, 80.0), cpv(18.0, 26.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body42 = createPolyUniWrapper(112, 42, 1.0, inf, cpv(383.0, 80.0), cpv(20.0, 32.0), cpvzero, -0.626743, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body43 = createPolyUniWrapper(111, 43, 1.0, inf, cpv(178.0, 258.0), cpv(26.0, 47.0), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body44 = createPolyUniWrapper(110, 44, 1.0, inf, cpv(399.0, 101.0), cpv(23.0, 21.0), cpvzero, -0.558599, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body45 = createPolyUniWrapper(109, 45, 1.0, inf, cpv(144.0, 109.0), cpv(27.0, -62.0), cpvzero, -0.655696, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body46 = createPolyUniWrapper(106, 46, 1.0, inf, cpv(777.0, 44.0), cpv(18.0, -4.0), cpvzero, 1.712693, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body47 = createPolyUniWrapper(137, 47, 1.0, inf, cpv(670.0, 48.0), cpv(17.0, -20.0), cpvzero, -0.308053, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body48 = createPolyUniWrapper(138, 48, 1.0, inf, cpv(783.0, 78.0), cpv(20.0, -65.0), cpvzero, 0.844154, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body49 = createPolyUniWrapper(137, 49, 1.0, inf, cpv(488.0, 157.0), cpv(17.0, -37.0), cpvzero, -3.072736, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body50 = createPolyUniWrapper(138, 50, 1.0, inf, cpv(710.0, 45.0), cpv(24.0, -73.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body51 = createPolyUniWrapper(145, 51, 1.0, inf, cpv(524.0, 154.0), cpv(27.0, -39.0), cpvzero, 2.949944, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body52 = createPolyUniWrapper(146, 52, 1.0, inf, cpv(557.0, 142.0), cpv(16.0, -54.0), cpvzero, 2.597760, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body53 = createPolyUniWrapper(145, 53, 1.0, inf, cpv(588.0, 120.0), cpv(26.0, -21.0), cpvzero, 2.397837, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body54 = createPolyUniWrapper(146, 54, 1.0, inf, cpv(613.0, 91.0), cpv(22.0, -60.0), cpvzero, 2.199593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body55 = createPolyUniWrapper(145, 55, 1.0, inf, cpv(640.0, 65.0), cpv(23.0, -9.0), cpvzero, 2.422763, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body56 = createPolyUniWrapper(146, 56, 1.0, inf, cpv(748.0, 54.0), cpv(23.0, -67.0), cpvzero, 0.512389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body95 = createPolyUniWrapper(183, 95, 1.0, inf, cpv(364.0, 49.0), cpv(15.0, -14.0), cpvzero, 0.950547, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body58 = createPolyUniWrapper(148, 58, 1.0, inf, cpv(420.0, 127.0), cpv(26.0, -66.0), cpvzero, 0.815692, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body59 = createPolyUniWrapper(147, 59, 1.0, inf, cpv(450.0, 146.0), cpv(29.0, -36.0), cpvzero, 0.528074, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body94 = createPolyUniWrapper(105, 94, 1.0, inf, cpv(389.0, 46.0), cpv(24.0, 40.0), cpvzero, 1.609239, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body61 = createPolyUniWrapper(147, 61, 1.0, inf, cpv(178.0, 238.0), cpv(16.0, -63.0), cpvzero, 2.645170, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body62 = createPolyUniWrapper(146, 62, 1.0, inf, cpv(152.0, 263.0), cpv(20.0, -47.0), cpvzero, 2.129396, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body63 = createPolyUniWrapper(182, 63, 1.0, inf, cpv(612.0, 47.0), cpv(27.0, -33.0), cpvzero, 0.305879, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body64 = createPolyUniWrapper(182, 64, 1.0, inf, cpv(604.0, 140.0), cpv(24.0, 0.0), cpvzero, -1.390943, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body65 = createPolyUniWrapper(182, 65, 1.0, inf, cpv(719.0, 68.0), cpv(21.0, -56.0), cpvzero, -0.475695, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body66 = createPolyUniWrapper(186, 66, 1.0, inf, cpv(532.0, 130.0), cpv(23.0, 37.0), cpvzero, 0.336675, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body67 = createPolyUniWrapper(185, 67, 1.0, inf, cpv(60.0, 111.0), cpv(25.0, 48.0), cpvzero, 0.680521, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body68 = createPolyUniWrapper(185, 68, 1.0, inf, cpv(114.0, 154.0), cpv(25.0, 2.0), cpvzero, 1.518213, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body69 = createPolyUniWrapper(184, 69, 1.0, inf, cpv(195.0, 125.0), cpv(18.0, -33.0), cpvzero, -1.668050, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body70 = createPolyUniWrapper(184, 70, 1.0, inf, cpv(205.0, 50.0), cpv(28.0, 24.0), cpvzero, 2.375060, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body71 = createPolyUniWrapper(183, 71, 1.0, inf, cpv(233.0, 58.0), cpv(25.0, 24.0), cpvzero, 2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body72 = createPolyUniWrapper(183, 72, 1.0, inf, cpv(218.0, 125.0), cpv(24.0, 36.0), cpvzero, -2.104505, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body73 = createPolyUniWrapper(185, 73, 1.0, inf, cpv(407.0, 68.0), cpv(15.0, -47.0), cpvzero, 2.111216, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body74 = createPolyUniWrapper(186, 74, 1.0, inf, cpv(166.0, 120.0), cpv(29.0, -8.0), cpvzero, -1.288241, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body75 = createPolyUniWrapper(186, 75, 1.0, inf, cpv(175.0, 47.0), cpv(24.0, 69.0), cpvzero, 1.618379, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body76 = createPolyUniWrapper(109, 76, 1.0, inf, cpv(698.0, 140.0), cpv(26.0, -59.0), cpvzero, 1.361773, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body77 = createPolyUniWrapper(93, 77, 1.0, inf, cpv(196.0, 85.0), cpv(16.0, -50.0), cpvzero, -3.043866, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body78 = createPolyUniWrapper(182, 78, 1.0, inf, cpv(75.0, 464.0), cpv(15.0, 72.0), cpvzero, 2.437099, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body79 = createPolyUniWrapper(182, 79, 1.0, inf, cpv(133.0, 326.0), cpv(16.0, -41.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body80 = createPolyUniWrapper(182, 80, 1.0, inf, cpv(38.0, 366.0), cpv(29.0, 55.0), cpvzero, 1.148791, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body81 = createPolyUniWrapper(182, 81, 1.0, inf, cpv(111.0, 255.0), cpv(15.0, -12.0), cpvzero, 0.808650, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body82 = createPolyUniWrapper(186, 82, 1.0, inf, cpv(430.0, 103.0), cpv(20.0, -25.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body83 = createPolyUniWrapper(181, 83, 1.0, inf, cpv(425.0, 85.0), cpv(20.0, 57.0), cpvzero, 2.918116, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body84 = createPolyUniWrapper(181, 84, 1.0, inf, cpv(375.0, 124.0), cpv(23.0, 5.0), cpvzero, -1.107149, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body85 = createPolyUniWrapper(185, 85, 1.0, inf, cpv(361.0, 100.0), cpv(20.0, -53.0), cpvzero, 0.0, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body86 = createPolyUniWrapper(186, 86, 1.0, inf, cpv(395.0, 133.0), cpv(15.0, -9.0), cpvzero, -1.612439, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body87 = createPolyUniWrapper(15, 87, 1.0, inf, cpv(216.0, 234.0), cpv(28.0, 33.0), cpvzero, 1.771449, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body88 = createPolyUniWrapper(44, 88, 1.0, inf, cpv(155.0, 81.0), cpv(20.0, 50.0), cpvzero, 1.670465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body89 = createPolyUniWrapper(106, 89, 1.0, inf, cpv(449.0, 123.0), cpv(21.0, 3.0), cpvzero, -3.011890, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body90 = createPolyUniWrapper(107, 90, 1.0, inf, cpv(438.0, 63.0), cpv(26.0, -55.0), cpvzero, 3.030935, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body91 = createPolyUniWrapper(106, 91, 1.0, inf, cpv(415.0, 153.0), cpv(17.0, -62.0), cpvzero, -1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body92 = createPolyUniWrapper(107, 92, 1.0, inf, cpv(348.0, 125.0), cpv(25.0, -39.0), cpvzero, -1.071450, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body93 = createPolyUniWrapper(105, 93, 1.0, inf, cpv(349.0, 70.0), cpv(20.0, 1.0), cpvzero, 0.463648, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body1, body0, cpvzero, cpv(703.0, 346.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body2, body0, cpvzero, cpv(762.0, 294.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body3, body0, cpvzero, cpv(743.0, 446.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body4, body0, cpvzero, cpv(767.0, 495.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body5, body0, cpvzero, cpv(765.0, 454.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body6, body0, cpvzero, cpv(766.0, 415.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body7, body0, cpvzero, cpv(782.0, 534.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body8, body0, cpvzero, cpv(752.0, 382.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body9, body0, cpvzero, cpv(734.0, 353.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body10, body0, cpvzero, cpv(727.0, 320.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body11, body0, cpvzero, cpv(743.0, 246.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body12, body0, cpvzero, cpv(735.0, 287.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body13, body0, cpvzero, cpv(742.0, 211.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body14, body0, cpvzero, cpv(725.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body15, body0, cpvzero, cpv(695.0, 156.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body16, body0, cpvzero, cpv(660.0, 152.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body17, body0, cpvzero, cpv(629.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body18, body0, cpvzero, cpv(236.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body19, body0, cpvzero, cpv(609.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body20, body0, cpvzero, cpv(651.0, 253.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body21, body0, cpvzero, cpv(587.0, 257.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body22, body0, cpvzero, cpv(559.0, 200.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body23, body0, cpvzero, cpv(148.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body24, body0, cpvzero, cpv(616.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body25, body0, cpvzero, cpv(721.0, 221.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body26, body0, cpvzero, cpv(572.0, 225.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body27, body0, cpvzero, cpv(642.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body28, body0, cpvzero, cpv(598.0, 176.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body29, body0, cpvzero, cpv(23.0, 505.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body30, body0, cpvzero, cpv(48.0, 472.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body31, body0, cpvzero, cpv(52.0, 429.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body32, body0, cpvzero, cpv(56.0, 384.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body33, body0, cpvzero, cpv(72.0, 342.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body34, body0, cpvzero, cpv(100.0, 309.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body35, body0, cpvzero, cpv(128.0, 275.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body36, body0, cpvzero, cpv(136.0, 236.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body37, body0, cpvzero, cpv(124.0, 198.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body38, body0, cpvzero, cpv(103.0, 168.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body39, body0, cpvzero, cpv(85.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body40, body0, cpvzero, cpv(91.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body41, body0, cpvzero, cpv(124.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body42, body0, cpvzero, cpv(383.0, 70.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body43, body0, cpvzero, cpv(178.0, 248.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body44, body0, cpvzero, cpv(399.0, 91.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body45, body0, cpvzero, cpv(144.0, 99.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body46, body0, cpvzero, cpv(777.0, 34.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body47, body0, cpvzero, cpv(670.0, 38.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body48, body0, cpvzero, cpv(783.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body49, body0, cpvzero, cpv(488.0, 147.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body50, body0, cpvzero, cpv(710.0, 35.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body51, body0, cpvzero, cpv(524.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body52, body0, cpvzero, cpv(557.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body53, body0, cpvzero, cpv(588.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body54, body0, cpvzero, cpv(613.0, 81.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body55, body0, cpvzero, cpv(640.0, 55.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body56, body0, cpvzero, cpv(748.0, 44.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body95, body0, cpvzero, cpv(364.0, 39.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body58, body0, cpvzero, cpv(420.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body59, body0, cpvzero, cpv(450.0, 136.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body94, body0, cpvzero, cpv(389.0, 36.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body61, body0, cpvzero, cpv(178.0, 228.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body62, body0, cpvzero, cpv(152.0, 253.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body63, body0, cpvzero, cpv(612.0, 37.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body64, body0, cpvzero, cpv(604.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body65, body0, cpvzero, cpv(719.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body66, body0, cpvzero, cpv(532.0, 120.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body67, body0, cpvzero, cpv(60.0, 101.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body68, body0, cpvzero, cpv(114.0, 144.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body69, body0, cpvzero, cpv(195.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body70, body0, cpvzero, cpv(205.0, 40.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body71, body0, cpvzero, cpv(233.0, 48.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body72, body0, cpvzero, cpv(218.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body73, body0, cpvzero, cpv(407.0, 58.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body74, body0, cpvzero, cpv(166.0, 110.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body75, body0, cpvzero, cpv(175.0, 37.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body76, body0, cpvzero, cpv(698.0, 130.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body77, body0, cpvzero, cpv(196.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body78, body0, cpvzero, cpv(75.0, 454.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body79, body0, cpvzero, cpv(133.0, 316.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body80, body0, cpvzero, cpv(38.0, 356.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body81, body0, cpvzero, cpv(111.0, 245.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body82, body0, cpvzero, cpv(430.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body83, body0, cpvzero, cpv(425.0, 75.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body84, body0, cpvzero, cpv(375.0, 114.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body85, body0, cpvzero, cpv(361.0, 90.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body86, body0, cpvzero, cpv(395.0, 123.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body87, body0, cpvzero, cpv(216.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body88, body0, cpvzero, cpv(155.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body89, body0, cpvzero, cpv(449.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body90, body0, cpvzero, cpv(438.0, 53.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body91, body0, cpvzero, cpv(415.0, 143.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body92, body0, cpvzero, cpv(348.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body93, body0, cpvzero, cpv(349.0, 60.0), 10.0, 300.0, 1.0));
}

}

static void destroy(void)
{
	ballSpeed = NORMAL_BALL_SPEED;
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, WALL_CT);
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, PLAYER_BITE_CT);
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, WALL_CT);
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, FLOOR_CT);
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, PLAYER_BITE_CT);
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, OBJECT_CT);
	freeSpaces();
}

static void update(void)
{
	if (key[KEY_F12]) runLevel(&Editor);
	if (key[KEY_ESC] && (key_shifts & KB_SHIFT_FLAG)) runLevel(&Author);
	if (credits_counter > CREDITS_DELAY) runLevel(&Author); else credits_counter++;

	if (key[KEY_F10] && (key_shifts & KB_SHIFT_FLAG)) {
		adime_callback = playon;
		drawing_mode(DRAW_MODE_SOLID, NULL, 0, 0);
		playState = false;
		int i = 0;
		adime_dialogf("Goto:",
			ADIME_ALIGN_CENTRE, ADIME_ALIGN_CENTRE, 200,
			"Level#:%int[1,77]",
			&i);
		drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);
		playState = true;
		if (i > 0) runLevel(levels[i-1]);
	}

	if (rand() % 250 < 1) {
		/*cpBody *body = createPolyUniWrapper(rc_gem01b+rand()%12, 0, 1.0f, 0, cpv(rand()%580+30, rand()%400+40), cpvmult(cpv(rand()%50-25, rand()%50-25), 10.0f), cpvzero, 0, (float)(rand()%20-10), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);*/
		cpBody *body = createPolyUniWrapper(flyers[rand()%(int)(sizeof(flyers)/sizeof(int)-1)], 0, 1.0f, 0, cpv(rand()%300+250, rand()%250+250), cpvmult(cpv(rand()%50-25, rand()%50-25), 10.0f), cpvzero, 0, (float)(rand()%20-10), 0, 0.9f, 0.5f, OBJECT_CT, OBJECT_LAYER, 1);
		body->alpha = FADE_IN;
		if (rand() % 5 < 3) emitterNew(150, 3, (BITMAP *)data[rc_p_big_g].dat, body, underspace); else emitterNew(150, 3, (BITMAP *)data[rc_p_big_r].dat, body, underspace);
	}
}

static void draw(void)
{
	/* Background */
	blit((BITMAP *)data[rc_bg_menu].dat, buffer, 0, 0, 0, 0, SIZE_X, SIZE_Y);

	/*[> Menu <]
	if (mouse_in_rect(280, 480, rc_btn_exit_r)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_exit_r].dat, 280, 480);
		if (mouse_b & 1) close_button_pressed = true;
	} else if (mouse_in_rect(260, 285, rc_btn_options_r)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_options_r].dat, 260, 285);
		if (mouse_b & 1) runLevel(&Options);
	} else if (mouse_in_rect(285, 380, rc_btn_scores_r)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_scores_r].dat, 285, 380);
		if (mouse_b & 1) {
			[>gameOver = true; [> DEBUG! <]<]
			[>score = 33;<]
			runLevel(&Scores);
		}
	} else if (mouse_in_rect(255, 145, rc_btn_play_r)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_play_r].dat, 255, 145);
		if (mouse_b & 1) runLevel(levels[settings.currentLevelIndex-1]);
	}*/

	/* Menu */
	if (mouse_in_rect(285, 495, rc_btn_exit)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_exit].dat, 285, 495);
		if (mouse_b & 1) close_button_pressed = true;
	} else if (mouse_in_rect(260, 275, rc_btn_options)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_options].dat, 260, 275);
		if (mouse_b & 1) runLevel(&Options);
	} else if (mouse_in_rect(205, 380, rc_btn_scores)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_scores].dat, 205, 380);
		if (mouse_b & 1) {
			/*gameOver = true; [> DEBUG! <]*/
			/*score = 33;*/
			runLevel(&Scores);
		}
	} else if (mouse_in_rect(270, 130, rc_btn_play)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_play].dat, 270, 130);
		if (mouse_b & 1) runLevel(levels[settings.currentLevelIndex-1]);
	}
}


const kineticArtLevel Menu = {
	1000,
	"Menu",
	"Music/menu.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

