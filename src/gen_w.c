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
int FUN_8c0eaf00(int, int, int, float);
int FUN_8c0f8590(int, int, int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int courtPropPickPose(int);
int fileLoadClose(void);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
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
extern int thunk_FUN_8c0f41f0();
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
int nlTan(int a4);
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
int nlSin(int a4);
int kmLoadTextureRom(int a4, int a5, int a6);
int syCacheOCBI(int a4, int a5);
int syCacheOCBP(int a4, int a5);
int ADXF_Ocbi(int a4, int a5);
int sysSetVideoMode(int a4);
float iconSlotPutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int bgScreenDraw(int a4, int a5, int a6, int a7);

int shadowLightMatrix(float f4)
{
    float t4;

    nlTranslate(0.0f, (-f4), 0.0f);
    nlRotateAY(((unsigned short)(*(short *)0x8C287A3E) + 0x8000));
    t4 = nlCos(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    nlTranslate(0.0f, 0.0f, (f4 * (1.0f / t4)));
    nlScale(1.0f, 0.00100000005f, (1.0f / t4));
    nlRotateAX(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    return nlRotateAY(((-(unsigned short)(*(short *)0x8C287A3E)) - 32768));
}

int kmyUnloadDevice(void)
{
    int t2;

    if ((*(int *)0x8C4743E8) != 0) {
        t2 = ((int (*)(int))((*(int *)0x8C4743E8)))(0x8C4743D8);
    }
    memset(0x8C4743D8, 0x0, 0x18);
    return 0x0;
}

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

int shadowVolPutDir(int a4, float f4, float f5, float f6, float f7)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 16)) = f7;
    nlPushMatrix(0x0);
    *(float *)0x8C2859D8 = (*(float *)(((int)stk + 4)));
    *(float *)0x8C2859E8 = (*(float *)(((int)stk + 8)));
    *(float *)0x8C2859EC = (*(float *)(((int)stk + 12)));
    *(float *)0x8C2859F0 = (*(float *)(((int)stk + 16)));
    nlTransposeMatrix();
    nlCalcVector(0x8C2859E8, 0x8C2859E8);
    nlTransposeMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0x8C2859E8); }
    nlScaleUnitVector(0x8C2859F4, (((int)stk + 4) + 0x14), (*(float *)0x8C2859D8));
    shadowVolBuildDir((*(int *)(((int)stk + 20))));
    return (nlPopMatrix(0x1));
}

int resCautionShow(int a4)
{
    int t0;
    int t10;
    int t11;

    t0 = resCautionRead(a4);
    if (t0 == 1) {
        if ((*(int *)(((a4 << 2) + 0x8C1DC590))) == 0) {
            nlSetCommonTextureOffset(0x0);
            nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1DC608))));
            *(unsigned int *)(((a4 << 2) + 0x8C1DC590)) = 0x1;
        }
        vecMake(320.0f, 240.0f, 0.00999999978f);
        t10 = sprInitPos((((((a4 << 2) + a4) << 2) << 2) + 0x8C423BD8), (*(int *)(((a4 << 2) + 0x8C1DC608))));
        *(unsigned int *)0x8C1DC648 = 0x0;
        t11 = t10;
    } else {
        *(unsigned int *)0x8C1DC648 = 0x1;
        t11 = 0x1;
    }
    return t11;
}

int nlLocate(int a4, int a5)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    int t7;

    t0 = *(int *)0x8C44F95C;
    if ((*(int *)0x8C1DC8CC) == 0) {
        u2 = *(float *)0x8C1DCA2C;
        *(unsigned int *)0x8C44F954 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)0x8C44F964 = (int)((float)(t0 * a4) + u2);
        t3 = *(int *)0x8C44F960;
        *(unsigned int *)0x8C44F958 = (int)((float)(t3 * a5) + (*(float *)0x8C1DCA30));
        return ((int (*)(int, int, int, int, float))(0x8C0EDD14))((t0 * a4), (t3 * a5), 0x8C1DCA30, 0x8C44F964, ((float)(t0 * a4) + u2));
    }
    u5 = *(float *)0x8C1DCA30;
    *(unsigned int *)0x8C44F954 = (int)((float)(t0 * a4) + u5);
    *(unsigned int *)0x8C44F964 = (int)((float)(t0 * a4) + u5);
    t6 = *(int *)0x8C44F960;
    t7 = *(short *)0x8C458DD8;
    *(volatile float *)0x8C1DCA24;
    *(volatile float *)0x8C1DCA2C;
    return ((int (*)(int, int, int, int, float))(0x8C0EDD0E))((t0 * a4), ((t6 * a5) + t7), 0x8C1DCA30, 0x8C44F964, ((float)(t0 * a4) + u5));
}

