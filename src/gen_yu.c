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
int FUN_8c0f0860(int);
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
int FUN_8c0efb40(int a4, int a5, int a6);
int FUN_8c0f2fd0(int a4, int a5);
int FUN_8c013d28(int a4);
int FUN_8c0e716e(int a4, int a5);
int FUN_8c1e1960(int a4, int a5, int a6);
int FUN_8c1e5280(int a4, int a5, int a6, int a7);
int gdFsDaPlayG(int a4, int a5, int a6);
int FUN_8c0ef4d0(int a4, int a5, int a6);
int FUN_8c1f5b60(void);
int FUN_8c0ef7d0(int a4);
int kmyInitializeVGA(int a4);
int gdFsDaPlaySctG(int a4, int a5, int a6);
int FUN_8c0efa70(int a4);
int adxt_trap_entry(int a4);
int FUN_8c0f2900(int a4);
int FUN_8c1e0f28(int a4, int a5, int a6);
int nlSysMetricsGetFrameBufferUser(int a4, int a5, int a6);
int FUN_8c0ef400(int a4, int a5, int a6);
int FUN_8c1e53a0(int a4, int a5, int a6, int a7);
int FUN_8c1e5c58(int a4, int a5, int a6, int a7);
int gdFsDaPauseG(void);
int FUN_8c1e683a(int a4, int a5);
int FUN_8c0f0900(float f4, float f5, float f6, float f7, float f8, float f9);
int nlFatalErrorTrap(int a4);
int nlsndPackReload(int a4, int a5);
int FUN_8c1e6120(int a4, int a5, int a6, int a7);
int FUN_8c0f09c0(float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackReloadBG(int a4, int a5, int a6);
int nlDispStripLoadPalette(int a4, int a5);
int nlsndPackLoadLock(int a4, int a5, int a6);

int FUN_8c0d3804(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = 0x8C1D3514;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C1D3524) {
            break;
        }
    }
    t2 = 0x0;
    t3 = 0x8C1D3524;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 2);
        t2 = (t2 + 0x1);
        if (((*(int *)(((0x8C287AE0 + t3) + 0x0)))) == 0) {
            *(unsigned int *)((0x8C1D3514 + (t3))) = 0x1;
        }
    }
    t4 = motFileLoadStep(t2, t3, 0x1, a7);
    t2 = sndPack4Load(0x1);
    if (t4 != -1) {
        return t4;
    }
    if (t2 != 99) {
        return t2;
    }
    endingSprAnimInit();
    if (((*(int *)0x8C1D3514) != 1) && (t0 = *(int *)0x8C1D351C, t0 != 1)) {
        if (((*(int *)0x8C1D3518) != 1) && (t1 = *(int *)0x8C1D3520, t1 != 1)) {
        } else {
            *(unsigned int *)0x8C402CB4 = 0x8C288AFC;
            playerInit((*(int *)0x8C402CB4), 0x1);
            if ((*(int *)0x8C287ADC) == 4) {
                *(unsigned int *)0x8C402CB8 = 0x8C28A5EC;
                playerInit(0x8C28A5EC, 0x3);
            }
        }
    } else {
        *(unsigned int *)0x8C402CB4 = 0x8C287D84;
        playerInit((*(int *)0x8C402CB4), 0x0);
        if ((*(int *)0x8C287ADC) == 4) {
            *(unsigned int *)0x8C402CB8 = 0x8C289874;
            playerInit(0x8C289874, 0x2);
        }
    }
    *(unsigned int *)0x8C295DDC = ((*(int *)0x8C295DDC) | 0x20);
    *(unsigned int *)(((*(int *)0x8C402CB4) + 0xD4C)) = 0x0;
    motionSet((*(int *)0x8C402CB4), 0x3B10, 0x0, 0x2E904, ((*(int *)((((*(int *)(((*(int *)0x8C402CB4) + 0xC58))) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873E4)), (*(float *)0x8C23D204));
    *(float *)(((*(int *)0x8C402CB4) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)0x8C402CB4) + 0xB18)) = 0.0f;
    if ((*(int *)0x8C287ADC) == 4) {
        *(unsigned int *)(((*(int *)0x8C402CB8) + 0xD4C)) = 0x0;
        motionSet((*(int *)0x8C402CB8), 0x19E30, 0x0, 0x2E904, ((*(int *)((((*(int *)(((*(int *)0x8C402CB8) + 0xC58))) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873E4)), (*(float *)0x8C23D204));
        *(float *)(((*(int *)0x8C402CB8) + 0xC90)) = 0.0f;
        *(float *)(((*(int *)0x8C402CB8) + 0xB18)) = 0.0f;
    }
    if ((int)(*(int *)0x8C1891E8) <= (int)0x9) {
        t0 = 0x8C402D4C;
        for (;;) {
            motionSet((t0 + 0x4), 0x5DB0, 0x0, 0x2F4E0, ((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D03F0))) + 0x0)))), ((*(int *)0x8C2873D4)), 0.0f);
            *(unsigned int *)((t0 + 0x5C8)) = 0x0;
            t0 = (t0 + 0x67C);
            if ((unsigned int)t0 >= (unsigned int)0x8C403A44) {
                break;
            }
        }
        t0 = 0x8C403A44;
        for (;;) {
            motionSet((t0 + 0x4), 0x5DB0, 0x0, 0x2F4E0, ((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D08F0))) + 0x0)))), ((*(int *)0x8C2873D4)), 0.0f);
            *(unsigned int *)((t0 + 0x5B4)) = 0x0;
            t0 = (t0 + 0x654);
            if ((unsigned int)t0 >= (unsigned int)0x8C407338) {
                break;
            }
        }
        motionSet(0x8C40733C, 0x5DB0, 0x0, 0x2F4E0, ((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0DF0))) + 0x0)))), ((*(int *)0x8C2873D4)), 0.0f);
        *(unsigned int *)0x8C4078EC = 0x0;
        motionSet(0x8C407978, 0x5DB0, 0x0, 0x2F4E0, ((*(int *)(((*(int *)((0x8C1D0DF0 + ((*(int *)0x8C1891E8) << 2)))) + 0x0)))), ((*(int *)0x8C2873D4)), 0.0f);
        *(unsigned int *)0x8C407F28 = 0x0;
    }
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    strmBgmPlay(0x14);
    sndCrowdAmbStart();
    endingModelSet((*(int *)(((*(int *)0x8C402CB4) + 0xC58))));
    if ((int)(*(int *)(((*(int *)0x8C402CB4) + 0xC58))) >= (int)0x8) {
        nlSetCommonTextureOffset(0x320);
        t0 = 0x8C12CBEC;
    } else {
        nlSetCommonTextureOffset(0x1800);
        t0 = 0x8C132D0C;
    }
    return nlObjPutLoadTexture(0xCB4D5A0, t0);
}

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

