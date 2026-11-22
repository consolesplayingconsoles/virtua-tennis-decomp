/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int abs(int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int camWorldToView(int, ...);
int charaModelCount(int);
int charaTexFreeAll(void);
int emotFaceReset(int);
int entryCountJoined(void);
int entryIsVersus(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlotOfs(int, int, int, int, int);
int hudFramePutNarrow(Stk3, float);
int hudImpactSpawn(int, Stk16, float);
int hudNumPut(int, Stk3, float);
int kmSetBackGroundPlane(int, int);
int kmyRegisterBGPlane(int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotReset(int, int);
int nlDispStripTrnsl(int, int);
float nlExp(float);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlSetCommonTextureOffset(int);
int nlSingleLine(int, int, int);
int nlSubVector3op(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int padLcdModeClear(void);
int playerSetup(int, int, int, int);
int prefetch(int);
int primVertexSet(int, int, int, int, int, Stk3);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int screenQuadPut(int, float);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uiScanlinesPut(void);
int uniformSlotReset(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int circuitDrawFrame(void);
int screenSphereVisibleRaised(Stk4 s, float f4);
int primRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int camInit(int a4, int a5, int a6, int a7);
int vmsfs_fsetparam(int a4, int a5, int a6);
void bodyLinePerp(Stk10 s);
int nlRotateAxeSC(int a4, float f4, float f5);
int nlChgObjectPolyAttrSub(int a4, int a5, int a6);
int ADXAMP_Create(int a4, int a5, int a6);
int primLineV(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int entryAllReady(void);
int strmCrowdLoop(int a4);
void sndEndingCheer(void);
int circuitMapInit(void);
int charaTexLoad(int a4, int a5);
float nlLdexpf(int a4, float f4);
int sprSet163Setup(int a4);
int kmtex_TextureSize_Palettized(int a4);
int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int fileLoadStart(int a4, int a5, int a6);
int kmiProcessVertex_03(int a4, int a5, int a6, int a7);
int nlLineSendHeader(int a4);
float nlTanh(int a4);
int nlSetBackColorZ(int a4, int a5, int a6, float f4);
int cpuDebugLine(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlsndBlockMove(int a4, int a5, int a6);
int cpuGiveUpCheck(int a4, float f4);
int hudValueDraw(int a4, int a5, int a6, int a7, float f4);
int fadeScreenStart(int a4, int a5, int a6, int a7);
int uniformTexLoad(int a4, int a5, int a6);
int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int swingBlurSpawn(int a4, int a5, int a6, int a7);
int charaTexCount(int a4);


int kmtex_TextureSize_Palettized(int a4)
{
    int t0;
    int t1;
    int t26;
    int t3;
    int t12;
    int t13;
    int t14;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t16;
    int t21;
    int t35;
    int t32;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t26 = (t1 * t0);
    if (((*(int *)((a4 + 0x18))) & 0x80000000) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t12 = (t1 * t0);
        t13 = ((unsigned int)t1 >> 1);
        t14 = ((unsigned int)t0 >> 1);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t5 = t3;
            t6 = (t1 * t0);
            t7 = ((unsigned int)t1 >> 1);
            t8 = ((unsigned int)t0 >> 1);
            for (;;) {
                t9 = (t7 * t8);
                t7 = ((unsigned int)t7 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t6 = (t6 + t9);
                if ((unsigned int)t5 <= (unsigned int)0x1) {
                    break;
                }
            }
            t12 = t6;
            t13 = t7;
            t14 = t8;
        }
        t16 = (t12 + (t13 * t14));
        if (t13 == t14) {
            t16 = (t12 + 0x1);
        }
        t21 = (t16 + 0xB);
        if ((*(int *)((a4 + 0x8))) == 0x28000000) {
            t21 = (t16 + 0x2B);
        }
        t26 = t21;
    }
    t35 = t26;
    if ((*(int *)((a4 + 0x8))) == 0x28000000) {
        t32 = ((unsigned int)t26 >> 1);
        if (t26 == 1) {
            t32 = 0x1;
        }
        t35 = t32;
    }
    return t35;
}


int kmiProcessVertex_03(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t19;
    int t21;
    int stk[31];

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
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x10)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x14)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t19 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t21 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t21 + 0x18)) = (*(int *)((t19 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}