int nlsndStreamOpen(int a4)
{
    int t0;
    int t10;
    int t2;
    int t12;

    if ((short)a4 == 1) {
        t0 = 0x0;
        for (;;) {
            if (((*(signed char *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x0))) == 0) && (t2 = *(int *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x8)), t2 == 0)) {
                if (0x1 == 0) {
                    return ((int (*)(int, int, int, int))(0x8C0F65CC))(t0, 0x1, 0x8, 0x8C454CF4);
                }
                return ((int (*)(int, int, int, int))(0x8C0F65C0))(t0, 0x1, 0x8, 0x8C454CF4);
            }
            t0 = (t0 + 0x1);
            if ((int)(short)t0 >= (int)0x8) {
                break;
            }
        }
        if (0x0 == 0) {
            return ((int (*)(int, int, int, int))(0x8C0F65CC))(t0, 0x1, 0x8, 0x8C454CF4);
        }
        return ((int (*)(int, int, int, int))(0x8C0F65C0))(t0, 0x1, 0x8, 0x8C454CF4);
    }
    if ((short)a4 == 2) {
        t10 = 0x0;
        for (;;) {
            if (((*(signed char *)(((((short)t10 * (short)0x1C) + 0x8C454CF4) + 0x0))) == 0) && (t12 = *(int *)(((((short)t10 * (short)0x1C) + 0x8C454CF4) + 0x8)), t12 != 0)) {
                break;
            }
            t10 = (t10 + 0x1);
            if ((int)((short)t10) >= (int)0x8) {
                if (0x0 == 0) {
                    return ((int (*)(int, int, int, int))(0x8C0F65CC))(t10, 0x1, 0x8, 0x8C454CF4);
                }
                return ((int (*)(int, int, int, int))(0x8C0F65C0))(t10, 0x1, 0x8, 0x8C454CF4);
            }
        }
        if (0x1 == 0) {
            return ((int (*)(int, int, int, int))(0x8C0F65CC))(t10, 0x1, 0x8, 0x8C454CF4);
        }
        return ((int (*)(int, int, int, int))(0x8C0F65C0))(t10, 0x1, 0x8, 0x8C454CF4);
    }
    return ((int (*)(int, int, int, int))(0x8C0F65CC))(a4, 0x1, 0x8, 0x8C454CF4);
}

int kdSetDeviceResetEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
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

