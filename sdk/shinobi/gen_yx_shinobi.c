/* Straight-line functions with calls and guards (batch gen_yx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXB_GetCof(int);
int ADXB_GetLpInsNsmpl(int);
int ADXERR_CallErrFunc(Stk3);
int ADXPD_ExecHndl(int);
int nlCommonTextureReloadA(int, int);
int FUN_8c0efc70(int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int gdGdcGetDrvStat(int, int);
int gdGdcInitSystem(int, int);
int gdGdcReqCmd(int, int);
int kmGetCurrentScanline(int);
int kmGetFreeTextureMem(int, int);
int kmSetColorClampValue(Stk4);
int kmyRegisterCallback(int, int, int);
int kmyRequestCallback(int, int, int, int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlCopyMatrix(int, int, float, float, float, float, float, float);
float nlCos(int);
float nlCosf(float);
int nlGetMatrix(int);
extern int nlGetMatrix8();
int nlInvLightVectorUseViewMatrix(void);
int nlLUDecomp(int, int);
int nlLoadMatrix(int);
int nlLoadMatrix8(int);
int nlMakeModelViewProjectMatrix_objput(void);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlObjPutLoadTextureOnce_Sub(int, int, int, int, int);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
float nlSin(int);
float nlSinf(float);
int nlSysMetricsDiffTime(int, int);
int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int);
int nlTransposeMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int, float);
int nlsndStreamGetBitSize(int);
int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamGetFreq(int);
int nlsndStreamGetPlayPos(int);
int nlsndStreamStop(int);
int syCachePurgeAll(int, int, int, int);
int nlObjPutLoadTextureGI(int a4, int a5);
int FUN_8c0eeca0(int a4, int a5, int a6);
int FUN_8c0eed00(int a4, int a5, int a6);
void gdFsEntryErrFuncAllG(int a4, int a5);
void FUN_8c0ee6b0(void);
int mwSbGetBufSize(int a4);
int nlLightModelTransOne(void);
int nlObjPutUseViewMatrixTrnsl(int a4, float f4);
int nlGetPushedMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlMakeModelViewProjectMatrix(void);
int nlMakeFastModelProjectMatrixVM(void);
int kmSetPaletteMode(int a4);
int FUN_8c1e7ef2(Stk4 s);
int ADXPD_ExecServer(void);
int FUN_8c012b10(void);
int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
float nlRotateXSC_L(float f4, float f5);
float nlRotateYSC_L(float f4, float f5);
float nlRotateZSC(float f4, float f5);
float nlRotateZSC_L(float f4, float f5);
int nlIntrHandlerEventA40(void);
int nlIntrHandlerEventB00(void);
void nlIntrClearEvent(int a4);
int syTmrInt1Handler(void);
int syTmrInt2Handler(void);
int FUN_8c2001b8(void);
int FUN_8c2001dc(void);
int FUN_8c205a34(int a4);
int nlLightCutoffAng(int a4, int a5);
int nlDetMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlLightCutoffRad(int a4, float f4);
int nlObjPutUseViewMatrix(int a4);
int gdFsDaPause(void);
int gdDcfDaPlay_(int a4, int a5, int a6);
int gdDcfDaPlay2_(int a4, int a5, int a6);
int gdDcfGetScd_(int a4, int a5, int a6);
int mwSbStop(int a4);
int FUN_8c0f0ac0(void);
int nlProjectScreen3D(int a4, int a5);
int gdDcfReqStat_(int a4, int a5, int a6, int a7);
int FUN_8c0f0220(float f4);
int FUN_8c0f0260(float f4);
int nlIntrHandlerEOR(void);
int nlIntrHandlerEvent900(void);
int nlIntrHandlerEvent920(void);
int nlIntrHandlerTexOverflow(void);
int gdDcfSeek_(int a4);
int gdDcfDaRelease_(int a4);
int gdDcfGetVer_(int a4);
int adxb_DefGetWr(int a4, int a5, int a6, int a7);
int nlSetColorClampValue(int a4, int a5);
int gdDcfReqGdRd_(int a4, int a5);
int gdDcfGetDrvStat_(int a4, int a5);
int gdDcfGetToc_(int a4, int a5);
int FUN_8c0b5c86(void);
int FUN_8c0b5ca0(void);
int FUN_8c0b5cba(void);
int nlClearMatrix(void);
int nlIntrSetVectorFunction(int a4, int a5);
int gdFsHdlG1DmaEnd(int a4);
int adxini_rnaerr_cbfn(int a4, int a5);
int FUN_8c1f8a4a(int a4);
int FUN_8c1f8a64(int a4);
int nlCommonTextureGetFreeMem(void);
int nlCommonTextureGetFreeBlock(void);
int gdFsGetGlobalErr(void);
int gdFsDaPlay(void);
int gdFsDaPlaySct(void);
int gdFsDaStop(void);
int gdFsDaRelease(void);
int gdFsDaGetInfo(void);
int gdFsIsTrayOpen(void);
int nlCommonTextureReloadI(int a4, int a5, int a6);
int gdFsReadW(void);
int gdFsSetGlobalErr(void);
int mwSbGetSfreq(int a4);
int mwSbGetBitPerSmpl(int a4);
int nlGetCurrentScanLine(void);
int nlSysMetricsCpuPowerEnd(void);
int FUN_8c205a20(int a4);
int nlObjPutSetSpecularEyeDirectionV(int a4);
int syBtCheckDisc(int a4, int a5, int a6, int a7);
int kmSetEndOfVertexCallback(int a4, int a5);
int kmSetStripOverRunCallback(int a4, int a5);
int adxb_DefAddWr(int a4, int a5, int a6);
int mwlSbClearTrnsReq(int a4, int a5, int a6);
int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7);
int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7);
int nlPushMultiViewMatrix(void);
int FUN_8c1e3260(int a4, int a5, int a6, int a7);
int FUN_8c1e6738(int a4, int a5);
int mwSbGetPlayPos(int a4);
int FUN_8c1ef400(int a4, int a5);
int FUN_8c1ef43c(int a4, int a5);
int FUN_8c1ef450(int a4, int a5);
int ADXSJD_GetLpInsNsmpl(int a4);
int ADXSJD_GetCof(int a4);
int vmsfs_getword_big(int a4, int a5);
void FUN_8c0eab40(int a4);
int FUN_8c0f8260(int a4, int a5);
int FUN_8c0f8290(int a4, int a5);
int FUN_8c0f8250(int a4, int a5);
void FUN_8c0f8370(void);
int FUN_8c0f8380(void);
void FUN_8c1e3278(int a4);
int vmsfs_getword_little(int a4, int a5);
void vmsfs_setword_big(int a4, int a5, int a6);
void FUN_8c0ea550(int a4);
void FUN_8c0eaaf0(int a4);
int FUN_8c0eab20(void);
void nlSysCreatePunchBuffer(int a4);
int nlSysMetricsGetLastTATime(void);
int nlSysMetricsGetNativeUseSize(void);
int nlSysMetricsGetNativeMaxSize(void);
void nlSetPunchAlphaThreshold(int a4);
int FUN_8c0ec0d0(void);
int FUN_8c0ec0e0(void);
void kmfSetTimeOutCount(int a4, int a5);
void FUN_8c0ee5b0(int a4);
void FUN_8c0ee6e0(int a4);
void FUN_8c0f2180(int a4);
int nlObjPutMvGetClosingMode(void);
int FUN_8c0f24e0(void);
void FUN_8c0f2dc0(float f4);
int FUN_8c0f3a80(void);
void FUN_8c0f6e90(int a4);
void nlDispStripSetPalette(int a4);
int nlIntrGetEvent(void);
void FUN_8c1e2780(int a4);
void FUN_8c1e3272(int a4);
int FUN_8c1e68f4(int a4, int a5);
int FUN_8c1e7978(void);
int FUN_8c1e6a34(int a4, int a5);
void vmsfs_setword_little(int a4, int a5, int a6);
void nlFatalErrorReturn(void);
void FUN_8c0ef2bc(void);
void FUN_8c0ef354(void);
void FUN_8c0f8360(void);
int FUN_8c1e2f60(void);
int FUN_8c1e2f68(void);
void FUN_8c1e326e(void);
int kmiProcessVertex_17(void);
int FUN_8c1f5d38(void);
void FUN_8c200110(void);
int FUN_8c200dd4(void);


void gdFsEntryErrFuncAllG(int a4, int a5)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}


int FUN_8c1e7ef2(Stk4 s)
{
    int imask;

    imask = _builtin_get_imask();
    _builtin_set_imask(0xF);
    _builtin_set_imask(imask & 0xF);        /* the P2 tail (0xAC1E7F20) writes back the caches and restores the mask */
    return 0x0;
}


