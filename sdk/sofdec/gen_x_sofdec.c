/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetStat(int);
int ADXRNA_GetTime(int, int, int);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetStat(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_Stop(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Close(int);
int ADXSTM_Stop(int);
float nlUnitVector(int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int abs(int);
int fileLoadCloseSlot(int);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsOpen(int, int, int, int);
int getID_Color(int, float);
int hudBarDraw(Stk3, float, float);
int hudBarDrawAlt(Stk3, float, float);
int kdGetDeviceInfo(int);
int kdSetGetMediaInfoEx(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwRnaStop(int);
int nlArcSin(float);
int nlArcTan2(float, float);
int nlFree2(int);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlPrintColor(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAxeSC(int, float, float);
int nlUnitMatrix(void);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int padDirRepeat(int, int);
int padLcdLine(int, int, int, int);
int padLcdProject(int, int, Stk3);
int pdVibGetInfo(int, int);
int pdVibMxStop(int);
int prefetch(int);
int sndSeCursor(void);
int sprInitRectF(int, int, int, int, int, int);
int sprPutCropV(int, int, Stk3, float, float, float);
int strncpy(int, int, int);
void unlockApplyW2(void);
int nlSpriteGetNextSpriteIndex(int a4, int a5, int a6);
int ADXT_GetTime(int a4, int a5, int a6);
int vmsfs_mount2(int a4, int a5);
int mwRnaStart(int a4);
int SJMEM_GetChunk(int a4, int a5, int a6, int a7);
int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7);
int angBlend(int a4, int a5, float f4);
int padVibStopAll(void);
int mtxGetAngles(int a4);
void nlRotateV(int a4, int a5);
int _setsbit(int a4, int a5, int a6);
int ADXT_Stop(int a4);
int ADXSTM_OpenFname(int a4, int a5, int a6, int a7);
int mwRnaDestroy(int a4);
int angLerp(int a4, int a5, float f4);
int nlLineSendVertex(int a4, int a5, int a6);
int mwRnaContinue(int a4);
void kmiRegisterPhIntHandler(int a4);
int kmtex_GetTextureLevel(int a4, int a5);
int ndbBuildIndex(void);
int hudCallMsgDrawA9f0(float f4, float f5);
int nlMakeProjConvMat(int a4);
int pdLcdGetDirection(int a4);
int vmsfs_read_disk_image(int a4, int a5);
int pdVibEnumerateUnit(int a4, int a5, int a6);
int nlCloseEvent2(int a4);
int miniPlacePlayers(void);
int hudCallMsgDrawDa60(float f4, float f5);
int hudCallMsgDrawDb50(float f4, float f5);
int hudCallMsgDrawDb00(float f4, float f5);
int fileLoadPollSlot(int a4);
int nlExp(float f4);
void kmiUnregisterInterruptHandler(void);
void padLcdLine3D(int a4, int a5, int a6, int a7);
int logoAInit(void);
void dbgMenuSetItem(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int stageSelSprInit(void);
int adxt_stat_playing(int a4);
int kmyUseAnotherList(int a4, int a5);
int angStepToward(int a4, int a5, int a6);
int circuitMenuCursor(int a4, int a5);
int miniWallTargetsInit(void);


int mwRnaStart(int a4)
{
    int stk[5];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x44)));
    mwRnaSetTransSw(a4, 0x1);
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}

int SJMEM_GetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t4;
    int t15;

    t0 = SJMEM_Lock();
    if (a5 == 0) {
        *(unsigned int *)((a7 + 0x4)) = 0x0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
    } else {
        if (a5 == 1) {
            t3 = *(int *)((a4 + 0xC));
            t4 = a6;
            if ((int)t3 < (int)a6) {
                t4 = t3;
            }
            *(unsigned int *)((a7 + 0x4)) = t4;
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x14))) + (*(int *)((a4 + 0x10))));
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a7 + 0x4))));
            *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) - (*(int *)((a7 + 0x4))));
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t15 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t4;
    int t7;
    int t11;
    int stk[5];

    *(unsigned int *)((a7 + 0x0)) = 0x0;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        t4 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
        if (t4 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)((t4 + 0x8)); }
            *(unsigned int *)((a7 + 0x0)) = (*(int *)((((int)stk + 4) + 0x4)));
            t7 = *(int *)((((int)stk + 4) + 0x4));
            if ((*(signed char *)((a4 + 0x5))) == 1) {
                if ((int)t7 < (int)a6) {
                    return 0x0;
                }
                return 0x1;
            }
            if (t7 == a6) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t11 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}


int ADXT_Stop(int a4)
{
    int t12;
    int t15;
    int t21;
    int t24;
    int t20;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        ADXSTM_Close((*(int *)((a4 + 0x8))));
        t12 = *(int *)((a4 + 0x14));
        t15 = ((int (*)(int))((*(int *)(((*(int *)((t12 + 0x0))) + 0x14)))))(t12);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x2))) == 2) && (t20 = *(int *)((a4 + 0x14)), t20 != 0)) {
        t21 = *(int *)((a4 + 0x14));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t21 + 0x0))) + 0xC)))))(t21);
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}


int mwRnaDestroy(int a4)
{
    int t8;
    int t10;
    int t13;
    int t6;
    int t7;
    int stk[6];


    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
            break;
        }
        t7 = a4;
        t6 = t8;
        t7 = (t7 + 0x10);
        t6 = (t6 << 2);
        t6 = (t6 + t7);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
    }
    t10 = *(int *)((a4 + 0x38));
    (*(int *)((int)stk + 12)) = t10;
    t13 = ((int (*)(int, int))((*(int *)(((*(int *)((t10 + 0x0))) + 0xC)))))(t10, 0x0);
    memset(a4, 0x0, 0x90);
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}


int mwRnaContinue(int a4)
{
    int t4;
    int stk[5];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        t4 = *(int *)((a4 + 0x88));
        if ((t4 != 0) && (t4 != 1)) {
            mwRnaSetPlaySw(a4, 0x1);
        }
        *(unsigned char *)((a4 + 0x7)) = 0x0;
    }
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}


int adxt_stat_playing(int a4)
{
    int t1;
    int t16;
    int t3;
    int t9;
    int t4;
    int t5;
    int t8;
    int t14;
    int t11;

    t1 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
    t16 = t1;
    if (t1 == 3) {
        t3 = ADXSJD_GetNumChan((*(int *)((a4 + 0x4))));
        t9 = t3;
        if ((int)t3 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (a4 + 0x18)) + 0x0));
                t8 = ((int (*)(int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x24)))))(t5, 0x1);
                if ((int)t8 < (int)0x20) {
                    t4 = (t4 + 0x1);
                    if ((int)t4 >= (int)t3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t9 = t8;
            t11 = t4;
        } else {
            t11 = 0x0;
        }
        t14 = t9;
        if (t11 == t3) {
            ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
            *(unsigned char *)((a4 + 0x1)) = 0x4;
            t14 = 0x4;
        }
        t16 = t14;
    }
    return t16;
}