int FUN_8c0efb40(int a4, int a5, int a6)
{
    int stk[26];
    register float u6;
    register float u9;
    register float u10;
    register float u13;
    register float u14;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register float u25;
    register float u26;
    register float u28;
    register float u30;
    register float u32;
    register float t33;
    register float u35;
    register float u37;
    register float u39;

    *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)((((int)stk + 4) + 0x8)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    u6 = *(float *)((a4 + 0xC));
    u9 = *(float *)((((int)stk + 4) + 0x0));
    u10 = ((*(float *)((a4 + 0x10))) * (*(float *)((((int)stk + 4) + 0x4))));
    u10 = u10 + u9 * u6;
    u13 = u10;
    u13 = u13 + (*(float *)((((int)stk + 4) + 0x8))) * (*(float *)((a4 + 0x14)));
    u14 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 16)) = ((-(u9 * u14)) + 1.0f);
    u16 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 20)) = (-((*(float *)((((int)stk + 4) + 0x4))) * u16));
    u18 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 24)) = (-((*(float *)((((int)stk + 4) + 0x8))) * u18));
    u19 = *(float *)((a4 + 0x10));
    u21 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 32)) = (-((*(float *)((((int)stk + 4) + 0x0))) * u21));
    u23 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 36)) = ((-((*(float *)((((int)stk + 4) + 0x4))) * u23)) + 1.0f);
    u25 = (u19 * (1.0f / u13));
    *(float *)(((int)stk + 40)) = (-((*(float *)((((int)stk + 4) + 0x8))) * u25));
    u26 = *(float *)((a4 + 0x14));
    u28 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 48)) = (-((*(float *)((((int)stk + 4) + 0x0))) * u28));
    u30 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 52)) = (-((*(float *)((((int)stk + 4) + 0x4))) * u30));
    u32 = (u26 * (1.0f / u13));
    *(float *)(((int)stk + 56)) = ((-((*(float *)((((int)stk + 4) + 0x8))) * u32)) + 1.0f);
    t33 = nlInnerProduct(a4, (a4 + 0xC));
    u35 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 64)) = ((*(float *)((((int)stk + 4) + 0x0))) * u35);
    u37 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 68)) = ((*(float *)((((int)stk + 4) + 0x4))) * u37);
    u39 = (t33 * (1.0f / u13));
    *(float *)(((int)stk + 72)) = ((*(float *)((((int)stk + 4) + 0x8))) * u39);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0xC));
    return (nlTranslateV(a5));
}

