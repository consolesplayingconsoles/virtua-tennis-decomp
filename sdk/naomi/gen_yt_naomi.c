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


int FUN_8c0f0d80(int a4, float f4, float f5, float f6)
{
    int stk[34];
    register int t0;
    register float t3;
    register int t5;
    register float u13;
    register float u14;
    register float u23;
    register int t15;
    register int t25;
    register float t26;
    register float u29;
    register float u30;
    register float u31;
    register float u34;
    register float u35;
    register float u36;
    register float t38;
    register float t41;
    register float t42;
    register float u43;
    register float t44;
    register float t46;
    register float u48;
    register float u50;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0x8C1DCA1C) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * ((*(float *)0x8C1DCA1C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t5)));
    } else {
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 12));
    u14 = *(float *)(((int)stk + 16));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0x8C1DCA20) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        u23 = ((nlTan(t15)) * ((*(float *)0x8C1DCA20) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0x8C1DCA1C = 0.0f;
    *(float *)0x8C1DCA20 = 0.0f;
    u29 = (u14 * u13);
    u30 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))));
    u31 = (u29 * (1.0f / t26));
    *(float *)0x8C1DC9EC = (u30 * 0.5f);
    *(float *)0x8C1DC9F0 = (u31 * 0.5f);
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u34 = *(float *)0x8C1DC9F0;
    u35 = *(float *)0x8C1DCA28;
    *(float *)0x8C450B14 = (u35 * u34);
    u36 = *(float *)0x8C450B10;
    if (u36 > (u35 * u34)) {
        *(float *)0x8C1DC9F4 = u36;
    } else {
        *(float *)0x8C1DC9F4 = (u35 * u34);
    }
    t38 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 20)) = (float)(nlArcTan((t38 / (*(float *)(((int)stk + 16))))));
    *(float *)0x8C450AE4 = 0.0f;
    *(float *)0x8C450AD4 = 0.0f;
    *(float *)0x8C450B00 = 0.0f;
    *(float *)0x8C450AF0 = 0.0f;
    t41 = nlCos((t0 >> 1));
    *(float *)0x8C450AD0 = t41;
    *(float *)0x8C450AE0 = (-t41);
    t42 = nlSin((t0 >> 1));
    *(float *)0x8C450AE8 = t42;
    *(float *)0x8C450AD8 = t42;
    u43 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u43;
    t44 = nlCos((int)u43);
    *(float *)0x8C450AF4 = t44;
    *(float *)0x8C450B04 = (-t44);
    t46 = nlSin((*(int *)(((int)stk + 8))));
    *(float *)0x8C450B08 = t46;
    *(float *)0x8C450AF8 = t46;
    *(float *)0x8C450AEC = 0.0f;
    *(float *)0x8C450ADC = 0.0f;
    *(float *)0x8C450B0C = 0.0f;
    *(float *)0x8C450AFC = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u14 * u13);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u48 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u48) / (f5 - u48));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u50 = (f5 * (*(float *)(((int)stk + 4))));
    *(float *)(((int)stk + 84)) = ((u50 * (1.0f + 1.0f)) / (f5 - u48));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0x8C458E3C = f5;
    *(float *)0x8C458E40 = (*(float *)(((int)stk + 4)));
    *(float *)0x8C458E44 = (1.0f / f5);
    *(float *)0x8C458DBC = f5;
    *(float *)0x8C458DA4 = (-f5);
    *(float *)0x8C458DC0 = (*(float *)(((int)stk + 4)));
    *(float *)0x8C458DB8 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}


