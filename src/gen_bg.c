/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
int charaModelCount(int);
int charaTexCount(int);
int charaTexLoad(int, int);
int circuitDrawBar(float);
int circuitNumDraw(int, int, int, float, float, float);
int cpuAimPointSet(int, int, float, float);
int entryCountJoined(Stk2);
int entryGetColorId(int);
int entryIsVersus(void);
int gameModeSet(int, int, int);
int menuDimScreen(int);
int menuResultDraw(int, int, int, float);
int miniPlacePlayers(void);
int modelSwapMaterial(int, int, int);
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int muneTexLoad(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLineSetDiv(float);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlObjPut(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutLoadTextureCallBack(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetCommonTextureOffset(int);
int nlSetDummyTextureParameter(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSetTextureParameter(int, int);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int primVertexSet(int, int, int, int, int);
int resultFlagsClear(void);
int sklDrawNodeOne(int);
int sndSeCursor(void);
int sndSeDecide(void);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffLookAtBall(int, int, int);
int strmBgmPlay(int);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int uniformTexLoad(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int miniRoundStart(int a4, int a5, int a6, int a7);
int primFrameCorners(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int circuitDrawGameInfo(void);
int menuResultExec(int a4);
int cpuSglAimAddLv23(int a4, int a5);
int uniformLoadStep(void);
int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8);
int primRectFrame(int a4, int a5, int a6, int a7);
int ballBoyPoseRun(int a4);
int standSort(int a4, int a5);









int ballBoyPoseRun(int a4)
{
    int t61;
    int t98;
    int t105;
    int t112;
    int t106;
    int t107;
    int t109;
    int t111;
    int t81;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0670)));
    motionSetCurrent((a4 + 0x4));
    motionRootBone(0x0, 0x2, 0x0, 0x0, *(int *)((int)stk + 8));
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBone(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBone(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBone(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBone(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBone(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287C60) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x5E4 + a4)) = *(struct mv3 *)(((0x5E4 + a4) + 0xC)); }
    }
    motionBone(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    if ((*(int *)0x8C287C60) == 0) {
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x5F0 + a4));
    }
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5BC))), (0x5CC + a4), (*(int *)((a4 + 0x5C8))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t61 = 0x0;
    for (;;) {
        nlLoadMatrix(((((t61 << 2) << 2) << 2) + (0x1E4 + a4)));
        *(unsigned int *)(((int)stk + 8)) = (t61 << 2);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((t61 << 2) + (*(int *)(((int)stk + 12)))))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D03F0))) + (*(int *)(((int)stk + 8)))))));
        }
        if ((t61 == 3) && (t81 = *(int *)0x8C1891E8, t81 == 2)) {
            if ((*(int *)0x8C38B768) != 0) {
                nlScale(1.0f, 1.09809995f, 1.12950003f);
            }
            nlRotateAY(0x4000);
            if ((*(int *)0x8C38B768) != 0) {
                nlLineSetDiv(1.12950003f);
            }
            t98 = 0xC880320;
            if ((*(int *)((a4 + 0x0))) == 0) {
                t98 = 0xC880000;
            }
            nlObjPut(t98);
        }
        t61 = (t61 + 0x1);
        if ((int)t61 >= (int)0xF) {
            break;
        }
    }
    t105 = *(int *)0x8C38B768;
    t112 = (nlPopMatrix(0x1));
    if (t105 != 0) {
        t106 = *(int *)(((int)stk + 12));
        t107 = t106;
        for (;;) {
            nlPushMatrix(0x0);
            t109 = *(int *)((t107 + 0x0));
            t107 = (t107 + 0x4);
            sklDrawNodeOne(t109);
            t111 = nlPopMatrix(0x1);
            if ((unsigned int)t107 >= (unsigned int)(t106 + 0x3C)) {
                break;
            }
        }
        t112 = t111;
    }
    return t112;
}

int primFrameCorners(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t14;
    int stk[47];

    stk[35] = a8;
    stk[36] = a9;
    stk[37] = a10;
    stk[38] = a11;
    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 36)) = (((int)stk + 20) + 0x14);
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x14);
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 20) + 0x14) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x10);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 20) + 0x14) + 0x20);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x20);
    t14 = *(int *)(((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x78) + 0x4))) + (float)t14), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x14) + 0x30);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x30);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x84 + ((int)stk + 20)) + 0x4))) + (float)t14), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x90 + ((int)stk + 20)) + 0x4))) - (float)t14), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) - (float)t14), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x78) + 0x0))) - (float)t14), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x90 + ((int)stk + 20)) + 0x0))) - (float)t14), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x84 + ((int)stk + 20)) + 0x0))) + (float)t14), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t14), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14)));
}


