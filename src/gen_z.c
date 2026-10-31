/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
typedef struct { int w[6]; } Stk6;
int ADXPD_EntryMono(int, int, int, int);
int ADXPD_Start(int);
int VQFBfree(int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int abs(int);
int buFbrWakeupFiber(int, int);
int buGetFileInfo(int, int, int);
int camViewToWorld(int, ...);
int colliObjInit(int, float);
int dbgMenuDrawPage(void);
int eepromVmuLoad(int);
int eepromVmuSave(int);
int fileLoadPoll(int);
int fileLoadPollAfs(void);
int fileLoadStart(int, int, int);
int fileLoadStartAfs(int, int, int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kmSetPaletteData(int);
int kmiStartupDMA(void);
int kmyAllocateArea(int, int, int);
int kmyGetBGPlaneBase(int, int);
int kmyGetDefaultFilterMode(int, int, int, int);
int kmyMemCopy(int, int, int);
int kmySetSkipCount(int, int);
int kmytex_ABSalloc(int, int, int, int);
int kmytex_GetSmallVQprofile(int, int);
int memmove(int, int, int);
int mtxGetPos(int, int, int, int);
int nlChgObjectPolyAttrSub(int, int);
int nlCloseEvent(int);
float nlCos(int);
int nlCreateTextureParamA(int);
int nlFogDensityF(float);
int nlGetTranslate(int);
int nlInnerProduct(int, int);
int nlLength(int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlObjPut(int);
int nlPrintf(int, ...);
int nlRotateAxeSC(int, float, float);
int nlScaleVector(int, int, float);
int nlSetTranslate(int);
float nlSin(int);
int nlSprPut(int, int, int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndCheckPackLoadError(int, int);
int nlsndG2Read(int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int playerInit(int, int, int, int);
int set_event(int, int);
int sprInitRectF(int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSet173Load(int);
int sprTexFree(int);
int sprTexLoad(int);
int vsprintf(int, int, int);
void seNetHit2(void);
int ADXERR_CallErrFunc(Stk4 s);
int mwRnaErrCallFunc(Stk4 s);
int motionBoneOffset(int a4);
void effBounceDustSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int sprSet192PutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void _duchek(float f4, float f5);
int kmyFreeSmallVQArea(int a4, int a5);
int kmyRequestDMA(int a4);
int nlsndCheckPackFreeError(int a4);
int nlChgObjectPolyAttrOn(int a4);
int kmytex_GetfreememEx(int a4, int a5);
int dbgMenuAddPage(int a4);
int effEventTestExec(int a4);
int markerHitSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int nlGetMatrix(int a4);
void nlInitHeapMemory2(int a4, int a5);
int panelMenuSprInitA(void);
int panelMenuSprInitB(void);
int entryPortAtRound5Clean(int a4);
int BupPrintDataSize(void);
int BupCheckFile(void);
int nlLoadMatrix(int a4);
int nlCommonTextureDummyAlloc(int a4);
int VQDeQueueEntry(int a4, int a5);
int dbgMenuExec(int a4, int a5);
int mtxGetWorldPos(int a4, int a5, int a6, int a7, int a8);
void netVecSubXZ(Stk5 s);
int resGetModelLoad(int a4);
int FUN_8c0f0860(int a4);
int nlSpriteF2C(float f4);
int nlsnd_PL_WaitRequest(void);
int nlsndStreamSetHdChs(int a4, int a5);
int nlChgObjectPolyAttrOff(int a4);
int kmSetCheapShadowMode(int a4);
int buFbrKillFiber(int a4, int a5);
int dbgVdEdit(void);
int entryPartnerIsHuman(int a4);
int matchPlayersXInside(void);
int eepromSaveMsg(void);
int eepromLoadMsg(void);
int rankCursorChar(int a4, int a5);
float nlRotateAX(int a4);
void nlTransposeMatrix(void);
int kmySetBGPlane(int a4);
int ADXB_EvokeExpandMono(int a4, int a5);
int dbgMenuDrawTitles(void);
int playerSetup(int a4, int a5, int a6, int a7);
int resEndUniRead(int a4);
int resSpRead(int a4);
int nlSysUseLatency2V(void);
int nlsndStreamGetBufInfo(int a4, int a5, int a6);
int nlsndStreamSetHdBitSize(int a4, int a5);
int kmiCreateDummyRegionforAvoidCacheBug(int a4);
int angleIsWrapped(int a4, int a5);
int sprSet163Free(int a4);
int nlLightDir(int a4, float f4, float f5, float f6);
int nlLightDiffuse(int a4, int a5);
int nlGetMatrix8(int a4);
float nlRotateXSC(float f4, float f5);
float nlRotateAY(int a4);
float nlRotateAZ(int a4);
int nlsndG2DmaGetHandleStatus(int a4);
void ADXCRS_Lock(int a4, int a5);
int kmyCopyToFrameBuffer(int a4, int a5, int a6);
int cpuSglAim(int a4);
int cpuDblAim(int a4);
int shadowPartPutStage(int a4);
int entryPortContinue(int a4, int a5);
int afsPartition1Load(int a4);
int plPicLoad(int a4);
int trainingSpriteLoad(int a4);
int afsPartition7Load(int a4);
int lightOverrideAmbient(int a4, int a5);
int lightOverrideDiffuse(int a4, int a5);
int sndCrowdAmbStart(void);
int strmDebugPrint(void);
int nlCreateTextureParam(int a4);
void ADXCRS_Unlock(void);
int mtxMultiKeepPos(int a4);
int mtxMultiLeftKeepPos(int a4);
int matchSetSlowMotion(int a4, float f4);
int ballColliInit(void);
int cpuVecCos(Stk4 s);
int sprSet173Free(int a4);
int sprSet280Load(int a4);
int sprSet280Free(int a4);
int sprSet322Load(int a4);
int sprSet322Free(int a4);
float pauseDistXZArgs(Stk6 s);
int nlCommonTextureClearTextureIndex(int a4, int a5);
int nlLoadMatrix8(int a4);
float nlRotateYSC(float f4, float f5);
void nlUnitMatrix(void);
int nlObjPutSetVtxColorMode(int a4);
int kmChangeDisplayFilterMode(int a4, int a5);
int syCachePurgeAll(void);
int adxf_purge_all(void);
void miniEffectSpawn(Stk4 s);
int sprPutAt(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_8c1e6420(float f4);
int kmyEnableInterrupt(void);
int kmyRequestCallback(int a4);
int _destructFiber(int a4, int a5);
void pauseScaleVecArgs(Stk4 s, float f4);
int nlInitLibraryDC(int a4, int a5, int a6);
int nlRotateAxe(int a4, int a5);
int nlsndCheckPackIndex(int a4, int a5, int a6);
int nlsndStreamClose(int a4);
void nlsndStreamPause(void);
int nlsndGetG2TransMode(void);
float _app_sins(float f4);
int kmSetStrideWidth(int a4);
int kmyDisnnectRenderPacket(void);
int kmyUnregisterCallback(int a4);
int vecDistXZ(Stk4 s);
int perfPrint(void);
float cpuLineXAtZ(Stk6 s, float f4);
int nlsndStreamGetFreq(int a4);
int nlsndStreamGetBitSize(int a4);
int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_8c1e6b1c(int a4, int a5);
int SJUNI_GetNumChunk(int a4, int a5);
void vecTableGet(int a4, int a5, int a6, int a7, int a8);
float cpuDistXZ(int a4, int a5);
int ndbSum16Check(int a4, int a5);
void nlVoidUnitVector(int a4);
float _app_coss(float f4);
int fogSetDensity(int a4, float f4);
int minigamePolyLoad(void);
int invitationSpriteLoad(void);
int trialLoadSpriteLoad(void);
int plPic2SeleLoad(void);
void nlsndBlockMoveStatus(void);
int nlObjPut_vtxcolbridge(void);
int _pow5(int a4, int a5);
int kmyInitializeTA(int a4);
int dbgMenuGetValue(int a4, int a5);
int circuitTaskSetA(int a4, int a5);
int circuitRateSetA(int a4);
int circuitRateSetB(int a4);
int paletteUpload(void);
void nlCalcPoint4(int a4, int a5);
void nlCalcPoint(int a4, int a5);
void nlCalcVector(int a4, int a5);
int SJMEM_Lock(void);
int SJRBF_Lock(void);
int SJUNI_Lock(void);
int FUN_8c1ff1bc(int a4, int a5, int a6);
void ovLockCs_8c200114(int a4);
int kmyAllocateAreaWithAddress(int a4, int a5, int a6);

void seNetHit2(void)
{
    float u4;
    float u5;
    int t8;
    int t1;

    if (((*(int *)0x8C38BA70) != 0) && (t1 = *(int *)0x8C38BA74, t1 != 0)) {
        u4 = *(float *)0x8C291F60;
        u5 = (-u4);
        if (!(0.0f > u4)) {
            u5 = u4;
        }
        t8 = 0x201A9;
        if (!((*(float *)0x8C0D1C28) > u5)) {
            t8 = 0x1A9;
        }
        nlsndSeqRequest(t8);
    return;
    }
}



int motionBoneOffset(int a4)
{
    int t1;
    float u2;

    t1 = *(int *)0x8C2873B8;
    u2 = *(float *)(((*(int *)0x8C2871D4) + 0x4C));
    return nlTranslate(((*(float *)((((((a4 << 1) + a4) << 2) + t1) + 0x0))) * u2), ((*(float *)((((((a4 << 1) + a4) << 2) + t1) + 0x4))) * u2), (-((*(float *)((((((a4 << 1) + a4) << 2) + t1) + 0x8))) * u2)));
}

void effBounceDustSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t1;
    int stk[14];
    int R1020;

    R1020 = *(int *)((int)stk + 20);

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    R1020 = a11;
    if ((*(int *)0x8C287C60) == 0) {
        t1 = set_event(0x28, 0x8C082BC0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
        *(float *)((t1 + 0x20)) = 1.0f;
        *(unsigned int *)((t1 + 0x24)) = 0x0;
        *(unsigned int *)0x8C181608 = ((*(int *)0x8C181608) + 0x1);
    }
}


void _duchek(float f4, float f5)
{
    int t4;
    int stk[3];

    *(float *)(((int)stk + 4)) = f5;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = f4;
    if (((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) & 0x7FF00000) != 0x7FF00000) {
        return;
    }
    if ((((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) & 0xFFFFF) == 0) && (t4 = *(int *)((((((int)stk + 4) + 0x4) - 4) + 0x0)), t4 == 0)) {
        return;
    }
}


int kmyRequestDMA(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x28)) = 0x2;
    *(unsigned int *)0x8C203428 = ((*(int *)0x8C203428) - 1);
    kmiStartupDMA();
    if ((*(int *)0x8C203428) == 0) {
        _builtin_set_imask(((unsigned int)((((*(int *)0x8C20342C) & 0xF) << 2) << 2) >> 4));
    }
    return t0;
}



int kmytex_GetfreememEx(int a4, int a5)
{
    int t0;
    int t9;
    int t1;
    int t2;
    int t10;
    int t17;
    int t11;
    int t12;

    t0 = *(int *)0x8C20C9F4;
    t9 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t1 + 0x10))) > (unsigned int)t2) {
                t2 = (*(int *)((t1 + 0x10)));
            }
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t9 = t2;
    }
    t10 = *(int *)0x8C20CA04;
    t17 = 0x0;
    if (t10 != 0) {
        t11 = 0x0;
        t12 = t10;
        for (;;) {
            if ((unsigned int)(*(int *)((t12 + 0x10))) > (unsigned int)t11) {
                t11 = (*(int *)((t12 + 0x10)));
            }
            t12 = (*(int *)((t12 + 0x8)));
            if (t12 == 0) {
                break;
            }
        }
        t17 = t11;
    }
    *(unsigned int *)((a4 + 0x0)) = t9;
    *(unsigned int *)((a5 + 0x0)) = t17;
    return 0x0;
}

