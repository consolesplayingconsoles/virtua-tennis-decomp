/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char colliObjCount[];
extern char commonLoadState[];
extern char fileLoadState[];
extern char gAdxErrorCallback[];
extern char gAdxErrorCallbackArgument[];
extern char gAdxErrorMessageBuffer[];
extern char gFrameBufferReadControl[];
extern char gNlDummyTextureSurface[];
extern char gNlObjectFadeColor[];
extern char gNlObjectFadeColorCopy[];
extern char gNlObjectMatrix[];
extern char gPalExtensionRatioCallback[];
extern char g_0c0d6264[];
extern char g_0c14a7b8[];
extern char g_0c14a7bc[];
extern char g_0c2aedbc[];
extern char g_0c2aeea8[];
extern char g_0c2b3390[];
extern char g_0c2b3410[];
extern char g_0c2b34e8[];
extern char g_0c2b3528[];
extern char g_0c2b7be8[];
extern char g_0c2b8cbc[];
extern char g_0c2ea984[];
extern char g_0c2f4f1c[];
extern char g_0c2fa53c[];
extern char g_0c2fa5b4[];
extern char g_8c20c728[];
extern char g_8c4762d4[];
extern char padPeri[];

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
int sprPutAlpha(int);
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
int gdFsStringEquals(void);
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
int fmMngBufferEquals(void);
int fmMngCopyBytes(void);
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
int kmSetFogTable(void);
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

int shadowVolExtrudeTmp(int a4, int a5, int a6)
{
    float u1;

    nlSubVector3op(a6, a4, 0x8C2859E8);
    u1 = *(float *)0x8C2859D8;
    nlScaleUnitVector(a6, a6, u1);
    return nlAddVector3op(a5, a4, a6);
}

int dbgMenuInit(void)
{
    *(unsigned int *)0x8C2871AC = 0x1;
    *(unsigned int *)0x8C2871B0 = 0x0;
    *(unsigned int *)0x8C2871B4 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2871B8 = 0x0;
    *(unsigned int *)0x8C2871BC = 0x0;
    *(unsigned int *)0x8C2871C0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C285E48 = 0x0;
    dbgMenuPageSystem(0x0);
    dbgMenuDrawTitles();
    dbgMenuAddPage(0x8C0134F4);
    return dbgMenuAddPage(0x8C018A24);
}

int dbgMenuGetSelect(void)
{
    int t0;

    t0 = *(int *)0x8C2871B4;
    return t0;
}


void motionIsEnd(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x5C));
    if (!((t0 & 1) == 0)) {
        return;
        }
}

int motionAdvanceSimple(int a4)
{
    int t0;
    float u1;
    float u2;
    float u3;
    int t35;
    int t4;
    int t14;
    int t5;
    float u6;
    int t10;
    int t7;
    float u8;
    int t9;
    int t19;
    int t29;
    int t20;
    float u21;
    int t24;
    int t22;
    int t23;

    t0 = *(int *)((a4 + 0x5C));
    *(unsigned int *)((a4 + 0x5C)) = (t0 & 0xFFFFFFFE);
    u1 = *(float *)(((0x14 + a4) + 0x0));
    u2 = *(float *)((a4 + 0xC));
    *(float *)((a4 + 0xC)) = (u2 + u1);
    u3 = *(float *)((a4 + 0x14));
    t35 = 0x14;
    if ((u3 > 0.0f)) {
        t4 = *(int *)((a4 + 0x28));
        t14 = 0x14;
        if (!(t4 == 0)) {
        t5 = *(int *)((a4 + 0x30));
        u6 = *(float *)((a4 + 0xC));
        t10 = 0xC;
        if (!((float)t5 > u6)) {
        t7 = *(int *)((a4 + 0x30));
        u8 = *(float *)((a4 + 0xC));
        *(float *)((a4 + 0xC)) = (u8 - (float)t7);
        t9 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t9 | 0x1);
        t10 = 0x5C;
        }
        t14 = t10;
        }
        t19 = *(int *)((a4 + 0x28));
        t29 = t14;
        if ((t19 == 0)) {
        t20 = *(int *)((a4 + 0x30));
        u21 = *(float *)((a4 + 0xC));
        t24 = 0xC;
        if ((u21 > (float)(t20 + 0xFFFFFFFF))) {
        t22 = *(int *)((a4 + 0x30));
        *(float *)((a4 + 0xC)) = (float)(t22 + 0xFFFFFFFF);
        t23 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (0x1 | t23);
        t24 = 0x5C;
        }
        t29 = t24;
        }
        t35 = t29;
        }
    return t35;
}

void motionSwitch(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x20));
    if (!(t0 == (a5 + a7))) {
        *(unsigned int *)((a4 + 0x54)) = a7;
        *(unsigned int *)((a4 + 0x20)) = (a5 + a7);
        *(float *)((a4 + 0xC)) = 0.0f;
        *(float *)((a4 + 0x14)) = f4;
        *(unsigned int *)((a4 + 0x28)) = a6;
        t1 = *(int *)(((a5 + a7) + 0x0));
        *(unsigned int *)((a4 + 0x30)) = t1;
        }
}

float motionGetSpeed(int a4)
{
    float u0;

    u0 = *(float *)((a4 + 0x14));
    return u0;
}

void motionSetSpeed(int a4, float f4)
{
    *(float *)((a4 + 0x14)) = f4;
}

float motionGetFrame(int a4)
{
    float u0;

    u0 = *(float *)((a4 + 0xC));
    return u0;
}

void motionSetFrame(int a4, float f4)
{
    *(float *)((a4 + 0xC)) = f4;
}

int camSceneInit(void)
{
    camSceneReset();
    camResetFov();
    return lightSet(0xDC00, 0xDC00, 0x64, 0x80);
}

int camSetOrbit(int a4, int a5, float f4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C287640;
    t1 = 0x80;
    if ((t0 == 0)) {
        *(unsigned short *)0x8C28764E = a4;
        *(unsigned short *)0x8C287650 = a5;
        *(float *)0x8C28762C = f4;
        *(unsigned int *)0x8C287634 = 0x0;
        t1 = 0x74;
        }
    return t1;
}

