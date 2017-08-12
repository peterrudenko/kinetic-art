
#include "main.h"

PACKFILE *file;
FILE *textfile;
unsigned int simple_checksum = 0;


void SaveSettings()
{
	/* old version. suitable for .ini writing */

	/*FILE *textfile;
	textfile = fopen("settings.ini", "w");
	fullscreen = !is_windowed_mode();
	if (!textfile) allegro_message ("File I/O error.\n");
	fprintf(textfile, "[General]\nFullscreen = %d\nFlags = %d\n[Audio]\nMusic volume = %d\nSound volume = %d\n", fullscreen, currentLevelIndex, muzvol, sndvol, textfile);
	fclose(textfile);*/

	/* new version. for packed encrypted writing */

	delete_file("settings.dat");

	file = pack_fopen("settings.dat", "wp");
	if (file) {
		pack_iputl(settings.muzvol, file);
		pack_iputl(settings.sndvol, file);
		pack_iputl(settings.fullscreen, file);
		pack_iputl(settings.currentLevelIndex, file);
		pack_iputl(settings.level_start_score, file);
		pack_iputl(settings.lives, file);

		simple_checksum = settings.muzvol + settings.sndvol + settings.fullscreen + settings.currentLevelIndex + settings.level_start_score + settings.lives;

		/* highscores */
		for (int i=0; i<5; i++) {
			char tmp[NAME_LEN*2] = "";
			do_uconvert(settings.heroes[i], U_CURRENT, tmp, U_UNICODE, NAME_LEN*2); /* convert UTF-8 strings to Unicode */
			pack_iputl(settings.scores[i], file);
			pack_fwrite(tmp, sizeof(tmp), file);
			simple_checksum += ustrlen(settings.heroes[i]) + settings.scores[i];
		}

		/* hints count */
		for (int i=0; i<16; i++) {
			pack_iputl(settings.hints[i], file);
			simple_checksum += settings.hints[i];
		}

		pack_iputl(simple_checksum, file);

		pack_fclose(file);
	}
}

void LoadSettings()
{
	/*FILE *textfile;
	int lvl = 0;
	textfile = fopen("settings.ini", "r");
	if (textfile) {
		fscanf(textfile, "[General]\nFullscreen = %d\nFlags = %d\n[Audio]\nMusic volume = %d\nSound volume = %d\n", &fullscreen, &lvl, &muzvol, &sndvol, textfile);
		fclose(textfile);
	}*/

	simple_checksum = 1;
	unsigned int tmpsum = 0;
	file = pack_fopen("settings.dat", "rp");
	if (file) {
		/*simple_checksum = pack_getc(file);*/
		settings.muzvol = pack_igetl(file);
		settings.sndvol = pack_igetl(file);
		settings.fullscreen = pack_igetl(file);
		settings.currentLevelIndex = pack_igetl(file);
		settings.score = pack_igetl(file);
		settings.lives = pack_igetl(file);

		tmpsum = settings.muzvol + settings.sndvol + settings.fullscreen + settings.currentLevelIndex + settings.score + settings.lives;

		/* highscores */
		for (int i=0; i<5; i++) {
			char tmp[NAME_LEN*2] = "";
			settings.scores[i] = pack_igetl(file);
			pack_fread(&tmp, sizeof(tmp), file);
			do_uconvert(tmp, U_UNICODE, settings.heroes[i], U_CURRENT, NAME_LEN*2);
			tmpsum += ustrlen(settings.heroes[i]) + settings.scores[i]; /* check */
		}

		/* hints count */
		for (int i=0; i<16; i++) {
			settings.hints[i] = pack_igetl(file);
			tmpsum += settings.hints[i];
		}

		simple_checksum = pack_igetl(file);

		pack_fclose(file);
	}

	if (simple_checksum == tmpsum) {
		/* SanityCheck(); */
		if (settings.lives < 1) settings.lives = 1;
		if (settings.muzvol > 5) settings.muzvol = 5; if (settings.muzvol < 0) settings.muzvol = 0;
		if (settings.sndvol > 5) settings.muzvol = 5; if (settings.sndvol < 0) settings.muzvol = 0;
		if (settings.currentLevelIndex < 1 || settings.currentLevelIndex > 100) settings.currentLevelIndex = 1;
		/*if (fullscreen > 1) fullscreen = 1; if (fullscreen < 0) fullscreen = 0;*/
	} else {
		/* DefaultSettings(); */
		/*allegro_message("Settings file corrupted!");*/
		kineticSettings s = {
			0,
			0,
			1,
			5,
			5,
			5,
			0,
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{{"---"}, {"---"}, {"---"}, {"---"}, {"---"}, {"---"}, {"---"}, {"---"}},
			{50, 40, 30, 20, 10, 5, 3, 1}
		};
		settings = s;
	}
}


