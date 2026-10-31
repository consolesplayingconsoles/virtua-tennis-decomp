/* Straight-line functions with calls and guards (batch gen_qq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gNlCommonTextureOffset[];
extern char gNlPaletteCount[];
extern char gNlPaletteTable[];

int nlFreePalette(int, int, int, int);
int nlSearchPalette(int, int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSpriteChangePalette(int a4, int a5, int a6, int a7);

int nlSpriteChangePalette(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = *(short *)((((a4 + (*(int *)(int)gNlCommonTextureOffset)) << 1) + (*(int *)0x8C454C80)));
    t1 = *(int *)0x8C454C90;
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
    if ((*(int *)0x8C1DC888) != 0) {
        if (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6)) {
            t3 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
            *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = ((t3 & 0xF81FFFFF) | (a5 << 21));
            t4 = (0x3F & ((unsigned int)t3 >> 21));
        }
        t3 = t4;
    } else {
        if (((*(int *)0x8C450BF8) != 0) && (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6))) {
            t2 = *(short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16));
            nlFreePalette((unsigned short)t2, a5, a6, a7);
            *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = 0xFFFF;
            if ((int)a5 < (int)(*(short *)(int)gNlPaletteCount)) {
                *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = a5;
                t4 = *(int *)(int)gNlPaletteTable;
                t5 = *(int *)0x8C450BF8;
                if ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) != 0) {
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) + 0x1);
                    t6 = (*(short *)(((t4 + ((a5 << 2) << 1)) + 0x0)));
                } else {
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x2)) = (*(signed char *)((((((a5 << 1) + a5) << 2) + t5) + 0x2)));
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x3)) = ((int)((*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = 0x1;
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x6)) = a5;
                    t7 = *(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8));
                    t8 = nlSearchPalette((*(short *)((((((a5 << 1) + a5) << 2) + t5) + 0x2))), t7);
                    t9 = 0x0;
                    if ((int)t8 >= 0) {
                        *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x0)) = t8;
                        nlSetPaletteMap(t8, t7);
                        nlSetPaletteData(((t8 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x4))), t7);
                        t9 = t8;
                    }
                    t6 = t9;
                }
                *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = (((*(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC))) & 0xF81FFFFF) | (t6 << 21));
            }
            t0 = (unsigned short)t2;
        }
        t3 = t0;
    }
    return t3;
}
