/* Straight-line functions with calls and guards (batch gen_xr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int, float);
int bgScreenDraw(void);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
int entryCharaSelExec(int, int, int, int, int, int, int, int, int);
int entryPartnerIsHuman(int);
int entrySelectInit(void);
int lightUpdate(int);
int motionBackup(int);
int nlExecuteEvent(int, int);
int selExec(int);
int selGridDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int sprAdvFree(void);
int sprSet192Free(void);
int stageLoadTimedInit(int);
int stageLoadTimedStep(int);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int FUN_8c0a7ed2(int a4, int a5, int a6, int a7, float f4);

int FUN_8c0a7ed2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[18];
    register int t1;
    register int t4;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t47;
    register int t42;
    register int t22;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t69;
    register int t109;
    register int t83;
    register int t113;
    register int t135;
    register int t152;
    register int t180;
    register int t153;
    register int t154;
    register int t156;
    register int t157;
    register int t158;
    register int t195;
    register int t186;
    register int t187;
    register int t215;
    register int t217;
    register int t218;
    register int t0;
    register int t5;
    register int t44;
    register int t45;
    register int t16;
    register int t17;
    register int t18;
    register int t39;
    register int t40;
    register int t34;
    register int t35;
    register int t37;
    register int t32;
    register int t30;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t106;
    register int t107;
    register int t101;
    register int t102;
    register int t104;
    register int t86;
    register int t87;
    register int t89;
    register int t96;
    register int t97;
    register int t99;
    register int t223;
    register int t124;
    register int t132;
    register int t141;
    register int t149;
    register int t202;
    register int t203;
    register int t155;
    register int t160;
    register int t171;
    register int t172;
    register int t173;
    register int t174;
    register int t164;
    register int t165;
    register int t166;
    register int t196;
    register int t189;
    register int t190;
    register int t211;
    register int t212;
    register int t216;

    *(unsigned int *)0x8C301970 = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x8C28B364;
    t1 = 0x8C287D84;
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
            break;
        }
        t0 = (motionBackup(t1));
        t1 = (t1 + 0xD78);
    }
    *(unsigned int *)(((int)stk + 28)) = 0x8C343878;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t4 = t0;
    t6 = 0x0;
    t7 = 0x0;
    t8 = a4;
    t9 = 0x0;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            break;
        }
        t4 = 0x8C185298;
        t7 = t9;
        t7 = (t7 << 1);
        t6 = (*(short *)((t7 + t4)));
        t4 = (*(short *)0x8C343262);
        t6 = (unsigned short)t6;
        t4 = (unsigned short)t4;
        t47 = t8;
        if ((t4 & t6) != 0) {
            t7 = 0x56C;
            t6 = t9;
            t6 = (t6 << 2);
            t4 = 0x8C343258;
            t7 = (t7 + 0x8C343258);
            t6 = (t6 + t7);
            t6 = (*(int *)((t6 + 0x0)));
            t7 = 0x38;
            t4 = (t4 + 0xC);
            t5 = (t6 * t7);
            t5 = (t5 + t4);
            t4 = (*(short *)((t5 + 0x14)));
            t42 = t8;
            if ((t4 != 0) && (t16 = (t4 == 0), t4 = 0x8C343878, t17 = (t6 * t7), t6 = t9, t6 = (t6 << 2), t18 = *(int *)((t6 + t4)), t5 = t18, t5 == 0)) {
                t6 = 0x8C0E878E;
                t4 = (unlockCountW0());
                if ((int)t4 > 0) {
                    t4 = 0x8C3437C4;
                    t7 = 0x38;
                    t6 = (*(int *)(((int)stk + 24)));
                    t5 = (*(int *)((t6 + t4)));
                    t6 = 0x8C343264;
                    t22 = (t5 * t7);
                    t5 = 0x8C1AFA64;
                    t4 = t22;
                    t4 = (*(int *)((t6 + t4)));
                    t4 = (t4 << 2);
                    t4 = (*(int *)((t5 + t4)));
                    if (t4 == 2) {
                        t8 = 0x56C;
                        t6 = (*(int *)(((int)stk + 20)));
                        t8 = (t8 + 0x8C343258);
                        t4 = 0x8C343878;
                        *(unsigned int *)((t6 + t4)) = 0x1;
                        t6 = 0x8C343258;
                        t7 = (*(int *)(((int)stk + 20)));
                        t6 = (t6 + 0xC);
                        t8 = (t8 + t7);
                        t8 = (*(int *)((t8 + 0x0)));
                        t8 = (t8 * 0x38);
                        t8 = (t8 + t6);
                        *(unsigned int *)(((int)stk + 32)) = t8;
                        t8 = (*(int *)((t8 + 0x0)));
                        t4 = t8;
                        if ((t4 == 16) || (t30 = (t4 == 16), t4 = t8, t4 == 17)) {
                            t7 = (*(int *)(((int)stk + 28)));
                            t6 = 0x2;
                            *(unsigned int *)((t7 + 0x0)) = t6;
                        }
                        t32 = t8;
                    }
                    t34 = t5;
                    t35 = t6;
                    t37 = t32;
                }
                t39 = t34;
                t40 = t35;
                t42 = t37;
            } else {
                t39 = t5;
                t40 = t6;
            }
            t44 = t39;
            t45 = t40;
            t47 = t42;
        } else {
            t44 = t5;
            t45 = t6;
        }
        t5 = t44;
        t6 = t45;
        t7 = (*(int *)(((int)stk + 28)));
        t8 = t47;
        t9 = (t9 + 0x1);
        t7 = (t7 + 0x4);
        *(unsigned int *)(((int)stk + 28)) = t7;
        t6 = (*(int *)(((int)stk + 20)));
        t6 = (t6 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = t6;
        t5 = (*(int *)(((int)stk + 24)));
        t5 = (t5 + 0x4);
        *(unsigned int *)(((int)stk + 24)) = t5;
    }
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x8C29B898;
    t51 = t4;
    t52 = t5;
    t53 = t6;
    t54 = t8;
    t55 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)0x4) {
            break;
        }
        t51 = 0x8C185298;
        t69 = *(short *)((((*(int *)(((int)stk + 24))) << 1) + t51));
        t51 = (*(short *)0x8C343262);
        t51 = (unsigned short)t51;
        t109 = t54;
        if (((t51 & (unsigned short)t69) != 0) && ((t53 = 0x8C185410, t71 = *(int *)((t53 + 0x0)), t71 == 0) && (t72 = *(int *)(((int)stk + 20)), t73 = ((t51 & (unsigned short)t69) == 0), t51 = t72, t74 = *(int *)((t51 + 0x0)), t51 = t74, t75 = *(int *)((t51 + 0x10)), t51 = t75, (t51 & 2) != 0))) {
            t53 = 0x8C287ADC;
            t51 = (*(int *)((t53 + 0x0)));
            if (t51 == 2) {
                t52 = 0x56C;
                t52 = (t52 + 0x8C343258);
                t52 = (t52 + t55);
                t83 = *(int *)((t52 + 0x0));
                t52 = 0x8C343258;
                t52 = (t52 + 0xC);
                t51 = (*(short *)((((t83 * 0x38) + t52) + 0x14)));
                if (t51 != 0) {
                    t86 = t52;
                    t87 = t53;
                    t89 = t54;
                } else {
                    t53 = 0x8C0B031C;
                    t51 = (entrySelectInit());
                }
                t101 = t86;
                t102 = t87;
                t104 = t89;
            } else {
                t52 = 0x56C;
                t51 = 0x8C343258;
                t51 = (t51 + 0xC);
                t52 = (t52 + 0x8C343258);
                t52 = (t52 + (*(int *)(((int)stk + 28))));
                t52 = (*(int *)((t52 + 0x0)));
                t52 = (t52 * 0x38);
                t52 = (t52 + t51);
                t51 = (*(short *)((t52 + 0x14)));
                if (t51 == 0) {
                    t51 = (entrySelectInit());
                } else {
                    t96 = t52;
                    t97 = t53;
                    t99 = t54;
                }
                t101 = t96;
                t102 = t97;
                t104 = t99;
            }
            t106 = t101;
            t107 = t102;
            t109 = t104;
        } else {
            t106 = t52;
            t107 = t53;
        }
        t52 = t106;
        t53 = t107;
        t54 = t109;
        t55 = (t55 + 0x4);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        t53 = (*(int *)(((int)stk + 28)));
        t53 = (t53 + 0x4);
        *(unsigned int *)(((int)stk + 28)) = t53;
        t52 = (*(int *)(((int)stk + 20)));
        t52 = (t52 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = t52;
    }
    t113 = *(int *)0x8C20D150;
    if (t113 != 1) {
        t223 = t113;
    } else {
        FUN_8c0eaf00(0x0, 0x0, 0x0, f4);
        lightUpdate(0x0);
        camSetOrbit(0x600, 0x8000, 255.0f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 12.0f, 0.0f);
        camSetEye();
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 77.0f, 295.0f);
        camSetTarget();
        camMoveBegin(1.0f, 1.0f);
        *(float *)0x8C287A04 = 7.0f;
        camSetupView();
        camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        bgScreenDraw();
        if (((*(int *)0x8C287D5C) != 2) && (t124 = *(int *)0x8C287D5C, t124 != 1)) {
        } else {
            *(unsigned int *)0x8C343AC8 = 0x2;
        }
        if ((*(int *)0x8C343AC8) == 0) {
            stageLoadTimedInit(0x0);
            *(unsigned int *)0x8C343AC8 = 0x1;
        } else {
            t132 = 0x8C287D5C;
        }
        if ((*(int *)0x8C343AC8) == 1) {
            t135 = stageLoadTimedStep(t132);
            if (t135 == 1) {
                *(unsigned int *)0x8C343AC8 = 0x2;
            }
        } else {
            t141 = t132;
        }
        if ((*(int *)0x8C287ADC) == 4) {
            entryCharaSelExec(t141, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16));
        } else {
            selExec(t141);
        }
        if (((*(int *)0x8C343874) != 0) && (t149 = *(int *)0x8C343AC8, t149 == 2)) {
            t152 = *(int *)0x8C185488;
            t180 = 0x8C185488;
            if (t152 == 0) {
                *(unsigned int *)0x8C185488 = 0x1;
                t153 = t149;
                t154 = 0x8C343874;
                t156 = t152;
                t157 = 0x8C185488;
                t158 = 0x0;
                for (;;) {
                    if ((int)t158 >= (int)0x4) {
                        break;
                    }
                    t156 = 0x58C;
                    t155 = t158;
                    t156 = (t156 + 0x8C343258);
                    t154 = 0x8C343258;
                    t155 = (t155 << 2);
                    t155 = (t155 + t156);
                    *(unsigned int *)((t155 + 0x0)) = 0x0;
                    t154 = (t154 + 0xC);
                    t155 = (t158 * 0x38);
                    t156 = t155;
                    t154 = (t154 + t156);
                    *(unsigned int *)(((int)stk + 20)) = t155;
                    t155 = (*(int *)((t154 + 0x8)));
                    if ((t155 != 0) && (t156 = 0x8C287ADC, t160 = *(int *)((t156 + 0x0)), t153 = t160, t153 != 2)) {
                        t154 = 0x8C0B1040;
                        t157 = t158;
                        t153 = (entryPartnerIsHuman(t157));
                        if (t153 != 0) {
                            t156 = (*(int *)(((int)stk + 20)));
                            t154 = 0x8C343258;
                            t154 = (t154 + 0xC);
                            t153 = 0x8C2889DC;
                            t154 = (t154 + t156);
                            t155 = (t158 * 0xD78);
                            t156 = (*(int *)((t154 + 0x0)));
                            *(unsigned int *)((t155 + t153)) = t156;
                            t164 = t154;
                            t165 = t155;
                            t166 = t156;
                        }
                        t171 = t164;
                        t172 = t165;
                        t173 = t166;
                    } else {
                        t156 = (*(int *)(((int)stk + 20)));
                        t154 = 0x8C343258;
                        t154 = (t154 + 0xC);
                        t153 = 0x8C2889DC;
                        t154 = (t154 + t156);
                        t155 = (t158 * 0xD78);
                        t156 = (*(int *)((t154 + 0x0)));
                        *(unsigned int *)((t155 + t153)) = t156;
                        t171 = t154;
                        t172 = t155;
                        t173 = t156;
                        t174 = t157;
                    }
                    t154 = t171;
                    t155 = t172;
                    t156 = t173;
                    t157 = t174;
                    t158 = (t158 + 0x1);
                }
                t180 = t157;
            }
            t195 = t180;
            if ((*(int *)0x8C343908) != 0) {
                sprSet192Free();
                sprAdvFree();
                *(unsigned int *)0x8C181754 = 0x1;
                *(unsigned int *)0x8C185288 = 0x0;
                if ((*(signed char *)0x8C40C2F4) == 0) {
                    t186 = 0x8C185288;
                    t187 = 0x0;
                    for (;;) {
                        if ((unsigned int)t187 >= (unsigned int)0x10) {
                            break;
                        }
                        t186 = 0x50C;
                        t186 = (t186 + 0x8C343258);
                        t186 = (t186 + t187);
                        t187 = (t187 + 0x4);
                        *(unsigned int *)((t186 + 0x0)) = 0x1;
                    }
                    t189 = t187;
                    t190 = 0x10;
                }
                t195 = t189;
                t196 = t190;
            }
            *(unsigned int *)0x8C343874 = ((*(int *)0x8C343874) + 0x1);
            t202 = t195;
            t203 = t196;
        }
        if ((*(int *)0x8C20D150) != 0) {
            selGridDraw(t202, t203, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        } else {
            t211 = t202;
            t212 = t203;
        }
        t215 = (nlExecuteEvent(t211, t212));
        t217 = 0x8C1AFA64;
        t218 = 0x8C1AFA64;
        for (;;) {
            if ((unsigned int)t217 >= (unsigned int)0x8C1AFAAC) {
                break;
            }
            t215 = (*(int *)((t217 + 0x0)));
            if (t215 == 1) {
                t216 = (*(int *)((t218 + 0x0)));
                t216 = (t216 + 0x1);
                *(unsigned int *)((t218 + 0x0)) = t216;
            }
            t217 = (t217 + 0x4);
            t218 = (t218 + 0x4);
        }
        t223 = t215;
    }
    return t223;
}
