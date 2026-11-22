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

void mainCheckReset(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C29B898;
    do {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t2 = *(int *)((t1 + 0x8));
        if ((t2 & 0x4) != 0) {
            if ((0x2 & t2) != 0) {
                if ((0x400 & t2) != 0) {
                    if ((0x200 & t2) != 0) {
                        t3 = *(int *)((t1 + 0x10));
                        if ((t3 & 8) != 0) {
                            t4 = *(int *)0x8C20D14C;
                            if (t4 != 7) {
                                if (t4 == 0) {
                                    t5 = *(int *)0x8C421F60;
                                    if (t5 != 0) {
                                        mainExitToBios();
                                    } else {
                                        mainSoftReset(0x1);
                                    }
                                } else {
                                    mainSoftReset(0x1);
                                }
                            } else {
                                mainExitToBios();
                            }
                        }
                    }
                }
            }
        }
    } while ((unsigned int)t0 < (unsigned int)0x8C29B8A8);
}


int nlMalloc2(int a4)
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
    int t14;
    int t15;
    int t16;
    int t19;
    int t23;
    int t24;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x8) {
        t0 = 0x8;
    }
    t1 = *(int *)0x8C23D1E4;
    t2 = t1;
    for (;;) {
        if (t2 == 0) {
            return t2;
        }
        t3 = *(int *)((t2 + 0x0));
        if ((unsigned int)t3 >= (unsigned int)((t0 + 0x3) & 0xFFFFFFFC)) break;
        t4 = *(int *)((t2 + 0x8));
        t2 = t4;
    }
    t5 = *(int *)((t2 + 0x0));
    if ((unsigned int)t5 >= (unsigned int)(((t0 + 0x3) & 0xFFFFFFFC) + 0x10)) {
        t6 = *(int *)((t2 + 0x0));
        *(unsigned int *)((t2 + 0x0)) = (t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8));
        *(unsigned int *)((((t2 + 0x4) + (t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8))) + 0x0)) = ((t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8)) + 0x4);
        t7 = *(int *)((t2 + 0x0));
        t23 = ((t0 + 0x3) & 0xFFFFFFFC);
        t24 = ((t7 + t2) + 0x8);
    } else {
        t8 = *(int *)((t2 + 0x4));
        if (t8 == 0) {
            t9 = *(int *)((t2 + 0x8));
            *(unsigned int *)0x8C23D1E4 = t9;
        } else {
            t10 = *(int *)((t2 + 0x8));
            t11 = *(int *)((t2 + 0x4));
            *(unsigned int *)((t11 + 0x8)) = t10;
        }
        t14 = *(int *)((t2 + 0x8));
        if (t14 != 0) {
            t15 = *(int *)((t2 + 0x4));
            t16 = *(int *)((t2 + 0x8));
            *(unsigned int *)((t16 + 0x4)) = t15;
        }
        t19 = *(int *)((t2 + 0x0));
        t23 = t19;
        t24 = t2;
    }
    *(unsigned int *)((t24 + 0x0)) = (-t23);
    *(unsigned int *)((((t24 + 0x4) + t23) + 0x0)) = (0xFFFFFFFC - t23);
    *(unsigned int *)((t24 + 0x4)) = 0x0;
    return (t24 + 0x4);
}

void nlFree2(int a4)
{
    int t0;
    int t40;
    int t41;
    int t1;
    int t18;
    int t19;
    int t2;
    int t14;
    int t15;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t20;
    int t39;
    int t21;
    int t36;
    int t22;
    int t23;
    int t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t42;
    int t43;
    int t44;

    if (a4 != 0) {
        t0 = *(int *)(((a4 - 4) + 0x0));
        t40 = (a4 - 4);
        t41 = t0;
        if ((int)t0 < 0) {
            t1 = *(int *)0x8C23D1DC;
            t18 = (a4 - 4);
            t19 = (-t0);
            if ((a4 - 4) != t1) {
                t2 = *(int *)((((a4 - 4) - 4) + 0x0));
                t14 = (a4 - 4);
                t15 = (-t0);
                if ((int)t2 >= 0) {
                    t3 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                    if (t3 == 0) {
                        t4 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        *(unsigned int *)0x8C23D1E4 = t4;
                    } else {
                        t5 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        t6 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                        *(unsigned int *)((t6 + 0x8)) = t5;
                    }
                    t8 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                    if (t8 != 0) {
                        t9 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                        t10 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        *(unsigned int *)((t10 + 0x4)) = t9;
                    }
                    t14 = (((a4 - 4) - t2) - 4);
                    t15 = ((-t0) + (t2 + 0x4));
                }
                t18 = t14;
                t19 = t15;
            }
            t20 = *(int *)0x8C23D1E0;
            t39 = t19;
            if (((t18 + 0x4) + t19) != t20) {
                t21 = *(int *)((((t18 + 0x8) + t19) + 0x0));
                t36 = t19;
                if ((int)t21 >= 0) {
                    t22 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                    if (t22 == 0) {
                        t23 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        *(unsigned int *)0x8C23D1E4 = t23;
                    } else {
                        t24 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        t25 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                        *(unsigned int *)((t25 + 0x8)) = t24;
                    }
                    t28 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                    if (t28 != 0) {
                        t29 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                        t30 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        *(unsigned int *)((t30 + 0x4)) = t29;
                    }
                    t36 = (t19 + (t21 + 0x8));
                }
                t39 = t36;
            }
            t40 = t18;
            t41 = t39;
        }
        *(unsigned int *)((t40 + 0x0)) = t41;
        *(unsigned int *)((((t40 + 0x4) + t41) + 0x0)) = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x4)) = 0x0;
        t42 = *(int *)0x8C23D1E4;
        *(unsigned int *)((t40 + 0x8)) = t42;
        t43 = *(int *)0x8C23D1E4;
        if (t43 != 0) {
            t44 = *(int *)0x8C23D1E4;
            *(unsigned int *)((t44 + 0x4)) = t40;
        }
        *(unsigned int *)0x8C23D1E4 = t40;
    }
}

int set_event2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x14) {
        t0 = 0x14;
    }
    t1 = nlMalloc2(t0);
    if (t1 != 0) {
        t2 = *(int *)0x8C23D1D0;
        if (t2 == 0) {
            *(unsigned int *)0x8C23D1CC = t1;
        } else {
            *(unsigned int *)((t2 + 0x8)) = t1;
        }
        t3 = *(int *)0x8C23D1D0;
        *(unsigned int *)((t1 + 0x4)) = t3;
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        *(unsigned int *)((t1 + 0xC)) = a5;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x8C100ED0;
        *(unsigned int *)0x8C23D1D0 = t1;
        t4 = *(int *)0x8C23D1F4;
        *(unsigned int *)0x8C23D1F4 = (t4 + 0x1);
    }
    return t1;
}

int shadowVolPutDirA(void)
{
    return shadowVolPutDir();
}

int dbgMenuPageSystem(int a4)
{
    int t0;

    t0 = set_event(0x18, 0x8C01361A);
    *(unsigned int *)((t0 + 0x14)) = a4;
    dbgMenuSetItem(a4, 0x0, 0x8C1013EC, 0x0, 0x0, 0x1, 0x1);
    dbgMenuSetItem(a4, 0x1, 0x8C1013F4, 0x0, 0x0, 0x1, 0x1);
    return dbgMenuSetTitle(a4, 0x8C1013FC, 0x2);
}

void motionSetCurrent(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x34));
    t1 = *(int *)((a4 + 0x58));
    t2 = *(int *)((t0 + 0x10));
    *(unsigned int *)0x8C2873B8 = (t1 + t2);
    *(unsigned int *)0x8C2871D4 = a4;
    *(unsigned int *)0x8C2873C0 = 0x0;
}

int motionRootAuto(int a4)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)0x8C2871D4;
    t1 = *(int *)((t0 + 0x44));
    if (t1 != 0) {
        u2 = *(float *)((t0 + 0x4));
        if (u2 == 0.0f) {
            return motionRoot(a4);
        }
        return motionRoot2(a4);
    }
    return motionRoot(a4);
}

int motionRotateAuto(int a4)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)0x8C2871D4;
    t1 = *(int *)((t0 + 0x44));
    if (t1 != 0) {
        u2 = *(float *)((t0 + 0x4));
        if (u2 == 0.0f) {
            return motionRotate(a4);
        }
        return motionRotate2(a4);
    }
    return motionRotate(a4);
}

int motFileInit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C2873CC + t0)) = 0x0;
        *(unsigned int *)((0x8C287598 + t0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x28);
    t1 = 0x8C2873F8;
    do {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x28);
    } while ((unsigned int)t1 < (unsigned int)0x8C287588);
    *(unsigned int *)0x8C287594 = 0x0;
    *(unsigned int *)0x8C28758C = 0x0;
    return t1;
}

void motFileLoadBegin(void)
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
    int stk[13];

    t0 = *(int *)0x8C287594;
    if (t0 != 0) {
        t1 = *(int *)0x8C28758C;
        if (t1 == 0) {
            *(unsigned int *)0x8C287588 = 0xCC00000;
            t2 = 0x0;
            do {
                t3 = t2;
                t2 = (t2 + 0x4);
                *(unsigned int *)((0x8C287598 + t3)) = 0x0;
                *(unsigned int *)(((((int)stk + 4) + 0x4) + t3)) = 0x0;
            } while ((unsigned int)t2 < (unsigned int)0x28);
            *(unsigned int *)(((int)stk + 4)) = 0x8C2873F8;
            t4 = t3;
            t5 = 0x8C2873F8;
            t6 = 0x8C2873F8;
            do {
                t7 = *(int *)((t5 + 0x0));
                if (t7 != 0) {
                    t8 = *(int *)((t6 + 0x0));
                    t4 = t8;
                    t4 = (t4 << 2);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + t4)) = 0x1;
                }
                t5 = (t5 + 0x28);
                t6 = (t6 + 0x28);
            } while ((unsigned int)t5 < (unsigned int)0x8C287588);
            t9 = (((int)stk + 4) + 0x4);
            t10 = 0x8C2873CC;
            do {
                t11 = *(int *)((t9 + 0x0));
                if (t11 == 0) {
                    *(unsigned int *)((t10 + 0x0)) = 0x0;
                }
                t9 = (t9 + 0x4);
                t10 = (t10 + 0x4);
            } while ((unsigned int)t9 < (unsigned int)((((int)stk + 4) + 0x4) + 0x28));
            *(unsigned int *)0x8C28758C = 0x1;
            *(unsigned int *)0x8C287590 = 0x0;
            *(unsigned int *)0x8C287594 = 0x0;
        }
    }
}

void vecAdd(int a4, int a5, int a6, int a7, int a8, Stk3 a, Stk3 b)
{
    nlAddVector((int)&a, (int)&b);
    *(unsigned int *)((a8 + 0x8)) = a.w[2];
    *(unsigned int *)((a8 + 0x4)) = a.w[1];
    *(unsigned int *)((a8 + 0x0)) = a.w[0];
}


void vecScale(int a4, int a5, int a6, int a7, int a8, Stk3 v, float f4)
{
    nlScaleVector((int)&v, (int)&v, f4);
    *(unsigned int *)((a8 + 0x8)) = v.w[2];
    *(unsigned int *)((a8 + 0x4)) = v.w[1];
    *(unsigned int *)((a8 + 0x0)) = v.w[0];
}

void vecCross(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int stk[2];

    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void camProject(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int stk[1];
    float R1012;

    R1012 = *(float *)((int)stk + 12);

    u0 = (*(float *)((int)stk + 4));
    u1 = *(float *)0x8C287A10;
    u2 = R1012;
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    *(float *)((a4 + 0x0)) = ((u0 * u1) / u3);
    u4 = (*(float *)((int)stk + 8));
    u5 = *(float *)0x8C287A10;
    u6 = R1012;
    u7 = (-u6);
    if (!(0.0f > u6)) {
        u7 = u6;
    }
    *(float *)((a5 + 0x0)) = ((u4 * u5) / u7);
}

void camViewToWorld(int a4, int a5, int a6, int a7, int a8, Stk3 s)
{
    int t4;
    int t5;
    int t6;
    int stk[2];

    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlCalcPoint(((int)&s.w[0]), ((int)&s.w[0]));
    nlPopMatrix(0x1);
    t4 = s.w[2];
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = s.w[1];
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = s.w[0];
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void vecStepToward(int a4, int a5, int a6, int a7, int a8, Stk3 p, Stk3 q, float f4)
{
    if (vecDist(p, q) != 0.0f) {
        nlSubVector((int)&q, (int)&p);
        nlScaleUnitVector((int)&q, (int)&q, f4);
        nlAddVector((int)&p, (int)&q);
    }
    *(Stk3 *)a8 = p;
}

void camSetEye(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[2];

    t0 = *(int *)0x8C287640;
    if (t0 == 0) {
        t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)0x8C287604 = t1;
        t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)0x8C287600 = t2;
        t3 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)0x8C2875FC = t3;
    }
}

int camSetTarget(void)
{
    int t0;
    int t4;
    int t1;
    int t2;
    int t3;
    int stk[2];

    t0 = *(int *)0x8C287640;
    t4 = 0x80;
    if (t0 == 0) {
        t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)0x8C2875F8 = t1;
        t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)0x8C2875F4 = t2;
        t3 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)0x8C2875F0 = t3;
        *(unsigned int *)0x8C287634 = 0x1;
        t4 = 0x74;
    }
    return t4;
}

void camSetOffset(void)
{
    int t0;
    int t1;
    int t2;
    int stk[2];

    t0 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
    *(unsigned int *)0x8C287610 = t0;
    t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
    *(unsigned int *)0x8C28760C = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    *(unsigned int *)0x8C287608 = t2;
}


int camMoveBeginAtGoal(float f4, float f5)
{
    int t0;
    int t34;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u31;
    float u32;
    float u33;
    int stk[17];
    float R1052;
    float R1056;

    R1052 = *(float *)((int)stk + 52);
    R1056 = *(float *)((int)stk + 56);

    R1056 = f4;
    R1052 = f5;
    t0 = *(int *)0x8C287640;
    t34 = 0x80;
    if (t0 == 0) {
        t1 = *(int *)0x8C287634;
        if (t1 != 0) {
            t2 = *(int *)0x8C2875D4;
            (*(int *)((int)stk + 48)) = t2;
            t3 = *(int *)0x8C2875D0;
            (*(int *)((int)stk + 44)) = t3;
            t4 = *(int *)0x8C2875CC;
            (*(int *)((int)stk + 40)) = t4;
            t5 = *(int *)0x8C2875C8;
            (*(int *)((int)stk + 36)) = t5;
            t6 = *(int *)0x8C2875C4;
            (*(int *)((int)stk + 32)) = t6;
            t7 = *(int *)0x8C2875C0;
            (*(int *)((int)stk + 28)) = t7;
            vecAnglesTo(0x8C287648, 0x8C28764A, *(Stk6 *)(((int)stk + 28)));
            t9 = *(int *)0x8C2875D4;
            (*(int *)((int)stk + 24)) = t9;
            t10 = *(int *)0x8C2875D0;
            (*(int *)((int)stk + 20)) = t10;
            t11 = *(int *)0x8C2875CC;
            (*(int *)((int)stk + 16)) = t11;
            t12 = *(int *)0x8C2875C8;
            (*(int *)((int)stk + 12)) = t12;
            t13 = *(int *)0x8C2875C4;
            (*(int *)((int)stk + 8)) = t13;
            t14 = *(int *)0x8C2875C0;
            (*(int *)((int)stk + 4)) = t14;
            t15 = vecDist(*(Stk3 *)0x8C2875C0, *(Stk3 *)0x8C2875CC);
            *(float *)0x8C287628 = t15;
        }
        t17 = *(int *)0x8C2875F8;
        *(unsigned int *)0x8C2875C8 = t17;
        t18 = *(int *)0x8C2875F4;
        *(unsigned int *)0x8C2875C4 = t18;
        t19 = *(int *)0x8C2875F0;
        *(unsigned int *)0x8C2875C0 = t19;
        t20 = *(int *)0x8C2875F8;
        *(unsigned int *)0x8C2875E0 = t20;
        t21 = *(int *)0x8C2875F4;
        *(unsigned int *)0x8C2875DC = t21;
        t22 = *(int *)0x8C2875F0;
        *(unsigned int *)0x8C2875D8 = t22;
        t23 = *(int *)0x8C287604;
        *(unsigned int *)0x8C2875D4 = t23;
        t24 = *(int *)0x8C287600;
        *(unsigned int *)0x8C2875D0 = t24;
        t25 = *(int *)0x8C2875FC;
        *(unsigned int *)0x8C2875CC = t25;
        t26 = *(int *)0x8C287604;
        *(unsigned int *)0x8C2875EC = t26;
        t27 = *(int *)0x8C287600;
        *(unsigned int *)0x8C2875E8 = t27;
        t28 = *(int *)0x8C2875FC;
        *(unsigned int *)0x8C2875E4 = t28;
        t29 = *(short *)0x8C287648;
        *(unsigned short *)0x8C287644 = t29;
        t30 = *(short *)0x8C28764A;
        *(unsigned short *)0x8C287646 = t30;
        u31 = *(float *)0x8C287628;
        *(float *)0x8C287624 = u31;
        u32 = R1056;
        *(float *)0x8C287614 = u32;
        u33 = R1052;
        *(float *)0x8C287618 = u33;
        *(unsigned int *)0x8C28763C = 0x0;
        *(unsigned int *)0x8C287638 = 0x0;
        *(float *)0x8C287620 = 0.0f;
        *(float *)0x8C28761C = 0.0f;
        t34 = 0x5C;
    }
    return t34;
}