int FUN_8c0f2fd0(int a4, int a5)
{
    int stk[17];
    register int t0;
    register int t10;
    register int t11;
    register int t15;
    register int t16;
    register int t19;
    register float u24;
    register float u25;
    register float u27;
    register float u28;
    register float u30;
    register float u31;
    register float u32;
    register float u34;
    register float u36;
    register float u37;
    register int t42;
    register int t43;
    register int t12;
    register int t13;

    t0 = nlLineSendHeader(a5);
    nlPushMatrix(0x8C1DCAB8);
    nlMultiMatrix8((*(int *)0x8C450888));
    if ((0x2 & a5) != 0) {
        nlMultiMatrix8((*(int *)0x8C45087C));
    }
    t10 = (nlMultiPushedMatrix());
    t11 = a4;
    t15 = t0;
    t16 = a4;
    for (;;) {
        if ((*(int *)((t16 + 0x0))) == 0) {
            break;
        }
        t12 = (*(int *)((t16 + 0x0)));
        t16 = (t16 + 0x4);
        t11 = 0x0;
        t19 = *(int *)((t16 + 0x0));
        t16 = (t16 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t19;
        t13 = t11;
        for (;;) {
            if ((unsigned int)t13 >= (unsigned int)t12) {
                break;
            }
            t11 = t16;
            t10 = (nlCalcPoint4(t11, (((int)stk + 4) + 0x14)));
            t11 = t16;
            t11 = (t11 + 0xC);
            t10 = (nlCalcPoint4(t11, (((int)stk + 4) + 0x4)));
            t11 = ((int)stk + 4);
            t11 = (t11 + 0x14);
            t10 = (nlLineClipNear(t11, (((int)stk + 4) + 0x4)));
            if (t10 != 0) {
                t11 = ((int)stk + 4);
                t11 = (t11 + 0x14);
                t10 = (nlLineCalcColor(t11, (((int)stk + 4) + 0x4)));
                if (t10 != 0) {
                    t10 = 0x1C;
                    u24 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x14;
                    t11 = 0x8C454C48;
                    u25 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x14;
                    u27 = (*(float *)((t11 + 0x0)));
                    u27 = u27 + (1.0f / u24) * u25;
                    *(float *)((((int)stk + 4) + t10)) = u27;
                    t10 = 0x18;
                    u28 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x18;
                    u30 = (*(float *)0x8C454C4C);
                    u30 = u30 + (1.0f / u24) * u28;
                    *(float *)((((int)stk + 4) + t10)) = u30;
                    t10 = 0xC;
                    u31 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x4;
                    u32 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x4;
                    u34 = (*(float *)((t11 + 0x0)));
                    u34 = u34 + (1.0f / u31) * u32;
                    *(float *)((((int)stk + 4) + t10)) = u34;
                    t10 = 0x8;
                    u36 = *(float *)((((int)stk + 4) + t10));
                    t10 = 0x8;
                    u37 = (*(float *)0x8C454C4C);
                    u37 = u37 + (1.0f / u31) * u36;
                    *(float *)((((int)stk + 4) + t10)) = u37;
                    t11 = t15;
                    t10 = (nlLineDrawThick(t11, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x4), ((int)stk + 4)));
                    t15 = t10;
                }
            }
            t13 = (t13 + 0x1);
            t16 = (t16 + 0xC);
        }
        t16 = (t16 + 0xC);
    }
    nlPopMatrix(0x1);
    t42 = *(int *)0x8C42445C;
    t43 = t42;
    if ((a5 & 0x1) != 0) {
        t43 = (t42 + 0x8);
    }
    *(unsigned int *)((t43 + 0x0)) = (((*(int *)((t43 + 0x0))) & 0xFC000000) | (t15 & 0x3FFFFFF));
    return 0x1;
}

int FUN_8c013d28(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    if (t0 != -1) {
        t1 = *(int *)(((((dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0)) << 1) << 2) + 0x8C101514));
        t2 = *(int *)((0x8C101518 + (((dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0)) << 1) << 2)));
        t3 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x8);
        if (t3 != 0) {
            t3 = (int)((int)((dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1)) + 0x1) % (int)(*(int *)((t1 + 0x0))));
            dbgMenuSetValue((*(int *)((a4 + 0x14))), 0x1, t3);
        }
        t3 = (int)((int)(dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1)) % (int)(*(int *)((t1 + 0x0))));
        dbgMenuSetValue((*(int *)((a4 + 0x14))), 0x1, t3);
        if ((int)((*(int *)0x8C2871BC) & 0x3) >= (int)0x2) {
            t4 = dbgMenuIsPage((*(int *)((a4 + 0x14))));
            if (t4 != 0) {
                t4 = dbgMenuIsPage((*(int *)((a4 + 0x14))));
                if (t4 != 0) {
                    t5 = dbgMenuGetSelect();
                    if ((int)t5 > (int)0xFFFFFFFF) {
                        nlPushUnitMatrix();
                        t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
                        t7 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
                        t8 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2);
                        nlTranslate((float)t8, (float)t7, (float)t6);
                        t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
                        nlRotateAY((t6 << 8));
                        t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
                        nlRotateAX((t6 << 8));
                        t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x7);
                        nlRotateAZ((t6 << 8));
                        objListPut(t1, t2, t3);
                        return nlPopMatrix(0x1);
                    }
                    return t5;
                }
                return t4;
            }
            nlPushUnitMatrix();
            t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
            t5 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
            t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2);
            nlTranslate((float)t6, (float)t5, (float)t4);
            t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
            nlRotateAY((t4 << 8));
            t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
            nlRotateAX((t4 << 8));
            t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x7);
            nlRotateAZ((t4 << 8));
            objListPut(t1, t2, t3);
            return nlPopMatrix(0x1);
        }
        nlPushUnitMatrix();
        t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
        t5 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
        t6 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2);
        nlTranslate((float)t6, (float)t5, (float)t4);
        t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
        nlRotateAY((t4 << 8));
        t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
        nlRotateAX((t4 << 8));
        t4 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x7);
        nlRotateAZ((t4 << 8));
        objListPut(t1, t2, t3);
        return nlPopMatrix(0x1);
    }
    return t0;
}

