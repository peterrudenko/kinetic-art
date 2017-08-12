
#include "main.h"

int shock = 0; /* shock flash */
cpFloat slowdown = 0.0f; /* bullet-time */
int jcol = 0;
bool playState = false;
bool editorsPause = false;
unsigned int idCounter = 1; /* not 0. zero-id bodies are particles. */ /* for editor */
unsigned int btnDelay[255];
volatile int ticks = 0;
volatile int gameTime = 0;
volatile int fps = 0;
int close_button_pressed = false;
bool levelStarted = false;
bool gameOver = false;
bool inDrawing = false;
int ballSpeed = 500;
cpFloat biteSpeed = 5.0f;
int effects[6] = {0, 0, 0, 0, 0, 0};

LOGG_Stream *stream;
BITMAP *screenshot; /* for fading-in-out */
BITMAP *fadebuffer; /* for fading-in-out && flashing */

DATAFILE *data; /* main datafile */

/* used for rotated objects drawing speed-up */
int r_sizes[] = {4, 8, 23, 38, 51, 58, 79, 100, 140}; /* rotation buffer sizes, */
int rx_sizes[] = {2, 5, 15, 25, 35, 45, 55, 70, 95}; /* target image sizes */
int rd_sizes[] = {1, 1, 4, 7, 8, 9, 12, 15, 22}; /* and offsets */

extern kineticArtLevel Level01;
extern kineticArtLevel Menu;
extern kineticArtLevel Scores;
kineticArtLevel *currentLevel = NULL;

// ---------- //
// Here we go //
// ---------- //