int kmiFLWCTRLVsyncCallBackFunc(void)
{
    int t5;

    if ((*(int *)0x8C4607C0) != 0) {
        *(unsigned int *)0x8C4607CC = ((*(int *)0x8C4607CC) - 1);
        if ((int)(*(int *)0x8C4607CC) < 0) {
            *(unsigned int *)(((*(int *)0x8C4607C8) + 0x14)) = 0x8;
            t5 = *(int *)(((*(int *)0x8C4607C8) + 0x24));
            if ((unsigned int)t5 < (unsigned int)(*(int *)0x8C45F93C)) {
                if ((*(int *)0x8C45F960) != 0) {
                    *(unsigned int *)0x8C45F954 = ((*(int *)0x8C45F954) | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
                    return ((int (*)(int, int))(0x8C1F9DEA))(t5, (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
                }
                return ((int (*)(int, int))(0x8C1F9DE0))(t5, (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
            }
            return ((int (*)(int))(0x8C1F9DEA))(t5);
        }
        return ((int (*)(void))(0x8C1F9DF8))();
    }
    return ((int (*)(void))(0x8C1F9DF8))();
}

int rankDrawString(int a4, int a5)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    return ((int (*)(int, int))(0x8C0E1422))(a4, a5);
}

int nlArcTan(float f4)
{
    float u0;
    int t2;
    float u3;
    int t4;
    int t5;
    float u8;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t2 = 0xD;
    u3 = 0.0f;
    for (;;) {
        t4 = (t2 << 1);
        t5 = t2;
        t2 = (t2 - 1);
        u8 = (((float)t4 + u3) + 1.0f);
        u3 = ((((((float)t5 * (float)t5)) * u0)) * u0);
        u3 = (u3 / u8);
        if ((int)t2 < (int)0x1) {
            break;
        }
    }
    if (f4 > 1.0f) {
        return ((int (*)(int, int, float, float, float, float, float))(0x8C0ECD4A))(((int)(((((u0 / (u3 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f) + 0.5f) & 0xFFFF), 0x1, f4, (u0 / (u3 + 1.0f)), 1.0f, 6.28318548f, (float)t5);
    }
    return ((int (*)(int, int, float, float, float, float, float))(0x8C0ECD40))(((int)(((((u0 / (u3 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f) + 0.5f) & 0xFFFF), 0x1, f4, (u0 / (u3 + 1.0f)), 1.0f, 6.28318548f, (float)t5);
}

int nlTan(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t7;
    float u8;
    float u9;
    int t10;

    if ((0x7FFF & (unsigned short)a4) != 0x4000) {
        u0 = *(float *)0x8C0ED778;
        u1 = *(float *)0x8C0ED77C;
        u2 = *(float *)0x8C0ED780;
        u3 = *(float *)0x8C0ED784;
        u4 = (float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3);
        u5 = ((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - (u4 * u2));
        u6 = ((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - (u4 * u2));
        t7 = 0xD;
        u8 = (u4 * u2);
        u9 = 0.0f;
        for (;;) {
            if ((int)t7 < (int)0x3) {
                break;
            }
            t10 = t7;
            t7 = (t7 - 2);
            u8 = (float)t10;
            u8 = (u8 - u9);
            u9 = (u5 * u6);
            u9 = (u9 / u8);
        }
        if (((int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) & 0x1) == 0) {
            return 0x8C0ED784;
        }
        if ((((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - (u4 * u2)) / (1.0f - u9)) != 0.0f) {
            return 0x8C0ED784;
        }
        return ((int (*)(int, int, int, float, float, float))(0x8C0ED700))(t7, 0x3, (int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3), (((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - (u4 * u2)) / (1.0f - u9)), u9, (u5 * u6));
    }
    return ((int (*)(int))(0x8C0ED700))((unsigned short)a4);
}

int kdSetARControlEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int mwRnaSetFx(int a4, int a5, int a6)
{
    int t3;
    int t1;
    int t5;
    int t8;
    int t12;
    int t10;

    if (a4 == 0) {
        t12 = (mwRnaErrCallFunc(0x8C20AC30));
    } else {
        if (((int)a5 >= 0) && ((int)a5 <= (int)0x10)) {
            t3 = 0xFFFFFFD3;
            if ((int)a6 < (int)0xFFFFFFD3) {
            } else {
                t1 = a6;
                if ((int)a6 > 0) {
                    t1 = 0x0;
                }
                t3 = t1;
            }
            t5 = *(int *)((a4 + 0x38));
            t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x44)))))(t5, 0x0, a5, t3);
            *(unsigned int *)((a4 + 0x6C)) = a5;
            *(unsigned int *)((a4 + 0x70)) = t3;
            t10 = 0x70;
        } else {
            t10 = (mwRnaErrCallFunc(0x8C20AD08));
        }
        t12 = t10;
    }
    return t12;
}

int nl_system_config_init(int a4)
{
    *(unsigned int *)0x8C42420C = 0x1F8;
    *(unsigned int *)0x8C424210 = 0x0;
    *(unsigned int *)0x8C424404 = 0x8C42441C;
    *(unsigned int *)0x8C424408 = 0x8C42443C;
    *(unsigned int *)0x8C424214 = 0x8C424404;
    *(unsigned int *)0x8C424218 = 0x2;
    *(unsigned int *)0x8C424210 = ((*(int *)0x8C424210) | 0x100);
    *(unsigned int *)0x8C424220 = (a4 << 2);
    *(unsigned int *)0x8C424224 = 0x1000;
    *(unsigned int *)0x8C424228 = 0x400;
    *(unsigned int *)0x8C42422C = 0x8C4244AC;
    *(unsigned int *)0x8C424230 = 0x8C454FC0;
    *(unsigned int *)0x8C424234 = 0x2;
    *(unsigned int *)0x8C424238 = 0xACC00000;
    *(unsigned int *)0x8C42423C = 0x400000;
    *(unsigned int *)0x8C424240 = 0x1;
    *(unsigned int *)0x8C424244 = 0x0;
    *(float *)0x8C424254 = (*(float *)0x8C0EB58C);
    *(float *)0x8C424258 = (*(float *)0x8C0EB590);
    *(float *)0x8C42425C = (*(float *)0x8C0EB594);
    *(float *)0x8C424260 = 0.0f;
    *(float *)0x8C424264 = 0.0f;
    *(unsigned int *)0x8C424250 = 0x0;
    *(unsigned int *)0x8C42440C = 0x3;
    *(unsigned int *)0x8C424410 = 0x0;
    return 0x44;
}

int nlInvLightVectorUseViewMatrix(void)
{
    nlMatrixMode(0x2);
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA60, 0x8C458D98);
    nlTransposeMatrix();
    nlMatrixMode(0x1);
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA40, 0x8C458DA8);
    *(float *)0x8C458D98 = ((*(float *)0x8C458D98) + (*(float *)0x8C1DCA40));
    *(float *)0x8C458D9C = ((*(float *)0x8C458D9C) + (*(float *)0x8C1DCA44));
    *(float *)0x8C458DA0 = ((*(float *)0x8C458DA0) + (*(float *)0x8C1DCA48));
    nlCalcVector(0x8C458D98, 0x8C458D98);
    nlScaleUnitVector(0x8C458D98, 0x8C458D98, 436.5f);
    return (nlTransposeMatrix());
}

int kdSetGetConditionEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int menuTextIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t2;
    int t9;
    int t4;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    if ((int)a4 <= (int)0x7) {
        if ((int)a4 < (int)0x6) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t0 = *(int *)(((a4 << 2) + 0x8C10EF0C));
            t4 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C);
        } else {
            *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + -34.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t2 = *(int *)(((a4 << 2) + 0x8C10EF0C));
            t4 = (((((t2 << 2) + t2) << 2) << 2) + 0x8C338600);
        }
        t9 = (sprPutAtAlpha(t4, *(Stk3 *)((((int)stk + 16) + 0xC)), f4));
    }
    return t9;
}

int selCursorPlace(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;

    *(unsigned int *)(((a4 << 2) + 0x8C343ACC)) = 0xFFFFFFFF;
    t0 = *(int *)((0x8C110A94 + (a4 << 2)));
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t0;
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)) = 0x0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((0x8C1853C0 + ((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2)))) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        if ((int)(a4 + t2) >= 0) {
            t5 = ((a4 + t2) & 0x3);
        } else {
            t5 = ((~(((~(a4 + t2)) + 0x1) & 0x3)) + 0x1);
        }
        t1 = (*(int *)((0x8C110A94 + (t5 << 2))));
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t1;
        if ((int)t2 <= (int)0x4) continue;
        break;
    }
    *(unsigned int *)((((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2) + 0x8C1853C0)) = 0x2;
    *(unsigned int *)(((a4 << 2) + 0x8C343ACC)) = (*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)));
    return 0x8C343ACC;
}

int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a8, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
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

int ballBoyPropPut(int a4)
{
    int t0;
    int t3;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t3 = 0x1;
        if (0.0f > (*(float *)((a4 + 0x5A4)))) {
            t3 = 0x0;
        }
        return ((int (*)(int, int))(0x8C0CAE10))(t0, t3);
    }
    return ((int (*)(int))(0x8C0CAE56))(t0);
}

int msgWinPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t16;
    int t8;
    int t9;
    int t10;
    int t12;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    *(unsigned int *)(((int)stk + 16)) = a5;
    FUN_8c0eaf00(0x0, 0x0, 0x0, f4);
    if ((*(int *)(((a4 << 2) + 0x8C1DC590))) == 0) {
        t16 = (resCautionShow(a4));
    } else {
        if ((((int)(*(int *)0x8C38BA50) >= (int)0xF) && (t8 = *(int *)0x8C1DC648, t8 == 0)) || ((t9 = *(int *)(((int)stk + 16)), t9 == 1) && (t10 = *(int *)0x8C1DC648, t10 == 0))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t12 = (sprPutAt((((((a4 << 2) + a4) << 2) << 2) + 0x8C423BD8), *(Stk3 *)((((int)stk + 16) + 0xC))));
        } else {
            t12 = t9;
        }
        t16 = t12;
    }
    return t16;
}

