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


void kmiRegisterPhIntHandler(int a4)
{
    int t4;
    int t5;

    *(unsigned int *)0x8C470AA8 = (_builtin_get_imask());
    *(unsigned int *)0x8C470AAC = (*(int *)0xA05F6930);
    *(unsigned int *)0x8C470AB0 = (*(int *)0xA05F6938);
    _builtin_set_imask(0xF);
    t4 = *(int *)((((int)_builtin_get_vbr()) + 0x224));
    if (a4 != t4) {
        t5 = (int)_builtin_get_vbr();
        *(unsigned int *)0x8C470AC8 = t4;
        *(unsigned int *)0x8C470ACC = a4;
        *(unsigned int *)(((t5 + 0x224) + 0x0)) = a4;
    }
    *(unsigned int *)0xA05F6930 = 0x0;
    *(unsigned int *)0xA05F6938 = 0x0;
    *(unsigned int *)0xA05F6900 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6908 = 0xFFFFFFFF;
    *(unsigned int *)0x8C470AB8 = 0x280FEC;
    *(unsigned int *)0x8C470ABC = 0xE;
    *(unsigned int *)0xA05F6930 = (*(int *)0x8C470AB8);
    *(unsigned int *)0xA05F6938 = (*(int *)0x8C470ABC);
    _builtin_set_imask(((unsigned int)((((*(int *)0x8C470AA8) & 0xF) << 2) << 2) >> 4));
}


void kmiUnregisterInterruptHandler(void)
{
    *(unsigned int *)0x8C470AA8 = (_builtin_get_imask());
    *(unsigned int *)0x8C470AAC = (*(int *)0xA05F6930);
    *(unsigned int *)0x8C470AB0 = (*(int *)0xA05F6938);
    _builtin_set_imask(0xF);
    if ((*(int *)0x8C470ACC) != (*(int *)((((int)_builtin_get_vbr()) + 0x224)))) {
        *(unsigned int *)(((((int)_builtin_get_vbr()) + 0x224) + 0x0)) = (*(int *)0x8C470AC8);
    }
    *(unsigned int *)0xA05F6930 = 0x0;
    *(unsigned int *)0xA05F6938 = 0x0;
    *(unsigned int *)0xA05F6900 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6908 = 0xFFFFFFFF;
    *(unsigned int *)0x8C470AB8 = 0x0;
    *(unsigned int *)0x8C470ABC = 0x0;
    *(unsigned int *)0xA05F6930 = (*(int *)0x8C470AB8);
    *(unsigned int *)0xA05F6938 = (*(int *)0x8C470ABC);
    _builtin_set_imask(((unsigned int)((((*(int *)0x8C470AA8) & 0xF) << 2) << 2) >> 4));
}


