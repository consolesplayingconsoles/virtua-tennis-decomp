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


int ADXT_GetNumSmpl(int playerAddress)
{
    int status;
    int streamDecoderAddress;

    status = *(signed char *)((playerAddress + 0x1));
    if ((int)status >= (int)0x2) {
        streamDecoderAddress = *(int *)((playerAddress + 0x4));
        return ADXSJD_GetTotalNumSmpl(streamDecoderAddress);
    }
    return 0x0;
}

int ADXT_GetSfreq(int playerAddress)
{
    int status;
    int streamDecoderAddress;

    status = *(signed char *)((playerAddress + 0x1));
    if ((int)status >= (int)0x2) {
        streamDecoderAddress = *(int *)((playerAddress + 0x4));
        return ADXSJD_GetSfreq(streamDecoderAddress);
    }
    return 0x0;
}

int ADXT_GetNumChan(int playerAddress)
{
    int status;
    int streamDecoderAddress;

    status = *(signed char *)((playerAddress + 0x1));
    if ((int)status >= (int)0x2) {
        streamDecoderAddress = *(int *)((playerAddress + 0x4));
        return ADXSJD_GetNumChan(streamDecoderAddress);
    }
    return 0x0;
}

int ADXT_ExecServer(void)
{
    int t4;
    int t5;
    int t7;
    int t6;

    ADXSJD_ExecServer();
    *(unsigned int *)0x8C20C6C0 = 0x0;
    ADXRNA_ExecServer();
    *(unsigned int *)0x8C20C6C4 = 0x0;
    ADXF_ExecServer();
    *(unsigned int *)0x8C20C6C8 = 0x0;
    ADXSTM_ExecServer();
    *(unsigned int *)0x8C20C6CC = 0x0;
    t4 = 0x8C20C258;
    do {
        t5 = *(signed char *)((t4 + 0x0));
        t7 = t5;
        if (t5 == 1) {
            t6 = ADXT_ExecHndl(t4);
            t7 = t6;
        }
        t4 = (t4 + 0x8C);
    } while ((unsigned int)t4 < (unsigned int)0x8C20C6B8);
    *(unsigned int *)0x8C20C6D0 = 0x0;
    *(unsigned int *)0x8C20C6BC = 0x0;
    return t7;
}


int adxf_AllocAdxFs(void)
{
    int t6;
    int t0;
    int t1;
    int t2;

    t6 = 0x0;
    if ((unsigned int)0x8C46BF64 < (unsigned int)0x8C46C264) {
        t0 = 0x8C46BF64;
        t1 = 0x8C46BF64;
        for (;;) {
            t2 = *(signed char *)((t0 + 0x0));
            if (t2 == 0) break;
            t0 = (t0 + 0x30);
            t1 = (t1 + 0x30);
            if ((unsigned int)t0 >= (unsigned int)0x8C46C264) {
                return 0x0;
            }
        }
        t6 = t1;
    }
    return t6;
}

int ADXF_ExecServer(void)
{
    int t1;
    int t2;

    ADXCRS_Lock();
    t1 = 0x8C46BF64;
    do {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 1) {
            adxf_ExecOne(t1);
        }
        t1 = (t1 + 0x30);
    } while ((unsigned int)t1 < (unsigned int)0x8C46C264);
    return ADXCRS_Unlock();
}

