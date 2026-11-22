/* Straight-line functions with calls and guards (batch gen_wa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmyAllocateArea(int, int, int);
int nlkmCreateTextureSurface_stride(int a4, int a5, int a6);

int nlkmCreateTextureSurface_stride(int a4, int a5, int a6)
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
    register int t17;

    t0 = 0x8;
    t1 = 0x0;
    if ((int)a5 <= (int)0x8) {
    } else {
        t2 = 0x10;
        t3 = 0x8;
        if ((int)a5 <= (int)0x10) {
        } else {
            t4 = 0x20;
            t5 = 0x10;
            if ((int)a5 <= (int)0x20) {
            } else {
                t6 = 0x40;
                t7 = 0x18;
                if ((int)a5 <= (int)0x40) {
                } else {
                    t8 = 0x80;
                    t9 = 0x20;
                    if ((int)a5 <= (int)0x80) {
                    } else {
                        t10 = 0x100;
                        t11 = 0x28;
                        if ((int)a5 <= (int)0x100) {
                        } else {
                            t12 = 0x200;
                            t13 = 0x30;
                            if ((int)a5 <= (int)0x200) {
                            } else {
                                t14 = a4;
                                t15 = a5;
                                if ((int)a5 <= (int)0x400) {
                                    t14 = 0x400;
                                    t15 = 0x38;
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
            t2 = t4;
            t3 = t5;
        }
        t0 = t2;
        t1 = t3;
    }
    t2 = 0x8;
    t3 = 0x0;
    if ((int)a6 <= (int)0x8) {
    } else {
        t4 = 0x10;
        t5 = 0x1;
        if ((int)a6 <= (int)0x10) {
        } else {
            t6 = 0x20;
            t7 = 0x2;
            if ((int)a6 <= (int)0x20) {
            } else {
                t8 = 0x40;
                t9 = 0x3;
                if ((int)a6 <= (int)0x40) {
                } else {
                    t10 = 0x80;
                    t11 = 0x4;
                    if ((int)a6 <= (int)0x80) {
                    } else {
                        t12 = 0x100;
                        t13 = 0x5;
                        if ((int)a6 <= (int)0x100) {
                        } else {
                            t14 = 0x200;
                            t15 = 0x6;
                            if ((int)a6 <= (int)0x200) {
                            } else {
                                t16 = a6;
                                t17 = 0x8;
                                if ((int)a6 <= (int)0x400) {
                                    t16 = 0x400;
                                    t17 = 0x7;
                                }
                                t14 = t16;
                                t15 = t17;
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
        t2 = t4;
        t3 = t5;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)0x8C44FBE8) << 27);
    *(unsigned int *)((a4 + 0xC)) = t0;
    *(unsigned int *)((a4 + 0x10)) = t2;
    *(unsigned int *)((a4 + 0x18)) = (((((*(int *)((a4 + 0x18))) | t1) | t3) | 0x4000000) | 0x2000000);
    *(unsigned int *)((a4 + 0x14)) = ((a5 * a6) << 1);
    return (kmyAllocateArea(0x1, ((a5 * a6) << 1), (a4 + 0x1C)));
}
