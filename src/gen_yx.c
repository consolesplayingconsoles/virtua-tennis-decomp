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
int nlobjput_sub_trnsl(int);
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
int FUN_8c20060c(int a4);
int nlLightModelTransOne(void);
int FUN_8c0f2650(int a4, float f4);
int FUN_8c0ef010(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_8c0f0a90(void);
int FUN_8c0f1ab0(void);
int kmSetPaletteMode(int a4);
int FUN_8c1e7ef2(Stk4 s);
int FUN_8c208c5a(void);
int FUN_8c012b10(void);
int FUN_8c0f2580(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
float FUN_8c0f0070(float f4, float f5);
float FUN_8c0f0130(float f4, float f5);
float FUN_8c0f0190(float f4, float f5);
float FUN_8c0f01f0(float f4, float f5);
int FUN_8c0f8050(void);
int FUN_8c0f8080(void);
void nlIntrClearEvent(int a4);
int FUN_8c1e90cc(void);
int FUN_8c1e90f0(void);
int FUN_8c2001b8(void);
int FUN_8c2001dc(void);
int FUN_8c205a34(int a4);
int nlLightCutoffAng(int a4, int a5);
int FUN_8c0eedb0(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlLightCutoffRad(int a4, float f4);
int FUN_8c0f25e0(int a4);
int gdFsDaPause(void);
int FUN_8c1e6976(int a4, int a5, int a6);
int FUN_8c1e6998(int a4, int a5, int a6);
int FUN_8c1e6a04(int a4, int a5, int a6);
int FUN_8c2005ea(int a4);
int FUN_8c0f0ac0(void);
int FUN_8c0f1430(int a4, int a5);
int FUN_8c1e6a3a(int a4, int a5, int a6, int a7);
int FUN_8c0f0220(float f4);
int FUN_8c0f0260(float f4);
int FUN_8c0f7ff0(void);
int FUN_8c0f8010(void);
int FUN_8c0f8030(void);
int FUN_8c0f80b0(void);
int FUN_8c1e68fa(int a4);
int FUN_8c1e69ca(int a4);
int FUN_8c1e6a5a(int a4);
int adxb_DefGetWr(int a4, int a5, int a6, int a7);
int nlSetColorClampValue(int a4, int a5);
int FUN_8c1e67c6(int a4, int a5);
int FUN_8c1e694c(int a4, int a5);
int FUN_8c1e69e8(int a4, int a5);
int FUN_8c0b5c86(void);
int FUN_8c0b5ca0(void);
int FUN_8c0b5cba(void);
int FUN_8c0eed40(void);
int FUN_8c0f8270(int a4, int a5);
int FUN_8c1dd692(int a4);
int FUN_8c1e0d30(int a4, int a5);
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
int FUN_8c2006d6(int a4);
int FUN_8c20070a(int a4);
int nlGetCurrentScanLine(void);
int nlSysMetricsCpuPowerEnd(void);
int FUN_8c205a20(int a4);
int FUN_8c0f26c0(int a4);
int FUN_8c1e0c2c(int a4, int a5, int a6, int a7);
int kmSetEndOfVertexCallback(int a4, int a5);
int kmSetStripOverRunCallback(int a4, int a5);
int adxb_DefAddWr(int a4, int a5, int a6);
int FUN_8c200dc2(int a4, int a5, int a6);
int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7);
int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7);
int FUN_8c0efa50(void);
int FUN_8c1e3260(int a4, int a5, int a6, int a7);
int FUN_8c1e6738(int a4, int a5);
int FUN_8c200654(int a4);
int FUN_8c1ef400(int a4, int a5);
int FUN_8c1ef43c(int a4, int a5);
int FUN_8c1ef450(int a4, int a5);
int ADXSJD_GetLpInsNsmpl(int a4);
int ADXSJD_GetCof(int a4);
int FUN_8c1feb60(int a4, int a5);
void FUN_8c0eab40(int a4);
int FUN_8c0f8260(int a4, int a5);
int FUN_8c0f8290(int a4, int a5);
int FUN_8c0f8250(int a4, int a5);
void FUN_8c0f8370(void);
int FUN_8c0f8380(void);
void FUN_8c1e3278(int a4);
int FUN_8c1feb6a(int a4, int a5);
void FUN_8c1feb72(int a4, int a5, int a6);
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
void FUN_8c1feb7a(int a4, int a5, int a6);
void nlFatalErrorReturn(void);
void FUN_8c0ef2bc(void);
void FUN_8c0ef354(void);
void FUN_8c0f8360(void);
int FUN_8c1e2f60(void);
int FUN_8c1e2f68(void);
void FUN_8c1e326e(void);
int FUN_8c1e629a(void);
int FUN_8c1f5d38(void);
void FUN_8c200110(void);
int FUN_8c200dd4(void);

int nlObjPutLoadTextureGI(int a4, int a5)
{
    int stk[8];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 4) = 0x1;
        t5 = *(int *)(((int)stk + 8));
        t0 = (t0 | (nlObjPutLoadTextureOnce_Sub((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x4), 0x1)));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_8c0eeca0(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t3 + 0xC);
        t0 = (nlCalcPoint(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int FUN_8c0eed00(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t3 + 0xC);
        t0 = (nlCalcVector(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

void gdFsEntryErrFuncAllG(int a4, int a5)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

void FUN_8c0ee6b0(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0x8C44FC08;
    for (;;) {
        t1 = 0x8C1DC8E0;
        t3 = t0;
        for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0x8C1DC8E0 + 176)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
        t0 = (t0 + 0xB0);
        if ((unsigned int)t0 >= (unsigned int)0x8C450708) {
            break;
        }
    }
    *(unsigned int *)0x8C1DC8D8 = 0x0;
}

int FUN_8c20060c(int a4)
{
    int stk[4];

    *(unsigned int *)((a4 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((a4 + 0x6))), 0x0, ((int)stk + 4)));
    *(unsigned int *)((a4 + 0x28)) = (*(int *)(((int)stk + 4)));
    return ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1);
}

int nlLightModelTransOne(void)
{
    nlTransposeMatrix();
    nlCalcVector(0x8C44FC70, 0x8C44FC88);
    nlCalcVector(0x8C1DC990, 0x8C0F8920);
    return nlTransposeMatrix();
}

int FUN_8c0f2650(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub_trnsl(a4);
}

int FUN_8c0ef010(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;

    t0 = *(int *)0x8C450864;
    if (a4 == 0) {
        return nlLoadMatrix8((t0 - 64));
    }
    return nlCopyMatrix(a4, (t0 - 64), f4, f5, f6, f7, f8, f9);
}

int FUN_8c0f0a90(void)
{
    nlPushMatrix((*(int *)0x8C450888));
    nlMultiMatrix((*(int *)0x8C45087C));
    nlMultiPushedMatrix();
    nlGetMatrix8(0x8C450A50);
    return nlPopMatrix(0x1);
}

int FUN_8c0f1ab0(void)
{
    nlPushMatrix(0x8C450A90);
    nlMultiMatrix((*(int *)0x8C450888));
    nlMultiMatrix((*(int *)0x8C45087C));
    nlMultiPushedMatrix();
    return FUN_8c0efc70(0x1);
}

int kmSetPaletteMode(int a4)
{
    register int t6;

    t6 = 0xEEEE;
    if ((0xFFFFFFFC & a4) != 0) {
    } else {
        *(unsigned int *)0x8C471E08 = ((*(int *)0x8C471E08) & 0xFFFFFFFE);
        *(unsigned int *)0x8C471E14 = a4;
        *(unsigned int *)0x8C471E08 = ((*(int *)0x8C471E08) | 0x1);
        t6 = 0x0;
    }
    return t6;
}

int FUN_8c1e7ef2(Stk4 s)
{
    _builtin_get_imask();
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC1E7F20))();
}

