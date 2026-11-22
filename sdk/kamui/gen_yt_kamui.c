/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetDecNumSmpl(int);
int ADXSJD_GetStat(int);
int ADXSTM_GetStat(int);
int ADXT_Stop(int);
int setCullingThreshold(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_RcvrReplay(int);
float cpuDistXZ(int, int);
int cpuSglHitReady(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotTargetSet(int, float, float);
int gdFsReopenHn(int, int, int, int);
int kmInitDevice(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmSetWaitVsyncCount(int);
int kmiExCallBackFunc(int, int, int, int, float, float, float, float, float, float, float, float);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyRegisterBGPlane(int);
int mwRnaErrCallFunc(int, ...);
int mwlSbAlloc(void);
int mwlSbAllocWork(int);
int nlArcTan(float);
float nlCos(int);
int nlCreateVertexBuffer_multi_pass(int, int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlSetFatalErrorMode(int);
int nlSetWindowSize(float, float, float, float);
float nlSin(int);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nl_system_config_init(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaHandleOpen(void);
int nlsndStreamClose(int);
int nlsndStreamGenerateHdInfo(int);
int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamOpen(int);
int sys_init(void);
int FUN_8c0450ac(int a4, float f4, float f5);
int FUN_8c0f0d80(int a4, float f4, float f5, float f6);
int FUN_8c1f8120(int a4);
int FUN_8c07f038(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c200296(int a4);
int kmiProcessVertex_05(int a4, int a5, int a6, int a7);
int kmiProcessVertex_06(int a4, int a5, int a6, int a7);
void FUN_8c0eaf30(int a4, int a5, int a6, int a7);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int ADXT_ExecErrChk(int a4);
float FUN_8c049480(int a4, float f4, float f5);
int FUN_8c0ec6a0(int a4, int a5, int a6, int a7, int a8, int a9);
int kmiProcessVertex_07(int a4, int a5, int a6, int a7);
int kmiProcessVertex_13(int a4, int a5, int a6, int a7);
int kmiProcessVertex_08(int a4, int a5, int a6, int a7);
int kmiProcessVertex_14(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4);
int FUN_8c1f5c40(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);


int FUN_8c1f8120(int a4)
{
    int t39;

    *(unsigned int *)0x8C45EEA4 = 0x0;
    *(unsigned int *)0x8C45EEA8 = 0x0;
    *(unsigned int *)0x8C45EEB4 = (*(int *)((a4 + 0xF8)));
    *(unsigned int *)0x8C45EEB8 = (*(int *)((a4 + 0xF0)));
    *(unsigned int *)0x8C45EEBC = (*(int *)((a4 + 0xF4)));
    *(unsigned int *)0x8C45EE64 = (((((((((((*(int *)((a4 + 0x54))) << 1) | (*(int *)((a4 + 0x50)))) | ((*(int *)((a4 + 0x5C))) << 2)) | (((*(int *)((a4 + 0x68))) << 2) << 1)) | (((*(int *)((a4 + 0x30))) << 2) << 2)) | ((((*(int *)((a4 + 0x60))) << 2) << 2) << 1)) | ((((*(int *)((a4 + 0x28))) << 2) << 2) << 2)) | ((*(int *)((a4 + 0x2C))) << 7)) | ((*(int *)((a4 + 0x48))) << 8)) | (((*(int *)((a4 + 0x4C))) << 8) << 1));
    *(unsigned int *)0x8C45EE70 = (((*(int *)((a4 + 0x4))) & 0x7FF) | (((*(int *)((a4 + 0x0))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE68 = (((*(int *)((a4 + 0x4))) & 0x7FF) << 16);
    *(unsigned int *)0x8C45EE74 = (((*(int *)((a4 + 0x8))) & 0x7FF) | (((*(int *)((a4 + 0x14))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE78 = (((*(int *)((a4 + 0x10))) & 0x7FF) | (((*(int *)((a4 + 0xC))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE6C = (((*(int *)((a4 + 0x74))) & 0x7FF) | (((*(int *)((a4 + 0x78))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE7C = (((((*(int *)((a4 + 0x18))) & 0x7F) | (((*(int *)((a4 + 0x1C))) & 0xF) << 8)) | (((((*(int *)((a4 + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)((a4 + 0x24))) & 0x7F) << 22));
    *(unsigned int *)0x8C45EE88 = ((((((((*(int *)((a4 + 0x34))) & 0x1) | (((*(int *)((a4 + 0x38))) & 0x1) << 1)) | (((*(int *)((a4 + 0x3C))) & 0x1) << 2)) | ((((*(int *)((a4 + 0x40))) & 0x1) << 2) << 1)) | (((0xF & (*(int *)((a4 + 0x44)))) << 2) << 2)) | (((*(int *)((a4 + 0x6C))) & 0x1) << 8)) | (((*(int *)((a4 + 0x70))) & 0x3F) << 16));
    *(unsigned int *)0x8C45EE8C = ((*(int *)0x8C45EEB4) + (*(int *)0x8C45EEA4));
    *(unsigned int *)0x8C45EE90 = (((*(int *)0x8C45EEB8) + (*(int *)0x8C45EEA8)) | (((*(int *)0x8C45EEBC) + (*(int *)0x8C45EEA8)) << 16));
    t39 = kmiReadRegister(0x44);
    kmiWriteRegister(0x44, (0x800000 & t39));
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0xCC, (*(int *)0x8C45EE6C));
    kmiWriteRegister(0xD0, (*(int *)0x8C45EE64));
    kmiWriteRegister(0xD4, (*(int *)0x8C45EE70));
    kmiWriteRegister(0xD8, (*(int *)0x8C45EE74));
    kmiWriteRegister(0xDC, (*(int *)0x8C45EE78));
    kmiWriteRegister(0xE0, (*(int *)0x8C45EE7C));
    kmiWriteRegister(0xEC, (*(int *)0x8C45EE8C));
    kmiWriteRegister(0xF0, (*(int *)0x8C45EE90));
    kmiWriteRegister(0xE8, ((*(int *)0x8C45EE88) | 0x8));
    return (kmiWriteRegister(0xC8, (*(int *)0x8C45EE68)));
}


int kmiProcessVertex_05(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t17;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register float u30;
    register float u32;
    register int t34;
    register float u35;
    register float u37;
    register float u39;
    register float u41;
    register float u43;
    register float u45;
    register float u47;
    register float u49;
    register int t51;

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
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x10)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x14)));
        t17 = *(int *)((t6 + 0x0));
        u18 = *(float *)((t17 + 0x20));
        u20 = (u18 * 255.0f);
        if (!(2.14748365e+09f > (u18 * 255.0f))) {
            u20 = ((u18 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u22 = *(float *)((t17 + 0x24));
        u24 = (u22 * 255.0f);
        if (!(2.14748365e+09f > (u22 * 255.0f))) {
            u24 = ((u22 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u26 = *(float *)((t17 + 0x28));
        u28 = (u26 * 255.0f);
        if (!(2.14748365e+09f > (u26 * 255.0f))) {
            u28 = ((u26 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u30 = *(float *)((t17 + 0x2C));
        u32 = (u30 * 255.0f);
        if (!(2.14748365e+09f > (u30 * 255.0f))) {
            u32 = ((u30 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (((((((int)u20 & 0xFF) << 16) << 8) | (((int)u24 & 0xFF) << 16)) | (((int)u28 & 0xFF) << 8)) | ((int)u32 & 0xFF));
        t34 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u35 = *(float *)((t34 + 0x30));
        u37 = (u35 * 255.0f);
        if (!(2.14748365e+09f > (u35 * 255.0f))) {
            u37 = ((u35 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u39 = *(float *)((t34 + 0x34));
        u41 = (u39 * 255.0f);
        if (!(2.14748365e+09f > (u39 * 255.0f))) {
            u41 = ((u39 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u43 = *(float *)((t34 + 0x38));
        u45 = (u43 * 255.0f);
        if (!(2.14748365e+09f > (u43 * 255.0f))) {
            u45 = ((u43 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u47 = *(float *)((t34 + 0x3C));
        u49 = (u47 * 255.0f);
        if (!(2.14748365e+09f > (u47 * 255.0f))) {
            u49 = ((u47 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t51 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t51 + 0x18)) = (((((((int)u37 & 0xFF) << 16) << 8) | (((int)u41 & 0xFF) << 16)) | (((int)u45 & 0xFF) << 8)) | ((int)u49 & 0xFF));
        if ((unsigned int)t5 < (unsigned int)0x54) continue;
        break;
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int kmiProcessVertex_06(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t15;
    register float u16;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register float u30;
    register int t32;
    register float u33;
    register float u35;
    register float u37;
    register float u39;
    register float u41;
    register float u43;
    register float u45;
    register float u47;
    register int t49;

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
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        t15 = *(int *)((t6 + 0x0));
        u16 = *(float *)((t15 + 0x20));
        u18 = (u16 * 255.0f);
        if (!(2.14748365e+09f > (u16 * 255.0f))) {
            u18 = ((u16 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u20 = *(float *)((t15 + 0x24));
        u22 = (u20 * 255.0f);
        if (!(2.14748365e+09f > (u20 * 255.0f))) {
            u22 = ((u20 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u24 = *(float *)((t15 + 0x28));
        u26 = (u24 * 255.0f);
        if (!(2.14748365e+09f > (u24 * 255.0f))) {
            u26 = ((u24 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u28 = *(float *)((t15 + 0x2C));
        u30 = (u28 * 255.0f);
        if (!(2.14748365e+09f > (u28 * 255.0f))) {
            u30 = ((u28 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (((((((int)u18 & 0xFF) << 16) << 8) | (((int)u22 & 0xFF) << 16)) | (((int)u26 & 0xFF) << 8)) | ((int)u30 & 0xFF));
        t32 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u33 = *(float *)((t32 + 0x30));
        u35 = (u33 * 255.0f);
        if (!(2.14748365e+09f > (u33 * 255.0f))) {
            u35 = ((u33 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u37 = *(float *)((t32 + 0x34));
        u39 = (u37 * 255.0f);
        if (!(2.14748365e+09f > (u37 * 255.0f))) {
            u39 = ((u37 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u41 = *(float *)((t32 + 0x38));
        u43 = (u41 * 255.0f);
        if (!(2.14748365e+09f > (u41 * 255.0f))) {
            u43 = ((u41 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u45 = *(float *)((t32 + 0x3C));
        u47 = (u45 * 255.0f);
        if (!(2.14748365e+09f > (u45 * 255.0f))) {
            u47 = ((u45 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t49 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t49 + 0x18)) = (((((((int)u35 & 0xFF) << 16) << 8) | (((int)u39 & 0xFF) << 16)) | (((int)u43 & 0xFF) << 8)) | ((int)u47 & 0xFF));
        if ((unsigned int)t5 < (unsigned int)0x54) continue;
        break;
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}


int kmiProcessVertex_07(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t5;
    register int t6;
    register int t35;
    register int t39;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0xC)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x10)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x14)));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)(((*(int *)((t5 + 0x0))) + 0x18))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C460803);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C460802) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C460801) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        t35 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C460800) * (*(float *)((t35 + 0x1C))));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
        t39 = ((((int)stk + 4) + 0x28) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned int *)((t39 + 0x18)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x18)));
}

int kmiProcessVertex_13(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t5;
    register int t6;
    register int t35;
    register int t39;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0xC)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x10)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x14)));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)(((*(int *)((t5 + 0x0))) + 0x18))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C460803);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C460802) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C460801) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        t35 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C460800) * (*(float *)((t35 + 0x1C))));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
        t39 = ((((int)stk + 4) + 0x28) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned int *)((t39 + 0x18)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x18)));
}

int kmiProcessVertex_08(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t5;
    register int t6;
    register int t33;
    register int t37;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0xC)) = (*(int *)(((*(int *)((t5 + 0x0))) + 0x10)));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)(((*(int *)((t5 + 0x0))) + 0x18))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C460803);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C460802) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C460801) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        t33 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C460800) * (*(float *)((t33 + 0x1C))));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
        t37 = ((((int)stk + 4) + 0x28) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned int *)((t37 + 0x18)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x18)));
}

int kmiProcessVertex_14(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t5;
    register int t6;
    register int t33;
    register int t37;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x28) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0xC)) = (*(int *)(((*(int *)((t5 + 0x0))) + 0x10)));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)(((*(int *)((t5 + 0x0))) + 0x18))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C460803);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C460802) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C460801) * (*(float *)((0x1C + (*(int *)((t5 + 0x0)))))));
        t33 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C460800) * (*(float *)((t33 + 0x1C))));
        *(unsigned int *)((((((int)stk + 4) + 0x28) + t6) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
        t37 = ((((int)stk + 4) + 0x28) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned int *)((t37 + 0x18)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x18)));
}


int FUN_8c1f5c40(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t7;
    int t11;
    register int t12;
    register int t13;
    register int t17;
    register int t22;
    register int t19;

    t0 = *(int *)0x8C470AA4;
    *(unsigned int *)0x8C470AA4 = 0xF;
    t1 = *(int *)0x8C470ABC;
    t2 = *(int *)0xA05F6908;
    if ((t2 & t1) != 0) {
        t3 = 0x0;
        for (;;) {
            if (((t2 & t1) & ((int)0x1 << (int)t3)) != 0) {
                break;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                *(unsigned int *)0x8C470AA4 = t0;
                return 0x0;
            }
        }
        t7 = *(int *)((0x8C20C9B8 + (t3 << 2)));
        *(unsigned int *)0x8C470AA4 = t7;
        *(unsigned int *)0xA05F6908 = ((int)0x1 << (int)t3);
        *(unsigned int *)0x8C470CF0 = t7;
        kmiExCallBackFunc((*(int *)(((((t7 << 2) << 2) + 0x8C470AD0) + 0x0))), 0x8C470CF0, (*(int *)(((((t7 << 2) << 2) + 0x8C470AD0) + 0xC))), 0xA05F6908, f4, f5, f6, f7, f8, f9, f10, f11);
    } else {
        t11 = *(int *)0x8C470AB8;
        t12 = *(int *)0xA05F6900;
        if ((t12 & t11) != 0) {
            t13 = 0x0;
            for (;;) {
                if (((t12 & t11) & ((int)0x1 << (int)t13)) != 0) {
                    break;
                }
                t13 = (t13 + 0x1);
                if ((int)t13 >= (int)0x16) {
                    *(unsigned int *)0x8C470AA4 = t0;
                    return 0x0;
                }
            }
            t17 = *(int *)(((t13 << 2) + 0x8C20C960));
            *(unsigned int *)0x8C470AA4 = t17;
            if (t17 == 18) {
                *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
                t22 = ((int)0x1 << (int)t13);
            } else {
                if (t17 == 20) {
                    t19 = (((int)0x1 << (int)t13) | 0x3);
                } else {
                    t19 = ((int)0x1 << (int)t13);
                }
                t22 = t19;
            }
            *(unsigned int *)0xA05F6900 = t22;
            *(unsigned int *)0x8C470CF0 = t17;
            kmiExCallBackFunc((*(int *)(((((t17 << 2) << 2) + 0x8C470AD0) + 0x0))), 0x8C470CF0, (*(int *)(((((t17 << 2) << 2) + 0x8C470AD0) + 0xC))), 0xFFA0002C, f4, f5, f6, f7, f8, f9, f10, f11);
        }
    }
    *(unsigned int *)0x8C470AA4 = t0;
    return 0x0;
}