int FUN_8c0e716e(int a4, int a5)
{
    int stk[18];
    register int t1;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t17;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t20;
    register int t5;
    register int t42;
    register int t37;

    *(unsigned int *)(((int)stk + 4)) = a4;
    memset(a5, 0x0, 0xA);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    t1 = (((int)stk + 4) + 0x8);
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x1C)) {
            break;
        }
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    if (((int)(*(int *)(((int)stk + 4))) <= (int)0x98967F) && (t5 = *(int *)(((int)stk + 4)), (int)t5 >= 0)) {
        t6 = 0x0;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            t9 = shopPowi(0xA, (0x6 - t8));
            t10 = *(int *)(((int)stk + 8));
            t17 = 0x0;
            if ((int)t8 > 0) {
                t11 = 0x0;
                t12 = 0x0;
                t13 = t10;
                for (;;) {
                    t11 = (t11 + 0x1);
                    t14 = *(int *)((t13 + 0x0));
                    t13 = (t13 + 0x4);
                    t12 = (t12 + t14);
                    if ((int)t11 >= (int)t8) {
                        break;
                    }
                }
                t17 = t12;
            }
            t20 = (int)((int)((*(int *)(((int)stk + 4))) - t17) / (int)t9);
            *(unsigned int *)((((t8 << 2) + (((int)stk + 4) + 0x8)) + 0x0)) = t20;
            if ((int)t20 > 0) {
                t6 = 0x1;
                *(unsigned char *)(((t7 + a5) + 0x0)) = ((*(int *)((((t8 << 2) + (((int)stk + 4) + 0x8)) + 0x0))) + 0x30);
                *(unsigned int *)((((t8 << 2) + (((int)stk + 4) + 0x8)) + 0x0)) = ((*(int *)((((t8 << 2) + (((int)stk + 4) + 0x8)) + 0x0))) * t9);
            } else {
                if (t6 != 0) {
                    *(unsigned char *)(((t7 + a5) + 0x0)) = 0x30;
                } else {
                    *(unsigned char *)(((t7 + a5) + 0x0)) = 0x20;
                }
            }
            if (t8 != 0) {
                if (t8 == 3) {
                    t7 = (t7 + 0x1);
                    if (t6 != 0) {
                        *(unsigned char *)(((t7 + a5) + 0x0)) = 0x2C;
                    } else {
                        *(unsigned char *)(((t7 + a5) + 0x0)) = 0x20;
                    }
                }
                t37 = t8;
            } else {
                t7 = (t7 + 0x1);
                if (t6 != 0) {
                    *(unsigned char *)(((t7 + a5) + 0x0)) = 0x2C;
                } else {
                    *(unsigned char *)(((t7 + a5) + 0x0)) = 0x20;
                }
                t37 = t20;
            }
            t8 = (t8 + 0x1);
            t7 = (t7 + 0x1);
            if ((int)t8 >= (int)0x7) {
                break;
            }
        }
        t42 = t37;
    } else {
        *(unsigned char *)((a5 + 0x0)) = 0x45;
        *(unsigned char *)((a5 + 0x1)) = 0x52;
        *(unsigned char *)((a5 + 0x2)) = 0x52;
        *(unsigned char *)((a5 + 0x3)) = 0x4F;
        *(unsigned char *)((a5 + 0x4)) = 0x52;
        t42 = 0x52;
    }
    return t42;
}

int FUN_8c1e1960(int a4, int a5, int a6)
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