void dbgLockClear(void)
{
    *(unsigned int *)0x8C287A4C = 0x0;
}

int thunk_nlGetMatrix(void)
{
    return nlGetMatrix();
}

void perfReset(void)
{
    *(unsigned int *)0x8C287AC8 = 0x0;
}

int serveNextPoint(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t4;

    t0 = *(int *)0x8C287B38;
    *(unsigned int *)0x8C287B38 = (t0 + 0x1);
    t1 = *(int *)0x8C287B34;
    t2 = *(int *)0x8C287B38;
    t3 = *(int *)0x8C287B30;
    t5 = 0x64;
    if (((t2 - t1) == t3)) {
        t4 = *(int *)0x8C287B34;
        *(unsigned int *)0x8C287B38 = t4;
        t5 = 0x6C;
        }
    return t5;
}

int fadeGameInit(void)
{
    *(unsigned int *)0x8C29BBBC = 0x0;
    padLcdModeClear();
    fadeReset();
    advReset();
    *(unsigned int *)0x8C287C60 = 0x0;
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    motFileRequest(0x1);
    motFileRequest(0x2);
    motFileRequest(0x3);
    motFileRequest(0x4);
    motFileRequest(0x9);
    return motFileLoadBegin(0x0);
}

int fadeCaptureEnd(int a4)
{
    int t0;
    int t6;
    float u2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1389FC;
    t6 = t0;
    if ((t0 == 1)) {
        nlRenderTextureEnd(a4);
        u2 = *(float *)0x8C287D64;
        t3 = thunk_fadeScreenDraw(1.0f, u2);
        *(unsigned int *)0x8C287D7C = a4;
        *(float *)0x8C287D80 = (float)(a4 + 0xFFFFFFFE);
    
    
        if ((a4 == 0)) {
        *(unsigned int *)0x8C1389FC = 0x3;
        t4 = 0x3;
        } else {
        *(unsigned int *)0x8C1389FC = 0x2;
        t4 = t3;
        }
        t6 = t4;
        }
    return t6;
}

int fadeStart(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1389FC;
    if ((t0 == 3)) {
        *(unsigned int *)0x8C1389FC = 0x2;
        t1 = a4;
        if (!((int)a4 > 0)) {
        t1 = 0x3C;
        }
        *(unsigned int *)0x8C287D7C = t1;
        *(float *)0x8C287D80 = (float)(t1 + 0xFFFFFFFE);
        }
    return t0;
}

int playerInputSide(int a4)
{
    float u0;
    float u3;
    int t5;
    int t4;
    int t2;
    int t1;

    u0 = *(float *)0x8C287960;
    
    if ((u0 > 0.0f)) {
        t2 = 0x1;
        } else {
    
        if ((0.0f > u0)) {
        t1 = 0xFFFFFFFF;
        } else {
        t1 = 0x0;
        }
        t2 = t1;
        }
    u3 = *(float *)((a4 + 0xB00));
    t5 = 0xB00;
    if (((float)t2 == u3)) {
        t4 = *(short *)((a4 + 0xD46));
        *(unsigned short *)((a4 + 0xD46)) = (((((0x20 & t4) >> 1) | ((0x10 & t4) << 1)) | ((0x80 & t4) >> 1)) | ((0x40 & t4) << 1));
        t5 = 0xD46;
        }
    return t5;
}

void advPeriOff(void)
{
    padLcdModeClear();
    *(unsigned int *)0x8C29BBBC = 0x0;
}

int padInit(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    pdInitPeripheral(0x0, 0x8C29BBC8, 0x8C2CBBC8);
    t1 = pdGetPeripheral(0x0);
    *(unsigned int *)(int)padPeri = t1;
    t2 = pdGetPeripheral(0x6);
    *(unsigned int *)0x8C29B89C = t2;
    t3 = pdGetPeripheral(0xC);
    *(unsigned int *)0x8C29B8A0 = t3;
    t4 = pdGetPeripheral(0x12);
    *(unsigned int *)0x8C29B8A4 = t4;
    padVibOff();
    padLcdModeClear();
    *(unsigned int *)0x8C29BBC0 = 0x0;
    return padRepeatInit();
}

void padLcdMessage(int a4)
{
    *(unsigned int *)0x8C29BBC4 = a4;
    *(unsigned int *)0x8C29BBC0 = 0x78;
}

int thunk_circuitTaskRun(void)
{
    return circuitTaskRun();
}

void circuitTaskClear(void)
{
    *(unsigned int *)0x8C2FBE0C = 0xFFFFFFFF;
}

void circuitTaskTrim(int a4)
{
    *(unsigned int *)0x8C2FBE0C = (a4 + 0xFFFFFFFF);
    *(unsigned int *)0x8C2FBE10 = 0x1;
}

void circuitPanelReset(void)
{
    *(unsigned int *)0x8C2FBE6C = 0x0;
    *(unsigned int *)0x8C2FBE70 = 0x0;
    *(unsigned int *)0x8C2FBE78 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE7C = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE80 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE84 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE88 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE74 = 0xFFFFFFFF;
}

void miniSetModel(int a4, int a5)
{
    *(unsigned int *)0x8C2FC204 = a4;
    *(unsigned int *)0x8C2FC208 = a5;
}

void colliObjClear(void)
{
    *(unsigned int *)(int)colliObjCount = 0x0;
}

void zoneListClear(void)
{
    *(unsigned int *)0x8C2FC314 = 0x0;
    *(unsigned int *)0x8C2FC310 = 0x0;
    *(unsigned int *)0x8C2FC318 = 0x0;
}

void cpuShotTargetSet(int a4, float f4, float f5)
{
    float u0;
    float u1;

    u0 = *(float *)((a4 + 0xB00));
    *(float *)((a4 + 0xA28)) = (f4 * u0);
    u1 = *(float *)((a4 + 0xB00));
    *(float *)((a4 + 0xA2C)) = (f5 * u1);
}

