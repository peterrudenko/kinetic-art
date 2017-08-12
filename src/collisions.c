
#include "main.h"


// --------------------------- //
// Generic collision callbacks //
// --------------------------- //

void createCommonHandlers(void)
{
	/* player hits the wall */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, WALL_CT, ccPlayerWall, NULL, NULL, NULL, NULL);
	/* player hits the bite */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, PLAYER_BITE_CT, ccPlayerWall, NULL, NULL, NULL, NULL);
	/* player hits the floor - gameover */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, FLOOR_CT, ccPlayerFloor, NULL, NULL, NULL, NULL);
	/* object smashed the wall */
	/*cpSpaceAddCollisionHandler(space, OBJECT_CT, WALL_CT, ccObjectWall, NULL, NULL, NULL, NULL);*/
	/* object smashed the floor */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, FLOOR_CT, ccObjectFloor, NULL, NULL, NULL, NULL);
	/* object smashed the bite - score++ */
	cpSpaceAddCollisionHandler(space, OBJECT_CT, PLAYER_BITE_CT, ccBonusBite, NULL, NULL, NULL, NULL);
	/* destroyed by player */
	cpSpaceAddCollisionHandler(space, PLAYER_BALL_CT, OBJECT_CT, ccPlayerObject, NULL, NULL, NULL, NULL);
	/* rocket hit */
	cpSpaceAddCollisionHandler(space, ROCKET_CT, OBJECT_CT, ccRocketAnything, NULL, NULL, NULL, NULL);
	cpSpaceAddCollisionHandler(space, ROCKET_CT, WALL_CT, ccRocketAnything, NULL, NULL, NULL, NULL);
	cpSpaceAddCollisionHandler(space, ROCKET_CT, FLOOR_CT, ccRocketAnything, NULL, NULL, NULL, NULL);
	/* handle bonusez */
	cpSpaceAddCollisionHandler(space, BONUS_CT, PLAYER_BITE_CT, ccBonusBite, NULL, NULL, NULL, NULL);
	cpSpaceAddCollisionHandler(space, BONUS_CT, FLOOR_CT, ccObjectFloor, NULL, NULL, NULL, NULL);
}

void removeCommonHandlers(void)
{
	/* player hits the wall */
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, WALL_CT);
	/* player hits the bite */
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, PLAYER_BITE_CT);
	/* player hits the floor - gameover */
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, FLOOR_CT);
	/* object smashed the wall */
	/*cpSpaceRemoveCollisionHandler(space, OBJECT_CT, WALL_CT);*/
	/* object smashed the floor */
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, FLOOR_CT);
	/* object smashed the bite - score++ */
	cpSpaceRemoveCollisionHandler(space, OBJECT_CT, PLAYER_BITE_CT);
	/* destroyed by player */
	cpSpaceRemoveCollisionHandler(space, PLAYER_BALL_CT, OBJECT_CT);
	/* rocket hit */
	cpSpaceRemoveCollisionHandler(space, ROCKET_CT, OBJECT_CT);
	cpSpaceRemoveCollisionHandler(space, ROCKET_CT, WALL_CT);
	cpSpaceRemoveCollisionHandler(space, ROCKET_CT, FLOOR_CT);
	/* handle bonusez */
	cpSpaceRemoveCollisionHandler(space, BONUS_CT, PLAYER_BITE_CT);
	cpSpaceRemoveCollisionHandler(space, BONUS_CT, FLOOR_CT);
}


// ----------------- //
// Rocket collisions //
// ----------------- //

int ccRocketAnything(cpArbiter *arb, cpSpace *s, void *unused)
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b); /* a is the rocket */

	/* R.I.P. nasty bug. (there was a crash here - called when rocket is already destroyed) */
	if (Rocket) {
		a->body->v = cpvadd(cpvmult(a->body->v, 0.5f), cpvmult(b->body->v, 0.5f));

		particleBurst(underspace, (BITMAP *)data[rc_p_mid_y].dat, 0.5f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.2f), cpvzero, 700, 30, 150, 50, 100);
		particleBurst(underspace, (BITMAP *)data[rc_p_sml_r].dat, 0.5f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.2f), cpvzero, 300, 50, 150, 50, 80);
		particleBurst(underspace, (BITMAP *)data[rc_p_big_y].dat, 0.5f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.2f), cpvzero, 500, 70, 150, 50, 60);
		play_sample((SAMPLE *)data[rc_rocket].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);

		for (int i=0, count = space->bodies->num; i<count; i++) {
			cpBody *cb = ((cpBody *)space->bodies->arr[i]);
			if ((cpBody *)cb) {
				if (cb!=Bite && cb!=Player && cb!=mouseBody && cb!=staticBody && cb!=Rocket) {
					if (cpvdist(cpBodyGetPos(cb), cpBodyGetPos(Rocket)) < 70.0f) {
						particleBurst(underspace, (BITMAP *)data[rc_p_std_y].dat, 0.5f, cb->p, cpvmult(cb->v, 0.3f), cpvzero, 300, 20, 100, 50, 20);
						cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemoveSmash, (cpShape *)cb->shape, NULL);
						settings.score += 2;
					}
				}
			}
		}

		if (rocketJoint) {
			cpSpaceRemoveConstraint(space, rocketJoint);
			cpConstraintFree(rocketJoint);
			rocketJoint = NULL;
		}

		/*SHOCKWAVE2*/
		cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, a, NULL);
		Rocket = NULL;
	}

	return 0;
}


