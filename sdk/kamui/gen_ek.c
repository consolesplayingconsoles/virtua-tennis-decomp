/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmtex_TextureSize(int);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);

int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7)
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
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;

    if (((0xFF00 & a7) != 0x1000) && ((0xFF00 & a7) != 0x1100)) {
        *(unsigned int *)((a4 + 0x0)) = 0x2;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if (((0xFF00 & a7) != 0x500) && ((0xFF00 & a7) != 0x600)) {
        if (((0xFF00 & a7) != 0x700) && ((0xFF00 & a7) != 0x800)) {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            if ((unsigned char)a7 != 0) {
                if ((unsigned char)a7 != 1) {
                    if ((unsigned char)a7 != 2) {
                        if ((unsigned char)a7 != 3) {
                            t0 = 0x4;
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                t0 = 0x0;
                            }
                            t1 = t0;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                            t1 = 0x0;
                        }
                        t0 = t1;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                        t0 = 0x0;
                    }
                    t1 = t0;
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                    t1 = 0x0;
                }
                t0 = t1;
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t0 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t1 = t0;
    t2 = 0x0;
    if (a5 != 8) {
        t3 = t0;
        t4 = 0x8;
        if (a5 != 16) {
            t5 = t0;
            t6 = 0x10;
            if (a5 != 32) {
                t7 = t0;
                t8 = 0x18;
                if (a5 != 64) {
                    t9 = t0;
                    t10 = 0x20;
                    if (a5 != 0x80) {
                        t11 = t0;
                        t12 = 0x28;
                        if (a5 != 0x100) {
                            t13 = t0;
                            t14 = 0x30;
                            if (a5 != 0x200) {
                                t15 = t0;
                                t0 = 0x38;
                                if (a5 != 0x400) {
                                    t15 = 0x4;
                                    t0 = 0x0;
                                }
                                t13 = t15;
                                t14 = t0;
                            }
                            t11 = t13;
                            t12 = t14;
                        }
                        t9 = t11;
                        t10 = t12;
                    }
                    t7 = t9;
                    t8 = t10;
                }
                t5 = t7;
                t6 = t8;
            }
            t3 = t5;
            t4 = t6;
        }
        t1 = t3;
        t2 = t4;
    }
    t0 = t1;
    t3 = t2;
    if (a6 != 8) {
        t4 = t1;
        t5 = (t2 | 0x1);
        if (a6 != 16) {
            t6 = t1;
            t7 = (t2 | 0x2);
            if (a6 != 32) {
                t8 = t1;
                t9 = (t2 | 0x3);
                if (a6 != 64) {
                    t10 = t1;
                    t11 = (t2 | 0x4);
                    if (a6 != 0x80) {
                        t12 = t1;
                        t13 = (t2 | 0x5);
                        if (a6 != 0x100) {
                            t14 = t1;
                            t15 = (t2 | 0x6);
                            if (a6 != 0x200) {
                                t16 = t1;
                                t1 = (t2 | 0x7);
                                if (a6 != 0x400) {
                                    t16 = 0x4;
                                    t1 = t2;
                                }
                                t14 = t16;
                                t15 = t1;
                            }
                            t12 = t14;
                            t13 = t15;
                        }
                        t10 = t12;
                        t11 = t13;
                    }
                    t8 = t10;
                    t9 = t11;
                }
                t6 = t8;
                t7 = t9;
            }
            t4 = t6;
            t5 = t7;
        }
        t0 = t4;
        t3 = t5;
    }
    t1 = t0;
    if (((0xFF00 & a7) != 0x900) && (((0xFF00 & a7) != 0xB00) && (((0xFF00 & a7) != 0xD00) && (((0xFF00 & a7) != 0x500) && (((0xFF00 & a7) != 0x700) && (a5 != a6)))))) {
        t1 = 0x4;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x80000000);
    }
    if (((0xFF00 & a7) == 0xB00) || ((0xFF00 & a7) == 0x900)) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4000000);
    }
    if (((0xFF00 & a7) == 0x300) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1000) || ((0xFF00 & a7) == 0x1100)))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x40000000);
    }
    if ((0xFF00 & a7) == 0xB00) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x2000000);
    }
    if (((0xFF00 & a7) == 0x500) || (((0xFF00 & a7) == 0x600) || (((0xFF00 & a7) == 0x700) || ((0xFF00 & a7) == 0x800)))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x8000);
    }
    *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | t3);
    kmtex_TextureSize(a4);
    return t1;
}