int dbgMenuAddPage(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C2871AC;
    if (t0 != 10) {
        t1 = ((int (*)(int))(a4))(t0);
        *(unsigned int *)0x8C2871AC = ((*(int *)0x8C2871AC) + 0x1);
        dbgMenuDrawTitles();
        return dbgMenuDrawPage();
    }
    return t0;
}

int effEventTestExec(int a4)
{
    int t1;
    int t2;

    nlLocate(0x14, 0x12);
    t1 = nlPrintf(0x8C10DB00);
    t2 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t2 - 1);
    if ((t2 - 1) == 0) {
        return nlCloseEvent(a4);
    }
    return t1;
}


int nlGetMatrix(int a4)
{
    int t1;
    float u3[16];
    float u4[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0x8C450864);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x4) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x4) - 0x4) + 0x0)) = u3[14];
    *(float *)((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[13];
    *(float *)(((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[12];
    *(float *)((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[11];
    *(float *)(((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[10];
    *(float *)((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[9];
    *(float *)(((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[8];
    *(float *)((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[7];
    *(float *)(((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[6];
    *(float *)((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[5];
    *(float *)(((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[4];
    *(float *)((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u3[0];
    u4[1] = u3[1];
    u4[2] = u3[2];
    u4[3] = u3[3];
    u4[4] = u3[4];
    u4[5] = u3[5];
    u4[6] = u3[6];
    u4[7] = u3[7];
    u4[8] = u3[8];
    u4[9] = u3[9];
    u4[10] = u3[10];
    u4[11] = u3[11];
    u4[12] = u3[12];
    u4[13] = u3[13];
    u4[14] = u3[14];
    u4[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u4);
    return (((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

void nlInitHeapMemory2(int a4, int a5)
{
    *(unsigned int *)0x8C23D1D8 = 0x0;
    *(unsigned int *)0x8C23D1D4 = 0x0;
    *(unsigned int *)0x8C23D1D0 = 0x0;
    *(unsigned int *)0x8C23D1CC = 0x0;
    *(unsigned int *)0x8C23D1E4 = a4;
    *(unsigned int *)0x8C23D1DC = a4;
    *(unsigned int *)0x8C23D1E0 = ((a4 + (a5 & 0xFFFFFFFC)) - 4);
    *(unsigned int *)((a4 + 0x0)) = ((a5 & 0xFFFFFFFC) - 8);
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((((a4 + (a5 & 0xFFFFFFFC)) - 0x4) + 0x0)) = ((a5 & 0xFFFFFFFC) - 4);
}



int entryPortAtRound5Clean(int a4)
{
    int t10;
    int t5;
    int t1;

    t10 = 0x0;
    if (((*(int *)(((0x8C343764 + (a4 << 2)) + 0x0))) == 0) && (t1 = *(int *)(((0x8C343784 + (a4 << 2)) + 0x0)), t1 == 0)) {
        t5 = 0x0;
        if ((*(int *)(((a4 << 2) + 0x8C343724))) == 5) {
            t5 = 0x1;
        }
        t10 = t5;
    }
    return t10;
}

int BupPrintDataSize(void)
{
    nlLocate(0x5, 0xA);
    nlPrintf(0x8C126BA8, 0x128);
    nlLocate(0x5, 0xB);
    return (nlPrintf(0x8C126BB8, 0x58));
}

int BupCheckFile(void)
{
    int t1;
    int stk[7];

    t1 = buGetFileInfo((*(int *)0x8C40C628), 0x8C126AB0, ((int)stk + 4));
    if ((t1 != 0xFFFFFF03) && (t1 != 0xFFFFFF01)) {
        return (((t1 == 0)) ? 1 : 0);
    }
    return 0xFFFFFFFF;
}


int nlCommonTextureDummyAlloc(int a4)
{
    int t0;
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = kmyAllocateArea(0x2, a4, ((int)stk + 4));
    if (t0 == 3) {
        return 0x0;
    }
    return (*(int *)(((int)stk + 4)));
}



int mtxGetWorldPos(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];

    mtxGetPos(((int)stk + 20), (((int)stk + 20) + 0x4), (((int)stk + 20) + 0x8), a7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
    return (camViewToWorld(a8));
}

void netVecSubXZ(Stk5 s)
{
    int stk[18];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    stk[8] = s.w[3];
    stk[9] = s.w[4];
    nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}

int resGetModelLoad(int a4)
{
    int t0;
    int t8;

    t0 = plPicLoad(a4);
    t8 = t0;
    if (t0 == 1) {
        if ((*(int *)(((a4 << 2) + 0x8C1AED70))) == 0) {
            sprSet173Load(a4);
        }
        *(unsigned int *)(((a4 << 2) + 0x8C1AED70)) = 0x1;
        t8 = 0x8C1AED70;
    }
    return t8;
}







int buFbrKillFiber(int a4, int a5)
{
    if ((*(int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC))) == 1) {
        buFbrWakeupFiber(a4, a5);
        *(unsigned int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC)) = 0x2;
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int entryPartnerIsHuman(int a4)
{
    int stk[6];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C110FFC); }
    return ((((*(int *)((((*(int *)((((int)stk + 4) + (a4 << 2)))) * 0x38) + 0x8C34326C))) == 0)) ? 1 : 0);
}

int matchPlayersXInside(void)
{
    float u0;
    int t1;

    u0 = *(float *)0x8C0BA774;
    if ((unsigned int)0x8C287D84 < (unsigned int)0x8C289874) {
        t1 = 0x8C287D84;
        for (;;) {
            if (u0 > (*(float *)((t1 + 0xAE8)))) {
                break;
            }
            t1 = (t1 + 0xD78);
            if ((unsigned int)t1 >= (unsigned int)0x8C289874) {
                return 0x1;
            }
        }
        return 0x0;
    }
    return 0x1;
}

int eepromSaveMsg(void)
{
    int t3;

    nlLocate(0x1, 0x2D);
    nlPrintf(0x8C126B98);
    nlWaitVSync();
    t3 = *(int *)0x8C40C628;
    if (t3 != 99) {
        return eepromVmuSave(t3);
    }
    return t3;
}

int eepromLoadMsg(void)
{
    int t3;

    nlLocate(0x1, 0x2D);
    nlPrintf(0x8C126B88);
    nlWaitVSync();
    t3 = *(int *)0x8C40C628;
    if (t3 != 99) {
        return eepromVmuLoad(t3);
    }
    return t3;
}

int rankCursorChar(int a4, int a5)
{
    int t5;
    int t2;
    int t0;

    if ((int)a4 > (int)0x1B) {
        return 0x0;
    }
    t5 = (a4 + 0x41);
    if ((int)a4 <= (int)0x19) {
    } else {
        t2 = 0x26;
        if (a4 == 26) {
        } else {
            t0 = a5;
            if (a4 == 27) {
                t0 = 0x2E;
            }
            t2 = t0;
        }
        t5 = t2;
    }
    return t5;
}

float nlRotateAX(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = 0.0f;
    u2[1] = u1;
    u2[2] = u0;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = 0.0f;
    u3[1] = (-u0);
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u2[0];
    u4[5] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u2[2];
    u5[7] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

void nlTransposeMatrix(void)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    float u0[16];
    float u13[16];

    _builtin_st_ext((float (*)[4])u0);
    t2 = (*(int *)&(u0[1]));
    t4 = (*(int *)&(u0[2]));
    t6 = (*(int *)&(u0[3]));
    t8 = (*(int *)&(u0[6]));
    t10 = (*(int *)&(u0[7]));
    t12 = (*(int *)&(u0[11]));
    _builtin_st_ext((float (*)[4])u13);
    u13[0] = u0[0];
    u13[1] = u0[4];
    u13[2] = u0[8];
    u13[3] = u0[12];
    u13[4] = (*(float *)&t2);
    u13[5] = u0[5];
    u13[6] = u0[9];
    u13[7] = u0[13];
    u13[8] = (*(float *)&t4);
    u13[9] = (*(float *)&t8);
    u13[10] = u0[10];
    u13[11] = u0[14];
    u13[12] = (*(float *)&t6);
    u13[13] = (*(float *)&t10);
    u13[14] = (*(float *)&t12);
    u13[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u13);
}

int kmySetBGPlane(int a4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    kmyGetBGPlaneBase(a4, ((int)stk + 4));
    kmyCopyToFrameBuffer((*(int *)(((int)stk + 4))), 0x8C470D30, (*(int *)0x8C470D2C));
    return (kmySetSkipCount((*(int *)(((int)stk + 8))), (*(int *)0x8C470D30)));
}

int ADXB_EvokeExpandMono(int a4, int a5)
{
    int t3;

    t3 = *(int *)((a4 + 0x8));
    ADXPD_EntryMono(t3, (*(int *)((a4 + 0x50))), a5, ((*(int *)(((a4 + 0x50) + 0x14))) + ((*(int *)(((a4 + 0x50) + 0x20))) << 1)));
    return ADXPD_Start(t3);
}


int playerSetup(int a4, int a5, int a6, int a7)
{
    int t2;

    *(unsigned int *)((a4 + 0xC58)) = a6;
    *(unsigned int *)((a4 + 0xB64)) = a7;
    t2 = a7;
    if ((*(int *)(((a5 << 2) + 0x8C287AE0))) == 0) {
        *(unsigned int *)(((a7 << 2) + 0x8C294658)) = a5;
        t2 = (a7 << 2);
    }
    *(unsigned int *)0x8C294668 = 0x0;
    *(unsigned int *)0x8C29466C = 0x0;
    *(float *)((a4 + 0xD00)) = 0.0f;
    return playerInit(a4, a5, a6, t2);
}

int resEndUniRead(int a4)
{
    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStartAfs(0x8CA80000, 0x4, (*(int *)(((a4 << 2) + 0x8C127340))));
    }
    return fileLoadPollAfs();
}

int resSpRead(int a4)
{
    int t5;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C1DC674))), 0x0);
    } else {
        t5 = 0x8C34A1EC;
    }
    return fileLoadPoll(t5);
}




int kmiCreateDummyRegionforAvoidCacheBug(int a4)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = 0x10000000;
    *(unsigned int *)(((int)stk + 12)) = 0x80000000;
    *(unsigned int *)(((int)stk + 16)) = 0x80000000;
    *(unsigned int *)(((int)stk + 20)) = 0x80000000;
    *(unsigned int *)(((int)stk + 24)) = 0x80000000;
    *(unsigned int *)(((int)stk + 28)) = 0x80000000;
    kmyCopyToFrameBuffer((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4), 0x18);
    return 0x18;
}

int angleIsWrapped(int a4, int a5)
{
    int t2;
    int stk[4];

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t2 = abs(((unsigned short)(*(short *)(((int)stk + 8))) - (unsigned short)(*(short *)(((int)stk + 4)))));
    return ((((int)t2 >= (int)0x8000)) ? 1 : 0);
}

int sprSet163Free(int a4)
{
    int t3;

    t3 = 0x8C1AED20;
    if ((*(int *)(((a4 << 2) + 0x8C1AED20))) != 0) {
        sprTexFree((*(int *)(((a4 << 2) + 0x8C124884))));
        *(unsigned int *)(((a4 << 2) + 0x8C1AED20)) = 0x0;
        *(unsigned int *)(((a4 << 2) + 0x8C1AED48)) = 0x0;
        t3 = 0x8C1AED48;
    }
    return t3;
}

int nlLightDir(int a4, float f4, float f5, float f6)
{
    *(float *)(((((a4 * 0xB0) + 0x8C44FC08) + 0x40) + 0x0)) = f4;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x44)) = f5;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x48)) = f6;
    return FUN_8c0f0860((((a4 * 0xB0) + 0x8C44FC08) + 0x40));
}

int nlLightDiffuse(int a4, int a5)
{
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x14)) = (*(float *)((a5 + 0x0)));
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x18)) = (*(float *)(((a5 + 0x4) + 0x0)));
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x1C)) = (*(float *)((((a5 + 0x4) + 0x4) + 0x0)));
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x20)) = (*(float *)(((((a5 + 0x4) + 0x4) + 0x4) + 0x0)));
    return 0x20;
}


float nlRotateXSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = (-f4);
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float nlRotateAY(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = 0.0f;
    u2[2] = (-u0);
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = u0;
    u3[1] = 0.0f;
    u3[2] = u1;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[8] = u3[0];
    u6[9] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[10] = u3[2];
    u7[11] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}

float nlRotateAZ(int a4)
{
    float u0;
    float u1;
    float u2[4];
    float u3[4];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    u2[0] = u1;
    u2[1] = u0;
    u2[2] = 0.0f;
    u2[3] = 0.0f;
    _builtin_ftrv(u2, u2);
    u3[0] = (-u0);
    u3[1] = u1;
    u3[2] = 0.0f;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u2[0];
    u4[1] = u2[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[2] = u2[2];
    u5[3] = u2[3];
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = u3[0];
    u6[5] = u3[1];
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[6] = u3[2];
    u7[7] = u3[3];
    _builtin_ld_ext((float (*)[4])u7);
    return u2[0];
}


void ADXCRS_Lock(int a4, int a5)
{
    int t1;

    if ((*(int *)0x8C20C894) == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        *(unsigned int *)0x8C20C898 = t1;
    }
    *(unsigned int *)0x8C20C894 = ((*(int *)0x8C20C894) + 0x1);
}

int kmyCopyToFrameBuffer(int a4, int a5, int a6)
{
    if (a6 == 0) {
        return 0xEEEE;
    }
    kmyMemCopy((a4 + 0xA5000000), a5, a6);
    return 0x0;
}

int cpuSglAim(int a4)
{
    int t2;
    int t4;

    t2 = ((int (*)(int, int))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D58C)))))(a4, 0x0);
    t4 = *(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D5F0));
    return ((int (*)(int, int))(t4))(a4, t2);
}

int cpuDblAim(int a4)
{
    int t2;
    int t4;

    t2 = ((int (*)(int, int))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D8AC)))))(a4, 0x0);
    t4 = *(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D928));
    return ((int (*)(int, int))(t4))(a4, t2);
}

