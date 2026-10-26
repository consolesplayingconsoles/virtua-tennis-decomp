/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camGetAngles(int, int, int, int);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int courtWinDrawScoreboard(void);
int courtWinDrawSign(int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int crowdAnimate(void);
int crowdDrawWin(int);
int nlLineSetDiv(float);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int screenSegVisible(int, Stk3, Stk3);
int stageEspCourtDraw(int);
int stageEspScoreboardDraw(void);
int stageRusCourtDraw(int);
int stageRusScoreboardDraw(void);
int FUN_8c0b8fe4(int a4);
int FUN_8c0c44b6(int a4, int a5, int a6, int a7);
int FUN_8c0c3e62(int a4, int a5, int a6, int a7);

int FUN_8c0b8fe4(int a4)
{
    int t1;
    int t3;
    int t33;
    int t40;
    int t42;
    int t137;
    int t5;
    int t7;
    int t32;
    int t69;
    int t70;
    int t113;
    int t114;
    int stk[64];

    *(unsigned int *)(((int)stk + 44)) = a4;
    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((((int)stk + 28) + 0x1C) + t1)) = (*(int *)((0x8C122014 + t1)));
            t1 = (t1 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0xA0) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        t5 = 0x1;
        t7 = 0x8C122014;
    } else {
        t3 = (((int)stk + 28) + 0x1C);
        for (;;) {
            *(unsigned int *)((t3 + 0x0)) = 0x1;
            t3 = (t3 + 0x4);
            if ((unsigned int)t3 >= (unsigned int)((((int)stk + 28) + 0x1C) + 0xA0)) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 36)) = 0x46;
        t5 = 0x0;
        t7 = ((((int)stk + 28) + 0x1C) + 0xA0);
    }
    if ((*(int *)0x8C287B44) == 5) {
        *(unsigned int *)(((int)stk + 52)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 52)) = 0x0;
    }
    camGetAngles((((int)stk + 28) + 0xC), (((int)stk + 28) + 0x4), 0x8C287ACC, t7);
    courtDrawStageModels((*(short *)(((int)stk + 40))), (*(short *)(((int)stk + 32))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    courtWinDrawScoreboard();
    if (((*(int *)0x8C287B3C) & 64) == 0) {
        nlPushMatrix(0x0);
        nlTranslate(-141.5f, -5.0f, 0.0f);
        nlRotateAY(0x532E);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
    }
    nlObjPut(0xC8ED4A0);
    nlSetCommonTextureOffset(0xF00);
    courtWinDrawSign(t5);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C121AE4));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 48)) = ((((*(int *)(((int)stk + 44))) == 0)) ? 1 : 0);
    t33 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0x1C) + (t33 << 2)))) == 0) {
            *(unsigned int *)(((t33 << 2) + 0x8C34B324)) = 0x0;
        } else {
            t32 = t33;
            t32 = (t32 << 1);
            t32 = (t32 + t33);
            t32 = (t32 << 2);
            t32 = (t32 << 2);
            *(unsigned int *)(((int)stk + 28)) = ((courtAngleInSector((*(short *)(((t33 << 1) + 0x8C121E80))), (*(short *)(((int)stk + 32))))) | (*(int *)(((int)stk + 52))));
            t32 = (t32 + 0x8C18BBE8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t32 + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t32); }
            t40 = screenSegVisible((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (t40 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t32 + 0x24)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((t32 + 0x18)); }
                t42 = screenSegVisible((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                if (t42 != 0) {
                    if ((*(int *)(((int)stk + 28))) == 0) {
                    } else {
                        *(unsigned int *)(((t33 << 2) + 0x8C34B324)) = 0x1;
                        nlPushMatrix(0x0);
                        t32 = t33;
                        t32 = (t32 << 2);
                        t32 = (t32 << 1);
                        *(unsigned int *)(((int)stk + 28)) = (0x8C121AE4 + t32);
                        nlRotateAY((-(unsigned short)(*(short *)(((0x8C121AE4 + t32) + 0x4)))));
                        nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                        nlPopMatrix(0x1);
                        if ((*(int *)((t32 + 0x8C121BEC))) != 0) {
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 28)) = (0x8C121BEC + t32);
                            crowdAnimModel((*(int *)(((0x8C121BEC + t32) + 0x0))), t33, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C);
                            nlRotateAY((-(unsigned short)(*(short *)(((*(int *)(((int)stk + 28))) + 0x4)))));
                            nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                            nlPopMatrix(0x1);
                        }
                        if (((*(int *)((t32 + 0x8C121CF4))) != 0) && ((t69 = *(int *)(((int)stk + 48)), t69 != 0) || (t70 = *(int *)(((t33 << 2) + 0x8C121EC4)), t70 == 0))) {
                            *(unsigned int *)(((int)stk + 28)) = (0x8C121CF4 + t32);
                            crowdAnimModel((*(int *)(((0x8C121CF4 + t32) + 0x0))), (t33 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C);
                            nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                        }
                    }
                }
            } else {
                if ((*(int *)(((int)stk + 28))) == 0) {
                } else {
                    *(unsigned int *)(((t33 << 2) + 0x8C34B324)) = 0x1;
                    nlPushMatrix(0x0);
                    t32 = t33;
                    t32 = (t32 << 2);
                    t32 = (t32 << 1);
                    *(unsigned int *)(((int)stk + 28)) = (0x8C121AE4 + t32);
                    nlRotateAY((-(unsigned short)(*(short *)(((0x8C121AE4 + t32) + 0x4)))));
                    nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                    nlPopMatrix(0x1);
                    if ((*(int *)((t32 + 0x8C121BEC))) != 0) {
                        nlPushMatrix(0x0);
                        *(unsigned int *)(((int)stk + 28)) = (0x8C121BEC + t32);
                        crowdAnimModel((*(int *)(((0x8C121BEC + t32) + 0x0))), t33, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C);
                        nlRotateAY((-(unsigned short)(*(short *)(((*(int *)(((int)stk + 28))) + 0x4)))));
                        nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                        nlPopMatrix(0x1);
                    }
                    if (((*(int *)((t32 + 0x8C121CF4))) != 0) && ((t113 = *(int *)(((int)stk + 48)), t113 != 0) || (t114 = *(int *)(((t33 << 2) + 0x8C121EC4)), t114 == 0))) {
                        *(unsigned int *)(((int)stk + 28)) = (0x8C121CF4 + t32);
                        crowdAnimModel((*(int *)(((0x8C121CF4 + t32) + 0x0))), (t33 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C);
                        nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))));
                    }
                }
            }
        }
        t33 = (t33 + 0x1);
        if ((int)t33 < (int)0x21) continue;
        break;
    }
    if ((*(int *)(((int)stk + 44))) != 0) {
        crowdAnimate();
        t137 = 0x0;
        for (;;) {
            if ((*(int *)(((t137 << 2) + 0x8C34B324))) != 0) {
                crowdDrawWin(t137);
            }
            t137 = (t137 + 0x1);
            if ((unsigned int)t137 >= (unsigned int)0x8C) {
                break;
            }
        }
    }
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlLineSetDiv(1.20000005f);
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c44b6(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t4;
    int t26;
    int t28;
    int t29;
    int t32;
    int t55;
    float u84;
    int t6;
    int t9;
    int t24;
    int t25;
    int stk[59];

    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            t2 = t1;
            t1 = (t1 + 0x4);
            *(unsigned int *)(((((int)stk + 28) + 0x8) + t2)) = (*(int *)((0x8C1244EC + t2)));
            if ((unsigned int)t1 >= (unsigned int)0xA0) {
                break;
            }
        }
        t6 = 0x1;
        t9 = 0x8C1244EC;
    } else {
        t4 = (((int)stk + 28) + 0x8);
        for (;;) {
            *(unsigned int *)((t4 + 0x0)) = 0x1;
            t4 = (t4 + 0x4);
            if ((unsigned int)t4 >= (unsigned int)((((int)stk + 28) + 0x8) + 0xA0)) {
                break;
            }
        }
        t6 = 0x0;
        t9 = ((((int)stk + 28) + 0x8) + 0xA0);
    }
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), t9, a7);
    stageEspScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlPushMatrix(0x0);
    nlObjPut(0xC97BD08);
    nlPopMatrix(0x1);
    nlSetCommonTextureOffset(0xF00);
    stageEspCourtDraw(t6);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C1AEA50));
    nlPopMatrix(0x1);
    t26 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0x8) + (t26 << 2)))) != 0) {
            t25 = t26;
            t25 = (t25 << 1);
            t25 = (t25 + t26);
            t24 = 0x8C1AE390;
            t25 = (t25 << 2);
            t25 = (t25 << 2);
            t25 = (t25 + t24);
            t24 = t25;
            t24 = (t24 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t24); }
            t24 = t25;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t24); }
            t28 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (t28 == 0) {
                t24 = t25;
                t24 = (t24 + 0x24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t24); }
                t24 = t25;
                t24 = (t24 + 0x18);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t24); }
                t29 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                if (t29 != 0) {
                    t32 = courtAngleInSector((*(short *)(((t26 << 1) + 0x8C1244A4))), (*(short *)(((int)stk + 28))));
                    if (t32 != 0) {
                        *(unsigned int *)(((t26 << 2) + 0x8C37BAC0)) = 0x1;
                        nlObjPut((*(int *)(((t26 << 2) + 0x8C1AEA50))));
                        if ((*(int *)(((t26 << 2) + 0x8C1AEAE0))) != 0) {
                            nlPushMatrix(0x0);
                            t25 = 0x8C1AEAE0;
                            t24 = 0x8C08CEB6;
                            t25 = (t25 + (t26 << 2));
                            crowdAnimModel((*(int *)((t25 + 0x0))), t26, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)((t25 + 0x0))), 0x8C13293C);
                            nlObjPut((*(int *)((t25 + 0x0))));
                            t24 = 0x8C0EFCD0;
                            nlPopMatrix(0x1);
                        }
                    }
                }
            } else {
                t55 = courtAngleInSector((*(short *)(((t26 << 1) + 0x8C1244A4))), (*(short *)(((int)stk + 28))));
                if (t55 != 0) {
                    *(unsigned int *)(((t26 << 2) + 0x8C37BAC0)) = 0x1;
                    nlObjPut((*(int *)(((t26 << 2) + 0x8C1AEA50))));
                    if ((*(int *)(((t26 << 2) + 0x8C1AEAE0))) != 0) {
                        nlPushMatrix(0x0);
                        t25 = 0x8C1AEAE0;
                        t24 = 0x8C08CEB6;
                        t25 = (t25 + (t26 << 2));
                        crowdAnimModel((*(int *)((t25 + 0x0))), t26, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)((t25 + 0x0))), 0x8C13293C);
                        nlObjPut((*(int *)((t25 + 0x0))));
                        t24 = 0x8C0EFCD0;
                        nlPopMatrix(0x1);
                    }
                }
            }
        } else {
            *(unsigned int *)(((t26 << 2) + 0x8C37BAC0)) = 0x0;
        }
        t24 = 0x24;
        t26 = (t26 + 0x1);
        if ((int)t26 < (int)t24) continue;
        break;
    }
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C4754), 0.0f);
    u84 = *(float *)0x8C0C475C;
    nlScale(1.0f, 1.0f, u84);
    nlLineSetDiv(u84);
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c3e62(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t21;
    int t23;
    int t24;
    int t53;
    int t27;
    int t49;
    int t45;
    int t59;
    int t81;
    int t77;
    int t5;
    int t7;
    int t19;
    int t20;
    int t89;
    int t85;
    int stk[57];

    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((((int)stk + 28) + 0x8) + t1)) = (*(int *)((0x8C124374 + t1)));
            t1 = (t1 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0xA0) {
                break;
            }
        }
        t5 = 0x1;
        t7 = 0x8C124374;
    } else {
        t3 = (((int)stk + 28) + 0x8);
        for (;;) {
            *(unsigned int *)((t3 + 0x0)) = 0x1;
            t3 = (t3 + 0x4);
            if ((unsigned int)t3 >= (unsigned int)((((int)stk + 28) + 0x8) + 0xA0)) {
                break;
            }
        }
        t5 = 0x0;
        t7 = ((((int)stk + 28) + 0x8) + 0xA0);
    }
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), t7, a7);
    stageRusScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlSetCommonTextureOffset(0xF00);
    stageRusCourtDraw(t5);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C1241B0));
    nlPopMatrix(0x1);
    t21 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0x8) + (t21 << 2)))) == 0) {
            *(unsigned int *)(((t21 << 2) + 0x8C37BA20)) = 0x0;
            t89 = 0x8C37BA20;
        } else {
            t20 = t21;
            t20 = (t20 << 1);
            t20 = (t20 + t21);
            t19 = 0x8C1ADDA8;
            t20 = (t20 << 2);
            t20 = (t20 << 2);
            t20 = (t20 + t19);
            t19 = t20;
            t19 = (t19 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t19); }
            t19 = t20;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t19); }
            t19 = 0x8C08A0C0;
            t23 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (t23 == 0) {
                t19 = t20;
                t19 = (t19 + 0x24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t19); }
                t19 = t20;
                t19 = (t19 + 0x18);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t19); }
                t24 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                t53 = t24;
                if (t24 != 0) {
                    t27 = courtAngleInSector((*(short *)(((t21 << 1) + 0x8C124340))), (*(short *)(((int)stk + 28))));
                    t49 = t27;
                    if (t27 != 0) {
                        *(unsigned int *)(((t21 << 2) + 0x8C37BA20)) = 0x1;
                        nlPushMatrix(0x0);
                        t20 = t21;
                        t20 = (t20 << 2);
                        t20 = (t20 << 1);
                        nlRotateAY((-(unsigned short)(*(short *)(((0x8C1241B0 + t20) + 0x4)))));
                        t19 = 0x8C0F25B0;
                        nlObjPut((*(int *)(((0x8C1241B0 + t20) + 0x0))));
                        nlPopMatrix(0x1);
                        t45 = 0x8C124278;
                        if ((*(int *)((t20 + 0x8C124278))) != 0) {
                            nlPushMatrix(0x0);
                            nlRotateAY((-(unsigned short)(*(short *)(((0x8C124278 + t20) + 0x4)))));
                            t19 = 0x8C08CEB6;
                            crowdAnimModel((*(int *)(((0x8C124278 + t20) + 0x0))), t21, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)(((0x8C124278 + t20) + 0x0))), 0x8C13293C);
                            t19 = 0x8C0F25B0;
                            nlObjPut((*(int *)(((0x8C124278 + t20) + 0x0))));
                            t45 = (nlPopMatrix(0x1));
                        }
                        t49 = t45;
                    }
                    t53 = t49;
                }
                t85 = t53;
            } else {
                t59 = courtAngleInSector((*(short *)(((t21 << 1) + 0x8C124340))), (*(short *)(((int)stk + 28))));
                t81 = t59;
                if (t59 != 0) {
                    *(unsigned int *)(((t21 << 2) + 0x8C37BA20)) = 0x1;
                    nlPushMatrix(0x0);
                    t20 = t21;
                    t20 = (t20 << 2);
                    t20 = (t20 << 1);
                    nlRotateAY((-(unsigned short)(*(short *)(((0x8C1241B0 + t20) + 0x4)))));
                    nlObjPut((*(int *)(((0x8C1241B0 + t20) + 0x0))));
                    nlPopMatrix(0x1);
                    t77 = 0x8C124278;
                    if ((*(int *)((t20 + 0x8C124278))) != 0) {
                        nlPushMatrix(0x0);
                        nlRotateAY((-(unsigned short)(*(short *)(((0x8C124278 + t20) + 0x4)))));
                        t19 = 0x8C08CEB6;
                        crowdAnimModel((*(int *)(((0x8C124278 + t20) + 0x0))), t21, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)(((0x8C124278 + t20) + 0x0))), 0x8C13293C);
                        t19 = 0x8C0F25B0;
                        nlObjPut((*(int *)(((0x8C124278 + t20) + 0x0))));
                        t77 = (nlPopMatrix(0x1));
                    }
                    t81 = t77;
                }
                t85 = t81;
            }
            t89 = t85;
        }
        t19 = 0x19;
        t21 = (t21 + 0x1);
        if ((int)t21 < (int)t19) continue;
        break;
    }
    return t89;
}
