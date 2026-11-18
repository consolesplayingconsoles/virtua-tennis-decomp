/* port.h: what the native runtime's x86-64 C shares (port/runtime/). The game's own C never includes it. */
#ifndef PORT_H
#define PORT_H

#include <stdint.h>

/* the dispatch table, console address -> host function (build/native/gen.c, sorted by address) */
struct port_entry {
    uint32_t addr;
    void *fn;
    const char *name;
};
extern const struct port_entry port_table[];
extern const unsigned port_table_size;

/* the host function at console address addr, or 0 */
const struct port_entry *port_lookup(uint32_t addr);
/* the entry whose function holds console address addr (the nearest at or below it), or 0 */
const struct port_entry *port_nearest(uint32_t addr);

/* a function the port has no C for yet: reports it (once per name, with a count at exit) and lets the caller go on */
void port_unimplemented(const char *name, uint32_t addr);

/* registers the game reads through inline assembly (port/tools/native_build.py ASM_BODIES) */
extern int port_sr, port_fr15;
/* interrupts masked: the status register's BL bit, or an interrupt mask of 15 */
static inline int port_masked(void) { return (port_sr & 0x10000000) || ((port_sr >> 4) & 15) == 15; }

/* the console's memory, as the game sees it (port/runtime/runner.c) */
#define PORT_RAM 0x0C000000u
#define PORT_RAM_SIZE 0x01000000u
#define PORT_IMAGE_BASE 0x8C010000u

#endif