int FUN_8c208c5a(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x8C4762D4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXPD_ExecHndl(t0));
        }
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0x8C476474) {
            break;
        }
    }
    return t3;
}

int FUN_8c012b10(void)
{
    register int t1;
    register int t3;

    t1 = *(int *)(((((*(int *)0x8C20D150) & 0x1) << 2) + 0x8C101340));
    if (t1 == 0) {
        *(unsigned int *)0x8C20D150 = 0x0;
        t3 = 0x8C101340;
    } else {
        t3 = (((int (*)(int))(t1))(0x8C20D150));
    }
    return t3;
}

int FUN_8c0f2580(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlGetMatrix8))(0x8C454C08, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0x8C450B78);
    t0 = ((int (*)(int))(nlGetMatrix8))(0x8C450B38);
    return nlLoadMatrix8(0x8C454C08);
}

float FUN_8c0f0070(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = f4;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_8c0f0130(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_8c0f0190(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = f4;
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_8c0f01f0(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = (-f4);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

int FUN_8c0f8050(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x3;
    t0 = *(int *)0x8C454F4C;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F6900 = 0x4000;
    return 0x0;
}

int FUN_8c0f8080(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x5;
    t0 = *(int *)0x8C454F50;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F705C = 0x3;
    return 0x0;
}

void nlIntrClearEvent(int a4)
{
    if ((int)a4 < (int)0x6) {
        ((int (*)(int))((*(int *)(((a4 << 2) + 0x8C1DCBCC)))))(a4);
    return;
    }
}

int FUN_8c1e90cc(void)
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

int FUN_8c1e90f0(void)
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

int FUN_8c2001b8(void)
{
    memset(0x8C473B98, 0x0, 0x800);
    memset(0x8C474398, 0x0, 0x40);
    return (memset(0x8C473858, 0x0, 0x340));
}

int FUN_8c2001dc(void)
{
    memset(0x8C473B98, 0x0, 0x800);
    memset(0x8C474398, 0x0, 0x40);
    return (memset(0x8C473858, 0x0, 0x340));
}

int FUN_8c205a34(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = a4;
        t2 = t0;
        for (;;) {
            if ((*(int *)((t2 + 0x14))) != 0) {
                t1 = t2;
                t0 = ((int (*)(int))((*(int *)((t2 + 0x14)))))(t1);
            } else {
                t0 = t1;
            }
            t2 = (*(int *)((t2 + 0x4)));
            t1 = t0;
            if (t2 == 0) {
                break;
            }
        }
    }
    return 0x0;
}

int nlLightCutoffAng(int a4, int a5)
{
    register float t0;
    register float t1;

    t0 = nlCos(a5);
    t1 = nlSin(a5);
    return ((int (*)(int, float, float))(0x8C0EE7A4))(a4, t1, t0);
}

int FUN_8c0eedb0(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlCopyMatrix((((int)stk + 4) + 0x4), a4, f4, f5, f6, f7, f8, f9);
    return (nlLUDecomp((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x44)));
}

int nlLightCutoffRad(int a4, float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return ((int (*)(int, float, float))(0x8C0EE7A4))(a4, t1, t0);
}

int FUN_8c0f25e0(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub(a4);
}

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

int FUN_8c1e6976(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x14, ((int)stk + 4)));
}

int FUN_8c1e6998(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x15, ((int)stk + 4)));
}

