/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int ADXSTM_Close(int);
int ADXT_Stop(void);
int abs(int);
int _lsft(int, int);
int mwlSbSetFx(int, int, int);
int mwlSbSetPitch(int, int, int);
int mwlSbSetFilter(int, int, int);
int mwlSbSetGain(int, int);
int set_event2(int, int);
int vecMake(float, float, float);
int cpuAimPointSet(int, int, float, float);
int sprInitRectF(int, int, int, int, int, int);
int rankDrawTbl1(void);
int rankDrawTbl2(void);
int nlObjPutMVAsm(int, int, int, int);
int _setsbit(int, int, int);
int ADXT_GetOutVol(int);
int ADXSTMF_Create(int, int, int, int);
int ADXF_Ocbi(int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int _mult(int, int, int);
int gdFsOpenRange(void);
int kmFreeTexture(int);
int kmyAllocateArea(int, int, int);
int kmyConvertAddress64to32(int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyiCheckNativeHandle(int);
int memmove(int, int, int);
int mwRnaErrCallFunc(int, ...);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlsndCheckPackFreeError(int);
int nlsndG2Read(int);
int nlsndPackFreeInit(int, int, int);
int nlsndStreamChgPan(int, int, int);
int nlsndStreamGetHdInfo(int, int);
int nlsndStreamSetHdInfo(int, int);
int nlsndStreamSetHdPan(int, int, int);
int set_event(int, int);
int strncpy(int, int, int);
int nlFreeTextureAll(void);
int mwRnaSetPitch(int a4, int a5, int a6);
float valStepToward(int a4, float f4, float f5);
int cpuDblIsMyBall(int a4);
int _mult64(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int decoGaugeSprInit(void);
int padIdleFrames(void);
void nlFastInvertMatrix(void);
int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8);
int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7);
int angleLerp(int a4, int a5, float f4);
int nlsndPackFreeBG(int a4);
int search_dir_by_startfat(int a4, int a5);
int kmyGetFrameBufferSize(int a4);
int mwlSbSetDrctLvl(int a4, int a5);
float nlSinfReduce(int a4, float f4);
int nlObjPutMvSub(int a4, int a5);
int mwRnaSetBitPerSmpl(int a4, int a5);
int kmyConnectInterrupt(int a4, int a5, int a6);
int kmySetPassInfo(int a4, int a5, int a6);
int strmBgmFadeOut(int a4, int a5);
int kmyZeroMemory(int a4, int a5);
int mwRnaSetOutPan(int a4, int a5, int a6);
int SJRBF_GetNumData(int a4, int a5);
int kmyAllocateFrameBuffer(int a4, int a5, int a6);
int mwSbSetExPrm(int a4, int a5, int a6, int a7);
int evVoiceFadeOut(int a4);
int search_fat_backward(int a4, int a5, int a6, int a7);
int kmyGetPassInfo(int a4, int a5, int a6);
int kmtex_ConfirmSmallVQ(int a4);
int kmtex_TextureSize_Twiddled(int a4);
float rndRangef(float f4);
int matchPropStart(void);
int rankDraw(void);
float nlRoundUp(float f4);
int nlsndStreamIsPlaying(int a4);
int nlInitInterruptDC(void);
void syChainInit(void);
int mwRnaSetDrctLvl(int a4, int a5);
int syG2DmaSetProtect(int a4, int a5);
int entryGetColorId(int a4);
int stageSegaQuadUVSet(int a4, float f4, float f5, float f6);
int evFadeValueTask(int a4);
int kmiConvertUVnum(int a4);
int mwSbSetPan(int a4, int a5, int a6);
int padVibRequest(int a4, int a5, int a6, int a7, int a8, int a9);
int adxf_CloseSjStm(int a4);
int SJMEM_GetNumData(int a4, int a5);
int kmyiSetScreenSize(int a4);
void vecFromYaw(int a4, int a5, int a6, int a7, int a8);
int cpuSglAimAddSides(int a4, int a5);
int hudFadeOutStart(int a4, int a5, int a6, int a7, int a8);
int exprPlayB(int a4, int a5, int a6);


float valStepToward(int a4, float f4, float f5)
{
    float d;
    float ad;
    float step;
    float sgn;

    d = (f5 - f4);
    ad = d;
    if (0.0f > d) {
        ad = (f4 - f5);
    }
    if ((int)a4 > 0) {
        step = (ad / (float)a4);
    } else {
        step = 1000.0f;
    }
    if (step > ad) {
        return f5;
    }
    if (d > 0.0f) {
        sgn = 1.0f;
    } else if (0.0f > d) {
        sgn = -1.0f;
    } else {
        sgn = 0.0f;
    }
    return (f4 + step * sgn);
}


int decoGaugeSprInit(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int stk[15] = {0};

    t0 = *(int *)0x8C110988;
    *(unsigned int *)((((int)stk + 12) + 0xC)) = t0;
    t1 = *(int *)0x8C110984;
    *(unsigned int *)((((int)stk + 12) + 0x8)) = t1;
    t2 = *(int *)0x8C110980;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = t2;
    t3 = *(int *)0x8C11097C;
    *(unsigned int *)((((int)stk + 12) + 0x0)) = t3;
    t4 = 0x0;
    t5 = 0x8C1851CC;
    t6 = 0x8C3422A8;
    for (;;) {
        t7 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t8 = sprInitRectF(t6, t7, ((int)stk + 12), 0x40, 0x40, 0x0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t6 + 0x34)) = 0x5;
        t6 = (t6 + 0x50);
        if ((unsigned int)t4 >= (unsigned int)0x2F) {
            break;
        }
    }
    return t8;
}