int msgEventStart(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = set_event(0x54, 0x8C0170AE);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = a5;
    *(unsigned int *)((t0 + 0x1C)) = a7;
    t1 = (t0 + 0x34);
    t2 = a6;
    do {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
    } while ((unsigned int)t1 < (unsigned int)(t0 + 0x54));
    *(unsigned int *)((t0 + 0x20)) = 0x1;
    *(unsigned int *)((t0 + 0x28)) = 0xFFFFFFFF;
    *(unsigned int *)((t0 + 0x2C)) = 0x8;
    *(unsigned int *)((t0 + 0x30)) = 0x0;
    return t0;
}

int lightSetTarget(int a4, int a5, int a6, int a7, int a8)
{
    int t1;

    if ((unsigned short)a4 != 0xFFFF) {
        *(unsigned int *)0x8C38B82C = (unsigned short)a4;
    }
    if ((unsigned short)a5 != 0xFFFF) {
        *(unsigned int *)0x8C38B830 = (unsigned short)a5;
    }
    if (a6 != -1) {
        *(float *)0x8C38B844 = (float)a6;
    }
    t1 = a7;
    if (a7 != -1) {
        *(float *)0x8C38B800 = (float)a7;
        t1 = 0x4;
    }
    *(unsigned int *)0x8C287A40 = a8;
    return t1;
}


void dbgLineStart(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    int t0;

    t0 = set_event(0x30, 0x8C017A7C);
    *(float *)((t0 + 0x14)) = f4;
    *(float *)((t0 + 0x18)) = f5;
    *(float *)((t0 + 0x1C)) = f6;
    *(float *)((t0 + 0x20)) = f7;
    *(unsigned int *)((t0 + 0x2C)) = a5;
    *(unsigned int *)((t0 + 0x28)) = a4;
    *(float *)((t0 + 0x24)) = f8;
}


int dbgMenuPageTennis(int a4)
{
    int t9;

    *(unsigned int *)0x8C287C4C = a4;
    dbgMenuSetTitle(a4, 0x8C1022D0, 0x9);
    dbgMenuSetItem(a4, 0x0, 0x8C1022DC, 0x0, 0x0, 0x1, 0x1);
    dbgMenuSetItem(a4, 0x1, 0x8C1022E4, 0xFFFFFFFF, 0xFFFFFFFF, 0xB, 0x1);
    dbgMenuSetItem(a4, 0x2, 0x8C1022EC, 0x0, 0x0, 0x3C, 0x1);
    dbgMenuSetItem(a4, 0x3, 0x8C1022F4, 0x0, 0x0, 0x3, 0x1);
    dbgMenuSetItem(a4, 0x4, 0x8C1022FC, 0x0, 0x0, 0x1, 0x0);
    dbgMenuSetItem(a4, 0x5, 0x8C102304, 0x0, 0x0, 0x64, 0x1);
    dbgMenuSetItem(a4, 0x6, 0x8C10230C, 0x0, 0x0, 0x3E8, 0x1);
    dbgMenuSetItem(a4, 0x7, 0x8C102314, 0x1, 0x0, 0x1, 0x1);
    t9 = dbgMenuSetItem(a4, 0x8, 0x8C10231C, 0x0, 0x0, 0x1, 0x1);
    return t9;
}


void serveNextGame(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0x8C287B30;
    t1 = *(int *)0x8C287B34;
    *(unsigned int *)0x8C287B38 = (t1 + t0);
    t2 = *(int *)0x8C287D78;
    t3 = *(int *)((t2 + ((t1 + t0) << 2)));
    if (t3 == -1) {
        *(unsigned int *)0x8C287B38 = 0x0;
    }
    t6 = *(int *)0x8C287B38;
    t7 = *(int *)0x8C287D78;
    t8 = *(int *)(((t6 << 2) + t7));
    *(unsigned int *)0x8C287B30 = t8;
    t9 = *(int *)0x8C287B38;
    *(unsigned int *)0x8C287B38 = (t9 + 0x1);
    *(unsigned int *)0x8C287B34 = (t9 + 0x1);
}

void serveGetPos(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)((((a4 << 2) + ((((((t2 << 1) + t2) << 2) << 1) + t3) + 0x8)) + 0x0));
    t5 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t5;
    t6 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t6;
    t7 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t7;
}

int serveGetServer(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)((t3 + ((((t2 << 1) + t2) << 2) << 1)));
    return t4;
}

int serveGetReceiver(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)(((((((t2 << 1) + t2) << 2) << 1) + t3) + 0x4));
    return t4;
}

int fadeCaptureBegin(void)
{
    int t0;

    t0 = *(int *)0x8C1389FC;
    if (t0 != 1) {
        *(unsigned int *)0x8C1389FC = 0x1;
        return nlRenderTextureBegin(0x0);
    }
    return t0;
}

float courtLimitZ(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1891E8;
    t1 = *(int *)((((t0 << 2) << 1) + 0x8C1D11BC));
    return (float)(t1 - 10);
}

void courtColliEntry(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C287B44;
        if (t1 != 10) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)0x8C1891E8;
                t5 = *(int *)((((t4 * 0x124) + 0x8C106314) + 0x20));
                if ((int)t3 >= (int)t5) break;
                colliObjEntry(((t3 * 0x78) + 0x8C29562C));
                t3 = (t3 + 0x1);
            }
        }
    }
}

int charaNodeIdInit(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x8C102424;
    do {
        t1 = *(int *)((t0 + 0x0));
        t2 = 0x0;
        do {
            t3 = *(int *)((((t2 << 2) + t1) + 0x0));
            if (t3 != 0) {
                t4 = *(int *)((((t2 << 2) + t1) + 0x0));
                *(unsigned int *)((t4 + 0x0)) = t2;
            }
            t2 = (t2 + 0x1);
        } while ((int)t2 < (int)0x21);
        t0 = (t0 + 0x6C);
    } while ((unsigned int)t0 < (unsigned int)0x8C102BBC);
    return t1;
}

void playerRecA20Clear(int a4)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0xFFFFFFFF;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    t0 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t0;
    t1 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t1;
    t2 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t2;
}

void cameraCalcPoint(int a4, int a5, int a6, int a7, int a8, Stk3 s)
{
    int t1;
    float u3;
    float u4;
    float u5;
    int t9;
    int t10;
    int t11;
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 4));
    nlLoadMatrix(t1);
    u3 = *(float *)(&s.w[2]);
    u4 = *(float *)(&s.w[1]);
    u5 = *(float *)(&s.w[0]);
    nlTranslate(u5, u4, u3);
    mtxGetPos(((int)&s.w[0]), ((int)&s.w[1]), ((int)&s.w[2]));
    nlPopMatrix(0x1);
    t9 = s.w[2];
    *(unsigned int *)((a8 + 0x8)) = t9;
    t10 = s.w[1];
    *(unsigned int *)((a8 + 0x4)) = t10;
    t11 = s.w[0];
    *(unsigned int *)((a8 + 0x0)) = t11;
}

void cameraCalcPointInv(int a4, int a5, int a6, int a7, int a8, Stk3 s)
{
    int t1;
    int t6;
    int t7;
    int t8;
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 4));
    nlLoadMatrix(t1);
    nlQuickInvertMatrix();
    nlCalcPoint(((int)&s.w[0]), ((int)&s.w[0]));
    nlPopMatrix(0x1);
    t6 = s.w[2];
    *(unsigned int *)((a8 + 0x8)) = t6;
    t7 = s.w[1];
    *(unsigned int *)((a8 + 0x4)) = t7;
    t8 = s.w[0];
    *(unsigned int *)((a8 + 0x0)) = t8;
}

int padExec(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;

    padVibExec();
    t1 = *(int *)0x8C1D175C;
    if (t1 == -1) {
        t2 = *(int *)0x8C29BBC0;
        if (t2 == 0) {
            t3 = *(int *)0x8C20D198;
            t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0x1);
            }
            if (t4 != 0) {
                padLcdUpdate();
            }
        } else {
            padLcdUpdate();
        }
        t9 = *(int *)0x8C20D198;
        t10 = (int)((int)t9 % (int)0x3C);
        if (t10 == 0) {
            padVmsBeep(0x0, 0x0);
        }
    }
    return padRepeatExec();
}

void padLcdModeClear(void)
{
    int t0;

    t0 = 0x8C29B8A8;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C29B8B8);
}

int padLcdSetMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t4;
    int t5;
    int t6;

    if (a4 != 11) {
        if (a4 == 12) {
            return padLcdMessage(a4);
        }
        t0 = 0x2;
        t1 = 0x8C294658;
        t2 = 0x8C29B8A8;
        do {
            t3 = a4;
            if (a4 == 2) {
                t3 = t0;
            }
            t7 = a4;
            t8 = t3;
            if (a4 == 19) {
                t4 = *(int *)0x8C287AF0;
                t5 = *(int *)((t1 + 0x0));
                t6 = t3;
                if ((t4 & 0x1) != (t5 & 0x1)) {
                    t6 = 0x9;
                }
                t7 = (t5 & 0x1);
                t8 = t6;
            }
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t8;
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
        } while ((int)t0 < (int)0x6);
        return t7;
    }
    return padLcdMessage(a4);
}

void padLcdClear(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = ((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8);
    t1 = 0x0;
    do {
        t2 = t0;
        t3 = 0x0;
        do {
            t3 = (t3 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x1);
        } while ((int)t3 < (int)0x6);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x6);
    } while ((int)t1 < (int)0x20);
}

int padLcdUpdate(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        padLcdDraw(t0);
        t2 = *(int *)((0x8C159AF0 + (t0 << 2)));
        t3 = pdVmsLcdWrite1(t2, ((((((t0 << 1) + t0) << 2) << 2) << 2) + 0x8C29B8B8));
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
    return t3;
}


void padLcdBlit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C29B8B8;
    t1 = 0x0;
    do {
        t2 = (t1 << 2);
        t3 = 0x0;
        do {
            if ((int)(a6 + t3) >= 0) {
                t2 = 0x6;
                if ((int)(a6 + t3) < (int)t2) {
                    t2 = ((((((a5 << 1) + a5) << 2) << 2) << 2) + 0x8C158BF0);
                    t2 = (t2 + ((t1 << 1) + (t1 << 2)));
                    t2 = (t2 + (a6 + t3));
                    t4 = *(signed char *)((t2 + 0x0));
                    t2 = t4;
                    t5 = *(signed char *)((t3 + (((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + ((t1 << 1) + (t1 << 2)))));
                    t0 = t5;
                    t0 = (t0 | t2);
                    *(unsigned char *)((t3 + (((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + ((t1 << 1) + (t1 << 2))))) = t0;
                }
            }
            t3 = (t3 + 0x1);
        } while ((int)t3 < (int)0x6);
        t1 = (t1 + 0x1);
    } while ((int)t1 < (int)0x20);
}

void padRepeatInit(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0x8C29B894 = 0x14;
    *(unsigned int *)0x8C29B890 = 0x8;
    t0 = 0x8C29B850;
    do {
        t1 = t0;
        t2 = 0x0;
        do {
            t2 = (t2 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = 0x64;
            t1 = (t1 + 0x4);
        } while ((int)t2 < (int)0x4);
        t0 = (t0 + 0x10);
    } while ((unsigned int)t0 < (unsigned int)0x8C29B890);
}

int padRepeatExec(void)
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

    t0 = 0x0;
    do {
        t1 = (((t0 << 2) << 2) + 0x8C29B850);
        t2 = 0x0;
        t3 = (((t0 << 2) << 2) + 0x8C29B850);
        t4 = (((t0 << 2) << 2) + 0x8C29B850);
        do {
            t5 = *(int *)(((t2 << 2) + 0x8C159B00));
            t6 = padDirOn(t0, t5);
            if (t6 == 0) {
                *(unsigned int *)((t1 + 0x0)) = 0x64;
            }
            t7 = *(int *)((t4 + 0x0));
            t2 = (t2 + 0x1);
            if ((int)t7 < (int)0x64) {
                t8 = *(int *)((t3 + 0x0));
                *(unsigned int *)((t3 + 0x0)) = (t8 - 1);
            }
            t4 = (t4 + 0x4);
            t3 = (t3 + 0x4);
            t1 = (t1 + 0x4);
        } while ((int)t2 < (int)0x4);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
    return t6;
}

int padDirRepeat(int a4, int a5)
{
    int t3;
    int t2;
    int t1;
    int t0;
    int t28;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t13;
    int t16;
    int t19;
    int t22;
    int t20;
    int t27;
    int t24;
    int t18;

    t3 = 0x0;
    if (a5 != 16) {
        t2 = 0x1;
        if (a5 != 32) {
            t1 = 0x2;
            if (a5 != 64) {
                t0 = 0x3;
                if (a5 != 0x80) {
                    t0 = 0xFFFFFFFF;
                }
                t1 = t0;
            }
            t2 = t1;
        }
        t3 = t2;
    }
    t28 = 0x0;
    if (t3 != -1) {
        t4 = *(int *)(((((a4 << 2) << 2) + 0x8C29B850) + (t3 << 2)));
        if (t4 == 100) {
            t5 = padDirOn(a4, a5);
            if (t5 != 0) {
                t6 = *(int *)0x8C29B894;
                *(unsigned int *)((((t3 << 2) + (0x8C29B850 + ((a4 << 2) << 2))) + 0x0)) = t6;
            }
            t27 = t5;
        } else {
            t9 = *(int *)((((((a4 << 2) << 2) + 0x8C29B850) + (t3 << 2)) + 0x0));
            if ((int)t9 < 0) {
                t10 = *(int *)0x8C29B890;
                t11 = (int)((int)t9 % (int)t10);
                if (t11 != 0) {
                    t12 = *(int *)0x8C29B894;
                    t15 = 0x0;
                    if (t9 == t12) {
                        t13 = padDirOn(a4, a5);
                        t15 = t13;
                    }
                    t18 = t15;
                } else {
                    t16 = padDirOn(a4, a5);
                    t18 = t16;
                }
                t24 = t18;
            } else {
                t19 = *(int *)0x8C29B894;
                t22 = 0x0;
                if (t9 == t19) {
                    t20 = padDirOn(a4, a5);
                    t22 = t20;
                }
                t24 = t22;
            }
            t27 = t24;
        }
        t28 = t27;
    }
    return t28;
}

void circuitTaskAdd(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C2FBE0C;
    if ((int)t0 < (int)0x9) {
        t1 = *(int *)0x8C2FBE0C;
        *(unsigned int *)0x8C2FBE0C = (t1 + 0x1);
        t2 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t2 << 1) + t2) << 2) << 1) + 0x8C2FBD1C) + 0x0)) = a4;
        t3 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t3 << 1) + t3) << 2) << 1) + 0x8C2FBD1C) + 0x4)) = a5;
        t4 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t4 << 1) + t4) << 2) << 1) + 0x8C2FBD1C) + 0x8)) = a6;
        t5 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t5 << 1) + t5) << 2) << 1) + 0x8C2FBD1C) + 0xC)) = 0x0;
        t6 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t6 << 1) + t6) << 2) << 1) + 0x8C2FBD1C) + 0x10)) = 0xFFFFFFFF;
        t7 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t7 << 1) + t7) << 2) << 1) + 0x8C2FBD1C) + 0x14)) = 0x0;
        *(unsigned int *)0x8C2FBE10 = 0x1;
    }
}

void circuitStatsReset(void)
{
    int t0;
    int t1;

    *(unsigned int *)0x8C2FBCA8 = 0x0;
    *(unsigned int *)0x8C2FBCAC = 0x0;
    *(unsigned int *)0x8C2FBCB0 = 0x0;
    *(unsigned int *)0x8C2FBCB4 = 0x0;
    *(unsigned int *)0x8C2FBCB8 = 0x0;
    *(unsigned int *)0x8C2FBCBC = 0x0;
    *(unsigned int *)0x8C2FBCC0 = 0x0;
    *(unsigned int *)0x8C2FBCC4 = 0x0;
    *(unsigned int *)0x8C2FBCC8 = 0x0;
    *(unsigned int *)0x8C2FBCCC = 0x0;
    *(unsigned int *)0x8C2FBCD0 = 0x0;
    *(unsigned int *)0x8C2FBCD4 = 0x0;
    *(unsigned int *)0x8C2FBCD8 = 0x0;
    t0 = *(int *)0x8C2FBE20;
    t1 = *(int *)((((((t0 << 2) << 2) + t0) << 2) + 0x8C108E84));
    *(unsigned int *)0x8C2FBD00 = t1;
    *(unsigned int *)0x8C2FBD18 = 0x0;
}


