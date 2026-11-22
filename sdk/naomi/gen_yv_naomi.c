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
int resetBackColorZ(int, int, int);
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
int thunk_nlSprPut(int);
Stk3 vecMake(float, float, float);
int nlObjPutCheckSideFarCulling(int a4);
int gdFsDaStopG(void);
int nlSysMetricsGetFrameBuffer(int a4, int a5, int a6);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int mwSbClosePort(int a4);
int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7);
int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7);
float FUN_8c0f1a10(void);
int gdFsDaGetInfoG(int a4);
int nlGetNormalCalcMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackLoad_Write(int a4);
int nlDispStripFreeTexture(int a4);
int nlDispStripLoadTexture(int a4, int a5);
int FUN_8c0836fc(void);
int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7);
void FUN_8c1e805c(int a4, int a5, int a6, int a7, int a8);
int mwlSbTrnsEx(int a4, int a5, int a6, int a7);
int gdDcfRead_(int a4, int a5, int a6, int a7);
void syG2DmaEndIntrruptHandler(int a4);
int nlProjectScreen(int a4, int a5);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);
int nlLightAllOff(void);
int ADXT_IsHeader(int a4, int a5, int a6);
int FUN_8c081e9e(void);
int kmiProcessVertex_09(int a4, int a5, int a6, int a7);
int nlReturnLightAll(void);
int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_8c1e7fd8(int a4, int a5, int a6);
int nlSetVertexMode(int a4);
int syTmrGenMicroToCount(int a4, int a5);
int FUN_8c2007b0(int a4, int a5, int a6, int a7);
int FUN_8c0e6220(void);
int nlsndPackLoad_Open(int a4, int a5, int a6);
int syTmrGenSetInt(int a4, int a5);
void FUN_8c0d1dda(int a4);
int mwSbGetExPrm(int a4, int a5, int a6, int a7);
int FUN_8c0efc70(int a4);
int FUN_8c1e7e96(int a4, int a5, int a6, int a7);
int nlCommonTextureReloadA(int a4, int a5);
int nlObjPutSetPaletteOffset(int a4, int a5, int a6, int a7);
int FUN_8c09c646(float f4);
int nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8);
int gdDcfTrans32_(int a4, int a5, int a6);
int nlChangeDisplayFilterMode(int a4);
void FUN_8c1e797e(int a4, int a5, int a6, int a7);
int syTmrGenCountToMicro(int a4, int a5);
int FUN_8c0d0b5c(void);
int ADXT_StartMem(int a4, int a5);
int mwAcTrns(int a4, int a5, int a6, int a7, int a8);
int kmiVRightArray(int a4);
int FUN_8c1fabc0(int a4);
int ADXT_StartFname(int a4, int a5);
int FUN_8c08aade(Stk5 s);
int mwRnaSetFilter(int a4, int a5, int a6);
int kmiHolizontalStripBufferArray(int a4);
float nlLightGlobalAmbient(int a4);
int nlSpriteLoadTextureGI(int a4, int a5);
void FUN_8c0d2b00(void);
int FUN_8c013ce6(int a4);
int nlLineFog(int a4);
int mwSbGetTrnsStat(int a4, int a5);
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
int mwSbGetPan(int a4, int a5, int a6, int a7);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int syTmrCountToMicro(int a4);
int fmMngRefresh(int a4, int a5, int a6);
int nlFastScreenPoint(int a4, int a5);
int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7);
void ADXT_GetNumSctIbuf(int a4);

int nlObjPutCheckSideFarCulling(int a4)
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

int nlLookAt(int a4, int a5, int a6, float f4, float f5)
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


int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7)
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

int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7)
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


int nlGetNormalCalcMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
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


int nlProjectScreen(int a4, int a5)
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

int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6)
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

int nlObjPutSetPaletteOffset(int a4, int a5, int a6, int a7)
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
    resetBackColorZ((*(int *)0x8C1DC894), (*(int *)0x8C1DC898), (*(int *)0x8C1DC89C));
    return nlSetWindowSize((*(float *)0x8C450B20), (*(float *)0x8C450B24), (*(float *)0x8C450B18), (*(float *)0x8C450B1C));
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


int nlLineFog(int a4)
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


int nlLightCutoffCos(int a4, float f4)
{
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0xA4)) = _builtin_sqrtf((1.0f - (f4 * f4)));
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x58)) = f4;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x9C)) = (1.0f / (1.0f - f4));
    return 0x9C;
}


int nlFastScreenPoint(int a4, int a5)
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

int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x0))) - (*(int *)0x8C424498));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x4))) - (*(int *)0x8C42449C));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0x8))) - (*(int *)0x8C4244A0));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)(((*(int *)0x8C42445C) + 0xC))) - (*(int *)0x8C4244A4));
    return 0x8C42445C;
}

