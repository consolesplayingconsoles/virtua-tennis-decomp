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
int FUN_0c02c094(int, int);
int FUN_0c02e074(void);
int FUN_0c02e42a(void);
int FUN_0c03012c(void);
int FUN_0c03019a(void);
int FUN_0c0310a0(int, int, int);
int FUN_0c03b698(int);
int FUN_0c0527ec(void);
int FUN_0c052d28(void);
int FUN_0c053b76(void);
int FUN_0c053dec(void);
int FUN_0c0544a8(void);
int FUN_0c058ff0(int);
int FUN_0c05b044(void);
int FUN_0c072884(void);
int FUN_0c0728c8(void);
int FUN_0c072e36(void);
int FUN_0c072fe8(void);
int FUN_0c0738bc(void);
int FUN_0c080ae0(int, int, int);
int FUN_0c151cac(int, int, int);
int ADXT_SetReloadSct(int, int);
int ADXT_SetAutoRcvr(int, int);
int FUN_0c15fa1c(void);
int FUN_0c167c4c(void);
int FUN_0c16800c(void);
int adxf_purge_all(int);
int FUN_0c16c634(int);
int FUN_0c170880(void);
int FUN_0c1708b2(void);
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
int thunk_FUN_0c072fe8(void);
int thunk_FUN_0c169a20(void);
int thunk_mwRnaErrEntryFunc(int, int);
int vmsfb_exec(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_exit(void);
int vmsfs_exit(void);


void adxt_start_stm(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t8;

    t0 = *(short *)((a4 + 0x3C));
    t1 = *(short *)((a4 + 0x3E));
    t2 = *(int *)((a4 + 0x8));
    ADXSTM_SetBufSize(t2, (((t1 << 8) << 2) << 1), (((t0 << 8) << 2) << 1));
    t4 = *(int *)((a4 + 0x8));
    ADXSTM_SetEos(t4, 0x19);
    t6 = *(int *)((a4 + 0x8));
    ADXSTM_Start(t6);
    t8 = *(int *)((a4 + 0x10));
    adxt_start_sj(a4, t8);
    *(unsigned char *)((a4 + 0x2)) = 0x0;
}


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


void ADXSJD_Stop(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    ADXB_Stop(t0);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
}


int ADXSJD_GetLpEndOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpEndOfst(t0);
}


int ADXF_InitCache_P2_(int a4)
{
    int t1;

    adxf_purge_all(a4);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}


int vmsfb_sleep(void)
{
    return buFbrSleepVFiber();
}


void ADXB_Destroy(int a4)
{
    int t0;

    if (!(a4 == 0)) {
        t0 = *(int *)((a4 + 0x8));
        ADXPD_Destroy(t0);
        memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
        }
}


void ADXB_Reset(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x4));
    if ((t0 == 3)) {
        t1 = *(int *)((a4 + 0x8));
        ADXPD_Reset(t1);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        }
}


void mwlSbFreeWork(int a4)
{
    int t0;

    if (!(a4 == 0)) {
        t0 = *(int *)((a4 + 0x4));
        memset(t0, 0x0, 0x100);
        memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        }
}


void mwlSbGetFilter(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = mwlSbGetStreamParam(a4, 0x9, 0x0);
    *(unsigned short *)(((0x58 + a4) + 0x0)) = t0;
    t1 = mwlSbGetStreamParam(a4, 0xA, 0x0);
    *(unsigned short *)(((0x5A + a4) + 0x0)) = t1;
    t2 = *(short *)((a4 + 0x58));
    *(unsigned int *)((a5 + 0x0)) = t2;
    t3 = *(short *)((a4 + 0x5A));
    *(unsigned int *)((a6 + 0x0)) = t3;
}
