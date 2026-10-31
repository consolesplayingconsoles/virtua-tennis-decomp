/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int BupCheckCard(void);
int BupGetRequest(void);
int FUN_8c0eaf00(int, int, int);
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

int FUN_8c0e48d8(void)
{
    int stk[122];
    register int t55;
    register int t56;
    register int t60;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t82;
    register int t86;
    register int t88;
    register int t140;
    register int t143;
    register int t144;
    register float t147;
    register float t150;
    register float t152;
    register int t156;
    register float t161;
    register int t165;
    register float t170;
    register int t174;
    register float t210;
    register float t226;
    register float t242;
    register float t258;
    register int t270;
    register float t278;
    register float t317;
    register float u342;
    register int t346;
    register float u349;
    register int t350;
    register float u357;
    register float t360;
    register int t372;
    register float u374;
    register int t375;
    register int t386;
    register float t404;
    register float t438;
    register float u461;
    register int t466;
    register float u470;
    register int t471;
    register int t510;
    register int t521;
    register int t524;
    register int t525;
    register int t563;
    register int t526;
    register int t527;
    register int t528;
    int t529;
    register int t530;
    register int t598;
    register int t902;
    register int t622;
    register int t896;
    register int t627;
    register int t890;
    register int t634;
    register int t649;
    register int t645;
    register int t646;
    register int t663;
    register int t671;
    register int t683;
    register int t686;
    register int t687;
    register int t690;
    register int t689;
    register int t695;
    register int t698;
    register int t697;
    register int t713;
    register int t709;
    register int t736;
    register int t720;
    register int t731;
    register int t722;
    register int t726;
    register int t744;
    register int t749;
    register int t759;
    register int t756;
    register int t757;
    register int t772;
    register int t765;
    register int t780;
    register int t810;
    register int t793;
    register int t789;
    register int t790;
    register int t805;
    register int t834;
    register int t842;
    register int t838;
    register int t880;
    register int t854;
    register int t857;
    register float u77;
    register int t106;
    register int t113;
    register float u216;
    register float u232;
    register float u248;
    register float u264;
    register int t273;
    register float u284;
    register float u323;
    register float u366;
    register float u410;
    register float u444;
    register int t511;
    register int t512;
    register int t513;
    register int t913;
    register int t545;
    register int t585;
    register int t594;
    register int t605;
    register int t609;
    register int t610;
    register int t908;
    register int t885;
    register int t825;
    register int t644;
    register int t820;
    register int t703;
    register int t684;
    register int t693;
    register int t710;
    register int t815;
    register int t755;
    register int t769;
    register int t788;
    register int t803;
    register int t847;
    register int t875;
    register int t869;
    register int t863;

    { struct mv12 { int w[12]; }; *(struct mv12 *)((0x16C + ((int)stk + 28))) = *(struct mv12 *)(0x8C126F04); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((0x13C + ((int)stk + 28))) = *(struct mv12 *)(0x8C126F34); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((0x10C + ((int)stk + 28))) = *(struct mv12 *)(0x8C126F64); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((0xDC + ((int)stk + 28))) = *(struct mv12 *)(0x8C126F94); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xCC + ((int)stk + 28))) = *(struct mv4 *)(0x8C126FC4); }
    *(unsigned int *)(((int)stk + 120)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x0;
    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C287ACC = 0x0;
        entryInit();
        *(unsigned int *)0x8C29BBBC = 0x0;
        *(unsigned int *)0x8C1D864C = 0x0;
        *(unsigned int *)0x8C421F60 = 0x0;
        *(unsigned int *)0x8C38BA78 = 0x1;
        *(unsigned int *)0x8C38BA74 = 0x1;
        *(unsigned int *)0x8C38BA70 = 0x1;
        *(unsigned int *)0x8C1D8640 = 0x0;
        *(unsigned int *)0x8C1D8644 = 0x1A;
        menuSprInitGroup();
        camInit();
        nlInitEvent();
        FUN_8c0eaf00(0x0, 0x0, 0x0);
        strmBgmPlay(0x2);
        *(unsigned int *)0x8C42202C = 0x63;
        *(unsigned int *)0x8C422030 = 0x63;
        *(unsigned int *)0x8C422020 = 0x0;
        *(unsigned int *)0x8C422024 = 0x0;
        *(unsigned int *)0x8C422028 = 0x0;
        fadeGameInit();
        *(unsigned int *)0x8C422034 = 0xFFFFFF9D;
        *(unsigned int *)0x8C422038 = 0x1;
        *(unsigned int *)0x8C421F6C = 0x0;
        *(unsigned int *)0x8C422040 = 0x0;
        resCautionReset(0x0);
    }
    lightSet(0x0, 0x0, 0x46, 0x64);
    lightUpdate(0x0);
    *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, 0.0f, 47.0f);
    camSetTarget();
    *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, 0.0f, 0.0f);
    camSetEye();
    camMoveBegin(1.0f, 1.0f);
    *(float *)0x8C287A04 = 7.0f;
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    *(unsigned int *)0x8C422034 = (BupCheckCard());
    if ((*(int *)0x8C421F64) != 3) {
        if ((*(int *)0x8C421F64) == 4) {
            if ((int)(*(int *)0x8C422034) < 0) {
                *(unsigned int *)0x8C421F64 = 0x2;
            }
        }
    } else {
        if ((int)(*(int *)0x8C422034) < 0) {
            *(unsigned int *)0x8C421F64 = 0x2;
        }
    }
    if ((*(int *)0x8C422040) != 0) {
        fadeCaptureBegin();
        *(unsigned int *)0x8C422040 = 0x2;
        *(float *)0x8C287D64 = 0.0199999996f;
    }
    if ((int)(*(int *)0x8C1D8640) >= (int)0xE0F) {
    } else {
        { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 28) + 0x78)) = *(struct mv6 *)(0x8C126FD4); }
        screenQuadPut((((int)stk + 28) + 0x78), 460.0f);
        *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, 0.0f, 85.0f);
        winDrawA(0x78, 0x0, 370.0f, 1.0f, 1.0f);
        winDrawFilled(1.0f, 85.0f);
        logoWaveDraw(80.0f);
        uiScanlinesPut(75.0f);
        *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, 0.0f, 70.0f);
        winDrawA(0x78, 0x0, 370.0f, 1.0f, 0.5f);
        winDrawFilled(0.5f, 70.0f);
        t55 = *(int *)0x8C421F74;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((t55 << 1) + t55) << 2) + (0xE8 + ((int)stk + 16)))); }
        t56 = *(int *)0x8C421F74;
        t60 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)((((((t56 << 1) + t56) << 2) + (0x124 + ((int)stk + 4))) + 0x0))), (*(int *)((((((t56 << 1) + t56) << 2) + (0x124 + ((int)stk + 4))) + 0x4))), 0xFFFFFF, *(Stk3 *)(((int)stk + 4)), 0.400000006f, ((float)(*(int *)((((((t56 << 1) + t56) << 2) + (0x124 + ((int)stk + 4))) + 0x8))) / 64.0f), 1.0f);
        *(Stk3 *)(((int)stk + 16)) = vecMake(100.0f, 35.0f, 0.100000001f);
        sprPutAt(0x8C37E20C, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
        *(Stk3 *)(((int)stk + 16)) = vecMake(228.0f, 35.0f, 0.100000001f);
        sprPutAt(0x8C37E25C, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
        *(Stk3 *)(((int)stk + 16)) = vecMake(356.0f, 35.0f, 0.100000001f);
        sprPutAt(0x8C37E2AC, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
        nlPushMatrix(0x0);
        nlTranslate(-2.94000006f, 2.04999995f, 4.0f);
        nlRotateAY((-((*(int *)0x8C20D15C) << 8)));
        nlScale(0.109999999f, 0.109999999f, 0.109999999f);
        nlLineSetDiv(0.109999999f);
        nlObjPut(0xC55AA78);
        nlPopMatrix(0x1);
        *(Stk3 *)(((int)stk + 16)) = vecMake(20.0f, 20.0f, 43.0f);
        t72 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9054, 0x1, 0xFFC8C800, 1.0f, 1.0f, 1.0f);
        t73 = *(int *)0x8C1D8644;
        if ((int)t73 > (int)0x10) {
            t74 = t72;
            t75 = t73;
            t76 = 0x0;
            for (;;) {
                if ((unsigned int)t76 >= (unsigned int)0x30) {
                    break;
                }
                t75 = 0x8C0F0700;
                *(unsigned int *)(((int)stk + 56)) = ((0x16C + ((int)stk + 28)) + t76);
                t74 = (nlSubVector3op((0x90 + ((int)stk + 28)), ((0x13C + ((int)stk + 28)) + t76), ((0x16C + ((int)stk + 28)) + t76)));
                t74 = 0x8C0E4EC0;
                t75 = (*(int *)0x8C1D8644);
                u77 = (float)(0x1A - t75);
                t74 = (nlScaleVector((0x90 + ((int)stk + 28)), (0x90 + ((int)stk + 28)), (u77 / (*(float *)((t74 + 0x0))))));
                t75 = 0x8C0F0540;
                t82 = *(int *)(((int)stk + 56));
                *(unsigned int *)(((int)stk + 28)) = ((0x9C + ((int)stk + 28)) + t76);
                t74 = (nlAddVector3op(((0x9C + ((int)stk + 28)) + t76), t82, (0x90 + ((int)stk + 28))));
                t74 = 0x8C0E4ECC;
                t75 = 0x8C42203C;
                u77 = (*(float *)((t74 + 0x0)));
                t74 = 0x8;
                t76 = (t76 + 0xC);
                *(float *)(((*(int *)(((int)stk + 28))) + t74)) = u77;
                *(float *)((t75 + 0x0)) = 0.0f;
            }
        } else {
            t86 = 0x8C1D8644;
            t88 = 0x0;
            for (;;) {
                if ((unsigned int)t88 >= (unsigned int)0x30) {
                    break;
                }
                t86 = 0x9C;
                t86 = (t86 + ((int)stk + 28));
                t86 = (t86 + t88);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t86) = *(struct mv3 *)(((0x13C + ((int)stk + 28)) + t88)); }
                t88 = (t88 + 0xC);
            }
            if ((int)(*(int *)0x8C1D8644) > (int)0xB) {
                *(unsigned int *)0x8C1D8650 = 0x0;
                *(float *)0x8C42203C = ((float)(0x10 - (*(int *)0x8C1D8644)) / 5.0f);
            } else {
                if (((int)(*(int *)0x8C1D8644) > (int)0x3) && (t106 = *(int *)0x8C1D8644, (int)t106 <= (int)0xB)) {
                    *(unsigned int *)0x8C1D8650 = ((*(int *)0x8C1D8650) + 0x800);
                    *(float *)0x8C42203C = 1.0f;
                } else {
                    if (((int)(*(int *)0x8C1D8644) <= (int)0x3) && (t113 = *(int *)0x8C1D8644, (int)t113 > 0)) {
                        *(unsigned int *)0x8C1D8650 = 0x4000;
                        *(float *)0x8C42203C = ((float)(*(int *)0x8C1D8644) / 3.0f);
                    } else {
                        *(unsigned int *)0x8C1D8650 = 0x0;
                        *(float *)0x8C42203C = 0.0f;
                    }
                }
            }
        }
        t140 = *(int *)0x8C422024;
        if (t140 == 0) {
            *(Stk3 *)(((int)stk + 16)) = vecMake(4.0f, 225.0f, 1.5f);
            t143 = ((int (*)(int, int, int, float, float, float))(sprListPut))((*(int *)(((((*(int *)0x8C421F74) << 2) + (0xD8 + ((int)stk + 16))) + 0x0))), 0x1, 0x8D8D, 1.0f, 1.0f, 1.0f);
        } else {
            if (t140 == 1) {
                t144 = *(int *)0x8C421F74;
                *(unsigned int *)(((int)stk + 28)) = (t144 + 0x1);
                if ((int)(t144 + 0x1) >= (int)0x4) {
                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                }
                *(Stk3 *)(((int)stk + 16)) = vecMake(4.0f, 225.0f, 1.5f);
                *(int *)((int)stk + 12) = 0x8D8D;
                t147 = ((float (*)(int))(nlSin))((0x4000 - (*(int *)0x8C422028)));
                t150 = sprListPutScaleY((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + (0xDC + ((int)stk + 12))) + 0x0))), 0x1, 0x8D8D, 1.0f, t147, 1.0f);
                *(float *)(((int)stk + 80)) = t150;
                *(Stk3 *)(((int)stk + 16)) = vecMake(4.0f, t150, 1.5f);
                *(int *)((int)stk + 12) = 0x8D8D;
                t152 = ((float (*)(int))(nlSin))((*(int *)0x8C422028));
                sprListPutScaleY((*(int *)(((((*(int *)0x8C421F74) << 2) + (0xDC + ((int)stk + 12))) + 0x0))), 0x1, 0x8D8D, 1.0f, t152, 1.0f);
                t156 = *(int *)0x8C422028;
                *(unsigned int *)0x8C422028 = (t156 + 0x400);
                if ((int)(t156 + 0x400) < (int)0x4000) {
                } else {
                    *(unsigned int *)0x8C422028 = 0x0;
                    *(unsigned int *)0x8C422024 = 0x0;
                }
            } else {
                if (t140 == 2) {
                    *(Stk3 *)(((int)stk + 16)) = vecMake(4.0f, 225.0f, 1.5f);
                    *(int *)((int)stk + 12) = 0x8D8D;
                    t161 = ((float (*)(int))(nlSin))((*(int *)0x8C422028));
                    *(float *)(((int)stk + 104)) = (sprListPutScaleY((*(int *)(((((*(int *)0x8C421F74) << 2) + (0xDC + ((int)stk + 12))) + 0x0))), 0x1, 0x8D8D, 1.0f, t161, 1.0f));
                    t165 = *(int *)0x8C421F74;
                    *(unsigned int *)(((int)stk + 28)) = (t165 - 1);
                    if ((int)(t165 - 1) < 0) {
                        *(unsigned int *)(((int)stk + 28)) = 0x3;
                    }
                    *(Stk3 *)(((int)stk + 16)) = vecMake(4.0f, (*(float *)(((int)stk + 104))), 1.5f);
                    *(int *)((int)stk + 12) = 0x8D8D;
                    t170 = ((float (*)(int))(nlSin))((0x4000 - (*(int *)0x8C422028)));
                    sprListPutScaleY((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + (0xDC + ((int)stk + 12))) + 0x0))), 0x1, 0x8D8D, 1.0f, t170, 1.0f);
                    t174 = *(int *)0x8C422028;
                    *(unsigned int *)0x8C422028 = (t174 + 0x400);
                    if ((int)(t174 + 0x400) >= (int)0x4000) {
                        *(unsigned int *)0x8C422028 = 0x0;
                        *(unsigned int *)0x8C422024 = 0x0;
                    }
                }
            }
        }
        if ((int)(*(int *)0x8C1D8644) > 0) {
            *(unsigned int *)0x8C1D8644 = ((*(int *)0x8C1D8644) - 1);
        }
        if ((*(int *)0x8C421F74) == 0) {
            *(float *)(((int)stk + 100)) = 1.0f;
            *(unsigned int *)(((int)stk + 28)) = 0x2;
        } else {
            *(float *)(((int)stk + 100)) = 0.400000006f;
            *(unsigned int *)(((int)stk + 28)) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x9C + ((int)stk + 28))); }
        t210 = ((float (*)(int, Stk3))(nlSin))((*(int *)0x8C1D8650), *(Stk3 *)(((int)stk + 16)));
        if (!(0.0f > t210)) {
            u216 = (((float (*)(int))(nlSin))((*(int *)0x8C1D8650)));
        } else {
            u216 = (-(((float (*)(int))(nlSin))((*(int *)0x8C1D8650))));
        }
        sprListPutEx(0x8C1D879C, 0x1, (*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), u216, (*(float *)(((int)stk + 100))), (*(float *)0x8C42203C));
        if ((*(int *)0x8C421F74) == 1) {
            *(float *)(((int)stk + 96)) = 1.0f;
            *(unsigned int *)(((int)stk + 28)) = 0x2;
        } else {
            *(float *)(((int)stk + 96)) = 0.400000006f;
            *(unsigned int *)(((int)stk + 28)) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xA8 + ((int)stk + 28))); }
        t226 = ((float (*)(int, Stk3))(nlSin))((*(int *)0x8C1D8650), *(Stk3 *)(((int)stk + 16)));
        if (!(0.0f > t226)) {
            u232 = (((float (*)(int))(nlSin))((*(int *)0x8C1D8650)));
        } else {
            u232 = (-(((float (*)(int))(nlSin))((*(int *)0x8C1D8650))));
        }
        sprListPutEx(0x8C1D8838, 0x2, (*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), u232, (*(float *)(((int)stk + 96))), (*(float *)0x8C42203C));
        if ((*(int *)0x8C421F74) == 2) {
            *(float *)(((int)stk + 92)) = 1.0f;
            *(unsigned int *)(((int)stk + 28)) = 0x2;
        } else {
            *(float *)(((int)stk + 92)) = 0.400000006f;
            *(unsigned int *)(((int)stk + 28)) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB4 + ((int)stk + 28))); }
        t242 = ((float (*)(int, Stk3))(nlSin))((*(int *)0x8C1D8650), *(Stk3 *)(((int)stk + 16)));
        if (!(0.0f > t242)) {
            u248 = (((float (*)(int))(nlSin))((*(int *)0x8C1D8650)));
        } else {
            u248 = (-(((float (*)(int))(nlSin))((*(int *)0x8C1D8650))));
        }
        sprListPutEx(0x8C1D8970, 0x2, (*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), u248, (*(float *)(((int)stk + 92))), (*(float *)0x8C42203C));
        if ((*(int *)0x8C421F74) == 3) {
            *(float *)(((int)stk + 88)) = 1.0f;
            *(unsigned int *)(((int)stk + 28)) = 0x2;
        } else {
            *(float *)(((int)stk + 88)) = 0.400000006f;
            *(unsigned int *)(((int)stk + 28)) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC0 + ((int)stk + 28))); }
        t258 = ((float (*)(int, Stk3))(nlSin))((*(int *)0x8C1D8650), *(Stk3 *)(((int)stk + 16)));
        if (!(0.0f > t258)) {
            u264 = (((float (*)(int))(nlSin))((*(int *)0x8C1D8650)));
        } else {
            u264 = (-(((float (*)(int))(nlSin))((*(int *)0x8C1D8650))));
        }
        sprListPutEx(0x8C1D8AA8, 0x1, (*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), u264, (*(float *)(((int)stk + 88))), (*(float *)0x8C42203C));
        t270 = *(int *)0x8C421F64;
        if (t270 != 1) {
            if (t270 != 2) {
                if (((*(int *)0x8C421F64) != 3) && (t273 = *(int *)0x8C421F64, t273 != 4)) {
                } else {
                    if ((*(int *)0x8C421F6C) == 0) {
                        t278 = nlCos((*(int *)0x8C1D8654));
                        if (!(0.0f > t278)) {
                            u284 = (nlCos((*(int *)0x8C1D8654)));
                        } else {
                            u284 = (-(nlCos((*(int *)0x8C1D8654))));
                        }
                        *(float *)(((int)stk + 72)) = u284;
                        if (!(u284 > 0.200000003f)) {
                            *(float *)(((int)stk + 72)) = 0.200000003f;
                        }
                    } else {
                        *(float *)(((int)stk + 72)) = 0.0f;
                    }
                    if ((*(int *)0x8C1D8648) != 0) {
                        *(float *)(((int)stk + 32)) = (640.0f - (((float)(0x5 - (*(int *)0x8C1D8648)) * 240.0f) / 5.0f));
                    } else {
                        *(float *)(((int)stk + 32)) = 400.0f;
                    }
                    if ((*(int *)0x8C421F64) == 3) {
                        *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 32))), 276.0f, 1.5f);
                        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 16), (*(float *)(((int)stk + 72))), 102.0f, 1.0f);
                    }
                    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 32))), 276.0f, (1.0f + 1.0f));
                    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 102.0f, (1.0f - ((float)(*(int *)0x8C421F6C) * 0.600000024f)));
                    if ((*(int *)0x8C421F6C) == 1) {
                        t317 = nlCos((*(int *)0x8C1D8654));
                        if (!(0.0f > t317)) {
                            u323 = (nlCos((*(int *)0x8C1D8654)));
                        } else {
                            u323 = (-(nlCos((*(int *)0x8C1D8654))));
                        }
                        *(float *)(((int)stk + 64)) = u323;
                        if (!(u323 > 0.200000003f)) {
                            *(float *)(((int)stk + 64)) = 0.200000003f;
                        }
                    } else {
                        *(float *)(((int)stk + 64)) = 0.0f;
                    }
                    if ((*(int *)0x8C421F64) == 3) {
                        *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 32))), 309.0f, 1.5f);
                        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 16), (*(float *)(((int)stk + 64))), 102.0f, 1.0f);
                    }
                    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 32))), 309.0f, (1.0f + 1.0f));
                    u342 = 0.400000006f;
                    u342 = u342 + 0.600000024f * (float)(*(int *)0x8C421F6C);
                    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 102.0f, u342);
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 32))) + 30.0f), 281.0f, 1.0f);
                    t346 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D8EA4, 0x2, 0x0, 1.0f, 1.0f, (1.0f - ((float)(*(int *)0x8C421F6C) * 0.600000024f)));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 32))) + 20.0f), 314.0f, 1.0f);
                    u349 = 0.400000006f;
                    u349 = u349 + 0.600000024f * (float)(*(int *)0x8C421F6C);
                    t350 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D8F7C, 0x2, 0x0, 1.0f, 1.0f, u349);
                    if ((*(int *)0x8C421F64) != 4) {
                    } else {
                        *(int *)((int)stk + 24) = (((int)stk + 28) + 0x60);
                        *(Stk3 *)((((int)stk + 28) + 0x60)) = vecMake(50.0f, 175.0f, 0.899999976f);
                        *(int *)((int)stk + 20) = (((int)stk + 24) + 0x70);
                        *(Stk3 *)((((int)stk + 24) + 0x70)) = vecMake(50.0f, 360.0f, 0.899999976f);
                        *(int *)((int)stk + 16) = (0x80 + ((int)stk + 20));
                        *(Stk3 *)((0x80 + ((int)stk + 20))) = vecMake(570.0f, 175.0f, 0.899999976f);
                        *(int *)((int)stk + 12) = (0x90 + ((int)stk + 16));
                        *(Stk3 *)((0x90 + ((int)stk + 16))) = vecMake(570.0f, 360.0f, 0.899999976f);
                        msgWinFramePut((((int)stk + 28) + 0x60), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                        if ((int)(*(int *)0x8C38BA50) < (int)0xF) {
                        } else {
                            *(Stk3 *)(((int)stk + 16)) = vecMake(175.0f, 310.0f, 0.5f);
                            cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 70.0f, (1.0f - ((float)(*(int *)0x8C422038) * 0.600000024f)));
                            *(Stk3 *)(((int)stk + 16)) = vecMake(355.0f, 310.0f, 0.5f);
                            u357 = 0.400000006f;
                            u357 = u357 + 0.600000024f * (float)(*(int *)0x8C422038);
                            cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 70.0f, u357);
                            t360 = nlCos((*(int *)0x8C1D8654));
                            if (!(0.0f > t360)) {
                                u366 = (nlCos((*(int *)0x8C1D8654)));
                            } else {
                                u366 = (-(nlCos((*(int *)0x8C1D8654))));
                            }
                            *(float *)(((int)stk + 84)) = u366;
                            *(Stk3 *)(((int)stk + 16)) = vecMake((float)(((*(int *)0x8C422038) * 0xB4) + 0xAF), 310.0f, 0.5f);
                            cursorBoxPut(0x1, *(Stk3 *)((int)stk + 16), (*(float *)(((int)stk + 84))), 70.0f, 1.0f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(205.0f, 315.0f, 0.100000001f);
                            t372 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D92DC, 0x1, 0x0, 1.0f, 1.0f, (1.0f - ((float)(*(int *)0x8C422038) * 0.600000024f)));
                            *(Stk3 *)(((int)stk + 16)) = vecMake(373.0f, 315.0f, 0.100000001f);
                            u374 = 0.400000006f;
                            u374 = u374 + 0.600000024f * (float)(*(int *)0x8C422038);
                            t375 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9348, 0x2, 0x0, 1.0f, 1.0f, u374);
                        }
                        *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 215.0f, 0.00999999978f);
                        msgWinPut(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                        *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 275.0f, 0.00999999978f);
                        msgWinPut(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                    }
                }
            } else {
                *(unsigned int *)(((int)stk + 28)) = (((int)stk + 28) + 0x60);
                t386 = *(int *)0x8C422034;
                if (t386 == -2) {
                    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x60);
                    *(Stk3 *)((((int)stk + 28) + 0x60)) = vecMake(40.0f, 165.0f, 0.0500000007f);
                    *(int *)((int)stk + 20) = (0xC + (((int)stk + 28) + 0x60));
                    *(Stk3 *)((0xC + (((int)stk + 28) + 0x60))) = vecMake(40.0f, 370.0f, 0.0500000007f);
                    *(int *)((int)stk + 16) = (0x18 + (((int)stk + 28) + 0x60));
                    *(Stk3 *)((0x18 + (((int)stk + 28) + 0x60))) = vecMake(600.0f, 165.0f, 0.0500000007f);
                    *(int *)((int)stk + 12) = (0x24 + (((int)stk + 28) + 0x60));
                    *(Stk3 *)((0x24 + (((int)stk + 28) + 0x60))) = vecMake(600.0f, 370.0f, 0.0500000007f);
                    msgWinFramePut((((int)stk + 28) + 0x60), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 200.0f, 0.00999999978f);
                    msgWinPut(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 250.0f, 0.00999999978f);
                    msgWinPut(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(320.0f, 320.0f, 0.00999999978f);
                    msgWinPut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                } else {
                    if (t386 == -4) {
                        *(int *)((int)stk + 24) = (((int)stk + 28) + 0x60);
                        *(Stk3 *)((((int)stk + 28) + 0x60)) = vecMake(50.0f, 170.0f, 0.0500000007f);
                        *(int *)((int)stk + 20) = (0xC + (((int)stk + 28) + 0x60));
                        *(Stk3 *)((0xC + (((int)stk + 28) + 0x60))) = vecMake(50.0f, 340.0f, 0.0500000007f);
                        *(int *)((int)stk + 16) = (0x18 + (((int)stk + 28) + 0x60));
                        *(Stk3 *)((0x18 + (((int)stk + 28) + 0x60))) = vecMake(570.0f, 170.0f, 0.0500000007f);
                        *(int *)((int)stk + 12) = (0x24 + (((int)stk + 28) + 0x60));
                        *(Stk3 *)((0x24 + (((int)stk + 28) + 0x60))) = vecMake(570.0f, 340.0f, 0.0500000007f);
                        msgWinFramePut((((int)stk + 28) + 0x60), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                        *(Stk3 *)(((int)stk + 16)) = vecMake(330.0f, 220.0f, 0.00999999978f);
                        msgWinPut(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                        *(Stk3 *)(((int)stk + 16)) = vecMake(330.0f, 280.0f, 0.00999999978f);
                        msgWinPut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
                    } else {
                        resCautionReset(0x0);
                    }
                }
            }
        } else {
            if ((*(int *)0x8C421F68) == 0) {
                t404 = nlCos((*(int *)0x8C1D8654));
                if (!(0.0f > t404)) {
                    u410 = (nlCos((*(int *)0x8C1D8654)));
                } else {
                    u410 = (-(nlCos((*(int *)0x8C1D8654))));
                }
                *(float *)(((int)stk + 68)) = u410;
                if (!(u410 > 0.200000003f)) {
                    *(float *)(((int)stk + 68)) = 0.200000003f;
                }
            } else {
                *(float *)(((int)stk + 68)) = 0.0f;
            }
            if ((*(int *)0x8C1D8648) != 0) {
                *(float *)(((int)stk + 36)) = (640.0f - (((float)(0x5 - (*(int *)0x8C1D8648)) * 240.0f) / 5.0f));
            } else {
                *(float *)(((int)stk + 36)) = 400.0f;
            }
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 36))), ((float)((*(int *)0x8C421F74) * 0x53) + 98.0f), 1.5f);
            cursorBoxPut(0x1, *(Stk3 *)((int)stk + 16), (*(float *)(((int)stk + 68))), 102.0f, 1.0f);
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 36))), ((float)((*(int *)0x8C421F74) * 0x53) + 98.0f), (1.0f + 1.0f));
            cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 102.0f, (1.0f - ((float)(*(int *)0x8C421F68) * 0.600000024f)));
            if ((*(int *)0x8C421F68) == 1) {
                t438 = nlCos((*(int *)0x8C1D8654));
                if (!(0.0f > t438)) {
                    u444 = (nlCos((*(int *)0x8C1D8654)));
                } else {
                    u444 = (-(nlCos((*(int *)0x8C1D8654))));
                }
                *(float *)(((int)stk + 60)) = u444;
                if (!(u444 > 0.200000003f)) {
                    *(float *)(((int)stk + 60)) = 0.200000003f;
                }
            } else {
                *(float *)(((int)stk + 60)) = 0.0f;
            }
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 36))), ((float)((*(int *)0x8C421F74) * 0x53) + 130.0f), 1.5f);
            cursorBoxPut(0x1, *(Stk3 *)((int)stk + 16), (*(float *)(((int)stk + 60))), 102.0f, 1.0f);
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)(((int)stk + 36))), ((float)((*(int *)0x8C421F74) * 0x53) + 130.0f), (1.0f + 1.0f));
            u461 = 0.400000006f;
            u461 = u461 + 0.600000024f * (float)(*(int *)0x8C421F68);
            cursorBoxPut(0x0, *(Stk3 *)((int)stk + 16), 1.0f, 102.0f, u461);
            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 36))) + 39.0f), ((float)((*(int *)0x8C421F74) * 0x53) + 103.0f), 1.0f);
            t466 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D8DCC, 0x1, 0x0, 1.0f, 1.0f, (1.0f - ((float)(*(int *)0x8C421F68) * 0.600000024f)));
            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 36))) + 33.0f), ((float)((*(int *)0x8C421F74) * 0x53) + 135.0f), 1.0f);
            u470 = 0.400000006f;
            u470 = u470 + 0.600000024f * (float)(*(int *)0x8C421F68);
            t471 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D8E38, 0x1, 0x0, 1.0f, 1.0f, u470);
        }
        if ((*(int *)0x8C1D8648) == 0) {
            *(unsigned int *)0x8C1D8654 = ((*(int *)0x8C1D8654) + 0x200);
        } else {
            *(unsigned int *)0x8C1D8654 = 0x0;
            *(unsigned int *)0x8C1D8648 = ((*(int *)0x8C1D8648) - 1);
        }
    }
    if ((*(int *)0x8C422040) == 2) {
        fadeCaptureEnd(0x0);
        if ((*(int *)0x8C421F68) == 0) {
            *(float *)0x8C1D1360 = 1.0f;
            *(float *)0x8C1D1364 = 0.0199999996f;
        }
    }
    if ((*(int *)0x8C422020) != -1) {
        *(unsigned int *)0x8C422020 = (motFileLoadStep());
    }
    t510 = *(int *)0x8C42202C;
    if ((t510 != 99) && ((t511 = *(int *)0x8C422030, t511 != 99) && ((t512 = *(int *)0x8C422020, t512 == -1) && (t513 = *(int *)0x8C422040, t513 != 0)))) {
        if (t510 != 6) {
            fadeReset();
        } else {
            fadeStart(0x3C);
        }
        *(unsigned int *)0x8C20D14C = (*(int *)0x8C42202C);
        *(unsigned int *)0x8C20D150 = (*(int *)0x8C422030);
        *(unsigned int *)0x8C20D15C = 0x0;
        resCautionFreeAll();
        *(unsigned int *)0x8C422040 = 0x0;
        *(unsigned int *)0x8C422030 = 0x63;
        *(unsigned int *)0x8C42202C = 0x63;
        t521 = *(int *)0x8C421F64;
        if (t521 != 4) {
        } else {
            *(unsigned int *)0x8C421F64 = 0x3;
        }
        t913 = t521;
    } else {
        t524 = *(int *)0x8C20D15C;
        *(unsigned int *)0x8C20D15C = (t524 + 0x1);
        t525 = *(int *)0x8C1D8640;
        t563 = t510;
        if ((int)t525 <= (int)0xDF2) {
            t526 = 0x8C1D8640;
            t527 = t525;
            t528 = (t524 + 0x1);
            t529 = t510;
            t530 = 0x0;
            for (;;) {
                if ((int)t530 >= (int)0x4) {
                    break;
                }
                t529 = t530;
                t526 = (padDirRepeat(t529, 0x10));
                if (t526 != 0) {
                    *(unsigned int *)(((int)stk + 48)) = 0x1;
                }
                t529 = t530;
                t526 = (padDirRepeat(t529, 0x20));
                if (t526 != 0) {
                    *(unsigned int *)(((int)stk + 44)) = 0x1;
                }
                t529 = t530;
                t526 = (padDirRepeat(t529, 0x40));
                if (t526 != 0) {
                    t526 = 0x50;
                    *(unsigned int *)((((int)stk + 28) + t526)) = 0x1;
                }
                t529 = t530;
                t526 = (padDirRepeat(t529, 0x80));
                t529 = t530;
                if (t526 != 0) {
                    t526 = 0x54;
                    *(unsigned int *)((((int)stk + 28) + t526)) = 0x1;
                }
                t526 = 0x8C29B898;
                t529 = (t529 << 2);
                t529 = (*(int *)((t529 + t526)));
                *(unsigned int *)(((int)stk + 52)) = t529;
                t529 = (*(int *)((t529 + 0x10)));
                if (((0x5 & t529) == 0) && (t527 = 0x8, (t527 & t529) == 0)) {
                    t545 = t527;
                } else {
                    *(unsigned int *)(((int)stk + 40)) = 0x1;
                    *(unsigned int *)0x8C421F70 = t530;
                }
                t527 = t545;
                t529 = t530;
                t529 = (t529 << 2);
                t529 = (t529 + 0x8C29B898);
                t526 = (*(int *)((t529 + 0x0)));
                t526 = (*(int *)((t526 + 0x10)));
                if ((t526 & 2) != 0) {
                    *(unsigned int *)(((int)stk + 76)) = 0x1;
                }
                t526 = (*(int *)((t529 + 0x0)));
                t526 = (*(int *)((t526 + 0x10)));
                t528 = t530;
                if ((t526 & 8) != 0) {
                    t526 = 0x58;
                    *(unsigned int *)((((int)stk + 28) + t526)) = 0x1;
                    *(unsigned int *)0x8C421F70 = t530;
                }
                t526 = 0x8C29B898;
                t528 = (t528 << 2);
                t527 = (*(int *)(((*(int *)((t528 + t526))) + 0x8)));
                t530 = (t530 + 0x1);
                if (t527 != 0) {
                    t526 = 0x5C;
                    *(unsigned int *)((((int)stk + 28) + t526)) = 0x1;
                }
            }
            t563 = t529;
        }
        if ((*(int *)(((int)stk + 120))) == 0) {
            *(unsigned int *)0x8C1D8640 = ((*(int *)0x8C1D8640) + 0x1);
        } else {
            if ((int)(*(int *)0x8C1D8640) < (int)0xDF2) {
                *(unsigned int *)0x8C1D8640 = 0x0;
            }
        }
        if ((*(int *)0x8C1D8640) == 0xDF2) {
            *(unsigned int *)0x8C421F64 = 0x0;
            fadeScreenStart(0x3, 0x0, 0x1F, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
            fileLoadClose();
            fileLoadStart(0x8CA80000, 0x8C126EE8, 0x0);
            strmBgmFadeOut(0x2, 0x0);
            *(unsigned int *)0x8C422040 = 0x1;
        } else {
            t585 = t563;
        }
        if ((*(int *)0x8C1D8640) == 0xE10) {
            FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
        } else {
            t594 = t585;
        }
        if ((int)(*(int *)0x8C1D8640) > (int)0xDF2) {
            t598 = fileLoadPoll(t594);
            if (t598 == 1) {
                *(unsigned int *)0x8C1D864C = 0x1;
            }
        } else {
            t605 = t594;
        }
        if (((int)(*(int *)0x8C1D8640) > (int)0xE10) && ((t609 = *(int *)0x8C1D864C, t609 != 0) && (t610 = *(int *)0x8C422040, t610 == 2))) {
            sprStartFree();
            stageTexSetGarbagedAll();
            titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16));
            *(unsigned int *)0x8C20D14C = 0x0;
            *(unsigned int *)0x8C20D150 = 0x2;
            *(unsigned int *)0x8C421F60 = 0x1;
            *(unsigned int *)0x8C20D15C = 0x0;
            *(unsigned int *)0x8C287C50 = 0x0;
            t908 = 0x8C421F60;
        } else {
            nlExecuteEvent(t605);
            nlExecuteEvent2();
            t902 = 0x8C1D8640;
            if ((int)(*(int *)0x8C1D8640) >= (int)0xDF2) {
            } else {
                t622 = *(int *)0x8C42202C;
                t896 = t622;
                if (t622 != 99) {
                } else {
                    t627 = *(int *)0x8C422030;
                    t890 = t627;
                    if (t627 != 99) {
                    } else {
                        if ((*(int *)0x8C421F64) != 0) {
                            t634 = *(int *)0x8C421F64;
                            if (t634 == 1) {
                                t649 = t634;
                                if (((*(int *)(((int)stk + 48))) == 0) && (t644 = *(int *)(((int)stk + 44)), t644 == 0)) {
                                } else {
                                    t645 = sndSeCursor();
                                    t646 = *(int *)0x8C421F68;
                                    *(unsigned int *)0x8C421F68 = (t646 + 0x1);
                                    if ((int)(t646 + 0x1) > (int)0x1) {
                                        *(unsigned int *)0x8C421F68 = 0x0;
                                    }
                                    t649 = t645;
                                }
                                t663 = t649;
                                if ((*(int *)(((int)stk + 40))) == 0) {
                                } else {
                                    sndSeDecide();
                                    if ((*(int *)0x8C421F68) == 0) {
                                        *(unsigned int *)0x8C287ADC = 0x2;
                                    } else {
                                        *(unsigned int *)0x8C287ADC = 0x4;
                                    }
                                    *(volatile int *)0x8C287D5C;
                                    *(unsigned int *)0x8C42202C = 0x1;
                                    *(unsigned int *)0x8C422030 = 0x0;
                                    *(unsigned int *)0x8C422040 = 0x1;
                                    t663 = (entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12)));
                                }
                                t671 = t663;
                                if ((*(int *)(((int)stk + 76))) != 0) {
                                    sndSeCancel();
                                    *(unsigned int *)0x8C421F64 = 0x0;
                                    t671 = (resCautionReset(0x0));
                                }
                                t825 = t671;
                            } else {
                                if (t634 == 2) {
                                    if ((int)(*(int *)0x8C422034) >= 0) {
                                        t683 = BupGetRequest();
                                        if ((t683 == 0) && (t684 = *(signed char *)0x8C40C400, (unsigned char)t684 == 0xFF)) {
                                            *(unsigned int *)0x8C421F6C = 0x1;
                                            *(unsigned int *)0x8C421F64 = 0x0;
                                            *(unsigned int *)0x8C42202C = 0x1;
                                            *(unsigned int *)0x8C422030 = 0x0;
                                            *(unsigned int *)0x8C422040 = 0x1;
                                            t686 = entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12));
                                            *(unsigned int *)0x8C422034 = 0x1;
                                            t693 = t686;
                                        } else {
                                            t687 = *(int *)0x8C40C6A4;
                                            t690 = t687;
                                            if (t687 == 1) {
                                                *(unsigned int *)0x8C421F6C = 0x1;
                                                *(unsigned int *)0x8C421F64 = 0x0;
                                                *(unsigned int *)0x8C42202C = 0x1;
                                                *(unsigned int *)0x8C422030 = 0x0;
                                                *(unsigned int *)0x8C422040 = 0x1;
                                                t689 = entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12));
                                                *(unsigned int *)0x8C422034 = 0x1;
                                                t690 = t689;
                                            }
                                            t693 = t690;
                                        }
                                        t703 = t693;
                                    } else {
                                        t695 = *(int *)0x8C40C6A4;
                                        t698 = t695;
                                        if (t695 == 1) {
                                            *(unsigned int *)0x8C421F6C = 0x1;
                                            *(unsigned int *)0x8C421F64 = 0x0;
                                            *(unsigned int *)0x8C42202C = 0x1;
                                            *(unsigned int *)0x8C422030 = 0x0;
                                            *(unsigned int *)0x8C422040 = 0x1;
                                            t697 = entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12));
                                            *(unsigned int *)0x8C422034 = 0x1;
                                            t698 = t697;
                                        }
                                        t703 = t698;
                                    }
                                    t713 = t703;
                                    if ((*(int *)0x8C422034) == 0) {
                                        t709 = BupGetRequest();
                                        if ((t709 == 0) && (t710 = *(int *)0x8C40C6A4, t710 == 0)) {
                                            *(unsigned int *)0x8C421F64 = 0x3;
                                        }
                                        t713 = t709;
                                    }
                                    t736 = t713;
                                    if ((int)(*(int *)0x8C422034) < 0) {
                                        t720 = *(int *)0x8C421F6C;
                                        t731 = t720;
                                        if (t720 != -3) {
                                            t722 = *(int *)(((int)stk + 116));
                                            t726 = t722;
                                            if (t722 != 0) {
                                                *(unsigned int *)0x8C421F6C = 0x1;
                                                *(unsigned int *)0x8C421F64 = 0x0;
                                                *(unsigned int *)0x8C42202C = 0x1;
                                                *(unsigned int *)0x8C422030 = 0x0;
                                                *(unsigned int *)0x8C422040 = 0x1;
                                                *(unsigned int *)0x8C40C698 = 0x0;
                                                resCautionFreeAll();
                                                t726 = (entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12)));
                                            }
                                            t731 = t726;
                                        }
                                        t736 = t731;
                                    }
                                    t744 = t736;
                                    if ((*(int *)(((int)stk + 76))) == 0) {
                                    } else {
                                        *(unsigned int *)0x8C421F64 = 0x0;
                                        sndSeCancel();
                                        t744 = (resCautionReset(0x0));
                                    }
                                    t820 = t744;
                                } else {
                                    t749 = *(int *)0x8C421F64;
                                    if (t749 == 3) {
                                        t759 = t749;
                                        if (((*(int *)(((int)stk + 48))) == 0) && (t755 = *(int *)(((int)stk + 44)), t755 == 0)) {
                                        } else {
                                            t756 = sndSeCursor();
                                            t757 = *(int *)0x8C421F6C;
                                            *(unsigned int *)0x8C421F6C = (t757 + 0x1);
                                            if ((int)(t757 + 0x1) > (int)0x1) {
                                                *(unsigned int *)0x8C421F6C = 0x0;
                                            }
                                            t759 = t756;
                                        }
                                        t772 = t759;
                                        if ((*(int *)(((int)stk + 40))) != 0) {
                                            sndSeDecide();
                                            t765 = *(int *)0x8C421F6C;
                                            if (t765 == 1) {
                                                *(unsigned int *)0x8C421F64 = 0x4;
                                                t769 = t765;
                                            } else {
                                                *(unsigned int *)0x8C42202C = 0x6;
                                                *(unsigned int *)0x8C422030 = 0x2;
                                                *(unsigned int *)0x8C422040 = 0x1;
                                                entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12));
                                                t769 = (strmBgmFadeOut(0x2, 0x0));
                                            }
                                            t772 = t769;
                                        }
                                        t780 = t772;
                                        if ((*(int *)(((int)stk + 76))) != 0) {
                                            sndSeCancel();
                                            *(unsigned int *)0x8C421F64 = 0x0;
                                            t780 = (resCautionReset(0x0));
                                        }
                                        t815 = t780;
                                    } else {
                                        t810 = t749;
                                        if (t749 == 4) {
                                            t793 = 0x50;
                                            if (((*(int *)(((int)stk + 112))) == 0) && (t788 = *(int *)(((int)stk + 108)), t788 == 0)) {
                                            } else {
                                                t789 = sndSeCursor();
                                                t790 = *(int *)0x8C422038;
                                                *(unsigned int *)0x8C422038 = (t790 + 0x1);
                                                if ((int)(t790 + 0x1) > (int)0x1) {
                                                    *(unsigned int *)0x8C422038 = 0x0;
                                                }
                                                t793 = t789;
                                            }
                                            t805 = t793;
                                            if ((*(int *)(((int)stk + 40))) != 0) {
                                                if ((*(int *)0x8C422038) == 0) {
                                                    *(unsigned int *)0x8C42202C = 0x1;
                                                    *(unsigned int *)0x8C422030 = 0x0;
                                                    *(unsigned int *)0x8C422040 = 0x1;
                                                    t803 = (entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12)));
                                                } else {
                                                    *(unsigned int *)0x8C421F64 = 0x3;
                                                    *(unsigned int *)0x8C421F6C = 0x0;
                                                    t803 = (resCautionFreeAll());
                                                }
                                                t805 = t803;
                                            }
                                            t810 = t805;
                                        }
                                        t815 = t810;
                                    }
                                    t820 = t815;
                                }
                                t825 = t820;
                            }
                            t885 = t825;
                        } else {
                            if ((*(int *)(((int)stk + 44))) != 0) {
                                *(unsigned int *)0x8C421F74 = ((*(int *)0x8C421F74) + 0x1);
                                sndSeCursor();
                                *(unsigned int *)0x8C1D8644 = 0x10;
                                *(unsigned int *)0x8C422024 = 0x2;
                                *(unsigned int *)0x8C422028 = 0x0;
                                *(unsigned int *)0x8C421F68 = 0x0;
                                *(unsigned int *)0x8C421F6C = 0x0;
                                t834 = *(int *)0x8C421F74;
                                if ((int)t834 > (int)0x3) {
                                    *(unsigned int *)0x8C421F74 = 0x0;
                                }
                                t847 = t834;
                            } else {
                                t842 = t627;
                                if ((*(int *)(((int)stk + 48))) != 0) {
                                    *(unsigned int *)0x8C421F74 = ((*(int *)0x8C421F74) - 1);
                                    *(unsigned int *)0x8C422024 = 0x1;
                                    *(unsigned int *)0x8C422028 = 0x0;
                                    t838 = sndSeCursor();
                                    *(unsigned int *)0x8C1D8644 = 0x10;
                                    *(unsigned int *)0x8C421F68 = 0x0;
                                    *(unsigned int *)0x8C421F6C = 0x0;
                                    if ((int)(*(int *)0x8C421F74) < 0) {
                                        *(unsigned int *)0x8C421F74 = 0x3;
                                    }
                                    t842 = t838;
                                }
                                t847 = t842;
                            }
                            t880 = t847;
                            if ((*(int *)(((int)stk + 40))) == 0) {
                            } else {
                                t854 = *(int *)0x8C421F74;
                                if (t854 != 0) {
                                    if (t854 != 1) {
                                        if (t854 != 2) {
                                            t857 = t854;
                                            if (t854 != 3) {
                                            } else {
                                                *(unsigned int *)0x8C42202C = 0x0;
                                                *(unsigned int *)0x8C422030 = 0x4;
                                                *(unsigned int *)0x8C422040 = 0x1;
                                                sndSeDecide();
                                                *(unsigned int *)0x8C422024 = 0x0;
                                                t857 = (strmBgmFadeOut(0x2, 0x0));
                                            }
                                            t863 = t857;
                                        } else {
                                            *(unsigned int *)0x8C421F64 = 0x2;
                                            *(unsigned int *)0x8C1D8648 = 0x5;
                                            *(unsigned int *)0x8C287ADC = 0x2;
                                            *(unsigned int *)0x8C421F6C = 0x0;
                                            *(unsigned int *)0x8C287D5C = 0x2;
                                            *(unsigned int *)0x8C421F60 = 0x0;
                                            t863 = (sndSeDecide());
                                        }
                                        t869 = t863;
                                    } else {
                                        *(unsigned int *)0x8C421F64 = 0x1;
                                        *(unsigned int *)0x8C1D8648 = 0x5;
                                        *(unsigned int *)0x8C287D5C = 0x1;
                                        t869 = (sndSeDecide());
                                    }
                                    t875 = t869;
                                } else {
                                    *(unsigned int *)0x8C421F64 = 0x1;
                                    *(unsigned int *)0x8C1D8648 = 0x5;
                                    *(unsigned int *)0x8C421F68 = 0x0;
                                    *(unsigned int *)0x8C287D5C = 0x0;
                                    t875 = (sndSeDecide());
                                }
                                t880 = t875;
                            }
                            t885 = t880;
                        }
                        t890 = t885;
                    }
                    t896 = t890;
                }
                t902 = t896;
            }
            t908 = t902;
        }
        t913 = t908;
    }
    return t913;
}

