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


void _INITSCT(void)
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
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

    t0 = *(int *)0x8C100E84;
    t1 = t0;
    for (;;) {
        t2 = *(int *)0x8C100E90;
        if ((unsigned int)t1 >= (unsigned int)t2) break;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    t3 = *(int *)0x8C100E74;
    t4 = *(int *)0x8C100E6C;
    t5 = 0x8C100E74;
    t6 = t3;
    t7 = t4;
    for (;;) {
        t8 = *(int *)0x8C100E80;
        if ((unsigned int)t6 >= (unsigned int)t8) break;
        t9 = *(signed char *)((t7 + 0x0));
        t5 = t9;
        t7 = (t7 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t5;
        t6 = (t6 + 0x1);
    }
    t10 = *(int *)0x8C20935C;
    t11 = t10;
    for (;;) {
        t12 = *(int *)0x8C209368;
        if ((unsigned int)t11 >= (unsigned int)t12) break;
        *(unsigned char *)((t11 + 0x0)) = 0x0;
        t11 = (t11 + 0x1);
    }
    t13 = *(int *)0x8C20934C;
    t14 = *(int *)0x8C209344;
    t15 = 0x8C20934C;
    t16 = t13;
    t17 = t14;
    for (;;) {
        t18 = *(int *)0x8C209358;
        if ((unsigned int)t16 >= (unsigned int)t18) break;
        t19 = *(signed char *)((t17 + 0x0));
        t15 = t19;
        t17 = (t17 + 0x1);
        *(unsigned char *)((t16 + 0x0)) = t15;
        t16 = (t16 + 0x1);
    }
}

int ovMdlEntryTbl(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = memcmp((a4 + 0x30), 0x8C209544, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = memcmp((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0x8C209554, 0x10);
            if (t2 != 0) {
                ovLibEntryTbl(((((t1 << 2) << 2) << 1) + (a4 + 0x20)));
                t1 = (t1 + 0x1);
                continue;
            }
            break;
        }
        t5 = 0x0;
    }
    return t5;
}

int ovMdlDeleteTbl(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = memcmp((a4 + 0x30), 0x8C209544, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = memcmp((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0x8C209554, 0x10);
            if (t2 != 0) {
                ovLibDeleteTbl(((((t1 << 2) << 2) << 1) + (a4 + 0x20)));
                t1 = (t1 + 0x1);
                continue;
            }
            break;
        }
        t5 = 0x0;
    }
    return t5;
}


int buExit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = vmsfs_c_getstate(t0);
        if (t1 != 0) break;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return buExitForce();
        }
    }
    return 0xFFFFFFFF;
}


int ccitt_updcrc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = ((int)t1 > 0);
        t1 = (t1 - 1);
        if (!t4) break;
        t2 = (unsigned short)t0;
        t5 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t6 = *(short *)((0x8C20A4B0 + (((unsigned char)((int)t2 >> 8) ^ (unsigned char)t5) << 1)));
        t0 = ((t2 << 8) & 0xFF00);
        t0 = (t0 ^ t6);
    }
    return t0;
}

int gdFsStrncmpi(int a4, int a5, int a6)
{
    int t10;
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

    t10 = 0x1;
    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            if (t3 != 0) {
                t4 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = gdFsToUpper(t4);
                t6 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t7 = gdFsToUpper(t6);
                if ((signed char)t5 == (signed char)t7) {
                    t2 = (t2 - 1);
                    if ((int)t2 <= 0) {
                        return 0x1;
                    }
                    continue;
                }
                return 0x0;
            }
            break;
        }
        t8 = *(signed char *)((t0 + 0x0));
        t9 = 0x1;
        if (t8 != 0) {
            t9 = 0x0;
        }
        t10 = t9;
    }
    return t10;
}

int gdFsStrcmpi(int a4, int a5)
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

    t0 = a5;
    t1 = a4;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 0) break;
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = gdFsToUpper(t3);
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t6 = gdFsToUpper(t5);
        if ((signed char)t4 == (signed char)t6) continue;
        return 0x0;
    }
    t7 = *(signed char *)((t0 + 0x0));
    t8 = 0x1;
    if (t7 != 0) {
        t8 = 0x0;
    }
    return t8;
}

int syMmuDeleteAllEntries(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = 0x8C461B18;
    while ((unsigned int)t0 < (unsigned int)0x8C461B58) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        syMmuDeleteEntry(t1);
    }
    t3 = 0x8C461B58;
    while ((unsigned int)t3 < (unsigned int)0x8C461B78) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        syMmuDeleteEntry(t4);
    }
    t6 = *(int *)0x8C461B78;
    t7 = syMmuDeleteEntry(t6);
    return t7;
}

