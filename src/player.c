
#include "main.h"

void createPlayer(void)
{
	mouseBody = cpSpaceAddBody(space, cpBodyNew(1.0f, cpMomentForCircle(1.0f, 0.0f, 1.0f, cpvzero)));
	mouseBody->velocity_func = (cpBodyVelocityFunc)mouseBodyVelocity;
	mouseBody->alpha = 255;
	mouseBody->health = 1;
	mouseBody->bitmap = 0;
	mouseBody->data = (BITMAP *)data[rc_nomouse].dat;
	mouseBody->id = 0;

	Bite = createBite(rc_bite, 0, 0.7f, INFINITY, cpv(SIZE_X/2, SIZE_Y-5), cpvzero, cpvzero, 0, 0, 0, 1.0f, 2.0f, PLAYER_BITE_CT, PLAYER_BITE_LAYER, 10);
	Bite->alpha = FADE_IN;
	Bite->velocity_func = (cpBodyVelocityFunc)biteVelocity;

	Player = createCircle(space, rc_ball, 0, 0.35, 0, cpvadd(Bite->p, cpv(0, -30)), cpv(rand()%150+100, rand()%150+100), cpvzero, 0, (float)(rand()%8-4), 0, 1.0f, 1.0f, PLAYER_BALL_CT, PLAYER_BALL_LAYER, 10, 0);
	Player->alpha = FADE_IN;
	Player->velocity_func = (cpBodyVelocityFunc)ballVelocity;
	Player->position_func = (cpBodyPositionFunc)ballPosition;

	ballJoint = NULL;
	Rocket = NULL;
	rocketJoint = NULL;
}

cpBody *createBite(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p,
					cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t,
					cpFloat e, cpFloat u, int ct, int layers, uchar health)
{
	cpVect verts[] = { cpv(21.75, -13.25), cpv(-22.25, -13.25), cpv(-58.75, -5.00), cpv(-62.50, 12.50), cpv(62.25, 12.50), cpv(59.50, -4.75) };
	return createPoly(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, health, verts, sizeof(verts) / sizeof(verts[0]));
}


// --------- //
// Callbacks //
// --------- //

void mouseBodyVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt)
{
	body->v = cpvmult(cpv(mouse_x - body->p.x, mouse_y - body->p.y), 9.7f);
}

void biteVelocityMenu(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt)
{
	body->v = cpvmult(cpv(Player->p.x - body->p.x, 0), 7.7f);
}

void biteVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt)
{
	int target = (effects[BONUS_BITE_REVERSE_CONTROL] > 0) ? SIZE_X - mouse_x : mouse_x;
	body->v = cpvmult(cpv(target - body->p.x, 0), biteSpeed * 1.3f);
	if (body->p.x > 780) body->p.x = 780;
		else if (body->p.x < 20) body->p.x = 20;
}

void ballVelocityMenu(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt) /* keep on movin'!!! */
{
	float vmult = 1.0f;
	/*if (mouse_b & 1) body->v = cpvsub(cpv(mouse_x, mouse_y), body->p); [> follow the cursor <]*/
	if (abs(body->v.x < 100)) body->v.x += (body->v.x < 0) ? -2 : 2 ;
	if (abs(body->v.y < 100)) body->v.y += (body->v.y < 0) ? -2 : 2 ;
	while (cpvlength(body->v) > ballSpeed) body->v = cpvmult(body->v, 0.95f);
	while (cpvlength(body->v) < (ballSpeed - 50)) body->v = cpvmult(body->v, 1.05f);
	cpBodyUpdateVelocity(body, gravity, vmult, dt);
}

void ballVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt) /* keep on movin'!!! */
{
	float vmult = 1.0f;
	int speed = (space->bodies->num != 3) ? ballSpeed : 60;
	if (abs(body->v.y < 150)) body->v.y += (body->v.y < 0) ? -2 : 2 ;
	while (cpvlength(body->v) > speed) body->v = cpvmult(body->v, 0.95f);
	while (cpvlength(body->v) < (speed - 50)) body->v = cpvmult(body->v, 1.05f);
	cpBodyUpdateVelocity(body, gravity, 1.0, dt);
}

void ballPosition(struct cpBody *body, cpFloat dt)
{
	if (levelStarted) cpBodyUpdatePosition(body, dt);
		else body->p = cpvadd(Bite->p, cpv(0, -25));
		/*else body->p.y = Bite->p.y;*/
}

