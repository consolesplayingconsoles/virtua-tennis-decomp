/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int courtUsaDrawNumber(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int stageSegaScoreDigits(int);
int stageSegaScoreboardDraw(void);

int stageSegaScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t68;
    int t134;
    int t184;
    int t229;
    int t332;
    int t358;
    int t401;
    int t504;
    int t530;
    int t573;
    int t676;
    int t702;
    int t13;
    int t46;
    float u47;
    float u48;
    int t117;
    int t118;
    int t205;
    float u206;
    float u207;
    int t283;
    int t284;
    int t377;
    float u378;
    float u379;
    int t455;
    int t456;
    int t549;
    float u550;
    float u551;
    int t627;
    int t628;
    int stk[24];

    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x2C);
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x2C) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x2C) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 4) + 0x2C) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x2C) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x2C) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x2C) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 40)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 36)) = t6;
    *(unsigned int *)(((int)stk + 28)) = (((t4 + t5) + t6) & 0x1);
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 8)) = 0x3;
            *(unsigned int *)(((int)stk + 16)) = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 8)) = 0x5;
                *(unsigned int *)(((int)stk + 16)) = 0x6;
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x6;
                *(unsigned int *)(((int)stk + 16)) = 0x5;
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)0x8C287B18);
        *(unsigned int *)(((int)stk + 16)) = (*(int *)0x8C287B1C);
    }
    *(unsigned int *)(((int)stk + 8)) = ((int)((int)(*(int *)(((int)stk + 8))) % (int)0x64));
    *(unsigned int *)(((int)stk + 16)) = ((int)((int)(*(int *)(((int)stk + 16))) % (int)0x64));
    if ((*(int *)(((int)stk + 28))) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C12278C;
        t46 = 0x8C12278C;
        u47 = (*(float *)0x8C122790);
        u48 = (*(float *)0x8C122794);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122798;
        t46 = 0x8C122798;
        u47 = (*(float *)0x8C12279C);
        u48 = (*(float *)0x8C1227A0);
    }
    nlTranslate((*(float *)((t46 + 0x0))), u47, u48);
    nlRotateAX(0x5B0);
    nlObjPut(0xC88D140);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227A4;
        nlTranslate((*(float *)0x8C1227A4), (*(float *)0x8C1227A8), (*(float *)0x8C1227AC));
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D164))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t68 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t68 + 0xC);
        nlTranslate((*(float *)(((t68 + 0xC) + 0x0))), (*(float *)(((t68 + 0xC) + 0x4))), (*(float *)(((t68 + 0xC) + 0x8))));
        nlRotateAX(0x5B0);
        t117 = 0x8C18D164;
        t118 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227EC;
        nlTranslate((*(float *)0x8C1227EC), (*(float *)0x8C1227F0), (*(float *)0x8C1227F4));
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227F8;
        nlTranslate((*(float *)0x8C1227F8), (*(float *)0x8C1227FC), (*(float *)0x8C122800));
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122804;
        nlTranslate((*(float *)0x8C122804), (*(float *)0x8C122808), (*(float *)0x8C12280C));
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122810;
        nlTranslate((*(float *)0x8C122810), (*(float *)0x8C122814), (*(float *)0x8C122818));
        nlRotateAX(0x5B0);
        t117 = 0x8C18D1AC;
        t118 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t118 + t117))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C1227D4;
    nlTranslate((*(float *)0x8C1227D4), (*(float *)0x8C1227D8), (*(float *)0x8C1227DC));
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 40))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t134 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t134 + 0xC);
    nlTranslate((*(float *)(((t134 + 0xC) + 0x0))), (*(float *)(((t134 + 0xC) + 0x4))), (*(float *)(((t134 + 0xC) + 0x8))));
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227BC;
        nlTranslate((*(float *)0x8C1227BC), (*(float *)0x8C1227C0), (*(float *)0x8C1227C4));
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18D1F4))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227C8;
        nlTranslate((*(float *)0x8C1227C8), (*(float *)0x8C1227CC), (*(float *)0x8C1227D0));
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 16))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C18D1F4))));
        }
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1227BC;
        nlTranslate((*(float *)0x8C1227BC), (*(float *)0x8C1227C0), (*(float *)0x8C1227C4));
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t184 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t184 + 0xC);
        nlTranslate((*(float *)(((t184 + 0xC) + 0x0))), (*(float *)(((t184 + 0xC) + 0x4))), (*(float *)(((t184 + 0xC) + 0x8))));
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 16))));
    }
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 28))) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C12281C;
        t205 = 0x8C12281C;
        u206 = (*(float *)0x8C122820);
        u207 = (*(float *)0x8C122824);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122828;
        t205 = 0x8C122828;
        u206 = (*(float *)0x8C12282C);
        u207 = (*(float *)0x8C122830);
    }
    nlTranslate((*(float *)((t205 + 0x0))), u206, u207);
    nlRotateAY(0x4000);
    nlRotateAX(0x5B0);
    nlObjPut(0xC88D140);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122834;
        nlTranslate((*(float *)0x8C122834), (*(float *)0x8C122838), (*(float *)0x8C12283C));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D164))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t229 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t229 + 0xC);
        nlTranslate((*(float *)(((t229 + 0xC) + 0x0))), (*(float *)(((t229 + 0xC) + 0x4))), (*(float *)(((t229 + 0xC) + 0x8))));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        t283 = 0x8C18D164;
        t284 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C12287C;
        nlTranslate((*(float *)0x8C12287C), (*(float *)0x8C122880), (*(float *)0x8C122884));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122888;
        nlTranslate((*(float *)0x8C122888), (*(float *)0x8C12288C), (*(float *)0x8C122890));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122894;
        nlTranslate((*(float *)0x8C122894), (*(float *)0x8C122898), (*(float *)0x8C12289C));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228A0;
        nlTranslate((*(float *)0x8C1228A0), (*(float *)0x8C1228A4), (*(float *)0x8C1228A8));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        t283 = 0x8C18D1AC;
        t284 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t284 + t283))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C12284C;
        nlTranslate((*(float *)0x8C12284C), (*(float *)0x8C122850), (*(float *)0x8C122854));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18D1F4))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122858;
        nlTranslate((*(float *)0x8C122858), (*(float *)0x8C12285C), (*(float *)0x8C122860));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 16))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C18D1F4))));
        }
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C12284C;
        nlTranslate((*(float *)0x8C12284C), (*(float *)0x8C122850), (*(float *)0x8C122854));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t332 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 4)) = (t332 + 0xC);
        nlTranslate((*(float *)(((t332 + 0xC) + 0x0))), (*(float *)(((t332 + 0xC) + 0x4))), (*(float *)(((t332 + 0xC) + 0x8))));
        nlRotateAY(0x4000);
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 16))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C122864;
    nlTranslate((*(float *)0x8C122864), (*(float *)0x8C122868), (*(float *)0x8C12286C));
    nlRotateAY(0x4000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 40))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t358 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t358 + 0xC);
    nlTranslate((*(float *)(((t358 + 0xC) + 0x0))), (*(float *)(((t358 + 0xC) + 0x4))), (*(float *)(((t358 + 0xC) + 0x8))));
    nlRotateAY(0x4000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 28))) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228AC;
        t377 = 0x8C1228AC;
        u378 = (*(float *)0x8C1228B0);
        u379 = (*(float *)0x8C1228B4);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228B8;
        t377 = 0x8C1228B8;
        u378 = (*(float *)0x8C1228BC);
        u379 = (*(float *)0x8C1228C0);
    }
    nlTranslate((*(float *)((t377 + 0x0))), u378, u379);
    nlRotateAY(0x8000);
    nlRotateAX(0x5B0);
    nlObjPut(0xC88D140);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228C4;
        nlTranslate((*(float *)0x8C1228C4), (*(float *)0x8C1228C8), (*(float *)0x8C1228CC));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D164))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t401 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t401 + 0xC);
        nlTranslate((*(float *)(((t401 + 0xC) + 0x0))), (*(float *)(((t401 + 0xC) + 0x4))), (*(float *)(((t401 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        t455 = 0x8C18D164;
        t456 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C12290C;
        nlTranslate((*(float *)0x8C12290C), (*(float *)0x8C122910), (*(float *)0x8C122914));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122918;
        nlTranslate((*(float *)0x8C122918), (*(float *)0x8C12291C), (*(float *)0x8C122920));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122924;
        nlTranslate((*(float *)0x8C122924), (*(float *)0x8C122928), (*(float *)0x8C12292C));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122930;
        nlTranslate((*(float *)0x8C122930), (*(float *)0x8C122934), (*(float *)0x8C122938));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        t455 = 0x8C18D1AC;
        t456 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t456 + t455))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228DC;
        nlTranslate((*(float *)0x8C1228DC), (*(float *)0x8C1228E0), (*(float *)0x8C1228E4));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18D1F4))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228E8;
        nlTranslate((*(float *)0x8C1228E8), (*(float *)0x8C1228EC), (*(float *)0x8C1228F0));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 16))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C18D1F4))));
        }
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1228DC;
        nlTranslate((*(float *)0x8C1228DC), (*(float *)0x8C1228E0), (*(float *)0x8C1228E4));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t504 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t504 + 0xC);
        nlTranslate((*(float *)(((t504 + 0xC) + 0x0))), (*(float *)(((t504 + 0xC) + 0x4))), (*(float *)(((t504 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x5B0);
        stageSegaScoreDigits((*(int *)(((int)stk + 16))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C1228F4;
    nlTranslate((*(float *)0x8C1228F4), (*(float *)0x8C1228F8), (*(float *)0x8C1228FC));
    nlRotateAY(0x8000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 40))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t530 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t530 + 0xC);
    nlTranslate((*(float *)(((t530 + 0xC) + 0x0))), (*(float *)(((t530 + 0xC) + 0x4))), (*(float *)(((t530 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 28))) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 28)) = 0x8C12293C;
        t549 = 0x8C12293C;
        u550 = (*(float *)0x8C122940);
        u551 = (*(float *)0x8C122944);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 28)) = 0x8C122948;
        t549 = 0x8C122948;
        u550 = (*(float *)0x8C12294C);
        u551 = (*(float *)0x8C122950);
    }
    nlTranslate((*(float *)((t549 + 0x0))), u550, u551);
    nlRotateAY(0xFFFFC000);
    nlRotateAX(0x5B0);
    nlObjPut(0xC88D140);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 32)) = 0x8C122954;
        nlTranslate((*(float *)0x8C122954), (*(float *)0x8C122958), (*(float *)0x8C12295C));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D164))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t573 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 24)) = (t573 + 0xC);
        nlTranslate((*(float *)(((t573 + 0xC) + 0x0))), (*(float *)(((t573 + 0xC) + 0x4))), (*(float *)(((t573 + 0xC) + 0x8))));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        t627 = 0x8C18D164;
        t628 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 28)) = 0x8C12299C;
        nlTranslate((*(float *)0x8C12299C), (*(float *)0x8C1229A0), (*(float *)0x8C1229A4));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 24)) = 0x8C1229A8;
        nlTranslate((*(float *)0x8C1229A8), (*(float *)0x8C1229AC), (*(float *)0x8C1229B0));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 24)) = 0x8C1229B4;
        nlTranslate((*(float *)0x8C1229B4), (*(float *)0x8C1229B8), (*(float *)0x8C1229BC));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + 0x8C18D1AC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C1229C0;
        nlTranslate((*(float *)0x8C1229C0), (*(float *)0x8C1229C4), (*(float *)0x8C1229C8));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        t627 = 0x8C18D1AC;
        t628 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t628 + t627))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C12296C;
        nlTranslate((*(float *)0x8C12296C), (*(float *)0x8C122970), (*(float *)0x8C122974));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18D1F4))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C122978;
        nlTranslate((*(float *)0x8C122978), (*(float *)0x8C12297C), (*(float *)0x8C122980));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        if ((int)(*(int *)(((int)stk + 16))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C18D1F4))));
        }
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C12296C;
        nlTranslate((*(float *)0x8C12296C), (*(float *)0x8C122970), (*(float *)0x8C122974));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        courtUsaDrawNumber((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t676 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 16)) = (t676 + 0xC);
        nlTranslate((*(float *)(((t676 + 0xC) + 0x0))), (*(float *)(((t676 + 0xC) + 0x4))), (*(float *)(((t676 + 0xC) + 0x8))));
        nlRotateAY(0xFFFFC000);
        nlRotateAX(0x5B0);
        courtUsaDrawNumber((*(int *)(((int)stk + 8))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x8C122984;
    nlTranslate((*(float *)0x8C122984), (*(float *)0x8C122988), (*(float *)0x8C12298C));
    nlRotateAY(0xFFFFC000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 40))) << 2) + 0x8C18D210))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t702 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 16)) = (t702 + 0xC);
    nlTranslate((*(float *)(((t702 + 0xC) + 0x0))), (*(float *)(((t702 + 0xC) + 0x4))), (*(float *)(((t702 + 0xC) + 0x8))));
    nlRotateAY(0xFFFFC000);
    nlRotateAX(0x5B0);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18D210))));
    return (nlPopMatrix(0x1));
}