void Load(char *filename, bool unordered)
{
	/*file = pack_fopen(filename, "rp"); [> load packed: data.dat with global compression <]*/
	file = pack_fopen(filename, "rp");
	if (!file) {
		allegro_message ("File I/O error.\n");
	} else {

		/* Loading objects and shapes */

		int q = pack_getc(file);
		/*idCounter = q + 1;*/ /* BUG here? */
		idCounter = 0;

		for (int i=0, count = q; i<count; i++) {

			int klass_type = pack_getc(file);
			int h = pack_getc(file); /* health */
			cpFloat m = pack_igetf(file); /* mass */
			/*allegro_message ("Found body with mass: %3.3f.", m);*/
			cpFloat i = pack_igetf(file); /* moment */
				if (i < 0) i = INFINITY;
			cpVect p = pack_igetv(file); /* position */
			cpVect v = pack_igetv(file); /* velocity */
			cpVect f = pack_igetv(file); /* force */
			cpFloat a = pack_igetf(file); /* angle */
			cpFloat w = pack_igetf(file); /* angular velocity */
			cpFloat t = pack_igetf(file); /* torque */
			cpFloat e = pack_igetf(file); /* elasticity */
			cpFloat u = pack_igetf(file); /* friction */
			int ct = pack_igetl(file); /* collision type */
			int layers = pack_igetl(file); /* binary layers */
			unsigned int bitmap = pack_igetl(file); /* bitmap id */
			unsigned int id = pack_igetl(file); /* body id */
			cpFloat radius = 0;
			cpFloat width = 0;
			cpFloat height = 0;

			switch (klass_type) {
				case CP_CIRCLE_SHAPE:
					radius = pack_igetf(file); /* radius */
					/*createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, radius);*/ /* use PolyWrapper instead */
					break;
				case CP_SEGMENT_SHAPE:
					 /* TODO */
					break;
				case CP_POLY_SHAPE: /* treat it as a box */
					width = pack_igetf(file); /* width */
					height = pack_igetf(file); /* height */
					/*createBox(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, width, height);*/ /* use PolyWrapper instead */
					break;
				default:
					allegro_message ("Bad shape class enum. Error in the savefile.\n");
			}

			if (unordered) {
				createPolyUniWrapper(bitmap, 0, m, i, p, v, f, a, w, t, e, u, ct, layers, (unsigned char)h);
			} else {
				createPolyUniWrapper(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, (unsigned char)h);
			}

			if (idCounter < id) idCounter = id;

		}

		/* Loading joints */
		q = pack_getc(file);
		/*allegro_message ("Found joints: %3i.", q);*/

		for (int i=0, count = q; i<count; i++) {

			int body_a_id = pack_igetl(file);
			int body_b_id = pack_igetl(file);
			int klass_type = pack_getc(file);
			cpBody *body_a = (body_a_id == 0) ? staticBody : getBodyById(body_a_id);
			cpBody *body_b = (body_b_id == 0) ? staticBody : getBodyById(body_b_id);
			cpVect anchr1 = pack_igetv(file);
			cpVect anchr2 = pack_igetv(file);
			cpConstraint *joint = NULL;
			cpVect groove_a, groove_b;
			cpFloat min, max, restLength, stiffness, damping;

			/*allegro_message ("Found joint of klass %2i, aligned to id#%2i and id#%2i.", klass_type, body_a_id, body_b_id);*/

			switch (klass_type) {
				case 1:
					joint = cpSpaceAddConstraint(space, cpPinJointNew(body_a, body_b, anchr1, anchr2));
					break;
				case 2:
					min = pack_igetf(file);
					max = pack_igetf(file);
					joint = cpSpaceAddConstraint(space, cpSlideJointNew(body_a, body_b, anchr1, anchr2, min, max));
					break;
				case 3:
					joint = cpSpaceAddConstraint(space, cpPivotJointNew2(body_a, body_b, anchr1, anchr2));
					break;
				case 4:
					groove_a = pack_igetv(file);
					groove_b = pack_igetv(file);
					joint = cpSpaceAddConstraint(space, cpGrooveJointNew(body_a, body_b, groove_a, groove_b, anchr2));
					break;
				case 5:
					restLength = pack_igetf(file);
					stiffness = pack_igetf(file);
					damping = pack_igetf(file);
					joint = cpSpaceAddConstraint(space, cpDampedSpringNew(body_a, body_b, anchr1, anchr2, restLength, stiffness, damping));
					break;
				default:
					allegro_message ("Bad shape class enum. Error in the savefile.\n");
			}
		}

		pack_fclose(file);
		idCounter++;
	}
}

