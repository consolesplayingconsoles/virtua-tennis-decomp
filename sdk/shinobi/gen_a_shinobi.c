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


int _INITLIBH(void)
{
    int t0;

    t0 = *(int *)0x8C209334;
    return ovMdlEntryTbl(t0);
}

int _FINISHLIBH(void)
{
    int t0;

    t0 = *(int *)0x8C209334;
    return ovMdlDeleteTbl(t0);
}


void gdFsLockDir(int a4)
{
    int t0;
    int t1;

    if (!(a4 == 0)) {
        t0 = *(int *)((a4 + 0x0));
        if (((int)t0 >= (int)0x2)) {
        t1 = *(int *)(((a4 + 0x10) + 0x0));
        *(unsigned int *)(((a4 + 0x10) + 0x2C)) = t1;
        }
        }
}

int pdGunSetCallback(void)
{
    return kdSetGunCallback();
}

int buInterruptHandler(void)
{
    return buExecServer();
}

int buExitForce(void)
{
    int t0;

    *(unsigned int *)0x8C20C21C = 0x0;
    t0 = *(int *)0x8C209A94;
    kdSetHandler(t0, 0x0);
    vmsfs_c_exit();
    return vmsfs_exit();
}

int buSetCompleteCallback(void)
{
    return vmsfs_c_setcompletecallback();
}

int buSetProgressCallback(void)
{
    return vmsfs_c_setprogresscallback();
}

int buSetCallbackParam(void)
{
    return vmsfs_c_setcallbackparam();
}

int buGetVersion(void)
{
    int t0;

    t0 = *(int *)0x8C20C218;
    return t0;
}

int buIsReady(void)
{
    return vmsfs_ismount();
}

int buRemount(void)
{
    return buMount();
}

int buIsFormat(void)
{
    return vmsfs_isformat();
}

int buFindFirstFileEx(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6);
    if (!(t0 == 0)) {
        return 0xFFFFFFFF;
        }
    return vmsfs_findfirst_ex(a4, a5, a6);
}

int buFindNextFileEx(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6);
    if (!(t0 == 0)) {
        return 0xFFFFFFFF;
        }
    return vmsfs_findnext_ex(a4, a5, a6);
}

int buOpenFile(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6);
    if (!(t0 == 0)) {
        return 0xFFFFFFFF;
        }
    return vmsfs_fopen(a4, a5, a6);
}

int buGetFileInfo(int a4, int a5, int a6)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6);
    if (!(t0 == 0)) {
        return 0xFFFFFFFF;
        }
    return vmsfs_fgetinfo(a4, a5, a6);
}

void buSetPrintFunc(int a4)
{
    *(unsigned int *)0x8C20C728 = a4;
}

int buSetRetryCount(void)
{
    return vmsfs_setretry();
}


int syCfgExit(void)
{
    *(unsigned int *)0x8C20C240 = 0x0;
    return 0x0;
}

void syCfgGetLanguage(int a4)
{
    int t0;
    int t1;

    if (!(a4 == 0)) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0x8C20C240;
        if (!(t0 == 0)) {
        t1 = syBtCfgSet(0x0, t0);
        if ((t1 == -1)) {
        return;
        }
        }
        }
}


int gdDcfReset_(void)
{
    int t0;

    t0 = gdGdcReqCmd(0x18, 0x0);
    return t0;
}

int gdDcfChkDmaTrans_(void)
{
    int t0;

    t0 = gdGdcCheckDmaTrans();
    return t0;
}

int gdDcfDaPause_(void)
{
    int t0;

    t0 = gdGdcReqCmd(0x16, 0x0);
    return t0;
}

void gdDcfSvr_(void)
{
    gdGdcExecServer();
}

int gdFsToUpper(int a4)
{
    int t1;
    int t0;

    t1 = a4;
    if (((int)(signed char)a4 >= (int)0x61)) {
        t0 = a4;
        if (!((int)(signed char)a4 > (int)0x7A)) {
        t0 = (a4 + 0xFFFFFFE0);
        }
        t1 = t0;
        }
    return t1;
}

int thunk_stringEquals(void)
{
    return stringEquals();
}

int syTmrGetCount(void)
{
    int t0;

    t0 = *(int *)0xFFD8000C;
    return (0xFFFFFFFF - t0);
}

int vmsfs_c_synch(void)
{
    return vmsfb_exec();
}

int vmsfs_c_fiber0(void)
{
    return vmsfs_c_dispatch(0x0);
}

int vmsfs_c_fiber1(void)
{
    return vmsfs_c_dispatch(0x1);
}


int vmsfb_init(void)
{
    int t1;

    buFbrInit();
    t1 = buFbrCreateServer(0x8);
    *(unsigned int *)0x8C473180 = t1;
    return t1;
}

int vmsfb_create(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C473180;
    return buFbrCreateFiber(t0, a4, a5, a6);
}

int vmsfb_exec(void)
{
    int t0;

    t0 = *(int *)0x8C473180;
    return buFbrExecFiberServer(t0);
}

int vmsfb_end(void)
{
    return buFbrEndFiber();
}

void vmsio_init(void)
{
    *(unsigned int *)0x8C20CA40 = 0x0;
}

int thunk_bufferEquals(void)
{
    return bufferEquals();
}

int thunk_copyBytes(void)
{
    return copyBytes();
}


