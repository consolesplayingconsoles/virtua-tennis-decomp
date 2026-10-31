/* Straight-line functions with calls and guards (batch gen_xh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupDrawWarning(int, int, int);
int BupFailDialog(int);
int BupLoadFile(int, int, int, int);
int BupRequestSave(int, int, int, int);
int FUN_8c0eaf00(int, int, int);
int bodyGroundFriction(int, int, int, int, int, float);
int bodyLinePerp(Stk4, Stk3, Stk3);
int buGetDiskInfo(int, int);
int buGetFileInfo(int, int, int);
int buIsExistFile(int, int);
int cacheOcbiRange(int, int);
int entryFinalCheck(void);
int entryPortContinue(int, int);
int entryPortLeave(int, int, int);
int evPackFade(int, int, int);
int fadeCaptureBegin(void);
int fadeDraw(void);
int fadeScreenStart(int, int, int, int, int, int);
int fadeStart(int);
int mainCheckReset(void);
int memmove(int, int, int);
int msgWinStep(int, int, int, int, int, int);
int mtxGetWorldPos(int, int, int, int, int);
int mtxMultiKeepPos(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRenderTextureEnd(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSprPut(int, int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSystemControl(int, int, int);
int padLcdClear(int);
int padLcdSetMode(int, int);
int panelDigitPut(int, Stk3);
extern int panelWordPut();
int pauseQuit(void);
int pdExecPeripheralServer(void);
int resCautionReset(int);
int sndCrowdReact(int);
int sndPack1FadeCancel(void);
int sndStopAll(void);
int sprInitPos(int, int);
int strmBgmSetVol(int, int, int, int, int, int, int);
int strmScoreReset(void);
int strmSetStereo(int);
int strmVoiceSetVol(int);
int syCfgGetSoundMode(int);
int thunk_FUN_8c0bcda0(float, float);
int umpCheerTimed(int);
int unlockApplyW1(void);
int unlockApplyW2(void);
float vecDist(Stk3, Stk3);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
void bodyStep(int a4, int a5, int a6, int a7, int a8, float f4);
int pauseExec(int a4, int a5);
int BupCardWarning(int a4);
int eepromBootLoad(int a4);
int BupCheckCard(int a4);
int BupRequestLoad(int a4, int a5, int a6, int a7);
int fadeCaptureEnd(int a4);
int thunk_FUN_8c0eee50(int a4);
int thunk_FUN_8c1e0150(int a4, int a5);
int thunk_FUN_8c0f41f0(int a4, int a5, int a6, int a7);

void bodyStep(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[85];
    register float u0;
    register float u6;
    register float u13;
    register float u14;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register float u84;
    register float u85;
    register float u87;
    register float u88;
    register float u89;
    register float u92;
    register float u93;
    register float u100;
    register float t103;
    register float t113;
    register float u114;
    register float u115;
    register float t118;
    register float u130;
    register float t133;
    register int t202;
    register int t207;
    register int t234;
    register int t235;
    register int t243;
    register int t73;
    register float u75;
    register int t47;
    register int t48;
    register int t50;
    register float u51;
    register float u52;
    register float u53;
    register int t211;

    stk[76] = a8;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAC + ((int)stk + 48))) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    u0 = *(float *)((a4 + 0x394));
    if (u0 != 0.0f) {
        u6 = 0.0f;
        if (f4 > ((*(float *)((a4 + 0x328))) - (*(float *)((a4 + 0x394))))) {
            u6 = ((f4 - (*(float *)((a4 + 0x328)))) + (*(float *)((a4 + 0x394))));
        }
        if ((f4 + (*(float *)((a4 + 0x310)))) > ((*(float *)((a4 + 0x328))) - (*(float *)((a4 + 0x394))))) {
            *(unsigned int *)((a4 + 0x3A0)) = 0x1;
            u13 = *(float *)((a4 + 0x32C));
            u14 = *(float *)((a4 + 0x324));
            *(int *)((int)stk + 44) = (0xAC + ((int)stk + 48));
            *(Stk3 *)((0xAC + ((int)stk + 48))) = vecMake(u14, f4, u13);
        }
        t73 = 0x0;
        u75 = u6;
    } else {
        t24 = (0xAC + ((int)stk + 48));
        t25 = 0x8C1016D4;
        t26 = a4;
        t27 = 0x0;
        t28 = 0x0;
        u29 = 0.0f;
        u30 = u0;
        u31 = f4;
        u32 = 0.0f;
        for (;;) {
            if ((int)t28 >= (int)(*(int *)((a4 + 0x398)))) {
                break;
            }
            t25 = t28;
            t25 = (t25 << 1);
            t24 = a4;
            t25 = (t25 + t28);
            t24 = (t24 + 0xC);
            t25 = (t25 << 2);
            t25 = (t25 + t24);
            u30 = (*(float *)((t25 + 0x4)));
            if (f4 > u30) {
                t25 = t28;
                t25 = (t25 << 1);
                t24 = a4;
                t25 = (t25 + t28);
                u29 = f4;
                t24 = (t24 + 0xC);
                t25 = (t25 << 2);
                t25 = (t25 + t24);
                u30 = (*(float *)((t25 + 0x4)));
                u29 = (u29 - u30);
                if (u29 > u32) {
                    t25 = t28;
                    t25 = (t25 << 1);
                    t24 = a4;
                    t25 = (t25 + t28);
                    u32 = f4;
                    t24 = (t24 + 0xC);
                    t27 = t28;
                    t25 = (t25 << 2);
                    t25 = (t25 + t24);
                    u30 = (*(float *)((t25 + 0x4)));
                    u32 = (u32 - u30);
                }
            }
            t25 = t28;
            u30 = (*(float *)((a4 + 0x310)));
            t24 = a4;
            u29 = f4;
            t24 = (t24 + 0xC);
            u29 = (u29 + u30);
            u30 = (*(float *)((((((t28 << 1) + t25) << 2) + t24) + 0x4)));
            if (u29 > u30) {
                t25 = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = t25;
                t25 = a4;
                t26 = 0xAC;
                t25 = (t25 + 0xC);
                t26 = (t26 + ((int)stk + 48));
                nlAddVector(t26, ((((t28 << 1) + t28) << 2) + t25));
                *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
            } else {
                t47 = t24;
                t48 = t25;
                t50 = t26;
                u51 = u29;
                u52 = u30;
                u53 = u31;
            }
            u29 = u51;
            u30 = u52;
            u31 = u53;
            t24 = t47;
            t28 = (t28 + 0x1);
            t25 = t48;
            t26 = t50;
        }
        if ((*(int *)(((int)stk + 48))) != 0) {
            nlScaleVector((0xAC + ((int)stk + 48)), (0xAC + ((int)stk + 48)), (1.0f / (float)(*(int *)(((int)stk + 48)))));
        }
        t73 = t27;
        u75 = u32;
    }
    *(int *)((int)stk + 44) = (0xB8 + ((int)stk + 48));
    bodyGroundFriction(a4, 0x0, 0x0, 0x0, (0xB8 + ((int)stk + 48)), f4);
    *(float *)((a4 + 0x340)) = ((*(float *)((a4 + 0x340))) - (*(float *)(((0x348 + a4) + 0x0))));
    if (!(u75 > 0.0f)) {
    } else {
        *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + u75);
        u84 = *(float *)((a4 + 0x340));
        u85 = (-u84);
        if (!(0.0f > u84)) {
            u85 = u84;
        }
        u87 = *(float *)((a4 + 0x34C));
        u88 = *(float *)((a4 + 0x314));
        u89 = ((u87 / u85) * u88);
        if (((u87 / u85) * u88) > 1.0f) {
            u89 = 1.0f;
        }
        *(float *)((a4 + 0x334)) = ((*(float *)((a4 + 0x334))) * u89);
        u92 = *(float *)((a4 + 0x340));
        u93 = (-u92);
        if (!(0.0f > u92)) {
            u93 = u92;
        }
        *(float *)((a4 + 0x340)) = (u93 * (*(float *)((a4 + 0x34C))));
        if ((*(float *)((a4 + 0x310))) > (*(float *)((a4 + 0x340)))) {
            *(float *)((a4 + 0x340)) = 0.0f;
        }
        if ((*(float *)((a4 + 0x340))) != 0.0f) {
            u100 = *(float *)((a4 + 0x340));
            *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
            *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake(0.0f, u100, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
            nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
            t103 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
            nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (640.0f / t103));
            nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(a4); }
        t113 = vecLength(*(Stk3 *)(((int)stk + 36)));
        if (t113 != 0.0f) {
            u114 = *(float *)((a4 + 0x0));
            u115 = *(float *)((a4 + 0x8));
            *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
            *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake((-u114), 0.0f, (-u115));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
            nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
            t118 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
            nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (200.0f / t118));
            nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
        }
    }
    if ((*(int *)((a4 + 0x3A0))) != 0) {
        u130 = *(float *)((a4 + 0x348));
        *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
        *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake(0.0f, u130, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
        bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
        nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
        t133 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
        nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (320.0f / t133));
        nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
    }
    *(float *)((a4 + 0x324)) = ((*(float *)((a4 + 0x324))) + (*(float *)(((0xB8 + ((int)stk + 48)) + 0x0))));
    *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + (*(float *)(((0x340 + a4) + 0x0))));
    *(float *)((a4 + 0x32C)) = ((*(float *)((a4 + 0x32C))) + (*(float *)(((0xC0 + ((int)stk + 48)) + 0x0))));
    nlScaleVector((0x330 + a4), (0x330 + a4), 0.980000019f);
    nlPushUnitMatrix();
    nlRotateAX((int)(*(float *)((a4 + 0x330))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAY((int)(*(float *)((a4 + 0x334))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAZ((int)(*(float *)((a4 + 0x338))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAX((int)(*(float *)((a4 + 0x330))));
    nlGetMatrix((((int)stk + 48) + 0x6C));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAY((int)(*(float *)((a4 + 0x334))));
    mtxMultiKeepPos((((int)stk + 48) + 0x6C));
    thunk_FUN_8c0eee50((((int)stk + 48) + 0x6C));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAZ((int)(*(float *)((a4 + 0x338))));
    mtxMultiKeepPos((((int)stk + 48) + 0x6C));
    thunk_FUN_8c0eee50((((int)stk + 48) + 0x6C));
    nlCalcPoint((0x330 + a4), (0x330 + a4));
    nlPopMatrix(0x1);
    if (u75 > 0.0f) {
        if ((*(float *)((a4 + 0x394))) != 0.0f) {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
            nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
            *(int *)((int)stk + 44) = (0xC + a4);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xC + a4));
            nlPopMatrix(0x1);
            t211 = (0x10 + a4);
        } else {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
            mtxMultiKeepPos((0x350 + a4));
            *(unsigned int *)(((int)stk + 48)) = (((t73 << 1) + t73) << 2);
            t202 = *(int *)((a4 + 0x390));
            *(unsigned int *)(((int)stk + 52)) = ((((t73 << 1) + t73) << 2) + t202);
            nlTranslate((*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x0))), (*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x4))), (*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x8))));
            t207 = *(int *)(((int)stk + 48));
            *(int *)((int)stk + 44) = ((a4 + 0xC) + t207);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((a4 + 0xC) + t207));
            nlPopMatrix(0x1);
            t211 = (0x4 + ((a4 + 0xC) + (*(int *)(((int)stk + 48)))));
        }
        *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + ((-(*(float *)((t211 + 0x0)))) + f4));
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
    mtxMultiKeepPos((0x350 + a4));
    nlGetMatrix((((int)stk + 48) + 0x2C));
    if ((*(float *)((a4 + 0x394))) == 0.0f) {
        t234 = 0x0;
        t235 = 0x0;
        for (;;) {
            if ((int)t234 >= (int)(*(int *)((a4 + 0x398)))) {
                break;
            }
            nlPushMatrix(0x0);
            t235 = t234;
            t235 = (t235 << 1);
            t235 = (t235 + t234);
            t235 = (t235 << 2);
            *(unsigned int *)(((int)stk + 48)) = t235;
            t235 = (t235 + (*(int *)((a4 + 0x390))));
            nlTranslate((*(float *)((t235 + 0x0))), (*(float *)((t235 + 0x4))), (*(float *)((t235 + 0x8))));
            t243 = *(int *)(((int)stk + 48));
            *(int *)((int)stk + 44) = ((a4 + 0xC) + t243);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((a4 + 0xC) + t243));
            nlPopMatrix(0x1);
            t234 = (t234 + 0x1);
        }
    }
    nlPopMatrix(0x1);
    if ((*(float *)((a4 + 0x394))) != 0.0f) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
        nlPushMatrix(0x0);
        nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
        *(int *)((int)stk + 44) = (0x18C + a4);
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x18C + a4));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        mtxMultiKeepPos((((int)stk + 44) + 0x70));
        nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
        *(int *)((int)stk + 40) = (0xC + a4);
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xC + a4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((*(int *)(((0x100 + ((int)stk + 48)) + 0x0)))) = *(struct mv16 *)((((int)stk + 48) + 0x2C)); }
}

int pauseExec(int a4, int a5)
{
    int stk[34];

    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F13;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_10 = a4;
    v0_6 = a5;
    *(unsigned int *)(((int)stk + 28)) = v0_10;
    v0_1 = (0x8C287ACC);
    v0_0 = (0x1);
    v0_2 = (0x0);
    v0_10 = (0x0);
    v0_3 = (0x4);
    v0_7 = ((((int)stk + 28) + 0x38));
    L_8C0CE5FC:;
    if (((*(int *)((((v0_10 << 2) + (v0_1 + 0x14)) + 0x0))) != 0)) goto L_8C0CE610;
    v0_4 = v0_10;
    v0_10 = (v0_3);
    v0_6 = v0_4;
    L_8C0CE610:;
    v0_4 = (int)(v0_10 + 0x1) < (int)v0_3;
    v0_10 = ((v0_10 + 0x1));
    if (v0_4) goto L_8C0CE5FC;
    v0_10 = (((v0_6 * 0xD78) + 0x8C287D84));
    v0_3 = (0x8C287D84);
    v0_9 = (0xD78);
    v0_8 = (v0_0);
    if (((*(int *)((v0_1 + 0x10))) != 2)) goto L_8C0CE630;
    *(unsigned int *)((v0_7 + 0x0)) = (*(int *)((v0_10 + 0xB64)));
    L_8C0CE698:;
    v0_4 = (0x8C38B958);
    v0_5 = (0x8C38B95C);
    if (((*(int *)0x8C1D1274) != 0)) goto L_8C0CE6CE;
    *(unsigned int *)((v0_5 + 0x0)) = 0xA;
    *(unsigned int *)0x8C1D1274 = v0_0;
    *(unsigned int *)0x8C38B84C = v0_2;
    *(unsigned int *)0x8C38B9B0 = v0_2;
    *(unsigned int *)0x8C38B9B4 = v0_2;
    *(unsigned int *)((v0_4 + 0x0)) = 0x78;
    *(unsigned int *)0x8C38B9C0 = v0_2;
    *(unsigned int *)0x8C38B9BC = v0_0;
    *(unsigned int *)0x8C38B9B8 = v0_0;
    umpCheerTimed(0x44C);
    L_8C0CE6CE:;
    v0_10 = (0xA);
    if (((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x60))) >= (int)0xA)) goto L_8C0CE6E0;
    *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x60)) = v0_10;
    L_8C0CE6E0:;
    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x2C);
    *(Stk3 *)((((int)stk + 28) + 0x2C)) = vecMake(322.0f, 227.0f, 0.00499999989f);
    *(int *)((int)stk + 20) = (((int)stk + 24) + 0x24);
    *(Stk3 *)((((int)stk + 24) + 0x24)) = vecMake(322.0f, 227.0f, 0.00100000005f);
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(Stk3 *)((((int)stk + 20) + 0x1C)) = vecMake(322.0f, 287.0f, 0.00100000005f);
    w0_0 = (0.00100000005f);
    if (((*(int *)((v0_5 + 0x0))) != 10)) goto L_8C0CE73A;
    if (((*(int *)0x8C38B958) != 120)) goto L_8C0CE73A;
    evPackFade(0x1, 0x104, 0x0);
    L_8C0CE73A:;
    v0_11 = *(int *)((v0_5 + 0x0));
    v0_10 = (v0_11);
    if ((v0_11 != 8)) goto L_8C0CE74C;
    if (((int)(*(int *)0x8C38B958) <= (int)0x5)) goto L_8C0CE752;
    L_8C0CE74C:;
    if (((int)v0_10 >= (int)0x8)) goto L_8C0CE758;
    L_8C0CE752:;
    sndPack1FadeCancel();
    L_8C0CE758:;
    v0_11 = *(int *)0x8C38B84C;
    v0_10 = (v0_11);
    if ((v0_11 == 0)) goto L_8C0CE764;
    if (((int)(*(int *)((v0_4 + 0x0))) >= 0)) goto L_8C0CEBB0;
    if ((v0_10 == 1)) goto L_8C0CEB8A;
    v0_11 = (v0_10);
    if ((v0_10 != 2)) goto L_8C0CEBCC;
    L_8C0CEB8A:;
    sndStopAll();
    *(unsigned int *)0x8C20D14C = 0x2;
    *(unsigned int *)0x8C20D150 = v0_2;
    *(unsigned int *)0x8C1D1274 = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_2;
    *(unsigned int *)0x8C3343C0 = v0_2;
    *(unsigned int *)0x8C3343C4 = v0_2;
    v0_1 = strmScoreReset();
    *(unsigned int *)0x8C287C54 = v0_0;
    v0_11 = (v0_1);
    L_8C0CEBCC:;
    return v0_11;
    L_8C0CEBB0:;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - (*(int *)0x8C301BF0));
    v0_11 = (0x8C301BF0);
    if (((int)(*(int *)0x8C38B9BC) < (int)v0_0)) goto L_8C0CEBCC;
    v0_0 = *(int *)((v0_11 + 0x0));
    v0_1 = *(int *)0x8C38B9B8;
    *(unsigned int *)0x8C38B9B8 = (v0_1 + v0_0);
    v0_11 = ((v0_1 + v0_0));
    goto L_8C0CEBCC;
    L_8C0CE764:;
    v0_10 = *(int *)((v0_5 + 0x0));
    v0_11 = (v0_10);
    if ((v0_10 != 7)) goto L_8C0CE778;
    v0_10 = *(int *)0x8C38B958;
    v0_11 = (v0_10);
    if ((v0_10 != 70)) goto L_8C0CE778;
    v0_11 = ((sndCrowdReact(0x2)));
    L_8C0CE778:;
    v0_11 = *(int *)((v0_5 + 0x0));
    v0_10 = (v0_11);
    w0_1 = (1.0f);
    if (!(((int)v0_11 <= (int)0x9))) goto L_8C0CE8D4;
    v0_11 = ((((int)v0_10 >= 0)));
    if ((!v0_11)) goto L_8C0CE8D4;
    v0_10 = (entryFinalCheck()) != 0;
    if (v0_10) goto L_8C0CE818;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
    v0_6 = ((int (*)(int, int, int, int, Stk3, float))(panelWordPut))(0x0, v0_6, v0_3, v0_9, *(Stk3 *)(((int)stk + 16)), w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    panelDigitPut((*(int *)((v0_5 + 0x0))), *(Stk3 *)(((int)stk + 4)));
    goto L_8C0CE818;
    L_8C0CE8D4:;
    if (((int)v0_10 >= 0)) goto L_8C0CE954;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x8)) = *(struct mv3 *)((((int)stk + 28) + 0x2C)); }
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) - 75.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x8)); }
    v0_10 = ((int (*)(int, int, int, int, Stk3, float))(panelWordPut))(0x1, v0_6, v0_3, v0_9, *(Stk3 *)(((int)stk + 16)), w0_1);
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 150.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
    v0_10 = ((int (*)(int, Stk3, float))(panelWordPut))(0x2, *(Stk3 *)(((int)stk + 4)), w0_1);
    *(unsigned int *)(((int)stk + 32)) = v0_2;
    *(unsigned int *)(((int)stk + 28)) = v0_7;
    if (((int)v0_8 <= 0)) goto L_8C0CE954;
    L_8C0CE93A:;
    entryPortLeave((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x1, v0_3);
    v0_7 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 32)) = (v0_7 + 0x1);
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
    if (((int)(v0_7 + 0x1) < (int)v0_8)) goto L_8C0CE93A;
    L_8C0CE954:;
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_8C0CE984;
    if (((*(int *)0x8C38B958) != 0x82)) goto L_8C0CE96E;
    nlsndSystemControl(0x1, 0x1300A0, 0x0);
    L_8C0CE96E:;
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_8C0CE984;
    if (((*(int *)0x8C38B958) != 120)) goto L_8C0CE984;
    *(unsigned int *)0x8C38B9B0 = v0_2;
    *(unsigned int *)0x8C38B9B4 = v0_2;
    L_8C0CE984:;
    if (((int)(*(int *)((v0_5 + 0x0))) > (int)0xFFFFFFFF)) goto L_8C0CE998;
    if (((*(int *)0x8C38B9B0) != 0)) goto L_8C0CE998;
    *(unsigned int *)0x8C38B9B0 = v0_0;
    L_8C0CE998:;
    if (((*(int *)((v0_5 + 0x0))) != -2)) goto L_8C0CEA74;
    if (((*(int *)0x8C38B958) != 70)) goto L_8C0CE9E0;
    fadeScreenStart(0x3, 0x0, 0x46, v0_9, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 240.0f, w0_0);
    sprInitPos(0x8C38B960, 0x22);
    *(float *)0x8C38B970 = 40.0f;
    *(float *)0x8C38B974 = 30.0f;
    v0_10 = (0x8C38B960);
    L_8C0CE9E0:;
    v0_11 = ((((*(int *)((v0_5 + 0x0))) == -2)));
    if ((!v0_11)) goto L_8C0CEA74;
    if (((int)(*(int *)0x8C38B958) >= (int)0x5)) goto L_8C0CEA4E;
    if (((*(int *)0x8C38B9C0) != 1)) goto L_8C0CEA4E;
    fadeStart(0x78);
    L_8C0CEA4E:;
    if (((*(int *)((v0_5 + 0x0))) != -2)) goto L_8C0CEA74;
    if (((int)(*(int *)0x8C38B958) >= (int)0x5)) goto L_8C0CEA74;
    if (((*(int *)0x8C38B9C0) != 0)) goto L_8C0CEA74;
    *(unsigned int *)((v0_1 + 0x70)) = ((*(int *)((v0_1 + 0x70))) | 0x80000);
    *(unsigned int *)0x8C38B9C0 = v0_0;
    L_8C0CEA74:;
    if (((int)(*(int *)((v0_5 + 0x0))) > (int)0xFFFFFFFD)) goto L_8C0CEA84;
    thunk_FUN_8c0f41f0(0x8C38B960, v0_6, v0_3, v0_9);
    L_8C0CEA84:;
    if (((int)(*(int *)((v0_5 + 0x0))) >= (int)0xFFFFFFFC)) goto L_8C0CEAC2;
    if (((*(int *)0x8C38B9B0) == 0)) goto L_8C0CEAC2;
    if (((*(int *)0x8C38B9B4) != 2)) goto L_8C0CEAC2;
    sndStopAll();
    *(unsigned int *)0x8C1D1274 = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_2;
    *(unsigned int *)((v0_4 + 0x0)) = v0_2;
    *(unsigned int *)((v0_1 + 0x70)) = ((*(int *)((v0_1 + 0x70))) & 0xFFFFFFBF);
    FUN_8c0eaf00(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pauseQuit();
    L_8C0CEAC2:;
    if (((int)(*(int *)((v0_5 + 0x0))) < (int)0xFFFFFFFF)) goto L_8C0CEB08;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - (*(int *)0x8C301BF0));
    L_8C0CEB0E:;
    if (((int)(*(int *)((v0_4 + 0x0))) > 0)) goto L_8C0CEB28;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) - 1);
    *(unsigned int *)((v0_4 + 0x0)) = 0x46;
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_8C0CEB28;
    *(unsigned int *)((v0_4 + 0x0)) = 0x82;
    L_8C0CEB28:;
    v0_1 = (0xFFFFFFFD);
    if (((int)(*(int *)0x8C38B9BC) < (int)v0_0)) goto L_8C0CEB3E;
    *(unsigned int *)0x8C38B9B8 = ((*(int *)0x8C38B9B8) + (*(int *)0x8C301BF0));
    L_8C0CEB3E:;
    if (((int)(*(int *)((v0_5 + 0x0))) > (int)v0_1)) goto L_8C0CEB62;
    if (((*(int *)0x8C38B9B4) != 0)) goto L_8C0CEB62;
    if (((*(int *)0x8C38B9B0) == 0)) goto L_8C0CEB62;
    cacheOcbiRange(0xCA00000, 0x200000);
    *(unsigned int *)0x8C38B9B4 = v0_0;
    L_8C0CEB62:;
    v0_0 = *(int *)((v0_5 + 0x0));
    v0_11 = (v0_0);
    if ((v0_0 != -3)) goto L_8C0CEBCC;
    *(unsigned int *)((v0_5 + 0x0)) = 0xFFFFFFFB;
    *(unsigned int *)((v0_4 + 0x0)) = 0x46;
    *(unsigned int *)0x8C38B9B4 = 0x2;
    goto L_8C0CEBCC;
    L_8C0CEB08:;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - 1);
    goto L_8C0CEB0E;
    L_8C0CE818:;
    *(unsigned int *)(((int)stk + 28)) = v0_7;
    *(unsigned int *)(((int)stk + 32)) = (v0_7 + 0x4);
    v0_10 = (v0_7);
    v0_6 = (v0_7);
    v0_9 = (v0_2);
    if (((int)v0_8 > 0)) goto L_8C0CE82E;
    goto L_8C0CE954;
    L_8C0CE82E:;
    v0_3 = (0x8C29B898);
    L_8C0CE830:;
    if ((((*(int *)(((*(int *)((v0_3 + ((*(int *)((v0_10 + 0x0))) << 2)))) + 0x10))) & 8) == 0)) goto L_8C0CE870;
    *(unsigned int *)0x8C38B84C = v0_0;
    *(unsigned int *)((v0_4 + 0x0)) = 0x78;
    if (((*(int *)((v0_1 + 0x10))) != 2)) goto L_8C0CE856;
    entryPortContinue((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), v0_6);
    goto L_8C0CE954;
    L_8C0CE856:;
    entryPortContinue((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), v0_6);
    if ((v0_8 != 2)) goto L_8C0CE954;
    entryPortContinue((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), v0_6);
    goto L_8C0CE954;
    L_8C0CE870:;
    if ((((*(int *)(((*(int *)((v0_3 + ((*(int *)((v0_6 + 0x0))) << 2)))) + 0x10))) & 5) == 0)) goto L_8C0CE8A2;
    if (((int)(*(int *)0x8C38B95C) > (int)0x7)) goto L_8C0CE8A2;
    if (((int)(*(int *)0x8C38B95C) < 0)) goto L_8C0CE8A2;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) - 1);
    *(unsigned int *)((v0_4 + 0x0)) = 0x46;
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_8C0CE8A2;
    *(unsigned int *)((v0_4 + 0x0)) = 0x82;
    L_8C0CE8A2:;
    v0_7 = (int)(v0_9 + 0x1) < (int)v0_8;
    v0_10 = ((v0_10 + 0x4));
    v0_6 = ((v0_6 + 0x4));
    v0_9 = ((v0_9 + 0x1));
    if (v0_7) goto L_8C0CE830;
    goto L_8C0CE954;
    L_8C0CE630:;
    *(unsigned int *)((v0_7 + 0x0)) = (*(int *)((v0_10 + 0xB64)));
    v0_11 = (v0_6);
    v0_10 = (v0_3);
    if ((v0_6 == 0)) goto L_8C0CE64E;
    if ((v0_11 == 1)) goto L_8C0CE65A;
    if ((v0_11 == 2)) goto L_8C0CE668;
    if ((v0_11 == 3)) goto L_8C0CE688;
    goto L_8C0CE698;
    L_8C0CE688:;
    if (((*(int *)((v0_1 + 0x18))) != 0)) goto L_8C0CE698;
    *(unsigned int *)((v0_7 + 0x4)) = (*(int *)(((v0_10 + v0_9) + 0xB64)));
    L_8C0CE696:;
    v0_8 = (0x2);
    goto L_8C0CE698;
    L_8C0CE668:;
    if (((*(int *)((v0_1 + 0x14))) != 0)) goto L_8C0CE698;
    v0_11 = (0xB64);
    L_8C0CE670:;
    *(unsigned int *)((v0_7 + 0x4)) = (*(int *)((v0_10 + v0_11)));
    goto L_8C0CE696;
    L_8C0CE65A:;
    if (((*(int *)((v0_1 + 0x20))) != 0)) goto L_8C0CE698;
    *(unsigned int *)((v0_7 + 0x4)) = (*(int *)((v0_10 + 0x33CC)));
    goto L_8C0CE696;
    L_8C0CE64E:;
    if (((*(int *)((v0_1 + 0x1C))) != 0)) goto L_8C0CE698;
    v0_11 = (0x2654);
    goto L_8C0CE670;
}

int BupCardWarning(int a4)
{
    int stk[19];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_7 = a4;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    v0_0 = *(int *)0x8C40C628;
    *(unsigned int *)(((int)stk + 4)) = ((v0_0 * 0x4C) + 0x8C40C6B0);
    buGetDiskInfo((*(int *)0x8C40C628), (((v0_0 * 0x4C) + 0x8C40C6B0) + 0x14));
    v0_1 = buGetFileInfo((*(int *)0x8C40C628), 0x8C126AB0, (((int)stk + 4) + 0x14));
    resCautionReset(0x0);
    v0_0 = *(short *)(((*(int *)(((int)stk + 4))) + 0x3A));
    v0_7 = (thunk_FUN_8c1e0150(0x0, 0x8C126AB0)) == 0;
    v0_0 = ((unsigned short)v0_0);
    v0_6 = (v0_1);
    v0_1 = (0x8C126AB0);
    v0_2 = (0x0);
    v0_3 = (0x1);
    v0_4 = (0x8C40C698);
    v0_5 = (0x8C40C628);
    if (v0_7) goto L_8C0E08DC;
    if ((v0_6 != 0)) goto L_8C0E08E8;
    if (((int)v0_0 < (int)0x2)) goto L_8C0E08E8;
    L_8C0E08DC:;
    if (((*(int *)0x8C40C698) != 0)) goto L_8C0E08E8;
    *(unsigned int *)((v0_4 + 0x0)) = v0_3;
    L_8C0E0A56:;
    return 0x0;
    L_8C0E08E8:;
    if (((*(int *)((v0_4 + 0x0))) == 1)) goto L_8C0E08F2;
    goto L_8C0E0A56;
    L_8C0E08F2:;
    if ((v0_6 == 0xFFFFFF03)) goto L_8C0E0918;
    if ((v0_6 == 0xFFFFFF01)) goto L_8C0E0918;
    v0_6 = (thunk_FUN_8c1e0150(0x0, 0x8C126AB0)) == 0xFFFFFF05;
    if (v0_6) goto L_8C0E090E;
    goto L_8C0E0A56;
    L_8C0E090E:;
    if (((int)v0_0 < (int)0x2)) goto L_8C0E0918;
    goto L_8C0E0A56;
    L_8C0E0918:;
    *(unsigned int *)(((int)stk + 12)) = 0x8C29B8A8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C29B898;
    L_8C0E0A3E:;
    if (((*(int *)(((int)stk + 20))) == 0)) goto L_8C0E094C;
    pdExecPeripheralServer();
    resCautionReset(0x0);
    fadeStart(0x3C);
    goto L_8C0E0A56;
    L_8C0E094C:;
    pdExecPeripheralServer();
    *(unsigned int *)(((int)stk + 8)) = (buGetFileInfo((*(int *)((v0_5 + 0x0))), v0_1, (((int)stk + 4) + 0x14)));
    buGetDiskInfo((*(int *)((v0_5 + 0x0))), ((*(int *)(((int)stk + 4))) + 0x14));
    v0_0 = ((unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x3A))));
    v0_6 = (v0_2);
    if (((*(int *)(((int)stk + 8))) == 0xFFFFFF03)) goto L_8C0E0982;
    if (!(((*(int *)(((int)stk + 8))) != 0xFFFFFF01))) goto L_8C0E0982;
    v0_7 = (thunk_FUN_8c1e0150(0x0, v0_1)) != 0xFFFFFF05;
    if (v0_7) goto L_8C0E099A;
    if (((int)v0_0 >= (int)0x2)) goto L_8C0E099A;
    v0_6 = (v0_3);
    goto L_8C0E099A;
    L_8C0E0982:;
    v0_6 = (v0_2);
    L_8C0E099A:;
    v0_7 = (thunk_FUN_8c1e0150(0x0, v0_1)) == 0;
    if (v0_7) goto L_8C0E09B6;
    v0_7 = (thunk_FUN_8c1e0150(0x0, v0_1)) != 0xFFFFFF05;
    if (v0_7) goto L_8C0E09BA;
    if (((int)v0_0 < (int)0x2)) goto L_8C0E09BA;
    L_8C0E09B6:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_3;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    L_8C0E09BA:;
    if ((v0_6 == (*(int *)0x8C421E28))) goto L_8C0E09C8;
    resCautionReset(0x0);
    L_8C0E09C8:;
    v0_0 = (v0_2);
    v0_7 = ((*(int *)(((int)stk + 16))));
    L_8C0E09F4:;
    if (((unsigned int)v0_7 < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_8C0E09E8;
    v0_7 = (0xA);
    if ((v0_0 == 0)) goto L_8C0E0A04;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    *(unsigned int *)((v0_4 + 0x0)) = v0_2;
    L_8C0E0A04:;
    fadeStart(v0_7);
    if ((v0_0 == 0)) goto L_8C0E0A14;
    fadeCaptureBegin();
    L_8C0E0A14:;
    BupDrawWarning(v0_6, R5, R6);
    if ((v0_0 == 0)) goto L_8C0E0A22;
    fadeCaptureEnd(0x0);
    L_8C0E0A22:;
    mainCheckReset();
    msgWinStep(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    fadeDraw();
    nlWaitVSync();
    *(unsigned int *)0x8C421E28 = v0_6;
    goto L_8C0E0A3E;
    L_8C0E09E8:;
    v0_8 = ((*(int *)(((*(int *)((v0_7 + 0x0))) + 0x10))) & 8) == 0;
    v0_7 = ((v0_7 + 0x4));
    if (v0_8) goto L_8C0E09F4;
    v0_0 = (v0_3);
    goto L_8C0E09F4;
}

int eepromBootLoad(int a4)
{
    int stk[9];
    register int t23;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = R8;
    *(int *)((int)stk + 8) = v0_0;
    *(unsigned int *)0x8C40C628 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_0 = (0x8C40C628);
    v0_1 = (0x0);
    L_8C0DF31E:;
    v0_2 = (thunk_FUN_8c1e0150((*(int *)((v0_0 + 0x0))), 0x8C126AB0)) != 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R8 = (0x8C126AB0);
    if (v0_2) goto L_8C0DF34A;
    v0_2 = BupLoadFile((*(int *)((v0_0 + 0x0))), R8, 0x8C40C2F4, 0x128);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_8C0DF34C;
    v0_4 = BupFailDialog(0x0);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_8C0DF31E;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C0DF34C:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_2 = (0x8C40C2F4);
    R13 = (0x1);
    if ((v0_3 == 0)) goto L_8C0DF38A;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_4 = (0x4);
    v0_3 = (v0_1);
    L_8C0DF362:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)v0_3 < (int)v0_4)) goto L_8C0DF35A;
    v0_1 = 0x8C1D775C;
    v0_3 = v0_2;
    for (;;) { t23 = *(int *)v0_1; v0_1 = (v0_1 + 4); if ((unsigned int)((0x8C1D775C + 296)) < (unsigned int)v0_1) break; *(unsigned int *)v0_3 = t23; v0_3 = (v0_3 + 4); }
    *(unsigned int *)((v0_2 + 0xC)) = ((*(int *)((v0_2 + 0xC))) | R13);
    *(unsigned int *)0x8C29BBB8 = R13;
    BupRequestSave((*(int *)((v0_0 + 0x0))), R8, 0x8C40C2F4, 0x128);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C0DF3A6:;
    unlockApplyW1();
    unlockApplyW2();
    syCfgGetSoundMode(0x8C40C2F0);
    strmSetStereo(((((*(int *)0x8C40C2F0) == 0)) ? 1 : 0));
    strmBgmSetVol(0x50, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    v0_0 = strmVoiceSetVol((unsigned char)(*(signed char *)((v0_2 + 0x9))));
    *(unsigned int *)0x8C38BA78 = R13;
    *(unsigned int *)0x8C38BA74 = R13;
    *(unsigned int *)0x8C38BA70 = R13;
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_8C0DF35A:;
    padLcdClear(v0_3);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = ((v0_3 + 0x1));
    goto L_8C0DF362;
    L_8C0DF38A:;
    v0_0 = ((*(int *)((v0_2 + 0xC))) & R13) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x40);
    if (v0_0) goto L_8C0DF398;
    *(unsigned int *)0x8C29BBB8 = R13;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C0DF39C:;
    memmove(0x8C2FBC58, (0xE8 + v0_2), v0_3);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF3A6;
    L_8C0DF398:;
    *(unsigned int *)0x8C29BBB8 = v0_1;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF39C;
    L_8C0DF34A:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0xFFFFFF05);
    goto L_8C0DF34C;
}

int BupCheckCard(int a4)
{
    int stk[18];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    *(unsigned int *)0x8C40C628 = 0x0;
    v0_4 = buGetDiskInfo(0x0, 0x8C40C6C4);
    v0_1 = (0x8C40C6B0);
    v0_2 = (0x0);
    v0_3 = (v0_4);
    v0_0 = (0x8C1D78B4);
    if ((v0_4 == (*(int *)0x8C1D78B0))) goto L_8C0E056E;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)0x5)) goto L_8C0E058E;
    if (((int)v0_3 < 0)) goto L_8C0E055E;
    BupRequestLoad(0x0, 0x8C126AB0, 0x8C40C2F4, 0x128);
    L_8C0E055E:;
    *(unsigned int *)0x8C1D78B0 = v0_3;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    resCautionReset(0x0);
    L_8C0E0570:;
    v0_4 = (v0_3);
    if ((v0_3 == 0xFFFFFF03)) goto L_8C0E058A;
    if ((v0_4 == 0xFFFFFF01)) goto L_8C0E058A;
    if ((v0_4 == -1)) goto L_8C0E058E;
    if (!((v0_4 == 0))) goto L_8C0E05BA;
    v0_3 = (thunk_FUN_8c1e0150(0x0, 0x8C126AB0)) != 0;
    v0_4 = (0x3A);
    v0_0 = (v0_2);
    if (v0_3) goto L_8C0E05A2;
    v0_0 = (0x1);
    goto L_8C0E05A2;
    L_8C0E05BA:;
    return v0_4;
    L_8C0E05A2:;
    v0_1 = ((unsigned short)(*(short *)((v0_1 + v0_4))));
    if ((v0_0 == 0)) goto L_8C0E05AE;
    v0_4 = (0x0);
    goto L_8C0E05BA;
    L_8C0E05AE:;
    if (((int)v0_1 < (int)0x2)) goto L_8C0E05B8;
    v0_4 = (0x1);
    goto L_8C0E05BA;
    L_8C0E05B8:;
    v0_4 = (0xFFFFFFFC);
    goto L_8C0E05BA;
    L_8C0E058E:;
    v0_4 = (0xFFFFFFFD);
    goto L_8C0E05BA;
    L_8C0E058A:;
    v0_4 = (0xFFFFFFFE);
    goto L_8C0E05BA;
    L_8C0E056E:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_8C0E0570;
}

int BupRequestLoad(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t1 = thunk_FUN_8c1e0150(a4, a5);
    if ((t1 == 0) && (t0 = *(int *)0x8C40C6A4, t0 == 0)) {
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x1);
        }
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0x0)) = 0x2;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0x4)) = a4;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0x8)) = a5;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0xC)) = a6;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0x8C40C634) + 0x10)) = a7;
        return padLcdSetMode(0xB, 0x8C40C634);
    }
    return t1;
}

int fadeCaptureEnd(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0x8C1389FC;
    t1 = t0;
    if (t0 == 1) {
        nlRenderTextureEnd(a4);
        t0 = thunk_FUN_8c0bcda0(1.0f, (*(float *)0x8C287D64));
        *(unsigned int *)0x8C287D7C = a4;
        *(float *)0x8C287D80 = (float)(a4 - 2);
        if (a4 == 0) {
            *(unsigned int *)0x8C1389FC = 0x3;
            t2 = 0x3;
        } else {
            *(unsigned int *)0x8C1389FC = 0x2;
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}

int thunk_FUN_8c0eee50(int a4)
{
    return nlGetMatrix(a4);
}

int thunk_FUN_8c1e0150(int a4, int a5)
{
    return buIsExistFile(a4, a5);
}

int thunk_FUN_8c0f41f0(int a4, int a5, int a6, int a7)
{
    return nlSprPut(a4, a5, a6, a7);
}
