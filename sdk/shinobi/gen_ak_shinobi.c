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


int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int t3;
    int t7;
    int t11;
    int stk[5];

    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C46459A))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
            return 0xFFFFFF01;
        }
        t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t7 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C4645A0))) == 0) {
                return 0xFFFFFF01;
            }
            t11 = buIsFormat((*(int *)((a4 + 0x28))));
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned short *)((a4 + 0x2)) = (*(short *)(((int)stk + 8)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 4)));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}