/* port: the function at 0x8C0368C2 (functions.txt counts it in miniStart, which falls into it): a state of its own in
   the game's table (0x8C108260..), reached without the set-up before it */


int miniReset(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    *(unsigned int *)0x8C2FBEF0 = 0x8C2FBEA8;
    *(unsigned int *)0x8C2FBEA8 = 0x0;
    t0 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    t1 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t1 + 0xC)) = 0x0;
    t2 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t2 + 0x10)) = 0x0;
    t3 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t3 + 0x18)) = 0x0;
    t4 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t4 + 0x1C)) = 0x0;
    t5 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t5 + 0x20)) = 0x0;
    t6 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t6 + 0x3C)) = 0x0;
    *(unsigned int *)0x8C2FC0C8 = 0x0;
    *(unsigned int *)0x8C2FBFD4 = 0x0;
    *(unsigned int *)0x8C2FBFD8 = 0x0;
    *(unsigned int *)0x8C2FC0CC = 0x0;
    *(unsigned int *)0x8C2FC0D0 = 0x0;
    *(unsigned int *)0x8C2FBFDC = 0x0;
    miniSetModel(0x0, 0x0);
    t8 = zoneListClear();
    *(unsigned int *)0x8C185408 = 0x1;
    return t8;
}

void ballColliSync(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)0x8C2FC018;
    if ((t0 & 1) != 0) {
        nlAddVector3op(0x8C291F3C, 0x8C291F30, 0x8C2FBFF8);
        nlAddVector3op(0x8C291F48, 0x8C291F58, 0x8C2FC030);
        t3 = *(int *)0x8C291F44;
        *(unsigned int *)0x8C291F38 = t3;
        t4 = *(int *)0x8C291F40;
        *(unsigned int *)0x8C291F34 = t4;
        t5 = *(int *)0x8C291F3C;
        *(unsigned int *)0x8C291F30 = t5;
        t6 = *(int *)0x8C291F50;
        *(unsigned int *)0x8C291F60 = t6;
        t7 = *(int *)0x8C291F4C;
        *(unsigned int *)0x8C291F5C = t7;
        t8 = *(int *)0x8C291F48;
        *(unsigned int *)0x8C291F58 = t8;
        *(float *)0x8C291F54 = 0.0f;
    }
    t10 = *(int *)0x8C287AF8;
    if (t10 == 0) {
        colliObjEntry(0x8C2FBFE0);
        t12 = *(int *)0x8C291F38;
        *(unsigned int *)0x8C2FBFE8 = t12;
        t13 = *(int *)0x8C291F34;
        *(unsigned int *)0x8C2FBFE4 = t13;
        t14 = *(int *)0x8C291F30;
        *(unsigned int *)0x8C2FBFE0 = t14;
        t15 = *(int *)0x8C291F38;
        *(unsigned int *)0x8C2FBFF4 = t15;
        t16 = *(int *)0x8C291F34;
        *(unsigned int *)0x8C2FBFF0 = t16;
        t17 = *(int *)0x8C291F30;
        *(unsigned int *)0x8C2FBFEC = t17;
        t18 = *(int *)0x8C291F60;
        *(unsigned int *)0x8C2FC02C = t18;
        t19 = *(int *)0x8C291F5C;
        *(unsigned int *)0x8C2FC028 = t19;
        t20 = *(int *)0x8C291F58;
        *(unsigned int *)0x8C2FC024 = t20;
    }
}


int miniClearTables(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C2FBEF4 + t0)) = 0x0;
        *(float *)((0x8C2FBF14 + t0)) = 0.0f;
        *(float *)((0x8C2FBF34 + t0)) = 0.0f;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x20);
    return t0;
}

int miniBowlingScore(void)
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
    int t15;
    int t16;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t41;
    int t42;
    int t43;
    int t45;
    int t46;
    int t47;

    t0 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t0 + 0xC)) = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    do {
        t3 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x0));
        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t3;
        if ((int)t2 < (int)0x7) {
            if ((0x1 & t2) == 0) {
                t4 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x0));
                if (t4 == 10) {
                    t5 = *(int *)((0x8C2FC160 + (t2 << 2)));
                    t1 = t5;
                    t6 = *(int *)(((((t2 << 2) + 0x8C2FC134) + 0x8) + 0x0));
                    t1 = (t1 + t6);
                    *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    t7 = *(int *)(((((t2 << 2) + 0x8C2FC134) + 0x8) + 0x0));
                    if (t7 == 10) {
                        if ((int)t2 < (int)0x7) {
                            if ((int)t2 < (int)0x5) {
                                t8 = *(int *)((0x8C2FC160 + (t2 << 2)));
                                t1 = t8;
                                t9 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x10));
                                t1 = (t1 + t9);
                            } else {
                                t10 = *(int *)((0x8C2FC160 + (t2 << 2)));
                                t1 = t10;
                                t11 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0xC));
                                t1 = (t1 + t11);
                            }
                            *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                        }
                    } else {
                        t15 = *(int *)((0x8C2FC160 + (t2 << 2)));
                        t1 = t15;
                        t16 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0xC));
                        t1 = (t1 + t16);
                        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    }
                }
            }
        }
        if ((int)t2 < (int)0x8) {
            if ((0x1 & t2) != 0) {
                t28 = *(int *)(((t2 << 2) + 0x8C2FC134));
                t1 = t28;
                t29 = *(int *)((((t2 - 1) << 2) + 0x8C2FC134));
                if ((t29 + t1) == 10) {
                    t30 = *(int *)(((t2 << 2) + 0x8C2FC134));
                    if (t30 != 0) {
                        t31 = *(int *)((0x8C2FC160 + (t2 << 2)));
                        t1 = t31;
                        t32 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x4));
                        t1 = (t1 + t32);
                        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    }
                }
            }
        }
        t41 = *(int *)0x8C2FBEF0;
        t42 = *(int *)((0x8C2FC160 + (t2 << 2)));
        t1 = t42;
        t43 = (t2 << 2);
        t2 = (t2 + 0x1);
        t45 = *(int *)((t41 + 0xC));
        *(unsigned int *)((t41 + 0xC)) = (t45 + t1);
    } while ((int)t2 < (int)0xB);
    t46 = *(int *)0x8C2FBEF0;
    t47 = *(int *)((t46 + 0xC));
    *(unsigned int *)((t46 + 0x38)) = (((t47 << 2) + t47) << 2);
    return t43;
}

int miniMessageSpawn(int a4)
{
    int t0;
    int t2;
    int t1;

    t0 = set_event(0x1C, 0x8C03B502);
    t2 = a4;
    if (a4 == 11) {
        t1 = nlsndSeqRequest(0x1702A9);
        t2 = t1;
    }
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = 0x78;
    return t2;
}


int colliObjEntry(int a4)
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
    int t15;
    int t14;

    t0 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t0;
    t1 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x18) + 0x4)) = t1;
    t2 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = t2;
    t3 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x50) + 0x8)) = t3;
    t4 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x50) + 0x4)) = t4;
    t5 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x50) + 0x0)) = t5;
    t6 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x60) + 0x8)) = t6;
    t7 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x60) + 0x4)) = t7;
    t8 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x60) + 0x0)) = t8;
    t9 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x6C) + 0x8)) = t9;
    t10 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x6C) + 0x4)) = t10;
    t11 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x6C) + 0x0)) = t11;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(float *)((a4 + 0x40)) = 1.0f;
    t12 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t12 & 0xFFFFFFFE);
    t13 = *(int *)0x8C2FC20C;
    t15 = t13;
    if (t13 != 64) {
        *(unsigned int *)(((t13 << 2) + 0x8C2FC210)) = a4;
        t14 = *(int *)0x8C2FC20C;
        *(unsigned int *)0x8C2FC20C = (t14 + 0x1);
        t15 = 0x8C2FC210;
    }
    return t15;
}

int cpuInit(void)
{
    int t0;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        return cpuSglInit();
    }
    return cpuDblInit();
}


int cpuSglThinkAll(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t4;
    int t5;
    int t7;
    int t6;

    t0 = 0x8C2FC69C;
    t1 = 0x1;
    t2 = 0x8C287D84;
    do {
        t3 = *(signed char *)((t0 + 0x128));
        t8 = 0x128;
        if (t3 == 0) {
            t4 = *(int *)((t2 + 0xB5C));
            t5 = *(int *)((((t4 << 2) + 0x8C287AE0) + 0x0));
            t7 = 0xB5C;
            if (t5 != 0) {
                t6 = cpuSglThink(t2);
                t7 = t6;
            }
            t8 = t7;
        }
        t1 = (t1 - 1);
        t2 = (t2 + 0xD78);
        t0 = (t0 + 0x160);
    } while ((int)t1 >= 0);
    return t8;
}

int cpuSglSwingInput(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t19;
    int t35;
    int t20;
    int t21;
    int t22;
    int t28;
    int t23;
    int t24;
    int t25;
    int t27;
    int t26;
    int t31;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xB60));
    if ((t1 & 0x400) == 0) {
        t2 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC));
        if (t2 == 0) {
            t3 = *(int *)((a4 + 0xC5C));
            if ((int)t3 >= (int)0x9) {
                t4 = *(int *)((a4 + 0xC5C));
                if ((int)t4 <= (int)0xC) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC)) = 0x1;
                }
            }
        }
    }
    t19 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC));
    t35 = (unsigned char)t19;
    if ((unsigned char)t19 == 1) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        t20 = *(int *)((a4 + 0xB60));
        if ((t20 & 0x100) == 0) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC)) = 0x2;
            t31 = 0xAC;
        } else {
            t21 = *(int *)0x8C2FCC1C;
            t22 = *(int *)((((t21 << 2) + 0x8C159EEC) + 0x0));
            t28 = 0xB60;
            if (t22 != 0) {
                t23 = *(int *)0x8C20D19C;
                t24 = *(int *)((((t21 << 2) + 0x8C159EEC) + 0x0));
                t25 = (int)((int)t23 % (int)t24);
                t27 = t25;
                if (t25 == 0) {
                    t26 = ((~(((~t23) + 0x1) & 0x1)) + 0x1);
                    if ((int)t23 >= 0) {
                        t26 = (t23 & 0x1);
                    }
                    *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = ((((t26 << 2) << 2) << 2) + 0x40);
                    t27 = ((((t26 << 2) << 2) << 2) + 0x40);
                }
                t28 = t27;
            }
            t31 = t28;
        }
        t35 = t31;
    }
    return t35;
}


int ndbLoadStart(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C185410;
    if (t0 != 0) {
        *(unsigned int *)0x8C301958 = 0xFFFFFFFF;
        *(unsigned int *)0x8C181750 = 0x1;
        *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
        return 0x8C181750;
    }
    t1 = set_event(0x18, 0x8C0827B2);
    *(unsigned int *)0x8C301958 = 0x3;
    *(unsigned int *)((t1 + 0x14)) = 0x0;
    *(unsigned int *)0x8C181750 = 0x1;
    return ndbClear();
}

int ndbLoadWaitStart(void)
{
    int t0;

    t0 = set_event(0x18, 0x8C0828F8);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    *(unsigned int *)0x8C301970 = 0x1;
    return t0;
}


int effEventTestStart(void)
{
    int t0;

    t0 = set_event(0x298, 0x8C0835D2);
    *(unsigned int *)((t0 + 0x14)) = 0x1;
    return t0;
}

int umpCallGamePointWait(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallGamePoint();
        return nlCloseEvent2(a4);
    }
    return 0;
}

void umpCallGamePointDelayed(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = set_event2(0x20, 0x8C083CB0);
        *(unsigned int *)((t1 + 0x1C)) = a4;
    }
}

void umpCallMatchPointDelayed(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = set_event2(0x20, 0x8C083D9C);
        *(unsigned int *)((t1 + 0x1C)) = a4;
    }
}

void umpCallDeuceDelayed(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = set_event2(0x20, 0x8C083F24);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned int *)((t1 + 0x14)) = a5;
    }
}

void umpCallGameDelayed(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = set_event2(0x20, 0x8C083FF2);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned int *)((t1 + 0x14)) = a5;
    }
}

int umpCallGameNameDelayed(int a4, int a5)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084102);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int umpCallAdvNameDelayed(int a4, int a5)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084214);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int umpCallSpareADelayed(int a4, int a5)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084302);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int umpCallSpareBDelayed(int a4, int a5)
{
    int t0;

    t0 = set_event2(0x20, 0x8C0843E8);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int umpCallAdvantageWait(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallAdvantage();
        return nlCloseEvent2(a4);
    }
    return 0;
}

int umpCallAdvantageDelayed(int a4)
{
    int t0;

    t0 = set_event2(0x20, 0x8C0844A4);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}

int umpCallScoreDelayed(int a4, int a5, int a6)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084612);
    *(unsigned int *)((t0 + 0x1C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = a5;
    return t0;
}

int umpCallScoreBDelayed(int a4, int a5, int a6)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084764);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    *(unsigned int *)((t0 + 0x14)) = a5;
    *(unsigned int *)((t0 + 0x18)) = a6;
    return t0;
}

int umpCallFirstServeWait(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallFirstServe();
        return nlCloseEvent2(a4);
    }
    return 0;
}

int umpCallFirstServeDelayed(int a4)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084856);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}

int umpCallSecondServeDelayed(int a4)
{
    int t0;

    t0 = set_event2(0x20, 0x8C084934);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}


int umpBusyStart(void)
{
    int t0;

    t0 = set_event2(0x18, 0x8C0849B6);
    *(unsigned int *)((t0 + 0x14)) = 0x82;
    *(unsigned int *)0x8C33441C = 0x1;
    return t0;
}

int fadeOverlayStart(void)
{
    int t0;

    t0 = set_event2(0x18, 0x8C084A64);
    *(unsigned int *)0x8C1850A0 = 0x1;
    *(float *)0x8C1850A4 = 0.0f;
    *(unsigned int *)((t0 + 0x14)) = 0x96;
    return t0;
}

int fadeBlinkStart(int a4)
{
    int t0;

    t0 = set_event2(0x1C, 0x8C084AEC);
    *(unsigned int *)((t0 + 0x14)) = 0x1E;
    *(unsigned int *)((t0 + 0x18)) = a4;
    return t0;
}

void quadFadeStart(int a4)
{
    int t0;

    t0 = set_event(0xC0, 0x8C084FCC);
    *(unsigned int *)((t0 + 0x14)) = 0x64;
    *(unsigned int *)((t0 + 0xB8)) = a4;
    *(float *)((t0 + 0xBC)) = 0.0f;
}

void hudChangeEnds(void)
{
    int t0;

    t0 = set_event2(0x1C, 0x8C0860C4);
    *(unsigned int *)((t0 + 0x14)) = 0x8C;
    *(float *)((t0 + 0x18)) = 0.0f;
}

void hudPointPanelShow(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C287D5C;
        if (t1 != 3) {
            t2 = set_event2(0x48, 0x8C086486);
            if (a4 == 0) {
                *(unsigned int *)((t2 + 0x14)) = 0xB4;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x78;
            }
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t4 = *(int *)0x8C287C64;
            t5 = *(int *)0x8C287B00;
            if (t5 != t4) {
                t6 = *(int *)0x8C287B04;
                t7 = *(int *)0x8C287C64;
                if (t6 == t7) {
                    *(unsigned int *)((t2 + 0x14)) = 0x3C;
                }
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x3C;
            }
        }
    }
}

int hudPanelShow9a3dc(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C08660C);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

int hudPanelShow9a470(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C086754);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

int hudLetPanel(void)
{
    int t0;
    int t9;
    int t1;
    int t6;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287D5C;
    t9 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t6 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C08688C);
            *(unsigned int *)((t2 + 0x14)) = 0xB4;
            *(unsigned int *)((t2 + 0x18)) = 0x3C;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x1C)) = 0x0;
            t3 = *(int *)0x8C334408;
            if (t3 == 0) {
                *(unsigned int *)((t2 + 0x28)) = 0x1;
                t4 = 0x24;
            } else {
                *(unsigned int *)((t2 + 0x28)) = 0x2;
                t4 = 0x2;
            }
            t6 = t4;
        }
        t9 = t6;
    }
    return t9;
}

int hudFaultPanel(int a4)
{
    int t0;
    int t6;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t6 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C086A34);
            *(unsigned int *)((t2 + 0x14)) = a4;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t6 = t3;
    }
    return t6;
}

int hudDoubleFaultPanel(int a4)
{
    int t0;
    int t15;
    int t1;
    int t11;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;

    t0 = *(int *)0x8C287D5C;
    t15 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t11 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C086B90);
            if (a4 == 0) {
                *(unsigned int *)((t2 + 0x14)) = 0xB4;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x78;
            }
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t4 = *(int *)0x8C287C64;
            t5 = *(int *)0x8C287B00;
            if (t5 != t4) {
                t6 = *(int *)0x8C287B04;
                t7 = *(int *)0x8C287C64;
                if (t6 == t7) {
                    *(unsigned int *)((t2 + 0x14)) = 0x3C;
                }
                t9 = t7;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x3C;
                t9 = 0x24;
            }
            t11 = t9;
        }
        t15 = t11;
    }
    return t15;
}

