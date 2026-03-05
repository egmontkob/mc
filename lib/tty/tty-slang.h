
#ifndef MC__TTY_SLANG_H
#define MC__TTY_SLANG_H

#include <slang.h>

/*** typedefs(not structures) and defined constants **********************************************/

#define MCKEY_F(x)      SL_KEY_F (x)  // for representing F1-F10
#define MCKEY_BACKSPACE SL_KEY_BACKSPACE
#define MCKEY_UP        SL_KEY_UP
#define MCKEY_DOWN      SL_KEY_DOWN
#define MCKEY_LEFT      SL_KEY_LEFT
#define MCKEY_RIGHT     SL_KEY_RIGHT
#define MCKEY_INS       SL_KEY_IC
#define MCKEY_DEL       SL_KEY_DELETE
#define MCKEY_HOME      SL_KEY_HOME
#define MCKEY_END       SL_KEY_END
#define MCKEY_PGUP      SL_KEY_PPAGE
#define MCKEY_PGDN      SL_KEY_NPAGE
#define MCKEY_ENTER     SL_KEY_ENTER  // ?
#define MCKEY_KP_MIDDLE SL_KEY_B2

#define COLS           SLtt_Screen_Cols
#define LINES          SLtt_Screen_Rows

#define ENABLE_SHADOWS 1

/*** enums ***************************************************************************************/

/*** structures declarations (and typedefs of structures)*****************************************/

/*** global variables defined in .c file *********************************************************/

/*** declarations of public functions ************************************************************/

/*** inline functions ****************************************************************************/

#endif
