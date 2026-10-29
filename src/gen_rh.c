/* Straight-line functions with calls and guards (batch gen_rh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_GetStat(int);
int ADXB_ExecOneAu16(int a4, int a5, int a6, int a7);

int ADXB_ExecOneAu16(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;

    t0 = *(int *)(((a4 + 0x50) + 0x0));
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x18));
            t3 = *(int *)(((a4 + 0x50) + 0x20));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t2 - t3);
            if ((int)(t2 - t3) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x1C));
                t6 = *(int *)(((a4 + 0x50) + 0x20));
                t7 = 0x0;
                if ((int)t3 > 0) {
                    t8 = 0x0;
                    t9 = 0x0;
                    t10 = 0x0;
                    for (;;) {
                        t11 = *(short *)((t0 + (t9 << 1)));
                        t10 = (t10 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t8)) = (((unsigned short)t11 << 8) | ((int)(unsigned short)t11 >> 8));
                        t11 = *(short *)((t0 + ((t9 + 0x1) << 1)));
                        t12 = t8;
                        t8 = (t8 + 0x2);
                        *(unsigned short *)(((((t5 + t6) << 1) + t2) + t12)) = (((unsigned short)t11 << 8) | ((int)(unsigned short)t11 >> 8));
                        t9 = (t9 + 0x2);
                        if ((int)t10 >= (int)t3) {
                            break;
                        }
                    }
                    t7 = t10;
                }
                t5 = t7;
            } else {
                if ((int)t3 > 0) {
                    t6 = 0x0;
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(short *)((t0 + t6));
                        t7 = (t7 + 0x1);
                        *(unsigned short *)((((t4 << 1) + t2) + t6)) = (((unsigned short)t8 << 8) | ((int)(unsigned short)t8 >> 8));
                        t6 = (t6 + 0x2);
                        if ((int)t7 >= (int)t3) {
                            break;
                        }
                    }
                    t0 = (unsigned short)t8;
                }
                t5 = t0;
            }
            *(unsigned int *)((a4 + 0xA0)) = t3;
            *(unsigned int *)((a4 + 0xA4)) = ((t3 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = t5;
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}
