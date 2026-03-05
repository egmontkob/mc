
#ifndef MC__TTY_NCURSES_H
#define MC__TTY_NCURSES_H

/* for cchar_t, getcchar(), setcchar() */
#ifndef _XOPEN_SOURCE_EXTENDED
#define _XOPEN_SOURCE_EXTENDED
#endif

#ifdef HAVE_NCURSESW_NCURSES_H
#include <ncursesw/ncurses.h>
#elif defined(HAVE_NCURSESW_CURSES_H)
#include <ncursesw/curses.h>
#elif defined(HAVE_NCURSES_NCURSES_H)
#include <ncurses/ncurses.h>
#elif defined(HAVE_NCURSES_CURSES_H)
#include <ncurses/curses.h>
#elif defined(HAVE_NCURSES_H)
#include <ncurses.h>
#else
#include <curses.h>
#endif

/* netbsd-libcurses doesn't define NCURSES_CONST */
#ifndef NCURSES_CONST
#define NCURSES_CONST const
#endif

/* do not draw shadows if NCurses is built with --disable-widec */
#ifdef HAVE_NCURSES_WIDECHAR
#define ENABLE_SHADOWS 1
#endif

/*** typedefs(not structures) and defined constants **********************************************/

#define MCKEY_F(n)      KEY_F (n)
#define MCKEY_BACKSPACE KEY_BACKSPACE
#define MCKEY_UP        KEY_UP
#define MCKEY_DOWN      KEY_DOWN
#define MCKEY_LEFT      KEY_LEFT
#define MCKEY_RIGHT     KEY_RIGHT
#define MCKEY_INS       KEY_IC
#define MCKEY_DEL       KEY_DC
#define MCKEY_HOME      KEY_HOME
#define MCKEY_END       KEY_END
#define MCKEY_PGUP      KEY_PPAGE
#define MCKEY_PGDN      KEY_NPAGE
#define MCKEY_KP_MIDDLE KEY_B2

#ifdef KEY_RESIZE
#define MCKEY_RESIZE KEY_RESIZE
#endif

/*** enums ***************************************************************************************/

/*** structures declarations (and typedefs of structures)*****************************************/

/*** global variables defined in .c file *********************************************************/

extern gboolean ncurses_koi8r_double_line_bug;

/*** declarations of public functions ************************************************************/

/*** inline functions ****************************************************************************/

#endif