int nlLineSendQuadE(int a4, int a5, int a6, float f4)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = ((*(float *)((a5 + 0x0))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = ((*(float *)((a5 + 0x0))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = ((*(float *)((a5 + 0x0))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a5 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int nlsndFxControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            if (a5 != 0x20A4) {
                return ((int (*)(int, int, int))(0x8C0F5D60))(a4, a5, 0xF);
            }
            return ((int (*)(int, int, int))(0x8C0F5D56))(a4, a5, 0xF);
        }
        return ((int (*)(int, int, int))(0x8C0F5D70))(a4, a5, 0xF);
    }
    t0 = nlsndSeqRequest((((0x7F00 & a6) << 8) + 0x70A4));
    if (t0 != 0) {
        return ((int (*)(int, int))(0x8C0F5D80))(0x0, t0);
    }
    return ((int (*)(int, int))(0x8C0F5D70))(0x0, t0);
}

int nlsndStreamChgFx(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int stk[8];

    *(unsigned short *)(((int)stk + 4)) = a5;
    if ((*(signed char *)((((short)a4 * (short)0x1C) + 0x8C454CF4))) == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t2 = *(short *)(((int)stk + 4));
        t3 = *(int *)(((int)stk + 8));
        nlsndSeqRequest((((t2 << 16) | t3) | 0x3A2));
        if ((*(int *)((((short)a4 * (short)0x1C) + 0x8C454CFC))) != 0) {
            nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return nlsndSeqRequest(((((t2 << 16) | t3) | 0x3A2) + 0x800));
        }
        return ((int (*)(void))(0x8C0F6CA6))();
    }
    return ((int (*)(int, int))(0x8C0F6CA6))(a4, a5);
}

int motionRootRaw(int a4)
{
    int t0;
    int t3;
    int t4;
    float u7;
    int t8;
    int t14;

    t0 = *(int *)0x8C2871D4;
    t3 = *(int *)((t0 + 0x54));
    t4 = *(int *)(((*(int *)((t0 + 0x20))) + 0x4));
    u7 = *(float *)(((*(int *)0x8C2871D4) + 0xC));
    t8 = *(int *)(((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x10));
    t14 = *(int *)0x8C2871D4;
    return nlTranslate(((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x0))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x14) + 0x0)))), ((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x2))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x18) + 0x0)))), ((float)(-(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x4)))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x1C) + 0x0)))));
}

