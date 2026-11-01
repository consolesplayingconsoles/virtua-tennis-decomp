/* Straight-line functions with calls and guards (batch gen_rf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupRequestSave(int, int, int, int);
int angLerp(int, int, float);
int camProject(int, int, Stk3);
int camSetupView(void);
int camWorldToView(Stk4);
int circuitDrawFrame(void);
int circuitDrawGameIcon(void);
int circuitDrawMatchIcon(void);
int circuitDrawStage(int, int, int, int, int, int);
int circuitDrawStatus(void);
int circuitMapInit(void);
int circuitPanelDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int circuitStageStart(void);
int circuitTaskAdd(int, int, int);
int entryAssignSelecters(void);
int entryCountJoined(void);
int entryGridCount(int);
int entryGridDraw(int, int, int, int, float);
int entryGridMove(int, int);
int entryGridSettingsStep(int, int, int, int, float, float, float);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeDraw(void);
int fadeStart(int);
int lightSet(int, int, int, int);
int lightUpdate(int);
int markerHitSpawn(int, Stk3);
float mathLerp(float, float, float);
int memcmp(int, int, int);
int miniStart(void);
int mtxGetWorldPos(int, int, int, int, int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutMvClosedVolume(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
extern int nlRotateAX();
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
float nlSin(int);
int nlTranslate(float, float, float);
int nlVoidUnitVector(int);
int nlsndSeqRequest(int);
int padDirRepeat(int, int);
int resWtcShopLoadStep(void);
int resWtcShopRelease(void);
int selInit(void);
int selPortReset(void);
int serveGetReceiver(void);
int shopInit(void);
int sndSe05_09(void);
int sndSeCursor(void);
int sndSeDecide(void);
int sprSet280Free(int);
int sprSet322Free(int);
int sprSet322Load(int);
int sprSet331Free(void);
int sprSet331Load(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int sprWtcFree(void);
int stageMinigameLoadBegin(int);
int stageMinigameLoadStep(int);
int stageTexSetGarbagedAll(void);
int stageWtcMainTexFree(void);
int strmBgmFadeOut(int, int);
int unlockTestW0(int);
float vecDistXZf(int, float, float, float, float);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int FUN_8c0314e0(int a4);
float FUN_8c0ac6ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
float FUN_8c06e26c(int a4);

int FUN_8c0314e0(int a4)
{
    int stk[88];
    register int t5;
    register int t7;
    register int t49;
    register int t53;
    register int t55;
    register int t56;
    register float t57;
    register int t59;
    register float u61;
    register int t71;
    register int t72;
    register int t75;
    register int t78;
    register int t79;
    register int t82;
    register float u88;
    register float u89;
    register float t93;
    register int t167;
    register int t168;
    register int t177;
    register int t178;
    register int t217;
    register int t222;
    register int t256;
    register int t264;
    register int t266;
    register float u267;
    register float u270;
    register float t275;
    register float u276;
    register int t282;
    register int t284;
    register int t285;
    register float u290;
    register float u306;
    register float u307;
    register float u308;
    register float u309;
    register float u312;
    register float u314;
    register float u315;
    register float u338;
    register float u339;
    register float u340;
    register int t351;
    register int t360;
    register int t381;
    register float u391;
    register float u392;
    register float u393;
    register int t407;
    register int t417;
    register float u449;
    register float u450;
    register float u451;
    register float u483;
    register int t489;
    register float u490;
    register int t492;
    register float u498;
    register float u499;
    register float u526;
    register int t532;
    register float u533;
    register int t535;
    register float u541;
    register float u542;
    register float u578;
    register int t581;
    register float u582;
    register float u587;
    register float u588;
    register float u589;
    register float u611;
    register int t614;
    register float u615;
    register float u620;
    register float u621;
    register float u622;
    register float u669;
    register float u670;
    register float u671;
    register int t682;
    register int t691;
    register int t712;
    register float u722;
    register float u723;
    register float u724;
    register int t738;
    register int t748;
    register float u780;
    register float u781;
    register float u782;
    register float u814;
    register int t820;
    register float u821;
    register int t823;
    register float u829;
    register float u830;
    register float u857;
    register int t863;
    register float u864;
    register int t866;
    register float u872;
    register float u873;
    register float u909;
    register int t912;
    register float u913;
    register float u918;
    register float u919;
    register float u920;
    register float u942;
    register int t945;
    register float u946;
    register float u951;
    register float u952;
    register float u953;
    register int t999;
    register int t1022;
    register int t1030;
    register int t1049;
    register int t1051;
    register int t1098;
    register int t1070;
    register int t1140;
    register int t1102;
    register int t1119;
    register int t1121;
    register int t1122;
    register int t1146;
    register int t1148;
    register int t1198;
    register int t1149;
    register int t1193;
    register int t1168;
    register int t1183;
    register int t1;
    register float u60;
    register float u86;
    register float u87;
    register float u124;
    register float u119;
    register float u127;
    register int t157;
    register int t158;
    register int t159;
    register int t170;
    register int t171;
    register int t172;
    register int t238;
    register int t239;
    register int t240;
    register int t241;
    register int t242;
    register int t1065;
    register int t1074;
    register int t1083;
    register int t1092;
    register int t1135;
    register int t1128;
    register int t1210;
    register int t1204;
    register int t1188;

    *(unsigned int *)(((int)stk + 76)) = a4;
    *(unsigned int *)(((int)stk + 64)) = (((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C);
    *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
    if (((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x10))) == 1) && (t1 = *(int *)0x8C2FBE40, t1 == 0)) {
        *(unsigned int *)0x8C2FBE40 = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 64))) + 0x10)) = 0xFFFFFFFF;
        sndSe05_09();
        strmBgmFadeOut(0x2, 0x0);
        t5 = *(int *)0x8C2FBE1C;
        t7 = *(int *)(((*(int *)0x8C2FBC50) + ((((t5 << 2) + t5) << 2) << 1)));
        if (t7 != 0) {
            if (t7 != 1) {
                if (t7 != 2) {
                } else {
                    *(unsigned int *)0x8C287D5C = 0x2;
                    shopInit();
                }
            } else {
                *(unsigned int *)0x8C287D5C = 0x3;
                miniStart();
                *(unsigned int *)0x8C2FBE48 = 0x0;
            }
        } else {
            *(unsigned int *)0x8C287D5C = 0x2;
            circuitStageStart();
            *(unsigned int *)0x8C2FBE44 = 0x1;
            *(unsigned int *)0x8C2FBE48 = 0x0;
        }
        if ((int)(*(int *)0x8C2FBE1C) < (int)0x20) {
            *(unsigned int *)0x8C2FBC6C = ((~((int)0x1 << (int)(*(int *)0x8C2FBE1C))) & (*(int *)0x8C2FBC6C));
        } else {
            *(unsigned int *)0x8C2FBC70 = ((~((int)0x1 << (int)((*(int *)0x8C2FBE1C) - 32))) & (*(int *)0x8C2FBC70));
        }
        *(unsigned int *)0x8C2FBE58 = 0x0;
        *(unsigned int *)0x8C2FBE54 = 0x0;
    }
    if ((*(int *)0x8C2FBE40) != 0) {
    } else {
        if ((*(int *)0x8C2FBE0C) != (*(int *)(((int)stk + 76)))) {
        } else {
            t49 = padDirRepeat((*(int *)0x8C421F70), 0x20);
            *(int *)((int)stk + 36) = ((((t49 == 0)) ? 1 : 0) ^ 0x1);
            *(unsigned int *)(((int)stk + 60)) = (((((t49 == 0)) ? 1 : 0) ^ 0x1) - (((((padDirRepeat((*(int *)0x8C421F70), 0x10)) == 0)) ? 1 : 0) ^ 0x1));
            t53 = padDirRepeat((*(int *)0x8C421F70), 0x80);
            *(int *)((int)stk + 36) = ((((t53 == 0)) ? 1 : 0) ^ 0x1);
            t55 = padDirRepeat((*(int *)0x8C421F70), 0x40);
            *(unsigned int *)(((int)stk + 40)) = (((((t53 == 0)) ? 1 : 0) ^ 0x1) - ((((t55 == 0)) ? 1 : 0) ^ 0x1));
            t56 = *(int *)(((int)stk + 60));
            *(int *)((int)stk + 36) = (0xF0 + ((int)stk + 40));
            *(Stk3 *)((0xF0 + ((int)stk + 40))) = vecMake((float)t56, (float)(((((t53 == 0)) ? 1 : 0) ^ 0x1) - ((((t55 == 0)) ? 1 : 0) ^ 0x1)), 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0xF4 + ((int)stk + 36))); }
            t57 = vecLength(*(Stk3 *)(((int)stk + 24)));
            if (t57 == 0.0f) {
            } else {
                nlVoidUnitVector((0xF0 + ((int)stk + 40)));
                *(float *)(((int)stk + 72)) = 9999999.0f;
                *(unsigned int *)(((int)stk + 40)) = 0x0;
                t59 = 0x20;
                u61 = 9999999.0f;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 40))) < (int)(*(int *)0x8C2FBC54)) {
                        t71 = *(int *)(((int)stk + 40));
                        t72 = *(int *)0x8C2FBC50;
                        t59 = (*(short *)0x8C2FBC9C);
                        t75 = t59;
                        t59 = (*(short *)(((((((t71 << 2) + t71) << 2) << 1) + t72) + 0xE)));
                        t59 = (t59 - t75);
                        *(unsigned short *)(((int)stk + 60)) = t59;
                        t59 = (*(short *)0x8C2FBC9E);
                        t78 = t59;
                        t59 = (*(short *)(((((((t71 << 2) + t71) << 2) << 1) + t72) + 0xC)));
                        t59 = (t59 - t78);
                        *(unsigned short *)(((int)stk + 68)) = t59;
                        t59 = (short)t59;
                        t79 = t59;
                        t59 = 0x30;
                        u61 = (float)t79;
                        *(float *)((((int)stk + 40) + t59)) = u61;
                        t59 = (*(short *)(((int)stk + 60)));
                        t82 = t59;
                        t59 = 0x34;
                        u60 = (float)t82;
                        *(float *)((((int)stk + 40) + t59)) = u60;
                        t59 = 0x4;
                        *(float *)((((int)stk + 40) + t59)) = (vecDistXZf((((((t71 << 2) + t71) << 2) << 1) + t72), 0.0f, 0.0f, u60, u61));
                        if (((*(int *)(((int)stk + 40))) == (*(int *)0x8C2FBE1C)) && (t59 = 0x8C0317D4, u86 = *(float *)((t59 + 0x0)), u61 = u86, t59 = 0x4, u87 = *(float *)((((int)stk + 40) + t59)), u60 = u87, !(u60 > u61))) {
                            u124 = u60;
                        } else {
                            t59 = 0x30;
                            u88 = *(float *)((((int)stk + 40) + t59));
                            t59 = 0x34;
                            u89 = *(float *)((((int)stk + 40) + t59));
                            *(int *)((int)stk + 36) = (0xE4 + ((int)stk + 40));
                            *(Stk3 *)((0xE4 + ((int)stk + 40))) = vecMake(u89, u88, 0.0f);
                            t59 = (nlVoidUnitVector((0xE4 + ((int)stk + 40))));
                            t59 = 0x20;
                            u61 = (*(float *)((((int)stk + 40) + t59)));
                            t59 = 0x4;
                            u60 = (*(float *)((((int)stk + 40) + t59)));
                            if (u61 > u60) {
                                t93 = nlInnerProduct((0xF0 + ((int)stk + 40)), (0xE4 + ((int)stk + 40)));
                                t59 = 0x8C0317E4;
                                u61 = (*(float *)((t59 + 0x0)));
                                if (t93 > u61) {
                                    if ((int)(*(int *)(((int)stk + 40))) < (int)0x20) {
                                        t59 = 0x1;
                                        t59 = ((int)t59 << (int)(*(int *)(((int)stk + 40))));
                                        if ((t59 & (*(int *)0x8C2FBC5C)) != 0) {
                                            t59 = 0x4;
                                            u61 = (*(float *)((((int)stk + 40) + t59)));
                                            t59 = 0x20;
                                            *(float *)((((int)stk + 40) + t59)) = u61;
                                            *(unsigned int *)(((int)stk + 52)) = (*(int *)(((int)stk + 40)));
                                        }
                                    } else {
                                        t59 = 0x1;
                                        t59 = ((int)t59 << (int)((*(int *)(((int)stk + 40))) - 32));
                                        if ((t59 & (*(int *)0x8C2FBC60)) != 0) {
                                            t59 = 0x4;
                                            u61 = (*(float *)((((int)stk + 40) + t59)));
                                            t59 = 0x20;
                                            *(float *)((((int)stk + 40) + t59)) = u61;
                                            *(unsigned int *)(((int)stk + 52)) = (*(int *)(((int)stk + 40)));
                                        }
                                    }
                                }
                            } else {
                                u119 = u60;
                            }
                            u124 = u119;
                        }
                        u60 = u124;
                        *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
                        continue;
                    }
                    break;
                }
                if (((*(int *)(((int)stk + 52))) != -1) && (u127 = *(float *)(((int)stk + 72)), 28672.0f > u127)) {
                    if ((*(int *)0x8C2FBE1C) != (*(int *)(((int)stk + 52)))) {
                        *(float *)0x8C2FBE3C = 0.0f;
                        sndSeCursor();
                        *(unsigned int *)0x8C2FBE64 = 0x0;
                    }
                    *(unsigned int *)0x8C2FBE1C = (*(int *)(((int)stk + 52)));
                }
            }
            if (((*(int *)0x8C2FBE10) == 0) && (t157 = *(int *)0x8C421F70, t158 = *(int *)((0x8C29B898 + (t157 << 2))), t159 = *(int *)((t158 + 0x10)), (t159 & 5) != 0)) {
                sndSeDecide();
                t167 = *(int *)0x8C2FBE1C;
                t168 = *(int *)0x8C2FBC50;
                t177 = 0x8C033044;
                t178 = 0x28;
                if (((*(int *)(((((((t167 << 2) + t167) << 2) << 1) + t168) + 0x0))) == 0) && ((t170 = *(int *)(((((((t167 << 2) + t167) << 2) << 1) + t168) + 0x4)), t171 = *(int *)((0x8C108E9C + ((((t170 << 2) << 2) + t170) << 2))), (t171 & 2) != 0) && (t172 = *(signed char *)0x8C2FBC7D, (unsigned char)t172 == 0xFF))) {
                    t177 = 0x8C03349C;
                    t178 = 0x14;
                }
                circuitTaskAdd(t177, t178, 0x1E);
                *(unsigned int *)(((*(int *)(((int)stk + 64))) + 0x10)) = 0xFFFFFFFF;
            } else {
                if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 8) != 0) {
                    *(unsigned int *)0x8C343264 = (*(int *)0x8C2889DC);
                    circuitTaskAdd(0x8C03504C, 0x28, 0x1E);
                    circuitMapInit();
                    sndSe05_09();
                }
            }
        }
    }
    t217 = *(int *)0x8C2FBE1C;
    *(unsigned short *)0x8C2FBC9C = (angLerp((*(short *)0x8C2FBC9C), (*(short *)(((((((t217 << 2) + t217) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE))), 0.100000001f));
    t222 = *(int *)0x8C2FBE1C;
    *(unsigned short *)0x8C2FBC9E = (angLerp((*(short *)0x8C2FBC9E), (*(short *)(((((((t222 << 2) + t222) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xC))), 0.100000001f));
    *(unsigned short *)0x8C2FBCA0 = (angLerp((*(short *)0x8C2FBCA0), (-(*(short *)0x8C2FBC9E)), 0.100000001f));
    *(unsigned short *)0x8C2FBCA2 = (angLerp((*(short *)0x8C2FBCA2), (-(*(short *)0x8C2FBC9C)), 0.100000001f));
    *(float *)0x8C287D64 = 0.100000001f;
    if ((*(int *)0x8C2FBE40) != 0) {
        *(unsigned int *)0x8C2FBE40 = ((*(int *)0x8C2FBE40) + 0x1);
    }
    if (((*(int *)0x8C2FBE40) != 2) && (((t238 = *(int *)0x8C2FBE1C, t239 = *(int *)0x8C2FBC50, t240 = *(int *)((t239 + ((((t238 << 2) + t238) << 2) << 1))), t240 == 2) || (t241 = *(int *)0x8C2FBE40, t241 != 12)) && (t242 = *(int *)0x8C2FBE40, t242 != 0x2710))) {
    } else {
        fadeCaptureBegin();
    }
    if ((*(int *)0x8C2FBE98) != 1) {
    } else {
        if ((int)(*(int *)0x8C2FBE40) > (int)0x2) {
        } else {
            nlPushUnitMatrix();
            nlTranslate(0.0f, 0.0f, -90.0f);
            nlObjPut(0xC9EBFE8);
            t256 = ((int (*)(int))(nlRotateAX))((int)((float)(*(short *)0x8C2FBCA2) * 0.300000012f));
            nlRotateAY((unsigned short)(*(short *)0x8C2FBCA0));
            nlObjPut(0xC9B0000);
            nlPushMatrix(0x0);
            nlRotateAY((unsigned short)(*(short *)0x8C2FBC9E));
            t264 = ((int (*)(int))(nlRotateAX))((unsigned short)(*(short *)0x8C2FBC9C));
            nlTranslate(0.0f, 0.0f, 5.0999999f);
            t266 = ((int (*)(int))(nlRotateAX))(0x4000);
            u267 = *(float *)0x8C2FBE3C;
            *(float *)(((int)stk + 84)) = (u267 * (1.0f + 1.0f));
            if ((u267 * (1.0f + 1.0f)) > 1.0f) {
                *(float *)(((int)stk + 84)) = 1.0f;
            }
            u270 = 1.0f;
            u270 = u270 + 0.5f * (*(float *)(((int)stk + 84)));
            *(float *)(((int)stk + 80)) = u270;
            nlScale(u270, u270, u270);
            nlRotateAY(((*(int *)0x8C2FBE64) * 0x64));
            t275 = nlSin(((*(int *)0x8C20D19C) * 0x888));
            u276 = 0.5f;
            u276 = u276 + 0.5f * t275;
            nlObjPutSetFadeColorOffset(0.0f, u276, 0.0f);
            nlObjPutSetSaturate(0.0f, 1.0f);
            nlObjPut(0xC9EA178);
            nlObjPutSetSaturate((-1.0f), (-1.0f));
            nlObjPutSetFadeColorOffset(1.0f, 1.0f, 1.0f);
            t282 = nlPopMatrix(0x1);
            *(unsigned int *)0x8C2FBE64 = ((*(int *)0x8C2FBE64) + 0x1);
            *(unsigned int *)(((int)stk + 52)) = 0x8C287658;
            *(unsigned int *)(((int)stk + 60)) = 0x8C2FBE54;
            *(unsigned int *)(((int)stk + 68)) = 0x8C2FBE58;
            t284 = t282;
            t285 = 0x0;
            for (;;) {
                if ((int)t285 < (int)(*(int *)0x8C2FBC54)) {
                    *(unsigned int *)(((int)stk + 40)) = 0x0;
                    t284 = (nlPushUnitMatrix());
                    t284 = (((int (*)(int))(nlRotateAX))(0x3300));
                    t284 = (nlRotateAZ(0xF00));
                    t284 = 0x8C031CF8;
                    u290 = *(float *)((t284 + 0x0));
                    *(int *)((int)stk + 36) = (0xFC + ((int)stk + 40));
                    *(Stk3 *)((0xFC + ((int)stk + 40))) = vecMake(0.0f, u290, 0.0f);
                    t284 = (nlCalcPoint((0x100 + ((int)stk + 36)), (0x100 + ((int)stk + 36))));
                    t284 = (nlPopMatrix(0x1));
                    t284 = (nlPushMatrix(0x0));
                    t284 = 0x44;
                    *(unsigned int *)((((int)stk + 36) + t284)) = ((((t285 << 2) + t285) << 2) << 1);
                    t284 = (*(short *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xC)));
                    t284 = (nlRotateAY((unsigned short)t284));
                    t284 = 0x44;
                    t284 = (*(short *)((((*(int *)((((int)stk + 36) + t284))) + (*(int *)0x8C2FBC50)) + 0xE)));
                    t284 = (((int (*)(int))(nlRotateAX))((unsigned short)t284));
                    t284 = 0x8C031D0C;
                    t284 = (nlTranslate(0.0f, 0.0f, (*(float *)((t284 + 0x0)))));
                    *(int *)((int)stk + 32) = (0x9C + ((int)stk + 36));
                    t284 = (mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x9C + ((int)stk + 36))));
                    t284 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xA0 + ((int)stk + 32))); }
                    *(int *)((int)stk + 16) = (0xAC + ((int)stk + 20));
                    *(int *)((int)stk + 16) = (0xAC + ((int)stk + 20));
                    t284 = (camWorldToView(*(Stk4 *)(((int)stk + 16))));
                    t284 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB0 + ((int)stk + 16))); }
                    t284 = (camProject((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x2C), *(Stk3 *)(((int)stk + 4))));
                    t284 = 0x8C031D24;
                    u306 = *(float *)((t284 + 0x0));
                    t284 = 0x10;
                    u307 = *(float *)((((int)stk + 40) + t284));
                    t284 = 0x10;
                    *(float *)((((int)stk + 40) + t284)) = (u307 + u306);
                    t284 = 0x8C031D28;
                    u308 = *(float *)((t284 + 0x0));
                    t284 = 0x8;
                    u309 = *(float *)((((int)stk + 40) + t284));
                    t284 = 0x8;
                    *(float *)((((int)stk + 40) + t284)) = (u308 - u309);
                    if (t285 == (*(int *)0x8C2FBE1C)) {
                        t284 = (nlGetTranslate(0x8C2FBE30));
                        t284 = 0x3C;
                        u312 = *(float *)0x8C2FBE3C;
                        *(float *)((((int)stk + 40) + t284)) = (u312 * (1.0f + 1.0f));
                        if ((u312 * (1.0f + 1.0f)) > 1.0f) {
                            t284 = 0x3C;
                            *(float *)((((int)stk + 40) + t284)) = 1.0f;
                        }
                        t284 = 0x3C;
                        u314 = *(float *)((((int)stk + 40) + t284));
                        t284 = 0x38;
                        u315 = 1.0f;
                        u315 = u315 + 0.5f * u314;
                        *(float *)((((int)stk + 40) + t284)) = u315;
                        t284 = (nlScale(u315, u315, u315));
                        t284 = 0x8C031D3C;
                        t284 = (nlTranslate(0.0f, 0.0f, (*(float *)((t284 + 0x0)))));
                        t284 = (*(short *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE)));
                        t284 = (unsigned short)t284;
                        t284 = (((int (*)(int))(nlRotateAX))(((-t284) + 0x2000)));
                        t284 = (nlRotateAY(((*(int *)0x8C2FBE64) * 0x64)));
                    } else {
                        t284 = (((int (*)(int, float))(nlRotateAX))(0x4000, u308));
                    }
                    if ((int)t285 < (int)0x20) {
                        if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC5C)) == 0) {
                        } else {
                            t284 = t285;
                            t284 = (t284 << 2);
                            t284 = (t284 + t285);
                            t284 = (t284 << 2);
                            t284 = (t284 << 1);
                            t284 = (*(int *)(((*(int *)0x8C2FBC50) + t284)));
                            if (t284 != 0) {
                                if (t284 != 1) {
                                    if (t284 == 2) {
                                        t284 = 0x8C0320AC;
                                        t284 = (nlTranslate(0.0f, (*(float *)((t284 + 0x0))), 0.0f));
                                        t284 = (nlObjPut(0xC9E4888));
                                        *(unsigned int *)(((int)stk + 40)) = 0x0;
                                        t284 = (nlPushMatrix(0x0));
                                        t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                        t284 = 0xFC;
                                        u338 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xB4;
                                        *(float *)((((int)stk + 40) + t284)) = u338;
                                        t284 = 0x100;
                                        u339 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xB8;
                                        *(float *)((((int)stk + 40) + t284)) = u339;
                                        t284 = 0x104;
                                        u340 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xBC;
                                        *(float *)((((int)stk + 40) + t284)) = u340;
                                        t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                        t284 = (nlObjPutMvClosedVolume(0xC9EA3F8));
                                        t284 = (nlPopMatrix(0x1));
                                    }
                                } else {
                                    *(volatile int *)0x8C2FBE1C;
                                    if ((int)t285 < (int)0x20) {
                                        if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC64)) != 0) {
                                            t284 = t285;
                                            t284 = (t284 << 2);
                                            t284 = (t284 + t285);
                                            t284 = (t284 << 2);
                                            t284 = (t284 << 1);
                                            t284 = (t284 + (*(int *)0x8C2FBC50));
                                            t351 = *(int *)((t284 + 0x4));
                                            t284 = 0x8C10BB4C;
                                            *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((t351 * 0x64) + t284))) + 0x1);
                                        }
                                    } else {
                                        if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC68)) != 0) {
                                            t284 = t285;
                                            t284 = (t284 << 2);
                                            t284 = (t284 + t285);
                                            t284 = (t284 << 2);
                                            t284 = (t284 << 1);
                                            t284 = (t284 + (*(int *)0x8C2FBC50));
                                            t360 = *(int *)((t284 + 0x4));
                                            t284 = 0x8C10BB4C;
                                            *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((t360 * 0x64) + t284))) + 0x1);
                                        }
                                    }
                                    if ((*(int *)(((int)stk + 40))) != 0) {
                                        t284 = (nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f));
                                    }
                                    t284 = (nlRotateAY(0x4000));
                                    t284 = 0x8C10BB48;
                                    t381 = *(int *)((((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) * 0x64) + t284));
                                    t284 = 0x8C159B38;
                                    t284 = (nlObjPut((*(int *)(((t381 << 2) + t284)))));
                                    t284 = (nlRotateAY(0xFFFFC000));
                                    t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                    t284 = (*(int *)(((int)stk + 40)));
                                    if (t284 != 3) {
                                        *(unsigned int *)(((int)stk + 40)) = 0x0;
                                    }
                                    t284 = (nlPushMatrix(0x0));
                                    t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                    t284 = 0xFC;
                                    u391 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xB4;
                                    *(float *)((((int)stk + 40) + t284)) = u391;
                                    t284 = 0x100;
                                    u392 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xB8;
                                    *(float *)((((int)stk + 40) + t284)) = u392;
                                    t284 = 0x104;
                                    u393 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xBC;
                                    *(float *)((((int)stk + 40) + t284)) = u393;
                                    t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                    t284 = (nlRotateAY(0x4000));
                                    t284 = (nlObjPutMvClosedVolume(0xC9EA3F8));
                                    t284 = (nlRotateAY(0xFFFFC000));
                                    t284 = (nlPopMatrix(0x1));
                                }
                            } else {
                                *(volatile int *)0x8C2FBE1C;
                                if ((int)t285 < (int)0x20) {
                                    if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC64)) != 0) {
                                        t407 = *(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
                                        *(unsigned int *)(((int)stk + 40)) = (((-(*(int *)(((((((t407 << 2) << 2) + t407) << 2) + 0x8C108E5C) + 0x24)))) + (*(int *)(((((((t407 << 2) << 2) + t407) << 2) + 0x8C108E5C) + 0x20)))) + 0x4);
                                    }
                                } else {
                                    if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC68)) != 0) {
                                        t417 = *(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
                                        *(unsigned int *)(((int)stk + 40)) = (((-(*(int *)(((((((t417 << 2) << 2) + t417) << 2) + 0x8C108E5C) + 0x24)))) + (*(int *)(((((((t417 << 2) << 2) + t417) << 2) + 0x8C108E5C) + 0x20)))) + 0x4);
                                    }
                                }
                                if ((*(int *)(((int)stk + 40))) != 0) {
                                    t284 = (nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f));
                                }
                                t284 = 0x8C159B10;
                                t284 = (nlObjPut((*(int *)((((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8))) << 2) + t284)))));
                                t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                t284 = (*(int *)(((int)stk + 40)));
                                if (t284 != 3) {
                                    *(unsigned int *)(((int)stk + 40)) = 0x0;
                                }
                                t284 = (nlPushMatrix(0x0));
                                t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                t284 = 0xFC;
                                u449 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xB4;
                                *(float *)((((int)stk + 40) + t284)) = u449;
                                t284 = 0x100;
                                u450 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xB8;
                                *(float *)((((int)stk + 40) + t284)) = u450;
                                t284 = 0x104;
                                u451 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xBC;
                                *(float *)((((int)stk + 40) + t284)) = u451;
                                t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                t284 = (nlObjPutMvClosedVolume(0xC9EBB50));
                                t284 = (nlPopMatrix(0x1));
                            }
                            if ((*(int *)(((int)stk + 40))) != 0) {
                                t284 = 0x8C0320D0;
                                t284 = (nlTranslate(0.0f, (*(float *)((t284 + 0x0))), 0.0f));
                                if ((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) {
                                    t284 = (nlObjPutCheapEnvMap(0xC9E8110));
                                    t284 = (nlObjPut(0xC9E8110));
                                } else {
                                    t284 = (nlObjPut(0xC9EB7B0));
                                    t284 = (nlObjPutCheapEnvMap(0xC9EA630));
                                    t284 = 0x8C10802C;
                                    t284 = (unlockTestW0((*(int *)((((t285 - 43) << 2) + t284)))));
                                    if (t284 != 0) {
                                        t284 = 0x8C0320EC;
                                        t284 = (nlObjPutSetFadeColor(1.0f, (*(float *)((t284 + 0x0))), 0.300000012f));
                                    }
                                    t284 = (nlObjPut(0xC9EA630));
                                    t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                }
                            }
                            if ((int)t285 < (int)0x20) {
                                if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC6C)) != 0) {
                                    t284 = 0x8C0321A4;
                                    u483 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u483) {
                                        t284 = 0x1E;
                                        t284 = ((int)((int)(*(int *)0x8C20D198) % (int)t284));
                                        if ((int)t284 < (int)0x14) {
                                            t284 = (sprSheetSet(0x8C108E48));
                                            if (t285 != (*(int *)0x8C2FBE1C)) {
                                                t284 = 0x8C0321B8;
                                                t489 = *(int *)(((int)stk + 52));
                                                u490 = *(float *)((t284 + 0x0));
                                                t284 = 0x10;
                                                *(float *)((t489 + t284)) = ((*(float *)((t489 + t284))) * u490);
                                                t284 = 0x14;
                                                t492 = *(int *)(((int)stk + 52));
                                                *(float *)((t492 + t284)) = ((*(float *)((t492 + t284))) * u490);
                                            }
                                            t284 = 0x8C0321BC;
                                            u498 = *(float *)((t284 + 0x0));
                                            t284 = 0x8;
                                            u499 = *(float *)((((int)stk + 40) + t284));
                                            t284 = 0x10;
                                            t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u499, u498, 1.0f));
                                        }
                                    }
                                }
                            } else {
                                if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC70)) != 0) {
                                    t284 = 0x8C0321A4;
                                    u526 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u526) {
                                        t284 = 0x1E;
                                        t284 = ((int)((int)(*(int *)0x8C20D198) % (int)t284));
                                        if ((int)t284 < (int)0x14) {
                                            t284 = (sprSheetSet(0x8C108E48));
                                            if (t285 != (*(int *)0x8C2FBE1C)) {
                                                t284 = 0x8C0321B8;
                                                t532 = *(int *)(((int)stk + 52));
                                                u533 = *(float *)((t284 + 0x0));
                                                t284 = 0x10;
                                                *(float *)((t532 + t284)) = ((*(float *)((t532 + t284))) * u533);
                                                t284 = 0x14;
                                                t535 = *(int *)(((int)stk + 52));
                                                *(float *)((t535 + t284)) = ((*(float *)((t535 + t284))) * u533);
                                            }
                                            t284 = 0x8C0321BC;
                                            u541 = *(float *)((t284 + 0x0));
                                            t284 = 0x8;
                                            u542 = *(float *)((((int)stk + 40) + t284));
                                            t284 = 0x10;
                                            t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u542, u541, 1.0f));
                                        }
                                    }
                                }
                            }
                            if ((int)t285 < (int)0x20) {
                                if ((((int)0x1 << (int)t285) & (*(int *)(((*(int *)(((int)stk + 60))) + 0x0)))) != 0) {
                                    t284 = 0x8C0321A4;
                                    u578 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u578) {
                                        t581 = *(int *)0x8C2FBE5C;
                                        if ((int)t581 > (int)0x1E) {
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = 1.0f;
                                        } else {
                                            t284 = 0x8C0322C8;
                                            u582 = *(float *)((t284 + 0x0));
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = ((float)t581 / u582);
                                        }
                                        t284 = (sprSheetSet(0x8C108E24));
                                        t284 = 0x44;
                                        u587 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x8C0322D4;
                                        u588 = *(float *)((t284 + 0x0));
                                        t284 = 0x8;
                                        u589 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x10;
                                        t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u589, u588, u587));
                                    }
                                }
                            } else {
                                t284 = t285;
                                t284 = (t284 - 32);
                                if ((((int)0x1 << (int)t284) & (*(int *)(((*(int *)(((int)stk + 68))) + 0x0)))) != 0) {
                                    t284 = 0x8C0321A4;
                                    u611 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u611) {
                                        t614 = *(int *)0x8C2FBE5C;
                                        if ((int)t614 > (int)0x1E) {
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = 1.0f;
                                        } else {
                                            t284 = 0x8C0322C8;
                                            u615 = *(float *)((t284 + 0x0));
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = ((float)t614 / u615);
                                        }
                                        t284 = (sprSheetSet(0x8C108E24));
                                        t284 = 0x44;
                                        u620 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x8C0322D4;
                                        u621 = *(float *)((t284 + 0x0));
                                        t284 = 0x8;
                                        u622 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x10;
                                        t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u622, u621, u620));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC60)) == 0) {
                        } else {
                            t284 = t285;
                            t284 = (t284 << 2);
                            t284 = (t284 + t285);
                            t284 = (t284 << 2);
                            t284 = (t284 << 1);
                            t284 = (*(int *)(((*(int *)0x8C2FBC50) + t284)));
                            if (t284 != 0) {
                                if (t284 != 1) {
                                    if (t284 == 2) {
                                        t284 = 0x8C0320AC;
                                        t284 = (nlTranslate(0.0f, (*(float *)((t284 + 0x0))), 0.0f));
                                        t284 = (nlObjPut(0xC9E4888));
                                        *(unsigned int *)(((int)stk + 40)) = 0x0;
                                        t284 = (nlPushMatrix(0x0));
                                        t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                        t284 = 0xFC;
                                        u669 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xB4;
                                        *(float *)((((int)stk + 40) + t284)) = u669;
                                        t284 = 0x100;
                                        u670 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xB8;
                                        *(float *)((((int)stk + 40) + t284)) = u670;
                                        t284 = 0x104;
                                        u671 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0xBC;
                                        *(float *)((((int)stk + 40) + t284)) = u671;
                                        t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                        t284 = (nlObjPutMvClosedVolume(0xC9EA3F8));
                                        t284 = (nlPopMatrix(0x1));
                                    }
                                } else {
                                    *(volatile int *)0x8C2FBE1C;
                                    if ((int)t285 < (int)0x20) {
                                        if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC64)) != 0) {
                                            t284 = t285;
                                            t284 = (t284 << 2);
                                            t284 = (t284 + t285);
                                            t284 = (t284 << 2);
                                            t284 = (t284 << 1);
                                            t284 = (t284 + (*(int *)0x8C2FBC50));
                                            t682 = *(int *)((t284 + 0x4));
                                            t284 = 0x8C10BB4C;
                                            *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((t682 * 0x64) + t284))) + 0x1);
                                        }
                                    } else {
                                        if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC68)) != 0) {
                                            t284 = t285;
                                            t284 = (t284 << 2);
                                            t284 = (t284 + t285);
                                            t284 = (t284 << 2);
                                            t284 = (t284 << 1);
                                            t284 = (t284 + (*(int *)0x8C2FBC50));
                                            t691 = *(int *)((t284 + 0x4));
                                            t284 = 0x8C10BB4C;
                                            *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((t691 * 0x64) + t284))) + 0x1);
                                        }
                                    }
                                    if ((*(int *)(((int)stk + 40))) != 0) {
                                        t284 = (nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f));
                                    }
                                    t284 = (nlRotateAY(0x4000));
                                    t284 = 0x8C10BB48;
                                    t712 = *(int *)((((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) * 0x64) + t284));
                                    t284 = 0x8C159B38;
                                    t284 = (nlObjPut((*(int *)(((t712 << 2) + t284)))));
                                    t284 = (nlRotateAY(0xFFFFC000));
                                    t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                    t284 = (*(int *)(((int)stk + 40)));
                                    if (t284 != 3) {
                                        *(unsigned int *)(((int)stk + 40)) = 0x0;
                                    }
                                    t284 = (nlPushMatrix(0x0));
                                    t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                    t284 = 0xFC;
                                    u722 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xB4;
                                    *(float *)((((int)stk + 40) + t284)) = u722;
                                    t284 = 0x100;
                                    u723 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xB8;
                                    *(float *)((((int)stk + 40) + t284)) = u723;
                                    t284 = 0x104;
                                    u724 = *(float *)((((int)stk + 40) + t284));
                                    t284 = 0xBC;
                                    *(float *)((((int)stk + 40) + t284)) = u724;
                                    t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                    t284 = (nlRotateAY(0x4000));
                                    t284 = (nlObjPutMvClosedVolume(0xC9EA3F8));
                                    t284 = (nlRotateAY(0xFFFFC000));
                                    t284 = (nlPopMatrix(0x1));
                                }
                            } else {
                                *(volatile int *)0x8C2FBE1C;
                                if ((int)t285 < (int)0x20) {
                                    if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC64)) != 0) {
                                        t738 = *(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
                                        *(unsigned int *)(((int)stk + 40)) = (((-(*(int *)(((((((t738 << 2) << 2) + t738) << 2) + 0x8C108E5C) + 0x24)))) + (*(int *)(((((((t738 << 2) << 2) + t738) << 2) + 0x8C108E5C) + 0x20)))) + 0x4);
                                    }
                                } else {
                                    if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC68)) != 0) {
                                        t748 = *(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
                                        *(unsigned int *)(((int)stk + 40)) = (((-(*(int *)(((((((t748 << 2) << 2) + t748) << 2) + 0x8C108E5C) + 0x24)))) + (*(int *)(((((((t748 << 2) << 2) + t748) << 2) + 0x8C108E5C) + 0x20)))) + 0x4);
                                    }
                                }
                                if ((*(int *)(((int)stk + 40))) != 0) {
                                    t284 = (nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f));
                                }
                                t284 = 0x8C159B10;
                                t284 = (nlObjPut((*(int *)((((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8))) << 2) + t284)))));
                                t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                t284 = (*(int *)(((int)stk + 40)));
                                if (t284 != 3) {
                                    *(unsigned int *)(((int)stk + 40)) = 0x0;
                                }
                                t284 = (nlPushMatrix(0x0));
                                t284 = (nlGetMatrix((0xA4 + ((int)stk + 40))));
                                t284 = 0xFC;
                                u780 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xB4;
                                *(float *)((((int)stk + 40) + t284)) = u780;
                                t284 = 0x100;
                                u781 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xB8;
                                *(float *)((((int)stk + 40) + t284)) = u781;
                                t284 = 0x104;
                                u782 = *(float *)((((int)stk + 40) + t284));
                                t284 = 0xBC;
                                *(float *)((((int)stk + 40) + t284)) = u782;
                                t284 = (nlLoadMatrix((0xA4 + ((int)stk + 40))));
                                t284 = (nlObjPutMvClosedVolume(0xC9EBB50));
                                t284 = (nlPopMatrix(0x1));
                            }
                            if ((*(int *)(((int)stk + 40))) != 0) {
                                t284 = 0x8C0320D0;
                                t284 = (nlTranslate(0.0f, (*(float *)((t284 + 0x0))), 0.0f));
                                if ((*(int *)(((((((t285 << 2) + t285) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) {
                                    t284 = (nlObjPutCheapEnvMap(0xC9E8110));
                                    t284 = (nlObjPut(0xC9E8110));
                                } else {
                                    t284 = (nlObjPut(0xC9EB7B0));
                                    t284 = (nlObjPutCheapEnvMap(0xC9EA630));
                                    t284 = 0x8C10802C;
                                    t284 = (unlockTestW0((*(int *)((((t285 - 43) << 2) + t284)))));
                                    if (t284 != 0) {
                                        t284 = 0x8C0320EC;
                                        t284 = (nlObjPutSetFadeColor(1.0f, (*(float *)((t284 + 0x0))), 0.300000012f));
                                    }
                                    t284 = (nlObjPut(0xC9EA630));
                                    t284 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                                }
                            }
                            if ((int)t285 < (int)0x20) {
                                if ((((int)0x1 << (int)t285) & (*(int *)0x8C2FBC6C)) != 0) {
                                    t284 = 0x8C0321A4;
                                    u814 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u814) {
                                        t284 = 0x1E;
                                        t284 = ((int)((int)(*(int *)0x8C20D198) % (int)t284));
                                        if ((int)t284 < (int)0x14) {
                                            t284 = (sprSheetSet(0x8C108E48));
                                            if (t285 != (*(int *)0x8C2FBE1C)) {
                                                t284 = 0x8C0321B8;
                                                t820 = *(int *)(((int)stk + 52));
                                                u821 = *(float *)((t284 + 0x0));
                                                t284 = 0x10;
                                                *(float *)((t820 + t284)) = ((*(float *)((t820 + t284))) * u821);
                                                t284 = 0x14;
                                                t823 = *(int *)(((int)stk + 52));
                                                *(float *)((t823 + t284)) = ((*(float *)((t823 + t284))) * u821);
                                            }
                                            t284 = 0x8C0321BC;
                                            u829 = *(float *)((t284 + 0x0));
                                            t284 = 0x8;
                                            u830 = *(float *)((((int)stk + 40) + t284));
                                            t284 = 0x10;
                                            t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u830, u829, 1.0f));
                                        }
                                    }
                                }
                            } else {
                                if ((((int)0x1 << (int)(t285 - 32)) & (*(int *)0x8C2FBC70)) != 0) {
                                    t284 = 0x8C0321A4;
                                    u857 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u857) {
                                        t284 = 0x1E;
                                        t284 = ((int)((int)(*(int *)0x8C20D198) % (int)t284));
                                        if ((int)t284 < (int)0x14) {
                                            t284 = (sprSheetSet(0x8C108E48));
                                            if (t285 != (*(int *)0x8C2FBE1C)) {
                                                t284 = 0x8C0321B8;
                                                t863 = *(int *)(((int)stk + 52));
                                                u864 = *(float *)((t284 + 0x0));
                                                t284 = 0x10;
                                                *(float *)((t863 + t284)) = ((*(float *)((t863 + t284))) * u864);
                                                t284 = 0x14;
                                                t866 = *(int *)(((int)stk + 52));
                                                *(float *)((t866 + t284)) = ((*(float *)((t866 + t284))) * u864);
                                            }
                                            t284 = 0x8C0321BC;
                                            u872 = *(float *)((t284 + 0x0));
                                            t284 = 0x8;
                                            u873 = *(float *)((((int)stk + 40) + t284));
                                            t284 = 0x10;
                                            t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u873, u872, 1.0f));
                                        }
                                    }
                                }
                            }
                            if ((int)t285 < (int)0x20) {
                                if ((((int)0x1 << (int)t285) & (*(int *)(((*(int *)(((int)stk + 60))) + 0x0)))) != 0) {
                                    t284 = 0x8C0321A4;
                                    u909 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u909) {
                                        t912 = *(int *)0x8C2FBE5C;
                                        if ((int)t912 > (int)0x1E) {
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = 1.0f;
                                        } else {
                                            t284 = 0x8C0322C8;
                                            u913 = *(float *)((t284 + 0x0));
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = ((float)t912 / u913);
                                        }
                                        t284 = (sprSheetSet(0x8C108E24));
                                        t284 = 0x44;
                                        u918 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x8C0322D4;
                                        u919 = *(float *)((t284 + 0x0));
                                        t284 = 0x8;
                                        u920 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x10;
                                        t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u920, u919, u918));
                                    }
                                }
                            } else {
                                t284 = t285;
                                t284 = (t284 - 32);
                                if ((((int)0x1 << (int)t284) & (*(int *)(((*(int *)(((int)stk + 68))) + 0x0)))) != 0) {
                                    t284 = 0x8C0321A4;
                                    u942 = *(float *)((t284 + 0x0));
                                    t284 = 0xA0;
                                    if ((*(float *)((((int)stk + 40) + t284))) > u942) {
                                        t945 = *(int *)0x8C2FBE5C;
                                        if ((int)t945 > (int)0x1E) {
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = 1.0f;
                                        } else {
                                            t284 = 0x8C0322C8;
                                            u946 = *(float *)((t284 + 0x0));
                                            t284 = 0x44;
                                            *(float *)((((int)stk + 40) + t284)) = ((float)t945 / u946);
                                        }
                                        t284 = (sprSheetSet(0x8C108E24));
                                        t284 = 0x44;
                                        u951 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x8C0322D4;
                                        u952 = *(float *)((t284 + 0x0));
                                        t284 = 0x8;
                                        u953 = *(float *)((((int)stk + 40) + t284));
                                        t284 = 0x10;
                                        t284 = (sprSheetPut(0xA, (*(float *)((((int)stk + 40) + t284))), u953, u952, u951));
                                    }
                                }
                            }
                        }
                    }
                    t284 = (nlPopMatrix(0x1));
                    t285 = (t285 + 0x1);
                    continue;
                }
                break;
            }
            t999 = *(int *)0x8C2FBE5C;
            *(unsigned int *)0x8C2FBE5C = (t999 - 1);
            if ((int)(t999 - 1) < 0) {
                *(unsigned int *)0x8C2FBE58 = 0x0;
                *(unsigned int *)0x8C2FBE54 = 0x0;
            }
            nlPopMatrix(0x1);
            circuitDrawFrame();
            circuitDrawStage(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 40), *(int *)((int)stk + 40 + 4));
            circuitDrawStatus();
        }
    }
    circuitPanelDraw(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 40), *(int *)((int)stk + 40 + 4), *(int *)((int)stk + 40 + 8), *(int *)((int)stk + 40 + 12), *(int *)((int)stk + 40 + 16), *(int *)((int)stk + 40 + 20), *(int *)((int)stk + 40 + 24), *(int *)((int)stk + 40 + 28));
    t1022 = *(int *)0x8C2FBE1C;
    if ((*(int *)(((*(int *)0x8C2FBC50) + ((((t1022 << 2) + t1022) << 2) << 1)))) == 1) {
        circuitDrawGameIcon();
    }
    t1030 = *(int *)0x8C2FBE1C;
    if ((*(int *)(((((((t1030 << 2) + t1030) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) {
        circuitDrawMatchIcon();
    }
    if ((*(int *)0x8C2FBE40) == 0x2710) {
        fadeDraw();
    }
    fadeCaptureEnd(0x0);
    if ((*(int *)0x8C2FBE40) == 0x2710) {
        fadeStart(0x1E);
        t1049 = *(int *)0x8C2FBE1C;
        t1051 = *(int *)(((*(int *)0x8C2FBC50) + ((((t1049 << 2) + t1049) << 2) << 1)));
        if (t1051 != 0) {
            if (t1051 != 1) {
                if (t1051 != 2) {
                } else {
                    *(unsigned int *)0x8C20D150 = 0xB;
                }
            } else {
                *(unsigned int *)0x8C20D150 = 0x1;
            }
        } else {
            *(unsigned int *)0x8C20D150 = 0x1;
        }
        t1065 = 0x8C20D150;
    }
    t1098 = t1065;
    if ((*(int *)0x8C2FBE40) == 2) {
        sprWtcFree();
        stageWtcMainTexFree();
        t1070 = *(int *)0x8C2FBE78;
        if (t1070 != -1) {
            sprSet280Free(t1070);
        } else {
            t1074 = t1070;
        }
        *(unsigned int *)0x8C2FBE78 = 0xFFFFFFFF;
        if ((*(int *)0x8C2FBE80) != -1) {
            sprSet322Load((*(int *)0x8C2FBE80));
        } else {
            t1083 = t1074;
        }
        if ((*(int *)0x8C2FBE7C) != -1) {
            *(volatile int *)0x8C2FBE7C;
            sprSet331Load();
        } else {
            t1092 = t1083;
        }
        t1098 = t1092;
    }
    t1140 = t1098;
    if ((*(int *)0x8C2FBE40) == 13) {
        t1102 = *(int *)0x8C2FBE80;
        if (t1102 != -1) {
            sprSet322Free(t1102);
        }
        if ((*(int *)0x8C2FBE7C) != -1) {
            sprSet331Free();
        }
        stageTexSetGarbagedAll();
        t1119 = *(int *)0x8C2FBE1C;
        t1121 = *(int *)(((*(int *)0x8C2FBC50) + ((((t1119 << 2) + t1119) << 2) << 1)));
        t1122 = *(int *)0x8C287D5C;
        if ((t1121 != 0) && (t1121 != 1)) {
            if (t1121 != 2) {
                t1128 = t1122;
            } else {
                resWtcShopRelease();
            }
            t1135 = t1128;
        } else {
            stageMinigameLoadBegin(t1122);
        }
        t1140 = t1135;
    }
    if ((int)(*(int *)0x8C2FBE40) > (int)0xC) {
        t1146 = *(int *)0x8C2FBE1C;
        t1148 = *(int *)(((*(int *)0x8C2FBC50) + ((((t1146 << 2) + t1146) << 2) << 1)));
        if (t1148 != 2) {
            if (t1148 != 0) {
                t1198 = t1140;
                if (t1148 == 1) {
                    t1149 = stageMinigameLoadStep(t1140);
                    t1193 = t1149;
                    if ((*(int *)(((*(int *)(((int)stk + 64))) + 0x10))) == -1) {
                        if ((int)(*(int *)0x8C2FBE1C) < (int)0x20) {
                            t1168 = t1149;
                            if ((((int)0x1 << (int)(*(int *)0x8C2FBE1C)) & (*(int *)0x8C2FBC64)) == 0) {
                                if (((*(int *)0x8C2FBE0C) == (*(int *)(((int)stk + 76)))) && (t1149 != 0)) {
                                    circuitTaskAdd(0x8C036308, 0xFA, 0x19A);
                                }
                                t1168 = 0x0;
                            }
                            t1188 = t1168;
                        } else {
                            t1183 = t1149;
                            if ((((int)0x1 << (int)((*(int *)0x8C2FBE1C) - 32)) & (*(int *)0x8C2FBC68)) == 0) {
                                if (((*(int *)0x8C2FBE0C) == (*(int *)(((int)stk + 76)))) && (t1149 != 0)) {
                                    circuitTaskAdd(0x8C036308, 0xFA, 0x19A);
                                }
                                t1183 = 0x0;
                            }
                            t1188 = t1183;
                        }
                        t1193 = t1188;
                    }
                    t1198 = t1193;
                }
                t1204 = t1198;
            } else {
                t1204 = (stageMinigameLoadStep(t1140));
            }
            t1210 = t1204;
        } else {
            t1210 = (resWtcShopLoadStep());
        }
        if (t1210 != 0) {
            *(unsigned int *)0x8C2FBE40 = 0x270F;
        }
    }
    lightSet(0xF400, 0xDC00, 0xFF, 0x64);
    lightUpdate(0x0);
    *(float *)0x8C287A04 = (*(float *)0x8C032598);
    return (camSetupView());
}

float FUN_8c0ac6ec(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[63];

    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F14;
    register int T_;
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
    register float w0_2;
    register float w0_3;
    v0_9 = a4;
    v0_5 = a5;
    v0_0 = a6;
    v0_1 = a7;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = f6;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x74)) = *(struct mv4 *)(0x8C110EF0); }
    v0_5 = *(int *)0x8C20D150;
    v0_10 = (v0_5);
    v0_2 = (0x8C343258);
    v0_10 = (0x8C343ADC);
    v0_8 = (0x8C343AEC);
    v0_4 = (0x0);
    v0_3 = (0x4);
    v0_6 = (0x1);
    if ((v0_5 == 5)) goto L_8C0AC72A;
    L_8C0AD140:;
    return F0;
    L_8C0AC72A:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    v0_9 = (0x8C185298);
    v0_5 = (0x8C1852A0);
    L_8C0AC748:;
    if (((unsigned int)v0_9 < (unsigned int)v0_5)) goto L_8C0AC734;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_8C0AC762;
    *(unsigned int *)(((int)stk + 144)) = v0_6;
    *(unsigned int *)(((int)stk + 140)) = v0_6;
    *(unsigned int *)(((int)stk + 136)) = v0_6;
    *(unsigned int *)(((int)stk + 132)) = v0_6;
    L_8C0AC762:;
    *(volatile int *)((v0_2 + 0x0));
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    v0_7 = (v0_4);
    L_8C0AC85A:;
    if (((int)(*(int *)(((int)stk + 28))) < (int)v0_3)) goto L_8C0AC770;
    v0_7 = (v0_4);
    L_8C0ACC1C:;
    if (((int)v0_7 >= (int)v0_3)) goto L_8C0ACC24;
    if (!((((unsigned short)(*(short *)((v0_2 + 0xA))) & (unsigned short)(*(short *)(((v0_7 << 1) + 0x8C185298)))) != 0))) goto L_8C0ACC1A;
    if (((*(int *)((0x8C185428 + (v0_7 << 2)))) == -1)) goto L_8C0AC88A;
    goto L_8C0ACC1A;
    L_8C0ACC1A:;
    v0_7 = ((v0_7 + 0x1));
    goto L_8C0ACC1C;
    L_8C0AC88A:;
    *(unsigned int *)((((0xB4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)) = v0_4;
    *(unsigned int *)((((0xA4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)) = v0_4;
    *(unsigned int *)((((0x84 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)) = v0_4;
    *(unsigned int *)((((0x94 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)) = v0_4;
    v0_9 = (padDirRepeat(v0_7, 0x10)) == 0;
    if (v0_9) goto L_8C0AC8CA;
    *(unsigned int *)((((v0_7 << 2) + (0xB4 + ((int)stk + 16))) + 0x0)) = v0_6;
    L_8C0AC940:;
    v0_9 = ((v0_7 << 2));
    if (((*(int *)((((0xB4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) != 0)) goto L_8C0AC974;
    if (((*(int *)((((0xA4 + ((int)stk + 16)) + v0_9) + 0x0))) != 0)) goto L_8C0AC974;
    if (((*(int *)((((0x84 + ((int)stk + 16)) + v0_9) + 0x0))) != 0)) goto L_8C0AC974;
    if (!(((*(int *)((((0x94 + ((int)stk + 16)) + v0_9) + 0x0))) == 0))) goto L_8C0AC974;
    v0_9 = (v0_6);
    goto L_8C0AC97A;
    L_8C0AC974:;
    v0_9 = (v0_4);
    L_8C0AC97A:;
    if (!((v0_9 == 0))) goto L_8C0ACBA0;
    v0_9 = ((v0_7 << 2));
    if (((*(int *)((((0xB4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) == 0)) goto L_8C0ACA1C;
    if (((*(int *)((((((int)stk + 16) + 0x74) + v0_9) + 0x0))) != 0)) goto L_8C0ACA1C;
    *(unsigned int *)(((int)stk + 16)) = (v0_7 << 2);
    v0_11 = entryGridMove((*(int *)((v0_8 + (v0_7 << 2)))), 0x0);
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0)) = ((*(int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0))) + 0x1);
    v0_9 = (v0_11);
    if ((v0_11 != -1)) goto L_8C0AC9C6;
    goto L_8C0ACBA0;
    L_8C0ACBA0:;
    v0_9 = ((v0_7 << 2));
    if ((((((*(int *)((((0x84 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) & (*(int *)((((0x94 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)))) & (*(int *)((((0xB4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)))) & (*(int *)((((0xA4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0)))) != 0)) goto L_8C0ACC1A;
    if (((*(int *)((((((int)stk + 16) + 0x74) + v0_9) + 0x0))) != 0)) goto L_8C0ACC1A;
    v0_9 = ((v0_7 << 2));
    if ((((*(int *)(((*(int *)(((v0_7 << 2) + 0x8C29B898))) + 0x10))) & 5) == 0)) goto L_8C0ACC1A;
    if (((*(int *)((((*(int *)((v0_9 + 0x8C343AEC))) << 2) + 0x8C343ADC))) == 5)) goto L_8C0ACC1A;
    *(unsigned int *)(((0x8C185428 + (v0_7 << 2)) + 0x0)) = (*(int *)((((v0_7 << 2) + v0_8) + 0x0)));
    *(unsigned int *)((v0_10 + ((*(int *)((((v0_7 << 2) + v0_8) + 0x0))) << 2))) = 0x5;
    *(unsigned int *)((((*(int *)((((v0_7 << 2) + v0_8) + 0x0))) << 2) + 0x8C185438)) = v0_7;
    nlsndSeqRequest(0x5A9);
    goto L_8C0ACC1A;
    L_8C0AC9C6:;
    if (((int)(*(int *)(((v0_9 << 2) + 0x8C343ADC))) < (int)0x4)) goto L_8C0AC9D8;
    goto L_8C0ACBA0;
    L_8C0AC9D8:;
    *(unsigned int *)((((v0_7 << 2) + v0_8) + 0x0)) = v0_9;
    *(unsigned int *)((v0_10 + (v0_9 << 2))) = ((*(int *)((v0_10 + (v0_9 << 2)))) + 0x1);
    v0_5 = ((v0_7 << 2));
    v0_0 = (((v0_7 << 2) + v0_8));
    if (!(((*(int *)(((((*(int *)(((v0_7 << 2) + 0x8C343AFC))) << 2) + v0_10) + 0x0))) == 5))) goto L_8C0ACB90;
    goto L_8C0ACBA0;
    L_8C0ACB90:;
    v0_9 = *(int *)((0x8C343AFC + (v0_7 << 2)));
    *(unsigned int *)((v0_10 + (v0_9 << 2))) = ((*(int *)((v0_10 + (v0_9 << 2)))) - 1);
    goto L_8C0ACBA0;
    L_8C0ACA1C:;
    v0_9 = ((v0_7 << 2));
    if (((*(int *)((((0xA4 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) == 0)) goto L_8C0ACA9C;
    if (((*(int *)((((((int)stk + 16) + 0x74) + v0_9) + 0x0))) != 0)) goto L_8C0ACA9C;
    *(unsigned int *)(((int)stk + 16)) = (v0_7 << 2);
    v0_11 = entryGridMove((*(int *)((v0_8 + (v0_7 << 2)))), 0x1);
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0)) = ((*(int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0))) + 0x1);
    v0_9 = (v0_11);
    if ((v0_11 != -1)) goto L_8C0ACA60;
    goto L_8C0ACBA0;
    L_8C0ACA60:;
    if (((int)(*(int *)(((v0_9 << 2) + 0x8C343ADC))) < (int)0x4)) goto L_8C0ACA72;
    goto L_8C0ACBA0;
    L_8C0ACA72:;
    *(unsigned int *)((((v0_7 << 2) + v0_8) + 0x0)) = v0_9;
    *(unsigned int *)((v0_10 + (v0_9 << 2))) = ((*(int *)((v0_10 + (v0_9 << 2)))) + 0x1);
    v0_5 = (((v0_7 << 2) + v0_8));
    v0_0 = ((v0_7 << 2));
    if (((*(int *)(((((*(int *)(((v0_7 << 2) + 0x8C343AFC))) << 2) + v0_10) + 0x0))) == 5)) goto L_8C0ACA98;
    goto L_8C0ACB90;
    L_8C0ACA98:;
    goto L_8C0ACBA0;
    L_8C0ACA9C:;
    v0_9 = ((v0_7 << 2));
    if (((*(int *)((((0x94 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) == 0)) goto L_8C0ACB20;
    if (((*(int *)((((((int)stk + 16) + 0x74) + v0_9) + 0x0))) != 0)) goto L_8C0ACB20;
    *(unsigned int *)(((int)stk + 16)) = (v0_7 << 2);
    v0_11 = entryGridMove((*(int *)((v0_8 + (v0_7 << 2)))), 0x2);
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0)) = ((*(int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0))) + 0x1);
    v0_9 = (v0_11);
    if ((v0_11 == -1)) goto L_8C0ACBA0;
    if (((int)(*(int *)(((v0_9 << 2) + 0x8C343ADC))) >= (int)0x4)) goto L_8C0ACBA0;
    *(unsigned int *)((((v0_7 << 2) + v0_8) + 0x0)) = v0_9;
    *(unsigned int *)((v0_10 + (v0_9 << 2))) = ((*(int *)((v0_10 + (v0_9 << 2)))) + 0x1);
    v0_5 = (((v0_7 << 2) + v0_8));
    v0_0 = ((v0_7 << 2));
    if (((*(int *)(((((*(int *)(((v0_7 << 2) + 0x8C343AFC))) << 2) + v0_10) + 0x0))) == 5)) goto L_8C0ACBA0;
    goto L_8C0ACB90;
    L_8C0ACB20:;
    v0_9 = ((v0_7 << 2));
    if (((*(int *)((((0x84 + ((int)stk + 16)) + (v0_7 << 2)) + 0x0))) == 0)) goto L_8C0ACBA0;
    if (((*(int *)((((((int)stk + 16) + 0x74) + v0_9) + 0x0))) != 0)) goto L_8C0ACBA0;
    *(unsigned int *)(((int)stk + 16)) = (v0_7 << 2);
    v0_11 = entryGridMove((*(int *)((v0_8 + (v0_7 << 2)))), 0x3);
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0)) = ((*(int *)(((v0_9 + (((int)stk + 16) + 0x74)) + 0x0))) + 0x1);
    v0_9 = (v0_11);
    if ((v0_11 == -1)) goto L_8C0ACBA0;
    if (((int)(*(int *)(((v0_9 << 2) + 0x8C343ADC))) >= (int)0x4)) goto L_8C0ACBA0;
    *(unsigned int *)((((v0_7 << 2) + v0_8) + 0x0)) = v0_9;
    *(unsigned int *)((v0_10 + (v0_9 << 2))) = ((*(int *)((v0_10 + (v0_9 << 2)))) + 0x1);
    v0_5 = ((v0_7 << 2));
    v0_0 = (((v0_7 << 2) + v0_8));
    if (((*(int *)(((((*(int *)(((v0_7 << 2) + 0x8C343AFC))) << 2) + v0_10) + 0x0))) == 5)) goto L_8C0ACBA0;
    goto L_8C0ACB90;
    L_8C0AC8CA:;
    v0_9 = (padDirRepeat(v0_7, 0x20)) == 0;
    if (v0_9) goto L_8C0AC8E6;
    *(unsigned int *)((((v0_7 << 2) + (0xA4 + ((int)stk + 16))) + 0x0)) = v0_6;
    goto L_8C0AC940;
    L_8C0AC8E6:;
    v0_9 = (padDirRepeat(v0_7, 0x40)) == 0;
    if (v0_9) goto L_8C0AC928;
    *(unsigned int *)((((v0_7 << 2) + (0x84 + ((int)stk + 16))) + 0x0)) = v0_6;
    goto L_8C0AC940;
    L_8C0AC928:;
    v0_9 = (padDirRepeat(v0_7, 0x80)) == 0;
    if (v0_9) goto L_8C0AC940;
    *(unsigned int *)((((v0_7 << 2) + (0x94 + ((int)stk + 16))) + 0x0)) = v0_6;
    goto L_8C0AC940;
    L_8C0ACC24:;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    *(unsigned int *)(((int)stk + 28)) = 0x8C185428;
    v0_7 = (v0_4);
    L_8C0ACCA0:;
    if (((int)(*(int *)(((int)stk + 24))) < (int)v0_3)) goto L_8C0ACC5C;
    *(unsigned int *)(((int)stk + 16)) = 0x8C185438;
    v0_11 = *(int *)0x8C287D5C;
    v0_10 = (v0_11);
    v0_7 = (0x8C343D5C);
    v0_9 = (0x8C185428);
    if (!((v0_11 == 1))) goto L_8C0ACFDE;
    goto L_8C0ACCCE;
    L_8C0ACFDE:;
    if (((unsigned int)v0_9 < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_8C0ACFD0;
    if (((*(int *)(((int)stk + 20))) != (*(int *)((v0_2 + 0x0))))) goto L_8C0AD088;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)0xC)) goto L_8C0ACFFA;
    v0_8 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)((v0_7 + 0x0)) = (v0_8 + 0x1);
    v0_10 = ((v0_8 + 0x1));
    L_8C0ACFFA:;
    *(unsigned int *)(((int)stk + 20)) = 0x8C29B898;
    *(unsigned int *)(((int)stk + 16)) = 0x8C29B8A8;
    L_8C0AD02A:;
    if (((unsigned int)(*(int *)(((int)stk + 20))) < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_8C0AD004;
    *(unsigned int *)(((int)stk + 20)) = (0x5 - ((int)((int)(*(int *)((v0_7 + 0x0))) / (int)0x3C)));
    *(float *)0x8C343DA4 = 70.0f;
    if (((*(int *)0x8C343D94) == 0)) goto L_8C0AD05E;
    *(unsigned int *)0x8C20D150 = v0_6;
    entryAssignSelecters();
    selInit();
    L_8C0AD05E:;
    if (((int)(*(int *)(((int)stk + 20))) > 0)) goto L_8C0AD092;
    v0_6 = *(int *)0x8C18549C;
    *(unsigned int *)0x8C18549C = (v0_6 + 0x1);
    if (((int)(v0_6 + 0x1) <= (int)0x2)) goto L_8C0AD092;
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
    *(unsigned int *)0x8C343D94 = ((*(int *)0x8C343D94) + 0x1);
    L_8C0AD092:;
    *(float *)0x8C343D98 = (mathLerp((*(float *)0x8C343D98), (*(float *)0x8C343DA4), 0.300000012f));
    L_8C0AD0A6:;
    v0_10 = ((entryGridDraw(v0_9, v0_5, v0_0, v0_1, w0_0)));
    v0_7 = (v0_4);
    L_8C0AD13C:;
    if (((int)v0_7 < (int)v0_3)) goto L_8C0AD0F8;
    goto L_8C0AD140;
    L_8C0AD0F8:;
    v0_4 = *(short *)((v0_2 + 0xA));
    v0_10 = ((unsigned short)v0_4);
    if ((((unsigned short)v0_4 & (unsigned short)(*(short *)(((v0_7 << 1) + 0x8C185298)))) != 0)) goto L_8C0AD13A;
    v0_4 = *(int *)(((*(int *)((0x8C29B898 + (v0_7 << 2)))) + 0x10));
    v0_10 = (v0_4);
    if (((v0_4 & 8) == 0)) goto L_8C0AD13A;
    if (((*(int *)0x8C18549C) != 0)) goto L_8C0AD13A;
    if (((*(int *)0x8C287ADC) != 2)) goto L_8C0AD134;
    v0_4 = entryCountJoined();
    v0_10 = (v0_4);
    if (((int)v0_4 >= (int)0x2)) goto L_8C0AD13A;
    L_8C0AD134:;
    v0_10 = ((entryPortJoin(v0_7, v0_5, v0_0, v0_1, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12))));
    L_8C0AD13A:;
    v0_7 = ((v0_7 + 0x1));
    goto L_8C0AD13C;
    L_8C0AD004:;
    v0_8 = *(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0x10));
    v0_10 = (v0_8);
    if (((v0_8 & 5) == 0)) goto L_8C0AD024;
    if (((int)(*(int *)0x8C343D5C) <= (int)0xA)) goto L_8C0AD024;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) + 0x3E8);
    v0_10 = ((sndSeDecide()));
    L_8C0AD024:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x4);
    goto L_8C0AD02A;
    L_8C0AD088:;
    *(unsigned int *)((v0_7 + 0x0)) = v0_4;
    *(float *)0x8C343DA4 = -200.0f;
    goto L_8C0AD092;
    L_8C0ACFD0:;
    v0_8 = (int)(*(int *)((v0_9 + 0x0))) < 0;
    v0_9 = ((v0_9 + 0x4));
    if (v0_8) goto L_8C0ACFDE;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    goto L_8C0ACFDE;
    L_8C0ACCCE:;
    if (((unsigned int)v0_9 < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_8C0ACCC0;
    if (((*(int *)(((int)stk + 20))) == (*(int *)((v0_2 + 0x0))))) goto L_8C0ACCE0;
    *(unsigned int *)((v0_7 + 0x0)) = v0_4;
    *(float *)0x8C18D2D0 = 0.0f;
    *(unsigned int *)0x8C1855E4 = v0_4;
    *(float *)0x8C1855E8 = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C343DB4) = *(struct mv3 *)(0x8C110DDC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C343DC0) = *(struct mv3 *)(0x8C110DE8); }
    w0_0 = (0.0f);
    goto L_8C0AD0A6;
    L_8C0ACCE0:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x64)) = *(struct mv4 *)(0x8C110F00); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 16) + 0x34)) = *(struct mv12 *)(0x8C110F10); }
    v0_9 = (0x8C185298);
    v0_5 = ((((int)stk + 16) + 0x64));
    v0_0 = (v0_8);
    v0_1 = (0x8C1852A0);
    L_8C0ACD1C:;
    if (((unsigned int)v0_9 < (unsigned int)v0_1)) goto L_8C0ACD06;
    v0_8 = *(int *)0x8C287ADC;
    v0_10 = (v0_8);
    if ((v0_8 != 2)) goto L_8C0ACD2C;
    *(unsigned int *)((v0_5 + 0x8)) = v0_4;
    *(unsigned int *)((v0_5 + 0x4)) = v0_4;
    L_8C0ACD2C:;
    *(unsigned int *)(((int)stk + 20)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x18);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 16) + 0x18);
    *(unsigned int *)(((int)stk + 24)) = v0_5;
    L_8C0ACDE0:;
    if (((int)(*(int *)(((int)stk + 20))) < (int)v0_3)) goto L_8C0ACD3A;
    w0_3 = (0.5f);
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)0xF)) goto L_8C0ACE32;
    *(float *)0x8C343DB4 = (mathLerp((*(float *)0x8C343DB4), (*(float *)0x8C110DE8), w0_3));
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) + 0x1);
    *(float *)0x8C18D2D0 = (mathLerp((*(float *)0x8C18D2D0), 210.0f, 0.200000003f));
    *(float *)0x8C1855E8 = (mathLerp((*(float *)0x8C1855E8), 180.0f, 0.200000003f));
    L_8C0ACE32:;
    if (((int)(*(int *)((v0_7 + 0x0))) < (int)0xA)) goto L_8C0ACE4C;
    *(float *)0x8C343DC0 = (mathLerp((*(float *)0x8C343DC0), (*(float *)0x8C110DDC), w0_3));
    L_8C0ACE4C:;
    v0_9 = (0x8C29B898);
    v0_5 = (0x8C29B8A8);
    L_8C0ACECE:;
    if (((unsigned int)v0_9 < (unsigned int)v0_5)) goto L_8C0ACEBC;
    v0_7 = (0x8C1855E4);
    if (((*(int *)0x8C1855E4) == 0)) goto L_8C0ACEE0;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) + 0x1);
    L_8C0ACEE0:;
    if (((int)(*(int *)0x8C1855E4) > (int)0x5)) goto L_8C0ACEEE;
    goto L_8C0AD0A6;
    L_8C0ACEEE:;
    *(unsigned int *)0x8C1855E4 = ((*(int *)0x8C1855E4) + 0x1);
    if (((*(int *)0x8C343D94) == 0)) goto L_8C0ACF14;
    if (((*(int *)0x8C287ADC) != 4)) goto L_8C0ACF0C;
    entryAssignSelecters();
    L_8C0ACF0C:;
    *(unsigned int *)0x8C20D150 = v0_6;
    selInit();
    L_8C0ACF14:;
    v0_7 = (entryGridSettingsStep(v0_9, v0_5, v0_0, v0_1, w0_0, w0_1, w0_2)) != 0;
    if (v0_7) goto L_8C0ACF22;
    goto L_8C0AD0A6;
    L_8C0ACF22:;
    *(unsigned int *)0x8C343D94 = v0_6;
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
    v0_6 = (memcmp(0x8C40C2F4, 0x8C343DE4, 0x128)) != 0;
    if (v0_6) goto L_8C0ACF44;
    goto L_8C0AD0A6;
    L_8C0ACF44:;
    BupRequestSave(0x0, 0x8C110F50, 0x8C40C2F4, 0x128);
    goto L_8C0AD0A6;
    L_8C0ACEBC:;
    v0_7 = ((*(int *)(((*(int *)((v0_9 + 0x0))) + 0x10))) & 5) == 0;
    v0_9 = ((v0_9 + 0x4));
    if (v0_7) goto L_8C0ACECE;
    *(unsigned int *)0x8C1855E4 = ((*(int *)0x8C1855E4) + 0x1);
    goto L_8C0ACECE;
    L_8C0ACD3A:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x18)) = *(struct mv4 *)(0x8C110F40); }
    v0_5 = *(int *)(((int)stk + 20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x28)) = *(struct mv3 *)(((((v0_5 << 1) + v0_5) << 2) + (((int)stk + 16) + 0x34))); }
    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + (*(float *)0x8C18D2DC));
    v0_10 = (0x28);
    v0_5 = (0x8C18D2DC);
    if (((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) == 0)) goto L_8C0ACDC8;
    if (((*(int *)(((((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) * 0x38) + (v0_2 + 0xC)) + 0x8))) != 1)) goto L_8C0ACD9E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
    v0_9 = (0x4);
    L_8C0ACDC0:;
    v0_10 = ((markerHitSpawn(v0_9, *(Stk3 *)(((int)stk + 4)))));
    L_8C0ACDC8:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x4);
    goto L_8C0ACDE0;
    L_8C0ACD9E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
    v0_9 = (((*(int *)(((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) * 0x38) + (v0_2 + 0xC)) + 0x4))) + 0x4));
    goto L_8C0ACDC0;
    L_8C0ACD06:;
    if ((((unsigned short)(*(short *)((v0_2 + 0xA))) & (unsigned short)(*(short *)((v0_9 + 0x0)))) == 0)) goto L_8C0ACD18;
    *(unsigned int *)((v0_5 + ((*(int *)((v0_0 + 0x0))) << 2))) = v0_4;
    L_8C0ACD18:;
    v0_9 = ((v0_9 + 0x2));
    v0_0 = ((v0_0 + 0x4));
    goto L_8C0ACD1C;
    L_8C0ACCC0:;
    v0_10 = (int)(*(int *)((v0_9 + 0x0))) < 0;
    v0_9 = ((v0_9 + 0x4));
    if (v0_10) goto L_8C0ACCCE;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    goto L_8C0ACCCE;
    L_8C0ACC5C:;
    if ((((unsigned short)(*(short *)((v0_2 + 0xA))) & (unsigned short)(*(short *)((((*(int *)(((int)stk + 24))) << 1) + 0x8C185298)))) == 0)) goto L_8C0ACC8C;
    if (((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) != -1)) goto L_8C0ACC8C;
    v0_10 = *(int *)(((int)stk + 16));
    v0_9 = (0x8C343AFC);
    if (((*(int *)((0x8C343AFC + v0_10))) == (*(int *)((v0_8 + v0_10))))) goto L_8C0ACC8C;
    *(unsigned int *)((v0_9 + v0_7)) = (*(int *)((v0_8 + v0_7)));
    sndSeCursor();
    L_8C0ACC8C:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
    v0_7 = ((v0_7 + 0x4));
    goto L_8C0ACCA0;
    L_8C0AC770:;
    if ((((unsigned short)(*(short *)((v0_2 + 0xA))) & (unsigned short)(*(short *)((((*(int *)(((int)stk + 28))) << 1) + 0x8C185298)))) == 0)) goto L_8C0AC846;
    if ((((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8C29B898))) + 0x10))) & 2) == 0)) goto L_8C0AC846;
    if (((*(int *)0x8C343844) != 2)) goto L_8C0AC79E;
    if (((*(int *)0x8C287D5C) != 1)) goto L_8C0AC846;
    L_8C0AC79E:;
    if (((*(int *)((((*(int *)(((int)stk + 24))) + (((int)stk + 16) + 0x74)) + 0x0))) != 0)) goto L_8C0AC846;
    *(unsigned int *)((((((int)stk + 16) + 0x74) + v0_7) + 0x0)) = ((*(int *)((((((int)stk + 16) + 0x74) + v0_7) + 0x0))) + 0x1);
    if (((*(int *)(((((*(int *)((v0_8 + v0_7))) << 2) + v0_10) + 0x0))) != 5)) goto L_8C0AC830;
    if (((*(int *)((v0_7 + 0x8C185428))) == -1)) goto L_8C0AC830;
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 32)) = (v0_9 + v0_8);
    *(unsigned int *)((((*(int *)(((v0_9 + v0_8) + 0x0))) << 2) + 0x8C185438)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8C185428)) = 0xFFFFFFFF;
    v0_9 = *(int *)(((*(int *)(((int)stk + 32))) + 0x0));
    *(unsigned int *)(((int)stk + 36)) = v0_9;
    *(int *)((int)stk + 12) = ((v0_9 << 2) + v0_10);
    *(unsigned int *)((((v0_9 << 2) + v0_10) + 0x0)) = (entryGridCount((*(int *)(((int)stk + 36)))));
    L_8C0AC846:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x4);
    v0_7 = ((v0_7 + 0x4));
    goto L_8C0AC85A;
    L_8C0AC830:;
    *(unsigned int *)0x8C20D14C = v0_4;
    *(unsigned int *)0x8C20D150 = 0x3;
    entryInit();
    selPortReset();
    goto L_8C0AC846;
    L_8C0AC734:;
    v0_7 = ((unsigned short)(*(short *)((v0_2 + 0xA))) & (unsigned short)(*(short *)((v0_9 + 0x0)))) == 0;
    v0_9 = ((v0_9 + 0x2));
    if (v0_7) goto L_8C0AC748;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_8C0AC748;
}

float FUN_8c06e26c(int a4)
{
    int stk[10];

    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(unsigned int *)(((int)stk + 28)) = (((((*(int *)((0xB5C + v0_0))) + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    *(unsigned int *)(((int)stk + 16)) = (((*(int *)(((*(int *)(((int)stk + 32))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 12)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 28))) + 0xB5C))) * 0x160));
    *(unsigned int *)(((int)stk + 8)) = 0x8C291F24;
    v0_1 = (0x12E);
    if (((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x12E))) == 0)) goto L_8C06E2BC;
    L_8C06ECAA:;
    return F0;
    L_8C06E2BC:;
    v0_1 = (0x12E);
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x12E))) == 0)) goto L_8C06E2CA;
    goto L_8C06ECAA;
    L_8C06E2CA:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xAF0))))) goto L_8C06E2DE;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 32))) + 0xAF0))));
    L_8C06E2E6:;
    w0_1 = *(float *)(((*(int *)(((int)stk + 28))) + 0xAF0));
    w0_2 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C06E2FA;
    w0_1 = ((*(float *)(((*(int *)(((int)stk + 28))) + 0xAF0))));
    L_8C06E302:;
    if ((!(w0_1 > w0_0))) goto L_8C06E310;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    L_8C06E318:;
    *(unsigned int *)(((int)stk + 16)) = (((*(int *)(((*(int *)(((int)stk + 24))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 12)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 20))) + 0xB5C))) * 0x160));
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 8)))))) & 4) == 0)) goto L_8C06E39C;
    v0_0 = (serveGetReceiver()) != (*(int *)(((0xB5C + (*(int *)(((int)stk + 24)))) + 0x0)));
    if (v0_0) goto L_8C06E362;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E362:;
    v0_0 = serveGetReceiver();
    v0_1 = (v0_0);
    if ((v0_0 == (*(int *)(((0xB5C + (*(int *)(((int)stk + 20)))) + 0x0))))) goto L_8C06E378;
    goto L_8C06ECAA;
    L_8C06E378:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E39C:;
    if (((*(int *)((0xC5C + (*(int *)(((int)stk + 20)))))) != 12)) goto L_8C06E3BE;
    if ((((*(int *)((0xB60 + (*(int *)(((int)stk + 20)))))) & 0x400) != 0)) goto L_8C06E3BE;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E3BE:;
    if (((*(int *)((0xC5C + (*(int *)(((int)stk + 24)))))) != 12)) goto L_8C06E3DE;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x400) != 0)) goto L_8C06E3DE;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E3DE:;
    if (!(((int)(*(int *)0x8C2FCC5C) >= (int)0x2))) goto L_8C06E870;
    v0_1 = (0x8C2FCC38);
    v0_0 = (0x8);
    if ((0.0f > (*(float *)0x8C2FCC40))) goto L_8C06E400;
    w0_0 = ((*(float *)((0x8 + v0_1))));
    goto L_8C06E404;
    L_8C06E870:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E888;
    v0_1 = (0x1);
    L_8C06E8AE:;
    v0_0 = *(int *)(((int)stk + 20));
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E8C6;
    v0_0 = (0x1);
    L_8C06E8E2:;
    if ((v0_1 != v0_0)) goto L_8C06E95E;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E8FE;
    v0_1 = (0x1);
    L_8C06E916:;
    if ((!(((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))) > 0.0f))) goto L_8C06E92C;
    v0_0 = (0x1);
    L_8C06E944:;
    if ((v0_1 != v0_0)) goto L_8C06E954;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E954:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E92C:;
    if ((!(0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))))))) goto L_8C06E942;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E944;
    L_8C06E942:;
    v0_0 = (0x0);
    goto L_8C06E944;
    L_8C06E8FE:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_3 - w0_1));
    if ((!(w0_0 > (w0_3 - w0_1)))) goto L_8C06E914;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E916;
    L_8C06E914:;
    v0_1 = (0x0);
    goto L_8C06E916;
    L_8C06E95E:;
    *(float *)(((int)stk + 4)) = 0.5f;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06E978;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06E980:;
    if ((!(w0_0 > 0.25f))) goto L_8C06EA40;
    w0_0 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f))) goto L_8C06E9A8;
    v0_0 = (0x1);
    L_8C06E9B8:;
    v0_1 = *(int *)(((int)stk + 20));
    if ((!(((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))) > 0.0f))) goto L_8C06E9D0;
    v0_1 = (0x1);
    L_8C06E9EC:;
    if ((v0_0 != v0_1)) goto L_8C06EA18;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06EA04;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06EA0C:;
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + 0.0500000007f * w0_0;
    *(float *)(((int)stk + 4)) = w0_1;
    L_8C06EA40:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06EA54;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06EA5C:;
    if ((!(w0_0 > 0.25f))) goto L_8C06EB1E;
    w0_0 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C06EA74;
    v0_0 = (0x1);
    L_8C06EA84:;
    v0_1 = *(int *)(((int)stk + 24));
    if ((!(((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))) > 0.0f))) goto L_8C06EAAC;
    v0_1 = (0x1);
    L_8C06EAC8:;
    if ((v0_0 != (-v0_1))) goto L_8C06EAF6;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06EAE2;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06EAEA:;
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + 0.0500000007f * w0_0;
    *(float *)(((int)stk + 4)) = w0_1;
    L_8C06EB1E:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) == 0)) goto L_8C06EB34;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.100000001f);
    L_8C06EB34:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x100) == 0)) goto L_8C06EB4A;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.100000001f);
    L_8C06EB4A:;
    w0_1 = (0.0f);
    if ((!(((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))) > 0.0f))) goto L_8C06EB60;
    v0_1 = (0x1);
    L_8C06EB76:;
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 0.0500000007f * (((float)v0_1 * (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C)))) / 54.8499985f);
    *(float *)(((int)stk + 4)) = w0_0;
    w0_0 = (0.0f);
    if ((!(((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C06EBBC;
    v0_1 = (0x1);
    L_8C06EBD2:;
    w0_0 = (((float)v0_1 * (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C)))) / 54.8499985f);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0500000007f));
    v0_0 = *(int *)(((int)stk + 24));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06EC14;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))));
    L_8C06EC24:;
    v0_0 = *(int *)(((int)stk + 24));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06EC48;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = (((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))));
    L_8C06EC58:;
    v0_0 = *(int *)(((int)stk + 20));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06EC7C;
    v0_0 = *(int *)(((int)stk + 20));
    w0_2 = *(float *)((v0_0 + 0xB9C));
    F0 = (w0_2);
    w0_2 = (((*(float *)((v0_0 + 0xAE8))) - w0_2));
    L_8C06EC8C:;
    if ((!((*(float *)(((int)stk + 4))) > (w0_0 / (w0_1 + w0_2))))) goto L_8C06ECA2;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06ECA2:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06EC7C:;
    v0_0 = *(int *)(((int)stk + 20));
    w0_2 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    F0 = (((-w0_2) + w0_3));
    w0_2 = (((-w0_2) + w0_3));
    goto L_8C06EC8C;
    L_8C06EC48:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = (((-(*(float *)((v0_0 + 0xAE8)))) + (*(float *)((v0_0 + 0xB9C)))));
    goto L_8C06EC58;
    L_8C06EC14:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (((-(*(float *)((v0_0 + 0xAE8)))) + (*(float *)((v0_0 + 0xB9C)))));
    goto L_8C06EC24;
    L_8C06EBBC:;
    if ((!(w0_0 > ((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C06EBD0;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06EBD2;
    L_8C06EBD0:;
    v0_1 = (0x0);
    goto L_8C06EBD2;
    L_8C06EB60:;
    if ((!(w0_1 > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))))))) goto L_8C06EB74;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06EB76;
    L_8C06EB74:;
    v0_1 = (0x0);
    goto L_8C06EB76;
    L_8C06EAE2:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06EAEA;
    L_8C06EAF6:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06EB0A;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06EB12:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0500000007f));
    goto L_8C06EB1E;
    L_8C06EB0A:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06EB12;
    L_8C06EAAC:;
    if ((!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 24)))) + 0x0))))))) goto L_8C06EAC6;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06EAC8;
    L_8C06EAC6:;
    v0_1 = (0x0);
    goto L_8C06EAC8;
    L_8C06EA74:;
    if ((!(w0_0 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C06EA82;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06EA84;
    L_8C06EA82:;
    v0_0 = (0x0);
    goto L_8C06EA84;
    L_8C06EA54:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06EA5C;
    L_8C06EA04:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06EA0C;
    L_8C06EA18:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06EA2C;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06EA34:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0399999991f));
    goto L_8C06EA40;
    L_8C06EA2C:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06EA34;
    L_8C06E9D0:;
    if ((!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))))) goto L_8C06E9EA;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E9EC;
    L_8C06E9EA:;
    v0_1 = (0x0);
    goto L_8C06E9EC;
    L_8C06E9A8:;
    if ((!(w0_0 > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))))) goto L_8C06E9B6;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E9B8;
    L_8C06E9B6:;
    v0_0 = (0x0);
    goto L_8C06E9B8;
    L_8C06E978:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06E980;
    L_8C06E8C6:;
    if ((!(0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))))) goto L_8C06E8E0;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E8E2;
    L_8C06E8E0:;
    v0_0 = (0x0);
    goto L_8C06E8E2;
    L_8C06E888:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_3 - w0_1));
    if ((!(w0_0 > (w0_3 - w0_1)))) goto L_8C06E8AC;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E8AE;
    L_8C06E8AC:;
    v0_1 = (0x0);
    goto L_8C06E8AE;
    L_8C06E404:;
    w0_1 = *(float *)(((*(int *)(((int)stk + 24))) + 0xAF0));
    w0_2 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C06E418;
    w0_1 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))));
    L_8C06E420:;
    if ((w0_0 > w0_1)) goto L_8C06E428;
    goto L_8C06E870;
    L_8C06E428:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E440;
    v0_1 = (0x1);
    L_8C06E458:;
    v0_0 = *(int *)(((int)stk + 20));
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E470;
    v0_0 = (0x1);
    L_8C06E4A2:;
    if ((v0_1 != v0_0)) goto L_8C06E522;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C06E4BE;
    v0_0 = (0x1);
    L_8C06E4D6:;
    if ((!(((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))) > 0.0f))) goto L_8C06E4EC;
    v0_1 = (0x1);
    L_8C06E508:;
    if ((v0_0 != v0_1)) goto L_8C06E518;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E518:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E4EC:;
    if ((!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))))) goto L_8C06E506;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E508;
    L_8C06E506:;
    v0_1 = (0x0);
    goto L_8C06E508;
    L_8C06E4BE:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_3 - w0_1));
    if ((!(w0_0 > (w0_3 - w0_1)))) goto L_8C06E4D4;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E4D6;
    L_8C06E4D4:;
    v0_0 = (0x0);
    goto L_8C06E4D6;
    L_8C06E522:;
    *(float *)(((int)stk + 4)) = 0.5f;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06E53C;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06E544:;
    if ((!(w0_0 > 0.25f))) goto L_8C06E604;
    w0_0 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f))) goto L_8C06E55C;
    v0_0 = (0x1);
    L_8C06E56C:;
    v0_1 = *(int *)(((int)stk + 20));
    if ((!(((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))) > 0.0f))) goto L_8C06E594;
    v0_1 = (0x1);
    L_8C06E5B0:;
    if ((v0_0 != v0_1)) goto L_8C06E5DC;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06E5C8;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06E5D0:;
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + 0.0500000007f * w0_0;
    *(float *)(((int)stk + 4)) = w0_1;
    L_8C06E604:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06E618;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06E620:;
    if ((!(w0_0 > 0.25f))) goto L_8C06E6E0;
    w0_0 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C06E638;
    v0_0 = (0x1);
    L_8C06E648:;
    v0_1 = *(int *)(((int)stk + 24));
    if ((!(((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))) > 0.0f))) goto L_8C06E660;
    v0_1 = (0x1);
    L_8C06E68A:;
    if ((v0_0 != (-v0_1))) goto L_8C06E6B8;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06E6A4;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06E6AC:;
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + 0.0500000007f * w0_0;
    *(float *)(((int)stk + 4)) = w0_1;
    L_8C06E6E0:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) == 0)) goto L_8C06E6F6;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.100000001f);
    L_8C06E6F6:;
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x100) == 0)) goto L_8C06E70C;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.100000001f);
    L_8C06E70C:;
    w0_1 = (0.0f);
    if ((!(((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))) > 0.0f))) goto L_8C06E722;
    v0_1 = (0x1);
    L_8C06E738:;
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 0.0500000007f * (((float)v0_1 * (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C)))) / (*(float *)0x8C287B40));
    *(float *)(((int)stk + 4)) = w0_0;
    w0_0 = (0.0f);
    if ((!(((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C06E76A;
    v0_1 = (0x1);
    L_8C06E796:;
    w0_0 = (((float)v0_1 * (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C)))) / (*(float *)0x8C287B40));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0500000007f));
    v0_0 = *(int *)(((int)stk + 24));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06E7D8;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))));
    L_8C06E7E8:;
    v0_0 = *(int *)(((int)stk + 24));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06E80C;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = (((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))));
    L_8C06E81C:;
    v0_0 = *(int *)(((int)stk + 20));
    if ((0.0f > ((*(float *)((v0_0 + 0xAE8))) - (*(float *)((v0_0 + 0xB9C)))))) goto L_8C06E840;
    v0_0 = *(int *)(((int)stk + 20));
    w0_2 = *(float *)((v0_0 + 0xB9C));
    F0 = (w0_2);
    w0_2 = (((*(float *)((v0_0 + 0xAE8))) - w0_2));
    L_8C06E850:;
    if ((!((*(float *)(((int)stk + 4))) > (w0_0 / (w0_1 + w0_2))))) goto L_8C06E866;
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E866:;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x12E)) = 0x1;
    v0_1 = (0x12E);
    goto L_8C06ECAA;
    L_8C06E840:;
    v0_0 = *(int *)(((int)stk + 20));
    w0_2 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    F0 = (((-w0_2) + w0_3));
    w0_2 = (((-w0_2) + w0_3));
    goto L_8C06E850;
    L_8C06E80C:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = (((-(*(float *)((v0_0 + 0xAE8)))) + (*(float *)((v0_0 + 0xB9C)))));
    goto L_8C06E81C;
    L_8C06E7D8:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_0 = (((-(*(float *)((v0_0 + 0xAE8)))) + (*(float *)((v0_0 + 0xB9C)))));
    goto L_8C06E7E8;
    L_8C06E76A:;
    if ((!(w0_0 > ((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C06E794;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E796;
    L_8C06E794:;
    v0_1 = (0x0);
    goto L_8C06E796;
    L_8C06E722:;
    if ((!(w0_1 > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))))))) goto L_8C06E736;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E738;
    L_8C06E736:;
    v0_1 = (0x0);
    goto L_8C06E738;
    L_8C06E6A4:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06E6AC;
    L_8C06E6B8:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C06E6CC;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C06E6D4:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0500000007f));
    goto L_8C06E6E0;
    L_8C06E6CC:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06E6D4;
    L_8C06E660:;
    if ((!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 24)))) + 0x0))))))) goto L_8C06E688;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E68A;
    L_8C06E688:;
    v0_1 = (0x0);
    goto L_8C06E68A;
    L_8C06E638:;
    if ((!(w0_0 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C06E646;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E648;
    L_8C06E646:;
    v0_0 = (0x0);
    goto L_8C06E648;
    L_8C06E618:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C06E620;
    L_8C06E5C8:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06E5D0;
    L_8C06E5DC:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) goto L_8C06E5F0;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    L_8C06E5F8:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (w0_0 * 0.0500000007f));
    goto L_8C06E604;
    L_8C06E5F0:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06E5F8;
    L_8C06E594:;
    if ((!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))))) goto L_8C06E5AE;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E5B0;
    L_8C06E5AE:;
    v0_1 = (0x0);
    goto L_8C06E5B0;
    L_8C06E55C:;
    if ((!(w0_0 > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))))) goto L_8C06E56A;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E56C;
    L_8C06E56A:;
    v0_0 = (0x0);
    goto L_8C06E56C;
    L_8C06E53C:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))));
    goto L_8C06E544;
    L_8C06E470:;
    v0_0 = *(int *)(((int)stk + 20));
    if ((!(0.0f > ((*(float *)((v0_0 + 0xB9C))) - (*(float *)((v0_0 + 0xAE8))))))) goto L_8C06E4A0;
    v0_0 = (0xFFFFFFFF);
    goto L_8C06E4A2;
    L_8C06E4A0:;
    v0_0 = (0x0);
    goto L_8C06E4A2;
    L_8C06E440:;
    v0_0 = *(int *)(((int)stk + 24));
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_3 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_3 - w0_1));
    if ((!(w0_0 > (w0_3 - w0_1)))) goto L_8C06E456;
    v0_1 = (0xFFFFFFFF);
    goto L_8C06E458;
    L_8C06E456:;
    v0_1 = (0x0);
    goto L_8C06E458;
    L_8C06E418:;
    w0_1 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))));
    goto L_8C06E420;
    L_8C06E400:;
    w0_0 = ((-(*(float *)((v0_0 + v0_1)))));
    goto L_8C06E404;
    L_8C06E310:;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    goto L_8C06E318;
    L_8C06E2FA:;
    w0_1 = ((-(*(float *)(((*(int *)(((int)stk + 28))) + 0xAF0)))));
    goto L_8C06E302;
    L_8C06E2DE:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xAF0)))));
    goto L_8C06E2E6;
}