int shadowPartPutStage(int a4)
{
    int t3;

    t3 = 0xC5BCA08;
    if (((*(int *)0x8C1891E8) != 1) || (a4 != 10)) {
        t3 = (*(int *)(((a4 << 2) + 0x8C18256C)));
    }
    return nlObjPut(t3);
}

int entryPortContinue(int a4, int a5)
{
    int t0;
    int t1;
    int t3;

    if ((int)a4 >= 0) {
        t0 = *(short *)(((a4 << 1) + 0x8C185298));
        t1 = *(short *)0x8C343262;
        *(unsigned short *)0x8C343262 = (t1 | t0);
        *(unsigned int *)((((a4 << 2) + 0x8C343764) + 0x0)) = ((*(int *)((((a4 << 2) + 0x8C343764) + 0x0))) + 0x1);
        t3 = (t1 | t0);
    }
    return t3;
}

int afsPartition1Load(int a4)
{
    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStartAfs(0x8CA80000, 0x1, (*(int *)(((a4 << 2) + 0x8C11FC70))));
    }
    return fileLoadPollAfs();
}

int plPicLoad(int a4)
{
    int t5;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C1890B4))), 0x0);
    } else {
        t5 = 0x8C34A1EC;
    }
    return fileLoadPoll(t5);
}