int FUN_8c0ba302(int a4, int a5, int a6, int a7)
{
    int stk[105];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t62;
    register int t63;
    register int t65;
    register int t70;
    register int t73;
    register int t77;
    register int t88;
    register int t97;
    register int t124;
    register int t133;
    register int t164;
    register int t167;
    register int t182;
    register int t8;
    register int t12;
    register int t64;
    register int t156;
    register int t154;
    register int t152;
    register int t116;
    register int t114;
    register int t95;
    register int t96;
    register int t112;
    register int t150;
    register int t131;
    register int t132;
    register int t148;
    register int t175;
    register int t162;
    register int t165;
    register int t166;
    register int t171;
    register int t172;

    *(unsigned int *)(((int)stk + 48)) = a4;
    t0 = *(int *)0x8C20D14C;
    if (t0 == 3) {
        *(unsigned int *)(((int)stk + 40)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0x0;
    }
    t2 = *(int *)0x8C34B148;
    if (t2 == 0) {
        t3 = t0;
        t4 = t2;
        t5 = 0x0;
        for (;;) {
            if ((unsigned int)t5 >= (unsigned int)0x140) {
                break;
            }
            t3 = t5;
            t4 = (*(int *)((0x8C122B84 + t3)));
            t5 = (t5 + 0x4);
            *(unsigned int *)(((((int)stk + 28) + 0x24) + t3)) = t4;
        }
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        *(unsigned int *)(((int)stk + 28)) = 0x1;
        t8 = t3;
        t12 = a6;
    } else {
        t7 = (((int)stk + 28) + 0x24);
        for (;;) {
            if ((unsigned int)t7 >= (unsigned int)((((int)stk + 28) + 0x24) + 0x140)) {
                break;
            }
            *(unsigned int *)((t7 + 0x0)) = 0x1;
            t7 = (t7 + 0x4);
        }
        *(unsigned int *)(((int)stk + 36)) = 0x14;
        *(unsigned int *)(((int)stk + 28)) = 0x0;
        t8 = t0;
        t12 = ((((int)stk + 28) + 0x24) + 0x140);
    }
    t13 = *(int *)0x8C407FD0;
    if (t13 != 0) {
        t14 = t8;
        t15 = t13;
        t16 = 0x0;
        for (;;) {
            if ((unsigned int)t16 >= (unsigned int)0x140) {
                break;
            }
            t14 = t16;
            t15 = (*(int *)((0x8C122B84 + t14)));
            t16 = (t16 + 0x4);
            *(unsigned int *)(((((int)stk + 28) + 0x24) + t14)) = t15;
        }
    }
    camGetAngles((((int)stk + 28) + 0x10), (((int)stk + 28) + 0x4), t12, a7);
    courtDrawStageModels((*(short *)(((int)stk + 44))), (*(short *)(((int)stk + 32))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    if ((*(int *)(((int)stk + 40))) != 0) {
        nlPushMatrix(0x0);
        nlTranslate(82.0f, 0.0f, 22.5f);
        nlRotateAY(0xB8D8);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(68.0f, 0.0f, -57.0f);
        nlRotateAY(0xFFFFD830);
        nlObjPut(0xC58C3C0);
        nlPopMatrix(0x1);
    } else {
        if (((*(int *)0x8C287B3C) & 64) == 0) {
            nlPushMatrix(0x0);
            nlTranslate(118.0f, 0.0f, 0.0f);
            nlRotateAY(0x532E);
            nlObjPut(0xC58C3C0);
            nlPopMatrix(0x1);
        }
    }
    if ((*(int *)(((int)stk + 40))) != 0) {
        *(unsigned int *)(((((int)stk + 28) + 0x24) + 0x7C)) = 0x1;
        *(unsigned int *)(((((int)stk + 28) + 0x24) + 0xA0)) = 0x1;
    }
    if ((*(int *)(((int)stk + 40))) == 0) {
        stageSegaCourtDraw((*(int *)(((int)stk + 28))));
    }
    nlObjPut((*(int *)0x8C1220DC));
    nlSetCommonTextureOffset(0xF00);
    t62 = *(int *)(((int)stk + 48));
    *(unsigned int *)(((int)stk + 52)) = (((t62 == 0)) ? 1 : 0);
    t63 = (((t62 == 0)) ? 1 : 0);
    t65 = 0x1;
    for (;;) {
        if ((int)t65 < (int)0x4B) {
            t63 = t65;
            t63 = (t63 << 2);
            t64 = (*(int *)(((((int)stk + 28) + 0x24) + t63)));
            if (t64 == 0) {
                t156 = t64;
            } else {
                t63 = (*(short *)(((int)stk + 32)));
                t64 = 0x8C0B65B8;
                t70 = t63;
                t63 = 0x8C12258C;
                t63 = (courtAngleInSector((*(short *)(((t65 << 1) + t63))), t70));
                if (t63 == 0) {
                    t63 = 0x8C34B3B0;
                    t64 = t65;
                    t64 = (t64 << 2);
                    *(unsigned int *)((t64 + t63)) = 0x0;
                    t154 = t64;
                } else {
                    t64 = t65;
                    t64 = (t64 << 1);
                    t64 = (t64 + t65);
                    t64 = (t64 << 2);
                    t64 = (t64 << 2);
                    t73 = (0x8C18C360 + t64);
                    t64 = 0x8C0F7DAC;
                    t63 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t73); }
                    t64 = t65;
                    t63 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((t65 << 1) + t64) << 2) << 2) + 0x8C18C354)); }
                    t64 = 0x8C08A0C0;
                    t63 = (screenSegVisible((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
                    if (t63 == 0) {
                        t64 = t65;
                        t64 = (t64 << 1);
                        t64 = (t64 + t65);
                        t64 = (t64 << 2);
                        t64 = (t64 << 2);
                        t77 = (0x8C18C378 + t64);
                        t64 = 0x8C0F7DAC;
                        t63 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t77); }
                        t64 = t65;
                        t63 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((t65 << 1) + t64) << 2) << 2) + 0x8C18C36C)); }
                        t64 = 0x8C08A0C0;
                        t63 = (screenSegVisible((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
                        if (t63 != 0) {
                            t63 = 0x8C34B3B0;
                            t64 = t65;
                            t64 = (t64 << 2);
                            *(unsigned int *)(((int)stk + 28)) = t64;
                            *(unsigned int *)((t64 + t63)) = 0x1;
                            t64 = 0x8C0EFD20;
                            t63 = (nlPushMatrix(0x0));
                            t64 = 0x8C1220DC;
                            *(unsigned int *)(((int)stk + 60)) = ((t65 << 2) << 1);
                            *(unsigned int *)(((int)stk + 56)) = (((t65 << 2) << 1) + t64);
                            t63 = (*(short *)(((((t65 << 2) << 1) + t64) + 0x4)));
                            t63 = (nlRotateAY((unsigned short)t63));
                            t63 = (nlObjPut((*(int *)(((*(int *)(((int)stk + 56))) + 0x0)))));
                            t64 = 0x8C0EFCD0;
                            t63 = (nlPopMatrix(0x1));
                            t63 = 0x8C122624;
                            t88 = *(int *)(((int)stk + 28));
                            t64 = (*(int *)((t88 + t63)));
                            if (t64 != 0) {
                                t64 = (*(int *)(((int)stk + 52)));
                                if ((t64 == 0) && (t63 = 0x8C1229CC, t95 = *(int *)((t88 + t63)), t96 = (t64 == 0), t64 = t95, t64 != 0)) {
                                    t112 = t64;
                                } else {
                                    t97 = *(int *)(((int)stk + 60));
                                    t64 = 0x8C122334;
                                    *(unsigned int *)(((int)stk + 28)) = (t97 + t64);
                                    t63 = (crowdAnimModel((*(int *)(((t97 + t64) + 0x0))), t65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20)));
                                    t64 = 0x8C0F1E90;
                                    t63 = (nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C));
                                    t63 = (nlPushMatrix(0x0));
                                    t63 = (*(short *)(((*(int *)(((int)stk + 28))) + 0x4)));
                                    t63 = (nlRotateAY((unsigned short)t63));
                                    t63 = (nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0)))));
                                    t64 = 0x8C0EFCD0;
                                    t63 = (nlPopMatrix(0x1));
                                }
                                t114 = t112;
                            } else {
                                t114 = t64;
                            }
                            t116 = t114;
                        } else {
                            t63 = 0x8C34B3B0;
                            t64 = t65;
                            t64 = (t64 << 2);
                            *(unsigned int *)((t64 + t63)) = 0x0;
                            t116 = t64;
                        }
                        t152 = t116;
                    } else {
                        t63 = 0x8C34B3B0;
                        t64 = t65;
                        t64 = (t64 << 2);
                        *(unsigned int *)(((int)stk + 28)) = t64;
                        *(unsigned int *)((t64 + t63)) = 0x1;
                        t64 = 0x8C0EFD20;
                        t63 = (nlPushMatrix(0x0));
                        t64 = 0x8C1220DC;
                        *(unsigned int *)(((int)stk + 60)) = ((t65 << 2) << 1);
                        *(unsigned int *)(((int)stk + 56)) = (((t65 << 2) << 1) + t64);
                        t63 = (*(short *)(((((t65 << 2) << 1) + t64) + 0x4)));
                        t63 = (nlRotateAY((unsigned short)t63));
                        t63 = (nlObjPut((*(int *)(((*(int *)(((int)stk + 56))) + 0x0)))));
                        t64 = 0x8C0EFCD0;
                        t63 = (nlPopMatrix(0x1));
                        t63 = 0x8C122624;
                        t124 = *(int *)(((int)stk + 28));
                        t64 = (*(int *)((t124 + t63)));
                        if (t64 != 0) {
                            t64 = (*(int *)(((int)stk + 52)));
                            if ((t64 == 0) && (t63 = 0x8C1229CC, t131 = *(int *)((t124 + t63)), t132 = (t64 == 0), t64 = t131, t64 != 0)) {
                                t148 = t64;
                            } else {
                                t133 = *(int *)(((int)stk + 60));
                                t64 = 0x8C122334;
                                *(unsigned int *)(((int)stk + 28)) = (t133 + t64);
                                t63 = (crowdAnimModel((*(int *)(((t133 + t64) + 0x0))), t65, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20)));
                                t64 = 0x8C0F1E90;
                                t63 = (nlObjPutLoadTexture((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x8C13293C));
                                t63 = (nlPushMatrix(0x0));
                                t63 = (*(short *)(((*(int *)(((int)stk + 28))) + 0x4)));
                                t63 = (nlRotateAY((unsigned short)t63));
                                t63 = (nlObjPut((*(int *)(((*(int *)(((int)stk + 28))) + 0x0)))));
                                t64 = 0x8C0EFCD0;
                                t63 = (nlPopMatrix(0x1));
                            }
                            t150 = t148;
                        } else {
                            t150 = t64;
                        }
                        t152 = t150;
                    }
                    t154 = t152;
                }
                t156 = t154;
            }
            t65 = (t65 + 0x1);
            t64 = t156;
            continue;
        }
        break;
    }
    if ((*(int *)(((int)stk + 48))) != 0) {
        if ((*(int *)(((int)stk + 40))) != 0) {
            t162 = (crowdAnimateAlt());
        } else {
            t162 = (crowdAnimate());
        }
        t164 = t162;
        t167 = 0x0;
        for (;;) {
            if ((unsigned int)t167 >= (unsigned int)0x140) {
                break;
            }
            t164 = 0x8C34B3B0;
            t166 = t167;
            t166 = (t166 << 2);
            t165 = (*(int *)((t166 + t164)));
            if (t165 != 0) {
                t166 = 0x8C0B4F44;
                t164 = (crowdDrawSega(t167));
            } else {
                t171 = t165;
                t172 = t166;
            }
            t167 = (t167 + 0x1);
            t165 = t171;
            t166 = t172;
        }
        t175 = t164;
    } else {
        t175 = t63;
    }
    t182 = t175;
    if ((*(int *)0x8C34B498) != 0) {
        t182 = (stageSegaScoreboardDraw());
    }
    return t182;
}

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