int padDirOn(int a4, int a5)
{
    int t12;
    int t15;
    int t18;

    if (a5 != 16) {
        if (a5 != 32) {
            if (a5 != 64) {
                if (a5 != 0x80) {
                    return ((int (*)(int, int, int, int))(0x8C03020A))(a4, a5, 0x0, ((a4 << 2) + 0x8C29B898));
                }
                return ((int (*)(int, int, int, int))(0x8C0301F8))(a4, a5, 0x0, ((a4 << 2) + 0x8C29B898));
            }
            t12 = *(int *)((((a4 << 2) + 0x8C29B898) + 0x0));
            if ((a5 & (*(int *)((t12 + 0x8)))) == 0) {
                if ((int)(*(short *)((t12 + 0x1C))) < (int)0xFFFFFFE0) {
                    return ((int (*)(int, int, int, int))(0x8C03020A))(t12, a5, 0x40, ((a4 << 2) + 0x8C29B898));
                }
                return ((int (*)(int, int, int, int))(0x8C03020A))(t12, a5, 0x0, ((a4 << 2) + 0x8C29B898));
            }
            return ((int (*)(int, int, int, int))(0x8C03020A))(t12, a5, 0x40, ((a4 << 2) + 0x8C29B898));
        }
        t15 = *(int *)((((a4 << 2) + 0x8C29B898) + 0x0));
        if ((a5 & (*(int *)((t15 + 0x8)))) == 0) {
            if ((int)(*(short *)((t15 + 0x1E))) > (int)0x20) {
                return ((int (*)(int, int, int, int))(0x8C03020A))(t15, a5, 0x20, ((a4 << 2) + 0x8C29B898));
            }
            return ((int (*)(int, int, int, int))(0x8C03020A))(t15, a5, 0x0, ((a4 << 2) + 0x8C29B898));
        }
        return ((int (*)(int, int, int, int))(0x8C03020A))(t15, a5, 0x20, ((a4 << 2) + 0x8C29B898));
    }
    t18 = *(int *)((((a4 << 2) + 0x8C29B898) + 0x0));
    if ((a5 & (*(int *)((t18 + 0x8)))) == 0) {
        if ((int)(*(short *)((t18 + 0x1E))) < (int)0xFFFFFFE0) {
            return ((int (*)(int, int, int, int))(0x8C03020A))(t18, a5, 0x10, ((a4 << 2) + 0x8C29B898));
        }
        return ((int (*)(int, int, int, int))(0x8C03020A))(t18, a5, 0x0, ((a4 << 2) + 0x8C29B898));
    }
    return ((int (*)(int, int, int, int))(0x8C03020A))(t18, a5, 0x10, ((a4 << 2) + 0x8C29B898));
}