void Save(char *filename)
{
	file = pack_fopen(filename, "wp");
	if (!file) {
		allegro_message ("File I/O error.\n");
	} else {
		/* Iterating objects 'n shapes */
		cpArray *bodies = space->bodies;
		pack_putc ((int)bodies->num, file);
		for (int i=0, count = bodies->num; i<count; i++) {

			cpBody *body = ((cpBody *)bodies->arr[i]);
			cpShape *shape = (body->shape);
			cpVect *verts = NULL; /* for saving boxes */

			pack_putc((int)shape->klass->type, file); /* shape class */
			pack_putc((int)body->health, file); /* health char */
			pack_iputf(body->m, file); /* mass */
			if (body->i == INFINITY) pack_iputf(-1.0f, file); else pack_iputf(body->i, file); /* moment */
			pack_iputv(body->p, file); /* position */
			pack_iputv(body->v, file); /* velocity */
			pack_iputv(body->f, file); /* force */
			pack_iputf(body->a, file); /* angle */
			pack_iputf(body->w, file); /* angular velocity */
			pack_iputf(body->t, file); /* torque */
			pack_iputf(shape->e, file); /* elasticity */
			pack_iputf(shape->u, file); /* friction */
			pack_iputl(shape->collision_type, file); /* -""- */
			pack_iputl(shape->layers, file); /* binary layers */
			pack_iputl(body->bitmap, file); /* bitmap id */
			pack_iputl(body->id, file); /* body id */

			/* Class-specific shape data */
			switch (shape->klass->type) {
				case CP_CIRCLE_SHAPE:
					pack_iputf(((cpCircleShape *)body->shape)->r, file);
					break;
				case CP_SEGMENT_SHAPE:
					/* is not implemented and will never be */
					break;
				case CP_POLY_SHAPE:
					verts = ((cpPolyShape *)body->shape)->verts;
					pack_iputf(cpvdist(verts[0], verts[1]), file);
					pack_iputf(cpvdist(verts[1], verts[2]), file);
					break;
				default:
					allegro_message ("Bad shape class enumeration.\n");
			}
		}

		/* Iterating joints */
		cpArray *constraints = space->constraints;
		pack_putc ((int)constraints->num, file);
		/*pack_putc (0, file);*/

		for (int i=0, count = constraints->num; i<count; i++) {
			cpConstraint *joint = ((cpConstraint *)constraints->arr[i]);
			saveJoint(joint);
		}

		pack_fclose(file);
	}
}

