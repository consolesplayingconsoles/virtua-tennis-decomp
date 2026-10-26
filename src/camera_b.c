/* cameraExec, written by hand from the Dreamcast code with the generator reading it case by case (build/camparts); joined by
   build/camjoin.py. The frame is one array: SP is the function's stack pointer, SP[k] the word at sp + 4k. */

typedef struct { int w[3]; } Stk3;

Stk3 vecMake(float, float, float);
float FUN_8c029fe0(float, float);
float courtLimitZ(void);
float nlInnerProduct(int, int);
float nlRandom(void);
int FUN_8c029f50(void);
int FUN_8c08535e(void);
int angDiff(int, int);
int camMoveBeginAtGoal(float, float);
int camSetOrbit(int, int, float);
int cameraFovFit(int, int, int, int, Stk3, Stk3, float, float);
int circuitDrawPrompt(void);
int circuitStatsStart(void);
int courtColliInit(void);
int evCrowdClapStart(void);
int evPackFade(int, int, int);
int evPlayerCallStart(int);
int lightAimFromMatrix(void);
int lightStagePreset(void);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int padLcdModeClear(void);
int playerHumanPressed(int);
int primRectInc(int, int, int, int, int, int, int, int);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int strmBgmPlayStage(void);
int strmCrowdFadeOut(void);
extern int camExec();
extern int camSetEye();
extern int camSetTarget();
extern int lightCamCalc();
float camMoveBegin(float, float);
float cameraFovForSize(float);
int nlArcTan2(float, float);
int padLcdSetMode(int);
int entryCountJoined(void);
int lightStagePreset(void);
int lightAimFromMatrix(void);

