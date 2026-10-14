/* Ported by hand from crazy-taxi-decomp (src/sg_gd.c): port_equiv.py does not find it (the literal pool in the middle of
   the function differs between the games). Only the functions this game does not have yet. */
/* Shinobi library, SG_GD (the GD-ROM file system): our own C, written from the disassembly. */

typedef struct {
    int f0;
    int f4;
    int f8;
    int f12;
    int blocks;     /* 16 */
    int f20, f24, f28, f32, f36;
    int f40;        /* untouched */
    int f44;
    int f48;        /* untouched */
    int f52;
    int f56;        /* untouched */
    int f60;
    int f64;
    int f68;
    short s72;
    short s74;
    short active;   /* 76 */
    short s78;
    short state;    /* 80 */
    short s82;
} GdHandle;

extern short gGdFsDefaultTag;

GdHandle *gdFsCreateHnG(GdHandle *h, int a, int b, int size)
{
    if (h->active != 0)
        return 0;
    h->f4 = a;
    h->f8 = b;
    h->f12 = size;
    h->blocks = (size + 2047) >> 11;
    h->f20 = 0;
    h->f24 = 0;
    h->f28 = 0;
    h->f32 = 0;
    h->f36 = 0;
    h->f44 = 0;
    h->f52 = 0;
    h->f60 = 0;
    h->f64 = 0;
    h->f68 = 0;
    h->s72 = 0;
    h->s74 = 0;
    h->active = 1;
    h->s78 = gGdFsDefaultTag;
    h->state = 0;
    h->s82 = 0;
    return h;
}