int cpuSglAimTableCall(void)
{
    int t0;

    t0 = cpuSglAimTable();
    return t0;
}

void ndbKeyEqual(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(signed char *)((a5 + 0x0));
    t1 = *(signed char *)((a4 + 0x0));
    if ((t1 == t0)) {
        t2 = *(signed char *)((a4 + 0x1));
        t3 = *(signed char *)((a5 + 0x1));
        if ((t2 == t3)) {
        t4 = *(signed char *)((a4 + 0x2));
        t5 = *(signed char *)((a5 + 0x2));
        if ((t4 == t5)) {
        t6 = *(signed char *)((a4 + 0x3));
        t7 = *(signed char *)((a5 + 0x3));
        if ((t6 == t7)) {
        t8 = *(signed char *)((a4 + 0x4));
        t9 = *(signed char *)((a5 + 0x4));
        if (!(t8 == t9)) {
        return;
        }
        }
        }
        }
        }
}

int effCloseCounted(void)
{
    int t0;
    int t1;

    t0 = nlCloseEvent();
    t1 = *(int *)0x8C181604;
    *(unsigned int *)0x8C181604 = (t1 + 0xFFFFFFFF);
    return t0;
}

void resultFlagSet(int a4)
{
    *(unsigned int *)0x8C181758 = a4;
}

void resultFlagsClear(void)
{
    *(unsigned int *)0x8C1D56D8 = 0x0;
    *(unsigned int *)0x8C1D568C = 0x0;
    *(unsigned int *)0x8C181758 = 0x0;
}

void ambLevelReset(void)
{
    *(unsigned int *)0x8C301BE8 = 0x64;
}

int fogSetColor(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x4)) = a6;
    *(unsigned int *)((a4 + 0x8)) = a7;
    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x4));
    return nlFogTableColor(((((unsigned char)t0 << 16) | ((unsigned char)t1 << 8)) | (unsigned char)a7), a5, a6, a7);
}

void screenOutcode(int a4, int a5)
{
    if (!((int)a4 >= (int)0xFFFFFEA2)) {
        if (((int)a5 > (int)0x104)) {
        return;
        }
        if (!((int)a5 >= (int)0xFFFFFEFC)) {
        return;
        }
        return;
        }
    if (((int)a4 > (int)0x15E)) {
        if (((int)a5 > (int)0x104)) {
        return;
        }
        if (!((int)a5 >= (int)0xFFFFFEFC)) {
        return;
        }
        return;
        }
    if (((int)a5 > (int)0x104)) {
        return;
        }
    if (!((int)a5 >= (int)0xFFFFFEFC)) {
        return;
        }
}

void screenOutcodeMargin(int a4, int a5, int a6)
{
    if (!((int)a4 >= (int)(0xFFFFFEC0 - a6))) {
        if (((int)a5 > (int)(0xF0 + a6))) {
        return;
        }
        if (!((int)a5 >= (int)(0xFFFFFF10 - a6))) {
        return;
        }
        return;
        }
    if (((int)a4 > (int)(a6 + 0x140))) {
        if (((int)a5 > (int)(0xF0 + a6))) {
        return;
        }
        if (!((int)a5 >= (int)(0xFFFFFF10 - a6))) {
        return;
        }
        return;
        }
    if (((int)a5 > (int)(0xF0 + a6))) {
        return;
        }
    if (!((int)a5 >= (int)(0xFFFFFF10 - a6))) {
        return;
        }
}

void crowdCheerStop(void)
{
    *(unsigned int *)0x8C182664 = 0x0;
}

int thunk_nlSprPut(void)
{
    return nlSprPut();
}

void selSlot0FlagSet(void)
{
    int t0;

    t0 = *(int *)0x8C34326C;
    if (!(t0 == 0)) {
        return;
        }
}

void entryGetRound(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = entryAnyAtRound5();
    if ((t0 == 0)) {
        t1 = *(int *)0x8C181628;
        if (!(t1 == 2)) {
        t2 = *(int *)0x8C18162C;
        if (!(t2 == 2)) {
        t3 = *(int *)0x8C181630;
        if (!(t3 == 2)) {
        t4 = *(int *)0x8C181634;
        if (!(t4 == 2)) {
        t5 = *(int *)0x8C1891E8;
        if ((t5 == 4)) {
        t6 = entryIsVersus(0x8C181628);
        if ((t6 == 0)) {
        return;
        }
        }
        }
        }
        }
        }
        }
}

int entryClearJoined(void)
{
    *(unsigned short *)0x8C343262 = 0x0;
    return selPortReset();
}

int entryInit(void)
{
    *(unsigned short *)0x8C343260 = 0x0;
    *(unsigned short *)0x8C343262 = 0x0;
    return entryResetTable(0x0, 0x8C343258);
}

int stageLoadGetFlag(void)
{
    int t0;

    t0 = *(int *)0x8C34400C;
    return t0;
}

int stageTexSetGarbagedAll(void)
{
    nlCommonTextureGarbageCollection();
    nlPrintSetGarbagedTexture();
    stageTexSetGarbaged();
    sprCommonRestore();
    sprMatchRestore();
    sprAdvRestore();
    commonEtcTexSetGarbaged();
    charaTexReloadAll();
    sprWtcRestore();
    sprSet173Restore();
    sprSet266Restore();
    sprSet280Restore();
    sprSet322Restore();
    sprSet331Restore();
    return resCautionTexGarbage();
}

int stageReloadBegin(void)
{
    stageLoadInit(0x0);
    charaTexFreeAll();
    stageTexFree();
    return sprSet173FreeAll();
}

int stageLoadBeginLong(void)
{
    *(unsigned int *)0x8C287C50 = 0xBB8;
    charaTexFreeAll();
    return stageLoadInit(0x0);
}

