/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int padVibStopAll(void);
int modelSetVertsInt(int, int);
int nlSetBackColorZ(float);
int nlObjPutSetGarbagedTexture_Sub(int, int, int);
int nlObjPutFreeTextureOnce_Sub(int, int, int);
int nlSingleLineSub(int, int, int, int);
int nlSpriteSetGarbagedTextureOnce_Sub(int, int, int);
int displaypolygondata_sidx_trnsl(float);
extern void _builtin_prefetch(void *);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
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
int FUN_8c1ef4a0(int a4, int a5, int a6);
int kbCfgGetId(int a4, int a5, int a6);
int kmyiCheckTAHandle(int a4);
int syBtFlGetInfo(int a4, int a5, int a6);
int syBtFlRead(int a4, int a5, int a6);
int syBtFlWrite(int a4, int a5, int a6);
int syBtFlDeleteSct(int a4, int a5, int a6);
int deformModelRestore(int a4);
int FUN_8c0eaf00(void);
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
int displaypolygondata_sidx(void);
int vmsfs_c_fiber7(void);

int lineJudgeShadowPart(int a4)
{
    int t0;

    t0 = *(int *)(((a4 << 2) + 0x8C1D112C));
    return nlObjPut(t0);
}

int syG2AicaFifoIsEmpty(int a4)
{
    int t0;

    t0 = *(int *)0xA05F688C;
    *(unsigned int *)((a4 + 0x0)) = ((((t0 & 1) == 0)) ? 1 : 0);
    return 0x0;
}

int syG2FifoIsEmpty(int a4)
{
    int t0;

    t0 = *(int *)0xA05F688C;
    *(unsigned int *)((a4 + 0x0)) = ((((t0 & 16) == 0)) ? 1 : 0);
    return 0x0;
}

int dbgMenuIsPage(int a4)
{
    int t0;

    t0 = *(int *)0x8C2871B0;
    return (((t0 == a4)) ? 1 : 0);
}

int selSlot0FlagClear(void)
{
    int t0;

    t0 = *(int *)0x8C34326C;
    return (((t0 == 0)) ? 1 : 0);
}

int endingModelSet(int a4)
{
    int t0;

    t0 = *(int *)(((a4 << 2) + 0x8C1D338C));
    *(unsigned int *)0xCB4D7B8 = t0;
    return 0x8C1D338C;
}

int BupGetInfo(int a4)
{
    return ((a4 * 0x4C) + 0x8C40C6B0);
}

int nlExitSystem(void)
{
    return ((int (*)(int))(0x8C1E2F60))(0x8C454FC0);
}

void nlsndStreamSetHdVol(int a4, int a5, int a6)
{
    *(unsigned char *)((((((short)a5 << 2) + a4) + 0x31) + 0x0)) = a6;
}

void nl_objput_mv_xchg_p0p1(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int gdGdcReqCmd(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int gdGdcGetCmdStat(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int gdGdcExecServer(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int gdGdcInitSystem(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int gdGdcGetDrvStat(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int gdGdcReqDmaTrans(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int gdGdcCheckDmaTrans(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

void ADXSJD_SetOutSj(int a4, int a5, int a6)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0xC)) + 0x0)) = a6;
}

int camResetFov(void)
{
    float u0;

    u0 = *(float *)0x8C016FF4;
    *(float *)0x8C287A04 = u0;
    return 0x8C016FF4;
}

float mathLerp(float f4, float f5, float f6)
{
    return (f4 + f6 * (f5 - f4));
}

int shadowNullCb(void)
{
    return 0xFFFFFEC0;
}

int FUN_8c1ef4a0(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int kbCfgGetId(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int kmyiCheckTAHandle(int a4)
{
    return (((0x8C4743FC == a4)) ? 1 : 0);
}

int syBtFlGetInfo(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int syBtFlRead(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int syBtFlWrite(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int syBtFlDeleteSct(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int deformModelRestore(int a4)
{
    return modelSetVertsInt(a4, 0x8C3311F4);
}

int FUN_8c0eaf00(void)
{
    float u0;

    u0 = *(float *)0x8C0EAF28;
    return nlSetBackColorZ(u0);
}

int padVibOff(void)
{
    *(unsigned int *)0x8C29BBBC = 0x0;
    return padVibStopAll();
}

int nlSysMetricsDiffTime(int a4, int a5)
{
    return (a4 - a5);
}

int nlObjPutSetGarbagedTexture(int a4)
{
    return nlObjPutSetGarbagedTexture_Sub(a4, 0x0, 0x0);
}

int nlObjPutFreeTextureOnce(int a4)
{
    return nlObjPutFreeTextureOnce_Sub(a4, 0x0, 0x0);
}

int nlsndVersion(void)
{
    return 0x8C127EA4;
}

int gdFsGetGdDcf(void)
{
    return 0x8C20A6B0;
}

int syTmrDiffCount(int a4, int a5)
{
    return (a5 - a4);
}

int ADXRNA_GetNumRoom(void)
{
    return 0x7FFFFFFF;
}

int ADXSJD_GetSpsdInfo(int a4)
{
    return (a4 + 0x58);
}

void _kmyiDefaultPALEXTCallbackFunc(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x1;
}

int mwlSbGetWorkTbl(void)
{
    return 0x8C20CA50;
}

void dbgHookNop(void)
{
    
}

void emotRetOne(void)
{
    
}

int sprSet266InitThunk(void)
{
    return ((int (*)(void))(0x8C0C4C84))();
}

void netHitNop(void)
{
    
}

void frameHookNop(void)
{
    
}

void sndDummy0(void)
{
    
}

void sndDummy1(void)
{
    
}

void endingNop(void)
{
    
}

void evNop(void)
{
    
}

int nlCreateVertexBuffer_clx16(void)
{
    return 0x1;
}

void prefetch(int a4)
{
    _builtin_prefetch((void *)a4);
}

int nlSingleLine(int a4, int a5, int a6)
{
    return nlSingleLineSub(a4, a5, a6, 0x0);
}

int nlSpriteLoadTextureOnce(int a4, int a5, int a6)
{
    return nlSpriteLoadTextureOnce_Sub(a4, a5, a6, 0x0);
}

int nlSpriteSetGarbagedTextureOnce(int a4, int a5)
{
    return nlSpriteSetGarbagedTextureOnce_Sub(a4, a5, 0x0);
}

int nlSpriteFreeTextureOnce(int a4, int a5, int a6)
{
    return nlSpriteFreeTextureOnce_Sub(a4, a5, a6, 0x0);
}

int nlIntrDefaultFunction(void)
{
    return 0x0;
}

void nlObjPutLoadTextureCallBack(void)
{
    
}

void kmyPurgeCache(int a4)
{
    iaOcbwb((void *)a4);
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

void kmyiDefaultCallback(void)
{
    
}

void mwlRnaDummyFunc(void)
{
    
}

int kmyInitializeRenderPacket(void)
{
    return 0x0;
}

int displaypolygondata_sidx(void)
{
    return displaypolygondata_sidx_trnsl(1.0f);
}

int vmsfs_c_fiber7(void)
{
    return vmsfs_c_dispatch(0x7);
}
