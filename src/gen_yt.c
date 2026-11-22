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