int trainingSpriteLoad(int a4)
{
    int t5;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C1890FC))), 0x0);
    } else {
        t5 = 0x8C34A1EC;
    }
    return fileLoadPoll(t5);
}

int afsPartition7Load(int a4)
{
    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStartAfs(0x8CA80000, 0x7, (*(int *)(((a4 << 2) + 0x8C11FD3C))));
    }
    return fileLoadPollAfs();
}

int lightOverrideAmbient(int a4, int a5)
{
    int t0;

    if (a5 == 0) {
        *(unsigned int *)((0x8C1D1168 + (a4 << 2))) = 0x0;
        t0 = (a4 << 2);
    } else {
        *(unsigned int *)((0x8C1D1168 + (a4 << 2))) = 0x1;
        *(float *)(((a4 << 2) + 0x8C1D1188)) = (float)a5;
        t0 = 0x8C1D1188;
    }
    return t0;
}

int lightOverrideDiffuse(int a4, int a5)
{
    int t0;

    if (a5 == 0) {
        *(unsigned int *)((0x8C1D1178 + (a4 << 2))) = 0x0;
        t0 = (a4 << 2);
    } else {
        *(unsigned int *)((0x8C1D1178 + (a4 << 2))) = 0x1;
        *(float *)(((a4 << 2) + 0x8C1D1198)) = (float)a5;
        t0 = 0x8C1D1198;
    }
    return t0;
}

