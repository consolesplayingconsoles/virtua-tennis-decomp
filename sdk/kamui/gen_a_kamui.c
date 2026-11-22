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


int kmyIsDisplayOddField(void)
{
    int t0;

    t0 = kmiReadRegister(0x10C);
    return ((unsigned int)((unsigned int)(t0 & 0x400) >> 8) >> 2);
}


int kmSetFogDensity(int a4)
{
    int t0;

    *(unsigned int *)0x8C4709F8 = a4;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = (t0 | 0x2);
    return 0x0;
}

int kmiReadRegister(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xA05F8000));
    return t0;
}

int kmSetPaletteData(int a4)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFD);
    kmyMemCopy(0x8C470E08, a4, 0x1000);
    t2 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t2 | 0x2);
    return 0x0;
}

int kmyEnableASyncCopy(int a4)
{
    int t0;
    int t1;

    t0 = kmyGetInterruptLevel(a4);
    if ((t0 == 0)) {
    
        if (!(a4 == 0)) {
        t1 = 0x1;
        } else {
        t1 = 0x0;
        }
        *(unsigned int *)0x8C470D20 = t1;
        return 0x0;
        }
    return 0xEEEE;
}

int kmQueryFinishLastTextureDMA(void)
{
    int t0;
    int t1;
    int t2;

    t0 = kmyGetLastTextureDMAID();
    t1 = kmyQueryFinishDMA(t0);
    
    if ((t1 == 0x101)) {
        t2 = 0x0;
        } else {
        t2 = 0x78;
        }
    return t2;
}

int kmSetEORCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x0, a4, a5);
}

int kmSetFatalErrorCallback(int a4)
{
    return kmyRegisterCallback(0x8, a4, 0x8C45F920);
}

int kmSetHSyncCallback(int callback, int callbackArgument)
{
    return kmyRegisterCallback(0x2, callback, callbackArgument);
}

int kmSetPALEXTCallback(int a4)
{
    return kmyRegisterCallback(0xB, a4, 0x8C45F928);
}

int kmSetTexOverflowCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x3, a4, a5);
}

int kmSetVSyncCallback(int callback, int callbackArgument)
{
    return kmyRegisterCallback(0x1, callback, callbackArgument);
}

int kmSetWaitVsyncCallback(int a4, int a5)
{
    return kmyRegisterCallback(0x7, a4, a5);
}

int kmFreeTexture(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)((a4 + 0x0));
    
    if (((unsigned short)t0 == 3)) {
        t1 = kmtex_ConfirmSmallVQ(a4);
        t2 = *(int *)((a4 + 0x1C));
        t3 = kmyFreeSmallVQArea(t1, t2);
        t6 = t3;
        } else {
        t4 = *(int *)((a4 + 0x1C));
        t5 = kmyFreeArea(t4);
        t6 = t5;
        }
    return t6;
}

int collectTextureGarbage(void)
{
    int result;

    result = kmyGarbageCollection();
    return result;
}

int kmGetFreeTextureMem(void)
{
    int t0;

    t0 = kmyGetFreeSize();
    return t0;
}

int kmSetRegionClipping(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0x8C45F7DC = a4;
    *(unsigned int *)0x8C45F7E4 = a6;
    *(unsigned int *)0x8C45F7E0 = a5;
    *(unsigned int *)0x8C45F7E8 = a7;
    return 0x0;
}


void VQEnQueueTop(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x0));
    
    if ((t0 == 0)) {
        t2 = 0x0;
        } else {
        t1 = *(int *)((a4 + 0x0));
        t2 = t1;
        }
    *(unsigned int *)((a5 + 0x4)) = t2;
    *(unsigned int *)((a4 + 0x0)) = a5;
}

int kmBlankScreen(int a4)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t9;
    int t7;

    
    
    if ((a4 == 1)) {
        t0 = *(int *)0x8C45EE4C;
        kmiWriteRegister(0x44, (t0 & 0xFFFFFFFE));
        t2 = *(int *)0x8C45EE88;
        t7 = (t2 | 0x8);
        } else {
        t3 = *(int *)0x8C45EE4C;
        kmiWriteRegister(0x44, (t3 & 0xFFFFFFFE));
        t5 = *(int *)0x8C45EE88;
        t7 = t5;
        }
    kmiWriteRegister(0xE8, t7);
    t9 = *(int *)0x8C45EE4C;
    kmiWriteRegister(0x44, t9);
    return 0x0;
}

int kmyGarbageCollection(void)
{
    int t4;
    int t8;
    int t5;

    FBSortQueue(0x8C20C9EC, 0x8C20C9F0);
    FBSortQueue(0x8C20C9FC, 0x8C20CA00);
    FBSortQueue(0x8C20C9F4, 0x8C20C9F8);
    FBSortQueue(0x8C20CA04, 0x8C20CA08);
    t4 = FBCompQueue(0x8C20C9F4, 0x8C20C9F8, 0x8C20C9EC, 0x8C20C9F0);
    t8 = t4;
    if ((t4 == 0)) {
        t5 = FBCompQueue(0x8C20CA04, 0x8C20CA08, 0x8C20C9FC, 0x8C20CA00);
        t8 = t5;
        }
    return t8;
}

int kmyGetLastTextureDMAID(void)
{
    int t0;

    t0 = *(int *)0x8C470D24;
    return t0;
}

void kmyiUnloadInterrupt(void)
{
    kmiUnregisterInterruptHandler();
}

