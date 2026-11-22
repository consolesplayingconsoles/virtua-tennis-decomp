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

void effBounceDustSpawn(int a4, int a5, int a6, int a7, Stk4 p)
{
    int t1;
    int stk[14];


    stk[2] = p.w[0];
    stk[3] = p.w[1];
    stk[4] = p.w[2];
    stk[5] = p.w[3];
    if ((*(int *)0x8C287C60) == 0) {
        t1 = set_event(0x28, 0x8C082BC0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
        *(float *)((t1 + 0x20)) = 1.0f;
        *(unsigned int *)((t1 + 0x24)) = 0x0;
        *(unsigned int *)0x8C181608 = ((*(int *)0x8C181608) + 0x1);
    }
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


int mtxGetWorldPos(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];

    mtxGetPos(((int)stk + 20), (((int)stk + 20) + 0x4), (((int)stk + 20) + 0x8), a7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
    return (camViewToWorld(0x0, 0x0, 0x0, 0x0, a8, *(Stk3 *)(((int)stk + 8))));
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
    nlUnitVector((((int)stk + 4) + 0x4));
    nlUnitVector((((int)stk + 4) + 0x10));
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


    stk[1] = s.w[0];
    (*(int *)((int)stk + 8)) = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    (*(int *)((int)stk + 20)) = s.w[4];
    stk[6] = s.w[5];
    u0 = *(float *)((((int)stk + 4) + 0x8));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
    u2 = *(float *)((((int)stk + 4) + 0x0));
    u3 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u4 = ((u1 - u0) * (u1 - u0));
    u4 = u4 + (u3 - u2) * (u3 - u2);
    return _builtin_sqrtf(u4);
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


int vecDistXZ(Stk3 a, Stk3 b)
{
    a.w[1] = 0;
    b.w[1] = 0;
    return (nlLength(((int)&a.w[0]), ((int)&b.w[0])));
}


float cpuLineXAtZ(Stk6 s, float f4)
{
    float u0;
    float u1;
    float u4;
    int stk[15];


    stk[1] = s.w[0];
    (*(int *)((int)stk + 8)) = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    (*(int *)((int)stk + 20)) = s.w[4];
    stk[6] = s.w[5];
    u0 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
    u4 = ((*(float *)((((int)stk + 4) + 0x0))) - ((*(float *)((((int)stk + 4) + 0x8))) * (u0 / u1)));
    u4 = u4 + (u0 / u1) * f4;
    return u4;
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


