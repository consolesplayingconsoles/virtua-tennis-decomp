/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_EndDecode(int);
int ADXB_EvokeDecode(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int resetBackColorZ(int, int, int, float);
int copySmallVQToTextureRom(int, int, int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int courtPropPickPose(int);
int fileLoadClose(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmiReadRegister(int);
int kmtex_GetTextureLevel(int, int);
int logoSmallPut(void);
int memset(int, int, int);
int modeMarkPut(float);
int mpdrv_dpf(int, ...);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mwRnaAdjustBuf(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwlRnaAddRdPos(int);
int mwlRnaWaitTransEnd(int);
int nlCalcVector(int, int);
int nlChangeDisplayMode(int, int);
float nlCos(int);
int nlLineSendVertex(int, int, int);
int nlMatrixMode(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSetCommonTextureOffset(int);
int nlSetPalExtMode(int);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlTransposeMatrix(void);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int resCautionRead(int);
int set_event(int, int);
int shadowVolBuildDir(int);
int sprInitPos(int, int);
int sprPutAt(int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
extern int thunk_nlSprPut();
int vecMake(float, float, float);
int shadowLightMatrix(float f4);
int kmyUnloadDevice(void);
int SJMEM_UngetChunk(int a4, int a5, int a6);
int kmyWaitVBlank(int a4);
int kmyiWaitScanline0(int a4);
int shadowVolPutDir(int a4, float f4, float f5, float f6, float f7);
int resCautionShow(int a4);
int nlLocate(int a4, int a5);
int nlsndStreamOpen(int a4);
int kdSetDeviceResetEx(int a4, int a5);
int mwRnaPause(int a4);
int kmiFLWCTRLVsyncCallBackFunc(void);
int rankDrawString(int a4, int a5);
int nlArcTan(float f4);
float nlTan(int a4);
int kdSetARControlEx(int a4, int a5, int a6);
int mwRnaSetFx(int a4, int a5, int a6);
int nl_system_config_init(int a4);
int nlInvLightVectorUseViewMatrix(void);
int kdSetGetConditionEx(int a4, int a5, int a6);
int menuTextIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int selCursorPlace(int a4);
int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8);
int ADXB_ExecOneAdx(int a4);
int kmiCallbackError(int a4);
int ballBoyPropPut(int a4);
int msgWinPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlLineSendQuadE(int a4, int a5, int a6, float f4);
int nlsndFxControl(int a4, int a5, int a6);
int nlsndStreamChgFx(int a4, int a5, int a6);
int motionRootRaw(int a4);
int padDirOn(int a4, int a5);
int fileLoadStartAfs(int a4, int a5, int a6);
void courtPropsInit(void);
int evPackFade(int a4, int a5, int a6);
int nlPow(float f4, float f5);
float nlSin(int a4);
int kmLoadTextureRom(int a4, int a5, int a6);
int syCacheOCBI(int a4, int a5);
int syCacheOCBP(int a4, int a5);
int ADXF_Ocbi(int a4, int a5);
int sysSetVideoMode(int a4);
float iconSlotPutC(int a4, int a5, int a6, int a7, Stk3 p, float f4);
int bgScreenDraw(int a4, int a5, int a6, int a7);


int kmyUnloadDevice(void)
{
    int t2;

    if ((*(int *)0x8C4743E8) != 0) {
        t2 = ((int (*)(int))((*(int *)0x8C4743E8)))(0x8C4743D8);
    }
    memset(0x8C4743D8, 0x0, 0x18);
    return 0x0;
}


int kmyWaitVBlank(int a4)
{
    int t0;
    int t2;
    int t7;
    int t15;
    int t6;
    int t8;
    int t14;
    int t16;
    int stk[10];

    t0 = *(int *)0xFFD8000C;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) < (unsigned int)0x3D09) {
        for (;;) {
            t2 = kmiReadRegister(0x10C);
            if ((t2 & 0x2000) == 0) {
                break;
            }
            if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) >= (unsigned int)0x3D09) {
                if (((*(int *)(((int)stk + 4))) == 0) && (t6 = *(int *)0xFFD8000C, (unsigned int)(t0 - t6) < (unsigned int)0x3D09)) {
                    for (;;) {
                        t7 = kmiReadRegister(0x10C);
                        if (((t7 & 0x2000) == 0) && (t8 = *(int *)0xFFD8000C, (unsigned int)(t0 - t8) < (unsigned int)0x3D09)) continue;
                        break;
                    }
                    return 0x0;
                }
                return 0x0;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
    }
    if (((*(int *)(((int)stk + 4))) == 0) && (t14 = *(int *)0xFFD8000C, (unsigned int)(t0 - t14) < (unsigned int)0x3D09)) {
        for (;;) {
            t15 = kmiReadRegister(0x10C);
            if (((t15 & 0x2000) == 0) && (t16 = *(int *)0xFFD8000C, (unsigned int)(t0 - t16) < (unsigned int)0x3D09)) continue;
            break;
        }
    }
    return 0x0;
}

int kmyiWaitScanline0(int a4)
{
    int t0;
    int t2;
    int t7;
    int t15;
    int t6;
    int t8;
    int t14;
    int t16;
    int stk[10];

    t0 = *(int *)0xFFD8000C;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) < (unsigned int)0x3D09) {
        for (;;) {
            t2 = kmiReadRegister(0x10C);
            if ((t2 & 0x3FF) != 0) {
                break;
            }
            if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) >= (unsigned int)0x3D09) {
                if (((*(int *)(((int)stk + 4))) == 0) && (t6 = *(int *)0xFFD8000C, (unsigned int)(t0 - t6) < (unsigned int)0x3D09)) {
                    for (;;) {
                        t7 = kmiReadRegister(0x10C);
                        if (((t7 & 0x3FF) != 0) && (t8 = *(int *)0xFFD8000C, (unsigned int)(t0 - t8) < (unsigned int)0x3D09)) continue;
                        break;
                    }
                    return 0x0;
                }
                return 0x0;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
    }
    if (((*(int *)(((int)stk + 4))) == 0) && (t14 = *(int *)0xFFD8000C, (unsigned int)(t0 - t14) < (unsigned int)0x3D09)) {
        for (;;) {
            t15 = kmiReadRegister(0x10C);
            if (((t15 & 0x3FF) != 0) && (t16 = *(int *)0xFFD8000C, (unsigned int)(t0 - t16) < (unsigned int)0x3D09)) continue;
            break;
        }
    }
    return 0x0;
}


int kmiCallbackError(int a4)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0x8C20343C;
    if (t0 != 27) {
        if (t0 != 28) {
        } else {
            t5 = *(int *)0x8C203434;
            if (t5 != 0) {
                t6 = ((int (*)(int, int))(t5))(t1, 0x8C203420);
            }
        }
    } else {
        t16 = *(int *)0x8C203430;
        if (t16 != 0) {
            t17 = ((int (*)(int, int))(t16))(t1, 0x8C203420);
        }
    }
    return 0x1;
}


