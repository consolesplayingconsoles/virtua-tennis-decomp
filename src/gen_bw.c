/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int miniPointPopSpawn(int, Stk3);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int set_event(int, int);
int stageEspScoreDigits(int);
int stageRusScoreDigits(int);
float vecDistXZf(int, int, int, int, float, float, float, float);
int stageEspScoreboardDraw(void);
int stageRusScoreboardDraw(void);
float cpuDblCoverPos(int a4);
int miniWallTargetsHit(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int evEndingThrowSpawn(int a4);
int lineJudgeCall(int a4, int a5, float f4, float f5);

int stageEspScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t26;
    int t33;
    int t67;
    int t133;
    int t153;
    int t31;
    int t13;
    int t24;
    int t18;
    float u46;
    float u47;
    float u48;
    int t116;
    int t117;
    int stk[21];

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 28)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 24)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t24 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t18 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t18 = 0x6;
            }
            t24 = t18;
        }
        t31 = t24;
    } else {
        t26 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t31 = t26;
    }
    t33 = (int)((int)t31 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C12458C;
        u46 = (*(float *)0x8C12458C);
        u47 = (*(float *)0x8C124590);
        u48 = (*(float *)0x8C124594);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124598;
        u46 = (*(float *)0x8C124598);
        u47 = (*(float *)0x8C12459C);
        u48 = (*(float *)0x8C1245A0);
    }
    nlTranslate(u46, u47, u48);
    nlRotateAY(0x8000);
    nlObjPut(0xC88C480);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C1245A4;
        nlTranslate((*(float *)0x8C1245A4), (*(float *)0x8C1245A8), (*(float *)0x8C1245AC));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AEB88))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t67 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t67 + 0xC);
        nlTranslate((*(float *)(((t67 + 0xC) + 0x0))), (*(float *)(((t67 + 0xC) + 0x4))), (*(float *)(((t67 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        t116 = 0x8C1AEB88;
        t117 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C1245EC;
        nlTranslate((*(float *)0x8C1245EC), (*(float *)0x8C1245F0), (*(float *)0x8C1245F4));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AEBD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C1245F8;
        nlTranslate((*(float *)0x8C1245F8), (*(float *)0x8C1245FC), (*(float *)0x8C124600));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C1AEBD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C124604;
        nlTranslate((*(float *)0x8C124604), (*(float *)0x8C124608), (*(float *)0x8C12460C));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C1AEBD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124610;
        nlTranslate((*(float *)0x8C124610), (*(float *)0x8C124614), (*(float *)0x8C124618));
        nlRotateAY(0x8000);
        t116 = 0x8C1AEBD0;
        t117 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t117 + t116))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C1245D4;
    nlTranslate((*(float *)0x8C1245D4), (*(float *)0x8C1245D8), (*(float *)0x8C1245DC));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C1AEC34))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t133 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t133 + 0xC);
    nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C1AEC34))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1245BC;
        nlTranslate((*(float *)0x8C1245BC), (*(float *)0x8C1245C0), (*(float *)0x8C1245C4));
        nlRotateAY(0x8000);
        stageEspScoreDigits(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t153 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t153 + 0xC) + 0x0))), (*(float *)(((t153 + 0xC) + 0x4))), (*(float *)(((t153 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        stageEspScoreDigits((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1245BC;
        nlTranslate((*(float *)0x8C1245BC), (*(float *)0x8C1245C0), (*(float *)0x8C1245C4));
        nlRotateAY(0x8000);
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C1AEC18))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C1245C8), (*(float *)0x8C1245CC), (*(float *)0x8C1245D0));
        nlRotateAY(0x8000);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C1AEC18))));
        }
    }
    return (nlPopMatrix(0x1));
}

int stageRusScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t26;
    int t33;
    int t67;
    int t133;
    int t153;
    int t31;
    int t13;
    int t24;
    int t18;
    float u46;
    float u47;
    float u48;
    int t116;
    int t117;
    int stk[21];

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 28)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 24)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t24 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t18 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t18 = 0x6;
            }
            t24 = t18;
        }
        t31 = t24;
    } else {
        t26 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t31 = t26;
    }
    t33 = (int)((int)t31 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124414;
        u46 = (*(float *)0x8C124414);
        u47 = (*(float *)0x8C124418);
        u48 = (*(float *)0x8C12441C);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124420;
        u46 = (*(float *)0x8C124420);
        u47 = (*(float *)0x8C124424);
        u48 = (*(float *)0x8C124428);
    }
    nlTranslate(u46, u47, u48);
    nlRotateAY(0x1555);
    nlObjPut(0xC88CD28);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C12442C;
        nlTranslate((*(float *)0x8C12442C), (*(float *)0x8C124430), (*(float *)0x8C124434));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AE270))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t67 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t67 + 0xC);
        nlTranslate((*(float *)(((t67 + 0xC) + 0x0))), (*(float *)(((t67 + 0xC) + 0x4))), (*(float *)(((t67 + 0xC) + 0x8))));
        nlRotateAY(0x1555);
        t116 = 0x8C1AE270;
        t117 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124474;
        nlTranslate((*(float *)0x8C124474), (*(float *)0x8C124478), (*(float *)0x8C12447C));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AE2B8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C124480;
        nlTranslate((*(float *)0x8C124480), (*(float *)0x8C124484), (*(float *)0x8C124488));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C1AE2B8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C12448C;
        nlTranslate((*(float *)0x8C12448C), (*(float *)0x8C124490), (*(float *)0x8C124494));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C1AE2B8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124498;
        nlTranslate((*(float *)0x8C124498), (*(float *)0x8C12449C), (*(float *)0x8C1244A0));
        nlRotateAY(0x1555);
        t116 = 0x8C1AE2B8;
        t117 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t117 + t116))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C12445C;
    nlTranslate((*(float *)0x8C12445C), (*(float *)0x8C124460), (*(float *)0x8C124464));
    nlRotateAY(0x1555);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C1AE31C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t133 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t133 + 0xC);
    nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
    nlRotateAY(0x1555);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C1AE31C))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124444;
        nlTranslate((*(float *)0x8C124444), (*(float *)0x8C124448), (*(float *)0x8C12444C));
        nlRotateAY(0x1555);
        stageRusScoreDigits(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t153 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t153 + 0xC) + 0x0))), (*(float *)(((t153 + 0xC) + 0x4))), (*(float *)(((t153 + 0xC) + 0x8))));
        nlRotateAY(0x1555);
        stageRusScoreDigits((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124444;
        nlTranslate((*(float *)0x8C124444), (*(float *)0x8C124448), (*(float *)0x8C12444C));
        nlRotateAY(0x1555);
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C1AE300))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C124450), (*(float *)0x8C124454), (*(float *)0x8C124458));
        nlRotateAY(0x1555);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C1AE300))));
        }
    }
    return (nlPopMatrix(0x1));
}


