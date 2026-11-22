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


int ADXT_Init(void)
{
    ADXF_Init();
    SJUNI_Init();
    SJRBF_Init();
    SJMEM_Init();
    ADXCRS_Init();
    thunk_mwRnaInit();
    ADXSTM_Init();
    ADXSJD_Init();
    ADXERR_Init();
    thunk_mwRnaErrEntryFunc(0x8C1E0D30, 0x0);
    return memset(0x8C20C258, 0x0, 0x460);
}

int ADXT_Finish(void)
{
    ADXERR_Finish();
    ADXSJD_Finish();
    ADXSTM_Finish();
    thunk_mwRnaFinish();
    SJMEM_Finish();
    SJRBF_Finish();
    SJUNI_Finish();
    return ADXF_Finish();
}

int ADXT_GetStat(int playerAddress)
{
    int status;

    status = *(signed char *)((playerAddress + 0x1));
    return status;
}

int ADXT_GetOutVol(int playerAddress)
{
    int outputVolume;

    outputVolume = *(short *)((playerAddress + 0x40));
    return outputVolume;
}

int ADXF_Tell(int a4)
{
    int t1;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A0D4);
        return 0xFFFFFFFD;
        }
    t1 = *(int *)((a4 + 0x18));
    return t1;
}

int ADXF_GetFsizeSct(int a4)
{
    int t1;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A0FC);
        return 0xFFFFFFFD;
        }
    t1 = *(int *)((a4 + 0x10));
    return t1;
}

int ADXF_GetFsizeByte(int a4)
{
    int t1;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A128);
        return 0xFFFFFFFD;
        }
    t1 = *(int *)((a4 + 0x14));
    return t1;
}

int ADXF_GetNumReadSct(int a4)
{
    int t1;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A188);
        return 0xFFFFFFFD;
        }
    t1 = *(int *)((a4 + 0x24));
    return t1;
}

int ADXF_GetStat(int a4)
{
    int t1;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A1B8);
        return 0xFFFFFFFD;
        }
    t1 = *(signed char *)((a4 + 0x1));
    return t1;
}


int ADXAMP_GetStat(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return t0;
}

int ADXERR_Finish(void)
{
    int t0;

    t0 = memset(0x8C46AD24, 0x0, 0x100);
    *(unsigned int *)0x8C20C89C = 0x0;
    *(unsigned int *)0x8C20C8A0 = 0x0;
    return t0;
}

int ADXRNA_Start(void)
{
    return mwRnaStart();
}

int ADXRNA_Stop(void)
{
    return mwRnaStop();
}

int ADXRNA_SetTransSw(void)
{
    return mwRnaSetTransSw();
}

int ADXRNA_SetPlaySw(void)
{
    return mwRnaSetPlaySw();
}

int ADXRNA_GetTime(void)
{
    return mwRnaGetTime();
}

int ADXRNA_GetNumData(void)
{
    return mwRnaGetNumData();
}

int ADXRNA_GetStat(void)
{
    return mwRnaGetStat();
}

int ADXRNA_ExecServer(void)
{
    return mwRnaExecServer();
}

int ADXRNA_SetStartSmpl(void)
{
    return mwRnaSetStartSmpl();
}

int ADXRNA_SetNumChan(void)
{
    return mwRnaSetNumChan();
}

int ADXRNA_SetSfreq(void)
{
    return mwRnaSetSfreq();
}

int ADXRNA_SetOutVol(void)
{
    return mwRnaSetOutVol();
}

int ADXRNA_SetOutPan(void)
{
    return mwRnaSetOutPan();
}

int ADXRNA_SetBitPerSmpl(void)
{
    return mwRnaSetBitPerSmpl();
}

int ADXRNA_GetSfreq(void)
{
    return mwRnaGetSfreq();
}

int ADXRNA_GetOutVol(void)
{
    return mwRnaGetOutVol();
}

int ADXRNA_GetOutPan(void)
{
    return mwRnaGetOutPan();
}

int ADXRNA_GetBitPerSmpl(void)
{
    return mwRnaGetBitPerSmpl();
}

int ADXRNA_DiscardData(void)
{
    return mwRnaDiscardData();
}

int ADXSJD_Init(void)
{
    ADXB_Init();
    return memset(0x8C46AE24, 0x0, 0x4C0);
}

int ADXSJD_Finish(void)
{
    return memset(0x8C46AE24, 0x0, 0x4C0);
}

int ADXSJD_GetStat(int streamDecoderAddress)
{
    int status;

    status = *(signed char *)((streamDecoderAddress + 0x1));
    return status;
}

void ADXSJD_SetInSj(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXSJD_Start(int a4)
{
    adxsjd_clear(a4);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
}

int ADXSJD_GetDecNumSmpl(int streamDecoderAddress)
{
    int decodedSampleCount;

    decodedSampleCount = *(int *)((streamDecoderAddress + 0x2C));
    return decodedSampleCount;
}

void ADXSJD_EntryTrapFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x48)) = a5;
    *(unsigned int *)((a4 + 0x4C)) = a6;
}

