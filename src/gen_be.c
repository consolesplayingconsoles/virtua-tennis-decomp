/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int BupRequestSave(int, int, int, int);
int FUN_8c0f0860(int);
int arcadePickRival(int);
int cameraCalcPoint(int, int, int, int, int);
int cameraCalcPointInv(int, int, int, int, int, float, float);
float cameraFovForSize(float);
int circuitApplyResult(void);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
extern int crowdDrawBlock();
int entryRecordCharas(void);
int entrySetResult(int);
int fadeStart(int);
int gameMatchSetup(void);
int hudBarDrawAlt(Stk3, float, float);
int hudCallTieBreakDraw(int, int, float, float);
int matchSetupPlayers(void);
int memmove(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInitEvent(void);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlTanf(float);
int nlTranslate(float, float, float);
int scoreReset(void);
int sndFadeFlagsClear(void);
extern int sprPutAtAlpha();
int sprPutCropV(int, int, Stk3, float, float, float);
int stageSoftReset(void);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int unlockTestW1(int);
int vecAnglesTo(int, int, Stk3);
float cpuAimAngleRate(int a4, int a5, int a6, int a7, int a8);
int hudCallPointsDraw(int a4, int a5, float f4, float f5);
int crowdDrawUsa(int a4);
int cpuSglAimAddGrid(int a4, int a5);
float cameraFovFit(float f4, float f5);
int btnGuideDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int arcadeNextMatch(void);
void scoreAddPoint(int a4, int a5, float f4, float f5, float f6);
int cpuDblPositionCalc(int a4, int a5);

float cpuAimAngleRate(int a4, int a5, int a6, int a7, int a8)
{
    float u10;
    float t26;
    float t29;
    float u34;
    float u35;
    float u36;
    float u37;
    float u39;
    float u40;
    int t43;
    int t41;
    float u45;
    int t48;
    int t46;
    int t51;
    int t52;
    float u56;
    float u57;
    int t60;
    int t58;
    float u62;
    int t65;
    int t63;
    int t68;
    int t69;
    float u72;
    float u73;
    int t76;
    int t74;
    float u78;
    int t81;
    int t79;
    int t84;
    int t85;
    float u88;
    float u89;
    int t92;
    int t90;
    float u94;
    int t97;
    int t95;
    int t100;
    float t103;
    float t104;
    int t105;
    float t119;
    float t127;
    float u133;
    float t128;
    float t142;
    float u148;
    float t143;
    float t157;
    float u178;
    float u11;
    float u21;
    float u168;
    int stk[31];

    if ((*(float *)((a5 + 0x0))) == (*(float *)((a4 + 0x0)))) {
        u10 = *(float *)((a5 + 0x0));
        if ((u10 > (*(float *)((a6 + 0x0)))) && (u11 = *(float *)((a7 + 0x0)), u11 > u10)) {
            *(float *)((a8 + 0x0)) = (*(float *)((a5 + 0x0)));
        } else {
            if ((*(float *)((a6 + 0x0))) > (*(float *)((a5 + 0x0)))) {
                u21 = (*(float *)((a6 + 0x0)));
            } else {
                u21 = (*(float *)((a7 + 0x0)));
            }
            *(float *)((a8 + 0x0)) = u21;
        }
        *(float *)((a8 + 0x8)) = (*(float *)((a6 + 0x8)));
        t26 = cpuDistXZ(a5, a8);
        *(float *)(((int)stk + 76)) = (*(float *)((a8 + 0x0)));
        *(float *)(((int)stk + 84)) = (*(float *)((a7 + 0x8)));
        t29 = cpuDistXZ(a5, (((int)stk + 4) + 0x48));
        if (t26 > t29) {
            *(float *)((a8 + 0x8)) = (*(float *)((a7 + 0x8)));
        }
        u178 = t29;
    } else {
        u34 = *(float *)((a5 + 0x0));
        u35 = *(float *)((a5 + 0x8));
        u36 = *(float *)((a4 + 0x8));
        u37 = *(float *)((a4 + 0x0));
        u39 = *(float *)((a6 + 0x8));
        u40 = (u36 - (((u35 - u36) / (u34 - u37)) * u37));
        u40 = u40 + (*(float *)((a6 + 0x0))) * ((u35 - u36) / (u34 - u37));
        t43 = 0x1;
        if ((u39 - u40) > 0.0f) {
        } else {
            t41 = 0x0;
            if (0.0f > (u39 - u40)) {
                t41 = 0xFFFFFFFF;
            }
            t43 = t41;
        }
        u45 = *(float *)((a7 + 0x8));
        t48 = 0x1;
        if ((u45 - u40) > 0.0f) {
        } else {
            t46 = 0x0;
            if (0.0f > (u45 - u40)) {
                t46 = 0xFFFFFFFF;
            }
            t48 = t46;
        }
        t51 = ((int)stk + 4);
        t52 = 0x0;
        if (t43 != t48) {
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((((int)stk + 4) + 0x8)) = u40;
            t51 = (((int)stk + 4) + 0xC);
            t52 = 0x1;
        }
        u56 = (u36 - (((u35 - u36) / (u34 - u37)) * u37));
        u56 = u56 + (*(float *)((a7 + 0x0))) * ((u35 - u36) / (u34 - u37));
        u57 = *(float *)((a6 + 0x8));
        t60 = 0x1;
        if ((u57 - u56) > 0.0f) {
        } else {
            t58 = 0x0;
            if (0.0f > (u57 - u56)) {
                t58 = 0xFFFFFFFF;
            }
            t60 = t58;
        }
        u62 = *(float *)((a7 + 0x8));
        t65 = 0x1;
        if ((u62 - u56) > 0.0f) {
        } else {
            t63 = 0x0;
            if (0.0f > (u62 - u56)) {
                t63 = 0xFFFFFFFF;
            }
            t65 = t63;
        }
        t68 = t51;
        t69 = t52;
        if (t60 != t65) {
            *(float *)((t51 + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)((t51 + 0x8)) = u56;
            t68 = (t51 + 0xC);
            t69 = (t52 + 0x1);
        }
        u72 = *(float *)((a6 + 0x0));
        u73 = *(float *)((a6 + 0x8));
        t76 = 0x1;
        if ((u72 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) {
        } else {
            t74 = 0x0;
            if (0.0f > (u72 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))) {
                t74 = 0xFFFFFFFF;
            }
            t76 = t74;
        }
        u78 = *(float *)((a7 + 0x0));
        t81 = 0x1;
        if ((u78 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) {
        } else {
            t79 = 0x0;
            if (0.0f > (u78 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))) {
                t79 = 0xFFFFFFFF;
            }
            t81 = t79;
        }
        t84 = t68;
        t85 = t69;
        if (t76 != t81) {
            *(float *)((t68 + 0x0)) = ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t68 + 0x8)) = (*(float *)((a6 + 0x8)));
            t84 = (t68 + 0xC);
            t85 = (t69 + 0x1);
        }
        u88 = *(float *)((a7 + 0x8));
        u89 = *(float *)((a6 + 0x0));
        t92 = 0x1;
        if ((u89 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) {
        } else {
            t90 = 0x0;
            if (0.0f > (u89 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))) {
                t90 = 0xFFFFFFFF;
            }
            t92 = t90;
        }
        u94 = *(float *)((a7 + 0x0));
        t97 = 0x1;
        if ((u94 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) {
        } else {
            t95 = 0x0;
            if (0.0f > (u94 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))) {
                t95 = 0xFFFFFFFF;
            }
            t97 = t95;
        }
        t100 = t85;
        if (t92 != t97) {
            *(float *)((t84 + 0x0)) = ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t84 + 0x8)) = (*(float *)((a7 + 0x8)));
            t100 = (t85 + 0x1);
        }
        if (t100 != 0) {
            t103 = cpuDistXZ(a5, ((int)stk + 4));
            t104 = cpuDistXZ(a5, (((int)stk + 4) + 0xC));
            t105 = ((int)stk + 4);
            if (t103 > t104) {
                t105 = (((int)stk + 4) + 0xC);
            }
            *(float *)((a8 + 0x0)) = (*(float *)((t105 + 0x0)));
            *(float *)((a8 + 0x8)) = (*(float *)((t105 + 0x8)));
            u168 = t104;
        } else {
            *(float *)(((int)stk + 76)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 80)) = 0.0f;
            *(float *)(((int)stk + 84)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
            FUN_8c0f0860((((int)stk + 4) + 0x48));
            *(float *)(((int)stk + 68)) = 0.0f;
            *(float *)(((int)stk + 64)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a4 + 0x8))));
            FUN_8c0f0860((((int)stk + 4) + 0x3C));
            t119 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
            *(float *)((a8 + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((a8 + 0x8)) = (*(float *)((a6 + 0x8)));
            *(float *)(((int)stk + 64)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((*(float *)((a7 + 0x8))) - (*(float *)((a4 + 0x8))));
            FUN_8c0f0860((((int)stk + 4) + 0x3C));
            t127 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
            u133 = t119;
            if (t127 > t119) {
                t128 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
                *(float *)((a8 + 0x0)) = (*(float *)((a6 + 0x0)));
                *(float *)((a8 + 0x8)) = (*(float *)((a7 + 0x8)));
                u133 = t128;
            }
            *(float *)(((int)stk + 64)) = ((*(float *)((a7 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a4 + 0x8))));
            FUN_8c0f0860((((int)stk + 4) + 0x3C));
            t142 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
            u148 = u133;
            if (t142 > u133) {
                t143 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
                *(float *)((a8 + 0x0)) = (*(float *)((a7 + 0x0)));
                *(float *)((a8 + 0x8)) = (*(float *)((a6 + 0x8)));
                u148 = t143;
            }
            *(float *)(((int)stk + 64)) = ((*(float *)((a7 + 0x0))) - (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((*(float *)((a7 + 0x8))) - (*(float *)((a4 + 0x8))));
            FUN_8c0f0860((((int)stk + 4) + 0x3C));
            t157 = nlInnerProduct((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
            if (t157 > u148) {
                *(float *)((a8 + 0x0)) = (*(float *)((a7 + 0x0)));
                *(float *)((a8 + 0x8)) = (*(float *)((a7 + 0x8)));
            }
            u168 = t157;
        }
        u178 = u168;
    }
    return u178;
}

int hudCallPointsDraw(int a4, int a5, float f4, float f5)
{
    int t64;
    int t80;
    int t76;
    int t72;
    int t68;
    int stk[34];

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t80 = (hudCallTieBreakDraw(a4, a5, f4, f5));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x30)) = *(struct mv3 *)(0x8C10DB10); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
        hudBarDrawAlt(*(Stk3 *)((((int)stk + 28) + 0x30)), (f4 * 0.5f), f5);
        *(float *)(((((int)stk + 28) + 0x30) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x8))) - 0.00100000005f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x18)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 50.0f);
        if (a4 == 0) {
            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 23.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
            sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
        } else {
            if (a4 == 1) {
                *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 10.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                sprPutCropV(0x8C33A810, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
                *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 12.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                sprPutCropV(0x8C33A720, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
            } else {
                if (a4 == 2) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    sprPutCropV(0x8C33A7C0, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
                    *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 22.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
                } else {
                    if (a4 == 3) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        sprPutCropV(0x8C33A770, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 22.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0x18)), f4, 1.0f, f5);
                    }
                }
            }
        }
        *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + 98.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
        sprPutCropV(0x8C33A8B0, 0x1, *(Stk3 *)(((int)stk + 28)), f4, 1.0f, f5);
        *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 121.0f);
        if (a5 == 0) {
            *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 11.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
            t76 = (sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5));
        } else {
            if (a5 == 1) {
                *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 10.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                sprPutCropV(0x8C33A810, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5);
                *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 12.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                t72 = (sprPutCropV(0x8C33A720, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5));
            } else {
                if (a5 == 2) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                    sprPutCropV(0x8C33A7C0, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5);
                    *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 22.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                    t68 = (sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5));
                } else {
                    t64 = a5;
                    if (a5 == 3) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                        sprPutCropV(0x8C33A770, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5);
                        *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 22.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                        t64 = (sprPutCropV(0x8C33A6D0, 0x1, *(Stk3 *)((((int)stk + 28) + 0xC)), f4, 1.0f, f5));
                    }
                    t68 = t64;
                }
                t72 = t68;
            }
            t76 = t72;
        }
        t80 = t76;
    }
    return t80;
}