int FUN_8c1e6a04(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x22, ((int)stk + 4)));
}

int FUN_8c2005ea(int a4)
{
    nlsndStreamStop((*(short *)((a4 + 0x6))));
    *(unsigned char *)(((0x60 + a4) + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    return 0x0;
}

int FUN_8c0f0ac0(void)
{
    nlPushMatrix((*(int *)0x8C45087C));
    nlMultiPushedMatrix();
    nlGetMatrix(0x8C450A10);
    return nlPopMatrix(0x1);
}

int FUN_8c0f1430(int a4, int a5)
{
    nlPushMatrix(0x8C450A10);
    nlCalcPoint(a4, a5);
    return nlPopMatrix(0x1);
}

int FUN_8c1e6a3a(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a7;
    return (gdGdcReqCmd(0x24, ((int)stk + 4)));
}

int FUN_8c0f0220(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateXSC(t1, t0);
}

int FUN_8c0f0260(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateYSC(t1, t0);
}

int FUN_8c0f7ff0(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x0;
    t0 = *(int *)0x8C454F40;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_8c0f8010(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x1;
    t0 = *(int *)0x8C454F44;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_8c0f8030(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x2;
    t0 = *(int *)0x8C454F48;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_8c0f80b0(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C454FA8 = 0x4;
    t0 = *(int *)0x8C454F70;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_8c1e68fa(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x1B, ((int)stk + 4)));
}

int FUN_8c1e69ca(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x17, ((int)stk + 4)));
}

int FUN_8c1e6a5a(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x28, ((int)stk + 4)));
}