int kdVbOverHandler(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C461E74;
    *(unsigned int *)0x8C461E74 = (t0 + 0x1);
    t1 = *(int *)0x8C4620E0;
    t2 = *(short *)((((t1 << 1) + 0x8C461E90) + 0x0));
    *(unsigned short *)((((t1 << 1) + 0x8C461E90) + 0x0)) = (t2 + 0x1);
    *(unsigned int *)0xA05F6900 = 0x2000;
    return (t2 + 0x1);
}

int copy_device(void)
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
    int t10;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)0x8C47317C;
    t1 = (t0 + 0x28);
    t2 = 0x8C461C1C;
    t3 = 0x0;
    do {
        t4 = *(signed char *)((t1 + 0x0));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t4;
        t5 = *(signed char *)((t1 + 0x1));
        *(unsigned char *)((t2 + 0x1)) = t5;
        t6 = *(signed char *)((t1 + 0x2));
        *(unsigned char *)((t2 + 0x2)) = t6;
        t7 = *(signed char *)((t1 + 0x3));
        *(unsigned char *)((t2 + 0x3)) = t7;
        t8 = *(int *)((t1 + 0x10));
        *(unsigned int *)((t2 + 0x8)) = t8;
        t9 = *(signed char *)((t1 + 0x8));
        *(unsigned char *)((t2 + 0x4)) = t9;
        t10 = *(signed char *)((t1 + 0x9));
        *(unsigned char *)((t2 + 0x5)) = t10;
        t11 = *(signed char *)((t1 + 0xA));
        *(unsigned char *)((t2 + 0x6)) = t11;
        t12 = *(signed char *)((t1 + 0xB));
        *(unsigned char *)((t2 + 0x7)) = t12;
        t13 = *(int *)((t1 + 0x14));
        *(unsigned int *)((t2 + 0xC)) = t13;
        t2 = (t2 + 0x18);
        t1 = (t1 + 0x2C);
    } while ((int)t3 < (int)0x18);
    return t12;
}

int init_sub(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t11;

    t0 = *(int *)0x8C20A808;
    t1 = syChainAddHandler(0x900, 0x8C1E931C, t0, 0x0);
    *(unsigned int *)0x8C461B8C = t1;
    t2 = *(int *)0x8C20A80C;
    t3 = syChainAddHandler(0xA00, 0x8C1E9328, t2, 0x0);
    *(unsigned int *)0x8C461B90 = t3;
    t4 = *(int *)0x8C20A810;
    t5 = syChainAddHandler(0xA00, 0x8C1E9402, t4, 0x0);
    *(unsigned int *)0x8C461B94 = t5;
    t6 = *(int *)0x8C20A814;
    t7 = syChainAddHandler(0xA20, 0x8C1E940A, t6, 0x0);
    *(unsigned int *)0x8C461B98 = t7;
    *(unsigned int *)0x8C461E94 = 0x0;
    *(unsigned int *)0x8C4620E0 = 0x0;
    *(unsigned int *)0x8C4620E4 = 0x0;
    *(unsigned int *)0x8C4620E8 = 0x0;
    *(unsigned int *)0x8C4620EC = 0x0;
    *(unsigned int *)0x8C4620F4 = 0x0;
    *(unsigned int *)0x8C4620F0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C462108 = 0x0;
    *(unsigned int *)0x8C46210C = 0x0;
    *(unsigned int *)0x8C462110 = 0x0;
    memset(0x8C461E5C, 0x0, 0x38);
    memset(0x8C461C1C, 0x0, 0x240);
    memset(0x8C461E9C, 0x0, 0x240);
    t11 = memset(0x8C461B9C, 0x0, 0x80);
    return t11;
}

int open_file_handle(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C469258;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0x8C469498;
        if ((int)t1 >= (int)t2) {
            *(unsigned int *)0x8C46949C = 0xFFFFFF07;
            return 0x0;
        }
        t3 = *(signed char *)((t0 + 0x0));
        if (t3 == 0) break;
        t0 = (t0 + 0x48);
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned int *)((t0 + 0xC)) = t1;
    return t0;
}


int syG2DmaResumeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C20CA24;
        syG2DmaResume(((t1 + 0x4) + t0));
        t0 = (t0 + 0x34);
    } while ((unsigned int)t0 < (unsigned int)0xD0);
    *(unsigned int *)0x8C471F7C = 0x0;
    return 0x0;
}

int syG2DmaSuspendAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C20CA24;
        syG2DmaSuspend(((t1 + 0x4) + t0));
        t0 = (t0 + 0x34);
    } while ((unsigned int)t0 < (unsigned int)0xD0);
    *(unsigned int *)0x8C471F7C = 0x1;
    return 0x0;
}

void mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;

    make_header(a6, a7);
    get_data(a6);
    t2 = *(signed char *)((a6 + 0x1));
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = ((t2 ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    t5 = *(signed char *)((a6 + 0x1));
    *(unsigned char *)((a6 + 0x3)) = ((t5 ^ t4) & (~t4));
    t6 = *(int *)0x8C47317C;
    t7 = *(int *)((0x10C4 + t6));
    if (t7 == 1) {
        t8 = *(signed char *)((a6 + 0x8));
        if ((unsigned char)t8 != 0xFF) {
            if ((unsigned char)t8 != 0) {
                t9 = *(int *)((a7 + 0x0));
                mpdrv_swaplong(a7, ((unsigned char)t9 + 0x1));
            }
        }
    }
    t14 = *(signed char *)((a6 + 0x0));
    t15 = 0x1;
    if (t14 != 0) {
        t15 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t15;
    t16 = *(signed char *)((a6 + 0x3));
    t17 = *(signed char *)((a6 + 0x2));
    if (t17 != 0) {
        *(unsigned char *)((a5 + 0x10)) = 0x1;
        mpdrv_make_deviceinfo(a5, a6, a7);
    }
    t20 = *(signed char *)((a6 + 0x3));
    if (t20 != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
}

void mpdrv_init_memory(void)
{
    int t0;

    t0 = *(int *)0x8C47317C;
    *(unsigned int *)((t0 + 0x10F4)) = 0xA05F6C00;
}


int fmMngReadData(int managerAddress)
{
    int formatMode;
    int readResult;
    int recordIndex;
    int cacheBufferAddress;
    int dataBufferAddress;
    int cachedRecordIndex;
    int recordReadResult;
    int computedCrc;
    int storedCrc;
    int crcResult;

    formatMode = *(short *)((managerAddress + 0x2));
    readResult = 0xFFFFFFFA;
    if (formatMode == 0) {
        recordIndex = *(int *)((managerAddress + 0x28));
        cacheBufferAddress = *(int *)((managerAddress + 0xC));
        dataBufferAddress = *(int *)((managerAddress + 0x30));
        thunk_copyBytes();
        cachedRecordIndex = *(short *)(((((((recordIndex + 0x1) << 2) << 2) << 2) + cacheBufferAddress) + 0x0));
        recordReadResult = 0x0;
        if ((unsigned short)cachedRecordIndex != 0xFFFF) {
            computedCrc = fmcalccrc(0x3E, (((((recordIndex + 0x1) << 2) << 2) << 2) + cacheBufferAddress));
            storedCrc = *(short *)(((((((recordIndex + 0x1) << 2) << 2) << 2) + cacheBufferAddress) + 0x3E));
            crcResult = 0x0;
            if ((unsigned short)storedCrc != (unsigned short)computedCrc) {
                crcResult = 0xFFFFFFFC;
            }
            recordReadResult = crcResult;
        }
        readResult = recordReadResult;
    }
    return readResult;
}


int syIntAdrChk_finish(void)
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
    int t10;

    t0 = *(int *)0x8C47647C;
    if (t0 == 0) {
        t1 = *(int *)0x8C476478;
        *(unsigned short *)(((t1 + 0x8) + 0x0)) = 0x0;
        t2 = *(int *)0x8C476478;
        *(unsigned short *)(((t2 + 0x18) + 0x0)) = 0x6;
        t3 = *(int *)0x8C476478;
        *(unsigned short *)((t3 + 0x0)) = 0x0;
        t4 = *(int *)0x8C476478;
        *(unsigned char *)(((t4 + 0x4) + 0x0)) = 0xFF;
        t5 = *(int *)0x8C476478;
        *(unsigned short *)(((t5 + 0x8) + 0x0)) = 0x0;
        t6 = *(int *)0x8C476478;
        *(unsigned short *)(((t6 + 0x10) + 0x0)) = 0x0;
        t7 = *(int *)0x8C476478;
        *(unsigned short *)(((t7 + 0x18) + 0x0)) = 0x0;
        t8 = *(int *)0x8C476478;
        *(unsigned short *)(((t8 + 0x20) + 0x0)) = 0x0;
        t9 = *(int *)0x8C476478;
        *(unsigned short *)(((t9 + 0x24) + 0x0)) = 0x0;
    }
    t10 = *(signed char *)0xFFC00004;
    *(unsigned char *)0xFFC00004 = (t10 | 0x1);
    return (t10 | 0x1);
}

int syIntAdrChk_printh(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x1C;
    do {
        t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x30);
        if ((int)(unsigned char)(0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) >= (int)0xA) {
            t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x37);
        }
        t2 = syIntAdrChk_putchar(t1);
        t0 = (t0 - 4);
    } while ((int)t0 >= 0);
    return t2;
}


