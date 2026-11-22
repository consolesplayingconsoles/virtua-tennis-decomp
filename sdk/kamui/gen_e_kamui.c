int FUN_8c0368c2(void);
typedef struct { int w[6]; } Stk6;
/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_CheckAu(int);
int ADXB_CheckSpsd(void);
int ADXB_CheckWav(int);
int ADXB_Create(int, int, int, int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_EntryGetWrFunc(int, int, int);
int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff(int);
int ADXB_ExecOneAu(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_ExecServer(void);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXF_Stop(int);
int ADXPD_Create(void);
int ADXRNA_ExecServer(void);
int ADXSJD_ExecHndl(int);
int ADXSJD_ExecServer(void);
int ADXSTM_ExecServer(void);
int ADXT_GetStat(int);
int ADX_DecodeMonoFloat(int, int, int, int, int, int);
int ADX_DecodeSteFloat(int, int, int, int, int, int, int, int);
int ADX_GetCoefficient(int, int, int, int);
int nlAddVector3op(int, int, int);
int gdFsLockDir(int);
int gdFsToUpper(int);
int syTmrGetCount(void);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int mainSoftReset(int);
int mainExitToBios(void);
int nlMalloc2(int);
int nlInitEvent(void);
int set_event2(int, int);
int nlCloseEvent2(int);
int shadowVolPutDir(void);
int dbgMenuSetTitle(int, int, int);
int dbgMenuSetItem(int, int, int, int, int, int, int);
int motionBackup(void);
int motionSetFrame(int, float);
int vecMake(float, float, float);
float vecDist(Stk3, Stk3);
int mtxGetPos(int, int, int);
int vecAnglesTo(int, int, Stk6);
int camInit(void);
int sprCellInit(int, int);
int serveGetServer(void);
int fadeDraw(void);
int padVibExec(void);
int padLcdSetMode(int);
int padLcdMessage(int);
int padLcdDraw(int);
int padLcdUpdate(void);
int padVmsBeep(int, int);
int padRepeatExec(void);
int gameMatchSetup(void);
int miniReset(void);
int miniTargetInit(int, int);
int miniSetModel(int, int);
int zoneListClear(void);
int cpuSglInit(void);
int cpuSglInput(void);
int cpuSglThink(int);
int cpuDblInit(void);
int cpuDblInput(void);
int cpuInTriangle(void);
int ndbClear(void);
int ndbIsValid(void);
int umpCallGamePoint(void);
int umpCallAdvantage(void);
int umpCallFirstServe(void);
int umpCallFirstServeDelayed(int);
int umpCallSecondServeDelayed(int);
int fadeScreenStart(int, int, int);
int resultFlagsClear(void);
int ambLevelReset(void);
int matchPropStart(void);
int crowdSetup(void);
int sprTexLoad(int);
int sprTexFree(int);
int sprInitRectF(int, int, int, int, int, int);
int sprInitRect(int, int, int, int, int, int, int);
int sprPutAt(int);
int sprPutAtAlpha(int);
int sprPutCropH(int, int, int);
int panelLogoInit(int, int);
int bgSprInitRect(int, int);
int hudNumPut(int, float);
int hudScoreIconPut(float);
int hudFontSprSet(int, int);
int hudFont2SprSet(int, int);
int hudSignSprSet(int, int);
int infoPlayerDraw(void);
int selModelSpawn(int, int);
int entryPortAtRound5Clean(int);
int entryIsVersus(void);
int entryCountJoined(void);
int stageTexFree(void);
int stageCrowdTexLoad(void);
int stageLoadSelectSprites(void);
int endingTexFree(void);
int stageWtcMainTexFree(void);
int stageMinigameTexLoad(void);
int stageMinigameTexFree(void);
int stageExtraTexFree(void);
int crowdInit(void);
int fileLoadSync(int, int, int);
int stagePolyLoad(void);
int stageTexFileLoad(void);
int kyakuPolyLoad(void);
int minigamePolyLoad(void);
int minigameTexFileLoad(void);
int minigameSpriteLoad(void);
int gameSpriteLoad(void);
int courtPropsInit(void);
int matchSceneInit(void);
int primSprDraw(int, int, int, int, Stk3);
int emotKeysSort(int);
int emotFaceReset(int);
int sprMatchInit(void);
int sprCommonInit(void);
int sprAdvInit(void);
int sprSet266InitThunk(void);
int sprSet109Init(void);
int sprStartInit(void);
int sprStartFree(void);
int sprSet109Free(void);
int sprAdvFree(void);
int sprMatchLoad(void);
int sprMatchFree(void);
int sprSet115Free(void);
int sprWtcFree(void);
int sprSet266Load(void);
int sprSet266Free(void);
int sprSet163Free(int);
int sprSet163FreeAll(void);
int sprSet173Free(int);
int sprSet173FreeAll(void);
int sprTexRestore(int);
int sprSet280Free(int);
int sprSet280FreeAll(void);
int sprSet322Free(int);
int sprSet322FreeAll(void);
int sprSet330Free(void);
int sprSet331Free(void);
int sprSet192Setup(void);
int sprSet192Free(void);
int charaModelCount(int);
int charaTexFree(int);
int charaTexFreeAll(void);
int uniformLoadBegin(void);
int uniformLoadStep(void);
int uniformPreviewFree(void);
int commonSprInit(int, int);
int commonSprInitAll(void);
int menuSprInit(int, int, int);
int lineJudgeDraw(void);
int lineJudgeUpdate(void);
int netJudgePose(int);
int netJudgeUpdate(int);
int netJudgeDraw(void);
int staffShadowFlat(void);
int staffShadowMulti(int);
int staffMorphInit(void);
int lineJudgeShadowPart(int);
int lightSet(int, int, int, int);
int staffMorphCapture(int, int);
int gameModeSet(int, int, int);
int frameHookNop(void);
int hudPanelDraw(int, int, float);
int msgWinStep(void);
int sndFxReset(void);
int sndStopAll(void);
int sndStagePackLoad(int);
int sndPack1FadeCancel(void);
int sndSe0B_02(void);
int sndSe0B_00(void);
int sndSe0B_01(void);
int endingSprAnimStep(int, int, int);
int endingCharaTexFree(int);
int endingCharaTexFreeAll(void);
int endSprCharaTexFree(int);
int endSprCharaTexFreeAll(void);
int endSprTexFree(void);
int strmVoiceQueueAdd(int);
int strmVoiceQueueClear(void);
int strmVoicePlay(int, int);
int strmBgmPlay(int);
int strmControl(int, int);
int strmCallPair(int);
int strmCallPlayerOnce(void);
int strmScoreReset(void);
int evPackFade(int, int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int eepromGetDeuce(void);
int eepromGetVsDeuce(void);
int BupRequestLoad(int, int, int, int);
int BupCardWarning(void);
int rankSprTexFree(void);
int titleSprTexLoad(void);
int titleSprTexFree(void);
int resWtcShopPolyRead(void);
int resWtcShopTexRead(void);
int resWtcShopSprRead(void);
int resFukuPolyRead(void);
int resWtcShopObjTexLoad(void);
int resWtcShopObjTexFree(void);
int resEndObjTexFree(void);
int resWtcShopSprTexLoad(void);
int resWtcShopSprTexFree(void);
int resSprTitleRead(void);
int resTitleObjTexLoad(void);
int resTitleObjTexFree(void);
int resTitleSprTexLoad(void);
int resTitleSprTexFree(void);
int resTitlePolyRead(void);
int resTitleSprRead(void);
int resCautionReset(int);
int resCautionTexFree(int);
int resCautionFreeAll(void);
int cacheOcbiRange(int, int);
int nlSetCommonTextureOffset(int);
int nlWaitVSync(void);
int nlInitMatrixStack(int, int, int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetGarbagedTexture(void);
int nlObjPutFreeTextureOnce(void);
int nlSpriteLoadTextureOnce(void);
int nlDispStrip(int);
int nlDispStripTrnsl(int);
int _quick_mvn(void);
int kmyMemCopy(int, int, int);
int kmtex_ConvertSmallVQToMem(int, int, int, int);
int syTmrDiffCount(int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXT_ExecHndl(int);
int kmyGetInterruptLevel(void);
int kmiRegisterPhIntHandler(int);
int kmyiCheckTAHandle(void);
int kmtex_TextureSize_Twiddled(int);
int kmtex_TextureSize_VQ(int);
int kmtex_TextureSize_Palettized(int);
int kmtex_TextureSize_smallVQ(int);
int kmyiCheckRenderPacket(int);
int syBtFlWrite(void);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int ADXB_CheckAiff(int);
int syIntAdrChk_putchar(int);
int SJMEM_Reset(int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetBufSize(int);
int SJRBF_GetXtrSize(int);
int SJRBF_Reset(int);
int SJUNI_Reset(int);
int adxf_ExecOne(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxpd_error(void);
int adxsjd_clear(int);
int adxstmf_stat_exec(int);
int buAnalyzeBackupFileImage(int, int);
int buExitForce(void);
int buGetDiskInfo(int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buLoadFile(int, int, int, int);
int buStat(int);
int colliObjEntry(int);
int fileLoadStart(int);
int fmcalccrc(int, int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDrvStat(void);
int gdFsReqDrvStat(void);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int gdFsStopRd(int);
int get_data(int);
int kdGetDeviceInfo(void);
int kmBlankScreen(int);
int kmProcessVertexRenderState(void);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int, int);
int kmWaitVBlank(void);
int kmiFLWCTRLCheckFreeNBuf(void);
int kmiFLWCTRLEORCallBackFunc(void);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLLaunchPacket(int, int, int, int);
int kmiFLWCTRLRotateReadyQueue(void);
int kmiInitFBControl(void);
int kmiQueryFinishAllPacket(void);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyCreateRegionArray(void);
int kmyFreeArea(int);
int kmyGetDMAValue(int);
int kmyGetNativeBufferStatus(int);
int kmyGetRenderPacket(int, int);
int kmyMoveParameterBoundary(int, int, int);
int kmyRegisterBGPlane(int);
int kmyRequestCallback(int);
int kmyResetRenderer(void);
int kmyResetTA(void);
int kmySetBorderColor(int);
int kmySetDisplayFrameBuffer(int, int);
int kmyWriteFogTable(void);
int kmyiCheckNativeHandle(int);
int kmyiInitializeNativeBuffer(int, int, int, int);
int make_header(int, int);
int memcpy2(int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionAdvanceSimple(int);
int motionRoot(int);
int motionRoot2(int);
int motionRotate(int);
int motionRotate2(int);
int motionSwitch(int, int, int, int, float);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
float nlFloor(float);
int nlGetMatrix(int);
int nlInvLightVector(void);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutMvInit(void);
int nlObjPutSetVtxColorMode(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRand(void);
int nlRenderTextureBegin(int);
int nlRenderTextureFree(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSetTextureParameter(int);
int nlSpriteFreeTextureOnce(void);
int nlSpriteSetGarbagedTextureOnce(int, int);
int nlSubVector(int, int);
int nlTranslate(float, float, float);
int nldispstripTexOfsSub(int, int);
int nldispstripTexSub(int, int);
int nlobjput_sub_trnsl(int, float);
int nlsndG2Read(int);
int nlsndPackFree(void);
int nlsndPackLoad(int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdBitSize(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContextTex(int, int);
int ovLibDeleteTbl(int);
int ovLibEntryTbl(int);
int padDirOn(int, int);
int pdVmsLcdWrite1(int, int);
int set_event(int, int);
int stageTexLoad(void);
int memcmp(int, int, int);
int syBtCfgSet(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaResume(int);
int syG2DmaSuspend(int);
int syMmuDeleteEntry(int);
int thunk_selCopyLocalConstants(void);
int thunk_nlObjPutMvInit(int);
int thunk_nlSprPut(int);
int thunk_buIsExistFile(void);
int thunk_copyBytes(void);
int vmsfs_c_getstate(int);


/* port: the function at 0x8C0368C2 (functions.txt counts it in miniStart, which falls into it): a state of its own in
   the game's table (0x8C108260..), reached without the set-up before it */


/* manual: a trampoline: r4 passes through to nlObjPutMvInit (the NAOMI library's own code reads it). */


/* manual: the call passes the argument the original sets (r4 = 180); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */


/* manual: the call passes the argument the original sets (r4, the record being drawn); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */


/* manual: the original is one chain of tests whose branches meet at a shared tail (netJudgeUpdate, then netJudgeDraw); the
   generated form copied that tail into every path (2,664 bytes for 114). r0 at each early return is the value last tested. */


/* manual: the call passes the argument the original sets (r4, r5: the texture slot and its entry); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */


int kmSetFogTableColor(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    *(unsigned int *)0x8C4709F4 = a8;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = (t0 | 0x1);
    return 0x0;
}


void kmSetPaletteBankData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t17;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = a5;
    if ((int)(a5 + (0x3FF & a4)) > (int)0x400) {
        t1 = (0x400 - (0x3FF & a4));
    }
    kmyMemCopy((0x8C470E08 + ((0x3FF & a4) << 2)), (a6 + ((0x3FF & a4) << 2)), (t1 << 2));
    if ((int)((((int)((t1 + (0x3FF & a4)) - 1) >> 4) - ((int)(0x3FF & a4) >> 4)) + 0x1) > 0) {
        t3 = ((int)(0x3FF & a4) >> 4);
        t4 = ((int)(0x3FF & a4) >> 4);
        t5 = (((int)(0x3FF & a4) >> 4) - 32);
        t6 = 0x0;
        do {
            t6 = (t6 + 0x1);
            if ((int)t3 >= (int)0x20) {
                t7 = *(int *)0x8C471E10;
                *(unsigned int *)0x8C471E10 = (t7 | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
            } else {
                t8 = *(int *)0x8C471E0C;
                *(unsigned int *)0x8C471E0C = (t8 | (((int)t4 >= 0) ? (0x1 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x1 >> (-(int)t4 & 31)) : ((int)0x1 >> 31))));
            }
            t5 = (t5 + 0x1);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x1);
        } while ((int)t6 < (int)((((int)((t1 + (0x3FF & a4)) - 1) >> 4) - ((int)(0x3FF & a4) >> 4)) + 0x1));
    }
    t17 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t17 | 0x4);
}

void kmSetPaletteBank(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t18;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = 0x3F;
    if (a5 == 0x100) {
        t1 = 0x30;
    }
    kmyMemCopy((((((t1 & a4) << 2) << 2) << 2) + 0x8C470E08), a6, (a5 << 2));
    t3 = a5;
    if ((int)a5 < 0) {
        t3 = (a5 + 0xF);
    }
    if ((int)((int)t3 >> 4) > 0) {
        t4 = 0x0;
        t5 = ((t1 & a4) - 32);
        t6 = (t1 & a4);
        t7 = (t1 & a4);
        do {
            t4 = (t4 + 0x1);
            if ((int)t7 >= (int)0x20) {
                t8 = *(int *)0x8C471E10;
                *(unsigned int *)0x8C471E10 = (t8 | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
            } else {
                t9 = *(int *)0x8C471E0C;
                *(unsigned int *)0x8C471E0C = (t9 | (((int)t6 >= 0) ? (0x1 << (t6 & 31)) : ((-(int)t6 & 31) ? ((int)0x1 >> (-(int)t6 & 31)) : ((int)0x1 >> 31))));
            }
            t5 = (t5 + 0x1);
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x1);
        } while ((int)t4 < (int)((int)t3 >> 4));
    }
    t18 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t18 | 0x4);
}

void kmSetPaletteEntry4bppMode(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = 0x0;
    t2 = a6;
    do {
        kmyMemCopy(0x8C470E08, t2, 0x40);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x40);
    } while ((int)t1 < (int)0x20);
    t4 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t4 | 0x4);
}

int kmRenderRect(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t3;

    t0 = *(int *)0x8C45F010;
    t10 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        if (a4 == 1) {
            *(unsigned int *)0x8C45F91C = 0x1;
            t3 = 0x0;
        } else {
            *(unsigned int *)0x8C45F91C = 0x0;
            t3 = 0x1;
        }
        t4 = *(int *)0x8C45EFD4;
        t5 = kmiFLWCTRLLaunchPacket(0x2, t3, t4, 0x0);
        t6 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t6 + 0x1);
        t7 = *(int *)0x8C45EFF4;
        t8 = (int)((unsigned int)(t6 + 0x1) % (unsigned int)t7);
        *(unsigned int *)0x8C45F004 = t8;
        t10 = t5;
    }
    return t10;
}

int kmRenderTexture(int a4, int a5)
{
    int t0;
    int t8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0x8C45F010;
    t8 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        t3 = kmiFLWCTRLLaunchPacket(0x0, 0x0, a5, a4);
        t4 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t4 + 0x1);
        t5 = *(int *)0x8C45EFF4;
        t6 = (int)((unsigned int)(t4 + 0x1) % (unsigned int)t5);
        *(unsigned int *)0x8C45F004 = t6;
        t8 = t3;
    }
    *(unsigned int *)0x8C45F91C = 0x1;
    return t8;
}

int kmRender(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t3;

    t0 = *(int *)0x8C45F010;
    t10 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        if (a4 == 1) {
            *(unsigned int *)0x8C45F91C = 0x1;
            t3 = 0x0;
        } else {
            *(unsigned int *)0x8C45F91C = 0x0;
            t3 = 0x1;
        }
        t4 = *(int *)0x8C45EFD4;
        t5 = kmiFLWCTRLLaunchPacket(0x1, t3, t4, 0x0);
        t6 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t6 + 0x1);
        t7 = *(int *)0x8C45EFF4;
        t8 = (int)((unsigned int)(t6 + 0x1) % (unsigned int)t7);
        *(unsigned int *)0x8C45F004 = t8;
        t10 = t5;
    }
    return t10;
}

int kmEndScene(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)0x8C45F010;
    *(unsigned int *)0x8C45F010 = (t0 & 0xFFFFFFFC);
    if (a4 != 0) {
        t1 = *(int *)((a4 + 0x4));
        if ((t1 & 32) == 0) {
            t2 = *(int *)0x8C45F91C;
            if (t2 == 0) {
                kmWaitVBlank();
                t4 = kmiFLWCTRLCheckFreeNBuf();
                if (t4 == 0) {
                    kmWaitVBlank();
                }
            }
        }
    }
    return 0x0;
}

int kmLoadTexture(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t20;
    int t21;
    int t25;
    int t26;
    int t28;
    int t29;
    int t23;
    int t24;
    int t18;
    int t19;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = *(int *)((a4 + 0xC));
        t2 = *(int *)((a4 + 0x18));
        t3 = *(int *)((a4 + 0x1C));
        kmtex_ConvertSmallVQToMem(t3, a5, t1, t2);
    } else {
        t5 = *(int *)((a4 + 0x18));
        if ((0x4000000 & t5) == 0) {
            if ((0x80000000 & t5) != 0) {
                if ((0x40000000 & t5) == 0) {
                    if ((0x8000 & t5) == 0) {
                        t6 = *(int *)((a4 + 0xC));
                        t7 = kmtex_GetTextureLevel(t6, t6);
                        t8 = *(int *)((a4 + 0x1C));
                        t9 = *(int *)(((t7 << 2) + 0x8C20AEDC));
                        t13 = (t8 + 0x4);
                        t14 = (t9 + 0x4);
                    } else {
                        t10 = *(int *)((a4 + 0x1C));
                        t11 = *(int *)((a4 + 0x14));
                        t13 = t10;
                        t14 = t11;
                    }
                    t18 = t13;
                    t19 = t14;
                } else {
                    t15 = *(int *)((a4 + 0x1C));
                    t16 = *(int *)((a4 + 0x14));
                    t18 = t15;
                    t19 = t16;
                }
                t23 = t18;
                t24 = t19;
            } else {
                t20 = *(int *)((a4 + 0x1C));
                t21 = *(int *)((a4 + 0x14));
                t23 = t20;
                t24 = t21;
            }
            t28 = t23;
            t29 = t24;
        } else {
            t25 = *(int *)((a4 + 0x1C));
            t26 = *(int *)((a4 + 0x14));
            t28 = t25;
            t29 = t26;
        }
        kmyCopyToTexture(t28, a5, t29, 0x0);
    }
    return 0x0;
}

