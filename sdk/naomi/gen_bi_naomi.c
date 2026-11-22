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
int msgWinSet(int, int, int, int, int, int, int);
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
int nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9);


int nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t15;
    int t11;
    int t5;
    int t8;
    int t29;
    int t33;
    int t6;

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
    }
    return t15;
}