int sndCrowdAmbStart(void)
{
    nlsndSeqRequest(0x503A9);
    return nlsndSystemControl(0x1, 0x10A0, (int)((float)(*(int *)0x8C38BA64) * (*(float *)0x8C0D3440)));
}

int strmDebugPrint(void)
{
    nlLocate(0x3, 0x1E);
    return (nlPrintf(0x8C125ED0, ((*(int *)0x8C40C230)), ((*(int *)0x8C40C23C))));
}


void ADXCRS_Unlock(void)
{
    int t0;

    t0 = *(int *)0x8C20C894;
    *(unsigned int *)0x8C20C894 = (t0 - 1);
    if ((t0 - 1) == 0) {
        _builtin_set_imask(((unsigned int)((((*(int *)0x8C20C898) & 0xF) << 2) << 2) >> 4));
    }
}

int mtxMultiKeepPos(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetTranslate((((int)stk + 4) + 0x4));
    nlMultiMatrix((*(int *)(((int)stk + 4))));
    return (nlSetTranslate((((int)stk + 4) + 0x4)));
}

int mtxMultiLeftKeepPos(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetTranslate((((int)stk + 4) + 0x4));
    nlMultiMatrixRevOrder((*(int *)(((int)stk + 4))));
    return (nlSetTranslate((((int)stk + 4) + 0x4)));
}