int kmSetWaitVsyncCount(int a4)
{
    int t0;

    t0 = a4;
    if ((int)a4 <= 0) {
        *(unsigned int *)0x8C45F7F0 = ((-a4) + 0x1);
        t0 = (-a4);
    }
    *(unsigned int *)0x8C45F7B8 = (t0 - 1);
    return 0x0;
}


int VQAllocEntry(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;

    t0 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)0x8C20CA10;
            t3 = *(short *)((((t1 * 0x4C) + t2) + 0x0));
            if (((unsigned short)t3 & 0x1) == 0) break;
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)t0) {
                return 0x0;
            }
        }
        t6 = *(int *)0x8C20CA10;
        *(unsigned short *)(((t6 + (t1 * 0x4C)) + 0x0)) = 0x1;
        t7 = *(int *)0x8C20CA10;
        return (t7 + (t1 * 0x4C));
    }
    return 0x0;
}

int kmyEnableHolizontalScaler(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    if (a5 != 0) {
        t2 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t2 | 0x10000);
    } else {
        t3 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t3 & 0xFFFEFFFF);
    }
    return 0x0;
}

void kmyGetFrameBufferAddress(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a5 != 0) {
        t0 = 0x8C45EEF4;
        t1 = 0x0;
        do {
            t2 = (t0 == a4);
            t0 = (t0 + 0x34);
            if (t2) {
                t1 = 0x1;
            }
        } while ((unsigned int)t0 < (unsigned int)0x8C45EFC4);
        if (t1 != 0) {
            t3 = *(int *)((a4 + 0x28));
            if (t3 != 0) {
                t4 = *(int *)((a4 + 0x1C));
                *(unsigned int *)((a5 + 0x0)) = t4;
            }
        }
        return;
    }
}