void SaveAsCode(char *filename)
{
	textfile = fopen(filename, "w");
	if (!textfile) {
		allegro_message ("File I/O error.\n");
	} else {
		/* Iterating objects 'n shapes */
		cpArray *bodies = space->bodies;
		cpArray *constraints = space->constraints;
		fprintf(textfile, "{  /* Total bodies: %d, total joints: %d */\n", bodies->num, constraints->num, textfile);
		fprintf(textfile, "\tint health = 2;\n");
		fprintf(textfile, "\tcpBody *body0 = staticBody;\n");

		for (int i=0, count = bodies->num; i<count; i++) {
			cpBody *body = ((cpBody *)bodies->arr[i]);
			cpShape *shape = (body->shape);
			cpVect *verts = NULL; /* for saving boxes */

			verts = ((cpPolyShape *)body->shape)->verts;
			fprintf(textfile,
					"\tcpBody *body%d = createPolyUniWrapper(%d, %d, %f, %f, cpv(%f, %f), cpv(%f, %f), cpv(%f, %f), %f, %f, %f, %f, %f, OBJECT_CT, OBJECT_LAYER, health);\n",
					body->id,
					body->bitmap,
					body->id,
					body->m,
					body->i,
					(double)body->p.x, (double)body->p.y,
					(double)body->v.x, (double)body->v.y,
					(double)body->f.x, (double)body->f.y,
					body->a,
					body->w,
					body->t,
					shape->e,
					shape->u);
		}

		/* Iterating joints */
		for (int i=0, count = constraints->num; i<count; i++) {
			cpConstraint *joint = ((cpConstraint *)constraints->arr[i]);
			saveJointAsCode(joint);
		}
		fprintf(textfile, "}\n");

		fclose(textfile);
	}
}

void fLoad(char *filename) /* flash version - save for as3 port */
{
	/*file = pack_fopen(filename, "rp"); [> load packed: data.dat with global compression <]*/
	char nfile[512] = "res\\sav\\";
	strcat(nfile, filename);
	/*allegro_message("%s", nfile);*/
	file = pack_fopen(nfile, "r");
	if (!file) {
		allegro_message ("File I/O error.\n");
	} else {

		/* Loading objects and shapes */

		int q = pack_getc(file);
		idCounter = 0;

		for (int i=0, count = q; i<count; i++) {

			int klass_type = pack_getc(file);
			int h = pack_getc(file); /* health */
			cpFloat m = pack_igetf(file); /* mass */
			/*allegro_message ("Found body with mass: %3.3f.", m);*/
			cpFloat i = pack_igetf(file); /* moment */
				if (i < 0) i = INFINITY;
			cpVect p = pack_igetv(file); /* position */
			cpVect v = pack_igetv(file); /* velocity */
			cpVect f = pack_igetv(file); /* force */
			cpFloat a = pack_igetf(file); /* angle */
			cpFloat w = pack_igetf(file); /* angular velocity */
			cpFloat t = pack_igetf(file); /* torque */
			cpFloat e = pack_igetf(file); /* elasticity */
			cpFloat u = pack_igetf(file); /* friction */
			int ct = pack_igetl(file); /* collision type */
			int layers = pack_igetl(file); /* binary layers */
			unsigned int bitmap = pack_igetl(file); /* bitmap id */
			unsigned int id = pack_igetl(file); /* body id */
			cpFloat radius = 0;
			cpFloat width = 0;
			cpFloat height = 0;

			switch (klass_type) {
				case CP_CIRCLE_SHAPE:
					radius = pack_igetf(file); /* radius */
					/*createCircle(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, radius);*/ /* use PolyWrapper instead */
					break;
				case CP_SEGMENT_SHAPE:
					 /* TODO */
					break;
				case CP_POLY_SHAPE: /* treat it as a box */
					width = pack_igetf(file); /* width */
					height = pack_igetf(file); /* height */
					/*createBox(space, bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, width, height);*/ /* use PolyWrapper instead */
					break;
				default:
					allegro_message ("Bad shape class enum. Error in the savefile.\n");
			}

			p = cpv(p.x/800*640, p.y/600*480); /* 800x600 -> 640x480 fix */
			createPolyUniWrapper(bitmap, id, m, i, p, v, f, a, w, t, e, u, ct, layers, (unsigned char)h);

			if (idCounter < id) idCounter = id;

		}

		/* Loading joints */
		q = pack_getc(file);
		/*allegro_message ("Found joints: %3i.", q);*/

		for (int i=0, count = q; i<count; i++) {

			int body_a_id = pack_igetl(file);
			int body_b_id = pack_igetl(file);
			int klass_type = pack_getc(file);
			cpBody *body_a = (body_a_id == 0) ? staticBody : getBodyById(body_a_id);
			cpBody *body_b = (body_b_id == 0) ? staticBody : getBodyById(body_b_id);
			cpVect anchr1 = pack_igetv(file);
			cpVect anchr2 = pack_igetv(file);
			cpConstraint *joint = NULL;
			cpVect groove_a, groove_b;
			cpFloat min, max, restLength, stiffness, damping;

			if (body_a == staticBody) anchr1 = cpv(anchr1.x/800*640, anchr1.y/600*480); /* 800x600 -> 640x480 fix */
			if (body_b == staticBody) anchr2 = cpv(anchr2.x/800*640, anchr2.y/600*480); /* 800x600 -> 640x480 fix */
			/*allegro_message ("Found joint of klass %2i, aligned to id#%2i and id#%2i.", klass_type, body_a_id, body_b_id);*/

			switch (klass_type) {
				case 1:
					joint = cpSpaceAddConstraint(space, cpPinJointNew(body_a, body_b, anchr1, anchr2));
					break;
				case 2:
					min = pack_igetf(file);
					max = pack_igetf(file);
					joint = cpSpaceAddConstraint(space, cpSlideJointNew(body_a, body_b, anchr1, anchr2, min, max));
					break;
				case 3:
					joint = cpSpaceAddConstraint(space, cpPivotJointNew2(body_a, body_b, anchr1, anchr2));
					break;
				case 4:
					groove_a = pack_igetv(file);
					groove_b = pack_igetv(file);
					joint = cpSpaceAddConstraint(space, cpGrooveJointNew(body_a, body_b, groove_a, groove_b, anchr2));
					break;
				case 5:
					restLength = pack_igetf(file);
					stiffness = pack_igetf(file);
					damping = pack_igetf(file);
					joint = cpSpaceAddConstraint(space, cpDampedSpringNew(body_a, body_b, anchr1, anchr2, restLength, stiffness, damping));
					break;
				default:
					allegro_message ("Bad shape class enum. Error in the savefile.\n");
			}
		}

		pack_fclose(file);
		idCounter++;
	}
}

