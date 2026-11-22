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


int mwSbClosePort(int a4)
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


int mwlSbTrnsEx(int a4, int a5, int a6, int a7)
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


int ADXT_IsHeader(int a4, int a5, int a6)
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


int mwSbGetExPrm(int a4, int a5, int a6, int a7)
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


int ADXT_StartMem(int a4, int a5)
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
        return mwlSbTrnsEx(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}


int ADXT_StartFname(int a4, int a5)
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


int mwSbGetTrnsStat(int a4, int a5)
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


int mwSbGetPan(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (mwlSbGetStreamParam(a4, 0x6, a5, a7));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
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
