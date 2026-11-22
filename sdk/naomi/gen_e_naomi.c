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


int nlCommonTextureDummyFree(int a4)
{
    if (a4 != 0) {
        return kmyFreeArea(a4);
    }
    return 0;
}


float nlCeil(float f4)
{
    float t0;

    t0 = nlFloor((-f4));
    return (-t0);
}

int nlRand(void)
{
    int t0;

    t0 = *(int *)0x8C1DC8C8;
    *(unsigned int *)0x8C1DC8C8 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int nlPrintSetOpaqueMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    *(unsigned int *)0x8C44F9C0 = a4;
    t0 = *(int *)0x8C44F9AC;
    *(unsigned int *)0x8C44F9AC = (t0 & 0xF8FFFFFF);
    t1 = *(int *)0x8C44F9B4;
    *(unsigned int *)0x8C44F9B4 = (t1 & 0x3FFFFFF);
    if (a4 != 0) {
        t2 = *(int *)0x8C44F9B4;
        t5 = (t2 | 0x20000000);
    } else {
        t3 = *(int *)0x8C44F9AC;
        *(unsigned int *)0x8C44F9AC = (t3 | 0x2000000);
        t4 = *(int *)0x8C44F9B4;
        t5 = (t4 | 0x94000000);
    }
    *(unsigned int *)0x8C44F9B4 = t5;
    return t5;
}

void nlRenderTextureFreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0x8C44FBF0;
        if ((int)t0 >= (int)t1) break;
        nlRenderTextureFree(t0);
        t0 = (t0 + 0x1);
    }
}

int nlInitMatrix(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;

    nlInitMatrixStack(0x8C450874, 0x8C45088C, 0x3);
    nlInitMatrixStack(0x8C450880, 0x8C45094C, 0x3);
    t2 = nlInitMatrixStack(0x8C450868, a4, (a5 + 0x1));
    *(unsigned char *)0x8C450858 = 0x1;
    t3 = *(int *)0x8C450870;
    *(unsigned int *)0x8C450864 = t3;
    t4 = *(int *)0x8C45086C;
    *(unsigned int *)0x8C450860 = t4;
    t5 = *(int *)0x8C450868;
    *(unsigned int *)0x8C45085C = t5;
    return t2;
}

int nlObjPutTrnsl(int a4, float f4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    if ((t0 & 2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0x8C450B38);
    return nlobjput_sub_trnsl(a4, f4);  /* the alpha (fr4) as it came */
}

void nlObjPutSetSaturate(float f4, float f5)
{
    *(float *)0x8C1DCA90 = f5;
    *(float *)0x8C1DCA94 = (-f4);
    if (f5 > 0.0f) {
        if (!(0.0f > (-(-f4)))) {
            *(unsigned int *)0x8C0F2C78 = 0x8C0F9A30;
            *(unsigned int *)0x8C0F2C7C = 0x8C0F9A30;
            *(unsigned int *)0x8C0F2CE8 = 0x8C0F9A32;
            *(unsigned int *)0x8C0F2CEC = 0x8C0F9A32;
            return;
        }
        *(unsigned int *)0x8C0F2C78 = 0x8C0F8940;
        *(unsigned int *)0x8C0F2C7C = 0x8C0F8940;
        *(unsigned int *)0x8C0F2CE8 = 0x8C0F8942;
        *(unsigned int *)0x8C0F2CEC = 0x8C0F8942;
        return;
    }
    *(unsigned int *)0x8C0F2C78 = 0x8C0F8940;
    *(unsigned int *)0x8C0F2C7C = 0x8C0F8940;
    *(unsigned int *)0x8C0F2CE8 = 0x8C0F8942;
    *(unsigned int *)0x8C0F2CEC = 0x8C0F8942;
}

void nlSpriteSetVtxContext(int a4)
{
    int t1;
    int t6;
    float u7;
    int t8;
    float u9;

    *(unsigned int *)((a4 + 0x0)) = 0xA0000009;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x4C0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    nlSetTextureParameter(a4);
    t1 = *(int *)((a4 + 0xC));
    *(unsigned short *)((a4 + 0x14)) = 0x0;
    if ((((unsigned int)t1 >> 27) & 0x7) != 0) {
        if ((((unsigned int)t1 >> 27) & 0x7) != 2) {
            if ((((unsigned int)t1 >> 27) & 0x7) != 5) {
                if ((((unsigned int)t1 >> 27) & 0x7) == 6) {
                    *(unsigned short *)((a4 + 0x14)) = 0x1;
                }
            } else {
                *(unsigned short *)((a4 + 0x14)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x14)) = 0x1;
        }
    } else {
        *(unsigned short *)((a4 + 0x14)) = 0x1;
    }
    t6 = *(int *)((a4 + 0x8));
    u7 = *(float *)((0x8C127E64 + ((((unsigned int)((unsigned int)t6 >> 2) >> 1) & 0x7) << 2)));
    *(float *)((a4 + 0x18)) = u7;
    t8 = *(int *)((a4 + 0x8));
    u9 = *(float *)((0x8C127E64 + ((t8 & 0x7) << 2)));
    *(float *)((a4 + 0x1C)) = u9;
}

int nlsndG2Write(int a4, int a5)
{
    int t0;

    do {
        t0 = *(int *)0xA05F688C;
    } while ((t0 & 0x31) != 0);
    *(unsigned int *)((a5 + 0x0)) = a4;
    return 0x0;
}

int nlsndControlChange(int a4, int a5, int a6, int a7)
{
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x7B0) {
                if (a6 != 0x27B0) {
                    if (a6 != 0x40B0) {
                        if (a6 != 0x41B0) {
                            if (a6 != 0xAB0) {
                                if (a6 != 0x2AB0) {
                                    if (a6 != 0xCB0) {
                                        if (a6 != 0x2CB0) {
                                            if (a6 != 0xDB0) {
                                                if (a6 != 0x2DB0) {
                                                    if (a6 != 0x78B0) {
                                                        if (a6 != 0x7BB0) {
                                                            return 0xFFFFFFFE;
                                                        }
                                                        return nlsndSeqRequest((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6));
                                                    }
                                                    return nlsndSeqRequest((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6));
                                                }
                                                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                            }
                                            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                        }
                                        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                    }
                                    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                }
                                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
                            }
                            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
                        }
                        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
                    }
                    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
                }
                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
            }
            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
    }
    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
}