int adxb_DefGetWr(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x9C)));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a4 + 0x40))) - (*(int *)((a4 + 0x9C))));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - (*(int *)((a4 + 0x98))));
    return (*(int *)((a4 + 0x3C)));
}

int nlSetColorClampValue(int a4, int a5)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(int *)((int)stk + 8) = a5;
    *(int *)((int)stk + 4) = ((*(int *)(((int)stk + 16))));
    return (kmSetColorClampValue(*(Stk4 *)((int)stk + 4)));
}

int FUN_8c1e67c6(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (gdGdcReqCmd(0x1C, ((int)stk + 4)));
}

int FUN_8c1e694c(int a4, int a5)
{
    register int t0;

    t0 = gdGdcGetDrvStat(a4, a5);
    if (t0 == 1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_8c1e69e8(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (gdGdcReqCmd(0x13, ((int)stk + 4)));
}

int FUN_8c0b5c86(void)
{
    register int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, 0x8C11FCE0, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int FUN_8c0b5ca0(void)
{
    register int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, 0x8C11FCFC, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int FUN_8c0b5cba(void)
{
    register int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8C9B0000, 0x8C11FD1C, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int FUN_8c0eed40(void)
{
    nlGetMatrix(0x0);
    *(unsigned int *)0x8C450864 = (*(int *)0x8C450860);
    *(unsigned short *)0x8C45085C = 0x0;
    return nlLoadMatrix(0x0);
}

int FUN_8c0f8270(int a4, int a5)
{
    *(unsigned int *)(((((unsigned int)((unsigned int)(*(short *)((((a4 - 5) << 1) + 0x8C127FC8))) >> 2) >> 1) + (((int)_builtin_get_vbr()) + 0x1C0)) + 0x0)) = a5;
    return 0x1;
}

int FUN_8c1dd692(int a4)
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

int FUN_8c1e0d30(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(int *)((int)stk + 8) = a5;
    *(int *)((int)stk + 4) = 0x8C209AFC;
    return (ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4)));
}

int FUN_8c1f8a4a(int a4)
{
    register int t5;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0x10)))));
    t5 = (int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t5;
    return t5;
}

int FUN_8c1f8a64(int a4)
{
    register int t5;

    *(unsigned int *)((a4 + 0x4)) = ((int)((unsigned int)(*(int *)((a4 + 0x0))) % (unsigned int)(*(int *)((a4 + 0xC)))));
    t5 = (int)((unsigned int)(*(int *)((a4 + 0x0))) / (unsigned int)(*(int *)((a4 + 0xC))));
    *(unsigned int *)((a4 + 0x8)) = t5;
    return t5;
}

int nlCommonTextureGetFreeMem(void)
{
    int stk[4];

    kmGetFreeTextureMem(((int)stk + 4), (((int)stk + 4) + 0x4));
    return (*(int *)(((int)stk + 4)));
}

