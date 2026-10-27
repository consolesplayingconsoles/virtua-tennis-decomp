/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXT_GetStat(int);
int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int camGetAngles(int, int);
int courtAngleInSector(int, int);
int courtAusDrawScoreboard(void);
int courtAusDrawSign(int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int crowdAnimate(void);
int crowdDrawUsa(int);
int flareSunDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int menuItemDraw0(int, int, Stk3);
int menuItemDraw1(int, int, Stk3);
int menuItemDraw2(int, int, Stk3);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int padDirRepeat(int, int);
int panelLogoSwingDraw2(int, Stk3);
int screenSegVisible(int, Stk3, Stk3);
int sndSeCursor(void);
int sndSeDecide(void);
extern int strmBgmSetVol();
int strmBgmVolTo(int);
int vecAdd(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int entryGridSettingsStep(int a4, int a5);
int courtAusDraw(int a4);
void strmBgmPlay(int a4, int a5, int a6, int a7);

int entryGridSettingsStep(int a4, int a5)
{
    int t12;
    int t13;
    int t15;
    int t16;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t122;
    int t109;
    int t110;
    int t105;
    int t106;
    int t101;
    int t102;
    int t90;
    int t91;
    int t92;
    int t97;
    int t98;
    int stk[45];

    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = (((int)stk + 52) + 0x18);
    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1855E8); }
    *(Stk3 *)(((int)stk + 28)) = vecMake(-119.0f, 135.0f, 0.100000001f);
    vecAdd(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 52) + 0x18) + 0xC);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x18) + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1855E8); }
    *(Stk3 *)(((int)stk + 28)) = vecMake(-124.0f, 205.0f, 0.100000001f);
    vecAdd(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 52) + 0x18) + 0x18);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x18) + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1855E8); }
    *(Stk3 *)(((int)stk + 28)) = vecMake(-122.0f, 275.0f, 0.100000001f);
    vecAdd(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 52) + 0x18) + 0x24);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x18) + 0x24);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1855E8); }
    *(Stk3 *)(((int)stk + 28)) = vecMake(-122.0f, 345.0f, 0.100000001f);
    t12 = *(int *)(((int)stk + 52));
    t13 = (vecAdd(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 52))))));
    t15 = 0x0;
    t16 = a5;
    for (;;) {
        if ((int)t15 >= (int)0x4) {
            break;
        }
        t16 = t15;
        t16 = (t16 << 2);
        t16 = (t16 + (((int)stk + 52) + 0x48));
        if (((*(int *)0x8C185634)) == t15) {
            t13 = 0x1;
            *(unsigned int *)((t16 + 0x0)) = t13;
        } else {
            *(unsigned int *)((t16 + 0x0)) = 0x0;
        }
        t15 = (t15 + 0x1);
    }
    t21 = t13;
    t22 = t12;
    t23 = 0x4;
    t24 = t15;
    t25 = t16;
    t26 = 0x0;
    for (;;) {
        if ((int)t26 < (int)0x4) {
            t23 = t26;
            t25 = 0x8C185298;
            t23 = (t23 << 1);
            t24 = 0x8C343258;
            t23 = (t23 + t25);
            t21 = (*(short *)((t24 + 0xA)));
            t21 = (unsigned short)t21;
            if ((t21 & (unsigned short)(*(short *)((t23 + 0x0)))) == 0) {
                t122 = t22;
            } else {
                t25 = 0x10;
                t24 = t26;
                t21 = (padDirRepeat(t24, t25));
                if (t21 != 0) {
                    t21 = (*(int *)0x8C185634);
                    t21 = (t21 + 0x3);
                    if ((int)t21 >= 0) {
                        t21 = (t21 & 0x3);
                    } else {
                        t21 = (~t21);
                        t21 = (t21 + 0x1);
                        t21 = (t21 & 0x3);
                        t21 = (~t21);
                        t21 = (t21 + 0x1);
                    }
                    *(unsigned int *)0x8C185634 = t21;
                    t21 = (sndSeCursor());
                } else {
                    t25 = 0x20;
                    t24 = t26;
                    t21 = (padDirRepeat(t24, t25));
                    if (t21 != 0) {
                        t21 = (*(int *)0x8C185634);
                        t21 = (t21 + 0x1);
                        if ((int)t21 >= 0) {
                            t21 = (t21 & 0x3);
                        } else {
                            t21 = (~t21);
                            t21 = (t21 + 0x1);
                            t21 = (t21 & 0x3);
                            t21 = (~t21);
                            t21 = (t21 + 0x1);
                        }
                        *(unsigned int *)0x8C185634 = t21;
                        t21 = (sndSeCursor());
                    }
                }
                t23 = (*(int *)0x8C185634);
                if (t23 == 0) {
                    t25 = 0x80;
                    t24 = t26;
                    t21 = (padDirRepeat(t24, t25));
                    t25 = 0x40;
                    if (t21 != 0) {
                        *(unsigned int *)0x8C343DCC = ((*(int *)0x8C343DCC) + 0x1);
                    }
                    t24 = t26;
                    t21 = (padDirRepeat(t24, t25));
                    if (t21 != 0) {
                        *(unsigned int *)0x8C343DCC = ((*(int *)0x8C343DCC) - 1);
                    }
                } else {
                    t21 = (*(int *)0x8C185634);
                    if (t21 == 1) {
                        t25 = 0x80;
                        t24 = t26;
                        t21 = (padDirRepeat(t24, t25));
                        t25 = 0x40;
                        if (t21 != 0) {
                            *(unsigned int *)0x8C343DD0 = ((*(int *)0x8C343DD0) + 0x1);
                        }
                        t24 = t26;
                        t21 = (padDirRepeat(t24, t25));
                        if (t21 != 0) {
                            *(unsigned int *)0x8C343DD0 = ((*(int *)0x8C343DD0) - 1);
                        }
                    } else {
                        if (t21 == 2) {
                            t25 = 0x80;
                            t24 = t26;
                            t21 = (padDirRepeat(t24, t25));
                            t25 = 0x40;
                            if (t21 != 0) {
                                *(unsigned int *)0x8C343DD4 = ((*(int *)0x8C343DD4) + 0x1);
                            }
                            t24 = t26;
                            t21 = (padDirRepeat(t24, t25));
                            if (t21 != 0) {
                                *(unsigned int *)0x8C343DD4 = ((*(int *)0x8C343DD4) - 1);
                            }
                        } else {
                            t21 = (*(int *)0x8C185634);
                            if ((t21 == 3) && (t90 = (t21 == 3), t21 = t26, t25 = 0x8C29B898, t21 = (t21 << 2), t91 = *(int *)((t25 + t21)), t23 = t91, t24 = 0x5, t92 = *(int *)((t23 + 0x10)), (t92 & t24) != 0)) {
                                t22 = 0x8C0D2A7E;
                                t21 = (sndSeDecide());
                                t24 = 0x8C40C2F4;
                                t23 = 0x1;
                                t25 = 0x8C287C6C;
                                *(unsigned int *)(((int)stk + 72)) = t23;
                                t21 = (*(int *)0x8C343DCC);
                                *(unsigned int *)((t25 + 0x0)) = t21;
                                *(unsigned char *)((t24 + 0x3)) = t21;
                                t21 = (*(int *)0x8C343DD0);
                                *(unsigned char *)((t24 + 0x5)) = t21;
                                t21 = (*(int *)0x8C343DD4);
                                *(unsigned char *)((t24 + 0x1)) = t21;
                                t97 = t24;
                                t98 = t25;
                            }
                            t101 = t97;
                            t102 = t98;
                        }
                        t105 = t101;
                        t106 = t102;
                    }
                    t109 = t105;
                    t110 = t106;
                }
                t23 = (*(int *)0x8C343DCC);
                t24 = t109;
                t25 = t110;
                t24 = 0x6;
                if ((int)t23 > (int)t24) {
                    *(unsigned int *)0x8C343DCC = t24;
                }
                t23 = (*(int *)0x8C343DCC);
                if ((int)t23 < 0) {
                    *(unsigned int *)0x8C343DCC = 0x0;
                }
                t21 = (*(int *)0x8C343DD0);
                t21 = (t21 + 0x2);
                if ((int)t21 >= 0) {
                    t21 = (t21 & 0x1);
                } else {
                    t21 = (~t21);
                    t21 = (t21 + 0x1);
                    t21 = (t21 & 0x1);
                    t21 = (~t21);
                    t21 = (t21 + 0x1);
                }
                t24 = 0x3;
                *(unsigned int *)0x8C343DD0 = t21;
                if ((int)(*(int *)0x8C343DD4) > (int)t24) {
                    *(unsigned int *)0x8C343DD4 = t24;
                }
                if ((int)(*(int *)0x8C343DD4) < 0) {
                    *(unsigned int *)0x8C343DD4 = 0x0;
                }
            }
            t22 = t122;
            t26 = (t26 + 0x1);
            continue;
        }
        break;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 60)))); }
    menuItemDraw0((*(int *)0x8C343DCC), (*(int *)(((int)stk + 124))), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 56)))); }
    menuItemDraw1((*(int *)0x8C343DD0), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 28)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 64)))); }
    menuItemDraw2((*(int *)0x8C343DD4), (*(int *)(((int)stk + 132))), *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((*(int *)(((int)stk + 68)))); }
    panelLogoSwingDraw2((*(int *)(((int)stk + 136))), *(Stk3 *)(((int)stk + 4)));
    if ((*(int *)0x8C343DD8) != (*(int *)0x8C343DCC)) {
        sndSeCursor();
    }
    if ((*(int *)0x8C343DDC) != (*(int *)0x8C343DD0)) {
        sndSeCursor();
    }
    if ((*(int *)0x8C343DE0) != (*(int *)0x8C343DD4)) {
        sndSeCursor();
    }
    *(unsigned int *)0x8C343DD8 = (*(int *)0x8C343DCC);
    *(unsigned int *)0x8C343DDC = (*(int *)0x8C343DD0);
    *(unsigned int *)0x8C343DE0 = (*(int *)0x8C343DD4);
    if ((*(int *)0x8C343DCC) == 6) {
        *(unsigned int *)0x8C287C70 = 0x1;
    } else {
        *(unsigned int *)0x8C287C70 = 0x0;
    }
    return (*(int *)(((int)stk + 72)));
}

