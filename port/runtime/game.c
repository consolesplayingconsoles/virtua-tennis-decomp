/* game.c: host versions of this game's console-only library functions that the other runtime files do not cover.
   Virtua Tennis has none: its C covers every library function it calls that the host could replace (kdGetDeviceInfo,
   syHwInit, syHwInit2, the sy cache, MMU, RTC and cable functions, the pd and vms ones), proven equivalent, and the old
   port ran that C, so nothing here overrides it. Only the interrupt entry below is the game's. A function defined here
   wins over the interpreter's wrapper (tools/10-port/native_build.py). The addresses come from game.h. */
#include <stdint.h>
#include "port.h"
#include "game.h"

uint32_t port_mmio_r32(uint32_t a);

#ifdef GAME_DEFAULT_HANDLER
/* Interrupts. The game's exception vector code (copied by syIntInit) is assembly with no C, and its table has only the default
   handler for the HOLLY interrupts: Kamui registers its handler with kmiRegisterPhIntHandler, and the vertical blank goes through the
   system's handler chain (syChainMasterHandler, event 0x900). port_game_irq does what that code does for those: Kamui's handler (which
   reads and clears SB_ISTNRM and services list ends, render end and DMA end), then the chain for a vertical blank. */
/* kmiRegisterPhIntHandler (no C) runs in the interpreter: it opens the SB_IML masks itself. The game registers one handler,
   kmiInterruptHandlerSH (game.h) */
static const uint32_t ph_handler = GAME_KAMUI_HANDLER;
int syChainMasterHandler(int event);
void port_game_irq(int evt)
{
    (void)evt;
    uint32_t pending = port_mmio_r32(0xA05F6900u);
    if (ph_handler) {
        const struct port_entry *e = port_lookup(0x8C000000u | (ph_handler & 0x00FFFFFFu));
        if (e)
            ((int (*)(int, int, int, int))e->fn)(0, 0, 0, 0);
    }
    if (pending & 8)                                   /* the vertical blank */
        syChainMasterHandler(0x900);
}
#endif
