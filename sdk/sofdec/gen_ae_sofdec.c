/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXF_GetStat(int);
int ADXRNA_SetPlaySw(int, int);
int ADXT_GetStat(int);
int collectTextureGarbage(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int emotKeyCopy(int, int, int);
int fadeDraw(void);
int fadeTexInit(void);
int fileLoadClose(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bwrite_ns(int);
int msgWinStep(void);
int mwRnaAdjustBuf(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwlRnaIsCopyEnd(int, int, int, int);
int nlArcSin(float);
int nlCreateTextureParamA(int);
int nlFree(int);
int nlFree2(int);
int nlFreeTextureAll(void);
int nlIntrDefaultFunction(void);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutLoadTextureOnce_Sub(int, int, int, int, int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPushMatrix(int);
int nlPuts(int);
int nlRenderTextureSet_Stride(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce_Sub(int, int, int, int);
int nlSpriteSetGarbagedTextureOnce_Sub(int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndBlockMove(int, int, int);
int nlsndCheckPackFreeError(int);
int nlsndCheckPackIndex(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitBlockMove(void);
int nlsnd_PL_WaitRequest(void);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int rankNameCopy(int, int);
int rankNameMatch(int, int, int, int);
int sprStartLoad(void);
int sprWtcLoad(void);
int stageFreeAll(void);
int stageMinigameTexLoad(void);
int stageTexSetGarbagedAll(void);
int stageWtcMainTexLoad(void);
int titleSprTexLoad(void);
int vsprintf(int, int, int);
int ADXT_Pause(int a4, int a5);
int rankNameFilter(int a4, int a5, int a6, int a7);
int nlsndPackLoad(int a4, int a5);
int mwRnaSetPlaySw(int a4, int a5);
int objListPut(int a4, int a5, int a6);
int nlsndG2DmaRequest(int a4, int a5, int a6, int a7);
int nlsndPackFreeInit(int a4, int a5, int a6);
int nlInitEvent(void);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int nlsndPackLoadBG(int a4, int a5, int a6);
int fileLoadPoll(void);
int nlsndPackFree(int a4);
int commonEtcTexLoad(void);
int stageLoadWtcMain(void);
int nlsndGetPackInfo(int a4, int a5);
int selCellSetChosen(int a4, int a5, int a6, int a7);
void emotKeyDel(int a4, int a5);
int stageLoadEndingModels(void);
int nlSetIntrFunction(int a4, int a5);
int stageLoadMinigameModels(void);
int stageLoadWtcSprites(void);
int nlFreeCommonTextureAll(void);
int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7);
int nlSpriteSetGarbagedTextureGI(int a4);
int nlSpriteFreeTextureGI(int a4, int a5);
int titleStartSprLoad(void);
int titleSprLoad(void);
int nlSpriteFreeTexture(int a4, int a5);
int nlArcCos(float f4);
int nlSpriteSetGarbagedTexture(int a4);
int circuitTaskRun(void);
int nlCommonTextureGarbageCollection(void);
int nlPrintf(Stk4 s);
int nlObjPutLoadTexture(int a4, int a5);
int memcmp(int a4, int a5, int a6);
int _umemcmp(int a4, int a5, int a6);
int nlExecuteEvent2(void);
void syChainMasterHandlerPVR_H(void);
int cacheOcbiRange(int a4, int a5);

int ADXT_Pause(int a4, int a5)
{
    int t0;
    int t3;

    t0 = ADXT_GetStat(a4);
    *(unsigned char *)((a4 + 0x72)) = a5;
    if ((t0 != 3) && (t0 != 4)) {
        return t0;
    }
    if (a5 == 1) {
        ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
        t3 = 0x7A120;
        for (;;) {
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        return mwRnaAdjustBuf((*(int *)((a4 + 0xC))));
    }
    return ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x1);
}


int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t9;
    int t0;
    int t1;

    *(unsigned int *)0x8C20C8B8 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0xC8) {
            break;
        }
        t2 = a4;
        t0 = (mwlRnaIsCopyEnd(t2, a5, a6, a7));
        if (t0 != 1) {
            t2 = 0x1388;
            for (;;) {
                t2 = (t2 - 0x1);
                if (t2 == 0) {
                    break;
                }
            }
            t1 = (*(int *)0x8C20C8B8);
            t3 = (t3 + 0x1);
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C20C8B8 = t1;
            continue;
        }
        break;
    }
    t9 = t0;
    if (t3 == 0xC8) {
        t9 = (mwRnaErrCallFunc(0x8C20AC7C));
    }
    return t9;
}


