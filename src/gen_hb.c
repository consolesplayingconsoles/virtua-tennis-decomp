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