int kmyReleaseFrameBufferHandle(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if (a4 != 0) {
        t0 = 0x8C45EEF4;
        t1 = 0x0;
        do {
            t2 = (t0 == a4);
            t0 = (t0 + 0x34);
            if (t2) {
                t1 = 0x1;
            }
        } while ((unsigned int)t0 < (unsigned int)0x8C45EFC4);
        if (t1 != 0) {
            t3 = *(int *)((a4 + 0x28));
            if (t3 != 0) {
                *(unsigned int *)((a4 + 0x28)) = 0x0;
            }
        }
    }
    return 0x0;
}

int SearchVQEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C20CA0C;
    t1 = t0;
    t2 = 0x0;
    do {
        t3 = *(int *)((t1 + 0x8));
        if (t3 == a4) {
            t2 = t1;
            t1 = 0x0;
        }
        if (t2 == 0) {
            t4 = *(int *)((t1 + 0x4));
            t1 = t4;
        }
    } while (t1 != 0);
    return t2;
}

int kmyGetDisplayRegionSize(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a7 != 0) {
        t0 = 0x14;
        if ((0x10 & a4) != 0) {
            t0 = 0x28;
        }
        t3 = 0xF;
        t4 = t0;
    } else {
        t1 = 0xA;
        if ((0x10 & a4) != 0) {
            t1 = 0x14;
        }
        t2 = 0x8;
        if ((a4 & 0x20) != 0) {
            t2 = 0xF;
        }
        t3 = t2;
        t4 = t1;
    }
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = t4;
    }
    if (a6 != 0) {
        *(unsigned int *)((a6 + 0x0)) = t3;
    }
    return 0x0;
}