int miniWallTargetsHit(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register float u5;
    register float u7;
    register float u13;
    register float u15;
    register int t17;
    register float u19;
    register float u20;
    register int t21;
    register int t22;
    register float t26;
    register int t28;
    register float u29;
    register float u31;
    register int t34;
    register int t39;
    register float u62;
    register int t154;
    register float u155;
    register int t156;
    register int t157;
    register int t163;
    register int t199;
    register int t200;
    register int t18;
    register int t36;
    register int t37;
    register int t38;
    int stk[19];
    int R1016;
    float R1020;
    float R1024;

    R1016 = *(int *)((int)stk + 16);
    R1020 = *(float *)((int)stk + 20);
    R1024 = *(float *)((int)stk + 24);

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        if ((*(int *)0x8C287AF8) != 0) {
        } else {
            u5 = *(float *)0x8C291F30;
            u7 = (-u5);
            if (!(0.0f > u5)) {
                u7 = (*(float *)0x8C291F30);
            }
            if (!(40.0f > u7)) {
            } else {
                if (!(50.0f > (*(float *)0x8C291F34))) {
                } else {
                    u13 = *(float *)0x8C291F38;
                    u15 = (-u13);
                    if (!(0.0f > u13)) {
                        u15 = (*(float *)0x8C291F38);
                    }
                    if (!(5.0f > u15)) {
                    } else {
                        t17 = 0x0;
                        u19 = 9999.0f;
                        for (;;) {
                            u20 = 10.0f;
                            u20 = u20 + 20.0f * ((float)t17 + 0.5f);
                            R1020 = u20;
                            t21 = ((t17 << 2) + t17);
                            t22 = 0xFFFFFFE0;
                            for (;;) {
                                t26 = vecDistXZf(a4, a5, a6, a7, (*(float *)0x8C291F30), (*(float *)0x8C291F34), (float)t22, (R1020));
                                if (u19 > t26) {
                                    t18 = t21;
                                    u19 = t26;
                                }
                                t22 = (t22 + 0x10);
                                t21 = (t21 + 0x1);
                                if ((int)t22 >= (int)0x30) {
                                    break;
                                }
                            }
                            t17 = (t17 + 0x1);
                            if ((int)t17 >= (int)0x2) {
                                break;
                            }
                        }
                        t28 = (int)((int)t18 % (int)0x5);
                        u29 = *(float *)0x8C291F30;
                        u31 = ((-(float)(((t28 - 2) << 2) << 2)) + u29);
                        if (!(0.0f > ((float)(((t28 - 2) << 2) << 2) - u29))) {
                            u31 = ((float)(((t28 - 2) << 2) << 2) - u29);
                        }
                        t34 = t18;
                        if (u31 > ((*(float *)((((t18 << 2) + 0x8C2FC1DC) + 0x0))) * 8.0f)) {
                            t34 = 0xFFFFFFFF;
                        }
                        if ((t34 != -1) && ((t36 = *(int *)0x8C2FBEF0, t37 = *(int *)((t36 + 0x20)), t37 == 1) && (t38 = *(int *)(((t34 << 2) + 0x8C2FC18C)), t38 == 0))) {
                            *(unsigned int *)((((t34 << 2) + 0x8C2FC18C) + 0x0)) = 0x1;
                            t39 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t39 + 0xC)) = ((*(int *)((t39 + 0xC))) + 0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F30); }
                            miniPointPopSpawn(0x96, *(Stk3 *)(0x8C291F30));
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0xC))) == 10) {
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x10)) = 0x0;
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                            }
                            nlsndSeqRequest(0x1002A9);
                        }
                        *(float *)0x8C291F38 = 5.0f;
                        u62 = (*(float *)0x8C291F60);
                        u62 *= -0.800000012f;
                        *(float *)0x8C291F60 = u62;
                        if ((*(float *)0x8C291F60) > 4.0f) {
                            *(float *)0x8C291F60 = 4.0f;
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F3C) = *(struct mv3 *)(0x8C291F30); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F48) = *(struct mv3 *)(0x8C291F58); }
                        *(float *)0x8C291F54 = 0.0f;
                        *(unsigned int *)0x8C291F70 = 0x0;
                        *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFB);
                        *(unsigned int *)0x8C287AF8 = 0x1;
                    }
                }
            }
        }
    }
    nlPushMatrix(0x0);
    nlObjPut(0xCB42760);
    nlPopMatrix(0x1);
    t154 = 0x0;
    for (;;) {
        R1016 = 0x0;
        u155 = 10.0f;
        u155 = u155 + 20.0f * ((float)t154 + 0.5f);
        R1024 = u155;
        t156 = ((t154 << 2) + t154);
        t157 = 0xFFFFFFE0;
        for (;;) {
            nlPushMatrix(0x0);
            nlTranslate((float)t157, (R1024), 0.0f);
            if ((*(int *)0x8C287C60) == 0) {
                if ((*(int *)(((t156 << 2) + 0x8C2FC18C))) != 0) {
                    t163 = *(int *)(((0x8C2FC1B4 + (t156 << 2)) + 0x0));
                    *(unsigned int *)(((0x8C2FC1B4 + (t156 << 2)) + 0x0)) = (int)((float)t163 + ((float)(0x18000 - t163) * (*(float *)0x8C03964C)));
                }
            }
            if ((*(float *)(((0x8C2FC1DC + (t156 << 2)) + 0x0))) != 1.0f) {
                nlObjPut(0xCB68EE8);
            }
            nlRotateAY(((*(int *)(((0x8C2FC1B4 + (t156 << 2)) + 0x0))) + 0x8000));
            nlScale((*(float *)(((0x8C2FC1DC + (t156 << 2)) + 0x0))), 1.0f, 1.0f);
            nlObjPut((*(int *)(((t156 << 2) + 0x8C159D64))));
            t199 = nlPopMatrix(0x1);
            t200 = R1016;
            t157 = (t157 + 0x10);
            R1016 = (t200 + 0x1);
            t156 = (t156 + 0x1);
            if ((int)(t200 + 0x1) >= (int)0x5) {
                break;
            }
        }
        t154 = (t154 + 0x1);
        if ((int)t154 < (int)0x2) continue;
        break;
    }
    return t199;
}

