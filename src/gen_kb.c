/* Straight-line functions with calls and guards (batch gen_kb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int decoWaveDraw(int, Stk3);
extern int sprPutAt();
void windowFrameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

void windowFrameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t47;
    int t51;
    int t52;
    int t23;
    int t17;
    int t18;
    int t20;
    int t38;
    int t32;
    int t33;
    int t35;
    int t40;
    int t43;
    int t55;
    int t58;
    int t60;
    int t62;
    int t64;
    int t65;
    int t79;
    int t92;
    int t96;
    int t98;
    int t100;
    int t102;
    int t116;
    int t134;
    int t136;
    int t138;
    int t140;
    int t142;
    int t156;
    int t174;
    int t176;
    int t178;
    int t180;
    int t182;
    int t185;
    int t192;
    int t194;
    int t196;
    int t198;
    int t200;
    int t215;
    int t232;
    int t234;
    int t236;
    int t238;
    int t240;
    int t255;
    int t272;
    int t274;
    int t276;
    int t278;
    int t280;
    int t295;
    int t312;
    int t314;
    int t316;
    int t318;
    int t320;
    int t335;
    int t352;
    int t454;
    int t456;
    int t458;
    int t460;
    int t474;
    int t492;
    int t11;
    int t26;
    int t70;
    int t84;
    int t107;
    int t121;
    int t147;
    int t161;
    float u229;
    int t205;
    int t220;
    float u269;
    int t245;
    int t260;
    float u309;
    int t285;
    int t300;
    float u349;
    int t325;
    int t340;
    int t465;
    int t479;
    int stk[41];
    int R1040;
    int R1044;

    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    R1044 = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x8)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x14)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) - 18.0f);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
    *(float *)(((((int)stk + 40) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x0))) + 28.0f);
    *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) - 16.0f);
    t47 = 0x0;
    t51 = a5;
    t52 = a7;
    if ((int)a6 < (int)0x4) {
        t23 = 0x0;
        if (((*(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x4))) == 0) && (t11 = *(int *)0x8C1852C0, t11 == 1)) {
            t17 = *(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x0));
            t18 = 0x0;
            if ((*(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x0))) == 0) {
                t18 = 0x1;
            }
            t20 = t18;
            if (t17 == 7) {
                t20 = 0x2;
            }
            t23 = t20;
        }
        t38 = t23;
        if (((*(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x4))) == 1) && (t26 = *(int *)0x8C1852E4, t26 == 1)) {
            t32 = *(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x0));
            t33 = t23;
            if ((*(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x0))) == 0) {
                t33 = 0x1;
            }
            t35 = t33;
            if (t32 == 7) {
                t35 = 0x2;
            }
            t38 = t35;
        }
        t40 = *(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x4));
        t43 = t38;
        if ((*(int *)((((*(int *)(((((a6 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2) + (((((t40 << 2) << 1) + t40) << 2) + 0x8C1853C0)))) == 3) {
            t43 = 0x0;
        }
        t47 = t43;
        t51 = 0x1;
        t52 = 0x2;
    }
    t55 = t47;
    if ((*(int *)0x8C287D5C) == 2) {
        t55 = 0x0;
    }
    R1040 = 0x8C33C570;
    if (a4 != 0) {
        if (a4 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
            t58 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0xF0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
            *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
            t60 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C6B0, *(Stk3 *)(((int)stk + 16)));
            *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
            t62 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C700, *(Stk3 *)(((int)stk + 4)));
            if ((R1044) != 0) {
                *(unsigned int *)0x8C33CA98 = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                t64 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CC50, *(Stk3 *)(((int)stk + 28)));
                if (t55 == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t65 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA70, *(Stk3 *)(((int)stk + 28)));
                } else {
                    if (t55 == 1) {
                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t70 = 0x0;
                    } else {
                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t70 = 0x1;
                    }
                    decoWaveDraw(t70, *(Stk3 *)(((int)stk + 28)));
                }
            } else {
                *(unsigned int *)0x8C33CA98 = 0x8000;
                if (t55 == 0) {
                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t79 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA70, *(Stk3 *)(((int)stk + 28)));
                } else {
                    if (t55 == 1) {
                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t84 = 0x0;
                    } else {
                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t84 = 0x1;
                    }
                    decoWaveDraw(t84, *(Stk3 *)(((int)stk + 28)));
                }
                *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                t92 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CC50, *(Stk3 *)(((int)stk + 28)));
            }
        } else {
            if (a4 == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                t96 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0x2D0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                t98 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C890, *(Stk3 *)(((int)stk + 16)));
                *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                t100 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C8E0, *(Stk3 *)(((int)stk + 4)));
                if ((R1044) != 0) {
                    *(unsigned int *)0x8C33CB38 = 0x0;
                    if (t55 == 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t102 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB10, *(Stk3 *)(((int)stk + 28)));
                    } else {
                        if (t55 == 1) {
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t107 = 0x0;
                        } else {
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t107 = 0x1;
                        }
                        decoWaveDraw(t107, *(Stk3 *)(((int)stk + 28)));
                    }
                } else {
                    *(unsigned int *)0x8C33CB38 = 0x8000;
                    if (t55 == 0) {
                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                        t116 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB10, *(Stk3 *)(((int)stk + 28)));
                    } else {
                        if (t55 == 1) {
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 3.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t121 = 0x0;
                        } else {
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t121 = 0x1;
                        }
                        decoWaveDraw(t121, *(Stk3 *)(((int)stk + 28)));
                    }
                    *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                t134 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CCA0, *(Stk3 *)(((int)stk + 28)));
            } else {
                if (a4 == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                    t136 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0x3C0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                    *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                    t138 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C980, *(Stk3 *)(((int)stk + 16)));
                    *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                    t140 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C9D0, *(Stk3 *)(((int)stk + 4)));
                    if ((R1044) != 0) {
                        *(unsigned int *)0x8C33CB88 = 0x0;
                        if (t55 == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t142 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB60, *(Stk3 *)(((int)stk + 28)));
                        } else {
                            if (t55 == 1) {
                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                t147 = 0x0;
                            } else {
                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                t147 = 0x1;
                            }
                            decoWaveDraw(t147, *(Stk3 *)(((int)stk + 28)));
                        }
                    } else {
                        *(unsigned int *)0x8C33CB88 = 0x8000;
                        if (t55 == 0) {
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t156 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB60, *(Stk3 *)(((int)stk + 28)));
                        } else {
                            if (t55 == 1) {
                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                t161 = 0x0;
                            } else {
                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                t161 = 0x1;
                            }
                            decoWaveDraw(t161, *(Stk3 *)(((int)stk + 28)));
                        }
                        *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                    t174 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CCF0, *(Stk3 *)(((int)stk + 28)));
                } else {
                    if (a4 == 4) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                        t176 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0x1E0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                        t178 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C7A0, *(Stk3 *)(((int)stk + 16)));
                        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                        t180 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C7F0, *(Stk3 *)(((int)stk + 4)));
                        if ((R1044) != 0) {
                            *(unsigned int *)0x8C33CAE8 = 0x0;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t182 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CAC0, *(Stk3 *)(((int)stk + 28)));
                        } else {
                            *(unsigned int *)0x8C33CAE8 = 0x8000;
                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                            t185 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CAC0, *(Stk3 *)(((int)stk + 28)));
                            *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                        t192 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CBB0, *(Stk3 *)(((int)stk + 28)));
                    } else {
                        if (a4 == 5) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                            t194 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((R1040), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                            *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                            t196 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C5C0, *(Stk3 *)(((int)stk + 16)));
                            *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                            t198 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C610, *(Stk3 *)(((int)stk + 4)));
                            if ((R1044) != 0) {
                                *(unsigned int *)0x8C33CA48 = 0x0;
                                if (t55 == 0) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                    t200 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA20, *(Stk3 *)(((int)stk + 28)));
                                } else {
                                    if (t55 == 1) {
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t205 = 0x0;
                                    } else {
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t205 = 0x1;
                                    }
                                    decoWaveDraw(t205, *(Stk3 *)(((int)stk + 28)));
                                }
                                u229 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) - 1.0f);
                            } else {
                                *(unsigned int *)0x8C33CA48 = 0x8000;
                                if (t55 == 0) {
                                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                    t215 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA20, *(Stk3 *)(((int)stk + 28)));
                                } else {
                                    if (t55 == 1) {
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t220 = 0x0;
                                    } else {
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t220 = 0x1;
                                    }
                                    decoWaveDraw(t220, *(Stk3 *)(((int)stk + 28)));
                                }
                                u229 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                            }
                            *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = u229;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                            t232 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CD40, *(Stk3 *)(((int)stk + 28)));
                        } else {
                            if (a4 == 6) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                t234 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0xF0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                                *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                t236 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C6B0, *(Stk3 *)(((int)stk + 16)));
                                *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                t238 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C700, *(Stk3 *)(((int)stk + 4)));
                                if ((R1044) != 0) {
                                    *(unsigned int *)0x8C33CA98 = 0x0;
                                    if (t55 == 0) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t240 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA70, *(Stk3 *)(((int)stk + 28)));
                                    } else {
                                        if (t55 == 1) {
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t245 = 0x0;
                                        } else {
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t245 = 0x1;
                                        }
                                        decoWaveDraw(t245, *(Stk3 *)(((int)stk + 28)));
                                    }
                                    u269 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) - 1.0f);
                                } else {
                                    *(unsigned int *)0x8C33CA98 = 0x8000;
                                    if (t55 == 0) {
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                                        *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                        t255 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA70, *(Stk3 *)(((int)stk + 28)));
                                    } else {
                                        if (t55 == 1) {
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t260 = 0x0;
                                        } else {
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t260 = 0x1;
                                        }
                                        decoWaveDraw(t260, *(Stk3 *)(((int)stk + 28)));
                                    }
                                    u269 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                                }
                                *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = u269;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                                t272 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CD90, *(Stk3 *)(((int)stk + 28)));
                            } else {
                                if (a4 == 7) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                    t274 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0x2D0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                                    *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                    t276 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C890, *(Stk3 *)(((int)stk + 16)));
                                    *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                    t278 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C8E0, *(Stk3 *)(((int)stk + 4)));
                                    if ((R1044) != 0) {
                                        *(unsigned int *)0x8C33CB38 = 0x0;
                                        if (t55 == 0) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t280 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB10, *(Stk3 *)(((int)stk + 28)));
                                        } else {
                                            if (t55 == 1) {
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t285 = 0x0;
                                            } else {
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t285 = 0x1;
                                            }
                                            decoWaveDraw(t285, *(Stk3 *)(((int)stk + 28)));
                                        }
                                        u309 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) - 1.0f);
                                    } else {
                                        *(unsigned int *)0x8C33CB38 = 0x8000;
                                        if (t55 == 0) {
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                                            *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                            t295 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB10, *(Stk3 *)(((int)stk + 28)));
                                        } else {
                                            if (t55 == 1) {
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t300 = 0x0;
                                            } else {
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t300 = 0x1;
                                            }
                                            decoWaveDraw(t300, *(Stk3 *)(((int)stk + 28)));
                                        }
                                        u309 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                                    }
                                    *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = u309;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                                    t312 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CDE0, *(Stk3 *)(((int)stk + 28)));
                                } else {
                                    if (a4 == 8) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                        t314 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((R1040) + 0x3C0), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
                                        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                        t316 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C980, *(Stk3 *)(((int)stk + 16)));
                                        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
                                        t318 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C9D0, *(Stk3 *)(((int)stk + 4)));
                                        if ((R1044) != 0) {
                                            *(unsigned int *)0x8C33CB88 = 0x0;
                                            if (t55 == 0) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t320 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB60, *(Stk3 *)(((int)stk + 28)));
                                            } else {
                                                if (t55 == 1) {
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                    t325 = 0x0;
                                                } else {
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                    t325 = 0x1;
                                                }
                                                decoWaveDraw(t325, *(Stk3 *)(((int)stk + 28)));
                                            }
                                            u349 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) - 1.0f);
                                        } else {
                                            *(unsigned int *)0x8C33CB88 = 0x8000;
                                            if (t55 == 0) {
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                                                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                t335 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CB60, *(Stk3 *)(((int)stk + 28)));
                                            } else {
                                                if (t55 == 1) {
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                    t340 = 0x0;
                                                } else {
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                                                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                                                    t340 = 0x1;
                                                }
                                                decoWaveDraw(t340, *(Stk3 *)(((int)stk + 28)));
                                            }
                                            u349 = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
                                        }
                                        *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = u349;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
                                        t352 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CE30, *(Stk3 *)(((int)stk + 28)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
        t454 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((R1040), t51, a6, t52, *(Stk3 *)(((int)stk + 28)));
        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
        t456 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C5C0, *(Stk3 *)(((int)stk + 16)));
        *(float *)(((((int)stk + 40) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x50) + 0x0))) + 57.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
        t458 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33C610, *(Stk3 *)(((int)stk + 4)));
        if ((R1044) != 0) {
            *(unsigned int *)0x8C33CA48 = 0x0;
            if (t55 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                t460 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA20, *(Stk3 *)(((int)stk + 28)));
            } else {
                if (t55 == 1) {
                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t465 = 0x0;
                } else {
                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 19.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t465 = 0x1;
                }
                decoWaveDraw(t465, *(Stk3 *)(((int)stk + 28)));
            }
        } else {
            if (t55 == 0) {
                *(unsigned int *)0x8C33CA48 = 0x8000;
                *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 19.0f);
                *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 67.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                t474 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CA20, *(Stk3 *)(((int)stk + 28)));
            } else {
                if (t55 == 1) {
                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t479 = 0x0;
                } else {
                    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 12.0f);
                    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) + 69.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
                    t479 = 0x1;
                }
                decoWaveDraw(t479, *(Stk3 *)(((int)stk + 28)));
            }
            *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x4))) + 50.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
        t492 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33CC00, *(Stk3 *)(((int)stk + 28)));
    }
}