int fileLoadStartAfs(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t11;

    if ((*(int *)0x8C34A1F8) != 0) {
        fileLoadClose();
    }
    *(unsigned int *)0x8C34A1EC = 0x1;
    *(unsigned int *)0x8C34A1F0 = 0x0;
    *(unsigned int *)0x8C34A1FC = a5;
    *(unsigned int *)0x8C34A200 = a6;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    t8 = 0x0;
    for (;;) {
        t9 = ADXF_OpenAfs(a5, a6);
        *(unsigned int *)0x8C34A1F8 = t9;
        if (t9 == 0) {
            if ((int)t8 < (int)0xA) {
                t8 = (t8 + 0x1);
                continue;
            }
            break;
        }
        t11 = ADXF_GetFsizeSct((*(int *)0x8C34A1F8));
        ADXF_ReadNw32((*(int *)0x8C34A1F8), t11, a4);
        return 0x1;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

void courtPropsInit(void)
{
    int t1;
    int t32;
    int t34;
    int t27;
    int t29;
    int t22;
    int t24;
    int t17;
    int t19;
    int t14;
    int t8;
    int t9;
    int t36;
    int t37;
    int t12;

    *(unsigned int *)0x8C34B14C = (*(int *)0x8C1891E8);
    t1 = *(int *)0x8C1891E8;
    t32 = 0xE;
    t34 = 0x8C189644;
    if (t1 != 0) {
        t27 = 0x1D;
        t29 = 0x8C1891F8;
        if (t1 != 1) {
            t22 = 0x1A;
            t24 = 0x8C18943C;
            if (t1 != 2) {
                t17 = 0x14;
                t19 = 0x8C18975C;
                if (t1 != 3) {
                    t14 = 0x8C1891E8;
                    if (t1 != 4) {
                    } else {
                        t8 = 0x16;
                        t9 = 0x8C1898EC;
                        if ((*(int *)0x8C20D14C) == 3) {
                            t8 = 0x15;
                            t9 = 0x8C189AA4;
                        }
                        t12 = t8;
                        t14 = t9;
                    }
                    t17 = t12;
                    t19 = t14;
                }
                t22 = t17;
                t24 = t19;
            }
            t27 = t22;
            t29 = t24;
        }
        t32 = t27;
        t34 = t29;
    }
    if ((int)t32 > 0) {
        t36 = 0x0;
        t37 = (0x0 + t34);
        for (;;) {
            courtPropPickPose(t37);
            t36 = (t36 + 0x1);
            t37 = (t37 + 0x14);
            if ((int)t36 >= (int)t32) {
                break;
            }
        }
    }
}

int evPackFade(int a4, int a5, int a6)
{
    int t0;
    int t10;
    int t1;
    int t6;
    int t7;

    t0 = *(int *)(((a4 << 2) + 0x8C40C288));
    t10 = t0;
    if (t0 != 1) {
        t1 = set_event(0x28, 0x8C0D9562);
        *(unsigned int *)(((a4 << 2) + 0x8C40C288)) = 0x1;
        *(unsigned int *)((t1 + 0x14)) = a4;
        *(unsigned int *)((t1 + 0x18)) = (int)((float)a5 / (*(float *)0x8C23D204));
        *(unsigned int *)((t1 + 0x20)) = (int)((float)a5 / (*(float *)0x8C23D204));
        *(unsigned int *)((t1 + 0x1C)) = a6;
        *(unsigned int *)((t1 + 0x24)) = (nlsndGetPackInfo((*(int *)((t1 + 0x14))), 0x10A0));
        t6 = *(int *)((0x8C40C2A8 + (a4 << 2)));
        t7 = t6;
        if (t6 == 1) {
            *(unsigned int *)((0x8C40C2A8 + (a4 << 2))) = 0x2;
            t7 = (a4 << 2);
        }
        t10 = t7;
    }
    return t10;
}

int nlPow(float f4, float f5)
{
    int t0;
    float u1;
    int t4;
    float u5;
    float u6;

    if (f4 == 0.0f) {
        if (!(f5 > 0.0f)) {
            return ((int (*)(int, float, float))(0x8C0ED280))((int)f5, f4, f5);
        }
        return ((int (*)(int, float, float))(0x8C0ED266))((int)f5, f4, f5);
    }
    if (f5 == (float)(int)f5) {
        t0 = (int)f5;
        u1 = f4;
        if ((int)(int)f5 < 0) {
            t0 = (-(int)f5);
            u1 = (1.0f / f4);
        }
        t4 = t0;
        u5 = 1.0f;
        u6 = u1;
        for (;;) {
            if ((t4 & 0x1) != 0) {
                u5 = (u5 * u6);
            }
            t4 = ((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u)));
            t4 = (t4 >> 1);
            if (t4 != 0) {
                u6 = (u6 * u6);
                continue;
            }
            break;
        }
        return ((int (*)(int, int, float, float))(0x8C0ED280))(t4, 0x1, u5, 1.0f);
    }
    return ((int (*)(int, float, float))(0x8C0ED260))((int)f5, f4, f5);
}

int nlSin(int a4)
{
    float u0;
    float u1;
    float u2;
    int t3;
    float u4;
    int t5;
    float u6;
    float u7;
    float u8;

    u0 = (float)(int)((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079637f) + 0.5f);
    u1 = (((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079637f));
    u2 = (((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079637f));
    t3 = 0xB;
    u4 = 0.0f;
    for (;;) {
        t5 = t3;
        t3 = (t3 - 2);
        u6 = ((float)t5 - u4);
        u4 = (u1 * u2);
        u4 = (u4 / u6);
        if ((int)t3 < (int)0x3) {
            break;
        }
    }
    u7 = ((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079637f)) / (1.0f - u4));
    u8 = 1.0f;
    u8 = u8 + ((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079637f)) / (1.0f - u4)) * ((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) - (u0 * 1.57079637f)) / (1.0f - u4));
    if (((int)((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079637f) + 0.5f) & 0x1) == 0) {
        return 0x8C0ED448;
    }
    return ((int (*)(int, int, int, float, float, float, float))(0x8C0ED450))(t3, 0x3, (int)((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079637f) + 0.5f), ((u7 * (1.0f + 1.0f)) / u8), u4, u8, (1.0f + 1.0f));
}

