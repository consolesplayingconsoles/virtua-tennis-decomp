/* Straight-line functions with calls and guards (batch gen_yn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
int ADXT_SetOutVol(int, int);
int ADXT_Stop(int);
int BupRequestSave(int, int, int, int);
int FUN_8c0eaf00(int, int, int);
int btnGuideDrawB(int, int, int, int, Stk3, float);
int buGetDiskInfo(int, int);
int camWorldToView(Stk4);
int charaTexFreeAll(void);
int cpuAimPointSet(int, int, float, float);
int cpuShotAimStick(int);
int cpuShotTargetSet(int, float, float);
int dbgMenuSetItem(int, int, int, int, int, int, int);
int dbgMenuSetTitle(int, int, int);
int emotFaceMorph(int, int);
int emotFaceReset(int);
int evSeRetry(int, int);
int fadeScreenStart(int, int, int, int, int, int);
int fadeStart(int);
int fileLoadClose(void);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int hudBannerSubPut(Stk3, float);
int hudFlagPut(int, Stk3, float);
int hudPanelDraw(int, int, float);
int lightOverrideDiffuse(int, int);
int memset(int, int, int);
int mtxGetWorldPos(int, int, int, int, int);
int ndbLoadStart(void);
int nlArcSin(float);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlCloseEvent2(int);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlLoadMatrix33on44(int);
int nlLocate(int, int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRenderTextureBegin(int, int, int, int, int, int, int, int, int);
int nlRenderTextureEnd(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlSprPut(int, int, int, int);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nlsndDriverStatus(void);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int plPicLoad(int);
int primSprDraw(int, int, int, int, Stk3);
int rankSprTexFree(void);
int resSprTitleRead(void);
int screenOutcode(int, int);
int screenProject(int, int, Stk3);
int set_event(int, int);
int set_event2(int, int);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAlpha(int, int, int, int, float);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int sprSet173Free(int);
int sprSet173Load(int);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int strmBgmFadeOut(int, int);
int strmBgmPlay(int);
int strmCallScore(int, int, int, int, int, int, int, int, int, int, int, int);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int swingBlurPut(int, float, float);
int thunk_FUN_8c0f41f0(int, int, int, int);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int umpBusyStart(void);
Stk3 vecMake(float, float, float);
int FUN_8c07aea6(int a4, int a5);
int FUN_8c088fc0(int a4);
int FUN_8c0d0808(int a4, int a5);
void FUN_8c08a5c6(int a4, int a5, int a6, int a7, int a8);
float FUN_8c05dae0(int a4, float f4);
int FUN_8c08e99c(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_8c0d6684(void);
int FUN_8c01364e(int a4);
int FUN_8c0d9308(int a4);
int FUN_8c08a7ec(int a4, int a5, int a6, int a7);
int FUN_8c0e1d7c(void);
int FUN_8c07af58(int a4, int a5);
int FUN_8c07afe0(int a4, int a5);
int FUN_8c097b24(int a4, Stk3 s, float f4);
int FUN_8c0da7d0(int a4);
int FUN_8c03f5aa(int a4);
int FUN_8c0827b2(int a4, int a5, int a6, int a7);
int FUN_8c0b614c(int a4);
int FUN_8c0da1bc(int a4);
int FUN_8c095148(Stk3 s, float f4, float f5);
int FUN_8c089f20(Stk6 s);
int FUN_8c08b340(float f4);
void FUN_8c083a3e(void);
int FUN_8c07b08c(int a4, int a5);
void FUN_8c083888(int a4);
int FUN_8c0c8f84(int a4, int a5);
int FUN_8c0109c0(int a4, int a5, int a6);
int FUN_8c08dfac(void);
int FUN_8c0cdf8c(int a4);
int FUN_8c07ad72(int a4, int a5);
int FUN_8c0da11c(int a4);
int FUN_8c0dfc1a(int a4, int a5, int a6);
int FUN_8c08aa32(int a4, int a5, int a6, int a7);
int FUN_8c0c690c(int a4, int a5, int a6, int a7);
int FUN_8c0df62e(void);
int FUN_8c0d9420(int a4);
int FUN_8c084a64(int a4);
void FUN_8c08b018(int a4, int a5, int a6, int a7, int a8);
int FUN_8c0b23b8(void);
int FUN_8c0134f4(int a4);
int FUN_8c096728(int a4, Stk3 s, float f4);
void FUN_8c08ff70(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c07facc(int a4, int a5);
int FUN_8c08e862(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int FUN_8c0c54b4(void);
void FUN_8c0837cc(int a4);
int FUN_8c0b2358(void);
int FUN_8c0e747a(void);
int FUN_8c0aaf46(void);
int FUN_8c07fa70(int a4);
int FUN_8c0969a4(void);
int FUN_8c0b14e6(void);
int FUN_8c082716(int a4);
int FUN_8c086182(int a4);
void FUN_8c089c9c(int a4, int a5, int a6);
int FUN_8c010a38(int a4, int a5, int a6);
int FUN_8c084bce(int a4, int a5, int a6, int a7);
void FUN_8c08ffd4(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c088dd2(int a4, int a5, int a6, int a7);
int FUN_8c03bb5c(int a4);
int FUN_8c089bf4(int a4);
int FUN_8c089c48(int a4);
void FUN_8c08e3f4(int a4, int a5, int a6);
int FUN_8c09e898(Stk3 s);
int FUN_8c0b32c6(void);
int FUN_8c087d0a(int a4);
int FUN_8c0d9812(int a4);
int FUN_8c0dee7e(int a4, float f4, float f5);
void FUN_8c08e358(int a4, int a5);

int FUN_8c07aea6(int a4, int a5)
{
    int stk[12];
    register int t14;
    register int t0;
    register float u1;
    register int t3;
    register float u4;
    register float u8;
    register int t10;
    register float u11;

    t14 = a5;
    if ((int)a5 < (int)0x5A) {
        t0 = a5;
        for (;;) {
            u1 = *(float *)((a4 + 0xB00));
            *(float *)(((int)stk + 4)) = (u1 * 95.0800018f);
            t3 = t0;
            t0 = (t0 + 0x1);
            u4 = (-1.0f);
            u4 = u4 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t3, 0x1, (u4 * 43.8800011f), (u1 * 95.0800018f));
            u8 = ((*(float *)((a4 + 0xB00))) * (nlRandom()));
            *(float *)(((int)stk + 4)) = (u8 * 118.849998f);
            t10 = t0;
            t0 = (t0 + 0x1);
            u11 = (-1.0f);
            u11 = u11 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t10, 0x2, (u11 * 43.8800011f), (u8 * 118.849998f));
            if ((int)t0 >= (int)0x5A) {
                break;
            }
        }
        t14 = t0;
    }
    return t14;
}

int FUN_8c088fc0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x18));
    t1 = *(int *)((((t0 * 0x270) + 0x8C34B4F4) + 0x268));
    t2 = 0x26C;
    if ((*(int *)((((t0 * 0x270) + 0x8C34B4F4) + 0x26C))) == (*(int *)((((((t1 << 1) + t1) << 2) + ((t0 * 0x270) + 0x8C34B4F4)) + 0xC)))) {
        t0 = *(int *)((a4 + 0x18));
        *(unsigned int *)(((0x8C34B4F4 + (t0 * 0x270)) + 0x268)) = ((*(int *)(((0x8C34B4F4 + (t0 * 0x270)) + 0x268))) + 0x1);
        t2 = 0x268;
    }
    t0 = t2;
    if ((*(int *)0x8C287C60) == 0) {
        t0 = (emotFaceMorph((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x18)))));
    }
    t1 = t0;
    if ((*(int *)0x8C287C60) == 0) {
        t0 = *(int *)((a4 + 0x18));
        *(unsigned int *)(((t0 * 0x270) + 0x8C34B760)) = ((*(int *)(((t0 * 0x270) + 0x8C34B760))) + 0x1);
        t1 = 0x8C34B760;
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    }
    t0 = t1;
    if ((int)(*(int *)((a4 + 0x14))) > (int)0x78) {
        emotFaceReset((*(int *)((a4 + 0x1C))));
        t0 = (nlCloseEvent(a4));
    }
    if ((*(int *)0x8C287B44) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x82;
    }
    return t0;
}

int FUN_8c0d0808(int a4, int a5)
{
    register int t7;
    register int t9;
    register int t11;

    nlPrintColor(0xFFFF0000);
    nlLocate(0x1, (a5 - 2));
    nlPrintf(0x8C125A04);
    nlLocate(0x1, (a5 - 1));
    nlPrintf(0x8C125A28);
    nlPrintColor(0xFFFFFFFF);
    nlLocate(0x1, a5);
    t7 = 0x0;
    for (;;) {
        nlPrintf(0x8C125A4C, (((int)a4 << (int)(-t7)) & 0x1));
        t9 = (int)((int)t7 % (int)0xA);
        t11 = t9;
        if (t9 == 9) {
            t11 = (nlPrintf(0x8C125A50));
        }
        t7 = (t7 + 0x1);
        if ((int)t7 >= (int)0x20) {
            break;
        }
    }
    return t11;
}

void FUN_8c08a5c6(int a4, int a5, int a6, int a7, int a8)
{
    int stk[9];

    register int R2;
    register int R3;
    int R7;
    int R9;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_1 = (0x3);
    v0_2 = (0x0);
    v0_0 = ((v0_0 + 0x18));
    v0_3 = (((int)stk + 4));
    R7 = (0x1);
    R9 = (0x8);
    L_8C08A5DE:;
    if (((int)(*(int *)((v0_0 + 0x0))) >= 0)) goto L_8C08A5E6;
    v0_0 = ((v0_0 + 0x50));
    L_8C08A5E6:;
    if (((int)(*(int *)((v0_0 + 0x0))) <= 0)) goto L_8C08A638;
    v0_4 = ((*(int *)((v0_0 + 0x0))) & R9) == 0;
    v0_0 = ((v0_0 + 0x4));
    if (v0_4) goto L_8C08A5F8;
    v0_4 = (v0_1);
    L_8C08A5FA:;
    v0_5 = (v0_2);
    v0_6 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_8C08A634:;
    if (!(((int)v0_5 < (int)v0_6))) goto L_8C08A638;
    v0_7 = (v0_2);
    goto L_8C08A62E;
    L_8C08A638:;
    if (((*(int *)((v0_0 + 0x0))) != 0)) goto L_8C08A5DE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(0x8C1016D4); }
    L_8C08A648:;
    return;
    L_8C08A62E:;
    if (((int)v0_7 < (int)v0_4)) goto L_8C08A604;
    v0_5 = ((v0_5 + 0x1));
    goto L_8C08A634;
    L_8C08A604:;
    if ((((*(int *)((v0_0 + 0x0))) & R7) == 0)) goto L_8C08A62A;
    *(float *)((v0_3 + 0x0)) = (*(float *)(((v0_0 + 0xC) + 0x0)));
    *(float *)((v0_3 + 0x4)) = (*(float *)((((v0_0 + 0xC) + 0x4) + 0x0)));
    *(float *)((v0_3 + 0x8)) = (*(float *)(((((v0_0 + 0xC) + 0x4) + 0x4) + 0x0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(v0_3); }
    goto L_8C08A648;
    L_8C08A62A:;
    v0_0 = ((v0_0 + 0x8));
    v0_7 = ((v0_7 + 0x1));
    goto L_8C08A62E;
    L_8C08A5F8:;
    v0_4 = (R7);
    goto L_8C08A5FA;
}

float FUN_8c05dae0(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        t2 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
        u0 = nlRandom();
        u1 = *(float *)((a4 + 0xB00));
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        u2 = (((-((float)t2 * 0.300000012f)) - (u0 * 0.100000001f)) + 1.0f);
        *(float *)((a4 + 0xA34)) = ((float)t1 * 21.9400005f);
        u0 = (u1 * u2);
        *(float *)((a4 + 0xA3C)) = (-(u0 * 118.849998f));
        u0 = 118.849998f;
    }
    return u0;
}

int FUN_8c08e99c(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = *(float *)((a4 + 0x18));
    u1 = *(float *)((a4 + 0x20));
    u2 = *(float *)((a4 + 0x1C));
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x10));
    u5 = *(float *)((a4 + 0x14));
    if (a5 == 0) {
        *(float *)((a4 + 0x24)) = ((f5 * u5) + u2);
        *(float *)((a4 + 0x14)) = (f5 * u5);
    }
    if (a5 == 1) {
        *(float *)((a4 + 0x1C)) = ((u2 - (f5 * u5)) + u5);
        *(float *)((a4 + 0x14)) = (f5 * u5);
    }
    thunk_FUN_8c0f41f0(a4, a5, a6, a7);
    *(float *)((a4 + 0x18)) = u0;
    *(float *)((a4 + 0x1C)) = u2;
    *(float *)((a4 + 0x20)) = u1;
    *(float *)((a4 + 0x24)) = u3;
    *(float *)((a4 + 0x10)) = u4;
    *(float *)((a4 + 0x14)) = u5;
    return 0x14;
}

int FUN_8c0d6684(void)
{
    int stk[6];
    register int t17;
    register int t22;
    register int t24;

    if ((*(int *)0x8C20D15C) == 0) {
        hudPanelDraw(0x2, 0x0, 0.0f);
    }
    if ((*(int *)0x8C20D15C) == 15) {
        strmBgmPlay(0x13);
    }
    if ((int)(*(int *)0x8C20D15C) > (int)0xA) {
        hudPanelDraw(0x1, 0x0, (*(float *)0x8C0D67A8));
    }
    t17 = FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
    if ((*(int *)0x8C20D15C) == 0xBE) {
        fadeScreenStart(0x3, 0x0, 0x1E, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        hudPanelDraw(0x2, 0x0, 0.0f);
        *(unsigned int *)0x8C20D150 = 0x7;
        t22 = BupRequestSave((*(int *)0x8C40C628), 0x8C125E54, 0x8C40C2F4, 0x128);
        *(unsigned int *)0x8C20D15C = 0x0;
        t24 = t22;
    } else {
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t24 = t17;
    }
    return t24;
}

int FUN_8c01364e(int a4)
{
    register int t0;
    register float u0;

    t0 = set_event(0x40, 0x8C013714);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(Stk3 *)((0x18 + t0)) = vecMake(0.0f, 10.0f, 100.0f);
    u0 = *(float *)0x8C1016E0;
    *(float *)((t0 + 0x2C)) = u0;
    *(float *)((t0 + 0x28)) = u0;
    *(float *)((t0 + 0x24)) = u0;
    u0 = *(float *)0x8C1016E0;
    *(Stk3 *)((0x30 + t0)) = vecMake(u0, u0, u0);
    *(unsigned short *)((t0 + 0x3C)) = 0x0;
    *(unsigned short *)((t0 + 0x3E)) = 0x0;
    dbgMenuSetTitle(a4, 0x8C101408, 0x2);
    dbgMenuSetItem(a4, 0x0, 0x8C101414, 0x1, 0x0, 0x1, 0x1);
    return (dbgMenuSetItem(a4, 0x1, 0x8C10141C, 0x1E, 0x0, 0x5A, 0x1));
}

int FUN_8c0d9308(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)0x8C287D5C) == 3) {
        *(unsigned int *)0x8C40C284 = 0x0;
    }
    t1 = *(int *)((a4 + 0x14));
    t2 = t1;
    if (t1 == 2) {
        t1 = nlsndSeqRequest(0xD03A9);
        nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64));
        t3 = t1;
        if (t1 == -1) {
            t3 = (evSeRetry(0xA, 0xD03A9));
        }
        t2 = t3;
    }
    t1 = t2;
    if ((*(int *)0x8C40C284) == 0) {
        nlsndSystemControl(0x1, 0x1300A0, 0x0);
        t1 = (nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64)));
    }
    t2 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t2 - 1);
    if (((int)(t2 - 1) >= 0) && (t0 = *(int *)0x8C40C284, t0 != 0)) {
        return t1;
    }
    *(unsigned int *)0x8C40C284 = 0x0;
    return nlCloseEvent(a4);
}

int FUN_8c08a7ec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;

    t0 = (a4 + 0x18);
    t1 = a6;
    t2 = a7;
    t3 = 0x0;
    for (;;) {
        if ((int)(*(int *)((t0 + 0x0))) < 0) {
            t0 = (t0 + 0x50);
        }
        if ((int)(*(int *)((t0 + 0x0))) > 0) {
            t4 = (*(int *)((t0 + 0x0)));
            t0 = (t0 + 0x4);
            if ((t4 & 8) != 0) {
                t5 = 0x3;
            } else {
                t5 = 0x1;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = t6;
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)t7) {
                    break;
                }
                t2 = 0x0;
                if ((int)t5 > 0) {
                    for (;;) {
                        t8 = (*(int *)((t0 + 0x0)));
                        t2 = (t2 + 0x1);
                        if ((t8 & 0x1) != 0) {
                            t1 = t3;
                            t1 = (t1 << 1);
                            t8 = t3;
                            u0 = (*(float *)((t0 + 0x0)));
                            t0 = (t0 + 0x4);
                            t1 = (t1 + t8);
                            t1 = (t1 << 2);
                            t1 = (t1 + a5);
                            t4 = 0x4;
                            *(float *)((t1 + 0x0)) = u0;
                            u1 = (*(float *)((t0 + 0x0)));
                            t0 = (t0 + 0x4);
                            t3 = (t3 + 0x1);
                            *(float *)((t1 + t4)) = u1;
                            t4 = 0x8;
                            u0 = (*(float *)((t0 + 0x0)));
                            t0 = (t0 + 0x4);
                            *(float *)((t1 + t4)) = u0;
                            t0 = (t0 + 0x14);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                        if ((int)t2 >= (int)t5) {
                            break;
                        }
                    }
                }
                t6 = (t6 + 0x1);
            }
        }
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
    }
    return t3;
}

int FUN_8c0e1d7c(void)
{
    int stk[4];
    register int t9;

    if ((*(int *)0x8C20D15C) == 0) {
        rankSprTexFree();
        stageFreeAll();
        stageTexSetGarbagedAll();
        FUN_8c0eaf00(0x4D4D4D, 0x4D4D4D, 0x4D4D4D);
    }
    t9 = resSprTitleRead();
    if (t9 == 1) {
        titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        strmVoiceQueueReset();
        *(unsigned int *)0x8C407FD0 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        fadeStart(0x3C);
        *(unsigned int *)0x8C1D793C = 0x0;
        *(unsigned int *)0x8C1D7940 = 0x0;
        strmScoreReset();
        *(unsigned int *)0x8C38B95C = 0x0;
        *(unsigned int *)0x8C38B958 = 0x0;
        *(unsigned int *)0x8C1D1274 = 0x0;
        return nlInitEvent();
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return t9;
}

int FUN_8c07af58(int a4, int a5)
{
    int stk[12];
    register float u0;
    register float u1;
    register int t15;
    register int t2;
    register float u4;
    register float u7;
    register float u8;
    register float u9;
    register int t11;
    register float u12;

    *(unsigned int *)(((int)stk + 8)) = a4;
    u0 = *(float *)0x8C07B070;
    u1 = *(float *)0x8C07B074;
    t15 = a5;
    if ((int)a5 < (int)0x5A) {
        t2 = a5;
        for (;;) {
            u4 = *(float *)(((*(int *)(((int)stk + 8))) + 0xB00));
            *(float *)(((int)stk + 4)) = u4;
            u7 = u0;
            u7 = u7 + (*(float *)0x8C07B07C) * (nlRandom());
            u8 = *(float *)0x8C07B080;
            u9 = (u4 * u7);
            *(float *)(((int)stk + 4)) = (u9 * u8);
            t11 = t2;
            t2 = (t2 + 0x1);
            u12 = (-1.0f);
            u12 = u12 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t11, 0x1, (u12 * u1), (u9 * u8));
            if ((int)t2 >= (int)0x5A) {
                break;
            }
        }
        t15 = t2;
    }
    return t15;
}

int FUN_8c07afe0(int a4, int a5)
{
    int stk[12];
    register int t11;
    register int t0;
    register float u2;
    register float u4;
    register float u5;
    register int t7;
    register float u8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t11 = a5;
    if ((int)a5 < (int)0x5A) {
        t0 = a5;
        for (;;) {
            u2 = *(float *)(((*(int *)(((int)stk + 8))) + 0xB00));
            *(float *)(((int)stk + 4)) = u2;
            u4 = 0.600000024f;
            u4 = u4 + 0.400000006f * (nlRandom());
            u5 = (u2 * u4);
            *(float *)(((int)stk + 4)) = (u5 * 118.849998f);
            t7 = t0;
            t0 = (t0 + 0x1);
            u8 = (-1.0f);
            u8 = u8 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t7, 0x1, (u8 * 54.8499985f), (u5 * 118.849998f));
            if ((int)t0 >= (int)0x5A) {
                break;
            }
        }
        t11 = t0;
    }
    return t11;
}

int FUN_8c097b24(int a4, Stk3 s, float f4)
{
    int stk[27];
    register float u0;
    register float u1;
    register float u2;

    stk[16] = s.w[0];
    stk[17] = s.w[1];
    stk[18] = s.w[2];
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(float *)(((int)stk + 36)) = f4;
    u0 = *(float *)(((((int)stk + 32) + 0x20) + 0x8));
    u1 = *(float *)(((((int)stk + 32) + 0x20) + 0x4));
    u2 = *(float *)(((((int)stk + 32) + 0x20) + 0x0));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u2 + -69.0f), (u1 + -16.0f), u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    hudBannerSubPut(*(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 36))));
    *(float *)(((((int)stk + 32) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x20) + 0x0))) + 47.0f);
    *(float *)(((((int)stk + 32) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x20) + 0x4))) - 1.0f);
    *(float *)(((((int)stk + 32) + 0x20) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x20) + 0x8))) - 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x20)); }
    return (hudFlagPut((*(int *)(((int)stk + 32))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}

int FUN_8c0da7d0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + (*(float *)(((0x1C + a4) + 0x0))));
    t1 = 0x18;
    t2 = 0x1;
    if ((*(float *)0x8C0DA9A0) > (*(float *)((a4 + 0x18)))) {
    } else {
        t1 = (ADXT_SetOutVol((*(int *)0x8C38BA98), (int)(*(float *)((a4 + 0x18)))));
        t2 = 0x0;
    }
    t3 = t1;
    if ((t2 == 0) && (t0 = *(int *)((a4 + 0x14)), (int)t0 >= 0)) {
    } else {
        t0 = 0x0;
        for (;;) {
            t1 = (0x8C40C240 + t0);
            t0 = (t0 + 0x4);
            *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
            if ((unsigned int)t0 >= (unsigned int)0x24) {
                break;
            }
        }
        *(unsigned int *)0x8C40C230 = 0x0;
        *(unsigned int *)0x8C40C23C = 0x0;
        ADXT_Stop((*(int *)0x8C38BA98));
        ADXT_SetOutVol((*(int *)0x8C38BA98), (*(int *)0x8C38BA6C));
        t3 = (nlCloseEvent(a4));
    }
    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    return t3;
}

int FUN_8c03f5aa(int a4)
{
    register int t0;
    register float u3;
    register float u4;
    register float u11;

    t0 = *(int *)((a4 + 0xB5C));
    cpuShotTargetSet(a4, 0.0f, 0.0f);
    *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
    u3 = *(float *)(((0xB98 + a4) + 0x0));
    u4 = *(float *)(((0xA2C + a4) + 0x0));
    u11 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u4 - u3) > 0.0f) - (0.0f > (u4 - u3))));
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u11 * 8.0f)) + 24.0f));
    return 0x20;
}

int FUN_8c0827b2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)0x8C185410;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (t1 != 0) {
            fileLoadClose();
            *(unsigned int *)0x8C301958 = 0xFFFFFFFF;
            nlCloseEvent(a4);
            *(unsigned int *)0x8C181750 = 0x1;
            *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
            return 0x8C30195C;
        }
        t0 = fileLoadPoll(t1, a5, a6, a7);
        if (t0 == 1) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
            *(unsigned int *)0x8C181750 = 0x1;
            *(unsigned int *)0x8C301958 = 0x0;
            *(unsigned int *)0x8C30195C = (*(int *)0x8C287ACC);
            return nlCloseEvent(a4);
        }
        return t0;
    }
    if (t1 == 0) {
        t0 = fileLoadStart(0x8CA80000, 0x8C10DA9C, 0x0);
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
        return t0;
    }
    *(unsigned int *)0x8C301958 = 0xFFFFFFFF;
    nlCloseEvent(a4);
    *(unsigned int *)0x8C181750 = 0x1;
    *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
    return 0x8C30195C;
}

int FUN_8c0b614c(int a4)
{
    *(unsigned int *)(((set_event(0x18, 0x8C0B5F78)) + 0x14)) = a4;
    dbgMenuSetTitle(a4, 0x8C120AEC, 0x5);
    dbgMenuSetItem(a4, 0x0, 0x8C120AF8, 0x0, 0x0, 0x1, 0x0);
    dbgMenuSetItem(a4, 0x1, 0x8C120AFC, 0x0, 0x0, 0x1, 0x0);
    dbgMenuSetItem(a4, 0x2, 0x8C120B00, 0x0, 0x0, 0x1, 0x0);
    dbgMenuSetItem(a4, 0x3, 0x8C120B04, 0x0, 0x0, 0x1, 0x0);
    return (dbgMenuSetItem(a4, 0x4, 0x8C120B08, 0x0, 0x0, 0x1, 0x0));
}

int FUN_8c0da1bc(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x24));
    t1 = *(int *)((a4 + 0x28));
    u0 = *(float *)0x8C0DA30C;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))));
    nlRotateAY((*(int *)((a4 + 0x20))));
    nlObjPutTrnsl((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D5664))), (((float)t0 / (float)t1) * u0));
    t0 = nlPopMatrix(0x1);
    if ((*(int *)0x8C287C60) == 0) {
        t1 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            if ((int)(*(int *)0x8C1D568C) > 0) {
                *(unsigned int *)0x8C1D568C = ((*(int *)0x8C1D568C) - 1);
            }
            return nlCloseEvent(a4);
        }
        return t0;
    }
    return t0;
}

int FUN_8c095148(Stk3 s, float f4, float f5)
{
    int stk[26];

    stk[15] = s.w[0];
    stk[16] = s.w[1];
    stk[17] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    sprPutAtAlpha(0x8C33A360, *(Stk3 *)(((int)stk + 28)), f5);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 11.0f);
    *(float *)0x8C33A3C0 = (((*(float *)0x8C33A3D0) - (*(float *)0x8C33A3C8)) * 160.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    sprPutAtAlpha(0x8C33A3B0, *(Stk3 *)(((int)stk + 16)), f5);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 160.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    return (sprPutAtAlpha(0x8C33A400, *(Stk3 *)(((int)stk + 4)), f5));
}

int FUN_8c089f20(Stk6 s)
{
    int stk[39];
    register int t6;
    register int t9;

    stk[25] = s.w[0];
    stk[26] = s.w[1];
    stk[27] = s.w[2];
    stk[28] = s.w[3];
    stk[29] = s.w[4];
    stk[30] = s.w[5];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x28)); }
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x10);
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x10);
    camWorldToView(*(Stk4 *)(((int)stk + 44)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 60) + 0x10)); }
    screenProject((((int)stk + 32) + 0x24), (((int)stk + 32) + 0x28), *(Stk3 *)(((int)stk + 32)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x50)); }
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x10);
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x10);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 60) + 0x10)); }
    screenProject((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x3C), *(Stk3 *)(((int)stk + 4)));
    t6 = screenOutcode((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))));
    t9 = screenOutcode((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 64))));
    return (((((unsigned short)t6 & (unsigned short)t9) == 0)) ? 1 : 0);
}

int FUN_8c08b340(float f4)
{
    register float t4;

    nlTranslate(0.0f, (-f4), 0.0f);
    nlRotateAY(((-(unsigned short)(*(short *)0x8C287A3E)) + 0x8000));
    t4 = nlCos(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    nlTranslate(0.0f, 0.0f, (f4 * (1.0f / t4)));
    nlScale(1.0f, (*(float *)0x8C08B4A8), (1.0f / t4));
    nlRotateAX(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    return nlRotateAY(((unsigned short)(*(short *)0x8C287A3E) - 32768));
}

void FUN_8c083a3e(void)
{
    register int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        *(Stk3 *)((0x20 + t1)) = vecMake(315.0f, 380.0f, 0.100000001f);
        *(Stk3 *)((0x14 + t1)) = vecMake(700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        umpBusyStart();
        nlsndSeqRequest(0x120A9);
    return;
    }
}

int FUN_8c07b08c(int a4, int a5)
{
    int stk[12];
    register float u0;
    register float u1;
    register int t12;
    register int t2;
    register float u4;
    register float u6;
    register int t8;
    register float u9;

    *(unsigned int *)(((int)stk + 8)) = a4;
    u0 = *(float *)0x8C07B1A4;
    u1 = *(float *)0x8C07B1A8;
    t12 = a5;
    if ((int)a5 < (int)0x5A) {
        t2 = a5;
        for (;;) {
            u4 = *(float *)(((*(int *)(((int)stk + 8))) + 0xB00));
            *(float *)(((int)stk + 4)) = u4;
            u6 = (u4 * (nlRandom()));
            *(float *)(((int)stk + 4)) = (u6 * u0);
            t8 = t2;
            t2 = (t2 + 0x1);
            u9 = (-1.0f);
            u9 = u9 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t8, 0x1, (u9 * u1), (u6 * u0));
            if ((int)t2 >= (int)0x5A) {
                break;
            }
        }
        t12 = t2;
    }
    return t12;
}

void FUN_8c083888(int a4)
{
    register int t1;
    register float u2;
    register float u3;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C08382C);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C08399C;
        u3 = *(float *)0x8C0839A0;
        *(Stk3 *)((0x20 + t1)) = vecMake((*(float *)0x8C0839A4), u2, u3);
        *(Stk3 *)((0x14 + t1)) = vecMake((*(float *)0x8C0839AC), u2, u3);
        *(unsigned int *)((t1 + 0x84)) = a4;
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

int FUN_8c0c8f84(int a4, int a5)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 8)) = a4;
    nlPushUnitMatrix();
    nlLoadMatrix((((*(int *)(((int)stk + 8))) + 0x1E4) + 0x280));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x4));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x18)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x34)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x24)) = *(struct mv3 *)(0x8C1016D4); }
    *(float *)((a5 + 0x30)) = 0.0f;
    *(unsigned int *)((a5 + 0x4C)) = 0x0;
    *(unsigned int *)((a5 + 0x54)) = 0x0;
    return 0x54;
}

int FUN_8c0109c0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x14) {
        t0 = 0x14;
    }
    t1 = nlMalloc(t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x8)) = a6;
        if (a6 == (*(int *)0x8C22D1B8)) {
            *(unsigned int *)0x8C22D1B8 = t1;
        }
        t0 = *(int *)((a6 + 0x4));
        *(unsigned int *)((t1 + 0x4)) = t0;
        if (t0 == 0) {
            *(unsigned int *)0x8C22D1AC = t1;
        } else {
            *(unsigned int *)(((*(int *)((a6 + 0x4))) + 0x8)) = t1;
        }
        *(unsigned int *)((a6 + 0x4)) = t1;
        *(unsigned int *)((t1 + 0xC)) = a5;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x8C100EE0;
        *(unsigned int *)0x8C23D1EC = ((*(int *)0x8C23D1EC) + 0x1);
    }
    return t1;
}

int FUN_8c08dfac(void)
{
    int stk[4];

    *(unsigned short *)0x8C1826F8 = ((*(short *)0x8C1826F8) + 0x50);
    nlSetCommonTextureOffset(0x320);
    nlRenderTextureBegin(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    nlPushUnitMatrix();
    nlTranslate(0.0f, 0.0f, (*(float *)0x8C08E084));
    nlRotateAY((unsigned short)(*(short *)0x8C1826F8));
    nlObjPut(0xC5B62B0);
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlTranslate(0.0f, 0.0f, (*(float *)0x8C08E09C));
    nlRotateAY((unsigned short)(*(short *)0x8C1826F8));
    nlObjPut(0xC5B62B0);
    nlPopMatrix(0x1);
    return nlRenderTextureEnd();
}

int FUN_8c0cdf8c(int a4)
{
    int stk[25];
    register float u1;
    register float u3;
    register int t15;
    register int t16;

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetMatrix((((int)stk + 4) + 0xC));
    u1 = *(float *)(((int)stk + 48));
    u3 = *(float *)(((int)stk + 56));
    *(unsigned int *)(((int)stk + 12)) = (nlArcSin((-(*(float *)(((int)stk + 52))))));
    *(unsigned int *)(((int)stk + 8)) = (nlArcTan2(u1, u3));
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 12)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    nlMultiMatrix((((int)stk + 4) + 0xC));
    nlGetMatrix((((int)stk + 4) + 0xC));
    t15 = *(int *)(((int)stk + 4));
    t16 = nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((t15 + 0x0)) = t16;
    return t16;
}

int FUN_8c07ad72(int a4, int a5)
{
    int stk[12];
    register float u0;
    register float u1;
    register int t10;
    register int t2;
    register float u4;
    register int t6;
    register float u7;

    *(unsigned int *)(((int)stk + 8)) = a4;
    u0 = *(float *)0x8C07AE48;
    u1 = *(float *)0x8C07AE4C;
    t10 = a5;
    if ((int)a5 < (int)0x5A) {
        t2 = a5;
        for (;;) {
            u4 = *(float *)(((*(int *)(((int)stk + 8))) + 0xAF0));
            *(float *)(((int)stk + 4)) = (-(u4 * u0));
            t6 = t2;
            t2 = (t2 + 0x1);
            u7 = (-1.0f);
            u7 = u7 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t6, 0x1, (u7 * u1), (-(u4 * u0)));
            if ((int)t2 >= (int)0x5A) {
                break;
            }
        }
        t10 = t2;
    }
    return t10;
}

int FUN_8c0da11c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)0x8C0DA2EC;
    u1 = *(float *)0x8C0DA2F0;
    if ((int)(*(int *)((a4 + 0x14))) >= (int)0x3) {
        u2 = *(float *)((a4 + 0x18));
        u3 = (((-u2) + u1) / u0);
        u4 = u2;
        t1 = ((-(*(int *)((a4 + 0x14)))) + 0x6);
    } else {
        u2 = *(float *)((a4 + 0x18));
        u3 = (((-u2) + u1) / u0);
        u4 = u2;
        t1 = (*(int *)((a4 + 0x14)));
    }
    u0 = u4;
    u0 = u0 + (float)t1 * u3;
    *(float *)0x8C40C2C8 = u0;
    if (u0 > u1) {
        *(float *)0x8C40C2C8 = u1;
    }
    if (((int)(*(int *)((a4 + 0x14))) >= 0) && (t0 = *(int *)0x8C407FCC, t0 != 1)) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        return t0;
    }
    *(float *)0x8C40C2C8 = (*(float *)((a4 + 0x18)));
    *(unsigned int *)0x8C1D565C = 0x0;
    return nlCloseEvent(a4);
}

int FUN_8c0dfc1a(int a4, int a5, int a6)
{
    register int t4;

    if (a5 != 1) {
        if (a5 != 2) {
            *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x4)) = a6;
            buGetDiskInfo(a4, (((a4 * 0x4C) + 0x8C40C6B0) + 0x14));
        } else {
            *(unsigned short *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x0)) = 0x0;
            *(unsigned short *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x2)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x8)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0xC)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x10)) = 0x0;
            memset((((a4 * 0x4C) + 0x8C40C6B0) + 0x14), 0x0, 0x38);
        }
    } else {
        if (a6 == 0) {
            *(unsigned short *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x0)) = 0x1;
            t4 = buGetDiskInfo(a4, (((a4 * 0x4C) + 0x8C40C6B0) + 0x14));
            if (t4 == 0) {
                *(unsigned short *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x2)) = 0x1;
            }
            *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x10)) = 0x0;
    return 0x0;
}

int FUN_8c08aa32(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t13;
    register int t0;
    register int t1;

    t2 = (a4 + 0x18);
    t3 = (a5 << 29);
    t4 = a7;
    for (;;) {
        if ((int)(*(int *)((t2 + 0x0))) < 0) {
            t2 = (t2 + 0x4);
            *(unsigned int *)((t2 + 0x0)) = (0x3000000 | (a5 << 29));
            t2 = (t2 + 0x4C);
        }
        t7 = *(int *)((t2 + 0x0));
        if ((int)t7 > 0) {
            t1 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            if ((t1 & 0x8) != 0) {
                t4 = 0x3;
            } else {
                t4 = 0x1;
            }
            t1 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            t0 = 0x0;
            t13 = t7;
            for (;;) {
                if ((int)t0 >= (int)t1) {
                    break;
                }
                t3 = 0x0;
                if ((int)t4 > 0) {
                    for (;;) {
                        t13 = (*(int *)((t2 + 0x0)));
                        t3 = (t3 + 0x1);
                        if ((t13 & 0x1) != 0) {
                            t2 = (t2 + 0x20);
                        } else {
                            t2 = (t2 + 0x8);
                        }
                        if ((int)t3 >= (int)t4) {
                            break;
                        }
                    }
                }
                t0 = (t0 + 0x1);
            }
        }
        if ((*(int *)((t2 + 0x0))) == 0) {
            break;
        }
    }
    return t0;
}

int FUN_8c0c690c(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t10;
    register int t16;
    register int t0;
    register int t1;
    register int t4;

    t2 = (a4 + 0x18);
    t3 = a7;
    for (;;) {
        if ((int)(*(int *)((t2 + 0x0))) < 0) {
            t3 = (*(int *)((t2 + 0x20)));
            if (t3 == a5) {
                *(unsigned int *)((t2 + 0x20)) = a6;
            }
            t2 = (t2 + 0x50);
        }
        t10 = *(int *)((t2 + 0x0));
        if ((int)t10 > 0) {
            t1 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            if ((t1 & 0x8) != 0) {
                t3 = 0x3;
            } else {
                t3 = 0x1;
            }
            t4 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            t1 = 0x0;
            t16 = t10;
            for (;;) {
                if ((int)t1 >= (int)t4) {
                    break;
                }
                t0 = 0x0;
                if ((int)t3 > 0) {
                    for (;;) {
                        t16 = (*(int *)((t2 + 0x0)));
                        t0 = (t0 + 0x1);
                        if ((t16 & 0x1) != 0) {
                            t2 = (t2 + 0x20);
                        } else {
                            t2 = (t2 + 0x8);
                        }
                        if ((int)t0 >= (int)t3) {
                            break;
                        }
                    }
                }
                t1 = (t1 + 0x1);
            }
        }
        if ((*(int *)((t2 + 0x0))) == 0) {
            break;
        }
    }
    return t0;
}

int FUN_8c0df62e(void)
{
    register int t13;

    *(unsigned char *)0x8C40C2F4 = ((int)((int)(nlRand()) % (int)0x5));
    *(unsigned char *)0x8C40C2F6 = ((int)((int)(nlRand()) % (int)0x5));
    *(unsigned char *)0x8C40C2F7 = ((int)((int)(nlRand()) % (int)0x5));
    *(unsigned char *)0x8C40C2F8 = ((int)((int)(nlRand()) % (int)0x5));
    *(unsigned char *)0x8C40C2F9 = ((int)((int)(nlRand()) % (int)0x5));
    *(unsigned char *)0x8C40C2FA = ((int)((int)(nlRand()) % (int)0x5));
    t13 = (int)((int)(nlRand()) % (int)0x5);
    *(unsigned char *)0x8C40C2FB = t13;
    return t13;
}

int FUN_8c0d9420(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0x1C))) - 1);
    t2 = nlsndDriverStatus();
    if (((int)t2 < (int)0x2) && (t0 = *(int *)((a4 + 0x20)), t0 != 0)) {
        nlsndSeqRequest((*(int *)((a4 + 0x14))));
        nlsndSystemControl(0x4, 0x4A0, (*(int *)((a4 + 0x18))));
        return nlCloseEvent(a4);
    }
    t0 = *(int *)((a4 + 0x1C));
    t2 = t0;
    if ((t0 == 1) && (t1 = *(int *)((a4 + 0x20)), t1 == 0)) {
        t2 = (nlsndSeqRequest((*(int *)((a4 + 0x14)))));
    }
    if ((int)(*(int *)((a4 + 0x1C))) <= 0) {
        nlsndSystemControl((*(int *)((a4 + 0x24))), 0x4A0, (*(int *)((a4 + 0x18))));
        return nlCloseEvent(a4);
    }
    if ((*(int *)0x8C30196C) != 0) {
        return nlCloseEvent(a4);
    }
    return t2;
}

int FUN_8c084a64(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0x8C287B44;
    t1 = 0x78;
    if ((*(int *)0x8C287C60) == 0) {
        t2 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a4 + 0x14)) = (t2 - 1);
        t3 = 0x78;
        if ((int)(t2 - 1) < (int)0x14) {
            *(float *)0x8C1850A4 = ((*(float *)0x8C1850A4) - (*(float *)0x8C084B78));
            t3 = 0x8C084B78;
        }
        t2 = t3;
        if ((int)(*(int *)((a4 + 0x14))) > (int)0x82) {
            *(float *)0x8C1850A4 = ((*(float *)0x8C1850A4) + (*(float *)0x8C084B7C));
            t2 = 0x8C084B7C;
        }
        t1 = t2;
    }
    if ((*(float *)0x8C1850A4) > 1.0f) {
        *(float *)0x8C1850A4 = 1.0f;
    }
    if (0.0f > (*(float *)0x8C1850A4)) {
        *(float *)0x8C1850A4 = 0.0f;
    }
    if (((*(int *)((a4 + 0x14))) != 0) && (t0 == 0)) {
        return t1;
    }
    *(unsigned int *)0x8C1850A0 = 0x0;
    *(float *)0x8C1850A4 = 0.0f;
    return nlCloseEvent2(a4);
}

void FUN_8c08b018(int a4, int a5, int a6, int a7, int a8)
{
    int stk[33];

    stk[24] = a8;
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x4C);
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4C) + 0x4);
    *(float *)((((((int)stk + 4) + 0x4C) + 0x4) + 0x0)) = (*(float *)((a4 + 0x34)));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x4C) + 0x8);
    *(float *)((((((int)stk + 4) + 0x4C) + 0x8) + 0x0)) = (*(float *)((a4 + 0x38)));
    nlPushUnitMatrix();
    nlGetMatrix((((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 64)) = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(float *)(((int)stk + 68)) = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(float *)(((int)stk + 72)) = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    { struct mv16 { int w[16]; }; *(struct mv16 *)((*(int *)(((((int)stk + 4) + 0x5C) + 0x0)))) = *(struct mv16 *)((((int)stk + 4) + 0xC)); }
}

int FUN_8c0b23b8(void)
{
    register int t3;

    *(unsigned int *)0x8C188E8C = ((*(int *)0x8C188E8C) + 0x1);
    charaTexFreeAll();
    stageTexSetGarbagedAll();
    t3 = *(int *)0x8C287D5C;
    if (t3 != 0) {
        if (t3 != 2) {
            if (t3 != 1) {
            } else {
                *(unsigned int *)0x8C20D154 = 0x2;
                *(unsigned int *)0x8C20D158 = 0x2;
                *(unsigned int *)0x8C20D14C = 0x1;
                *(unsigned int *)0x8C20D150 = 0x8;
                *(unsigned int *)0x8C188E8C = ((*(int *)0x8C188E8C) + 0x3);
            }
        } else {
            *(unsigned int *)0x8C20D14C = 0x6;
            *(unsigned int *)0x8C20D150 = 0x2;
            *(unsigned int *)0x8C188E8C = ((*(int *)0x8C188E8C) + 0x2);
        }
    } else {
        *(unsigned int *)0x8C20D14C = 0x2;
        *(unsigned int *)0x8C20D150 = 0x2;
        *(unsigned int *)0x8C188E8C = ((*(int *)0x8C188E8C) + 0x1);
    }
    return strmBgmFadeOut(0x2, 0x0);
}

int FUN_8c0134f4(int a4)
{
    register float u1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)(((set_event(0x18, 0x8C01355A)) + 0x14)) = a4;
    u1 = *(float *)0x8C0135BC;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x8C101348;
    for (;;) {
        t5 = t2;
        t2 = (t2 + 0x1);
        dbgMenuSetItem(a4, t5, (t4 + 0x4), 0x0, 0x0, 0x1, 0x0);
        t3 = (t3 + 0x1);
        t4 = (t4 + 0xC);
        if (!(u1 > (float)t3)) {
            break;
        }
    }
    return dbgMenuSetTitle(a4, 0x8C1013E0, t2);
}

int FUN_8c096728(int a4, Stk3 s, float f4)
{
    int stk[18];
    register int t4;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    *(float *)(((((int)stk + 16) + 0xC) + 0x8)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x8))) + 0.00100000005f);
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 93.0f);
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 120.0f);
    t4 = 0x4;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x12)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t4 = (sprPutAtAlpha((((((a4 << 2) + a4) << 2) << 2) + 0x8C37CF10), *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t4;
}

void FUN_8c08ff70(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x12)) {
        if ((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) {
            *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C09018C));
            *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 120.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            sprPutAt((((((a4 << 2) + a4) << 2) << 2) + 0x8C37C2BC), a5, a6, a7, *(Stk3 *)(((int)stk + 4)));
        }
    }
}

int FUN_8c07facc(int a4, int a5)
{
    register float u1;
    register int t2;
    register int t3;
    register int t4;

    nlLineSetThickness(1.0f);
    u1 = *(float *)0x8C07FBBC;
    t2 = 0x1;
    t3 = a4;
    for (;;) {
        *(float *)(((((((t2 & 0x7) << 1) + (t2 & 0x7)) << 2) + a4) + 0x4)) = u1;
        *(float *)((t3 + 0x4)) = u1;
        t4 = nlSingleLine(t3, (((((t2 & 0x7) << 1) + (t2 & 0x7)) << 2) + a4), a5);
        t3 = (t3 + 0xC);
        t2 = (t2 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)(a4 + 0x60)) {
            break;
        }
    }
    return t4;
}

int FUN_8c08e862(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[16];
    register float u0;
    register float u1;

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    u0 = *(float *)((a4 + 0x10));
    u1 = *(float *)((a4 + 0x14));
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x10) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x10) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x10) + 0x8)));
    *(float *)((a4 + 0x10)) = (f4 * ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))));
    *(float *)((a4 + 0x14)) = (f4 * ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))));
    nlSprPut(a4, a5, a6, a7);
    *(float *)((a4 + 0x10)) = u0;
    *(float *)((a4 + 0x14)) = u1;
    return 0x14;
}

int FUN_8c0c54b4(void)
{
    int stk[23];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;

    t0 = ((int)stk + 4);
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)(((int)stk + 4) + 0x48)) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)(((0x8C343264 + t1) + 0x0));
        t1 = (t1 + 0x38);
        if (t2 != -1) {
            *(unsigned int *)((((int)stk + 4) + (t2 << 2))) = 0x1;
        }
        if ((unsigned int)t1 >= (unsigned int)0xE0) {
            break;
        }
    }
    t5 = t1;
    t6 = t2;
    t7 = 0x0;
    t8 = 0xE0;
    t9 = 0x0;
    for (;;) {
        t12 = (t9 << 2);
        if ((*(int *)((((int)stk + 4) + (t9 << 2)))) == 0) {
            t5 = t9;
            t12 = (sprSet173Free(t5));
        } else {
            t14 = t5;
            t15 = t6;
            t16 = t7;
            t17 = t8;
        }
        t9 = (t9 + 0x1);
        t5 = t14;
        t6 = t15;
        t7 = t16;
        t8 = t17;
        if ((int)t9 >= (int)0xD) {
            break;
        }
    }
    return t12;
}

void FUN_8c0837cc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)0x8C421F60) == 0) {
        t3 = 0x8C287D84;
        for (;;) {
            if ((((*(int *)((t3 + 0xB60))) & 0x40000) != 0) && (t0 = *(int *)((t3 + 0xB68)), t0 == 5)) {
                *(unsigned int *)((a4 + 0x88)) = 0x1;
            }
            t3 = (t3 + 0xD78);
            if ((unsigned int)t3 >= (unsigned int)0x8C289874) {
                break;
            }
        }
        t0 = *(int *)((a4 + 0x8C));
        *(unsigned int *)((a4 + 0x8C)) = (t0 - 1);
        if ((t0 != 0) && ((t1 = *(int *)((a4 + 0x88)), t1 == 0) && (t2 = *(int *)0x8C287B3C, (t2 & 1) == 0))) {
            return;
        }
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c0b2358(void)
{
    register int t2;

    charaTexFreeAll();
    stageTexSetGarbagedAll();
    t2 = *(int *)0x8C287D5C;
    if (t2 != 0) {
        if (t2 != 1) {
            if ((t2 != 2) && (t2 != 3)) {
                
            } else {
                *(unsigned int *)0x8C20D154 = 0x6;
            }
        } else {
            *(unsigned int *)0x8C20D154 = 0x2;
            *(unsigned int *)0x8C20D158 = 0x2;
            *(unsigned int *)0x8C20D14C = 0x1;
            *(unsigned int *)0x8C20D150 = 0x8;
        }
    } else {
        *(unsigned int *)0x8C20D154 = 0x2;
        *(unsigned int *)0x8C20D158 = 0x0;
    }
    *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
    *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
    return strmBgmFadeOut(0x2, 0x0);
}

int FUN_8c0e747a(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)(((t2 << 2) + 0x8C422048));
            if (((t4 & ((int)0x1 << (int)t3)) != ((*(int *)(((t2 << 2) + 0x8C40C308))) & ((int)0x1 << (int)t3))) && ((t4 & ((int)0x1 << (int)t3)) != 0)) {
                t1 = 0x1;
                t0 = (*(int *)(((0x8C40C308 + (t2 << 2)) + 0x0)));
                t0 = (t0 | ((int)0x1 << (int)t3));
                *(unsigned int *)(((0x8C40C308 + (t2 << 2)) + 0x0)) = t0;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x20) {
                break;
            }
        }
        t0 = 0x3;
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)t0) {
            break;
        }
    }
    return t1;
}

int FUN_8c0aaf46(void)
{
    register int t5;
    register int t7;

    nlLocate(0xA, 0x5);
    nlPrintf(0x8C110D5C, (unsigned short)(*(short *)0x8C343262));
    nlPrintf(0x8C110D6C, (unsigned short)(*(short *)0x8C343260));
    t5 = 0x0;
    for (;;) {
        t7 = nlPrintf(0x8C110D7C, (unsigned short)(*(short *)(((0x8C343264 + t5) + 0x14))));
        t5 = (t5 + 0x38);
        if ((unsigned int)t5 >= (unsigned int)0xE0) {
            break;
        }
    }
    return t7;
}

int FUN_8c07fa70(int a4)
{
    register float u1;
    register int t2;
    register int t3;
    register int t4;

    nlLineSetThickness(1.0f);
    u1 = *(float *)0x8C07FBBC;
    t2 = 0x1;
    t3 = a4;
    for (;;) {
        *(float *)(((((((t2 & 0x7) << 1) + (t2 & 0x7)) << 2) + a4) + 0x4)) = u1;
        *(float *)((t3 + 0x4)) = u1;
        t4 = nlSingleLine(t3, (((((t2 & 0x7) << 1) + (t2 & 0x7)) << 2) + a4), 0xFFFFFFFF);
        t3 = (t3 + 0xC);
        t2 = (t2 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)(a4 + 0x60)) {
            break;
        }
    }
    return t4;
}

int FUN_8c0969a4(void)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t3 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33C2F0), (*(int *)(((t0 << 2) + 0x8C10F568))), 0x8C10F4E8, 0x100, 0x100, (t0));
        t4 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33C2F0);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t4 + 0x34)) = 0x5;
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_8c0b14e6(void)
{
    nlLocate(0x14, 0x14);
    nlPrintf(0x8C111054, ((*(int *)0x8C1891F0)));
    nlPrintf(0x8C111064, ((*(int *)0x8C343FEC)));
    nlPrintf(0x8C111074, ((*(int *)0x8C343FF4)));
    nlPrintf(0x8C111084, ((*(int *)0x8C343FF8)));
    nlPrintf(0x8C111090, ((*(int *)0x8C343FE8)));
    return (nlPrintf(0x8C1110A0, ((*(int *)0x8C287C50))));
}

int FUN_8c082716(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)0x8C185410) != 0) {
        *(unsigned int *)0x8C301958 = 0xFFFFFFFF;
        t0 = nlCloseEvent(a4);
        *(unsigned int *)0x8C181750 = 0x1;
        *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
        t1 = t0;
    } else {
        if ((*(int *)0x8C181750) == 0) {
            *(unsigned int *)((a4 + 0x14)) = 0x2;
        }
        t0 = *(int *)((a4 + 0x14));
        t2 = t0;
        if (t0 == 2) {
            *(unsigned int *)0x8C30195C = (*(int *)0x8C287ACC);
            *(unsigned int *)0x8C301958 = 0x2;
            ndbLoadStart();
            t0 = nlCloseEvent(a4);
            *(unsigned int *)0x8C181750 = 0x1;
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_8c086182(int a4)
{
    *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) / 1.29999995f);
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if ((*(int *)((a4 + 0x14))) == 0) {
        return nlCloseEvent(a4);
    }
    nlPushMatrix(0x0);
    nlMultiMatrix((a4 + 0x18));
    swingBlurPut((*(int *)((a4 + 0x60))), (*(float *)((a4 + 0x58))), (*(float *)((a4 + 0x5C))));
    return nlPopMatrix(0x1);
}

void FUN_8c089c9c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (a4 + 0x18);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((t0 + 0x0))) != 0) {
            if (a6 == 0) {
                t2 = (*(int *)((t0 + 0x8)));
                t2 = (t2 & (~((int)0x1 << (int)a5)));
                *(unsigned int *)((t0 + 0x8)) = t2;
            } else {
                *(unsigned int *)((t0 + 0x8)) = ((*(int *)((t0 + 0x8))) | ((int)a6 << (int)a5));
            }
            t2 = 0x4C;
            t3 = *(int *)((t0 + t2));
            t0 = (t0 + 0x50);
            t2 = 0x4;
            t2 = ((int)((int)t3 / (int)t2));
            t1 = (t1 + 0x1);
            t2 = (t2 << 2);
            t0 = (t0 + t2);
            if ((int)t1 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
}

int FUN_8c010a38(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x14) {
        t0 = 0x14;
    }
    t1 = nlMalloc(t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = a6;
        if ((*(int *)0x8C22D1B4) == a6) {
            *(unsigned int *)0x8C22D1B8 = t1;
        }
        t0 = *(int *)((a6 + 0x8));
        *(unsigned int *)((t1 + 0x8)) = t0;
        if (t0 == 0) {
            *(unsigned int *)0x8C22D1B0 = t1;
        } else {
            *(unsigned int *)(((*(int *)((a6 + 0x8))) + 0x4)) = t1;
        }
        *(unsigned int *)((a6 + 0x8)) = t1;
        *(unsigned int *)((t1 + 0xC)) = a5;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x8C100EF0;
        *(unsigned int *)0x8C23D1EC = ((*(int *)0x8C23D1EC) + 0x1);
    }
    return t1;
}

int FUN_8c084bce(int a4, int a5, int a6, int a7)
{
    register int t2;
    register float u12;

    sprPutAlpha((a4 + 0x28), a5, a6, a7, (*(float *)((a4 + 0x1C))));
    t2 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t2 - 1);
    if (t2 == 0) {
        return nlCloseEvent(a4);
    }
    if ((*(int *)((a4 + 0x24))) == 3) {
        u12 = ((-((float)(*(int *)((a4 + 0x14))) / (float)(*(int *)((a4 + 0x18))))) + 1.0f);
    } else {
        u12 = ((float)(*(int *)((a4 + 0x14))) / (float)(*(int *)((a4 + 0x18))));
    }
    *(float *)((a4 + 0x1C)) = u12;
    return 0x1C;
}

void FUN_8c08ffd4(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x12)) {
        *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C09018C));
        *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 120.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        sprPutAt((((((a4 << 2) + a4) << 2) << 2) + 0x8C37CF10), a5, a6, a7, *(Stk3 *)(((int)stk + 4)));
    }
}

int FUN_8c088dd2(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t5;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x1C)); }
    btnGuideDrawB((*(int *)((a4 + 0x18))), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0x28))));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) + 0.100000001f);
    *(float *)((a4 + 0x28)) = ((*(float *)((a4 + 0x28))) - 0.300000012f);
    t5 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t5 - 1);
    if (t5 == 0) {
        return nlCloseEvent(a4);
    }
    return 0x28;
}

int FUN_8c03bb5c(int a4)
{
    register int t10;

    if ((int)(*(int *)((a4 + 0x20))) > (int)0x9) {
        return nlCloseEvent(a4);
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))));
    nlLoadMatrix33on44(0x8C2879B8);
    nlObjPut((*(int *)((((*(int *)((a4 + 0x20))) << 2) + 0x8C159EC0))));
    t10 = nlPopMatrix(0x1);
    *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
    return t10;
}

int FUN_8c089bf4(int a4)
{
    register int t2;
    register int t3;
    register int t11;
    register int t0;

    t2 = (a4 + 0x18);
    t3 = 0x0;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            if (((*(int *)((t2 + 0xC))) & 0x8000000) != 0) {
                *(unsigned int *)((t2 + 0xC)) = (((*(int *)((t2 + 0xC))) & 0xF7FFFFFF) | 0x10000000);
            }
            t0 = 0x4C;
            t11 = *(int *)((t2 + t0));
            t2 = (t2 + 0x50);
            t0 = 0x4;
            t0 = ((int)((int)t11 / (int)t0));
            t3 = (t3 + 0x1);
            t0 = (t0 << 2);
            t2 = (t2 + t0);
            if ((int)t3 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_8c089c48(int a4)
{
    register int t2;
    register int t3;
    register int t11;
    register int t0;

    t2 = (a4 + 0x18);
    t3 = 0x0;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            if (((*(int *)((t2 + 0xC))) & 0x10000000) != 0) {
                *(unsigned int *)((t2 + 0xC)) = (((*(int *)((t2 + 0xC))) & 0xEFFFFFFF) | 0x8000000);
            }
            t0 = 0x4C;
            t11 = *(int *)((t2 + t0));
            t2 = (t2 + 0x50);
            t0 = 0x4;
            t0 = ((int)((int)t11 / (int)t0));
            t3 = (t3 + 0x1);
            t0 = (t0 << 2);
            t2 = (t2 + t0);
            if ((int)t3 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

void FUN_8c08e3f4(int a4, int a5, int a6)
{
    
}

int FUN_8c09e898(Stk3 s)
{
    int stk[18];
    register float u3;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    *(unsigned short *)0x8C185194 = ((*(short *)0x8C185194) + 0x300);
    u3 = 90.0f;
    u3 = u3 + 70.0f * (nlSin((unsigned short)(*(short *)0x8C185194)));
    *(unsigned int *)(((int)stk + 16)) = (int)u3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    return (primSprDraw(0x8C341704, 0x100, 0x100, (((unsigned char)(*(int *)(((int)stk + 16))) << 8) | 0xFFFF0000), *(Stk3 *)(((int)stk + 4))));
}

int FUN_8c0b32c6(void)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(int *)0x8C3449F8;
    if (t1 != 15) {
        t2 = plPicLoad(t1);
        if (t2 == 1) {
            sprSet173Load((*(int *)0x8C3449F8));
            t1 = *(int *)0x8C3449F8;
            *(unsigned int *)0x8C3449F8 = (t1 + 0x1);
            if ((t1 + 0x1) == 15) {
                *(unsigned int *)0x8C344A00 = (*(int *)0x8C20D198);
            }
        }
    }
    if (((*(int *)0x8C3449F8) == 15) && (t0 = *(int *)0x8C3449FC, t0 == 0)) {
        *(unsigned int *)0x8C3449FC = 0x1;
    }
    return ((((*(int *)0x8C3449FC) == 1)) ? 1 : 0);
}

int FUN_8c087d0a(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)((a4 + 0x20))) != 0) {
        *(unsigned int *)((a4 + 0x1C)) = 0x8F;
    } else {
        *(unsigned int *)((a4 + 0x1C)) = 0x6A;
    }
    t0 = lightOverrideDiffuse((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))));
    t1 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t1 - 1);
    if (t1 == 0) {
        t1 = *(int *)((a4 + 0x18));
        t2 = 0x96;
        if ((*(int *)((a4 + 0x20))) != 0) {
            t2 = 0x64;
        }
        lightOverrideDiffuse(t1, t2);
        return nlCloseEvent(a4);
    }
    return t0;
}

int FUN_8c0d9812(int a4)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;

    t0 = *(int *)0x8C301BF0;
    if (t0 == 2) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 2);
        t3 = t0;
    } else {
        t2 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a4 + 0x14)) = (t2 - 1);
        t3 = (t2 - 1);
    }
    if ((int)(*(int *)((a4 + 0x14))) <= 0) {
        *(unsigned int *)(((int)stk + 4)) = 0x8C287B00;
        strmCallScore((*(int *)0x8C2889DC), (*(int *)0x8C289754), (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)0x8C287B04), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        return nlCloseEvent2(a4);
    }
    return t3;
}

int FUN_8c0dee7e(int a4, float f4, float f5)
{
    int stk[20];
    register int t0;
    register int t1;
    register int t2;

    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 4) + 0x4)) = *(struct mv16 *)(0x8C1268EC); }
    *(unsigned int *)(((int)stk + 4)) = (int)(f5 * 255.0f);
    t0 = (((int)stk + 4) + 0x4);
    t1 = a4;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        *(unsigned int *)((t0 + 0xC)) = (t2 | (((int)(f5 * 255.0f) << 16) << 8));
        *(float *)((t0 + 0x8)) = f4;
        t0 = (t0 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x40)) {
            break;
        }
    }
    return (nlDispStripTrnsl(0x4, (((int)stk + 4) + 0x4)));
}

void FUN_8c08e358(int a4, int a5)
{
    
}