int matchSetSlowMotion(int a4, float f4)
{
    *(unsigned int *)0x8C287B48 = a4;
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
    *(float *)0x8C287C3C = 1.0f;
    *(float *)0x8C287C40 = f4;
    *(float *)0x8C287C44 = (*(float *)0x8C01AF4C);
    return 0x8C01AF4C;
}


int cpuVecCos(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    FUN_8c0f0860((((int)stk + 4) + 0x4));
    FUN_8c0f0860((((int)stk + 4) + 0x10));
    return (nlInnerProduct((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10)));
}

int sprSet173Free(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) {
        sprTexFree((*(int *)(((a4 << 2) + 0x8C1248CC))));
        *(unsigned int *)(((a4 << 2) + 0x8C1AED70)) = 0x0;
    }
    return 0x8C1AED70;
}

int sprSet280Load(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C37CDFC))) == 0) {
        sprTexLoad((*(int *)(((a4 << 2) + 0x8C124974))));
        *(unsigned int *)(((a4 << 2) + 0x8C37CDFC)) = 0x1;
    }
    return 0x8C37CDFC;
}

int sprSet280Free(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C37CDFC))) != 0) {
        sprTexFree((*(int *)(((a4 << 2) + 0x8C124974))));
        *(unsigned int *)(((a4 << 2) + 0x8C37CDFC)) = 0x0;
    }
    return 0x8C37CDFC;
}

int sprSet322Load(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C37CEEC))) == 0) {
        sprTexLoad((*(int *)(((a4 << 2) + 0x8C124A40))));
        *(unsigned int *)(((a4 << 2) + 0x8C37CEEC)) = 0x1;
    }
    return 0x8C37CEEC;
}

int sprSet322Free(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C37CEEC))) != 0) {
        sprTexFree((*(int *)(((a4 << 2) + 0x8C124A40))));
        *(unsigned int *)(((a4 << 2) + 0x8C37CEEC)) = 0x0;
    }
    return 0x8C37CEEC;
}

float pauseDistXZArgs(Stk6 s)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    int stk[15];
    int R1008;
    int R1020;

    R1008 = *(int *)((int)stk + 8);
    R1020 = *(int *)((int)stk + 20);

    stk[1] = s.w[0];
    R1008 = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    R1020 = s.w[4];
    stk[6] = s.w[5];
    u0 = *(float *)((((int)stk + 4) + 0x8));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
    u2 = *(float *)((((int)stk + 4) + 0x0));
    u3 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u4 = ((u1 - u0) * (u1 - u0));
    u4 = u4 + (u3 - u2) * (u3 - u2);
    return _builtin_sqrtf(u4);
}

