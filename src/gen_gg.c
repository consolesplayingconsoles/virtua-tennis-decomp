/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camGetAngles(int, int, int, int);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int courtFraDrawAnim(void);
int courtFraDrawScoreboard(void);
int courtFraDrawSign(int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int crowdAnimate(void);
int crowdDrawFra(int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int screenSegVisible(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_8c0b7070(int a4, int a5, int a6, int a7);

int FUN_8c0b7070(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t8;
    int t33;
    int t46;
    int t47;
    int t49;
    int t52;
    int t56;
    int t59;
    int t141;
    int t156;
    int t238;
    int t260;
    int t10;
    int t14;
    int t15;
    int t45;
    int t252;
    int t255;
    int t246;
    int t249;
    int t149;
    int t152;
    int t143;
    int t146;
    int t65;
    int t79;
    int t80;
    int t81;
    int t116;
    int t118;
    int t138;
    int t123;
    int t126;
    int t132;
    int t135;
    int t240;
    int t243;
    int t162;
    int t176;
    int t177;
    int t178;
    int t213;
    int t215;
    int t235;
    int t220;
    int t223;
    int t229;
    int t232;
    int stk[104];

    *(unsigned int *)(((int)stk + 40)) = a4;
    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            t2 = t1;
            t1 = (t1 + 0x4);
            *(unsigned int *)(((((int)stk + 28) + 0x1C) + t2)) = (*(int *)((0x8C120E20 + t2)));
            if ((unsigned int)t1 >= (unsigned int)0x8C) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 44)) = 0x1E;
        if ((*(int *)0x8C287ADC) == 4) {
            *(unsigned int *)0x8C18A84C = ((*(int *)0x8C18A84C) - 1);
        }
        t10 = 0x1;
        t14 = 0x8C287ACC;
        t15 = 0x8C120E20;
    } else {
        t8 = (((int)stk + 28) + 0x1C);
        for (;;) {
            *(unsigned int *)((t8 + 0x0)) = 0x1;
            t8 = (t8 + 0x4);
            if ((unsigned int)t8 >= (unsigned int)((((int)stk + 28) + 0x1C) + 0x8C)) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 44)) = 0x3C;
        *(unsigned int *)0x8C18A84C = 0x2;
        t10 = 0x0;
        t14 = ((((int)stk + 28) + 0x1C) + 0x8C);
        t15 = a7;
    }
    *(unsigned int *)0x8C18A84C = 0x2;
    camGetAngles((((int)stk + 28) + 0x14), (((int)stk + 28) + 0x8), t14, t15);
    courtFraDrawAnim();
    courtFraDrawScoreboard();
    courtDrawStageModels((*(short *)(((int)stk + 48))), (*(short *)(((int)stk + 36))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    *(unsigned int *)0x8C18A84C = 0x3;
    if (((*(int *)0x8C287B3C) & 64) == 0) {
        nlPushMatrix(0x0);
        nlTranslate(126.5f, 0.0f, 1.20000005f);
        nlRotateAY(0xFFFFDB06);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    t33 = *(short *)0x8C18A848;
    *(unsigned short *)0x8C18A848 = (t33 + 0x1);
    nlRotateAY((unsigned short)(t33 + 0x1));
    nlObjPut(0xC97D7D0);
    nlPopMatrix(0x1);
    nlObjPut(0xC97E490);
    courtFraDrawSign(t10);
    nlSetCommonTextureOffset(0xF00);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C18A594));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 52)) = ((((*(int *)(((int)stk + 40))) == 0)) ? 1 : 0);
    t46 = a4;
    t47 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0x1C) + (t47 << 2)))) == 0) {
            *(unsigned int *)(((t47 << 2) + 0x8C34B150)) = 0x0;
            t252 = t45;
            t255 = t46;
        } else {
            t45 = t47;
            t45 = (t45 << 1);
            t45 = (t45 + t47);
            t45 = (t45 << 2);
            t45 = (t45 << 2);
            *(unsigned int *)(((int)stk + 28)) = (0x8C189FC4 + t45);
            t49 = ((0x8C189FC4 + t45) + 0xC);
            t45 = ((int)stk + 16);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t49); }
            t45 = ((int)stk + 4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)((*(int *)(((int)stk + 28)))); }
            t46 = (*(int *)(((int)stk + 44)));
            t52 = screenSegVisible(t46, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t52 == 0) {
                t45 = ((int)stk + 16);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(((*(int *)(((int)stk + 28))) + 0x24)); }
                t45 = ((int)stk + 4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(((*(int *)(((int)stk + 28))) + 0x18)); }
                t46 = (*(int *)(((int)stk + 44)));
                t56 = screenSegVisible(t46, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if (t56 == 0) {
                } else {
                    t46 = t47;
                    t46 = (t46 << 1);
                    t46 = (*(short *)((t46 + 0x8C120C38)));
                    t59 = courtAngleInSector(t46, (*(short *)(((int)stk + 36))));
                    if (t59 == 0) {
                    } else {
                        *(unsigned int *)(((int)stk + 32)) = (t47 << 2);
                        *(unsigned int *)(((t47 << 2) + 0x8C34B150)) = 0x1;
                        t46 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x8C18A594)));
                        nlObjPut(t46);
                        *(unsigned int *)(((int)stk + 28)) = 0x8C18A610;
                        if (((*(int *)((0x8C18A610 + (*(int *)(((int)stk + 32)))))) != 0) && (t45 = 0x8C18A84C, t65 = *(int *)((t45 + 0x0)), (int)t65 > 0)) {
                            t46 = t47;
                            t46 = (t46 << 2);
                            t46 = (t46 + (*(int *)(((int)stk + 28))));
                            *(unsigned int *)(((int)stk + 32)) = t46;
                            t46 = (*(int *)((t46 + 0x0)));
                            crowdAnimModel(t46, t47, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = (*(int *)(((int)stk + 32)));
                            t46 = (*(int *)((t46 + 0x0)));
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = (*(int *)(((int)stk + 32)));
                            t46 = (*(int *)((t46 + 0x0)));
                            nlObjPut(t46);
                        }
                        t46 = t47;
                        t46 = (t46 << 2);
                        *(unsigned int *)(((int)stk + 28)) = 0x8C18A68C;
                        if (((*(int *)((t46 + 0x8C18A68C))) != 0) && ((t79 = *(int *)0x8C18A84C, (int)t79 > 0) && ((t80 = *(int *)(((int)stk + 52)), t80 != 0) || (t81 = *(int *)((t46 + 0x8C120D08)), t81 == 0)))) {
                            t46 = t47;
                            t46 = (t46 << 2);
                            t46 = (t46 + (*(int *)(((int)stk + 28))));
                            *(unsigned int *)(((int)stk + 32)) = t46;
                            t46 = (*(int *)((t46 + 0x0)));
                            crowdAnimModel(t46, (t47 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = (*(int *)(((int)stk + 32)));
                            t46 = (*(int *)((t46 + 0x0)));
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = (*(int *)(((int)stk + 32)));
                            t46 = (*(int *)((t46 + 0x0)));
                            nlObjPut(t46);
                            if (t47 == 4) {
                                t46 = 0xC9BB278;
                                crowdAnimModel(t46, 0x65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xC9BB278;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xC9BB278;
                                nlObjPut(t46);
                                t46 = 0xC9BC848;
                                crowdAnimModel(t46, 0x66, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xC9BC848;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xC9BC848;
                                nlObjPut(t46);
                            }
                            if (t47 == 27) {
                                t46 = 0xCA10538;
                                crowdAnimModel(t46, 0x67, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xCA10538;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xCA10538;
                                nlObjPut(t46);
                                t46 = 0xCA10B70;
                                crowdAnimModel(t46, 0x68, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xCA10B70;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xCA10B70;
                                nlObjPut(t46);
                                t46 = 0xCA11350;
                                crowdAnimModel(t46, 0x69, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xCA11350;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xCA11350;
                                nlObjPut(t46);
                                t46 = 0xCA12508;
                                crowdAnimModel(t46, 0x69, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xCA12508;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xCA12508;
                                nlObjPut(t46);
                            }
                        } else {
                            t116 = t46;
                        }
                        t46 = t116;
                        t141 = t46;
                        if (((*(int *)(((int)stk + 40))) != 0) && (t45 = 0x8C18A84C, t118 = *(int *)((t45 + 0x0)), (int)t118 > (int)0x1)) {
                            if (t47 == 4) {
                                t46 = 0xC9B9B90;
                                crowdAnimModel(t46, 0x64, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xC9B9B90;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xC9B9B90;
                                nlObjPut(t46);
                            } else {
                                t123 = t45;
                                t126 = t46;
                            }
                            t45 = t123;
                            t46 = t126;
                            if (t47 == 27) {
                                t46 = 0xCA0F068;
                                crowdAnimModel(t46, 0x65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                                t46 = 0xCA0F068;
                                nlObjPutLoadTexture(t46, 0x8C13293C);
                                t46 = 0xCA0F068;
                                nlObjPut(t46);
                            } else {
                                t132 = t45;
                                t135 = t46;
                            }
                            t138 = t132;
                            t141 = t135;
                        }
                        t143 = t138;
                        t146 = t141;
                    }
                    t149 = t143;
                    t152 = t146;
                }
                t246 = t149;
                t249 = t152;
            } else {
                t46 = t47;
                t46 = (t46 << 1);
                t46 = (*(short *)((t46 + 0x8C120C38)));
                t156 = courtAngleInSector(t46, (*(short *)(((int)stk + 36))));
                if (t156 == 0) {
                } else {
                    *(unsigned int *)(((int)stk + 32)) = (t47 << 2);
                    *(unsigned int *)(((t47 << 2) + 0x8C34B150)) = 0x1;
                    t46 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x8C18A594)));
                    nlObjPut(t46);
                    *(unsigned int *)(((int)stk + 28)) = 0x8C18A610;
                    if (((*(int *)((0x8C18A610 + (*(int *)(((int)stk + 32)))))) != 0) && (t45 = 0x8C18A84C, t162 = *(int *)((t45 + 0x0)), (int)t162 > 0)) {
                        t46 = t47;
                        t46 = (t46 << 2);
                        t46 = (t46 + (*(int *)(((int)stk + 28))));
                        *(unsigned int *)(((int)stk + 32)) = t46;
                        t46 = (*(int *)((t46 + 0x0)));
                        crowdAnimModel(t46, t47, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        t46 = (*(int *)(((int)stk + 32)));
                        t46 = (*(int *)((t46 + 0x0)));
                        nlObjPutLoadTexture(t46, 0x8C13293C);
                        t46 = (*(int *)(((int)stk + 32)));
                        t46 = (*(int *)((t46 + 0x0)));
                        nlObjPut(t46);
                    }
                    t46 = t47;
                    t46 = (t46 << 2);
                    *(unsigned int *)(((int)stk + 28)) = 0x8C18A68C;
                    if (((*(int *)((t46 + 0x8C18A68C))) != 0) && ((t176 = *(int *)0x8C18A84C, (int)t176 > 0) && ((t177 = *(int *)(((int)stk + 52)), t177 != 0) || (t178 = *(int *)((t46 + 0x8C120D08)), t178 == 0)))) {
                        t46 = t47;
                        t46 = (t46 << 2);
                        t46 = (t46 + (*(int *)(((int)stk + 28))));
                        *(unsigned int *)(((int)stk + 32)) = t46;
                        t46 = (*(int *)((t46 + 0x0)));
                        crowdAnimModel(t46, (t47 + 0x28), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        t46 = (*(int *)(((int)stk + 32)));
                        t46 = (*(int *)((t46 + 0x0)));
                        nlObjPutLoadTexture(t46, 0x8C13293C);
                        t46 = (*(int *)(((int)stk + 32)));
                        t46 = (*(int *)((t46 + 0x0)));
                        nlObjPut(t46);
                        if (t47 == 4) {
                            t46 = 0xC9BB278;
                            crowdAnimModel(t46, 0x65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xC9BB278;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xC9BB278;
                            nlObjPut(t46);
                            t46 = 0xC9BC848;
                            crowdAnimModel(t46, 0x66, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xC9BC848;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xC9BC848;
                            nlObjPut(t46);
                        }
                        if (t47 == 27) {
                            t46 = 0xCA10538;
                            crowdAnimModel(t46, 0x67, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xCA10538;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xCA10538;
                            nlObjPut(t46);
                            t46 = 0xCA10B70;
                            crowdAnimModel(t46, 0x68, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xCA10B70;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xCA10B70;
                            nlObjPut(t46);
                            t46 = 0xCA11350;
                            crowdAnimModel(t46, 0x69, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xCA11350;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xCA11350;
                            nlObjPut(t46);
                            t46 = 0xCA12508;
                            crowdAnimModel(t46, 0x69, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xCA12508;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xCA12508;
                            nlObjPut(t46);
                        }
                    } else {
                        t213 = t46;
                    }
                    t46 = t213;
                    t238 = t46;
                    if (((*(int *)(((int)stk + 40))) != 0) && (t45 = 0x8C18A84C, t215 = *(int *)((t45 + 0x0)), (int)t215 > (int)0x1)) {
                        if (t47 == 4) {
                            t46 = 0xC9B9B90;
                            crowdAnimModel(t46, 0x64, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xC9B9B90;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xC9B9B90;
                            nlObjPut(t46);
                        } else {
                            t220 = t45;
                            t223 = t46;
                        }
                        t45 = t220;
                        t46 = t223;
                        if (t47 == 27) {
                            t46 = 0xCA0F068;
                            crowdAnimModel(t46, 0x65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            t46 = 0xCA0F068;
                            nlObjPutLoadTexture(t46, 0x8C13293C);
                            t46 = 0xCA0F068;
                            nlObjPut(t46);
                        } else {
                            t229 = t45;
                            t232 = t46;
                        }
                        t235 = t229;
                        t238 = t232;
                    }
                    t240 = t235;
                    t243 = t238;
                }
                t246 = t240;
                t249 = t243;
            }
            t252 = t246;
            t255 = t249;
        }
        t45 = t252;
        t46 = t255;
        t47 = (t47 + 0x1);
        if ((int)t47 < (int)0x1F) continue;
        break;
    }
    if ((*(int *)(((int)stk + 40))) != 0) {
        crowdAnimate();
        t260 = 0x0;
        for (;;) {
            if ((*(int *)(((t260 << 2) + 0x8C34B150))) != 0) {
                crowdDrawFra(t260);
            }
            t260 = (t260 + 0x1);
            if ((unsigned int)t260 >= (unsigned int)0xA0) {
                break;
            }
        }
    }
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0B74E4), 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlObjPut(0xC5205D8);
    return (nlPopMatrix(0x1));
}
