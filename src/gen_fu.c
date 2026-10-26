/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int decoHeaderDraw(int, int, int, int, float);
int entryCountJoined(void);
extern int getID_Color();
int logoBDrawRot(int, Stk3);
int nlsndSeqRequest(int);
int padDirAny(int);
int padDirRepeat(int, int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
int primRect(int, int, int, int, int, int, int, int);
int primRectFrame(int, int, int, int, Stk3);
extern int primRectIncGradY();
int selCursorDraw(int, int, int, float, float);
int selCursorInputC(int, int, int, int, int, int, int, int, int);
int selModelSpawn(int, int);
int selPanelDraw(int, float, float);
extern int selSlot0FlagClear();
int sndSeCursor(void);
int unlockCountW0(void);
int vecAdd(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int winDrawA(int, int, Stk3, float, float, float);
int selPortsExec(int a4, int a5);
int primPanelDraw(Stk1 s);

int selPortsExec(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t11;
    int t19;
    int t20;
    int t21;
    int t22;
    int t136;
    int t137;
    int t129;
    int t130;
    int t27;
    float u28;
    int t31;
    int t38;
    int t39;
    int t43;
    int t48;
    int t49;
    int t91;
    int t95;
    int t139;
    int t146;
    int t147;
    int t159;
    int t228;
    int t237;
    int t247;
    int t250;
    int t253;
    int t254;
    float u255;
    int t258;
    int t263;
    int t266;
    int t267;
    int t276;
    int t278;
    int t283;
    int t285;
    int t286;
    int t293;
    int t294;
    int t295;
    int t304;
    int t314;
    int t321;
    int t315;
    int t0;
    int t1;
    int t133;
    int t126;
    int t119;
    int t122;
    int t123;
    int t29;
    int t32;
    int t56;
    int t53;
    int t72;
    int t76;
    int t79;
    int t80;
    int t89;
    int t90;
    int t112;
    int t115;
    int t116;
    int t160;
    int t191;
    int t192;
    int t193;
    int t194;
    float u195;
    int t277;
    float u281;
    int t291;
    int t292;
    int stk[100];

    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x8C185298;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t4 + 0x0)))) != 0) {
            if ((*(int *)(((((*(int *)((t2 + 0x8C3437C4))) * 0x38) + 0x8C343264) + 0x18))) == 1) {
                selModelSpawn((*(int *)(((0x8C3437C4 + t3) + 0x0))), 0x0);
                t1 = 0x56C;
                t0 = 0x0;
                t1 = (t1 + 0x8C343258);
                t1 = (t1 + t3);
                t11 = *(int *)((t1 + 0x0));
                t1 = 0x8C343258;
                t1 = (t1 + 0xC);
                *(unsigned int *)((((t11 * 0x38) + t1) + 0x18)) = t0;
            }
        }
        t4 = (t4 + 0x2);
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    t19 = t0;
    t20 = a4;
    t21 = a5;
    t22 = 0x0;
    for (;;) {
        t136 = t20;
        t137 = t21;
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t22 << 1) + 0x8C185298)))) == 0) {
            t133 = t19;
        } else {
            t129 = t20;
            t130 = t21;
            if ((*(int *)(((t22 << 2) + 0x8C343878))) == 0) {
                t126 = t19;
            } else {
                t27 = unlockCountW0();
                if ((int)t27 <= 0) {
                } else {
                    t20 = t22;
                    t20 = (t20 << 2);
                    t20 = (t20 + 0x8C3438C8);
                    u28 = *(float *)((t20 + 0x0));
                    *(float *)((t20 + 0x0)) = (u28 + 0.200000003f);
                    if ((u28 + 0.200000003f) > 1.0f) {
                        t19 = t22;
                        t19 = (t19 << 2);
                        t19 = (t19 + 0x8C3438C8);
                        *(float *)((t19 + 0x0)) = 1.0f;
                        t29 = t19;
                    }
                    t19 = t29;
                    t21 = 0x40;
                    t20 = t22;
                    t31 = padDirRepeat(t20, t21);
                    if ((t31 != 0) && (t19 = 0x8C343878, t32 = *(int *)((t19 + (t22 << 2))), t32 != 2)) {
                        *(unsigned int *)(((int)stk + 36)) = (t22 << 2);
                        *(unsigned int *)(((int)stk + 32)) = ((t22 << 2) + 0x8C343898);
                        t19 = ((*(int *)((((t22 << 2) + 0x8C343898) + 0x0))));
                        t19 = (t19 + (unlockCountW0()));
                        t19 = (t19);
                        t38 = (int)((int)t19 % (int)((unlockCountW0()) + 0x1));
                        t19 = ((t22 << 2) + 0x8C343898);
                        *(unsigned int *)((t19 + 0x0)) = t38;
                        t39 = *(int *)(((int)stk + 36));
                        *(unsigned int *)((0x8C3438B8 + t39)) = ((*(int *)((0x8C3438B8 + t39))) - 1);
                        sndSeCursor();
                    }
                    t21 = 0x80;
                    t20 = t22;
                    t43 = padDirRepeat(t20, t21);
                    if (t43 != 0) {
                        t19 = 0x8C343878;
                        if ((*(int *)((t19 + (t22 << 2)))) != 2) {
                            *(unsigned int *)(((int)stk + 36)) = (t22 << 2);
                            *(unsigned int *)(((int)stk + 32)) = ((t22 << 2) + 0x8C343898);
                            t19 = (*(int *)((((t22 << 2) + 0x8C343898) + 0x0)));
                            t19 = (t19 + 0x1);
                            t19 = (t19);
                            t48 = (int)((int)t19 % (int)((unlockCountW0()) + 0x1));
                            t19 = ((t22 << 2) + 0x8C343898);
                            *(unsigned int *)((t19 + 0x0)) = t48;
                            t49 = *(int *)(((int)stk + 36));
                            *(unsigned int *)((0x8C3438B8 + t49)) = ((*(int *)((0x8C3438B8 + t49))) + 0x1);
                            sndSeCursor();
                        } else {
                            t53 = t19;
                        }
                        t56 = t53;
                    }
                    t19 = t56;
                    t20 = t22;
                    t20 = (t20 << 2);
                    t21 = 0x56C;
                    t21 = (t21 + 0x8C343258);
                    t21 = (t21 + t20);
                    *(unsigned int *)(((((*(int *)(((0x8C3437C4 + t20) + 0x0))) * 0x38) + 0x8C343264) + 0x30)) = (*(int *)((((*(int *)((t20 + 0x8C343898))) << 2) + 0x8C3439D8)));
                    t21 = (*(int *)((t21 + 0x0)));
                    t21 = (t21 * 0x38);
                    t21 = (t21 + 0x8C343264);
                    t21 = (*(int *)((t21 + 0x30)));
                    if (t21 == -1) {
                        t20 = 0x1;
                    } else {
                        t20 = t21;
                        t20 = (t20 << 2);
                        t20 = (t20 + (0x8C1AF8A4 + (t22 * 0x70)));
                        t20 = (*(int *)((t20 + 0x0)));
                    }
                    t21 = t22;
                    t21 = (t21 << 2);
                    if ((((*(int *)(((*(int *)((t21 + 0x8C29B898))) + 0x10))) & 5) != 0) && ((t72 = *(int *)((t21 + 0x8C343878)), t72 != 2) && (t20 != 0))) {
                        t20 = t22;
                        t20 = (t20 << 2);
                        *(unsigned int *)((t20 + 0x8C343878)) = 0x2;
                        if ((*(int *)((t20 + 0x8C343888))) == 0) {
                            t20 = 0xAA9;
                            nlsndSeqRequest(t20);
                        } else {
                            t76 = t19;
                            t79 = t20;
                            t80 = t21;
                        }
                        t19 = t76;
                        t20 = t79;
                        t21 = t80;
                        *(unsigned int *)(((t22 << 2) + 0x8C343888)) = 0x1;
                    }
                    t19 = 0x8C3438A8;
                    *(unsigned int *)(((int)stk + 32)) = (t22 << 2);
                    t19 = (t19 + (t22 << 2));
                    *(unsigned int *)((t19 + 0x0)) = (*(int *)(((t22 << 2) + 0x8C343898)));
                    if ((((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C29B898))) + 0x10))) & 11) != 0) && (t89 = *(int *)(((int)stk + 32)), t90 = *(int *)((t89 + 0x8C343878)), t90 != 2)) {
                        t19 = 0x8C0B141C;
                        t20 = t22;
                        t91 = padDirAny(t20);
                        if (t91 == 0) {
                            *(unsigned int *)(((int)stk + 32)) = (t22 << 2);
                            t19 = (*(int *)((((t22 << 2) + 0x8C3437C4) + 0x0)));
                            t19 = (t19 * 0x38);
                            t19 = (t19 + 0x8C343264);
                            *(unsigned int *)((t19 + 0x30)) = 0xFFFFFFFF;
                            t19 = 0x56C;
                            t19 = (t19 + 0x8C343258);
                            t19 = (t19 + (*(int *)(((int)stk + 32))));
                            t95 = *(int *)((t19 + 0x0));
                            t19 = 0x8C343258;
                            t19 = (t19 + 0xC);
                            *(unsigned short *)((((t95 * 0x38) + t19) + 0x14)) = 0x0;
                            t19 = (*(int *)(((0x8C3437C4 + (*(int *)(((int)stk + 32)))) + 0x0)));
                            t19 = (t19 * 0x38);
                            t20 = 0x56C;
                            t19 = (t19 + 0x8C343264);
                            t20 = (t20 + 0x8C343258);
                            *(unsigned int *)((t19 + 0x28)) = 0x1;
                            t21 = 0x0;
                            t20 = (t20 + (*(int *)(((int)stk + 32))));
                            t20 = (*(int *)((t20 + 0x0)));
                            selModelSpawn(t20, t21);
                            *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x8C343878)) = 0x0;
                            *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x8C343898)) = 0x0;
                            *(unsigned short *)0x8C343260 = ((*(short *)0x8C343260) | (*(short *)(((t22 << 1) + 0x8C185298))));
                        }
                    } else {
                        t112 = t19;
                        t115 = t20;
                        t116 = t21;
                    }
                    t119 = t112;
                    t122 = t115;
                    t123 = t116;
                }
                t126 = t119;
                t129 = t122;
                t130 = t123;
            }
            t133 = t126;
            t136 = t129;
            t137 = t130;
        }
        t19 = t133;
        t20 = t136;
        t21 = t137;
        t22 = (t22 + 0x1);
        if ((int)t22 < (int)0x4) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 36)) = 0x8C3438B8;
    *(unsigned int *)(((int)stk + 60)) = 0x8C3438B8;
    *(unsigned int *)(((int)stk + 56)) = 0x8C3438B8;
    t139 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 52)) = 0x0;
        *(unsigned int *)(((int)stk + 40)) = (t139 << 2);
        *(unsigned int *)(((int)stk + 32)) = ((t139 << 2) + 0x8C343898);
        *(unsigned int *)(((int)stk + 48)) = (*(int *)((0x8C3439D8 + (((int)((int)((*(int *)((((t139 << 2) + 0x8C343898) + 0x0))) + 0x1) % (int)((unlockCountW0()) + 0x1))) << 2))));
        t146 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
        t147 = unlockCountW0();
        *(unsigned int *)(((int)stk + 32)) = (*(int *)((0x8C3439D8 + (((int)((int)(t146 + t147) % (int)((unlockCountW0()) + 0x1))) << 2))));
        if ((*(int *)(((*(int *)(((int)stk + 40))) + 0x8C343878))) == 2) {
            *(unsigned int *)(((int)stk + 52)) = 0x1;
            *(unsigned int *)(((int)stk + 48)) = 0xFFFFFFFF;
            *(unsigned int *)(((int)stk + 32)) = 0xFFFFFFFF;
        }
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t139 << 1) + 0x8C185298)))) == 0) {
        } else {
            if ((*(int *)(((t139 << 2) + 0x8C343878))) != 0) {
                t159 = unlockCountW0();
                if (((int)t159 > 0) && (t160 = *(int *)0x8C287D5C, t160 != 2)) {
                    if ((*(int *)((0x8C343264 + ((*(int *)((0x8C3437C4 + (t139 << 2)))) * 0x38)))) != 16) {
                        if ((*(int *)((0x8C343264 + ((*(int *)((0x8C3437C4 + (t139 << 2)))) * 0x38)))) != 17) {
                            if ((*(int *)((((t139 << 2) + 0x8C3437C4) + 0x0))) == 0) {
                                *(unsigned int *)(((int)stk + 40)) = (*(int *)0x8C343294);
                                *(unsigned int *)(((int)stk + 44)) = (t139 << 2);
                                *(volatile int *)((0x8C3438B8 + (t139 << 2)));
                                *(volatile int *)(((int)stk + 52));
                                *(Stk3 *)(((int)stk + 8)) = vecMake(167.0f, 235.0f, 0.100000001f);
                                t191 = (*(int *)0x8C343264);
                                t192 = (*(int *)(((int)stk + 40)));
                                t193 = (*(int *)(((int)stk + 32)));
                                t194 = (*(int *)(((int)stk + 48)));
                                u195 = (*(float *)(((*(int *)(((int)stk + 44))) + 0x8C3438C8)));
                            } else {
                                *(unsigned int *)(((int)stk + 44)) = (*(int *)0x8C3432CC);
                                *(unsigned int *)(((int)stk + 40)) = (t139 << 2);
                                *(volatile int *)((0x8C3438B8 + (t139 << 2)));
                                *(volatile int *)(((int)stk + 52));
                                *(Stk3 *)(((int)stk + 8)) = vecMake(599.0f, 235.0f, 0.100000001f);
                                t191 = (*(int *)0x8C34329C);
                                t192 = (*(int *)(((int)stk + 44)));
                                t193 = (*(int *)(((int)stk + 32)));
                                t194 = (*(int *)(((int)stk + 48)));
                                u195 = (*(float *)(((*(int *)(((int)stk + 40))) + 0x8C3438C8)));
                            }
                            decoHeaderDraw(t191, t192, t193, t194, u195);
                        }
                    }
                }
            }
        }
        if ((int)(*(int *)((((t139 << 2) + 0x8C3438B8) + 0x0))) < (int)0xFFFFFFFF) {
            *(unsigned int *)((((t139 << 2) + 0x8C3438B8) + 0x0)) = 0x0;
        }
        if ((int)(*(int *)((((t139 << 2) + 0x8C3438B8) + 0x0))) > (int)0x1) {
            *(unsigned int *)((((t139 << 2) + 0x8C3438B8) + 0x0)) = 0x0;
        }
        if ((int)(*(int *)((0x8C3438B8 + (t139 << 2)))) < 0) {
            t228 = *(int *)(((int)stk + 56));
            *(unsigned int *)((t228 + 0x0)) = ((*(int *)((t228 + 0x0))) - 1);
        }
        t139 = (t139 + 0x1);
        if ((int)(*(int *)(((*(int *)(((int)stk + 60))) + 0x0))) > 0) {
            t237 = *(int *)(((int)stk + 36));
            *(unsigned int *)((t237 + 0x0)) = ((*(int *)((t237 + 0x0))) + 0x1);
        }
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x4);
        *(unsigned int *)(((int)stk + 60)) = ((*(int *)(((int)stk + 60))) + 0x4);
        *(unsigned int *)(((int)stk + 56)) = ((*(int *)(((int)stk + 56))) + 0x4);
        if ((int)t139 < (int)0x4) continue;
        break;
    }
    *(unsigned int *)0x8C343AB8 = ((*(int *)0x8C343AB8) + 0x1);
    *(unsigned int *)0x8C343ABC = ((*(int *)0x8C343ABC) + 0x1);
    t247 = *(int *)0x8C343AB8;
    if ((int)t247 > (int)0xC) {
        *(float *)0x8C343AC0 = 1.0f;
    } else {
        *(float *)0x8C343AC0 = ((float)t247 / 12.0f);
    }
    t250 = *(int *)0x8C343ABC;
    if ((int)t250 > (int)0xC) {
        *(float *)0x8C343AC4 = 1.0f;
    } else {
        *(float *)0x8C343AC4 = ((float)t250 / 12.0f);
    }
    *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(24.0f, 95.0f, 390.0f);
    *(Stk3 *)((((int)stk + 28) + 0x3C)) = vecMake(454.0f, 95.0f, 390.0f);
    t253 = 0x1;
    t254 = 0x0;
    u255 = 390.0f;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t254 << 1) + 0x8C185298)))) != 0) {
            t253 = t254;
            t258 = *(int *)((((t254 << 2) + 0x8C3437A4) + 0x0));
            *(unsigned int *)(((int)stk + 32)) = t258;
            if (t258 == 0) {
                u255 = (*(float *)0x8C343AC0);
            } else {
                u255 = (*(float *)0x8C343AC4);
            }
            if ((*(int *)0x8C287D5C) == 2) {
                *(Stk3 *)(((int)stk + 20)) = vecMake(87.0f, 170.0f, 0.100000001f);
                t263 = ((int (*)(int, float))(getID_Color))(t253, 1.0f);
                *(volatile int *)(((int)stk + 32));
                selPanelDraw(t263, 1.0f, u255);
            } else {
                t266 = *(int *)(((int)stk + 32));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t266 << 1) + t266) << 2) + (((int)stk + 32) + 0x2C))); }
                t267 = ((int (*)(int, Stk3, float))(getID_Color))(t253, *(Stk3 *)(((int)stk + 20)), 1.0f);
                selCursorDraw(t267, t253, (*(int *)(((int)stk + 32))), 1.0f, u255);
            }
        }
        t254 = (t254 + 0x1);
        if ((int)t254 >= (int)0x4) {
            break;
        }
    }
    t276 = entryCountJoined();
    if ((t276 == 1) && (t277 = *(int *)0x8C287D5C, t277 != 2)) {
        t278 = ((int (*)(void))(selSlot0FlagClear))();
        if (t278 == 0) {
            u281 = (*(float *)0x8C343AC0);
        } else {
            u281 = (*(float *)0x8C343AC4);
        }
        t283 = ((int (*)(void))(selSlot0FlagClear))();
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t283 << 1) + t283) << 2) + (((int)stk + 32) + 0x2C))); }
        t285 = (((int (*)(Stk3))(selSlot0FlagClear))(*(Stk3 *)(((int)stk + 20))));
        t286 = ((int (*)(int, float))(getID_Color))(0x4, 1.0f);
        selCursorDraw(t286, 0x4, t285, 1.0f, u281);
    }
    selCursorInputC(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16));
    t293 = 0x0;
    t294 = 0x8C185298;
    t295 = 0x8C185298;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t294 + 0x0)))) != 0) {
            t295 = 0x56C;
            t295 = (t295 + 0x8C343258);
            t292 = 0x56C;
            t295 = (t295 + t293);
            t295 = (*(int *)((t295 + 0x0)));
            t292 = (t292 + 0x8C343258);
            t292 = (t292 + t293);
            t295 = (t295 * 0xD78);
            t295 = (t295 + 0x8C287D84);
            *(unsigned int *)((t295 + 0x38)) = (*(int *)((0x8C11098C + ((*(int *)((0x8C343264 + ((*(int *)((t293 + 0x8C3437C4))) * 0x38)))) << 2))));
            t304 = *(int *)((t292 + 0x0));
            t292 = 0x8C343258;
            t292 = (t292 + 0xC);
            t291 = (*(int *)((((t304 * 0x38) + t292) + 0x0)));
            t291 = (t291 * 0x6C);
            t291 = (t291 + 0x8C102424);
            *(float *)((t295 + 0x4C)) = ((*(float *)((t291 + 0x4))));
            t292 = (*(int *)(((0x8C3437C4 + t293) + 0x0)));
            t292 = (t292 * 0x38);
            t292 = (t292 + 0x8C343264);
            t291 = (*(int *)((t292 + 0x0)));
            *(unsigned int *)((t295 + 0xC58)) = t291;
        }
        t294 = (t294 + 0x2);
        t293 = (t293 + 0x4);
        if ((unsigned int)t294 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    t314 = entryCountJoined();
    t321 = t314;
    if (t314 == 1) {
        t315 = ((int (*)(void))(selSlot0FlagClear))();
        *(unsigned int *)(((0x8C287D84 + (t315 * 0xD78)) + 0x38)) = (*(int *)((0x8C11098C + ((*(int *)0x8C343248) << 2))));
        *(float *)(((0x8C287D84 + (t315 * 0xD78)) + 0x4C)) = (*(float *)(((((*(int *)0x8C343248) * 0x6C) + 0x8C102424) + 0x4)));
        *(unsigned int *)(((0x8C287D84 + (t315 * 0xD78)) + 0xC58)) = (*(int *)0x8C343248);
        t321 = 0xC58;
    }
    return t321;
}