int crowdDrawUsa(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t77;
    int t78;
    int t79;
    int t85;
    int t86;
    int t87;
    int t88;
    int stk[19];

    *(unsigned short *)(((int)stk + 36)) = 0x8D00;
    *(unsigned short *)(((int)stk + 40)) = 0x5900;
    *(unsigned int *)0x8C188FD4 = 0x0;
    if (a4 != 19) {
        if (a4 != 20) {
            if (a4 == 21) {
                t0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116884, 0x8C114D9C, 0x1600, 0x35, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                t1 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1168B4, 0x8C115018, 0x1600, 0x11, 0x0, 0x0, 0x1, 0x0);
            } else {
                if (a4 == 22) {
                    t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1168E4, 0x8C1150E4, 0x0, 0x10, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                    t3 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116914, 0x8C1151A4, 0x0, 0x25, 0x0, 0x0, 0x1, 0x0);
                } else {
                    if (a4 == 23) {
                        t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116944, 0x8C115360, 0x0, 0xC, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                        t5 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116974, 0x8C1153F0, 0x0, 0x18, 0x0, 0x0, 0x1, 0x0);
                    } else {
                        if (a4 == 24) {
                            t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1169A4, 0x8C115510, 0x0, 0x10, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                            t7 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1169D4, 0x8C1155D0, 0x0, 0x25, 0x0, 0x0, 0x1, 0x0);
                        } else {
                            if (a4 == 31) {
                                t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116A04, 0x8C11578C, (*(short *)(((int)stk + 36))), 0x10, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                t11 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116A34, 0x8C11584C, (*(short *)(((int)stk + 36))), 0x25, 0x0, 0x0, 0x1, 0x0);
                            } else {
                                if (a4 == 32) {
                                    t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116A64, 0x8C115A08, 0x8100, 0xC, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                    t13 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116A94, 0x8C115A98, 0x8100, 0x18, 0x0, 0x0, 0x1, 0x0);
                                } else {
                                    if (a4 == 33) {
                                        t14 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116AC4, 0x8C115BB8, 0x7E00, 0x10, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                        t15 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116AF4, 0x8C115C78, 0x7E00, 0x25, 0x0, 0x0, 0x1, 0x0);
                                    } else {
                                        if (a4 == 34) {
                                            t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116B24, 0x8C115E34, (*(short *)(((int)stk + 40))), 0x35, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                            t19 = ((int (*)(int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116B54, 0x8C1160B0, (*(short *)(((int)stk + 40))), 0x11, 0x0, 0x0, 0x1, 0x0);
                                        } else {
                                            if (a4 == 35) {
                                                t20 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116B84, 0x8C11617C, 0x4000, 0x18, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                                t21 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116BB4, 0x8C11629C, 0x4000, 0xB, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                                                t22 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116BE4, 0x8C116320, 0x4000, 0xF, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0);
                                            } else {
                                                if (a4 == 36) {
                                                    t23 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116C14, 0x8C1163D4, 0x4500, 0x18, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                                    t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116C44, 0x8C1164F4, 0x4500, 0xC, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                                                    t25 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116C74, 0x8C116584, 0x4500, 0x18, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                                                    t26 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116CA4, 0x8C1166A4, 0x4500, 0xC, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t77 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1167F4, 0x8C114B44, 0x3A00, 0xF, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
            t78 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116824, 0x8C114BF8, 0x3A00, 0x18, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
            t79 = ((int (*)(int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116854, 0x8C114D18, 0x3A00, 0xB, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0);
        }
    } else {
        t85 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116734, 0x8C1147E4, 0x3D00, 0x18, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
        t86 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116764, 0x8C114904, 0x3D00, 0xC, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        t87 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C116794, 0x8C114994, 0x3D00, 0x18, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
        t88 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(crowdDrawBlock))(0x8C1167C4, 0x8C114AB4, 0x3D00, 0xC, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0);
    }
    return (*(int *)0x8C188FD4);
}

int cpuSglAimAddGrid(int a4, int a5)
{
    int t0;
    int t1;
    int t7;
    int t9;
    int t11;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t20;
    int t22;
    float u30;
    float u31;
    float u47;
    float u48;
    float u51;
    float u52;
    float u60;
    int t63;
    int t61;
    int t80;
    float u66;
    int t72;
    int t26;
    int t120;
    int t112;
    int t97;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t7 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t9 = (int)((unsigned int)((int)((unsigned int)t7 + (unsigned int)0x0)) + ((((int)0x0 > (int)t7)) ? 1u : 0u));
        t11 = ((~(((~((t9 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t9 >> 1) + 0x2) >= 0) {
            t11 = (((t9 >> 1) + 0x2) & 0x1);
        }
        t26 = ((((-t11) + 0x1) << 1) - 1);
    } else {
        t13 = *(int *)0x8C287B10;
        t14 = *(int *)0x8C287B14;
        t15 = ((~(((~((t13 + t14) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t13 + t14) + 0x2) >= 0) {
            t15 = (((t13 + t14) + 0x2) & 0x1);
        }
        t17 = *(int *)0x8C287B00;
        t18 = *(int *)0x8C287B04;
        t20 = (int)((unsigned int)((int)((unsigned int)(t17 + t18) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t17 + t18))) ? 1u : 0u));
        t22 = ((~(((~((t20 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t20 >> 1) + 0x2) >= 0) {
            t22 = (((t20 >> 1) + 0x2) & 0x1);
        }
        t26 = (((-(t15 << 1)) + 0x1) * ((-(t22 << 1)) + 0x1));
    }
    u30 = *(float *)((a4 + 0xB9C));
    u31 = (-u30);
    if (!(0.0f > u30)) {
        u31 = u30;
    }
    if (16.460001f > u31) {
        cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 65.3675003f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t120 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u47 = *(float *)((a4 + 0xB9C));
        u48 = (-u47);
        if (!(0.0f > u47)) {
            u48 = u47;
        }
        if (u48 > 37.0349998f) {
            u51 = *(float *)0x8C291F84;
            u52 = (-u51);
            if (!(0.0f > u51)) {
                u52 = u51;
            }
            if (32.0f > u52) {
                cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 47.5400009f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u60 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                t63 = 0x1;
                if (u60 > 0.0f) {
                } else {
                    t61 = 0x0;
                    if (0.0f > u60) {
                        t61 = 0xFFFFFFFF;
                    }
                    t63 = t61;
                }
                t80 = (((a5 + 0x1) + 0x1) + 0x1);
                if ((float)t63 == (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00)))) {
                    u66 = (-u60);
                    if (!(0.0f > u60)) {
                        u66 = u60;
                    }
                    t72 = (((a5 + 0x1) + 0x1) + 0x1);
                    if (!(u66 > (*(float *)0x8C04BBA8))) {
                    } else {
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t72 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t80 = t72;
                }
                t97 = t80;
            } else {
                cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBAC)));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t97 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t112 = t97;
        } else {
            cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBB0)));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t112 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t120 = t112;
    }
    return t120;
}

float cameraFovFit(float f4, float f5)
{
    float t13;
    float u16;
    float u17;
    float u18;
    float u20;
    float u21;
    float u22;
    float u23;
    float u25;
    float u26;
    float u27;
    float u29;
    float u30;
    float u32;
    float u33;
    float u35;
    float u42;
    float u44;
    float u45;
    float u47;
    float u48;
    float u50;
    float u66;
    float u67;
    int t69;
    float u71;
    float u72;
    float t75;
    int t57;
    int t58;
    float u39;
    float u54;
    int stk[51];

    *(float *)(((int)stk + 60)) = f5;
    nlPushUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)(0x8C287B54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(0x8C287B60); }
    vecAnglesTo((((int)stk + 36) + 0x1C), (((int)stk + 36) + 0x20), *(Stk3 *)(0x8C287B60));
    nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 64)))));
    nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 68)))));
    nlTranslate((-(*(float *)0x8C287B54)), (-(*(float *)0x8C287B58)), (-(*(float *)0x8C287B5C)));
    nlGetMatrix((((int)stk + 36) + 0x24));
    nlPopMatrix(0x1);
    t13 = nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0xA8 + ((int)stk + 36))); }
    cameraCalcPoint((((int)stk + 24) + 0x30), 0x0, 0x0, 0x0, (0x88 + ((int)stk + 24)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xC4 + ((int)stk + 20))); }
    cameraCalcPoint((((int)stk + 8) + 0x40), 0x0, 0x0, 0x0, (0x8C + ((int)stk + 8)));
    u16 = *(float *)(((int)stk + 160));
    u17 = *(float *)(((int)stk + 168));
    u18 = (-u17);
    if (!(0.0f > u17)) {
        u18 = u17;
    }
    u20 = *(float *)(((int)stk + 148));
    u21 = *(float *)(((int)stk + 156));
    u22 = *(float *)(((int)stk + 60));
    u23 = (-u21);
    if (!(0.0f > u21)) {
        u23 = u21;
    }
    u25 = *(float *)(((int)stk + 168));
    u26 = *(float *)(((int)stk + 156));
    if ((int)(int)(((u16 - f4) * (320.0f / t13)) / u18) < (int)(int)(((u20 - u22) * (320.0f / t13)) / u23)) {
        u27 = (-u25);
        if (!(0.0f > u25)) {
            u27 = u25;
        }
        u29 = *(float *)(((int)stk + 60));
        u30 = (-u26);
        if (!(0.0f > u26)) {
            u30 = u26;
        }
        if ((((u20 + u29) * (320.0f / t13)) / u30) > (((u16 + f4) * (320.0f / t13)) / u27)) {
            u32 = *(float *)(((int)stk + 60));
            u33 = (-u26);
            if (!(0.0f > u26)) {
                u33 = u26;
            }
            u39 = (((u20 + u32) * (320.0f / t13)) / u33);
        } else {
            u35 = (-u25);
            if (!(0.0f > u25)) {
                u35 = u25;
            }
            u39 = (((u16 + f4) * (320.0f / t13)) / u35);
        }
        t57 = (int)u39;
        t58 = (int)(((u16 - f4) * (320.0f / t13)) / u18);
    } else {
        u42 = (-u25);
        if (!(0.0f > u25)) {
            u42 = u25;
        }
        u44 = *(float *)(((int)stk + 60));
        u45 = (-u26);
        if (!(0.0f > u26)) {
            u45 = u26;
        }
        if ((((u20 + u44) * (320.0f / t13)) / u45) > (((u16 + f4) * (320.0f / t13)) / u42)) {
            u47 = *(float *)(((int)stk + 60));
            u48 = (-u26);
            if (!(0.0f > u26)) {
                u48 = u26;
            }
            u54 = (((u20 + u47) * (320.0f / t13)) / u48);
        } else {
            u50 = (-u25);
            if (!(0.0f > u25)) {
                u50 = u25;
            }
            u54 = (((u16 + f4) * (320.0f / t13)) / u50);
        }
        t57 = (int)(((u20 - u22) * (320.0f / t13)) / u23);
        t58 = (int)u54;
    }
    nlGetAverageVector((((int)stk + 60) + 0x64), (((int)stk + 60) + 0x58), (((int)stk + 60) + 0x4C), 0.5f, 0.5f);
    u66 = *(float *)(((int)stk + 144));
    u67 = (-u66);
    if (!(0.0f > u66)) {
        u67 = u66;
    }
    *(float *)(((int)stk + 136)) = (((float)(t58 + t57) / (1.0f + 1.0f)) / ((320.0f / t13) / u67));
    t69 = (t57 - t58);
    if ((int)(t58 - t57) >= 0) {
        t69 = (t58 - t57);
    }
    u71 = *(float *)(((int)stk + 144));
    u72 = (-u71);
    if (!(0.0f > u71)) {
        u72 = u71;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x4C)); }
    cameraCalcPointInv((((int)stk + 48) + 0x18), 0x0, 0x0, 0x0, 0x8C287B60, u71, (1.0f + 1.0f));
    t75 = cameraFovForSize((((float)t69 / (1.0f + 1.0f)) / ((320.0f / t13) / u72)));
    *(float *)0x8C287A04 = t75;
    return t75;
}

int btnGuideDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t21;
    int t22;
    int t23;
    int t27;
    int t28;
    int t29;
    int t33;
    int t45;
    int t47;
    int t49;
    int t55;
    int t56;
    int t66;
    int t67;
    int t71;
    int t72;
    int t88;
    int t89;
    int t93;
    int t94;
    int t116;
    int t110;
    int t111;
    int t98;
    int t83;
    int t43;
    int t40;
    int t37;
    int t35;
    float u59;
    int t76;
    float u106;
    int t113;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    *(float *)(((((int)stk + 16) + 0x24) + 0x8)) = 0.100000001f;
    if ((a4 != 0) && ((a4 != 1) && (a4 != 2))) {
        if (a4 != 4) {
            if (a4 != 3) {
                if (a4 == 5) {
                    if (a5 == 1) {
                        t4 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t4 << 2) + t4) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                    } else {
                        t5 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t5 << 2) + t5) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                    t9 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    t43 = (((((t9 << 2) + t9) << 2) << 2) + 0x8C33B0D0);
                } else {
                    if (a4 == 6) {
                        if (a5 == 1) {
                            t10 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t10 << 2) + t10) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                        } else {
                            t11 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t11 << 2) + t11) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                        t15 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        t40 = (((((t15 << 2) + t15) << 2) << 2) + 0x8C33B0D0);
                    } else {
                        if (a4 == 7) {
                            if (a5 == 1) {
                                t16 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t16 << 2) + t16) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                            } else {
                                t17 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t17 << 2) + t17) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                            t21 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            t37 = (((((t21 << 2) + t21) << 2) << 2) + 0x8C33B0D0);
                        } else {
                            if (a4 == 8) {
                                if (a5 == 1) {
                                    t22 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t22 << 2) + t22) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t23 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t23 << 2) + t23) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t27 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t35 = (((((t27 << 2) + t27) << 2) << 2) + 0x8C33B0D0);
                            } else {
                                if (a5 == 1) {
                                    t28 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t28 << 2) + t28) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t29 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t29 << 2) + t29) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t33 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t35 = (((((t33 << 2) + t33) << 2) << 2) + 0x8C33B490);
                            }
                            t37 = t35;
                        }
                        t40 = t37;
                    }
                    t43 = t40;
                }
                t45 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(t43, 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
            } else {
                if (a5 == 1) {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                    t47 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t47 << 2) + t47) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x8000;
                } else {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                    t49 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t49 << 2) + t49) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x0;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t55 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                t56 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t55 << 2) + t55) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
                if (a5 == 1) {
                    u59 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                } else {
                    u59 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                }
                *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = u59;
            }
        } else {
            if ((*(int *)0x8C287D5C) == 2) {
                t76 = 0x4000;
            } else {
                if (a5 == 1) {
                    t66 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t66 << 2) + t66) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                } else {
                    t67 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t67 << 2) + t67) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t71 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                t72 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t71 << 2) + t71) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
            }
            t83 = t76;
        }
        t98 = t83;
    } else {
        if (a5 == 1) {
            t88 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t88 << 2) + t88) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
        } else {
            t89 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t89 << 2) + t89) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
        t93 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
        t94 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t93 << 2) + t93) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
    }
    if (a5 == 1) {
        u106 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 45.0f);
    } else {
        u106 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) - 47.0f);
    }
    *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = u106;
    t116 = a4;
    if (((*(int *)0x8C287D5C) == 2) && (a4 == 4)) {
    } else {
        if ((int)a4 < (int)0x5) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t110 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t113 = (((((t110 << 2) + t110) << 2) << 2) + 0x8C33B490);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t111 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t113 = (((((t111 << 2) + t111) << 2) << 2) + 0x8C33B0D0);
        }
        t116 = (((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(t113, t98, *(Stk3 *)((((int)stk + 16) + 0x24)), f4));
    }
    return t116;
}