int fileLoadPollAfs(void)
{
    int t2;
    int t3;
    int t7;
    int t8;

    nlPrintColor(0xFFFF0000);
    nlLocate(0x14, 0x18);
    t2 = *(int *)0x8C34A1F8;
    t3 = ADXF_GetStat(t2);
    if ((t3 == 3)) {
        fileLoadClose();
        }
    nlPrintColor(0xFFFFFFFF);
    t7 = *(int *)0x8C34A1F4;
    *(unsigned int *)0x8C34A1F4 = (t7 + 0x1);
    t8 = *(int *)0x8C34A1F0;
    return t8;
}

void fileLoadReset(void)
{
    *(unsigned int *)(int)fileLoadState = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x0;
}


int minigameTexFileLoad(void)
{
    int t0;
    int t1;

    t0 = *(int *)(int)fileLoadState;
    if ((t0 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = fileLoadStart(0x8CA80000, 0x8C11FC04, 0x0);
        if ((t1 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x0;
        }
        }
    return fileLoadPoll();
}

int minigameSpriteLoad(void)
{
    int t0;
    int t1;

    t0 = *(int *)(int)fileLoadState;
    if ((t0 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = fileLoadStart(0x8CA80000, 0x8C11FC20, 0x0);
        if ((t1 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x0;
        }
        }
    return fileLoadPoll();
}

int gameSpriteLoad(void)
{
    int t0;
    int t1;

    t0 = *(int *)(int)fileLoadState;
    if ((t0 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = fileLoadStart(0x8CA80000, 0x8C11FC38, 0x0);
        if ((t1 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x0;
        }
        }
    return fileLoadPoll();
}

int advSpriteLoad(void)
{
    int t0;
    int t1;

    t0 = *(int *)(int)fileLoadState;
    if ((t0 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = fileLoadStart(0x8CA80000, 0x8C11FC54, 0x0);
        if ((t1 == 0)) {
        *(unsigned int *)(int)fileLoadState = 0x0;
        }
        }
    return fileLoadPoll();
}




int courtFraDrawSign(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t16;
    int t17;
    int t19;
    int t22;
    int t23;
    int t10;
    int t21;

    t0 = *(int *)0x8C287ADC;
    
    
    if ((t0 == 2)) {
        nlObjPut(0xC8BE9B8);
        nlObjPut(0xC5189E0);
    
    
        if (!(a4 == 0)) {
        t3 = *(int *)0x8C18A82C;
        nlObjPut(t3);
        t5 = *(int *)0x8C18A834;
        t10 = t5;
        } else {
        t6 = *(int *)0x8C18A828;
        nlObjPut(t6);
        t8 = *(int *)0x8C18A830;
        t10 = t8;
        }
        t11 = nlObjPut(t10);
        t23 = t11;
        } else {
        nlObjPut(0xC8DCCF8);
        nlObjPut(0xC51E510);
    
    
        if (!(0x8C18A828 == 0)) {
        t14 = *(int *)0x8C18A83C;
        nlObjPut(t14);
        t16 = *(int *)0x8C18A844;
        t21 = t16;
        } else {
        t17 = *(int *)0x8C18A838;
        nlObjPut(t17);
        t19 = *(int *)0x8C18A840;
        t21 = t19;
        }
        t22 = nlObjPut(t21);
        t23 = t22;
        }
    return t23;
}

int courtAusDrawSign(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t16;
    int t17;
    int t19;
    int t22;
    int t23;
    int t10;
    int t21;

    t0 = *(int *)0x8C287ADC;
    
    
    if ((t0 == 2)) {
        nlObjPut(0xC8B6EE8);
        nlObjPut(0xC5189E0);
    
    
        if (!(a4 == 0)) {
        t3 = *(int *)0x8C18BBC8;
        nlObjPut(t3);
        t5 = *(int *)0x8C18BBD0;
        t10 = t5;
        } else {
        t6 = *(int *)0x8C18BBC4;
        nlObjPut(t6);
        t8 = *(int *)0x8C18BBCC;
        t10 = t8;
        }
        t11 = nlObjPut(t10);
        t23 = t11;
        } else {
        nlObjPut(0xC8E26E0);
        nlObjPut(0xC51E510);
    
    
        if (!(0x8C18BBC4 == 0)) {
        t14 = *(int *)0x8C18BBD8;
        nlObjPut(t14);
        t16 = *(int *)0x8C18BBE0;
        t21 = t16;
        } else {
        t17 = *(int *)0x8C18BBD4;
        nlObjPut(t17);
        t19 = *(int *)0x8C18BBDC;
        t21 = t19;
        }
        t22 = nlObjPut(t21);
        t23 = t22;
        }
    return t23;
}

void primSprSetSize(int a4, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)((a4 + 0x18));
    u1 = *(float *)((a4 + 0x20));
    *(float *)((a4 + 0x10)) = (f4 * (u1 - u0));
    u2 = *(float *)((a4 + 0x1C));
    u3 = *(float *)((a4 + 0x24));
    *(float *)((a4 + 0x14)) = (f5 * (u3 - u2));
}

int fadeTexInit(void)
{
    *(unsigned int *)0x8C18E1EC = 0x0;
    *(unsigned int *)0x8C18E1F0 = 0x0;
    return sprTexLoad(0x3A5);
}

void emotKeysInit(int a4)
{
    *(unsigned int *)((a4 + 0x264)) = 0x2;
    *(unsigned int *)((a4 + 0x26C)) = 0x0;
    *(unsigned int *)((a4 + 0x268)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(float *)((a4 + 0x8)) = 1.0f;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x77;
    *(float *)((a4 + 0x14)) = 0.0f;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
}

int stageSweCourtDraw(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    
    
    if ((t0 == 2)) {
        nlObjPut(0xC8E5980);
        nlObjPut(0xC5189E0);
    
    
        if (!(a4 == 0)) {
        t3 = *(int *)0x8C1AC8F4;
        nlObjPut(t3);
        t5 = *(int *)0x8C1AC8FC;
        t10 = t5;
        } else {
        t6 = *(int *)0x8C1AC8F0;
        nlObjPut(t6);
        t8 = *(int *)0x8C1AC8F8;
        t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
        } else {
        nlObjPut(0xC904260);
        nlObjPut(0xC51E510);
    
        if (!(0x8C1AC8F0 == 0)) {
        t14 = *(int *)0x8C1AC904;
        t16 = t14;
        } else {
        t15 = *(int *)0x8C1AC900;
        t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
        }
    return t18;
}

int stageRusCourtDraw(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    
    
    if ((t0 == 2)) {
        nlObjPut(0xC8E43E8);
        nlObjPut(0xC5189E0);
    
    
        if (!(a4 == 0)) {
        t3 = *(int *)0x8C1AE25C;
        nlObjPut(t3);
        t5 = *(int *)0x8C1AE264;
        t10 = t5;
        } else {
        t6 = *(int *)0x8C1AE258;
        nlObjPut(t6);
        t8 = *(int *)0x8C1AE260;
        t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
        } else {
        nlObjPut(0xC9031A0);
        nlObjPut(0xC51E510);
    
        if (!(0x8C1AE258 == 0)) {
        t14 = *(int *)0x8C1AE26C;
        t16 = t14;
        } else {
        t15 = *(int *)0x8C1AE268;
        t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
        }
    return t18;
}

int sprMatchInit(void)
{
    bgSprInitAll();
    panelSprInit();
    hudBarSprInit();
    hudCallSprInit();
    hudCallSprInit2();
    hudCallSprInit3();
    hudFrameInit();
    hudDigitInit();
    hudDigitSmallInit();
    panelWordsInit();
    phraseBigInit();
    return panelWideInit();
}

int sprCommonInit(void)
{
    btnGuideInitA();
    phraseInit();
    btnGuideInitB();
    menuTextInit();
    hudFlagInit();
    hudBgTileInit();
    hudFontSprInit();
    texPicInit();
    hudFont2SprInit();
    hudLabelSprInit();
    hudSignSprInit();
    hudBannerInit();
    panelLogoSetup();
    countryNameInit();
    return hudRankSprInit();
}

int sprAdvInit(void)
{
    decoGaugeSprInit();
    logoSmallInit();
    bgTilesInit();
    logoSmallInit();
    windowFrameInit();
    logoSmallInit();
    modeMarkSprInit();
    return decoSprInit();
}

int thunk_selCopyLocalConstants(void)
{
    return selCopyLocalConstants();
}

int sprSet109Init(void)
{
    stageSelSprInit();
    stageSelSprInit3();
    return stageSelSprInit2();
}

int sprStartInit(void)
{
    logoAInit();
    logoWaveInit();
    menuIconInitA();
    menuIconInitB();
    panelMenuSprInitB();
    panelMenuSprInitC();
    logoBInit();
    return panelMenuSprInitA();
}

void sprSet330Load(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1AEDB8;
    if ((t0 == 0)) {
        t1 = *(int *)0x8C124A60;
        sprTexLoad(t1);
        *(unsigned int *)0x8C1AEDB8 = 0x1;
        }
}

int sprSet330Free(void)
{
    int t0;
    int t3;
    int t1;
    int t2;

    t0 = *(int *)0x8C1AEDB8;
    t3 = 0x8C1AEDB8;
    if (!(t0 == 0)) {
        t1 = *(int *)0x8C124A60;
        t2 = sprTexFree(t1);
        *(unsigned int *)0x8C1AEDB8 = 0x0;
        t3 = t2;
        }
    return t3;
}

int uniformLoadBegin(void)
{
    int t3;

    *(unsigned int *)0x8C37DAEC = 0x0;
    *(unsigned int *)0x8C37DAF0 = 0x0;
    fileLoadCloseSlot(0x0);
    fileLoadCloseSlot(0x1);
    fileLoadCloseSlot(0x2);
    t3 = fileLoadCloseSlot(0x3);
    return t3;
}

int initSprPut0(void)
{
    return sprPutAlpha(0x8C37E98C);
}

int initSprPut1(void)
{
    return sprPutAlpha(0x8C37E9DC);
}

int initSprPut2(void)
{
    return sprPutAlpha(0x8C37EA2C);
}

int initSprFree(void)
{
    int t3;

    nlSetCommonTextureOffset(0x0);
    nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8C);
    nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8B);
    t3 = nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8A);
    return t3;
}

int staffInitAll(void)
{
    ballBoyInit();
    ballBoyReset();
    lineJudgeInit();
    netJudgeInit();
    umpireInit();
    return netJudgeStart();
}

void netHitReset(void)
{
    *(unsigned int *)0x8C38B934 = 0x0;
}

int gameModeSet(int a4, int a5, int a6)
{
    int t2;

    *(unsigned int *)0x8C20D14C = a4;
    *(unsigned int *)0x8C20D150 = a5;
    *(unsigned int *)0x8C421F64 = a6;
    stageSoftReset(a4, a5, a6);
    strmVoiceQueueReset();
    *(unsigned int *)0x8C1D56D8 = 0x0;
    *(unsigned int *)0x8C1D568C = 0x0;
    *(unsigned int *)0x8C20D15C = 0x0;
    *(unsigned int *)0x8C407FD0 = 0x0;
    t2 = strmScoreReset();
    *(unsigned int *)0x8C38B95C = 0x0;
    *(unsigned int *)0x8C38B958 = 0x0;
    *(unsigned int *)0x8C1D1274 = 0x0;
    return t2;
}

int debugTexRelease(void)
{
    nlCommonTextureGarbageCollection();
    nlPrintSetGarbagedTexture();
    commonEtcTexSetGarbaged();
    sprCommonRestore();
    sprAdvRestore();
    sprMatchRestore();
    return sprStartRestore();
}

int frameWaitHook(void)
{
    frameHookNop();
    return nlWaitVSync();
}

int seSystemApply(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t13;

    t0 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x0, 0x10A0, t0);
    t2 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x1, 0x10A0, t2);
    t4 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x2, 0x10A0, t4);
    t6 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x3, 0x10A0, t6);
    t8 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x4, 0x10A0, t8);
    t10 = *(int *)0x8C38BA64;
    nlsndSystemControl(0x5, 0x10A0, t10);
    t12 = *(int *)0x8C38BA64;
    t13 = nlsndSystemControl(0x6, 0x10A0, t12);
    return t13;
}

int sndFxReset(void)
{
    return nlsndFxControl(0x0, 0xA4, 0x0);
}

int sndSeCursor(void)
{
    return nlsndSeqRequest(0x105A9);
}

int sndSeDecide(void)
{
    return nlsndSeqRequest(0x205A9);
}

int sndSe05_09(void)
{
    return nlsndSeqRequest(0x905A9);
}

int sndSe05_04(void)
{
    return nlsndSeqRequest(0x405A9);
}

int sndSeCancel(void)
{
    return nlsndSeqRequest(0x305A9);
}

int sndPack4Free(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;

    
    if ((a4 == 0)) {
        *(unsigned int *)0x8C1D2BDC = 0x0;
        t0 = nlsndPackFreeBG(0x6);
        *(unsigned int *)0x8C38BAB4 = t0;
        } else {
        t1 = *(int *)0x8C1D2BDC;
        if (!(t1 == 99)) {
        t2 = nlsndPackLoadStatus(a4);
        *(unsigned int *)0x8C1D2BE0 = t2;
        if ((t2 == 0)) {
        *(unsigned int *)0x8C1D2BDC = 0x63;
        }
        }
        }
    t5 = *(int *)0x8C1D2BDC;
    return t5;
}

void sndIcsSet(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C38BA70;
    if (!(t0 == 0)) {
        t1 = *(int *)0x8C38BA74;
        if (!(t1 == 0)) {
        t2 = a4;
        if (!((int)a4 >= 0)) {
        t2 = 0x0;
        }
        t3 = t2;
        if (((int)t2 > (int)0x7F)) {
        t3 = 0x7F;
        }
        t4 = a5;
        if (!((int)a5 >= 0)) {
        t4 = 0x0;
        }
        t5 = t4;
        if (((int)t4 > (int)0x7F)) {
        t5 = 0x7F;
        }
        t6 = a6;
        if (!((int)a6 >= (int)0xFFFFFFC0)) {
        t6 = 0xFFFFFFC0;
        }
        t7 = t6;
        if (((int)t6 > (int)0x3F)) {
        t7 = 0x3F;
        }
        nlsndIcsControl(0x0, 0xA6, t3);
        nlsndIcsControl(0x0, 0x10A5, t5);
        nlsndIcsControl(0x0, 0x20A5, t7);
        }
        }
}

void sndPack1FadeCancel(void)
{
    *(unsigned int *)0x8C40C28C = 0x2;
    *(unsigned int *)0x8C40C2AC = 0x2;
}

int sndSe0B_02(void)
{
    nlsndSeqRequest(0x20BA9);
    return nlsndSystemControl(0x0, 0x10A0, 0x78);
}

int sndSe0B_00(void)
{
    nlsndSeqRequest(0xBA9);
    return nlsndSystemControl(0x0, 0x10A0, 0x78);
}

int sndSe0B_01(void)
{
    nlsndSeqRequest(0x10BA9);
    return nlsndSystemControl(0x0, 0x10A0, 0x78);
}

int sndCrowdAmb(void)
{
    return nlsndSeqRequest(0x503A9);
}

int sndStrmVolDefault(void)
{
    strmBgmSetVol(0x8);
    return strmVoiceSetVol(0x8);
}

int endingMotRequest(void)
{
    int t3;

    motFileRequest(0x1);
    motFileRequest(0x2);
    motFileRequest(0x6);
    t3 = motFileRequest(0x8);
    return t3;
}

int strmInit(void)
{
    int t1;
    int t3;
    int t5;
    int t7;

    strmStateReset();
    t1 = ADXT_Create(0x1, 0x8C3E9380, 0x19884);
    *(unsigned int *)0x8C38BA98 = t1;
    ADXT_SetReloadSct(t1, 0x7);
    t3 = *(int *)0x8C38BA98;
    ADXT_SetAutoRcvr(t3, 0x2);
    t5 = ADXT_Create(0x2, 0x8C38BABC, 0x5D8C4);
    *(unsigned int *)0x8C38BA94 = t5;
    ADXT_SetReloadSct(t5, 0x19);
    t7 = *(int *)0x8C38BA94;
    return ADXT_SetAutoRcvr(t7, 0x2);
}

int strmSetStereo(int a4)
{
    int t0;
    int t2;
    int t5;
    int t8;

    t0 = *(int *)0x8C38BA94;
    
    
    if ((a4 == 0)) {
        ADXT_SetOutPan(t0, 0x0, 0x0);
        t2 = *(int *)0x8C38BA94;
        ADXT_SetOutPan(t2, 0x1, 0x0);
        t8 = 0x900A0;
        } else {
        ADXT_SetOutPan(t0, 0x0, 0xFFFFFF80);
        t5 = *(int *)0x8C38BA94;
        ADXT_SetOutPan(t5, 0x1, 0xFFFFFF80);
        t8 = 0x800A0;
        }
    return nlsndSystemControl(0x0, t8, 0x0);
}

int strmUmpireCallAnim(int a4, int a5)
{
    umpireStart(a4, a5);
    return strmUmpireCall(a4, a5, 0xFFFFFFFF);
}

int strmVoiceVolRestore(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2FD;
    return strmVoiceSetVol((unsigned char)t0);
}

int commonLoadStart(void)
{
    initSprLoad();
    *(unsigned int *)(int)commonLoadState = 0x0;
    return fileLoadStart(0x8C500000, 0x8C1265A4, 0x0);
}

int commonSysInit(void)
{
    nlCommonTextureGarbageCollection();
    nlPrintSetGarbagedTexture();
    commonEtcTexSetGarbaged();
    sprCommonRestore();
    sprAdvRestore();
    sprMatchRestore();
    sprStartRestore();
    return titleSprTexGarbage();
}

int eepromCfgInit(void)
{
    return syCfgInit(0x8C41DE14);
}

int eepromVmuSave0(void)
{
    return eepromVmuSave(0x0);
}

int eepromGetDiff(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C20D14C;
    if ((t0 == 6)) {
        t1 = *(int *)0x8C2FCC28;
        return t1;
        }
    t2 = *(int *)0x8C287D5C;
    if ((t2 == 0)) {
        t3 = *(signed char *)0x8C40C2F4;
        return t3;
        }
    t4 = *(signed char *)0x8C40C2F5;
    return t4;
}

int eepromGetMatch(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2F6;
    if (!((int)((unsigned char)t0 + 0x1) >= (int)0x7)) {
        return (t0 + 0x1);
        }
    return t0;
}

int eepromGetVsMatch(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2F7;
    if (!((int)((unsigned char)t0 + 0x1) >= (int)0x7)) {
        return (t0 + 0x1);
        }
    return t0;
}

int eepromGetSnap(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2FA;
    return t0;
}

int eepromGetBoard(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2FB;
    return t0;
}

int eepromGetDeuce(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2F8;
    return t0;
}

int eepromGetVsDeuce(void)
{
    int t0;

    t0 = *(signed char *)0x8C40C2F9;
    return t0;
}

int BupInit(void)
{
    int t1;

    memset(0x8C40C6B0, 0x0, 0x260);
    t1 = buInit(0xF, 0xFF, 0x8C40C910, 0x8C0DFC08);
    *(unsigned char *)0x8C40C62E = 0x0;
    return t1;
}

int thunk_buIsExistFile(void)
{
    return buIsExistFile();
}

int BupGetRequest(void)
{
    int t0;

    t0 = *(int *)0x8C40C634;
    return t0;
}

int resWtcShopRelease(void)
{
    stageLoadInit(0x0);
    *(unsigned int *)0x8C287C50 = 0x3E8;
    stageTexFree();
    charaTexFreeAll();
    stageWtcMainTexFree();
    sprMatchFree();
    sprSet266Free();
    return stageTexSetGarbagedAll();
}

void resTitleObjTexFree(void)
{
    int t0;

    t0 = *(int *)0x8C1DC56C;
    if (!(t0 == 0)) {
        *(unsigned int *)0x8C1DC56C = 0x0;
        }
}

void resTitleLoadInit(void)
{
    *(unsigned int *)0x8C343FF4 = 0x0;
    *(unsigned int *)0x8C343FE8 = 0x0;
    *(unsigned int *)0x8C287C50 = 0x3E8;
    *(unsigned int *)0x8C301970 = 0x1;
}

int resCautionReset(int a4)
{
    int t0;

    *(unsigned int *)0x8C38BA50 = a4;
    t0 = fileLoadCloseSlot(0x4);
    *(unsigned int *)0x8C34A368 = 0x0;
    return t0;
}

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
    t2 = *(short *)(int)g_0c0d6264;
    kmCreateTextureSurface((int)gNlDummyTextureSurface, t2, t0, t1);
    t4 = *(int *)0x8C1278DC;
    kmLoadTexture((int)gNlDummyTextureSurface, t4);
    return nlCreateTextureParamA((int)gNlDummyTextureSurface);
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

    u0 = *(float *)(int)g_0c2aedbc;
    return (int)((float)a4 * u0);
}

int nlSysMetricsCpuPowerStart(void)
{
    int t0;

    t0 = nlSysMetricsReadTimer();
    *(unsigned int *)(int)g_0c2aeea8 = t0;
    return t0;
}

int nlSysMetricsCpuPowerGet(void)
{
    int t0;
    int t1;
    int t2;

    t0 = nlSysMetricsReadTimer();
    t1 = *(int *)(int)g_0c2aeea8;
    t2 = nlSysMetricsDiffTime(t1, t0);
    return nlSysMetricsScaleTime(t2);
}

void nlSysBeginScene(void)
{
    *(unsigned int *)0x8C424464 = 0x1;
    kmBeginScene(0x8C42420C);
}

void nlSysEndScene(void)
{
    kmEndScene(0x8C42420C);
}

void nlSysBeginPass(void)
{
    int t1;

    kmBeginPass(0x8C454FC0);
    t1 = *(int *)0x8C454FC0;
    *(unsigned int *)(int)g_0c2b8cbc = t1;
}

void nlSysEndPass(void)
{
    kmEndPass(0x8C454FC0);
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
    *(float *)(int)g_0c14a7bc = (1.0f / f4);
}

void nlPrintMonitorMode(int a4)
{
    *(unsigned int *)(int)g_0c14a7b8 = a4;
}

int nlFogTableSet(void)
{
    return kmSetFogTable();
}


int nlMakeModelProjectMatrix(void)
{
    int t0;

    t0 = *(int *)0x8C450888;
    nlPushMatrix(t0);
    nlMultiPushedMatrix();
    nlGetMatrix8((int)g_0c2b3390);
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
    *(float *)(int)g_0c2b7be8 = f4;
}

int nl_set_cnv_proj_pers(void)
{
    nlGetMatrix8((int)g_0c2b3528);
    nlLoadRechangeMatrix((int)g_0c2b3410);
    nlMultiMatrix8((int)g_0c2b3528);
    nlGetMatrix8((int)gNlObjectMatrix);
    nlGetMatrix8((int)g_0c2b34e8);
    return nlLoadMatrix8((int)g_0c2b3528);
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
    *(float *)(int)gNlObjectFadeColor = f4;
    *(float *)0x8C1DCA74 = f5;
    *(float *)0x8C1DCA78 = f6;
}

void nlObjPutSetFadeColorOffset(float f4, float f5, float f6)
{
    *(float *)(int)gNlObjectFadeColorCopy = f4;
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
    return nlMultiMatrixRevOrder8((int)gNlObjectMatrix);
}

int nlMakeModelViewProjectMatrix_objput(void)
{
    int t1;

    nlPushMatrix((int)gNlObjectMatrix);
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

int kmyIsDisplayOddField(void)
{
    int t0;

    t0 = kmiReadRegister(0x10C);
    return ((unsigned int)((unsigned int)(t0 & 0x400) >> 8) >> 2);
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
    *(unsigned int *)(int)g_8c20c728 = a4;
}

int buSetRetryCount(void)
{
    return vmsfs_setretry();
}


void syCfgExit(void)
{
    *(unsigned int *)0x8C20C240 = 0x0;
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

void kmSetFogDensity(int a4)
{
    int t0;

    *(unsigned int *)0x8C4709F8 = a4;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = (t0 | 0x2);
}

int kmiReadRegister(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xA05F8000));
    return t0;
}

void kmSetPaletteData(int a4)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFD);
    kmyMemCopy(0x8C470E08, a4, 0x1000);
    t2 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t2 | 0x2);
}

