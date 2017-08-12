
#ifndef MAIN_HEADER
#define MAIN_HEADER

#define ALLEGRO_NO_MAGIC_MAIN

/*#define NO_SOUND*/
#define RELEASE

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "allegro.h"
#ifdef WIN32
	#define FULLSCREEN GFX_DIRECTX_ACCEL
	#define WINDOWED GFX_DIRECTX_WIN
	#include "winalleg.h"
	#include "allegro\platform\alwin.h"
#else
	#define FULLSCREEN GFX_AUTODETECT_FULLSCREEN
	#define WINDOWED GFX_AUTODETECT_WINDOWED
	#include "linalleg.h"
#endif
#include "adime.h"
#include "logg.h"
#include "fblend.h"
#include "chipmunk.h"
#include "jpgalleg.h"
#include "data.h"
#include "layers.h"

#ifndef WIN32
	#include "../res/icon.c"
#endif

#define SIZE_X 800
#define SIZE_Y 600
#define OFFSET_X 0
#define OFFSET_Y 0

/*#define FADE_IN 507 [> for FADE_IN_SPEED = 4 <]*/
#define FADE_IN 503 /* for FADE_IN_SPEED = 8 */
#define FADE_IN_SPEED 8
#define FADE_LOWER_BORDER 20

#define BTN_DELAY_TIME 12;

#define inf INFINITY
#define PI 3.14159265358979f
#define uint unsigned int
#define uchar unsigned char

/*#define BGBLIT(x) blit((BITMAP *)data[x].dat, buffer, 0, 0, 0, 0, SIZE_X, SIZE_Y);*/
#define BGBLIT(x) draw_sprite(buffer, (BITMAP *)data[x].dat, 0, 0);
#define SHOCKWAVE slowdown = 0.014f; shock = 100.0f;
#define SHOCKWAVE2 shock = 50.0f;


// --------------- //
// Level Interface //
// --------------- //

struct kineticArtLevel;

typedef void (*InitFunc)(void);
typedef void (*UpdateLogicFunc)(void);
typedef void (*UpdateScreenFunc)(void);
typedef void (*DrawMouseFunc)(void);
typedef void (*DestroyFunc)(void);

typedef struct kineticArtLevel {

	int id;
	char *name;
	char *ost; /* path to soundtrack */

	InitFunc initFunc;
	UpdateLogicFunc updateLogicFunc;
	UpdateScreenFunc updateScreenFunc;
	DrawMouseFunc drawMouseFunc;
	DestroyFunc destroyFunc;

} kineticArtLevel;

extern kineticArtLevel *currentLevel;


// -------- //
// Settings //
// -------- //

typedef struct kineticSettings {
	int score;
	int level_start_score;
	int currentLevelIndex;
	int lives;
	int sndvol;
	int muzvol;
	int fullscreen;
	int hints[16];
	/* high scores */
	char heroes[7][NAME_LEN];
	unsigned int scores[7];
} kineticSettings;

kineticSettings settings;


// ------------- //
// Ptcls Emitter //
// ------------- //

struct kineticEmitter;

typedef cpVect (*kineticEmitterPositionFunc)(struct kineticEmitter *e);

typedef struct kineticEmitter {
	int lifetime;
	int freq;
	BITMAP *bitmap;
	cpBody *body;
	cpSpace *space;
	kineticEmitterPositionFunc pos;

} kineticEmitter;

cpArray *emittArr; /* emitter list, the main && the only */


// ------- //
// Globals //
// ------- //

extern DATAFILE *data; /* main datafile */

extern int shock;
extern cpFloat slowdown;
extern volatile int gameTime;
extern bool playState;
extern bool editorsPause; /* is !paused? */
extern unsigned int idCounter; /* important */
extern unsigned int btnDelay[255];
extern int close_button_pressed;
extern int jcol; /* joint color - to be removed */
extern bool levelStarted;
extern bool gameOver;
extern int ballSpeed;
extern cpFloat biteSpeed;
extern int effects[6];

extern LOGG_Stream *stream; /* the main music stream */

cpSpace *space; /* empty spaceees */
cpSpace *overspace, *underspace;
cpSpace *partspace;

cpBody *staticBody; /* walls && floor */

cpBody *Player; /* the Ball */
cpBody *Bite;
cpBody *mouseBody; /* game cursor */
cpConstraint *ballJoint; /* the ball joint */
cpBody *Rocket;
cpConstraint *rocketJoint;

BITMAP *buffer; /* the main buffer */
BITMAP *rbuffer; /* for * that don't fit r_buffer's */
BITMAP *r_buffer[8]; /* a set of rotation buffers of different sizes */

extern int r_sizes[], rx_sizes[], rd_sizes[]; /* see ^ */


// --------- //
// Functions //
// --------- //

/* declared in draw.c */
void drawJoint(cpConstraint *joint, int col);
void drawParticle(cpBody *body, void *unused);
void drawObj(cpBody *body, void *unused);
inline void drawRotate(BITMAP *image, cpFloat x, cpFloat y, cpFloat angle, int alpha);
inline unsigned long blendColors32NoEmms(unsigned long dst, unsigned long src, unsigned long factor);
unsigned long blendColors32(unsigned long dst, unsigned long src, unsigned long factor);
void draw_trans3(BITMAP *src, BITMAP *dst, int dst_x, int dst_y, int globalAlpha);
void draw_trans2(BITMAP *src, BITMAP *dst, int dst_x, int dst_y);
inline void callEmms();
void f_add(BITMAP *src, BITMAP *dst, int x, int y, int fact);