int arcadeNextMatch(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t32;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t52;
    int t72;
    int t87;
    int t116;
    int t104;
    int t111;
    int t110;
    int t9;
    int t10;
    int t11;
    int t57;
    int t74;

    t0 = *(int *)0x8C287AF0;
    t1 = *(int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0));
    if (t1 == 0) {
        t2 = t1;
        t3 = 0x8C287AD0;
        t4 = (((t0 & 0x1) << 2) + 0x8C287AD0);
        t5 = 0x0;
        for (;;) {
            if ((*(int *)0x8C287ADC) != 4) {
                t3 = 0x8C0E87C8;
                t7 = unlockTestW1(t5);
                if (t7 != 0) {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                } else {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x0;
                }
            } else {
                *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                t9 = t2;
                t10 = t3;
                t11 = t4;
            }
            t2 = t9;
            t5 = (t5 + 0x1);
            t3 = t10;
            t4 = t11;
            if ((int)t5 >= (int)0x12) {
                break;
            }
        }
        *(unsigned int *)0x8C287CB8 = 0x0;
        *(unsigned int *)0x8C287CB4 = 0x0;
        if ((*(int *)(((((*(int *)0x8C287AF0) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            *(unsigned int *)0x8C421F70 = (*(int *)((((*(int *)0x8C287AF0) * 0xD78) + 0x8C2888E8)));
        }
    }
    t32 = *(int *)((((((*(int *)0x8C287AF0) & 0x1) << 2) + 0x8C287AD0) + 0x0));
    *(unsigned int *)0x8C287ACC = t32;
    *(unsigned int *)0x8C1891F0 = (*(int *)(((t32 << 2) + 0x8C1022B8)));
    *(unsigned int *)0x8C287C50 = 0x96;
    sndFadeFlagsClear();
    t35 = matchSetupPlayers();
    *(unsigned int *)0x8C287AFC = 0xFFFFFFFF;
    t36 = *(int *)0x8C287D5C;
    if (t36 == 0) {
        t37 = t35;
        t38 = t36;
        t39 = 0x0;
        for (;;) {
            if ((int)t39 >= (int)(*(int *)0x8C287ADC)) {
                break;
            }
            t38 = 0x8C287ACC;
            t37 = t39;
            t38 = (t38 + 0x14);
            t37 = (t37 << 2);
            t37 = (*(int *)((t38 + t37)));
            if (t37 == 1) {
                t37 = (*(int *)0x8C343248);
                if (t37 == -1) {
                    t37 = (arcadePickRival(t37));
                } else {
                    *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
                }
                t38 = 0xD78;
                t52 = t37;
                t37 = 0x8C2889DC;
                t38 = (t39 * t38);
                *(unsigned int *)((t38 + t37)) = t52;
                t38 = 0x8C0AB0A4;
                t37 = (entrySetResult(t52));
            } else {
                t57 = t38;
            }
            t39 = (t39 + 0x1);
            t38 = t57;
        }
        if ((*(int *)0x8C287ADC) == 4) {
            entryRecordCharas();
        }
    }
    scoreReset();
    t72 = *(int *)0x8C287AF4;
    *(unsigned int *)(((((((t72 & 0x1) << 2) << 1) + (t72 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
    if (((*(int *)0x8C287D5C) != 2) && (t74 = *(int *)0x8C287D5C, t74 != 3)) {
        nlInitEvent();
    }
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        stageSoftReset();
        *(unsigned int *)0x8C3343C0 = 0x0;
        *(unsigned int *)0x8C3343C4 = 0x0;
        strmScoreReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
    }
    t87 = *(int *)0x8C287D5C;
    t116 = t87;
    if (t87 != 2) {
    } else {
        *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) + (*(int *)0x8C2FBD18));
        *(unsigned int *)0x8C2FBE24 = 0x1;
        circuitApplyResult();
        *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
        *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C38BA60 = 0x7F;
        strmVoiceQueueReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20);
        if ((*(int *)0x8C2FBE2C) != 0) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x4;
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
        }
        t104 = *(int *)0x8C2FBC98;
        t111 = t104;
        if ((t104 & 4) != 0) {
            fadeStart(0x1E);
            gameMatchSetup();
            *(unsigned int *)0x8C20D150 = 0x1;
            *(unsigned int *)0x8C287C50 = 0x0;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFDF);
            *(unsigned char *)0x8C2FBC7E = (*(signed char *)0x8C2FBE1C);
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            t110 = BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
            t111 = t110;
        }
        t116 = t111;
    }
    return t116;
}

void scoreAddPoint(int a4, int a5, float f4, float f5, float f6)
{
    int t2;
    int t12;
    float u27;
    float u18;
    int t53;
    int t54;
    int t55;
    float u56;
    int t67;
    int t68;
    int t69;
    float u70;
    int t75;
    int t76;
    int t80;
    int t81;
    float u90;
    float u91;
    int t108;
    int t109;
    int t110;
    float u111;
    int t87;

    *(unsigned int *)0x8C181638 = 0x1;
    t2 = 0x5;
    if ((*(int *)((((a4 & 0x1) << 2) + 0x8C181628))) != 0) {
    } else {
        t2 = (*(int *)0x8C287ACC);
    }
    *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x4)) = (*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)));
    if (a5 == 0) {
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = ((*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + (*(int *)((0x8C102334 + (t2 << 2)))));
    }
    t12 = (int)((int)(*(int *)0x8C287B88) / (int)0x3C);
    u27 = 0.0f;
    if (((float)t12 / (float)((*(int *)0x8C287B00) + (*(int *)0x8C287B04))) > (float)(((t2 << 2) + t2) + 0x32)) {
    } else {
        u18 = 0.5f;
        if (((float)t12 / (float)((*(int *)0x8C287B00) + (*(int *)0x8C287B04))) > (float)(((t2 << 2) + t2) + 0x28)) {
            u18 = 0.25f;
        }
        u27 = u18;
    }
    if (a5 == 0) {
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * u27));
    }
    if ((*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x18))) != 0) {
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * ((((*(float *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x14))) / (float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x18)))) * 0.200000003f))));
    }
    t53 = *(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x20));
    t54 = *(int *)0x8C287B00;
    t55 = *(int *)0x8C287B04;
    u56 = ((-(((float)t53 * 0.100000001f) / (float)(t54 + t55))) + 0.400000006f);
    if (0.0f > ((-(((float)t53 * 0.100000001f) / (float)(t54 + t55))) + 0.400000006f)) {
        u56 = 0.0f;
    }
    if (a5 == 0) {
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * u56));
    }
    t67 = *(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x8));
    t68 = *(int *)0x8C287B04;
    t69 = *(int *)0x8C287B00;
    u70 = (((float)t67 / (float)(t69 + t68)) * 0.100000001f);
    if ((((float)t67 / (float)(t69 + t68)) * 0.100000001f) > 0.5f) {
        u70 = 0.5f;
    }
    *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * u70));
    if ((*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x10))) != 0) {
        if (t2 != 5) {
            t75 = *(int *)0x8C287B00;
            t76 = *(int *)0x8C287B04;
            t87 = ((((int)((unsigned int)((int)((unsigned int)(t75 + t76) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t75 + t76))) ? 1u : 0u))) >> 1) + (0x1 & (t75 + t76)));
        } else {
            t80 = *(int *)0x8C287B00;
            t81 = *(int *)0x8C287B04;
            t87 = (((int)((unsigned int)((int)((unsigned int)(t80 + t81) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t80 + t81))) ? 1u : 0u))) >> 1);
        }
        u90 = 0.0500000007f;
        u90 = u90 + 0.0500000007f * ((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x10))) / (float)t87);
        u91 = u90;
        if (u90 > 0.300000012f) {
            u91 = 0.300000012f;
        }
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * u91));
    }
    t108 = *(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x1C));
    t109 = *(int *)0x8C287B00;
    t110 = *(int *)0x8C287B04;
    u111 = (((float)t108 / (float)(t109 + t110)) * 0.0500000007f);
    if ((((float)t108 / (float)(t109 + t110)) * 0.0500000007f) > 0.200000003f) {
        u111 = 0.200000003f;
    }
    *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = (int)((float)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) + ((float)(*(int *)((0x8C102334 + (t2 << 2)))) * u111));
    if ((int)(*(int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0))) > (int)0x98967F) {
        *(unsigned int *)(((0x8C287B8C + (((((a4 & 0x1) << 2) << 1) + (a4 & 0x1)) << 2)) + 0x0)) = 0x98967F;
    }
}

