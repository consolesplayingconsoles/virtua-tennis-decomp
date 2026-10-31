/* Straight-line functions with calls and guards (batch gen_yj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
int FUN_8c0eaf00(int, int, int);
int FUN_8c0f0860(int);
int abs(int);
int camInit(void);
int camProject(int, int);
int camWorldToView(Stk4);
int charaTexFreeAll(void);
int circuitNumDraw(int, int, int, float, float, float);
int commonLoadStart(float);
int commonLoadStep(int);
int cpuAimPointSet(int, int, float, float);
int cpuShotTargetSet(int, float, float);
int dbgMenuGetValue(int, int);
int dbgMenuInit(void);
int emotKeysDefault(void);
int endingTexFree(void);
int entryClearJoined(void);
int entryInit(void);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeQuadDraw(int, int, int, float, float);
int fadeQuadDrawB(int, int, int, float);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int fogApply(int);
int fogSetColor(int, int, int, int);
int fogSetDensity(int, float);
int fogSetPreset(int, int);
int hudBarDraw(Stk3, float, float);
int hudBarDrawAlt(Stk3, Stk1, float, float);
int hudCallMsgDrawD970(int, int, int, int, float, float);
int hudCallMsgDrawD9c0(int, int, int, int, float, float);
int hudCallMsgDrawDb00(int, int, int, int, float, float);
int hudCallMsgDrawDb50(int, int, int, int, float, float);
int hudSignPut(int, Stk3, float);
int initSprPut2(int, float);
int lightOverrideAmbient(int, int);
int lightSet(int, int, int, int);
int markerDraw(int, Stk3, float);
int motFileLoadBegin(void);
int motFileLoadStep(void);
int motFileRequest(int);
int motionSet(int, int, int, int, int, int, float);
int mtxGetWorldPos(int, int, int, int, int);
int muneSlotReset(int, int);
int nlCloseEvent(int);
int nlCloseEvent2(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlFogTableSet(int);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLoadMatrix33on44(int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nlWaitVSync(void);
int playerInit(int, int);
int screenProject(int, int, Stk3);
int screenSphereVisible(Stk3, float);
int selGridClear(void);
int selPortReset(void);
int set_event(int, int);
int sndPack4Free(int);
int sprMatchLoad(void);
extern int sprPutAt();
int sprSet115Free(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageFreeAll(void);
int stageLoadGetFlag(void);
int stageTexSetGarbagedAll(void);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int uniformLoadBegin(void);
int uniformLoadStep(void);
int uniformTexRestore(int);
int vecAnglesTo(int, int, Stk3, Stk3);
Stk3 vecMake(float, float, float);
int worldToScreen(Stk4);
int FUN_8c078a54(int a4, int a5);
int FUN_8c0963e0(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c04e624(int a4, int a5);
int FUN_8c0de542(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_8c088c3e(int a4);
int FUN_8c0d5844(void);
int FUN_8c0bdcc4(void);
int FUN_8c082974(int a4);
float FUN_8c0479d4(int a4, float f4, float f5);
int FUN_8c08969c(int a4);
int FUN_8c0cb7ee(Stk3 s, float f4);
int FUN_8c08a4b0(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_8c0ddb36(float f4);
int FUN_8c07f800(int a4, Stk6 s);
int FUN_8c0862ba(int a4, float f4, float f5);
int FUN_8c04afe8(int a4, int a5);
float FUN_8c0e1108(int a4, int a5, Stk3 s);
int FUN_8c082dca(int a4);
int FUN_8c03b502(int a4);
int FUN_8c087ea4(int a4);
float FUN_8c0d9a44(int a4);
int FUN_8c08a656(int a4);
void FUN_8c086a34(int a4);
float FUN_8c05f714(int a4, float f4, float f5);
int FUN_8c0173c8(float f4, float f5);
void FUN_8c086486(int a4);
void FUN_8c08660c(int a4);
void FUN_8c086754(int a4);
float FUN_8c047bbc(int a4, float f4, float f5);
float FUN_8c047cbc(int a4, float f4, float f5);
int FUN_8c05f648(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_8c08a2d4(Stk3 s, float f4);
int FUN_8c08a3a0(Stk3 s, float f4);

int FUN_8c078a54(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
    cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
    t0 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
    for (;;) {
        t1 = (int)((int)(nlRand()) % (int)0x14);
        if (t1 != 0) {
            t1 = (int)((int)(nlRand()) % (int)0x5);
            if (t1 != 0) {
                u0 = 0.800000012f;
                u1 = (nlRandom());
            } else {
                u0 = 0.0500000007f;
                u1 = (nlRandom());
            }
            u2 = u0;
            u2 = u2 + 0.200000003f * u1;
            u0 = ((*(float *)((a4 + 0xB00))) * u2);
            t1 = t0;
            t0 = (t0 + 0x1);
            u1 = -54.8499985f;
            u1 = u1 + 109.699997f * (nlRandom());
            cpuAimPointSet(t1, 0x1, u1, (u0 * 118.849998f));
        } else {
            u0 = *(float *)((a4 + 0xB00));
            t1 = t0;
            t0 = (t0 + 0x1);
            u1 = -54.8499985f;
            u1 = u1 + 109.699997f * (nlRandom());
            cpuAimPointSet(t1, 0x1, u1, (u0 * 118.849998f));
        }
        if ((int)t0 > (int)0x5A) {
            break;
        }
    }
    return t0;
}

int FUN_8c0963e0(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[24];
    register int t0;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t17;
    register int t18;
    register int t20;

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    t0 = a4;
    if ((int)a4 > (int)0x63) {
        t0 = 0x63;
    }
    *(unsigned int *)(((int)stk + 28)) = ((int)((int)t0 % (int)0xA));
    t3 = (int)((int)t0 / (int)0xA);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
    t4 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33BDA0, a5, a6, a7, *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 60.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
    t6 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33BDF0, *(Stk3 *)(((int)stk + 4)));
    *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - 38.0f);
    *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 17.0f);
    if ((int)t3 > 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
        t9 = ((int (*)(int, Stk3))(sprPutAt))(((((((t3 << 2) + t3) << 2) << 2) + 0x8C33BDA0) + 0x140), *(Stk3 *)(((int)stk + 16)));
    }
    *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 9.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
    t17 = *(int *)(((int)stk + 28));
    t18 = ((int (*)(int, Stk3))(sprPutAt))(((((((t17 << 2) + t17) << 2) << 2) + 0x8C33BDA0) + 0x140), *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 10.0f);
    if (t0 == 1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
        t20 = 0xA0;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
        t20 = 0xF0;
    }
    return (((int (*)(int, Stk3))(sprPutAt))((t20 + 0x8C33BDA0), *(Stk3 *)(((int)stk + 16))));
}

int FUN_8c04e624(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (41.6500015f > u1) {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (119.349998f > u1) {
            t1 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0xC)));
            if ((unsigned char)(*(signed char *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0xC))) == 3) {
                *(unsigned char *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t1 << 2) << 2) << 1)) + 0xC)));
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t1 = 0xA24;
        } else {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t1 = 0x4;
        }
        t2 = t1;
    } else {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t2 = 0x4;
    }
    return t2;
}

int FUN_8c0de542(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[42];
    register int t0;
    register int t2;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u14;
    register float u16;
    register int t25;
    register int t1;

    stk[33] = a8;
    *(unsigned int *)(((int)stk + 12)) = a5;
    if (a5 != 0) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = ((((unsigned char)(int)(f4 * 255.0f) << 16) << 8) | 0xFFFFFF);
        t0 = 0x8C0DE5A4;
        t2 = a4;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((int)stk + 12)))) {
                break;
            }
            t5 = (0x0 + (((int)stk + 4) + 0xC));
            t6 = 0x0;
            t7 = 0x0;
            t8 = (0x0 + (((int)stk + 4) + 0xC));
            for (;;) {
                t0 = 0x4;
                *(float *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + 0x0)) = ((*(float *)((((t2 + 0xC) + t6) + 0x0))) + (*(float *)(((0x80 + ((int)stk + 4)) + 0x0))));
                *(float *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + t0)) = ((*(float *)((((t2 + 0xC) + t6) + t0))) + (*(float *)(((0x80 + ((int)stk + 4)) + t0))));
                t0 = 0x8;
                *(float *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + t0)) = (*(float *)(((0x80 + ((int)stk + 4)) + t0)));
                t0 = 0x4;
                u14 = *(float *)((t2 + t0));
                t0 = 0xC;
                *(float *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + t0)) = ((*(float *)((((t2 + 0xC) + t6) + t0))) / u14);
                t0 = 0x8;
                u16 = *(float *)((t2 + t0));
                t0 = 0x10;
                *(float *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + t0)) = ((-((*(float *)((((t2 + 0xC) + t6) + t0))) / u16)) + 1.0f);
                *(unsigned int *)((((t7 * 0x1C) + (((int)stk + 4) + 0xC)) + 0x14)) = (*(int *)(((int)stk + 8)));
                if (a6 != 0) {
                    *(unsigned int *)((t8 + 0x18)) = a6;
                } else {
                    *(unsigned int *)((t5 + 0x18)) = 0x0;
                }
                t7 = (t7 + 0x1);
                t8 = (t8 + 0x1C);
                t5 = (t5 + 0x1C);
                t6 = (t6 + 0x18);
                if ((int)t7 >= (int)0x3) {
                    break;
                }
            }
            t0 = (nlDispStripTexOfsTrnsl(0x3, (((int)stk + 4) + 0xC), (*(int *)((t2 + 0x0)))));
            t1 = (*(int *)(((int)stk + 4)));
            t2 = (t2 + 0x54);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t1;
        }
        t25 = t0;
    }
    return t25;
}

int FUN_8c088c3e(int a4)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t11;
    register int t34;
    register int t2;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((a4 + 0x14));
    if (((int)t1 >= (int)t0) && (t2 = *(int *)((a4 + 0x18)), (int)t1 < (int)(t2 + t0))) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) - (1.0f / (float)(*(int *)((a4 + 0x18)))));
    }
    if (0.0f > (*(float *)((a4 + 0x20)))) {
        *(float *)((a4 + 0x20)) = 0.0f;
    }
    t11 = stageLoadGetFlag();
    if (t11 != 0) {
        fadeQuadDrawB(0x100, 0x100, (*(int *)((a4 + 0x48))), 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
        markerDraw((*(int *)((a4 + 0x2C))), *(Stk3 *)(((int)stk + 4)), 0.0f);
    } else {
        if ((int)(*(int *)((a4 + 0x14))) >= (int)(*(int *)((a4 + 0x1C)))) {
            fadeQuadDrawB(0x100, 0x100, (*(int *)((a4 + 0x48))), (*(float *)((a4 + 0x20))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
            markerDraw((*(int *)((a4 + 0x2C))), *(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0x20))));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x3C)); }
            hudSignPut((*(int *)((a4 + 0x2C))), *(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0x20))));
        }
    }
    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    t34 = *(int *)0x8C287C50;
    if (t34 == 1) {
        return nlCloseEvent2(a4);
    }
    return t34;
}

int FUN_8c0d5844(void)
{
    register int t0;
    register int t1;

    charaTexFreeAll();
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((((t0 * 0x38) + 0x8C343264) + 0x30))) != -1) {
            uniformTexRestore(t0);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    selPortReset();
    entryInit();
    entryClearJoined();
    selGridClear();
    if ((*(int *)0x8C20D15C) == 0) {
        nlObjPutFreeTextureOnce(0xCB4D5A0);
        sprSet115Free();
        endingTexFree();
        stageFreeAll();
        stageTexSetGarbagedAll();
        sndPack4Free(0x0);
        motFileRequest(0x1);
        motFileRequest(0x2);
        motFileRequest(0x3);
        motFileRequest(0x4);
        motFileRequest(0x9);
        motFileLoadBegin();
        *(unsigned int *)0x8C407FD0 = 0x0;
    }
    t0 = motFileLoadStep();
    if (t0 == -1) {
        t1 = sndPack4Free(0x1);
        if (t1 == 99) {
            *(unsigned int *)0x8C295DDC = ((*(int *)0x8C295DDC) & 0xFFFFFFDF);
            FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
            *(unsigned int *)0x8C20D14C = 0x4;
            *(unsigned int *)0x8C20D150 = 0x0;
            *(unsigned int *)0x8C421F64 = 0x0;
            strmVoiceQueueReset();
            *(unsigned int *)0x8C20D15C = 0x0;
            *(unsigned int *)0x8C407FD0 = 0x0;
            return strmScoreReset();
        }
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        return t1;
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return t0;
}

int FUN_8c0bdcc4(void)
{
    register int t0;

    nlInitEvent();
    charaTexFreeAll();
    emotKeysDefault();
    *(unsigned int *)0x8C35D974 = 0x1;
    *(unsigned int *)0x8C35D978 = 0x0;
    muneSlotReset(0x0, 0x1);
    dbgMenuInit();
    camInit();
    lightSet(0x8500, 0x9200, 0x64, 0x45);
    FUN_8c0eaf00(0xFF4444AA, 0xFF444444, 0xFF444444);
    fileLoadStart(0x8CA80000, 0x8C1232C0, 0x0);
    for (;;) {
        t0 = fileLoadPoll();
        if (t0 == 1) {
            break;
        }
        nlWaitVSync();
    }
    sprMatchLoad();
    playerInit(0x8C287D84, 0x0);
    *(unsigned int *)0x8C2889DC = 0x0;
    *(unsigned int *)0x8C287DBC = (*(int *)((((*(int *)0x8C35D974) << 2) + 0x8C1230C8)));
    motionSet(0x8C287D84, 0x21FA8, 0x1, 0x5270C, ((*(int *)((((*(int *)0x8C35D974) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873D8)), 1.0f);
    *(Stk3 *)(0x8C28886C) = vecMake(0.0f, 0.0f, 0.0f);
    *(float *)0x8C288A14 = 0.0f;
    *(float *)0x8C28889C = 0.0f;
    lightOverrideAmbient(0x0, 0x64);
    uniformLoadBegin();
    for (;;) {
        t0 = uniformLoadStep();
        if (t0 != 0) {
            break;
        }
        nlWaitVSync();
    }
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return t0;
}

int FUN_8c082974(int a4)
{
    int stk[10];
    register int t26;
    register int t43;
    register int t34;
    register int t37;
    register int t35;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0x8C10DAA4); }
    t26 = 0x8C287B3C;
    if (((*(int *)0x8C287B3C) & 0x200000) == 0) {
        *(float *)(((int)stk + 4)) = (((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x2C)))) / (*(float *)((a4 + 0x78))));
        *(float *)(((int)stk + 8)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x30)))) / (*(float *)((a4 + 0x78))));
        *(float *)(((int)stk + 12)) = (((*(float *)((a4 + 0x28))) - (*(float *)((a4 + 0x34)))) / (*(float *)((a4 + 0x78))));
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateV((((int)stk + 4) + 0xC), ((int)stk + 4));
        nlGetMatrix((a4 + 0x38));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))));
        nlMultiMatrix((a4 + 0x38));
        nlScale(0.400000006f, (*(float *)((a4 + 0x78))), 0.400000006f);
        nlObjPutTrnsl(0xC5B0380, (((float)(*(int *)((a4 + 0x80))) * 0.234375f) / 3.0f));
        t26 = (nlPopMatrix(0x1));
    }
    t43 = t26;
    if ((*(int *)0x8C287C60) == 0) {
        t34 = *(int *)((a4 + 0x80));
        *(unsigned int *)((a4 + 0x80)) = (t34 - 1);
        t37 = 0x80;
        if (t34 == 0) {
            t35 = nlCloseEvent(a4);
            *(unsigned int *)0x8C181600 = ((*(int *)0x8C181600) - 1);
            t37 = t35;
        }
        t43 = t37;
    }
    return t43;
}

float FUN_8c0479d4(int a4, float f4, float f5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB00));
        u2 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
        u3 = (u1 * u2);
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        u2 = u0;
        if (u1 > 37.0349998f) {
            u2 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 37.0349998f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u2;
        *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
        u0 = 118.849998f;
    }
    return u0;
}

int FUN_8c08969c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
    if (t0 == 0) {
        fogSetPreset(0x8C301E60, 0x0);
    } else {
        t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
        if ((*(int *)0x8C182514) != t0) {
            t1 = 0x0;
            t2 = ((((t0 << 8) << 1) + 0x8C18179C) + 0x1FC);
            for (;;) {
                t0 = (0x8C301C44 + t1);
                t1 = (t1 + 0x4);
                *(float *)((t0 + 0x0)) = (*(float *)((t2 + 0x0)));
                t2 = (t2 - 4);
                if ((unsigned int)t1 >= (unsigned int)0x200) {
                    break;
                }
            }
            nlFogTableSet(0x8C301C44);
        }
        t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
        if ((*(float *)0x8C182518) != (float)t0) {
            t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
            fogSetDensity(0x8C301C34, (float)t0);
        }
        t0 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2));
        t1 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1));
        t2 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
        fogSetColor(0x8C301C34, t2, t1, t0);
        fogApply(0x8C301C34);
    }
    *(unsigned int *)0x8C182514 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4));
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
    *(float *)0x8C182518 = (float)t0;
    return t0;
}

int FUN_8c0cb7ee(Stk3 s, float f4)
{
    int stk[34];
    register int t0;
    register int t1;
    register float u19;
    register float u20;
    register int t23;
    register float u2;

    stk[23] = s.w[0];
    stk[24] = s.w[1];
    stk[25] = s.w[2];
    t0 = 0x1;
    t1 = 0x0;
    for (;;) {
        if (t1 != 0) {
            if (t1 != 1) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x8)) = *(struct mv3 *)((((int)stk + 32) + 0x3C)); }
                u2 = (*(float *)(((((int)stk + 32) + 0x8) + 0x4)));
                u2 = (u2 + f4);
                *(float *)(((((int)stk + 32) + 0x8) + 0x4)) = u2;
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x8)) = *(struct mv3 *)((((int)stk + 32) + 0x3C)); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 32) + 0x3C)); }
        *(int *)((int)stk + 4) = (0xC + ((int)stk + 8));
        *(int *)((int)stk + 4) = (0xC + ((int)stk + 8));
        camWorldToView(*(Stk4 *)(((int)stk + 4)));
        camProject((((int)stk + 20) + 0x10), (((int)stk + 20) + 0xC));
        u2 = (*(float *)(((int)stk + 32)));
        if (0.0f > u2) {
            u2 = (-u2);
        }
        t1 = (t1 + 0x1);
        if (!(u2 > 240.0f)) {
            t0 = 0x0;
        }
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    u19 = *(float *)(((int)stk + 36));
    u20 = u19;
    if (0.0f > u19) {
        u20 = (-u19);
    }
    t23 = 0x0;
    if (!(u20 > (*(float *)0x8C0CBA58)) && (t0 != 1)) {
        t23 = 0x1;
    }
    return t23;
}

int FUN_8c08a4b0(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[28];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    stk[19] = a8;
    v0_2 = a4;
    v0_0 = a7;
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    v0_0 = ((((int)stk + 16) + 0x3C));
    v0_1 = ((((int)stk + 16) + 0xC));
    v0_2 = ((v0_2 + 0x18));
    v0_3 = (0x0);
    R9 = (0x1);
    w0_0 = (10.0f);
    L_8C08A4DA:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= 0)) goto L_8C08A4E2;
    v0_2 = ((v0_2 + 0x50));
    L_8C08A4E2:;
    if (((int)(*(int *)((v0_2 + 0x0))) <= 0)) goto L_8C08A580;
    v0_4 = ((*(int *)((v0_2 + 0x0))) & 8) == 0;
    v0_2 = ((v0_2 + 0x4));
    if (v0_4) goto L_8C08A4F4;
    v0_4 = (0x3);
    L_8C08A4F6:;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_2 + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    v0_2 = ((v0_2 + 0x4));
    L_8C08A578:;
    if (!(((int)(*(int *)(((int)stk + 20))) < (int)(*(int *)(((int)stk + 24)))))) goto L_8C08A580;
    v0_5 = (v0_3);
    if (((int)v0_4 <= 0)) goto L_8C08A572;
    goto L_8C08A522;
    L_8C08A580:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_8C08A4DA;
    v0_0 = (0x0);
    L_8C08A588:;
    return v0_0;
    L_8C08A522:;
    if ((((*(int *)((v0_2 + 0x0))) & R9) == 0)) goto L_8C08A56A;
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_2 + 0x0))) + (*(float *)((v0_0 + 0x0))));
    *(float *)((v0_1 + 0x4)) = ((*(float *)(((v0_2 + 0x4) + 0x0))) + (*(float *)((v0_0 + 0x4))));
    *(float *)((v0_1 + 0x8)) = ((*(float *)((((v0_2 + 0x4) + 0x4) + 0x0))) + (*(float *)((v0_0 + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    v0_6 = screenSphereVisible(*(Stk3 *)(((int)stk + 4)), w0_0);
    v0_7 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (v0_7 + v0_6);
    v0_2 = (((((v0_2 + 0x4) + 0x4) + 0x4) + 0xC));
    if (((int)(v0_7 + v0_6) <= 0)) goto L_8C08A566;
    v0_0 = (0x1);
    goto L_8C08A588;
    L_8C08A566:;
    v0_2 = ((v0_2 + 0x14));
    L_8C08A56C:;
    v0_6 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    if (v0_6) goto L_8C08A522;
    L_8C08A572:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    goto L_8C08A578;
    L_8C08A56A:;
    v0_2 = ((v0_2 + 0x8));
    goto L_8C08A56C;
    L_8C08A4F4:;
    v0_4 = (R9);
    goto L_8C08A4F6;
}

int FUN_8c0ddb36(float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)0x8C20D15C) == 0) {
        commonLoadStart(f4);
        FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
        *(unsigned char *)0x8C40C630 = 0x1;
        *(unsigned char *)0x8C40C62F = 0x1;
    }
    t0 = *(int *)0x8C20D15C;
    if (t0 == 0x87) {
        t1 = FUN_8c0eaf00(0x0, 0x0, 0x0);
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x1;
        t2 = t1;
    } else {
        if ((int)t0 < (int)0xF) {
            initSprPut2(0xF, ((float)t0 / 15.0f));
        } else {
            if (1 && ((int)t0 < (int)0x87)) {
                if (t0 == 0x86) {
                    fadeCaptureBegin();
                } else {
                    t0 = 0xF;
                }
                initSprPut2(t0, 1.0f);
                if ((*(int *)0x8C20D15C) == 0x86) {
                    fadeCaptureEnd(0xF);
                }
            } else {
                t0 = 0xF;
            }
            t1 = t0;
        }
        t0 = commonLoadStep(t1);
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t2 = t0;
    }
    return t2;
}

int FUN_8c07f800(int a4, Stk6 s)
{
    int stk[36];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u16;
    register float u17;
    register float u18;
    register float u19;

    stk[22] = s.w[0];
    stk[23] = s.w[1];
    stk[24] = s.w[2];
    stk[25] = s.w[3];
    stk[26] = s.w[4];
    stk[27] = s.w[5];
    u0 = *(float *)0x8C07F950;
    u1 = *(float *)(((((int)stk + 36) + 0x34) + 0x0));
    u2 = *(float *)(((((int)stk + 36) + 0x34) + 0x8));
    *(int *)((int)stk + 32) = (((int)stk + 36) + 0xC);
    *(Stk3 *)((((int)stk + 36) + 0xC)) = vecMake(u1, u0, u2);
    u3 = *(float *)(((((int)stk + 36) + 0x34) + 0x0));
    u4 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x4);
    *(Stk3 *)((((int)stk + 32) + 0x4)) = vecMake(u3, u0, u4);
    nlSingleLine((((int)stk + 28) + 0x14), (((int)stk + 28) + 0x8), a4);
    u6 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u7 = *(float *)(((((int)stk + 36) + 0x34) + 0x8));
    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x14);
    *(Stk3 *)((((int)stk + 28) + 0x14)) = vecMake(u6, u0, u7);
    u8 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u9 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    *(int *)((int)stk + 20) = (((int)stk + 24) + 0xC);
    *(Stk3 *)((((int)stk + 24) + 0xC)) = vecMake(u8, u0, u9);
    nlSingleLine((((int)stk + 20) + 0x1C), (((int)stk + 20) + 0x10), a4);
    u11 = *(float *)(((((int)stk + 36) + 0x34) + 0x0));
    u12 = *(float *)(((((int)stk + 36) + 0x34) + 0x8));
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(Stk3 *)((((int)stk + 20) + 0x1C)) = vecMake(u11, u0, u12);
    u13 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u14 = *(float *)(((((int)stk + 36) + 0x34) + 0x8));
    *(int *)((int)stk + 12) = (((int)stk + 16) + 0x14);
    *(Stk3 *)((((int)stk + 16) + 0x14)) = vecMake(u13, u0, u14);
    nlSingleLine((((int)stk + 12) + 0x24), (((int)stk + 12) + 0x18), a4);
    u16 = *(float *)(((((int)stk + 36) + 0x34) + 0x0));
    u17 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x24);
    *(Stk3 *)((((int)stk + 12) + 0x24)) = vecMake(u16, u0, u17);
    u18 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u19 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x1C);
    *(Stk3 *)((((int)stk + 8) + 0x1C)) = vecMake(u18, u0, u19);
    return (nlSingleLine((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), a4));
}

int FUN_8c0862ba(int a4, float f4, float f5)
{
    int stk[9];
    register int t0;
    register float u4;
    register float u5;
    register int t16;
    register float u18;
    register float u24;
    register int t58;
    register int t59;
    register int t27;

    t0 = *(int *)0x8C287B3C;
    if ((t0 & 1) == 0) {
        u4 = *(float *)0x8C086448;
        if ((int)(*(int *)((a4 + 0x14))) < (int)0x3) {
            u5 = *(float *)0x8C08644C;
            *(float *)((a4 + 0x28)) = ((*(float *)((a4 + 0x28))) + u5);
            *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) + u5);
        }
        if ((int)(*(int *)((a4 + 0x14))) >= (int)0x17) {
            t16 = *(int *)((a4 + 0x40));
            if (t16 != 0) {
                if (t16 != 1) {
                    if (t16 != 2) {
                    } else {
                        u18 = *(float *)((a4 + 0x2C));
                        *(float *)((a4 + 0x2C)) = (u18 + u4);
                        if ((u18 + u4) > 1.0f) {
                            *(float *)((a4 + 0x2C)) = 1.0f;
                        }
                    }
                } else {
                    u24 = *(float *)((a4 + 0x30));
                    *(float *)((a4 + 0x30)) = (u24 + u4);
                    if ((u24 + u4) > 1.0f) {
                        *(float *)((a4 + 0x30)) = 1.0f;
                    }
                    if (((*(int *)((a4 + 0x1C))) == 4) && (t27 = *(int *)((a4 + 0x14)), (int)t27 > (int)0x53)) {
                        *(float *)((a4 + 0x2C)) = 0.0f;
                        *(unsigned int *)((a4 + 0x40)) = 0x2;
                    }
                }
            } else {
                if ((*(int *)((a4 + 0x1C))) != 2) {
                } else {
                    *(unsigned int *)((a4 + 0x40)) = 0x2;
                }
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C10DB10); }
        hudBarDraw(*(Stk3 *)(((int)stk + 16)), (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x2C))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C10DB10); }
        t58 = hudBarDrawAlt(*(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12), (*(float *)((a4 + 0x28))), (*(float *)((a4 + 0x30))));
        t59 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a4 + 0x14)) = (t59 + 0x1);
        if (((t59 + 0x1) - 1) == (*(int *)((a4 + 0x18)))) {
            return nlCloseEvent2(a4);
        }
        return t58;
    }
    return t0;
}

int FUN_8c04afe8(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)((a4 + 0xB00));
    u1 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u1 = u1 + 50.0f * (nlRandom());
    cpuAimPointSet(a5, 0x1, (u1 + -25.0f), (u0 * 59.4249992f));
    u0 = *(float *)((a4 + 0xB00));
    u1 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u1 = u1 + 50.0f * (nlRandom());
    cpuAimPointSet((a5 + 0x1), 0x1, (u1 + -25.0f), (u0 * 71.3100052f));
    u0 = *(float *)((a4 + 0xB00));
    u1 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u1 = u1 + 50.0f * (nlRandom());
    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, (u1 + -25.0f), (u0 * 83.1949997f));
    u0 = *(float *)((a4 + 0xB00));
    u1 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u1 = u1 + 50.0f * (nlRandom());
    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, (u1 + -25.0f), (u0 * 95.0800018f));
    return ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
}

float FUN_8c0e1108(int a4, int a5, Stk3 s)
{
    int stk[41];
    register float u0;
    register float u1;
    register int t2;
    register float u3;
    register int t4;
    register float u6;
    register float u16;
    register int t18;

    stk[30] = s.w[0];
    stk[31] = s.w[1];
    stk[32] = s.w[2];
    u0 = *(float *)0x8C0E1248;
    u1 = *(float *)0x8C0E124C;
    t2 = (int)((int)((signed char)a4 - 65) % (int)0x5);
    u3 = *(float *)0x8C0E1254;
    t4 = (int)((int)((signed char)a4 - 65) / (int)0x5);
    u6 = *(float *)0x8C0E125C;
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x0)));
    *(float *)((((int)stk + 4) + 0x4)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x4)));
    *(float *)((((int)stk + 4) + 0x8)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x8)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x74) + 0x0))) + u1);
    *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x4)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x8)));
    *(float *)(((((int)stk + 4) + 0x38) + 0x0)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x0)));
    *(float *)(((((int)stk + 4) + 0x38) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x74) + 0x4))) + u1);
    *(float *)(((((int)stk + 4) + 0x38) + 0x8)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x8)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x74) + 0x0))) + u1);
    u16 = *(float *)(((((int)stk + 4) + 0x74) + 0x4));
    *(float *)(((((int)stk + 4) + 0x54) + 0x4)) = (u16 + u1);
    *(float *)(((((int)stk + 4) + 0x54) + 0x8)) = (*(float *)(((((int)stk + 4) + 0x74) + 0x8)));
    *(float *)((((int)stk + 4) + 0xC)) = (((float)t2 * u1) / u0);
    *(float *)((((int)stk + 4) + 0x10)) = (1.0f - (((float)t4 * u1) / u0));
    *(float *)(((((int)stk + 4) + 0x1C) + 0xC)) = ((((float)t2 * u1) / u0) + u3);
    *(float *)(((((int)stk + 4) + 0x1C) + 0x10)) = (1.0f - (((float)t4 * u1) / u0));
    *(float *)(((((int)stk + 4) + 0x38) + 0xC)) = (((float)t2 * u1) / u0);
    *(float *)(((((int)stk + 4) + 0x38) + 0x10)) = ((1.0f - (((float)t4 * u1) / u0)) + u6);
    *(float *)(((((int)stk + 4) + 0x54) + 0xC)) = ((((float)t2 * u1) / u0) + u3);
    *(float *)(((((int)stk + 4) + 0x54) + 0x10)) = ((1.0f - (((float)t4 * u1) / u0)) + u6);
    t18 = ((int)stk + 4);
    for (;;) {
        if ((unsigned int)t18 >= (unsigned int)(((int)stk + 4) + 0x70)) {
            break;
        }
        *(unsigned int *)((t18 + 0x14)) = a5;
        *(unsigned int *)((t18 + 0x18)) = 0x0;
        t18 = (t18 + 0x1C);
    }
    return (u16 + u1);
}

int FUN_8c082dca(int a4)
{
    int stk[26];
    register float u18;
    register int t24;
    register int t32;
    register int t25;
    register int t28;
    register int t26;

    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = (-1.0f);
    *(float *)(((int)stk + 80)) = ((-(*(float *)0x8C2879F8)) + (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 84)) = ((-(*(float *)0x8C2879FC)) + (*(float *)((a4 + 0x18))));
    *(float *)(((int)stk + 88)) = ((-(*(float *)0x8C287A00)) + (*(float *)((a4 + 0x1C))));
    FUN_8c0f0860((((int)stk + 4) + 0x4C));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateV((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x4C));
    nlGetMatrix(((int)stk + 4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))));
    nlMultiMatrix(((int)stk + 4));
    u18 = *(float *)((a4 + 0x28));
    nlScale(u18, u18, u18);
    nlObjPut((*(int *)((((*(int *)((a4 + 0x24))) << 2) + 0x8C1816A4))));
    t24 = *(int *)0x8C287C60;
    t32 = (nlPopMatrix(0x1));
    if (t24 == 0) {
        t25 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t25 + 0x1);
        t28 = (t25 + 0x1);
        if (t25 == 9) {
            t26 = nlCloseEvent(a4);
            *(unsigned int *)0x8C18160C = ((*(int *)0x8C18160C) - 1);
            t28 = t26;
        }
        t32 = t28;
    }
    return t32;
}

int FUN_8c03b502(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)0x8C287C60;
    t1 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t1 - (((t0 == 0)) ? 1 : 0));
    if ((int)(t1 - (((t0 == 0)) ? 1 : 0)) < 0) {
        return nlCloseEvent(a4);
    }
    t0 = (int)((int)(*(int *)0x8C20D19C) % (int)0x1E);
    t1 = t0;
    if ((int)t0 <= (int)0x14) {
        u0 = *(float *)0x8C03B694;
        u1 = *(float *)0x8C03B6E4;
        if ((int)(*(int *)((a4 + 0x14))) < (int)0xA) {
            u2 = *(float *)0x8C03B6E8;
            circuitNumDraw((*(int *)((a4 + 0x14))), 0x0, 0x8C159E98, u2, u1, u0);
            t0 = 0x8C10CD5C;
            if ((*(int *)((a4 + 0x14))) == 1) {
                t0 = 0x8C10CCCC;
            }
            sprSheetSet(t0);
            t0 = (sprSheetPut(0x0, u2, u1, u0, 1.0f));
        } else {
            if ((*(int *)((a4 + 0x14))) == 10) {
                sprSheetSet(0x8C10CD90);
                u2 = (*(float *)0x8C03B700);
            } else {
                sprSheetSet(0x8C10CD38);
                u2 = (*(float *)0x8C03B708);
            }
            t0 = (sprSheetPut(0x0, u2, u1, u0, 1.0f));
        }
        t1 = t0;
    }
    return t1;
}

int FUN_8c087ea4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(int *)0x8C301BF0) == 2) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
    }
    t0 = *(int *)((a4 + 0x18));
    u0 = *(float *)0x8C087FD0;
    *(unsigned int *)((a4 + 0x18)) = (t0 - 1);
    if ((int)t0 < 0) {
        *(float *)((a4 + 0x20)) = (nlSin((unsigned short)(*(short *)((a4 + 0x30)))));
        if ((*(int *)0x8C301BF0) == 2) {
            *(unsigned short *)(((0x30 + a4) + 0x0)) = ((*(short *)(((0x30 + a4) + 0x0))) + ((int)((int)0x4000 / (int)(*(int *)((a4 + 0x14))))));
        }
        *(unsigned short *)(((0x30 + a4) + 0x0)) = ((*(short *)(((0x30 + a4) + 0x0))) + ((int)((int)0x4000 / (int)(*(int *)((a4 + 0x14))))));
        if ((int)(unsigned short)(*(short *)((a4 + 0x30))) < (int)0x4000) {
            *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) + u0);
        }
    }
    u1 = *(float *)0x8C087FDC;
    if ((*(float *)((a4 + 0x24))) > u1) {
        *(float *)((a4 + 0x24)) = u1;
    }
    if ((int)(unsigned short)(*(short *)((a4 + 0x30))) > (int)0x4000) {
        *(unsigned short *)((a4 + 0x30)) = 0x4000;
        u1 = *(float *)((a4 + 0x24));
        *(float *)((a4 + 0x24)) = (u1 - u0);
        if (0.0f > (u1 - u0)) {
            *(float *)((a4 + 0x24)) = 0.0f;
        }
    }
    t0 = fadeQuadDraw((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))), (*(int *)((a4 + 0x3C))), (*(float *)((a4 + 0x20))), (*(float *)((a4 + 0x24))));
    t1 = *(int *)((a4 + 0x1C));
    t2 = *(int *)0x8C301BF0;
    *(unsigned int *)((a4 + 0x1C)) = (t1 - t2);
    if ((int)(t1 - t2) <= 0) {
        return nlCloseEvent2(a4);
    }
    return t0;
}

float FUN_8c0d9a44(int a4)
{
    register int t0;
    register float t4;
    register float t5;
    register int t6;
    register int t14;
    register int t16;

    t0 = set_event(0xDC, 0x8C0D997A);
    *(unsigned int *)((t0 + 0xD8)) = 0x6;
    if (a4 != 0) {
        *(unsigned int *)((t0 + 0xD4)) = 0x1;
    }
    t4 = nlRandom();
    t5 = nlRandom();
    t6 = 0x0;
    for (;;) {
        *(float *)((((t0 + 0x14) + t6) + 0x0)) = ((float)(int)(t4 * 640.0f) + (*(float *)(((t6 + 0x8C1D4CE4) + 0x0))));
        *(float *)((((t0 + 0x14) + t6) + 0x4)) = ((float)((int)(t5 * 80.0f) + 0x3C) + (*(float *)(((t6 + 0x8C1D4CE4) + 0x4))));
        *(float *)((((t0 + 0x14) + t6) + 0x8)) = (*(float *)(((t6 + 0x8C1D4CE4) + 0x8)));
        *(unsigned int *)((((t0 + 0x14) + t6) + 0xC)) = (*(int *)(((t6 + 0x8C1D4CE4) + 0xC)));
        *(float *)((((t0 + 0x74) + t6) + 0x0)) = ((float)(int)(t4 * 640.0f) + (*(float *)(((t6 + 0x8C1D4D44) + 0x0))));
        *(float *)((((t0 + 0x74) + t6) + 0x4)) = ((float)((int)(t5 * 80.0f) + 0x3C) + (*(float *)(((t6 + 0x8C1D4D44) + 0x4))));
        *(float *)((((t0 + 0x74) + t6) + 0x8)) = (*(float *)(((t6 + 0x8C1D4D44) + 0x8)));
        t14 = *(int *)(((t6 + 0x8C1D4D44) + 0xC));
        t16 = ((t0 + 0x74) + t6);
        t6 = (t6 + 0x10);
        *(unsigned int *)((t16 + 0xC)) = t14;
        if ((unsigned int)t6 >= (unsigned int)0x60) {
            break;
        }
    }
    return (t5 * 80.0f);
}

int FUN_8c08a656(int a4)
{
    int stk[18];
    register int t1;
    register int t7;
    register int t8;
    register int t11;
    register int t12;
    register int t22;
    register int t23;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register int t33;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t14;
    register int t15;
    register int t38;
    register int t39;
    register int t40;
    register int t35;
    register int t36;
    register int t37;

    t1 = (nlLocate(0x14, 0x5));
    t7 = 0x6;
    t8 = (a4 + 0x18);
    for (;;) {
        if ((int)(*(int *)((t8 + 0x0))) < 0) {
            t3 = 0x8C0EDD30;
            t11 = (*(int *)((t8 + 0x20)));
            *(int *)((int)stk + 16) = t11;
            t12 = t7;
            *(int *)((int)stk + 12) = t12;
            *(int *)((int)stk + 8) = 0x8C10DB98;
            t1 = (nlPrintf(0x8C10DB98, t12, t11));
            t7 = (t7 + 0x14);
            t8 = (t8 + 0x50);
        } else {
            t14 = t2;
            t15 = t3;
        }
        t2 = t14;
        t3 = t15;
        if ((int)(*(int *)((t8 + 0x0))) > 0) {
            t1 = (*(int *)((t8 + 0x0)));
            t8 = (t8 + 0x4);
            if ((t1 & 8) != 0) {
                t4 = 0x3;
            } else {
                t4 = 0x1;
            }
            t22 = *(int *)((t8 + 0x0));
            t8 = (t8 + 0x4);
            t7 = (t7 + 0x2);
            *(unsigned int *)(((int)stk + 24)) = t22;
            t5 = 0x0;
            t23 = t22;
            for (;;) {
                t3 = (*(int *)(((int)stk + 24)));
                if ((int)t5 >= (int)t3) {
                    break;
                }
                t1 = (((t5 == 0)) ? 1 : 0);
                t6 = 0x0;
                *(unsigned int *)(((int)stk + 20)) = t1;
                if ((int)t4 > 0) {
                    for (;;) {
                        t3 = (*(int *)((t8 + 0x0)));
                        if ((t3 & 0x1) != 0) {
                            t2 = (*(int *)(((int)stk + 20)));
                            if ((t2 != 0) && (t6 == 0)) {
                                t8 = (t8 + 0xC);
                                t23 = 0x8C10DBA8;
                                u28 = *(float *)((t8 + 0x0));
                                t8 = (t8 + 0x4);
                                t1 = 0x4;
                                *(float *)(((((int)stk + 20) + 0x8) + 0x0)) = u28;
                                u29 = *(float *)((t8 + 0x0));
                                t8 = (t8 + 0x4);
                                *(float *)(((((int)stk + 20) + 0x8) + t1)) = u29;
                                t1 = 0x8;
                                u30 = *(float *)((t8 + 0x0));
                                t8 = (t8 + 0x4);
                                *(float *)(((((int)stk + 20) + 0x8) + t1)) = u30;
                                t1 = 0x4;
                                *(float *)(((int)stk + 16)) = u30;
                                u31 = *(float *)(((((int)stk + 20) + 0x8) + t1));
                                *(float *)(((int)stk + 12)) = u31;
                                u32 = *(float *)(((((int)stk + 20) + 0x8) + 0x0));
                                *(float *)(((int)stk + 8)) = u32;
                                t33 = t23;
                                *(int *)((int)stk + 4) = t33;
                                t1 = (nlPrintf(t33, u32, u31, u30));
                                t8 = (t8 + 0x8);
                            } else {
                                t8 = (t8 + 0x20);
                                t7 = (t7 + 0x8);
                                t35 = t2;
                                t36 = t3;
                                t37 = t23;
                            }
                            t38 = t35;
                            t39 = t36;
                            t40 = t37;
                        } else {
                            t7 = (t7 + 0x2);
                            t8 = (t8 + 0x8);
                            t38 = t2;
                            t39 = t3;
                            t40 = t23;
                        }
                        t2 = t38;
                        t6 = (t6 + 0x1);
                        t3 = t39;
                        t23 = t40;
                        if ((int)t6 >= (int)t4) {
                            break;
                        }
                    }
                }
                t5 = (t5 + 0x1);
            }
        }
        t2 = (*(int *)((t8 + 0x0)));
        if (t2 == 0) {
            break;
        }
    }
    return t1;
}

void FUN_8c086a34(int a4)
{
    register int t3;
    register int t7;
    register int t5;
    register int t15;
    register int t38;
    register int t39;

    if (((*(int *)0x8C287B3C) & 0x1) == 0) {
        if ((*(int *)0x8C421F60) == 0) {
            t3 = 0x8C287D84;
            for (;;) {
                if ((((*(int *)((t3 + 0xB60))) & 0x40000) != 0) && (t5 = *(int *)((t3 + 0xB68)), t5 == 5)) {
                    *(unsigned int *)((a4 + 0x3C)) = 0x1;
                }
                t7 = t3;
                t3 = (t3 + 0xD78);
                if ((unsigned int)t3 >= (unsigned int)0x8C289874) {
                    break;
                }
            }
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
            }
            if (((*(int *)0x8C301BF0) == 2) && (t15 = *(int *)0x8C287C60, t15 == 0)) {
                *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            }
            if ((*(float *)((a4 + 0x20))) > 1.0f) {
                *(float *)((a4 + 0x20)) = 1.0f;
            }
            hudCallMsgDrawDb00(t3, t7, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
            if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
                *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
            }
            if ((*(int *)0x8C287C60) == 0) {
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            }
            if (((int)(*(int *)((a4 + 0x14))) >= 0) && ((t38 = *(int *)((a4 + 0x3C)), t38 == 0) && (t39 = *(int *)0x8C30196C, t39 == 0))) {
                return;
            }
            nlCloseEvent2(a4);
    return;
        }
        return;
    }
}

float FUN_8c05f714(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        if (((*(int *)0x8C291F78) & 4) != 0) {
            u0 = (*(float *)((a4 + 0xAE8)));
            u1 = (*(float *)((a4 + 0xAF0)));
        } else {
            t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
            u2 = *(float *)((a4 + 0xB00));
            u3 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
            u4 = (u2 * u3);
            u2 = 118.849998f;
            u0 = ((float)t1 * 21.9400005f);
            u1 = (-(u4 * 118.849998f));
        }
        u3 = (-u0);
        if (!(0.0f > u0)) {
            u3 = u0;
        }
        u4 = u0;
        if (u3 > 54.8499985f) {
            u4 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u4;
        *(float *)((a4 + 0xA3C)) = u1;
        u0 = u2;
    }
    return u0;
}

int FUN_8c0173c8(float f4, float f5)
{
    int stk[34];
    register float u6;
    register float u15;

    *(float *)(((int)stk + 36)) = f4;
    nlGetMatrix((((int)stk + 28) + 0xC));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((int)stk + 16));
    *(int *)((int)stk + 12) = (((int)stk + 28) + 0x4C);
    camWorldToView(*(Stk4 *)((int)stk + 12));
    if ((*(float *)(((((int)stk + 28) + 0x4C) + 0x8))) > (-f5)) {
        *(float *)(((((int)stk + 28) + 0x4C) + 0x8)) = (-f5);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
    vecAnglesTo((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x1C), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    u6 = *(float *)(((((int)stk + 28) + 0x4C) + 0x8));
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((int)stk + 32))));
    nlRotateAX((unsigned short)(*(short *)(((int)stk + 28))));
    nlTranslate(0.0f, 0.0f, (-f5));
    nlLoadMatrix33on44(0x8C2879B8);
    nlMultiMatrix((((int)stk + 4) + 0x24));
    u15 = *(float *)(((int)stk + 36));
    nlScale((u15 * ((u6 + f5) / u6)), (u15 * ((u6 + f5) / u6)), (u15 * ((u6 + f5) / u6)));
    nlObjPut(0xC5BDEA8);
    return (nlPopMatrix(0x1));
}

void FUN_8c086486(int a4)
{
    register int t1;
    register int t5;
    register int t3;
    register int t13;
    register int t36;
    register int t37;

    if (((*(int *)0x8C287B3C) & 0x1) == 0) {
        t1 = 0x8C287D84;
        for (;;) {
            if ((((*(int *)((t1 + 0xB60))) & 0x40000) != 0) && (t3 = *(int *)((t1 + 0xB68)), t3 == 5)) {
                *(unsigned int *)((a4 + 0x3C)) = 0x1;
            }
            t5 = t1;
            t1 = (t1 + 0xD78);
            if ((unsigned int)t1 >= (unsigned int)0x8C289874) {
                break;
            }
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        }
        if (((*(int *)0x8C301BF0) == 2) && (t13 = *(int *)0x8C287C60, t13 == 0)) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if ((*(float *)((a4 + 0x20))) > 1.0f) {
            *(float *)((a4 + 0x20)) = 1.0f;
        }
        hudCallMsgDrawDb50(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
        if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
            *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if (((int)(*(int *)((a4 + 0x14))) >= 0) && ((t36 = *(int *)((a4 + 0x3C)), t36 == 0) && (t37 = *(int *)0x8C30196C, t37 == 0))) {
            return;
        }
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c08660c(int a4)
{
    register int t1;
    register int t5;
    register int t3;
    register int t13;
    register int t36;
    register int t37;

    if (((*(int *)0x8C287B3C) & 0x1) == 0) {
        t1 = 0x8C287D84;
        for (;;) {
            if ((((*(int *)((t1 + 0xB60))) & 0x40000) != 0) && (t3 = *(int *)((t1 + 0xB68)), t3 == 5)) {
                *(unsigned int *)((a4 + 0x3C)) = 0x1;
            }
            t5 = t1;
            t1 = (t1 + 0xD78);
            if ((unsigned int)t1 >= (unsigned int)0x8C289874) {
                break;
            }
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        }
        if (((*(int *)0x8C301BF0) == 2) && (t13 = *(int *)0x8C287C60, t13 == 0)) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if ((*(float *)((a4 + 0x20))) > 1.0f) {
            *(float *)((a4 + 0x20)) = 1.0f;
        }
        hudCallMsgDrawD9c0(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
        if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
            *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if (((int)(*(int *)((a4 + 0x14))) >= 0) && ((t36 = *(int *)((a4 + 0x3C)), t36 == 0) && (t37 = *(int *)0x8C30196C, t37 == 0))) {
            return;
        }
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c086754(int a4)
{
    register int t3;
    register int t7;
    register int t5;
    register int t15;
    register int t38;

    if (((*(int *)0x8C287B3C) & 0x1) == 0) {
        if ((*(int *)0x8C421F60) == 0) {
            t3 = 0x8C287D84;
            for (;;) {
                if ((((*(int *)((t3 + 0xB60))) & 0x40000) != 0) && (t5 = *(int *)((t3 + 0xB68)), t5 == 5)) {
                    *(unsigned int *)((a4 + 0x3C)) = 0x1;
                }
                t7 = t3;
                t3 = (t3 + 0xD78);
                if ((unsigned int)t3 >= (unsigned int)0x8C289874) {
                    break;
                }
            }
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
            }
            if (((*(int *)0x8C301BF0) == 2) && (t15 = *(int *)0x8C287C60, t15 == 0)) {
                *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            }
            if ((*(float *)((a4 + 0x20))) > 1.0f) {
                *(float *)((a4 + 0x20)) = 1.0f;
            }
            hudCallMsgDrawD970(t3, t7, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
            if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
                *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
            }
            if ((*(int *)0x8C287C60) == 0) {
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            }
            if (((int)(*(int *)((a4 + 0x14))) >= 0) && (t38 = *(int *)((a4 + 0x3C)), t38 == 0)) {
                return;
            }
            nlCloseEvent2(a4);
    return;
        }
        return;
    }
}

float FUN_8c047bbc(int a4, float f4, float f5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
        u1 = *(float *)((a4 + 0xB00));
        u2 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
        u3 = (u1 * u2);
        u1 = (-(u0 * 0.699999988f));
        if (!(0.0f > (u0 * 0.699999988f))) {
            u1 = (u0 * 0.699999988f);
        }
        u2 = (u0 * 0.699999988f);
        if (u1 > 32.920002f) {
            u2 = ((float)(((u0 * 0.699999988f) > 0.0f) - (0.0f > (u0 * 0.699999988f))) * 32.920002f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u2;
        *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
        u0 = 118.849998f;
    }
    return u0;
}

float FUN_8c047cbc(int a4, float f4, float f5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
        u1 = *(float *)((a4 + 0xB00));
        u2 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.0500000007f)) + 1.0f);
        u3 = (u1 * u2);
        u1 = (-(u0 * 0.400000006f));
        if (!(0.0f > (u0 * 0.400000006f))) {
            u1 = (u0 * 0.400000006f);
        }
        u2 = (u0 * 0.400000006f);
        if (u1 > 32.920002f) {
            u2 = ((float)(((u0 * 0.400000006f) > 0.0f) - (0.0f > (u0 * 0.400000006f))) * 32.920002f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u2;
        *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
        u0 = 118.849998f;
    }
    return u0;
}

int FUN_8c05f648(int a4, int a5, int a6, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = 0xA24;
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        u0 = *(float *)((a4 + 0xAE8));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (54.8499985f > u1) {
            u0 = (*(float *)((a4 + 0xAE8)));
        } else {
            u1 = *(float *)((a4 + 0xAE8));
            u0 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 49.3649979f);
        }
        u1 = *(float *)((a4 + 0xAF0));
        u2 = (-u0);
        if (!(0.0f > u0)) {
            u2 = u0;
        }
        u3 = u0;
        if (u2 > 54.8499985f) {
            u3 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u3;
        *(float *)((a4 + 0xA3C)) = u1;
        t1 = 0xA3C;
    }
    return t1;
}

int FUN_8c08a2d4(Stk3 s, float f4)
{
    int stk[24];
    register int t40;
    register int t3;
    register float u4;
    register float u5;
    register float u6;
    register int t31;
    register float u10;
    register float u11;
    register int t22;
    register int t14;
    register float u15;
    register float u16;
    register float u17;
    register int t20;

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    worldToScreen(*(Stk4 *)(((int)stk + 4)));
    t40 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)(((int)stk + 8)));
        t3 = *(int *)(((int)stk + 20));
        u4 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u5 = *(float *)0x8C302070;
        u6 = (-u4);
        if (!(0.0f > u4)) {
            u6 = u4;
        }
        t31 = 0x0;
        if ((float)t3 > ((-((u5 * f4) / u6)) + (*(float *)0x8C08A508))) {
            u10 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u11 = (-u10);
            if (!(0.0f > u10)) {
                u11 = u10;
            }
            t22 = 0x0;
            if ((((u5 * f4) / u11) + 0.0f) > (float)t3) {
                t14 = abs((*(int *)(((int)stk + 24))));
                u15 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
                u16 = *(float *)0x8C302070;
                u17 = (-u15);
                if (!(0.0f > u15)) {
                    u17 = u15;
                }
                t20 = 0x0;
                if ((((u16 * f4) / u17) + (*(float *)0x8C08A510)) > (float)t14) {
                    t20 = 0x1;
                }
                t22 = t20;
            }
            t31 = t22;
        }
        t40 = t31;
    }
    return t40;
}

int FUN_8c08a3a0(Stk3 s, float f4)
{
    int stk[24];
    register int t40;
    register int t3;
    register float u4;
    register float u5;
    register float u6;
    register int t31;
    register float u10;
    register float u11;
    register int t22;
    register int t14;
    register float u15;
    register float u16;
    register float u17;
    register int t20;

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    worldToScreen(*(Stk4 *)(((int)stk + 4)));
    t40 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)(((int)stk + 8)));
        t3 = *(int *)(((int)stk + 20));
        u4 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u5 = *(float *)0x8C302070;
        u6 = (-u4);
        if (!(0.0f > u4)) {
            u6 = u4;
        }
        t31 = 0x0;
        if ((((u5 * f4) / u6) + (*(float *)0x8C08A514)) > (float)t3) {
            u10 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u11 = (-u10);
            if (!(0.0f > u10)) {
                u11 = u10;
            }
            t22 = 0x0;
            if ((float)t3 > ((-((u5 * f4) / u11)) + 0.0f)) {
                t14 = abs((*(int *)(((int)stk + 24))));
                u15 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
                u16 = *(float *)0x8C302070;
                u17 = (-u15);
                if (!(0.0f > u15)) {
                    u17 = u15;
                }
                t20 = 0x0;
                if ((((u16 * f4) / u17) + (*(float *)0x8C08A510)) > (float)t14) {
                    t20 = 0x1;
                }
                t22 = t20;
            }
            t31 = t22;
        }
        t40 = t31;
    }
    return t40;
}
