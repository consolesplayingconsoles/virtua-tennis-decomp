/* Straight-line functions with calls and guards (batch gen_yv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenFname(int, int);
int ADXT_Stop(int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int FUN_8c0eaf00(int, int, int);
int FUN_8c1e7ef2(int, int, int, int);
int SJMEM_Create(int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int dbgMenuGetValue(int, int);
int evSeRetry(int, int);
int evVoiceFadeOut(int);
int fmMngSctRefresh(int);
int gdFsGetDrvStatG(int, int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqDrvStatG(void);
int gdGdcReqCmd(int, int);
int gdGdcReqDmaTrans(int, int);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int kmChangeDisplayFilterMode(int, int);
int kmFreeTexture(int);
int kmLoadTextureRom(int, int);
int kmProcessVertexRenderState(int);
int kmSetUserClipping(int, int, int, int);
int kmyObFindDevice(int, int, int);
int kmyRegisterBGPlane(int);
int lightSetTarget(int, int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlSbFreeWork(int);
int mwlSbGetDrctLvl(int);
int mwlSbGetFilter(int, int, int, int);
int mwlSbGetFx(int, int, int, int);
int mwlSbGetGain(int);
int mwlSbGetPitch(int, int, int);
int mwlSbGetStreamParam(int, int, int, int);
int mwlSbTrnsDat(int, int, int, int, int);
int ndbClear(void);
int ndbEditDrawMatches(int, int, int, int, int, int, int, int, int);
int ndbEditFields(int);
int ndbEditInput(int, int, int, int, int, int, int, int, int, int, int, int);
int ndbEditShowEntry(int, int, int, int, int, int, int, int, int, int, int, int);
int nlArcCos(float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
int nlCommonTextureClearTextureIndex(int);
int nlCommonTextureGetNextTextureIndex(void);
extern int nlCopyMatrix();
int nlCreateTextureParam(int);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
float nlInvertSqrt(float);
float nlLength(int, int);
int nlLightDiffuse(int, int);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAZ(int, float, float);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlSetWindowSize(float, float, float, float);
int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
int nlSysUseLatency2V(int, int, int, int);
int nlTranslateNV(int);
int nlsndCheckPackIndex(int, int, int);
int nlsndG2DmaGetHandleStatus(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaRequest(int, int, int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndGetPackInfo(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamClose(int);
int nlsndStreamStop(int);
int nlsndSystemControl(int, int, int);
int set_event(int, int);
int set_event2(int, int);
int sprInitPos(int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int syBtFlDeleteSct(int, int, int);
int syCacheOCBI(int, int);
int syCacheOCBP(int, int);
int syCachePurgeAll(int, int, int, int);
int thunk_FUN_8c0f41f0(int);
Stk3 vecMake(float, float, float);
int FUN_8c0f29d0(int a4);
int gdFsDaStopG(void);
int nlSysMetricsGetFrameBuffer(int a4, int a5, int a6);
int FUN_8c0ef360(int a4, int a5, int a6, float f4, float f5);
int FUN_8c200468(int a4);
int FUN_8c0f0720(int a4, int a5, int a6, int a7);
int FUN_8c0f07c0(int a4, int a5, int a6, int a7);
float FUN_8c0f1a10(void);
int gdFsDaGetInfoG(int a4);
int FUN_8c0eef70(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackLoad_Write(int a4);
int nlDispStripFreeTexture(int a4);
int nlDispStripLoadTexture(int a4, int a5);
int FUN_8c0836fc(void);
int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7);
void FUN_8c1e805c(int a4, int a5, int a6, int a7, int a8);
int FUN_8c200c8c(int a4, int a5, int a6, int a7);
int FUN_8c1e6746(int a4, int a5, int a6, int a7);
void syG2DmaEndIntrruptHandler(int a4);
int FUN_8c0f13b0(int a4, int a5);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);
int nlLightAllOff(void);
int FUN_8c1e187a(int a4, int a5, int a6);
int FUN_8c081e9e(void);
int FUN_8c1e5be0(int a4, int a5, int a6, int a7);
int nlReturnLightAll(void);
int FUN_8c0f1930(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_8c1e7fd8(int a4, int a5, int a6);
int nlSetVertexMode(int a4);
int syTmrGenMicroToCount(int a4, int a5);
int FUN_8c2007b0(int a4, int a5, int a6, int a7);
int FUN_8c0e6220(void);
int nlsndPackLoad_Open(int a4, int a5, int a6);
int syTmrGenSetInt(int a4, int a5);
void FUN_8c0d1dda(int a4);
int FUN_8c200b98(int a4, int a5, int a6, int a7);
int FUN_8c0efc70(int a4);
int FUN_8c1e7e96(int a4, int a5, int a6, int a7);
int nlCommonTextureReloadA(int a4, int a5);
int FUN_8c0f2190(int a4, int a5, int a6, int a7);
int FUN_8c09c646(float f4);
int nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8);
int FUN_8c1e67e2(int a4, int a5, int a6);
int nlChangeDisplayFilterMode(int a4);
void FUN_8c1e797e(int a4, int a5, int a6, int a7);
int syTmrGenCountToMicro(int a4, int a5);
int FUN_8c0d0b5c(void);
int FUN_8c1e0eda(int a4, int a5);
int mwAcTrns(int a4, int a5, int a6, int a7, int a8);
int kmiVRightArray(int a4);
int FUN_8c1fabc0(int a4);
int FUN_8c1e0e90(int a4, int a5);
int FUN_8c08aade(Stk5 s);
int mwRnaSetFilter(int a4, int a5, int a6);
int kmiHolizontalStripBufferArray(int a4);
float nlLightGlobalAmbient(int a4);
int nlSpriteLoadTextureGI(int a4, int a5);
void FUN_8c0d2b00(void);
int FUN_8c013ce6(int a4);
int FUN_8c0f2e10(int a4);
int FUN_8c200d7c(int a4, int a5);
int FUN_8c205a7c(int a4, int a5, int a6);
int nlSysMultiPassMode(int a4, int a5, int a6, int a7);
int ADXT_IsIbufSafety(int a4);
void FUN_8c0886fc(int a4);
int FUN_8c08aaa0(Stk4 s);
int FUN_8c1f8ae0(int a4);
void FUN_8c0d2b6a(void);
int FUN_8c0c53f2(int a4, Stk3 s);
int nlLightCutoffCos(int a4, float f4);
int FUN_8c1f8a7e(int a4);
void FUN_8c0d7ea8(void);
int FUN_8c200872(int a4, int a5, int a6, int a7);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int syTmrCountToMicro(int a4);
int fmMngRefresh(int a4, int a5, int a6);
int FUN_8c0f19d0(int a4, int a5);
int FUN_8c0f28c0(int a4, int a5, int a6, int a7);
void ADXT_GetNumSctIbuf(int a4);

int FUN_8c0f29d0(int a4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u7;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    u0 = *(float *)(((a4 + 0x14) + 0x0));
    u1 = *(float *)0x8C458E48;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0x8C450B38);
    nlCalcPoint(((*(int *)(((int)stk + 4))) + 0x8), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 8));
    if (!((*(float *)0x8C458DBC) > (u7 + (u0 * u1)))) {
        if (!((u7 - (u0 * u1)) > (*(float *)0x8C458DC0))) {
            u10 = *(float *)(((int)stk + 12));
            u11 = *(float *)0x8C450B10;
            u12 = (u0 * u1);
            if (u10 > (-(u11 * u12))) {
                u13 = *(float *)(((int)stk + 16));
                if (u13 > (-(u11 * u12))) {
                    u15 = (u11 * u12);
                    u15 = u15 + u7 * (*(float *)0x8C1DCA24);
                    if (u15 > u10) {
                        u17 = (u11 * u12);
                        u17 = u17 + u7 * (*(float *)0x8C1DCA28);
                        if (!(u17 > u13)) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int gdFsDaStopG(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            if (((*(short *)(((*(int *)0x8C20C204) + 0x3A))) != 0) && (t0 = *(int *)0x8C20C204, t1 = *(int *)((t0 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0x8C45A15C;
                *(unsigned short *)((t2 + 0x48)) = 0x8;
            } else {
                *(unsigned short *)((t2 + 0x48)) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t0 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t5 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t3 = t0;
    }
    return t3;
}

int nlSysMetricsGetFrameBuffer(int a4, int a5, int a6)
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

    t0 = *(short *)0x8C458DD8;
    t1 = t0;
    if ((int)(*(int *)0x8C44F654) >= 0) {
        t2 = *(int *)0x8C42448C;
        t3 = *(int *)(((*(int *)((((*(int *)0x8C44F654) << 2) + (*(int *)0x8C424214)))) + 0x1C));
        t4 = (t0 + t0);
        if ((int)t2 > (int)0x3) {
            t5 = ((t0 << 1) + t0);
            if ((int)t2 > (int)0x4) {
                if ((int)t2 > (int)0x5) {
                    for (;;) {
                    }
                }
                t5 = (t0 << 2);
            }
            t4 = t5;
        }
        t0 = (int)((int)t4 / (int)0x4);
        t4 = 0x8C0F7A50;
        t5 = t2;
        t2 = 0x0;
        t6 = a4;
        t7 = (t3 + 0xA5000000);
        for (;;) {
            t3 = *(short *)0x8C458DDA;
            if ((int)t2 >= (int)t3) {
                break;
            }
            t5 = 0x0;
            if ((int)t0 > 0) {
                for (;;) {
                    t8 = *(int *)((t7 + 0x0));
                    t7 = (t7 + 0x4);
                    t4 = t8;
                    t5 = (t5 + 0x1);
                    *(unsigned int *)((t6 + 0x0)) = t4;
                    t6 = (t6 + 0x4);
                    if ((int)t5 >= (int)t0) {
                        break;
                    }
                }
            }
            t2 = (t2 + 0x1);
        }
        t1 = t3;
    }
    return t1;
}

int FUN_8c0ef360(int a4, int a5, int a6, float f4, float f5)
{
    int stk[11];
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register float u15;
    register float u16;
    register float t17;

    if ((unsigned short)a6 != 0) {
        nlRotateAZ((unsigned short)a6, f4, f5);
    }
    *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    u10 = *(float *)((a5 + 0x8));
    u11 = *(float *)((a4 + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = (u10 - u11);
    u12 = *(float *)((((int)stk + 4) + 0x0));
    u13 = ((u10 - u11) * (u10 - u11));
    u13 = u13 + u12 * u12;
    t14 = nlInvertSqrt(u13);
    u15 = *(float *)((((int)stk + 4) + 0x4));
    u16 = u13;
    u16 = u16 + u15 * u15;
    t17 = nlInvertSqrt(u16);
    nlRotateXSC((-((*(float *)((((int)stk + 4) + 0x4))) * t17)), (t17 / t14));
    nlRotateYSC(((*(float *)((((int)stk + 4) + 0x0))) * t14), (-((*(float *)((((int)stk + 4) + 0x8))) * t14)));
    return (nlTranslateNV(a4));
}

int FUN_8c200468(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if ((*(int *)((a4 + 0x18))) != 0) {
            t0 = (nlsndStreamStop((*(short *)((a4 + 0x6)))));
        }
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t1 = (nlsndG2DmaHandleClose((*(int *)((((t0 << 2) + (a4 + 0x2C)) + 0x0)))));
            if ((int)t1 < 0) {
                t1 = (mwRnaErrCallFunc(0x8C20B2E0));
            }
            t0 = (t0 + 0x1);
        }
        t0 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t0 = (nlsndG2DmaHandleClose((*(int *)((((t1 << 2) + (a4 + 0x34)) + 0x0)))));
            if ((int)t0 < 0) {
                t0 = (mwRnaErrCallFunc(0x8C20B2E0));
            }
            t1 = (t1 + 0x1);
        }
        nlsndStreamClose((*(short *)((a4 + 0x6))));
        mwlSbFreeWork((*(int *)((a4 + 0x1C))));
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        memset(a4, 0x0, 0x68);
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_8c0f0720(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct((((int)stk + 4) + 0xC), ((int)stk + 4), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 0x1;
}

int FUN_8c0f07c0(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct(((int)stk + 4), (((int)stk + 4) + 0xC), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 0x1;
}

float FUN_8c0f1a10(void)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u17[16];
    float u18[4];
    float u19[16];
    float u20[16];
    float u21[4];
    float u22[16];
    float u23[4];
    float u24[16];
    float u25[4];
    float u26[16];
    float u43[16];
    float u44[4];
    float u45[16];
    float u46[16];
    float u47[4];
    float u48[16];
    float u49[4];
    float u50[16];
    float u51[4];
    float u52[16];

    t0 = *(int *)0x8C450888;
    u0 = *(float *)((t0 + 0x0));
    u1 = *(float *)(((t0 + 0x0) + 4));
    u2 = *(float *)(((t0 + 0x8) + 0x0));
    u3 = *(float *)((((t0 + 0x8) + 0x0) + 4));
    u4 = *(float *)((((t0 + 0x8) + 0x8) + 0x0));
    u5 = *(float *)(((((t0 + 0x8) + 0x8) + 0x0) + 4));
    u6 = *(float *)(((((t0 + 0x8) + 0x8) + 0x8) + 0x0));
    u7 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u9 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u11 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_prefetch((void *)0x8C450A90);
    u17[0] = u1;
    u17[1] = u0;
    u17[2] = u3;
    u17[3] = u2;
    u17[4] = u5;
    u17[5] = u4;
    u17[6] = u7;
    u17[7] = u6;
    u17[8] = u9;
    u17[9] = u8;
    u17[10] = u11;
    u17[11] = u10;
    u17[12] = u13;
    u17[13] = u12;
    u17[14] = u15;
    u17[15] = u14;
    _builtin_st_ext((float (*)[4])u19);
    u18[0] = u19[0];
    u18[1] = u19[1];
    u18[2] = u19[2];
    u18[3] = u19[3];
    _builtin_ld_ext((float (*)[4])u17);
    _builtin_ftrv(u18, u18);
    u20[0] = u1;
    u20[1] = u0;
    u20[2] = u3;
    u20[3] = u2;
    u20[4] = u5;
    u20[5] = u4;
    u20[6] = u7;
    u20[7] = u6;
    u20[8] = u9;
    u20[9] = u8;
    u20[10] = u11;
    u20[11] = u10;
    u20[12] = u13;
    u20[13] = u12;
    u20[14] = u15;
    u20[15] = u14;
    u21[0] = u19[4];
    u21[1] = u19[5];
    u21[2] = u19[6];
    u21[3] = u19[7];
    _builtin_ld_ext((float (*)[4])u20);
    _builtin_ftrv(u21, u21);
    u22[0] = u1;
    u22[1] = u0;
    u22[2] = u3;
    u22[3] = u2;
    u22[4] = u5;
    u22[5] = u4;
    u22[6] = u7;
    u22[7] = u6;
    u22[8] = u9;
    u22[9] = u8;
    u22[10] = u11;
    u22[11] = u10;
    u22[12] = u13;
    u22[13] = u12;
    u22[14] = u15;
    u22[15] = u14;
    u23[0] = u19[8];
    u23[1] = u19[9];
    u23[2] = u19[10];
    u23[3] = u19[11];
    _builtin_ld_ext((float (*)[4])u22);
    _builtin_ftrv(u23, u23);
    u24[0] = u1;
    u24[1] = u0;
    u24[2] = u3;
    u24[3] = u2;
    u24[4] = u5;
    u24[5] = u4;
    u24[6] = u7;
    u24[7] = u6;
    u24[8] = u9;
    u24[9] = u8;
    u24[10] = u11;
    u24[11] = u10;
    u24[12] = u13;
    u24[13] = u12;
    u24[14] = u15;
    u24[15] = u14;
    u25[0] = u19[12];
    u25[1] = u19[13];
    u25[2] = u19[14];
    u25[3] = u19[15];
    _builtin_ld_ext((float (*)[4])u24);
    _builtin_ftrv(u25, u25);
    _builtin_prefetch((void *)0x8C450AB0);
    _builtin_st_ext((float (*)[4])u26);
    u26[0] = u18[0];
    u26[1] = u18[1];
    u26[2] = u18[2];
    u26[3] = u18[3];
    u26[4] = u21[0];
    u26[5] = u21[1];
    u26[6] = u21[2];
    u26[7] = u21[3];
    u26[8] = u23[0];
    u26[9] = u23[1];
    u26[10] = u23[2];
    u26[11] = u23[3];
    u26[12] = u25[0];
    u26[13] = u25[1];
    u26[14] = u25[2];
    u26[15] = u25[3];
    _builtin_ld_ext((float (*)[4])u26);
    u0 = *(float *)0x8C450A90;
    u1 = *(float *)0x8C450A94;
    u2 = *(float *)0x8C450A98;
    u3 = *(float *)0x8C450A9C;
    u4 = *(float *)0x8C450AA0;
    u5 = *(float *)0x8C450AA4;
    u6 = *(float *)0x8C450AA8;
    u7 = *(float *)0x8C450AAC;
    u8 = *(float *)0x8C450AB0;
    u9 = *(float *)0x8C450AB4;
    u10 = *(float *)0x8C450AB8;
    u11 = *(float *)0x8C450ABC;
    u12 = *(float *)0x8C450AC0;
    u13 = *(float *)0x8C450AC4;
    u14 = *(float *)0x8C450AC8;
    u15 = *(float *)0x8C450ACC;
    u43[0] = u0;
    u43[1] = u1;
    u43[2] = u2;
    u43[3] = u3;
    u43[4] = u4;
    u43[5] = u5;
    u43[6] = u6;
    u43[7] = u7;
    u43[8] = u8;
    u43[9] = u9;
    u43[10] = u10;
    u43[11] = u11;
    u43[12] = u12;
    u43[13] = u13;
    u43[14] = u14;
    u43[15] = u15;
    _builtin_st_ext((float (*)[4])u45);
    u44[0] = u45[0];
    u44[1] = u45[1];
    u44[2] = u45[2];
    u44[3] = u45[3];
    _builtin_ld_ext((float (*)[4])u43);
    _builtin_ftrv(u44, u44);
    u46[0] = u0;
    u46[1] = u1;
    u46[2] = u2;
    u46[3] = u3;
    u46[4] = u4;
    u46[5] = u5;
    u46[6] = u6;
    u46[7] = u7;
    u46[8] = u8;
    u46[9] = u9;
    u46[10] = u10;
    u46[11] = u11;
    u46[12] = u12;
    u46[13] = u13;
    u46[14] = u14;
    u46[15] = u15;
    u47[0] = u45[4];
    u47[1] = u45[5];
    u47[2] = u45[6];
    u47[3] = u45[7];
    _builtin_ld_ext((float (*)[4])u46);
    _builtin_ftrv(u47, u47);
    u48[0] = u0;
    u48[1] = u1;
    u48[2] = u2;
    u48[3] = u3;
    u48[4] = u4;
    u48[5] = u5;
    u48[6] = u6;
    u48[7] = u7;
    u48[8] = u8;
    u48[9] = u9;
    u48[10] = u10;
    u48[11] = u11;
    u48[12] = u12;
    u48[13] = u13;
    u48[14] = u14;
    u48[15] = u15;
    u49[0] = u45[8];
    u49[1] = u45[9];
    u49[2] = u45[10];
    u49[3] = u45[11];
    _builtin_ld_ext((float (*)[4])u48);
    _builtin_ftrv(u49, u49);
    u50[0] = u0;
    u50[1] = u1;
    u50[2] = u2;
    u50[3] = u3;
    u50[4] = u4;
    u50[5] = u5;
    u50[6] = u6;
    u50[7] = u7;
    u50[8] = u8;
    u50[9] = u9;
    u50[10] = u10;
    u50[11] = u11;
    u50[12] = u12;
    u50[13] = u13;
    u50[14] = u14;
    u50[15] = u15;
    u51[0] = u45[12];
    u51[1] = u45[13];
    u51[2] = u45[14];
    u51[3] = u45[15];
    _builtin_ld_ext((float (*)[4])u50);
    _builtin_ftrv(u51, u51);
    _builtin_st_ext((float (*)[4])u52);
    u52[0] = u44[0];
    u52[1] = u44[1];
    u52[2] = u44[2];
    u52[3] = u44[3];
    u52[4] = u47[0];
    u52[5] = u47[1];
    u52[6] = u47[2];
    u52[7] = u47[3];
    u52[8] = u49[0];
    u52[9] = u49[1];
    u52[10] = u49[2];
    u52[11] = u49[3];
    u52[12] = u51[0];
    u52[13] = u51[1];
    u52[14] = u51[2];
    u52[15] = u51[3];
    _builtin_ld_ext((float (*)[4])u52);
    return u0;
}

int gdFsDaGetInfoG(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x3C)))))(0x0, 0x64, ((*(int *)0x8C20C204) + 0x40));
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            *(unsigned short *)((t0 + 0x50)) = 0x4;
            *(unsigned short *)((t0 + 0x48)) = 0x7;
            *(unsigned int *)((t0 + 0x8)) = a4;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_8c0eef70(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[22];
    register int t0;
    register int t2;
    register int t4;
    register int t14;

    *(unsigned int *)(((int)stk + 8)) = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        nlGetMatrix((((int)stk + 4) + 0x8));
        t4 = t0;
    } else {
        t2 = ((int (*)(int, int, float, float, float, float, float, float))(nlCopyMatrix))((((int)stk + 4) + 0x8), a4, f4, f5, f6, f7, f8, f9);
        t4 = a4;
    }
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct(((*(int *)(((int)stk + 4))) + 0x10), (t4 + 0x20), (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct((t4 + 0x20), t4, (((int)stk + 4) + 0x18));
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct((*(int *)(((int)stk + 4))), (t4 + 0x10), (((int)stk + 4) + 0x28));
    if ((*(int *)(((int)stk + 8))) == 0) {
        t14 = (nlLoadMatrix((((int)stk + 4) + 0x8)));
    } else {
        t14 = (((int (*)(int, int, int, int, int))(nlCopyMatrix))(t4, (((int)stk + 4) + 0x8), 0x0, 0x0, *(int *)((int)stk + 4)));
    }
    return t14;
}

int nlsndPackLoad_Write(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0x8C454CE8;
    t1 = 0xFFFFFFFF;
    if ((*(int *)((t0 + 0x0))) != 0x1004) {
    } else {
        if ((unsigned int)(*(int *)((t0 + 0xC))) < (unsigned int)((*(int *)((t0 + 0x4))) << 2)) {
            t2 = ((unsigned int)(*(int *)((t0 + 0xC))) >> 2);
        } else {
            t2 = (*(int *)((t0 + 0x4)));
        }
        nlsndG2WriteN(a4, (*(int *)((t0 + 0x18))), t2);
        t0 = *(int *)0x8C454CE8;
        t3 = *(int *)((t0 + 0xC));
        *(unsigned int *)((t0 + 0xC)) = (t3 - (t2 << 2));
        if ((t3 - (t2 << 2)) == 0) {
            nlsndG2Write(0x1, 0xA08000B0);
            t0 = *(int *)0x8C454CE8;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            t0 = 0x0;
        } else {
            t3 = *(int *)0x8C454CE8;
            *(unsigned int *)((t3 + 0x18)) = ((*(int *)((t3 + 0x18))) + (t2 << 2));
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}

int nlDispStripFreeTexture(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)(*(int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x0))) > (unsigned int)0x0) {
        t0 = *(int *)0x8C4241C0;
        *(unsigned int *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = ((*(int *)(((t0 + ((a4 << 2) << 1)) + 0x0))) - 1);
        t1 = (t0 + ((a4 << 2) << 1));
        if ((*(int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x0))) == 0) {
            t0 = *(int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x4));
            t2 = *(int *)0x8C458608;
            if ((*(int *)((((t0 * 0x3C) + t2) + 0x28))) == 0) {
                t3 = kmFreeTexture(((t0 * 0x3C) + t2));
                if (t3 != 0) {
                    *(unsigned int *)0x8C454F34 = 0x2;
                    for (;;) {
                    }
                }
            }
            *(unsigned int *)((((t0 * 0x3C) + t2) + 0x2C)) = 0x0;
            *(unsigned int *)((((t0 * 0x3C) + t2) + 0x38)) = 0xFFFFFFFF;
            t2 = nlCommonTextureClearTextureIndex(t0);
            *(unsigned int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int nlDispStripLoadTexture(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x0))) == 0) {
        *(unsigned int *)(((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x4) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    }
    t0 = *(int *)0x8C4241C0;
    *(unsigned int *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = ((*(int *)(((t0 + ((a4 << 2) << 1)) + 0x0))) + 0x1);
    t0 = *(int *)((((*(int *)0x8C4241C0) + ((a4 << 2) << 1)) + 0x4));
    t1 = *(int *)0x8C458608;
    if ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) == 0) {
        t2 = nlLoadTextureMem(a5, t0, (*(int *)((a5 + 0x8))));
        if (t2 != 0) {
            *(unsigned int *)0x8C454F34 = 0x1;
            t2 = 0x1;
        } else {
            nlCreateTextureParam(t0);
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x38)) = t0;
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x2C)) = ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) + 0x1);
            t2 = 0x0;
        }
        t3 = t2;
    } else {
        *(unsigned int *)((((t0 * 0x3C) + t1) + 0x2C)) = ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) + 0x1);
        t3 = 0x0;
    }
    return t3;
}

int FUN_8c0836fc(void)
{
    int stk[12];
    register int t0;

    *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
    *(Stk3 *)((((int)stk + 12) + 0xC)) = vecMake(-50.0f, 350.0f, 0.25f);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
    *(Stk3 *)((((int)stk + 8) + 0x4)) = vecMake(900.0f, 300.0f, 0.200000003f);
    t0 = set_event2(0xCC, 0x8C083654);
    *(unsigned int *)((t0 + 0xC8)) = 0x0;
    *(float *)((t0 + 0xBC)) = -50.0f;
    *(float *)((t0 + 0xC0)) = 900.0f;
    *(float *)((t0 + 0xB4)) = (((-(*(float *)(((int)stk + 24)))) + 436.0f) / 6.0f);
    *(float *)((t0 + 0xB8)) = (((-(*(float *)(((int)stk + 12)))) + 441.0f) / 6.0f);
    *(float *)((t0 + 0xC4)) = 1.0f;
    return 0xC4;
}

int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t24;
    register int t1;
    register int t16;
    register int t3;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t24 = 0xFFFFFFFA;
    if (a7 == 0) {
    } else {
        t1 = nlsndCheckPackIndex(a4, (*(int *)(((int)stk + 8))), a7);
        t16 = t1;
        if (t1 != 0) {
        } else {
            t3 = *(int *)0x8C454CE8;
            t4 = *(int *)0x8C454CE8;
            t6 = nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x4))), a7, ((int)stk + 4));
            *(unsigned int *)(((t3 + 0x1C) + 0x0)) = t6;
            *(unsigned int *)(((t4 + 0x18) + 0x0)) = t6;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x14)) = a4;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x8001;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x4)) = (*(int *)(((int)stk + 12)));
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x8)) = a7;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0xC)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x10)) = (*(int *)(((int)stk + 4)));
            t16 = 0x0;
        }
        t24 = t16;
    }
    return t24;
}

void FUN_8c1e805c(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = 0x2000;
    for (;;) {
        if ((unsigned int)0x4000 <= (unsigned int)t0) {
            break;
        }
        t1 = t0;
        t1 = (t1 | 0xF4000000);
        t1 = (*(int *)((t1 + 0x0)));
        t1 = (t1 & 0x1FFFFC00);
        t1 = (t1 | t0);
        if (((unsigned int)(a4 & (~(0x80000000 & a4))) <= (unsigned int)t1) && ((unsigned int)t1 <= (unsigned int)a5)) {
            t1 = (t1 | (~(~(0x80000000 & a4))));
            iaOcbwb((void *)t1);
        }
        if ((a6 != 0) && (0x2FE0 == t0)) {
            break;
        }
        t0 = (t0 + 0x20);
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)((short)(a8 >> 0)) & 0xF) << 2) << 2) >> 4));
}

int FUN_8c200c8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    t1 = (a6 * t0);
    if ((int)(a6 * t0) < 0) {
        t1 = ((a6 * t0) + 0x7);
    }
    t0 = nlsndG2DmaRequest((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((((t1 >> 1) >> 1) >> 1) + (*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0)))), 0x20);
    if ((int)t0 < 0) {
        if (t0 == -1) {
            return (mwRnaErrCallFunc(0x8C20B354));
        }
        if (t0 == -2) {
            return (mwRnaErrCallFunc(0x8C20B384));
        }
        if (t0 == -3) {
            return (mwRnaErrCallFunc(0x8C20B3C4));
        }
        t1 = t0;
        if (t0 == -4) {
            t1 = (mwRnaErrCallFunc(0x8C20B404));
        }
        return t1;
    }
    return t0;
}

int FUN_8c1e6746(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R2;
    register int R3;
    int R6;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    R6 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = v0_1;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = 0x0;
    R13 = (R6);
    v0_0 = ((((int)stk + 4) + 0x4));
    v0_2 = (((((int)stk + 4) + 0x4) + 0x8));
    R6 = ((0x1FFFFFFF & R6));
    if ((v0_3 != 1)) goto L_8C1E6772;
    v0_1 = (0x11);
    L_8C1E677C:;
    *(unsigned int *)((v0_2 + 0x0)) = R6;
    v0_1 = gdGdcReqCmd(v0_1, v0_0);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_8C1E67BA;
    if (((((int)R13 >> 28) & 0xE) == 10)) goto L_8C1E67BA;
    v0_2 = (((((*(int *)(((int)stk + 4))) << 8) << 2) << 1));
    if (((0x1F & R13) != 0)) goto L_8C1E67B4;
    syCacheOCBI(R13, v0_2);
    L_8C1E67BA:;
    v0_0 = (v0_0);
    L_8C1E67BC:;
    return v0_0;
    L_8C1E67B4:;
    syCacheOCBP(R13, v0_2);
    goto L_8C1E67BA;
    L_8C1E6772:;
    if ((v0_3 != 0)) goto L_8C1E6780;
    v0_1 = (0x10);
    R6 = ((R6 | 0xA0000000));
    goto L_8C1E677C;
    L_8C1E6780:;
    v0_0 = (0xFFFFFFEE);
    goto L_8C1E67BC;
}

void syG2DmaEndIntrruptHandler(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)((((*(int *)(((*(int *)0x8C20CA24) + 0x0))) + ((((*(int *)((a4 + 0x0))) << 2) << 2) << 1)) + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x1;
    t1 = *(int *)0x8C20CA24;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t2 << 2) + (0xEC + t1)) + 0x0)) = ((*(int *)((((t2 << 2) + (0xEC + t1)) + 0x0))) + 0x1);
    t1 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xA05F6900 = ((int)0x1 << (int)(t1 + 0xF));
    *(volatile int *)0xA05F6900;
    *(volatile int *)0xA05F6900;
    if ((*(int *)((a4 + 0x1C))) != 0) {
        t2 = ((int (*)(int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), ((int)0x1 << (int)(t1 + 0xF)), 0x8C20CA24);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_8c0f13b0(int a4, int a5)
{
    int stk[8];
    register float u3;
    register float u6;
    register float u11;
    register float u16;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(0x8C450A50);
    nlCalcPoint4((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8));
    u3 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) * (1.0f / u3));
    u6 = *(float *)0x8C0F14D4;
    u11 = (*(float *)0x8C1DCA30);
    u11 = u11 + u6 * (((*(float *)(((int)stk + 12))) + 1.0f) * (*(float *)0x8C1DCA24));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u11;
    u16 = (*(float *)0x8C1DCA2C);
    u16 = u16 + u6 * (((-(*(float *)(((((int)stk + 4) + 0xC) + 0x0)))) + 1.0f) * (*(float *)0x8C1DCA28));
    *(float *)((0x4 + (*(int *)(((int)stk + 4))))) = u16;
    return (nlPopMatrix(0x1));
}

int syTmrInt1SetEx(int a4, int a5, int a6, int a7)
{
    register int t19;

    t19 = 0xFFFFFFFF;
    if (((*(signed char *)0xFFD80004) & 2) == 0) {
        *(unsigned char *)0xFFD80000 = 0x0;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
        *(unsigned short *)0xFFD8001C = a7;
        if (a5 != 0) {
            *(unsigned int *)((((int)_builtin_get_vbr()) + 0x244)) = 0x8C1E90CC;
            *(unsigned int *)0x8C461B7C = a5;
            *(unsigned int *)0x8C461B80 = a6;
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) | 0x20);
            *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFF0FF) | 0xF00);
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
        }
        *(unsigned int *)0xFFD80014 = a4;
        *(unsigned int *)0xFFD80018 = a4;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) | 0x2);
        if (a5 == 0) {
            for (;;) {
                if (((*(short *)0xFFD8001C) & 0x100) != 0) {
                    break;
                }
            }
            *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
        }
        t19 = 0x0;
    }
    return t19;
}

int nlLightAllOff(void)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0x8C450718 + (t0 << 2))) = (*(short *)((((t0 * 0xB0) + 0x8C44FC08) + 0x0)));
        *(float *)(((((t0 << 2) << 2) + 0x8C450758) + 0x0)) = (*(float *)((((t0 * 0xB0) + 0x8C44FC08) + 0x14)));
        *(float *)(((((t0 << 2) << 2) + 0x8C450758) + 0x4)) = (*(float *)((((t0 * 0xB0) + 0x8C44FC08) + 0x18)));
        *(float *)(((((t0 << 2) << 2) + 0x8C450758) + 0x8)) = (*(float *)((((t0 * 0xB0) + 0x8C44FC08) + 0x1C)));
        *(float *)(((((t0 << 2) << 2) + 0x8C450758) + 0xC)) = (*(float *)((((t0 * 0xB0) + 0x8C44FC08) + 0x20)));
        t6 = nlLightDiffuse(t0, 0x8C1DC99C);
        t7 = ((t0 * 0xB0) + 0x8C44FC08);
        t0 = (t0 + 0x1);
        *(unsigned short *)((t7 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    *(unsigned int *)0x8C1DC8D8 = 0x0;
    return t6;
}

int FUN_8c1e187a(int a4, int a5, int a6)
{
    int stk[17];
    register int t0;
    register int t1;

    *(unsigned int *)(((int)stk + 60)) = a6;
    if ((int)a5 >= (int)0x2) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
            *(int *)((int)stk + 24) = (((int)stk + 28) + 0x1C);
            *(int *)((int)stk + 20) = (((int)stk + 24) + 0x1C);
            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
            *(int *)((int)stk + 12) = (((int)stk + 16) + 0x1C);
            *(int *)((int)stk + 8) = (((int)stk + 12) + 0x1C);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x1C);
            t1 = ADX_DecodeInfo(a4, a5, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 12) + 0x1C), (((int)stk + 16) + 0x1C), (((int)stk + 20) + 0x1C), (((int)stk + 24) + 0x1C), (((int)stk + 28) + 0x1C));
            if ((int)t1 < 0) {
                return 0x0;
            }
            *(unsigned int *)(((*(int *)(((int)stk + 60))) + 0x0)) = (*(short *)(((int)stk + 28)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_8c081e9e(void)
{
    int stk[13];
    register int t11;
    register int t14;
    register int t17;
    register int t20;
    register int t23;

    if (((*(int *)(((*(int *)0x8C29B8A0) + 0x10))) & 2) != 0) {
        ndbClear();
    }
    ndbEditInput(0x8C1815F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    ndbEditFields(0x8C1815F4);
    ndbEditShowEntry(0x8C1815F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    ndbEditDrawMatches(0x8C1815F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16));
    nlLocate(0x32, 0xF);
    t11 = (*(int *)0x8C301944);
    *(int *)((int)stk + 40) = t11;
    *(int *)((int)stk + 36) = 0x8C10DA14;
    nlPrintf(0x8C10DA14, t11);
    t14 = (*(int *)0x8C301948);
    *(int *)((int)stk + 32) = t14;
    *(int *)((int)stk + 28) = 0x8C10DA24;
    nlPrintf(0x8C10DA24, t14);
    t17 = (*(int *)0x8C301938);
    *(int *)((int)stk + 24) = t17;
    *(int *)((int)stk + 20) = 0x8C10DA34;
    nlPrintf(0x8C10DA34, t17);
    t20 = (*(int *)0x8C30194C);
    *(int *)((int)stk + 16) = t20;
    *(int *)((int)stk + 12) = 0x8C10DA48;
    nlPrintf(0x8C10DA48, t20);
    t23 = (*(int *)0x8C301950);
    *(int *)((int)stk + 8) = t23;
    *(int *)((int)stk + 4) = 0x8C10DA58;
    return (nlPrintf(0x8C10DA58, t23));
}

int FUN_8c1e5be0(int a4, int a5, int a6, int a7)
{
    int stk[31];
    register int t5;
    register int t6;
    register int t13;
    register int t15;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        t13 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t15 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t15 + 0x14)) = (*(int *)((t13 + 0x10)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int nlReturnLightAll(void)
{
    register int t1;
    register int t2;
    register int t8;
    register int t0;

    *(unsigned int *)0x8C1DC8D8 = 0x0;
    t1 = 0x0;
    t2 = 0x1;
    for (;;) {
        *(float *)((((t1 * 0xB0) + 0x8C44FC08) + 0x14)) = (*(float *)(((((t1 << 2) << 2) + 0x8C450758) + 0x0)));
        *(float *)((((t1 * 0xB0) + 0x8C44FC08) + 0x18)) = (*(float *)(((((t1 << 2) << 2) + 0x8C450758) + 0x4)));
        *(float *)((((t1 * 0xB0) + 0x8C44FC08) + 0x1C)) = (*(float *)(((((t1 << 2) << 2) + 0x8C450758) + 0x8)));
        *(float *)((((t1 * 0xB0) + 0x8C44FC08) + 0x20)) = (*(float *)(((((t1 << 2) << 2) + 0x8C450758) + 0xC)));
        *(unsigned short *)((((t1 * 0xB0) + 0x8C44FC08) + 0x0)) = (*(int *)((0x8C450718 + (t1 << 2))));
        t8 = *(short *)((((t1 * 0xB0) + 0x8C44FC08) + 0x0));
        t1 = (t1 + 0x1);
        if (t8 == 1) {
            t0 = (*(int *)0x8C1DC8D8);
            t0 = (t0 | t2);
            *(unsigned int *)0x8C1DC8D8 = t0;
        }
        t2 = (t2 << 1);
        if ((int)t1 >= (int)0x10) {
            break;
        }
    }
    return t8;
}

int FUN_8c0f1930(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int stk[15];
    register float u6;

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 20)) = f6;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlPushMatrix(0x8C450A90);
    nlMultiMatrix(0x8C450A50);
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 20)));
    nlCalcPoint4((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x18));
    u6 = *(float *)(((int)stk + 40));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = ((*(float *)(((int)stk + 28))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = ((*(float *)(((int)stk + 32))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = (1.0f / u6);
    return (nlPopMatrix(0x1));
}

int FUN_8c1e7fd8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;

    t0 = 0x2000;
    for (;;) {
        if ((unsigned int)0x4000 <= (unsigned int)t0) {
            break;
        }
        t1 = t0;
        t1 = (t1 | 0xF4000000);
        t1 = (*(int *)((t1 + 0x0)));
        t1 = (t1 & 0x1FFFFC00);
        t2 = t0;
        t2 = (t2 & 0x1FFF);
        t1 = (t1 | t2);
        if (((unsigned int)(a4 & (~(0x80000000 & a4))) <= (unsigned int)t1) && ((unsigned int)t1 <= (unsigned int)a5)) {
            t1 = (t1 | (~(~(0x80000000 & a4))));
            iaOcbwb((void *)t1);
        }
        if ((a6 != 0) && (0x2FE0 == t0)) {
            t5 = a5; t6 = a6; break;
        }
        t0 = (t0 + 0x20);
    }
    return ((int (*)(int, int, int, int))(0x8C1E80C8))((a4 & (~(0x80000000 & a4))), t5, t6, (~(~(0x80000000 & a4))));
}

int nlSetVertexMode(int a4)
{
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x8)) = (*(int *)((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0xC)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x20)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x8) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x44)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0xC) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x40)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x10) + 0x0)));
    *(unsigned int *)0x8C424478 = (*(int *)((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x0)));
    *(unsigned int *)0x8C42447C = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x4) + 0x0)));
    *(unsigned int *)0x8C424480 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x8) + 0x0)));
    *(unsigned int *)0x8C424484 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0xC) + 0x0)));
    *(unsigned int *)0x8C424488 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0x8C127A5C) + 0x10) + 0x0)));
    return kmProcessVertexRenderState((*(int *)0x8C458C10));
}

int syTmrGenMicroToCount(int a4, int a5)
{
    register int t6;
    register int t4;
    register int t2;
    register int t0;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t4 = 0x20;
        if ((unsigned short)a5 != 1) {
            t2 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t2 = t0;
            }
            t4 = t2;
        }
        t6 = t4;
    }
    return ((((int)((unsigned int)a4 / (unsigned int)t6)) * 0x64) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)t6)) * 0x64) / (unsigned int)t6)));
}

int FUN_8c2007b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t14;
    register int t8;

    t0 = mwlSbGetStreamParam(a4, 0x5, 0x0, a7);
    t14 = 0xFFFFFC41;
    if ((int)t0 <= 0) {
    } else {
        t8 = 0x0;
        if ((int)t0 >= (int)0x7F) {
        } else {
            t8 = ((int)((int)(0x80 - ((((int)((unsigned int)((int)((unsigned int)(0x7F - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x7F - t0))) ? 1u : 0u))) >> 1) * 0x3BF)) / (int)0xFF));
        }
        t14 = t8;
    }
    *(unsigned int *)((a4 + 0x3C)) = t14;
    return t14;
}

int FUN_8c0e6220(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t3 = *(int *)0x8C29B898;
    t4 = 0x0;
    if (((((*(int *)((t3 + 0x10))) & 0x8) == 0) && (t0 = *(int *)0x8C29B89C, t1 = *(int *)((t0 + 0x10)), (t1 & 0x8) == 0)) || (t2 = *(int *)((t3 + 0x8)), (t2 & 5) == 0)) {
    } else {
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C1D8278 = 0x1;
        nlsndSystemControl(0x1, 0x1300A0, 0x0);
        nlsndSystemControl(0x5, 0x1300A0, 0x0);
        nlsndSystemControl(0x7, 0x1300A0, 0x0);
        t4 = 0x1;
    }
    t0 = 0x0;
    if (t4 != 0) {
        t0 = 0x1;
    }
    return t0;
}

int nlsndPackLoad_Open(int a4, int a5, int a6)
{
    int stk[8];
    register int t1;
    register int t13;
    register int t3;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = nlsndCheckPackIndex(a4, (*(int *)(((int)stk + 8))), 0x0);
    t13 = t1;
    if (t1 != 0) {
    } else {
        t3 = *(int *)((a4 + 0x8));
        *(unsigned int *)((((*(int *)0x8C454CE8) + 0x18) + 0x0)) = (nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x4))), t3, ((int)stk + 4)));
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x1001;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x4)) = (*(int *)(((int)stk + 12)));
        t10 = *(int *)0x8C454CE8;
        *(unsigned int *)((t10 + 0xC)) = t3;
        *(unsigned int *)((t10 + 0x8)) = t3;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x10)) = (*(int *)(((int)stk + 4)));
        t13 = 0x0;
    }
    return t13;
}

int syTmrGenSetInt(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t5;
    register int t17;
    register int t15;

    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xFFD80004);
    t1 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t1 & 0xFB);
    t6 = (t1 & 0xFB);
    if (a4 != 0) {
        *(unsigned int *)((((int)_builtin_get_vbr()) + 0x248)) = 0x8C1E90F0;
        *(unsigned int *)0x8C461B84 = a4;
        *(unsigned int *)0x8C461B88 = a5;
        *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) | 0x20);
        *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFFF0F) | 0xF0);
        t5 = *(short *)0xFFD80028;
        *(unsigned short *)0xFFD80028 = (t5 & 0xFFFFFEFF);
        t6 = (t5 & 0xFFFFFEFF);
    }
    *(unsigned char *)0xFFD80004 = (*(signed char *)(((int)stk + 4)));
    t17 = t6;
    if (a4 == 0) {
        *(unsigned char *)0xFFD80000 = 0x0;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) | 0x4);
        for (;;) {
            if (((*(short *)0xFFD80028) & 0x100) != 0) {
                break;
            }
        }
        t15 = *(signed char *)0xFFD80004;
        *(unsigned char *)0xFFD80004 = (t15 & 0xFB);
        *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFEFF);
        t17 = (t15 & 0xFB);
    }
    return t17;
}

void FUN_8c0d1dda(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if (((*(int *)0x8C38BA70) != 0) && (t0 = *(int *)0x8C38BA74, t0 != 0)) {
        u0 = *(float *)((a4 + 0xAF0));
        t0 = 0x0;
        if ((*(int *)0x8C402C0C) != ((u0 > 0.0f) - (0.0f > u0))) {
            t0 = 0x1;
        }
        if ((*(int *)((a4 + 0x20))) == ((*(int *)0x8C2873D0) + 0x3BD3C)) {
            t1 = *(int *)0x8C402C04;
            if (t0 == 0) {
                t0 = (*(int *)((((t1 * 0x54) + 0x8C1D2B2C) + 0x4)));
            } else {
                t0 = (*(int *)((((t1 * 0x54) + 0x8C1D2B2C) + 0x24)));
            }
            nlsndSeqRequest(t0);
    return;
        }
        return;
    }
}

int FUN_8c200b98(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a5 == 0) {
        return mwlSbGetFx(a4, a6, a7, a7);
    }
    if (a5 == 1) {
        return mwlSbGetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        t0 = mwlSbGetGain(a4);
        *(unsigned int *)((a6 + 0x0)) = t0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        return t0;
    }
    if (a5 == 3) {
        return mwlSbGetFilter(a4, a6, a7, a7);
    }
    if (a5 == 4) {
        t0 = mwlSbGetDrctLvl(a4);
        *(unsigned int *)((a6 + 0x0)) = t0;
        t1 = t0;
    } else {
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        t1 = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    return t1;
}

int FUN_8c0efc70(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t6;

    t0 = *(short *)0x8C45085C;
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = *(short *)0x8C45085E;
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = *(int *)0x8C450860;
    *(unsigned short *)0x8C45085C = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0x8C450864 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}

int FUN_8c1e7e96(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a5 == 0) {
        return ((int (*)(int, int))(0x8C1E80DC))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        return FUN_8c1e7ef2(a4, a5, a6, a7);
    }
    t0 = (0x9FFFFFE0 & a4);
    t1 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbwb((void *)t0);
        t1 = (t1 - 0x1);
        t0 = (t0 + 0x20);
        if (t1 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0x8C1E80DC))(t0, t1);
}

int nlCommonTextureReloadA(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    if ((int)a4 >= 0) {
        t0 = (a4 + (*(int *)0x8C458DCC));
    }
    t1 = *(int *)0x8C4241C0;
    t2 = 0x0;
    if ((*(int *)(((((t0 << 2) << 1) + t1) + 0x0))) != 0) {
        t3 = *(int *)(((((t0 << 2) << 1) + t1) + 0x4));
        t0 = *(int *)0x8C458608;
        t1 = 0x0;
        if ((*(int *)((((t3 * 0x3C) + t0) + 0x28))) == 0) {
            t4 = kmLoadTextureRom(((t3 * 0x3C) + t0), a5);
            t0 = 0x1;
            if (t4 != 0) {
                t0 = 0x0;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_8c0f2190(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = *(int *)0x8C1DC888;
    t2 = t1;
    if ((t1 == 1) && (t0 = *(int *)((a4 + 0x0)), (int)t0 >= 0)) {
        t0 = *(int *)((a4 + 0x18));
        t1 = t0;
        if (t0 != 0) {
            t0 = 0x8C1DC888;
            t3 = (a4 + 0x18);
            for (;;) {
                t4 = *(int *)((t3 + 0xC));
                t5 = t3;
                t3 = (t3 + 0x50);
                if (((((unsigned int)t4 >> 27) & 0x7) == 5) || ((((unsigned int)t4 >> 27) & 0x7) == 6)) {
                    t0 = (*(int *)((t5 + 0xC)));
                    t0 = (t0 & 0xF81FFFFF);
                    t0 = (t0 | (((*(int *)((t5 + 0x3C))) + a5) << 21));
                    *(unsigned int *)((t5 + 0xC)) = t0;
                }
                t3 = (t3 + (*(int *)((t5 + 0x4C))));
                if ((*(int *)((t3 + 0x0))) == 0) {
                    break;
                }
            }
            t1 = 0x4C;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_8c09c646(float f4)
{
    int stk[10];
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)0x8C09C7D4;
    u1 = *(float *)0x8C09C7B0;
    u2 = *(float *)0x8C09C7B4;
    *(int *)((int)stk + 16) = ((int)stk + 20);
    *(Stk3 *)(((int)stk + 20)) = vecMake(u2, u1, u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    sprInitPos(0x8C340764, 0x22, *(Stk3 *)(((int)stk + 4)));
    *(float *)0x8C340790 = f4;
    *(float *)0x8C340774 = (*(float *)0x8C09C7C8);
    *(float *)0x8C340778 = (*(float *)0x8C09C7CC);
    *(float *)0x8C340790 = f4;
    return (thunk_FUN_8c0f41f0(0x8C340764));
}

int nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t1 = *(int *)(((*(int *)0x8C454FC4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t2 = ((unsigned int)t1 >> 16);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    t6 = a7;
    t7 = 0x0;
    t8 = a8;
    for (;;) {
        if ((t8 & 0x1) != 0) {
            t3 = 0x8C454FC0;
            t5 = t7;
            t6 = ((int)stk + 4);
            t4 = (0x3 & ((unsigned int)t1 >> 16));
            t2 = (kmSetUserClipping(t3, t4, t5, t6));
        } else {
            t11 = t3;
            t12 = t4;
            t13 = t5;
            t14 = t6;
        }
        t7 = (t7 + 0x1);
        t3 = t11;
        t4 = t12;
        t5 = t13;
        t6 = t14;
        t8 = (t8 >> 1);
        if ((int)t7 >= (int)0x5) {
            break;
        }
    }
    return t2;
}

int FUN_8c1e67e2(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a6;
    t0 = gdGdcReqDmaTrans(a4, ((int)stk + 4));
    if ((t0 == 0) && (a6 != 0)) {
        if ((((int)a5 >> 28) & 0xF) != 10) {
            if ((0x1F & a5) == 0) {
                syCacheOCBI(a5, a6);
            } else {
                syCacheOCBP(a5, a6);
            }
        }
    }
    return t0;
}

int nlChangeDisplayFilterMode(int a4)
{
    *(unsigned short *)0x8C458DDC = 0x0;
    if ((0x80 & a4) != 0) {
        *(unsigned short *)0x8C458DDC = 0x1;
    }
    *(unsigned short *)0x8C458DDE = 0x0;
    if ((a4 & 0x8000) != 0) {
        *(unsigned short *)0x8C458DDE = 0x1;
    }
    kmChangeDisplayFilterMode((*(short *)0x8C458DDC), (*(short *)0x8C458DDE));
    FUN_8c0eaf00((*(int *)0x8C1DC894), (*(int *)0x8C1DC898), (*(int *)0x8C1DC89C));
    return nlSetWindowSize((*(float *)0x8C450B20), (*(float *)0x8C450B24), (*(float *)0x8C450B18), (*(float *)0x8C450B1C));
}

void FUN_8c1e797e(int a4, int a5, int a6, int a7)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    syCachePurgeAll(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = (*(int *)(((int)stk + 4)));
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFF7FF) | 0x800);
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFFFF7) | 0x8);
    _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
}

int syTmrGenCountToMicro(int a4, int a5)
{
    register int t6;
    register int t4;
    register int t2;
    register int t0;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t4 = 0x20;
        if ((unsigned short)a5 != 1) {
            t2 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t2 = t0;
            }
            t4 = t2;
        }
        t6 = t4;
    }
    return ((((int)((unsigned int)a4 / (unsigned int)0x64)) * t6) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)0x64)) * t6) / (unsigned int)0x64)));
}

int FUN_8c0d0b5c(void)
{
    register int t0;
    register int t1;
    register int t5;

    t0 = 0x0;
    for (;;) {
        t1 = nlsndGetPackInfo(t0, 0x10A0);
        nlLocate(0x3C, (t0 + 0x1E));
        t5 = nlPrintf(0x8C125A54, (t0), (t1));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t5;
}

int FUN_8c1e0eda(int a4, int a5)
{
    register int t2;

    ADXT_Stop(a4);
    ADXCRS_Lock();
    t2 = SJMEM_Create(a5, 0x40000000);
    if (t2 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0x8C209B5C);
    } else {
        adxt_start_sj(a4, t2);
        *(unsigned char *)((a4 + 0x2)) = 0x2;
    }
    return ADXCRS_Unlock();
}

int mwAcTrns(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = mwlSbTrnsDat(a4, a5, a6, a7, a8);
    if (a6 == 0) {
        return FUN_8c200c8c(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}

int kmiVRightArray(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x4)) = (((*(int *)((a4 + 0xC))) - ((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0x10)))))) - 1);
    t0 = (int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t0;
    if ((unsigned int)t0 <= (unsigned int)(*(int *)0x8C45F914)) {
        if ((unsigned int)t0 >= (unsigned int)(*(int *)0x8C45F90C)) {
            if ((unsigned int)(*(int *)((a4 + 0x4))) <= (unsigned int)(*(int *)0x8C45F910)) {
                if ((unsigned int)(*(int *)((a4 + 0x4))) < (unsigned int)(*(int *)0x8C45F908)) {
                    *(unsigned int *)((a4 + 0x14)) = 0x1;
                }
                t0 = 0x944;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                t0 = 0x94C;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
            t1 = 0x948;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        t0 = 0x950;
    }
    return t0;
}

int FUN_8c1fabc0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0x8C45F7EC;
    t1 = *(int *)((t0 + 0x4));
    t2 = *(int *)((t0 + 0xC));
    t3 = *(int *)((t0 + 0x8));
    t4 = *(int *)((t0 + 0x0));
    *(unsigned int *)((a4 + 0x4)) = (((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)((t2 - t1) + 0x1))) + t4);
    *(unsigned int *)((a4 + 0x8)) = (((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)((t2 - t1) + 0x1))) + (*(int *)(((*(int *)0x8C45F7EC) + 0x4))));
    t0 = *(int *)((a4 + 0x0));
    if (t0 == ((((t3 - t4) + 0x1) * ((t2 - t1) + 0x1)) - 1)) {
        *(unsigned int *)((a4 + 0x18)) = 0x1;
    }
    return t0;
}

int FUN_8c1e0e90(int a4, int a5)
{
    register int t3;

    ADXT_Stop(a4);
    ADXCRS_Lock();
    t3 = ADXSTM_OpenFname(a5, (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t3;
    if (t3 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0x8C209B30, a5);
    } else {
        adxt_start_stm(a4);
    }
    return ADXCRS_Unlock();
}

int FUN_8c08aade(Stk5 s)
{
    int stk[17];
    register float t2;
    register float t3;
    register float t4;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    stk[7] = s.w[3];
    stk[8] = s.w[4];
    *(float *)(((int)stk + 32)) = (0.0f);
    *(float *)(((int)stk + 20)) = (0.0f);
    t2 = nlInnerProduct((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18));
    t3 = nlLength((((int)stk + 4) + 0xC), 0x8C1016D4);
    t4 = nlLength((((int)stk + 4) + 0x18), 0x8C1016D4);
    return (nlArcCos((t2 / (t3 * t4))));
}

int mwRnaSetFilter(int a4, int a5, int a6)
{
    register int t1;
    register int t3;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    *(unsigned int *)((a4 + 0x7C)) = a5;
    *(unsigned int *)((a4 + 0x80)) = a6;
    t1 = *(int *)((a4 + 0x38));
    t3 = *(int *)(((*(int *)((t1 + 0x0))) + 0x44));
    return ((int (*)(int, int, int, int))(t3))(t1, 0x3, a5, a6);
}

int kmiHolizontalStripBufferArray(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0xC)))));
    t0 = (int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0xC))));
    *(unsigned int *)((a4 + 0x8)) = t0;
    if ((unsigned int)t0 <= (unsigned int)(*(int *)0x8C45F914)) {
        if ((unsigned int)t0 >= (unsigned int)(*(int *)0x8C45F90C)) {
            if ((unsigned int)(*(int *)((a4 + 0x4))) <= (unsigned int)(*(int *)0x8C45F910)) {
                if ((unsigned int)(*(int *)((a4 + 0x4))) < (unsigned int)(*(int *)0x8C45F908)) {
                    *(unsigned int *)((a4 + 0x14)) = 0x1;
                }
                t0 = 0x944;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                t0 = 0x94C;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
            t1 = 0x948;
        }
        t0 = t1;
    } else {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        t0 = 0x950;
    }
    return t0;
}

float nlLightGlobalAmbient(int a4)
{
    register float u8;
    register float u10;
    register float u11;

    *(float *)0x8C450708 = (*(float *)((a4 + 0x0)));
    *(float *)0x8C45070C = (*(float *)(((a4 + 0x4) + 0x0)));
    *(float *)0x8C450710 = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    *(float *)0x8C450714 = (*(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    u8 = ((*(float *)0x8C450710) * (*(float *)0x8C0EE904));
    u8 = u8 + (*(float *)0x8C0EE908) * (*(float *)0x8C45070C);
    u10 = *(float *)0x8C0EE90C;
    u11 = u8;
    u11 = u11 + u10 * (*(float *)0x8C450714);
    *(float *)0x8C450708 = u11;
    return u10;
}

int nlSpriteLoadTextureGI(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = nlSpriteLoadTextureOnce_Sub(a4, a5, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

void FUN_8c0d2b00(void)
{
    register int t0;

    if (((*(int *)0x8C38BA70) != 0) && (t0 = *(int *)0x8C38BA74, t0 != 0)) {
        if ((*(int *)0x8C287B4C) == 119) {
            t0 = nlsndSeqRequest(0x603A9);
            if (t0 == -1) {
                evSeRetry(0xA, 0x603A9);
            }
            nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64));
    return;
        }
        return;
    }
}

int FUN_8c013ce6(int a4)
{
    register int t2;
    register int t5;
    register int t7;
    register int t9;

    t2 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3));
    t5 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2));
    t7 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    t9 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1);
    return (lightSetTarget((t9 << 8), (t7 << 8), t5, t2, 0x1));
}

int FUN_8c0f2e10(int a4)
{
    if (a4 == 1) {
        *(unsigned int *)0x8C1DCC28 = ((*(int *)0x8C1DCC28) & 0xFF3FFFFF);
        *(unsigned int *)0x8C1DCC48 = ((*(int *)0x8C1DCC48) & 0xFF3FFFFF);
        return a4;
    }
    *(unsigned int *)0x8C1DCC28 = ((*(int *)0x8C1DCC28) & 0xFF3FFFFF);
    *(unsigned int *)0x8C1DCC48 = ((*(int *)0x8C1DCC48) & 0xFF3FFFFF);
    *(unsigned int *)0x8C1DCC28 = ((*(int *)0x8C1DCC28) | 0x800000);
    *(unsigned int *)0x8C1DCC48 = ((*(int *)0x8C1DCC48) | 0x800000);
    return a4;
}

int FUN_8c200d7c(int a4, int a5)
{
    register int t1;
    register int t11;
    register int t6;

    t1 = nlsndG2DmaGetHandleStatus((*(int *)((((a5 << 2) + (a4 + 0x2C)) + 0x0))));
    t11 = 0x1;
    if (t1 == 0x100) {
    } else {
        t6 = 0x2;
        if (t1 == 0x101) {
        } else {
            mwRnaErrCallFunc(0x8C20B444);
            t6 = 0x0;
        }
        t11 = t6;
    }
    return t11;
}

int FUN_8c205a7c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = kmyObFindDevice(a4, a5, a6);
    t1 = 0xEEEE;
    if (t0 == 0) {
        *(unsigned int *)((a5 + 0x0)) = a4;
        t0 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a4 + 0x4)) = a5;
        *(unsigned int *)((a5 + 0x4)) = t0;
        *(unsigned int *)((a5 + 0x8)) = a6;
        if ((*(int *)((a5 + 0xC))) != 0) {
            t0 = ((int (*)(int))((*(int *)((a5 + 0xC)))))(a5);
        }
        t1 = 0x0;
    }
    return t1;
}

int nlSysMultiPassMode(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = nlSysUseLatency2V(a4, a5, a6, a7);
    *(unsigned int *)0x8C424460 = 0x1;
    *(unsigned int *)0x8C424240 = a4;
    if ((int)a4 > 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned int *)(((0x8C424244 + t1) + 0xC)) = 0x0;
            *(unsigned int *)(((0x8C424244 + t1) + 0x0)) = 0x0;
            t1 = (t1 + 0x38);
            if ((int)t2 >= (int)a4) {
                break;
            }
        }
    }
    return t0;
}

int ADXT_IsIbufSafety(int a4)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        if ((int)t4 >= (int)((((*(short *)((a4 + 0x3E))) << 8) << 2) << 1)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

void FUN_8c0886fc(int a4)
{
    register int t1;

    if ((*(int *)0x8C287C60) == 0) {
        t1 = set_event(0x20, 0x8C088660);
        if ((*(int *)(((a4 << 2) + 0x8C18176C))) == 0) {
            *(unsigned int *)((t1 + 0x1C)) = 0x1;
        } else {
            *(unsigned int *)((t1 + 0x1C)) = 0xFFFFFFFF;
        }
        *(unsigned int *)((t1 + 0x18)) = a4;
        *(unsigned int *)((t1 + 0x14)) = 0x0;
    }
}

int FUN_8c08aaa0(Stk4 s)
{
    int stk[16];
    register float t0;
    register float t1;
    register float t2;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    stk[7] = s.w[3];
    t0 = nlInnerProduct((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18));
    t1 = nlLength((((int)stk + 4) + 0xC), 0x8C1016D4);
    t2 = nlLength((((int)stk + 4) + 0x18), 0x8C1016D4);
    return (nlArcCos((t0 / (t1 * t2))));
}

int FUN_8c1f8ae0(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x14)) = 0x8C1F8A7E;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x3B8;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned int *)((t0 + 0x10)) = 0x8C1F8A4A;
    *(unsigned int *)((t0 + 0x14)) = 0x8C1F8A64;
    *(unsigned int *)((t0 + 0xC)) = 0x4;
    if ((unsigned int)0x0 < (unsigned int)0x4) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)((((t1 * 0x8C) + (t0 + 0x18)) + 0x0)) = t1;
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)(*(int *)((t0 + 0xC)))) {
                break;
            }
        }
    }
    return 0x0;
}

void FUN_8c0d2b6a(void)
{
    register int t0;

    if (((*(int *)0x8C38BA70) != 0) && (t0 = *(int *)0x8C38BA74, t0 != 0)) {
        t0 = nlsndSeqRequest(0x903A9);
        if (t0 == -1) {
            evSeRetry(0xA, 0x903A9);
        }
        nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64));
    return;
    }
}

int FUN_8c0c53f2(int a4, Stk3 s)
{
    int stk[18];

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    *(unsigned int *)(((int)stk + 16)) = (((((a4 << 2) + a4) << 2) << 2) + 0x8C37C85C);
    *(float *)(((((((a4 << 2) + a4) << 2) << 2) + 0x8C37C85C) + 0x2C)) = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    return (sprPutAtAlpha((*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}

int nlLightCutoffCos(int a4, float f4)
{
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0xA4)) = _builtin_sqrtf((1.0f - (f4 * f4)));
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x58)) = f4;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x9C)) = (1.0f / (1.0f - f4));
    return 0x9C;
}

int FUN_8c1f8a7e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x3B8;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned int *)((t0 + 0x10)) = 0x8C1F8A4A;
    *(unsigned int *)((t0 + 0x14)) = 0x8C1F8A64;
    *(unsigned int *)((t0 + 0xC)) = 0x4;
    if ((unsigned int)0x0 < (unsigned int)0x4) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)((((t1 * 0x8C) + (t0 + 0x18)) + 0x0)) = t1;
            t2 = ((t1 * 0x8C) + (t0 + 0x18));
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)(*(int *)((t0 + 0xC)))) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

void FUN_8c0d7ea8(void)
{
    register int t1;
    register int t2;
    register int t3;

    if (((*(int *)0x8C287B10) == 0) && ((t1 = *(int *)0x8C287B14, t1 == 0) && (t2 = *(int *)0x8C287B00, t3 = *(int *)0x8C287C64, t2 != t3))) {
        if ((*(int *)0x8C287B04) != (*(int *)0x8C287C64)) {
            evVoiceFadeOut(0x3C);
            *(unsigned int *)0x8C1D476C = 0x1;
        }
    }
}

int FUN_8c200872(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (mwlSbGetStreamParam(a4, 0x6, a5, a7));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
}

int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(int *)(((*(int *)0x8C20C204) + 0x34))) != 1) {
        t2 = gdFsGetDrvStatG(a4, a5, a6, a7);
        if (t2 == 6) {
            *(unsigned int *)(((*(int *)0x8C20C204) + 0x34)) = 0x1;
            return 0x1;
        }
        if (t2 == 0) {
            gdFsReqDrvStatG();
        }
        return 0x0;
    }
    return 0x1;
}

int syTmrCountToMicro(int a4)
{
    return (((((((int)((unsigned int)a4 / (unsigned int)0x64)) << 2) << 2) << 2) << 1) + ((int)((unsigned int)((((((int)((unsigned int)a4 % (unsigned int)0x64)) << 2) << 2) << 2) << 1) / (unsigned int)0x64)));
}

int fmMngRefresh(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20CA44;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    t1 = syBtFlDeleteSct((*(int *)((t0 + 0x4))), a5, a6);
    t0 = 0xFFFFFFFD;
    if (t1 == -1) {
    } else {
        t0 = (fmMngSctRefresh((*(int *)0x8C20CA44)));
    }
    return t0;
}

int FUN_8c0f19d0(int a4, int a5)
{
    int stk[7];
    register float u1;

    nlCalcPoint4(a4, ((int)stk + 4));
    u1 = *(float *)(((int)stk + 16));
    *(float *)((a5 + 0x0)) = ((*(float *)(((int)stk + 4))) * (1.0f / u1));
    *(float *)((a5 + 0x4)) = ((*(float *)(((int)stk + 8))) * (1.0f / u1));
    *(float *)((a5 + 0x8)) = (1.0f / u1);
    return 0x8;
}

int FUN_8c0f28c0(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x0))) - (*(int *)0x8C424498));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x4))) - (*(int *)0x8C42449C));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x8))) - (*(int *)0x8C4244A0));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0xC))) - (*(int *)0x8C4244A4));
    return 0x8C42445C;
}

void ADXT_GetNumSctIbuf(int a4)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
        
    }
}