int nlCommonTextureClearTextureIndex(int a4, int a5)
{
    int t0;
    int t2;

    if ((int)a4 >= 0) {
        t0 = *(int *)0x8C4241C4;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t0)) = ((*(int *)(((((int)a4 >> 5) << 2) + t0))) & (~(((int)(0x1F & a4) >= 0) ? (0x1 << ((0x1F & a4) & 31)) : ((-(int)(0x1F & a4) & 31) ? ((int)0x1 >> (-(int)(0x1F & a4) & 31)) : ((int)0x1 >> 31)))));
        t2 = t0;
    }
    return t2;
}


float nlRotateYSC(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = (-f4);
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

void nlUnitMatrix(void)
{
    float u0[16];
    float u1[16];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];
    float u6[16];
    float u7[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ld_ext((float (*)[4])u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[6] = 0.0f;
    u1[7] = 0.0f;
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[8] = 0.0f;
    u2[9] = 0.0f;
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = 0.0f;
    u3[13] = 0.0f;
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = 1.0f;
    u4[1] = 0.0f;
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = 1.0f;
    u5[11] = 0.0f;
    _builtin_ld_ext((float (*)[4])u5);
    _builtin_st_ext((float (*)[4])u6);
    u6[4] = 0.0f;
    u6[5] = 1.0f;
    _builtin_ld_ext((float (*)[4])u6);
    _builtin_st_ext((float (*)[4])u7);
    u7[14] = 0.0f;
    u7[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u7);
}


int kmChangeDisplayFilterMode(int a4, int a5)
{
    *(unsigned int *)0x8C45EFD4 = a4;
    kmyGetDefaultFilterMode((*(int *)0x8C45EFD0), a5, 0x8C45EFD8, 0x8C45EFE4);
    *(unsigned int *)0x8C45EFE0 = ((*(int *)0x8C45EFE0) | 0x3);
    return 0x0;
}

int syCachePurgeAll(void)
{
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC1E8150))();
}

int adxf_purge_all(void)
{
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC1F1880))();
}

void miniEffectSpawn(Stk4 s)
{
    int t0;
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    t0 = set_event(0x24, 0x8C03BB5C);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
    *(unsigned int *)((t0 + 0x20)) = 0x0;
}



int kmyEnableInterrupt(void)
{
    int t3;

    t3 = 0xEEEE;
    if ((*(int *)0x8C470AA4) == 0) {
        _builtin_set_imask(((unsigned int)((((*(int *)0x8C470AA8) & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
    }
    return t3;
}

int kmyRequestCallback(int a4)
{
    int t2;

    t2 = ((int (*)(int))((*(int *)(((((a4 << 2) << 1) + 0x8C470A20) + 0x0)))))((*(int *)(((((a4 << 2) << 1) + 0x8C470A20) + 0x4))));
    return 0x0;
}

int _destructFiber(int a4, int a5)
{
    int t2;

    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    if ((*(int *)((a5 + 0x118))) != 0) {
        t2 = *(int *)((a5 + 0x118));
        return ((int (*)(int, int))(t2))(a4, a5);
    }
    return 0x118;
}


int nlInitLibraryDC(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0x8C0EAF30))(a4, a5, a6, 0x0);
}

int nlRotateAxe(int a4, int a5)
{
    float t0;
    float t1;

    t0 = nlCos(a5);
    t1 = nlSin(a5);
    return nlRotateAxeSC(a4, t1, t0);
}

int nlsndCheckPackIndex(int a4, int a5, int a6)
{
    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x8) {
            return ((int (*)(int, int, int))(0x8C0F4E12))(a4, a5, a6);
        }
        return nlsndCheckPackLoadError(a4, a5);
    }
    return ((int (*)(int, int, int))(0x8C0F4E12))(a4, a5, a6);
}

int nlsndStreamClose(int a4)
{
    int t0;
    int t5;
    int t2;

    t0 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x0));
    t5 = t0;
    if (t0 == 1) {
        t2 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        if (t2 == 0) {
            *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x0)) = 0x0;
        }
        t5 = t2;
    }
    return t5;
}

void nlsndStreamPause(void)
{
    
}

int nlsndGetG2TransMode(void)
{
    return (*(int *)0x8C454CEC);
}

float _app_sins(float f4)
{
    int t1;
    int t2;
    float u3;
    float u4;
    float u5;

    t1 = 0x6;
    t2 = 0x8C12C304;
    u3 = (*(float *)0x8C12C300);
    for (;;) {
        u4 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u5 = u4;
        u5 = u5 + (f4 * f4) * u3;
        u3 = u5;
        if ((int)t1 <= 0) {
            break;
        }
    }
    return (f4 * u3);
}


int kmyDisnnectRenderPacket(void)
{
    return 0x0;
}

int kmyUnregisterCallback(int a4)
{
    *(unsigned int *)(((0x8C470A20 + ((a4 << 2) << 1)) + 0x0)) = (*(int *)0x8C470A1C);
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C470A20) + 0x4)) = 0x0;
    return 0x0;
}

int vecDistXZ(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    return (nlLength((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10)));
}


float cpuLineXAtZ(Stk6 s, float f4)
{
    float u0;
    float u1;
    float u4;
    int stk[15];
    int R1008;
    int R1020;

    R1008 = *(int *)((int)stk + 8);
    R1020 = *(int *)((int)stk + 20);

    stk[1] = s.w[0];
    R1008 = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    R1020 = s.w[4];
    stk[6] = s.w[5];
    u0 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
    u4 = ((*(float *)((((int)stk + 4) + 0x0))) - ((*(float *)((((int)stk + 4) + 0x8))) * (u0 / u1)));
    u4 = u4 + (u0 / u1) * f4;
    return u4;
}



