/* Straight-line functions with calls and guards (batch gen_yl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetTarget(void);
int camSetupView(void);
int circuitNumDraw(int, int, int, float, float, float);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddAngles(int, int, float, float);
extern int cpuDblAimAddCross();
int cpuDblAimAddLv13(int, int);
int cpuDblAimAddLv16(int, int);
int cpuDblAimAddRange(int, int, float, float);
int cpuDblAimAddShort(int, int);
float cpuDistXZ(int, int);
float cpuOppLineX(int);
int dbgMenuGetValue(int, int);
int dbgMenuSetItem(int, int, int, int, int, int, int);
int dbgMenuSetTitle(int, int, int);
int dbgMenuSetValue(int, int, int);
int eepromGetBoard(void);
int eepromGetDeuce(void);
int eepromGetDiff(void);
int eepromGetMatch(void);
int eepromGetSnap(void);
int eepromGetVsDeuce(void);
int eepromGetVsMatch(void);
int eepromVmuSave0(void);
int emotFaceMorph(int, int);
int emotFaceReset(int);
int fadeQuadDrawB(int, int, int, float);
int hudCallMsgDrawD8d0(int, int, int, int, float, float);
int hudCallMsgDrawDa10(int, int, int, int, float, float);
int hudCallMsgDrawDa60(int, int, int, int, float, float);
int hudCallMsgDrawDab0(int, int, int, int, float, float);
int hudCallWordsDraw(int, int, float);
int hudCallWordsDrawB(int, int, int, float);
int hudFadeOutStart(int, int, int, int, int);
int hudFontNumPut(int, Stk3, float);
int lightExec(void);
int lightSet(int, int, int, int);
int lightUpdate(int);
int matchSceneExec(void);
int nlCloseEvent(int);
int nlCloseEvent2(int);
int nlDispStrip(int, int);
int nlDispStripTrnsl(int, int);
int nlExecuteEvent(void);
int nlLineSetDiv(float);
int nlLocate(int, int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
float nlRandom(void);
int nlRenderTextureBegin(int, int, int, int, int, int, int, int, int);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
float nlSin(int);
int nlTranslate(float, float, float);
int nlsndDriverMidiReqNum(void);
int nlsndDriverSeqStatus(void);
int nlsndDriverStatus(void);
int nlsndRemainMem(void);
int nlsndSystemControl(int, int, int);
int nlsndVersion(void);
int primRectDirX(int, int, int, int, Stk3, Stk1);
int primRectDirY(int, int, int, int, Stk3, Stk1);
int primVertexSet(int, int, int, int, int);
int screenFramePut(int, int, float);
int screenPlanePut(void);
int set_event(int, int);
int sprPutAt(int, int, int, int, int, int, int);
extern int sprPutAtAlpha();
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int standBgDraw(void);
extern int thunk_FUN_8c0f41f0();
Stk3 vecMake(float, float, float);
void FUN_8c086b90(int a4);
void FUN_8c086d14(int a4);
void FUN_8c087124(int a4);
int FUN_8c0df974(int a4);
int FUN_8c0731a0(int a4, int a5, float f4, float f5);
int FUN_8c0d997a(int a4);
int FUN_8c03ba72(int a4);
void FUN_8c086e68(int a4);
int FUN_8c08dde8(void);
float FUN_8c047ac8(int a4, float f4, float f5);
float FUN_8c05db9c(int a4, float f4, float f5);
int FUN_8c07ade6(int a4, int a5);
int FUN_8c041cac(int a4);
int FUN_8c04f918(int a4, int a5);
int FUN_8c082bc0(int a4);
int FUN_8c03b892(int a4);
float FUN_8c08a978(int a4, int a5, int a6, int a7, float f4);
int FUN_8c0901c4(int a4, Stk3 s, float f4);
int FUN_8c0d271e(void);
int FUN_8c09acf8(Stk3 s, float f4);
void FUN_8c0bbfb2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
void FUN_8c0bc06a(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int FUN_8c0d96f6(int a4);
int FUN_8c09c6f6(int a4, Stk3 s);
int FUN_8c09e5b8(void);
int FUN_8c0bbf00(int a4, Stk12 s);
int FUN_8c083654(int a4, int a5, int a6, int a7);
int FUN_8c081df8(int a4, int a5);
int FUN_8c087d94(int a4);
int FUN_8c0da350(int a4);
int FUN_8c084fcc(int a4);
int FUN_8c03b430(int a4);
int FUN_8c078ba0(int a4, int a5);
int FUN_8c08978c(int a4);
int FUN_8c041d6a(int a4);
void FUN_8c0855c6(int a4);
int FUN_8c0dfab0(int a4);
int FUN_8c0890dc(int a4);
void FUN_8c08b15a(int a4);
int FUN_8c08b0c2(int a4, int a5, float f4, float f5);
int FUN_8c0891ec(int a4);

void FUN_8c086b90(int a4)
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
        hudCallMsgDrawDab0(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
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

void FUN_8c086d14(int a4)
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
        hudCallMsgDrawDa10(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
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

void FUN_8c087124(int a4)
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
        hudCallMsgDrawD8d0(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
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

int FUN_8c0df974(int a4)
{
    register int t0;

    *(unsigned int *)(((set_event(0x18, 0x8C0DFAB0)) + 0x14)) = a4;
    dbgMenuSetTitle(a4, 0x8C126B48, 0x7);
    t0 = eepromGetDiff();
    dbgMenuSetItem(a4, 0x0, 0x8C126B50, (unsigned char)t0, 0x0, 0x5, 0x1);
    t0 = eepromGetMatch();
    dbgMenuSetItem(a4, 0x1, 0x8C126B58, (unsigned char)t0, 0x1, 0x5, 0x1);
    t0 = eepromGetVsMatch();
    dbgMenuSetItem(a4, 0x2, 0x8C126B60, (unsigned char)t0, 0x1, 0x5, 0x1);
    t0 = eepromGetDeuce();
    dbgMenuSetItem(a4, 0x3, 0x8C126B68, (unsigned char)t0, 0x0, 0x1, 0x1);
    t0 = eepromGetVsDeuce();
    dbgMenuSetItem(a4, 0x4, 0x8C126B60, (unsigned char)t0, 0x0, 0x1, 0x1);
    t0 = eepromGetSnap();
    dbgMenuSetItem(a4, 0x5, 0x8C126B70, (unsigned char)t0, 0x0, 0x1, 0x1);
    t0 = eepromGetBoard();
    dbgMenuSetItem(a4, 0x6, 0x8C126B78, (unsigned char)t0, 0x0, 0x1, 0x1);
    return (dbgMenuSetItem(a4, 0x7, 0x8C126B80, 0x0, 0x0, 0x1, 0x0));
}

int FUN_8c0731a0(int a4, int a5, float f4, float f5)
{
    int stk[6];

    register int R3;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_3 = a4;
    v0_2 = a5;
    w0_0 = f4;
    w0_1 = f5;
    v0_0 = *(int *)((v0_3 + 0xB5C));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
    v0_0 = (((((v0_0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84));
    v0_1 = (v0_3);
    v0_2 = (v0_2);
    v0_3 = (0x8C291F24);
    if ((((*(int *)0x8C291F78) & 4) == 0)) goto L_8C0731E6;
    v0_3 = ((cpuDblAimAddShort(v0_1, v0_2)));
    L_8C073208:;
    v0_2 = ((v0_2 + v0_3));
    L_8C07324E:;
    if ((v0_2 != 0)) goto L_8C07325C;
    v0_2 = ((v0_2 + (cpuDblAimAddLv13(v0_1, v0_2))));
    L_8C07325C:;
    return v0_2;
    L_8C0731E6:;
    if ((((*(int *)((v0_1 + 0xB60))) & 4) == 0)) goto L_8C07320C;
    v0_3 = !(10.0f > (cpuDistXZ((0xAE8 + v0_1), (0xBA8 + v0_1))));
    if (v0_3) goto L_8C07320C;
    v0_3 = ((cpuDblAimAddRange(v0_1, v0_2, w0_0, w0_1)));
    goto L_8C073208;
    L_8C07320C:;
    v0_3 = ((int (*)(int, int, int, int, float, float))(cpuDblAimAddCross))(v0_1, v0_2, R6, R7, w0_0, w0_1);
    v0_4 = (v0_2 + v0_3) != 0;
    v0_2 = ((v0_2 + v0_3));
    if (v0_4) goto L_8C07325C;
    w0_2 = *(float *)(((*(int *)(((int)stk + 4))) + 0xAF0));
    v0_3 = (0xAF0);
    w0_0 = (w0_2);
    w0_1 = (35.6550026f);
    if ((0.0f > w0_2)) goto L_8C07322C;
    w0_2 = (w0_0);
    L_8C073230:;
    if ((w0_1 > w0_2)) goto L_8C073246;
    w0_3 = *(float *)((v0_0 + v0_3));
    w0_2 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C073240;
    w0_2 = ((*(float *)((v0_0 + v0_3))));
    L_8C073242:;
    if ((!(w0_1 > w0_2))) goto L_8C07324E;
    L_8C073246:;
    v0_2 = ((v0_2 + (cpuDblAimAddAngles(v0_1, v0_2, w0_0, w0_1))));
    goto L_8C07324E;
    L_8C073240:;
    w0_2 = ((-w0_2));
    goto L_8C073242;
    L_8C07322C:;
    w0_2 = ((-w0_0));
    goto L_8C073230;
}

int FUN_8c0d997a(int a4)
{
    register float u7;
    register int t5;
    register int t11;

    if ((int)(*(int *)((a4 + 0xD8))) > (int)0x3) {
        t5 = ((-(*(int *)((a4 + 0xD8)))) + 0x6);
    } else {
        t5 = (*(int *)((a4 + 0xD8)));
    }
    u7 = *(float *)0x8C0D9B24;
    *(unsigned int *)((a4 + 0x50)) = ((((unsigned char)(int)(((float)t5 / 3.0f) * u7) << 16) << 8) | 0xFFFFFF);
    *(unsigned int *)((a4 + 0xA0)) = ((((unsigned char)(int)(((float)t5 / 3.0f) * u7) << 16) << 8) | 0xFFFFFF);
    nlDispStripTrnsl(0x6, (a4 + 0x14));
    nlDispStripTrnsl(0x6, (a4 + 0x74));
    if (((int)(*(int *)((a4 + 0xD8))) > 0) && (t11 = *(int *)0x8C407FCC, t11 != 1)) {
        *(unsigned int *)((a4 + 0xD8)) = ((*(int *)((a4 + 0xD8))) - 1);
        return 0xD8;
    }
    return nlCloseEvent(a4);
}

int FUN_8c03ba72(int a4)
{
    register int t18;
    register int t20;
    register int t21;
    register float u26;
    register float u44;
    register float u45;
    register float u34;
    register float u35;

    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) - 1);
    }
    if ((int)(*(int *)((a4 + 0x20))) < 0) {
        *(unsigned int *)0x8C2FBFD8 = 0x0;
        return nlCloseEvent(a4);
    }
    if ((int)(*(int *)((a4 + 0x20))) > (int)0x41) {
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 1.0f);
        }
        u44 = 0.0f;
        u45 = 1.0f;
    } else {
        t18 = *(int *)((a4 + 0x20));
        if ((int)t18 > (int)0x37) {
            t20 = *(int *)0x8C20D19C;
            t21 = ((~(((~t20) + 0x1) & 0x1)) + 0x1);
            if ((int)t20 >= 0) {
                t21 = (t20 & 0x1);
            }
            u34 = ((float)(((t21 << 1) - 1) * (*(int *)((a4 + 0x20)))) / (*(float *)0x8C03BBEC));
            u35 = 1.0f;
        } else {
            u26 = *(float *)0x8C03BBF0;
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) - 1.0f);
            }
            u34 = 0.0f;
            u35 = ((float)t18 / u26);
        }
        u44 = u34;
        u45 = u35;
    }
    sprSheetSet(0x8C10D1C4);
    return sprSheetPut(0xD, ((*(float *)((a4 + 0x14))) + u44), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))), u45);
}

void FUN_8c086e68(int a4)
{
    register int t1;
    register int t5;
    register int t3;
    register int t13;
    register int t36;

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
        hudCallMsgDrawDa60(t1, t5, 0x1, 0xD78, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
        if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
            *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if (((int)(*(int *)((a4 + 0x14))) >= 0) && (t36 = *(int *)0x8C30196C, t36 == 0)) {
            return;
        }
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c08dde8(void)
{
    int stk[9];
    register float u4;
    register int t17;

    *(float *)0x8C287A04 = (*(float *)0x8C08DF08);
    lightSet(0xCF00, 0x9800, 0x64, 0x82);
    lightExec();
    lightUpdate(0x0);
    u4 = *(float *)0x8C08DF28;
    *(float *)0x8C287C3C = u4;
    nlRenderTextureBegin(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (*(float *)0x8C08DF30));
    camSetTarget();
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C32DDA4), ((*(float *)0x8C32DDA8) + (-1.0f)), (*(float *)0x8C32DDAC));
    camSetEye();
    camMoveBegin(1.0f, 1.0f);
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
    nlExecuteEvent();
    matchSceneExec();
    if ((1.0f > u4) && (t17 = *(int *)0x8C1826F4, t17 != 0)) {
        screenFramePut(0x0, 0x0, u4);
    }
    if ((*(int *)0x8C1826F4) == 0) {
        *(unsigned int *)0x8C1826F4 = 0x1;
    }
    nlRenderTextureEnd(0x8C1826F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16));
    return screenPlanePut();
}

float FUN_8c047ac8(int a4, float f4, float f5)
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
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        u2 = u0;
        if (u1 > 32.920002f) {
            u2 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 32.920002f);
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

float FUN_8c05db9c(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xA24))) != 0) && (u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u0 > 0.0f))) {
        u0 = *(float *)((a4 + 0xB00));
        t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        u1 = *(float *)0x8C291F7C;
        u2 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
        u3 = (u0 * u2);
        t2 = (u1 > 0.0f) - (0.0f > u1);
        u0 = (-u1);
        if (!(0.0f > u1)) {
            u0 = u1;
        }
        u1 = ((float)t2 * u0);
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        u0 = (u1 * 0.400000006f);
        u0 = u0 + 21.9400005f * (float)t1;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u0;
        *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
        u0 = 21.9400005f;
    }
    return u0;
}

int FUN_8c07ade6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = a5;
    if ((int)a5 < (int)0x5A) {
        t1 = a5;
        for (;;) {
            u0 = (-1.0f);
            u0 = u0 + (1.0f + 1.0f) * (nlRandom());
            u1 = (*(float *)((a4 + 0xB9C)));
            u1 = u1 + 30.0f * u0;
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            u2 = u1;
            if (u0 > 41.1499977f) {
                u2 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 41.1499977f);
            }
            t2 = t1;
            t1 = (t1 + 0x1);
            cpuAimPointSet(t2, 0x1, u2, (-(*(float *)((a4 + 0xAF0)))));
            if ((int)t1 >= (int)0x5A) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_8c041cac(int a4)
{
    *(unsigned int *)(((set_event(0x18, 0x8C041D6A)) + 0x14)) = a4;
    *(unsigned int *)0x8C2FCC68 = 0x1;
    dbgMenuSetTitle(a4, 0x8C10D4AC, 0x7);
    dbgMenuSetItem(a4, 0x0, 0x8C10D4B0, (*(int *)0x8C2FCC1C), 0x0, 0x14, 0x1);
    dbgMenuSetItem(a4, 0x1, 0x8C10D4B8, (*(int *)0x8C287AE0), 0x0, 0x2, 0x1);
    dbgMenuSetItem(a4, 0x2, 0x8C10D4C0, (*(int *)0x8C287AE4), 0x0, 0x2, 0x1);
    dbgMenuSetItem(a4, 0x3, 0x8C10D4C8, (*(int *)0x8C287AE8), 0x0, 0x2, 0x1);
    dbgMenuSetItem(a4, 0x4, 0x8C10D4D0, (*(int *)0x8C287AEC), 0x0, 0x2, 0x1);
    dbgMenuSetItem(a4, 0x5, 0x8C10D4D8, (*(int *)0x8C159EE8), 0x0, 0x1, 0x1);
    return (dbgMenuSetItem(a4, 0x6, 0x8C10D4E0, (*(int *)0x8C2FCC68), 0x0, 0x1, 0x1));
}

int FUN_8c04f918(int a4, int a5)
{
    int stk[12];
    register float u0;
    register float u1;
    register float u4;
    register float u7;
    register int t21;
    register int t12;
    register float u15;
    register int t17;
    register float u18;

    u0 = *(float *)0x8C04FA4C;
    u1 = *(float *)0x8C04FA50;
    cpuAimPointSet(a5, 0x1, u1, ((*(float *)((a4 + 0xB00))) * u0));
    u4 = *(float *)0x8C04FA58;
    cpuAimPointSet((a5 + 0x1), 0x1, u4, ((*(float *)((a4 + 0xB00))) * u0));
    u7 = *(float *)0x8C04FA5C;
    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, u1, ((*(float *)((a4 + 0xB00))) * u7));
    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, u4, ((*(float *)((a4 + 0xB00))) * u7));
    t21 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
    if ((int)((((a5 + 0x1) + 0x1) + 0x1) + 0x1) < (int)0x5A) {
        t12 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
        for (;;) {
            u15 = ((*(float *)((a4 + 0xB00))) * (nlRandom()));
            *(float *)(((int)stk + 4)) = (u15 * u0);
            t17 = t12;
            t12 = (t12 + 0x1);
            u18 = (-1.0f);
            u18 = u18 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t17, 0x1, (u18 * u1), (u15 * u0));
            if ((int)t12 >= (int)0x5A) {
                break;
            }
        }
        t21 = t12;
    }
    return t21;
}

int FUN_8c082bc0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    nlPushMatrix(0x0);
    u0 = *(float *)0x8C082CBC;
    nlTranslate((*(float *)((a4 + 0x14))), ((*(float *)((a4 + 0x18))) + (*(float *)0x8C082CC0)), (*(float *)((a4 + 0x1C))));
    nlScale(u0, u0, u0);
    nlRotateAX(0x4000);
    if ((*(int *)0x8C287C60) == 0) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) - 0.0700000003f);
    }
    t0 = *(int *)((a4 + 0x24));
    if ((int)t0 < (int)0x7) {
        t1 = *(int *)((a4 + 0x24));
        nlObjPutTrnsl((*(int *)((0x8C18163C + (((t1 << 1) + t1) << 2)))), (*(float *)((a4 + 0x20))));
    } else {
        nlObjPutTrnsl((*(int *)((0x8C18163C + (((-t0) + 0x19) << 2)))), (*(float *)((a4 + 0x20))));
    }
    t0 = *(int *)0x8C287C60;
    t1 = (nlPopMatrix(0x1));
    if (t0 == 0) {
        t0 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t0 + 0x1);
        t2 = (t0 + 0x1);
        if (t0 == 21) {
            t0 = nlCloseEvent(a4);
            *(unsigned int *)0x8C181608 = ((*(int *)0x8C181608) - 1);
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_8c03b892(int a4)
{
    register float u27;
    register int t19;
    register float u34;

    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) - 1);
    }
    if ((int)(*(int *)((a4 + 0x24))) < 0) {
        return nlCloseEvent(a4);
    }
    if ((int)(*(int *)((a4 + 0x24))) > (int)0x41) {
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 1.5f);
        }
        u34 = 1.0f;
    } else {
        u27 = 1.0f;
        if ((int)(*(int *)((a4 + 0x24))) > (int)0x37) {
        } else {
            t19 = *(int *)((a4 + 0x24));
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) - 1.0f);
            }
            u27 = ((float)t19 / 55.0f);
        }
        u34 = u27;
    }
    sprSheetSet(0x8C10CDD8);
    sprSheetPut(0xD, (*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))), u34);
    *(float *)0x8C2FBE14 = u34;
    return circuitNumDraw((*(int *)((a4 + 0x20))), 0x0, 0x8C159E70, ((*(float *)((a4 + 0x14))) + -4.0f), ((*(float *)((a4 + 0x18))) + -20.0f), (*(float *)((a4 + 0x1C))));
}

float FUN_8c08a978(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    register int t3;
    register int t4;
    register int t5;
    register int t19;
    register int t20;
    register float u24;
    register float u28;
    register float u31;
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t7;
    register float u8;
    register float u9;
    register float u10;

    t3 = (a4 + 0x18);
    t4 = a7;
    t5 = 0x0;
    for (;;) {
        if ((int)(*(int *)((t3 + 0x0))) < 0) {
            t3 = (t3 + 0x50);
        }
        if ((int)(*(int *)((t3 + 0x0))) > 0) {
            t0 = (*(int *)((t3 + 0x0)));
            t3 = (t3 + 0x4);
            if ((t0 & 8) != 0) {
                t7 = 0x3;
            } else {
                t7 = 0x1;
            }
            t2 = (*(int *)((t3 + 0x0)));
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 8)) = t2;
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            for (;;) {
                t1 = (*(int *)(((int)stk + 4)));
                t19 = *(int *)(((int)stk + 8));
                if ((int)t1 >= (int)t19) {
                    break;
                }
                t4 = t5;
                t4 = (t4 << 1);
                t2 = t5;
                t4 = (t4 + t2);
                t6 = 0x0;
                t4 = (t4 << 2);
                if ((int)t7 > 0) {
                    t20 = t19;
                    for (;;) {
                        t2 = (*(int *)((t3 + 0x0)));
                        t6 = (t6 + 0x1);
                        if ((t2 & 0x1) != 0) {
                            t20 = t4;
                            t20 = (t20 + a6);
                            u10 = (*(float *)((t20 + 0x0)));
                            t1 = t4;
                            t1 = (t1 + a5);
                            u8 = f4;
                            u10 = (u10 * (1.0f - f4));
                            u9 = (*(float *)((t1 + 0x0)));
                            t0 = 0x4;
                            t4 = (t4 + 0xC);
                            t5 = (t5 + 0x1);
                            u24 = u10;
                            u24 = u24 + u8 * u9;
                            u10 = u24;
                            *(float *)((t3 + 0x0)) = u10;
                            t2 = (*(int *)((t3 + 0x0)));
                            t2 = (t2 | 0x1);
                            *(unsigned int *)((t3 + 0x0)) = t2;
                            t3 = (t3 + 0x4);
                            u10 = (*(float *)((t20 + t0)));
                            u9 = (*(float *)((t1 + t0)));
                            t0 = 0x8;
                            u10 = (u10 * (1.0f - f4));
                            u28 = u10;
                            u28 = u28 + u8 * u9;
                            u10 = u28;
                            *(float *)((t3 + 0x0)) = u10;
                            t3 = (t3 + 0x4);
                            u10 = (*(float *)((t20 + t0)));
                            u9 = (*(float *)((t1 + t0)));
                            u10 = (u10 * (1.0f - f4));
                            u31 = u10;
                            u31 = u31 + u8 * u9;
                            u10 = u31;
                            *(float *)((t3 + 0x0)) = u10;
                            t3 = (t3 + 0x18);
                        } else {
                            t3 = (t3 + 0x8);
                        }
                        if ((int)t6 >= (int)t7) {
                            break;
                        }
                    }
                }
                t2 = (*(int *)(((int)stk + 4)));
                t2 = (t2 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t2;
            }
        }
        t2 = (*(int *)((t3 + 0x0)));
        if (t2 == 0) {
            break;
        }
    }
    return u8;
}

int FUN_8c0901c4(int a4, Stk3 s, float f4)
{
    int stk[25];
    register int t4;
    register int t0;
    register int t1;
    register float u9;
    register int t16;
    register int t10;
    register int t11;
    register int t12;
    register int t14;
    register int t25;

    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    t4 = 0x0;
    if ((int)a4 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t0 = ((int)((int)t0 / (int)0xA));
            t1 = (t1 + 0x1);
            if ((int)t0 <= 0) {
                break;
            }
        }
        t4 = t1;
    }
    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
        t25 = (sprPutAtAlpha(0x8C3376DC, *(Stk3 *)(((int)stk + 4)), f4));
    } else {
        u9 = *(float *)0x8C0902C0;
        t16 = 0x8C0902C0;
        if ((int)t4 > 0) {
            t10 = 0x0;
            t11 = a4;
            for (;;) {
                t12 = (int)((int)t11 % (int)0xA);
                t11 = ((int)((int)t11 / (int)0xA));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
                t14 = sprPutAtAlpha(((((((t12 + 0xA) << 2) + (t12 + 0xA)) << 2) << 2) + 0x8C3373BC), *(Stk3 *)(((int)stk + 4)), f4);
                t10 = (t10 + 0x1);
                *(float *)(((((int)stk + 16) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x28) + 0x0))) - u9);
                if ((int)t10 >= (int)t4) {
                    break;
                }
            }
            t16 = t14;
        }
        t25 = t16;
    }
    return t25;
}

int FUN_8c0d271e(void)
{
    register int t0;

    nlPrintf(0x8C125C00);
    t0 = 0x0;
    for (;;) {
        nlPrintf(0x8C125C08, (t0), ((*(int *)((0x8C38BA9C + (t0 << 2))))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    t0 = (nlsndRemainMem());
    nlPrintf(0x8C125C18, t0);
    nlPrintf(0x8C125C24, ((*(int *)0x8C1D2BE0)), ((*(int *)0x8C1D2BDC)));
    t0 = (nlsndDriverMidiReqNum());
    nlPrintf(0x8C125C38, t0);
    t0 = (nlsndDriverStatus());
    nlPrintf(0x8C125C4C, t0);
    nlPrintf(0x8C125C60);
    t0 = (nlsndVersion());
    nlPrintf(0x8C125C68, t0);
    t0 = (nlsndDriverSeqStatus());
    nlPrintf(0x8C125C70, t0);
    nlLocate(0x32, 0x37);
    return (nlPrintf(0x8C125C7C, (unsigned short)(*(short *)(((*(int *)0x8C29B898) + 0x18)))));
}

int FUN_8c09acf8(Stk3 s, float f4)
{
    int stk[31];
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;

    stk[20] = s.w[0];
    stk[21] = s.w[1];
    stk[22] = s.w[2];
    *(float *)(((((int)stk + 48) + 0x20) + 0x8)) = (*(float *)0x8C09AE28);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 48) + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((int)stk + 48)); }
    t1 = ((int (*)(int, Stk3, Stk3, float))(sprPutAtAlpha))(0x8C33E9B0, *(Stk3 *)(((int)stk + 36)), *(Stk3 *)(((int)stk + 48)), f4);
    u2 = *(float *)(((((int)stk + 48) + 0x20) + 0x0));
    u3 = *(float *)(((((int)stk + 48) + 0x20) + 0x8));
    u4 = *(float *)(((((int)stk + 48) + 0x20) + 0x4));
    u5 = *(float *)0x8C09AE38;
    *(int *)((int)stk + 32) = ((int)stk + 48);
    *(Stk3 *)(((int)stk + 48)) = vecMake((u2 + u5), u4, u3);
    *(float *)0x8C33EA10 = (((*(float *)0x8C33EA20) - (*(float *)0x8C33EA18)) * (*(float *)0x8C09AE40));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((int)stk + 48)); }
    t9 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EA00, *(Stk3 *)(((int)stk + 20)), f4);
    u10 = *(float *)(((((int)stk + 48) + 0x20) + 0x0));
    u11 = *(float *)(((((int)stk + 48) + 0x20) + 0x8));
    u12 = *(float *)(((((int)stk + 48) + 0x20) + 0x4));
    u13 = *(float *)0x8C09AE44;
    *(int *)((int)stk + 16) = ((int)stk + 48);
    *(Stk3 *)(((int)stk + 48)) = vecMake((u10 + u13), u12, u11);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 48)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EA50, *(Stk3 *)(((int)stk + 4)), f4));
}

void FUN_8c0bbfb2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[30];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register float u5;
    register float u6;
    register float u7;
    register float u11;
    register float u12;
    register float u13;

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    t0 = *(int *)(((int)stk + 32));
    t1 = 0x0;
    t2 = (int)((float)(t0 + a5) * f4);
    if ((int)(int)((float)(t0 + a5) * f4) > (int)a5) {
        t1 = ((int)((float)(t0 + a5) * f4) - a5);
        t2 = a5;
    }
    t4 = *(int *)(((int)stk + 32));
    u5 = *(float *)(((((int)stk + 24) + 0x34) + 0x8));
    u6 = *(float *)(((((int)stk + 24) + 0x34) + 0x4));
    u7 = *(float *)(((((int)stk + 24) + 0x34) + 0x0));
    *(int *)((int)stk + 20) = (((int)stk + 24) + 0xC);
    *(Stk3 *)((((int)stk + 24) + 0xC)) = vecMake((u7 - (float)t4), (u6 + (float)a5), u5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 24) + 0xC)); }
    primRectDirY((*(int *)(((int)stk + 28))), t2, (*(int *)(((int)stk + 24))), 0x0, *(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12));
    u11 = *(float *)(((((int)stk + 24) + 0x34) + 0x0));
    u12 = *(float *)(((((int)stk + 24) + 0x34) + 0x8));
    u13 = *(float *)(((((int)stk + 24) + 0x34) + 0x4));
    *(int *)((int)stk + 4) = (((int)stk + 24) + 0xC);
    *(Stk3 *)((((int)stk + 24) + 0xC)) = vecMake((u11 - (float)t4), u13, u12);
    if (t1 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0xC)); }
        primRectDirX((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 24))), t1, 0x0, *(Stk3 *)(((int)stk + 12)), *(Stk1 *)((int)stk + 12 + 12));
    }
}

void FUN_8c0bc06a(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[30];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register float u5;
    register float u6;
    register float u7;
    register float u11;
    register float u12;
    register float u13;

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    t0 = *(int *)(((int)stk + 32));
    t1 = 0x0;
    t2 = (int)((float)(t0 + a5) * f4);
    if ((int)(int)((float)(t0 + a5) * f4) > (int)a5) {
        t1 = ((int)((float)(t0 + a5) * f4) - a5);
        t2 = a5;
    }
    t4 = *(int *)(((int)stk + 32));
    u5 = *(float *)(((((int)stk + 24) + 0x34) + 0x8));
    u6 = *(float *)(((((int)stk + 24) + 0x34) + 0x4));
    u7 = *(float *)(((((int)stk + 24) + 0x34) + 0x0));
    *(int *)((int)stk + 20) = (((int)stk + 24) + 0xC);
    *(Stk3 *)((((int)stk + 24) + 0xC)) = vecMake((u7 + (float)t4), (u6 + (float)a5), u5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 24) + 0xC)); }
    primRectDirY((*(int *)(((int)stk + 28))), t2, (*(int *)(((int)stk + 24))), 0x0, *(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12));
    u11 = *(float *)(((((int)stk + 24) + 0x34) + 0x0));
    u12 = *(float *)(((((int)stk + 24) + 0x34) + 0x8));
    u13 = *(float *)(((((int)stk + 24) + 0x34) + 0x4));
    *(int *)((int)stk + 4) = (((int)stk + 24) + 0xC);
    *(Stk3 *)((((int)stk + 24) + 0xC)) = vecMake((u11 + (float)t4), u13, u12);
    if (t1 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0xC)); }
        primRectDirX((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 24))), t1, 0x1, *(Stk3 *)(((int)stk + 12)), *(Stk1 *)((int)stk + 12 + 12));
    }
}

int FUN_8c0d96f6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(int *)((0x8C40C2A8 + ((*(int *)((a4 + 0x14))) << 2)))) != 2) {
        t0 = *(int *)((a4 + 0x20));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        if (t1 != 0) {
            t0 = *(int *)((a4 + 0x24));
            t1 = *(int *)((a4 + 0x20));
            t2 = *(int *)((a4 + 0x18));
            t3 = *(int *)((a4 + 0x1C));
            t4 = ((int)((float)(t3 - t2) * ((float)(t0 - t1) / (float)t0)) + t2);
            if ((int)((int)((float)(t3 - t2) * ((float)(t0 - t1) / (float)t0)) + t2) > (int)t3) {
                t4 = (*(int *)((a4 + 0x1C)));
            }
            nlsndSystemControl((*(int *)((a4 + 0x14))), 0x10A0, t4);
        }
        t0 = *(int *)((0x8C40C2A8 + ((*(int *)((a4 + 0x14))) << 2)));
        if (t0 != 2) {
            t1 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a4 + 0x20)) = (t1 - 1);
            if ((int)(t1 - 1) < 0) {
                *(unsigned int *)((0x8C40C2A8 + ((*(int *)((a4 + 0x14))) << 2))) = 0x0;
                return nlCloseEvent(a4);
            }
            return t0;
        }
        *(unsigned int *)((0x8C40C2A8 + ((*(int *)((a4 + 0x14))) << 2))) = 0x0;
        return nlCloseEvent(a4);
    }
    *(unsigned int *)((0x8C40C2A8 + ((*(int *)((a4 + 0x14))) << 2))) = 0x0;
    return nlCloseEvent(a4);
}

int FUN_8c09c6f6(int a4, Stk3 s)
{
    int stk[40];

    stk[29] = s.w[0];
    stk[30] = s.w[1];
    stk[31] = s.w[2];
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x60) + 0x0))), (*(float *)(((((int)stk + 20) + 0x60) + 0x4))), (*(float *)(((((int)stk + 20) + 0x60) + 0x8))));
    *(int *)((int)stk + 4) = (0x10 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x10 + ((int)stk + 20)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x60) + 0x0))) + 100.0f), (*(float *)(((((int)stk + 20) + 0x60) + 0x4))), (*(float *)(((((int)stk + 20) + 0x60) + 0x8))));
    *(int *)((int)stk + 4) = ((int)stk + 20);
    primVertexSet(a4, 0x0, 0x0, 0x0, ((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x60) + 0x0))) + 100.0f), ((*(float *)(((((int)stk + 20) + 0x60) + 0x4))) + 20.0f), (*(float *)(((((int)stk + 20) + 0x60) + 0x8))));
    *(int *)((int)stk + 4) = (0x20 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x20 + ((int)stk + 20)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x60) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x60) + 0x4))) + 20.0f), (*(float *)(((((int)stk + 20) + 0x60) + 0x8))));
    *(int *)((int)stk + 4) = (0x30 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x30 + ((int)stk + 20)));
    return (nlDispStrip(0x4, ((int)stk + 20)));
}

int FUN_8c09e5b8(void)
{
    int stk[12];
    register float u0;
    register float u1;
    register float u2;
    register float u4;
    register float u8;

    u0 = *(float *)0x8C09E6DC;
    u1 = *(float *)0x8C09E6E0;
    u2 = *(float *)0x8C09E6E8;
    *(Stk3 *)(((int)stk + 8)) = vecMake(u0, u1, u2);
    sprPutAt(0x8C3407B4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    u4 = *(float *)0x8C09E6F4;
    *(Stk3 *)(((int)stk + 8)) = vecMake(u4, u1, u2);
    sprPutAt(0x8C340804, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C09E6F8), u1, u2);
    sprPutAt(0x8C340854, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    u8 = *(float *)0x8C09E6FC;
    *(Stk3 *)(((int)stk + 8)) = vecMake(u0, u8, u2);
    sprPutAt(0x8C3408A4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u4, u8, u2);
    sprPutAt(0x8C3408F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C09E6F8), u8, u2);
    return (sprPutAt(0x8C340944, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8)));
}

int FUN_8c0bbf00(int a4, Stk12 s)
{
    int stk[46];

    stk[26] = s.w[0];
    stk[27] = s.w[1];
    stk[28] = s.w[2];
    stk[29] = s.w[3];
    stk[30] = s.w[4];
    stk[31] = s.w[5];
    stk[32] = s.w[6];
    stk[33] = s.w[7];
    stk[34] = s.w[8];
    stk[35] = s.w[9];
    stk[36] = s.w[10];
    stk[37] = s.w[11];
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x54) + 0x0))), (*(float *)(((((int)stk + 20) + 0x54) + 0x4))), (*(float *)(((((int)stk + 20) + 0x54) + 0x8))));
    *(int *)((int)stk + 4) = ((int)stk + 20);
    primVertexSet(a4, 0x0, 0x0, 0x0, ((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x60) + 0x0))), (*(float *)(((((int)stk + 20) + 0x60) + 0x4))), (*(float *)(((((int)stk + 20) + 0x60) + 0x8))));
    *(int *)((int)stk + 4) = (0x10 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x10 + ((int)stk + 20)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    *(int *)((int)stk + 4) = (0x20 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x20 + ((int)stk + 20)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    *(int *)((int)stk + 4) = (0x30 + ((int)stk + 20));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x30 + ((int)stk + 20)));
    return (nlDispStripTrnsl(0x4, ((int)stk + 20)));
}

int FUN_8c083654(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(*(int *)((a4 + 0xC8))) < (int)0x6) {
        *(float *)((a4 + 0xBC)) = ((*(float *)((a4 + 0xBC))) + (*(float *)(((0xB4 + a4) + 0x0))));
    }
    if ((int)(*(int *)((a4 + 0xC8))) > (int)0x8C) {
        *(float *)((a4 + 0xBC)) = ((*(float *)((a4 + 0xBC))) + (*(float *)(((0xB4 + a4) + 0x0))));
        *(float *)((a4 + 0xC0)) = ((*(float *)((a4 + 0xC0))) + (*(float *)(((0xB8 + a4) + 0x0))));
    }
    t0 = *(int *)((a4 + 0xC8));
    if (((int)t0 < (int)0x42) && ((int)t0 > (int)0x36)) {
        *(float *)((a4 + 0xC0)) = ((*(float *)((a4 + 0xC0))) + (*(float *)(((0xB8 + a4) + 0x0))));
    }
    *(float *)((a4 + 0x18)) = (*(float *)((a4 + 0xBC)));
    *(float *)((a4 + 0x68)) = (*(float *)((a4 + 0xC0)));
    t0 = ((int (*)(int, int, int, int))(thunk_FUN_8c0f41f0))((a4 + 0x14), a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_8c0f41f0))((a4 + 0x64));
    t0 = *(int *)((a4 + 0xC8));
    *(unsigned int *)((a4 + 0xC8)) = (t0 + 0x1);
    if (t0 == 0xB4) {
        return nlCloseEvent2(a4);
    }
    return 0xC8;
}

int FUN_8c081df8(int a4, int a5)
{
    int stk[6];
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t0;
    register int t1;
    register int t7;
    int t9;

    *(unsigned int *)(((int)stk + 4)) = 0x10000;
    *(unsigned int *)0x8C301938 = 0x0;
    t3 = 0x0;
    t4 = 0x8CA80000;
    t5 = a5;
    t6 = 0x8CB00000;
    t8 = 0x10000;
    for (;;) {
        t10 = (t8 == 0);
        t8 = (t8 - 1);
        if (!t10) {
            t1 = (*(int *)(((int)stk + 4)));
            t1 = (t1 - 1);
            *(unsigned int *)(((int)stk + 4)) = t1;
            t1 = (t1 + 0x1);
            if (t1 == 0) {
                break;
            }
            t0 = (*(signed char *)((t6 + 0x2)));
            t5 = t0;
            t9 = (unsigned char)t5;
            t3 = t9;
            t7 = (*(short *)((t6 + 0x0)));
            if ((t3 & 0xF) != 0) {
                t0 = 0x7;
                t5 = (unsigned short)t7;
                t0 = (t0 & t5);
                t0 = (t0 - 3);
                *(unsigned char *)((t4 + 0x4)) = t0;
                t0 = t5;
                t0 = (t0 >> 1);
                t0 = (t0 >> 1);
                t0 = (t0 >> 1);
                t0 = (t0 & 0x3);
                *(unsigned char *)((t4 + 0x3)) = t0;
                t3 = 0xFFFFFFFB;
                t0 = t5;
                t0 = ((int)t0 << (int)t3);
                t0 = (t0 & 0x7);
                t0 = (t0 - 3);
                *(unsigned char *)((t4 + 0x2)) = t0;
                t3 = 0xFFFFFFF8;
                t0 = t5;
                t0 = ((int)t0 << (int)t3);
                t0 = (t0 & 0x3);
                *(unsigned char *)((t4 + 0x1)) = t0;
                t0 = 0xF;
                t0 = (t0 & t9);
                t3 = 0xFFFFFFF6;
                t0 = (t0 - 8);
                t5 = ((int)t5 << (int)t3);
                t5 = (t5 & (0x3));
                *(unsigned char *)((t4 + 0x0)) = t5;
                *(unsigned char *)((t4 + 0x5)) = t0;
                t0 = t9;
                t3 = 0xFFFFFFFC;
                t0 = ((int)t0 << (int)t3);
                t0 = (t0 & 0x7);
                *(unsigned char *)((t4 + 0x6)) = t0;
                t3 = 0xFFFFFFF9;
                t0 = t9;
                t0 = ((int)t0 << (int)t3);
                t0 = (t0 & 0x1);
                *(unsigned char *)((t4 + 0x7)) = t0;
                t6 = (t6 + 0x4);
                t1 = (*(int *)0x8C301938);
                t4 = (t4 + 0x8);
                t1 = (t1 + 0x1);
                *(unsigned int *)0x8C301938 = t1;
                continue;
            }
            break;
        }
        break;
    }
    return t0;
}

int FUN_8c087d94(int a4)
{
    register int t0;
    register int t1;

    *(float *)((a4 + 0x20)) = ((nlSin((unsigned short)(*(short *)((a4 + 0x30))))) * (*(float *)0x8C087E84));
    *(unsigned short *)(((0x30 + a4) + 0x0)) = ((*(short *)(((0x30 + a4) + 0x0))) + ((int)((int)0x8000 / (int)(*(int *)((a4 + 0x14))))));
    if ((*(int *)0x8C301BF0) == 2) {
        *(unsigned short *)(((0x30 + a4) + 0x0)) = ((*(short *)(((0x30 + a4) + 0x0))) + ((int)((int)0x8000 / (int)(*(int *)((a4 + 0x14))))));
    }
    if ((int)(unsigned short)(*(short *)((a4 + 0x30))) > (int)0x8000) {
        *(unsigned short *)((a4 + 0x30)) = 0x8000;
    }
    fadeQuadDrawB((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))), (*(int *)((a4 + 0x3C))), (*(float *)((a4 + 0x20))));
    if (((int)(*(int *)((a4 + 0x1C))) <= (int)0x50) && (t0 = *(int *)((a4 + 0x38)), t0 == 0)) {
        *(unsigned int *)((a4 + 0x1C)) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = 0x1;
        hudFadeOutStart((*(int *)((a4 + 0x3C))), (*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))), 0x6, 0x5A);
    }
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)0x8C301BF0;
    *(unsigned int *)((a4 + 0x1C)) = (t0 - t1);
    if ((int)(t0 - t1) <= 0) {
        return nlCloseEvent2(a4);
    }
    return (t0 - t1);
}

int FUN_8c0da350(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((a4 + 0x34));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x14))), (*(float *)0x8C0DA450), (*(float *)((a4 + 0x1C))));
    nlRotateAY((*(int *)((a4 + 0x20))));
    nlScale((*(float *)((a4 + 0x28))), 1.0f, (*(float *)((a4 + 0x2C))));
    if ((*(float *)((a4 + 0x2C))) > 1.0f) {
        nlLineSetDiv((*(float *)((a4 + 0x2C))));
    }
    nlObjPutTrnsl((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D5690))), (((float)t0 / (float)t1) * 1.0f));
    t0 = nlPopMatrix(0x1);
    if ((*(int *)0x8C287C60) == 0) {
        t1 = *(int *)((a4 + 0x30));
        *(unsigned int *)((a4 + 0x30)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            if ((int)(*(int *)0x8C1D56D8) > 0) {
                *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) - 1);
            }
            return nlCloseEvent(a4);
        }
        return t0;
    }
    return t0;
}

int FUN_8c084fcc(int a4)
{
    int stk[28];
    register float u3;
    register float u4;
    register float u5;
    register int t6;
    register int t7;
    register int t9;

    *(float *)((a4 + 0xBC)) = ((*(float *)((a4 + 0xBC))) + 0.0500000007f);
    if ((*(float *)((a4 + 0xBC))) > 1.0f) {
        *(float *)((a4 + 0xBC)) = 1.0f;
    }
    u3 = *(float *)0x8C0850E4;
    *(int *)((int)stk + 20) = ((int)stk + 24);
    *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, 0.0f, u3);
    u4 = *(float *)0x8C0850E8;
    *(int *)((int)stk + 16) = (0xC + ((int)stk + 24));
    *(Stk3 *)((0xC + ((int)stk + 24))) = vecMake(u4, 0.0f, u3);
    *(int *)((int)stk + 12) = (0x18 + ((int)stk + 24));
    *(Stk3 *)((0x18 + ((int)stk + 24))) = vecMake(0.0f, u4, u3);
    *(int *)((int)stk + 8) = (0x24 + ((int)stk + 24));
    *(Stk3 *)((0x24 + ((int)stk + 24))) = vecMake(u4, u4, u3);
    u5 = *(float *)0x8C0850EC;
    *(int *)((int)stk + 4) = (0x30 + ((int)stk + 24));
    *(Stk3 *)((0x30 + ((int)stk + 24))) = vecMake(u5, 0.0f, u3);
    t6 = standBgDraw();
    t7 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t7 - 1);
    t9 = t6;
    if (t7 == 0) {
        t9 = (nlCloseEvent(a4));
    }
    return t9;
}

int FUN_8c03b430(int a4)
{
    int stk[15];
    register float u0;
    register float u2;
    register float u12;
    register float u15;
    register float u8;

    *(unsigned int *)(((int)stk + 20)) = a4;
    u0 = *(float *)0x8C03B688;
    u2 = *(float *)0x8C03B694;
    if ((*(int *)((a4 + 0x14))) != 0) {
        sprSheetSet(0x8C10D138);
        u8 = (*(float *)0x8C03B69C);
    } else {
        sprSheetSet(0x8C10D15C);
        u8 = (*(float *)0x8C03B6A4);
    }
    sprSheetPut(0x0, u8, u0, u2, 1.0f);
    sprSheetSet(0x8C10D180);
    u12 = *(float *)0x8C03B6AC;
    sprSheetPut(0x0, (*(float *)0x8C03B6B0), u12, u2, 1.0f);
    u15 = *(float *)0x8C03B6B4;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x4);
    *(Stk3 *)((((int)stk + 20) + 0x4)) = vecMake(u15, u12, u2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    return (hudFontNumPut((*(int *)(((*(int *)(((int)stk + 20))) + 0x1C))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}

int FUN_8c078ba0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t46;
    register float t2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = cpuDblAimAddLv16(a4, a5);
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
    t46 = (a5 + t1);
    if ((a5 + t1) == 0) {
        t2 = cpuOppLineX(a4);
        if ((*(float *)0x8C078CB8) > t2) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
        } else {
            if ((*(float *)0x8C078CBC) > t2) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x1;
            } else {
                if ((*(float *)0x8C078CC0) > t2) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x2;
                } else {
                    if ((*(float *)0x8C078CC4) > t2) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x3;
                    } else {
                        if ((*(float *)0x8C078CC8) > t2) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x4;
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x5;
                        }
                    }
                }
            }
        }
        t46 = (((int (*)(int, int, float))((*(int *)((((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129))) << 2) + 0x8C10D9A4)))))(a4, (a5 + t1), t2));
    }
    return t46;
}

int FUN_8c08978c(int a4)
{
    *(unsigned int *)(((set_event(0x18, 0x8C08969C)) + 0x14)) = a4;
    dbgMenuSetTitle(a4, 0x8C10DB5C, 0x6);
    dbgMenuSetItem(a4, 0x0, 0x8C10DB64, 0xFF, 0x0, 0xFF, 0x1);
    dbgMenuSetItem(a4, 0x1, 0x8C10DB68, 0xFF, 0x0, 0xFF, 0x1);
    dbgMenuSetItem(a4, 0x2, 0x8C10DB6C, 0xFF, 0x0, 0xFF, 0x1);
    dbgMenuSetItem(a4, 0x3, 0x8C10DB70, 0xFF, 0x0, 0xFF, 0x1);
    dbgMenuSetItem(a4, 0x4, 0x8C10DB78, 0x0, 0x0, 0x5, 0x1);
    return (dbgMenuSetItem(a4, 0x5, 0x8C10DB7C, 0x1, 0x0, 0x1, 0x1));
}

int FUN_8c041d6a(int a4)
{
    int stk[11];
    register int t2;
    register int t18;
    register int t11;

    *(unsigned int *)0x8C2FCC1C = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0));
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = (t2 << 2);
        *(int *)((int)stk + 4) = ((t2 << 2) + 0x8C287AE0);
        *(unsigned int *)((((t2 << 2) + 0x8C287AE0) + 0x0)) = (dbgMenuGetValue((*(int *)((a4 + 0x14))), (t2 + 0x1)));
        if ((*(int *)(((0x8C287AE0 + (*(int *)(((int)stk + 8)))) + 0x0))) != 0) {
            *(unsigned short *)0x8C343262 = ((*(short *)0x8C343262) & (~(t2 << 2)));
            t11 = ((*(short *)0x8C343260) & (~(t2 << 2)));
        } else {
            *(unsigned short *)0x8C343262 = ((*(short *)0x8C343262) | (t2 << 2));
            t11 = ((*(short *)0x8C343260) | (t2 << 2));
        }
        t2 = (t2 + 0x1);
        *(unsigned short *)0x8C343260 = t11;
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)0x8C159EE8 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5));
    t18 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
    *(unsigned int *)0x8C2FCC68 = t18;
    return t18;
}

void FUN_8c0855c6(int a4)
{
    register float u17;

    if ((*(int *)0x8C30196C) == 0) {
        if ((*(int *)0x8C287ADC) == 2) {
            hudCallWordsDraw((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(float *)((a4 + 0x24))));
        } else {
            hudCallWordsDrawB((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(float *)((a4 + 0x24))));
        }
        if ((int)(*(int *)((a4 + 0x14))) > (int)0x28) {
            if ((*(int *)0x8C287C60) == 0) {
                u17 = *(float *)((a4 + 0x24));
                *(float *)((a4 + 0x24)) = (u17 + 0.100000001f);
                if ((u17 + 0.100000001f) > 1.0f) {
                    *(float *)((a4 + 0x24)) = 1.0f;
                }
            }
        }
        if ((int)(*(int *)((a4 + 0x14))) < (int)0xA) {
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) - 0.0500000007f);
            }
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
        if ((*(int *)((a4 + 0x14))) == 0) {
            nlCloseEvent(a4);
    return;
        }
        return;
    }
}

int FUN_8c0dfab0(int a4)
{
    register int t0;

    *(unsigned char *)0x8C40C2F4 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0));
    *(unsigned char *)0x8C40C2F6 = ((dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1)) + 0xFF);
    *(unsigned char *)0x8C40C2F7 = ((dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2)) + 0xFF);
    *(unsigned char *)0x8C40C2F8 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3));
    *(unsigned char *)0x8C40C2F9 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4));
    *(unsigned char *)0x8C40C2FA = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5));
    *(unsigned char *)0x8C40C2FB = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6));
    if (((*(int *)0x8C287AE0) == 0) && (t0 = *(int *)0x8C287AE4, t0 == 0)) {
        *(unsigned int *)0x8C287C64 = (unsigned char)(eepromGetVsMatch());
    } else {
        *(unsigned int *)0x8C287C64 = (unsigned char)(eepromGetMatch());
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
    if (t0 == 1) {
        eepromVmuSave0();
        return dbgMenuSetValue((*(int *)((a4 + 0x14))), 0x6, 0x0);
    }
    return t0;
}

int FUN_8c0890dc(int a4)
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
    if ((int)(*(int *)((a4 + 0x14))) > (int)0x50) {
        emotFaceReset((*(int *)((a4 + 0x1C))));
        t0 = (nlCloseEvent(a4));
    }
    if ((*(int *)0x8C287B44) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x82;
    }
    return t0;
}

void FUN_8c08b15a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = a4;
    t1 = (a4 + 0x18);
    for (;;) {
        if ((int)(*(int *)((t1 + 0x0))) < 0) {
            t1 = (t1 + 0x50);
        }
        if ((int)(*(int *)((t1 + 0x0))) > 0) {
            t2 = (*(int *)((t1 + 0x0)));
            t1 = (t1 + 0x4);
            if ((t2 & 8) != 0) {
                t3 = 0x3;
            } else {
                t3 = 0x1;
            }
            t4 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t0 = 0x1;
            t2 = (nlLocate(t0, 0x2));
            t5 = 0x0;
            for (;;) {
                if ((int)t5 >= (int)t4) {
                    break;
                }
                t6 = 0x0;
                if ((int)t3 > 0) {
                    for (;;) {
                        if (((*(int *)((t1 + 0x0))) & 0x1) != 0) {
                            t1 = (t1 + 0x18);
                            u0 = *(float *)((t1 + 0x0));
                            t1 = (t1 + 0x4);
                            t2 = (nlPrintf(0x8C10DCFC, u0));
                            u0 = *(float *)((t1 + 0x0));
                            t1 = (t1 + 0x4);
                            t2 = (nlPrintf(0x8C10DD04, u0));
                        } else {
                            t1 = (t1 + 0x8);
                        }
                        t6 = (t6 + 0x1);
                        if ((int)t6 >= (int)t3) {
                            break;
                        }
                    }
                }
                t5 = (t5 + 0x1);
            }
        } else {
            t2 = t0;
        }
        t0 = t2;
        if (((*(int *)((t1 + 0x0)))) == 0) {
            break;
        }
    }
}

int FUN_8c08b0c2(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t0 = a4;
    t1 = a5;
    t2 = (a4 + 0x18);
    u0 = f4;
    u1 = f5;
    for (;;) {
        if ((int)(*(int *)((t2 + 0x0))) < 0) {
            t2 = (t2 + 0x50);
        }
        if ((int)(*(int *)((t2 + 0x0))) > 0) {
            t4 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            if ((t4 & 0x8) != 0) {
                t4 = 0x3;
            } else {
                t4 = 0x1;
            }
            t1 = 0x2;
            t5 = (*(int *)((t2 + 0x0)));
            t2 = (t2 + 0x4);
            t0 = 0x1;
            t3 = (nlLocate(t0, t1));
            t1 = 0x0;
            for (;;) {
                if ((int)t1 >= (int)t5) {
                    break;
                }
                t0 = 0x0;
                if ((int)t4 > 0) {
                    for (;;) {
                        t0 = (t0 + 0x1);
                        if ((((*(int *)((t2 + 0x0)))) & 0x1) != 0) {
                            t2 = (t2 + 0x18);
                            u3 = (*(float *)((t2 + 0x0)));
                            u3 = (u3 + f4);
                            *(float *)((t2 + 0x0)) = u3;
                            t2 = (t2 + 0x4);
                            u2 = (*(float *)((t2 + 0x0)));
                            u2 = (u2 + f5);
                            *(float *)((t2 + 0x0)) = u2;
                            t2 = (t2 + 0x4);
                            u4 = u2;
                            u5 = u3;
                        } else {
                            t2 = (t2 + 0x8);
                        }
                        u2 = u4;
                        u3 = u5;
                        if ((int)t0 >= (int)t4) {
                            break;
                        }
                    }
                    u4 = u2;
                    u5 = u3;
                }
                u2 = u4;
                u3 = u5;
                t1 = (t1 + 0x1);
            }
        } else {
            t4 = t0;
            u4 = u2;
            u5 = u3;
            u6 = u0;
            u7 = u1;
        }
        u2 = u4;
        u3 = u5;
        u0 = u6;
        u1 = u7;
        t0 = t4;
        if ((*(int *)((t2 + 0x0))) == 0) {
            break;
        }
    }
    return t3;
}

int FUN_8c0891ec(int a4)
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
        t0 = (nlCloseEvent(a4));
    }
    if ((*(int *)0x8C287B44) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x82;
    }
    return t0;
}