int hudPanelShow9a302(void)
{
    int t0;
    int t7;
    int t1;
    int t6;
    int t2;
    int t4;
    int t3;

    t0 = *(int *)0x8C287B3C;
    t7 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t6 = t1;
        if (t1 != 3) {
            t2 = *(int *)0x8C421F60;
            t4 = t1;
            if (t2 == 0) {
                t3 = set_event2(0x48, 0x8C086D14);
                *(unsigned int *)((t3 + 0x14)) = 0x78;
                *(unsigned int *)((t3 + 0x18)) = 0x0;
                *(float *)((t3 + 0x20)) = 0.0f;
                *(float *)((t3 + 0x24)) = 1.0f;
                *(unsigned int *)((t3 + 0x3C)) = 0x0;
                t4 = 0x24;
            }
            t6 = t4;
        }
        t7 = t6;
    }
    return t7;
}

int hudPanelShow9a504(void)
{
    int t0;
    int t7;
    int t1;
    int t6;
    int t2;
    int t4;
    int t3;

    t0 = *(int *)0x8C287B3C;
    t7 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t6 = t1;
        if (t1 != 3) {
            t2 = *(int *)0x8C421F60;
            t4 = t1;
            if (t2 == 0) {
                t3 = set_event2(0x48, 0x8C086E68);
                *(unsigned int *)((t3 + 0x14)) = 0x5A;
                *(unsigned int *)((t3 + 0x18)) = 0x0;
                *(float *)((t3 + 0x20)) = 0.0f;
                *(float *)((t3 + 0x24)) = 1.0f;
                *(unsigned int *)((t3 + 0x3C)) = 0x0;
                t4 = 0x24;
            }
            t6 = t4;
        }
        t7 = t6;
    }
    return t7;
}

int hudPanelShow9a1d6(void)
{
    int t0;
    int t4;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287B3C;
    t4 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t3 = t1;
        if (t1 != 3) {
            t2 = set_event2(0x48, 0x8C086FA0);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t4 = t3;
    }
    return t4;
}

int hudPanelShow9a26c(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = set_event2(0x48, 0x8C087124);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

void hudFadeInStart(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = set_event2(0x40, 0x8C087D94);
    *(unsigned int *)((t0 + 0x3C)) = a4;
    *(unsigned int *)((t0 + 0x28)) = a5;
    *(unsigned int *)((t0 + 0x2C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a7;
    *(unsigned int *)((t0 + 0x1C)) = a8;
    *(float *)((t0 + 0x20)) = 0.0f;
    *(float *)((t0 + 0x24)) = 0.0f;
    *(unsigned short *)((t0 + 0x30)) = 0x0;
    *(unsigned int *)((t0 + 0x38)) = 0x0;
}

int crowdCheerStopAfter(int a4)
{
    int t0;

    t0 = set_event(0x1C, 0x8C088EE4);
    *(unsigned int *)((t0 + 0x18)) = a4;
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    return t0;
}

int rippleStart(int a4)
{
    int t0;

    t0 = set_event(0x68, 0x8C088F2E);
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int modelSetMaterial(int a4, int a5, int a6)
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
    int t12;

    t0 = nlSetCommonTextureOffset(a6);
    t1 = t0;
    t2 = (a4 + 0x18);
    do {
        t3 = *(int *)((t2 + 0x0));
        if ((int)t3 < 0) {
            *(unsigned int *)((t2 + 0x20)) = a5;
            t2 = (t2 + 0x50);
        }
        t4 = *(int *)((t2 + 0x0));
        if ((int)t4 > 0) {
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t6 = 0x1;
            if ((t5 & 0x8) != 0) {
                t6 = 0x3;
            }
            t7 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t1 = 0x0;
            t8 = t4;
            t9 = a5;
            while ((int)t1 < (int)t7) {
                t9 = 0x0;
                if ((int)t6 > 0) {
                    do {
                        t10 = *(int *)((t2 + 0x0));
                        t8 = t10;
                        t9 = (t9 + 0x1);
                        if ((t8 & 0x1) != 0) {
                            t2 = (t2 + 0x20);
                        } else {
                            t2 = (t2 + 0x8);
                        }
                    } while ((int)t9 < (int)t6);
                }
                t1 = (t1 + 0x1);
            }
        }
        t12 = *(int *)((t2 + 0x0));
    } while (t12 != 0);
    return t1;
}

void modelSwapMaterial(int a4, int a5, int a6)
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
    int t13;

    t0 = (a4 + 0x18);
    do {
        t1 = *(int *)((t0 + 0x0));
        if ((int)t1 < 0) {
            t2 = *(int *)((t0 + 0x20));
            if (t2 == a5) {
                *(unsigned int *)((t0 + 0x20)) = a6;
            }
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = 0x0;
            t8 = t3;
            while ((int)t7 < (int)t6) {
                if ((int)t5 > 0) {
                    t9 = 0x0;
                    do {
                        t10 = *(int *)((t0 + 0x0));
                        t8 = t10;
                        t9 = (t9 + 0x1);
                        if ((t8 & 0x1) != 0) {
                            t0 = (t0 + 0x20);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t9 < (int)t5);
                }
                t7 = (t7 + 0x1);
            }
        }
        t13 = *(int *)((t0 + 0x0));
    } while (t13 != 0);
}

int modelGetVertsInt(int a4, int a5)
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
    float u10;
    int t11;
    float u12;
    int t13;
    float u14;
    int t15;
    int t17;

    t0 = (a4 + 0x18);
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        if ((int)t2 < 0) {
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = t4;
            t8 = 0x0;
            while ((int)t8 < (int)t6) {
                t7 = 0x0;
                if ((int)t5 > 0) {
                    do {
                        t9 = *(int *)((t0 + 0x0));
                        t7 = (t7 + 0x1);
                        if ((t9 & 0x1) != 0) {
                            u10 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t11 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t11)) = (int)u10;
                            u12 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t13 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t13)) = (int)u12;
                            u14 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t15 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t15)) = (int)u14;
                            t0 = (t0 + 0x14);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t7 < (int)t5);
                }
                t8 = (t8 + 0x1);
            }
        }
        t17 = *(int *)((t0 + 0x0));
    } while (t17 != 0);
    *(unsigned int *)((a5 + (t1 << 2))) = t1;
    return (t1 << 2);
}

void modelSetVertsInt(int a4, int a5)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;

    t0 = (a4 + 0x18);
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        if ((int)t2 < 0) {
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = t4;
            t8 = 0x0;
            while ((int)t8 < (int)t6) {
                t7 = 0x0;
                if ((int)t5 > 0) {
                    do {
                        t9 = *(int *)((t0 + 0x0));
                        t7 = (t7 + 0x1);
                        if ((t9 & 0x1) != 0) {
                            t10 = *(int *)((a5 + (t1 << 2)));
                            t1 = (t1 + 0x1);
                            t12 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(float *)((t0 + 0x0)) = (float)t10;
                            t0 = (t0 + 0x4);
                            t13 = *(int *)((a5 + t12));
                            t14 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(float *)((t0 + 0x0)) = (float)t13;
                            t0 = (t0 + 0x4);
                            t15 = *(int *)((a5 + t14));
                            *(float *)((t0 + 0x0)) = (float)t15;
                            t0 = (t0 + 0x18);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t7 < (int)t5);
                }
                t8 = (t8 + 0x1);
            }
        }
        t17 = *(int *)((t0 + 0x0));
    } while (t17 != 0);
}


int shadowMulShear(void)
{
    float u3;
    float u4;
    float u5;
    int t6;
    int stk[18];


    nlPushUnitMatrix();
    nlGetMatrix(((int)stk + 4));
    nlPopMatrix(0x1);
    u3 = (*(float *)((int)stk + 72));
    (*(float *)((int)stk + 20)) = u3;
    u4 = (*(float *)((int)stk + 76));
    (*(float *)((int)stk + 24)) = (u4 + 1.0f);
    u5 = (*(float *)((int)stk + 80));
    (*(float *)((int)stk + 28)) = u5;
    t6 = nlMultiMatrix(((int)stk + 4));
    return t6;
}

/* manual: a trampoline: r4 passes through to nlObjPutMvInit (the NAOMI library's own code reads it). */
int thunk_nlObjPutMvInit(int a4)
{
    return nlObjPutMvInit();
}

int crowdFrameTcw(void)
{
    int t0;
    int t1;
    int t2;
    int stk[1];

    t0 = *(int *)((((int)stk + 4) + 0x0));
    t1 = *(int *)((((int)stk + 4) + 0xC));
    t2 = *(int *)(((t1 << 2) + (((((t0 << 2) << 1) + t0) << 2) + 0x8C10DDE0)));
    return t2;
}


/* manual: the call passes the argument the original sets (r4 = 180); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */
int sceneObjPutInit(void)
{
    int t1;

    nlObjPutSetVtxColorMode(0x1);
    t1 = thunk_nlObjPutMvInit(0xB4);
    *(unsigned int *)0x8C30196C = 0x0;
    return t1;
}

void sprInitPos(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    int stk[1];

    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    u0 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)((a4 + 0x4)) = u0;
    u1 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)((a4 + 0x8)) = u1;
    u2 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)((a4 + 0xC)) = u2;
    *(float *)((a4 + 0x10)) = 1.0f;
    *(float *)((a4 + 0x14)) = 1.0f;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 1.0f;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0xA;
}


int menuIconPutRot(int a4, int a5, int a6, int a7, Stk3 s)
{
    int t5;

    t5 = primSprDraw((((((a4 << 2) + a4) << 2) << 2) + 0x8C334434), 0x80, 0x80, a5, s);
    return t5;
}

int logoBInit(void)
{
    int t1;
    int t2;
    int t3;
    int stk[31];

    { struct mv20 { int w[20]; }; *(struct mv20 *)(((int)stk + 12)) = *(struct mv20 *)(0x8C10E418); }
    t1 = 0x0;
    do {
        t2 = sprInitRectF((((((t1 << 2) + t1) << 2) << 2) + 0x8C334EDC), 0x87, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C334EDC);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0x5);
    return t2;
}


void scoreInit(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = 0x0;
    do {
        t1 = 0x0;
        do {
            t2 = (0x8C3343C8 + t1);
            t1 = (t1 + 0x14);
            *(unsigned int *)(((t0 << 2) + t2)) = 0x0;
        } while ((unsigned int)t1 < (unsigned int)0x28);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x6);
    *(unsigned int *)0x8C3343BC = 0x0;
    *(unsigned int *)0x8C3343B8 = 0x0;
    *(unsigned int *)0x8C3343C4 = 0x0;
    *(unsigned int *)0x8C3343C0 = 0x0;
    *(unsigned int *)0x8C334400 = 0x0;
    *(unsigned int *)0x8C334404 = 0x0;
    *(unsigned int *)0x8C334408 = 0x0;
    *(float *)0x8C33440C = 0.0f;
    *(unsigned int *)0x8C334410 = 0x0;
    *(unsigned int *)0x8C334414 = 0x0;
    *(unsigned int *)0x8C334418 = 0x0;
    strmScoreReset();
    t5 = 0x0;
    do {
        t6 = *(int *)((((t5 * 0xD78) + 0x8C287D84) + 0xC58));
        *(unsigned int *)(((0x8C3343F0 + (t5 << 2)) + 0x0)) = t6;
        t7 = *(int *)(((0x8C287AE0 + (t5 << 2)) + 0x0));
        if (t7 != 0) {
            *(unsigned int *)(((0x8C334424 + (t5 << 2)) + 0x0)) = 0x4;
        } else {
            *(unsigned int *)(((0x8C334424 + (t5 << 2)) + 0x0)) = t5;
        }
        t5 = (t5 + 0x1);
    } while ((int)t5 < (int)0x4);
}


int panelWideInit(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        sprInitRect((((((t0 << 2) + t0) << 2) << 2) + 0x8C337CA0), 0x5F, 0x8C10E674, 0x80, 0x80, t0, 0x5);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x2);
    t2 = 0x2;
    do {
        t3 = sprInitRect((((((t2 << 2) + t2) << 2) << 2) + 0x8C337CA0), 0x60, 0x8C10E674, 0x80, 0x80, t2, 0x5);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0x4);
    return t3;
}

int panelWordsInit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprInitRect((((((t0 << 2) + t0) << 2) << 2) + 0x8C337DE0), 0x5D, 0x8C10E6B4, 0x100, 0x100, t0, 0xA);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xE);
    return t1;
}


int phraseBigInit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprInitRect((((((t0 << 2) + t0) << 2) << 2) + 0x8C338240), 0x5E, 0x8C10E7BC, 0x100, 0x100, t0, 0xA);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xC);
    return t1;
}


int countryNameInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C339CD0), 0x1C, 0x8C10ED0C, 0x100, 0x100, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C339CD0);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x5;
    } while ((int)t0 < (int)0x15);
    return t1;
}

int menuTextInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C), 0x1F, 0x8C184930, 0x100, 0x100, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x100D;
    } while ((int)t0 < (int)0x71);
    return t1;
}

int hudFrameInit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33A360), 0x65, 0x8C10EF54, 0x40, 0x40, t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xB);
    return t1;
}


int hudDigitInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B940), 0x6A, 0x8C10F2F8, 0x40, 0x40, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B940);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x5;
    } while ((int)t0 < (int)0xE);
    return t1;
}

int hudDigitSmallInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33BDA0), 0x64, 0x8C10F3D8, 0x40, 0x40, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33BDA0);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x1005;
    } while ((int)t0 < (int)0x11);
    return t1;
}


int hudLabelSprInit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33ECD0), 0x1, 0x8C10FE30, 0x100, 0x100, t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x10);
    return t1;
}


int panelSprInit(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        sprInitRect((((((t0 << 2) + t0) << 2) << 2) + 0x8C33FB80), 0x61, 0x8C110148, 0x80, 0x80, t0, 0x5);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xC);
    t2 = 0x0;
    do {
        t3 = sprInitRect((((((t2 << 2) + t2) << 2) << 2) + 0x8C33FF40), 0x62, 0x8C110208, 0x80, 0x80, t2, 0x5);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0xF);
    return t3;
}


void selCopyLocalConstants(void)
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
    int stk[14];


    t0 = *(int *)0x8C1103C4;
    (*(int *)((int)stk + 48)) = t0;
    t1 = *(int *)0x8C1103C0;
    (*(int *)((int)stk + 44)) = t1;
    t2 = *(int *)0x8C1103BC;
    (*(int *)((int)stk + 40)) = t2;
    t3 = *(int *)0x8C1103B8;
    (*(int *)((int)stk + 36)) = t3;
    t4 = *(int *)0x8C1103D4;
    (*(int *)((int)stk + 32)) = t4;
    t5 = *(int *)0x8C1103D0;
    (*(int *)((int)stk + 28)) = t5;
    t6 = *(int *)0x8C1103CC;
    (*(int *)((int)stk + 24)) = t6;
    t7 = *(int *)0x8C1103C8;
    (*(int *)((int)stk + 20)) = t7;
    t8 = *(int *)0x8C1103E4;
    (*(int *)((int)stk + 16)) = t8;
    t9 = *(int *)0x8C1103E0;
    (*(int *)((int)stk + 12)) = t9;
    t10 = *(int *)0x8C1103DC;
    (*(int *)((int)stk + 8)) = t10;
    t11 = *(int *)0x8C1103D8;
    (*(int *)((int)stk + 4)) = t11;
}


/* manual: the call passes the argument the original sets (r4, the record being drawn); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */
int standBgDraw(void)
{
    int t0;
    int t1;

    t0 = 0x8C33F1D0;
    do {
        t1 = thunk_nlSprPut(t0);
        t0 = (t0 + 0x50);
    } while ((unsigned int)t0 < (unsigned int)0x8C33F3B0);
    return t1;
}