void kmyEnableASyncCopy(int a4)
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
        return;
        }
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

int kmCollectTextureGarbage(void)
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

void kmSetRegionClipping(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0x8C45F7DC = a4;
    *(unsigned int *)0x8C45F7E4 = a6;
    *(unsigned int *)0x8C45F7E0 = a5;
    *(unsigned int *)0x8C45F7E8 = a7;
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

int thunk_gdFsStringEquals(void)
{
    return gdFsStringEquals();
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


int ADXAMP_GetStat(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return t0;
}

int ADXERR_Finish(void)
{
    int t0;

    t0 = memset((int)gAdxErrorMessageBuffer, 0x0, 0x100);
    *(unsigned int *)(int)gAdxErrorCallback = 0x0;
    *(unsigned int *)(int)gAdxErrorCallbackArgument = 0x0;
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
    return memset((int)g_0c2f4f1c, 0x0, 0x4C0);
}

int ADXSJD_Finish(void)
{
    return memset((int)g_0c2f4f1c, 0x0, 0x4C0);
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

void kmBlankScreen(int a4)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t9;
    int t7;

    
    
    if ((a4 == 1)) {
        t0 = *(int *)(int)gFrameBufferReadControl;
        kmiWriteRegister(0x44, (t0 & 0xFFFFFFFE));
        t2 = *(int *)(int)g_0c2ea984;
        t7 = (t2 | 0x8);
        } else {
        t3 = *(int *)(int)gFrameBufferReadControl;
        kmiWriteRegister(0x44, (t3 & 0xFFFFFFFE));
        t5 = *(int *)(int)g_0c2ea984;
        t7 = t5;
        }
    kmiWriteRegister(0xE8, t7);
    t9 = *(int *)(int)gFrameBufferReadControl;
    kmiWriteRegister(0x44, t9);
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

void kmyRegisterPALEXTCallback(int a4)
{
    if (!(a4 == 0)) {
        *(unsigned int *)(int)gPalExtensionRatioCallback = a4;
        return;
        }
    *(unsigned int *)(int)gPalExtensionRatioCallback = 0x8C1F78A0;
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

void kmySetDisplayBpp(int a4)
{
    *(unsigned int *)0x8C45EE30 = a4;
    kmiFBControl(a4, 0x0);
    kmiWriteDispModeRegisters();
}

void kmyInitializeFog(void)
{
    memset(0x8C4707EC, 0x0, 0x210);
    kmyInitializeFogTable();
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

void kmiFLWCTRLCheckFreeNBuf(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C460784;
    if (!(t0 == 0)) {
        t1 = kmiFLWCTRLFindFreeNBuf();
        if ((t1 == -1)) {
        return;
        }
        }
}

void kmiSetDisplayClipSize(void)
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
}

int vmsfb_init(void)
{
    int t1;

    buFbrInit();
    t1 = buFbrCreateServer(0x8);
    *(unsigned int *)(int)g_0c2fa53c = t1;
    return t1;
}

int vmsfb_create(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)(int)g_0c2fa53c;
    return buFbrCreateFiber(t0, a4, a5, a6);
}

int vmsfb_exec(void)
{
    int t0;

    t0 = *(int *)(int)g_0c2fa53c;
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

int thunk_fmMngBufferEquals(void)
{
    return fmMngBufferEquals();
}

int thunk_fmMngCopyBytes(void)
{
    return fmMngCopyBytes();
}

int ADXB_Init(void)
{
    ADXPD_Init();
    return memset((int)g_0c2fa5b4, 0x0, 0x560);
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

void kmyiInitializeDriverObject(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x8C205A20;
    *(unsigned int *)((a4 + 0x10)) = 0x8C205A34;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x8C205A7C;
    *(unsigned int *)((a5 + 0x4)) = 0x8C20B498;
    *(unsigned int *)((a5 + 0x8)) = 0x8C20B4F8;
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

void kmySetPunchThroughThreshold(int a4)
{
    kmiWriteRegister(0x11C, (unsigned char)a4);
}

void kmySetColorClampMAX(int a4)
{
    kmiWriteRegister(0xBC, a4);
}

void kmySetPaletteMode(int a4)
{
    kmiWriteRegister(0x108, a4);
}

void ADXB_CheckAiff(int a4)
{
    int t0;
    int t1;

    t0 = memcmp(a4, 0x8C20B974, 0x4);
    if ((t0 == 0)) {
        t1 = memcmp((a4 + 0x8), 0x8C20B97C, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}

void ADXB_CheckAu(int a4)
{
    int t0;
    int t1;

    t0 = memcmp(a4, 0x8C20B984, 0x4);
    if (!(t0 == 0)) {
        t1 = memcmp(a4, 0x8C20B98C, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}

void ADXB_CheckWav(int a4)
{
    int t0;
    int t1;

    t0 = memcmp(a4, 0x8C20B998, 0x4);
    if ((t0 == 0)) {
        t1 = memcmp((a4 + 0x8), 0x8C20B9A8, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}

int ADXPD_Init(void)
{
    return memset((int)g_8c4762d4, 0x0, 0x1A0);
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXPD_EntryMono(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if ((t0 == 0)) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        return;
        }
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