int kmyRegisterPALEXTCallback(int a4)
{
    if (!(a4 == 0)) {
        *(unsigned int *)0x8C45EEF0 = a4;
        return 0x0;
        }
    *(unsigned int *)0x8C45EEF0 = 0x8C1F78A0;
    return 0xEEEE;
}

int kmyIsEnabledASyncCopy(void)
{
    int t0;

    t0 = *(int *)0x8C470D20;
    return t0;
}

void kmySetDMACallback(int requestAddress, int callbackAddress)
{
    *(unsigned int *)((requestAddress + 0x18)) = callbackAddress;
}

int kmySetDisplayBpp(int a4)
{
    *(unsigned int *)0x8C45EE30 = a4;
    kmiFBControl(a4, 0x0);
    kmiWriteDispModeRegisters();
    return 0x0;
}

int kmyInitializeFog(void)
{
    memset(0x8C4707EC, 0x0, 0x210);
    kmyInitializeFogTable();
    return 0x78;
}

int kmyGetDeviceType(void)
{
    int t0;

    t0 = *(int *)0x8C470D1C;
    return t0;
}

int kmyGetPVRCoreType(void)
{
    int t0;

    t0 = *(int *)0x8C470D0C;
    return t0;
}

int kmyGetPVRCoreRevision(void)
{
    int t0;

    t0 = *(int *)0x8C470D18;
    return t0;
}

int kmiFLWCTRLCheckFreeNBuf(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C460784;
    if (!(t0 == 0)) {
        t1 = kmiFLWCTRLFindFreeNBuf();
        if ((t1 == -1)) {
        return 0x0;
        }
        }
    return 0x1;
}

int kmiSetDisplayClipSize(void)
{
    int t2;
    int t3;

    *(unsigned int *)0x8C45F7CC = 0x0;
    *(unsigned int *)0x8C45F7D0 = 0x0;
    kmyGetDisplayParametersInfo(0x7, 0x0, 0x8C45F7D4);
    kmyGetDisplayParametersInfo(0x8, 0x0, 0x8C45F7D8);
    t2 = *(int *)0x8C45EFD8;
    if (!(t2 == 0)) {
        t3 = *(int *)0x8C45F7D8;
        *(unsigned int *)0x8C45F7D8 = (t3 + 0xFFFFFFFF);
        }
    return 0x0;
}


int kmyAllocateNativeCommandBuffer(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t0;

    
    
    if (((0x1F & a4) == 0)) {
        t0 = a4;
        } else {
        t0 = (0xFFFFFFE0 & (a4 + 0x20));
        }
    *(unsigned int *)((a5 + 0x0)) = 0x0;
    t2 = kmyAllocateAreaWithAddress(0x2, (t0 << 1), a5);
    if ((t2 == 0)) {
        t3 = *(int *)((a5 + 0x0));
        t4 = kmyConvertAddress64to32(t3);
        *(unsigned int *)((a5 + 0x0)) = t4;
        t5 = kmyConvertAddress64to32((t3 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = t5;
        }
    return t2;
}

void kmyDisablePassInfoPreSort(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0xDFFFFFFF);
}

void kmyDisablePassInfoZClear(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (t0 | 0x40000000);
}

void kmyEnablePassInfoPreSort(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (t0 | 0x20000000);
}

void kmyEnablePassInfoZClear(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0xBFFFFFFF);
}

int kmyGetNativeBufferStatus(int a4, int a5)
{
    int t0;
    int t8;
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = kmyiCheckNativeHandle(a4, a5);
    t8 = 0xEEEE;
    if (!(t0 == 0)) {
        t7 = 0xEEEE;
        if (!(a5 == 0)) {
        t1 = *(int *)(((a4 + 0x18) + 0x0));
        *(unsigned int *)((a5 + 0x0)) = t1;
        t2 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)((a5 + 0x4)) = t2;
        t3 = *(int *)(((a4 + 0x18) + 0x14));
        *(unsigned int *)((a5 + 0x8)) = t3;
        t4 = *(int *)(((a4 + 0x18) + 0x18));
        *(unsigned int *)((a5 + 0xC)) = t4;
        t5 = *(int *)(((a4 + 0x18) + 0x28));
        *(unsigned int *)((a5 + 0x10)) = t5;
        t6 = *(int *)(((a4 + 0x18) + 0x2C));
        *(unsigned int *)((a5 + 0x14)) = t6;
        t7 = 0x0;
        }
        t8 = t7;
        }
    return t8;
}

int kmyiInitializeDriverObject(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x8C205A20;
    *(unsigned int *)((a4 + 0x10)) = 0x8C205A34;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x8C205A7C;
    *(unsigned int *)((a5 + 0x4)) = 0x8C20B498;
    *(unsigned int *)((a5 + 0x8)) = 0x8C20B4F8;
    return 0x0;
}

void kmySetDMAValue(int requestAddress, int userValue)
{
    *(unsigned int *)((requestAddress + 0x2C)) = userValue;
}

int kmyGetDMAValue(int requestAddress)
{
    int userValue;

    userValue = *(int *)((requestAddress + 0x2C));
    return userValue;
}

int kmySetPunchThroughThreshold(int a4)
{
    kmiWriteRegister(0x11C, (unsigned char)a4);
    return 0x0;
}

int kmySetColorClampMAX(int a4)
{
    kmiWriteRegister(0xBC, a4);
    return 0x0;
}

void kmySetPaletteMode(int a4)
{
    kmiWriteRegister(0x108, a4);
}