int Qreset(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        do {
            t2 = *(int *)0x8C20C9E8;
            t4 = ((((t1 << 1) + t1) << 2) << 1);
            t1 = (t1 + 0x1);
            *(unsigned short *)(((t4 + t2) + 0x0)) = 0x0;
            t5 = *(int *)0x8C20C9D0;
        } while ((unsigned int)t1 < (unsigned int)t5);
    }
    *(unsigned int *)0x8C20C9EC = 0x0;
    *(unsigned int *)0x8C20C9F0 = 0x0;
    *(unsigned int *)0x8C20C9F4 = 0x0;
    *(unsigned int *)0x8C20C9F8 = 0x0;
    *(unsigned int *)0x8C20C9FC = 0x0;
    *(unsigned int *)0x8C20CA00 = 0x0;
    *(unsigned int *)0x8C20CA04 = 0x0;
    *(unsigned int *)0x8C20CA08 = 0x0;
    t9 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t9) {
        t10 = 0x0;
        do {
            t11 = *(int *)0x8C20CA10;
            t12 = (t10 * 0x4C);
            t10 = (t10 + 0x1);
            *(unsigned short *)(((t12 + t11) + 0x0)) = 0x0;
            t13 = *(int *)0x8C20C9D4;
        } while ((unsigned int)t10 < (unsigned int)t13);
    }
    *(unsigned int *)0x8C20CA0C = 0x0;
    return 0x0;
}

void kmyiUnloadCallback(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a4 + 0x8));
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x4));
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = t2;
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x80);
}

void kmyiInitializeCallback(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)((a4 + 0x14)) = 0x8C1F5AA4;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x10;
    *(unsigned int *)((t0 + 0x4)) = 0x8C1F5AA0;
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x4));
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = t2;
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x80);
}

void kmyiInitializeInterrupt(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t9;
    int t10;

    *(unsigned int *)((a4 + 0x14)) = 0x8C1F5D3C;
    t0 = *(int *)((a4 + 0x8));
    memset(t0, 0x0, 0x238);
    *(unsigned int *)((t0 + 0x24)) = 0x8C1F5D38;
    *(unsigned int *)((t0 + 0x0)) = 0x20;
    if ((int)0x20 > 0) {
        t2 = 0x0;
        do {
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x0)) = 0x8C1F5D38;
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x4)) = 0x0;
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x8)) = 0x0;
            t4 = ((t2 << 2) << 2);
            t2 = (t2 + 0x1);
            *(unsigned int *)(((t4 + (t0 + 0x30)) + 0xC)) = 0x0;
            t5 = *(int *)((t0 + 0x0));
        } while ((int)t2 < (int)t5);
    }
    t9 = *(int *)0x8C470D1C;
    t10 = 0x8C1F5B60;
    if (t9 == 0x10000) {
        t10 = 0x8C1F5C40;
    }
    kmiRegisterPhIntHandler(t10);
    *(unsigned int *)((t0 + 0x230)) = 0xE;
    *(unsigned int *)((t0 + 0x234)) = 0x0;
}

int kmySeparatePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a5 + 0x0)) = (a4 & 0x3);
    *(unsigned int *)((a6 + 0x0)) = (((unsigned int)((unsigned int)a4 >> 2) >> 2) & 0x3);
    *(unsigned int *)((a7 + 0x0)) = (((unsigned int)a4 >> 8) & 0x3);
    *(unsigned int *)((a8 + 0x0)) = (((unsigned int)((unsigned int)((unsigned int)a4 >> 8) >> 2) >> 2) & 0x3);
    *(unsigned int *)((a9 + 0x0)) = (((unsigned int)a4 >> 16) & 0x3);
    return 0x0;
}

