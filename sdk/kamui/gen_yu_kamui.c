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


int kmiProcessVertex_01(int a4, int a5, int a6, int a7)
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


int kmiProcessVertex_02(int a4, int a5, int a6, int a7)
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

int kmiProcessVertex_10(int a4, int a5, int a6, int a7)
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


int kmiProcessVertex_15(int a4, int a5, int a6, int a7)
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