int syTmrInt1Handler(void)
{
    register int t3;
    register int t4;

    *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFFDF);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
    t3 = *(int *)0x8C461B7C;
    t4 = *(int *)0x8C461B80;
    return ((int (*)(int))(t3))(t4);
}

int syTmrInt2Handler(void)
{
    register int t3;
    register int t4;

    *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFB);
    *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFFDF);
    *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFEFF);
    t3 = *(int *)0x8C461B84;
    t4 = *(int *)0x8C461B88;
    return ((int (*)(int))(t3))(t4);
}


/* the tail nlLightCutoffAng and nlLightCutoffRad share (0x8C0EE7A4): light a4's cut-off sine and cosine, and
   1 / (1 - cos) */


int gdFsDaPause(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x68));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdDcfDaPlay_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x14, ((int)stk + 4)));
}

int gdDcfDaPlay2_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x15, ((int)stk + 4)));
}

int gdDcfGetScd_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x22, ((int)stk + 4)));
}


int gdDcfReqStat_(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a7;
    return (gdGdcReqCmd(0x24, ((int)stk + 4)));
}


int gdDcfSeek_(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x1B, ((int)stk + 4)));
}

int gdDcfDaRelease_(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x17, ((int)stk + 4)));
}

int gdDcfGetVer_(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x28, ((int)stk + 4)));
}


