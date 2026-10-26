/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ballInit(int);
int buGetDiskInfo(int, int);
int camProject(int, int, Stk3);
int camWorldToView(int, ...);
int circuitNumDraw(int, int, int, float, float, float);
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, Stk3, float, float);
int cpuSglAimScoreAngle(int, int);
int decoGaugeBarPut(int, int, int, Stk3);
int decoGaugeFramePut(int, int, Stk3);
int decoNumDraw(int, int, int, int, Stk3, float);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeDraw(void);
int fadeStart(int);
int mainCheckReset(void);
int miniBallCopySpawn(void);
int miniEffectSpawn(Stk4);
int miniLaunchBall(void);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSetCurrent(int);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int);
int msgWinStep(int, int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlLineSetDiv(float);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSprPut(int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSeqRequest(int);
int padExec(void);
int padLcdMessage(int);
int pdExecPeripheralServer(void);
int pdTmrAlarm(int);
int primSprSetSize(int, float, float);
int resCautionReset(int);
int serveGetServer(void);
int shotAim(int, float);
int sklDrawNodeOne(int);
int sprCellInit(int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffLookAtBall(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int BupFailDialog(int a4);
int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4);
int ballBoyPoseIdle(int a4);
void playerDrawMarker(int a4);
void dbgVdEdit(void);
int courtUsaDrawExtras(int a4);
float cpuSglAimRateOpp(int a4, int a5);
int circuitDrawStatus(void);
int endingSprAnimStep(int a4, int a5, int a6);
float cpuAimDistRate(int a4, int a5, int a6, int a7, int a8);
int miniLaunchAimed(int a4);



int ballBoyPoseIdle(int a4)
{
    int t58;
    int t95;
    int t102;
    int t109;
    int t103;
    int t104;
    int t106;
    int t108;
    int t78;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0670)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5BC))), (0x5CC + a4), (*(int *)((a4 + 0x5C8))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    if ((*(int *)0x8C20D14C) == 3) {
        nlPushUnitMatrix();
        nlLoadMatrix(((0x1E4 + a4) + 0xC0));
        nlRotateAY(0xFFFFC000);
        nlGetMatrix(((0x1E4 + a4) + 0xC0));
        nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    t58 = 0x0;
    for (;;) {
        nlLoadMatrix(((((t58 << 2) << 2) << 2) + (0x1E4 + a4)));
        *(unsigned int *)(((int)stk + 8)) = (t58 << 2);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((t58 << 2) + (*(int *)(((int)stk + 4)))))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D03F0))) + (*(int *)(((int)stk + 8)))))));
        }
        if ((t58 == 3) && (t78 = *(int *)0x8C1891E8, t78 == 2)) {
            if ((*(int *)0x8C38B768) != 0) {
                nlScale(1.0f, 1.09809995f, 1.12950003f);
            }
            nlRotateAY(0x4000);
            if ((*(int *)0x8C38B768) != 0) {
                nlLineSetDiv(1.12950003f);
            }
            t95 = 0xC880320;
            if ((*(int *)((a4 + 0x0))) == 0) {
                t95 = 0xC880000;
            }
            nlObjPut(t95);
        }
        t58 = (t58 + 0x1);
        if ((int)t58 >= (int)0xF) {
            break;
        }
    }
    t102 = *(int *)0x8C38B768;
    t109 = (nlPopMatrix(0x1));
    if (t102 != 0) {
        t103 = *(int *)(((int)stk + 4));
        t104 = t103;
        for (;;) {
            nlPushMatrix(0x0);
            t106 = *(int *)((t104 + 0x0));
            t104 = (t104 + 0x4);
            sklDrawNodeOne(t106);
            t108 = nlPopMatrix(0x1);
            if ((unsigned int)t104 >= (unsigned int)(t103 + 0x3C)) {
                break;
            }
        }
        t109 = t108;
    }
    return t109;
}

