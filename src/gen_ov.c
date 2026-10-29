/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuMeterInput(int a4, int a5, int a6, float f4, float f5, float f6, float f7);

int cpuMeterInput(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
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
    register float u0;
    register float u1;

    t0 = *(int *)0x8C291F78;
    t1 = t0;
    if ((t0 & 2) != 0) {
    } else {
        t0 = *(int *)0x8C20D19C;
        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t2 = (t0 & 0x1);
        }
        t0 = t2;
        if (t2 == 0) {
        } else {
            t2 = *(int *)((a4 + 0xB5C));
            if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
            } else {
                u0 = *(float *)0x8C23D204;
                if ((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x22))) == 0) {
                    u1 = *(float *)(((0x10 + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0));
                    t3 = *(int *)(((0xC58 + a4) + 0x0));
                    *(float *)(((0x10 + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0)) = (u1 - ((float)(unsigned char)(*(signed char *)(((0x8C10D380 + ((t3 << 2) + t3)) + 0x2))) * u0));
                    if (0.0f > (*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10)))) {
                        *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10)) = 0.0f;
                    }
                } else {
                    t3 = *(int *)((a4 + 0xC58));
                    t4 = *(signed char *)(((0x8C10D380 + ((t3 << 2) + t3)) + 0x0));
                    t3 = (int)((float)(unsigned char)t4 * u0);
                    if ((*(int *)0x8C287ADC) == 2) {
                        u1 = (float)(int)((float)(unsigned char)t4 * u0);
                        t3 = (int)(u1 * 0.5f);
                    }
                    t4 = t3;
                    if (((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x22))) & 0xC0) == 0) {
                        u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        t5 = (t3 + t3);
                        if (0.150000006f > u1) {
                        } else {
                            u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                            t6 = (u0 > 0.0f) - (0.0f > u0);
                            t7 = *(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x22));
                            t8 = ((t7 & 0xC0) - 96);
                            if ((int)((t7 & 0xC0) - 96) < 0) {
                                t8 = (((t7 & 0xC0) - 96) + 0x1F);
                            }
                            u0 = *(float *)((a4 + 0xB00));
                            t7 = t3;
                            if (t6 != (((-(u0 * (float)((int)t8 >> 5))) > 0.0f) - (0.0f > (-(u0 * (float)((int)t8 >> 5)))))) {
                                t7 = (((t3 << 2) << 1) - t3);
                            }
                            t5 = t7;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                    if (((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x22))) & 0x30) == 0) {
                        u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        t5 = (t4 + t4);
                        if (0.150000006f > u1) {
                        } else {
                            u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                            t6 = (u0 > 0.0f) - (0.0f > u0);
                            t7 = *(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x22));
                            t8 = ((t7 & 0x30) - 24);
                            if ((int)((t7 & 0x30) - 24) < 0) {
                                t8 = (((t7 & 0x30) - 24) + 0x7);
                            }
                            u0 = *(float *)((a4 + 0xB00));
                            t7 = t4;
                            if (t6 != (((-(u0 * (float)(((t8 >> 1) >> 1) >> 1))) > 0.0f) - (0.0f > (-(u0 * (float)(((t8 >> 1) >> 1) >> 1)))))) {
                                t7 = ((t4 << 2) << 1);
                            }
                            t5 = t7;
                        }
                        t3 = t5;
                    }
                    t4 = t3;
                    if ((*(int *)((a4 + 0xA24))) == 2) {
                    } else {
                        t5 = t3;
                        if ((int)t3 < 0) {
                            t5 = (t3 + 0x3);
                        }
                        t4 = ((t5 >> 1) >> 1);
                    }
                    u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10));
                    *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10)) = (u0 + (float)t4);
                    u0 = *(float *)0x8C03E234;
                    if ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10))) > u0) {
                        *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x10)) = u0;
                    }
                }
            }
            u0 = *(float *)(((0x14 + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0));
            *(float *)(((0x14 + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0)) = (u0 + (float)(((int)((int)(*(int *)0x8C20D19C) % (int)0xA)) - 5));
            u0 = *(float *)0x8C03E240;
            if ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x14))) > u0) {
                *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x14)) = u0;
            } else {
                if (0.0f > (*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x14)))) {
                    *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x14)) = 0.0f;
                }
            }
            t0 = 0x14;
        }
        t1 = t0;
    }
    return t1;
}