int ADXF_Seek(int a4, int a5, int a6)
{
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t39;
    int t38;
    int t37;
    int t36;

    adxf_SetCmdHstry(0x6, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        t39 = 0xFFFFFFFD;
    } else {
        t2 = *(signed char *)((a4 + 0x1));
        if (t2 == 2) {
            ADXF_Stop(a4);
        }
        if (a6 == 0) {
            *(unsigned int *)((a4 + 0x18)) = a5;
            t5 = *(int *)((a4 + 0x18));
            if ((int)t5 < 0) {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            } else {
                t6 = *(int *)((a4 + 0x18));
                t7 = *(int *)((a4 + 0x10));
                if ((int)t6 > (int)t7) {
                    t8 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = t8;
                }
            }
            adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
            t13 = *(int *)((a4 + 0x18));
            t38 = t13;
        } else {
            if (a6 == 1) {
                t14 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = (t14 + a5);
                t15 = *(int *)((a4 + 0x18));
                if ((int)t15 < 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                } else {
                    t16 = *(int *)((a4 + 0x18));
                    t17 = *(int *)((a4 + 0x10));
                    if ((int)t16 > (int)t17) {
                        t18 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((a4 + 0x18)) = t18;
                    }
                }
                adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                t23 = *(int *)((a4 + 0x18));
                t37 = t23;
            } else {
                if (a6 == 2) {
                    t24 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = (t24 + a5);
                    t25 = *(int *)((a4 + 0x18));
                    if ((int)t25 < 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                    } else {
                        t26 = *(int *)((a4 + 0x18));
                        t27 = *(int *)((a4 + 0x10));
                        if ((int)t26 > (int)t27) {
                            t28 = *(int *)((a4 + 0x10));
                            *(unsigned int *)((a4 + 0x18)) = t28;
                        }
                    }
                    adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                    t34 = *(int *)((a4 + 0x18));
                    t36 = t34;
                } else {
                    ADXERR_CallErrFunc();
                    t36 = 0xFFFFFFFD;
                }
                t37 = t36;
            }
            t38 = t37;
        }
        t39 = t38;
    }
    return t39;
}


void ADXAMP_Start(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a4 + 0x2));
        if ((int)t0 >= (int)t1) break;
        t2 = ((t0 << 2) + (a4 + 0x14));
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x2;
}

int ADXSJD_Create(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t23;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t21;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t1 * 0x98) + 0x8C46AE24) + 0x0));
        if (t2 != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t23 = 0x0;
    if (t1 != 8) {
        t5 = SJRBF_GetBufPtr(t0);
        t6 = SJRBF_GetBufSize(t0);
        t7 = SJRBF_GetXtrSize(t0);
        t8 = ADXB_Create(a5, t5, ((unsigned int)t6 >> 1), (((unsigned int)t6 >> 1) + ((unsigned int)t7 >> 1)));
        *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4)) = t8;
        ADXB_EntryGetWrFunc(t8, 0x8C1F05A4, ((t1 * 0x98) + 0x8C46AE24));
        t10 = *(int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4));
        t21 = 0x0;
        if (t10 != 0) {
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t11 = 0x0;
                t12 = 0x0;
                do {
                    t13 = *(int *)((a6 + t11));
                    t12 = (t12 + 0x1);
                    *(unsigned int *)((((((t1 * 0x98) + 0x8C46AE24) + 0xC) + t11) + 0x0)) = t13;
                    t11 = (t11 + 0x4);
                } while ((int)t12 < (int)a5);
            }
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x1)) = 0x0;
            adxsjd_clear(((t1 * 0x98) + 0x8C46AE24));
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x48)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4C)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x50)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x54)) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x0)) = 0x1;
            t21 = ((t1 * 0x98) + 0x8C46AE24);
        }
        t23 = t21;
    }
    return t23;
}

int ADXSJD_ExecServer(void)
{
    int t0;
    int t1;
    int t3;
    int t2;

    t0 = 0x8C46AE24;
    do {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t2 = ADXSJD_ExecHndl(t0);
            t3 = t2;
        }
        t0 = (t0 + 0x98);
    } while ((unsigned int)t0 < (unsigned int)0x8C46B2E4);
    return t3;
}

void ADXSTM_Stop(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        if (t1 != 0) {
            t2 = syTmrGetCount();
            t3 = *(int *)((a4 + 0x8));
            gdFsStopRd(t3);
            t5 = syTmrGetCount();
            t6 = syTmrDiffCount(t2, t5);
            *(unsigned int *)0x8C20C8A4 = t6;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
        }
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
}

int ADXSTMF_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxstmf_stat_exec(a4);
    }
    return t0;
}