int kmySetPassDepth(int a4, int a5, int a6, int a7)
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a4 + 0xC)) = a7;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a6;
    *(unsigned int *)((a4 + 0x38)) = (((a6 - 1) << 16) | (a5 - 1));
    t2 = *(int *)(((a4 + 0x18) + 0x0));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t2;
    t3 = *(int *)(((a4 + 0x18) + 0x4));
    t4 = *(int *)(((a4 + 0x18) + 0x0));
    t5 = *(int *)((a4 + 0x4));
    t6 = *(int *)((a4 + 0x8));
    t7 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((a4 + 0x18) + 0xC)) = ((t4 + t3) - ((((((t5 * t6) * t7) << 1) + ((t5 * t6) * t7)) << 2) << 1));
    t8 = *(int *)0x8C470D10;
    if ((t8 & 128) != 0) {
        t9 = *(int *)(((a4 + 0x18) + 0xC));
        *(unsigned int *)(((a4 + 0x18) + 0xC)) = (t9 - 24);
    }
    t11 = *(int *)(((a4 + 0x18) + 0xC));
    *(unsigned int *)(((a4 + 0x18) + 0x24)) = (t11 - 256);
    t12 = *(int *)0x8C45EE38;
    *(unsigned int *)((t1 + 0x14)) = t12;
    t13 = *(int *)0x8C45EE3C;
    *(unsigned int *)((t1 + 0x18)) = t13;
    t14 = *(int *)0x8C45EE48;
    *(unsigned int *)((t1 + 0x10)) = t14;
    t15 = *(int *)0x8C45EE50;
    *(unsigned int *)((t1 + 0x4)) = t15;
    return 0x0;
}

int kmiInitializeDisplayModule(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x8)) = 0x8C1F8120;
    *(unsigned int *)((t0 + 0xB8)) = 0x0;
    *(unsigned int *)((t0 + 0xC4)) = 0x8C1F78A0;
    return kmiInitFBControl();
}

int kmyInitializeFogTable(void)
{
    int t0;

    t0 = 0x80;
    do {
        t0 = (t0 - 1);
        *(unsigned int *)(((t0 << 2) + 0x8C4707EC)) = 0x0;
        kmiWriteRegister(((t0 << 2) + 0x200), 0x0);
    } while (t0 != 0);
    return 0x0;
}

int kmyUpdateFogParameter(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t13;
    int t10;
    int t11;
    int t12;

    t0 = *(int *)0x8C4709EC;
    if ((t0 & 4) != 0) {
        kmyWriteFogTable();
    }
    t3 = *(int *)0x8C4709EC;
    t4 = *(int *)0x8C4709EC;
    if ((t4 & 1) != 0) {
        t5 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t5 & 0xFFFFFFFE);
        t6 = *(int *)0x8C4709F4;
        kmiWriteRegister(0xB0, t6);
    }
    t9 = *(int *)0x8C4709EC;
    t13 = t9;
    if ((t9 & 2) != 0) {
        t10 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t10 & 0xFFFFFFFD);
        t11 = *(int *)0x8C4709F8;
        t12 = kmiWriteRegister(0xB8, t11);
        t13 = t12;
    }
    return t13;
}

void kmyiUnloadPVR2Hardware(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    }
}

void kmyiInitializePVR2Hardware(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    }
}

int kmyRegisterNativeBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t16;
    int t1;
    int t2;
    int t13;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t15;

    *(unsigned int *)((a5 + 0x0)) = 0x0;
    t0 = kmyiCheckTAHandle();
    t16 = 0xEEEE;
    if (t0 != 0) {
        t1 = *(int *)0x8C474404;
        t2 = *(int *)0x8C474408;
        t13 = 0x0;
        if ((unsigned int)t1 < (unsigned int)t2) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)0x8C474400;
                if (((((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))) & t4) == 0) break;
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x4) {
                    if (0x0 != 1) {
                        return 0xEEEE;
                    }
                    return 0x0;
                }
            }
            t6 = *(int *)0x8C474400;
            *(unsigned int *)0x8C474400 = (t6 | (((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))));
            t7 = *(int *)0x8C474404;
            *(unsigned int *)0x8C474404 = (t7 + 0x1);
            t8 = kmyGetRenderPacket(0x8C4743FC, (0x88 + ((t3 * 0x8C) + 0x8C474414)));
            t11 = 0x0;
            if (t8 == 0) {
                kmyiInitializeNativeBuffer(((t3 * 0x8C) + 0x8C474414), a6, a7, a8);
                *(unsigned int *)((a5 + 0x0)) = ((t3 * 0x8C) + 0x8C474414);
                t11 = 0x1;
            }
            t13 = t11;
        }
        t15 = 0x0;
        if (t13 != 1) {
            t15 = 0xEEEE;
        }
        t16 = t15;
    }
    return t16;
}

void kmytex_FBFreeEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        do {
            t2 = *(int *)0x8C20C9E8;
            if ((((((t1 << 1) + t1) << 2) << 1) + t2) == a4) {
                t3 = *(int *)0x8C20C9E8;
                t4 = *(short *)(((((((t1 << 1) + t1) << 2) << 1) + t3) + 0x0));
                *(unsigned short *)(((((((t1 << 1) + t1) << 2) << 1) + t3) + 0x0)) = (t4 & 0xFFFE);
            }
            t8 = *(int *)0x8C20C9D0;
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)t8);
    }
}

void kmytex_FBDeQueueEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a6 + 0x4));
    t1 = *(int *)((a6 + 0x8));
    if (t0 == 0) {
        t2 = *(int *)((a6 + 0x8));
        *(unsigned int *)((a4 + 0x0)) = t2;
    } else {
        t3 = *(int *)((a6 + 0x8));
        *(unsigned int *)((t0 + 0x8)) = t3;
    }
    t5 = *(int *)((a6 + 0x8));
    if (t5 == 0) {
        t6 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a5 + 0x0)) = t6;
    } else {
        t7 = *(int *)((a6 + 0x4));
        *(unsigned int *)((t1 + 0x4)) = t7;
    }
}

void kmytex_VQFreeEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;

    t0 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        t2 = 0x0;
        do {
            t3 = *(int *)0x8C20CA10;
            if (((t2 * 0x4C) + t3) == a4) {
                t4 = *(int *)0x8C20CA10;
                t1 = t4;
                t5 = *(short *)((((t2 * 0x4C) + t1) + 0x0));
                *(unsigned short *)((((t2 * 0x4C) + t1) + 0x0)) = (t5 & 0xFFFE);
            }
            t8 = *(int *)0x8C20C9D4;
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)t8);
    }
}

int kmWaitVBlank(void)
{
    int t0;
    int t21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
    int t19;
    int stk[7];

    t0 = kmyGetInterruptLevel();
    t21 = 0x0;
    if (t0 == 0) {
        t1 = *(int *)0x8C45F904;
        *(unsigned int *)(((int)stk + 8)) = 0x8C45F904;
        *(unsigned int *)(((int)stk + 12)) = 0x100000;
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
        t2 = *(int *)(((int)stk + 8));
        t3 = *(int *)((t2 + 0x0));
        if (t3 == t1) {
            t4 = *(int *)(((int)stk + 4));
            t5 = *(int *)((t4 + 0x0));
            if (t5 != 0) {
                for (;;) {
                    kmyRequestCallback(0x7);
                    t7 = *(int *)(((int)stk + 4));
                    t8 = *(int *)((t7 + 0x0));
                    *(unsigned int *)((t7 + 0x0)) = (t8 - 1);
                    t9 = *(int *)(((int)stk + 8));
                    t10 = *(int *)((t9 + 0x0));
                    if (t10 == t1) {
                        t11 = *(int *)(((int)stk + 4));
                        t12 = *(int *)((t11 + 0x0));
                        if (t12 == 0) break;
                        continue;
                    }
                    break;
                }
            }
        }
        t17 = *(int *)(((int)stk + 4));
        t18 = *(int *)((t17 + 0x0));
        t19 = 0x0;
        if (t18 == 0) {
            t19 = 0xEEEE;
        }
        t21 = t19;
    }
    return t21;
}