int nlCommonTextureGetFreeBlock(void)
{
    int stk[4];

    kmGetFreeTextureMem((((int)stk + 4) + 0x4), ((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
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

int nlCommonTextureReloadI(int a4, int a5, int a6)
{
    return nlCommonTextureReloadA(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
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

int FUN_8c2006d6(int a4)
{
    register int t1;

    t1 = nlsndStreamGetFreq((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}

int FUN_8c20070a(int a4)
{
    register int t1;

    t1 = nlsndStreamGetBitSize((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t1;
}

int nlGetCurrentScanLine(void)
{
    int stk[3];

    kmGetCurrentScanline(((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}

int nlSysMetricsCpuPowerEnd(void)
{
    register int t0;
    register int t2;

    t0 = nlSysMetricsReadTimer();
    t2 = nlSysMetricsDiffTime((*(int *)0x8C44F69C), t0);
    return nlSysMetricsScaleTime(t2);
}

int FUN_8c205a20(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            *(volatile int *)((t1 + 0xC));
            t1 = (*(int *)((t1 + 0x4)));
            if (t1 == 0) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_8c0f26c0(int a4)
{
    return nlObjPutSetSpecularEyeDirectionF((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
}

int FUN_8c1e0c2c(int a4, int a5, int a6, int a7)
{
    register int t1;

    syCachePurgeAll(a4, a5, a6, a7);
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t1))(0x2);
}

int kmSetEndOfVertexCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x5, a4, a5);
}

int kmSetStripOverRunCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x4, a4, a5);
}

int adxb_DefAddWr(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x9C)) = ((*(int *)((a4 + 0x9C))) + a6);
    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + a6);
    return 0x98;
}

int FUN_8c200dc2(int a4, int a5, int a6)
{
    *(unsigned char *)((a4 + 0x5)) = (*(signed char *)((a4 + 0x60)));
    *(unsigned char *)((a4 + 0x60)) = 0x0;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
    return 0x0;
}

int nlObjPutLoadTextureOnce(int a4, int a5, int a6, int a7)
{
    return (nlObjPutLoadTextureOnce_Sub(a4, a5, a6, a7, 0x0));
}

int nlObjPutLoadTextureOnceGI(int a4, int a5, int a6, int a7)
{
    return (nlObjPutLoadTextureOnce_Sub(a4, a5, a6, a7, 0x1));
}

int FUN_8c0efa50(void)
{
    nlPushMatrix((*(int *)0x8C45087C));
    return nlMultiPushedMatrix();
}

int FUN_8c1e3260(int a4, int a5, int a6, int a7)
{
    kmyRequestCallback(0x2, a5, a6, a7);
    return 0x1;
}

int FUN_8c1e6738(int a4, int a5)
{
    gdGdcInitSystem(a4, a5);
    return 0x1;
}

int FUN_8c200654(int a4)
{
    return nlsndStreamGetPlayPos((*(short *)((a4 + 0x6))));
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

int ADXSJD_GetLpInsNsmpl(int a4)
{
    return ADXB_GetLpInsNsmpl((*(int *)((a4 + 0x4))));
}

int ADXSJD_GetCof(int a4)
{
    return ADXB_GetCof((*(int *)((a4 + 0x4))));
}

int FUN_8c1feb60(int a4, int a5)
{
    register int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)((((unsigned int)t0) & 0xFFFF0000) | ((((unsigned int)t0) & 0xFF) << 8) | ((((unsigned int)t0) >> 8) & 0xFF));
}

void FUN_8c0eab40(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = (*(int *)0x8C1DC88C);
}

int FUN_8c0f8260(int a4, int a5)
{
    *(unsigned int *)0x8C454F50 = a5;
    return 0x1;
}

int FUN_8c0f8290(int a4, int a5)
{
    *(unsigned int *)0x8C454F70 = a5;
    return 0x1;
}

int FUN_8c0f8250(int a4, int a5)
{
    *(unsigned int *)0x8C454F4C = a5;
    return 0x1;
}

void FUN_8c0f8370(void)
{
    *(unsigned int *)0xA05F6900 = 0x4000;
}

int FUN_8c0f8380(void)
{
    *(unsigned int *)0xA05F705C = 0x3;
    return 0xA05F705C;
}

void FUN_8c1e3278(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = (*(int *)0x8C45F930);
}

int FUN_8c1feb6a(int a4, int a5)
{
    return (unsigned short)(*(short *)(((a4 + a5) + 0x0)));
}

void FUN_8c1feb72(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = ((((unsigned int)a6) & 0xFFFF0000) | ((((unsigned int)a6) & 0xFF) << 8) | ((((unsigned int)a6) >> 8) & 0xFF));
}

void FUN_8c0ea550(int a4)
{
    *(unsigned int *)0x8C1DC884 = a4;
}

void FUN_8c0eaaf0(int a4)
{
    *(unsigned int *)0x8C1DC888 = a4;
}

int FUN_8c0eab20(void)
{
    return 0x8C1280B5;
}

void nlSysCreatePunchBuffer(int a4)
{
    *(unsigned int *)0x8C424410 = a4;
}

int nlSysMetricsGetLastTATime(void)
{
    return (*(int *)0x8C44F4D0);
}

int nlSysMetricsGetNativeUseSize(void)
{
    return (*(int *)0x8C44F504);
}

int nlSysMetricsGetNativeMaxSize(void)
{
    return (*(int *)0x8C44F510);
}

void nlSetPunchAlphaThreshold(int a4)
{
    *(unsigned int *)0xA05F811C = a4;
}

int FUN_8c0ec0d0(void)
{
    return (*(int *)0x8C44F4F8);
}

int FUN_8c0ec0e0(void)
{
    return (*(int *)0x8C44F4F4);
}

void kmfSetTimeOutCount(int a4, int a5)
{
    *(unsigned int *)0x8C45F7F0 = a5;
}

void FUN_8c0ee5b0(int a4)
{
    *(unsigned int *)0x8C44FBE8 = a4;
}

void FUN_8c0ee6e0(int a4)
{
    *(unsigned int *)0x8C1DC8DC = a4;
}

void FUN_8c0f2180(int a4)
{
    *(unsigned int *)0x8C450BF8 = a4;
}

int nlObjPutMvGetClosingMode(void)
{
    return (*(int *)0x8C450C00);
}

int FUN_8c0f24e0(void)
{
    return 0x8C12C116;
}

void FUN_8c0f2dc0(float f4)
{
    *(float *)0x8C1DCAA0 = f4;
}

int FUN_8c0f3a80(void)
{
    return 0x8C12C199;
}

void FUN_8c0f6e90(int a4)
{
    *(unsigned int *)0x8C454F3C = a4;
}

void nlDispStripSetPalette(int a4)
{
    *(unsigned int *)0x8C454F38 = a4;
}

int nlIntrGetEvent(void)
{
    return (*(int *)0x8C454FA8);
}

void FUN_8c1e2780(int a4)
{
    *(unsigned int *)0x8C46C664 = a4;
}

void FUN_8c1e3272(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x1;
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

void FUN_8c1feb7a(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = a6;
}

void nlFatalErrorReturn(void)
{
    
}

void FUN_8c0ef2bc(void)
{
    
}

void FUN_8c0ef354(void)
{
    
}

void FUN_8c0f8360(void)
{
    
}

int FUN_8c1e2f60(void)
{
    return 0x78;
}

int FUN_8c1e2f68(void)
{
    return 0x78;
}

void FUN_8c1e326e(void)
{
    
}

int FUN_8c1e629a(void)
{
    return 0x78;
}

int FUN_8c1f5d38(void)
{
    return 0x1;
}

void FUN_8c200110(void)
{
    
}

int FUN_8c200dd4(void)
{
    return 0x0;
}