int primPanelDraw(Stk1 s)
{
    float u0;
    int t54;
    int t61;
    int t75;
    int t76;
    int t78;
    int stk[74];

    stk[65] = s.w[0];
    *(unsigned int *)(((int)stk + 128)) = 0xE3;
    u0 = *(float *)0x8C18D2D0;
    *(float *)0x8C18D2DC = (float)(int)(u0 * 0.600000024f);
    *(float *)(((0x84 + ((int)stk + 128)) + 0x0)) = ((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + (float)(int)(u0 * 0.600000024f));
    *(Stk3 *)((((int)stk + 128) + 0x10)) = vecMake(-5.0f, -17.0f, 500.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x14)); }
    winDrawA(0xFFE31800, 0x2, *(Stk3 *)(((int)stk + 112)), 361.0f, 1.0f, 0.78125f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((0x84 + ((int)stk + 128))); }
    primRectFrame(0x9A, (*(int *)(((int)stk + 128))), 0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 100)));
    *(unsigned int *)(((int)stk + 128)) = 0x64000000;
    *(Stk3 *)(((int)stk + 116)) = vecMake((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), 501.0f);
    primRect(0x9A, 0xE5, (*(int *)(((int)stk + 128))), 0x0, *(int *)((int)stk + 116), *(int *)((int)stk + 116 + 4), *(int *)((int)stk + 116 + 8), *(int *)((int)stk + 116 + 12));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 229.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 84)), *(Stk3 *)(((int)stk + 96)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 229.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 104)), *(Stk3 *)(((int)stk + 116)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -77.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -77.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 72)), *(Stk3 *)(((int)stk + 84)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + 15.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 113.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -169.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 113.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x5, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(640.0f, 73.0f, 400.0f);
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(0.0f, 73.0f, 400.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x3, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(640.0f, 416.0f, 400.0f);
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(0.0f, 416.0f, 400.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x20)) = *(struct mv3 *)(0x8C122D14); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 100) + 0x20)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 100) + 0x20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 100) + 0x20)); }
    t54 = ((int (*)(int, int, int, int, Stk3))(primRectIncGradY))(0x240, 0x156, 0xA4000078, 0xA4000078, *(Stk3 *)(((int)stk + 60)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(30.0f, 76.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x58));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(30.0f, 417.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x50));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 104)), *(Stk3 *)(((int)stk + 116)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(605.0f, 76.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x58));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(605.0f, 417.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x50));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 116)) = vecMake(641.0f, 418.0f, 420.0f);
    t61 = ((int (*)(int, int, int, int, int, int, int, int))(primRectIncGradY))(0x297, 0x23, 0xA4E31800, 0xA4E31800, *(int *)((int)stk + 116), *(int *)((int)stk + 116 + 4), *(int *)((int)stk + 116 + 8), *(int *)((int)stk + 116 + 12));
    *(float *)0x8C18D2E0 = ((*(float *)0x8C18D2E0) - 1.0f);
    *(float *)0x8C18D2E4 = ((*(float *)0x8C18D2E4) - 1.0f);
    *(float *)0x8C18D2E8 = ((*(float *)0x8C18D2E8) - 1.0f);
    if (-360.0f > (*(float *)0x8C18D2E0)) {
        *(float *)0x8C18D2E0 = 640.0f;
    }
    if (-360.0f > (*(float *)0x8C18D2E4)) {
        *(float *)0x8C18D2E4 = 640.0f;
    }
    if (-360.0f > (*(float *)0x8C18D2E8)) {
        *(float *)0x8C18D2E8 = 640.0f;
    }
    *(Stk3 *)((((int)stk + 128) + 0x34)) = vecMake((*(float *)0x8C18D2E0), 423.0f, 400.100006f);
    *(Stk3 *)((((int)stk + 124) + 0x2C)) = vecMake((*(float *)0x8C18D2E4), 423.0f, 400.100006f);
    *(Stk3 *)((((int)stk + 120) + 0x24)) = vecMake((*(float *)0x8C18D2E8), 423.0f, 400.100006f);
    *(volatile float *)0x8C18D2D0;
    t75 = *(int *)0x8C20D198;
    t76 = ((~(((~t75) + 0x1) & 0x3F)) + 0x1);
    if ((int)t75 >= 0) {
        t76 = (t75 & 0x3F);
    }
    t78 = 0xFFC88C00;
    if ((int)t76 < (int)0x20) {
        t78 = 0xFF008D8D;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 128) + 0x34)); }
    logoBDrawRot(t78, *(Stk3 *)(((int)stk + 116)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x34)); }
    logoBDrawRot(t78, *(Stk3 *)(((int)stk + 104)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    return (logoBDrawRot(t78, *(Stk3 *)(((int)stk + 92))));
}