int kmLoadTextureRom(int a4, int a5, int a6)
{
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        FUN_8c0f8590((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))), (*(int *)((a4 + 0x18))));
        return ((int (*)(void))(0x8C0F857C))();
    }
    t6 = *(int *)((a4 + 0x18));
    if (((0x4000000 & t6) == 0) && (((0x80000000 & t6) != 0) && (((0x40000000 & t6) == 0) && ((0x8000 & t6) == 0)))) {
        t7 = *(int *)((a4 + 0xC));
        t9 = *(int *)((a4 + 0x1C));
        t10 = *(int *)((((kmtex_GetTextureLevel(t7, t7)) << 2) + 0x8C20AEDC));
        return ((int (*)(int, int, int, int))(0x8C0F8578))((t9 + 0x4), a5, (t10 + 0x4), 0x0);
    }
    t11 = *(int *)((a4 + 0x1C));
    return ((int (*)(int, int, int, int))(0x8C0F8574))(t11, a5, a6, 0x0);
}

int syCacheOCBI(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return ((int (*)(int, int))(0x8C1E7C3C))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        return ((int (*)(int, int))(0x8C1E7A5E))(a4, a5);
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0x8C1E7C3C))(t1, t2);
}

int syCacheOCBP(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return ((int (*)(int, int))(0x8C1E7E8C))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        return ((int (*)(int, int))(0x8C1E7CC0))(a4, a5);
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0x8C1E7E8C))(t1, t2);
}