int FUN_8c0a048c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[41];
    register int t3;
    register int t4;
    register float u22;
    register float u23;
    register float u24;
    register float u27;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u45;
    register float u46;
    register float u47;
    register float u54;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u61;
    register float u62;
    register float u63;
    register float u64;
    register float u65;
    register float u68;
    register float u69;
    register float u70;
    register float u71;
    register float u72;
    register float u75;
    register float u76;
    register float u77;
    register float u78;
    register float u85;
    register float u86;
    register float u87;
    register float u88;
    register float u90;
    register float u91;
    register float u92;
    register float u95;
    register float u96;
    register float u97;
    register float u98;
    register float u99;
    register int t101;
    register int t42;
    register int t40;
    register int t50;
    register int t52;

    *(unsigned int *)(((int)stk + 72)) = a4;
    *(unsigned int *)(((int)stk + 68)) = a5;
    *(unsigned int *)(((int)stk + 76)) = a6;
    if ((*(int *)0x8C185410) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) != 1) {
            t3 = entryIsVersus(a4, a5, a6, a7);
            if (t3 == 0) {
                t4 = entryFirstPortFlag();
                if (t4 != 0) {
                    *(unsigned int *)0x8C3417C4 = 0x5;
                } else {
                    *(unsigned int *)0x8C3417C4 = (*(int *)(((int)stk + 76)));
                }
            } else {
                *(unsigned int *)0x8C3417C4 = 0x5;
            }
        } else {
            *(unsigned int *)0x8C3417C4 = 0x5;
        }
        *(int *)((int)stk + 64) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(80.0f, 120.0f, 0.5f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 68) + 0x18)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(int *)((int)stk + 60) = (((int)stk + 64) + 0x10);
        *(Stk3 *)((((int)stk + 64) + 0x10)) = vecMake(42.0f, 95.0f, 0.5f);
        u22 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u23 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u24 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 56) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u22 + 107.0f), (u24 + 55.0f), (u23 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(volatile int *)(((int)stk + 72));
        infoPlayerDrawWrap(*(Stk3 *)(((int)stk + 44)));
        u27 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u28 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u29 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 40) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u27 + 307.0f), (u29 + 55.0f), (u28 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(volatile int *)(((int)stk + 68));
        infoPlayerDrawWrap(*(Stk3 *)(((int)stk + 28)));
        u32 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u33 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u34 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 24) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u32 + 195.0f), (u34 + 71.0f), (u33 + -0.100000001f));
        if ((*(int *)(((((*(int *)(((int)stk + 72))) << 2) + 0x8C3437C4) + 0x0))) == 0) {
            if ((*(int *)0x8C34326C) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
                t40 = (*(int *)0x8C343268);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
                t40 = 0x4;
            }
            t42 = t40;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t42 = 0x4;
        }
        btnGuideDrawB(t42, *(Stk3 *)(((int)stk + 56)), f4);
        u45 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u46 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u47 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 52) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u45 + 379.0f), (u47 + 71.0f), (u46 + -0.100000001f));
        if (((*(int *)((0x8C3437C4 + ((*(int *)(((int)stk + 68))) << 2)))) == 1) && (t50 = *(int *)0x8C3432A4, t50 == 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t52 = (*(int *)0x8C3432A0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t52 = 0x4;
        }
        btnGuideDrawB(t52, *(Stk3 *)(((int)stk + 56)), f4);
        u54 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u55 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u56 = *(float *)0x8C0A087C;
        u57 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u58 = *(float *)0x8C0A0880;
        *(int *)((int)stk + 52) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u54 + u58), (u57 + u56), (u55 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        hudLabelPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 40)), f4);
        u61 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u62 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u63 = *(float *)0x8C0A088C;
        u64 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u65 = *(float *)0x8C0A0890;
        *(int *)((int)stk + 36) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u61 + u65), (u64 + u63), (u62 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        hudFont2DigitPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 24)), f4);
        u68 = *(float *)(((((int)stk + 68) + 0x18) + 0x0));
        u69 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u70 = *(float *)0x8C0A0898;
        u71 = *(float *)(((((int)stk + 68) + 0x18) + 0x4));
        u72 = *(float *)0x8C0A089C;
        *(int *)((int)stk + 20) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u68 + u72), (u71 + u70), (u69 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(volatile int *)(((int)stk + 76));
        countryStagePut(*(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12), f4);
        u75 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u76 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u77 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u78 = *(float *)0x8C0A08A4;
        *(int *)((int)stk + 4) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u77 + u78), (u76 + (1.0f + 1.0f)), (u75 + -0.100000001f));
        if ((*(int *)0x8C287D5C) != 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            hudSignPut((*(int *)0x8C3417C4), *(Stk3 *)(((int)stk + 56)), f4);
        }
        u85 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u86 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u87 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u88 = *(float *)0x8C0A08B0;
        *(int *)((int)stk + 64) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u87 + u88), (u86 + (1.0f + 1.0f)), (u85 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        panelLogoPut(*(Stk3 *)(((int)stk + 52)), f4);
        u90 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u91 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u92 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 48) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(u90, u92, u91);
        *(float *)(((((int)stk + 68) + 0x24) + 0x8)) = (*(float *)0x8C0A08B8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        panelDrawA(*(Stk3 *)(((int)stk + 36)), ((f4 * 178.0f) / 256.0f));
        u95 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u96 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u97 = *(float *)0x8C0A08C0;
        u98 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u99 = *(float *)0x8C0A08C4;
        *(int *)((int)stk + 32) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u95 + u99), (u98 + u97), (u96 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        t101 = (sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 20)), f4));
    }
    return t101;
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
