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

