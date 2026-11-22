/* Straight-line functions with calls and guards (batch gen_vn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memcmp(int, int, int);
int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);

int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
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

    if ((int)a5 > 0) {
        t3 = 0x0;
        for (;;) {
            t4 = memcmp((t3 + a4), (*(int *)0x8C20CCC4), 0x4);
            if (t4 != 0) {
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)a5) {
                    break;
                }
                continue;
            }
            break;
        }
        t4 = t3;
    } else {
        t4 = 0x0;
    }
    t3 = 0xFFFFFFFF;
    if (t4 != a5) {
        t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x3);
        }
        t6 = 0xFFFFFFFF;
        if (t5 == 0) {
            t5 = 0xFFFFFFFF;
            if ((int)(unsigned short)(*(short *)((((t4 + 0x8) + a4) + 0x0))) <= (int)0x1) {
                if ((int)a5 > 0) {
                    t7 = 0x0;
                    for (;;) {
                        t8 = memcmp((t7 + a4), (*(int *)0x8C20CCCC), 0x4);
                        if (t8 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)a5) {
                                break;
                            }
                            continue;
                        }
                        break;
                    }
                    t8 = t7;
                } else {
                    t8 = 0x0;
                }
                t7 = 0xFFFFFFFF;
                if (t8 != a5) {
                    t9 = *(signed char *)((((t8 + 0x4) + a4) + 0x1));
                    t10 = *(signed char *)((((t8 + 0x4) + a4) + 0x0));
                    t11 = *(signed char *)((((t8 + 0x4) + a4) + 0x2));
                    t12 = *(signed char *)((((t8 + 0x4) + a4) + 0x3));
                    *(unsigned short *)((a6 + 0x0)) = (t8 + 0x8);
                    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x1))) << 8) | ((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x2))) << 16)) | (((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x0))));
                    *(unsigned char *)((a10 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0x2)));
                    *(unsigned char *)((a8 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xE)));
                    *(unsigned char *)((a9 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xC)));
                    *(unsigned int *)((a12 + 0x0)) = ((int)((int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) / (int)(*(signed char *)((a9 + 0x0)))));
                    *(unsigned int *)((a13 + 0x0)) = 0x1;
                    t4 = *(signed char *)((a8 + 0x0));
                    if (t4 == 16) {
                        *(unsigned short *)((a14 + 0x0)) = 0x0;
                    } else {
                        if (t4 == 8) {
                            *(unsigned short *)((a14 + 0x0)) = 0x1;
                        } else {
                            if ((*(signed char *)((a8 + 0x0))) == 4) {
                                *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
                                *(unsigned int *)((a13 + 0x0)) = 0x4;
                                *(unsigned int *)((a12 + 0x0)) = ((int)((unsigned int)((unsigned int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) >> 1) / (unsigned int)(*(signed char *)((a10 + 0x0)))));
                                *(unsigned char *)((a8 + 0x0)) = 0x10;
                                *(unsigned short *)((a14 + 0x0)) = 0x2;
                            }
                        }
                    }
                    t4 = 0xFFFFFFFF;
                    if (((*(signed char *)((a8 + 0x0))) != 0) && ((t0 = *(signed char *)((a9 + 0x0)), t0 != 0) && ((t1 = *(signed char *)((a10 + 0x0)), (int)t1 > 0) && (((int)t1 <= (int)0x2) && (t2 = *(int *)((a11 + 0x0)), t2 != 0))))) {
                        t4 = 0x0;
                    }
                    t7 = t4;
                }
                t5 = t7;
            }
            t6 = t5;
        }
        t3 = t6;
    }
    return t3;
}