int nlsndGdControl(int a4, int a5)
{
    int t0;

    if (a4 == 0xA3) {
        t0 = nlsndSeqRequest((a4 + ((a5 & 0xF) << 16)));
        if (t0 != 0) {
            return t0;
        }
        return nlsndSeqRequest(((a4 + ((a5 & 0xF) << 16)) + 0x100));
    }
    return 0xFFFFFFFE;
}

int nlsndGetMidiChInfo(int a4, int a5, int a6)
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

    if ((unsigned int)a4 >= (unsigned int)0x8) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < 0) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) >= (int)0x10) {
        return 0xFFFFFF80;
    }
    t0 = *(int *)0x8C454CAC;
    t1 = nlsndG2Read((t0 + 0x4));
    t2 = nlsndG2Read(((0xA0800000 + t1) + ((((a4 << 2) << 2) + (a5 - 1)) << 2)));
    if ((unsigned char)t2 == 0xFF) {
        return 0xFFFFFF7F;
    }
    t3 = *(int *)0x8C454CAC;
    t4 = nlsndG2Read((t3 + 0x8));
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x27B0) {
                if (a6 != 0x2AB0) {
                    return 0xFFFFFF80;
                }
                t5 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8));
                t6 = *(signed char *)(((signed char)((unsigned int)((unsigned int)(t5 & 0x1F000000) >> 16) >> 8) + 0x8C127EFD));
                return t6;
            }
            t7 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8));
            return (short)((unsigned int)(t7 & 0x7F0000) >> 16);
        }
        t8 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14));
        return ((int)(t8 & 0x7F00) >> 8);
    }
    t9 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14));
    return (t9 & 0x7F);
}

int nlsndDriverSongStatus(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0x8C454CAC;
    t1 = nlsndG2Read((t0 + 0xC));
    t2 = 0x0;
    t3 = (0xA0800000 + t1);
    for (;;) {
        t4 = nlsndG2Read(t3);
        if (((unsigned char)t4 & 0x80) != 0) {
            t5 = nlsndG2Read(t3);
            if ((short)((unsigned int)(t5 & 0xFF0000) >> 16) == a4) break;
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x30);
            if ((int)t2 >= (int)0x10) {
                return 0x0;
            }
            continue;
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x30);
        if ((int)t2 >= (int)0x10) {
            return 0x0;
        }
    }
    t6 = 0x100;
    if (((unsigned char)t4 & 0x1) != 0) {
        t6 = 0x101;
    }
    return t6;
}

void nlsndG2DmaInit(void)
{
    int t0;
    int t1;

    t0 = 0x10;
    t1 = 0x8C454E34;
    do {
        t0 = (t0 - 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x10);
    } while (t0 != 0);
    *(unsigned int *)0x8C454CEC = 0x0;
}

int nlDispStripTexOfs(int a4, int a5, int a6)
{
    int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB5C, a6);
    if (t0 == 0) {
        return nldispstripTexSub(a4, a5);
    }
    return t0;
}

int nlDispStripTexOfsTrnsl(int a4, int a5, int a6)
{
    int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB84, a6);
    if (t0 == 0) {
        return nldispstripTexOfsSub(a4, a5);
    }
    return t0;
}


