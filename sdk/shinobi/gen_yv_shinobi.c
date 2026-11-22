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


int gdDcfRead_(int a4, int a5, int a6, int a7)
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
    return 0x0;                             /* 0x8C1E80C8: the P2 tail's end (FUN_8c1e7ef2 restores the mask) */
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


int FUN_8c1e7e96(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a5 == 0) {
        return 0x0;                         /* 0x8C1E80DC: the epilogue */
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
    return 0x0;
}


int gdDcfTrans32_(int a4, int a5, int a6)
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