int kmiFLWCTRLOBJOverflowCallback(void)
{
    int t0;
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;

    t0 = kmiFLWCTRLFindTopQueue();
    t7 = t0;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x14));
            if (t2 == 3) break;
            t3 = *(int *)((t1 + 0x10));
            t1 = t3;
            if (t1 == 0) {
                t4 = *(int *)0x8C45F7F8;
                *(unsigned int *)0x8C45F7F8 = (t4 + 0x1);
                return t2;
            }
        }
        t5 = *(int *)((t1 + 0x3C));
        t6 = kmyMoveParameterBoundary(t5, 0x0, 0x2000);
        t7 = t6;
    }
    t9 = *(int *)0x8C45F7F8;
    *(unsigned int *)0x8C45F7F8 = (t9 + 0x1);
    return t7;
}

int kmiFLWCTRLITPOverflowCallback(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x14));
            if (t2 == 3) break;
            t3 = *(int *)((t1 + 0x10));
            t1 = t3;
            if (t1 == 0) {
                t4 = *(int *)0x8C45F7FC;
                *(unsigned int *)0x8C45F7FC = (t4 + 0x1);
                *(unsigned int *)0x8C45F920 = 0x3;
                return kmyRequestCallback(0x8);
            }
        }
        t5 = *(int *)((t1 + 0x3C));
        kmyMoveParameterBoundary(t5, 0x1, 0x8000);
    }
    t9 = *(int *)0x8C45F7FC;
    *(unsigned int *)0x8C45F7FC = (t9 + 0x1);
    *(unsigned int *)0x8C45F920 = 0x3;
    return kmyRequestCallback(0x8);
}

int kmiFLWCTRLFindVacantQueue(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x8C45F964));
        if (t2 == 0) break;
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0x8C45F964 + t1);
}

int kmiFLWCTRLFindTopQueue(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x8C45F964));
        if (t2 == 1) {
            t3 = *(int *)((t0 + 0x8C45F970));
            if (t3 == 0) break;
            t0 = (t0 + 0x1C4);
            t1 = (t1 + 0x1C4);
            if ((unsigned int)t0 >= (unsigned int)0xE20) {
                return 0x0;
            }
            continue;
        }
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0x8C45F964 + t1);
}

int kmiFLWCTRLGetNBufLockStatus(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C45F950;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F950 = 0x0;
        *(unsigned int *)0x8C45F95C = 0x1;
        t1 = *(int *)0x8C45F944;
        *(unsigned int *)0x8C45F944 = (t1 & (~t0));
        *(unsigned int *)0x8C45F95C = 0x0;
    }
    t4 = *(int *)0x8C45F944;
    return ((((int)(-a4) >= 0) ? (t4 << ((-a4) & 31)) : ((-(int)(-a4) & 31) ? ((unsigned int)t4 >> (-(int)(-a4) & 31)) : 0)) & 0x1);
}

int kmiFLWCTRLGetFBLockStatus(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C45F954;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F954 = 0x0;
        *(unsigned int *)0x8C45F960 = 0x1;
        t1 = *(int *)0x8C45F948;
        *(unsigned int *)0x8C45F948 = (t1 & (~t0));
        *(unsigned int *)0x8C45F960 = 0x0;
    }
    t4 = *(int *)0x8C45F948;
    return ((((int)(-a4) >= 0) ? (t4 << ((-a4) & 31)) : ((-(int)(-a4) & 31) ? ((unsigned int)t4 >> (-(int)(-a4) & 31)) : 0)) & 0x1);
}

void kmiFLWCTRLLockVBuf(int a4)
{
    int t0;

    *(unsigned int *)0x8C45F958 = 0x1;
    t0 = *(int *)0x8C45F940;
    *(unsigned int *)0x8C45F940 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F958 = 0x0;
}

void kmiFLWCTRLLockFB(int a4)
{
    int t0;

    *(unsigned int *)0x8C45F960 = 0x1;
    t0 = *(int *)0x8C45F948;
    *(unsigned int *)0x8C45F948 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F960 = 0x0;
}

int kmiFLWCTRLLockNBuf(int a4)
{
    int t0;
    int t1;
    int t3;
    int t2;

    *(unsigned int *)0x8C45F95C = 0x1;
    t0 = *(int *)0x8C45F944;
    *(unsigned int *)0x8C45F944 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F95C = 0x0;
    t1 = *(int *)0x8C4607E8;
    t3 = 0x8C45F95C;
    if (t1 != 0) {
        t2 = *(int *)0x8C4607E4;
        *(unsigned int *)0x8C4607E4 = ((t2 + 0x1) & 0x1);
        t3 = ((t2 + 0x1) & 0x1);
    }
    return t3;
}

void kmiFLWCTRLUnLockVBuf(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F934;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F958;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F94C;
            *(unsigned int *)0x8C45F94C = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F940;
            *(unsigned int *)0x8C45F940 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

void kmiFLWCTRLUnLockNBuf(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F938;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F95C;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F950;
            *(unsigned int *)0x8C45F950 = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F944;
            *(unsigned int *)0x8C45F944 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

void kmiFLWCTRLUnLockFB(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F93C;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F960;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F954;
            *(unsigned int *)0x8C45F954 = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F948;
            *(unsigned int *)0x8C45F948 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

int kmiFLWCTRLFindFreeNBuf(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;

    t0 = *(int *)0x8C45F950;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F950 = 0x0;
        *(unsigned int *)0x8C45F95C = 0x1;
        t1 = *(int *)0x8C45F944;
        *(unsigned int *)0x8C45F944 = (t1 & (~t0));
        *(unsigned int *)0x8C45F95C = 0x0;
    }
    t4 = *(int *)0x8C4607E8;
    if (t4 != 0) {
        t5 = *(int *)0x8C4607E4;
        t6 = *(int *)0x8C45F944;
        if (((((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))) & t6) == 0) {
            t7 = *(int *)0x8C4607E4;
            return t7;
        }
        return 0xFFFFFFFF;
    }
    t8 = *(int *)0x8C45F938;
    if ((unsigned int)0x0 < (unsigned int)t8) {
        t9 = 0x0;
        for (;;) {
            t10 = *(int *)0x8C45F944;
            if (((((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))) & t10) == 0) break;
            t9 = (t9 + 0x1);
            t12 = *(int *)0x8C45F938;
            if ((unsigned int)t9 >= (unsigned int)t12) {
                return 0xFFFFFFFF;
            }
        }
        return t9;
    }
    return 0xFFFFFFFF;
}


int kmiFLWCTRLStartDisplayEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t10;

    *(unsigned int *)0x8C4607C0 = 0x1;
    t0 = *(int *)((a4 + 0x2C));
    *(unsigned int *)0x8C4607CC = t0;
    *(unsigned int *)0x8C4607C8 = a4;
    t1 = *(int *)((a4 + 0x28));
    *(unsigned int *)0x8C4607C4 = t1;
    *(unsigned int *)((a4 + 0x14)) = 0x7;
    t2 = *(int *)0x8C45EFEC;
    if (t2 != 0) {
        t3 = *(int *)((a4 + 0x40));
        kmySetDisplayFrameBuffer(t3, t3);
    } else {
        t5 = *(int *)0x8C45EFF0;
        if (t5 == 0) {
            t6 = *(int *)((a4 + 0x40));
            kmySetDisplayFrameBuffer(t6, 0x0);
        }
    }
    t10 = *(int *)0x8C45F900;
    if (t10 != 0) {
        *(unsigned int *)0x8C45F900 = 0x0;
        kmBlankScreen(0x0);
    }
    return 0x0;
}


int kmtex_TextureSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t10;
    int t11;
    int t8;
    int t9;
    int t7;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = kmtex_TextureSize_smallVQ(a4);
        t10 = t1;
        t11 = t1;
    } else {
        t2 = *(int *)((a4 + 0x18));
        if ((t2 & 0x40000000) != 0) {
            t3 = kmtex_TextureSize_VQ(a4);
            t8 = t3;
            t9 = t3;
        } else {
            t4 = *(int *)((a4 + 0x18));
            if ((t4 & 0x8000) != 0) {
                t5 = kmtex_TextureSize_Palettized(a4);
                t7 = t5;
            } else {
                t6 = kmtex_TextureSize_Twiddled(a4);
                t7 = t6;
            }
            t8 = t7;
            t9 = t7;
        }
        t10 = t8;
        t11 = t9;
    }
    *(unsigned int *)((a4 + 0x14)) = t11;
    return t10;
}