void runLevel(kineticArtLevel *level)
{
	int ticks2 = ticks;
	char *ost1 = (level == NULL) ? "" : level->ost;
	char *ost2 = (currentLevel == NULL) ? "" : currentLevel->ost;
	int dontStopTheMuzeg = strcmp(ost1, ost2); /* don't stop the music? */

	/* fade to white */
	blit(screen, screenshot, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
	while (ticks < 16) {
		ticks2 = ticks;
		blit(screenshot, buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		f_add(fadebuffer, buffer, 0, 0, ticks * 16);

		if (stream) logg_update_stream(stream);
		/*if (dontStopTheMuzeg != 0) set_volume(255 - ticks * 16, -1);*/

		acquire_screen();
		blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		release_screen();
		while (ticks == ticks2) rest (100 / 60);
	}

	if(currentLevel)
		currentLevel->destroyFunc();

	settings.level_start_score = settings.score;
	currentLevel = level;
	ticks = 0;

#ifndef NO_SOUND
	if (dontStopTheMuzeg != 0) { /* start new track? */
		/*allegro_message(currentLevel->ost);*/
		resetMuzVol();
	}
#endif

	levelStarted = false;

	currentLevel->initFunc();

	/* if in level, remember its id */
	/* and change window title */
	char tmp[128] = "";
	if (currentLevel->id < 1000) {
		settings.currentLevelIndex = currentLevel->id;
		sprintf(tmp, "Kinetic Art: level %i", currentLevel->id);
		set_window_title(tmp);
	} else {
		set_window_title("Kinetic Art");
	}

	currentLevel->updateScreenFunc();

	/* fade back from white */
	blit(buffer, screenshot, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
	while (ticks < 36) {
		ticks2 = ticks;
		blit(screenshot, buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		draw_trans3(fadebuffer, buffer, 0, 0, 255 - ticks * 7);

		if (stream) logg_update_stream(stream);
		/*if (dontStopTheMuzeg != 0) set_volume(ticks * 7, -1);*/

		acquire_screen();
		blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		release_screen();
		while (ticks == ticks2) rest (100 / 60);
	}

	ticks = 0;
}

void fadeObject(cpBody *body, void *data)
{
	if ((body->alpha < 255) && (body->alpha > FADE_LOWER_BORDER)) {
		body->alpha--; /* bodies disappear normally, */
		if (body->id != 0 && !gameOver) {
			cpShape *shape = body->shape;
			if (shape->layers == PIECE_LAYER) body->alpha--; /* pieces disappear faster */
		}
	} else if (body->alpha <= FADE_LOWER_BORDER) {
		if (body->id == 0)
			deleteParticle(body);
		else
			bodyFree(body);
	} else if (body->alpha > 255) {
		body->alpha = body->alpha - FADE_IN_SPEED; /* fade in */
	} else if (rand()%700 < 1) {
		body->alpha = 287; /* blink for normal ones */
	}
}

int main(int argc, char *argv[])
{
	int mouse_needs_poll_flag = mouse_needs_poll();
	int keyboard_needs_poll_flag = keyboard_needs_poll();
	double gameStep = 1.0f / 60.0f;
	double gameRest = 100 / 240;

	set_uformat(U_UTF8);
	if (allegro_init() != 0) goPanic("Unable to start Allegro engine.\n");

	set_window_title("Kinetic Art is loading...");

	handleBtnDelay();
	cpInitChipmunk();
	install_keyboard();
	install_timer();
	LOCK_FUNCTION(close_button_handler);
	set_close_button_callback(close_button_handler);

	srand((unsigned)(time(0)));

	/* init the timers */
	LOCK_VARIABLE(ticks);
	LOCK_FUNCTION(ticker);
	install_int_ex(ticker, BPS_TO_TIMER(60));

	if (jpgalleg_init() != 0) goPanic("Error initializing JPGalleg.\n");

	set_color_depth(32);

	packfile_password("tesla"); /* to be called before loading settings and datafile */

	LoadSettings();

	if (!settings.fullscreen) {
		if (set_gfx_mode(WINDOWED, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
		set_display_switch_mode(SWITCH_BACKGROUND);
		set_display_switch_callback(SWITCH_OUT, switch_out_callback);
	} else {
		if (set_gfx_mode(FULLSCREEN, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
		set_color_depth(32);
		set_display_switch_mode(SWITCH_BACKAMNESIA);
		set_display_switch_callback(SWITCH_OUT, switch_out_callback);
	}

	if (install_mouse() < 0) goPanic("No mouse detected.\n");

	data = load_datafile("data.dat");
	if (!data) goPanic("Cannot find data.dat.");

	/* yellow-to-black gradient palette for textout */
	select_pallete((PALETTE *)data[rc_palette].dat);

	/* init Adime */
	if (adime_init() != 0) goPanic("Error initializing Adime.\n");
	adime_font = (FONT *)data[rc_font].dat;
	adime_title_font = (FONT *)data[rc_font].dat;
	adime_button_font = (FONT *)data[rc_font].dat;
	/*adime_button_font = (FONT *)data[rc_font_empty].dat;*/
	RGB rgb_yellow =  {253, 200, 96};
	adime_edit_field_rgb = rgb_yellow;

	/* Create the buffers */
	screenshot = create_bitmap(SCREEN_W, SCREEN_H);
	clear(screenshot);
	buffer = create_bitmap(SCREEN_W, SCREEN_H); /* main one */
	clear(buffer);
	fadebuffer = create_bitmap(SCREEN_W, SCREEN_H); /* fader */
	rectfill(fadebuffer, 0, 0, fadebuffer->w, fadebuffer->h, makeacol32(255, 255, 255, 255));
	for (int i=0; i<9; i++) {
		r_buffer[i] = create_bitmap(r_sizes[i], r_sizes[i]);
		clear(r_buffer[i]);
	}
	rbuffer = create_bitmap(370, 170);

	set_alpha_blender();
	drawing_mode(DRAW_MODE_TRANS, NULL, 0, 0);

	/* Init the audio engine */
	set_volume_per_voice(0);
	if (install_sound(DIGI_AUTODETECT, MIDI_NONE, NULL) < 0) goPanic("Unable to start audio engine.\n");

	/* Init emitters list */
	emittArr = cpArrayNew(0);

	/* Go main menu. */
	runLevel(&Menu);

	jcol = makeacol(255, 205, 235, 140);
	playState = true;

	while (!close_button_pressed && !key[KEY_F1] && !(key[KEY_ALT] && key[KEY_F4])) {

		if (playState) {

#ifndef NO_SOUND
			if (stream) logg_update_stream(stream);
#endif

			while (ticks == 0) rest (gameRest);

			/* DoLogic(); */

			while (ticks > 0) {
				int old_ticks = ticks;

				/* checkMouseInput(); */
				if (mouse_needs_poll_flag) poll_mouse();
				if ((mouse_b & 1) && Rocket && rocketJoint) {
					cpBodyApplyForce(Rocket, cpv(0, -200), cpvzero);
					cpSpaceRemoveConstraint(space, rocketJoint);
					cpConstraintFree(rocketJoint);
					rocketJoint = NULL;
				}

				if ((mouse_b & 1) && !levelStarted) {
					if (Player && !gameOver) {
						levelStarted = true;
						Player->v = cpvmult(cpvadd(Bite->v, cpv(0, -350)), 0.2f);
					}
				}

				/* debug */
				/*if (key[KEY_F8] && !Rocket) createRocket();*/

				/* checkKeyboardInput(); */
				if (keyboard_needs_poll_flag) poll_keyboard();
				clear_keybuf();
				/*handleBtnDelay();*/

				/* level's do_logic */
				currentLevel->updateLogicFunc();

				/* handle effects */
				for (int i=0; i<6; i++) if (effects[i] > -1) effects[i]--;
				if (effects[BONUS_BALL_SPEED_UP] == 0
						|| effects[BONUS_BALL_SPEED_DOWN] == 0) ballSpeed = NORMAL_BALL_SPEED;
				if (effects[BONUS_BITE_SPEED_UP] == 0
						|| effects[BONUS_BITE_SPEED_DOWN] == 0) biteSpeed = NORMAL_BITE_SPEED;
				if (effects[BONUS_BALL_JOINT] == 0 && ballJoint) {
					cpSpaceRemoveConstraint(space, ballJoint);
					cpConstraintFree(ballJoint);
					ballJoint = NULL;
				}

				if (!editorsPause) {
					/* process spaces */
					cpSpaceStep(space, gameStep - slowdown);
					cpSpaceStep(partspace, gameStep - slowdown);
					cpSpaceStep(overspace, gameStep - slowdown);
					cpSpaceStep(underspace, gameStep - slowdown);

					/* fade what's to be faded */
					cpSpaceEachBody(space, &fadeObject, NULL);
					cpSpaceEachBody(partspace, &fadeObject, NULL);
					cpSpaceEachBody(overspace, &fadeObject, NULL);
					cpSpaceEachBody(underspace, &fadeObject, NULL);
					if (slowdown > 0) slowdown -= 0.0001f;
					if (shock > 0) shock -= 2;

					/* handle emitters */
					cpArrayEach(emittArr, &emitterLife, NULL);
				}

				/* done */
				ticks--;
				if (old_ticks <= ticks) break;
			}

			/* DrawEverything(); */

			inDrawing = true; /* set the flag for switch out callback */

			/* Level's routines */
			currentLevel->updateScreenFunc();

			/* Joints */
			if (currentLevel->id != 1000) { /* ugly hack */
				cpArray *constraints = space->constraints;
				for (int i=0, count = constraints->num; i<count; i++)
					drawJoint((cpConstraint *)constraints->arr[i], jcol);
			}

			/* Particles */
			cpSpaceEachBody(underspace, &drawParticle, NULL);

			/* Pieces */
			cpSpaceEachBody(partspace, &drawObj, NULL);

			/* Objects */
			cpSpaceEachBody(space, &drawObj, NULL);

			/* Particles */
			cpSpaceEachBody(overspace, &drawObj, NULL);

			/* Level's mouse, if any */
			currentLevel->drawMouseFunc();

			/* Lives and score info */
			if (currentLevel->id < 1000) {
				draw_trans2((BITMAP *)data[rc_stats].dat, buffer, 300, 0);
				textprintf_right_ex (buffer, (FONT *)data[rc_font].dat, 490, -6, -1, -1, "%d", settings.score);
				for (int i=0; i<settings.lives; i++) {
					draw_trans2((BITMAP *)data[rc_ball_life].dat, buffer, 319+i*14, 9);
				}
			}

			/* Debug info */
			/*if (key[KEY_D]) show_debug(fps);*/

			/* Shockwave */
			if (shock > 0) f_add(fadebuffer, buffer, 0, 0, shock);

			/* Final blit */
			acquire_screen();
			blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
			release_screen();

			inDrawing = false;

			/* Ok */

		} else {

			/* EscapeMenu(); */

			blit(screenshot, buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

			if (key[KEY_ESC] && (btnDelay[KEY_ESC] == 0)) unpause();
			if (btnDelay[KEY_ESC] > 0) btnDelay[KEY_ESC]--;

			if (currentLevel->id < 1000) {
				/* Menu */
				if (mouse_in_rect2(253, 311, rc_btn_p_exit)) {
					draw_sprite(buffer, (BITMAP *)data[rc_btn_p_exit].dat, 253, 311);
					if (mouse_b & 1) {
						ticks = 0;
#ifndef NO_SOUND
						set_volume(255, -1);
#endif
						playState = true;
						settings.score = settings.level_start_score;
						runLevel(&Menu);
					}
				} else if (mouse_in_rect2(252, 261, rc_btn_p_restart)) {
					draw_sprite(buffer, (BITMAP *)data[rc_btn_p_restart].dat, 252, 261);
					if (mouse_b & 1) {
						unpause();
						settings.lives = 5;
						settings.score = 0;
						settings.level_start_score = 0;
						settings.currentLevelIndex = 1;
						runLevel(&Level01);
					}
				} else if (mouse_in_rect2(245, 211, rc_btn_p_continue)) {
					draw_sprite(buffer, (BITMAP *)data[rc_btn_p_continue].dat, 245, 211);
					if (mouse_b & 1) unpause();
				}

				draw_trans2((BITMAP *)data[rc_mouse].dat, buffer, mouse_x - 32, mouse_y - 48);
			} else {
				if (mouse_b & 1) {
					mouseBody->p = cpvzero;
					unpause();
				}
			}

			acquire_screen();
			blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
			release_screen();
			rest(15);
		}

	}

	SaveSettings();
	unload_datafile(data);
	if(currentLevel) currentLevel->destroyFunc();
	cpArrayFree(emittArr); /* release emitters list */

	/* fade screen */
	blit(screen, screenshot, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
	clear_to_color(fadebuffer, makeacol(0, 0, 0, 255));
	while (ticks < 16) {
		blit(screenshot, buffer, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		draw_trans3(fadebuffer, buffer, 0, 0, ticks * 16);
		if (stream) logg_update_stream(stream);
		set_volume(255 - ticks * 16, -1);
		acquire_screen();
		blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
		release_screen();
		rest (100 / 60);
	}

	return 0;
}
END_OF_MAIN()


// ----------------- //
// Misc useful funcs //
// ----------------- //

inline void unpause()
{
	ticks = 0;
#ifndef NO_SOUND
	set_volume(255, -1);
	resetMuzVol();
#endif
	playState = true;
	btnDelay[KEY_ESC] = 25;
}

void switch_out_callback(void)
{
	/* not freezing when in menus */
	if (playState && !(currentLevel->id == 1003 && gameOver)) {
		while(inDrawing) rest (100 / 60); /* wait */
		blit(buffer, screenshot, 0, 0, 0, 0, SCREEN_W, SCREEN_H); /* ...before taking screenshot */
		set_volume(0, -1);
		playState = false;
		btnDelay[KEY_ESC] = 25;
		if (currentLevel->id >= 1000) {
			draw_trans3(fadebuffer, screenshot, 0, 0, 130);
			draw_trans2((BITMAP *)data[rc_pause_menu].dat, screenshot, 230, 180);
		} else {
			draw_trans3(fadebuffer, screenshot, 0, 0, 50);
			draw_trans2((BITMAP *)data[rc_pause].dat, screenshot, 150, 100);
		}
	}
}

void ticker()
{
	ticks++;
}
END_OF_FUNCTION(ticker)

void game_time_ticker()
{
	gameTime = (gameTime + 1) % 32000;
}
END_OF_FUNCTION(game_time_ticker)

void close_button_handler(void)
{
	close_button_pressed = TRUE;
}
END_OF_FUNCTION(close_button_handler)

inline void show_debug(int inf)
{
	textprintf_centre_ex
	(buffer, font, SIZE_X/2, 8, makecol(0, 0, 0), makecol(255, 255, 255),
	 "Bodies: %i, Pieces: %i, Particles: %i, Emitters: %i, Room ID: %i",
	 space->bodies->num,
	 partspace->bodies->num,
	 underspace->bodies->num,
	 emittArr->num,
	 currentLevel->id);
};

inline bool mouse_in_rect(int x1, int y1, int bmp)
{
	return (mouseBody->p.x > x1 && mouseBody->p.y > y1 && mouseBody->p.x < (x1 + bmp_w(bmp)) && mouseBody->p.y < y1 + bmp_h(bmp));
}

inline bool mouse_in_rect2(int x1, int y1, int bmp)
{
	return (mouse_x > x1 && mouse_y > y1 && mouse_x < (x1 + bmp_w(bmp)) && mouse_y < y1 + bmp_h(bmp));
}

inline int bmp_h(int bmp)
{
	return ((BITMAP *)data[bmp].dat)->h;
}

inline int bmp_w(int bmp)
{
	return ((BITMAP *)data[bmp].dat)->w;
}

inline BITMAP *bodyGetBitmap(cpBody *body)
{
	BITMAP *sprite = (body->bitmap != 0) ? (BITMAP *)data[body->bitmap].dat : (BITMAP *)body->data;
	if (sprite) return sprite;
	else return NULL;
}

inline void goPanic(char *message)
{
	allegro_message (message);
	exit(1);
}

inline void noMouse(void)
{
	if (!settings.fullscreen) {
		if (mouse_x > 770) position_mouse(SIZE_X-30, mouse_y);
		else if (mouse_x < 30) position_mouse(30, mouse_y);
		if (mouse_y > 570) position_mouse(mouse_x, SIZE_Y-30);
		else if (mouse_y < 30) position_mouse(mouse_x, 30);
	}
}

inline bool keyPressed(int kCode, bool kState)
{
	if (kState && (btnDelay[kCode]==0)) {
		btnDelay[kCode] = BTN_DELAY_TIME;
		return true;
	} else
		return false;
}

inline void handleBtnDelay()
{
	for (int i = 0 ; i < 255 ; i++) {
		if (btnDelay[i] > 0) btnDelay[i]--;
		else btnDelay[i] = 0;
	}
}

inline int getRandSndVol()
{
	int x = (settings.sndvol-1) * 63;
	if (x != 0) x -= rand()%32;
	return x;
}

inline int getSndVol()
{
	return (settings.sndvol-1) * 63;
}

inline void resetMuzVol()
{
	if (stream) logg_destroy_stream(stream);
	stream = logg_get_stream(currentLevel->ost, (settings.muzvol-1)*63, 128, 1);
}

inline void finishHelper()
{
	if (gameOver) {
		if (partspace->bodies->num == 0) runLevel(&Scores);
	} else {
		if (btnDelay[KEY_ESC] > 0) btnDelay[KEY_ESC]--;
		int last_obj = (Rocket) ? 5 : 4;
		/* level almost finished */
		if (space->bodies->num < 9 && space->bodies->num >= last_obj) {
			if (((rand()%750) < 1) && !Rocket) createRocket();
			if (space->bodies->num < 7 && ((rand()%450) < 1) && !Rocket)
				createRocket();
		}
	}
}

void escPause()
{
	if (btnDelay[KEY_ESC] == 0) {
		switch_out_callback();
	}
}

/*
00C0 - 00FF
0410 - 044F
*/

