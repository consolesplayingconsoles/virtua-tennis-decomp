/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetBlkSmpl(int);
int ADXB_GetFormat(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartOfst(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetSfreq(int);
int ADXB_GetTotalNumSmpl(int);
int ADXERR_CallErrFunc(int);
int ADXERR_Init(void);
int ADXF_Finish(void);
int ADXF_GetStat(int);
int ADXF_Init(void);
int ADXSJD_Finish(void);
int ADXSJD_Init(void);
int ADXSTM_Init(void);
int ADXT_SetOutPan(int, int, int);
int nlSysMetricsScaleTime(int);
int nlSysMetricsDiffTime(int, int);
int nlAddVector3op(int, int, int);
int ADXT_SetReloadSct(int, int);
int ADXT_SetAutoRcvr(int, int);
int kmiWriteDispModeRegisters(void);
int dbgMenuDrawTitles(void);
int dbgMenuAddPage(int);
int dbgMenuPageSystem(int);
int camSceneReset(void);
int camResetFov(void);
int fadeReset(void);
int advReset(void);
int padVibOff(void);
int padRepeatInit(void);
int circuitTaskRun(void);
int cpuSglAimTable(void);
int sprTexLoad(int);
int sprTexFree(int);
int sprPutAlpha(int, float);
int menuIconInitA(void);
int menuIconInitB(void);
int logoAInit(void);
int logoBInit(void);
int panelLogoSetup(void);
int panelWideInit(void);
int panelWordsInit(void);
int phraseBigInit(void);
int phraseInit(void);
int logoSmallInit(void);
int logoWaveInit(void);
int countryNameInit(void);
int menuTextInit(void);
int hudFrameInit(void);
int hudFlagInit(void);
int btnGuideInitA(void);
int btnGuideInitB(void);
int hudDigitInit(void);
int hudDigitSmallInit(void);
int windowFrameInit(void);
int bgTilesInit(void);
int bgSprInitAll(void);
int hudBannerInit(void);
int hudCallSprInit(void);
int hudCallSprInit2(void);
int hudCallSprInit3(void);
int hudFontSprInit(void);
int hudRankSprInit(void);
int hudFont2SprInit(void);
int hudLabelSprInit(void);
int hudBgTileInit(void);
int hudBarSprInit(void);
int hudSignSprInit(void);
int panelSprInit(void);
int panelMenuSprInitA(void);
int panelMenuSprInitB(void);
int panelMenuSprInitC(void);
int texPicInit(void);
int selCopyLocalConstants(void);
int stageSelSprInit(void);
int stageSelSprInit2(void);
int stageSelSprInit3(void);
int modeMarkSprInit(void);
int decoSprInit(void);
int decoGaugeSprInit(void);
int selPortReset(void);
int entryAnyAtRound5(void);
int entryIsVersus(int);
int entryResetTable(int, int);
int stageLoadInit(int);
int stageTexFree(void);
int stageTexSetGarbaged(void);
int commonEtcTexSetGarbaged(void);
int stageSoftReset(int, int, int);
int stageWtcMainTexFree(void);
int stageTexSetGarbagedAll(void);
int sprMatchFree(void);
int sprSet266Free(void);
int sprSet173FreeAll(void);
int sprSet173Restore(void);
int sprCommonRestore(void);
int sprMatchRestore(void);
int sprAdvRestore(void);
int sprStartRestore(void);
int sprWtcRestore(void);
int sprSet266Restore(void);
int sprSet280Restore(void);
int sprSet322Restore(void);
int sprSet331Restore(void);
int charaTexFreeAll(void);
int charaTexReloadAll(void);
int initSprLoad(void);
int ballBoyInit(void);
int ballBoyReset(void);
int lineJudgeInit(void);
int netJudgeInit(void);
int netJudgeStart(void);
int umpireInit(void);
int umpireStart(int, int);
int lightSet(int, int, int, int);
int frameHookNop(void);
int strmStateReset(void);
int strmVoiceQueueReset(void);
int strmUmpireCall(int, int, int);
int strmBgmSetVol(int);
int strmVoiceSetVol(int);
int strmScoreReset(void);
int eepromVmuSave(int);
int titleSprTexGarbage(void);
int resCautionTexGarbage(void);
int nlSetCommonTextureOffset(int);
int nlCommonTextureGarbageCollection(void);
int nlWaitVSync(void);
int nlSysMetricsReadTimer(void);
int nlRenderTextureEnd(int);
int nlGetMatrix8(int);
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlLoadRechangeMatrix(int);
int nlObjPutMvSetClosingMode(int);
int nlsndPackLoadStatus(int);
int _quick_mvn(int);
int ovMdlEntryTbl(int);
int ovMdlDeleteTbl(int);
int ADXT_Create(int, int, int);
int kmyMemCopy(int, int, int);
int kmSetPixelClipping(int, int, int, int);
int stringEquals(void);
int gdGdcReqCmd(int, int);
int gdGdcExecServer(void);
int gdGdcCheckDmaTrans(void);
int ADXCRS_Init(void);
int ADXERR_Finish(void);
int ADXSTM_Finish(void);
int FBSortQueue(int, int);
int FBCompQueue(int, int, int, int);
int kmyGetInterruptLevel(int);
int kmyGetLastTextureDMAID(void);
int kmiUnregisterInterruptHandler(void);
int kmiFBControl(int, int);
int bufferEquals(void);
int copyBytes(void);
int ADXB_Init(void);
int ADXPD_Init(void);
int SJMEM_Finish(void);
int SJMEM_Init(void);
int SJRBF_Finish(void);
int SJRBF_Init(void);
int SJUNI_Finish(void);
int SJUNI_Init(void);
int adxsjd_clear(int);
int buExecServer(void);
int buFbrCreateFiber(int, int, int, int);
int buFbrCreateServer(int);
int buFbrEndFiber(void);
int buFbrExecFiberServer(int);
int buFbrInit(void);
int buInit(int, int, int, int);
int buIsExistFile(void);
int buMount(void);
int buUnmount(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int kdSetGunCallback(void);
int kdSetHandler(int, int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmCreateTextureSurface(int, int, int, int);
int kmEndPass(int);
int kmEndScene(int);
int kmGetSystemMetrics(int);
int kmLoadTexture(int, int);
int kmSetCheapShadowMode(void);
int kmSetFogTable(int);
int kmiConvertUVnum(int);
int kmiFLWCTRLFindFreeNBuf(void);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmtex_ConfirmSmallVQ(int);
int kmyAllocateAreaWithAddress(int, int, int);
int kmyConvertAddress64to32(int);
int kmyFreeArea(int);
int kmyFreeSmallVQArea(int, int);
int kmyGarbageCollection(void);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyGetFreeSize(void);
int kmyInitializeFogTable(void);
int kmyQueryFinishDMA(int);
int kmyRegisterCallback(int, int, int);
int kmyiCheckNativeHandle(int, int);
int memcpy2(int, int, int, int);
int memset(int, int, int);
int motFileLoadBegin(int);
int motFileRequest(int);
int mwRnaDiscardData(void);
int mwRnaErrEntryFunc(int, int);
int thunk_mwRnaErrEntryFunc(int, int);
int mwRnaExecServer(void);
int mwRnaFinish(void);
int thunk_mwRnaFinish(void);
int mwRnaGetBitPerSmpl(void);
int mwRnaGetNumData(void);
int mwRnaGetOutPan(void);
int mwRnaGetOutVol(void);
int mwRnaGetSfreq(void);
int mwRnaGetStat(void);
int mwRnaGetTime(void);
int mwRnaInit(void);
int thunk_mwRnaInit(void);
int mwRnaSetBitPerSmpl(void);
int mwRnaSetNumChan(void);
int mwRnaSetOutPan(void);
int mwRnaSetOutVol(void);
int mwRnaSetPlaySw(void);
int mwRnaSetSfreq(void);
int mwRnaSetStartSmpl(void);
int mwRnaSetTransSw(void);
int mwRnaStart(void);
int mwRnaStop(void);
int nlArcCos(float);
int nlArcSin(float);
int nlCloseEvent(void);
int nlCreateTextureParamA(int);
int nlFogTableColor(int, int, int, int);
int nlGetMatrix(void);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);
int nlObjPut(int);
int nlObjPutMvSetMode(int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPrintSetGarbagedTexture(void);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlSprPut(void);
int nlSpriteFreeTextureOnce(int, int, int);
int nlSubVector3op(int, int, int);
int nldispstripSub(int, int, int);
int nlsndFxControl(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndIcsControl(int, int, int);
int nlsndPackFreeBG(int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int, int);
int pdGetPeripheral(int);
int pdInitPeripheral(int, int, int);
int padLcdModeClear(void);
int memcmp(int, int, int);
int syBtCfgSet(int, int);
int syCfgInit(int);
int thunk_fadeScreenDraw(float, float);
int vmsfb_exec(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_exit(void);
int vmsfs_c_getstate(int, int, int);
int vmsfs_c_setcallbackparam(void);
int vmsfs_c_setcompletecallback(void);
int vmsfs_c_setprogresscallback(void);
int vmsfs_exit(void);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext_ex(int, int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_isformat(void);
int vmsfs_ismount(void);
int vmsfs_setretry(void);


int nlCreateTextureParamA(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)((a4 + 0xC));
    t1 = kmiConvertUVnum(t0);
    t2 = *(int *)((a4 + 0x10));
    t3 = kmiConvertUVnum(t2);
    *(unsigned int *)((a4 + 0x30)) = ((((t1 << 2) << 1) & 0xFFFFFFF8) | t3);
    t4 = *(int *)((a4 + 0x18));
    t5 = *(int *)((a4 + 0x8));
    t6 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x34)) = (((t4 | t5) & 0xFF800000) | ((unsigned int)((unsigned int)t6 >> 2) >> 1));
    return t3;
}

int nlLoadDummyTexture(void)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(short *)0x8C1278D6;
    t1 = *(int *)0x8C1278D8;
    t2 = *(short *)0x8C1278D4;
    kmCreateTextureSurface(0x8C4241C8, t2, t0, t1);
    t4 = *(int *)0x8C1278DC;
    kmLoadTexture(0x8C4241C8, t4);
    return nlCreateTextureParamA(0x8C4241C8);
}

void nlSetPalExtMode(int a4)
{
    *(unsigned int *)0x8C1DC88C = a4;
}

void nlSysSetTextureSize(int a4)
{
    *(unsigned int *)0x8C424220 = (a4 << 2);
}

int nlSysSetVertexBufferBaseAddress(int a4)
{
    int t0;

    t0 = *(int *)0x8C424414;
    if ((t0 == 1)) {
        *(unsigned int *)0x8C424238 = (a4 | 0xA0000000);
        }
    return t0;
}

int nlSysMetricsStart(void)
{
    return kmGetSystemMetrics(0x8C44F4AC);
}

int nlSysMetricsGetLastRenderTime(void)
{
    int t0;

    t0 = *(int *)0x8C44F4B0;
    return t0;
}

int nlSysMetricsReadTimer(void)
{
    int t0;

    t0 = *(int *)0xFFD8000C;
    return t0;
}

int nlSysMetricsScaleTime(int a4)
{
    float u0;

    u0 = *(float *)0x8C424490;
    return (int)((float)a4 * u0);
}

int nlSysMetricsCpuPowerStart(void)
{
    int t0;

    t0 = nlSysMetricsReadTimer();
    *(unsigned int *)0x8C44F69C = t0;
    return t0;
}

int nlSysMetricsCpuPowerGet(void)
{
    int t0;
    int t1;
    int t2;

    t0 = nlSysMetricsReadTimer();
    t1 = *(int *)0x8C44F69C;
    t2 = nlSysMetricsDiffTime(t1, t0);
    return nlSysMetricsScaleTime(t2);
}

int nlSysBeginScene(void)
{
    *(unsigned int *)0x8C424464 = 0x1;
    kmBeginScene(0x8C42420C);
    return 0x0;
}

int nlSysEndScene(void)
{
    kmEndScene(0x8C42420C);
    return 0x0;
}

int nlSysBeginPass(void)
{
    int t1;

    kmBeginPass(0x8C454FC0);
    t1 = *(int *)0x8C454FC0;
    *(unsigned int *)0x8C42445C = t1;
    return 0x0;
}

int nlSysEndPass(void)
{
    kmEndPass(0x8C454FC0);
    return 0x0;
}

int nlArcCosec(float f4)
{
    if ((f4 == 0.0f)) {
        return 0x0;
        }
    return nlArcSin((1.0f / f4));
}

int nlArcSec(float f4)
{
    if ((f4 == 0.0f)) {
        return 0x0;
        }
    return nlArcCos((1.0f / f4));
}

void nlRandomSeed(int a4)
{
    *(unsigned int *)0x8C1DC8C8 = a4;
}

void nlPrintSetZ(float f4)
{
    *(float *)0x8C1DC8D0 = (1.0f / f4);
}

void nlPrintMonitorMode(int a4)
{
    *(unsigned int *)0x8C1DC8CC = a4;
}

int nlFogTableSet(int a4)
{
    /* the table (r4) goes on to kmSetFogTable as it came */
    return kmSetFogTable(a4);
}


int nlMakeModelProjectMatrix(void)
{
    int t0;

    t0 = *(int *)0x8C450888;
    nlPushMatrix(t0);
    nlMultiPushedMatrix();
    nlGetMatrix8(0x8C450A50);
    return nlPopMatrix(0x1);
}

void nl_requset_PixelClipping(float f4, float f5, float f6, float f7)
{
    *(unsigned int *)0x8C1DCA34 = 0x1;
    *(float *)0x8C450B28 = f4;
    *(float *)0x8C450B2C = f5;
    *(float *)0x8C450B30 = f6;
    *(float *)0x8C450B34 = f7;
}

void nl_action_PixelClipping(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;

    t0 = *(int *)0x8C1DCA34;
    if (!(t0 == 0)) {
        u1 = *(float *)0x8C450B34;
        u2 = *(float *)0x8C450B30;
        u3 = *(float *)0x8C450B2C;
        u4 = *(float *)0x8C450B28;
        kmSetPixelClipping((int)u4, (int)u3, (int)u2, (int)u1);
        *(unsigned int *)0x8C1DCA34 = 0x0;
        }
}

void nl_cancel_PixelClipping(void)
{
    *(unsigned int *)0x8C1DCA34 = 0x0;
}

void nlLineSetDiv(float f4)
{
    *(float *)0x8C458E48 = f4;
}

int nl_set_cnv_proj_pers(void)
{
    nlGetMatrix8(0x8C450BB8);
    nlLoadRechangeMatrix(0x8C450A90);
    nlMultiMatrix8(0x8C450BB8);
    nlGetMatrix8(0x8C450B38);
    nlGetMatrix8(0x8C450B78);
    return nlLoadMatrix8(0x8C450BB8);
}

int nlObjPutMvInit(void)
{
    kmSetCheapShadowMode();
    nlObjPutMvSetMode(0x1);
    return nlObjPutMvSetClosingMode(0x1);
}

int nlObjPutMvSetClosingMode(int a4)
{
    int t0;

    t0 = a4;
    if (!(a4 == -1)) {
        t0 = 0x1;
        }
    *(unsigned int *)0x8C450C00 = t0;
    return a4;
}

void nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0x8C1DCA40;
    *(float *)0x8C1DCA50 = (u0 + f4);
    u1 = *(float *)0x8C1DCA44;
    *(float *)0x8C1DCA54 = (u1 + f5);
    u2 = *(float *)0x8C1DCA48;
    *(float *)0x8C1DCA58 = (u2 + f6);
    *(float *)0x8C1DCA60 = f4;
    *(float *)0x8C1DCA64 = f5;
    *(float *)0x8C1DCA68 = f6;
}

void nlObjPutSetLightDirectionF(float f4, float f5, float f6)
{
    *(float *)0x8C1DCA40 = f4;
    *(float *)0x8C1DCA44 = f5;
    *(float *)0x8C1DCA48 = f6;
    *(float *)0x8C1DCA4C = (f6 + 1.0f);
    *(float *)0x8C1DCA50 = f4;
    *(float *)0x8C1DCA54 = f5;
    *(float *)0x8C1DCA58 = (f6 + 1.0f);
    *(float *)0x8C1DCA60 = 0.0f;
    *(float *)0x8C1DCA64 = 0.0f;
    *(float *)0x8C1DCA68 = 1.0f;
}

void nlObjPutSetFadeColorBase(float f4, float f5, float f6)
{
    *(float *)0x8C1DCA70 = f4;
    *(float *)0x8C1DCA74 = f5;
    *(float *)0x8C1DCA78 = f6;
}

void nlObjPutSetFadeColorOffset(float f4, float f5, float f6)
{
    *(float *)0x8C1DCA80 = f4;
    *(float *)0x8C1DCA84 = f5;
    *(float *)0x8C1DCA88 = f6;
}

void nlSetTrnslMode(int a4, int a5)
{
    *(unsigned int *)0x8C424418 = ((((((~a4) & 0x7) << 2) << 2) << 1) + (((~a5) & 0x7) << 2));
}

int nlMakeModelProjectMatrix_objput(void)
{
    nlPushMatrix(0x0);
    return nlMultiMatrixRevOrder8(0x8C450B38);
}

int nlMakeModelViewProjectMatrix_objput(void)
{
    int t1;

    nlPushMatrix(0x8C450B38);
    t1 = *(int *)0x8C45087C;
    nlMultiMatrix(t1);
    return nlMultiPushedMatrix();
}

void nlLineSetThickness(float f4)
{
    *(float *)0x8C1DCAA4 = f4;
}

int nlsndDriverSeqStatus(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C454CAC;
    t1 = nlsndG2Read((t0 + 0x10));
    if (!(t1 == 0)) {
        nlsndG2Write(0x0, (t0 + 0x10));
        }
    return t1;
}

int nlsndDriverMidiReqNum(void)
{
    return nlsndG2Read(0xA08000EC);
}

int nlsndDriverStatus(void)
{
    return nlsndG2Read(0xA08000E8);
}

void nlsndStreamSetHdOctFns(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + 0x22) + 0x0)) = (((((short)a5 << 8) << 2) << 1) | a6);
}

void nlsndSetG2TransMode(int a4)
{
    if ((a4 == 0)) {
        *(unsigned int *)0x8C454CEC = a4;
        }
}

void nlDispStripInit(void)
{
    *(unsigned int *)0x8C454F34 = 0x0;
    *(unsigned int *)0x8C454F3C = 0x0;
}

int nlDispStrip(int a4, int a5)
{
    nlstripSetVertexContext(0x8C1DCAF8, a5);
    return nldispstripSub(a4, 0x0, a5);
}

int nlDispStripTrnsl(int a4, int a5)
{
    nlstripSetVertexContext(0x8C1DCB20, a5);
    return nldispstripSub(a4, 0x0, a5);
}