void playerDrawMarker(int a4)
{
    float u6;
    int t10;
    float u14;
    int t41;
    int t42;
    int t73;
    int t74;
    int t38;
    int stk[42];

    if ((*(int *)0x8C421F60) != 0) {
    } else {
        if (((*(int *)0x8C287B3C) & 1) != 0) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xCA4 + a4)); }
            camWorldToView((((int)stk + 20) + 0x14));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
            camProject((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x1C), *(Stk3 *)((((int)stk + 16) + 0x18)));
            *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 320.0f);
            u6 = *(float *)(((int)stk + 32));
            *(float *)(((int)stk + 32)) = (240.0f - u6);
            if (100.0f > (240.0f - u6)) {
                *(float *)(((int)stk + 32)) = 100.0f;
            }
            if ((*(int *)0x8C295DAC) != 0) {
                t10 = *(int *)((0x8C287AE0 + ((serveGetServer()) << 2)));
                if (t10 == 0) {
                    u14 = 160.0f;
                    if ((*(int *)((a4 + 0xD4C))) != 0) {
                        u14 = 480.0f;
                    }
                    *(float *)(((int)stk + 36)) = u14;
                    *(float *)(((int)stk + 32)) = 240.0f;
                }
            }
            sprCellInit((((int)stk + 32) + 0x14), 0x3);
            *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 36)));
            *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 32)));
            *(float *)(((int)stk + 64)) = 4.0f;
            *(float *)(((int)stk + 84)) = 0.25f;
            *(float *)(((int)stk + 68)) = 0.25f;
            *(unsigned int *)(((int)stk + 104)) = 0xE;
            nlSprPut((((int)stk + 32) + 0x14));
            sprCellInit((((int)stk + 32) + 0x14), 0x3);
            *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 36)));
            *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 32)));
            *(float *)(((int)stk + 64)) = (1.0f + 1.0f);
            *(float *)(((int)stk + 76)) = 0.25f;
            *(float *)(((int)stk + 84)) = 0.5f;
            *(float *)(((int)stk + 68)) = 0.25f;
            *(unsigned int *)(((int)stk + 104)) = 0xE;
            nlSprPut((((int)stk + 32) + 0x14));
            if (!(1.0f > (*(float *)((a4 + 0xC90)))) && (t38 = *(int *)((a4 + 0xCC0)), t38 == 3)) {
                t41 = *(int *)0x8C20D19C;
                t42 = ((~(((~t41) + 0x1) & 0x3)) + 0x1);
                if ((int)t41 >= 0) {
                    t42 = (t41 & 0x3);
                }
                if ((int)t42 < (int)0x2) {
                    sprCellInit((((int)stk + 32) + 0x14), 0x3);
                    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 36)));
                    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 32)));
                    *(float *)(((int)stk + 64)) = 3.0f;
                    *(float *)(((int)stk + 76)) = 0.5f;
                    *(float *)(((int)stk + 84)) = 0.75f;
                    *(float *)(((int)stk + 80)) = ((float)((((-(int)((*(float *)((a4 + 0xC90))) * 7.0f)) + 0x7) << 2) << 1) / 64.0f);
                    *(float *)(((int)stk + 88)) = ((float)(((((-(int)((*(float *)((a4 + 0xC90))) * 7.0f)) + 0x7) << 2) << 1) + 0x7) / 64.0f);
                    *(float *)(((int)stk + 68)) = 0.25f;
                    *(float *)(((int)stk + 72)) = (((*(float *)((a4 + 0xC90))) * 62.0f) / 64.0f);
                    *(unsigned int *)(((int)stk + 104)) = 0xE;
                    nlSprPut((((int)stk + 32) + 0x14));
                }
            } else {
                sprCellInit((((int)stk + 32) + 0x14), 0x3);
                *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 36)));
                *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 32)));
                *(float *)(((int)stk + 64)) = 3.0f;
                *(float *)(((int)stk + 76)) = 0.5f;
                *(float *)(((int)stk + 84)) = 0.75f;
                *(float *)(((int)stk + 80)) = ((float)((((-(int)((*(float *)((a4 + 0xC90))) * 7.0f)) + 0x7) << 2) << 1) / 64.0f);
                *(float *)(((int)stk + 88)) = ((float)(((((-(int)((*(float *)((a4 + 0xC90))) * 7.0f)) + 0x7) << 2) << 1) + 0x7) / 64.0f);
                *(float *)(((int)stk + 68)) = 0.25f;
                *(float *)(((int)stk + 72)) = (((*(float *)((a4 + 0xC90))) * 62.0f) / 64.0f);
                *(unsigned int *)(((int)stk + 104)) = 0xE;
                nlSprPut((((int)stk + 32) + 0x14));
            }
            if ((*(float *)((a4 + 0xC90))) == 1.0f) {
                sprCellInit((((int)stk + 32) + 0x14), 0x0);
                *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 36)));
                *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 32))) + -72.0f);
                *(float *)(((int)stk + 64)) = (1.0f + 1.0f);
                if ((*(int *)((a4 + 0xCC0))) == 3) {
                    t73 = *(int *)0x8C20D19C;
                    t74 = ((~(((~t73) + 0x1) & 0x7)) + 0x1);
                    if ((int)t73 >= 0) {
                        t74 = (t73 & 0x7);
                    }
                    *(float *)(((int)stk + 96)) = ((float)(0x7 - t74) / 8.0f);
                }
                *(unsigned int *)(((int)stk + 104)) = 0xE;
                nlSprPut((((int)stk + 32) + 0x14));
            }
        }
    }
}