int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    _builtin_prefetch((void *)a6);
    *(float *)((((a6 - 4) - 0x4) + 0x0)) = f7;
    *(float *)(((((a6 - 4) - 0x4) - 0x4) + 0x0)) = (f6 * f7);
    *(float *)((((((a6 - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = (f5 * f7);
    _builtin_prefetch((void *)((((a6 - 4) - 0x4) - 0x4) - 0x4));
    return ((((a6 - 4) - 0x4) - 0x4) - 0x4);
}

int FUN_8c1e6b1c(int a4, int a5)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        if ((*(signed char *)((a5 + 0x0))) != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int))(0x8C1E6B14))(a4);
}

int SJUNI_GetNumChunk(int a4, int a5)
{
    int t1;
    int t2;

    t1 = (*(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)));
    t2 = 0x0;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
        t2 = (t2 + 0x1);
    }
    return t2;
}

void vecTableGet(int a4, int a5, int a6, int a7, int a8)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + a4)); }
}

float cpuDistXZ(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a5 + 0x8));
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)((a4 + 0x0));
    u4 = ((u2 - u1) * (u2 - u1));
    u4 = u4 + (u3 - u0) * (u3 - u0);
    return _builtin_sqrtf(u4);
}

int ndbSum16Check(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t0;

    t1 = a4;
    t2 = 0x0;
    t3 = 0x10;
    for (;;) {
        t4 = ((int)t3 > 0);
        t3 = (t3 - 1);
        if (!t4) {
            break;
        }
        t0 = (*(signed char *)((t1 + 0x0)));
        t1 = (t1 + 0x1);
        t2 = (t2 + t0);
    }
    return ((((unsigned char)t2 == (unsigned char)a5)) ? 1 : 0);
}

void nlVoidUnitVector(int a4)
{
    float u0;
    float u1;
    float u2;
    float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u6 = iaFsrra((_builtin_fipr(u3, u4)));
    *(float *)((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
}

float _app_coss(float f4)
{
    int t1;
    int t2;
    float u3;
    float u4;
    float u5;

    t1 = 0x6;
    t2 = 0x8C12C2E4;
    u3 = (*(float *)0x8C12C2E0);
    for (;;) {
        u4 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u5 = u4;
        u5 = u5 + (f4 * f4) * u3;
        u3 = u5;
        if ((int)t1 <= 0) {
            break;
        }
    }
    return u3;
}

int fogSetDensity(int a4, float f4)
{
    *(float *)((a4 + 0xC)) = (f4 * (*(float *)0x8C0896D8));
    return nlFogDensityF((*(float *)((a4 + 0xC))));
}

int minigamePolyLoad(void)
{
    int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CB40000, 0x8C11FBE8, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int invitationSpriteLoad(void)
{
    int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, 0x8C11FE08, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int trialLoadSpriteLoad(void)
{
    int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, 0x8C11FE24, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}

int plPic2SeleLoad(void)
{
    int t4;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStart(0x8CA80000, 0x8C11FE40, 0x0);
    } else {
        t4 = 0x8C34A1EC;
    }
    return fileLoadPoll(t4);
}


int nlObjPut_vtxcolbridge(void)
{
    int t0;
    int stk[5];

    t0 = *(int *)0x8C1DCA98;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0x8C0FDAEA))();
}

int _pow5(int a4, int a5)
{
    return memmove(a5, (((a4 << 2) << 1) + 0x8C12C410), 0x8);
}

int kmyInitializeTA(int a4)
{
    int t0;

    *(unsigned int *)((a4 + 0x0)) = 0x8C4743FC;
    *(unsigned int *)0x8C4747C0 = 0x8C1F8AE0;
    t0 = *(int *)0x8C4743EC;
    return ((int (*)(int, int, int))(t0))(0x8C4743D8, 0x8C4747B4, 0x8C4743FC);
}

int dbgMenuGetValue(int a4, int a5)
{
    return (*(int *)((((((a5 << 1) + a5) << 2) << 1) + ((a4 * 0x1F0) + 0x8C285E4C))));
}

int circuitTaskSetA(int a4, int a5)
{
    int t0;

    if (a4 != 0) {
        *(unsigned int *)(((((((a4 - 1) << 1) + (a4 - 1)) << 2) << 1) + 0x8C2FBD2C)) = a5;
        t0 = 0x8C2FBD2C;
    }
    return t0;
}

int circuitRateSetA(int a4)
{
    *(unsigned char *)0x8C2FBC80 = a4;
    *(float *)0x8C2FBC74 = (*(float *)(((((a4 << 1) + a4) << 2) + 0x8C1081D8)));
    return 0x1C;
}

int circuitRateSetB(int a4)
{
    *(unsigned char *)0x8C2FBC81 = a4;
    *(float *)0x8C2FBC78 = (*(float *)(((((a4 << 1) + a4) << 2) + 0x8C108214)));
    return 0x20;
}


void nlCalcPoint4(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void nlCalcPoint(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void nlCalcVector(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = (*(float *)(((a4 + 0x4) + 0x0)));
    u3[2] = (*(float *)((((a4 + 0x4) + 0x4) + 0x0)));
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

int SJMEM_Lock(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJRBF_Lock(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJUNI_Lock(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int FUN_8c1ff1bc(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int))(0x8C1FF1B0))(a4, a5, (a6 - 1));
}

void ovLockCs_8c200114(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int kmyAllocateAreaWithAddress(int a4, int a5, int a6)
{
    return (kmytex_ABSalloc(a4, a5, a6, ((((unsigned int)(*(int *)((a6 + 0x0))) >= (unsigned int)(*(int *)0x8C20C9E0))) ? 1 : 0)));
}