int selRestart(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;

    t0 = 0x0;
    do {
        emotFaceReset(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    t2 = 0x8C3438D8;
    do {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    } while ((unsigned int)t2 < (unsigned int)0x8C3438E8);
    t3 = entryCountJoined();
    if (t3 != 1) {
        t4 = *(int *)0x8C287D5C;
        if (t4 == 1) {
            stageLoadSelectSprites();
        }
    } else {
        stageLoadSelectSprites();
    }
    sprStartFree();
    *(unsigned int *)0x8C343908 = 0x0;
    camInit();
    t11 = 0x0;
    t12 = 0x0;
    t13 = 0x8C185298;
    do {
        t14 = *(short *)((t13 + 0x0));
        t15 = *(short *)0x8C343262;
        if (((unsigned short)t15 & (unsigned short)t14) != 0) {
            t16 = *(int *)(((0x8C3437C4 + t11) + 0x0));
            t17 = *(short *)((((t16 * 0x38) + 0x8C343264) + 0x14));
            if (t17 != 0) {
                t18 = *(int *)(((0x8C3437C4 + t12) + 0x0));
                selModelSpawn(t18, 0x1);
                *(unsigned int *)((0x8C343878 + t12)) = 0x2;
            }
        }
        t13 = (t13 + 0x2);
        t12 = (t12 + 0x4);
        t11 = (t11 + 0x4);
    } while ((unsigned int)t13 < (unsigned int)0x8C1852A0);
    lightSet(0x8500, 0x9200, 0x64, 0x45);
    return fadeScreenStart(0x2, 0x1, 0xA);
}

int selSideCheck(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t10;
    int t9;

    t0 = 0x8C185298;
    t1 = 0x0;
    t2 = 0x8C185298;
    do {
        t3 = *(short *)((t0 + 0x0));
        t4 = *(short *)0x8C343262;
        if (((unsigned short)t4 & (unsigned short)t3) != 0) {
            t2 = 0x56C;
            t2 = (t2 + 0x8C343258);
            t2 = (t2 + t1);
            t5 = *(int *)((t2 + 0x0));
            t2 = t5;
            t2 = (t2 * 0x38);
            t2 = (t2 + 0x8C343264);
            t7 = *(int *)((t2 + 0x4));
            t2 = t7;
        }
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    if (t2 != 0) {
        if (t2 == 2) {
            return 0x1;
        }
        t10 = 0x0;
        if (t2 != 1) {
            t9 = t2;
            if (t2 == 3) {
                t9 = 0x0;
            }
            t10 = t9;
        }
        return t10;
    }
    return 0x1;
}


int selJoinBlocked(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C181638;
    if (t0 != 0) {
        t1 = *(short *)0x8C343262;
        if ((unsigned short)t1 == 1) {
            t2 = *(int *)0x8C343724;
            if ((int)t2 < (int)0x5) {
                return 0x0;
            }
            return 0x1;
        }
        if ((unsigned short)t1 == 16) {
            t3 = *(int *)0x8C343728;
            if ((int)t3 >= (int)0x5) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

void selModeTrack(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;

    t0 = *(int *)0x8C20D14C;
    t1 = *(int *)0x8C343848;
    if (t0 != t1) {
        *(unsigned int *)0x8C343844 = t1;
        t2 = *(int *)0x8C20D14C;
        *(unsigned int *)0x8C343848 = t2;
    }
    t4 = *(int *)0x8C343850;
    t5 = *(int *)0x8C20D150;
    if (t5 != t4) {
        *(unsigned int *)0x8C34384C = t4;
        t6 = *(int *)0x8C20D150;
        *(unsigned int *)0x8C343850 = t6;
    }
    t8 = *(int *)0x8C287D5C;
    t9 = *(int *)0x8C343858;
    if (t8 != t9) {
        *(unsigned int *)0x8C343854 = t9;
        t10 = *(int *)0x8C20D14C;
        *(unsigned int *)0x8C343858 = t10;
    }
}

int selPortReset(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C343ADC + t0)) = 0x0;
        *(unsigned int *)((0x8C185438 + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C185448 + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C343B0C + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C185428 + t0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x10);
    return t0;
}

void selCellSetCursor(int a4)
{
    int t5;
    int t6;
    int t2;
    int t3;
    int t0;

    if ((int)a4 >= 0) {
        t5 = 0x0;
        t6 = 0x8;
        if (a4 != 16) {
            t2 = 0x1;
            t3 = 0x8;
            if (a4 != 17) {
                t0 = (int)((int)a4 / (int)0x8);
                t2 = t0;
                t3 = (a4 - ((t0 << 2) << 1));
            }
            t5 = t2;
            t6 = t3;
        }
        *(unsigned int *)((((t6 << 2) + (0x8C1853C0 + ((((t5 << 2) << 1) + t5) << 2))) + 0x0)) = 0x2;
    }
}

void selCellClear(int a4)
{
    int t3;
    int t4;
    int t1;
    int t2;
    int t0;

    if ((int)a4 >= 0) {
        t3 = 0x0;
        t4 = 0x8;
        if (a4 != 16) {
            t1 = 0x1;
            t2 = 0x8;
            if (a4 != 17) {
                t0 = a4;
                if ((int)a4 < 0) {
                    t0 = (a4 + 0x7);
                }
                t1 = (((t0 >> 1) >> 1) >> 1);
                t2 = (a4 - (((((t0 >> 1) >> 1) >> 1) << 2) << 1));
            }
            t3 = t1;
            t4 = t2;
        }
        *(unsigned int *)((((t4 << 2) + (0x8C1853C0 + ((((t3 << 2) << 1) + t3) << 2))) + 0x0)) = 0x0;
    }
}

int selGridClear(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x0;
    do {
        t1 = 0x8C1853C0;
        do {
            *(unsigned int *)((t1 + (t0 << 2))) = 0x0;
            t1 = (t1 + 0x24);
        } while ((unsigned int)t1 < (unsigned int)0x8C185408);
        t3 = (t0 << 2);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x9);
    return t3;
}

int selCellClearCur(void)
{
    int t0;
    int t4;
    int t5;
    int t2;
    int t3;
    int t1;

    t0 = *(int *)0x8C343248;
    t4 = 0x0;
    t5 = 0x7;
    if (t0 != 16) {
        t2 = 0x1;
        t3 = 0x7;
        if (t0 != 17) {
            t1 = t0;
            if ((int)t0 < 0) {
                t1 = (t0 + 0x7);
            }
            t2 = (((t1 >> 1) >> 1) >> 1);
            t3 = (t0 - (((((t1 >> 1) >> 1) >> 1) << 2) << 1));
        }
        t4 = t2;
        t5 = t3;
    }
    *(unsigned int *)((((t5 << 2) + (0x8C1853C0 + ((((t4 << 2) << 1) + t4) << 2))) + 0x0)) = 0x0;
    return ((((t4 << 2) << 1) + t4) << 2);
}

int entryRecordResult(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287D5C;
    t10 = t0;
    if (t0 != 1) {
        t1 = 0x0;
        t2 = 0x8C185298;
        do {
            t3 = *(short *)((t2 + 0x0));
            t4 = *(short *)0x8C343262;
            t8 = (unsigned short)t4;
            if (((unsigned short)t4 & (unsigned short)t3) != 0) {
                t5 = *(int *)(((0x8C343724 + t1) + 0x0));
                *(unsigned int *)(((0x8C343724 + t1) + 0x0)) = (t5 + 0x1);
                t6 = *(int *)((t1 + 0x8C3437C4));
                t7 = *(int *)(((0x8C343724 + t1) + 0x0));
                *(unsigned int *)(((t7 << 2) + ((((t6 << 2) << 2) << 1) + 0x8C343424))) = a4;
                t8 = ((((t6 << 2) << 2) << 1) + 0x8C343424);
            }
            t2 = (t2 + 0x2);
            t1 = (t1 + 0x4);
        } while ((unsigned int)t2 < (unsigned int)0x8C1852A0);
        t10 = t8;
    }
    return t10;
}

int entrySetResult(int a4)
{
    int t0;
    int t9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t6;

    t0 = *(int *)0x8C287ADC;
    t9 = t0;
    if (t0 == 2) {
        t1 = 0x8C185298;
        t2 = 0x0;
        t3 = 0x0;
        do {
            t4 = *(short *)((t1 + 0x0));
            t5 = *(short *)0x8C343262;
            t7 = (unsigned short)t5;
            if (((unsigned short)t5 & (unsigned short)t4) != 0) {
                t6 = *(int *)(((0x8C343724 + t2) + 0x0));
                *(unsigned int *)(((t6 << 2) + (0x8C343424 + t3))) = a4;
                t7 = (0x8C343424 + t3);
            }
            t1 = (t1 + 0x2);
            t2 = (t2 + 0x4);
            t3 = (t3 + 0x20);
        } while ((unsigned int)t1 < (unsigned int)0x8C1852A0);
        t9 = t7;
    }
    return t9;
}


int entryFirstPortMask(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if ((unsigned int)0x8C185298 < (unsigned int)0x8C1852A0) {
        t0 = 0x8C185298;
        t1 = 0x8C185298;
        for (;;) {
            t2 = *(short *)((t0 + 0x0));
            t3 = *(short *)0x8C343262;
            if (((unsigned short)t3 & (unsigned short)t2) != 0) break;
            t0 = (t0 + 0x2);
            t1 = (t1 + 0x2);
            if ((unsigned int)t0 >= (unsigned int)0x8C1852A0) {
                return 0x0;
            }
        }
        t4 = *(short *)((t1 + 0x0));
        return (unsigned short)t4;
    }
    return 0x0;
}

int entryAnyAtRound5Clean(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)0x8C343262;
        t2 = *(short *)((((t0 << 1) + 0x8C185298) + 0x0));
        if (((unsigned short)t1 & (unsigned short)t2) != 0) {
            t3 = entryPortAtRound5Clean(t0);
            if (t3 != 0) return 0x1;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return 0x0;
            }
            continue;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    return 0x0;
}

int entryFirstPortFlag(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((unsigned int)0x8C181628 < (unsigned int)0x8C181638) {
        t0 = 0x8C181628;
        t1 = 0x8C181628;
        for (;;) {
            t2 = *(int *)((t0 + 0x0));
            if (t2 != 0) break;
            t0 = (t0 + 0x4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8C181638) {
                return 0x0;
            }
        }
        t3 = *(int *)((t1 + 0x0));
        return t3;
    }
    return 0x0;
}

int entryAnyAtRound5(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = entryIsVersus();
    if (t0 == 0) {
        if ((unsigned int)0x8C185298 < (unsigned int)0x8C1852A0) {
            t1 = 0x8C185298;
            t2 = 0x0;
            for (;;) {
                t3 = *(short *)((t1 + 0x0));
                t4 = *(short *)0x8C343262;
                if (((unsigned short)t4 & (unsigned short)t3) != 0) {
                    t5 = *(int *)((t2 + 0x8C343724));
                    if (t5 == 5) return 0x1;
                    t1 = (t1 + 0x2);
                    t2 = (t2 + 0x4);
                    if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
                        return 0x0;
                    }
                    continue;
                }
                t1 = (t1 + 0x2);
                t2 = (t2 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
                    return 0x0;
                }
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int entryGridCount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C185298;
    t1 = 0x8C343AEC;
    t2 = 0x0;
    do {
        t3 = *(short *)((t0 + 0x0));
        t4 = *(short *)0x8C343262;
        if (((unsigned short)t4 & (unsigned short)t3) != 0) {
            t5 = *(int *)((t1 + 0x0));
            if (t5 == a4) {
                t2 = (t2 + 0x1);
            }
        }
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    return t2;
}

void entryClearUnsetSlots(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = a5;
    for (;;) {
        t2 = *(int *)0x8C287ADC;
        if ((int)t0 >= (int)t2) break;
        t1 = (t0 * 0x38);
        t1 = (t1 + 0x8C343264);
        t3 = *(int *)((t1 + 0x0));
        t0 = (t0 + 0x1);
        if (t3 == -1) {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
        }
    }
}

int entryPartnerSlot(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    t0 = *(int *)0x8C110F8C;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t0;
    t1 = *(int *)0x8C110F88;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
    t2 = *(int *)0x8C110F84;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
    t3 = *(int *)0x8C110F80;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
    t4 = *(int *)((((int)stk + 4) + (a4 << 2)));
    return t4;
}

int entryResetTable(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t8;
    int t11;
    int t12;
    int t14;

    t0 = 0x0;
    do {
        *(unsigned int *)(((0x8C343724 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343744 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343764 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)((((t0 << 2) + 0x8C343784) + 0x0)) = 0x0;
        t1 = 0x0;
        do {
            *(unsigned int *)((t1 + (0x8C343424 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + (0x8C343524 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + (0x8C343624 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            t1 = (t1 + 0x4);
        } while ((unsigned int)t1 < (unsigned int)0x18);
        t4 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0x8C181628 + (t4 << 2))) = 0x0;
    } while ((int)t0 < (int)0x4);
    t5 = 0x0;
    t6 = 0x0;
    do {
        *(unsigned int *)(((0x8C343264 + t5) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0xC)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x10)) = 0x0;
        *(unsigned short *)(((0x8C343264 + t5) + 0x14)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x18)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x8)) = 0x1;
        *(unsigned int *)(((0x8C343264 + t5) + 0x2C)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x30)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x34)) = 0xFFFFFFFF;
        t8 = (0x8C343264 + t5);
        t5 = (t5 + 0x38);
        *(unsigned int *)((t8 + 0x28)) = 0x0;
        *(unsigned int *)(((0x8C3437C4 + t6) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343824 + t6) + 0x0)) = 0x1;
        t6 = (t6 + 0x4);
    } while ((unsigned int)t5 < (unsigned int)0xE0);
    t11 = 0x0;
    do {
        t12 = 0x8C1853C0;
        do {
            *(unsigned int *)((t12 + (t11 << 2))) = 0x0;
            t12 = (t12 + 0x24);
        } while ((unsigned int)t12 < (unsigned int)0x8C185408);
        t14 = (t11 << 2);
        t11 = (t11 + 0x1);
    } while ((int)t11 < (int)0x8);
    return t14;
}

int entryCountJoined(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C185298;
    t1 = 0x0;
    do {
        t2 = *(short *)((t0 + 0x0));
        t3 = *(short *)0x8C343262;
        t0 = (t0 + 0x2);
        if (((unsigned short)t3 & (unsigned short)t2) != 0) {
            t1 = (t1 + 0x1);
        }
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    return t1;
}

int entryPickRandomCourt(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t13;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[14];

    t0 = 0x0;
    t1 = 0x8;
    do {
        t2 = *(int *)((((0x8C185330 + t0) + 0x24) + 0x0));
        *(unsigned int *)((((int)stk + 4) + t0)) = t2;
        t3 = *(int *)((((0x8C185330 + t0) + 0x24) + 0x0));
        t0 = (t0 + 0x4);
        if (t3 != 0) {
            t1 = (t1 + 0x1);
        }
    } while ((unsigned int)t0 < (unsigned int)0x20);
    t6 = nlRand();
    t7 = (int)((int)t6 % (int)t1);
    t13 = t7;
    if ((int)t7 >= (int)0x8) {
        t8 = t7;
        t9 = 0x8C0F7BAC;
        t10 = (t7 - 7);
        t11 = 0x0;
        while (t10 != 0) {
            t11 = 0x0;
            for (;;) {
                t8 = t11;
                t8 = (t8 << 2);
                t12 = *(int *)((((int)stk + 4) + t8));
                t9 = t12;
                if (t9 != 0) break;
                t11 = (t11 + 0x1);
            }
            t8 = t11;
            t8 = (t8 << 2);
            t10 = (t10 - 1);
            *(unsigned int *)((((int)stk + 4) + t8)) = 0x0;
        }
        t13 = (t11 + 0x8);
    }
    return t13;
}

void endingTexLoad(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188E84;
    if (t0 == 0) {
        nlSetCommonTextureOffset(0x1800);
        t2 = 0x0;
        t3 = 0x8C188C84;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C132D0C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x19);
        *(unsigned int *)0x8C188E84 = 0x1;
    }
}


void stageWtcMainTexLoad(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188EB0;
    if (t0 == 0) {
        nlSetCommonTextureOffset(0x1B00);
        t2 = 0x0;
        t3 = 0x8C188D14;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C132F8C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x1B);
        *(unsigned int *)0x8C188EB0 = 0x1;
    }
}


int stageMinigameLoadStep(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t16;
    int t17;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t33;
    int t34;
    int t37;
    int t38;
    int t42;
    int t44;
    int t57;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = *(int *)0x8C343FF4;
        *(unsigned int *)0x8C343FF4 = (t2 + 0x1);
        sndStagePackLoad(0x0);
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            t5 = sndStagePackLoad(0x1);
            if (t5 == 99) {
                t6 = *(int *)0x8C343FF4;
                *(unsigned int *)0x8C343FF4 = (t6 + 0x1);
                sndFxReset();
            }
        } else {
            if (t4 == 2) {
                t9 = stagePolyLoad();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t10 + 0x1);
                }
            } else {
                if (t4 == 3) {
                    t11 = stageTexFileLoad();
                    if (t11 == 1) {
                        t12 = *(int *)0x8C343FF4;
                        *(unsigned int *)0x8C343FF4 = (t12 + 0x1);
                        stageTexLoad();
                    }
                } else {
                    t15 = *(int *)0x8C344014;
                    if (t4 == 4) {
                        if (t15 != 3) {
                            t16 = kyakuPolyLoad();
                            if (t16 == 1) {
                                t17 = *(int *)0x8C343FF4;
                                *(unsigned int *)0x8C343FF4 = (t17 + 0x1);
                                uniformLoadBegin();
                            }
                        } else {
                            t20 = *(int *)0x8C343FF4;
                            *(unsigned int *)0x8C343FF4 = (t20 + 0x1);
                            uniformLoadBegin();
                        }
                    } else {
                        if (t4 == 5) {
                            t23 = uniformLoadStep();
                            if (t23 != 0) {
                                t24 = *(int *)0x8C343FF4;
                                *(unsigned int *)0x8C343FF4 = (t24 + 0x1);
                            }
                        } else {
                            if (t4 == 6) {
                                if (t15 == 3) {
                                    t25 = minigamePolyLoad();
                                    if (t25 == 1) {
                                        t26 = *(int *)0x8C343FF4;
                                        *(unsigned int *)0x8C343FF4 = (t26 + 0x1);
                                    }
                                } else {
                                    t27 = *(int *)0x8C343FF4;
                                    *(unsigned int *)0x8C343FF4 = (t27 + 0x2);
                                }
                            } else {
                                if (t4 == 7) {
                                    t29 = minigameTexFileLoad();
                                    if (t29 == 1) {
                                        t30 = *(int *)0x8C343FF4;
                                        *(unsigned int *)0x8C343FF4 = (t30 + 0x1);
                                        stageMinigameTexLoad();
                                    }
                                } else {
                                    if (t4 == 8) {
                                        if (t15 == 3) {
                                            t33 = minigameSpriteLoad();
                                            if (t33 == 1) {
                                                t34 = *(int *)0x8C343FF4;
                                                *(unsigned int *)0x8C343FF4 = (t34 + 0x1);
                                                sprSet266Load();
                                            }
                                        } else {
                                            t37 = gameSpriteLoad();
                                            if (t37 == 1) {
                                                t38 = *(int *)0x8C343FF4;
                                                *(unsigned int *)0x8C343FF4 = (t38 + 0x1);
                                                sprMatchLoad();
                                            }
                                        }
                                    } else {
                                        if (t4 == 9) {
                                            t42 = *(int *)0x8C343FF4;
                                            *(unsigned int *)0x8C343FF4 = (t42 + 0x1);
                                            *(unsigned int *)0x8C287C50 = 0x1;
                                            *(unsigned int *)0x8C343FE8 = 0x1;
                                            stageCrowdTexLoad();
                                            t44 = *(int *)0x8C1891E8;
                                            matchSceneInit();
                                            *(unsigned int *)0x8C301970 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t57 = *(int *)0x8C343FE8;
    return t57;
}

void stageExtraTexLoad(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188EC0;
    if (t0 == 0) {
        nlSetCommonTextureOffset(0x1D00);
        t2 = 0x0;
        t3 = 0x8C188EB8;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C1336CC);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x2);
        *(unsigned int *)0x8C188EC0 = 0x1;
    }
}


int stageLoadTexStep(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t9;
    int t10;
    int t14;
    int t15;
    int t16;
    int t17;
    int t22;

    t0 = *(int *)0x8C343FEC;
    if (t0 == 0) {
        t1 = stageTexFileLoad();
        if (t1 == 1) {
            t2 = *(int *)0x8C343FEC;
            *(unsigned int *)0x8C343FEC = (t2 + 0x1);
            stageTexLoad();
        }
    } else {
        if (t0 == 1) {
            t5 = kyakuPolyLoad();
            if (t5 == 1) {
                t6 = *(int *)0x8C343FEC;
                *(unsigned int *)0x8C343FEC = (t6 + 0x1);
                stageCrowdTexLoad();
            }
        } else {
            if (t0 == 2) {
                t9 = gameSpriteLoad();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FEC;
                    *(unsigned int *)0x8C343FEC = (t10 + 0x1);
                    sprMatchLoad();
                    uniformLoadBegin();
                }
            } else {
                if (t0 == 3) {
                    t14 = uniformLoadStep();
                    if (t14 != 0) {
                        t15 = *(int *)0x8C343FEC;
                        *(unsigned int *)0x8C343FEC = (t15 + 0x1);
                    }
                } else {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            t16 = *(int *)0x8C343FEC;
                            *(unsigned int *)0x8C343FEC = (t16 + 0x1);
                        } else if (t0 == 6) {
                            *(unsigned int *)0x8C343FE8 = 0x1;
                        }
                    } else {
                        t17 = *(int *)0x8C343FEC;
                        *(unsigned int *)0x8C343FEC = (t17 + 0x1);
                    }
                }
            }
        }
    }
    t22 = *(int *)0x8C343FE8;
    return t22;
}

int stageLoadTexStep2(void)
{
    int t0;
    int t1;
    int t5;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;
    int t14;
    int t12;
    int t13;
    int t18;
    int t17;
    int t16;

    t0 = *(int *)0x8C343FEC;
    if (t0 == 0) {
        t1 = stageTexFileLoad();
        t5 = t1;
        if (t1 == 1) {
            stageTexLoad();
            t3 = uniformLoadBegin();
            t4 = *(int *)0x8C343FEC;
            *(unsigned int *)0x8C343FEC = (t4 + 0x1);
            t5 = t3;
        }
        t18 = t5;
    } else {
        if (t0 == 1) {
            t6 = uniformLoadStep();
            if (t6 != 0) {
                t7 = *(int *)0x8C343FEC;
                *(unsigned int *)0x8C343FEC = (t7 + 0x1);
            }
            t17 = t6;
        } else {
            if (t0 == 2) {
                t8 = gameSpriteLoad();
                t11 = t8;
                if (t8 == 1) {
                    t9 = *(int *)0x8C343FEC;
                    *(unsigned int *)0x8C343FEC = (t9 + 0x1);
                    t10 = sprMatchLoad();
                    t11 = t10;
                }
                t16 = t11;
            } else {
                t14 = t0;
                if (t0 == 3) {
                    t12 = *(int *)0x8C1891E8;
                    t13 = matchSceneInit();
                    *(unsigned int *)0x8C287C50 = 0x1;
                    *(unsigned int *)0x8C343FE8 = 0x1;
                    t14 = t13;
                }
                t16 = t14;
            }
            t17 = t16;
        }
        t18 = t17;
    }
    return t18;
}

int stageFreeAll(void)
{
    sprAdvFree();
    stageTexFree();
    charaTexFreeAll();
    sprMatchFree();
    sprStartFree();
    stageExtraTexFree();
    sprSet163FreeAll();
    sprSet109Free();
    sprSet192Free();
    sprSet173FreeAll();
    sprSet115Free();
    endingTexFree();
    sprSet266Free();
    stageWtcMainTexFree();
    stageMinigameTexFree();
    sprWtcFree();
    sprSet280FreeAll();
    sprSet322FreeAll();
    sprSet331Free();
    sprSet330Free();
    uniformPreviewFree();
    titleSprTexFree();
    resCautionFreeAll();
    hudPanelDraw(0x2, 0x0, 0.0f);
    resWtcShopObjTexFree();
    resEndObjTexFree();
    resWtcShopSprTexFree();
    resTitleObjTexFree();
    resTitleSprTexFree();
    endingCharaTexFreeAll();
    endSprCharaTexFreeAll();
    endSprTexFree();
    return rankSprTexFree();
}

void crowdAnimate(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287C60;
    if (t0 == 0) {
        t1 = 0x8C344A08;
        do {
            t2 = *(int *)((t1 + 0x1E8));
            *(unsigned int *)((t1 + 0x1E8)) = (t2 + 0x1);
            t3 = *(int *)(((0x1EC + t1) + 0x0));
            t4 = *(int *)((((((t3 << 1) + t3) << 2) + 0x8C11F830) + 0x4));
            t5 = *(int *)(((0x1E8 + t1) + 0x0));
            t6 = (int)((int)t5 % (int)t4);
            *(unsigned int *)(((0x1E8 + t1) + 0x0)) = t6;
            t7 = *(int *)((t1 + 0x1E8));
            motionSetFrame(t1, (float)t7);
            t1 = (t1 + 0x1F4);
        } while ((unsigned int)t1 < (unsigned int)0x8C3484A0);
    }
}

void crowdAnimateAlt(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287C60;
    if (t0 == 0) {
        t1 = 0x8C344A08;
        do {
            t2 = *(int *)((t1 + 0x1E8));
            *(unsigned int *)((t1 + 0x1E8)) = (t2 + 0x1);
            t3 = *(int *)(((0x1EC + t1) + 0x0));
            t4 = *(int *)(((((t3 << 2) << 2) + 0x8C188EC4) + 0x4));
            t5 = *(int *)(((0x1E8 + t1) + 0x0));
            t6 = (int)((int)t5 % (int)t4);
            *(unsigned int *)(((0x1E8 + t1) + 0x0)) = t6;
            t7 = *(int *)((t1 + 0x1E8));
            motionSetFrame(t1, (float)t7);
            t1 = (t1 + 0x1F4);
        } while ((unsigned int)t1 < (unsigned int)0x8C34A1EC);
    }
}

int fileLoadSync(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t12;
    int t14;
    int t21;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_Open(a5, 0x0);
        t2 = *(int *)0x8C34B134;
        *(unsigned int *)0x8C34B134 = (t2 + 0x1);
        if (t1 == 0) {
            if ((int)t0 < (int)0xA) {
                t0 = (t0 + 0x1);
                continue;
            }
            break;
        }
        if (a6 == 0) {
            t3 = ADXF_GetFsizeSct(t1);
            t0 = t3;
            ADXF_ReadNw32(t1, t0, a4);
            for (;;) {
                t5 = ADXF_GetStat(t1);
                if (t5 == 3) break;
                nlLocate(0x14, 0x14);
                frameHookNop();
                msgWinStep();
                fadeDraw();
                nlWaitVSync();
            }
            ADXF_Close(t1);
            t12 = *(int *)0x8C34B138;
            *(unsigned int *)0x8C34B138 = (t12 + 0x1);
            return t0;
        }
        t0 = a6;
        t0 = ((unsigned int)t0 >> 8);
        t0 = ((unsigned int)t0 >> 2);
        t0 = ((unsigned int)t0 >> 1);
        ADXF_ReadNw32(t1, t0, a4);
        for (;;) {
            t14 = ADXF_GetStat(t1);
            if (t14 == 3) break;
            nlLocate(0x14, 0x14);
            frameHookNop();
            msgWinStep();
            fadeDraw();
            nlWaitVSync();
        }
        ADXF_Close(t1);
        t21 = *(int *)0x8C34B138;
        *(unsigned int *)0x8C34B138 = (t21 + 0x1);
        return t0;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

int fileLoadStartOfs(int a4, int a5, int a6, int a7)
{
    return fileLoadStart((a4 + a7));
}

void fileLoadClose(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C34A1F8;
    if (t0 != 0) {
        t1 = 0x0;
        do {
            t2 = (0x8C34A204 + t1);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
        } while ((int)t1 < (int)0x32);
        t3 = *(int *)0x8C34A1F8;
        ADXF_Close(t3);
        *(unsigned int *)0x8C34A1EC = 0x0;
        *(unsigned int *)0x8C34A1F4 = 0x0;
        *(unsigned int *)0x8C34A1F0 = 0x1;
        *(unsigned int *)0x8C34A1F8 = 0x0;
    }
}

int courtFraDrawNumber(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18A7D8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18A800));
    return nlObjPut(t4);
}

int courtUsaDrawNumber(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18B170));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18B198));
    return nlObjPut(t4);
}

int courtAusDrawNumber(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18BB74));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18BB9C));
    return nlObjPut(t4);
}