void dbgVdEdit(void)
{
    
}

int courtUsaDrawExtras(int a4)
{
    int t101;
    int t5;
    int t33;

    if ((*(int *)0x8C287ADC) != 2) {
        nlObjPut(0xC8DE1C8);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t5 = (*(int *)0x8C18B1E4);
        } else {
            t5 = (*(int *)0x8C18B1E0);
        }
        t101 = (nlObjPut(t5));
    } else {
        nlObjPut(0xC8BAB28);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18B1C4));
            nlObjPut((*(int *)0x8C18B1CC));
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 190.0f);
            nlObjPut((*(int *)0x8C18B1D4));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -63.5f);
            t33 = 0x8C18B1DC;
        } else {
            nlObjPut((*(int *)0x8C18B1C0));
            nlObjPut((*(int *)0x8C18B1C8));
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 190.0f);
            nlObjPut((*(int *)0x8C18B1D0));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -63.5f);
            t33 = 0x8C18B1D8;
        }
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 63.5f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, -118.0f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 118.0f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-40.5999985f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(0.0f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(40.5999985f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-40.5999985f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(0.0f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(40.5999985f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, -118.0f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, 118.0f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t33 + 0x0))));
        t101 = (nlPopMatrix(0x1));
    }
    return t101;
}

float cpuSglAimRateOpp(int a4, int a5)
{
    int t0;
    int t1;
    float u7;
    float u8;
    float u9;
    float u17;
    int t13;
    int t11;
    float u23;
    float u24;
    float u27;
    int t31;
    int t29;
    float u33;
    int t36;
    int t34;
    float u39;
    int t55;
    float u116;
    int t57;
    int t58;
    float u59;
    float t70;
    float t71;
    float t72;
    int t73;
    float u77;
    float t78;
    float t79;
    float t80;
    float u92;
    float t93;
    float t94;
    float t95;
    float u52;
    float u46;
    int t56;
    float u101;
    float u68;
    float u86;
    int stk[32];

    *(unsigned int *)(((int)stk + 40)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    cpuSglAimScoreAngle(a4, (*(int *)(((int)stk + 40))));
    u7 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u7 = u7 + 0.800000012f * ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u8 = *(float *)0x8C287B40;
    u9 = (-u7);
    if (!(0.0f > u7)) {
        u9 = u7;
    }
    u17 = u7;
    if (u9 > u8) {
        t13 = 0x1;
        if (u7 > 0.0f) {
        } else {
            t11 = 0x0;
            if (0.0f > u7) {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        u17 = ((float)t13 * u8);
    }
    u23 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u23 = u23 + 0.800000012f * ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u24 = (-u23);
    if (!(0.0f > u23)) {
        u24 = u23;
    }
    if (u24 > 118.849998f) {
        u52 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u27 = (-u23);
        if (!(0.0f > u23)) {
            u27 = u23;
        }
        if (!(23.7700005f > u27)) {
            t31 = 0x1;
            if (u23 > 0.0f) {
            } else {
                t29 = 0x0;
                if (0.0f > u23) {
                    t29 = 0xFFFFFFFF;
                }
                t31 = t29;
            }
            u33 = *(float *)((a4 + 0xB00));
            t36 = 0x1;
            if (u33 > 0.0f) {
            } else {
                t34 = 0x0;
                if (0.0f > u33) {
                    t34 = 0xFFFFFFFF;
                }
                t36 = t34;
            }
            u39 = u23;
            if (t31 != t36) {
                u39 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
            }
            u46 = u39;
        } else {
            u46 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
        }
        u52 = u46;
    }
    *(float *)(((int)stk + 56)) = u17;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = u52;
    t55 = *(int *)(((int)stk + 40));
    u116 = 0.800000012f;
    if ((int)(t55 - 1) < 0) {
    } else {
        t57 = (t55 - 1);
        t58 = 0x8C2FCC6C;
        u59 = u52;
        for (;;) {
            *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = ((*(float *)((t58 + 0x0))) - (*(float *)((a4 + 0xB9C))));
            *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = ((*(float *)((t58 + 0x8))) - (*(float *)((a4 + 0xBA4))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x10)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
            cpuLineCrossXZ((((int)stk + 4) + 0x28), *(Stk3 *)((0xB9C + a4)), u59, u17);
            if ((unsigned char)(*(signed char *)((t58 + 0xC))) == 1) {
                u59 = (*(float *)((t58 + 0x8)));
                if (!(0.0f > u59)) {
                    u68 = u59;
                } else {
                    u68 = (-u59);
                }
                if (!(u68 > 64.0f)) {
                    t56 = 0x8C10D41C;
                    t70 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                    t71 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                    t72 = cpuDistXZ(t58, (0xB9C + a4));
                    t73 = *(int *)0x8C1891E8;
                    u59 = ((((((t70 / t71) * t72) / 118.849998f) / ((*(float *)(((((t73 << 2) << 1) + t56) + 0x0))) * (*(float *)(((((t73 << 2) << 1) + t56) + 0x4)))))) * 20.0f);
                    u86 = t72;
                } else {
                    u77 = *(float *)0x8C04EAF4;
                    t78 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                    t79 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                    t80 = cpuDistXZ(t58, (0xB9C + a4));
                    u59 = (((((t78 / t79) * t80) / (*(float *)0x8C287B40))) * u77);
                    u86 = t80;
                }
                u101 = u86;
            } else {
                u92 = *(float *)0x8C04EAF4;
                t93 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                t94 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                t95 = cpuDistXZ(t58, (0xB9C + a4));
                u59 = (((((t93 / t94) * t95) / (*(float *)0x8C287B40))) * u92);
                u101 = t95;
            }
            t57 = (t57 - 1);
            *(float *)((t58 + 0x1C)) = u59;
            t58 = (t58 + 0x20);
            if ((int)t57 >= 0) continue;
            break;
        }
        u116 = u101;
    }
    return u116;
}

int circuitDrawStatus(void)
{
    int t8;
    int t41;
    float u65;
    float u67;
    float u68;
    float u73;
    float u78;
    float u26;

    sprSheetSet(0x8C108A5C);
    *(float *)0x8C2876B8 = ((*(float *)0x8C2876B8) * 188.0f);
    sprSheetPut(0x0, 414.0f, 272.0f, 52.0999985f, 0.699999988f);
    sprSheetSet(0x8C108A80);
    sprSheetPut(0x0, 607.0f, 272.0f, 52.0999985f, 0.699999988f);
    sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C159B78))));
    t8 = *(signed char *)0x8C2FBC7C;
    if (((unsigned char)t8 == 4) || ((unsigned char)t8 == 6)) {
        *(float *)0x8C2878DC = 4.0f;
    }
    sprSheetPut(0x7, (float)(0x19E + (*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C108B24)))), 275.0f, 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 0.454901963f, 0.0f);
    sprSheetSet(0x8C108AC8);
    sprSheetPut(0x2000, 420.0f, 297.0f, 52.0f, 1.0f);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    if ((unsigned char)(*(signed char *)0x8C2FBC7D) != 0xFF) {
        sprSheetSet((*(int *)(((((unsigned char)(*(signed char *)0x8C2FBC7D) - 8) << 2) + 0x8C159BC0))));
        u26 = 297.0f;
    } else {
        sprSheetSet(0x8C108A28);
        u26 = (*(float *)0x8C031474);
    }
    sprSheetPut(0x2007, 608.0f, u26, 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    circuitNumDraw((*(int *)0x8C2FBC58), 0x60, 0x8C159BE0, (*(float *)0x8C031480), (*(float *)0x8C03147C), 52.0f);
    nlObjPutSetFadeColor((*(float *)0x8C031488), 1.0f, 0.0f);
    sprSheetSet(0x8C108AA4);
    sprSheetPut(0x2000, (*(float *)0x8C031494), (*(float *)0x8C031490), 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    t41 = *(int *)0x8C2FBE68;
    *(unsigned int *)0x8C2FBE68 = (t41 - 1);
    if ((int)(t41 - 1) >= 0) {
        if ((int)((int)((int)(*(int *)0x8C20D198) % (int)0x1E)) < (int)0x14) {
            circuitNumDraw((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x10, 0x8C159C08, (*(float *)0x8C0314B0), (*(float *)0x8C0314AC), 52.0f);
        }
    } else {
        circuitNumDraw((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x10, 0x8C159C08, (*(float *)0x8C0314B0), (*(float *)0x8C0314AC), 52.0f);
    }
    sprSheetSet(0x8C108AEC);
    u65 = *(float *)0x8C0314B8;
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * u65);
    u67 = *(float *)0x8C0314C0;
    u68 = *(float *)0x8C0314C4;
    sprSheetPut(0x0, (*(float *)0x8C0314CC), (*(float *)0x8C0314C8), u67, u68);
    sprSheetSet(0x8C108B10);
    u73 = *(float *)0x8C0314D4;
    sprSheetPut(0x0, u73, (*(float *)0x8C0314C8), u67, u68);
    sprSheetSet(0x8C108AEC);
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * u65);
    u78 = *(float *)0x8C0314D8;
    sprSheetPut(0x0, (*(float *)0x8C0314CC), u78, u67, u68);
    sprSheetSet(0x8C108B10);
    return (sprSheetPut(0x0, u73, u78, u67, u68));
}

int endingSprAnimStep(int a4, int a5, int a6)
{
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C0D5344:;
    *(unsigned int *)(((int)stk + 4)) = ((R6 << 2) << 2);
    *(unsigned int *)((R4 + 0x0)) = (*(int *)(((((R6 << 2) << 2) + 0x8C1D2BE8) + 0x0)));
    *(unsigned int *)((R4 + 0x28)) = 0x0;
    *(float *)((R4 + 0x4)) = 0.0f;
    *(float *)((R4 + 0x8)) = 0.0f;
    *(float *)((R4 + 0xC)) = 0.00999999978f;
    R0 = (R6);
    R14 = ((((R6 << 2) << 2) + 0x8C1D2BE8));
    R7 = ((((R5 << 2) + R5) << 2));
    F4 = (1.0f);
    if ((R6 == 0)) goto L_8C0D53AC;
    goto L_8C0D5380;
    L_8C0D5380:;
    if ((R0 == 1)) goto L_8C0D53FC;
    goto L_8C0D5384;
    L_8C0D5384:;
    if ((R0 == 2)) goto L_8C0D5446;
    goto L_8C0D5388;
    L_8C0D5388:;
    if ((R0 != 3)) goto L_8C0D5390;
    goto L_8C0D538C;
    L_8C0D538C:;
    goto L_8C0D5490;
    L_8C0D5490:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D3104 + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D3104 + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D3104 + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D3104 + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D3104 + R7) + 0x10))) != F4)) goto L_8C0D55AA;
    goto L_8C0D54D2;
    L_8C0D54D2:;
    goto L_8C0D55A4;
    L_8C0D55A4:;
    *(unsigned int *)((R4 + 0x34)) = 0xA;
    goto L_8C0D55AE;
    L_8C0D55AE:;
    *(float *)((R4 + 0x10)) = (((*(float *)((R4 + 0x20))) - (*(float *)((R4 + 0x18)))) * F4);
    *(float *)((R4 + 0x14)) = (((*(float *)((R4 + 0x24))) - (*(float *)((R4 + 0x1C)))) * F4);
    *(float *)((R4 + 0x2C)) = F4;
    *(unsigned int *)((R4 + 0x30)) = 0xFFFFFFFF;
    return 0x2C;
    L_8C0D55AA:;
    *(unsigned int *)((R4 + 0x34)) = 0x5;
    goto L_8C0D55AE;
    L_8C0D5390:;
    if ((R0 != 4)) goto L_8C0D5398;
    goto L_8C0D5394;
    L_8C0D5394:;
    goto L_8C0D54D6;
    L_8C0D54D6:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D31A4 + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D31A4 + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D31A4 + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D31A4 + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D31A4 + R7) + 0x10))) != F4)) goto L_8C0D55AA;
    goto L_8C0D5518;
    L_8C0D5518:;
    goto L_8C0D55A4;
    L_8C0D5398:;
    if ((R0 != 5)) goto L_8C0D53A0;
    goto L_8C0D539C;
    L_8C0D539C:;
    goto L_8C0D551C;
    L_8C0D551C:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D32A8 + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D32A8 + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D32A8 + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D32A8 + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D32A8 + R7) + 0x10))) != F4)) goto L_8C0D55AA;
    goto L_8C0D555E;
    L_8C0D555E:;
    goto L_8C0D55A4;
    L_8C0D53A0:;
    if ((R0 != 6)) goto L_8C0D53A8;
    goto L_8C0D53A4;
    L_8C0D53A4:;
    goto L_8C0D5562;
    L_8C0D5562:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D3348 + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D3348 + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D3348 + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D3348 + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D3348 + R7) + 0x10))) != F4)) goto L_8C0D55AA;
    goto L_8C0D55A4;
    L_8C0D53A8:;
    goto L_8C0D55AE;
    L_8C0D5446:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D3078 + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D3078 + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D3078 + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D3078 + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D3078 + R7) + 0x10))) == F4)) goto L_8C0D548C;
    goto L_8C0D5488;
    L_8C0D5488:;
    goto L_8C0D55AA;
    L_8C0D548C:;
    goto L_8C0D55A4;
    L_8C0D53FC:;
    *(float *)((R4 + 0x18)) = ((*(float *)(((0x8C1D2F4C + R7) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)(((0x8C1D2F4C + R7) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)(((0x8C1D2F4C + R7) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)(((0x8C1D2F4C + R7) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)(((0x8C1D2F4C + R7) + 0x10))) == F4)) goto L_8C0D5442;
    goto L_8C0D543E;
    L_8C0D543E:;
    goto L_8C0D55AA;
    L_8C0D5442:;
    goto L_8C0D55A4;
    L_8C0D53AC:;
    *(float *)((R4 + 0x18)) = ((*(float *)((((R5 * 0x1C) + 0x8C1D2C58) + 0x0))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x1C)) = ((*(float *)((((R5 * 0x1C) + 0x8C1D2C58) + 0x4))) / (*(float *)((R14 + 0x8))));
    *(float *)((R4 + 0x20)) = ((*(float *)((((R5 * 0x1C) + 0x8C1D2C58) + 0x8))) / (*(float *)((R14 + 0x4))));
    *(float *)((R4 + 0x24)) = ((*(float *)((((R5 * 0x1C) + 0x8C1D2C58) + 0xC))) / (*(float *)((R14 + 0x8))));
    if (((*(float *)((((R5 * 0x1C) + 0x8C1D2C58) + 0x10))) != F4)) goto L_8C0D53F8;
    goto L_8C0D53F4;
    L_8C0D53F4:;
    goto L_8C0D55A4;
    L_8C0D53F8:;
    goto L_8C0D55AA;
}

float cpuAimDistRate(int a4, int a5, int a6, int a7, int a8)
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
    float t111;
    float t114;
    int t115;
    float u116;
    float t120;
    int t121;
    float u122;
    float t126;
    int t127;
    float u128;
    float u151;
    float u11;
    float u21;
    float u138;
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
        if (!(t26 > t29)) {
        } else {
            *(float *)((a8 + 0x8)) = (*(float *)((a7 + 0x8)));
        }
        u151 = 0.0f;
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
        t51 = 0x0;
        t52 = ((int)stk + 4);
        if (t43 != t48) {
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((((int)stk + 4) + 0x8)) = u40;
            t51 = 0x1;
            t52 = (((int)stk + 4) + 0xC);
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
            *(float *)((t52 + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)((t52 + 0x8)) = u56;
            t68 = (t51 + 0x1);
            t69 = (t52 + 0xC);
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
            *(float *)((t69 + 0x0)) = ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t69 + 0x8)) = (*(float *)((a6 + 0x8)));
            t84 = (t68 + 0x1);
            t85 = (t69 + 0xC);
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
        t100 = t84;
        if (t92 != t97) {
            *(float *)((t85 + 0x0)) = ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t85 + 0x8)) = (*(float *)((a7 + 0x8)));
            t100 = (t84 + 0x1);
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
            u138 = 0.0f;
        } else {
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((((int)stk + 4) + 0x8)) = (*(float *)((a6 + 0x8)));
            t111 = cpuDistXZ(((int)stk + 4), a5);
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = (*(float *)((a7 + 0x8)));
            t114 = cpuDistXZ((((int)stk + 4) + 0xC), a5);
            t115 = 0x0;
            u116 = t111;
            if (t111 > t114) {
                t115 = 0x1;
                u116 = t114;
            }
            *(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x8)) = (*(float *)((a6 + 0x8)));
            t120 = cpuDistXZ(((((int)stk + 4) + 0xC) + 0xC), a5);
            t121 = t115;
            u122 = u116;
            if (u116 > t120) {
                t121 = 0x2;
                u122 = t120;
            }
            *(float *)(((((((int)stk + 4) + 0xC) + 0xC) + 0xC) + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)(((((((int)stk + 4) + 0xC) + 0xC) + 0xC) + 0x8)) = (*(float *)((a7 + 0x8)));
            t126 = cpuDistXZ((((((int)stk + 4) + 0xC) + 0xC) + 0xC), a5);
            t127 = t121;
            u128 = u122;
            if (u122 > t126) {
                t127 = 0x3;
                u128 = t126;
            }
            *(float *)(((int)stk + 76)) = (*(float *)((((((t127 << 1) + t127) << 2) + ((int)stk + 4)) + 0x0)));
            *(float *)(((int)stk + 80)) = 0.0f;
            *(float *)(((int)stk + 84)) = (*(float *)((((((t127 << 1) + t127) << 2) + ((int)stk + 4)) + 0x8)));
            u138 = u128;
        }
        u151 = u138;
    }
    return u151;
}

