
// ------------------------- //
// draw.c - drawing routines //
// ------------------------- //

#include "main.h"

void drawJoint(cpConstraint *constraint, int col)
{
	cpBody *body_a = constraint->a;
	cpBody *body_b = constraint->b;

	const cpConstraintClass *klass = constraint->klass;

	if (klass == cpPinJointGetClass())
	{
		cpPinJoint *joint = (cpPinJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		/*if (body_a != staticBody && body_b != staticBody)*/
			line(buffer, a.x, a.y, b.x, b.y, col);
	} else if (klass == cpSlideJointGetClass()) {
		cpSlideJoint *joint = (cpSlideJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		line(buffer, a.x, a.y, b.x, b.y, col);
	} else if (klass == cpPivotJointGetClass()) {
		cpPivotJoint *joint = (cpPivotJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		if (body_a != staticBody) line(buffer, a.x, a.y, body_a->p.x, body_a->p.y, col);
		if (body_b != staticBody) line(buffer, a.x, a.y, body_b->p.x, body_b->p.y, col);
	} else if (klass == cpGrooveJointGetClass()) {
		cpGrooveJoint *joint = (cpGrooveJoint *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->grv_a, body_a->rot));
		cpVect b = cpvadd(body_a->p, cpvrotate(joint->grv_b, body_a->rot));
		cpVect c = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		putpixel(buffer, c.x, c.y, col);
		/*if (joint == ballJoint) line(buffer, a.x, a.y, b.x, b.y, makeacol(255, 255, 255, 255)); else*/
		line(buffer, a.x, a.y, b.x, b.y, col);
	} else if (klass == cpDampedSpringGetClass()) {
		cpDampedSpring *joint = (cpDampedSpring *)constraint;
		cpVect a = cpvadd(body_a->p, cpvrotate(joint->anchr1, body_a->rot));
		cpVect b = cpvadd(body_b->p, cpvrotate(joint->anchr2, body_b->rot));
		line(buffer, a.x, a.y, b.x, b.y, col);
	} else {
//		printf("Cannot draw constraint\n");
	}
}

inline void drawRotate(BITMAP *image, cpFloat x, cpFloat y, cpFloat angle, int alpha)
{
	BITMAP *rotation_buffer = rbuffer;
	int rd_offset = 20;
	int hw_max = (image->w > image->h) ? image->w : image->h;

	/*#ifndef WIN32*/
	for (int i=0; i<9; i++) {
		if (hw_max <= rx_sizes[i]) {
			rd_offset = rd_sizes[i];
			rotation_buffer = r_buffer[i];
			i = 9;
		}
	}
	/*#endif*/

	/*rectfill(rotation_buffer, 0, 0, rotation_buffer->w, rotation_buffer->h, makeacol(255, 255, 255, 128));*/
	clear(rotation_buffer);
	rotate_sprite(rotation_buffer, image, rd_offset, rd_offset, ftofix(angle * 128.0f / PI));
	/*if (alpha == 255) draw_trans3(rotation_buffer, buffer, x - image->w / 2 - rd_offset, y - image->h / 2 - rd_offset, 255 - rand()%7);*/
	if (alpha == 255) draw_trans2(rotation_buffer, buffer, x - image->w / 2 - rd_offset, y - image->h / 2 - rd_offset);
		else if (alpha < 255) draw_trans3(rotation_buffer, buffer, x - image->w / 2 - rd_offset, y - image->h / 2 - rd_offset, alpha);
			else draw_trans3(rotation_buffer, buffer, x - image->w / 2 - rd_offset, y - image->h / 2 - rd_offset, 510 - alpha);
}

void drawParticle(cpBody *body, void *unused)
{
	BITMAP *sprite = body->data;
	#ifdef WIN32
		f_add(sprite, buffer, body->p.x, body->p.y, body->alpha);
	#else
		fblend_add(sprite, buffer, body->p.x, body->p.y, body->alpha);
	#endif
}

void drawObj(cpBody *body, void *unused)
{
	BITMAP *sprite = bodyGetBitmap(body);
	/*if (sprite) [> sanity check: to add or not to add? <]*/
	drawRotate(sprite, body->p.x, body->p.y, body->a, (int)body->alpha);
}


// ----------------------------------- //
// FBlend's low-level drawing routines //
// ----------------------------------- //

static void fblend_add_32(BITMAP *src, BITMAP *dst, int src_x, int src_y, int dst_x, int dst_y, int w, int h, int fact)
{
	if (fact == 256) {
		int i, j;

		for (j = 0; j < h; j++) {

			unsigned long *s, *d;
			unsigned long color1, color2;
			unsigned long temp1, temp2;

			/* Read src line */

			bmp_select(dst);
			s = (unsigned long*)(src->line[src_y + j] + src_x * sizeof(long));
			d = (unsigned long*)(bmp_write_line(dst, dst_y + j) + dst_x * sizeof(long));

			for (i = w; i; i--) {
				/* Read data, 1 pixel at a time */
				color1 = *s;

				if (color1 == MASK_COLOR_32) {
					d++; s++;
					continue;
				}

				color2 = *d;

				temp1 = color1 & 0x808080;
				temp2 = color2 & 0x808080;
				color1 = (color1 & 0x7F7F7F) + (color2 & 0x7F7F7F);

				color2 = temp1;
				temp1 = temp1 | temp2;
				temp2 = color2 & temp2;

				color2 = temp1 & color1;
				temp2 = (temp2 | color2) >> 7;

				color1 |= ((temp2 + 0x7F7F7F) ^ 0x7F7F7F) | temp1;

	 			/* Write the data */
				s++;
				bmp_write32((unsigned long)d, color1);
				d++;
			}
		}
	}
	else {
		int i, j;

		for (j = 0; j < h; j++) {

			unsigned long *s, *d;
			unsigned long color1, color2;
			unsigned long temp1, temp2;

			/* Read src line */

			bmp_select(dst);
			s = (unsigned long*)(src->line[src_y + j] + src_x * sizeof(long));
			d = (unsigned long*)(bmp_write_line(dst, dst_y + j) + dst_x * sizeof(long));

			for (i = w; i; i--) {
				/* Read data, 1 pixel at a time */
				color1 = *s;

				if (color1 == MASK_COLOR_32) {
					d++; s++;
					continue;
				}

				color2 = *d;

				temp1 = color1 & 0xFF00FF;
				temp2 = color1 & 0x00FF00;

				temp1 = ((temp1 * fact) >> 8) & 0xFF00FF;
				temp2 = ((temp2 * fact) >> 8) & 0x00FF00;

				color1 = temp1 | temp2;

				temp1 = color1 & 0x808080;
				temp2 = color2 & 0x808080;
				color1 = (color1 & 0x7F7F7F) + (color2 & 0x7F7F7F);

				color2 = temp1;
				temp1 = temp1 | temp2;
				temp2 = color2 & temp2;

				color2 = temp1 & color1;

				color1 |= ((((temp2 | color2) >> 7) + 0x7F7F7F) ^ 0x7F7F7F) | temp1;

	 			/* Write the data */
				s++;
				bmp_write32((unsigned long)d, color1);
				d++;
			}
		}
	}

	return;
}

void f_add(BITMAP *src, BITMAP *dst, int x, int y, int fact)
{
	int w, h;

	int src_x = 0, src_y = 0, dst_x = x, dst_y = y;
	int src_depth, dst_depth;

	w = src->w;
	h = src->h;

	/* Clip the image */
	if (dst_x < 0) {
		w += dst_x;
		src_x -= dst_x;
		dst_x = 0;
	}
	if (dst_y < 0) {
		h += dst_y;
		src_y -= dst_y;
		dst_y = 0;
	}
	if (dst_x + w >= dst->w)
		w -= dst_x + w - dst->w;
	if (dst_y + h >= dst->h)
		h -= dst_y + h - dst->h;

	if (x > dst->w || y > dst->h || x < 0 || y < 0) return;

	acquire_bitmap(dst);

	/* Check if nothing to do */
	if (fact <= 0)
		return;
	else
		fact++;

	#ifdef FBLEND_SSE
		if (cpu_capabilities & CPU_SSE)
			fblend_add_sse_32(src, dst, src_x, src_y, dst_x, dst_y, w, h, fact);
		else
	#endif
	#ifdef FBLEND_MMX
		if (cpu_capabilities & CPU_MMX)
			fblend_add_mmx_32(src, dst, src_x, src_y, dst_x, dst_y, w, h, fact);
		else
	#endif

	fblend_add_32(src, dst, src_x, src_y, dst_x, dst_y, w, h, fact);

	bmp_unwrite_line(dst);
	release_bitmap(dst);

	return;
}

/* This functions was copypasted somewhere from allegro.cc forums */

inline unsigned long blendColors32NoEmms(unsigned long dst, unsigned long src, unsigned long factor)
{
	static unsigned short INVERT_MASK[4] = { 0x00FF, 0x00FF, 0x00FF, 0x00FF };
	unsigned long returnParam;
	factor = 255 - factor;
	__asm(
	"movd %1, %%mm0\n"
	"movd %2, %%mm1\n"
	"pxor %%mm2, %%mm2\n"
	"punpcklbw %%mm2, %%mm0\n"
	"punpcklbw %%mm2, %%mm1\n"

	// Get the alpha value //
	"movd %4, %%mm3\n"
	"punpcklwd %%mm3, %%mm3\n"
	"punpcklwd %%mm3, %%mm3\n"

	// (alpha * (source + 255 - dest))/255 + dest - alpha //
	"paddw (%3), %%mm0\n"
	"psubw %%mm1, %%mm0\n"
	"psrlw $1, %%mm0\n"
	"pmullw %%mm3, %%mm0\n"
	"psrlw $7, %%mm0\n"
	"paddw %%mm1, %%mm0\n"
	"psubw %%mm3, %%mm0\n"

	"packuswb %%mm0, %%mm0\n"
	"movd %%mm0, %0\n"
	: "=&a" (returnParam)
	: "rm" (dst), "rm" (src), "rm" (INVERT_MASK), "rm" (factor)
	: "memory"
	);
	return returnParam;
}

inline void callEmms()
{
	__asm(
	"emms\n"
	);
}

unsigned long blendColors32(unsigned long dst, unsigned long src, unsigned long factor)
{
	unsigned long returnParam = blendColors32NoEmms(dst, src, factor);
	callEmms();
	return returnParam;
}

void draw_trans3(BITMAP *src, BITMAP *dst, int dst_x, int dst_y, int globalAlpha)
{
	/* The following conditions must be true */
	ASSERT( src );
	ASSERT( dst );
	ASSERT( bitmap_color_depth( src ) == 32 );
	ASSERT( bitmap_color_depth( dst ) == 32 );

	/* Apply clipping */
	int src_x = 0;
	int src_y = 0;
	int w = src->w;
	int h = src->h;

	if (dst_x < 0) {
		w += dst_x;
		src_x -= dst_x;
		dst_x = 0;
	}

	if (dst_y < 0) {
		h += dst_y;
		src_y -= dst_y;
		dst_y = 0;
	}

	if (dst_x + w > dst->w) {
		w -= dst_x + w - dst->w;
	}

	if (w <= 0) return;

	if (dst_y + h > dst->h) {
		h -= dst_y + h - dst->h;
	}

	if( h <= 0 ) return;

	/* Select destination surface for reading and writing */
	acquire_bitmap(dst);
	bmp_select(dst);

	/* Loop through all pixels */
	for (int j = 0; j < h; j++) {
		unsigned int *src_ptr = ((unsigned int *)src->line[src_y+j]) + src_x;
		unsigned int dst_address = bmp_write_line( dst, dst_y+j ) + 4*dst_x;

		for (int i = 0; i < w; i++) {
			unsigned int srcColor = *src_ptr;
			/* Extract the alpha value */
			unsigned int fact = ( geta32( srcColor ) * globalAlpha ) >> 8;

			/* Blend the colors if required */
			if (fact != 0) {
				if (fact >= 255) bmp_write32(dst_address, srcColor);
					else bmp_write32(dst_address, blendColors32NoEmms( *((unsigned int *) dst_address), *src_ptr, fact));
			}

			/* Advance to the next pixel */
			dst_address += 4;
			src_ptr++;
		}
	}

	/* Finish blending */
	callEmms();

	/* Finish messing with the destination bitmap */
	bmp_unwrite_line(dst);
	release_bitmap(dst);
}

void draw_trans2(BITMAP *src, BITMAP *dst, int dst_x, int dst_y)
{
	/* The following conditions must be true */
	ASSERT( src );
	ASSERT( dst );
	ASSERT( bitmap_color_depth( src ) == 32 );
	ASSERT( bitmap_color_depth( dst ) == 32 );

	/* Apply clipping */
	int src_x = 0;
	int src_y = 0;
	int w = src->w;
	int h = src->h;

	if (dst_x < 0) {
		w += dst_x;
		src_x -= dst_x;
		dst_x = 0;
	}

	if (dst_y < 0) {
		h += dst_y;
		src_y -= dst_y;
		dst_y = 0;
	}

	if (dst_x + w > dst->w) {
		w -= dst_x + w - dst->w;
	}

	if( w <= 0 ) return;

	if (dst_y + h > dst->h) {
		h -= dst_y + h - dst->h;
	}

	if (h <= 0) return;

	/* Select destination surface for reading and writing */
	acquire_bitmap(dst);
	bmp_select(dst);

	/* Loop through all pixels */
	for (int j = 0; j < h; j++) {
		unsigned int *src_ptr = ((unsigned int *)src->line[src_y+j]) + src_x;
		unsigned int dst_address = bmp_write_line (dst, dst_y+j) + 4 * dst_x;

		for (int i = 0; i < w; i++) {
			unsigned int srcColor = *src_ptr;
			/* Extract the alpha value */
			unsigned int fact = geta32( srcColor );

			/* Blend the colors if required */
			if( fact != 0 ) {
				if (fact >= 255) bmp_write32 (dst_address, srcColor);
				else bmp_write32 (dst_address, blendColors32NoEmms( *((unsigned int *) dst_address), *src_ptr, fact));
			}

			/* Advance to the next pixel */
			dst_address += 4;
			src_ptr++;
		}
	}

	/* Finish blending */
	callEmms();

	/* Finish messing with the destination bitmap */
	bmp_unwrite_line (dst);
	release_bitmap (dst);
}