void FUN_8c0eaf30(int a4, int a5, int a6, int a7)
{
    register int t9;

    *(unsigned int *)0x8C42446C = 0x0;
    if ((a4 != 0) && ((a4 != 21) && ((a4 != 21) && (a4 != 21)))) {
    } else {
        *(unsigned int *)0x8C42446C = 0x1;
    }
    *(unsigned int *)0x8C424470 = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        *(unsigned int *)0x8C424470 = 0x1;
    }
    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        *(unsigned int *)0x8C424414 = 0x1;
    } else {
        *(unsigned int *)0x8C424414 = 0x0;
    }
    _builtin_set_gbr((void *)(0x8C458E20));
    sys_init();
    *(unsigned short *)0x8C458DDC = 0x0;
    *(unsigned short *)0x8C458DDE = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0x8C458DDC = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0x8C458DDE = 0x1;
    }
    *(unsigned int *)0x8C42448C = (*(int *)((((a5 & 0xF) << 2) + 0x8C127A44)));
    t9 = 0x0;
    if (a7 == 1) {
        t9 = 0x10000;
    }
    kmInitDevice(t9);
    if ((*(int *)0x8C424470) == 1) {
        kmSetPALEXTCallback(0x8C0EAB40);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0x4))), (*(int *)0x8C42448C), (*(short *)0x8C458DDC), (*(short *)0x8C458DDE));
    *(unsigned short *)0x8C458DD8 = (*(short *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0x8)));
    *(unsigned short *)0x8C458DDA = (*(short *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0xA)));
    *(unsigned int *)0x8C458DC8 = 0xFFFFFFFF;
    *(unsigned int *)0x8C458DD0 = 0x0;
    *(unsigned int *)0x8C458DE0 = 0x0;
    *(unsigned int *)0x8C458DC4 = 0x0;
    *(float *)0x8C458DF4 = 0.0f;
    *(float *)0x8C458DF8 = 0.0f;
    *(float *)0x8C458DFC = 0.0f;
    *(float *)0x8C458E00 = 0.0f;
    *(unsigned int *)0x8C458DE4 = 0x0;
    *(unsigned int *)0x8C458DE8 = 0x0;
    *(unsigned int *)0x8C458DEC = 0x0;
    *(unsigned int *)0x8C458DF0 = 0x0;
    *(float *)0x8C458E48 = 1.0f;
    *(unsigned int *)0x8C458E64 = 0x0;
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    *(unsigned int *)0x8C424474 = a6;
    nl_system_config_init(0x200000);
    nlSetFatalErrorMode(0x0);
    *(unsigned int *)0x8C424494 = 0x0;
    *(unsigned int *)0x8C424418 = 0x68;
    *(unsigned int *)0x8C424460 = 0x0;
    *(unsigned int *)0x8C424464 = 0x0;
    *(unsigned int *)0x8C1DC8A0 = 0x0;
    *(unsigned int *)0x8C1DC8A4 = 0x0;
    *(unsigned int *)0x8C1DC8A8 = 0x0;
    _builtin_set_imask(0x0);
}

int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6)
{
    int stk[31];
    register int t0;
    register float t3;
    register int t5;
    register float u13;
    register float u14;
    register float u23;
    register int t15;
    register int t25;
    register float t26;
    register float u27;
    register float u30;
    register float u31;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float u40;
    register float u41;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 4)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0x8C1DCA1C) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * ((*(float *)0x8C1DCA1C) + 1.0f)));
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos(t5)));
    } else {
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 4));
    u14 = *(float *)(((int)stk + 12));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0x8C1DCA20) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        u23 = ((nlTan(t15)) * ((*(float *)0x8C1DCA20) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0x8C1DCA1C = 0.0f;
    *(float *)0x8C1DCA20 = 0.0f;
    u27 = *(float *)0x8C0F14D4;
    u30 = (u14 * u13);
    u31 = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 16))));
    u32 = (u30 * (1.0f / t26));
    *(float *)0x8C1DC9EC = (u31 * u27);
    *(float *)0x8C1DC9F0 = (u32 * u27);
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u35 = *(float *)0x8C1DC9F0;
    u36 = *(float *)0x8C1DCA28;
    *(float *)0x8C450B14 = (u36 * u35);
    u37 = *(float *)0x8C450B10;
    if (u37 > (u36 * u35)) {
        *(float *)0x8C1DC9F4 = u37;
    } else {
        *(float *)0x8C1DC9F4 = (u36 * u35);
    }
    *(float *)(((int)stk + 20)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = (u14 * u13);
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 64)) = 1.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    u40 = (f5 * f6);
    u41 = (u40 * (1.0f + 1.0f));
    u41 = -u41;
    *(float *)(((int)stk + 76)) = (u41 / (f5 - f6));
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)0x8C458E3C = f5;
    *(float *)0x8C458E40 = f6;
    *(float *)0x8C458E44 = (1.0f / f5);
    *(float *)0x8C458DBC = f5;
    *(float *)0x8C458DA4 = (-f5);
    *(float *)0x8C458DC0 = f6;
    *(float *)0x8C458DB8 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x10));
    return (nl_set_cnv_proj_pers());
}

