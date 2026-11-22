/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int padVibStopAll(void);
int modelSetVertsInt(int, int);
int nlSetBackColorZ(int, int, int, float);
int nlObjPutSetGarbagedTexture_Sub(int, int, int);
int nlObjPutFreeTextureOnce_Sub(int, int, int);
int nlSingleLineSub(int, int, int, int);
int nlSpriteSetGarbagedTextureOnce_Sub(int, int, int);
int displaypolygondata_sidx_trnsl(int, int, float);
extern void _builtin_prefetch(void *);
int nlObjPut(int);
int nlSpriteFreeTextureOnce_Sub(int, int, int, int);
int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
int vmsfs_c_dispatch(int);
int lineJudgeShadowPart(int a4);
int syG2AicaFifoIsEmpty(int a4);
int syG2FifoIsEmpty(int a4);
int dbgMenuIsPage(int a4);
int selSlot0FlagClear(void);
int endingModelSet(int a4);
int BupGetInfo(int a4);
int nlExitSystem(void);
void nlsndStreamSetHdVol(int a4, int a5, int a6);
void nl_objput_mv_xchg_p0p1(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int gdGdcReqCmd(int a4, int a5);
int gdGdcGetCmdStat(int a4, int a5);
int gdGdcExecServer(int a4, int a5);
int gdGdcInitSystem(int a4, int a5);
int gdGdcGetDrvStat(int a4, int a5);
int gdGdcReqDmaTrans(int a4, int a5);
int gdGdcCheckDmaTrans(int a4, int a5);
void ADXSJD_SetOutSj(int a4, int a5, int a6);
int camResetFov(void);
float mathLerp(float f4, float f5, float f6);
int shadowNullCb(void);
int kbCfgIni(int a4, int a5, int a6);
int kbCfgGetId(int a4, int a5, int a6);
int kmyiCheckTAHandle(int a4);
int syBtFlGetInfo(int a4, int a5, int a6);
int syBtFlRead(int a4, int a5, int a6);
int syBtFlWrite(int a4, int a5, int a6);
int syBtFlDeleteSct(int a4, int a5, int a6);
int deformModelRestore(int a4);
int resetBackColorZ(int a4, int a5, int a6);
int padVibOff(void);
int nlSysMetricsDiffTime(int a4, int a5);
int nlObjPutSetGarbagedTexture(int a4);
int nlObjPutFreeTextureOnce(int a4);
int nlsndVersion(void);
int gdFsGetGdDcf(void);
int syTmrDiffCount(int a4, int a5);
int ADXRNA_GetNumRoom(void);
int ADXSJD_GetSpsdInfo(int a4);
void _kmyiDefaultPALEXTCallbackFunc(int a4);
int mwlSbGetWorkTbl(void);
void dbgHookNop(void);
void emotRetOne(void);
int sprSet266InitThunk(void);
void netHitNop(void);
void frameHookNop(void);
void sndDummy0(void);
void sndDummy1(void);
void endingNop(void);
void evNop(void);
int nlCreateVertexBuffer_clx16(void);
void prefetch(int a4);
int nlSingleLine(int a4, int a5, int a6);
int nlSpriteLoadTextureOnce(int a4, int a5, int a6);
int nlSpriteSetGarbagedTextureOnce(int a4, int a5);
int nlSpriteFreeTextureOnce(int a4, int a5, int a6);
int nlIntrDefaultFunction(void);
void nlObjPutLoadTextureCallBack(void);
void kmyPurgeCache(int a4);
void ADXRNA_ClearBuf(void);
void ADXRNA_SetPcmType(void);
void ADXRNA_SetTotalNumSmpl(void);
void ADXRNA_SetWavFname(void);
void ADXSTM_Finish(void);
void ADXSTM_EntryErrFunc(void);
void adxt_stat_playend(void);
void mwlRnaSetSvrInt(void);
int mwRnaSetupSnd(void);
void mwlRnaClearBuf(void);
int mwRnaDiscardData(void);
void kmyiDefaultCallback(void);
void mwlRnaDummyFunc(void);
int kmyInitializeRenderPacket(void);
int displaypolygondata_sidx(int, int);
int vmsfs_c_fiber7(void);


void ADXSJD_SetOutSj(int a4, int a5, int a6)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0xC)) + 0x0)) = a6;
}


int ADXRNA_GetNumRoom(void)
{
    return 0x7FFFFFFF;
}

int ADXSJD_GetSpsdInfo(int streamDecoderAddress)
{
    return (streamDecoderAddress + 0x58);
}


int mwlSbGetWorkTbl(void)
{
    return 0x8C20CA50;
}


void ADXRNA_ClearBuf(void)
{
    
}

void ADXRNA_SetPcmType(void)
{
    
}

void ADXRNA_SetTotalNumSmpl(void)
{
    
}

void ADXRNA_SetWavFname(void)
{
    
}

void ADXSTM_Finish(void)
{
    
}

void ADXSTM_EntryErrFunc(void)
{
    
}

void adxt_stat_playend(void)
{
    
}

void mwlRnaSetSvrInt(void)
{
    
}


void mwlRnaClearBuf(void)
{
    
}

int mwRnaDiscardData(void)
{
    return 0x0;
}


void mwlRnaDummyFunc(void)
{
    
}


