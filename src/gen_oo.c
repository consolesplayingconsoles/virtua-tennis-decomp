/* Straight-line functions with calls and guards (batch gen_oo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int hudFont2DigitPut(int a4, Stk3 s, float f4);

int hudFont2DigitPut(int a4, Stk3 s, float f4)
{
    int t9;
    int t67;
    int t61;
    int t53;
    int t43;
    int t37;
    int t25;
    int t21;
    int t17;
    int t13;
    int stk[24];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    if (a4 != 2) {
        if (a4 != 0) {
            if (a4 != 1) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 == 5) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            sprPutAtAlpha(0x8C33EBE0, *(Stk3 *)(((int)stk + 16)), f4);
                            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 68.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            sprPutAtAlpha(0x8C33EC30, *(Stk3 *)(((int)stk + 4)), f4);
                            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 59.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            t25 = (sprPutAtAlpha(0x8C33EC80, *(Stk3 *)(((int)stk + 16)), f4));
                        } else {
                            if (a4 == 6) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                t21 = (sprPutAtAlpha(0x8C33EAA0, *(Stk3 *)(((int)stk + 16)), f4));
                            } else {
                                if (a4 == 7) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                    t17 = (sprPutAtAlpha(0x8C33EB40, *(Stk3 *)(((int)stk + 16)), f4));
                                } else {
                                    if (a4 == 8) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                        t13 = (sprPutAtAlpha(0x8C33EAF0, *(Stk3 *)(((int)stk + 16)), f4));
                                    } else {
                                        t9 = a4;
                                        if (a4 == 9) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                            t9 = (sprPutAtAlpha(0x8C33EB90, *(Stk3 *)(((int)stk + 16)), f4));
                                        }
                                        t13 = t9;
                                    }
                                    t17 = t13;
                                }
                                t21 = t17;
                            }
                            t25 = t21;
                        }
                        t37 = t25;
                    } else {
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 83.0f);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 6.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        sprPutAtAlpha(0x8C33EF50, *(Stk3 *)(((int)stk + 16)), f4);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - 44.0f);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 19.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        sprPutAtAlpha(0x8C33EFA0, *(Stk3 *)(((int)stk + 4)), f4);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 92.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        t37 = (sprPutAtAlpha(0x8C33EFF0, *(Stk3 *)(((int)stk + 16)), f4));
                    }
                    t43 = t37;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    t43 = (sprPutAtAlpha(0x8C33E820, *(Stk3 *)(((int)stk + 16)), f4));
                }
                t53 = t43;
            } else {
                *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) - 7.0f);
                *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 5.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                sprPutAtAlpha(0x8C33E8C0, *(Stk3 *)(((int)stk + 16)), f4);
                *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 19.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                t53 = (sprPutAtAlpha(0x8C33E910, *(Stk3 *)(((int)stk + 16)), f4));
            }
            t61 = t53;
        } else {
            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - (1.0f + 1.0f));
            *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + (1.0f + 1.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
            t61 = (sprPutAtAlpha(0x8C33E960, *(Stk3 *)(((int)stk + 16)), f4));
        }
        t67 = t61;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
        t67 = (sprPutAtAlpha(0x8C33E870, *(Stk3 *)(((int)stk + 16)), f4));
    }
    return t67;
}