int evEndingThrowSpawn(int a4)
{
    float t0;
    int t60;
    int t1;
    int t51;
    float t2;
    float t5;
    float t8;
    float t11;
    float t14;
    float t17;
    float t20;
    float t23;
    float t26;
    float t29;
    float t32;
    float t35;
    float t38;
    int t42;

    t0 = nlRandom();
    t60 = (int)(t0 * 3.0f);
    if ((int)(t0 * 3.0f) == 1) {
        t1 = set_event(0x24, 0x8C0D9B54);
        *(unsigned int *)((t1 + 0x14)) = 0x5;
        t51 = a4;
        if ((unsigned int)a4 >= (unsigned int)0xD) {
        } else {
            switch ((a4 << 1)) {
                case 0:
                {
                    t2 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t2 * 95.0f) + 0x19);
                    *(float *)((t1 + 0x18)) = ((float)(((int)((int)((int)(t2 * 95.0f) * 0x181) / (int)0x5F)) + 0xA5) * (-1.0f));
                    *(float *)((t1 + 0x20)) = (-((nlRandom()) * 200.0f));
                    t42 = 0x20;
                }
                    break;
                case 2:
                {
                    t5 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t5 * 95.0f) + 0x19);
                    *(float *)((t1 + 0x18)) = ((float)(((int)((int)((int)(t5 * 95.0f) * 0x181) / (int)0x5F)) + 0xA5) * (-1.0f));
                    *(float *)((t1 + 0x20)) = ((nlRandom()) * 200.0f);
                    t42 = 0x20;
                }
                    break;
                case 4:
                {
                    t8 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t8 * 95.0f) + 0x19);
                    *(float *)((t1 + 0x18)) = (float)(((int)((int)((int)(t8 * 95.0f) * 0x181) / (int)0x5F)) + 0xA5);
                    *(float *)((t1 + 0x20)) = (-((nlRandom()) * 200.0f));
                    t42 = 0x20;
                }
                    break;
                case 6:
                {
                    t11 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t11 * 95.0f) + 0x19);
                    *(float *)((t1 + 0x18)) = (float)(((int)((int)((int)(t11 * 95.0f) * 0x181) / (int)0x5F)) + 0xA5);
                    *(float *)((t1 + 0x20)) = ((nlRandom()) * 200.0f);
                    t42 = 0x20;
                }
                    break;
                case 8:
                {
                    t14 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t14 * 85.0f) + 0x23);
                    *(float *)((t1 + 0x20)) = (float)(((int)((int)((int)(t14 * 85.0f) * 0x186) / (int)0x55)) + 0xD2);
                    *(float *)((t1 + 0x18)) = (-((nlRandom()) * 160.0f));
                    t42 = 0x18;
                }
                    break;
                case 10:
                {
                    t17 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t17 * 85.0f) + 0x23);
                    *(float *)((t1 + 0x20)) = (float)(((int)((int)((int)(t17 * 85.0f) * 0x186) / (int)0x55)) + 0xD2);
                    *(float *)((t1 + 0x18)) = ((nlRandom()) * 160.0f);
                    t42 = 0x18;
                }
                    break;
                case 12:
                {
                    t20 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t20 * 30.0f) + 0x7D);
                    *(float *)((t1 + 0x20)) = (float)(((int)((int)((int)(t20 * 30.0f) * 0x55) / (int)0x1E)) + 0x1C2);
                    *(float *)((t1 + 0x18)) = (-((nlRandom()) * 160.0f));
                    t42 = 0x18;
                }
                    break;
                case 14:
                {
                    t23 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t23 * 30.0f) + 0x7D);
                    *(float *)((t1 + 0x20)) = (float)(((int)((int)((int)(t23 * 30.0f) * 0x55) / (int)0x1E)) + 0x1C2);
                    *(float *)((t1 + 0x18)) = ((nlRandom()) * 160.0f);
                    t42 = 0x18;
                }
                    break;
                case 16:
                {
                    t26 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t26 * 85.0f) + 0x23);
                    *(float *)((t1 + 0x20)) = ((float)(((int)((int)((int)(t26 * 85.0f) * 0x186) / (int)0x55)) + 0xD2) * (-1.0f));
                    *(float *)((t1 + 0x18)) = (-((nlRandom()) * 160.0f));
                    t42 = 0x18;
                }
                    break;
                case 18:
                {
                    t29 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t29 * 85.0f) + 0x23);
                    *(float *)((t1 + 0x20)) = ((float)(((int)((int)((int)(t29 * 85.0f) * 0x186) / (int)0x55)) + 0xD2) * (-1.0f));
                    *(float *)((t1 + 0x18)) = ((nlRandom()) * 160.0f);
                    t42 = 0x18;
                }
                    break;
                case 20:
                {
                    t32 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t32 * 30.0f) + 0x7D);
                    *(float *)((t1 + 0x20)) = ((float)(((int)((int)((int)(t32 * 30.0f) * 0x55) / (int)0x1E)) + 0x1C2) * (-1.0f));
                    *(float *)((t1 + 0x18)) = (-((nlRandom()) * 160.0f));
                    t42 = 0x18;
                }
                    break;
                case 22:
                {
                    t35 = nlRandom();
                    *(float *)((t1 + 0x1C)) = (float)((int)(t35 * 30.0f) + 0x7D);
                    *(float *)((t1 + 0x20)) = ((float)(((int)((int)((int)(t35 * 30.0f) * 0x55) / (int)0x1E)) + 0x1C2) * (-1.0f));
                    *(float *)((t1 + 0x18)) = ((nlRandom()) * 160.0f);
                    t42 = 0x18;
                }
                    break;
                default:
                {
                    t38 = nlRandom();
                    *(float *)((t1 + 0x18)) = ((*(float *)(((((((int)(t38 * 21.0f) << 1) + (int)(t38 * 21.0f)) << 2) + 0x8C126240) + 0x0))) + -5.0f);
                    *(float *)((t1 + 0x1C)) = ((*(float *)(((((((int)(t38 * 21.0f) << 1) + (int)(t38 * 21.0f)) << 2) + 0x8C126240) + 0x4))) + 10.0f);
                    *(float *)((t1 + 0x20)) = (*(float *)(((((((int)(t38 * 21.0f) << 1) + (int)(t38 * 21.0f)) << 2) + 0x8C126240) + 0x8)));
                    t42 = 0x20;
                }
                    break;
            }
            t51 = t42;
        }
        t60 = t51;
    }
    return t60;
}

