/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[4]; } Stk4;
int ADXPD_EntrySte(int, int, int, int, int);
int ADXPD_Start(int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int kmSetFatalErrorCallback(int);
int kmSetPaletteData(int);
int motionBackup(int);
int motionSetSpeed(int, float);
int mtxGetPos(int, int, int);
int nlCalcPoint(int, int);
int nlChgObjectPolyAttrSub(int, int, int);
int nlCreateTextureParamA(int);
int nlLoadMatrix(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutSetGarbagedTexture(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSpriteFreeTextureOnce(int, int, int);
int nlSpriteLoadTextureOnce(int, int, int);
int nlSpriteSetGarbagedTextureOnce(int, int);
int nlsndG2Read(int);
int nlsndSeqRequest(int);
int resGetRead(void);
int set_event(int, int);
int vecMake(int, int, int, int, int, float, float, float);
void vecFromYaw(int a4, int a5, int a6, int a7, int a8);
int nlsndStreamSetHdBitSize(int a4, int a5);
int get_data(int a4);
int nlsndG2DmaGetHandleStatus(int a4);
int nlChgObjectPolyAttrOn(int a4);
int rankSprTexLoad(void);
int rankSprTexFree(void);
int titleSprTexFree(void);
int resWtcShopSprTexLoad(void);
int resWtcShopSprTexFree(void);
int resTitleSprTexFree(void);
int resTitleSprTexLoad(void);
float nlUnitVector(int a4);
int kmSetCheapShadowMode(int a4);
int endingTexFree(void);
int stageWtcMainTexFree(void);
int stageExtraTexFree(void);
int stageMinigameTexFree(void);
int netJudgeStart(void);
int titleSprTexGarbage(void);
int resEndObjTexFree(void);
int resWtcShopObjTexFree(void);
void camGetPos(Stk1 s);
int sprPutAtAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int resGetTexLoad(int a4);
int setCullingThreshold(float f4);
int nlChgObjectPolyAttrOff(int a4);
int kmSetStrideWidth(int a4);
int ADXB_EvokeExpandSte(int a4, int a5);
int endingCharaTexLoad(int a4);
int endingCharaTexFree(int a4);
int endSprCharaTexFree(int a4);
int endSprCharaTexLoad(int a4);
int nlSysUseLatency2V(void);
int nlsndStreamGetBufInfo(int a4, int a5, int a6);
int nlSpriteF2C(float f4);
int nlsnd_PL_WaitRequest(void);
int commonEtcTexSetGarbaged(void);
int resCautionTexFree(int a4);
void nlCreateTextureParam(int a4);
int nlGetMatrix8(int a4);
void nlObjPutSetVtxColorMode(int a4);
int endSprTexLoad(void);
void endSprTexFree(void);
void nlLoadMatrix8(int a4);
int nlsndBlockMoveStatus(void);
int nlsndStreamGetFreq(int a4);
int nlsndStreamGetBitSize(int a4);
void paletteUpload(void);
void miniBallCopySpawn(void);
int nlSetFatalErrorMode(int a4);
void mwRnaSetupSnd(int a4, int a5);


int kmSetCheapShadowMode(int a4)
{
    int t0;

    t0 = 0xFF;
    if ((int)a4 <= (int)0xFF) {
        t0 = a4;
    }
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x4);
    *(unsigned int *)0x8C471E30 = ((((int)a4 >= 0)) ? 1 : 0);
    *(unsigned int *)0x8C471E34 = t0;
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x4);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFFB);
    return 0x0;
}


int setCullingThreshold(float threshold)
{
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x2);
    *(float *)0x8C471E38 = threshold;
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x2);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFFD);
    return 0x78;
}


int kmSetStrideWidth(int a4)
{
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x8);
    *(unsigned int *)0x8C471E2C = a4;
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x8);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFF7);
    return 0x0;
}