int padIdleFrames(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t24;
    int t27;
    int t0;
    int t22;
    int t18;
    int t15;
    int t12;

    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((0x8C29B898 + (t1 << 2)));
        t3 = *(int *)((t2 + 0x8));
        if (t3 == 0) {
            t4 = *(short *)((t2 + 0x1C));
            if (t4 == 0) {
                t5 = *(int *)0x8C29B898;
                t0 = t5;
                t6 = *(short *)((t0 + 0x1E));
                if (t6 == 0) {
                    t7 = *(short *)((t2 + 0x1A));
                    if (t7 == 0) {
                        t8 = *(short *)((t2 + 0x18));
                        t9 = 0x0;
                        if (t8 == 0) {
                        } else {
                            t1 = 0x4;
                            t9 = 0x1;
                        }
                        t12 = t9;
                    } else {
                        t1 = 0x4;
                        t12 = 0x1;
                    }
                    t15 = t12;
                } else {
                    t1 = 0x4;
                    t15 = 0x1;
                }
                t18 = t15;
            } else {
                t1 = 0x4;
                t18 = 0x1;
            }
            t22 = t18;
        } else {
            t1 = 0x4;
            t22 = 0x1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    if (t22 == 0) {
        t24 = *(int *)0x8C1D135C;
        *(unsigned int *)0x8C1D135C = (t24 + 0x1);
    } else {
        *(unsigned int *)0x8C1D135C = 0x0;
    }
    t27 = *(int *)0x8C1D135C;
    return t27;
}


int angleLerp(int a4, int a5, float f4)
{
    float u14;

    if (f4 == 0.0f) {
        return a4;
    }
    if (abs((a4 - a5)) >= 0x8000) {
        if (a4 > a5) {
            a5 = (a5 + 0x10000);
        } else {
            a5 = (a5 + -65536);
        }
    }
    u14 = ((1.0f - f4) * (float)a4);
    u14 = u14 + f4 * (float)a5;
    return (int)u14;
}


int evVoiceFadeOut(int a4)
{
    int t0;
    float u1;
    int t2;
    int t3;
    float u4;
    float u5;

    t0 = set_event(0x20, 0x8C0DA7D0);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x14)) = (int)((float)a4 / u1);
    t2 = *(int *)0x8C38BA98;
    t3 = ADXT_GetOutVol(t2);
    *(float *)((t0 + 0x18)) = (float)t3;
    u4 = *(float *)0x8C0DA9A0;
    u5 = *(float *)((t0 + 0x18));
    *(float *)((t0 + 0x1C)) = ((u5 + u4) / (float)a4);
    return 0x1C;
}


float rndRangef(float f4)
{
    float u0;
    int t1;
    float u4;
    float u7;
    int t8;
    float u11;
    float u18;

    u0 = *(float *)0x8C029AE4;
    t1 = *(int *)0x8C294650;
    if (f4 == 0.0f) {
        u4 = (float)t1;
        if ((int)t1 < 0) {
            u4 = ((float)t1 + 4.2949673e+09f);
        }
        u7 = *(float *)0x8C294654;
        u18 = (u4 * u7);
    } else {
        *(unsigned int *)0x8C294650 = ((t1 * 0x5D588B65) + 0x1);
        *(float *)0x8C294654 = f4;
        t8 = *(int *)0x8C294650;
        u11 = (float)t8;
        if ((int)t8 < 0) {
            u11 = ((float)t8 + 4.2949673e+09f);
        }
        u18 = (u11 * f4);
    }
    return (u18 / u0);
}

int matchPropStart(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0xC8ED380 = 0x2008246D;
    t0 = set_event(0x38, 0x8C08873A);
    *(unsigned int *)((t0 + 0x28)) = 0x0;
    *(float *)((t0 + 0x18)) = 36.0f;
    *(float *)((t0 + 0x1C)) = 90.0f;
    *(float *)((t0 + 0x20)) = 153.0f;
    *(unsigned int *)((t0 + 0x24)) = 0x0;
    *(float *)((t0 + 0x14)) = 1.0f;
    *(unsigned short *)((t0 + 0x34)) = 0x0;
    t1 = nlRand();
    t2 = (int)((int)t1 % (int)0x14);
    *(unsigned int *)((t0 + 0x30)) = t2;
    return t2;
}


