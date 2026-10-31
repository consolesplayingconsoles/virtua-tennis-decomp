/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetDecNumSmpl(int);
int ADXSJD_GetStat(int);
int ADXSTM_GetStat(int);
int ADXT_Stop(int);
int FUN_8c1e6420(float);
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
float FUN_8c07f038(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c200296(int a4);
int FUN_8c1e55c0(int a4, int a5, int a6, int a7);
int FUN_8c1e57a0(int a4, int a5, int a6, int a7);
void FUN_8c0eaf30(int a4, int a5, int a6, int a7);
int FUN_8c0f1200(int a4, float f4, float f5, float f6);
int FUN_8c0f1000(int a4, float f4, float f5, float f6);
int FUN_8c1f1658(int a4);
float FUN_8c049480(int a4, float f4, float f5);
int FUN_8c0ec6a0(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_8c1e594e(int a4, int a5, int a6, int a7);
int FUN_8c1e5e80(int a4, int a5, int a6, int a7);
int FUN_8c1e5a8e(int a4, int a5, int a6, int a7);
int FUN_8c1e5fc0(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4);
int FUN_8c1f5c40(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_8c0450ac(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4))) != 0.0f) {
        cpuSglHitReady(a4);
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
        t1 = 0x20;
    } else {
        if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
            u0 = *(float *)((a4 + 0xAE8));
            u1 = *(float *)((a4 + 0xB9C));
            u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
            u0 = *(float *)((a4 + 0xB98));
            u1 = *(float *)((a4 + 0xA2C));
            u2 = *(float *)((a4 + 0xB00));
            t2 = 0xB00;
            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u2 > 0.0f) - (0.0f > u2))) {
                if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                    u0 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                } else {
                    u0 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                }
                t3 = 0x8C0454CC;
                if ((*(float *)0x8C0454CC) > u0) {
                    u0 = *(float *)(((0xB98 + a4) + 0x0));
                    u1 = *(float *)(((0xA2C + a4) + 0x0));
                    u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
                    t3 = 0x20;
                }
                t2 = t3;
            }
            t3 = t2;
        } else {
            t2 = *(int *)((a4 + 0xB5C));
            t4 = *(int *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
            u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
            u1 = (*(float *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
            u1 = u1 + 8.0f * u0;
            u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x30));
            u2 = (*(float *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
            u2 = u2 + 8.0f * u0;
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            if (u0 > 37.0349998f) {
                u0 = *(float *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f);
            } else {
                u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u3 = (-u0);
                if (!(0.0f > u0)) {
                    u3 = u0;
                }
                if (0.200000003f > u3) {
                    u0 = *(float *)((a4 + 0xAE8));
                    u3 = *(float *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u4 = 20.0f;
                    u5 = u3;
                    u6 = (float)(((u0 - u3) > 0.0f) - (0.0f > (u0 - u3)));
                } else {
                    u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
                    t4 = (u0 > 0.0f) - (0.0f > u0);
                    u3 = (-u0);
                    if (!(0.0f > u0)) {
                        u3 = u0;
                    }
                    u4 = 25.0f;
                    u5 = (*(float *)(((((0x1 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
                    u6 = ((float)t4 * u3);
                }
                u0 = u5;
                u0 = u0 + u4 * u6;
                u1 = u0;
            }
            u0 = (-u2);
            if (!(0.0f > u2)) {
                u0 = u2;
            }
            if (u0 > 95.0800018f) {
                u0 = ((*(float *)((a4 + 0xB00))) * 95.0800018f);
            } else {
                u3 = (-u2);
                if (!(0.0f > u2)) {
                    u3 = u2;
                }
                u4 = u2;
                if (35.6550026f > u3) {
                    u4 = ((*(float *)((a4 + 0xB00))) * 35.6550026f);
                }
                u0 = u4;
            }
            u2 = (-u0);
            if (!(0.0f > u0)) {
                u2 = u0;
            }
            u0 = (-1.0f);
            u0 = u0 + (1.0f + 1.0f) * (u2 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u1) / 41.1500015f), u0);
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x24))) == 0) {
                t2 = cpuShotAimCheck(a4);
                *(unsigned char *)(((0x24 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = t2;
                if ((unsigned char)t2 != 0) {
                    *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
                } else {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                }
            } else {
                *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
            }
            u0 = *(float *)(((0xB98 + a4) + 0x0));
            u1 = *(float *)(((0xA2C + a4) + 0x0));
            u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
            t2 = 0x8;
            if (!((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8))) > 0.0f)) {
            } else {
                u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = (u0 - 1.0f);
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                t2 = 0x20;
            }
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

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

float FUN_8c07f038(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[24];
    register float u6;
    register float t11;
    register float t14;
    register float u43;
    register float u44;
    register float u45;
    register float u46;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register float u53;
    register float u54;
    register float u59;
    register float u60;
    register float t64;
    register float u80;
    register float u81;
    register float u95;
    register float t85;
    register float u101;
    register float u115;
    register float t105;
    register float u121;
    register float u135;
    register float t125;
    register float u150;
    register float u37;
    register float u26;
    register float u62;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register float u83;
    register int t91;
    register int t92;
    register int t93;
    register int t94;
    register float u103;
    register int t111;
    register int t112;
    register int t113;
    register int t114;
    register float u123;
    register int t131;
    register int t132;
    register int t133;
    register int t134;

    if ((*(float *)((a5 + 0x0))) == (*(float *)((a4 + 0x0)))) {
        u6 = *(float *)((a5 + 0x0));
        if (!(u6 > (*(float *)((a6 + 0x0))))) {
        } else {
            if (!((*(float *)((a7 + 0x0))) > u6)) {
            } else {
                *(float *)((a10 + 0x0)) = (*(float *)((a4 + 0x0)));
                *(float *)((a10 + 0x8)) = (*(float *)((a6 + 0x8)));
                t11 = cpuDistXZ(a5, a10);
                *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x0)));
                *(float *)(((int)stk + 52)) = (*(float *)((a7 + 0x8)));
                t14 = cpuDistXZ(a5, (((int)stk + 4) + 0x28));
                if (!(t11 > t14)) {
                } else {
                    *(float *)((a10 + 0x0)) = (*(float *)((a4 + 0x0)));
                    *(float *)((a10 + 0x8)) = (*(float *)((a7 + 0x8)));
                }
                u26 = t14;
            }
            u37 = u26;
        }
        u150 = u37;
    } else {
        u43 = *(float *)((a4 + 0x0));
        u44 = *(float *)((a5 + 0x8));
        u45 = *(float *)((a4 + 0x8));
        u46 = *(float *)((a5 + 0x0));
        t48 = a4;
        t49 = a5;
        t50 = a6;
        t51 = a7;
        t52 = 0x0;
        u53 = (*(float *)0x8C07F2B8);
        for (;;) {
            u54 = *(float *)0x8C07F2BC;
            *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)((a6 + 0x0))) - ((float)t52 * u54));
            *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = ((*(float *)((a6 + 0x8))) - (float)t52);
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(float *)((a7 + 0x0))) + ((float)t52 * u54));
            *(float *)(((((int)stk + 4) + 0x10) + 0x8)) = ((*(float *)((a7 + 0x8))) + (float)t52);
            u59 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
            u60 = (u45 - (((u44 - u45) / (u46 - u43)) * u43));
            u60 = u60 + u59 * ((u44 - u45) / (u46 - u43));
            *(float *)(((int)stk + 16)) = u59;
            if ((u60 > (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)))) && (u62 = *(float *)(((int)stk + 28)), u62 > u60)) {
                t49 = ((int)stk + 4);
                t49 = (t49 + 0x28);
                *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 16)));
                *(float *)(((int)stk + 52)) = u60;
                t48 = a5;
                t64 = cpuDistXZ(t48, t49);
                if (u53 > t64) {
                    u53 = t64;
                    *(float *)((a10 + 0x0)) = (*(float *)(((int)stk + 16)));
                    *(float *)((a10 + 0x8)) = u60;
                }
            } else {
                t70 = t48;
                t71 = t49;
                t72 = t50;
                t73 = t51;
            }
            u80 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
            t48 = t70;
            t49 = t71;
            t50 = t72;
            t51 = t73;
            u81 = (u45 - (((u44 - u45) / (u46 - u43)) * u43));
            u81 = u81 + u80 * ((u44 - u45) / (u46 - u43));
            *(float *)(((int)stk + 12)) = u80;
            u95 = u80;
            if ((u81 > (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)))) && (u83 = *(float *)(((((int)stk + 4) + 0x10) + 0x8)), u83 > u81)) {
                t49 = ((int)stk + 4);
                t49 = (t49 + 0x28);
                *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 12)));
                *(float *)(((int)stk + 52)) = u81;
                t48 = a5;
                t85 = cpuDistXZ(t48, t49);
                if (u53 > t85) {
                    u53 = t85;
                    *(float *)((a10 + 0x0)) = (*(float *)(((int)stk + 12)));
                    *(float *)((a10 + 0x8)) = u81;
                }
                u95 = t85;
            } else {
                t91 = t48;
                t92 = t49;
                t93 = t50;
                t94 = t51;
            }
            t48 = t91;
            t49 = t92;
            t50 = t93;
            t51 = t94;
            u101 = *(float *)(((((int)stk + 4) + 0x1C) + 0x8));
            *(float *)(((int)stk + 8)) = u101;
            u115 = u95;
            if ((((u101 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43))) > (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))) && (u103 = *(float *)(((int)stk + 20)), u103 > ((u101 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43))))) {
                t49 = ((int)stk + 4);
                *(float *)(((int)stk + 44)) = ((u101 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43)));
                t49 = (t49 + 0x28);
                *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 8)));
                t48 = a5;
                t105 = cpuDistXZ(t48, t49);
                if (u53 > t105) {
                    u53 = t105;
                    *(float *)((a10 + 0x0)) = ((u101 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43)));
                    *(float *)((a10 + 0x8)) = (*(float *)(((int)stk + 8)));
                }
                u115 = t105;
            } else {
                t111 = t48;
                t112 = t49;
                t113 = t50;
                t114 = t51;
            }
            t48 = t111;
            t49 = t112;
            t50 = t113;
            t51 = t114;
            u121 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
            *(float *)(((int)stk + 4)) = u121;
            u135 = u115;
            if ((((u121 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43))) > (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))) && (u123 = *(float *)(((((int)stk + 4) + 0x10) + 0x0)), u123 > ((u121 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43))))) {
                t49 = ((int)stk + 4);
                *(float *)(((int)stk + 44)) = ((u121 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43)));
                t49 = (t49 + 0x28);
                *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 4)));
                t48 = a5;
                t125 = cpuDistXZ(t48, t49);
                if (u53 > t125) {
                    u53 = t125;
                    *(float *)((a10 + 0x0)) = ((u121 - (u45 - (((u44 - u45) / (u46 - u43)) * u43))) / ((u44 - u45) / (u46 - u43)));
                    *(float *)((a10 + 0x8)) = (*(float *)(((int)stk + 4)));
                }
                u135 = t125;
            } else {
                t131 = t48;
                t132 = t49;
                t133 = t50;
                t134 = t51;
            }
            t48 = t131;
            t49 = t132;
            t50 = t133;
            t51 = t134;
            if (u53 != (*(float *)0x8C07F2B8)) {
                break;
            }
            t48 = 0x3;
            t52 = (t52 + 0x1);
            if ((int)t52 < (int)t48) continue;
            return u135;
        }
        u150 = u135;
    }
    return u150;
}

