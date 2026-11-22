/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetBlkSmpl(int);
int ADXB_GetFormat(int);
int ADXB_GetLpEndOfst(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartOfst(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetSfreq(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Stop(int);
int ADXF_Init(void);
int ADXPD_Destroy(int);
int ADXPD_Reset(int);
int ADXSJD_Init(void);
int ADXSTM_Init(void);
int ADXSTM_SetBufSize(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXSTM_Start(int);
int CalcShadow2Matrix(int);
int ConvertSwitch(int);
int ConvertSwitch2(void);
int ADXT_SetReloadSct(int, int);
int ADXT_SetAutoRcvr(int, int);
int adxf_purge_all(int);
int mwlSbGetStreamParam(int, int, int);
int FcvPlay(int, int, float);
int GetMenuMode(int);
int GetRotVec(int);
int Init_Standard(int);
int MainLoop(void);
int Put_GearBox(void);
int SJMEM_Init(void);
int SJRBF_Init(void);
int SJUNI_Init(void);
int ShallWeHaveSomeRelaxation(float);
int Sound_Init(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxt_start_sj(int, int);
int buFbrDestroyServer(int);
int buFbrEndFiber(void);
int buFbrExecFiberServer(int);
int buFbrSleepVFiber(void);
int buUnmount(void);
int callTryAgain(void);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int kdSetHandler(int, int);
int kmSetFogTable(void);
int kmSetHSyncLine(void);
int kmiDiscardRenderPipeline(void);
int kmiResetBoard(void);
int kmiWriteRegister(void);
int memmove(int, int, int);
int memset(int, int, int);
int menuPutHelpBar(int, float, float);
int mwRnaCreate(void);
int mwRnaDiscardData(void);
int mwRnaExecServer(void);
int mwRnaFinish(void);
int mwRnaGetBitPerSmpl(void);
int mwRnaGetOutPan(void);
int mwRnaGetOutVol(void);
int mwRnaGetSfreq(void);
int mwRnaGetStat(void);
int mwRnaGetTime(void);
int mwRnaInit(void);
int mwRnaSetBitPerSmpl(void);
int mwRnaSetNumChan(void);
int mwRnaSetOutPan(void);
int mwRnaSetOutVol(void);
int mwRnaSetSfreq(void);
int mwRnaSetStartSmpl(void);
int mwRnaSetTransSw(void);
int mwRnaStart(void);
int mwRnaStop(void);
int njSetConstantAttr(void);
int nlArcTan2(int, float);
int nlCloseEvent(void);
int nlInitEvent(int);
int nlInnerProduct(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSprPut(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int, int, int);
int padReadSlot(int);
int padToAnalog(void);
int pfColor(int, int, int, int);
int pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int rankingInsert(void);
int syCfgExit(void);
int syCfgInit(int);
int thunk_mwRnaErrEntryFunc(int, int);
int vmsfb_exec(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_exit(void);
int vmsfs_exit(void);


int vmsfs_c_fiber2(void)
{
    return vmsfs_c_dispatch(0x2);
}


int vmsfs_c_fiber3(void)
{
    return vmsfs_c_dispatch(0x3);
}


int vmsfs_c_fiber4(void)
{
    return vmsfs_c_dispatch(0x4);
}


int vmsfs_c_fiber5(void)
{
    return vmsfs_c_dispatch(0x5);
}


int vmsfb_sleep(void)
{
    return buFbrSleepVFiber();
}