int ADXSJD_GetFormat(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetFormat(decoderAddress);
}

int ADXSJD_GetSfreq(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetSfreq(decoderAddress);
}

int ADXSJD_GetNumChan(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetNumChan(decoderAddress);
}

int ADXSJD_GetOutBps(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetOutBps(decoderAddress);
}

int ADXSJD_GetBlkSmpl(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetBlkSmpl(decoderAddress);
}

int ADXSJD_GetTotalNumSmpl(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetTotalNumSmpl(decoderAddress);
}

int ADXSJD_GetNumLoop(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetNumLoop(decoderAddress);
}

int ADXSJD_GetLpStartPos(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetLpStartPos(decoderAddress);
}

int ADXSJD_GetLpStartOfst(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetLpStartOfst(decoderAddress);
}

int ADXSJD_GetLpEndPos(int streamDecoderAddress)
{
    int decoderAddress;

    decoderAddress = *(int *)((streamDecoderAddress + 0x4));
    return ADXB_GetLpEndPos(decoderAddress);
}

int ADXSTM_GetStat(int streamAddress)
{
    int status;

    status = *(signed char *)((streamAddress + 0x1));
    return status;
}

int ADXSTM_GetSj(int streamAddress)
{
    int streamJointAddress;

    streamJointAddress = *(int *)((streamAddress + 0x4));
    return streamJointAddress;
}

int ADXSTM_GetFileLen(int streamAddress)
{
    int fileLength;

    fileLength = *(int *)((streamAddress + 0x14));
    return fileLength;
}

int SJMEM_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

void SJMEM_Reset(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0xC)) = t0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
}

int SJMEM_GetBufPtr(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x14));
    return t0;
}

int SJMEM_GetBufSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x18));
    return t0;
}

int SJRBF_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

void SJRBF_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void SJRBF_Reset(int ringAddress)
{
    int bufferBytes;

    *(unsigned int *)((ringAddress + 0xC)) = 0x0;
    bufferBytes = *(int *)((ringAddress + 0x20));
    *(unsigned int *)((ringAddress + 0x10)) = bufferBytes;
    *(unsigned int *)((ringAddress + 0x14)) = 0x0;
    *(unsigned int *)((ringAddress + 0x18)) = 0x0;
}

int SJRBF_GetBufSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    return t0;
}

int SJUNI_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

void SJUNI_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}


int ADXB_Init(void)
{
    ADXPD_Init();
    return memset(0x8C4731F8, 0x0, 0x560);
}

void ADXB_EntryGetWrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x88)) = a5;
    *(unsigned int *)((a4 + 0x8C)) = a6;
}

void ADXB_EntryAddWrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x90)) = a5;
    *(unsigned int *)((a4 + 0x94)) = a6;
}

int ADXB_GetSfreq(int decoderAddress)
{
    int sampleRate;

    sampleRate = *(int *)((decoderAddress + 0x14));
    return sampleRate;
}

int ADXB_GetBlkSmpl(int decoderAddress)
{
    int samplesPerBlock;

    samplesPerBlock = *(int *)((decoderAddress + 0x10));
    return samplesPerBlock;
}

int ADXB_GetLpInsNsmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    return t0;
}

int ADXB_GetLpStartOfst(int decoderAddress)
{
    int loopStartOffset;

    loopStartOffset = *(int *)((decoderAddress + 0x2C));
    return loopStartOffset;
}

int ADXB_GetStat(int decoderAddress)
{
    int status;

    status = *(int *)((decoderAddress + 0x4));
    return status;
}

int ADXB_GetDecDtLen(int decoderAddress)
{
    int decodedDataLength;

    decodedDataLength = *(int *)((decoderAddress + 0xA4));
    return decodedDataLength;
}

int ADXB_GetDecNumSmpl(int decoderAddress)
{
    int decodedSampleCount;

    decodedSampleCount = *(int *)((decoderAddress + 0xA0));
    return decodedSampleCount;
}

int ADXB_GetAdxpd(int decoderAddress)
{
    int pcmDecoderAddress;

    pcmDecoderAddress = *(int *)((decoderAddress + 0x8));
    return pcmDecoderAddress;
}

int ADXB_CopyExtraBufMono(int a4, int a5, int a6, int a7)
{
    return memcpy2(a4, ((a5 << 1) + a4), a7, a7);
}

void mwlSbGetPitch(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x50));
    *(unsigned int *)((a5 + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a6 + 0x0)) = t1;
}


int ADXPD_Init(void)
{
    return memset(0x8C4762D4, 0x0, 0x1A0);
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

int ADXPD_EntryMono(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if ((t0 == 0)) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        return 0x1;
        }
    return 0x0;
}

void ADXPD_Start(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if ((t0 == 0)) {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x1;
        }
}

int ADXPD_Reset(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if ((t0 == 3)) {
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        }
    return t0;
}

int ADXPD_GetNumBlk(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x10));
    return t0;
}