int mwlRnaAlloc(void)
{
    int t5;
    int t0;
    int t1;
    int t2;

    t5 = 0x0;
    if ((unsigned int)0x8C46D68C < (unsigned int)0x8C46DB0C) {
        t0 = 0x8C46D68C;
        t1 = 0x8C46D68C;
        for (;;) {
            t2 = *(signed char *)((t0 + 0x0));
            if (t2 == 0) break;
            t0 = (t0 + 0x90);
            t1 = (t1 + 0x90);
            if ((unsigned int)t0 >= (unsigned int)0x8C46DB0C) {
                return 0x0;
            }
        }
        t5 = t1;
    }
    return t5;
}

int SJMEM_Init(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C8F0;
    if ((int)t0 <= 0) {
        t1 = *(int *)0x8C20C8F0;
        *(unsigned int *)0x8C20C8F0 = (t1 + 0x1);
        return memset(0x8C46EB54, 0x0, 0x480);
    }
    return 0;
}

void SJMEM_Finish(void)
{
    int t0;

    t0 = *(int *)0x8C20C8F0;
    *(unsigned int *)0x8C20C8F0 = (t0 - 1);
}

int SJMEM_Create(int a4, int a5)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x4));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) break;
            continue;
        }
        break;
    }
    if (t0 == 32) {
        return 0x0;
    }
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x4)) = 0x1;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x0)) = 0x8C20C8C0;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x14)) = a4;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x18)) = a5;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x8)) = 0x8C20AD60;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x1C)) = 0x8C1F3142;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x20)) = (((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54);
    SJMEM_Reset((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54));
    return (((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54);
}

void SJRBF_Finish(void)
{
    int initCount;

    initCount = *(int *)0x8C20C928;
    *(unsigned int *)0x8C20C928 = (initCount - 1);
}

int SJRBF_Create(int bufferAddress, int bufferBytes, int wrapMarginBytes)
{
    int handleIndex;
    int allocated;

    handleIndex = 0x0;
    for (;;) {
        allocated = *(int *)(((((((handleIndex << 1) + handleIndex) << 2) << 2) + 0x8C46EFD4) + 0x4));
        if (allocated != 0) {
            handleIndex = (handleIndex + 0x1);
            if ((int)handleIndex >= (int)0x40) break;
            continue;
        }
        break;
    }
    if (handleIndex == 64) {
        return 0x0;
    }
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x0)) = 0x8C20C8F8;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x1C)) = bufferAddress;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x20)) = bufferBytes;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x24)) = wrapMarginBytes;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x8)) = 0x8C20AD70;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x28)) = 0x8C1F3416;
    *(unsigned int *)(((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)) + 0x2C)) = (0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2));
    SJRBF_Reset((0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2)));
    return (0x8C46EFD4 + ((((handleIndex << 1) + handleIndex) << 2) << 2));
}

int SJUNI_Init(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C95C;
    if ((int)t0 <= 0) {
        t1 = *(int *)0x8C20C95C;
        *(unsigned int *)0x8C20C95C = (t1 + 0x1);
        return memset(0x8C46FBD4, 0x0, 0xC00);
    }
    return 0;
}

void SJUNI_Finish(void)
{
    int t0;

    t0 = *(int *)0x8C20C95C;
    *(unsigned int *)0x8C20C95C = (t0 - 1);
}


int ADXB_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t8;
    int t5;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0xAC) + 0x8C4731F8) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t8 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0xAC) + 0x8C4731F8), 0x0, 0xAC);
        *(unsigned short *)((((t0 * 0xAC) + 0x8C4731F8) + 0x0)) = 0x1;
        t5 = ADXPD_Create();
        *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x8)) = t5;
        if (t5 == 0) {
            ADXB_Destroy(((t0 * 0xAC) + 0x8C4731F8));
            t7 = 0x0;
        } else {
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x38)) = a4;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x3C)) = a5;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x40)) = a6;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x44)) = a7;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x88)) = 0x8C1FF920;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x8C)) = ((t0 * 0xAC) + 0x8C4731F8);
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x90)) = 0x8C1FF93E;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x94)) = ((t0 * 0xAC) + 0x8C4731F8);
            t7 = ((t0 * 0xAC) + 0x8C4731F8);
        }
        t8 = t7;
    }
    return t8;
}


int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}

