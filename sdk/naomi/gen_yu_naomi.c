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


int nlPerspectiveProj(int a4, int a5, int a6)
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


int nlLookAtUp(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((int)stk + 8)) = ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 16)) = ((*(float *)((a4 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C));
    nlOuterProduct((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x1C));
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
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


int nlMirrorDouble(int a4)
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


int nlParallelProj(int a4)
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


int nlObjPutCheckSideCulling(int a4)
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

int nlLookAtUp_L(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), a5, (*(int *)(((int)stk + 4))));
    nlOuterProduct((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20));
    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    nlUnitVector((((int)stk + 4) + 0x20));
    nlUnitVector((((int)stk + 4) + 0x14));
    nlUnitVector((((int)stk + 4) + 0x8));
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


int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9)
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


int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9)
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
