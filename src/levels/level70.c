
#include "../main.h"

extern kineticArtLevel Menu;
extern kineticArtLevel Level69;
extern kineticArtLevel Level71;
#define PREV_LEVEL &Level69
#define NEXT_LEVEL &Level71


static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	createPlayer();
	emitterNew(-1, 2, (BITMAP *)data[rc_p_mid_r].dat, Player, underspace);
	emitterNew(-1, 3, (BITMAP *)data[rc_p_big_y].dat, Player, underspace);
	emitterNew(-1, 1, (BITMAP *)data[rc_p_big_r].dat, Bite, underspace);

	createCommonHandlers();

{  /* Total bodies: 95, total joints: 95 */
	int health = 2;
	cpBody *body0 = staticBody;
	cpBody *body96 = createPolyUniWrapper(181, 96, 1.0, inf, cpv(20.039264, 24.336306), cpv(-1.344596, -9.371497), cpvzero, -2.179960, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body97 = createPolyUniWrapper(181, 97, 1.0, inf, cpv(44.245493, 60.685085), cpv(-10.805156, -0.425805), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body98 = createPolyUniWrapper(181, 98, 1.0, inf, cpv(74.162007, 93.371393), cpv(-9.169249, -8.306907), cpvzero, -2.514284, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body99 = createPolyUniWrapper(181, 99, 1.0, inf, cpv(112.216006, 122.312181), cpv(-2.970575, -7.901354), cpvzero, -2.574863, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body100 = createPolyUniWrapper(181, 100, 1.0, inf, cpv(150.379826, 141.050402), cpv(-4.055090, -13.890504), cpvzero, -2.994514, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body101 = createPolyUniWrapper(181, 101, 1.0, inf, cpv(195.048247, 146.580162), cpv(-11.430091, -0.994784), cpvzero, 3.063322, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body102 = createPolyUniWrapper(181, 102, 1.0, inf, cpv(241.356791, 143.832818), cpv(-9.730377, -13.419613), cpvzero, 2.961739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body103 = createPolyUniWrapper(181, 103, 1.0, inf, cpv(284.485472, 139.853667), cpv(-11.818338, -11.931108), cpvzero, 2.868584, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body104 = createPolyUniWrapper(181, 104, 1.0, inf, cpv(377.891086, 122.783727), cpv(1.076278, -16.193214), cpvzero, 2.664247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body105 = createPolyUniWrapper(181, 105, 1.0, inf, cpv(422.329336, 108.060824), cpv(-15.298246, -2.211260), cpvzero, 2.642246, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body106 = createPolyUniWrapper(181, 106, 1.0, inf, cpv(466.956124, 92.872600), cpv(9.501145, -18.449209), cpvzero, 2.752276, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body107 = createPolyUniWrapper(181, 107, 1.0, inf, cpv(515.172587, 79.124935), cpv(-13.667249, -5.284841), cpvzero, 2.819842, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body108 = createPolyUniWrapper(181, 108, 1.0, inf, cpv(563.828203, 70.261761), cpv(-7.171992, -10.953983), cpvzero, 3.009041, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body109 = createPolyUniWrapper(181, 109, 1.0, inf, cpv(653.162197, 76.397579), cpv(-14.378286, 0.704262), cpvzero, -2.961739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body110 = createPolyUniWrapper(181, 110, 1.0, inf, cpv(692.183647, 94.364970), cpv(-9.514980, -7.998884), cpvzero, -2.788602, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body111 = createPolyUniWrapper(181, 111, 1.0, inf, cpv(714.736347, 126.327779), cpv(2.724215, -8.522425), cpvzero, -2.397837, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body112 = createPolyUniWrapper(181, 112, 1.0, inf, cpv(728.473980, 202.078912), cpv(-15.447019, -0.544612), cpvzero, -1.789465, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body113 = createPolyUniWrapper(181, 113, 1.0, inf, cpv(726.262575, 246.643264), cpv(1.231649, -10.614720), cpvzero, -1.629552, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body114 = createPolyUniWrapper(181, 114, 1.0, inf, cpv(694.731550, 328.046456), cpv(-15.901980, 3.242775), cpvzero, -1.174355, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body115 = createPolyUniWrapper(181, 115, 1.0, inf, cpv(667.926774, 367.352485), cpv(5.235250, -14.484538), cpvzero, -0.869942, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body116 = createPolyUniWrapper(181, 116, 1.0, inf, cpv(584.488827, 385.161988), cpv(-13.811779, -3.499306), cpvzero, -0.041643, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body117 = createPolyUniWrapper(181, 117, 1.0, inf, cpv(541.735658, 378.470746), cpv(3.468722, -12.328431), cpvzero, 0.083141, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body118 = createPolyUniWrapper(181, 118, 1.0, inf, cpv(501.347367, 356.133141), cpv(-24.171328, -2.210200), cpvzero, 0.348771, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body119 = createPolyUniWrapper(181, 119, 1.0, inf, cpv(468.696106, 326.863701), cpv(8.086905, -16.102034), cpvzero, 0.847817, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body120 = createPolyUniWrapper(181, 120, 1.0, inf, cpv(455.507655, 285.768079), cpv(-5.560144, -8.549712), cpvzero, 1.249046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body121 = createPolyUniWrapper(181, 121, 1.0, inf, cpv(482.209568, 200.821982), cpv(-9.230725, -2.552738), cpvzero, 2.205823, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body122 = createPolyUniWrapper(181, 122, 1.0, inf, cpv(516.321810, 177.331003), cpv(-13.623652, 5.454930), cpvzero, 2.687291, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body123 = createPolyUniWrapper(181, 123, 1.0, inf, cpv(556.757240, 169.559105), cpv(-7.039900, -8.515072), cpvzero, 3.106519, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body124 = createPolyUniWrapper(181, 124, 1.0, inf, cpv(597.595723, 181.548381), cpv(-9.828314, -5.430859), cpvzero, -2.677945, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body125 = createPolyUniWrapper(181, 125, 1.0, inf, cpv(613.690230, 214.236131), cpv(-5.528313, -12.100152), cpvzero, -1.873681, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body126 = createPolyUniWrapper(181, 126, 1.0, inf, cpv(577.649536, 272.725183), cpv(-17.239170, -7.560645), cpvzero, -0.410127, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body127 = createPolyUniWrapper(181, 127, 1.0, inf, cpv(608.952115, 252.256917), cpv(-18.547964, 4.458480), cpvzero, -1.339706, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body128 = createPolyUniWrapper(181, 128, 1.0, inf, cpv(609.973294, 69.923535), cpv(3.762459, -13.332587), cpvzero, 3.087591, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body129 = createPolyUniWrapper(181, 129, 1.0, inf, cpv(728.128055, 163.646235), cpv(2.907811, -2.721095), cpvzero, -2.076087, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body130 = createPolyUniWrapper(181, 130, 1.0, inf, cpv(716.876791, 290.026668), cpv(-8.662094, 0.566703), cpvzero, -1.388628, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body131 = createPolyUniWrapper(181, 131, 1.0, inf, cpv(623.248612, 379.156341), cpv(-12.525561, -25.773539), cpvzero, -0.352990, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body132 = createPolyUniWrapper(181, 132, 1.0, inf, cpv(460.223761, 238.235100), cpv(5.731061, -13.596679), cpvzero, 1.810028, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body133 = createPolyUniWrapper(181, 133, 1.0, inf, cpv(333.009430, 133.821232), cpv(-17.322008, -3.151974), cpvzero, 2.846152, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body134 = createPolyUniWrapper(181, 134, 1.0, inf, cpv(228.537521, 163.457897), cpv(-21.232025, 11.642525), cpvzero, -2.860360, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body135 = createPolyUniWrapper(181, 135, 1.0, inf, cpv(262.796124, 169.435720), cpv(-6.203002, -7.105897), cpvzero, -2.772259, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body136 = createPolyUniWrapper(181, 136, 1.0, inf, cpv(297.129357, 180.156641), cpv(3.876899, -15.165741), cpvzero, -2.512796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body137 = createPolyUniWrapper(181, 137, 1.0, inf, cpv(331.658735, 195.919488), cpv(-16.812654, 4.364737), cpvzero, -2.396173, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body138 = createPolyUniWrapper(181, 138, 1.0, inf, cpv(359.981499, 222.262579), cpv(-9.268227, -9.310636), cpvzero, -1.994991, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body139 = createPolyUniWrapper(181, 139, 1.0, inf, cpv(373.152080, 256.874514), cpv(-3.382448, -15.134068), cpvzero, -1.614247, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body140 = createPolyUniWrapper(181, 140, 1.0, inf, cpv(375.149130, 297.708873), cpv(-9.033750, -5.555558), cpvzero, -1.089909, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body141 = createPolyUniWrapper(181, 141, 1.0, inf, cpv(354.205981, 324.273420), cpv(-12.546737, -13.693378), cpvzero, -0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body142 = createPolyUniWrapper(181, 142, 1.0, inf, cpv(313.567630, 329.148626), cpv(0.955669, -9.040875), cpvzero, 0.127510, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body143 = createPolyUniWrapper(181, 143, 1.0, inf, cpv(284.202003, 313.708226), cpv(-8.041191, -7.248242), cpvzero, 1.138389, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body144 = createPolyUniWrapper(181, 144, 1.0, inf, cpv(281.666550, 279.770002), cpv(1.905992, -15.820537), cpvzero, 2.019520, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body145 = createPolyUniWrapper(181, 145, 1.0, inf, cpv(334.762691, 248.026074), cpv(-27.681984, -23.167577), cpvzero, -2.566520, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body146 = createPolyUniWrapper(181, 146, 1.0, inf, cpv(296.424503, 247.380908), cpv(-0.913287, -4.139346), cpvzero, 2.690931, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body147 = createPolyUniWrapper(182, 147, 1.0, inf, cpv(543.790697, 51.234438), cpv(-6.565366, -2.734766), cpvzero, 2.295046, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body148 = createPolyUniWrapper(182, 148, 1.0, inf, cpv(596.108143, 92.509621), cpv(-5.866442, -10.053660), cpvzero, -2.214297, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body149 = createPolyUniWrapper(182, 149, 1.0, inf, cpv(651.405486, 51.630981), cpv(0.026798, -9.636078), cpvzero, 2.761086, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body150 = createPolyUniWrapper(182, 150, 1.0, inf, cpv(669.828000, 106.329334), cpv(5.840731, -16.248797), cpvzero, -1.661456, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body151 = createPolyUniWrapper(182, 151, 1.0, inf, cpv(743.098086, 116.103519), cpv(-46.056709, 14.522626), cpvzero, -2.961739, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body152 = createPolyUniWrapper(182, 152, 1.0, inf, cpv(705.571314, 153.264730), cpv(-21.066045, -8.567880), cpvzero, -1.216091, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body153 = createPolyUniWrapper(182, 153, 1.0, inf, cpv(751.331773, 199.073445), cpv(-15.151296, -2.366737), cpvzero, -2.231839, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body154 = createPolyUniWrapper(182, 154, 1.0, inf, cpv(705.217150, 233.115387), cpv(-5.617920, -5.892660), cpvzero, -0.837981, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body155 = createPolyUniWrapper(182, 155, 1.0, inf, cpv(735.592926, 286.208495), cpv(-4.442908, -12.787866), cpvzero, -1.815775, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body156 = createPolyUniWrapper(182, 156, 1.0, inf, cpv(682.016012, 312.052759), cpv(-13.785948, -6.502724), cpvzero, -0.682317, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body157 = createPolyUniWrapper(182, 157, 1.0, inf, cpv(686.780850, 370.079708), cpv(-28.112419, -4.992336), cpvzero, -1.653938, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body158 = createPolyUniWrapper(182, 158, 1.0, inf, cpv(628.624556, 357.805020), cpv(-15.268228, -9.205432), cpvzero, 0.231091, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body159 = createPolyUniWrapper(182, 159, 1.0, inf, cpv(604.557721, 406.524976), cpv(0.705718, 0.313283), cpvzero, -0.868539, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body160 = createPolyUniWrapper(182, 160, 1.0, inf, cpv(565.774271, 360.158150), cpv(-7.671784, -7.690673), cpvzero, 1.130954, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body161 = createPolyUniWrapper(182, 161, 1.0, inf, cpv(501.848437, 383.539051), cpv(-11.264748, -2.568479), cpvzero, -0.404892, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body162 = createPolyUniWrapper(182, 162, 1.0, inf, cpv(494.262244, 319.091303), cpv(-6.170471, -5.261007), cpvzero, 1.570796, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body163 = createPolyUniWrapper(185, 163, 1.0, inf, cpv(57.575852, 39.119250), cpv(-7.137321, -3.017827), cpvzero, -3.036716, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body164 = createPolyUniWrapper(185, 164, 1.0, inf, cpv(48.807353, 97.024952), cpv(-12.274622, -9.120001), cpvzero, -1.536327, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body165 = createPolyUniWrapper(185, 165, 1.0, inf, cpv(117.966943, 101.009058), cpv(-5.532311, -6.856897), cpvzero, 3.141593, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body166 = createPolyUniWrapper(185, 166, 1.0, inf, cpv(132.322036, 158.262850), cpv(5.463563, -18.040551), cpvzero, -2.020556, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body167 = createPolyUniWrapper(185, 167, 1.0, inf, cpv(189.943538, 121.186278), cpv(-14.827881, 3.583622), cpvzero, 2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body168 = createPolyUniWrapper(185, 168, 1.0, inf, cpv(253.501502, 187.420744), cpv(16.410491, 1.322597), cpvzero, -1.963136, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body169 = createPolyUniWrapper(185, 169, 1.0, inf, cpv(272.540584, 116.410353), cpv(-3.598350, -6.567141), cpvzero, 2.140110, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body170 = createPolyUniWrapper(185, 170, 1.0, inf, cpv(305.888868, 297.266491), cpv(-7.954657, -10.363904), cpvzero, 2.013171, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body171 = createPolyUniWrapper(185, 171, 1.0, inf, cpv(319.271105, 157.639845), cpv(-5.350602, -9.581765), cpvzero, -2.270689, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body172 = createPolyUniWrapper(185, 172, 1.0, inf, cpv(273.926608, 240.551333), cpv(-6.394760, -15.735906), cpvzero, 1.668050, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body173 = createPolyUniWrapper(185, 173, 1.0, inf, cpv(326.566061, 350.759616), cpv(-6.237701, -7.944803), cpvzero, -0.772741, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body174 = createPolyUniWrapper(185, 174, 1.0, inf, cpv(253.653827, 296.337179), cpv(-0.882283, 4.141209), cpvzero, 0.488334, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body175 = createPolyUniWrapper(183, 175, 1.0, inf, cpv(513.181136, 103.372293), cpv(-13.443278, 3.372796), cpvzero, -2.712815, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body176 = createPolyUniWrapper(183, 176, 1.0, inf, cpv(444.925375, 71.835630), cpv(9.851663, -18.459213), cpvzero, 1.946067, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body177 = createPolyUniWrapper(183, 177, 1.0, inf, cpv(418.843814, 137.465972), cpv(-3.035743, -12.018819), cpvzero, -2.562518, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body178 = createPolyUniWrapper(183, 178, 1.0, inf, cpv(362.609931, 101.075181), cpv(-15.653803, 1.270667), cpvzero, 1.989021, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body179 = createPolyUniWrapper(183, 179, 1.0, inf, cpv(361.993316, 191.260800), cpv(-9.450494, -9.158420), cpvzero, 3.034857, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body180 = createPolyUniWrapper(183, 180, 1.0, inf, cpv(400.073754, 286.236522), cpv(-7.128172, -0.673161), cpvzero, -2.356194, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body181 = createPolyUniWrapper(183, 181, 1.0, inf, cpv(390.848724, 234.680298), cpv(-18.693192, -3.393426), cpvzero, -2.886410, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body182 = createPolyUniWrapper(183, 182, 1.0, inf, cpv(376.568036, 332.945260), cpv(-10.696543, -11.574941), cpvzero, -1.656302, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body183 = createPolyUniWrapper(185, 183, 1.0, inf, cpv(271.152017, 340.089032), cpv(1.886278, -15.095090), cpvzero, -0.141897, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body184 = createPolyUniWrapper(186, 184, 1.0, inf, cpv(482.244584, 252.696640), cpv(-10.687148, -0.590087), cpvzero, 2.421039, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body185 = createPolyUniWrapper(186, 185, 1.0, inf, cpv(592.291059, 242.663038), cpv(-5.972460, -0.563881), cpvzero, -0.748378, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body186 = createPolyUniWrapper(186, 186, 1.0, inf, cpv(515.622805, 199.519810), cpv(-10.423486, -4.795763), cpvzero, -3.096169, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body187 = createPolyUniWrapper(186, 187, 1.0, inf, cpv(573.678770, 192.666480), cpv(-20.059434, 0.242523), cpvzero, -1.647568, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body188 = createPolyUniWrapper(186, 188, 1.0, inf, cpv(541.824280, 149.193113), cpv(-1.667593, -9.653830), cpvzero, 2.317752, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body189 = createPolyUniWrapper(17, 189, 1.0, inf, cpv(347.405191, 279.948351), cpv(-8.459401, -2.359040), cpvzero, -3.128260, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpBody *body190 = createPolyUniWrapper(16, 190, 1.0, inf, cpv(538.641883, 264.540206), cpv(2.060979, -17.263664), cpvzero, -0.943488, 0.0, 0.0, 0.9, 0.5, OBJECT_CT, OBJECT_LAYER, health);
	cpSpaceAddConstraint(space, cpDampedSpringNew(body96, body0, cpvzero, cpv(25.0, 15.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body97, body0, cpvzero, cpv(49.0, 52.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body98, body0, cpvzero, cpv(80.0, 85.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body99, body0, cpvzero, cpv(117.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body100, body0, cpvzero, cpv(157.0, 133.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body101, body0, cpvzero, cpv(200.0, 138.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body102, body0, cpvzero, cpv(248.0, 136.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body103, body0, cpvzero, cpv(291.0, 132.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body104, body0, cpvzero, cpv(385.0, 115.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body105, body0, cpvzero, cpv(428.0, 100.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body106, body0, cpvzero, cpv(475.0, 86.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body107, body0, cpvzero, cpv(521.0, 71.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body108, body0, cpvzero, cpv(570.0, 62.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body109, body0, cpvzero, cpv(659.0, 68.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body110, body0, cpvzero, cpv(698.0, 86.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body111, body0, cpvzero, cpv(720.0, 117.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body112, body0, cpvzero, cpv(734.0, 194.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body113, body0, cpvzero, cpv(731.0, 237.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body114, body0, cpvzero, cpv(700.0, 320.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body115, body0, cpvzero, cpv(670.0, 357.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body116, body0, cpvzero, cpv(591.0, 377.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body117, body0, cpvzero, cpv(547.0, 369.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body118, body0, cpvzero, cpv(508.0, 349.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body119, body0, cpvzero, cpv(476.0, 319.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body120, body0, cpvzero, cpv(461.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body121, body0, cpvzero, cpv(487.0, 192.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body122, body0, cpvzero, cpv(521.0, 169.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body123, body0, cpvzero, cpv(562.0, 161.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body124, body0, cpvzero, cpv(603.0, 173.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body125, body0, cpvzero, cpv(620.0, 206.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body126, body0, cpvzero, cpv(584.0, 265.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body127, body0, cpvzero, cpv(614.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body128, body0, cpvzero, cpv(616.0, 61.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body129, body0, cpvzero, cpv(732.0, 154.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body130, body0, cpvzero, cpv(721.0, 281.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body131, body0, cpvzero, cpv(632.0, 373.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body132, body0, cpvzero, cpv(466.0, 229.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body133, body0, cpvzero, cpv(339.0, 126.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body134, body0, cpvzero, cpv(230.0, 154.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body135, body0, cpvzero, cpv(268.0, 161.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body136, body0, cpvzero, cpv(304.0, 172.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body137, body0, cpvzero, cpv(337.0, 188.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body138, body0, cpvzero, cpv(366.0, 214.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body139, body0, cpvzero, cpv(380.0, 249.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body140, body0, cpvzero, cpv(379.0, 288.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body141, body0, cpvzero, cpv(359.0, 315.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body142, body0, cpvzero, cpv(319.0, 321.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body143, body0, cpvzero, cpv(290.0, 305.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body144, body0, cpvzero, cpv(285.0, 270.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body145, body0, cpvzero, cpv(339.0, 238.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body146, body0, cpvzero, cpv(304.0, 240.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body147, body0, cpvzero, cpv(548.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body148, body0, cpvzero, cpv(602.0, 84.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body149, body0, cpvzero, cpv(656.0, 42.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body150, body0, cpvzero, cpv(676.0, 98.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body151, body0, cpvzero, cpv(741.0, 105.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body152, body0, cpvzero, cpv(711.0, 145.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body153, body0, cpvzero, cpv(757.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body154, body0, cpvzero, cpv(710.0, 224.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body155, body0, cpvzero, cpv(742.0, 278.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body156, body0, cpvzero, cpv(688.0, 304.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body157, body0, cpvzero, cpv(693.0, 362.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body158, body0, cpvzero, cpv(635.0, 350.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body159, body0, cpvzero, cpv(605.0, 397.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body160, body0, cpvzero, cpv(571.0, 352.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body161, body0, cpvzero, cpv(507.0, 375.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body162, body0, cpvzero, cpv(499.0, 310.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body163, body0, cpvzero, cpv(62.0, 30.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body164, body0, cpvzero, cpv(55.0, 89.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body165, body0, cpvzero, cpv(123.0, 92.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body166, body0, cpvzero, cpv(140.0, 151.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body167, body0, cpvzero, cpv(195.0, 113.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body168, body0, cpvzero, cpv(253.0, 177.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body169, body0, cpvzero, cpv(277.0, 107.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body170, body0, cpvzero, cpv(312.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body171, body0, cpvzero, cpv(325.0, 149.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body172, body0, cpvzero, cpv(281.0, 233.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body173, body0, cpvzero, cpv(332.0, 342.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body174, body0, cpvzero, cpv(261.0, 289.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body175, body0, cpvzero, cpv(518.0, 95.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body176, body0, cpvzero, cpv(453.0, 65.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body177, body0, cpvzero, cpv(425.0, 129.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body178, body0, cpvzero, cpv(368.0, 93.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body179, body0, cpvzero, cpv(368.0, 183.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body180, body0, cpvzero, cpv(404.0, 277.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body181, body0, cpvzero, cpv(397.0, 227.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body182, body0, cpvzero, cpv(383.0, 325.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body183, body0, cpvzero, cpv(278.0, 332.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body184, body0, cpvzero, cpv(487.0, 244.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body185, body0, cpvzero, cpv(597.0, 234.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body186, body0, cpvzero, cpv(521.0, 191.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body187, body0, cpvzero, cpv(580.0, 185.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body188, body0, cpvzero, cpv(547.0, 140.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body189, body0, cpvzero, cpv(352.0, 271.0), 10.0, 300.0, 1.0));
	cpSpaceAddConstraint(space, cpDampedSpringNew(body190, body0, cpvzero, cpv(546.0, 257.0), 10.0, 300.0, 1.0));
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
	BGBLIT(rc_bg18)
}


const kineticArtLevel Level70 = {
	70,
	"Level 70",
	"Music/game.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