int kmtex_TextureSize_smallVQ(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t10;
    int t11;
    int t12;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t15;
    int t17;
    int t18;
    int t20;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    t2 = kmtex_GetTextureLevel(t0, t1);
    t3 = *(int *)((a4 + 0x18));
    if ((t3 & 0x80000000) != 0) {
        t4 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1)) {
            t4 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        }
        t10 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
        t11 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t12 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)t4 > (unsigned int)0x1) {
            t5 = t4;
            t6 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
            t7 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t8 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            do {
                t9 = (t7 * t8);
                t7 = ((unsigned int)t7 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t6 = (t6 + t9);
            } while ((unsigned int)t5 > (unsigned int)0x1);
            t10 = t6;
            t11 = t7;
            t12 = t8;
        }
        t15 = (t10 + (t11 * t12));
        if (t11 == t12) {
            t15 = (t10 + 0x2);
        }
        t17 = *(int *)(((t2 << 2) + 0x8C20AEC0));
        t20 = ((t15 + 0xA) + t17);
    } else {
        t18 = *(int *)(((t2 << 2) + 0x8C20AEA4));
        t20 = ((((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1)) + t18);
    }
    return t20;
}


int kmyContinueTA(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x10));
    *(unsigned int *)((a4 + 0x10)) = (t1 + 0x1);
    t2 = *(int *)((((((t1 + 0x1) << 2) << 1) + ((a4 + 0x18) + 0x30)) + 0x0));
    kmiWriteRegister(0x140, t2);
    t4 = *(int *)(((((a4 + 0x18) + 0x30) + (((t1 + 0x1) << 2) << 1)) + 0x4));
    kmiWriteRegister(0x124, t4);
    kmiWriteRegister(0x160, 0x80000000);
    return kmiReadRegister(0x144);
}

int kmyGeneratePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a4 + 0x0)) = (0x100000 | (((((((a6 & 0x3) << 2) << 2) | ((a7 & 0x3) << 8)) | ((((a8 & 0x3) << 8) << 2) << 2)) | ((a9 & 0x3) << 16)) | (a5 & 0x3)));
    return 0x0;
}

int kmySetSkipCount(int a4, int a5)
{
    int t0;
    int t7;
    int t3;
    int t1;
    int t2;
    int t5;
    int t6;

    t0 = kmyiCheckNativeHandle(a4);
    t7 = 0xEEEE;
    if (t0 != 0) {
        t3 = 0x1;
        if ((0x2000000 & a5) != 0) {
            t1 = 0x2;
            if ((0x1000000 & a5) != 0) {
                t1 = 0x3;
            }
            t2 = t1;
            if ((a5 & 0x400000) == 0) {
                t2 = (t1 + 0x1);
            }
            t3 = t2;
        }
        t5 = *(int *)((a4 + 0x88));
        t6 = *(int *)((t5 + 0x8));
        *(unsigned int *)((t5 + 0x8)) = ((t6 & 0xFFFFFF) | (((t3 & 0x7) << 16) << 8));
        t7 = 0x0;
    }
    return t7;
}

int kmyObFindDevice(int a4, int a5, int a6)
{
    int t0;
    int t6;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x4));
    t6 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        do {
            if (t1 == a5) {
                if (t1 != 0) {
                    t3 = *(int *)((t1 + 0x8));
                    if (t3 == a6) {
                        t2 = 0x1;
                    }
                }
            }
            t4 = *(int *)((t1 + 0x4));
            t1 = t4;
        } while (t1 != 0);
        t6 = t2;
    }
    return t6;
}

int kmyiCheckRenderPacket(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    t1 = 0x8C474650;
    do {
        t2 = (t1 == a4);
        t1 = (t1 + 0x2C);
        if (t2) {
            t0 = 0x1;
        }
    } while ((unsigned int)t1 < (unsigned int)0x8C4747B0);
    return t0;
}

int kmyGetRenderPacket(int a4, int a5)
{
    int t5;
    int t0;
    int t1;
    int t3;
    int t4;

    t5 = 0xEEEE;
    if (a4 != 0) {
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((a4 + 0x248));
            if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t1) == 0) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                return 0x0;
            }
        }
        t3 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t3 | (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)((((0x254 + a4) + (t0 * 0x2C)) + 0x0)) = t0;
        t4 = *(int *)((a4 + 0x24C));
        *(unsigned int *)((a4 + 0x24C)) = (t4 + 0x1);
        *(unsigned int *)((a5 + 0x0)) = ((t0 * 0x2C) + (0x254 + a4));
        t5 = 0x0;
    }
    return t5;
}

void kmyInitializeAllRenderPackets(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)(((t0 * 0x2C) + 0x8C474650)) = t0;
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
}

int kmyReleaseRenderPacket(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = kmyiCheckRenderPacket(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0x8C474644;
    *(unsigned int *)0x8C474644 = (t2 & (~(((int)t1 >= 0) ? (0x1 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x1 >> (-(int)t1 & 31)) : ((int)0x1 >> 31)))));
    t3 = *(int *)0x8C474648;
    *(unsigned int *)0x8C474648 = (t3 - 1);
    return 0x0;
}

int kmySetDMAErrorCallback(int a4, int a5)
{
    if (a4 != 0) {
        if (a4 != 1) {
            return 0xEEEE;
        }
        *(unsigned int *)0x8C203434 = a5;
        return 0x0;
    }
    *(unsigned int *)0x8C203430 = a5;
    return 0x0;
}

