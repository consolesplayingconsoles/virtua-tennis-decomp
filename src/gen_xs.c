/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int BupCheckCard(void);
int BupGetRequest(void);
int resetBackColorZ(int, int, int);
int btnGuideDrawB(int, Stk3, float);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camGetAngles(int, int, int, int);
int camInit(void);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetTarget(void);
int camSetupView(void);
int countryStagePut(Stk3, Stk1, float);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuShotRange(int, int, int, int, int, float, float);
int cpuShotTargetSet(int, float, float);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int crowdAnimate(void);
int crowdAnimateAlt(void);
int crowdDrawSega(int);
int cursorBoxPut(int, Stk3, float, float, float);
int entryFirstPortFlag(void);
int entryInit(void);
int entryIsVersus(int, int, int, int);
int entryPortJoin(int, int, int, int, int, int, int, int);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeGameInit(void);
int fadeReset(void);
int fadeScreenStart(int, int, int, int, int, int);
int fadeStart(int);
int fileLoadClose(void);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int hudFont2DigitPut(int, Stk3, float);
int hudLabelPut(int, Stk3, float);
int hudSignPut(int, Stk3, float);
int infoPlayerDrawWrap(Stk3);
int lightSet(int, int, int, int);
int lightUpdate(int);
int logoWaveDraw(float);
int menuSprInitGroup(void);
int motFileLoadStep(void);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int, int, int, int, int, int);
int nlAddVector3op(int, int, int);
float nlCos(int);
int nlExecuteEvent(int);
int nlExecuteEvent2(void);
int nlInitEvent(void);
int nlLineSetDiv(float);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
int nlSetCommonTextureOffset(int);
extern float nlSin();
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int padDirRepeat(int, int);
int panelDrawA(Stk3, float);
int panelLogoPut(Stk3, float);
int resCautionFreeAll(void);
int resCautionReset(int);
int screenQuadPut(int, float);
int screenSegVisible(int, Stk3, Stk3);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
extern int sprListPut();
int sprListPutEx(int, int, int, Stk3, float, float, float);
float sprListPutScaleY(int, int, int, float, float, float);
int sprPutAt(int, int, int, int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprStartFree(void);
int stageSegaCourtDraw(int);
int stageSegaScoreboardDraw(void);
int stageTexSetGarbagedAll(void);
int strmBgmFadeOut(int, int);
int strmBgmPlay(int);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int uiScanlinesPut(float);
Stk3 vecMake(float, float, float);
int winDrawA(int, int, float, float, float);
int winDrawFilled(float, float);
int FUN_8c0e48d8(void);
int FUN_8c0ba302(int a4, int a5, int a6, int a7);
float FUN_8c079886(int a4, int a5, float f4, float f5);
int FUN_8c0a048c(int a4, int a5, int a6, int a7, float f4);
int FUN_8c081500(int a4, int a5);



float FUN_8c079886(int a4, int a5, float f4, float f5)
{
    int stk[31];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
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
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_5 = a4;
    v0_7 = a5;
    w0_0 = f5;
    v0_4 = *(int *)((v0_5 + 0xB5C));
    *(unsigned int *)(((int)stk + 8)) = ((((v0_4 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    w0_1 = *(float *)0x8C291F7C;
    v0_2 = (0x0);
    v0_3 = (0x8C291F24);
    v0_0 = (v0_5);
    v0_1 = (((v0_4 * 0x160) + 0x8C2FC69C));
    v0_5 = (v0_4);
    v0_4 = (v0_7);
    v0_5 = (0x8C0ED290);
    w0_3 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C0798D8;
    w0_4 = (w0_3);
    L_8C0798DC:;
    if (!((60.8849983f > w0_4))) goto L_8C079C18;
    w0_1 = *(float *)((v0_3 + 0x60));
    v0_6 = (0x60);
    w0_4 = (0.0f);
    w0_4 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C079920;
    w0_4 = ((*(float *)((v0_3 + v0_6))));
    goto L_8C079922;
    L_8C079C18:;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_2;
    L_8C079C1C:;
    *(float *)((v0_1 + 0x4)) = 0.0f;
    v0_6 = (0x4);
    L_8C079C22:;
    return F0;
    L_8C079922:;
    if ((143.220001f > w0_4)) goto L_8C07992E;
    goto L_8C079C18;
    L_8C07992E:;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
    cpuShotRange(v0_0, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14), w0_3, w0_0);
    nlLocate(0xF, 0xF);
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    v0_5 = (0x8C2FCC6C);
    if (((int)v0_4 <= 0)) goto L_8C079A18;
    L_8C079958:;
    w0_1 = *(float *)((v0_5 + 0x8));
    w0_3 = ((*(float *)((v0_5 + 0x0))));
    w0_0 = (w0_1);
    if ((!(0.0f > w0_1))) goto L_8C079966;
    w0_0 = ((-w0_0));
    L_8C079966:;
    if (((unsigned char)(*(signed char *)((v0_5 + 0xC))) != 1)) goto L_8C0799B0;
    if ((!(w0_3 > (*(float *)(((int)stk + 64)))))) goto L_8C07998E;
    if ((!((*(float *)(((int)stk + 52))) > w0_3))) goto L_8C07998E;
    if ((!(w0_0 > (*(float *)(((int)stk + 72)))))) goto L_8C07998E;
    if (((*(float *)(((int)stk + 60))) > w0_0)) goto L_8C0799F8;
    L_8C07998E:;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 8) + 0x8);
    v0_8 = ((((int)stk + 4) + 0x3C));
    v0_9 = ((((int)stk + 4) + 0x30));
    L_8C0799DE:;
    cpuAimAngleRate((0xB9C + v0_0), v0_5, v0_8, v0_9, *(int *)((int)stk + 4));
    *(float *)((v0_5 + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((v0_5 + 0x8)) = (*(float *)(((int)stk + 24)));
    L_8C0799F8:;
    *(float *)((v0_5 + 0x1C)) = (float)((int)((int)(nlRand()) % (int)0x64));
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_6 + 0x1);
    v0_5 = ((v0_5 + 0x20));
    if (((int)(v0_6 + 0x1) < (int)v0_4)) goto L_8C079958;
    L_8C079A18:;
    v0_5 = (v0_2);
    v0_7 = (0x8C2FCC6C);
    v0_8 = (0xFFFFD8F0);
    v0_9 = (v0_2);
    if (((int)v0_4 <= 0)) goto L_8C079A40;
    L_8C079A24:;
    v0_6 = (0x1C);
    if ((!((*(float *)((v0_7 + 0x1C))) > (float)v0_8))) goto L_8C079A38;
    v0_8 = ((int)(*(float *)((v0_7 + v0_6))));
    v0_9 = (v0_5);
    L_8C079A38:;
    v0_6 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    v0_7 = ((v0_7 + 0x20));
    if (v0_6) goto L_8C079A24;
    L_8C079A40:;
    *(float *)((v0_1 + 0x130)) = (*(float *)((((((v0_9 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
    *(float *)((v0_1 + 0x138)) = (*(float *)((((((v0_9 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
    *(unsigned char *)(((0x13C + v0_1) + 0x0)) = (*(signed char *)((((((v0_9 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    v0_5 = (((((v0_9 << 2) << 2) << 1) + 0x8C2FCC6C));
    w0_0 = (1.0f);
    if (((*(int *)(((*(int *)(((int)stk + 8))) + 0xA24))) != 0)) goto L_8C079A76;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xA24)) = 0x4;
    L_8C079A76:;
    w0_4 = *(float *)((v0_1 + 0x138));
    w0_0 = ((w0_0 + w0_0));
    w0_2 = ((-1.0f));
    w0_1 = (118.849998f);
    w0_3 = (w0_4);
    if ((0.0f > w0_4)) goto L_8C079AAC;
    w0_4 = (w0_3);
    L_8C079AB0:;
    w0_3 = w0_2;
    w0_3 = w0_3 + w0_0 * (w0_4 / w0_1);
    cpuShotTargetSet(v0_0, (((*(float *)((v0_0 + 0xB00))) * (*(float *)((v0_1 + 0x130)))) / 54.8499985f), w0_3);
    *(unsigned char *)(((0x1D + v0_1) + 0x0)) = (*(signed char *)((v0_5 + 0xC)));
    v0_4 = (0xC);
    if (((*(int *)((v0_3 + 0x50))) != 5)) goto L_8C079B40;
    v0_7 = nlRand();
    v0_6 = (v0_7);
    if (((int)v0_7 < 0)) goto L_8C079AEE;
    v0_6 = ((v0_6 & 0x3));
    L_8C079AF8:;
    *(unsigned char *)((v0_5 + 0xC)) = 0x2;
    *(unsigned char *)(((0x1D + v0_1) + 0x0)) = 0x2;
    v0_7 = ((int)((int)(nlRand()) % (int)0x3)) == 0;
    v0_4 = ((v0_4 + (v0_6 + 0xF)));
    if (v0_7) goto L_8C079B40;
    *(float *)((v0_1 + 0x4)) = (float)((*(short *)((v0_1 + 0x118))) - 10);
    v0_6 = (0x4);
    if ((0.0f > (*(float *)((v0_1 + 0x4))))) goto L_8C079C1C;
    goto L_8C079C22;
    L_8C079B40:;
    v0_7 = *(short *)((v0_1 + 0x118));
    w0_3 = *(float *)((v0_1 + 0xC));
    w0_4 = *(float *)((v0_1 + 0xC));
    *(float *)((v0_1 + 0xC)) = (w0_4 - 60.0f);
    v0_6 = (0xC);
    v0_4 = ((int)((float)v0_4 + ((float)v0_7 * ((-(w0_3 / 100.0f)) + 1.0f))));
    F0 = (1.0f);
    w0_4 = ((w0_4 - 60.0f));
    w0_3 = (-200.0f);
    if ((!(-200.0f > (*(float *)((v0_1 + 0xC)))))) goto L_8C079B7E;
    *(float *)((v0_1 + v0_6)) = w0_3;
    L_8C079B7E:;
    if ((((*(int *)((v0_3 + 0x54))) & 4) == 0)) goto L_8C079B88;
    v0_4 = (v0_2);
    L_8C079B88:;
    w0_3 = ((float)v0_4);
    if ((!((float)v0_4 > (*(float *)((v0_3 + 0x30)))))) goto L_8C079C04;
    if (((*(signed char *)((v0_1 + 0xB6))) != 0)) goto L_8C079C04;
    *(float *)((v0_1 + 0x4)) = (w0_3 - (*(float *)((v0_3 + 0x30))));
    if ((!((*(float *)((v0_1 + 0x4))) > (float)((*(short *)((v0_1 + 0x118))) + 0x14)))) goto L_8C079C10;
    *(float *)((v0_1 + 0x130)) = (*(float *)((v0_0 + 0xAE8)));
    *(float *)((v0_1 + 0x138)) = ((*(float *)((v0_0 + 0xB00))) * 0.100000001f);
    w0_4 = *(float *)((v0_1 + 0x138));
    w0_3 = (w0_4);
    if ((0.0f > w0_4)) goto L_8C079BDC;
    w0_3 = (w0_3);
    L_8C079BE0:;
    w0_2 = w0_2;
    w0_2 = w0_2 + w0_0 * (w0_3 / w0_1);
    cpuShotTargetSet(v0_0, (((*(float *)((v0_0 + 0xB00))) * (*(float *)((v0_1 + 0x130)))) / 54.8499985f), w0_2);
    v0_6 = (0x2);
    L_8C079C08:;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_6;
    *(float *)((v0_1 + 0x4)) = 0.0f;
    L_8C079C10:;
    *(unsigned int *)((v0_0 + 0xA24)) = 0x1;
    v0_6 = (0xA24);
    goto L_8C079C22;
    L_8C079BDC:;
    w0_3 = ((-w0_3));
    goto L_8C079BE0;
    L_8C079C04:;
    v0_6 = ((unsigned char)(*(signed char *)((v0_5 + 0xC))));
    goto L_8C079C08;
    L_8C079AEE:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3)) + 0x1));
    goto L_8C079AF8;
    L_8C079AAC:;
    w0_4 = ((-w0_3));
    goto L_8C079AB0;
    L_8C0799B0:;
    if ((!(w0_3 > (*(float *)(((int)stk + 40)))))) goto L_8C0799D0;
    if ((!((*(float *)(((int)stk + 28))) > w0_3))) goto L_8C0799D0;
    if ((!(w0_0 > (*(float *)(((int)stk + 48)))))) goto L_8C0799D0;
    if (((*(float *)(((int)stk + 36))) > w0_0)) goto L_8C0799F8;
    L_8C0799D0:;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 8) + 0x8);
    v0_8 = ((((int)stk + 4) + 0x24));
    v0_9 = ((((int)stk + 4) + 0x18));
    goto L_8C0799DE;
    L_8C079920:;
    w0_4 = ((-w0_4));
    goto L_8C079922;
    L_8C0798D8:;
    w0_4 = ((-w0_3));
    goto L_8C0798DC;
}


int FUN_8c081500(int a4, int a5)
{
    int stk[15];
    register int t0;
    register int t1;
    register float u2;
    register float u3;
    register int t24;
    register int t25;
    register float u6;
    register float u7;
    register int t15;
    register float u10;
    register float u11;
    register int t13;
    register float u19;
    register float u29;
    register float u30;
    register int t46;
    register float u33;
    register float u34;
    register int t42;
    register float u37;
    register float u38;
    register int t40;
    register float u50;
    register float u51;
    register int t89;
    register float u54;
    register float u55;
    register float u59;
    register float u64;
    register float u65;
    register float u69;
    register float u74;
    register int t77;
    register float u95;
    register float u96;
    register int t112;
    register float u99;
    register float u100;
    register int t108;
    register float u103;
    register float u104;
    register int t106;
    register float u116;
    register float u117;
    register int t158;
    register float u120;
    register float u121;
    register float u125;
    register float u130;
    register float u131;
    register float u135;
    register float u140;
    register int t143;
    register int t164;
    register int t165;
    register int t166;
    register int t167;
    register int t168;
    register int t169;
    register float u172;
    register int t173;
    register float u174;
    register float u175;
    register int t84;
    register int t79;
    register int t151;
    register int t146;
    register int t170;
    register int t171;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u2 = *(float *)((a4 + 0xB9C));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    t24 = 0x0;
    t25 = 0x1;
    if (10.0f > u3) {
    } else {
        u6 = *(float *)((a4 + 0xB9C));
        u7 = (-u6);
        if (!(0.0f > u6)) {
            u7 = u6;
        }
        t15 = 0x1;
        if (25.0f > u7) {
        } else {
            u10 = *(float *)((a4 + 0xB9C));
            u11 = (-u10);
            if (!(0.0f > u10)) {
                u11 = u10;
            }
            t13 = 0x3;
            if (40.0f > u11) {
                t13 = 0x2;
            }
            t15 = t13;
        }
        u19 = *(float *)((a4 + 0xB9C));
        t24 = t15;
        t25 = ((u19 > 0.0f) - (0.0f > u19));
    }
    u29 = *(float *)((a4 + 0xAF0));
    u30 = (-u29);
    if (!(0.0f > u29)) {
        u30 = u29;
    }
    t46 = 0x0;
    if (25.0f > u30) {
    } else {
        u33 = *(float *)((a4 + 0xAF0));
        u34 = (-u33);
        if (!(0.0f > u33)) {
            u34 = u33;
        }
        t42 = 0x1;
        if (50.0f > u34) {
        } else {
            u37 = *(float *)((a4 + 0xAF0));
            u38 = (-u37);
            if (!(0.0f > u37)) {
                u38 = u37;
            }
            t40 = 0x3;
            if (90.0f > u38) {
                t40 = 0x2;
            }
            t42 = t40;
        }
        t46 = t42;
    }
    u50 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u51 = (-u50);
    if (!(0.0f > u50)) {
        u51 = u50;
    }
    t89 = 0x0;
    if (10.0f > u51) {
    } else {
        u54 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u55 = (-u54);
        if (!(0.0f > u54)) {
            u55 = u54;
        }
        if (25.0f > u55) {
            u59 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t84 = (t25 * ((u59 > 0.0f) - (0.0f > u59)));
        } else {
            u64 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u65 = (-u64);
            if (!(0.0f > u64)) {
                u65 = u64;
            }
            if (40.0f > u65) {
                u69 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                t79 = ((t25 * ((u69 > 0.0f) - (0.0f > u69))) << 1);
            } else {
                u74 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                t77 = (u74 > 0.0f) - (0.0f > u74);
                t79 = (((t25 * t77) << 1) + (t25 * t77));
            }
            t84 = t79;
        }
        t89 = t84;
    }
    u95 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u96 = (-u95);
    if (!(0.0f > u95)) {
        u96 = u95;
    }
    t112 = 0x0;
    if (25.0f > u96) {
    } else {
        u99 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u100 = (-u99);
        if (!(0.0f > u99)) {
            u100 = u99;
        }
        t108 = 0x1;
        if (50.0f > u100) {
        } else {
            u103 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u104 = (-u103);
            if (!(0.0f > u103)) {
                u104 = u103;
            }
            t106 = 0x3;
            if (90.0f > u104) {
                t106 = 0x2;
            }
            t108 = t106;
        }
        t112 = t108;
    }
    u116 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u117 = (-u116);
    if (!(0.0f > u116)) {
        u117 = u116;
    }
    t158 = 0x0;
    if (0.200000003f > u117) {
    } else {
        u120 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        u121 = (-u120);
        if (!(0.0f > u120)) {
            u121 = u120;
        }
        if (0.5f > u121) {
            u125 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            t151 = (t25 * ((u125 > 0.0f) - (0.0f > u125)));
        } else {
            u130 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u131 = (-u130);
            if (!(0.0f > u130)) {
                u131 = u130;
            }
            if (0.800000012f > u131) {
                u135 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                t146 = ((t25 * ((u135 > 0.0f) - (0.0f > u135))) << 1);
            } else {
                u140 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                t143 = (u140 > 0.0f) - (0.0f > u140);
                t146 = (((t25 * t143) << 1) + (t25 * t143));
            }
            t151 = t146;
        }
        t158 = t151;
    }
    t164 = *(short *)(((((((((0x0 | ((t24 << 8) << 2)) | (t46 << 8)) | ((((t89 + 0x3) << 2) << 2) << 1)) | ((t112 << 2) << 1)) | (t158 + 0x3)) << 1) + 0x8CB80000) + 0x2));
    t165 = *(short *)(((((((((0x0 | ((t24 << 8) << 2)) | (t46 << 8)) | ((((t89 + 0x3) << 2) << 2) << 1)) | ((t112 << 2) << 1)) | (t158 + 0x3)) << 1) + 0x8CB80000) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = 0x8CB90000;
    t166 = 0x8C0818B4;
    t167 = ((unsigned short)t164 - (unsigned short)t165);
    t168 = (unsigned short)t165;
    t169 = ((((t89 + 0x3) << 2) << 2) << 1);
    for (;;) {
        if ((t167 == 0) || (t170 = *(int *)(((int)stk + 8)), t166 = t170, t171 = *(signed char *)((t168 + t166)), t169 = (unsigned char)t171, (t169 & 0xF) == 0)) {
            break;
        }
        t166 = 0xB00;
        u172 = *(float *)((a4 + t166));
        t173 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t173 + 0x1);
        u174 = ((((float)(((int)t169 >> 4) & 0x7) * 108.849998f) / 7.0f) + 10.0f);
        u175 = ((float)((t169 & 0xF) - 8) * (float)t25);
        t166 = (cpuAimPointSet(((t173 + 0x1) - 1), ((((int)t169 >> 7) << 1) + 0x1), (u175 * 5.87857151f), (u172 * u174)));
        t167 = (t167 - 1);
        t168 = (t168 + 0x1);
    }
    return (*(int *)(((int)stk + 4)));
}
