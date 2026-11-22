/* game.h: the addresses of this game that the runtime needs. Each is a console address from this repo's functions.txt
   or globals.txt (the cached mirror, 0x8C......). port/README.md says how each one is found. */
#ifndef GAME_H
#define GAME_H

/* the start code: what runs before main (the entry, 0x8C010000 + the IP.BIN's bootstrap offset), and the three calls the
   runtime makes in its place (runner.c game_main) */
#define GAME_START      0x8C1DCC60u
#define GAME_INITSCT    0x8C1DCC98u   /* _INITSCT: the bss clear and the initial data copy */
#define GAME_INITLIBH   0x8C1DCC88u   /* _INITLIBH: the library modules' entries (ovMdlEntryTbl) */
#define GAME_MAIN       0x8C010080u   /* main */

/* the compiler runtime's errno, which the division helpers set on a division by 0 */
#define GAME_ERRNO      0x8C45A0E0u

/* interrupts (hw.c): the word the game's exception code copies INTEVT to */
#define GAME_INTEVT_COPY       0x8C1FCB08u

/* the NAOMI library's list pointers (nlib.c, platform.c's list report) */
#define GAME_NL_LIST_PTRS      0x8C42445Cu

/* widescreen: the game's main mode word, and the main mode whose 2D is the play HUD. With PORT_WIDESCREEN=1 the HUD's
   pieces at the top and bottom go to the screen's sides (draw.c mark_hud); left undefined, the HUD stays in the 4:3
   middle. Crazy Taxi's: its MainLoop mode 0x8C1EE234 (0 attract, 1 the game, 3 menu), HUD mode 1 */
/* #define GAME_MAIN_MODE         0x00000000u */
/* #define GAME_HUD_MODE          1 */

#endif