int miniLaunchAimed(int a4)
{
    int t110;
    int t4;
    int t97;
    int t16;
    int t20;
    int t21;
    int t23;
    int t25;
    float t27;
    float u45;
    int t56;
    int t57;
    int t58;
    int t75;
    int t76;
    int t77;
    int t84;
    int t24;
    int t26;
    int t31;
    int t59;
    int t78;
    int stk[58];

    t110 = 0xFFFFFF5C;
    if ((*(int *)0x8C287C60) == 0) {
        t4 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
        t97 = t4;
        if (t4 == 1) {
            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x18))) == (int)(30.0f / (*(float *)0x8C23D204))) {
                miniLaunchBall();
            }
            t16 = *(int *)0x8C2FBEF0;
            t20 = (int)((int)(*(int *)((t16 + 0x18))) % (int)(int)((float)((-((*(int *)((t16 + 0x40))) * 0x1E)) + 0x5A) / (*(float *)0x8C23D204)));
            if (t20 != 0) {
                t84 = t20;
            } else {
                t21 = 0x8C291F24;
                t23 = (((int)stk + 20) + 0x18);
                for (;;) { t24 = *(int *)t21; t21 = (t21 + 4); if ((unsigned int)((0x8C291F24 + 140)) < (unsigned int)t21) break; *(unsigned int *)t23 = t24; t23 = (t23 + 4); }
                t25 = 0x0;
                for (;;) {
                    t27 = nlRandom();
                    t25 = (t25 + 0x1);
                    if ((int)t25 > (int)0x64) {
                        break;
                    }
                    t26 = (int)(t27 * 5.0f);
                    t26 = (t26 << 2);
                    if (((*(int *)((t26 + 0x8C2FBF54))) == 0) && (t31 = *(int *)((t26 + 0x8C2FC0A0)), (int)t31 <= 0)) {
                        ballInit(0x8C291F24);
                        *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
                        *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFD);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0xC)) = *(struct mv3 *)((((((int)(t27 * 5.0f) << 1) + (int)(t27 * 5.0f)) << 2) + 0x8C2FC058)); }
                        vecMake(0x0, 0x0, 0x0, 0x0, 0x8C291F30, (*(float *)(((int)stk + 32))), 8.0f, ((*(float *)(((int)stk + 40))) + 5.0f));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F3C) = *(struct mv3 *)(0x8C291F30); }
                        vecMake(0x0, 0x0, 0x0, 0x0, 0x8C291F58, 0.0f, ((((-((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x40))) * 0.100000001f)) + 1.10000002f)) * 0.699999988f), 0.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F48) = *(struct mv3 *)(0x8C291F58); }
                        *(float *)0x8C291F94 = 0.0235200021f;
                        *(float *)0x8C291F54 = 0.0f;
                        *(unsigned int *)0x8C289758 = 0x0;
                        nlPushUnitMatrix();
                        nlRotateAY((unsigned short)(*(short *)((((int)(t27 * 5.0f) << 1) + 0x8C2FC094))));
                        u45 = *(float *)(((int)stk + 40));
                        if (!(0.0f > u45)) {
                            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), 0.0f, 0.0f, (u45 + (*(float *)0x8C288874)));
                            nlCalcPoint(((int)stk + 20), ((int)stk + 20));
                            nlAddVector(((int)stk + 20), (((int)stk + 20) + 0xC));
                            *(float *)0x8C28968C = ((*(float *)(((int)stk + 20))) / 41.1500015f);
                            *(float *)0x8C289694 = (((*(float *)(((int)stk + 28))) + -59.4249992f) / 59.4249992f);
                            nlPopMatrix(0x1);
                            shotAim(0x8C288AFC, (*(float *)0x8C291F94));
                            miniBallCopySpawn();
                            t56 = (((int)stk + 20) + 0x18);
                            t57 = ((((int)stk + 20) + 0x18) + 140);
                            t58 = 0x8C291F24;
                            for (;;) { t59 = *(int *)t56; t56 = (t56 + 4); if ((unsigned int)t57 < (unsigned int)t56) break; *(unsigned int *)t58 = t59; t58 = (t58 + 4); }
                            nlsndSeqRequest(0x1202A9);
                            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((int)stk + 32))), 8.0f, ((*(float *)(((int)stk + 40))) + 5.0f));
                            miniEffectSpawn(*(Stk4 *)((int)stk + 8));
                            *(unsigned int *)((t26 + 0x8C2FC0A0)) = 0x1E;
                            return 0x8C2FC0A0;
                        }
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), 0.0f, 0.0f, ((-u45) + (*(float *)0x8C288874)));
                        nlCalcPoint(((int)stk + 20), ((int)stk + 20));
                        nlAddVector(((int)stk + 20), (((int)stk + 20) + 0xC));
                        *(float *)0x8C28968C = ((*(float *)(((int)stk + 20))) / 41.1500015f);
                        *(float *)0x8C289694 = (((*(float *)(((int)stk + 28))) + -59.4249992f) / 59.4249992f);
                        nlPopMatrix(0x1);
                        shotAim(0x8C288AFC, (*(float *)0x8C291F94));
                        miniBallCopySpawn();
                        t75 = (((int)stk + 20) + 0x18);
                        t76 = ((((int)stk + 20) + 0x18) + 140);
                        t77 = 0x8C291F24;
                        for (;;) { t78 = *(int *)t75; t75 = (t75 + 4); if ((unsigned int)t76 < (unsigned int)t75) break; *(unsigned int *)t77 = t78; t77 = (t77 + 4); }
                        nlsndSeqRequest(0x1202A9);
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((int)stk + 32))), 8.0f, ((*(float *)(((int)stk + 40))) + 5.0f));
                        miniEffectSpawn(*(Stk4 *)((int)stk + 8));
                        *(unsigned int *)((t26 + 0x8C2FC0A0)) = 0x1E;
                        return 0x8C2FC0A0;
                    }
                }
            }
            t97 = t84;
        }
        t110 = t97;
    }
    return t110;
}