int FUN_8c1e5280(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t5;
    register int t6;
    register int t13;
    register float u14;
    register float u16;
    register float u18;
    register float u20;
    register float u22;
    register float u24;
    register float u26;
    register float u28;
    register int t30;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        t13 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        u14 = *(float *)((t13 + 0x10));
        u16 = (u14 * 255.0f);
        if (!(2.14748365e+09f > (u14 * 255.0f))) {
            u16 = ((u14 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u18 = *(float *)((t13 + 0x14));
        u20 = (u18 * 255.0f);
        if (!(2.14748365e+09f > (u18 * 255.0f))) {
            u20 = ((u18 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u22 = *(float *)((t13 + 0x18));
        u24 = (u22 * 255.0f);
        if (!(2.14748365e+09f > (u22 * 255.0f))) {
            u24 = ((u22 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        u26 = *(float *)((t13 + 0x1C));
        u28 = (u26 * 255.0f);
        if (!(2.14748365e+09f > (u26 * 255.0f))) {
            u28 = ((u26 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        t30 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t30 + 0x14)) = (((((((int)u16 & 0xFF) << 16) << 8) | (((int)u20 & 0xFF) << 16)) | (((int)u24 & 0xFF) << 8)) | ((int)u28 & 0xFF));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
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

int FUN_8c0ef4d0(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 8)) = ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 16)) = ((*(float *)((a4 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C));
    nlOuterProduct((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    FUN_8c0f0860((((int)stk + 4) + 0x1C));
    FUN_8c0f0860((((int)stk + 4) + 0x10));
    FUN_8c0f0860((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 104)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x28));
    return (nlTranslateNV(a4));
}

int FUN_8c1f5b60(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t10;
    int t11;
    register int t12;
    register int t13;
    register int t17;
    register int t26;
    register int t22;
    register int t19;

    t0 = *(int *)0x8C470AA4;
    *(unsigned int *)0x8C470AA4 = 0xF;
    t1 = *(int *)0x8C470ABC;
    t2 = *(int *)0xA05F6908;
    if ((t2 & t1) != 0) {
        t3 = 0x0;
        for (;;) {
            if (((t2 & t1) & ((int)0x1 << (int)t3)) != 0) {
                break;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                *(unsigned int *)0x8C470AA4 = t0;
                return 0x0;
            }
        }
        t7 = *(int *)((0x8C20C9B8 + (t3 << 2)));
        *(unsigned int *)0x8C470AA4 = t7;
        *(unsigned int *)0xA05F6908 = ((int)0x1 << (int)t3);
        *(unsigned int *)0x8C470CF0 = t7;
        t10 = ((int (*)(int, int, int, int))((*(int *)(((((t7 << 2) << 2) + 0x8C470AD0) + 0x0)))))(0x8C470CF0, (*(int *)(((((t7 << 2) << 2) + 0x8C470AD0) + 0xC))), ((int)0x1 << (int)t3), 0xA05F6908);
    } else {
        t11 = *(int *)0x8C470AB8;
        t12 = *(int *)0xA05F6900;
        if ((t12 & t11) != 0) {
            t13 = 0x0;
            for (;;) {
                if (((t12 & t11) & ((int)0x1 << (int)t13)) != 0) {
                    break;
                }
                t13 = (t13 + 0x1);
                if ((int)t13 >= (int)0x16) {
                    *(unsigned int *)0x8C470AA4 = t0;
                    return 0x0;
                }
            }
            t17 = *(int *)((0x8C20C960 + (t13 << 2)));
            *(unsigned int *)0x8C470AA4 = t17;
            if (t17 == 18) {
                *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
                t22 = ((int)0x1 << (int)t13);
            } else {
                if (t17 == 20) {
                    t19 = (((int)0x1 << (int)t13) | 0x3);
                } else {
                    t19 = ((int)0x1 << (int)t13);
                }
                t22 = t19;
            }
            *(unsigned int *)0xA05F6900 = t22;
            *(unsigned int *)0x8C470CF0 = t17;
            t26 = ((int (*)(int, int, int, int))((*(int *)(((((t17 << 2) << 2) + 0x8C470AD0) + 0x0)))))(0x8C470CF0, (*(int *)(((((t17 << 2) << 2) + 0x8C470AD0) + 0xC))), t22, 0xFFA0002C);
        }
    }
    *(unsigned int *)0x8C470AA4 = t0;
    return 0x0;
}

int FUN_8c0ef7d0(int a4)
{
    int stk[20];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = *(float *)((a4 + 0xC));
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 4)) = (u2 + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 24)) = (u5 + 1.0f);
    u6 = *(float *)((a4 + 0x14));
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 44)) = (u8 + 1.0f);
    u11 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x10))));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    *(float *)((((int)stk + 4) + 0x10)) = u12;
    *(float *)((((int)stk + 4) + 0x4)) = u12;
    u15 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x14))));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    *(float *)((((int)stk + 4) + 0x20)) = u16;
    *(float *)((((int)stk + 4) + 0x8)) = u16;
    u19 = ((*(float *)((a4 + 0x10))) * (*(float *)((a4 + 0x14))));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    *(float *)((((int)stk + 4) + 0x24)) = u20;
    *(float *)((((int)stk + 4) + 0x18)) = u20;
    t21 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = ((t21 + t21) * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}

