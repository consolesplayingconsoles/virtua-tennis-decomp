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
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
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


int rankNameFilter(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    { struct mvb30 { char b[30]; }; *(struct mvb30 *)((((int)stk + 4) + 0x4)) = *(struct mvb30 *)(0x8C126E64); }
    t0 = 0x6;
    for (;;) {
        t0 = (t0 - 1);
        if ((int)t0 < 0) {
            return 0x0;
        }
        t1 = rankNameMatch(a4, (((t0 << 2) + t0) + (((int)stk + 4) + 0x4)), a6, a7);
        if (t1 != 0) {
            break;
        }
    }
    rankNameCopy(a4, (*(int *)(((int)stk + 4))));
    return 0x1;
}


int objListPut(int a4, int a5, int a6)
{
    int t3;
    int t4;

    t3 = ((*(int *)((((((int)((int)a6 % (int)(*(int *)((a4 + 0x0))))) << 2) + a4) + 0x4))) + a4);
    for (;;) {
        t4 = *(short *)((t3 + 0x0));
        if (t4 == -1) {
            break;
        }
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((t3 + 0x8))), (*(float *)((t3 + 0xC))), (-(*(float *)((t3 + 0x10)))));
        nlRotateAZ((-(*(short *)((t3 + 0x6)))));
        nlRotateAY((*(short *)((t3 + 0x4))));
        nlRotateAX((*(short *)((t3 + 0x2))));
        nlObjPut((*(int *)((((*(short *)((t3 + 0x0))) << 2) + a5))));
        nlPopMatrix(0x1);
        t3 = (t3 + 0x14);
    }
    return t4;
}


int nlInitEvent(void)
{
    int t3;
    int t5;
    int t13;
    int t14;
    int t15;
    int t17;
    int t1;
    int t2;

    t3 = (*(int *)0x8C22D1AC);
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t5 = (*(int *)((t3 + 0x0)));
        for (;;) {
            if (t5 == 0) {
                break;
            }
            t2 = (*(int *)((t5 + 0x0)));
            t1 = (nlFree(t5));
            t5 = t2;
        }
        t2 = (*(int *)((t3 + 0x8)));
        t1 = (nlFree(t3));
        t3 = t2;
    }
    *(unsigned int *)0x8C22D1B8 = 0x0;
    *(unsigned int *)0x8C22D1B4 = 0x0;
    *(unsigned int *)0x8C22D1B0 = 0x0;
    *(unsigned int *)0x8C22D1AC = 0x0;
    *(unsigned int *)0x8C23D1EC = 0x0;
    *(unsigned int *)0x8C23D1E8 = 0x0;
    t13 = t1;
    t14 = t2;
    t15 = (*(int *)0x8C23D1CC);
    for (;;) {
        if (t15 == 0) {
            break;
        }
        t17 = (*(int *)((t15 + 0x0)));
        for (;;) {
            if (t17 == 0) {
                break;
            }
            t14 = (*(int *)((t17 + 0x0)));
            t13 = (nlFree2(t17));
            t17 = t14;
        }
        t14 = (*(int *)((t15 + 0x8)));
        t13 = (nlFree2(t15));
        t15 = t14;
    }
    *(unsigned int *)0x8C23D1D8 = 0x0;
    *(unsigned int *)0x8C23D1D4 = 0x0;
    *(unsigned int *)0x8C23D1D0 = 0x0;
    *(unsigned int *)0x8C23D1CC = 0x0;
    *(unsigned int *)0x8C23D1F4 = 0x0;
    *(unsigned int *)0x8C23D1F0 = 0x0;
    return t13;
}


int fileLoadPoll(void)
{
    int t11;
    int t4;

    t11 = 0x3;
    if ((*(int *)0x8C34A1F8) != 0) {
        nlPrintColor(0xFFFF0000);
        nlLocate(0x14, 0x18);
        t4 = ADXF_GetStat((*(int *)0x8C34A1F8));
        if ((t4 == -3) || (t4 == 3)) {
            fileLoadClose();
        }
        nlPrintColor(0xFFFFFFFF);
        *(unsigned int *)0x8C34A1F4 = ((*(int *)0x8C34A1F4) + 0x1);
        *(unsigned int *)0x8C34B140 = (*(int *)0x8C34A1F0);
        t11 = (*(int *)0x8C34A1F0);
    }
    return t11;
}


int commonEtcTexLoad(void)
{
    int t3;
    int t4;
    int t5;

    nlSetCommonTextureOffset(0x320);
    nlRenderTextureSet_Stride(0x0, 0x85, 0x280, 0x1E0);
    *(float *)0x8C287C3C = 0.0f;
    *(float *)0x8C287C40 = 0.0399999991f;
    *(float *)0x8C287C44 = 0.5f;
    *(float *)0x8C287C48 = 1.0f;
    nlSetCommonTextureOffset(0x320);
    t3 = 0x0;
    t4 = 0x8C13574C;
    for (;;) {
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        nlObjPutLoadTexture(t5, 0x8C12CBEC);
        t3 = (t3 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x280) {
            break;
        }
    }
    *(unsigned int *)0x8C287D74 = 0x8C101824;
    *(unsigned int *)0x8C287D78 = 0x8C1021E4;
    *(unsigned int *)0x8C287B38 = 0x1;
    return fadeTexInit();
}