int BupFailDialog(int a4)
{
    int t9;
    int t14;
    int t24;
    int t26;
    int t8;
    int stk[43];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)0x8C40C6A4 = 0x1;
    *(unsigned int *)(((int)stk + 28)) = (((*(int *)0x8C40C628) * 0x4C) + 0x8C40C6B0);
    resCautionReset(0x0);
    *(unsigned char *)(((((int)stk + 20) + 0x50) + 0x0)) = (*(signed char *)0x8C126BC7);
    *(unsigned char *)(((((int)stk + 20) + 0x50) + 0x1)) = (*(signed char *)0x8C126BC8);
    *(unsigned char *)(((((int)stk + 20) + 0x50) + 0x2)) = (*(signed char *)0x8C126BC9);
    *(unsigned char *)(((((int)stk + 20) + 0x50) + 0x3)) = (*(signed char *)0x8C126BCA);
    pdTmrAlarm(0x1);
    padLcdMessage(0xA);
    *(unsigned int *)(((int)stk + 24)) = 0x8C29B8A8;
    *(unsigned int *)(((int)stk + 32)) = 0x8C29B898;
    *(unsigned int *)(((int)stk + 36)) = (((int)stk + 20) + 0x24);
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 20) + 0x24) + 0xC);
    *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 20) + 0x24) + 0x18);
    *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 20) + 0x24) + 0x24);
    t9 = 0x0;
    for (;;) {
        if ((*(int *)(((int)stk + 52))) == 0) {
            pdExecPeripheralServer();
            t14 = buGetDiskInfo((*(int *)0x8C40C628), ((*(int *)(((int)stk + 28))) + 0x14));
            if (t14 == 0xFFFFFF01) {
                t9 = 0x1;
            }
            if (t9 == 1) {
                if (t14 == 0) {
                    t9 = 0x2;
                }
                if (t9 == 1) {
                    *(unsigned int *)0x8C40C6A4 = 0x0;
                }
            }
            if (t9 == 2) {
                break;
            }
            t8 = 0x0;
            t24 = (*(int *)(((int)stk + 32)));
            for (;;) {
                t26 = *(int *)(((*(int *)((t24 + 0x0))) + 0x10));
                t24 = (t24 + 0x4);
                if ((t26 & 8) != 0) {
                    t8 = 0x1;
                }
                if ((unsigned int)t24 >= (unsigned int)(*(int *)(((int)stk + 24)))) {
                    break;
                }
            }
            if (t8 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
                *(unsigned int *)0x8C40C698 = 0x0;
            }
            fadeStart(0xA);
            if (t8 != 0) {
                fadeCaptureBegin();
            }
            vecMake(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 36)))), 75.0f, 200.0f, 0.0500000007f);
            vecMake(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 40)))), 75.0f, 325.0f, 0.0500000007f);
            vecMake(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 44)))), 595.0f, 200.0f, 0.0500000007f);
            vecMake(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 48)))), 595.0f, 325.0f, 0.0500000007f);
            msgWinFramePut((((int)stk + 20) + 0x24), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
            if ((*(int *)(((int)stk + 20))) == 0) {
                vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 240.0f, 225.0f, 0.00999999978f);
                msgWinPut(0x2, 0x0);
            } else {
                if ((*(int *)(((int)stk + 20))) == 1) {
                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 240.0f, 225.0f, 0.00999999978f);
                    msgWinPut(0x9, 0x0);
                }
            }
            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 370.0f, 275.0f, 0.00999999978f);
            msgWinPut(0x0, 0x0);
            if (t8 != 0) {
                fadeCaptureEnd(0x0);
            }
            mainCheckReset();
            msgWinStep(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
            padExec();
            fadeDraw();
            nlWaitVSync();
            continue;
        }
        pdExecPeripheralServer();
        resCautionReset(0x0);
        fadeStart(0x1E);
        return 0x1;
    }
    return 0x0;
}


