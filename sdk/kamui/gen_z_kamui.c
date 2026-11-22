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
int camViewToWorld(int, int, int, int, int, Stk3);
int colliObjInit(int, float);
int dbgMenuDrawPage(void);
int eepromVmuLoad(int);
int eepromVmuSave(int);
int fileLoadPoll(int);
int fileLoadPollAfs(void);
int fileLoadStart(int, int, int);
int fileLoadStartAfs(int, int, int);
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
void effBounceDustSpawn(int a4, int a5, int a6, int a7, Stk4 p);
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
int nlUnitVector(int a4);
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
int setCullingThreshold(float f4);
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
int vecDistXZ(Stk3 a, Stk3 b);
int perfPrint(void);
float cpuLineXAtZ(Stk6 s, float f4);
int nlsndStreamGetFreq(int a4);
int nlsndStreamGetBitSize(int a4);
int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int stringEquals(int a4, int a5);
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
int bufferEquals(int a4, int a5, int a6);
void ovLockCs_8c200114(int a4);
int kmyAllocateAreaWithAddress(int a4, int a5, int a6);


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


int kmySetBGPlane(int a4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    kmyGetBGPlaneBase(a4, ((int)stk + 4));
    kmyCopyToFrameBuffer((*(int *)(((int)stk + 4))), 0x8C470D30, (*(int *)0x8C470D2C));
    return (kmySetSkipCount((*(int *)(((int)stk + 8))), (*(int *)0x8C470D30)));
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


int kmyCopyToFrameBuffer(int a4, int a5, int a6)
{
    if (a6 == 0) {
        return 0xEEEE;
    }
    kmyMemCopy((a4 + 0xA5000000), a5, a6);
    return 0x0;
}


int kmChangeDisplayFilterMode(int a4, int a5)
{
    *(unsigned int *)0x8C45EFD4 = a4;
    kmyGetDefaultFilterMode((*(int *)0x8C45EFD0), a5, 0x8C45EFD8, 0x8C45EFE4);
    *(unsigned int *)0x8C45EFE0 = ((*(int *)0x8C45EFE0) | 0x3);
    return 0x0;
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


int kmyInitializeTA(int a4)
{
    int t0;

    *(unsigned int *)((a4 + 0x0)) = 0x8C4743FC;
    *(unsigned int *)0x8C4747C0 = 0x8C1F8AE0;
    t0 = *(int *)0x8C4743EC;
    return ((int (*)(int, int, int))(t0))(0x8C4743D8, 0x8C4747B4, 0x8C4743FC);
}


int kmyAllocateAreaWithAddress(int a4, int a5, int a6)
{
    return (kmytex_ABSalloc(a4, a5, a6, ((((unsigned int)(*(int *)((a6 + 0x0))) >= (unsigned int)(*(int *)0x8C20C9E0))) ? 1 : 0)));
}
