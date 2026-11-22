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


int SJMEM_UngetChunk(int a4, int a5, int a6)
{
    int t0;
    int t7;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t27;
    int t37;
    int t24;

    t0 = SJMEM_Lock();
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x1C))) == 0) {
        } else {
            t7 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
        }
    } else {
        if (a5 == 1) {
            t13 = *(int *)((a4 + 0x10));
            t14 = *(int *)((a6 + 0x4));
            t15 = (t13 - t14);
            if ((int)(t13 - t14) <= 0) {
                t15 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t15;
            t17 = *(int *)((a6 + 0x4));
            t18 = *(int *)((a4 + 0xC));
            t19 = *(int *)((a4 + 0x18));
            t20 = (t18 + t17);
            if ((int)t19 < (int)(t18 + t17)) {
                t20 = t19;
            }
            *(unsigned int *)((a4 + 0xC)) = t20;
            if ((t15 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t24 = *(int *)((a4 + 0x1C)), t24 != 0)) {
                t27 = ((int (*)(int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, (t18 + t17));
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t37 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}


int mwRnaPause(int a4)
{
    int t3;
    int t20;
    int stk[6];

    if (a4 == 0) {
        t20 = (mwRnaErrCallFunc(0x8C20AC30));
    } else {
        ovLockCs_8c200114(((int)stk + 8));
        if ((*(signed char *)((a4 + 0x7))) == 0) {
            t3 = mwRnaGetPlaySw(a4);
            *(unsigned int *)((a4 + 0x88)) = ((t3 << 1) | (mwRnaGetTransSw(a4)));
            mwlRnaAddRdPos(a4);
            mwRnaSetPlaySw(a4, 0x0);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                *(unsigned int *)((a4 + 0x8C)) = 0x1;
                ovUnlockCs_8c20012c(((int)stk + 8));
                mwlRnaWaitTransEnd(a4);
                ovLockCs_8c200114(((int)stk + 8));
                *(unsigned int *)((a4 + 0x8C)) = 0x0;
            }
            mwRnaAdjustBuf(a4);
        }
        t20 = (ovUnlockCs_8c20012c(((int)stk + 8)));
    }
    return t20;
}


int ADXB_ExecOneAdx(int a4)
{
    int t2;
    int t5;
    int t14;
    int t30;
    int t18;
    int t27;
    int t26;

    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t5 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            ADXB_EvokeDecode(a4);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t14 = *(int *)((a4 + 0x4));
    t30 = t14;
    if (t14 == 2) {
        ADXPD_ExecHndl((*(int *)((a4 + 0x8))));
        t18 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        t27 = t18;
        if (t18 == 3) {
            ADXB_EndDecode(a4);
            ADXPD_Reset((*(int *)((a4 + 0x8))));
            t26 = ((int (*)(int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))));
            *(unsigned int *)((a4 + 0x4)) = 0x3;
            t27 = t26;
        }
        t30 = t27;
    }
    return t30;
}