void fSaveAsCode(char *filename) /* flash version */
{
	textfile = fopen(filename, "w");
	if (!textfile) {
		allegro_message ("File I/O error.\n");
	} else {
		/* Iterating objects 'n shapes */
		cpArray *bodies = space->bodies;
		cpArray *constraints = space->constraints;

		for (int i=0, count = bodies->num; i<count; i++) {
			cpBody *body = ((cpBody *)bodies->arr[i]);
			cpShape *shape = (body->shape);
			cpVect *verts = NULL; /* for saving boxes */

			verts = ((cpPolyShape *)body->shape)->verts;
			fprintf(textfile,
					"\t\t\tvar body%d: Body = createGemWrapper(Resources.gem%d, %f, %f, %f, %f, %f, %f);\n",
					body->id,
					body->bitmap,
					(double)body->p.x, (double)body->p.y,
					(double)body->a,
					(double)body->v.x, (double)body->v.y,
					(double)body->w);
		}

		for (int i=0, count = constraints->num; i<count; i++) {
			cpConstraint *joint = ((cpConstraint *)constraints->arr[i]);
			fSaveJointAsCode(joint);
		}

		fclose(textfile);
	}
}


// --------------- //
// Internally used //
// --------------- //

void fSaveJointAsCode(cpConstraint *constraint)
{
	cpBody *body_a = constraint->a;
	cpBody *body_b = constraint->b;

	const cpConstraintClass *klass = constraint->klass;

	if (klass == cpPinJointGetClass())
	{
		cpPinJoint *joint = (cpPinJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		fprintf(textfile,
				"\t\t\tspace.addConstraint(new PinJoint(body%d, body%d, new Vec2(%f, %f), new Vec2(%f, %f)));\n",
				body_a->id,
				body_b->id,
				a,
				b
				);
	} else if (klass == cpSlideJointGetClass()) {
		cpSlideJoint *joint = (cpSlideJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		fprintf(textfile,
				"\t\t\tspace.addConstraint(new SlideJoint(body%d, body%d, new Vec2(%f, %f), new Vec2(%f, %f), %f, %f));\n",
				body_a->id,
				body_b->id,
				a,
				b,
				joint->min,
				joint->max
				);
	} else if (klass == cpPivotJointGetClass()) {
		cpPivotJoint *joint = (cpPivotJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		fprintf(textfile,
				"\t\t\tspace.addConstraint(new PivotJoint(body%d, body%d, new Vec2(%f, %f)));\n",
				body_a->id,
				body_b->id,
				a
				);
	} else if (klass == cpGrooveJointGetClass()) {
		cpGrooveJoint *joint = (cpGrooveJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->grv_a, body_a->rot));
		cpVect b = cpvadd(body_a->p, cpvrotate(joint->grv_b, body_a->rot));
		cpVect c = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		fprintf(textfile,
				"\t\t\tspace.addConstraint(new GrooveJoint(body%d, body%d, new Vec2(%f, %f), new Vec2(%f, %f), new Vec2(%f, %f)));\n",
				body_a->id,
				body_b->id,
				c,
				joint->grv_a.x, joint->grv_a.y,
				joint->grv_b.x, joint->grv_b.y
				);
	} else if (klass == cpDampedSpringGetClass()) {
		cpDampedSpring *joint = (cpDampedSpring *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		fprintf(textfile,
				"\t\t\tspace.addConstraint(new DampedSpring(body%d, body%d, new Vec2(%f, %f), new Vec2(%f, %f), %f, %f, %f));\n",
				body_a->id,
				body_b->id,
				a,
				b,
				joint->restLength,
				joint->stiffness,
				joint->damping
				);
	} else {
		allegro_message ("Bad joint class enumeration. This should never happen.\n");
	}
}

void saveJointAsCode(cpConstraint *constraint)
{
	cpBody *body_a = constraint->a;
	cpBody *body_b = constraint->b;

	const cpConstraintClass *klass = constraint->klass;

	if (klass == cpPinJointGetClass())
	{
		cpPinJoint *joint = (cpPinJoint *)constraint;
		fprintf(textfile,
				"\tcpSpaceAddConstraint(space, cpPinJointNew(body%d, body%d, cpv(%f, %f), cpv(%f, %f)));\n",
				body_a->id,
				body_b->id,
				joint->anchr1.x, joint->anchr1.y,
				joint->anchr2.x, joint->anchr2.y
				);
	} else if (klass == cpSlideJointGetClass()) {
		cpSlideJoint *joint = (cpSlideJoint *)constraint;
		fprintf(textfile,
				"\tcpSpaceAddConstraint(space, cpSlideJointNew(body%d, body%d, cpv(%f, %f), cpv(%f, %f), %f, %f));\n",
				body_a->id,
				body_b->id,
				joint->anchr1.x, joint->anchr1.y,
				joint->anchr2.x, joint->anchr2.y,
				joint->min,
				joint->max
				);
	} else if (klass == cpPivotJointGetClass()) {
		cpPivotJoint *joint = (cpPivotJoint *)constraint;
		fprintf(textfile,
				"\tcpSpaceAddConstraint(space, cpPivotJointNew2(body%d, body%d, cpv(%f, %f), cpv(%f, %f)));\n",
				body_a->id,
				body_b->id,
				joint->anchr1.x, joint->anchr1.y,
				joint->anchr2.x, joint->anchr2.y
				);
	} else if (klass == cpGrooveJointGetClass()) {
		cpGrooveJoint *joint = (cpGrooveJoint *)constraint;
		fprintf(textfile,
				"\tcpSpaceAddConstraint(space, cpGrooveJointNew(body%d, body%d, cpv(%f, %f), cpv(%f, %f), cpv(%f, %f)));\n",
				body_a->id,
				body_b->id,
				joint->anchr2.x, joint->anchr2.y,
				joint->grv_a.x, joint->grv_a.y,
				joint->grv_b.x, joint->grv_b.y
				);
	} else if (klass == cpDampedSpringGetClass()) {
		cpDampedSpring *joint = (cpDampedSpring *)constraint;
		fprintf(textfile,
				"\tcpSpaceAddConstraint(space, cpDampedSpringNew(body%d, body%d, cpv(%f, %f), cpv(%f, %f), %f, %f, %f));\n",
				body_a->id,
				body_b->id,
				joint->anchr1.x, joint->anchr1.y,
				joint->anchr2.x, joint->anchr2.y,
				joint->restLength,
				joint->stiffness,
				joint->damping
				);
	} else {
		allegro_message ("Bad joint class enumeration. This should never happen.\n");
	}
}

void saveJoint(cpConstraint *constraint)
{
	cpBody *body_a = constraint->a;
	cpBody *body_b = constraint->b;

	pack_iputl(body_a->id, file);
	pack_iputl(body_b->id, file);

	const cpConstraintClass *klass = constraint->klass;

	if (klass == cpPinJointGetClass())
	{
		cpPinJoint *joint = (cpPinJoint *)constraint;
		pack_putc(1, file);
		pack_iputv(joint->anchr1, file);
		pack_iputv(joint->anchr2, file);
	} else if (klass == cpSlideJointGetClass()) {
		cpSlideJoint *joint = (cpSlideJoint *)constraint;
		pack_putc (2, file);
		pack_iputv(joint->anchr1, file);
		pack_iputv(joint->anchr2, file);
		pack_iputf(joint->min, file);
		pack_iputf(joint->max, file);
	} else if (klass == cpPivotJointGetClass()) {
		cpPivotJoint *joint = (cpPivotJoint *)constraint;
		pack_putc (3, file);
		pack_iputv(joint->anchr1, file);
		pack_iputv(joint->anchr2, file);
	} else if (klass == cpGrooveJointGetClass()) {
		cpGrooveJoint *joint = (cpGrooveJoint *)constraint;
		pack_putc (4, file);
		pack_iputv(joint->anchr2, file); /* tak nado. (see loading function) */
		pack_iputv(joint->anchr2, file);
		pack_iputv(joint->grv_a, file);
		pack_iputv(joint->grv_b, file);
	} else if (klass == cpDampedSpringGetClass()) {
		cpDampedSpring *joint = (cpDampedSpring *)constraint;
		pack_putc (5, file);
		pack_iputv(joint->anchr1, file);
		pack_iputv(joint->anchr2, file);
		pack_iputf(joint->restLength, file);
		pack_iputf(joint->stiffness, file);
		pack_iputf(joint->damping, file);
	} else {
		allegro_message ("Bad joint class enumeration. This should never happen.\n");
	}
}

cpBody *getBodyById(unsigned int id)
{
	cpArray *bodies = space->bodies;
	for (int i=0, count = bodies->num; i<count; i++) {
		if (((cpBody *)bodies->arr[i])->id == id) return (cpBody *)bodies->arr[i];
	}
	return NULL;
}


// ------- //
// Helpers //
// ------- //

void pack_iputv(cpVect val, PACKFILE *file)
{
	pack_iputf(val.x, file);
	pack_iputf(val.y, file);
}

cpVect pack_igetv(PACKFILE *file)
{
	cpFloat x = pack_igetf(file);
	cpFloat y = pack_igetf(file);
	return cpv(x, y);
}

void pack_iputf(double fval, PACKFILE *file)
{
	/* these funcs are only used when editing scenes, */
	/* so there's no nedd for them to be cross-platform */
	pack_fwrite(&fval, sizeof(double), file);
	/* doing the same in a cross-platform way: (not accurate somehow) */
	/*pack_iputl((long)floor(fval), file);
	if(fval-floor(fval))
		pack_iputl(1/(fval-floor(fval)), file);
	else
		pack_iputl(0, file);*/
}

cpFloat pack_igetf(PACKFILE *file)
{
	double q = 0.0f;
	pack_fread(&q, sizeof(double), file);
	return q;
	/*long whole = pack_igetl(file);
	long recip = pack_igetl(file);
	return whole + (recip ? (1.0/(float)recip) : 0.0);*/
}

