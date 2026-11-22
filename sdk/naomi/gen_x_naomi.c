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


void nlRotateV(int a4, int a5)
{
    float t1;
    float t3;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlOuterProduct(a4, a5, (((int)stk + 4) + 0x4));
    t1 = nlUnitVector((((int)stk + 4) + 0x4));
    t3 = nlInnerProduct(a4, (*(int *)(((int)stk + 4))));
    if (t1 != 0.0f) {
        nlRotateAxeSC((((int)stk + 4) + 0x4), t1, t3);
    } else {
        if (0.0f > t3) {
            *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x4)));
            *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x8)));
            *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x0)));
            nlRotateAxeSC((((int)stk + 4) + 0x4), 0.0f, (-1.0f));
        }
    }
}


int nlMakeProjConvMat(int a4)
{
    float u4;
    float u7;

    *(float *)((a4 + 0x0)) = ((*(float *)0x8C1DCA24) * 0.5f);
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(float *)((a4 + 0x10)) = 0.0f;
    *(float *)((a4 + 0x14)) = (-((*(float *)0x8C1DCA28) * 0.5f));
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 0.0f;
    *(float *)((a4 + 0x24)) = 0.0f;
    *(float *)((a4 + 0x28)) = -0.5f;
    *(float *)((a4 + 0x2C)) = 0.0f;
    u4 = (*(float *)0x8C1DCA2C);
    u4 = u4 + 0.5f * (*(float *)0x8C1DCA24);
    *(float *)((a4 + 0x30)) = u4;
    u7 = (*(float *)0x8C1DCA30);
    u7 = u7 + 0.5f * (*(float *)0x8C1DCA28);
    *(float *)((a4 + 0x34)) = u7;
    *(float *)((a4 + 0x38)) = 0.5f;
    *(float *)((a4 + 0x3C)) = 1.0f;
    return 0x3C;
}