int courtAusDraw(int a4)
{
    int t1;
    int t2;
    int t4;
    int t11;
    int t56;
    int t57;
    int t61;
    int t65;
    int t68;
    int t112;
    int t161;
    int t6;
    int t55;
    int t155;
    int t157;
    int t151;
    int t153;
    int t107;
    int t109;
    int t103;
    int t105;
    int t83;
    int t87;
    int t88;
    int t99;
    int t101;
    int t147;
    int t149;
    int t127;
    int t131;
    int t132;
    int t143;
    int t145;
    int stk[63];

    *(unsigned int *)(((int)stk + 52)) = a4;
    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            t2 = t1;
            t1 = (t1 + 0x4);
            *(unsigned int *)(((((int)stk + 28) + 0x1C) + t2)) = (*(int *)((0x8C121A1C + t2)));
            if ((unsigned int)t1 >= (unsigned int)0xA0) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 40)) = 0x0;
        t6 = 0x1;
    } else {
        t4 = (((int)stk + 28) + 0x1C);
        for (;;) {
            *(unsigned int *)((t4 + 0x0)) = 0x1;
            t4 = (t4 + 0x4);
            if ((unsigned int)t4 >= (unsigned int)((((int)stk + 28) + 0x1C) + 0xA0)) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 40)) = 0x32;
        t6 = 0x0;
    }
    if ((*(int *)0x8C287D5C) == 0) {
        t11 = (((int)stk + 28) + 0x1C);
        for (;;) {
            *(unsigned int *)((t11 + 0x0)) = 0x1;
            t11 = (t11 + 0x4);
            if ((unsigned int)t11 >= (unsigned int)((((int)stk + 28) + 0x1C) + 0xA0)) {
                break;
            }
        }
    }
    if (7.0f > (*(float *)0x8C287A04)) {
        *(unsigned int *)(((int)stk + 40)) = 0xFA;
    }
    courtAusDrawScoreboard();
    camGetAngles((((int)stk + 28) + 0x10), (((int)stk + 28) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 44))), (*(short *)(((int)stk + 32))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    if (((*(int *)0x8C287B3C) & 64) == 0) {
        nlPushMatrix(0x0);
        nlTranslate(-117.0f, 0.0f, 23.2999992f);
        nlRotateAY(0x2AA8);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(112.0f, 0.0f, 169.0f);
        nlRotateAY(0xFFFF9C78);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
    }
    flareSunDraw(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlObjPut(0xC96E8C8);
    nlObjPutSetSpecularEyeDirectionF((*(float *)0x8C301BCC), (*(float *)0x8C301BD0), (*(float *)0x8C301BD4));
    nlSetCommonTextureOffset(0xF00);
    courtAusDrawSign(t6);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C18B8E8));
    crowdAnimModel((*(int *)0x8C18B97C), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
    nlObjPutLoadTexture((*(int *)0x8C18B97C), 0x8C13293C);
    nlObjPut((*(int *)0x8C18B97C));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 48)) = ((((*(int *)(((int)stk + 52))) == 0)) ? 1 : 0);
    t56 = a4;
    t57 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0x1C) + (t57 << 2)))) == 0) {
            *(unsigned int *)((0x8C34B290 + (t57 << 2))) = 0x0;
            t155 = t55;
            t157 = t56;
        } else {
            t55 = 0x8C18B1F8;
            t55 = (t55 + ((((t57 << 1) + t57) << 2) << 2));
            *(unsigned int *)(((int)stk + 28)) = t55;
            t55 = (t55 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t55); }
            t55 = (*(int *)(((int)stk + 28)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t55); }
            t56 = (*(int *)(((int)stk + 40)));
            t61 = screenSegVisible(t56, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (t61 == 0) {
                t55 = ((*(int *)(((int)stk + 28))) + 0x24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t55); }
                t55 = (*(int *)(((int)stk + 28)));
                t55 = (t55 + 0x18);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t55); }
                t56 = (*(int *)(((int)stk + 40)));
                t65 = screenSegVisible(t56, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                if (t65 != 0) {
                    t56 = t57;
                    t56 = (t56 << 1);
                    t56 = (*(short *)((t56 + 0x8C121878)));
                    t68 = courtAngleInSector(t56, (*(short *)(((int)stk + 32))));
                    if (t68 != 0) {
                        *(unsigned int *)(((int)stk + 28)) = (t57 << 2);
                        *(unsigned int *)((0x8C34B290 + (t57 << 2))) = 0x1;
                        t56 = (*(int *)(((*(int *)(((int)stk + 28))) + 0x8C18B8E8)));
                        nlObjPut(t56);
                        t55 = (*(int *)(((int)stk + 28)));
                        if ((*(int *)((t55 + 0x8C18B97C))) != 0) {
                            t56 = t57;
                            t56 = (t56 << 2);
                            t56 = (t56 + 0x8C18B97C);
                            *(unsigned int *)(((int)stk + 28)) = t56;
                            t56 = (*(int *)((t56 + 0x0)));
                            crowdAnimModel(t56, t57, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t56 = (*(int *)(((int)stk + 28)));
                            t56 = (*(int *)((t56 + 0x0)));
                            nlObjPutLoadTexture(t56, 0x8C13293C);
                            t56 = (*(int *)(((int)stk + 28)));
                            t56 = (*(int *)((t56 + 0x0)));
                            nlObjPut(t56);
                        } else {
                            t83 = t55;
                        }
                        t55 = t83;
                        t56 = t57;
                        t56 = (t56 << 2);
                        *(unsigned int *)(((int)stk + 28)) = 0x8C18BA10;
                        if (((*(int *)((t56 + 0x8C18BA10))) != 0) && ((t87 = *(int *)(((int)stk + 48)), t87 != 0) || (t88 = *(int *)((t56 + 0x8C121954)), t88 == 0))) {
                            t56 = t57;
                            t56 = (t56 << 2);
                            t55 = 0x8C08CEB6;
                            t56 = (t56 + (*(int *)(((int)stk + 28))));
                            *(unsigned int *)(((int)stk + 36)) = t56;
                            t56 = (*(int *)((t56 + 0x0)));
                            crowdAnimModel(t56, (t57 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t56 = (*(int *)(((int)stk + 36)));
                            t56 = (*(int *)((t56 + 0x0)));
                            nlObjPutLoadTexture(t56, 0x8C13293C);
                            t56 = (*(int *)(((int)stk + 36)));
                            t56 = (*(int *)((t56 + 0x0)));
                            nlObjPut(t56);
                        } else {
                            t99 = t55;
                            t101 = t56;
                        }
                        t103 = t99;
                        t105 = t101;
                    }
                    t107 = t103;
                    t109 = t105;
                }
                t151 = t107;
                t153 = t109;
            } else {
                t56 = t57;
                t56 = (t56 << 1);
                t56 = (*(short *)((t56 + 0x8C121878)));
                t112 = courtAngleInSector(t56, (*(short *)(((int)stk + 32))));
                if (t112 != 0) {
                    *(unsigned int *)(((int)stk + 28)) = (t57 << 2);
                    *(unsigned int *)((0x8C34B290 + (t57 << 2))) = 0x1;
                    t56 = (*(int *)(((*(int *)(((int)stk + 28))) + 0x8C18B8E8)));
                    nlObjPut(t56);
                    t55 = (*(int *)(((int)stk + 28)));
                    if ((*(int *)((t55 + 0x8C18B97C))) != 0) {
                        t56 = t57;
                        t56 = (t56 << 2);
                        t56 = (t56 + 0x8C18B97C);
                        *(unsigned int *)(((int)stk + 28)) = t56;
                        t56 = (*(int *)((t56 + 0x0)));
                        crowdAnimModel(t56, t57, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        t56 = (*(int *)(((int)stk + 28)));
                        t56 = (*(int *)((t56 + 0x0)));
                        nlObjPutLoadTexture(t56, 0x8C13293C);
                        t56 = (*(int *)(((int)stk + 28)));
                        t56 = (*(int *)((t56 + 0x0)));
                        nlObjPut(t56);
                    } else {
                        t127 = t55;
                    }
                    t55 = t127;
                    t56 = t57;
                    t56 = (t56 << 2);
                    *(unsigned int *)(((int)stk + 28)) = 0x8C18BA10;
                    if (((*(int *)((t56 + 0x8C18BA10))) != 0) && ((t131 = *(int *)(((int)stk + 48)), t131 != 0) || (t132 = *(int *)((t56 + 0x8C121954)), t132 == 0))) {
                        t56 = t57;
                        t56 = (t56 << 2);
                        t56 = (t56 + (*(int *)(((int)stk + 28))));
                        *(unsigned int *)(((int)stk + 36)) = t56;
                        t56 = (*(int *)((t56 + 0x0)));
                        crowdAnimModel(t56, (t57 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        t56 = (*(int *)(((int)stk + 36)));
                        t56 = (*(int *)((t56 + 0x0)));
                        nlObjPutLoadTexture(t56, 0x8C13293C);
                        t56 = (*(int *)(((int)stk + 36)));
                        t56 = (*(int *)((t56 + 0x0)));
                        nlObjPut(t56);
                    } else {
                        t143 = t55;
                        t145 = t56;
                    }
                    t147 = t143;
                    t149 = t145;
                }
                t151 = t147;
                t153 = t149;
            }
            t155 = t151;
            t157 = t153;
        }
        t55 = t155;
        t56 = t157;
        t57 = (t57 + 0x1);
        if ((int)t57 < (int)0x25) continue;
        break;
    }
    if ((*(int *)(((int)stk + 52))) != 0) {
        crowdAnimate();
        t161 = 0x0;
        for (;;) {
            if ((*(int *)((0x8C34B290 + (t161 << 2)))) != 0) {
                crowdDrawUsa(t161);
            }
            t161 = (t161 + 0x1);
            if ((unsigned int)t161 >= (unsigned int)0x94) {
                break;
            }
        }
    }
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0B8BBC), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0B8BC4));
    nlObjPut(0xC5204E0);
    return (nlPopMatrix(0x1));
}