int cpuDblPositionCalc(int a4, int a5)
{
    int t0;
    float u3;
    float u4;
    float u10;
    int t13;
    int t11;
    int t15;
    int t18;
    int t16;
    float u28;
    float u37;
    float u38;
    float u44;
    int t47;
    int t45;
    int t49;
    int t52;
    int t50;
    float u62;
    float u70;
    int t73;
    int t71;
    float u75;
    int t78;
    int t76;
    int t81;
    float u85;
    int t88;
    int t86;
    float u90;
    int t93;
    int t91;
    int t99;
    float u100;
    int t103;
    int t101;
    float u105;
    int t108;
    int t106;
    int t115;
    float u116;
    int t119;
    int t117;
    float u121;
    int t124;
    int t122;
    int t22;
    int t23;
    int t56;
    int t57;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
        u3 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u4 = (-u3);
        if (!(0.0f > u3)) {
            u4 = u3;
        }
        if (0.300000012f > u4) {
            *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x18)));
        } else {
            u10 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            t13 = 0x1;
            if (u10 > 0.0f) {
            } else {
                t11 = 0x0;
                if (0.0f > u10) {
                    t11 = 0xFFFFFFFF;
                }
                t13 = t11;
            }
            t15 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158));
            t18 = 0x1;
            if ((int)t15 > 0) {
            } else {
                t16 = 0x0;
                if ((int)t15 < 0) {
                    t16 = 0xFFFFFFFF;
                }
                t18 = t16;
            }
            if (t13 == t18) {
                t22 = 0x6;
                t23 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            } else {
                t22 = 0xA;
                t23 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            }
            u28 = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)t23 / (int)t22)));
            u28 = u28 + 4.0f * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28)));
            *(float *)((a5 + 0x0)) = u28;
        }
        u37 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        u38 = (-u37);
        if (!(0.0f > u37)) {
            u38 = u37;
        }
        if (0.300000012f > u38) {
            *(float *)((a5 + 0x8)) = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x18)));
        } else {
            u44 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            t47 = 0x1;
            if (u44 > 0.0f) {
            } else {
                t45 = 0x0;
                if (0.0f > u44) {
                    t45 = 0xFFFFFFFF;
                }
                t47 = t45;
            }
            t49 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C));
            t52 = 0x1;
            if ((int)t49 > 0) {
            } else {
                t50 = 0x0;
                if ((int)t49 < 0) {
                    t50 = 0xFFFFFFFF;
                }
                t52 = t50;
            }
            if (t47 == t52) {
                t56 = 0x6;
                t57 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            } else {
                t56 = 0xA;
                t57 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            }
            u62 = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)t57 / (int)t56)));
            u62 = u62 + 4.0f * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30)));
            *(float *)((a5 + 0x8)) = u62;
        }
        u70 = *(float *)((a5 + 0x8));
        t73 = 0x1;
        if (u70 > 0.0f) {
        } else {
            t71 = 0x0;
            if (0.0f > u70) {
                t71 = 0xFFFFFFFF;
            }
            t73 = t71;
        }
        u75 = *(float *)((a4 + 0xB00));
        t78 = 0x1;
        if (u75 > 0.0f) {
        } else {
            t76 = 0x0;
            if (0.0f > u75) {
                t76 = 0xFFFFFFFF;
            }
            t78 = t76;
        }
        t81 = 0xB00;
        if (t73 == t78) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            t81 = 0x8;
        }
        return t81;
    }
    u85 = *(float *)0x8C291F50;
    t88 = 0x1;
    if (u85 > 0.0f) {
    } else {
        t86 = 0x0;
        if (0.0f > u85) {
            t86 = 0xFFFFFFFF;
        }
        t88 = t86;
    }
    u90 = *(float *)((a4 + 0xB00));
    t93 = 0x1;
    if ((-u90) > 0.0f) {
    } else {
        t91 = 0x0;
        if (0.0f > (-u90)) {
            t91 = 0xFFFFFFFF;
        }
        t93 = t91;
    }
    if (t88 == t93) {
        *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x20)));
        t99 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x20);
        u100 = *(float *)((a4 + 0xAF0));
        *(float *)((a5 + 0x8)) = (u100 + (float)t99);
        t103 = 0x1;
        if ((u100 + (float)t99) > 0.0f) {
        } else {
            t101 = 0x0;
            if (0.0f > (u100 + (float)t99)) {
                t101 = 0xFFFFFFFF;
            }
            t103 = t101;
        }
        u105 = *(float *)((a4 + 0xB00));
        t108 = 0x1;
        if (u105 > 0.0f) {
        } else {
            t106 = 0x0;
            if (0.0f > u105) {
                t106 = 0xFFFFFFFF;
            }
            t108 = t106;
        }
        if (t103 == t108) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            return 0x8;
        }
        return 0xB00;
    }
    *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x30)));
    t115 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x30);
    u116 = *(float *)((a4 + 0xAF0));
    *(float *)((a5 + 0x8)) = (u116 + (float)t115);
    t119 = 0x1;
    if ((u116 + (float)t115) > 0.0f) {
    } else {
        t117 = 0x0;
        if (0.0f > (u116 + (float)t115)) {
            t117 = 0xFFFFFFFF;
        }
        t119 = t117;
    }
    u121 = *(float *)((a4 + 0xB00));
    t124 = 0x1;
    if (u121 > 0.0f) {
    } else {
        t122 = 0x0;
        if (0.0f > u121) {
            t122 = 0xFFFFFFFF;
        }
        t124 = t122;
    }
    if (t119 == t124) {
        *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
        return 0x8;
    }
    return 0xB00;
}
