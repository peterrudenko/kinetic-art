
#include "../main.h"

extern kineticArtLevel Menu;
char q[NAME_LEN] = "Incognito";
int pos = 5;


static void playon(DIALOG *d)
{
	if (stream) logg_update_stream(stream);
}

static void init(void)
{
	makeSpaces();
	staticBodyInit();
	makeWalls();

	mouseBody = cpSpaceAddBody(space, cpBodyNew(1.0f, cpMomentForCircle(1.0f, 0.0f, 1.0f, cpvzero)));
	mouseBody->velocity_func = (cpBodyVelocityFunc)mouseBodyVelocity;
	mouseBody->alpha = 255;
	mouseBody->health = 1;
	mouseBody->bitmap = 0;
	mouseBody->data = (BITMAP *)data[rc_nomouse].dat;
	mouseBody->id = 0;
}

static void destroy(void)
{
	freeSpaces();
}

static void update(void)
{
	/* for debug */
	/*if (key[KEY_F8]) {
		gameOver = true;
		score = 335;
	}*/

	if (gameOver) {

		pos = 5;

		for (int i=4; i>=0; i--) {
			/*allegro_message("%i : %i", i, scores[i]);*/
			if (settings.score > settings.scores[i]) pos = i;
		}

		if (pos < 5) {
			adime_callback = playon;
			adime_button_font = (FONT *)data[rc_font_empty].dat;
			drawing_mode(DRAW_MODE_COPY_PATTERN, (BITMAP *)data[rc_dlg_entername].dat, 242, 221);
			adime_dialogf("", ADIME_ALIGN_CENTRE, ADIME_ALIGN_CENTRE, 300, "%string[30]", &q);
			drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);
			adime_button_font = (FONT *)data[rc_font].dat;

			for(int i=4; i>pos; i--) {
				strcpy(settings.heroes[i], settings.heroes[i-1]);
				settings.scores[i] = settings.scores[i-1];
			}

			if (ustrlen(q) > 15) {
				for (int i=0, count=(ustrlen(q)-15); i<count; i++) uremove(q, -1);
			}

			strcpy(settings.heroes[pos], q);
			settings.scores[pos] = settings.score;
		}

		settings.lives = 5;
		settings.score = 0;
		/*currentLevelIndex = 1;*/
		/*playState = true;*/
		gameOver = false;
	}

	mouseBody->data = (BITMAP *)data[rc_mouse].dat;

	if (mouse_in_rect(330, 490, rc_btn_ok2)) {
		if (mouse_b & 1) runLevel(&Menu);
	}
}

static void draw(void)
{
	blit((BITMAP *)data[rc_bg_scores].dat, buffer, 0, 0, 0, 0, SIZE_X, SIZE_Y);

	if (mouse_in_rect(330, 490, rc_btn_ok2)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_ok2].dat, 330, 490);
	}

	textout_ex (buffer, (FONT *)data[rc_font].dat, settings.heroes[0], 200, 65, -1, -1);
	textout_ex (buffer, (FONT *)data[rc_font].dat, settings.heroes[1], 200, 149, -1, -1);
	textout_ex (buffer, (FONT *)data[rc_font].dat, settings.heroes[2], 200, 223, -1, -1);
	textout_ex (buffer, (FONT *)data[rc_font].dat, settings.heroes[3], 200, 305, -1, -1);
	textout_ex (buffer, (FONT *)data[rc_font].dat, settings.heroes[4], 200, 383, -1, -1);

	textprintf_ex (buffer, (FONT *)data[rc_font].dat, 530, 65, -1, -1, "%d", settings.scores[0]);
	textprintf_ex (buffer, (FONT *)data[rc_font].dat, 530, 149, -1, -1, "%d", settings.scores[1]);
	textprintf_ex (buffer, (FONT *)data[rc_font].dat, 530, 223, -1, -1, "%d", settings.scores[2]);
	textprintf_ex (buffer, (FONT *)data[rc_font].dat, 530, 305, -1, -1, "%d", settings.scores[3]);
	textprintf_ex (buffer, (FONT *)data[rc_font].dat, 530, 383, -1, -1, "%d", settings.scores[4]);

}


const kineticArtLevel Scores = {
	1003,
	"High Scores",
	"Music/menu.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

