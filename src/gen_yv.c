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
    return (thunk_nlSprPut(0x8C340764));
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