int courtWinDrawNumber(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18C2E8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18C310));
    return nlObjPut(t4);
}


int stageSegaScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18D234));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18D25C));
    return nlObjPut(t4);
}


int matchStageSlot(void)
{
    int t0;

    t0 = *(int *)0x8C1891F0;
    if (t0 != 2) {
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return 0x0;
                    }
                    return 0x4;
                }
                return 0x3;
            }
            return 0x2;
        }
        return 0x1;
    }
    return 0x0;
}

void primTexVertexSet(int a4, int a5, int a6, int a7, int a8, Stk3 s, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int stk[9];

    u0 = (*(float *)&s.w[0]);
    *(float *)((((int)stk + 4) + 0x0)) = u0;
    u1 = (*(float *)&s.w[1]);
    *(float *)((((int)stk + 4) + 0x4)) = u1;
    u2 = (*(float *)&s.w[2]);
    *(float *)((((int)stk + 4) + 0x8)) = u2;
    *(float *)((((int)stk + 4) + 0xC)) = f4;
    *(float *)((((int)stk + 4) + 0x10)) = f5;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = a5;
    t3 = *(int *)((((int)stk + 4) + 0x18));
    *(unsigned int *)((a8 + 0x18)) = t3;
    t4 = *(int *)((((int)stk + 4) + 0x14));
    *(unsigned int *)((a8 + 0x14)) = t4;
    t5 = *(int *)((((int)stk + 4) + 0x10));
    *(unsigned int *)((a8 + 0x10)) = t5;
    t6 = *(int *)((((int)stk + 4) + 0xC));
    *(unsigned int *)((a8 + 0xC)) = t6;
    t7 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t7;
    t8 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t8;
    t9 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t9;
}

void primVertexSet(int a4, int a5, int a6, int a7, int a8, Stk3 s)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int stk[6];

    u0 = (*(float *)&s.w[0]);
    *(float *)((((int)stk + 4) + 0x0)) = u0;
    u1 = (*(float *)&s.w[1]);
    *(float *)((((int)stk + 4) + 0x4)) = u1;
    u2 = (*(float *)&s.w[2]);
    *(float *)((((int)stk + 4) + 0x8)) = u2;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a4;
    t3 = *(int *)((((int)stk + 4) + 0xC));
    *(unsigned int *)((a8 + 0xC)) = t3;
    t4 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void emotKeyAdd(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)((a4 + 0x264));
    *(unsigned int *)((((((t0 << 1) + t0) << 2) + a4) + 0x0)) = a5;
    t1 = *(int *)((a4 + 0x264));
    *(float *)((((((t1 << 1) + t1) << 2) + a4) + 0x8)) = 0.0f;
    t2 = *(int *)((a4 + 0x264));
    *(unsigned int *)((((((t2 << 1) + t2) << 2) + a4) + 0x4)) = 0x0;
    t3 = *(int *)((a4 + 0x264));
    *(unsigned int *)((a4 + 0x264)) = (t3 + 0x1);
    emotKeysSort(a4);
    t5 = *(int *)((a4 + 0x268));
    *(unsigned int *)((a4 + 0x268)) = (t5 + 0x1);
}

int stageSweScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AC9D8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1ACA00));
    return nlObjPut(t4);
}

int stageGerCourtDraw(int a4)
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
    if (t0 == 2) {
        nlObjPut(0xC8D0380);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            t3 = *(int *)0x8C1AD26C;
            nlObjPut(t3);
            t5 = *(int *)0x8C1AD274;
            t10 = t5;
        } else {
            t6 = *(int *)0x8C1AD268;
            nlObjPut(t6);
            t8 = *(int *)0x8C1AD270;
            t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
    } else {
        nlObjPut(0xC8F4E68);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t14 = *(int *)0x8C1AD27C;
            t16 = t14;
        } else {
            t15 = *(int *)0x8C1AD278;
            t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
    }
    return t18;
}

int stageGerScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AD350));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AD378));
    return nlObjPut(t4);
}

int stageJpnCourtDraw(int a4)
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
    if (t0 == 2) {
        nlObjPut(0xC8E12E0);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            t3 = *(int *)0x8C1ADC74;
            nlObjPut(t3);
            t5 = *(int *)0x8C1ADC7C;
            t10 = t5;
        } else {
            t6 = *(int *)0x8C1ADC70;
            nlObjPut(t6);
            t8 = *(int *)0x8C1ADC78;
            t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
    } else {
        nlObjPut(0xC9034C0);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t14 = *(int *)0x8C1ADC84;
            t16 = t14;
        } else {
            t15 = *(int *)0x8C1ADC80;
            t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
    }
    return t18;
}

int stageJpnScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1ADD58));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1ADD80));
    return nlObjPut(t4);
}

int stageRusScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AE340));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AE368));
    return nlObjPut(t4);
}

int stageEspScoreDigits(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AEC58));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AEC80));
    return nlObjPut(t4);
}

int sprStartLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AECF4;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12461C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t5 = *(int *)0x8C1AECF8;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AECF8 = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t6 = *(int *)0x8C1AECF4;
        *(unsigned int *)0x8C1AECF4 = (t6 + 0x1);
    }
    return sprStartInit();
}

int sprSet109Load(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AECFC;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12486C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x6);
        *(unsigned int *)0x8C1AECFC = 0x1;
        return sprSet109Init();
    }
    return 0;
}

int sprAdvLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AED00;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12465C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t5 = *(int *)0x8C1AED04;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AED04 = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x38);
        t6 = *(int *)0x8C1AED00;
        *(unsigned int *)0x8C1AED00 = (t6 + 0x1);
    }
    return sprAdvInit();
}

int sprMatchLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED08;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12473C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t5 = *(int *)0x8C1AED08;
        *(unsigned int *)0x8C1AED08 = (t5 + 0x1);
    }
    return sprMatchInit();
}

int sprWtcLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED10;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
        *(unsigned int *)0x8C1AED10 = 0x1;
    }
    return thunk_selCopyLocalConstants();
}

int sprWtcFree(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1AED10;
    t5 = 0x8C1AED10;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
        *(unsigned int *)0x8C1AED10 = 0x0;
        t5 = t4;
    }
    return t5;
}

int sprSet266Load(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED14;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C1AED14 = 0x1;
    }
    return sprSet266InitThunk();
}

int sprSet266Free(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1AED14;
    t5 = 0x8C1AED14;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C1AED14 = 0x0;
        t5 = t4;
    }
    return t5;
}

int sprCommonLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AED18;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12477C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t5 = *(int *)0x8C1AED1C;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AED1C = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
        t6 = *(int *)0x8C1AED18;
        *(unsigned int *)0x8C1AED18 = (t6 + 0x1);
    }
    return sprCommonInit();
}

int sprSet163FreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprSet163Free(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xA);
    return t1;
}

int sprSet173Setup(int a4)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int stk[21];

    *(unsigned int *)(((int)stk + 20)) = a4;
    t0 = *(int *)0x8C124930;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x1C)) = t0;
    t1 = *(int *)0x8C12492C;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x18)) = t1;
    t2 = *(int *)0x8C124928;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x14)) = t2;
    t3 = *(int *)0x8C124924;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x10)) = t3;
    t4 = *(int *)0x8C124920;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0xC)) = t4;
    t5 = *(int *)0x8C12491C;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x8)) = t5;
    t6 = *(int *)0x8C124918;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x4)) = t6;
    t7 = *(int *)0x8C124914;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x0)) = t7;
    t8 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 24)) = ((t8 << 2) + 0x8C1248CC);
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)((((t8 << 2) + 0x8C1248CC) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = ((((t9 << 2) + t9) << 2) << 2);
    *(unsigned int *)(((int)stk + 32)) = (((((t9 << 2) + t9) << 2) << 2) + 0x8C37C2BC);
    sprInitRectF((((((t9 << 2) + t9) << 2) << 2) + 0x8C37C2BC), t10, (((int)stk + 20) + 0x10), 0x80, 0x80, 0x0);
    t12 = *(int *)(((int)stk + 24));
    t13 = *(int *)(((int)stk + 28));
    t14 = *(int *)((t12 + 0x0));
    t15 = sprInitRectF((t13 + 0x8C37C85C), t14, (((int)stk + 20) + 0x10), 0x80, 0x80, 0x1);
    t16 = *(int *)(((int)stk + 32));
    t17 = *(int *)((t16 + 0x34));
    *(unsigned int *)((t16 + 0x34)) = (t17 | 0x5);
    t18 = *(int *)(((t13 + 0x8C37C85C) + 0x34));
    *(unsigned int *)(((t13 + 0x8C37C85C) + 0x34)) = (t18 | 0x5);
    *(unsigned int *)(((t13 + 0x8C37C85C) + 0x28)) = 0xFFFFC000;
    return t15;
}


int sprSet173FreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprSet173Free(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    return t1;
}

void sprSet173Restore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C1248CC;
    t1 = 0x8C1AED70;
    do {
        t2 = *(int *)((t1 + 0x0));
        if (t2 != 0) {
            t3 = *(int *)((t0 + 0x0));
            sprTexRestore(t3);
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
    } while ((unsigned int)t1 < (unsigned int)0x8C1AEDB8);
}

void sprCommonRestore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED18;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12477C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
    }
}

void sprMatchRestore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED08;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12473C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
    }
}

void sprAdvRestore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED00;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12465C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x38);
    }
}

void sprStartRestore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AECF4;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12461C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
    }
}

void sprWtcRestore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED10;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
    }
}

void sprSet266Restore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED14;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
    }
}

int sprSet280FreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprSet280Free(t0);
        t0 = (t0 + 0x1);
    } while ((unsigned int)t0 < (unsigned int)0x3C);
    return t1;
}

void sprSet280Restore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = 0x8C37CDFC;
    t2 = 0x8C37CDFC;
    do {
        t3 = *(int *)((t1 + 0x0));
        if (t3 != 0) {
            t4 = *(int *)((t2 + 0x0));
            sprTexRestore(t4);
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x33);
}

int sprSet322FreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = sprSet322Free(t0);
        t0 = (t0 + 0x1);
    } while ((unsigned int)t0 < (unsigned int)0x8);
    return t1;
}

void sprSet322Restore(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = 0x8C37CEEC;
    t2 = 0x8C124A40;
    do {
        t3 = *(int *)((t1 + 0x0));
        if (t3 != 0) {
            t4 = *(int *)((t2 + 0x0));
            sprTexRestore(t4);
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8);
}

void sprSet331Load(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C37CF0C;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C37CF0C = 0x1;
    }
}

int sprSet331Free(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37CF0C;
    t5 = 0x8C37CF0C;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C37CF0C = 0x0;
        t5 = t4;
    }
    return t5;
}

int sprSet331Restore(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37CF0C;
    t5 = 0x8C37CF0C;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = sprTexRestore(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        t5 = t4;
    }
    return t5;
}


void sprSet192Load(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0x8C37DA54 = 0x12;
    t0 = *(int *)0x8C37DA50;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124A78;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x12);
        sprSet192Setup();
        *(unsigned int *)0x8C37DA50 = 0x1;
    }
}

int sprSet192Free(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37DA50;
    t5 = 0x8C37DA50;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A78;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x12);
        *(unsigned int *)0x8C37DA50 = 0x0;
        t5 = t4;
    }
    return t5;
}

int charaTexFreeAll(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;

    t0 = 0x0;
    do {
        charaTexFree(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    t2 = 0x0;
    do {
        t3 = 0x8C1AF8A4;
        do {
            *(unsigned int *)((t3 + (t2 << 2))) = 0x0;
            t3 = (t3 + 0x70);
        } while ((unsigned int)t3 < (unsigned int)0x8C1AFA64);
        t4 = (t2 << 2);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0x1C);
    t6 = 0x8C37DA58;
    do {
        *(unsigned int *)((t6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0xC)) = 0x0;
        *(unsigned int *)((t6 + 0x10)) = 0x1;
        t6 = (t6 + 0x14);
    } while ((unsigned int)t6 < (unsigned int)0x8C37DAA8);
    return t4;
}


int commonSprInitAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = commonSprInit(((((((t0 << 2) + t0) << 2) << 2) + 0x8C37DBCC) + 0x50), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x13);
    return t1;
}

void menuSprInitGroup(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)(((((t0 << 2) << 2) + 0x8C1B2004) + 0xC));
            if ((int)t1 >= (int)t2) break;
            menuSprInit((((((t1 << 2) + t1) << 2) << 2) + ((t0 * 0x1E0) + 0x8C37E20C)), t1, t0);
            t1 = (t1 + 0x1);
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
}


int netJudgeDraw(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t3;
    int t5;
    float u8;
    float u9;
    float u10;
    int t12;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t1 = *(int *)(((t0 << 2) + 0x8C1D0DF0));
        if (t1 != 0) {
            t2 = *(int *)0x8C287C60;
            t4 = 0x8C1D0DF0;
            if (t2 == 0) {
                t3 = motionAdvanceSimple(0x8C38A25C);
                t4 = t3;
            }
            t5 = *(int *)0x8C287ADC;
            if ((int)t5 <= (int)0x2) {
                colliObjEntry(0x8C38A81C);
                nlPushMatrix(0x0);
                u8 = *(float *)0x8C38A804;
                u9 = *(float *)0x8C38A800;
                u10 = *(float *)0x8C38A7FC;
                nlTranslate(u10, u9, u8);
                t12 = *(short *)0x8C38A808;
                nlRotateAY(t12);
                netJudgePose(0x8C38A258);
                return nlPopMatrix(0x1);
            }
            return t4;
        }
        return 0x8C1D0DF0;
    }
    return 0;
}

/* manual: the original is one chain of tests whose branches meet at a shared tail (netJudgeUpdate, then netJudgeDraw); the
   generated form copied that tail into every path (2,664 bytes for 114). r0 at each early return is the value last tested. */
int netJudgeExec(int a4)
{
    int v;
    if (*(int *)0x8C421F60 != 0) {
        v = *(int *)0x8C29B27C;
        if (v != 1 && v != 0 && v != 3) {
            return v;
        }
        if (*(int *)0x8C29B27C == 0) {
            v = *(int *)0x8C295DF4;
            if (v != 0 && v != 6 && v != 12 && v != 14) {
                return v;
            }
        }
    }
    if (*(int *)0x8C287D5C == 3) {
        return 3;
    }
    v = *(int *)0x8C37EA80;
    if (v & 4) {
        return v;
    }
    if (*(int *)0x8C20D14C == 0 && *(int *)0x8C20D150 == 3) {
        return 3;
    }
    netJudgeUpdate(a4);
    return netJudgeDraw();
}


int staffMorphReset(void)
{
    int t16;
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

    t16 = 0x8C38AED0;
    if (0x8C38AED0 != 0) {
        t0 = 0x8C38AED0;
        t1 = 0x8C38AED0;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)0x8C1D0194;
            if ((int)t2 >= (int)t3) break;
            t4 = *(int *)((t1 + 0x30));
            t2 = (t2 + 0x1);
            t5 = *(int *)((t1 + 0x0));
            t0 = t5;
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880000 + t0)) = (t4 | 0x1);
            t6 = *(int *)((t1 + 0x0));
            t0 = t6;
            t7 = *(int *)((t1 + 0x34));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880004 + t0)) = t7;
            t8 = *(int *)((t1 + 0x0));
            t0 = t8;
            t9 = *(int *)((t1 + 0x38));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880008 + t0)) = t9;
            t10 = *(int *)((t1 + 0x30));
            t11 = *(int *)((t1 + 0x0));
            t0 = t11;
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880320 + t0)) = (t10 | 0x1);
            t12 = *(int *)((t1 + 0x0));
            t0 = t12;
            t13 = *(int *)((t1 + 0x34));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880324 + t0)) = t13;
            t14 = *(int *)((t1 + 0x0));
            t0 = t14;
            t15 = *(int *)((t1 + 0x38));
            t1 = (t1 + 0x3C);
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880328 + t0)) = t15;
        }
        t16 = t0;
    }
    return t16;
}


int lightVec3EqualArgs(void)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[1];

    u0 = *(float *)((((int)stk + 4) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    if (u0 == u1) {
        u2 = *(float *)((((int)stk + 4) + 0x4));
        u3 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
        if (u2 == u3) {
            u4 = *(float *)((((int)stk + 4) + 0x8));
            u5 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
            if (u4 == u5) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int mtxGetYaw(int a4)
{
    float u1;
    float u2;
    int t3;
    int t4;
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetMatrix((((int)stk + 4) + 0x4));
    u1 = *(float *)(((int)stk + 40));
    u2 = *(float *)(((int)stk + 48));
    t3 = *(int *)(((int)stk + 4));
    t4 = nlArcTan2(u1, u2);
    *(unsigned int *)((t3 + 0x0)) = t4;
    return t4;
}

int netTouchFlag(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t4;
    int t6;

    t0 = *(int *)0x8C287B3C;
    *(unsigned int *)0x8C287B3C = (t0 | 0x20);
    if ((unsigned int)0x8C181628 < (unsigned int)0x8C181638) {
        t1 = 0x8C181628;
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t1 = (t1 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x8C181638) break;
                continue;
            }
            return (t0 | 0x20);
        }
        t3 = *(int *)((a4 + 0x24));
        if (t3 != 0) {
            if (t3 == 2) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
                *(unsigned int *)((a4 + 0x20)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                *(unsigned int *)((a4 + 0x1C)) = 0x1;
            }
            t4 = t3;
        } else {
            *(unsigned int *)((a4 + 0x18)) = 0x1;
            *(unsigned int *)((a4 + 0x20)) = 0x1;
            t4 = (t0 | 0x20);
        }
        t7 = t4;
    } else {
        t5 = *(int *)((a4 + 0x24));
        if (t5 != 0) {
            if (t5 == 2) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
                *(unsigned int *)((a4 + 0x20)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                *(unsigned int *)((a4 + 0x1C)) = 0x1;
            }
            t6 = t5;
        } else {
            *(unsigned int *)((a4 + 0x18)) = 0x1;
            *(unsigned int *)((a4 + 0x20)) = 0x1;
            t6 = (t0 | 0x20);
        }
        t7 = t6;
    }
    return t7;
}

int pauseQuit(void)
{
    int t1;
    int t5;

    *(unsigned int *)0x8C421F64 = 0x0;
    *(unsigned int *)0x8C1D1278 = 0x1;
    gameModeSet(0x0, 0x2, 0x0);
    for (;;) {
        t1 = resSprTitleRead();
        if (t1 == 1) break;
        msgWinStep();
        fadeDraw();
        nlWaitVSync();
    }
    t5 = titleSprTexLoad();
    *(unsigned int *)0x8C38BA14 = 0x1;
    return t5;
}

void sprPutCentered(int a4, int a5, int a6, int a7, int a8, Stk3 c, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    int t5;
    int t6;
    int stk[8];
    float R1004;

    R1004 = *(float *)((int)stk + 4);

    u0 = (*(float *)&c.w[0]);
    R1004 = (u0 - (f4 / (1.0f + 1.0f)));
    u1 = (*(float *)&c.w[1]);
    (*(float *)((int)stk + 8)) = (u1 - (f5 / (1.0f + 1.0f)));
    u2 = R1004;
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (float)(int)u2;
    *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = (float)(int)(u1 - (f5 / (1.0f + 1.0f)));
    u3 = (*(float *)&c.w[2]);
    *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = u3;
    t4 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void msgWinSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    *(unsigned int *)0x8C1D175C = a4;
    *(unsigned int *)0x8C1D1760 = a5;
    *(unsigned int *)0x8C38BA54 = a8;
    *(unsigned int *)0x8C38BA58 = a9;
    *(unsigned int *)0x8C38BA5C = a10;
}


int seFootstepPlay(int a4, int a5)
{
    int t0;
    int t13;
    int t1;
    int t12;
    int t2;
    int t11;
    int t3;
    int t10;
    int t6;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0x8C421F60;
    t13 = t0;
    if (t0 == 0) {
        t1 = *(int *)0x8C38BA70;
        t12 = t1;
        if (t1 != 0) {
            t2 = *(int *)0x8C38BA74;
            t11 = t2;
            if (t2 != 0) {
                t3 = *(int *)0x8C287B44;
                t10 = t3;
                if (t3 != 7) {
                    if (a4 != 0) {
                        t6 = a4;
                        if (a4 == 1) {
                            t4 = 0x206A9;
                            if (a5 != 0) {
                                t4 = 0x806A9;
                            }
                            t5 = nlsndSeqRequest(t4);
                            t6 = t5;
                        }
                        t9 = t6;
                    } else {
                        t7 = 0x106A9;
                        if (a5 != 0) {
                            t7 = 0x706A9;
                        }
                        t8 = nlsndSeqRequest(t7);
                        t9 = t8;
                    }
                    t10 = t9;
                }
                t11 = t10;
            }
            t12 = t11;
        }
        t13 = t12;
    }
    return t13;
}

int sndStopAll(void)
{
    int t1;

    nlsndSystemControl(0x0, 0x300A0, 0x0);
    t1 = 0x0;
    do {
        *(unsigned int *)((0x8C40C288 + t1)) = 0x0;
        *(unsigned int *)((0x8C40C2A8 + t1)) = 0x0;
        t1 = (t1 + 0x4);
    } while ((unsigned int)t1 < (unsigned int)0x20);
    return t1;
}

void sndStopAllExcept(int a4)
{
    int t0;

    t0 = 0x0;
    do {
        if (t0 != a4) {
            nlsndSystemControl(t0, 0x1300A0, 0x0);
            *(unsigned int *)((0x8C40C288 + (t0 << 2))) = 0x0;
            *(unsigned int *)((0x8C40C2A8 + (t0 << 2))) = 0x0;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
}

int sndFadeFlagsClear(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C40C288 + t0)) = 0x0;
        *(unsigned int *)((0x8C40C2A8 + t0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x20);
    return t0;
}

int sndSeStage(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C38BA70;
    if (t0 != 0) {
        t1 = *(int *)0x8C38BA74;
        if (t1 != 0) {
            t2 = *(int *)0x8C402C04;
            t3 = *(int *)(((t2 * 0x54) + 0x8C1D2B7C));
            return nlsndSeqRequest(t3);
        }
        return 0;
    }
    return 0;
}

int sndJingleA1(void)
{
    int t0;
    int t4;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        strmVoiceQueueClear();
        sndStopAll();
        nlsndSeqRequest(0x10AA9);
        t4 = *(int *)0x8C38BA64;
        return nlsndSystemControl(0x5, 0x10A0, t4);
    }
    return 0;
}

int sndCrowdReact(int a4)
{
    int t3;
    int t8;
    int t7;
    int t10;
    int t9;

    if (a4 == 1) {
        nlsndSeqRequest(0x803A9);
    }
    if (a4 == 2) {
        nlsndSystemControl(0x1, 0x1300A0, 0x0);
        t3 = *(int *)0x8C38BA64;
        nlsndSystemControl(0x1, 0x10A0, t3);
        nlsndSeqRequest(0x903A9);
    }
    t8 = a4;
    if (a4 == 3) {
        t7 = nlsndSeqRequest(0x203A9);
        t8 = t7;
    }
    t10 = t8;
    if (a4 == 0) {
        t9 = nlsndSeqRequest(0x303A9);
        t10 = t9;
    }
    return t10;
}


void endingSprAnimInit(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)(((((t0 << 2) << 2) + 0x8C1D2BE8) + 0xC));
            if ((int)t1 >= (int)t2) break;
            endingSprAnimStep((((((t1 << 2) + t1) << 2) << 2) + ((t0 * 0x960) + 0x8C407FDC)), t1, t0);
            t1 = (t1 + 0x1);
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x7);
}

int endingCharaTexFreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = endingCharaTexFree(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
    return t1;
}

int endSprCharaTexFreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = endSprCharaTexFree(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
    return t1;
}


int endSprStageTexSet(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[4];

    t0 = *(int *)0x8C125E68;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t1 = *(int *)0x8C125E64;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t1;
    t2 = *(int *)0x8C1891E8;
    if (t2 == 7) {
        t3 = *(int *)((((int)stk + 4) + 0x4));
        *(unsigned int *)0xCB40130 = t3;
        t5 = t3;
    } else {
        t4 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)0xCB40130 = t4;
        t5 = t2;
    }
    return t5;
}

void strmStateReset(void)
{
    int t0;
    int t1;

    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C220 = 0x0;
    *(float *)0x8C40C238 = 0.0f;
    *(float *)0x8C40C234 = 0.0f;
    *(float *)0x8C40C228 = 0.0f;
    *(float *)0x8C40C224 = 0.0f;
    *(unsigned int *)0x8C40C22C = 0x0;
    t0 = 0x0;
    do {
        t1 = (0x8C40C240 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x24);
}

int strmVoiceQueueAdd(int a4)
{
    int t6;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t6 = a4;
    if (a4 != -1) {
        t0 = *(int *)0x8C40C230;
        if (t0 != 3) {
            *(unsigned int *)0x8C40C230 = 0x3;
            *(unsigned int *)0x8C40C23C = 0xFFFFFFFF;
            *(unsigned int *)0x8C40C240 = a4;
            t4 = t0;
        } else {
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)((t1 + 0x8C40C240));
                if (t3 == -1) break;
                t1 = (t1 + 0x4);
                t2 = (t2 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x20) {
                    return t3;
                }
            }
            *(unsigned int *)(((t2 + 0x8C40C240) + 0x0)) = a4;
            t4 = t3;
        }
        t6 = t4;
    }
    return t6;
}

int strmVoiceQueueReset(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = (0x8C40C240 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x24);
    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C23C = 0x0;
    return strmScoreReset();
}

void strmBgmVolTo(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C38BA60;
    if ((int)a4 > (int)t0) {
        *(unsigned int *)0x8C40C220 = 0x5;
        *(unsigned int *)0x8C40C268 = a4;
    }
    t1 = *(int *)0x8C38BA60;
    if ((int)a4 < (int)t1) {
        *(unsigned int *)0x8C40C220 = 0x4;
        *(unsigned int *)0x8C40C268 = a4;
    }
}

int strmBgmPlayStage(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1891E8;
    t1 = *(int *)(((t0 << 2) + 0x8C1D48C0));
    return strmBgmPlay(t1);
}

int strmCallPair(int a4)
{
    int t0;
    int t1;
    int t2;

    if ((int)a4 >= (int)0x1) {
        if ((int)a4 <= (int)0x2) {
            t0 = *(int *)0x8C1891E8;
            t1 = *(int *)((0x8C1D4770 + (t0 << 2)));
            t2 = *(int *)(((((a4 - 1) << 2) + (0x8C1D4A44 + ((t1 << 2) << 1))) + 0x0));
            if (t2 != -1) {
                return strmVoicePlay(0x9, t2);
            }
            return t2;
        }
        return 0;
    }
    return 0;
}


int strmCrowdFadeOut(void)
{
    int t0;

    t0 = *(int *)0x8C40C28C;
    if (t0 != 1) {
        return evPackFade(0x1, 0x5A, 0x0);
    }
    return t0;
}


int evSeDelayed(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    float u1;

    t0 = set_event(0x28, 0x8C0D9420);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((float)a4 / u1);
    *(unsigned int *)((t0 + 0x18)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a5;
    *(unsigned int *)((t0 + 0x20)) = a8;
    *(unsigned int *)((t0 + 0x24)) = a7;
    return t0;
}

int evSeRetry(int a4, int a5)
{
    int t0;
    float u1;

    t0 = set_event(0x20, 0x8C0D9504);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((float)a4 / u1);
    *(unsigned int *)((t0 + 0x18)) = a5;
    return t0;
}

int evPlayerCallTask(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = serveGetServer();
    t1 = *(int *)0x8C185410;
    if (t1 == 0) {
        if ((int)t0 >= 0) {
            if ((int)t0 < (int)0x4) {
                t2 = *(int *)((0x8C38BA84 + (t0 << 2)));
                if (t2 == 0) {
                    t3 = *(int *)((a4 + 0x14));
                    *(unsigned int *)((a4 + 0x14)) = (t3 - 1);
                    if ((int)(t3 - 1) <= 0) {
                        strmCallPlayerOnce();
                        *(unsigned int *)0x8C1D476C = 0x0;
                        return nlCloseEvent2(a4);
                    }
                    return (t0 << 2);
                }
                *(unsigned int *)0x8C1D476C = 0x0;
                return nlCloseEvent2(a4);
            }
            *(unsigned int *)0x8C1D476C = 0x0;
            return nlCloseEvent2(a4);
        }
        *(unsigned int *)0x8C1D476C = 0x0;
        return nlCloseEvent2(a4);
    }
    *(unsigned int *)0x8C1D476C = 0x0;
    return nlCloseEvent2(a4);
}

void evPlayerCallStart(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u8;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C1D1274;
        if (t1 == 0) {
            t2 = *(int *)0x8C287B00;
            t3 = *(int *)0x8C287C64;
            if (t2 != t3) {
                t4 = *(int *)0x8C287B04;
                if (t4 != t3) {
                    t5 = *(int *)0x8C287B10;
                    if (t5 == 0) {
                        t6 = *(int *)0x8C287B14;
                        if (t6 == 0) {
                            t7 = set_event2(0x18, 0x8C0D98C6);
                            u8 = *(float *)0x8C23D204;
                            *(unsigned int *)((t7 + 0x14)) = (int)((float)a4 / u8);
                        }
                    }
                }
            }
        }
    }
}

void evFlashStart(float f4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1D565C;
    if (t0 == 0) {
        *(unsigned int *)0x8C1D565C = 0x1;
        t1 = set_event(0x1C, 0x8C0DA11C);
        *(unsigned int *)((t1 + 0x14)) = 0x5;
        *(float *)((t1 + 0x18)) = f4;
    }
}


int eepromVmuLoad(int a4)
{
    int t0;
    int t1;
    int t11;
    int t2;
    int t3;
    int t9;
    int t4;
    int t5;
    int stk[29];

    t0 = buGetFileSize(a4, 0x8C126AB0);
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = buLoadFile(a4, 0x8C126AB0, 0x8C41BE14, t0);
    t11 = t1;
    if (t1 == 0) {
        do {
            t2 = buStat(a4);
        } while (t2 == -1);
        t3 = buGetLastError(a4);
        t9 = t3;
        if (t3 == 0) {
            t4 = buAnalyzeBackupFileImage((((int)stk + 4) + 0x4), 0x8C41BE14);
            if (t4 == 0) {
                t5 = *(int *)(((int)stk + 96));
                memmove(0x8C40C2F4, t5, 0x128);
            }
            t9 = t4;
        }
        t11 = t9;
    }
    return t11;
}

int eepromGetDeuceMode(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 2) {
        t1 = *(int *)0x8C2FBE28;
        return t1;
    }
    if (t0 != 1) {
        return eepromGetDeuce();
    }
    return eepromGetVsDeuce();
}

int eepromIsMatchMax(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 0) {
        t1 = *(signed char *)0x8C40C2F6;
        if (((unsigned char)t1 + 0x1) != 7) {
            return 0x0;
        }
        return 0x1;
    }
    t2 = *(signed char *)0x8C40C2F7;
    if (((unsigned char)t2 + 0x1) == 7) {
        return 0x1;
    }
    return 0x0;
}


int BupRequestSave(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t4;

    BupCardWarning();
    t1 = *(int *)0x8C40C698;
    if (t1 != 0) {
        t2 = *(int *)0x8C40C6A4;
        if (t2 == 0) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x0));
                if (t4 == 0) break;
                t3 = (t3 + 0x1);
            }
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x0)) = 0x1;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x4)) = a4;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x8)) = a5;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0xC)) = a6;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x10)) = a7;
            padLcdSetMode(0xC);
        }
    }
    return 0x0;
}


int shopPowi(int a4, int a5)
{
    int t4;
    int t0;
    int t1;

    t4 = 0x1;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = 0x1;
        do {
            t0 = (t0 + 0x1);
            t1 = (t1 * a4);
        } while ((int)t0 < (int)a5);
        t4 = t1;
    }
    return t4;
}

int shopDrawCatIcon(int a4, int a5, int a6, int a7, Stk3 s, float f4)
{
    int t4;
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t24;
    int t19;
    int t14;
    int t9;
    int stk[9];
    int R1004;
    int R1008;
    int R1012;
    int R1036;
    int R1040;
    int R1044;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);

    if (a4 != 1) {
        if (a4 != 6) {
            if (a4 != 2) {
                if (a4 != 0) {
                    if (a4 != 4) {
                        t4 = a4;
                        if (a4 == 5) {
                            t0 = R1044;
                            R1012 = t0;
                            t1 = R1040;
                            R1008 = t1;
                            t2 = R1036;
                            R1004 = t2;
                            t3 = sprListPut(0x8C1DAA64, 0x1, 0x0, s, 1.0f, 1.0f, f4);
                            t4 = t3;
                        }
                        t9 = t4;
                    } else {
                        t5 = R1044;
                        R1012 = t5;
                        t6 = R1040;
                        R1008 = t6;
                        t7 = R1036;
                        R1004 = t7;
                        t8 = sprListPut(0x8C1DA9F8, 0x1, 0x0, s, 1.0f, 1.0f, f4);
                        t9 = t8;
                    }
                    t14 = t9;
                } else {
                    t10 = R1044;
                    R1012 = t10;
                    t11 = R1040;
                    R1008 = t11;
                    t12 = R1036;
                    R1004 = t12;
                    t13 = sprListPut(0x8C1DA98C, 0x1, 0x0, s, 1.0f, 1.0f, f4);
                    t14 = t13;
                }
                t19 = t14;
            } else {
                t15 = R1044;
                R1012 = t15;
                t16 = R1040;
                R1008 = t16;
                t17 = R1036;
                R1004 = t17;
                t18 = sprListPut(0x8C1DAAD0, 0x1, 0x0, s, 1.0f, 1.0f, f4);
                t19 = t18;
            }
            t24 = t19;
        } else {
            t20 = R1044;
            R1012 = t20;
            t21 = R1040;
            R1008 = t21;
            t22 = R1036;
            R1004 = t22;
            t23 = sprListPut(0x8C1DA920, 0x1, 0x0, s, 1.0f, 1.0f, f4);
            t24 = t23;
        }
        t29 = t24;
    } else {
        t25 = R1044;
        R1012 = t25;
        t26 = R1040;
        R1008 = t26;
        t27 = R1036;
        R1004 = t27;
        t28 = sprListPut(0x8C1DA8B4, 0x1, 0x0, s, 1.0f, 1.0f, f4);
        t29 = t28;
    }
    return t29;
}


int resWtcShopLoadStep(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int t19;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = resWtcShopPolyRead();
        if (t2 == 1) {
            t3 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t3 + 0x1);
        }
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            t5 = resWtcShopTexRead();
            if (t5 == 1) {
                resWtcShopObjTexLoad();
                t7 = *(int *)0x8C343FF4;
                *(unsigned int *)0x8C343FF4 = (t7 + 0x1);
            }
        } else {
            if (t4 == 2) {
                t9 = resFukuPolyRead();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t10 + 0x1);
                }
            } else {
                if (t4 == 3) {
                    t11 = resWtcShopSprRead();
                    if (t11 == 1) {
                        resWtcShopSprTexLoad();
                        t13 = *(int *)0x8C343FF4;
                        *(unsigned int *)0x8C343FF4 = (t13 + 0x1);
                        *(unsigned int *)0x8C287C50 = 0x1;
                        *(unsigned int *)0x8C343FE8 = 0x1;
                        *(unsigned int *)0x8C301970 = 0x0;
                    }
                }
            }
        }
    }
    t19 = *(int *)0x8C343FE8;
    return t19;
}

int resWtcShopObjTexLoad(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC508;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC508 = 0x1;
        nlSetCommonTextureOffset(0x3000);
        t2 = 0x0;
        t3 = 0x8C1DC4F8;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutLoadTexture(t4, 0x8C13364C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x4);
        t6 = t5;
    }
    return t6;
}

int resEndObjTexLoad(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC518;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC518 = 0x1;
        nlSetCommonTextureOffset(0x3100);
        t2 = 0x0;
        t3 = 0x8C1DC50C;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutLoadTexture(t4, 0x8C132F2C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x3);
        t6 = t5;
    }
    return t6;
}


int resTitleObjTexLoad(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1DC56C;
    t5 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC56C = 0x1;
        t1 = 0x0;
        t2 = 0x8C1DC534;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = nlObjPutLoadTexture(t3, 0x8C1DC570);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xE);
        t5 = t4;
    }
    return t5;
}


int resTitleLoadStep(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t9;
    int t14;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = resTitlePolyRead();
        if (t2 == 1) {
            t3 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t3 + 0x1);
            *(unsigned int *)0x8C34A1EC = 0x0;
        }
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            resTitleObjTexLoad();
            t6 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t6 + 0x1);
        } else {
            if (t4 == 2) {
                t7 = resTitleSprRead();
                if (t7 == 1) {
                    resTitleSprTexLoad();
                    t9 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t9 + 0x1);
                    *(unsigned int *)0x8C34A1EC = 0x0;
                    *(unsigned int *)0x8C287C50 = 0x1;
                    *(unsigned int *)0x8C343FE8 = 0x1;
                    *(unsigned int *)0x8C301970 = 0x0;
                }
            }
        }
    }
    t14 = *(int *)0x8C343FE8;
    return t14;
}

/* manual: the call passes the argument the original sets (r4, r5: the texture slot and its entry); the callee is a trampoline into the NAOMI library, which reads none
   itself, so the generated call passed none and the proof never compared it (as gdFsInit in sysInit). */
int resCautionTexGarbage(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    nlSetCommonTextureOffset(0x0);
    t1 = 0x0;
    t2 = 0x8C1DC590;
    t3 = 0x8C1DC608;
    for (;;) {
        t4 = *(int *)((0x8C1DC608 + (t1 << 2)));
        if (t4 == 0x154) break;
        t5 = *(int *)((t2 + 0x0));
        if (t5 != 0) {
            t6 = *(int *)((t3 + 0x0));
            nlSpriteSetGarbagedTextureOnce(0x8C18281C, t6);
        }
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        t1 = (t1 + 0x1);
    }
    return (t1 << 2);
}

int resCautionFreeAll(void)
{
    int t0;
    int t6;
    int t1;
    int t5;
    int t2;
    int t4;
    int t3;

    t0 = 0x0;
    do {
        t6 = t0;
        if (t0 != 1) {
            t1 = *(int *)((0x8C1DC590 + (t0 << 2)));
            t5 = (t0 << 2);
            if (t1 != 0) {
                t2 = *(int *)0x8C1D175C;
                t4 = (t0 << 2);
                if (t0 != t2) {
                    t3 = resCautionTexFree(t0);
                    t4 = t3;
                }
                t5 = t4;
            }
            t6 = t5;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
    return t6;
}

int titleFrameCue(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t5;
    int t7;
    int t8;

    t0 = *(int *)0x8C20D15C;
    t1 = *(int *)0x8C1DC714;
    if (t0 == t1) {
        sndSe0B_02();
    }
    t3 = *(int *)0x8C20D15C;
    t4 = *(int *)0x8C1DC6AC;
    t6 = 0x8C1DC6AC;
    if (t3 == (t4 + 0x1)) {
        t5 = sndSe0B_00();
        t6 = t5;
    }
    t7 = *(int *)0x8C20D15C;
    t8 = *(int *)0x8C1DC6B4;
    if (t7 == (t8 - 9)) {
        return sndSe0B_01();
    }
    return t6;
}


