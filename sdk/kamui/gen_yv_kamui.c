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


int kmiProcessVertex_09(int a4, int a5, int a6, int a7)
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


