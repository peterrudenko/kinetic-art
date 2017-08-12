/* include/allegro/platform/alunixac.h.  Generated from alunixac.hin by configure.  */
/*
 * Note that this file is no longer generated by autoheader as it results in
 * too much namespace pollution.  If you add define a new macro in
 * configure.in or aclocal.m4, you must add an entry to this file.
 */

/* Define if you want support for n bpp modes. */
#define ALLEGRO_COLOR8 1
#define ALLEGRO_COLOR16 1
#define ALLEGRO_COLOR24 1
#define ALLEGRO_COLOR32 1

/*---------------------------------------------------------------------------*/

/* Define to 1 if you have the corresponding header file. */
#define ALLEGRO_HAVE_DIRENT_H 1
#define ALLEGRO_HAVE_INTTYPES_H 1
/* #undef ALLEGRO_HAVE_LINUX_AWE_VOICE_H */
#define ALLEGRO_HAVE_LINUX_INPUT_H 1
#define ALLEGRO_HAVE_LINUX_JOYSTICK_H 1
#define ALLEGRO_HAVE_LINUX_SOUNDCARD_H 1
/* #undef ALLEGRO_HAVE_MACHINE_SOUNDCARD_H */
/* #undef ALLEGRO_HAVE_SOUNDCARD_H */
#define ALLEGRO_HAVE_STDINT_H 1
/* #undef ALLEGRO_HAVE_SV_PROCFS_H */
#define ALLEGRO_HAVE_SYS_IO_H 1
#define ALLEGRO_HAVE_SYS_SOUNDCARD_H 1
#define ALLEGRO_HAVE_SYS_STAT_H 1
#define ALLEGRO_HAVE_SYS_TIME_H 1
#define ALLEGRO_HAVE_SYS_UTSNAME_H 1

/* Define to 1 if the corresponding functions are available. */
/* #undef ALLEGRO_HAVE_GETEXECNAME */
#define ALLEGRO_HAVE_MEMCMP 1
#define ALLEGRO_HAVE_MKSTEMP 1
#define ALLEGRO_HAVE_MMAP 1
#define ALLEGRO_HAVE_MPROTECT 1
#define ALLEGRO_HAVE_SCHED_YIELD 1
/* #undef ALLEGRO_HAVE_STRICMP */
/* #undef ALLEGRO_HAVE_STRLWR */
/* #undef ALLEGRO_HAVE_STRUPR */
#define ALLEGRO_HAVE_SYSCONF 1

/* Define to 1 if procfs reveals argc and argv */
/* #undef ALLEGRO_HAVE_PROCFS_ARGCV */

/*---------------------------------------------------------------------------*/

/* Define if target machine is little endian. */
#define ALLEGRO_LITTLE_ENDIAN 1

/* Define if target machine is big endian. */
/* #undef ALLEGRO_BIG_ENDIAN */

/* Define for Unix platforms, to use C convention for bank switching. */
/* #undef ALLEGRO_NO_ASM */

/* Define if compiler prepends underscore to symbols. */
/* #undef ALLEGRO_ASM_PREFIX */

/* Define if assembler supports MMX. */
#define ALLEGRO_MMX 1

/* Define if assembler supports SSE. */
#define ALLEGRO_SSE 1

/* Define if target platform is Darwin. */
/* #undef ALLEGRO_DARWIN */

/* Define if you have the pthread library. */
#define ALLEGRO_HAVE_LIBPTHREAD 1

/* Define if constructor attribute is supported. */
#define ALLEGRO_USE_CONSTRUCTOR 1

/* Define if you need to use a magic main. */
/* #undef ALLEGRO_WITH_MAGIC_MAIN */

/* Define if dynamically loaded modules are supported. */
#define ALLEGRO_WITH_MODULES 1

/*---------------------------------------------------------------------------*/

/* Define if you need support for X-Windows. */
#define ALLEGRO_WITH_XWINDOWS 1

/* Define if MIT-SHM extension is supported. */
#define ALLEGRO_XWINDOWS_WITH_SHM 1

/* Define if XCursor ARGB extension is available. */
#define ALLEGRO_XWINDOWS_WITH_XCURSOR 1

/* Define if DGA version 2.0 or newer is supported */
/* #undef ALLEGRO_XWINDOWS_WITH_XF86DGA2 */

/* Define if XF86VidMode extension is supported. */
#define ALLEGRO_XWINDOWS_WITH_XF86VIDMODE 1

/* Define if XIM extension is supported. */
#define ALLEGRO_XWINDOWS_WITH_XIM 1

/* Define if xpm bitmap support is available. */
#define ALLEGRO_XWINDOWS_WITH_XPM 1

/*---------------------------------------------------------------------------*/

/* Define if target platform is linux. */
#define ALLEGRO_LINUX 1

/* Define to enable Linux console fbcon driver. */
#define ALLEGRO_LINUX_FBCON 1

/* Define to enable Linux console SVGAlib driver. */
#define ALLEGRO_LINUX_SVGALIB 1

/* Define if SVGAlib driver can check vga_version. */
#define ALLEGRO_LINUX_SVGALIB_HAVE_VGA_VERSION 1

/* Define to enable Linux console VBE/AF driver. */
/* #undef ALLEGRO_LINUX_VBEAF */

/* Define to enable Linux console VGA driver. */
#define ALLEGRO_LINUX_VGA 1

/*---------------------------------------------------------------------------*/

/* Define to the installed ALSA version. */
#define ALLEGRO_ALSA_VERSION 9

/* Define if ALSA DIGI driver is supported. */
#define ALLEGRO_WITH_ALSADIGI 1

/* Define if ALSA MIDI driver is supported. */
#define ALLEGRO_WITH_ALSAMIDI 1

/* Define if aRts DIGI driver is supported. */
#define ALLEGRO_WITH_ARTSDIGI 1

/* Define if ESD DIGI driver is supported. */
#define ALLEGRO_WITH_ESDDIGI 1

/* Define if JACK DIGI driver is supported. */
#define ALLEGRO_WITH_JACKDIGI 1

/* Define if OSS DIGI driver is supported. */
#define ALLEGRO_WITH_OSSDIGI 1

/* Define if OSS MIDI driver is supported. */
#define ALLEGRO_WITH_OSSMIDI 1

/* Define if SGI AL DIGI driver is supported. */
/* #undef ALLEGRO_WITH_SGIALDIGI */

/*---------------------------------------------------------------------------*/

/* Define to (void *)-1, if MAP_FAILED is not defined. */
/* TODO: rename this */
/* #undef MAP_FAILED */

/* Define as the return type of signal handlers (`int' or `void'). */
/* TODO: rename this */
#define RETSIGTYPE void

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/*---------------------------------------------------------------------------*/
/* vi:set ft=c: */
