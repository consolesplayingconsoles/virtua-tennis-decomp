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


int FUN_8c1dd6e4(void)
{
    int stk[18];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x18) + 0x4);
    v0_0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 24)) = 0x8C45A10C;
    *(unsigned int *)(((int)stk + 8)) = 0x8C45A10E;
    *(unsigned int *)(((int)stk + 12)) = 0x8C45A10F;
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    _builtin_set_imask(0xF);
    v0_3 = ((((int)stk + 8) + 0x18));
    v0_2 = (0x8C20C208);
    v0_1 = (0x8C1E82A4);
    v0_0 = (0x8C20C204);
    v0_4 = (0x8C45A10F);
    v0_5 = (0x8C45A100);
    if (((*(int *)0x8C20C208) != 0)) goto L_8C1DD742;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0x900, 0x8C1DD6AC, 0x50, (*(int *)((v0_0 + 0x0)))));
    L_8C1DD742:;
    v0_2 = (0x8C20C20C);
    if (((*(int *)0x8C20C20C) != 0)) goto L_8C1DD758;
    *(unsigned int *)((v0_2 + 0x0)) = (syChainAddHandler(0xA40, 0x8C1DD692, 0x10, (*(int *)((v0_0 + 0x0)))));
    L_8C1DD758:;
    v0_6 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (0x8C1E707A);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_8C1DD7DA;
    v0_2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x1C)))))(v0_4, R5, R6, R7);
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_8C1DD7DA;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_4;
    *(unsigned short *)((v0_1 + 0x50)) = 0x4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_1;
    v0_2 = gdFsWaitCompleteReq(v0_1);
    v0_1 = (((int (*)(int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x20)))))(v0_3)) == 0;
    v0_3 = (v0_2);
    v0_6 = (0x4);
    if (v0_1) goto L_8C1DD7DA;
    if ((v0_3 == 0)) goto L_8C1DD7BA;
    if (!((v0_3 == -29))) goto L_8C1DD99A;
    if (((*(int *)(((int)stk + 32))) == 6)) goto L_8C1DD7B6;
    goto L_8C1DD99A;
    L_8C1DD99A:;
    v0_4 = (v0_3);
    L_8C1DD9C6:;
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 20))) & 0xF) << 2) << 2) >> 4));
    return v0_4;
    L_8C1DD7B6:;
    R5 = (0xFFFFFFE9);
    L_8C1DD9B2:;
    v0_4 = (R5);
    goto L_8C1DD9C6;
    L_8C1DD7BA:;
    if (!(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) == 0x80))) goto L_8C1DD9B0;
    v0_1 = gdFsReopenHn((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_8C1DD80C;
    goto L_8C1DD7DA;
    L_8C1DD9B0:;
    R5 = (0xFFFFFFFB);
    goto L_8C1DD9B2;
    L_8C1DD7DA:;
    R5 = (0xFFFFFFFE);
    goto L_8C1DD9B2;
    L_8C1DD80C:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x0))) + 0x2C)) = 0x0;
    v0_3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0xC))) + 0x4C)))))(v0_5, R5, R6, R7);
    v0_1 = (0x0);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_8C1DD868;
    *(unsigned int *)((v0_2 + 0x3C)) = v0_4;
    *(unsigned short *)((v0_2 + 0x50)) = v0_6;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = v0_2;
    v0_2 = gdFsWaitCompleteReq(v0_2);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_8C1DD868;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 24))) + 0x0))) - 48) << 16));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | (((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) - 48) << 8));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x2C)) = ((*(int *)((v0_2 + 0x2C))) | ((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))) - 48));
    L_8C1DD868:;
    v0_2 = (gdFsReadWG((*(int *)0x8C20960C), 0x1, ((*(int *)((v0_0 + 0x0))) + 0x40))) == 0;
    if (!(v0_2)) goto L_8C1DD9A2;
    v0_2 = (gdFsCheckMedia(((*(int *)((v0_0 + 0x0))) + 0x40))) != 0;
    if (v0_2) goto L_8C1DD88C;
    goto L_8C1DD9B0;
    L_8C1DD9A2:;
    R5 = (0xFFFFFFFC);
    goto L_8C1DD9B2;
    L_8C1DD88C:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 4) = (0x4 + v0_2);
    *(unsigned int *)(((0x4 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x8C)));
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x96);
    v0_2 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 4) = (0x8 + v0_2);
    *(unsigned int *)(((0x8 + v0_2) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x84)));
    *(unsigned int *)0x8C45A138 = 0x8C45A120;
    *(unsigned short *)0x8C45A120 = (*(signed char *)0x8C0080FC);
    v0_3 = (0x96);
    v0_2 = (0x8C45A138);
    v0_4 = (0x8C0080F0);
    if (((*(short *)(((*(int *)0x8C45A138) + 0x0))) != 1)) goto L_8C1DD900;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = (*(signed char *)((v0_4 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_5 = v0_4;
    v0_4 = (v0_1);
    R5 = v0_5;
    R6 = (((*(int *)((v0_2 + 0x0))) + 0x8));
    L_8C1DD8EA:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_8C1DD8FE;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_5 = (int)(v0_4 + 0x1) < (int)0xC;
    v0_4 = ((v0_4 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_5) goto L_8C1DD8EA;
    L_8C1DD8FE:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_8C1DD900:;
    v0_4 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0x9E));
    v0_5 = gdFsGetLE4((((*(int *)((v0_0 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_4 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), (v0_4 + v0_3), (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), v0_5);
    v0_3 = (v0_4);
    if ((v0_4 == -12)) goto L_8C1DD99A;
    if ((v0_3 != 0)) goto L_8C1DD9A2;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_8C1DD9B0;
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_3 = (v0_4);
    if (((*(short *)((v0_4 + 0x0))) != 1)) goto L_8C1DD9BC;
    v0_3 = (gdFsGetDirInfoG((v0_3 + 0x8), (((int)stk + 8) + 0x14))) != 0;
    if (v0_3) goto L_8C1DD9A2;
    v0_3 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_3;
    v0_2 = gdFsGetDirEnt(((*(int *)((v0_0 + 0x0))) + 0x40), v0_3, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), 0x1);
    v0_3 = (v0_2);
    if ((v0_2 != -12)) goto L_8C1DD99E;
    goto L_8C1DD99A;
    L_8C1DD99E:;
    if ((v0_3 == 0)) goto L_8C1DD9A6;
    goto L_8C1DD9A2;
    L_8C1DD9A6:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_8C1DD9B6;
    goto L_8C1DD9B0;
    L_8C1DD9B6:;
    gdFsLockDir((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))));
    L_8C1DD9BC:;
    *(unsigned short *)(((*(int *)((v0_0 + 0x0))) + 0x38)) = 0x1;
    v0_4 = (v0_1);
    goto L_8C1DD9C6;
}


int gdFsDaPlayG(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0x8C45A138;
    t1 = a5;
    t2 = a4;
    if ((*(short *)((t0 + 0x0))) == 1) {
        t3 = *(short *)((t0 + 0x2));
        t1 = (a5 + (t3 - 4));
        t2 = (a4 + (t3 - 4));
    }
    t0 = 0xFFFFFFF3;
    if ((int)t2 >= (int)0x3) {
        t3 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
        t4 = 0xFFFFFFF3;
        if (t3 != 0) {
            t5 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t6 = ((int (*)(int, int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x28)))))(t2, t1, a6);
            if (t6 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t6;
                *(unsigned short *)((t3 + 0x50)) = 0x4;
                if ((int)(*(int *)(((*(int *)0x8C20C204) + 0x2C))) >= (int)0x10001) {
                    *(unsigned short *)(((*(int *)0x8C20C204) + 0x3A)) = 0x1;
                    *(unsigned int *)0x8C45A148 = 0x1;
                    *(unsigned int *)0x8C45A14C = t2;
                    *(unsigned int *)0x8C45A150 = t1;
                    *(unsigned int *)0x8C45A154 = a6;
                    *(unsigned int *)((t3 + 0x4)) = 0x8C45A158;
                    *(unsigned short *)((t3 + 0x48)) = 0x8;
                    t1 = 0x1;
                } else {
                    *(unsigned short *)((t3 + 0x48)) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t2 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))(t1);
            }
            _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t6 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t4 = t1;
        }
        t0 = t4;
    }
    return t0;
}