int ADXF_Ocbi(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return ((int (*)(int, int))(0x8C1F1B54))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        return ((int (*)(int, int))(0x8C1F19A6))(a4, a5);
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0x8C1F1B54))(t1, t2);
}

int sysSetVideoMode(int a4)
{
    if (a4 != (*(int *)0x8C23D200)) {
        if (a4 != 1) {
            if (a4 != 2) {
                return ((int (*)(int, int))(0x8C011812))(a4, 0x8C23D200);
            }
            return ((int (*)(int, int))(0x8C0117F8))(a4, 0x8C23D200);
        }
        *(unsigned int *)0x8C23D200 = 0x1;
        nlSetPalExtMode(0x1);
        nlChangeDisplayMode(0x1A, 0x80);
        *(float *)0x8C23D204 = 1.20000005f;
        *(float *)0x8C23D208 = 1.20000005f;
        return ((int (*)(void))(0x8C011808))();
    }
    return ((int (*)(int, int))(0x8C011828))(a4, 0x8C23D200);
}

float iconSlotPutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u2;
    float u10;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    *(float *)(((((int)stk + 16) + 0xC) + 0x8)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x8))) + 0.00100000005f);
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 93.0f);
    u2 = *(float *)(((((int)stk + 16) + 0xC) + 0x4));
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = (u2 + 120.0f);
    if (((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) && (((int)a4 >= 0) && ((int)a4 <= (int)0x12))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        sprPutAtAlpha((((((a4 << 2) + a4) << 2) << 2) + 0x8C37C2BC), *(Stk3 *)((((int)stk + 16) + 0xC)), f4);
    } else {
        u10 = (u2 + 120.0f);
    }
    return u10;
}

int bgScreenDraw(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_8c0f41f0))(0x8C33CF40, a5, a6, a7);
    t1 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C33CF90);
    t2 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C33CFE0);
    t3 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C33D030);
    t4 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C33D080);
    t5 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C33D0D0);
    vecMake((*(float *)0x8C098354), (*(float *)0x8C098350), (*(float *)0x8C09834C));
    modeMarkPut(1.0f);
    vecMake((*(float *)0x8C098368), (*(float *)0x8C098364), (*(float *)0x8C098360));
    return (logoSmallPut());
}