int kmyInitializeVGA(int a4)
{
    int stk[67];
    register int t6;

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x359;
    *(unsigned int *)(((int)stk + 24)) = 0x20C;
    *(unsigned int *)(((int)stk + 4)) = 0x7E;
    *(unsigned int *)(((int)stk + 8)) = 0x345;
    *(unsigned int *)(((int)stk + 16)) = 0x28;
    *(unsigned int *)(((int)stk + 20)) = 0x208;
    *(unsigned int *)(((int)stk + 28)) = 0x3F;
    *(unsigned int *)(((int)stk + 32)) = 0x3;
    *(unsigned int *)(((int)stk + 36)) = 0x319;
    *(unsigned int *)(((int)stk + 40)) = 0xF;
    *(unsigned int *)(((int)stk + 120)) = 0x208;
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if ((a4 & 0x10) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 252)) = 0xA8;
    *(unsigned int *)(((int)stk + 244)) = 0x28;
    *(unsigned int *)(((int)stk + 248)) = 0x28;
    *(unsigned int *)0x8C45EEE0 = 0x1E0;
    *(unsigned int *)0x8C45EED8 = ((*(int *)(((int)stk + 16))) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t6 = ((int (*)(int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), 0x28);
    return 0x0;
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

int FUN_8c0efa70(int a4)
{
    int stk[20];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float t9;

    u0 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 4)) = ((-(u0 * u0)) + 1.0f);
    u1 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 24)) = ((-(u1 * u1)) + 1.0f);
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 44)) = ((-(u2 * u2)) + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x10)) = (-(u4 * u3));
    *(float *)((((int)stk + 4) + 0x4)) = (-(u4 * u3));
    u5 = *(float *)((a4 + 0x14));
    u6 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x20)) = (-(u6 * u5));
    *(float *)((((int)stk + 4) + 0x8)) = (-(u6 * u5));
    u7 = *(float *)((a4 + 0x14));
    u8 = *(float *)((a4 + 0x10));
    *(float *)((((int)stk + 4) + 0x24)) = (-(u8 * u7));
    *(float *)((((int)stk + 4) + 0x18)) = (-(u8 * u7));
    t9 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = (t9 * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = (t9 * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = (t9 * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
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

int FUN_8c0f2900(int a4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u7;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u24;

    *(unsigned int *)(((int)stk + 4)) = a4;
    u0 = *(float *)(((a4 + 0x14) + 0x0));
    u1 = *(float *)0x8C458E48;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0x8C450B38);
    nlCalcPoint(((*(int *)(((int)stk + 4))) + 0x8), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 8));
    if (!((*(float *)0x8C458DBC) > (u7 + (u0 * u1)))) {
        u9 = *(float *)0x8C1DCA2C;
        u10 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u10 - (u9 * u7));
        u11 = *(float *)0x8C450B10;
        u12 = (u0 * u1);
        if ((u10 - (u9 * u7)) > (-(u11 * u12))) {
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((*(float *)0x8C1DCA30) * (*(float *)(((int)stk + 8)))));
            u16 = *(float *)0x8C450B10;
            u18 = (u0 * u1);
            if ((*(float *)(((int)stk + 16))) > (-(u16 * u18))) {
                u19 = *(float *)(((int)stk + 8));
                u21 = (u11 * u12);
                u21 = u21 + u19 * (*(float *)0x8C1DCA24);
                if (u21 > (*(float *)(((int)stk + 12)))) {
                    u24 = (u16 * u18);
                    u24 = u24 + u19 * (*(float *)0x8C1DCA28);
                    if (!(u24 > (*(float *)(((int)stk + 16))))) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_8c1e0f28(int a4, int a5, int a6)
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

int nlSysMetricsGetFrameBufferUser(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(short *)0x8C458DD8;
    t1 = t0;
    if ((int)(*(int *)0x8C44F654) >= 0) {
        t2 = *(int *)(((*(int *)((((*(int *)0x8C44F654) << 2) + (*(int *)0x8C424214)))) + 0x1C));
        t3 = *(int *)0x8C42448C;
        t4 = (t0 + t0);
        if ((int)t3 > (int)0x3) {
            t5 = ((t0 << 1) + t0);
            if ((int)t3 > (int)0x4) {
                if ((int)t3 > (int)0x5) {
                    for (;;) {
                    }
                }
                t5 = (t0 << 2);
            }
            t4 = t5;
        }
        t0 = (int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u));
        t4 = 0x0;
        t5 = 0x1000;
        t6 = (t2 + 0xA5000000);
        t2 = t3;
        t3 = (a4 + 0x1000);
        for (;;) {
            t7 = *(short *)0x8C458DDA;
            if ((int)t4 >= (int)t7) {
                break;
            }
            t2 = 0x0;
            if ((int)(t0 >> 1) > 0) {
                for (;;) {
                    t5 = (*(short *)((t6 + 0x0)));
                    t2 = (t2 + 0x5);
                    t6 = (t6 + 0xA);
                    *(unsigned short *)((t3 + 0x0)) = t5;
                    t3 = (t3 + 0x2);
                    if ((int)t2 >= (int)(t0 >> 1)) {
                        break;
                    }
                }
            }
            t4 = (t4 + 0x5);
            t6 = (t6 + 0x1400);
        }
        t1 = t7;
    }
    return t1;
}

int FUN_8c0ef400(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), a5, (*(int *)(((int)stk + 4))));
    nlOuterProduct((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20));
    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    FUN_8c0f0860((((int)stk + 4) + 0x20));
    FUN_8c0f0860((((int)stk + 4) + 0x14));
    FUN_8c0f0860((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 44)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 88)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 104)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 108)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x2C));
    return (nlTranslateNV((*(int *)(((int)stk + 4)))));
}

int FUN_8c1e53a0(int a4, int a5, int a6, int a7)
{
    int stk[33];
    register int t5;
    register int t6;
    register int t21;
    register int t23;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x18 + (*(int *)((t5 + 0x0)))))));
        t21 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t23 = ((((int)stk + 4) + 0x24) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)((t21 + 0x18))));
        *(unsigned int *)((t23 + 0x14)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x14)));
}

int FUN_8c1e5c58(int a4, int a5, int a6, int a7)
{
    int stk[33];
    register int t5;
    register int t6;
    register int t21;
    register int t23;

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 36)) = (*(int *)((a4 + 0xC)));
    t5 = (*(int *)(((int)stk + 4)));
    t6 = 0x0;
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x0)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x4)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x24) + t6) + 0x8)) = (*(float *)(((*(int *)((t5 + 0x0))) + 0xC)));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C4607FF);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FE) * (*(float *)((0x10 + (*(int *)((t5 + 0x0)))))));
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FD) * (*(float *)((0x10 + (*(int *)((t5 + 0x0)))))));
        t21 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t23 = ((((int)stk + 4) + 0x24) + t6);
        t6 = (t6 + 0x1C);
        *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (int)((float)(unsigned char)(*(signed char *)0x8C4607FC) * (*(float *)((t21 + 0x10))));
        *(unsigned int *)((t23 + 0x14)) = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        if ((unsigned int)t6 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x14)));
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

