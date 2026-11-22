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


int nlLightDir(int a4, float f4, float f5, float f6)
{
    *(float *)(((((a4 * 0xB0) + 0x8C44FC08) + 0x40) + 0x0)) = f4;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x44)) = f5;
    *(float *)((((a4 * 0xB0) + 0x8C44FC08) + 0x48)) = f6;
    return nlUnitVector((((a4 * 0xB0) + 0x8C44FC08) + 0x40));
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
    /* one function with nlsndCheckPackLoadError (0x8C0F4D70), its body: the pack at a4 for slot a5, a6 bytes (0: its own
       size) */
    int size;
    int room;
    int i;

    if ((int)a5 < 0 || (int)a5 >= (int)0x8) {
        return 0xFFFFFFFF;
    }
    for (i = 0; i < 4; i++) {
        if ((*(signed char *)((a4 + i))) != (*(signed char *)((0x8C127EB8 + i)))) {
            return 0xFFFFFFFE;                      /* not "DTPK" */
        }
    }
    if ((*(int *)((0x8C454DD4 + a5 * 12))) != -1) {
        return 0xFFFFFFFD;                          /* the slot is in use */
    }
    size = *(int *)((a4 + 0x8));
    room = nlsndG2Read(0xA0800088);
    if (a6 != 0) {
        if ((a6 & 3) != 0 || !((int)a6 >= (int)size)) {
            return 0xFFFFFFFA;
        }
        size = a6;
    }
    size = size + (*(int *)0x8C454CBC);
    if ((int)size > (int)room) {
        return 0xFFFFFFFC;                          /* no room in sound RAM */
    }
    if ((*(int *)((*(int *)0x8C454CE8))) != 0) {
        return 0xFFFFFFFB;
    }
    return 0x0;
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


int nl_objput_mv_send_p0(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    _builtin_prefetch((void *)a6);
    *(float *)((((a6 - 4) - 0x4) + 0x0)) = f7;
    *(float *)(((((a6 - 4) - 0x4) - 0x4) + 0x0)) = (f6 * f7);
    *(float *)((((((a6 - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = (f5 * f7);
    _builtin_prefetch((void *)((((a6 - 4) - 0x4) - 0x4) - 0x4));
    return ((((a6 - 4) - 0x4) - 0x4) - 0x4);
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