int ADXB_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0xA8));
        if (t1 == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        t2 = *(short *)((a4 + 0xA8));
        if (t2 == 3) {
            return ADXB_ExecOneAiff(a4);
        }
        t3 = *(short *)((a4 + 0xA8));
        if (t3 == 4) {
            return ADXB_ExecOneAu(a4);
        }
        t4 = *(short *)((a4 + 0xA8));
        if (t4 == 1) {
            return ADXB_ExecOneWav(a4);
        }
        return t4;
    }
    return ADXB_ExecOneAdx(a4);
}

int mwlSbAllocWork(int a4)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    t5 = 0x0;
    if ((unsigned int)0x8C474398 < (unsigned int)0x8C4743D8) {
        t0 = 0x8C474398;
        t1 = 0x8C474398;
        t2 = 0x8C473B98;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            if (t3 == 0) break;
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0x8C4743D8) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t5 = t1;
    }
    return t5;
}


int mwSbSetSfreq(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((int)0xAC44 / (int)(a5 + 0x1));
    t1 = *(signed char *)((0x8C20B0AC + t0));
    t2 = (int)((int)(((a5 - (((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31)))) << 8) << 2) / (int)(((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31))));
    t3 = *(int *)((a4 + 0x1C));
    t4 = *(int *)((t3 + 0x4));
    t5 = nlsndStreamSetHdOctFns(t4, (0xF & (-t1)), (0x3FF & t2));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int mwSbSetBitPerSmpl(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    t2 = nlsndStreamSetHdBitSize(t1, a5);
    *(unsigned int *)((a4 + 0x10)) = a5;
    return t2;
}


int ADXPD_Create(void)
{
    int t0;
    int t1;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((t0 * 0x34) + 0x8C4762D4) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t7 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0x34) + 0x8C4762D4), 0x0, 0x34);
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x0)) = 0x1;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x4)) = t0;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x8)) = 0x0;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0xC)) = 0x0;
        ADX_GetCoefficient(0x1F4, 0xAC44, (((t0 * 0x34) + 0x8C4762D4) + 0x30), ((((t0 * 0x34) + 0x8C4762D4) + 0x30) + 0x2));
        memset((((t0 * 0x34) + 0x8C4762D4) + 0x28), 0x0, 0x8);
        t7 = ((t0 * 0x34) + 0x8C4762D4);
    }
    return t7;
}


int ADXPD_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t20;
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
    int t18;
    int t17;
    int t19;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t1 = *(int *)((a4 + 0xC));
    t20 = t1;
    if (t1 == 2) {
        t2 = *(int *)((a4 + 0x14));
        if (t2 == 1) {
            t3 = *(short *)(((a4 + 0x30) + 0x2));
            t4 = *(short *)(((a4 + 0x30) + 0x0));
            t5 = *(int *)((a4 + 0x20));
            t6 = *(int *)((a4 + 0x1C));
            t7 = *(int *)((a4 + 0x18));
            t8 = ADX_DecodeMonoFloat(t7, t6, t5, (a4 + 0x28), t4, t3);
            *(unsigned int *)((a4 + 0x10)) = t8;
            t19 = t8;
        } else {
            t9 = *(short *)(((a4 + 0x30) + 0x2));
            t10 = *(short *)(((a4 + 0x30) + 0x0));
            t11 = *(int *)((a4 + 0x24));
            t12 = *(int *)((a4 + 0x1C));
            t13 = *(int *)((a4 + 0x20));
            t14 = *(int *)((a4 + 0x18));
            t15 = ADX_DecodeSteFloat(t14, t12, t13, (a4 + 0x28), t11, ((a4 + 0x28) + 0x4), t10, t9);
            *(unsigned int *)((a4 + 0x10)) = t15;
            t16 = ((~(((~t15) + 0x1) & 0x1)) + 0x1);
            if ((int)t15 >= 0) {
                t16 = (t15 & 0x1);
            }
            t18 = t16;
            if (t16 == 1) {
                t17 = adxpd_error();
                t18 = t17;
            }
            t19 = t18;
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
        t20 = t19;
    }
    return t20;
}


