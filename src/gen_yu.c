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