// ------------------ //
// Objects collisions //
// ------------------ //

int ccObjectWall(cpArbiter *arb, cpSpace *space, void *unused) /* for menu */
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b); /* a is the object */

	if (a->body->health < 2) {
		a->body->v = cpvadd(cpvmult(a->body->v, 0.2f), cpvmult(b->body->v, 0.5f));

		particleBurst(underspace, (BITMAP *)data[rc_p_sml_y].dat, 1.0f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.4f), cpvzero, 100, 50, 90, 30, 20);
		play_sample((SAMPLE *)data[rc_glass_1+rand()%5].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);

		cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, a, NULL);
	}

	return 0;
}

int ccObjectFloor(cpArbiter *arb, cpSpace *space, void *unused) /* disappear */
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b); /* a is the obj */
	int last_obj = (Rocket) ? 5 : 4;

	a->body->v = cpvmult(a->body->v, 0.2f);

	particleBurst(underspace, (BITMAP *)data[rc_p_sml_y].dat, 1.0f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.4f), cpvzero, 100, 50, 90, 30, 20);

	if (space->bodies->num == last_obj) { /* last obj on the scene */
		play_sample((SAMPLE *)data[rc_seaside].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
		SHOCKWAVE
		/* destroy rocket */
		if (rocketJoint) {
			cpSpaceRemoveConstraint(space, rocketJoint);
			cpConstraintFree(rocketJoint);
			rocketJoint = NULL;
		}
		if (Rocket) {
			cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, Rocket->shape, NULL);
			Rocket = NULL;
		}
	} else {
		play_sample((SAMPLE *)data[rc_glass_1+rand()%5].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
	}

	cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, a, NULL);
	return 0;
}


// ----------------- //
// Player collisions //
// ----------------- //