int gdDcfReqGdRd_(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (gdGdcReqCmd(0x1C, ((int)stk + 4)));
}

int gdDcfGetDrvStat_(int a4, int a5)
{
    register int t0;

    t0 = gdGdcGetDrvStat(a4, a5);
    if (t0 == 1) {
        return 0x0;
    }
    return 0x1;
}

int gdDcfGetToc_(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (gdGdcReqCmd(0x13, ((int)stk + 4)));
}


int gdFsHdlG1DmaEnd(int a4)
{
    register int t0;
    register int t5;
    register int t6;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    t6 = 0x0;
    if ((t0 != 0) && (t1 = *(int *)((t0 + 0x2C)), t1 != 0)) {
        t5 = (*(int *)((t0 + 0x2C)));
        t6 = (*(int *)((t0 + 0x30)));
    }
    return FUN_8c1ef400(t5, t6);
}


int gdFsGetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x4C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlay(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x5C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlaySct(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x60));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaStop(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x64));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaRelease(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x6C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaGetInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x70));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsIsTrayOpen(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x78));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsReadW(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x1C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsSetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x18));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int syBtCheckDisc(int a4, int a5, int a6, int a7)
{
    register int t1;

    syCachePurgeAll(a4, a5, a6, a7);
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t1))(0x2);
}


int FUN_8c1e6738(int a4, int a5)
{
    gdGdcInitSystem(a4, a5);
    return 0x1;
}


int FUN_8c1ef400(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x5);
}

int FUN_8c1ef43c(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x8);
}

int FUN_8c1ef450(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x9);
}


int vmsfs_getword_big(int a4, int a5)
{
    register int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}


int vmsfs_getword_little(int a4, int a5)
{
    return (unsigned short)(*(short *)(((a4 + a5) + 0x0)));
}

void vmsfs_setword_big(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}


int FUN_8c1e68f4(int a4, int a5)
{
    return FUN_8c1ef43c(a4, a5);
}

int FUN_8c1e7978(void)
{
    return (*(int *)0xFF00001C);
}

int FUN_8c1e6a34(int a4, int a5)
{
    return FUN_8c1ef450(a4, a5);
}

void vmsfs_setword_little(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = a6;
}


