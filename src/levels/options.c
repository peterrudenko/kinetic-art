
#include "../main.h"

extern kineticArtLevel Menu;
int oldmvol = 0;

static inline void sndcheck(int newvol)
{
	if (newvol != settings.sndvol) {
		settings.sndvol = newvol;
		play_sample((SAMPLE *)data[rc_seaside].dat, getSndVol(), 128, 990+rand()%20, 0);
	}
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
	mouseBody->data = (BITMAP *)data[rc_mouse].dat;
	mouseBody->id = 0;

	oldmvol = settings.muzvol;
}

static void destroy(void)
{
	if (oldmvol != settings.muzvol) resetMuzVol();
	freeSpaces();
	SaveSettings();
}

static void update(void)
{
	if (mouse_in_rect(435, 195, rc_btn_muzvol5)) {
		if (mouse_b & 1) {
			if (mouseBody->p.x < 490) settings.muzvol = 1;
				else if (mouseBody->p.x < 507) settings.muzvol = 2;
					else if (mouseBody->p.x < 530) settings.muzvol = 3;
						else if (mouseBody->p.x < 550) settings.muzvol = 4;
							else settings.muzvol = 5;
		}
	}
	if (mouse_in_rect(450, 75, rc_btn_sndvol5)) {
		if (mouse_b & 1) {
			if (mouseBody->p.x < 500) sndcheck(1);
				else if (mouseBody->p.x < 515) sndcheck(2);
					else if (mouseBody->p.x < 533) sndcheck(3);
						else if (mouseBody->p.x < 553) sndcheck(4);
							else sndcheck(5);
		}
	}

	/*if (mouse_in_rect(475, 200, rc_btn_muzvol5)) {
		if (mouse_b & 1) {
			if (mouseBody->p.x < 490) settings.muzvol = 1;
				else if (mouseBody->p.x < 510) settings.muzvol = 2;
					else if (mouseBody->p.x < 530) settings.muzvol = 3;
						else if (mouseBody->p.x < 550) settings.muzvol = 4;
							else settings.muzvol = 5;
		}
	}
	if (mouse_in_rect(460, 75, rc_btn_sndvol5)) {
		if (mouse_b & 1) {
			if (mouseBody->p.x < 478) sndcheck(1);
				else if (mouseBody->p.x < 493) sndcheck(2);
					else if (mouseBody->p.x < 511) sndcheck(3);
						else if (mouseBody->p.x < 531) sndcheck(4);
							else sndcheck(5);
		}
	}*/
}

static void draw(void)
{
	blit((BITMAP *)data[rc_bg_options].dat, buffer, 0, 0, 0, 0, SIZE_X, SIZE_Y);

	/*switch (settings.muzvol) {
	case 1: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol1].dat, 475, 200);
			break;
	case 2: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol2].dat, 475, 200);
			break;
	case 3: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol3].dat, 475, 200);
			break;
	case 4: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol4].dat, 475, 200);
			break;
	case 5: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol5].dat, 475, 200);
			break;
	default:
			goPanic("Bad music volume!");
	}

	switch (settings.sndvol) {
	case 1: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol1].dat, 460, 75);
			break;
	case 2: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol2].dat, 460, 75);
			break;
	case 3: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol3].dat, 460, 75);
			break;
	case 4: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol4].dat, 460, 75);
			break;
	case 5: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol5].dat, 460, 75);
			break;
	default:
			goPanic("Bad sound volume!");
	}*/

	switch (settings.muzvol) {
	case 1: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol1].dat, 435, 195);
			break;
	case 2: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol2].dat, 435, 195);
			break;
	case 3: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol3].dat, 435, 195);
			break;
	case 4: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol4].dat, 435, 195);
			break;
	case 5: draw_sprite(buffer, (BITMAP *)data[rc_btn_muzvol5].dat, 435, 195);
			break;
	default:
			goPanic("Bad music volume!");
	}

	switch (settings.sndvol) {
	case 1: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol1].dat, 450, 75);
			break;
	case 2: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol2].dat, 450, 75);
			break;
	case 3: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol3].dat, 450, 75);
			break;
	case 4: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol4].dat, 450, 75);
			break;
	case 5: draw_sprite(buffer, (BITMAP *)data[rc_btn_sndvol5].dat, 450, 75);
			break;
	default:
			goPanic("Bad sound volume!");
	}

	/*[> Menu <]
	if (!is_windowed_mode()) draw_sprite(buffer, (BITMAP *)data[rc_btn_windowed_r].dat, 270, 295);

	if (mouse_in_rect(330, 475, rc_btn_ok)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_ok].dat, 330, 475);
		if (mouse_b & 1) runLevel(&Menu);
	} else if (mouse_in_rect(275, 295, rc_btn_fullscreen_r)) {
		if (is_windowed_mode()) draw_sprite(buffer, (BITMAP *)data[rc_btn_fullscreen_r].dat, 275, 295);
		if (mouse_b & 1) {
			if (is_windowed_mode()) {
				if (set_gfx_mode(FULLSCREEN, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
				select_pallete((PALETTE *)data[rc_palette].dat);
				set_color_depth(32);
				set_display_switch_mode(SWITCH_BACKAMNESIA);
				set_display_switch_callback(SWITCH_OUT, switch_out_callback);
				settings.fullscreen = 1;
			} else {
				if (set_gfx_mode(WINDOWED, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
				select_pallete((PALETTE *)data[rc_palette].dat);
				set_color_depth(32);
				set_display_switch_mode(SWITCH_BACKGROUND);
				set_display_switch_callback(SWITCH_OUT, switch_out_callback);
				settings.fullscreen = 0;
			}
		}
	}*/

	/* Menu */
	if (!is_windowed_mode()) draw_sprite(buffer, (BITMAP *)data[rc_btn_windowed].dat, 220, 300);

	if (mouse_in_rect(330, 475, rc_btn_ok)) {
		draw_sprite(buffer, (BITMAP *)data[rc_btn_ok].dat, 330, 475);
		if (mouse_b & 1) runLevel(&Menu);
	} else if (mouse_in_rect(220, 300, rc_btn_fullscreen)) {
		if (is_windowed_mode()) draw_sprite(buffer, (BITMAP *)data[rc_btn_fullscreen].dat, 220, 300);
		if (mouse_b & 1) {
			if (is_windowed_mode()) {
				if (set_gfx_mode(FULLSCREEN, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
				select_pallete((PALETTE *)data[rc_palette].dat);
				set_color_depth(32);
				set_display_switch_mode(SWITCH_BACKAMNESIA);
				set_display_switch_callback(SWITCH_OUT, switch_out_callback);
				settings.fullscreen = 1;
			} else {
				if (set_gfx_mode(WINDOWED, SIZE_X, SIZE_Y, 0, 0) < 0) goPanic("Unable to set video mode.\n");
				select_pallete((PALETTE *)data[rc_palette].dat);
				set_color_depth(32);
				set_display_switch_mode(SWITCH_BACKGROUND);
				set_display_switch_callback(SWITCH_OUT, switch_out_callback);
				settings.fullscreen = 0;
			}
		}
	}


}


const kineticArtLevel Options = {
	1002,
	"Options",
	"Music/menu.ogg",
	init,
	update,
	draw,
	noMouse,
	destroy,
};