int ccPlayerObject(cpArbiter *arb, cpSpace *space, void *unused) /* score++ */
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b);
	int last_obj = (Rocket) ? 5 : 4; /* bodies count. bite, ball, mouseBody, [Rocket] and the last brick */

	/*particleBurst(underspace, (BITMAP *)data[rc_p_sml_y].dat, 1.0f, cpBodyGetPos(b->body), cpvmult(cpvneg(cpBodyGetVel(b->body)), 0.7f), cpvzero, 150, 30, 90, 30, 20);*/
	particleBurst(underspace, (BITMAP *)data[rc_p_sml_y].dat, 1.0f, cpBodyGetPos(b->body), cpvmult(cpBodyGetVel(a->body), 0.05f), cpvzero, 150, 30, 90, 30, 20);

	/* CreateBonus(); */
	if (!gameOver) {
		int q = rand()%137;
		if (q > 10 && q <= 14) {
			cpBody *bonus = createCircle(space, rc_b_ball_spd_up, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 4, (BITMAP *)data[rc_p_sml_r].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 14 && q <= 20) {
			cpBody *bonus = createCircle(space, rc_b_ball_spd_dn, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 4, (BITMAP *)data[rc_p_sml_g].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 20 && q <= 24) {
			cpBody *bonus = createCircle(space, rc_b_bite_spd_up, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 4, (BITMAP *)data[rc_p_sml_r].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 24 && q <= 28) {
			cpBody *bonus = createCircle(space, rc_b_bite_spd_dn, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 4, (BITMAP *)data[rc_p_sml_g].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 30 && q <= 31) {
			cpBody *bonus = createCircle(space, rc_b_rev_con, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 3, (BITMAP *)data[rc_p_sml_r].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 40 && q <= 45) {
			cpBody *bonus = createCircle(space, rc_b_ball_joint, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 3, (BITMAP *)data[rc_p_sml_b].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 50 && q <= 56) {
			cpBody *bonus = createCircle(space, rc_b_rocket, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 2, (BITMAP *)data[rc_p_std_b].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 60 && q <= 61) {
			cpBody *bonus = createCircle(space, rc_b_life, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 2, (BITMAP *)data[rc_p_std_b].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		} else if (q > 70 && q <= 79) {
			cpBody *bonus = createCircle(space, rc_b_money, 0, 9.32f, 0, Player->p, cpvmult(Player->v, 0.3f), cpvzero, 0, (float)(rand()%4+3), 0, 1.0f, 1.0f, BONUS_CT, BONUS_LAYER, 10, 0);
			emitterNew(250, 3, (BITMAP *)data[rc_p_sml_y].dat, bonus, underspace);
			bonus->alpha = FADE_IN;
		}
	}

	if (--b->body->health <= 0) {
		if (space->bodies->num == last_obj) { /* deleting last obj on the scene */
			play_sample((SAMPLE *)data[rc_seaside].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
			SHOCKWAVE
			/* destroy rocket */
			if (rocketJoint) {
				cpSpaceRemoveConstraint(space, rocketJoint);
				cpConstraintFree(rocketJoint);
				rocketJoint = NULL;
			}
			if (Rocket) {
				cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, Rocket->shape, NULL);
				Rocket = NULL;
			}
		} else { /* deleting not last */
			play_sample((SAMPLE *)data[rc_tymp_1+rand()%2].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
		}
		settings.score++;
		b->body->v = cpvadd(cpvmult(b->body->v, 0.2f), cpvmult(a->body->v, 0.5f));
		cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemoveSmash, b, NULL);
	} else { /* just hitting any */
		/*a->body->alpha = 303; [> Hmm <]*/
		b->body->alpha = 383;
		play_sample((SAMPLE *)data[rc_glass_1+rand()%5].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
	}

	return 1;
}

int ccPlayerObject2(cpArbiter *arb, cpSpace *space, void *unused) /* for menu */
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b);

	if (b->body->health < 2) {
		b->body->v = cpvadd(cpvmult(b->body->v, 0.2f), cpvmult(a->body->v, 0.5f));
		play_sample((SAMPLE *)data[rc_tymp_1+rand()%1].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
		particleBurst(underspace, (BITMAP *)data[rc_p_mid_g].dat, 1.0f, cpBodyGetPos(b->body), cpvmult(cpvneg(cpBodyGetVel(b->body)), 0.4f), cpvzero, 100, 50, 90, 30, 20);
		cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemoveSmash, b, NULL);
	} else {
		play_sample((SAMPLE *)data[rc_glass_1+rand()%5].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
		b->body->health--;
		b->body->alpha = 383;
	}

	return 1;
}

int ccPlayerWall(cpArbiter *arb, cpSpace *space, void *unused) /* bounce */
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b); /* a is the player */
	cpVect newv = cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.2f);
	particleBurst(underspace, (BITMAP *)data[rc_p_sml_g].dat, 1.0f, cpBodyGetPos(a->body), newv, cpvzero, 250, 20, 50, 30, 5);
	particleBurst(underspace, (BITMAP *)data[rc_p_big_y].dat, 1.0f, cpBodyGetPos(a->body), newv, cpvzero, 250, 20, 50, 30, 2);
	particleBurst(underspace, (BITMAP *)data[rc_p_mid_r].dat, 1.0f, cpBodyGetPos(a->body), newv, cpvzero, 250, 20, 50, 30, 1);
	play_sample((SAMPLE *)data[rc_wood_10+rand()%3].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 985+rand()%30, 0);
	return 1;
}

int ccPlayerFloor(cpArbiter *arb, cpSpace *space, void *unused)
{
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b);
	a->body->v = cpvmult(a->body->v, 0.2f);
	play_sample((SAMPLE *)data[rc_steel_1].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
	particleBurst(underspace, (BITMAP *)data[rc_p_sml_y].dat, 1.0f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 0.7f), cpvzero, 100, 50, 90, 30, 20);
	cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepPlayerFail, a, NULL);
	return 0;
}


// ---------------- //
// Bonus collisions //
// ---------------- //

int ccBonusBite(cpArbiter *arb, cpSpace *space, void *unused)
{
	cpBody *note = NULL;
	cpShape *a, *b; cpArbiterGetShapes(arb, &a, &b);
	int s = (int)a->body->health;
	int last_obj = (Rocket) ? 5 : 4;
	a->body->v = cpvmult(a->body->v, 0.2f);

	/* CollectBonus(); */
	switch (a->body->bitmap) {
		case rc_b_ball_spd_up:
				settings.score += 3;
				ballSpeed = HIGH_BALL_SPEED;
				effects[BONUS_BALL_SPEED_UP] = 500;
				if (settings.hints[BONUS_BALL_SPEED_UP] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_ball_spd_up, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_BALL_SPEED_UP]++;
				}
			break;
		case rc_b_ball_spd_dn:
				settings.score += 3;
				ballSpeed = LOW_BALL_SPEED;
				effects[BONUS_BALL_SPEED_DOWN] = 1000;
				if (settings.hints[BONUS_BALL_SPEED_DOWN] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_ball_spd_dn, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_BALL_SPEED_DOWN]++;
				}
			break;
		case rc_b_bite_spd_up:
				settings.score += 3;
				biteSpeed = HIGH_BITE_SPEED;
				effects[BONUS_BITE_SPEED_UP] = 1500;
				if (settings.hints[BONUS_BITE_SPEED_UP] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_bite_spd_up, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_BITE_SPEED_UP]++;
				}
			break;
		case rc_b_bite_spd_dn:
				settings.score += 3;
				biteSpeed = LOW_BITE_SPEED;
				effects[BONUS_BITE_SPEED_DOWN] = 500;
				if (settings.hints[BONUS_BITE_SPEED_DOWN] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_bite_spd_dn, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_BITE_SPEED_DOWN]++;
				}
			break;
		case rc_b_rev_con:
				settings.score += 20;
				play_sample((SAMPLE *)data[rc_tr].dat, getRandSndVol(), floor(b->body->p.x/SIZE_X * 254), 990+rand()%20, 0);
				effects[BONUS_BITE_REVERSE_CONTROL] = 300;
				ballSpeed = LOW_BALL_SPEED;
				effects[BONUS_BALL_SPEED_DOWN] = 500;
				if (settings.hints[BONUS_BITE_REVERSE_CONTROL] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_rev_con, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_BITE_REVERSE_CONTROL]++;
				}
			break;
		case rc_b_money:
				settings.score += 10;
				if (settings.hints[BONUS_MONEY] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_money, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_MONEY]++;
				}
			break;
		case rc_b_life:
			if (settings.lives < 7) {
				settings.score += 3;
				settings.lives++;
				if (settings.hints[BONUS_LIFE] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_life, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_LIFE]++;
				}
			}
			break;
		case rc_b_ball_joint:
				if (!ballJoint && Player && Bite) {
					settings.score += 3;
					ballJoint = cpSpaceAddConstraint(space, cpDampedSpringNew(Bite, Player, cpvzero, cpvzero, 150.0f, 0.7f, 0.0f));
					effects[BONUS_BALL_JOINT] = 2000;
					if (settings.hints[BONUS_BALL_JOINT] < HINTS_MAX) {
						note = createBox(overspace, rc_msg_ball_joint, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
						note->alpha = FADE_IN - 1;
						settings.hints[BONUS_BALL_JOINT]++;
					}
				}
			break;
		case rc_b_rocket:
			if (!Rocket) {
				settings.score += 3;
				createRocket();
				last_obj = 5;
				if (settings.hints[BONUS_ROCKET] < HINTS_MAX) {
					note = createBox(overspace, rc_msg_rocket, 0, 0.22f, 999999, cpv(100+(rand()%(SIZE_X-200)), 30+(rand()%50)), cpvzero, cpvzero, 0, 0.0f, 0, 1.0f, 1.0f, OBJECT_CT, OBJECT_LAYER, 1, 0, 0);
					note->alpha = FADE_IN - 1;
					settings.hints[BONUS_ROCKET]++;
				}
			}
			break;
		default:
			settings.score += s*3;
	}


	if (space->bodies->num == last_obj) { /* last obj on the scene - delete rocket */
		SHOCKWAVE2
		if (rocketJoint) {
			cpSpaceRemoveConstraint(space, rocketJoint);
			cpConstraintFree(rocketJoint);
			rocketJoint = NULL;
		}
		if (Rocket) {
			cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemove, Rocket->shape, NULL);
			Rocket = NULL;
		}
	}

	particleBurst(underspace, (BITMAP *)data[rc_p_mid_y].dat, 1.0f, cpBodyGetPos(a->body), cpvmult(cpvneg(cpBodyGetVel(a->body)), 1.5f), cpvzero, 120, 40, 90, 30, 30);
	play_sample((SAMPLE *)data[rc_seaside].dat, getRandSndVol(), floor(a->body->p.x/SIZE_X * 254), 990+rand()%20, 0);

	cpSpaceAddPostStepCallback(space, (cpPostStepFunc)postStepRemoveSmash, a, NULL);
	return 1;
}