int FUN_8c1e683a(int a4, int a5)
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

int FUN_8c0f0900(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[18];
    register float u0;
    register float u1;

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = (-1.0f);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    u0 = (f8 * f9);
    u1 = (u0 * (1.0f + 1.0f));
    u1 = -u1;
    *(float *)(((int)stk + 60)) = (u1 / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0x8C458E3C = f8;
    *(float *)0x8C458E40 = f9;
    *(float *)0x8C458E44 = (1.0f / f8);
    *(float *)0x8C458DBC = f8;
    *(float *)0x8C458DA4 = (-f8);
    *(float *)0x8C458DC0 = f9;
    *(float *)0x8C458DB8 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    return (nl_set_cnv_proj_pers());
}

int nlFatalErrorTrap(int a4)
{
    int stk[6];
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                } else {
                    *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF00FF;
                }
            } else {
                *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF00FF00;
            }
        } else {
            *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFFFF0000;
        }
    } else {
        *(unsigned int *)((((int)stk + 8) + 0x0)) = 0xFF0000FF;
    }
    if (a4 != 3) {
        t13 = (*(int *)((((int)stk + 8) + 0x0)));
        *(int *)((int)stk + 4) = t13;
        kmSetBorderColor(t13);
        _builtin_set_cr((_builtin_get_cr() & 0xEFFFFF0F));
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                    } else {
                        _builtin_trapa(51);
                    }
                } else {
                    _builtin_trapa(50);
                    _builtin_trapa(51);
                }
            } else {
                _builtin_trapa(49);
                _builtin_trapa(50);
                _builtin_trapa(51);
            }
        } else {
            _builtin_trapa(48);
            _builtin_trapa(49);
            _builtin_trapa(50);
            _builtin_trapa(51);
        }
    }
    return a4;
}

int nlsndPackReload(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = nlsndCheckPackReloadError(a4, a5);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x0;
        for (;;) {
            t2 = nlsndSystemControl(a5, 0x1100A0, 0x0);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            t2 = *(int *)((a4 + 0x8));
            t3 = *(int *)((a4 + 0x4));
            *(unsigned int *)(((((a5 << 1) + a5) << 2) + 0x8C454DD4)) = t3;
            *(unsigned int *)((((a5 << 2) + 0xA0800060) + 0x0)) = t3;
            t3 = nlsnd_PL_WaitRequest();
            if (t3 == 0) {
                t4 = nlsnd_PL_WaitAica1();
                if (t4 == 0) {
                    t0 = a5;
                    t0 = (t0 << 1);
                    t0 = (t0 + a5);
                    t0 = (t0 << 2);
                    t0 = (t0 + 0x8C454DD4);
                    nlsndG2WriteN(a4, (*(int *)((t0 + 0x4))), ((unsigned int)t2 >> 2));
                    nlsndG2Write((*(int *)((t0 + 0x8))), ((*(int *)((t0 + 0x4))) + 0x8));
                    t2 = nlsnd_PL_WaitAica2andGo();
                    if (t2 != 0) {
                        return t2;
                    }
                    return 0x0;
                }
                return t4;
            }
            return t3;
        }
        t1 = 0xFFFFFF00;
    }
    return t1;
}

int FUN_8c1e6120(int a4, int a5, int a6, int a7)
{
    int stk[30];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0xC)));
    *(float *)(((int)stk + 32)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x4)));
    *(float *)(((int)stk + 36)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x8)));
    *(float *)(((int)stk + 40)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0xC)));
    *(unsigned int *)(((int)stk + 52)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 56)) = (*(int *)0x8C460800);
    *(float *)(((int)stk + 60)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x10)));
    *(float *)(((int)stk + 64)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x14)));
    *(float *)(((int)stk + 68)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x18)));
    *(unsigned int *)(((int)stk + 80)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 84)) = (*(int *)0x8C460800);
    *(float *)(((int)stk + 88)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x1C)));
    *(float *)(((int)stk + 92)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x20)));
    *(float *)(((int)stk + 96)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x24)));
    *(unsigned int *)(((int)stk + 108)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 112)) = (*(int *)0x8C460800);
    return (kmyRegisterBGPlane((((int)stk + 4) + 0xC)));
}

