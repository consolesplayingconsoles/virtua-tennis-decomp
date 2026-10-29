/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXERR_EntryErrFunc(int, int);
int thunk_ADXERR_EntryErrFunc(int, int);
int ADXT_Init(void);
int BupInit(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int _slow_strcmp1(int, int);
int buCalcBackupFileSize(int, int, int);
int buGetDiskInfo(int, int);
int buGetLastError(int);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int, int, int);
int buStat(int);
int camSceneInit(void);
int charaTexFree(int);
int cpuAimPointSet(int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int dbgHookNop(void);
int dbgLockClear(void);
int eepromCfgInit(void);
int fileLoadReset(void);
int gdFsEntryErrFuncAll(int, int);
int gdFsInit(int, int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int modelSwapMaterial(int, int, int);
int motFileInit(void);
int msgWinSet(int, int);
int mtxGetAngles(int);
int nlArcTan2(float, float);
float nlCos(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlInitHeapMemory2(int, int);
int nlInitInterruptDC(void);
int nlInitLibraryDC(int, int, int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlSetIntrFunction(int, int);
int nlSetPalExtMode(int);
float nlSin(int);
int nlTranslate(float, float, float);
int padInit(void);
int padLcdClear(int);
int padLcdMessage(int);
int padVmsBeep(int, int);
int selCellClear(int);
int sndFadeFlagsClear(void);
extern int sprPutAtAlpha();
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcGetDate(int);
int syRtcInit(void);
int sysInitGraphics(void);
int sysVideoSelect(void);
int uniformTexLoad(int, int, int);
int uniformTexRestore(int);
int vecMake(int, int, int, int, int, float, float, float);
int sysInit(void);
int hudFont2DigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int BupSaveFile(int a4, int a5, int a6, int a7);
float cpuReachPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int entryPortLeave(int a4, int a5, int a6);
int cpuDblAimAddRange(int a4, int a5);
int cpuDblAimAddRange2(int a4, int a5);
int uniformPreviewPut(int a4, int a5);
int sunPut(int a4, int a5, int a6, float f4);
float nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9);






int entryPortLeave(int a4, int a5, int a6)
{
    int t1;
    int t78;
    int t4;
    int t66;
    int t6;
    int t54;
    int t8;
    int t9;
    int t53;

    *(unsigned int *)0x8C18175C = (*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0)));
    t1 = *(int *)0x8C287D5C;
    t78 = t1;
    if (t1 != 1) {
        t4 = *(short *)(((a4 << 1) + 0x8C185298));
        t66 = (a4 << 2);
        if (((*(int *)((0x8C181628 + (a4 << 2)))) == 0) || (a5 != 0)) {
            t6 = *(short *)0x8C343262;
            *(unsigned short *)0x8C343262 = (t6 & (~t4));
            t54 = (t6 & (~t4));
            if (a5 == 0) {
            } else {
                *(unsigned int *)(((0x8C343764 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343784 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343804 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
                *(unsigned int *)((0x8C181628 + (a4 << 2))) = 0x0;
                if ((*(int *)0x8C287ADC) == 4) {
                    t8 = 0x8C185438;
                    t9 = 0x8C343ADC;
                    for (;;) {
                        if ((*(int *)((t8 + 0x0))) == (*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x4)))) {
                            *(unsigned int *)((t9 + 0x0)) = 0x0;
                        }
                        t8 = (t8 + 0x4);
                        t9 = (t9 + 0x4);
                        if ((unsigned int)t8 >= (unsigned int)0x8C185448) {
                            break;
                        }
                    }
                }
                *(unsigned int *)(((a4 << 2) + 0x8C185428)) = 0xFFFFFFFF;
                charaTexFree((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0))));
                if ((*(int *)(((((*(int *)(((a4 << 2) + 0x8C3437C4))) * 0x38) + 0x8C343264) + 0x30))) != -1) {
                    uniformTexRestore((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))));
                }
                selCellClear((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0))));
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
                *(unsigned short *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x30)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x34)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x8)) = 0x1;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x4)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x28)) = 0x0;
                if ((int)(*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C))) > 0) {
                    *(unsigned int *)((((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C))) << 2) + 0x8C343ADC)) = 0x0;
                    *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
                }
                *(unsigned int *)(((0x8C343724 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343744 + (a4 << 2)) + 0x0)) = 0x0;
                t53 = 0x0;
                for (;;) {
                    *(unsigned int *)((t53 + (0x8C343424 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    *(unsigned int *)((t53 + (0x8C343524 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    *(unsigned int *)((t53 + (0x8C343624 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    t53 = (t53 + 0x4);
                    if ((unsigned int)t53 >= (unsigned int)0x20) {
                        break;
                    }
                }
                t54 = (0x8C343624 + (((a4 << 2) << 2) << 1));
            }
            t66 = t54;
        }
        t78 = t66;
    }
    return t78;
}





float nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t15;
    int t11;
    int t5;
    int t8;
    int t29;
    int t33;
    int t6;
    float u60;

    t15 = (((((a5 + a6) + a7) + a8) + a9) + ((((a5 + a6) + a7) + a8) + a9));
    if ((*(int *)0x8C42440C) == 3) {
    } else {
        t11 = (((a6 + a7) + a8) + a9);
        if ((*(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC))) == 0) {
        } else {
            t5 = *(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC));
            t8 = (((a5 + a6) + a8) + a9);
            if (t5 == 2) {
            } else {
                if (t5 == 4) {
                    t6 = (((a5 + a6) + a7) + a8);
                }
                t8 = t6;
            }
            t11 = t8;
        }
        t15 = t11;
    }
    *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x8)) = (t15 << 2);
    if (a4 == 0) {
        *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x4)) = (*(int *)0x8C424238);
    } else {
        *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x4)) = ((*(int *)(((((a4 - 1) * 0x38) + 0x8C424244) + 0x4))) + (*(int *)(((((a4 - 1) * 0x38) + 0x8C424244) + 0x8))));
    }
    if ((*(int *)0x8C42440C) == 3) {
        t29 = (int)((unsigned int)((int)((unsigned int)t15 + (unsigned int)0x0)) + ((((int)0x0 > (int)t15)) ? 1u : 0u));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)(t29 >> 1));
    } else {
        if ((*(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC))) == 0) {
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = 0.0f;
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)t15);
        } else {
            t33 = *(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC));
            if (t33 == 2) {
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = 0.0f;
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)t15);
            } else {
                if (t33 == 4) {
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = 0.0f;
                }
            }
        }
        u60 = (float)t15;
    }
    return u60;
}