void strmBgmPlay(int a4, int a5, int a6, int a7)
{
    int t4;
    int t7;
    int t16;
    int t18;
    int t23;
    int t26;
    int t31;
    int t36;
    int t41;
    int t46;
    int t66;
    int t72;
    int t78;
    int t84;
    int t90;
    int t96;
    int t102;
    int t108;
    int t114;
    int t120;
    int t126;
    int t131;
    int t136;
    int t138;
    int t146;
    int t151;
    int t157;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R13;
    int R14;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0D6F40:;
    *(unsigned int *)(((int)stk + 8)) = R4;
    R0 = (R4);
    if (((unsigned int)R4 < (unsigned int)0x17)) goto L_8C0D6F52;
    goto L_8C0D6F4E;
    L_8C0D6F4E:;
    goto L_8C0D722C;
    L_8C0D722C:;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_8C0D726A;
    goto L_8C0D7232;
    L_8C0D7232:;
    t4 = *(int *)(((int)stk + 8));
    R0 = (t4);
    if ((t4 == 13)) goto L_8C0D726A;
    goto L_8C0D7238;
    L_8C0D7238:;
    t7 = *(int *)(((int)stk + 8));
    R0 = (t7);
    if ((t7 == 14)) goto L_8C0D726A;
    goto L_8C0D723E;
    L_8C0D723E:;
    *(unsigned int *)0x8C40C220 = 0x0;
    *(unsigned int *)0x8C40C22C = (*(int *)(((int)stk + 8)));
    *(float *)0x8C40C228 = (float)(*(int *)0x8C38BA68);
    *(float *)0x8C40C224 = 0.0f;
    R0 = ((ADXT_SetOutVol((*(int *)0x8C38BA94), (int)(*(float *)0x8C40C228))));
    goto L_8C0D726A;
    L_8C0D726A:;
    return;
    L_8C0D6F52:;
    t16 = (R0 << 1);
    R0 = ((R0 << 1));
    switch (t16) { case 0: goto L_8C0D6F8E; case 2: goto L_8C0D6F96; case 4: goto L_8C0D6FB0; case 6: goto L_8C0D701C; case 8: goto L_8C0D7034; case 10: goto L_8C0D704C; case 12: goto L_8C0D7064; case 14: goto L_8C0D707C; case 16: goto L_8C0D7094; case 18: goto L_8C0D70AC; case 20: goto L_8C0D70C4; case 22: goto L_8C0D70DC; case 24: goto L_8C0D70F4; case 26: goto L_8C0D7142; case 28: goto L_8C0D7120; case 30: goto L_8C0D71AA; case 32: goto L_8C0D71BE; case 34: goto L_8C0D71D2; case 36: goto L_8C0D71E6; case 38: goto L_8C0D71FA; case 40: goto L_8C0D7008; case 42: goto L_8C0D720E; case 44: goto L_8C0D710C; }
    L_8C0D720E:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t18 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x1A);
    goto L_8C0D7220;
    L_8C0D7220:;
    t23 = ADXT_StartAfs(R4, R5, R6);
    *(unsigned int *)0x8C40C26C = (*(int *)(((int)stk + 8)));
    R0 = (t23);
    goto L_8C0D722C;
    L_8C0D71FA:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t26 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x18);
    goto L_8C0D7220;
    L_8C0D71E6:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t31 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x19);
    goto L_8C0D7220;
    L_8C0D71D2:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t36 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x17);
    goto L_8C0D7220;
    L_8C0D71BE:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t41 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x16);
    goto L_8C0D7220;
    L_8C0D71AA:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t46 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x15);
    goto L_8C0D7220;
    L_8C0D7142:;
    if (((*(int *)0x8C38BA60) != 127)) goto L_8C0D7184;
    goto L_8C0D714A;
    L_8C0D714A:;
    ADXT_StartAfs((*(int *)0x8C38BA94), 0x0, 0x1C);
    goto L_8C0D7188;
    L_8C0D7188:;
    *(float *)0x8C40C228 = 0.0f;
    *(float *)0x8C40C224 = 0.0f;
    R0 = ((ADXT_SetOutVol((*(int *)0x8C38BA94), (int)(*(float *)0x8C40C228))));
    goto L_8C0D71A2;
    L_8C0D71A2:;
    *(unsigned int *)0x8C40C26C = (*(int *)(((int)stk + 8)));
    goto L_8C0D722C;
    L_8C0D7184:;
    strmBgmVolTo(0x7F);
    goto L_8C0D7188;
    L_8C0D7120:;
    strmBgmVolTo(0x4B);
    *(float *)0x8C40C228 = 0.0f;
    *(float *)0x8C40C224 = 0.0f;
    R0 = ((ADXT_SetOutVol((*(int *)0x8C38BA94), (int)(*(float *)0x8C40C228))));
    goto L_8C0D71A2;
    L_8C0D710C:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t66 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x9);
    goto L_8C0D7220;
    L_8C0D70F4:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t72 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x13);
    goto L_8C0D7220;
    L_8C0D70DC:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t78 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x12);
    goto L_8C0D7220;
    L_8C0D70C4:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t84 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x11);
    goto L_8C0D7220;
    L_8C0D70AC:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t90 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x10);
    goto L_8C0D7220;
    L_8C0D7094:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t96 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0x14);
    goto L_8C0D7220;
    L_8C0D707C:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t102 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xF);
    goto L_8C0D7220;
    L_8C0D7064:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t108 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xE);
    goto L_8C0D7220;
    L_8C0D704C:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t114 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xD);
    goto L_8C0D7220;
    L_8C0D7034:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t120 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xC);
    goto L_8C0D7220;
    L_8C0D701C:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t126 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))((unsigned char)(*(signed char *)0x8C40C2FC), R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xB);
    goto L_8C0D7220;
    L_8C0D7008:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t131 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R4 = ((*(int *)0x8C38BA94));
    R5 = (0x0);
    R6 = (0xA);
    goto L_8C0D7220;
    L_8C0D6FB0:;
    t136 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    t138 = ADXT_GetStat((*(int *)0x8C38BA94));
    *(unsigned int *)(((int)stk + 4)) = t138;
    R0 = (t138);
    if ((t138 == 5)) goto L_8C0D6FD6;
    goto L_8C0D6FC2;
    L_8C0D6FC2:;
    if ((R0 == 0)) goto L_8C0D6FD6;
    goto L_8C0D6FC6;
    L_8C0D6FC6:;
    if (((*(int *)0x8C40C220) != 0)) goto L_8C0D6FD6;
    goto L_8C0D6FCE;
    L_8C0D6FCE:;
    if (((*(int *)0x8C40C26C) == 2)) goto L_8C0D6FE0;
    goto L_8C0D6FD6;
    L_8C0D6FD6:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t146 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x50, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    goto L_8C0D6FE0;
    L_8C0D6FE0:;
    if (((*(int *)(((int)stk + 4))) == 5)) goto L_8C0D6FF8;
    goto L_8C0D6FE6;
    L_8C0D6FE6:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C0D6FF8;
    goto L_8C0D6FEC;
    L_8C0D6FEC:;
    t151 = *(int *)0x8C40C26C;
    R0 = (t151);
    if ((t151 != 2)) goto L_8C0D6FF8;
    goto L_8C0D6FF4;
    L_8C0D6FF4:;
    goto L_8C0D71A2;
    L_8C0D6FF8:;
    R0 = ((ADXT_StartAfs((*(int *)0x8C38BA94), 0x0, 0x1B)));
    goto L_8C0D71A2;
    L_8C0D6F96:;
    *(unsigned int *)0x8C38BA60 = 0x7F;
    t157 = ((int (*)(int, int, int, int, int, int, int))(strmBgmSetVol))(0x3C, R5, R6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    R0 = ((ADXT_StartAfs((*(int *)0x8C38BA94), 0x0, 0x0)));
    goto L_8C0D71A2;
    L_8C0D6F8E:;
}