int stageLoadWtcMain(void)
{
    fileLoadStart(0x8C9B0000, 0x8C111208, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        msgWinStep();
        fadeDraw();
        nlWaitVSync();
    }
    fileLoadStart(0x8CA80000, 0x8C111220, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        msgWinStep();
        fadeDraw();
        nlWaitVSync();
    }
    return stageWtcMainTexLoad();
}


int selCellSetChosen(int a4, int a5, int a6, int a7)
{
    int t10;
    int t11;
    int t4;
    int t5;
    int t0;
    int t13;

    if ((int)a4 >= 0) {
        t10 = 0x0;
        t11 = 0x8;
        if (a4 == 16) {
        } else {
            t4 = 0x1;
            t5 = 0x8;
            if (a4 == 17) {
            } else {
                t0 = (int)((int)a4 / (int)0x8);
                t4 = t0;
                t5 = (a4 - ((t0 << 2) << 1));
            }
            t10 = t4;
            t11 = t5;
        }
        *(unsigned int *)((((t11 << 2) + (0x8C1853C0 + ((((t10 << 2) << 1) + t10) << 2))) + 0x0)) = 0x3;
        t13 = ((((t10 << 2) << 1) + t10) << 2);
    }
    return t13;
}

void emotKeyDel(int a4, int a5)
{
    int t2;
    int t1;
    int t3;

    if (a5 != 0) {
        if (a5 != 119) {
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)(*(int *)((a4 + 0x264)))) {
                    break;
                }
                t1 = t2;
                t1 = (*(int *)((((((t2 << 1) + t1) << 2) + (a4)) + 0x0)));
                if (t1 == a5) {
                    t1 = (*(int *)((a4 + 0x264)));
                    t1 = (t1 - 1);
                    *(unsigned int *)((a4 + 0x264)) = t1;
                    t3 = t2;
                    for (;;) {
                        if ((int)t3 >= (int)(*(int *)((a4 + 0x264)))) {
                            break;
                        }
                        emotKeyCopy(a4, (t3 + 0x1), t3);
                        t3 = (t3 + 0x1);
                    }
                }
                t2 = (t2 + 0x1);
            }
            *(unsigned int *)((a4 + 0x268)) = ((*(int *)((a4 + 0x268))) - 1);
        }
    }
}

int stageLoadEndingModels(void)
{
    fileLoadStart(0x8CB40000, 0x8C111188, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    fileLoadStart(0x8CA80000, 0x8C1111A0, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    return (*(int *)0x8C343FE8);
}


int stageLoadMinigameModels(void)
{
    fileLoadStart(0x8CB40000, 0x8C11124C, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    fileLoadStart(0x8CA80000, 0x8C111268, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    return stageMinigameTexLoad();
}

int stageLoadWtcSprites(void)
{
    fileLoadStart(0x8CA80000, 0x8C111238, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        msgWinStep();
        fadeDraw();
        nlWaitVSync();
    }
    return sprWtcLoad();
}


int titleStartSprLoad(void)
{
    *(unsigned int *)0x8C34A1EC = 0x0;
    fileLoadStart(0x8CA80000, 0x8C12740C, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        msgWinStep();
        fadeDraw();
        nlWaitVSync();
    }
    return sprStartLoad();
}

int titleSprLoad(void)
{
    fileLoadStart(0x8CA80000, 0x8C126EE8, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        msgWinStep();
        nlWaitVSync();
    }
    stageFreeAll();
    stageTexSetGarbagedAll();
    return titleSprTexLoad();
}


int circuitTaskRun(void)
{
    int t1;
    int t0;

    *(unsigned int *)0x8C2FBE10 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((*(int *)0x8C2FBE0C) + 0x1)) {
            break;
        }
        t0 = (((int (*)(int))((*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0x8C2FBD1C) + 0x0)))))(t1));
        t1 = (t1 + 0x1);
    }
    return t0;
}


int nlExecuteEvent2(void)
{
    int t2;
    int t1;

    *(unsigned int *)0x8C23D1D8 = (*(int *)0x8C23D1CC);
    for (;;) {
        t2 = *(int *)0x8C23D1D8;
        if (t2 == 0) {
            break;
        }
        *(unsigned int *)0x8C23D1D8 = (*(int *)((t2 + 0x8)));
        t1 = (((int (*)(int))((*(int *)((t2 + 0xC)))))(t2));
    }
    return t1;
}


int cacheOcbiRange(int a4, int a5)
{
    int t0;
    int t1;

    t0 = (a4 & 0xFFFFFFE0);
    t1 = (((unsigned int)((unsigned int)((unsigned int)a5 >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbi((void *)t0);
        t0 = (t0 + 0x20);
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t0;
}