int FUN_8c200296(int a4)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register int t19;
    register int t20;
    register int t22;
    register int t23;
    register int t25;
    register int t29;
    register int t30;
    register int t31;
    register int t33;
    register int t34;
    register int t36;
    register int t40;

    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x2)) {
        t0 = mwlSbAlloc();
        if (t0 == 0) {
            *(int *)((int)stk + 4) = 0x8C20B1DC;
            mwRnaErrCallFunc(0x8C20B1DC);
        } else {
            *(unsigned int *)((t0 + 0x0)) = 0x8C20CA68;
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)a4) {
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)a4) {
                            *(unsigned short *)((t0 + 0x6)) = (nlsndStreamOpen(a4));
                            t4 = *(short *)((t0 + 0x6));
                            if (((int)t4 >= 0) && ((int)t4 <= (int)0x7)) {
                                t6 = mwlSbAllocWork((*(short *)((t0 + 0x6))));
                                *(unsigned int *)((t0 + 0x1C)) = t6;
                                if (t6 == 0) {
                                    *(int *)((int)stk + 4) = 0x8C20B2B4;
                                    mwRnaErrCallFunc(0x8C20B2B4);
                                    nlsndStreamClose((*(short *)((t0 + 0x6))));
                                    return 0x0;
                                }
                                nlsndStreamGenerateHdInfo((*(int *)(((*(int *)((t0 + 0x1C))) + 0x4))));
                                *(unsigned char *)((t0 + 0x60)) = 0x0;
                                *(unsigned char *)((t0 + 0x5)) = 0x0;
                                *(unsigned int *)((t0 + 0x18)) = 0x0;
                                *(unsigned int *)((t0 + 0xC)) = a4;
                                *(unsigned int *)((t0 + 0x8)) = a4;
                                *(unsigned int *)((t0 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x0, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x24)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x1, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x28)) = (*(int *)(((int)stk + 12)));
                                *(unsigned int *)((t0 + 0x48)) = 0xFFFFFFFF;
                                *(unsigned int *)((t0 + 0x4C)) = 0x0;
                                *(unsigned int *)((t0 + 0x50)) = 0x0;
                                *(unsigned int *)((t0 + 0x54)) = 0x0;
                                *(unsigned short *)((t0 + 0x58)) = 0x0;
                                *(unsigned short *)((t0 + 0x5A)) = 0x0;
                                *(unsigned char *)((t0 + 0x61)) = 0xFFFFFFFF;
                                *(unsigned short *)((t0 + 0x62)) = 0xFFFFFFFF;
                                *(unsigned char *)((t0 + 0x4)) = 0x1;
                                return t0;
                            }
                            *(int *)((int)stk + 4) = 0x8C20B278;
                            mwRnaErrCallFunc(0x8C20B278);
                            return 0x0;
                        }
                        t19 = nlsndG2DmaHandleOpen();
                        if (t19 == 0) {
                            break;
                        }
                        t20 = ((t2 << 2) + (t0 + 0x34));
                        t2 = (t2 + 0x1);
                        *(unsigned int *)((t20 + 0x0)) = t19;
                    }
                    *(int *)((int)stk + 4) = 0x8C20B210;
                    mwRnaErrCallFunc(0x8C20B210);
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    if ((int)t2 > 0) {
                        t22 = (t0 + 0x2C);
                        t23 = (t0 + 0x34);
                        for (;;) {
                            t25 = nlsndG2DmaHandleClose((*(int *)((t23 + 0x0))));
                            if ((int)t25 < 0) {
                                *(int *)((int)stk + 4) = 0x8C20B244;
                                mwRnaErrCallFunc(0x8C20B244);
                            }
                            *(unsigned int *)((t22 + 0x0)) = 0x0;
                            t22 = (t22 + 0x4);
                            t29 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t29 + 0x1);
                            t23 = (t23 + 0x4);
                            if ((int)(t29 + 0x1) >= (int)t2) {
                                break;
                            }
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t30 = nlsndG2DmaHandleOpen();
                if (t30 == 0) {
                    break;
                }
                t31 = ((t2 << 2) + (t0 + 0x2C));
                t2 = (t2 + 0x1);
                *(unsigned int *)((t31 + 0x0)) = t30;
            }
            *(int *)((int)stk + 4) = 0x8C20B210;
            mwRnaErrCallFunc(0x8C20B210);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)t2 > 0) {
                t33 = (t0 + 0x2C);
                t34 = (t0 + 0x2C);
                for (;;) {
                    t36 = nlsndG2DmaHandleClose((*(int *)((t33 + 0x0))));
                    if ((int)t36 < 0) {
                        *(int *)((int)stk + 4) = 0x8C20B244;
                        mwRnaErrCallFunc(0x8C20B244);
                    }
                    *(unsigned int *)((t34 + 0x0)) = 0x0;
                    t34 = (t34 + 0x4);
                    t40 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t40 + 0x1);
                    t33 = (t33 + 0x4);
                    if ((int)(t40 + 0x1) >= (int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        *(int *)((int)stk + 4) = 0x8C20B1AC;
        mwRnaErrCallFunc(0x8C20B1AC);
    }
    return 0x0;
}

int FUN_8c1e55c0(int a4, int a5, int a6, int a7)
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

int FUN_8c1e57a0(int a4, int a5, int a6, int a7)
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

int FUN_8c0f1200(int a4, float f4, float f5, float f6)
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

int FUN_8c0f1000(int a4, float f4, float f5, float f6)
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

int FUN_8c1f1658(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((t2 == 3) && (t0 = *(signed char *)((a4 + 0x72)), t0 == 0)) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = ADXSJD_GetDecNumSmpl((*(int *)((a4 + 0x4))));
            if ((*(int *)((a4 + 0x64))) == t0) {
                *(unsigned short *)((a4 + 0x68)) = ((*(short *)((a4 + 0x68))) + 0x1);
                t3 = *(int *)((a4 + 0x38));
                if ((int)(*(short *)((a4 + 0x68))) > (int)((t3 << 2) + t3)) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFE;
                }
            } else {
                *(unsigned short *)((a4 + 0x68)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x64)) = t0;
            if ((*(short *)((a4 + 0x60))) != 0) {
                t0 = *(signed char *)((a4 + 0x6D));
                if ((t0 != 1) && (t0 != 2)) {
                } else {
                    ADXT_Stop(a4);
                }
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                    *(unsigned short *)((a4 + 0x68)) = 0x0;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x68)) = 0x0;
        }
    } else {
        *(unsigned short *)((a4 + 0x68)) = 0x0;
    }
    if (((int)t2 >= (int)0x1) && (((int)t2 <= (int)0x3) && (t1 = *(signed char *)((a4 + 0x72)), t1 == 0))) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = 0x0;
            if ((*(int *)((a4 + 0x14))) != 0) {
                t1 = *(int *)((a4 + 0x14));
                t0 = (((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1));
            }
            if ((int)t0 < (int)0x40) {
                *(unsigned short *)((a4 + 0x6A)) = ((*(short *)((a4 + 0x6A))) + 0x1);
                if (t2 == 3) {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) <= (int)((t0 << 2) + t0)) {
                    } else {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                } else {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) > (int)(((t0 << 2) + t0) << 2)) {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                }
                t0 = 0x60;
                if ((*(short *)((a4 + 0x60))) != 0) {
                    t1 = *(signed char *)((a4 + 0x6D));
                    if (t1 == 1) {
                        ADXT_Stop(a4);
                    } else {
                        if (t1 == 2) {
                            adxt_RcvrReplay(a4);
                        }
                    }
                    t1 = 0x6D;
                    if ((*(signed char *)((a4 + 0x6D))) != 0) {
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x6A)) = 0x0;
                        t1 = 0x6A;
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x6A)) = 0x0;
            t0 = 0x6A;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x6A)) = 0x0;
        t1 = 0x6A;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = ADXSTM_GetStat((*(int *)((a4 + 0x8))));
        t2 = t1;
        if (t1 == 4) {
            t1 = *(signed char *)((a4 + 0x6D));
            if (t1 == 1) {
                ADXT_Stop(a4);
            } else {
                if (t1 == 2) {
                    adxt_RcvrReplay(a4);
                }
            }
            t1 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

float FUN_8c049480(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x1);
            }
            u0 = 25.0f;
            u0 = u0 + 5.0f * (nlRandom());
            u1 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
            u1 = u1 + u0 * (float)((t2 << 1) - 1);
            u0 = *(float *)((a4 + 0xB00));
            u2 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.150000006f)) + 1.04999995f);
            u3 = (u0 * u2);
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            u2 = u1;
            if (u0 > 39.0925026f) {
                u2 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 39.0925026f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u2;
            *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
            u0 = 118.849998f;
        }
        u1 = u0;
    }
    return u1;
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
        FUN_8c1e6420(0.0199999996f);
        *(unsigned int *)0xFF000038 = 0xC;
        *(unsigned int *)0xFF00003C = 0xC;
        kmSetWaitVsyncCount((*(int *)0x8C424474));
        t0 = t1;
    }
    return t0;
}