int gdFsDaPlaySctG(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFF3;
    if ((int)a4 >= (int)0xB05E) {
        t1 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
        t2 = 0xFFFFFFF3;
        if (t1 != 0) {
            t3 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t4 = ((int (*)(int, int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x2C)))))(a4, a5, a6);
            if (t4 != 0) {
                *(unsigned int *)((t1 + 0x3C)) = t4;
                *(unsigned short *)((t1 + 0x50)) = 0x4;
                if ((int)(*(int *)(((*(int *)0x8C20C204) + 0x2C))) >= (int)0x10001) {
                    *(unsigned short *)(((*(int *)0x8C20C204) + 0x3A)) = 0x1;
                    *(unsigned int *)0x8C45A148 = 0x2;
                    *(unsigned int *)0x8C45A14C = a4;
                    *(unsigned int *)0x8C45A150 = a5;
                    *(unsigned int *)0x8C45A154 = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0x8C45A158;
                    *(unsigned short *)((t1 + 0x48)) = 0x8;
                } else {
                    *(unsigned short *)((t1 + 0x48)) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t1 + 0x0))) + 0x1C)) = t1;
                t1 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
            }
            _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t4 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}


int gdFsDaPauseG(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            if (((*(short *)(((*(int *)0x8C20C204) + 0x3A))) != 0) && (t0 = *(int *)0x8C20C204, t1 = *(int *)((t0 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0x8C45A15C;
                *(unsigned short *)((t2 + 0x48)) = 0x8;
            } else {
                *(unsigned short *)((t2 + 0x48)) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t0 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t5 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t3 = t0;
    }
    return t3;
}

int gdDcfRepStat_(int a4, int a5)
{
    int stk[7];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = gdGdcGetCmdStat(v0_0, ((int)stk + 4));
    v0_2 = (v0_4);
    v0_1 = (v0_3);
    v0_0 = (v0_4);
    v0_3 = ((*(int *)(((int)stk + 12))));
    if ((v0_4 == 0)) goto L_8C1E686A;
    if ((v0_2 == 1)) goto L_8C1E686E;
    if ((v0_2 == 2)) goto L_8C1E6878;
    if ((v0_2 == 3)) goto L_8C1E687E;
    if ((v0_2 == 4)) goto L_8C1E6882;
    if ((v0_2 == -1)) goto L_8C1E6886;
    L_8C1E68EA:;
    return v0_0;
    L_8C1E6886:;
    *(unsigned int *)((v0_1 + 0x4)) = (*(int *)(((int)stk + 8)));
    v0_3 = *(int *)(((int)stk + 4));
    v0_2 = (v0_3);
    v0_0 = (0x5);
    if ((v0_3 == 0)) goto L_8C1E68BA;
    if ((v0_2 == 1)) goto L_8C1E68C0;
    if ((v0_2 == 2)) goto L_8C1E68C4;
    if ((v0_2 == 3)) goto L_8C1E68C8;
    if ((v0_2 == 4)) goto L_8C1E68CC;
    if ((v0_2 == 5)) goto L_8C1E68D0;
    if ((v0_2 == 6)) goto L_8C1E68D4;
    if ((v0_2 == 7)) goto L_8C1E68D8;
    if ((v0_2 == 11)) goto L_8C1E68DC;
    if ((v0_2 == 16)) goto L_8C1E68E0;
    v0_2 = (0xFFFFFFE6);
    L_8C1E68E8:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_8C1E68EA;
    L_8C1E68E0:;
    v0_2 = (0xFFFFFFDC);
    L_8C1E68E2:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_8C1E68EA;
    L_8C1E68DC:;
    v0_2 = (0xFFFFFFDD);
    goto L_8C1E68E8;
    L_8C1E68D8:;
    v0_2 = (0xFFFFFFDE);
    goto L_8C1E68E2;
    L_8C1E68D4:;
    v0_2 = (0xFFFFFFDF);
    goto L_8C1E68E8;
    L_8C1E68D0:;
    v0_2 = (0xFFFFFFE0);
    goto L_8C1E68E2;
    L_8C1E68CC:;
    v0_2 = (0xFFFFFFE1);
    goto L_8C1E68E8;
    L_8C1E68C8:;
    v0_2 = (0xFFFFFFE2);
    goto L_8C1E68E2;
    L_8C1E68C4:;
    v0_2 = (0xFFFFFFE3);
    goto L_8C1E68E8;
    L_8C1E68C0:;
    v0_2 = (0xFFFFFFE4);
    goto L_8C1E68E2;
    L_8C1E68BA:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFE5;
    goto L_8C1E68EA;
    L_8C1E6882:;
    v0_0 = (0x43);
    goto L_8C1E68EA;
    L_8C1E687E:;
    v0_0 = (0x41);
    goto L_8C1E68EA;
    L_8C1E6878:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    v0_0 = (0x1);
    goto L_8C1E68EA;
    L_8C1E686E:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    *(unsigned int *)((v0_1 + 0x8)) = (*(int *)(((int)stk + 16)));
    v0_0 = (0x4);
    goto L_8C1E68EA;
    L_8C1E686A:;
    v0_0 = (0x0);
    goto L_8C1E68EA;
}


