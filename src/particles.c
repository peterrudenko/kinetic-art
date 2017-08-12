
#include "main.h"


// ------ //
// Public //
// ------ //

inline void particleBurst(cpSpace *space, BITMAP *bitmap, cpFloat m, cpVect p, cpVect v, cpVect f, int d_f, int d_p, int alpha, int d_alpha, int particlesMax)
{
	for (int i=0, count=particlesMax; i<=count; i++) {
		createParticle(space, bitmap, m, cpvadd(p, cpv(rand()%d_p-d_p/2, rand()%d_p-d_p/2)), v, cpvadd(f, cpv(rand()%d_f-d_f/2, rand()%d_f-d_f/2)), alpha + rand()%d_alpha);
	}
}

inline void emitterNew(int lifetime, int freq, BITMAP *bitmap, cpBody *body, cpSpace *space)
{
	kineticEmitter *emitter;
	if (!(emitter=malloc(sizeof(kineticEmitter)))) {
		goPanic("Memory allocation failure on emitter creation.");
	}
	// the creation ///////////
	emitter->lifetime = lifetime;
	emitter->freq = freq;
	emitter->bitmap = bitmap;
	emitter->body = body;
	emitter->space = space;
	emitter->pos = emitterPosition1;
	///////////////////////////
	/*allegro_message("created");*/
	cpArrayPush(emittArr, emitter);
}

void emittersUpdate(cpArrayIter callback)
{
	for(int i=0, q=emittArr->num; i<q; i++) {
		/*allegro_message("iterating element #%i of %i", i, q);*/
		callback(emittArr->arr[0], NULL);
	}
}


// ------- //
// Private //
// ------- //

void emitterRemove(kineticEmitter *node, void *data)
{
	if (node) {
		cpArrayDeleteObj(emittArr, node);
		free(node);
	} else {
		goPanic("Error removing emitter!");
	}
	return 0;
}

void createParticle(cpSpace *space, BITMAP *bitmap, cpFloat m, cpVect p, cpVect v, cpVect f, int alpha)
{
	cpBody *body = cpSpaceAddBody(space, cpBodyNew(m, cpMomentForCircle(m, 0.0f, 2, cpvzero)));
	body->p = p;
	body->v = v;
	body->f = f;
	body->alpha = 128;

	body->space = space;
	body->bitmap = 0;
	body->data = bitmap;
	body->id = 0; /* all zero-identifnied bodies are shapeless particles */ /* or mouseBody */
}

inline void deleteParticle(cpBody *particle)
{
	if (particle) {
		if (particle->space) {
			cpSpaceRemoveBody(particle->space, particle);
			cpBodyFree(particle);
		} else {
			goPanic("Cannot remove particle (space undefined)");
		}
	} else {
		goPanic("Error removing particle");
	}
}


// --------- //
// Callbacks //
// --------- //

cpVect emitterPosition1(kineticEmitter *e)
{
	return e->body->p;
}

/* guided missle emitter - still doesn't work as expected. =( */
/* and slows the game waaay down =``( */
cpVect emitterPosition2(kineticEmitter *e)
{
	/*e->ps = cpv(cos(e->direction)*e->acceleration, sin(e->direction)*e->acceleration);
	cpFloat currentSpeed = sqrt(cpvdot(e->ps, e->ps));
	if (currentSpeed > e->topSpeed) {
		e->ps = cpvadd(e->ps, cpvmult(e->ps, (1/currentSpeed)*(e->topSpeed-currentSpeed)));
		[>e->ps.x += (e->ps.x/currentSpeed)*(e->topSpeed-currentSpeed);<]
		[>e->ps.y += (e->ps.y/currentSpeed)*(e->topSpeed-currentSpeed);<]
	}
	e->p = cpvadd(e->p, e->ps);
	cpVect tmp = cpvsub(e->p, e->body->p);
	cpFloat distance = sqrt(cpvdot(tmp, tmp));
	cpFloat targetAngle = fmod((atan2(e->p.y - e->body->p.y, e->p.x - e->body->p.x)+180.0f), 360.0f);
	cpFloat diff = abs(targetAngle - e->direction);
	if (targetAngle < e->direction) {
		if (diff > 180.0f) e->turnSpeed += e->turnAcceleration; else e->turnSpeed -= e->turnAcceleration;
	} else if (targetAngle > e->direction) {
		if (diff > 180.0f) e->turnSpeed -= e->turnAcceleration; else e->turnSpeed += e->turnAcceleration;
	}
	if (diff < 1.0f) e->turnSpeed = 0.0f;
	if (e->turnSpeed > e->turnMax) e->turnSpeed = e->turnMax;
	if (e->turnSpeed < -e->turnMax) e->turnSpeed = -e->turnMax;
	e->direction = fmod((e->direction+e->turnSpeed+360.0f), 360.0f);
	return e->p;*/
}

void emitterLife(void *ptr, void *data)
{
	kineticEmitter *emitter = (kineticEmitter *)ptr;
	if (emitter->lifetime > 0) --emitter->lifetime;
	if ((emitter->lifetime == 0) || (emitter->body == NULL)) { /* lifetime is out or body is destroyed */
		emitterRemove(emitter, NULL);
	} else {
		if (!(gameTime%emitter->freq)) {
			createParticle(emitter->space, emitter->bitmap, 1.0f, emitter->body->p, cpvzero, cpv(rand()%200-100, rand()%200-100), (rand()%110+90));
		}
	}
}