int FUN_8c0f09c0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[18];
    register float u0;

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = 1.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    u0 = (f8 * f9);
    *(float *)(((int)stk + 60)) = ((u0 * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0x8C458E3C = f8;
    *(float *)0x8C458E40 = f9;
    *(float *)0x8C458E44 = (1.0f / f8);
    *(float *)0x8C458DBC = f8;
    *(float *)0x8C458DA4 = (-f8);
    *(float *)0x8C458DC0 = f9;
    *(float *)0x8C458DB8 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    return (nl_set_cnv_proj_pers());
}

int nlsndPackReloadBG(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = nlsndCheckPackReloadError(a4, a5);
    t1 = t0;
    if (t0 != 0) {
    } else {
        t0 = 0x0;
        for (;;) {
            t2 = nlsndSystemControl(a5, 0x1100A0, 0x0);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            t0 = a5;
            t0 = (t0 << 1);
            t0 = (t0 + a5);
            t0 = (t0 << 2);
            t2 = *(int *)((a4 + 0x4));
            t0 = (t0 + 0x8C454DD4);
            *(unsigned int *)((t0 + 0x0)) = t2;
            nlsndG2Write(t2, ((a5 << 2) + 0xA0800060));
            t2 = *(int *)((t0 + 0x4));
            t3 = *(int *)0x8C454CE8;
            *(unsigned int *)((t3 + 0x1C)) = t2;
            *(unsigned int *)((t3 + 0x18)) = t2;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x14)) = a4;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x8001;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x4)) = a6;
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x8)) = (*(int *)((t0 + 0x8)));
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0xC)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)(((*(int *)0x8C454CE8) + 0x10)) = 0x0;
            return 0x0;
        }
        t1 = 0xFFFFFF00;
    }
    return t1;
}

int nlDispStripLoadPalette(int a4, int a5)
{
    register int t37;
    register int t29;
    register int t7;
    register int t12;
    register int t20;
    register int t22;

    t37 = 0x0;
    if ((*(int *)0x8C1DC888) == 0) {
        t29 = 0x1;
        if ((int)a4 < (int)(*(short *)0x8C458E24)) {
            t7 = *(int *)0x8C458E38;
            if ((*(short *)(((((a4 << 2) << 1) + t7) + 0x4))) != 0) {
                *(unsigned short *)(((((a4 << 2) << 1) + t7) + 0x4)) = ((*(short *)(((((a4 << 2) << 1) + t7) + 0x4))) + 0x1);
                t22 = 0x0;
            } else {
                t12 = nlSearchPalette((*(short *)((a5 + 0x2))), (*(int *)((a5 + 0x8))));
                t20 = 0x1;
                if ((int)t12 >= 0) {
                    *(unsigned char *)(((((a4 << 2) << 1) + t7) + 0x2)) = (*(signed char *)((a5 + 0x2)));
                    *(unsigned char *)(((((a4 << 2) << 1) + t7) + 0x3)) = ((int)((*(int *)((a5 + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((((a4 << 2) << 1) + t7) + 0x4)) = 0x1;
                    *(unsigned short *)(((((a4 << 2) << 1) + t7) + 0x6)) = a4;
                    *(unsigned short *)(((((a4 << 2) << 1) + t7) + 0x0)) = t12;
                    nlSetPaletteMap(t12, (*(int *)((a5 + 0x8))));
                    nlSetPaletteData(((t12 << 2) << 2), (*(int *)((a5 + 0x4))), (*(int *)((a5 + 0x8))));
                    t20 = 0x0;
                }
                t22 = t20;
            }
            t29 = t22;
        }
        t37 = t29;
    }
    return t37;
}

int nlsndPackLoadLock(int a4, int a5, int a6)
{
    int stk[8];
    register int t44;
    register int t1;
    register int t40;
    register int t5;
    register int t6;
    register int t37;
    register int t7;
    register int t34;
    register int t11;
    register int t22;
    register int t12;
    register int t19;
    register int t16;
    register int t17;
    register int t28;
    register int t29;
    register int t31;

    *(unsigned int *)(((int)stk + 8)) = a5;
    t44 = 0xFFFFFFFA;
    if (a6 == 0) {
    } else {
        t1 = nlsndCheckPackIndex(a4, (*(int *)(((int)stk + 8))), a6);
        t40 = t1;
        if (t1 == 0) {
            *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x8)));
            t5 = nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x4))), a6, ((int)stk + 4));
            t6 = nlsnd_PL_WaitRequest();
            t37 = t6;
            if (t6 == 0) {
                t7 = nlsnd_PL_WaitAica1();
                t34 = t7;
                if (t7 == 0) {
                    if ((*(int *)(((int)stk + 4))) != 0) {
                        t11 = nlsndBlockMove(t5, (a6 + t5), (*(int *)(((int)stk + 4))));
                        t22 = t11;
                        if (t11 == 0) {
                            t12 = nlsnd_PL_WaitBlockMove();
                            t19 = t12;
                            if (t12 == 0) {
                                nlsndG2WriteN(a4, t5, ((unsigned int)(*(int *)(((int)stk + 12))) >> 2));
                                nlsndG2Write(a6, (t5 + 0x8));
                                t16 = nlsnd_PL_WaitAica2andGo();
                                t17 = 0x0;
                                if (t16 != 0) {
                                    t17 = t16;
                                }
                                t19 = t17;
                            }
                            t22 = t19;
                        }
                        t31 = t22;
                    } else {
                        nlsndG2WriteN(a4, t5, ((unsigned int)(*(int *)(((int)stk + 12))) >> 2));
                        nlsndG2Write(a6, (t5 + 0x8));
                        t28 = nlsnd_PL_WaitAica2andGo();
                        t29 = 0x0;
                        if (t28 != 0) {
                            t29 = t28;
                        }
                        t31 = t29;
                    }
                    t34 = t31;
                }
                t37 = t34;
            }
            t40 = t37;
        }
        t44 = t40;
    }
    return t44;
}
