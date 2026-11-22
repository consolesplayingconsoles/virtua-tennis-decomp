/* Straight-line functions with calls and guards (batch gen_vk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamGetParam(int a4, int a5, int a6, int a7);

int nlsndStreamGetParam(int a4, int a5, int a6, int a7)
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

    t0 = *(signed char *)((a4 + 0x9));
    t1 = *(int *)((a4 + 0xC));
    t2 = 0x1;
    if ((t0 & 0x3) != 0) {
        t3 = 0x2;
        if ((t0 & 0x3) != 1) {
            if ((t0 & 0x3) != 2) {
            } else {
                t0 = 0x4;
            }
            t3 = t0;
        }
        t2 = t3;
    }
    t0 = *(signed char *)((a4 + 0x8));
    t3 = 0x10;
    if (t0 != 0) {
        t4 = 0x8;
        if (t0 != 1) {
            t5 = 0x4;
            if ((t0 != 2) && (t0 != 3)) {
                t5 = a7;
            }
            t4 = t5;
        }
        t3 = t4;
    }
    if (a5 != 0) {
        t0 = t3;
        if (a5 != 1) {
            if (a5 != 2) {
                t4 = t1;
                if (a5 == 3) {
                } else {
                    t5 = t2;
                    if (a5 != 4) {
                        if (a5 != 5) {
                            if (a5 != 6) {
                                if (a5 != 7) {
                                    if (a5 != 8) {
                                        if (a5 != 9) {
                                            t6 = 0xFFFFFFFF;
                                            if (a5 == 10) {
                                                t6 = (unsigned char)(*(signed char *)(((a4 + 0x1E) + 0x0)));
                                            }
                                            t7 = t6;
                                        } else {
                                            t6 = 0x0;
                                            if ((unsigned char)(*(signed char *)((a4 + 0x1F))) != 0) {
                                            } else {
                                                t8 = *(short *)((a4 + 0x16));
                                                t9 = ((unsigned int)((unsigned int)((unsigned int)(unsigned short)t8 >> 2) >> 2) >> 2);
                                                if (((unsigned int)((unsigned int)((unsigned int)(unsigned short)t8 >> 2) >> 2) >> 2) == 0) {
                                                    t9 = 0x1;
                                                }
                                                t6 = t9;
                                            }
                                            t7 = t6;
                                        }
                                        t6 = t7;
                                    } else {
                                        t6 = ((int)((unsigned char)(*(signed char *)(((a4 + 0x33) + 0x0))) & 0xF0) >> 4);
                                    }
                                    t7 = t6;
                                } else {
                                    t7 = ((unsigned char)(*(signed char *)(((a4 + 0x33) + 0x0))) & 0xF);
                                }
                                t6 = t7;
                            } else {
                                t6 = (unsigned char)(*(signed char *)((((((short)a6 << 2) + a4) + 0x32) + 0x0)));
                            }
                            t7 = t6;
                        } else {
                            t7 = (unsigned char)(*(signed char *)((((((short)a6 << 2) + a4) + 0x31) + 0x0)));
                        }
                        t5 = t7;
                    }
                    t4 = t5;
                }
                t5 = t4;
            } else {
                t5 = ((int)((int)((int)((int)((t1 << 2) << 1) / (int)t3)) / (int)t2));
            }
            t0 = t5;
        }
        t1 = t0;
    } else {
        t1 = (unsigned short)(*(short *)(((a4 + 0x2A) + 0x0)));
    }
    return t1;
}