/* declared in creators.c */
extern inline void staticBodyInit(void);
extern inline void staticBodyFree(void);
extern inline void makeWalls(void);
extern cpSpace *spaceInit(int iters, cpVect gravity, cpFloat hashDim, int hashCount);
extern void spaceFree(cpSpace *space);
extern void makeSpaces(void);
extern void makeSpaces2(cpVect gravity);
extern void freeSpaces(void);
extern void demolitionFunctionEx(cpBody *body, int cellSize, cpVect offset, cpFloat force, int nW, int nH, cpFloat mass, cpFloat elast, cpFloat frict);
extern void demolitionFunction(cpBody *body, int cellSize, cpVect offset, cpFloat force, int nW, int nH, cpFloat mass, cpFloat elast, cpFloat frict);
extern cpBody *bodyFree(cpBody *body);
extern void postStepPlayerFail(cpSpace *s, cpShape *shape, void *unused);
extern void postStepRemove(cpSpace *space, cpShape *shape, void *unused);
extern void postStepRemoveSmash(cpSpace *space, cpShape *shape, void *unused);
extern void makePlayer(void);
extern inline void createRocket();
extern cpBody *createBox(cpSpace *space, unsigned int bitmap, unsigned int id, cpFloat m, cpFloat i, cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t, cpFloat e, cpFloat u, int ct, int layers, uchar health, cpFloat width, cpFloat height);
extern cpBody *createCircle(cpSpace *space, unsigned int bitmap, unsigned int id, cpFloat m, cpFloat i, cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t, cpFloat e, cpFloat u, int ct, int layers, uchar health, cpFloat radius);
extern cpBody *createPoly(cpSpace *space, unsigned int bitmap, unsigned int id, cpFloat m, cpFloat i, cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t, cpFloat e, cpFloat u, int ct, int layers, uchar health, cpVect *verts, int numverts);
extern cpBody *createPolyUniWrapper(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t, cpFloat e, cpFloat u, int ct, int layers, uchar health);

/* declared in main.c */
void runLevel(kineticArtLevel *level);
void fadeObject(cpBody *body, void *space);
void ticker();
void game_time_ticker();
void close_button_handler(void);
inline void show_debug(int inf);
inline bool mouse_in_rect(int x1, int y1, int bmp);
inline bool mouse_in_rect2(int x1, int y1, int bmp);
inline int bmp_h(int bmp);
inline int bmp_w(int bmp);
inline void unpause();
void switch_out_callback(void);
inline void goPanic(char *message);
extern inline void noMouse(void);
extern inline BITMAP *bodyGetBitmap(cpBody *body);
extern inline bool keyPressed(int kCode, bool kState);
extern inline void handleBtnDelay();
extern inline int getRandSndVol();
extern inline int getSndVol();
extern inline void resetMuzVol();
extern inline void finishHelper();
extern void escPause();

/* declared in saveload.c */
extern void SaveSettings();
extern void LoadSettings();
extern void SaveAsCode(char *filename);
extern void Save(char *filename);
extern void Load(char *filename, bool unordered);
void saveJointAsCode(cpConstraint *constraint);
void saveJoint(cpConstraint *constraint);
extern cpBody *getBodyById(unsigned int id);
void pack_iputv(cpVect val, PACKFILE *file);
cpVect pack_igetv(PACKFILE *file);
void pack_iputf(double fval, PACKFILE *file);
cpFloat pack_igetf(PACKFILE *file);

/* declared in collisions.c */
void checkRocketCollision(cpBody *body, void *nothing);
extern void createCommonHandlers(void);
extern void removeCommonHandlers(void);
extern int ccRocketAnything(cpArbiter *arb, cpSpace *s, void *unused);
extern int ccObjectWall(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccObjectFloor(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccPlayerObject(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccPlayerObject2(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccPlayerWall(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccPlayerFloor(cpArbiter *arb, cpSpace *space, void *unused);
extern int ccBonusBite(cpArbiter *arb, cpSpace *space, void *unused);

/* declared in particles.c */
extern inline void particleBurst(cpSpace *space, BITMAP *bitmap, cpFloat m, cpVect p, cpVect v, cpVect f, int d_f, int d_p, int alpha, int d_alpha, int particlesMax);
extern inline void emitterNew(int lifetime, int freq, BITMAP *bitmap, cpBody *body, cpSpace *space);
extern void emittersUpdate(cpArrayIter callback);
extern void createParticle(cpSpace *space, BITMAP *bitmap, cpFloat m, cpVect p, cpVect v, cpVect f, int alpha);
extern inline void deleteParticle(cpBody *particle);
extern void emitterRemove(kineticEmitter *node, void *data);
extern void emitterLife(void *ptr, void *data);
extern cpVect emitterPosition1(kineticEmitter *e);
extern cpVect emitterPosition2(kineticEmitter *e);

/* declared in player.c */
extern void createPlayer(void);
extern cpBody *createBite(uint bitmap, uint id, cpFloat m, cpFloat i, cpVect p, cpVect v, cpVect f, cpFloat a, cpFloat w, cpFloat t, cpFloat e, cpFloat u, int ct, int layers, uchar health);
extern void mouseBodyVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
extern void biteVelocityMenu(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
extern void biteVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
extern void ballVelocityMenu(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
extern void ballVelocity(struct cpBody *body, cpVect gravity, cpFloat damping, cpFloat dt);
extern void ballPosition(struct cpBody *body, cpFloat dt);

#endif
