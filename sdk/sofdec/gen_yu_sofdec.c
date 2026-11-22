/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXT_Stop(int);
int nlUnitVector(int);
int SJMEM_Create(int, int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_sj(int, int);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuIsPage(int);
int dbgMenuSetValue(int, int, int);
int endingModelSet(int);
int endingSprAnimInit(void);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int gdGdcGetCmdStat(int, int);
int kmSetBorderColor(int, ...);
int kmyRegisterBGPlane(int);
int kmyiSetScreenSize(int);
int memset(int, int, int);
int motFileLoadStep(int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
float nlInnerProduct(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlObjPutLoadTexture(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSearchPalette(int, int);
int nlSetCommonTextureOffset(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateNV(int);
int nlTranslateV(int);
int nl_set_cnv_proj_pers(void);
int nlsndBlockMove(int, int, int);
int nlsndCheckPackIndex(int, int, int);
int nlsndCheckPackReloadError(int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSystemControl(int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitBlockMove(void);
int nlsnd_PL_WaitRequest(void);
int objListPut(int, int, int);
int playerInit(int, int);
int shopPowi(int, int);
int sndCrowdAmbStart(void);
int sndPack4Load(int);
int strmBgmPlay(int);
int syChainAddHandler(int, int, int, int);
int FUN_8c0d3804(int a4, int a5, int a6, int a7);
int FUN_8c1dd6e4(void);
int nlPerspectiveProj(int a4, int a5, int a6);
int FUN_8c0f2fd0(int a4, int a5);
int FUN_8c013d28(int a4);
int FUN_8c0e716e(int a4, int a5);
int ADXT_InsertSilence(int a4, int a5, int a6);
int kmiProcessVertex_01(int a4, int a5, int a6, int a7);
int gdFsDaPlayG(int a4, int a5, int a6);
int nlLookAtUp(int a4, int a5, int a6);
int FUN_8c1f5b60(void);
int nlMirrorDouble(int a4);
int kmyInitializeVGA(int a4);
int gdFsDaPlaySctG(int a4, int a5, int a6);
int nlParallelProj(int a4);
int adxt_trap_entry(int a4);
int nlObjPutCheckSideCulling(int a4);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int nlSysMetricsGetFrameBufferUser(int a4, int a5, int a6);
int nlLookAtUp_L(int a4, int a5, int a6);
int kmiProcessVertex_02(int a4, int a5, int a6, int a7);
int kmiProcessVertex_10(int a4, int a5, int a6, int a7);
int gdFsDaPauseG(void);
int gdDcfRepStat_(int a4, int a5);
int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9);
int nlFatalErrorTrap(int a4);
int nlsndPackReload(int a4, int a5);
int kmiProcessVertex_15(int a4, int a5, int a6, int a7);
int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackReloadBG(int a4, int a5, int a6);
int nlDispStripLoadPalette(int a4, int a5);
int nlsndPackLoadLock(int a4, int a5, int a6);


int ADXT_InsertSilence(int a4, int a5, int a6)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t5;
    register int t7;
    register int t13;
    register int t16;
    register int t19;
    register int t21;
    register int t27;
    register int t30;

    t0 = *(int *)((a4 + 0x14));
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (a6 + 0x1F);
    }
    t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, (((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8));
    t7 = (int)((int)(*(int *)(((int)stk + 16))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 12))), 0x0, (t7 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t7 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8), ((int)stk + 4));
    t13 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    t16 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 4));
    t19 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, ((((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)) - (t7 * ((((a5 << 2) << 1) + a5) << 1))), (((int)stk + 4) + 0x8));
    t21 = (int)((int)(*(int *)(((int)stk + 16))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 12))), 0x0, (t21 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 4) + 0x8), (t21 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 4) + 0x8), ((int)stk + 4));
    t27 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    t30 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 4));
    return (((((int)((int)((0x0 + (t7 * ((((a5 << 2) << 1) + a5) << 1))) + (t21 * ((((a5 << 2) << 1) + a5) << 1))) / (int)((((a5 << 2) << 1) + a5) << 1))) << 2) << 2) << 1);
}


int adxt_trap_entry(int a4)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t9;
    register int t19;
    register int t28;
    register int t31;
    register int t34;

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x4));
    t2 = ADXSJD_GetLpStartPos(t1);
    t3 = ADXSJD_GetLpStartOfst(t1);
    *(unsigned int *)(((int)stk + 8)) = (ADXSJD_GetLpEndPos(t1));
    ADXSJD_GetLpEndOfst(t1);
    t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, (*(int *)((a4 + 0x50))), (((int)stk + 8) + 0x4));
    if ((int)(*(int *)(((int)stk + 16))) < (int)(*(int *)((a4 + 0x50)))) {
        *(int *)((int)stk + 4) = 0x8C20AB08;
        ADXERR_CallErrFunc(0x8C20AB08);
    }
    t19 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    ADXSJD_SetTrapCnt(t1, 0x0);
    ADXSJD_SetTrapNumSmpl(t1, ((*(int *)(((int)stk + 8))) - t2));
    ADXSJD_SetTrapDtLen(t1, t3);
    ADXSJD_SetDecPos(t1, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0);
        t31 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, t3, (((int)stk + 8) + 0x4));
        t34 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    }
    *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
    return 0x4C;
}


int ADXT_StartMemIdx(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    ADXT_Stop(a4);
    t0 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock(t0);
        t0 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t1 = SJMEM_Create((((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8)) + a5), 0x40000000);
        if (t1 == 0) {
            ADXCRS_Unlock();
            ADXERR_CallErrFunc(0x8C209B88);
        } else {
            adxt_start_sj(a4, t1);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}