/* manual: written by hand from the Dreamcast code (14.6 KB, twelve camera modes; the generator read it one case at a time); tools must not regenerate it */
void cameraExec(int mode)
{
    int frame[256];
    int *SP = frame + 96;
    int i;

    SP[39] = mode;
    SP[38] = 0x8C287ACC;
    SP[37] = 0x8C291F24;
    SP[9] = 0x8C157594 + *(int *)0x8C1891E8 * 208;
    SP[3] = 0;
    if (*(int *)0x8C287C60 != 0)
        return;
    *(int *)0x8C34B148 = SP[39];
    if (*(int *)0x8C421F60 != 0 && SP[39] != 9)
        SP[39] = *(int *)0x8C295DF0;
    if (entryCountJoined() == 1 && *(int *)0x8C287B44 == 0
        && (*(unsigned int *)(*(int *)(0x8C29B898 + *(int *)0x8C421F70 * 4) + 16) & 0x200)) {
        int t = 1 - *(int *)0x8C295DAC;
        *(int *)0x8C295DAC = t;
        if (t == 1) {
            float f;
            for (SP[15] = 0; SP[15] < 4; SP[15]++)
                if (((int *)0x8C287AE0)[SP[15]] == 0)
                    break;
            f = *(float *)(0x8C288874 + SP[15] * 3448);
            *(int *)0x8C402C0C = f > 0.0f ? 1 : (0.0f > f ? -1 : 0);
            lightStagePreset();
        }
        *(int *)0x8C287B3C |= 0x800;
    }
    if (SP[39] == 0 && *(int *)0x8C295DAC != 0)
        SP[39] = 1;
    if (SP[39] == 2 && *(int *)0x8C295DB0 != 0)
        SP[39] = 3;
    *(int *)(SP[38] + 0x80) -= 1;
    if (SP[39] == 0 || SP[39] == 1) {
        *(int *)0x8C29466C = 4;
        *(int *)0x8C294668 = 22;
    } else {
        *(int *)0x8C29466C = 0;
        *(int *)0x8C294668 = 0;
        SP[3] = 1;
    }
    switch ((unsigned int)SP[39]) {
    case 0: {
        int t18;
        int t19;
        int t61;
        float u73;
        int t87;
        int t85;
        float u99;
        float u94;
        float u58;
        float u39;
        float u41;
        int t24;
        int t25;
        float u32;
        float u34;
        float u26;
        int t43;
        int t44;
        float u50;
        float u52;
        int t60;
        float u82;
        float u75;
        float u68;
        float u70;
        int *stk = SP - 6;

        stk[6] = SP[0];
        stk[7] = SP[1];
        stk[8] = SP[2];
        stk[9] = SP[3];
        stk[10] = SP[4];
        stk[11] = SP[5];
        stk[12] = SP[6];
        stk[13] = SP[7];
        stk[14] = SP[8];
        stk[15] = SP[9];
        stk[16] = SP[10];
        stk[17] = SP[11];
        stk[18] = SP[12];
        stk[19] = SP[13];
        stk[20] = SP[14];
        stk[21] = SP[15];
        stk[22] = SP[16];
        stk[23] = SP[17];
        stk[24] = SP[18];
        stk[25] = SP[19];
        stk[26] = SP[20];
        stk[27] = SP[21];
        stk[28] = SP[22];
        stk[29] = SP[23];
        stk[30] = SP[24];
        stk[31] = SP[25];
        stk[32] = SP[26];
        stk[33] = SP[27];
        stk[34] = SP[28];
        stk[35] = SP[29];
        stk[36] = SP[30];
        stk[37] = SP[31];
        stk[38] = SP[32];
        stk[39] = SP[33];
        stk[40] = SP[34];
        stk[41] = SP[35];
        stk[42] = SP[36];
        stk[43] = SP[37];
        stk[44] = SP[38];
        if ((*(int *)((0x7C + SP[38]))) != -1) {
            lightCamCalc(0x8C287D84, (((int)stk + 16) + 0x6C), (0x84 + ((int)stk + 16)), 0x8C287A04, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
            nlScaleVector((0x84 + ((int)stk + 16)), (0x84 + ((int)stk + 16)), (*(float *)0x8C02A51C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x6C)); }
            camSetTarget(*(Stk3 *)(((int)stk + 4)));
            *(unsigned int *)0x8C38B768 = 0x0;
            u99 = *(float *)&SP[27];
        } else {
            if (((*(int *)0x8C287B3C) & 0x800) == 0) {
                lightCamCalc(0x8C287D84, (((int)stk + 16) + 0x6C), (0x84 + ((int)stk + 16)), 0x8C287A04, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
                nlScaleVector((0x84 + ((int)stk + 16)), (0x84 + ((int)stk + 16)), (*(float *)0x8C02A51C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x6C)); }
                camSetTarget(*(Stk3 *)(((int)stk + 4)));
                *(unsigned int *)0x8C38B768 = 0x0;
                u94 = *(float *)&SP[27];
            } else {
                lightStagePreset();
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
                *(Stk3 *)((((int)stk + 24) + 0x64)) = vecMake((*(float *)((SP[9] + 0x9C))), (*(float *)((SP[9] + 0xA0))), (*(float *)((SP[9] + 0xA4))));
                if ((*(int *)0x8C287D5C) == 0) {
                    t18 = *(int *)(((*(int *)(((0x98 + ((int)stk + 24)) + 0x0))) + 0x38));
                    t19 = *(int *)((SP[38] + 0x34));
                    if (((((int)((unsigned int)((int)((unsigned int)(t19 + t18) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t19 + t18))) ? 1u : 0u))) >> 1) & 1) == 0) {
                        if (((*(int *)0x8C287D5C) == 2) && (t24 = *(int *)0x8C2FBE20, t25 = *(int *)((0x8C108E9C + ((((t24 << 2) << 2) + t24) << 2))), (t25 & 8) != 0)) {
                            u26 = (*(float *)&SP[27] * (-1.0f));
                            *(float *)(((int)stk + 132)) = u26;
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x10000);
                            u32 = (*(float *)&SP[27] * (-1.0f));
                            u34 = u26;
                        } else {
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFEFFFF);
                            u34 = *(float *)&SP[27];
                        }
                        u39 = u32;
                        u41 = u34;
                    } else {
                        u26 = (*(float *)&SP[27] * (-1.0f));
                        *(float *)(((int)stk + 132)) = u26;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x10000);
                        u39 = (*(float *)&SP[27] * (-1.0f));
                        u41 = u26;
                    }
                    u58 = u41;
                } else {
                    if (((*(int *)0x8C287D5C) == 2) && (t43 = *(int *)0x8C2FBE20, t44 = *(int *)((0x8C108E9C + ((((t43 << 2) << 2) + t43) << 2))), (t44 & 8) != 0)) {
                        u26 = (*(float *)&SP[27] * (-1.0f));
                        *(float *)(((int)stk + 132)) = u26;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x10000);
                        u50 = (*(float *)&SP[27] * (-1.0f));
                        u52 = u26;
                    } else {
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFEFFFF);
                        u52 = *(float *)&SP[27];
                    }
                    u58 = u52;
                }
                if (((*(int *)0x8C287D5C) != 0) && (t60 = *(int *)0x8C287D5C, t60 != 3)) {
                    t61 = serveGetServer();
                    serveGetPos(t61, 0x0, 0x0, 0x0, ((int)stk + 24));
                    u73 = *(float *)&SP[2];
                    if (((((0.0f > *(float *)&SP[2])) ? 1 : 0) ^ ((*(int *)0x8C287B3C) & 0x10000)) != 0) {
                        *(Stk3 *)((((int)stk + 24) + 0x64)) = vecMake((*(float *)((SP[9] + 0xA8))), (*(float *)((SP[9] + 0xAC))), (*(float *)((SP[9] + 0xB0))));
                        if (((*(int *)0x8C287B3C) & 0x10000) != 0) {
                            u26 = (u58 * (-1.0f));
                            *(float *)(((int)stk + 132)) = u26;
                            u68 = (u58 * (-1.0f));
                            u70 = u26;
                        } else {
                            u70 = u58;
                        }
                        u73 = u68;
                        u75 = u70;
                    } else {
                        u75 = u58;
                    }
                    u82 = u75;
                } else {
                    u82 = u58;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x64)); }
                camSetTarget(*(Stk3 *)(((int)stk + 12)));
                lightCamCalc(0x8C287D84, (((int)stk + 4) + 0x78), (0x90 + ((int)stk + 4)), 0x8C287A04, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t87 = 0x1;
                if (*(float *)&SP[27] > 0.0f) {
                } else {
                    t85 = 0x0;
                    if (0.0f > *(float *)&SP[27]) {
                        t85 = 0xFFFFFFFF;
                    }
                    t87 = t85;
                }
                *(unsigned int *)0x8C402C0C = t87;
                lightStagePreset();
                evPlayerCallStart(0x1E);
                *(unsigned int *)0x8C38B768 = 0x1;
                u94 = u82;
            }
            u99 = u94;
        }
        *(float *)0x8C287A04 = (*(float *)0x8C02A530);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x7C)); }
        camSetEye(*(Stk3 *)(((int)stk + 12)));
        camMoveBegin(1.0f, 1.0f);
        goto after;
    }
    goto after;

    case 1: {
        float u13;
        int t19;
        int t17;
        float u33;
        float u38;
        float t44;
        float t46;
        float u64;
        float u65;
        float u66;
        int t0;
        int t1;
        int t2;
        int t3;
        int t4;
        float u42;
        float u45;
        float u52;
        int *stk = SP - 5;

        stk[5] = SP[0];
        stk[6] = SP[1];
        stk[7] = SP[2];
        stk[8] = SP[3];
        stk[9] = SP[4];
        stk[10] = SP[5];
        stk[11] = SP[6];
        stk[12] = SP[7];
        stk[13] = SP[8];
        stk[14] = SP[9];
        stk[15] = SP[10];
        stk[16] = SP[11];
        stk[17] = SP[12];
        stk[18] = SP[13];
        stk[19] = SP[14];
        stk[20] = SP[15];
        t0 = 0x0;
        *(unsigned int *)(((int)stk + 80)) = t0;
        for (;;) {
            if (((int)t0 >= (int)0x4) || (t1 = 0x98, t3 = *(int *)((((int)stk + 20) + t1)), t1 = t3, t4 = *(int *)((((t0 << 2) + (t1 + 0x14)) + 0x0)), t2 = t4, t2 == 0)) {
                break;
            }
            t1 = t0;
            t1 = (t1 + 0x1);
            t0 = t1;
            *(unsigned int *)(((int)stk + 80)) = t0;
        }
        if (((*(int *)0x8C287B3C) & 0x800) != 0) {
            u13 = 40.0f;
            if (((*(int *)0x8C291F78) & 2) != 0) {
                u13 = 16.0f;
            }
            *(float *)0x8C295DD4 = u13;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C295DC8) = *(struct mv3 *)(((t0 * 0xD78) + 0x8C28886C)); }
            t19 = 0x1;
            if ((*(float *)((0x8C288874 + (t0 * 0xD78)))) > 0.0f) {
            } else {
                t17 = 0x0;
                if (0.0f > (*(float *)(((t0 * 0xD78) + 0x8C288874)))) {
                    t17 = 0xFFFFFFFF;
                }
                t19 = t17;
            }
            *(unsigned int *)0x8C402C0C = t19;
            lightStagePreset();
            evPlayerCallStart(0x1E);
        }
        u33 = 40.0f;
        if (((*(int *)0x8C291F78) & 2) != 0) {
            u33 = 16.0f;
        }
        *(float *)(((int)stk + 52)) = (u33);
        u38 = (*(float *)0x8C295DD4);
        u38 = u38 + 0.00999999978f * (u33 - (*(float *)0x8C295DD4));
        *(float *)0x8C295DD4 = u38;
        if (!(0.0f > (*(float *)(((t0 * 0xD78) + 0x8C288874))))) {
            u42 = (*(float *)(((t0 * 0xD78) + 0x8C288874)));
        } else {
            u42 = (-(*(float *)(((t0 * 0xD78) + 0x8C288874))));
        }
        t44 = courtLimitZ();
        if (t44 > (u42 + 60.0f)) {
            u45 = 60.0f;
            *(float *)(((int)stk + 48)) = u45;
        } else {
            t46 = courtLimitZ();
            if (!(0.0f > (*(float *)(((t0 * 0xD78) + 0x8C288874))))) {
                u52 = (*(float *)(((t0 * 0xD78) + 0x8C288874)));
            } else {
                u52 = (-(*(float *)(((t0 * 0xD78) + 0x8C288874))));
            }
            u45 = (t46 - u52);
            *(float *)(((int)stk + 48)) = u45;
        }
        u64 = *(float *)0x8C02A758;
        u65 = *(float *)0x8C02A75C;
        *(float *)0x8C295DC8 = ((*(float *)0x8C295DC8) + ((((*(float *)(((t0 * 0xD78) + 0x8C28886C))) - (*(float *)0x8C295DC8)) * u64) / u65));
        u66 = *(float *)0x8C295DD0;
        *(float *)0x8C295DD0 = (u66 + ((((*(float *)(((t0 * 0xD78) + 0x8C288874))) - u66) * u64) / u65));
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C295DC8), (*(float *)0x8C02A764), (*(float *)0x8C295DD0));
        camSetEye();
        camSetOrbit((int)(((*(float *)0x8C02A77C) - (*(float *)0x8C295DD4)) * (*(float *)0x8C02A780)), ((*(short *)(((t0 * 0xD78) + 0x8C288888))) + 0x8000), u45);
        *(float *)0x8C287A04 = (*(float *)0x8C02A788);
        camMoveBegin(1.0f, 1.0f);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFEFFFF);
        *(int *)0x8C38B768 = 0; goto after;
    }
    goto after;

    case 2: {
        int t29;
        int t26;
        float u37;
        float u53;
        float u72;
        int t1;
        int t5;
        int t7;
        int t9;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            if ((*(float *)0x8C288884) == (-1.0f)) {
                t5 = (*(int *)((SP[38] + 0x28)));
            } else {
                t5 = (*(int *)((SP[38] + 0x24)));
            }
            t7 = (t5 & 0x1);
            *(unsigned int *)(((int)stk + 88)) = t7;
            if ((int)(*(int *)((SP[38] + 0xAC))) > 0) {
                t9 = 0x1;
                *(unsigned int *)(((int)stk + 84)) = t9;
            } else {
                t9 = 0x2;
                *(unsigned int *)(((int)stk + 84)) = t9;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((SP[9] + 0x1C) + ((((t7 << 2) << 1) + t7) << 2)) + (((t9 << 1) + t9) << 2))); }
            *(unsigned int *)((SP[38] + 0xA0)) = 0x0;
            *(float *)((SP[38] + 0xA4)) = 0.0f;
            padLcdModeClear();
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288878)); }
        *(float *)0x8C287A04 = (cameraFovForSize(15.0f));
        if ((*(int *)((SP[38] + 0xA0))) == 0) {
            t29 = 0x1;
            if ((*(float *)((SP[37] + 0x3C))) > 0.0f) {
            } else {
                t26 = 0x0;
                if (0.0f > (*(float *)((0x3C + SP[37])))) {
                    t26 = 0xFFFFFFFF;
                }
                t29 = t26;
            }
            if ((float)t29 == (*(float *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288884)))) {
                *(unsigned int *)((SP[38] + 0xA0)) = 0x1;
                *(float *)0x8C287A04 = ((*(float *)0x8C287A04) + (*(float *)((SP[38] + 0xA4))));
                *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) + 0.400000006f);
                u37 = *(float *)0x8C02A984;
                if ((*(float *)0x8C287A04) > u37) {
                    *(float *)0x8C287A04 = u37;
                }
            }
        } else {
            *(unsigned int *)((SP[38] + 0xA0)) = 0x1;
            *(float *)0x8C287A04 = ((*(float *)0x8C287A04) + (*(float *)((SP[38] + 0xA4))));
            *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) + 0.400000006f);
            u53 = *(float *)0x8C02A984;
            if ((*(float *)0x8C287A04) > u53) {
                *(float *)0x8C287A04 = u53;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        u72 = 1.0f;
        if (((*(int *)0x8C287B3C) & 0x800) != 0) {
        } else {
            u72 = (*(float *)0x8C02A998);
        }
        camMoveBegin(1.0f, u72);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
        *(unsigned int *)0x8C287D60 = 0x1;
        *(int *)0x8C38B768 = 1; goto after;
    }
    goto after;

    case 3: {
        int t29;
        int t26;
        float u37;
        float u53;
        float u75;
        int t1;
        int t5;
        int t7;
        int t9;
        int t70;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            if ((*(float *)0x8C288884) == (-1.0f)) {
                t5 = (*(int *)((SP[38] + 0x28)));
            } else {
                t5 = (*(int *)((SP[38] + 0x24)));
            }
            t7 = (t5 & 0x1);
            *(unsigned int *)(((int)stk + 88)) = t7;
            if ((int)(*(int *)((SP[38] + 0xAC))) > 0) {
                t9 = 0x1;
                *(unsigned int *)(((int)stk + 84)) = t9;
            } else {
                t9 = 0x2;
                *(unsigned int *)(((int)stk + 84)) = t9;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((SP[9] + 0x1C) + ((((t7 << 2) << 1) + t7) << 2)) + (((t9 << 1) + t9) << 2))); }
            *(unsigned int *)((SP[38] + 0xA0)) = 0x0;
            *(float *)((SP[38] + 0xA4)) = 0.0f;
            padLcdModeClear();
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288878)); }
        *(float *)0x8C287A04 = (cameraFovForSize(5.0f));
        if ((*(int *)((SP[38] + 0xA0))) == 0) {
            t29 = 0x1;
            if ((*(float *)((SP[37] + 0x3C))) > 0.0f) {
            } else {
                t26 = 0x0;
                if (0.0f > (*(float *)((0x3C + SP[37])))) {
                    t26 = 0xFFFFFFFF;
                }
                t29 = t26;
            }
            if ((float)t29 == (*(float *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288884)))) {
                *(unsigned int *)((SP[38] + 0xA0)) = 0x1;
                *(float *)0x8C287A04 = ((*(float *)0x8C287A04) + (*(float *)((SP[38] + 0xA4))));
                *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) + 0.200000003f);
                u37 = *(float *)0x8C02AB88;
                if ((*(float *)0x8C287A04) > u37) {
                    *(float *)0x8C287A04 = u37;
                }
            }
        } else {
            *(unsigned int *)((SP[38] + 0xA0)) = 0x1;
            *(float *)0x8C287A04 = ((*(float *)0x8C287A04) + (*(float *)((SP[38] + 0xA4))));
            *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) + 0.200000003f);
            u53 = *(float *)0x8C02AB88;
            if ((*(float *)0x8C287A04) > u53) {
                *(float *)0x8C287A04 = u53;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        u75 = 1.0f;
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t70 = *(int *)0x8C287B3C, (t70 & 0x800) != 0)) {
        } else {
            u75 = (*(float *)0x8C02AB9C);
        }
        camMoveBegin(1.0f, u75);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
        *(unsigned int *)0x8C287D60 = 0x1;
        *(unsigned int *)0x8C38B768 = 0x1;
        goto after;
    }
    goto after;

    case 4: {
        int t1;
        int t6;
        int t8;
        int t10;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
            if ((*(float *)0x8C288884) == (-1.0f)) {
                t6 = (*(int *)((SP[38] + 0x28)));
            } else {
                t6 = (*(int *)((SP[38] + 0x24)));
            }
            t8 = (t6 & 0x1);
            *(unsigned int *)(((int)stk + 88)) = t8;
            if ((int)(*(int *)((SP[38] + 0xAC))) > 0) {
                t10 = 0x1;
                *(unsigned int *)(((int)stk + 84)) = t10;
            } else {
                t10 = 0x2;
                *(unsigned int *)(((int)stk + 84)) = t10;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((SP[9] + 0x1C) + ((((t8 << 2) << 1) + t8) << 2)) + (((t10 << 1) + t10) << 2))); }
            *(unsigned int *)((SP[38] + 0xA0)) = 0x0;
            *(float *)((SP[38] + 0xA4)) = 10.0f;
            padLcdModeClear();
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288878)); }
        *(float *)((SP[38] + 0x98)) = 14.0f;
        *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) * 0.980000019f);
        *(float *)0x8C287A04 = ((cameraFovForSize(5.0f)) + (*(float *)((SP[38] + 0xA4))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((SP[38] + 0x94)); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        camMoveBegin(1.0f, 1.0f);
        *(unsigned int *)0x8C38B768 = 0x1;
        if (((*(int *)0x8C287B3C) & 32) != 0) {
            if ((int)(*(int *)(((0x80 + SP[38]) + 0x0))) <= (int)0x8C) {
                *(unsigned int *)((SP[38] + 0x78)) = 0x6;
                *(unsigned int *)0x8C38B768 = 0x0;
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFDFFFFF);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFBFFFF);
                *(float *)0x8C287C3C = 1.0f;
                *(float *)0x8C287C40 = 0.0199999996f;
            }
        } else {
            *(unsigned int *)((SP[38] + 0x80)) = ((*(int *)((SP[38] + 0x80))) - ((*(int *)0x8C301BF0) - 1));
        }
        if ((int)(*(int *)((SP[38] + 0x80))) > 0) {
            goto after;
        }
        if (((*(int *)0x8C287B3C) & 32) != 0) {
            goto after;
        }
        *(unsigned int *)((SP[38] + 0x78)) = 0x0;
        *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        *(unsigned int *)((SP[38] + 0x80)) = 0x0;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
        *(float *)0x8C287C3C = 1.0f;
        *(float *)0x8C287C40 = (*(float *)0x8C02AE14);
        *(unsigned int *)(((0x60 + SP[38]) + 0x0)) = 0x1;
        goto after;
    }
    goto after;

    case 5: {
        int t1;
        int t2;
        int t3;
        int t29;
        int t30;
        int t31;
        int t58;
        float t71;
        float t72;
        int t77;
        int t78;
        int t83;
        int t89;
        float t119;
        int t120;
        int t11;
        int t38;
        int t59;
        int t64;
        int t68;
        int t70;
        int t92;
        int t118;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        stk[23] = SP[16];
        stk[24] = SP[17];
        stk[25] = SP[18];
        stk[26] = SP[19];
        stk[27] = SP[20];
        stk[28] = SP[21];
        stk[29] = SP[22];
        stk[30] = SP[23];
        stk[31] = SP[24];
        stk[32] = SP[25];
        stk[33] = SP[26];
        stk[34] = SP[27];
        stk[35] = SP[28];
        stk[36] = SP[29];
        stk[37] = SP[30];
        stk[38] = SP[31];
        stk[39] = SP[32];
        stk[40] = SP[33];
        stk[41] = SP[34];
        stk[42] = SP[35];
        stk[43] = SP[36];
        stk[44] = SP[37];
        stk[45] = SP[38];
        t1 = *(int *)(((*(int *)(((0x98 + ((int)stk + 28)) + 0x0))) + 0x38));
        t2 = *(int *)((SP[38] + 0x34));
        t3 = ((~(((~(t2 + t1)) + 0x1) & 0x3)) + 0x1);
        if ((int)(t2 + t1) >= 0) {
            t3 = ((t2 + t1) & 0x3);
        }
        if (t3 == 0) {
            if (((*(int *)((0x7C + SP[38]))) == -1) && (t11 = *(int *)0x8C287B3C, (t11 & 0x800) != 0)) {
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
                *(Stk3 *)((0x88 + SP[38])) = vecMake((*(float *)((SP[9] + 0x64))), (*(float *)((SP[9] + 0x68))), (*(float *)((SP[9] + 0x6C))));
                *(Stk3 *)((0x94 + SP[38])) = vecMake((*(float *)((SP[9] + 0x70))), (*(float *)((SP[9] + 0x74))), (*(float *)((SP[9] + 0x78))));
                padLcdSetMode(0x8);
            }
            camMoveBeginAtGoal(1.0f, 1.0f);
            *(float *)0x8C287A04 = ((*(float *)((SP[9] + 0x7C))) + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((SP[38] + 0x88)); }
            camSetTarget(*(Stk3 *)(((int)stk + 16)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x94 + SP[38])); }
            camSetEye(*(Stk3 *)(((int)stk + 4)));
            *(unsigned int *)0x8C294668 = 0x16;
            *(unsigned int *)0x8C29466C = 0x4;
        } else {
            t29 = *(int *)(((*(int *)(((0x98 + ((int)stk + 28)) + 0x0))) + 0x38));
            t30 = *(int *)((SP[38] + 0x34));
            t31 = ((~(((~(t30 + t29)) + 0x1) & 0x3)) + 0x1);
            if ((int)(t30 + t29) >= 0) {
                t31 = ((t30 + t29) & 0x3);
            }
            if (t31 == 2) {
                if (((*(int *)((0x7C + SP[38]))) == -1) && (t38 = *(int *)0x8C287B3C, (t38 & 0x800) != 0)) {
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
                    *(Stk3 *)((0x88 + SP[38])) = vecMake((*(float *)((SP[9] + 0xB4))), (*(float *)((SP[9] + 0xB8))), (*(float *)((SP[9] + 0xBC))));
                    *(Stk3 *)((0x94 + SP[38])) = vecMake((*(float *)((SP[9] + 0xC0))), (*(float *)((SP[9] + 0xC4))), (*(float *)((SP[9] + 0xC8))));
                    padLcdSetMode(0x8);
                }
                camMoveBeginAtGoal(1.0f, 1.0f);
                *(float *)0x8C287A04 = ((*(float *)((SP[9] + 0xCC))) + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((SP[38] + 0x88)); }
                camSetTarget(*(Stk3 *)(((int)stk + 16)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x94 + SP[38])); }
                camSetEye(*(Stk3 *)(((int)stk + 4)));
                *(unsigned int *)0x8C294668 = 0x16;
                *(unsigned int *)0x8C29466C = 0x4;
            } else {
                if ((*(int *)((0x7C + SP[38]))) != -1) {
                } else {
                    if (((*(int *)0x8C287B3C) & 0x800) == 0) {
                    } else {
                        t58 = *(int *)((SP[38] + 0x24));
                        t59 = (t58 & 0x1);
                        *(unsigned int *)(((int)stk + 88)) = t59;
                        if (((*(int *)((0x8C2888E4 + ((t58 & 0x1) * 0xD78)))) & 0x8000) != 0) {
                            t64 = ((*(short *)((0x8C288888 + (t59 * 0xD78)))) - 32768);
                        } else {
                            t64 = (*(short *)(((t59 * 0xD78) + 0x8C288888)));
                        }
                        t68 = t64;
                        *(unsigned short *)(((int)stk + 70)) = t68;
                        t70 = 0x0;
                        *(unsigned int *)(((int)stk + 72)) = t70;
                        for (;;) {
                            t71 = nlRandom();
                            t72 = nlRandom();
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t72 * 3.0f) << 1) + (int)(t72 * 3.0f)) << 2) + ((((((int)(t71 * (1.0f + 1.0f)) << 2) << 1) + (int)(t71 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
                            t77 = nlArcTan2(((*(float *)(((t59 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t59 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                            t78 = angDiff(((short)t68), t77);
                            if ((int)(short)t78 >= 0) {
                                t83 = nlArcTan2(((*(float *)(((t59 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t59 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                                t92 = (short)(angDiff(((short)t68), t83));
                            } else {
                                t89 = nlArcTan2(((*(float *)(((t59 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t59 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                                t92 = (-(short)(angDiff(((short)t68), t89)));
                            }
                            if ((int)t92 < (int)0x3000) {
                                t70 = (t70 + 0x1);
                                *(unsigned int *)(((int)stk + 72)) = t70;
                                if ((int)t70 < (int)0xA) continue;
                                break;
                            }
                            break;
                        }
                        padLcdSetMode(0x8);
                    }
                }
                t118 = (*(int *)((SP[38] + 0x24)));
                *(unsigned int *)(((int)stk + 76)) = t118;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)(((t118 * 0xD78) + 0x8C288878)); }
                *(float *)((SP[38] + 0x98)) = 10.0f;
                t119 = cameraFovForSize(10.0f);
                *(float *)0x8C287A04 = t119;
                t120 = *(int *)((SP[38] + 0x80));
                *(float *)0x8C287A04 = (t119 + ((float)((t120 << 1) + t120) / 120.0f));
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
                camSetEye(*(Stk3 *)(((int)stk + 16)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
                camSetTarget(*(Stk3 *)(((int)stk + 4)));
                camMoveBegin(1.0f, 1.0f);
            }
        }
        *(unsigned int *)((SP[38] + 0x80)) = ((*(int *)((SP[38] + 0x80))) - ((*(int *)0x8C301BF0) - 1));
        if ((int)(*(int *)((SP[38] + 0x80))) > 0) {
            *(int *)0x8C38B768 = 1; goto after;
        }
        *(unsigned int *)((SP[38] + 0x78)) = 0x0;
        *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        *(unsigned int *)((SP[38] + 0x80)) = 0x0;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
        *(float *)0x8C287C3C = 1.0f;
        *(float *)0x8C287C40 = 0.0399999991f;
        *(unsigned int *)(((0x60 + SP[38]) + 0x0)) = 0x1;
        padLcdModeClear();
        strmCrowdFadeOut();
        *(int *)0x8C38B768 = 1; goto after;
    }
    goto after;

    case 6: {
        int t6;
        int t10;
        int t29;
        int t34;
        int t42;
        int t101;
        int t105;
        int t133;
        int t147;
        float t159;
        float t160;
        int t165;
        int t166;
        int t171;
        int t177;
        float t208;
        int t209;
        int t211;
        int t212;
        int t7;
        int t8;
        int t9;
        int t66;
        int t86;
        int t117;
        int t152;
        int t156;
        int t158;
        int t180;
        int t207;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        if ((int)(*(int *)((0x80 + SP[38]))) < (int)0x50) {
            *(unsigned int *)0x8C29466C = 0x4;
            *(unsigned int *)0x8C294668 = 0x16;
            if ((*(int *)0x8C287D5C) != 2) {
            } else {
                t6 = *(signed char *)0x8C2FBC82;
                if ((((unsigned char)t6 & 1) != 0) && (t7 = *(int *)0x8C2FBE2C, t7 == 0)) {
                } else {
                    t8 = 0x0;
                    *(unsigned int *)(((int)stk + 36)) = t8;
                    t9 = 0x0;
                    *(unsigned int *)(((int)stk + 88)) = t9;
                    t10 = (unsigned char)t6;
                    for (;;) {
                        if ((int)t9 >= (int)(*(int *)0x8C2FBC54)) {
                            break;
                        }
                        t10 = (*(int *)(((((((t9 << 2) + t9) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0)));
                        if (t10 == 0) {
                            t10 = 0x20;
                            if ((int)t9 < (int)t10) {
                                t10 = (*(int *)0x8C2FBC64);
                                if (((((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))) & t10) != 0) {
                                    t10 = t8;
                                    t10 = (t10 + 0x1);
                                    t8 = t10;
                                    *(unsigned int *)(((int)stk + 36)) = t8;
                                }
                            } else {
                                if (((((int)(t9 - 32) >= 0) ? (0x1 << ((t9 - 32) & 31)) : ((-(int)(t9 - 32) & 31) ? ((int)0x1 >> (-(int)(t9 - 32) & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C2FBC68)) != 0) {
                                    t10 = t8;
                                    t10 = (t10 + 0x1);
                                    t8 = t10;
                                    *(unsigned int *)(((int)stk + 36)) = t8;
                                }
                            }
                        }
                        t9 = (t9 + 0x1);
                        *(unsigned int *)(((int)stk + 88)) = t9;
                    }
                    if (t8 == 21) {
                        t29 = *(int *)0x8C2FBE1C;
                        if ((*(int *)(((((((t29 << 2) + t29) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) {
                            if ((int)(*(int *)0x8C2FBE1C) < (int)0x20) {
                                t34 = *(int *)0x8C2FBE1C;
                                if (((((int)t34 >= 0) ? (0x1 << (t34 & 31)) : ((-(int)t34 & 31) ? ((int)0x1 >> (-(int)t34 & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C2FBC64)) == 0) {
                                    *(unsigned char *)0x8C2FBC82 = ((*(signed char *)0x8C2FBC82) | 0x1);
                                    *(unsigned int *)0x8C2FBE2C = 0x1;
                                }
                            } else {
                                t42 = *(int *)0x8C2FBE1C;
                                if (((((int)(t42 - 32) >= 0) ? (0x1 << ((t42 - 32) & 31)) : ((-(int)(t42 - 32) & 31) ? ((int)0x1 >> (-(int)(t42 - 32) & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C2FBC68)) == 0) {
                                    *(unsigned char *)0x8C2FBC82 = ((*(signed char *)0x8C2FBC82) | 0x1);
                                    *(unsigned int *)0x8C2FBE2C = 0x1;
                                }
                            }
                        }
                    }
                    if (((*(int *)0x8C2FBE2C) != 0) && (t66 = *(int *)((SP[38] + 0x80)), (int)t66 < (int)0x1E)) {
                        if ((int)(*(int *)((SP[38] + 0x80))) < 0) {
                            *(unsigned int *)((SP[38] + 0x80)) = 0x0;
                        }
                        *(Stk3 *)(((int)stk + 16)) = vecMake(640.0f, 0.0f, 0.00999999978f);
                        primRectInc(0x280, 0x1E0, ((((int)(((float)((-(*(int *)((SP[38] + 0x80)))) + 0x1E) / 30.0f) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12));
                    }
                }
                if (((*(int *)0x8C287D5C) == 2) && (t86 = *(int *)((0x80 + SP[38])), t86 == 79)) {
                    circuitStatsStart();
                }
            }
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)((SP[9] + 0x80))), (*(float *)((SP[9] + 0x84))), (*(float *)((SP[9] + 0x88))));
            t101 = ((int (*)(void))(camSetTarget))();
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)((SP[9] + 0x8C))), (*(float *)((SP[9] + 0x90))), (*(float *)((SP[9] + 0x94))));
            t105 = ((int (*)(void))(camSetEye))();
            *(float *)0x8C287A04 = (*(float *)((SP[9] + 0x98)));
            camMoveBegin(1.0f, 1.0f);
            if ((*(int *)((0x80 + SP[38]))) == 79) {
                *(float *)0x8C28A5F8 = 0.0f;
                *(float *)0x8C289880 = 0.0f;
                *(float *)0x8C288B08 = 0.0f;
                *(float *)0x8C287D90 = 0.0f;
            }
            if (((*(int *)0x8C287D5C) == 2) && (t117 = *(int *)((0x80 + SP[38])), t117 == 1)) {
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
                if (((unsigned char)(*(signed char *)0x8C2FBC82) & 1) != 0) {
                    padLcdSetMode(0xC);
                }
            }
            t133 = 0x0;
            if ((*(int *)0x8C287D5C) == 0) {
                t133 = 0xFFFFFFD3;
            }
            *(unsigned int *)(((int)stk + 44)) = (t133);
            if ((int)(*(int *)((SP[38] + 0x80))) <= (int)t133) {
                *(unsigned int *)((SP[38] + 0x60)) = 0x1;
                padLcdModeClear();
            }
        } else {
            if ((*(int *)((0x7C + SP[38]))) != -1) {
            } else {
                if (((*(int *)0x8C287B3C) & 0x800) == 0) {
                } else {
                    t147 = *(int *)((SP[38] + 0x24));
                    t9 = (t147 & 0x1);
                    *(unsigned int *)(((int)stk + 88)) = t9;
                    if (((*(int *)((0x8C2888E4 + ((t147 & 0x1) * 0xD78)))) & 0x8000) != 0) {
                        t152 = ((*(short *)((0x8C288888 + (t9 * 0xD78)))) - 32768);
                    } else {
                        t152 = (*(short *)(((t9 * 0xD78) + 0x8C288888)));
                    }
                    t156 = t152;
                    *(unsigned short *)(((int)stk + 70)) = t156;
                    t158 = 0x0;
                    *(unsigned int *)(((int)stk + 72)) = t158;
                    for (;;) {
                        t159 = nlRandom();
                        t160 = nlRandom();
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t160 * 3.0f) << 1) + (int)(t160 * 3.0f)) << 2) + ((((((int)(t159 * (1.0f + 1.0f)) << 2) << 1) + (int)(t159 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
                        t165 = nlArcTan2(((*(float *)(((t9 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t9 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                        t166 = angDiff(((short)t156), t165);
                        if ((int)(short)t166 >= 0) {
                            t171 = nlArcTan2(((*(float *)(((t9 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t9 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                            t180 = (short)(angDiff(((short)t156), t171));
                        } else {
                            t177 = nlArcTan2(((*(float *)(((t9 * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((t9 * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
                            t180 = (-(short)(angDiff(((short)t156), t177)));
                        }
                        if ((int)t180 < (int)0x3000) {
                            t158 = (t158 + 0x1);
                            *(unsigned int *)(((int)stk + 72)) = t158;
                            if ((int)t158 < (int)0xA) continue;
                            break;
                        }
                        break;
                    }
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                    padLcdSetMode(0x13);
                }
            }
            t207 = (*(int *)((SP[38] + 0x24)));
            *(unsigned int *)(((int)stk + 76)) = t207;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)(((t207 * 0xD78) + 0x8C288878)); }
            *(float *)((SP[38] + 0x98)) = 10.0f;
            t208 = cameraFovForSize(10.0f);
            *(float *)0x8C287A04 = t208;
            t209 = *(int *)((SP[38] + 0x80));
            *(float *)0x8C287A04 = (t208 + ((float)(((t209 - 80) << 1) + (t209 - 80)) / 60.0f));
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
            t211 = ((int (*)(Stk3))(camSetEye))(*(Stk3 *)(((int)stk + 16)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
            t212 = ((int (*)(Stk3))(camSetTarget))(*(Stk3 *)(((int)stk + 4)));
            camMoveBegin(1.0f, 1.0f);
            if ((*(int *)((0x80 + SP[38]))) != 80) {
            } else {
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFDFFFFF);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFBFFFF);
                *(float *)0x8C287C3C = 1.0f;
                *(float *)0x8C287C40 = 0.0199999996f;
            }
        }
        *(unsigned int *)0x8C287D60 = 0x1;
        *(unsigned int *)0x8C38B768 = 0x0;
        goto after;
    }
    goto after;

    case 7: {
        int t33;
        int t48;
        int t58;
        int t137;
        int t140;
        int t142;
        int t157;
        int t159;
        int t149;
        int t151;
        int t164;
        int t165;
        int t188;
        int t190;
        int t205;
        int t207;
        int t197;
        int t199;
        int t211;
        int t212;
        int t1;
        int t12;
        int t153;
        int t163;
        int t201;
        int *stk = SP - 8;

        stk[8] = SP[0];
        stk[9] = SP[1];
        stk[10] = SP[2];
        stk[11] = SP[3];
        stk[12] = SP[4];
        stk[13] = SP[5];
        stk[14] = SP[6];
        stk[15] = SP[7];
        stk[16] = SP[8];
        stk[17] = SP[9];
        stk[18] = SP[10];
        stk[19] = SP[11];
        stk[20] = SP[12];
        stk[21] = SP[13];
        stk[22] = SP[14];
        stk[23] = SP[15];
        stk[24] = SP[16];
        stk[25] = SP[17];
        stk[26] = SP[18];
        stk[27] = SP[19];
        stk[28] = SP[20];
        stk[29] = SP[21];
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            lightStagePreset();
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
            *(Stk3 *)((0x88 + SP[38])) = vecMake((*(float *)((SP[9] + 0x0))), (*(float *)((SP[9] + 0x4))), (*(float *)((SP[9] + 0x8))));
            *(Stk3 *)((0x94 + SP[38])) = vecMake((*(float *)((SP[9] + 0xC))), (*(float *)((SP[9] + 0x10))), (*(float *)((SP[9] + 0x14))));
            evCrowdClapStart();
            if (((*(int *)0x8C421F60) == 0) && (t12 = *(int *)0x8C287D5C, t12 != 3)) {
                FUN_8c08535e();
            }
            courtColliInit();
            if ((*(int *)0x8C287D5C) == 3) {
                strmBgmPlayStage();
            }
            if ((*(int *)0x8C287D5C) == 3) {
                padLcdModeClear();
            } else {
                padLcdSetMode(0x2);
            }
        }
        camMoveBeginAtGoal(1.0f, 1.0f);
        *(unsigned int *)((SP[38] + 0x80)) = ((*(int *)((SP[38] + 0x80))) - ((*(int *)0x8C301BF0) - 1));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x40)) = *(struct mv3 *)((SP[38] + 0x88)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x4C)) = *(struct mv3 *)((SP[38] + 0x94)); }
        t33 = *(int *)0x8C1891E8;
        if ((unsigned int)t33 < (unsigned int)0x12) {
            switch ((t33 << 1)) {
                case 0:
                {
                    nlSubVector((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x40));
                    nlPushUnitMatrix();
                    nlRotateAY((int)((float)((*(int *)((SP[38] + 0x80))) - 120) * 17.0666676f));
                    nlCalcPoint((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x4C));
                    nlPopMatrix(0x1);
                    nlAddVector((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x40));
                    *(float *)0x8C287A04 = (*(float *)((SP[9] + 0x18)));
                    if ((*(int *)((SP[38] + 0x10))) != 4) {
                    } else {
                        *(float *)0x8C287A04 = ((*(float *)0x8C287A04) - 5.0f);
                    }
                }
                    break;
                case 2:
                {
                    t48 = *(int *)((SP[38] + 0x80));
                    *(float *)0x8C287A04 = ((*(float *)((SP[9] + 0x18))) - ((float)(((t48 << 2) + t48) << 1) / 240.0f));
                }
                    break;
                case 4:
                {
                    nlSubVector((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x40));
                    nlPushUnitMatrix();
                    nlRotateAY((int)((float)((*(int *)((SP[38] + 0x80))) - 120) * 17.0666676f));
                    nlCalcPoint((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x4C));
                    nlPopMatrix(0x1);
                    nlAddVector((((int)stk + 32) + 0x4C), (((int)stk + 32) + 0x40));
                    *(float *)0x8C287A04 = (*(float *)((SP[9] + 0x18)));
                }
                    break;
                case 6:
                {
                    t58 = *(int *)((SP[38] + 0x80));
                    *(float *)0x8C287A04 = ((*(float *)((SP[9] + 0x18))) - ((float)(((((-t58) + 0xF0) << 2) + ((-t58) + 0xF0)) << 1) / 240.0f));
                    if ((*(int *)((SP[38] + 0x10))) == 4) {
                        *(float *)0x8C287A04 = ((*(float *)0x8C287A04) - 10.0f);
                    }
                    if ((*(int *)0x8C287D5C) != 3) {
                    } else {
                        *(float *)0x8C287A04 = ((*(float *)0x8C287A04) - 5.0f);
                    }
                }
                    break;
                case 8:
                {
                    *(float *)(((int)stk + 100)) = ((*(float *)&SP[17] - ((float)(((-(*(int *)((SP[38] + 0x80)))) + 0xF0) * 0x64) / 240.0f)));
                    nlSubVector((((int)stk + 32) + 0x40), (((int)stk + 32) + 0x4C));
                    nlPushUnitMatrix();
                    nlRotateAY((int)((float)((*(int *)((SP[38] + 0x80))) - 120) * 34.1333351f));
                    nlCalcPoint((((int)stk + 32) + 0x40), (((int)stk + 32) + 0x40));
                    nlPopMatrix(0x1);
                    nlAddVector((((int)stk + 32) + 0x40), (((int)stk + 32) + 0x4C));
                    *(float *)0x8C287A04 = (*(float *)((SP[9] + 0x18)));
                }
                    break;
                case 10:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-102.0f, 37.0f, -67.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (FUN_8c029fe0((*(float *)((SP[9] + 0x18))), 30.0f));
                }
                    break;
                case 12:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(16.0f, 36.0f, 289.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x88)); }
                    FUN_8c029f50();
                    *(Stk3 *)(((int)stk + 20)) = vecMake(19.0f, 44.0f, 189.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 14:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(36.0f, 23.0f, 83.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 16:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-181.0f, 130.0f, -294.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 18:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-181.0f, 94.0f, -207.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 20:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(56.0f, 26.0f, 140.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 22:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(116.0f, 48.0f, 149.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 24:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-63.0f, 39.0f, 167.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x88)); }
                    FUN_8c029f50();
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-30.0f, 41.0f, 72.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 26:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-27.0f, 20.0f, 98.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 28:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(219.0f, 43.0f, 154.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x88)); }
                    FUN_8c029f50();
                    *(Stk3 *)(((int)stk + 20)) = vecMake(151.0f, 48.0f, 81.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 30:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-91.0f, 54.0f, 217.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                case 32:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-71.0f, 92.0f, 231.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
                default:
                {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-53.0f, 32.0f, 166.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x88)); }
                    FUN_8c029f50();
                    *(Stk3 *)(((int)stk + 20)) = vecMake(-30.0f, 33.0f, 69.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((SP[38] + 0x94)); }
                    FUN_8c029f50();
                    *(float *)0x8C287A04 = (*(float *)((0x18 + SP[9])));
                }
                    break;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
        camSetTarget(*(Stk3 *)(((int)stk + 20)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x58)); }
        camSetEye(*(Stk3 *)(((int)stk + 8)));
        if ((int)(*(int *)((SP[38] + 0x80))) > 0) {
            if ((int)(*(int *)((SP[38] + 0x80))) >= (int)0xD2) {
            } else {
                if ((*(float *)0x8C287C3C) != 0.0f) {
                } else {
                    t137 = playerHumanPressed(0xFFFFFFFF);
                    if (t137 != 0) {
                        *(unsigned int *)((SP[38] + 0x78)) = 0x0;
                        *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                        *(unsigned int *)((SP[38] + 0x80)) = 0x0;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
                        *(float *)0x8C287C3C = 1.0f;
                        *(float *)0x8C287C40 = 0.0399999991f;
                        t140 = *(int *)0x8C40C28C;
                        t142 = t140;
                        if (t140 != 1) {
                            t142 = (evPackFade(0x1, 0x3C, 0x0));
                        }
                        t157 = t142;
                        t159 = 0x8C421F60;
                        if ((*(int *)0x8C421F60) == 0) {
                            t149 = *(int *)0x8C287D5C;
                            t151 = t149;
                            if (t149 != 3) {
                                t151 = (strmBgmPlayStage());
                            } else {
                                t153 = 0x8C421F60;
                            }
                            t157 = t151;
                            t159 = t153;
                        }
                        t163 = 0x0;
                        *(unsigned int *)(((int)stk + 92)) = t163;
                        t164 = t157;
                        t165 = t159;
                        for (;;) {
                            if ((int)t163 >= (int)0x4) {
                                break;
                            }
                            t165 = t163;
                            t164 = 0x8C38BA84;
                            t165 = (t165 << 2);
                            *(unsigned int *)((t165 + t164)) = 0x0;
                            t165 = t163;
                            t165 = (t165 + 0x1);
                            t163 = t165;
                            *(unsigned int *)(((int)stk + 92)) = t163;
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)((SP[38] + 0x78)) = 0x0;
            *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
            *(unsigned int *)((SP[38] + 0x80)) = 0x0;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
            *(float *)0x8C287C3C = 1.0f;
            *(float *)0x8C287C40 = 0.0399999991f;
            t188 = *(int *)0x8C40C28C;
            t190 = t188;
            if (t188 != 1) {
                t190 = (evPackFade(0x1, 0x3C, 0x0));
            }
            t205 = t190;
            t207 = 0x8C421F60;
            if ((*(int *)0x8C421F60) == 0) {
                t197 = *(int *)0x8C287D5C;
                t199 = t197;
                if (t197 != 3) {
                    t199 = (strmBgmPlayStage());
                } else {
                    t201 = 0x8C421F60;
                }
                t205 = t199;
                t207 = t201;
            }
            t163 = 0x0;
            *(unsigned int *)(((int)stk + 92)) = t163;
            t211 = t205;
            t212 = t207;
            for (;;) {
                if ((int)t163 >= (int)0x4) {
                    break;
                }
                t212 = t163;
                t211 = 0x8C38BA84;
                t212 = (t212 << 2);
                *(unsigned int *)((t212 + t211)) = 0x0;
                t212 = t163;
                t212 = (t212 + 0x1);
                t163 = t212;
                *(unsigned int *)(((int)stk + 92)) = t163;
            }
        }
        if ((int)(*(int *)0x8C1891E8) < (int)0xA) {
            *(unsigned int *)0x8C287D60 = 0x1;
        }
        *(unsigned int *)0x8C294668 = 0x16;
        *(unsigned int *)0x8C29466C = 0x4;
        *(int *)0x8C38B768 = 0; goto after;
    }
    goto after;

    case 8: {
        int t22;
        int t26;
        int t28;
        int t36;
        int t43;
        int t44;
        int t60;
        int t62;
        int t70;
        int t76;
        int t77;
        int t1;
        float u21;
        int t42;
        int *stk = SP - 7;

        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            lightStagePreset();
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
            evCrowdClapStart();
            courtColliInit();
            padLcdModeClear();
        }
        camMoveBeginAtGoal(1.0f, 1.0f);
        *(unsigned int *)((SP[38] + 0x80)) = ((*(int *)((SP[38] + 0x80))) - ((*(int *)0x8C301BF0) - 1));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)(0x8C2895E4); }
        *(float *)((0x8C + SP[38])) = ((*(float *)((0x8C + SP[38]))) + 20.0f);
        *(float *)((SP[38] + 0x90)) = ((*(float *)((SP[38] + 0x90))) + 50.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)(0x8C2895E4); }
        *(float *)((0x98 + SP[38])) = ((*(float *)((0x98 + SP[38]))) + 15.0f);
        *(float *)0x8C287A04 = 20.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((SP[38] + 0x88)); }
        camSetTarget(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x94 + SP[38])); }
        camSetEye(*(Stk3 *)(((int)stk + 4)));
        if ((int)(*(int *)((SP[38] + 0x80))) > 0) {
            if (((int)(*(int *)((SP[38] + 0x80))) < (int)0xD2) && (u21 = *(float *)0x8C287C3C, u21 == 0.0f)) {
                t22 = playerHumanPressed(0xFFFFFFFF);
                if (t22 != 0) {
                    *(unsigned int *)((SP[38] + 0x78)) = 0x0;
                    *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                    *(unsigned int *)((SP[38] + 0x80)) = 0x0;
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
                    *(float *)0x8C287C3C = 1.0f;
                    *(float *)0x8C287C40 = (*(float *)0x8C02C560);
                    t26 = *(int *)0x8C40C28C;
                    t28 = t26;
                    if (t26 != 1) {
                        t28 = (evPackFade(0x1, 0x3C, 0x0));
                    }
                    t36 = t28;
                    if ((*(int *)0x8C421F60) == 0) {
                        t36 = (strmBgmPlayStage());
                    }
                    t42 = SP[15];
                    t43 = t36;
                    t44 = 0x0;
                    for (;;) {
                        t42 = t44;
                        *(unsigned int *)(((int)stk + 88)) = t42;
                        if ((int)t44 >= (int)0x4) {
                            break;
                        }
                        t43 = 0x8C38BA84;
                        *(unsigned int *)(((t42 << 2) + t43)) = 0x0;
                        t44 = t42;
                        t44 = (t44 + 0x1);
                    }
                }
            }
        } else {
            *(unsigned int *)((SP[38] + 0x78)) = 0x0;
            *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
            *(unsigned int *)((SP[38] + 0x80)) = 0x0;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
            *(float *)0x8C287C3C = 1.0f;
            *(float *)0x8C287C40 = (*(float *)0x8C02C560);
            t60 = *(int *)0x8C40C28C;
            t62 = t60;
            if (t60 != 1) {
                t62 = (evPackFade(0x1, 0x3C, 0x0));
            }
            t70 = t62;
            if ((*(int *)0x8C421F60) == 0) {
                t70 = (strmBgmPlayStage());
            }
            t42 = SP[15];
            t76 = t70;
            t77 = 0x0;
            for (;;) {
                t42 = t77;
                *(unsigned int *)(((int)stk + 88)) = t42;
                if ((int)t77 >= (int)0x4) {
                    break;
                }
                t76 = 0x8C38BA84;
                *(unsigned int *)(((t42 << 2) + t76)) = 0x0;
                t77 = t42;
                t77 = (t77 + 0x1);
            }
        }
        *(unsigned int *)0x8C38B768 = 0x0;
        goto after;
    }
    goto after;

    case 9: {
        int t7;
        int t34;
        int t45;
        int t58;
        float t79;
        float t80;
        int t85;
        int t87;
        int t92;
        int t103;
        float t113;
        int t115;
        int t118;
        float t119;
        float t126;
        float t146;
        float t147;
        int t152;
        int t154;
        int t159;
        float t169;
        int t174;
        int t6;
        int t18;
        int t78;
        int *stk = SP - 7;

        int R0;
        int R1;
        int R2;
        int R3;
        int R4;
        int R5;
        int R6;
        int R7;
        int R8;
        int R9;
        int R12;
        int R13;
        float F0;
        float F1;
        float F2;
        float F3;
        float F4;
        float F5;
        int T_;
        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        stk[23] = SP[16];
        stk[24] = SP[17];
        stk[25] = SP[18];
        stk[26] = SP[19];
        stk[27] = SP[20];
        stk[28] = SP[21];
        stk[29] = SP[22];
        stk[30] = SP[23];
        stk[31] = SP[24];
        stk[32] = SP[25];
        stk[33] = SP[26];
        stk[34] = SP[27];
        stk[35] = SP[28];
        stk[36] = SP[29];
        stk[37] = SP[30];
        L_8C02C4EC:;
        if (((*(int *)((0x7C + SP[38]))) == -1)) goto L_8C02C4FC;
        goto L_8C02C4F8;
        L_8C02C4F8:;
        goto L_8C02C750;
        L_8C02C750:;
        if ((((*(int *)0x8C287B3C) & 0x1000) == 0)) goto L_8C02C7A0;
        goto L_8C02C75A;
        L_8C02C75A:;
        R1 = ((*(int *)((SP[38] + 0x28))));
        goto L_8C02C7A6;
        L_8C02C7A6:;
        t6 = R1;
        *(unsigned int *)(((int)stk + 76)) = t6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)(((t6 * 0xD78) + 0x8C288878)); }
        t7 = *(int *)((0xA0 + SP[38]));
        R0 = (t7);
        R1 = (0xA0);
        if ((t7 == 0)) goto L_8C02C7E2;
        goto L_8C02C7CE;
        L_8C02C7CE:;
        if ((R0 == 1)) goto L_8C02C818;
        goto L_8C02C7D2;
        L_8C02C7D2:;
        if ((R0 == 2)) goto L_8C02C856;
        goto L_8C02C7D6;
        L_8C02C7D6:;
        if ((R0 != 3)) goto L_8C02C7DE;
        goto L_8C02C7DA;
        L_8C02C7DA:;
        goto L_8C02C8DC;
        L_8C02C8DC:;
        if ((((*(int *)0x8C287B3C) & 0x1000) == 0)) goto L_8C02C8EE;
        goto L_8C02C8E6;
        L_8C02C8E6:;
        R0 = ((*(int *)((SP[38] + 0x28))));
        goto L_8C02C8F4;
        L_8C02C8F4:;
        t18 = (R0 & 0x1);
        *(unsigned int *)(((int)stk + 88)) = t18;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((SP[9] + 0x1C) + ((((t18 << 2) << 1) + t18) << 2)) + 0xC)); }
        *(float *)((SP[38] + 0x98)) = 10.0f;
        if ((((*(int *)0x8C287B3C) & 0x1000) == 0)) goto L_8C02C94E;
        goto L_8C02C930;
        L_8C02C930:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x70)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x24))) * 0xD78) + 0x8C288878)); }
        goto L_8C02C968;
        L_8C02C968:;
        *(float *)(((int)stk + 144)) = (10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x70)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((SP[38] + 0x94)); }
        cameraFovFit(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), 10.0f, 10.0f);
        *(float *)((SP[38] + 0x98)) = 10.0f;
        if ((((*(int *)0x8C287B3C) & 0x800) != 0)) goto L_8C02C9B4;
        goto L_8C02C9B0;
        L_8C02C9B0:;
        goto L_8C02CBD8;
        L_8C02CBD8:;
        *(unsigned int *)0x8C38B768 = 0x0;
        *(unsigned int *)0x8C294668 = 0x16;
        *(unsigned int *)0x8C29466C = 0x4;
        R1 = (0x8C29466C);
        goto L_8C02CBEA;
        L_8C02CBEA:;
        F3 = (20.0f);
        if ((!((*(float *)0x8C287A04) > 20.0f))) goto L_8C02CBFA;
        goto L_8C02CBF6;
        L_8C02CBF6:;
        *(float *)0x8C287A04 = F3;
        R1 = (0x8C287A04);
        goto L_8C02CBFA;
        L_8C02CBFA:;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        t34 = ((int (*)(float, float))(camMoveBegin))(1.0f, 1.0f);
        if (((*(int *)0x8C287D5C) == 3)) goto L_8C02CC68;
        goto L_8C02CC46;
        L_8C02CC46:;
        if (((int)(*(int *)((SP[38] + 0x80))) <= (int)0x3)) goto L_8C02CC68;
        goto L_8C02CC56;
        L_8C02CC56:;
        *(unsigned int *)((SP[38] + 0x80)) = ((*(int *)((SP[38] + 0x80))) - ((*(int *)0x8C301BF0) - 1));
        goto L_8C02CC68;
        L_8C02CC68:;
        if (((*(int *)0x8C287D5C) != 3)) goto L_8C02CCB8;
        goto L_8C02CC70;
        L_8C02CC70:;
        if (((int)(*(int *)((SP[38] + 0x80))) <= (int)0x2)) goto L_8C02CCA2;
        goto L_8C02CC80;
        L_8C02CC80:;
        t45 = circuitDrawPrompt();
        t18 = t45;
        *(unsigned int *)(((int)stk + 88)) = t18;
        if ((t45 == 0)) goto L_8C02CCA2;
        goto L_8C02CC8C;
        L_8C02CC8C:;
        *(unsigned int *)((SP[38] + 0x80)) = 0x2;
        *(unsigned int *)0x8C2FBC98 = ((*(int *)0x8C2FBC98) | 0x4);
        goto L_8C02CCA2;
        L_8C02CCA2:;
        if (((*(int *)((0x80 + SP[38]))) != 2)) goto L_8C02CCB8;
        goto L_8C02CCAE;
        L_8C02CCAE:;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
        goto L_8C02CCB8;
        L_8C02CCB8:;
        if (((*(int *)0x8C287D5C) != 3)) goto L_8C02CCC4;
        goto L_8C02CCC0;
        L_8C02CCC0:;
        goto after;
        L_8C02CCC4:;
        if (((int)(*(int *)((SP[38] + 0x80))) <= 0)) goto L_8C02CCEC;
        goto L_8C02CCD0;
        L_8C02CCD0:;
        if (((*(float *)0x8C287C3C) == 0.0f)) goto L_8C02CCDE;
        goto L_8C02CCDA;
        L_8C02CCDA:;
        goto after;
        L_8C02CCDE:;
        t58 = (playerHumanPressed(SP[12])) != 0;
        if (t58) goto L_8C02CCEC;
        goto L_8C02CCE8;
        L_8C02CCE8:;
        goto after;
        L_8C02CCEC:;
        T_ = ((((*(int *)0x8C40C28C) == 1)));
        goto L_8C02CD4C;
        L_8C02CD4C:;
        if ((T_)) goto L_8C02CD58;
        goto L_8C02CD4E;
        L_8C02CD4E:;
        evPackFade(0x1, 0x3C, 0x0);
        goto L_8C02CD58;
        L_8C02CD58:;
        *(unsigned int *)((SP[38] + 0x78)) = 0x0;
        *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        *(unsigned int *)((SP[38] + 0x80)) = 0x0;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
        *(float *)0x8C287C3C = 1.0f;
        *(float *)0x8C287C40 = (*(float *)0x8C02CE80);
        *(unsigned int *)(((0x60 + SP[38]) + 0x0)) = 0x1;
        goto after;
        L_8C02C9B4:;
        if (((*(float *)0x8C287A04) > 20.0f)) goto L_8C02C9C4;
        goto L_8C02C9C0;
        L_8C02C9C0:;
        goto L_8C02CBD8;
        L_8C02C9C4:;
        if ((((*(int *)0x8C287B3C) & 0x1000) == 0)) goto L_8C02CA00;
        goto L_8C02C9CE;
        L_8C02C9CE:;
        R0 = ((*(int *)((SP[38] + 0x28))));
        goto L_8C02CA06;
        L_8C02CA06:;
        t18 = (R0 & 0x1);
        *(unsigned int *)(((int)stk + 88)) = t18;
        if ((((*(int *)((((R0 & 0x1) * 0xD78) + 0x8C2888E4))) & 0x8000) == 0)) goto L_8C02CA2E;
        goto L_8C02CA1C;
        L_8C02CA1C:;
        R3 = (((*(short *)(((SP[15] * 0xD78) + 0x8C288888))) - 32768));
        goto L_8C02CA3A;
        L_8C02CA3A:;
        *(unsigned short *)(((int)stk + 70)) = (R3);
        t78 = 0x0;
        *(unsigned int *)(((int)stk + 72)) = t78;
        goto L_8C02CA42;
        L_8C02CA42:;
        t79 = nlRandom();
        t80 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t80 * 3.0f) << 1) + (int)(t80 * 3.0f)) << 2) + ((((((int)(t79 * (1.0f + 1.0f)) << 2) << 1) + (int)(t79 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
        t85 = ((int (*)(float, float))(nlArcTan2))(((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        t87 = (int)(short)(angDiff(((short)(SP[10] >> 16)), t85)) < 0;
        if (t87) goto L_8C02CB34;
        goto L_8C02CAC8;
        L_8C02CAC8:;
        t92 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((short)(angDiff(((short)(SP[10] >> 16)), t92)));
        goto L_8C02CB6C;
        L_8C02CB6C:;
        if (((int)R1 >= (int)0x3000)) goto L_8C02CB82;
        goto L_8C02CB72;
        L_8C02CB72:;
        t78 = (SP[11] + 0x1);
        *(unsigned int *)(((int)stk + 72)) = t78;
        if (((int)t78 >= (int)0xA)) goto L_8C02CB82;
        goto L_8C02CB7E;
        L_8C02CB7E:;
        goto L_8C02CA42;
        L_8C02CB82:;
        *(unsigned int *)(((0xA0 + SP[38]) + 0x0)) = (int)((nlRandom()) * 3.0f);
        *(float *)(((0xA4 + SP[38]) + 0x0)) = ((nlRandom()) * 3.0f);
        goto L_8C02C750;
        L_8C02CB34:;
        t103 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((-(short)(angDiff(((short)(SP[10] >> 16)), t103))));
        goto L_8C02CB6C;
        L_8C02CA2E:;
        R3 = ((*(short *)(((SP[15] * 0xD78) + 0x8C288888))));
        goto L_8C02CA3A;
        L_8C02CA00:;
        R0 = ((*(int *)((SP[38] + 0x24))));
        goto L_8C02CA06;
        L_8C02C94E:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x70)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x28))) * 0xD78) + 0x8C288878)); }
        goto L_8C02C968;
        L_8C02C8EE:;
        R0 = ((*(int *)((SP[38] + 0x24))));
        goto L_8C02C8F4;
        L_8C02C7DE:;
        goto L_8C02CBEA;
        L_8C02C856:;
        t113 = cameraFovForSize(2.5f);
        *(float *)0x8C287A04 = t113;
        *(float *)0x8C287A04 = (t113 + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f));
        t115 = *(int *)0x8C287B3C;
        R1 = (t115);
        if (((t115 & 0x800) != 0)) goto L_8C02C88E;
        goto L_8C02C884;
        L_8C02C884:;
        t118 = ((int (*)(int, int, int, int, float, float))(camMoveBegin))(R4, R5, R6, R7, 1.0f, 0.5f);
        goto L_8C02C88E;
        L_8C02C88E:;
        *(unsigned int *)0x8C38B768 = 0x1;
        goto L_8C02CBEA;
        L_8C02C818:;
        *(float *)((SP[38] + 0x98)) = 10.0f;
        t119 = cameraFovForSize(10.0f);
        *(float *)0x8C287A04 = t119;
        R2 = (0x8C287A04);
        F1 = (((*(float *)((SP[38] + 0xA4))) + ((float)(*(int *)((SP[38] + 0x80))) / 60.0f)));
        F3 = (t119);
        goto L_8C02C84A;
        L_8C02C84A:;
        *(float *)((R2 + 0x0)) = (F3 + F1);
        *(unsigned int *)0x8C38B768 = 0x1;
        R1 = (0x8C38B768);
        goto L_8C02CBEA;
        L_8C02C7E2:;
        *(float *)((SP[38] + 0x98)) = 14.0f;
        t126 = cameraFovForSize(5.0f);
        *(float *)0x8C287A04 = t126;
        R2 = (0x8C287A04);
        F1 = (((*(float *)((SP[38] + 0xA4))) + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f)));
        F3 = (t126);
        goto L_8C02C84A;
        L_8C02C7A0:;
        R1 = ((*(int *)((SP[38] + 0x24))));
        goto L_8C02C7A6;
        L_8C02C4FC:;
        if ((((*(int *)0x8C287B3C) & 0x800) != 0)) goto L_8C02C50A;
        goto L_8C02C506;
        L_8C02C506:;
        goto L_8C02C750;
        L_8C02C50A:;
        if ((((*(int *)0x8C287B3C) & 0x1000) == 0)) goto L_8C02C51C;
        goto L_8C02C514;
        L_8C02C514:;
        R0 = ((*(int *)((SP[38] + 0x28))));
        goto L_8C02C522;
        L_8C02C522:;
        t18 = (R0 & 0x1);
        *(unsigned int *)(((int)stk + 88)) = t18;
        if ((((*(int *)((((R0 & 0x1) * 0xD78) + 0x8C2888E4))) & 0x8000) == 0)) goto L_8C02C590;
        goto L_8C02C538;
        L_8C02C538:;
        R3 = (((*(short *)(((SP[15] * 0xD78) + 0x8C288888))) - 32768));
        goto L_8C02C59C;
        L_8C02C59C:;
        *(unsigned short *)(((int)stk + 70)) = (R3);
        t78 = 0x0;
        *(unsigned int *)(((int)stk + 72)) = t78;
        goto L_8C02C5A4;
        L_8C02C5A4:;
        t146 = nlRandom();
        t147 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t147 * 3.0f) << 1) + (int)(t147 * 3.0f)) << 2) + ((((((int)(t146 * (1.0f + 1.0f)) << 2) << 1) + (int)(t146 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
        t152 = ((int (*)(float, float))(nlArcTan2))(((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        t154 = (int)(short)(angDiff(((short)(SP[10] >> 16)), t152)) < 0;
        if (t154) goto L_8C02C68C;
        goto L_8C02C62A;
        L_8C02C62A:;
        t159 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((short)(angDiff(((short)(SP[10] >> 16)), t159)));
        goto L_8C02C6C4;
        L_8C02C6C4:;
        if (((int)R1 >= (int)0x3000)) goto L_8C02C6DA;
        goto L_8C02C6CA;
        L_8C02C6CA:;
        t78 = (SP[11] + 0x1);
        *(unsigned int *)(((int)stk + 72)) = t78;
        if (((int)t78 >= (int)0xA)) goto L_8C02C6DA;
        goto L_8C02C6D6;
        L_8C02C6D6:;
        goto L_8C02C5A4;
        L_8C02C6DA:;
        *(unsigned int *)(((0xA0 + SP[38]) + 0x0)) = (int)((nlRandom()) * 4.0f);
        *(float *)(((0xA4 + SP[38]) + 0x0)) = ((nlRandom()) * 3.0f);
        if (((*(int *)0x8C287D5C) == 3)) goto L_8C02C718;
        goto L_8C02C70E;
        L_8C02C70E:;
        padLcdSetMode(0x12);
        goto L_8C02C750;
        L_8C02C718:;
        t169 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)(((((((int)(t169 * (1.0f + 1.0f)) << 1) + (int)(t169 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)) + 0xC)); }
        *(unsigned int *)((SP[38] + 0xA0)) = 0x1;
        goto L_8C02C750;
        L_8C02C68C:;
        t174 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[15] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[15] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((-(short)(angDiff(((short)(SP[10] >> 16)), t174))));
        goto L_8C02C6C4;
        L_8C02C590:;
        R3 = ((*(short *)(((SP[15] * 0xD78) + 0x8C288888))));
        goto L_8C02C59C;
        L_8C02C51C:;
        R0 = ((*(int *)((SP[38] + 0x24))));
        goto L_8C02C522;
    }
    goto after;

    case 10: {
        int t22;
        int t23;
        float u38;
        int t1;
        int t7;
        int t13;
        int t34;
        float u54;
        int *stk = SP - 7;

        if (((*(int *)((0x7C + SP[38]))) == -1) && (t1 = *(int *)0x8C287B3C, (t1 & 0x800) != 0)) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((SP[9] + 0x1C)); }
            *(unsigned int *)(((0xA0 + SP[38]) + 0x0)) = 0x0;
            *(float *)((SP[38] + 0xA4)) = 5.0f;
            padLcdSetMode(0x9);
        }
        if (((*(int *)0x8C287D5C) == 2) && (t7 = *(int *)((SP[38] + 0x60)), t7 == 0x3DE)) {
            circuitStatsStart();
        }
        if (((*(int *)0x8C287D5C) == 2) && (t13 = *(int *)((SP[38] + 0x60)), t13 == 0x32A)) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
        }
        if ((*(int *)((SP[38] + 0x10))) == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((*(int *)((SP[38] + 0x28))) * 0xD78) + 0x8C288878)); }
        } else {
            t22 = *(int *)((SP[38] + 0x28));
            t23 = ((~(((~(t22 + 0x2)) + 0x1) & 0x3)) + 0x1);
            if ((int)(t22 + 0x2) >= 0) {
                t23 = ((t22 + 0x2) & 0x3);
            }
            nlGetAverageVector((((*(int *)((SP[38] + 0x28))) * 0xD78) + 0x8C288878), ((t23 * 0xD78) + 0x8C288878), (SP[38] + 0x94), 0.5f, 0.5f);
        }
        if (((*(int *)((((*(int *)((SP[38] + 0x28))) * 0xD78) + 0x8C288A20))) != 0) && (t34 = *(int *)((SP[38] + 0x10)), t34 != 4)) {
            *(float *)((SP[38] + 0x98)) = 10.0f;
            u38 = (*(float *)0x8C287A04);
            u38 = u38 + 0.0500000007f * ((cameraFovForSize(10.0f)) - (*(float *)0x8C287A04));
            *(float *)0x8C287A04 = u38;
            u54 = 0.0500000007f;
        } else {
            *(float *)((SP[38] + 0x98)) = 7.0f;
            *(float *)0x8C287A04 = (cameraFovForSize(7.0f));
            *(float *)((SP[38] + 0xA4)) = ((*(float *)((SP[38] + 0xA4))) - ((float)(*(int *)0x8C301BF0) * 0.00555555569f));
            if (0.0f > (*(float *)((SP[38] + 0xA4)))) {
                *(float *)((SP[38] + 0xA4)) = 0.0f;
            }
            *(float *)0x8C287A04 = ((*(float *)0x8C287A04) + (*(float *)((SP[38] + 0xA4))));
            u54 = 1.0f;
        }
        camMoveBegin(1.0f, u54);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((SP[38] + 0x94)); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        *(unsigned int *)0x8C38B768 = 0x1;
        goto after;
    }
    goto after;

    case 11: {
        int t7;
        int t17;
        int t56;
        float t69;
        float t70;
        float t76;
        float t77;
        int t87;
        int t90;
        int t95;
        int t106;
        float t110;
        int t112;
        float t116;
        float t125;
        float t135;
        float t136;
        int t141;
        int t144;
        int t152;
        int t163;
        float t171;
        int t3;
        int t59;
        int t75;
        float u167;
        int *stk = SP - 7;

        int R0;
        int R1;
        int R2;
        int R3;
        int R4;
        int R5;
        int R6;
        int R7;
        int R8;
        int R9;
        int R14;
        float F0;
        float F1;
        float F2;
        float F3;
        float F4;
        float F5;
        float F12;
        int T_;
        stk[7] = SP[0];
        stk[8] = SP[1];
        stk[9] = SP[2];
        stk[10] = SP[3];
        stk[11] = SP[4];
        stk[12] = SP[5];
        stk[13] = SP[6];
        stk[14] = SP[7];
        stk[15] = SP[8];
        stk[16] = SP[9];
        stk[17] = SP[10];
        stk[18] = SP[11];
        stk[19] = SP[12];
        stk[20] = SP[13];
        stk[21] = SP[14];
        stk[22] = SP[15];
        stk[23] = SP[16];
        stk[24] = SP[17];
        stk[25] = SP[18];
        stk[26] = SP[19];
        stk[27] = SP[20];
        stk[28] = SP[21];
        stk[29] = SP[22];
        stk[30] = SP[23];
        stk[31] = SP[24];
        stk[32] = SP[25];
        stk[33] = SP[26];
        stk[34] = SP[27];
        stk[35] = SP[28];
        stk[36] = SP[29];
        stk[37] = SP[30];
        stk[38] = SP[31];
        stk[39] = SP[32];
        stk[40] = SP[33];
        L_8C02D010:;
        if ((((*(int *)((0x54 + SP[37]))) & 2) == 0)) goto L_8C02D026;
        goto L_8C02D01C;
        L_8C02D01C:;
        t3 = (serveGetServer());
        *(unsigned int *)(((int)stk + 80)) = t3;
        goto L_8C02D086;
        L_8C02D086:;
        if (((*(int *)((0x7C + SP[38]))) == -1)) goto L_8C02D096;
        goto L_8C02D092;
        L_8C02D092:;
        goto L_8C02D26C;
        L_8C02D26C:;
        *(unsigned int *)0x8C287B44 = 0x1;
        goto L_8C02D272;
        L_8C02D272:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((*(int *)0x8C295DC4) * 0xD78) + 0x8C288878)); }
        t7 = *(int *)((0xA0 + SP[38]));
        R0 = (t7);
        R1 = (0xA0);
        if ((t7 == 0)) goto L_8C02D2F0;
        goto L_8C02D29A;
        L_8C02D29A:;
        if ((R0 == 1)) goto L_8C02D32E;
        goto L_8C02D29E;
        L_8C02D29E:;
        if ((R0 == 2)) goto L_8C02D384;
        goto L_8C02D2A2;
        L_8C02D2A2:;
        if ((R0 != 3)) goto L_8C02D2AA;
        goto L_8C02D2A6;
        L_8C02D2A6:;
        goto L_8C02D400;
        L_8C02D400:;
        R0 = (0x8C287B3C);
        if ((((*(int *)0x8C287B3C) & 0x800) == 0)) goto L_8C02D438;
        goto L_8C02D40A;
        L_8C02D40A:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x64)) = *(struct mv3 *)((SP[9] + 0x9C)); }
        t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(lightCamCalc))(0x8C287D84, (((int)stk + 20) + 0x6C), (0x84 + ((int)stk + 20)), 0x8C287A04, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        *(unsigned int *)(((int)stk + 20)) = SP[37];
        goto L_8C02D452;
        L_8C02D452:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((int)stk + 28) + 0x64)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x94)) = *(struct mv3 *)((((int)stk + 28) + 0x7C)); }
        *(float *)0x8C287A04 = 16.0f;
        *(unsigned int *)0x8C29466C = 0x4;
        *(unsigned int *)0x8C294668 = 0x16;
        *(unsigned int *)0x8C38B768 = 0x0;
        R1 = (0x8C29466C);
        goto L_8C02D796;
        L_8C02D796:;
        F3 = (20.0f);
        if ((!((*(float *)0x8C287A04) > 20.0f))) goto L_8C02D7A6;
        goto L_8C02D7A2;
        L_8C02D7A2:;
        *(float *)0x8C287A04 = F3;
        R1 = (0x8C287A04);
        goto L_8C02D7A6;
        L_8C02D7A6:;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x94 + SP[38])); }
        camSetEye(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x88 + SP[38])); }
        camSetTarget(*(Stk3 *)(((int)stk + 4)));
        if ((((*(int *)0x8C287B3C) & 0x800) != 0)) goto L_8C02D81C;
        goto L_8C02D7E2;
        L_8C02D7E2:;
        F5 = (0.200000003f);
        goto L_8C02D81E;
        L_8C02D81E:;
        camMoveBegin(1.0f, F5);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
        if (((int)(*(int *)((SP[38] + 0x80))) >= 0)) goto L_8C02D844;
        goto L_8C02D83A;
        L_8C02D83A:;
        *(unsigned int *)((SP[38] + 0x80)) = 0x0;
        goto L_8C02D844;
        L_8C02D844:;
        if (((int)(*(int *)((SP[38] + 0x80))) >= (int)0x3C)) goto L_8C02D8B6;
        goto L_8C02D854;
        L_8C02D854:;
        if ((((*(int *)((SP[38] + 0x2C))) & 0x1) != ((*(int *)0x8C295DC4) & 0x1))) goto L_8C02D8B6;
        goto L_8C02D868;
        L_8C02D868:;
        if (((int)(*(int *)(((SP[13] * 0xD78) + 0x8C2889D4))) >= (int)0x28)) goto L_8C02D8B6;
        goto L_8C02D87A;
        L_8C02D87A:;
        if (((*(int *)0x8C40C28C) == 1)) goto L_8C02D88C;
        goto L_8C02D882;
        L_8C02D882:;
        evPackFade(0x1, 0x3C, 0x0);
        goto L_8C02D88C;
        L_8C02D88C:;
        *(unsigned int *)((SP[38] + 0x7C)) = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
        *(float *)0x8C287C3C = 1.0f;
        *(float *)0x8C287C40 = 0.0399999991f;
        goto L_8C02D8B6;
        L_8C02D8B6:;
        *(unsigned int *)0x8C157590 = (*(int *)((SP[38] + 0xA0)));
        camExec(R4, R5, R6, R7, F4, F5);
        if ((SP[3] == 0)) goto L_8C02D8D2;
        goto L_8C02D8CC;
        L_8C02D8CC:;
        lightAimFromMatrix();
        goto L_8C02D8D2;
        L_8C02D8D2:;
        R0 = (0x7C);
        R2 = (0xFFFFFFFF);
        if (((int)(*(int *)((SP[38] + 0x7C))) <= (int)0xFFFFFFFF)) goto L_8C02D900;
        goto L_8C02D8E0;
        L_8C02D8E0:;
        *(unsigned int *)((SP[38] + 0x78)) = (*(int *)((SP[38] + 0x7C)));
        *(unsigned int *)((SP[38] + 0x7C)) = R2;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        R0 = (0x7C);
        goto L_8C02D900;
        L_8C02D900:;
        return;
        L_8C02D81C:;
        F5 = (1.0f);
        goto L_8C02D81E;
        L_8C02D438:;
        t56 = ((int (*)(int, int, int, int, int, int, float, float))(lightCamCalc))(0x8C287D84, (((int)stk + 20) + 0x6C), (0x84 + ((int)stk + 20)), 0x8C287A04, SP[37], 0x1, F4, F5);
        goto L_8C02D452;
        L_8C02D2AA:;
        if ((R0 != 4)) goto L_8C02D2B2;
        goto L_8C02D2AE;
        L_8C02D2AE:;
        goto L_8C02D4C4;
        L_8C02D4C4:;
        t59 = ((*(int *)0x8C295DC4) & 0x1);
        *(unsigned int *)(((int)stk + 88)) = t59;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((SP[38] + 0x88)) = *(struct mv3 *)((((SP[9] + 0x1C) + ((((t59 << 2) << 1) + t59) << 2)) + 0xC)); }
        *(float *)((SP[38] + 0x98)) = 10.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x70)) = *(struct mv3 *)((((0x1 - ((*(int *)0x8C295DC4) & 0x1)) * 0xD78) + 0x8C288878)); }
        *(float *)(((int)stk + 144)) = (10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x70)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((SP[38] + 0x94)); }
        cameraFovFit(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), 10.0f, 10.0f);
        *(float *)((SP[38] + 0x98)) = 10.0f;
        if ((((*(int *)0x8C287B3C) & 0x800) != 0)) goto L_8C02D55E;
        goto L_8C02D55A;
        L_8C02D55A:;
        goto L_8C02D784;
        L_8C02D784:;
        *(unsigned int *)0x8C38B768 = 0x0;
        *(unsigned int *)0x8C294668 = 0x16;
        R1 = (0x8C29466C);
        R2 = (0x4);
        goto L_8C02D794;
        L_8C02D794:;
        *(unsigned int *)((R1 + 0x0)) = R2;
        goto L_8C02D796;
        L_8C02D55E:;
        if (((*(float *)0x8C287A04) > 20.0f)) goto L_8C02D56E;
        goto L_8C02D56A;
        L_8C02D56A:;
        goto L_8C02D784;
        L_8C02D56E:;
        t69 = nlRandom();
        t70 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t70 * 3.0f) << 1) + (int)(t70 * 3.0f)) << 2) + ((((((int)(t69 * (1.0f + 1.0f)) << 2) << 1) + (int)(t69 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
        goto L_8C02D5B6;
        L_8C02D5B6:;
        *(unsigned int *)(((0xA0 + SP[38]) + 0x0)) = (int)((nlRandom()) * 4.0f);
        if (((*(int *)((SP[38] + 0xA0))) == (*(int *)0x8C157590))) goto L_8C02D5B6;
        goto L_8C02D5DE;
        L_8C02D5DE:;
        t75 = 0x0;
        *(unsigned int *)(((int)stk + 72)) = t75;
        goto L_8C02D5E2;
        L_8C02D5E2:;
        t76 = nlRandom();
        t77 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t77 * 3.0f) << 1) + (int)(t77 * 3.0f)) << 2) + ((((((int)(t76 * (1.0f + 1.0f)) << 2) << 1) + (int)(t76 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
        R0 = (0x90);
        R1 = ((SP[13] * 0xD78));
        R2 = (SP[38]);
        R3 = (0xD78);
        R9 = ((0x88 + SP[38]));
        goto L_8C02D678;
        L_8C02D678:;
        t87 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[13] * R3) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)((R1 + 0x8C288880))) - (*(float *)((R2 + R0)))));
        t90 = (int)(short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t87)) < 0;
        if (t90) goto L_8C02D6F0;
        goto L_8C02D6B0;
        L_8C02D6B0:;
        t95 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[13] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[13] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t95)));
        goto L_8C02D730;
        L_8C02D730:;
        if (((int)R1 >= (int)0x3000)) goto L_8C02D746;
        goto L_8C02D736;
        L_8C02D736:;
        t75 = (SP[11] + 0x1);
        *(unsigned int *)(((int)stk + 72)) = t75;
        if (((int)t75 >= (int)0xA)) goto L_8C02D746;
        goto L_8C02D742;
        L_8C02D742:;
        goto L_8C02D5E2;
        L_8C02D746:;
        *(float *)(((0xA4 + SP[38]) + 0x0)) = ((nlRandom()) * 3.0f);
        goto L_8C02D272;
        L_8C02D6F0:;
        t106 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[13] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[13] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((-(short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t106))));
        goto L_8C02D730;
        L_8C02D2B2:;
        goto L_8C02D796;
        L_8C02D384:;
        t110 = cameraFovForSize(2.5f);
        *(float *)0x8C287A04 = t110;
        *(float *)0x8C287A04 = (t110 + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f));
        t112 = *(int *)0x8C287B3C;
        R1 = (t112);
        if (((t112 & 0x800) != 0)) goto L_8C02D3BA;
        goto L_8C02D3B0;
        L_8C02D3B0:;
        camMoveBegin(1.0f, 0.5f);
        goto L_8C02D3BA;
        L_8C02D3BA:;
        *(unsigned int *)0x8C38B768 = 0x1;
        goto L_8C02D796;
        L_8C02D32E:;
        *(float *)((SP[38] + 0x98)) = 10.0f;
        t116 = cameraFovForSize(10.0f);
        *(float *)0x8C287A04 = t116;
        *(float *)0x8C287A04 = (t116 + ((*(float *)((SP[38] + 0xA4))) + ((float)(*(int *)((SP[38] + 0x80))) / 60.0f)));
        if (((*(int *)0x8C1891E8) != 4)) goto L_8C02D37E;
        goto L_8C02D36A;
        L_8C02D36A:;
        if ((!((*(float *)0x8C287A04) > 15.0f))) goto L_8C02D37E;
        goto L_8C02D376;
        L_8C02D376:;
        *(float *)0x8C287A04 = 15.0f;
        goto L_8C02D37E;
        L_8C02D37E:;
        R1 = (0x8C38B768);
        R2 = (0x1);
        goto L_8C02D794;
        L_8C02D2F0:;
        *(float *)((SP[38] + 0x98)) = 14.0f;
        t125 = cameraFovForSize(5.0f);
        *(float *)0x8C287A04 = t125;
        *(float *)0x8C287A04 = (t125 + ((*(float *)((SP[38] + 0xA4))) + ((float)(*(int *)((SP[38] + 0x80))) / 120.0f)));
        *(unsigned int *)0x8C38B768 = 0x1;
        R1 = (0x8C38B768);
        goto L_8C02D796;
        L_8C02D096:;
        if ((((*(int *)0x8C287B3C) & 0x800) != 0)) goto L_8C02D0A4;
        goto L_8C02D0A0;
        L_8C02D0A0:;
        goto L_8C02D26C;
        L_8C02D0A4:;
        *(unsigned int *)(((0xA0 + SP[38]) + 0x0)) = (int)((nlRandom()) * 5.0f);
        if (((*(int *)((SP[38] + 0xA0))) == (*(int *)0x8C157590))) goto L_8C02D0A4;
        goto L_8C02D0CC;
        L_8C02D0CC:;
        t75 = 0x0;
        *(unsigned int *)(((int)stk + 72)) = t75;
        goto L_8C02D0D0;
        L_8C02D0D0:;
        t135 = nlRandom();
        t136 = nlRandom();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + SP[38])) = *(struct mv3 *)((((((int)(t136 * 3.0f) << 1) + (int)(t136 * 3.0f)) << 2) + ((((((int)(t135 * (1.0f + 1.0f)) << 2) << 1) + (int)(t135 * (1.0f + 1.0f))) << 2) + (SP[9] + 0x1C)))); }
        t141 = ((int (*)(float, float))(nlArcTan2))(((*(float *)(((SP[13] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[13] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        t144 = (int)(short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t141)) < 0;
        R9 = ((0x88 + SP[38]));
        if (t144) goto L_8C02D1F0;
        goto L_8C02D15E;
        L_8C02D15E:;
        F4 = (((*(float *)(((SP[13] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))));
        F5 = (((*(float *)(((SP[13] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        goto L_8C02D1D4;
        L_8C02D1D4:;
        t152 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, F4, F5);
        R1 = ((short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t152)));
        goto L_8C02D230;
        L_8C02D230:;
        if (((int)R1 >= (int)0x3000)) goto L_8C02D246;
        goto L_8C02D236;
        L_8C02D236:;
        t75 = (SP[11] + 0x1);
        *(unsigned int *)(((int)stk + 72)) = t75;
        if (((int)t75 >= (int)0xA)) goto L_8C02D246;
        goto L_8C02D242;
        L_8C02D242:;
        goto L_8C02D0D0;
        L_8C02D246:;
        *(float *)(((0xA4 + SP[38]) + 0x0)) = ((nlRandom()) * 3.0f);
        *(unsigned int *)((SP[38] + 0x80)) = 0x78;
        *(unsigned int *)0x8C295DC4 = SP[13];
        goto L_8C02D26C;
        L_8C02D1F0:;
        t163 = ((int (*)(int, int, int, int, float, float))(nlArcTan2))(R4, R5, R6, R7, ((*(float *)(((SP[13] * 0xD78) + 0x8C288878))) - (*(float *)((SP[38] + 0x88)))), ((*(float *)(((SP[13] * 0xD78) + 0x8C288880))) - (*(float *)((SP[38] + 0x90)))));
        R1 = ((-(short)(angDiff((*(short *)(((SP[13] * 0xD78) + 0x8C288888))), t163))));
        goto L_8C02D230;
        L_8C02D026:;
        t3 = 0x0;
        *(unsigned int *)(((int)stk + 80)) = t3;
        u167 = (-1.0f);
        *(float *)(((int)stk + 48)) = u167;
        t59 = 0x0;
        *(unsigned int *)(((int)stk + 88)) = t59;
        goto L_8C02D07A;
        L_8C02D07A:;
        if (((int)SP[15] < (int)(*(int *)((SP[38] + 0x10))))) goto L_8C02D03C;
        goto L_8C02D086;
        L_8C02D03C:;
        nlSubVector3op((((int)stk + 28) + 0x7C), ((SP[15] * 0xD78) + 0x8C28886C), 0x8C291F30);
        t171 = nlInnerProduct(0x8C291F48, (((int)stk + 28) + 0x7C));
        *(float *)(((int)stk + 52)) = (t171);
        if ((!(t171 > *(float *)&SP[5]))) goto L_8C02D074;
        goto L_8C02D068;
        L_8C02D068:;
        u167 = *(float *)&SP[6];
        *(float *)(((int)stk + 48)) = u167;
        t3 = SP[15];
        *(unsigned int *)(((int)stk + 80)) = t3;
        goto L_8C02D074;
        L_8C02D074:;
        t59 = (SP[15] + 0x1);
        *(unsigned int *)(((int)stk + 88)) = t59;
        goto L_8C02D07A;
    }
    goto after;

    }
after:
    *(int *)0x8C157590 = *(int *)(SP[38] + 0xA0);
    camExec();
    if (SP[3])
        lightAimFromMatrix();
    if (*(int *)(SP[38] + 0x7C) > -1) {
        *(int *)(SP[38] + 0x78) = *(int *)(SP[38] + 0x7C);
        *(int *)(SP[38] + 0x7C) = -1;
        *(int *)0x8C287B3C |= 0x800;
    }
}