int kmySetRegionArrayCallback(int a4, int a5)
{
    int t0;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 != 0) {
        if (a5 == 0) {
            return 0xEEEE;
        }
        *(unsigned int *)((a4 + 0x14)) = a5;
        return 0x0;
    }
    return 0xEEEE;
}

int kmySetStrideWidth(int a4)
{
    kmiWriteRegister(0xE4, ((int)(0x3E0 & a4) >> 5));
    return 0x0;
}

int kmyStartRenderTexture(int a4, int a5, int a6)
{
    int t0;
    int t28;
    int t1;
    int t27;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;

    t0 = kmyiCheckNativeHandle(a4);
    t28 = 0xEEEE;
    if (t0 != 0) {
        t1 = *(int *)0x8C45EEE4;
        t27 = 0xEEEE;
        if (t1 == 0) {
            t2 = *(int *)((a4 + 0x88));
            t3 = *(int *)((t2 + 0x24));
            t4 = *(int *)0x8C4747B0;
            *(unsigned int *)0x8C4747B0 = (unsigned short)t3;
            t5 = *(int *)0x8C4747B0;
            if (t4 != t5) {
                kmyResetRenderer();
            }
            t8 = *(int *)(((a4 + 0x18) + 0xC));
            kmiWriteRegister(0x2C, t8);
            t10 = *(int *)(((a4 + 0x18) + 0x8));
            kmiWriteRegister(0x20, t10);
            t12 = *(int *)((t2 + 0x24));
            kmiWriteRegister(0xF4, t12);
            t14 = *(int *)((t2 + 0x4));
            kmiWriteRegister(0x48, t14);
            t16 = *(int *)((t2 + 0x8));
            kmiWriteRegister(0x8C, t16);
            t18 = *(int *)((t2 + 0xC));
            kmiWriteRegister(0x88, (t18 & 0xFFFFFFF0));
            t20 = *(int *)((t2 + 0x14));
            kmiWriteRegister(0x68, t20);
            t22 = *(int *)((t2 + 0x18));
            kmiWriteRegister(0x6C, t22);
            kmiWriteRegister(0x4C, ((unsigned int)((unsigned int)((unsigned int)((a6 << 2) << 2) >> 2) >> 2) >> 2));
            kmiWriteRegister(0x60, (a5 + 0x1000000));
            kmiWriteRegister(0x14, 0x1);
            t27 = 0x0;
        }
        t28 = t27;
    }
    return t28;
}

int kmyStartRender(int a4, int a5)
{
    int t0;
    int t31;
    int t30;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t23;
    int t25;
    int t26;

    t0 = kmyiCheckNativeHandle(a4);
    t31 = 0xEEEE;
    if (t0 != 0) {
        t30 = 0xEEEE;
        if (a5 != 0) {
            t1 = *(int *)((a4 + 0x88));
            t2 = *(int *)((t1 + 0x24));
            t3 = *(int *)0x8C4747B0;
            *(unsigned int *)0x8C4747B0 = (unsigned short)t2;
            t4 = *(int *)0x8C4747B0;
            if (t3 != t4) {
                kmyResetRenderer();
            }
            t7 = *(int *)(((a4 + 0x18) + 0xC));
            kmiWriteRegister(0x2C, t7);
            t9 = *(int *)(((a4 + 0x18) + 0x8));
            kmiWriteRegister(0x20, t9);
            t11 = *(int *)((t1 + 0x24));
            kmiWriteRegister(0xF4, t11);
            t13 = *(int *)((t1 + 0x4));
            kmiWriteRegister(0x48, t13);
            t15 = *(int *)((t1 + 0x8));
            kmiWriteRegister(0x8C, t15);
            t17 = *(int *)((t1 + 0xC));
            kmiWriteRegister(0x88, (t17 & 0xFFFFFFF0));
            t19 = *(int *)((t1 + 0x14));
            kmiWriteRegister(0x68, t19);
            t21 = *(int *)((t1 + 0x18));
            kmiWriteRegister(0x6C, t21);
            t23 = *(int *)((a5 + 0x2C));
            kmiWriteRegister(0x4C, t23);
            t25 = *(int *)0x8C45EEE4;
            if (t25 == 0) {
                t26 = *(int *)((a5 + 0x1C));
                kmiWriteRegister(0x60, t26);
            }
            kmiWriteRegister(0x14, 0x1);
            t30 = 0x0;
        }
        t31 = t30;
    }
    return t31;
}

int kmySetPixelClippingX(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x14)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
    return 0x0;
}

int kmySetPixelClippingY(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x18)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
    return 0x0;
}

int kmyiCheckNativeHandle(int a4)
{
    int t0;
    int t6;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C474408;
    t6 = 0x0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        t2 = 0x0;
        while (a4 != ((t2 * 0x8C) + 0x8C474414)) {
            t3 = *(int *)0x8C474408;
            t1 = t3;
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)t1) {
                return 0x0;
            }
        }
        t6 = 0x1;
    }
    return t6;
}

int kmyCopyPaletteData(int a4, int a5, int a6)
{
    int t10;
    int t9;
    int t8;
    int t0;
    int t1;
    int t2;
    int t3;

    t10 = 0x12;
    if ((int)a6 > 0) {
        t9 = 0x12;
        if ((int)(a4 + a6) <= (int)0x400) {
            t8 = 0x12;
            if ((int)a4 >= 0) {
                if ((int)a6 > 0) {
                    t0 = 0x0;
                    t1 = (0x0 + a5);
                    t2 = ((a4 << 2) + 0x1000);
                    do {
                        t3 = *(int *)((t1 + 0x0));
                        t1 = (t1 + 0x4);
                        kmiWriteRegister(t2, t3);
                        t0 = (t0 + 0x1);
                        t2 = (t2 + 0x4);
                    } while ((int)t0 < (int)a6);
                }
                t8 = 0x0;
            }
            t9 = t8;
        }
        t10 = t9;
    }
    return t10;
}

void kmySetRenderBpp(int a4, int a5)
{
    int t0;
    int t1;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t2;
    int t8;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    t7 = 0x3;
    if (a5 != 3) {
        t6 = 0x1;
        if (a5 != 0) {
            t5 = 0x0;
            if (a5 != 1) {
                t4 = 0x2;
                if (a5 != 2) {
                    t3 = 0x4;
                    if (a5 != 4) {
                        t2 = 0x6;
                        if (a5 != 5) {
                            t2 = 0x1;
                        }
                        t3 = t2;
                    }
                    t4 = t3;
                }
                t5 = t4;
            }
            t6 = t5;
        }
        t7 = t6;
    }
    t8 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x4)) = ((t8 & 0xFFFFFFF8) | (t7 & 0x7));
}

int kmResetRenderer(void)
{
    int t0;

    do {
        t0 = kmiQueryFinishAllPacket();
    } while (t0 != 0);
    kmyResetRenderer();
    kmyResetTA();
    return 0x0;
}


int kmSetFogVertexColor(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    *(unsigned int *)0x8C4709F0 = a8;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = t0;
    return 0;
}