int FUN_8c1e594e(int a4, int a5, int a6, int a7)
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

int FUN_8c1e5e80(int a4, int a5, int a6, int a7)
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

int FUN_8c1e5a8e(int a4, int a5, int a6, int a7)
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

int FUN_8c1e5fc0(int a4, int a5, int a6, int a7)
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

int gdFsDaReleaseG(int a4)
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

    t3 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0x8C20C204;
        if (((*(short *)((t6 + 0x3A))) != 0) && (t0 = *(int *)0x8C45A158, t1 = *(int *)0x8C45A15C, t0 != t1)) {
            *(unsigned short *)((t6 + 0x3A)) = 0x0;
        }
        t0 = *(int *)0x8C20C204;
        if (((*(short *)((t0 + 0x3A))) != 0) && (t2 = *(int *)((t0 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = *(int *)0x8C45A150;
            t2 = *(int *)0x8C45A154;
            t6 = *(int *)0x8C45A14C;
            if ((*(int *)0x8C45A148) == 1) {
                t7 = (*(int *)(((*(int *)((t0 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t0 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int))(t7))(t6, t1, t2);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                *(unsigned short *)((t3 + 0x50)) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0x8C45A158;
                *(unsigned short *)((t3 + 0x48)) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int))((*(int *)(((*(int *)((t0 + 0xC))) + 0x34)))))(a4);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                *(unsigned short *)((t3 + 0x50)) = 0x4;
                *(unsigned short *)((t3 + 0x48)) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t0 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t1 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t4 = t0;
    }
    return t4;
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