int entryGetColorId(int a4)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t4;
    int t3;
    int t6;
    int t11;
    int t15;
    int t13;
    int t7;

    t0 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x8));
    t1 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x1C));
    if (t0 != 0) {
        t2 = *(int *)0x8C287ADC;
        if (t2 == 2) {
            return 0x4;
        }
        if (t0 != 0) {
            t9 = (t1 + 0x5);
            if (t1 != -1) {
            } else {
                if (t0 != 0) {
                    t4 = 0x4;
                    if (t1 == -1) {
                    } else {
                        t3 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
                        t4 = t3;
                    }
                    t7 = t4;
                } else {
                    t6 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
                    t7 = t6;
                }
                t9 = t7;
            }
            t13 = t9;
        } else {
            t11 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
            t13 = t11;
        }
        return t13;
    }
    t15 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
    return t15;
}

int stageSegaQuadUVSet(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(float *)(((a4 + 0x88) + 0x0)) = (f4 + (0.600000024f * f6));
    *(float *)((((a4 + 0x88) + 0x4) + 0x0)) = f5;
    t0 = *(int *)((((a4 + 0x88) + 0x4) + 0x0));
    *(unsigned int *)((((a4 + 0x88) + 0x4) + 0x0)) = (t0 | 0x1);
    *(float *)(((((a4 + 0x88) + 0x4) + 0x1C) + 0x0)) = f4;
    *(float *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0)) = f5;
    t1 = *(int *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t1 | 0x1);
    *(float *)(((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x0)) = (f4 + (0.600000024f * f6));
    *(float *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (f5 + (0.600000024f * f6));
    t2 = *(int *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t2 | 0x1);
    *(float *)(((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x0)) = f4;
    *(float *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (f5 + (0.600000024f * f6));
    t3 = *(int *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t3 | 0x1);
    return 0x8C0BA360;
}


int padVibRequest(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t21;
    int t12;

    t0 = *(int *)0x8C29BBB8;
    if (t0 != 0) {
        t1 = *(int *)0x8C29BBBC;
        if (t1 != 0) {
            t2 = *(signed char *)(((((unsigned char)a4 << 2) << 1) + 0x8C2FBBCB));
            if ((unsigned int)t2 <= (unsigned int)((signed char)(a8 >> 0))) {
                t3 = a6;
                if ((int)(unsigned char)a6 < (int)0xF) {
                    t3 = 0xF;
                }
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x0)) = a5;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x1)) = t3;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x2)) = a7;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x3)) = ((signed char)(a8 >> 0));
                *(unsigned int *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x4)) = a9;
            }
            t12 = ((signed char)(a8 >> 0));
        }
        t21 = t12;
    }
    return t21;
}


int cpuSglAimAddSides(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u4;
    float u5;

    u0 = *(float *)0x8C04C3B0;
    u1 = *(float *)((a4 + 0xB00));
    u2 = *(float *)0x8C287B40;
    cpuAimPointSet(a5, 0x3, u2, (u1 * u0));
    u4 = *(float *)((a4 + 0xB00));
    u5 = *(float *)0x8C287B40;
    cpuAimPointSet((a5 + 0x1), 0x3, (-u5), (u4 * u0));
    return ((a5 + 0x1) + 0x1);
}

int hudFadeOutStart(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = set_event2(0x40, 0x8C087EA4);
    *(unsigned int *)((t0 + 0x3C)) = a4;
    *(unsigned int *)((t0 + 0x28)) = a5;
    *(unsigned int *)((t0 + 0x2C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a7;
    *(unsigned int *)((t0 + 0x18)) = 0x0;
    *(unsigned int *)((t0 + 0x1C)) = a8;
    *(float *)((t0 + 0x20)) = 0.0f;
    *(float *)((t0 + 0x24)) = 0.300000012f;
    *(unsigned short *)((t0 + 0x30)) = 0x0;
    *(unsigned int *)((t0 + 0x34)) = 0x0;
    return 0x30;
}

int exprPlayB(int a4, int a5, int a6)
{
    int t0;
    int t1;

    *(unsigned int *)((((((((a5 << 1) + a5) + a6) + 0x41) * 0x270) + 0x8C34B4F4) + 0x268)) = 0x0;
    *(unsigned int *)((((((((a5 << 1) + a5) + a6) + 0x41) * 0x270) + 0x8C34B4F4) + 0x26C)) = 0x0;
    t0 = set_event(0x20, 0x8C0890DC);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    t1 = *(int *)((a4 + 0xC58));
    *(unsigned int *)((t0 + 0x1C)) = t1;
    *(unsigned int *)((t0 + 0x18)) = ((((a5 << 1) + a5) + a6) + 0x41);
    return 0xC58;
}