int nlPerspective_L(int a4, float f4, float f5, float f6)
{
    int stk[32];
    register int t0;
    register float t1;
    register float u2;
    register int t4;
    register float t5;
    register int t7;
    register int t9;
    register int t20;
    register float t16;
    register float t24;
    register float u25;
    register float u27;
    register float u28;
    register float u31;
    register float u32;
    register float u33;
    register float u35;
    register float u36;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 4));
    t1 = nlTan((t0 >> 1));
    u2 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 8)) = (u2 / (1.0f / t1));
    if ((*(float *)0x8C1DCA1C) != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 4)) = t4;
        t5 = nlTan(t4);
        t7 = nlArcTan((t5 * ((*(float *)0x8C1DCA1C) + 1.0f)));
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos(t7)));
    } else {
        t9 = nlArcTan((u2 / (1.0f / t1)));
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos(t9)));
    }
    t20 = (t0 >> 1);
    if ((*(float *)0x8C1DCA20) != 0.0f) {
        t16 = nlTan((t0 >> 1));
        t20 = (nlArcTan((t16 * ((*(float *)0x8C1DCA20) + 1.0f))));
    }
    t24 = nlCos(t20);
    *(float *)0x8C1DCA1C = 0.0f;
    *(float *)0x8C1DCA20 = 0.0f;
    u25 = *(float *)(((int)stk + 12));
    u27 = ((1.0f / t1) * (1.0f / t24));
    u28 = (((1.0f / t1) / u25) * (*(float *)(((int)stk + 16))));
    *(float *)0x8C1DC9EC = (u28 * 0.5f);
    *(float *)0x8C1DC9F0 = (u27 * 0.5f);
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u31 = *(float *)0x8C1DC9F0;
    u32 = *(float *)0x8C1DCA28;
    *(float *)0x8C450B14 = (u32 * u31);
    u33 = *(float *)0x8C450B10;
    if (u33 > (u32 * u31)) {
        *(float *)0x8C1DC9F4 = u33;
    } else {
        *(float *)0x8C1DC9F4 = (u32 * u31);
    }
    *(float *)(((int)stk + 20)) = ((1.0f / t1) / u25);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = (1.0f / t1);
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 64)) = 1.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    u35 = (f5 * f6);
    u36 = (u35 * (1.0f + 1.0f));
    u36 = -u36;
    *(float *)(((int)stk + 76)) = (u36 / (f5 - f6));
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)0x8C458E3C = f5;
    *(float *)0x8C458E40 = f6;
    *(float *)0x8C458E44 = (1.0f / f5);
    *(float *)0x8C458DBC = f5;
    *(float *)0x8C458DA4 = (-f5);
    *(float *)0x8C458DC0 = f6;
    *(float *)0x8C458DB8 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x10));
    return (nl_set_cnv_proj_pers());
}


int FUN_8c0ec6a0(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C44F6A0) + 0x0)) = a5;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C44F6A0) + 0x4)) = a6;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C44F6A0) + 0x8)) = a7;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C44F6A0) + 0xC)) = a8;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C44F6A0) + 0x10)) = a9;
    t0 = 0x0;
    if ((unsigned int)a4 < (unsigned int)((*(int *)0x8C424240) - 1)) {
    } else {
        *(unsigned int *)0x8C424210 = ((*(int *)0x8C424210) | 0x40);
        t1 = 0x0;
        t2 = ((((a4 << 2) + a4) << 2) + 0x8C44F6A0);
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)(*(int *)0x8C424240)) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + t1);
            t2 = (t2 << 2);
            t2 = (t2 + 0x8C44F6A0);
            nlCreateVertexBuffer_multi_pass(t1, (*(int *)((t2 + 0x0))), (*(int *)((t2 + 0x4))), (*(int *)((t2 + 0x8))), ((*(int *)((t2 + 0xC)))), ((*(int *)((t2 + 0x10)))));
            t1 = (t1 + 0x1);
        }
        t1 = kmSetSystemConfiguration(0x8C42420C);
        if (t1 != 0) {
            _builtin_trapa(65);
        }
        *(unsigned int *)(((*(int *)0x8C454FC4) + 0x0)) = 0x800000;
        if ((*(int *)0x8C424494) == 0) {
            nlLoadDummyTexture();
            *(unsigned int *)0x8C424494 = 0x1;
        }
        nlSysInitStripContextBG(0x8C454FE0);
        nlSysInitStripContextVtx(0x8C458610);
        *(unsigned int *)0x8C458C10 = 0x8C458610;
        *(unsigned int *)0x8C458C14 = 0x0;
        t2 = *(short *)0x8C458DDA;
        t3 = *(short *)0x8C458DD8;
        if (0x0 != 0) {
            t4 = (short)t2;
            if ((*(short *)0x8C458DDE) == 1) {
                t5 = ((short)t2 + (short)t2);
                if ((int)((short)t2 + (short)t2) > (int)0x1E0) {
                    t5 = 0x1E0;
                }
                t4 = t5;
            }
            nlSetWindowSize(0.0f, 0.0f, (float)t3, (float)t4);
        } else {
            nlSetWindowSize(0.0f, 0.0f, (float)t3, (float)(short)t2);
        }
        setCullingThreshold(0.0199999996f);
        *(unsigned int *)0xFF000038 = 0xC;
        *(unsigned int *)0xFF00003C = 0xC;
        kmSetWaitVsyncCount((*(int *)0x8C424474));
        t0 = t1;
    }
    return t0;
}


