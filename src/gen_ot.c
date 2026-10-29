/* Straight-line functions with calls and guards (batch gen_ot): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int motionBackup(int);
int motionChange(int, int, int, int, int, float);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int staffMorphReset(void);
int ballBoyRecall(int a4);

int ballBoyRecall(int a4)
{
    int t0;
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float u12;
    int t22;
    int t24;
    int t27;
    int t28;
    float u42;
    float u47;
    float u56;
    float u57;
    int t64;
    int t66;
    int t78;
    int t74;
    int t75;
    int t52;
    int t44;
    int t49;
    int stk[15];

    *(unsigned int *)(((int)stk + 20)) = a4;
    t0 = *(int *)0x8C1891E8;
    if ((int)t0 > (int)0x9) {
    } else {
        t2 = t0;
        if (t0 == 2) {
            t2 = (staffMorphReset());
        }
        *(unsigned int *)(((int)stk + 16)) = 0x8C2873D4;
        *(unsigned int *)(((int)stk + 12)) = 0x8C38B76C;
        t7 = t2;
        t8 = 0x8C38B76C;
        t9 = 0x8C2873D4;
        t10 = 0x0;
        for (;;) {
            if ((int)t10 < (int)0x2) {
                t7 = 0x5FC;
                t8 = 0x8C014C34;
                t9 = (t10 * 0x67C);
                t9 = (t9 + 0x8C37EA84);
                *(unsigned int *)(((int)stk + 8)) = t9;
                *(float *)((t9 + t7)) = 0.0f;
                t7 = 0x4;
                t9 = 0x5E4;
                t11 = *(int *)(((int)stk + 8));
                u12 = *(float *)(((t11 + t9) + t7));
                t7 = 0x10;
                *(float *)(((t11 + t9) + t7)) = u12;
                t7 = (motionBackup(((*(int *)(((int)stk + 8))) + 0x4)));
                t7 = 0x5DC;
                t9 = (*(int *)(((int)stk + 8)));
                t8 = (*(int *)((t9 + t7)));
                if (t8 == 0) {
                    t74 = t8;
                    t75 = t9;
                } else {
                    t9 = (t10 * 0x67C);
                    t9 = (t9 + 0x8C37EA84);
                    t8 = (*(int *)((t9 + t7)));
                    if ((int)t8 >= (int)0x4) {
                        t8 = 0x5B0;
                        t9 = 0x8C0F7DAC;
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 12);
                        t8 = (t8 + ((t10 * 0x67C) + 0x8C37EA84));
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x5A4 + ((t10 * 0x67C) + 0x8C37EA84))) = *(struct mv3 *)(t8); }
                        t7 = 0x5A4;
                        if (0.0f > (*(float *)((((t10 * 0x67C) + 0x8C37EA84) + t7)))) {
                            t7 = 0x5BC;
                            t8 = (t10 * 0x67C);
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0x4000;
                        } else {
                            t8 = (t10 * 0x67C);
                            t7 = 0x5BC;
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0xFFFFC000;
                        }
                        t9 = (*(int *)(((int)stk + 16)));
                        t8 = (*(int *)((t9 + 0x0)));
                        t22 = t8;
                        *(int *)((int)stk + 4) = t22;
                        t24 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x67C) + 0x8C37EA84);
                        t7 = (motionChange((((t10 * 0x67C) + 0x8C37EA84) + 0x4), t24, 0x0, 0x0, t22, 0.0f));
                        t7 = 0x5D4;
                        t8 = 0x0;
                        t9 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t9 + t7)) = t8;
                    } else {
                        t9 = 0x8C38B780;
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 12);
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 20);
                        t27 = *(short *)((((t10 * 0x67C) + 0x8C37EA84) + t7));
                        t28 = *(int *)((t9 + 0x0));
                        if (((int)(unsigned short)t27 > (int)0x8000) && ((int)(unsigned short)t27 < (int)0xFFFF)) {
                            t7 = 0x8C0C8400;
                            t9 = (*(int *)(((int)stk + 20)));
                            u42 = *(float *)((t7 + 0x0));
                            t7 = 0xC;
                            if (!((*(float *)((t9 + t7))) > u42)) {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t44 = (-t28);
                            } else {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t44 = t28;
                            }
                            t52 = t44;
                        } else {
                            t7 = 0x8C0C8404;
                            t9 = (*(int *)(((int)stk + 20)));
                            u47 = *(float *)((t7 + 0x0));
                            t7 = 0xC;
                            if (u47 > (*(float *)((t9 + t7)))) {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t49 = (-t28);
                            } else {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t49 = t28;
                            }
                            t52 = t49;
                        }
                        t7 = 0x5A4;
                        *(float *)((t8 + t7)) = (float)t52;
                        if (t10 == 0) {
                            t7 = 0x8C0C8408;
                            u56 = *(float *)((t7 + 0x0));
                            t7 = 0x5AC;
                            t9 = (t10 * 0x67C);
                            t9 = (t9 + 0x8C37EA84);
                            *(float *)((t9 + t7)) = u56;
                        } else {
                            t7 = 0x8C0C84A4;
                            u57 = *(float *)((t7 + 0x0));
                            t7 = 0x5AC;
                            t9 = (t10 * 0x67C);
                            t9 = (t9 + 0x8C37EA84);
                            *(float *)((t9 + t7)) = u57;
                        }
                        t7 = 0x5A4;
                        t9 = (t10 * 0x67C);
                        t9 = (t9 + 0x8C37EA84);
                        if (0.0f > (*(float *)((t9 + t7)))) {
                            t7 = 0x5BC;
                            t8 = (t10 * 0x67C);
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0x4000;
                        } else {
                            t8 = (t10 * 0x67C);
                            t7 = 0x5BC;
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0xFFFFC000;
                        }
                        t9 = (*(int *)(((int)stk + 16)));
                        t8 = (*(int *)((t9 + 0x0)));
                        t64 = t8;
                        *(int *)((int)stk + 4) = t64;
                        t66 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x67C) + 0x8C37EA84);
                        t7 = (motionChange((((t10 * 0x67C) + 0x8C37EA84) + 0x4), t66, 0x0, 0x0, t64, 0.0f));
                        t7 = 0x5D4;
                        t8 = 0x0;
                        t9 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t9 + t7)) = t8;
                    }
                    t9 = 0x8C015B7E;
                    t7 = (motionSetFrame(((*(int *)(((int)stk + 8))) + 0x4), 0.0f));
                    t9 = 0x8C015B72;
                    t7 = (motionSetSpeed(((*(int *)(((int)stk + 8))) + 0x4), 0.0f));
                }
                t10 = (t10 + 0x1);
                t8 = t74;
                t9 = t75;
                continue;
            }
            break;
        }
        t78 = t7;
    }
    return t78;
}
