/* Straight-line functions with calls and guards (batch gen_qf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int btnGuideDraw(int a4, int a5, Stk3 s, float f4);

int btnGuideDraw(int a4, int a5, Stk3 s, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u0;
    int stk[24];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    *(float *)(((((int)stk + 16) + 0x24) + 0x8)) = 0.100000001f;
    if ((a4 != 0) && ((a4 != 1) && (a4 != 2))) {
        if (a4 != 4) {
            if (a4 != 3) {
                if (a4 == 5) {
                    if (a5 == 1) {
                        t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                    } else {
                        t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    t1 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0);
                } else {
                    if (a4 == 6) {
                        if (a5 == 1) {
                            t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                        } else {
                            t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                        t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0);
                    } else {
                        if (a4 == 7) {
                            if (a5 == 1) {
                                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                            } else {
                                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                            t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            t3 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0);
                        } else {
                            if (a4 == 8) {
                                if (a5 == 1) {
                                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t4 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B0D0);
                            } else {
                                if (a5 == 1) {
                                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t4 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490);
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                }
                sprPutAtAlpha(t1, *(Stk3 *)(((int)stk + 4)), f4);
            } else {
                if (a5 == 1) {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x8000;
                } else {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x0;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490), *(Stk3 *)(((int)stk + 4)), f4);
                if (a5 == 1) {
                    u0 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                } else {
                    u0 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                }
                *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = u0;
            }
        } else {
            if ((*(int *)0x8C287D5C) == 2) {
            } else {
                if (a5 == 1) {
                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                } else {
                    t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490), *(Stk3 *)(((int)stk + 4)), f4);
            }
        }
    } else {
        if (a5 == 1) {
            t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
        } else {
            t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
        t0 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
        sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B490), *(Stk3 *)(((int)stk + 4)), f4);
    }
    if (a5 == 1) {
        u0 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 45.0f);
    } else {
        u0 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) - 47.0f);
    }
    *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = u0;
    t0 = a4;
    if (((*(int *)0x8C287D5C) == 2) && (a4 == 4)) {
    } else {
        if ((int)a4 < (int)0x5) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t1 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t2 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C33B490);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t1 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t2 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C33B0D0);
        }
        t0 = (sprPutAtAlpha(t2, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t0;
}
