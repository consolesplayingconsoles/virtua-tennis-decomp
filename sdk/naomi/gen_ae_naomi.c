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


int nlsndG2DmaRequest(int a4, int a5, int a6, int a7)
{
    int t5;

    if ((*(int *)((a4 + 0x0))) != 1) {
        return 0xFFFFFFFF;
    }
    if ((a5 & 0x1F) != 0) {
        return 0xFFFFFFFE;
    }
    if ((a6 & 0x1F) != 0) {
        return 0xFFFFFFFD;
    }
    if ((0x1F & a7) != 0) {
        return 0xFFFFFFFC;
    }
    t5 = *(int *)0x8C454CEC;
    if (t5 == 0) {
        nlsndG2WriteN(a5, a6, ((unsigned int)a7 >> 2));
        return 0x0;
    }
    if (t5 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}

int nlsndPackFreeInit(int packIndex, int releasedBytes, int movedBytesAddress)
{
    int movedBytes;
    int firstMovedAddress;
    int accumulatedBytes;
    int t3;
    int t4;
    int packCursor;
    int packAddressCursor;
    int firstAddressCursor;
    int firstAddress;

    *(unsigned int *)0x8C454CBC = ((*(int *)0x8C454CBC) - releasedBytes);
    *(unsigned int *)(((((packIndex << 1) + packIndex) << 2) + 0x8C454DD4)) = 0xFFFFFFFF;
    nlsndG2Write(0xFFFFFFFF, ((packIndex << 2) + 0xA0800060));
    movedBytes = 0x0;
    firstMovedAddress = 0x0;
    if ((unsigned int)(((((packIndex + 0x1) << 1) + (packIndex + 0x1)) << 2) + 0x8C454DD4) < (unsigned int)0x8C454E34) {
        accumulatedBytes = 0x0;
        t3 = 0x8C454DD4;
        t4 = (packIndex + 0x1);
        packCursor = (((((packIndex + 0x1) << 1) + (packIndex + 0x1)) << 2) + 0x8C454DD4);
        packAddressCursor = (((((packIndex + 0x1) << 1) + (packIndex + 0x1)) << 2) + 0x8C454DD4);
        firstAddressCursor = (((((packIndex + 0x1) << 1) + (packIndex + 0x1)) << 2) + 0x8C454DD4);
        firstAddress = 0x0;
        for (;;) {
            if ((*(int *)((packCursor + 0x0))) != -1) {
                t3 = (*(int *)((packAddressCursor + 0x8)));
                if (firstAddress == 0) {
                    firstAddress = (*(int *)((firstAddressCursor + 0x4)));
                }
                t4 = (*(int *)((packAddressCursor + 0x4)));
                accumulatedBytes = (accumulatedBytes + t3);
                t4 = (t4 - releasedBytes);
                *(unsigned int *)((packAddressCursor + 0x4)) = t4;
            }
            packCursor = (packCursor + 0xC);
            packAddressCursor = (packAddressCursor + 0xC);
            firstAddressCursor = (firstAddressCursor + 0xC);
            if ((unsigned int)packCursor >= (unsigned int)0x8C454E34) {
                break;
            }
        }
        movedBytes = accumulatedBytes;
        firstMovedAddress = firstAddress;
    }
    *(unsigned int *)((movedBytesAddress + 0x0)) = movedBytes;
    return firstMovedAddress;
}


int nlsndPackLoadBG(int a4, int a5, int a6)
{
    int t1;
    int t14;
    int t2;
    int t11;
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = nlsndCheckPackIndex(a4, (*(int *)(((int)stk + 8))), 0x0);
    t14 = t1;
    if (t1 != 0) {
    } else {
        t2 = *(int *)((a4 + 0x8));
        *(unsigned int *)((((*(int *)0x8C454CE8) + 0x18) + 0x0)) = (nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x4))), t2, ((int)stk + 4)));
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x14)) = a4;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x1;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x4)) = (*(int *)(((int)stk + 12)));
        t11 = *(int *)0x8C454CE8;
        *(unsigned int *)((t11 + 0xC)) = t2;
        *(unsigned int *)((t11 + 0x8)) = t2;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x10)) = (*(int *)(((int)stk + 4)));
        t14 = 0x0;
    }
    return t14;
}


int nlsndPackFree(int a4)
{
    int t0;
    int t29;
    int t1;
    int t2;
    int t3;
    int t26;
    int t4;
    int t23;
    int t6;
    int t14;
    int t7;
    int t11;
    int t8;
    int t9;
    int t17;
    int t18;
    int t20;
    int stk[5];

    t0 = nlsndCheckPackFreeError(a4);
    t29 = t0;
    if (t0 == 0) {
        t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0x8C454DDC));
        t2 = nlsndPackFreeInit(a4, t1, ((int)stk + 4));
        t3 = nlsnd_PL_WaitRequest();
        t26 = t3;
        if (t3 == 0) {
            t4 = nlsnd_PL_WaitAica1();
            t23 = t4;
            if (t4 == 0) {
                if (t2 != 0) {
                    t6 = nlsndBlockMove(t2, (t2 - t1), (*(int *)(((int)stk + 4))));
                    t14 = t6;
                    if (t6 == 0) {
                        t7 = nlsnd_PL_WaitBlockMove();
                        t11 = t7;
                        if (t7 == 0) {
                            t8 = nlsnd_PL_WaitAica2andGo();
                            t9 = 0x0;
                            if (t8 != 0) {
                                t9 = t8;
                            }
                            t11 = t9;
                        }
                        t14 = t11;
                    }
                    t20 = t14;
                } else {
                    t17 = nlsnd_PL_WaitAica2andGo();
                    t18 = 0x0;
                    if (t17 != 0) {
                        t18 = t17;
                    }
                    t20 = t18;
                }
                t23 = t20;
            }
            t26 = t23;
        }
        t29 = t26;
    }
    return t29;
}


int nlsndGetPackInfo(int a4, int a5)
{
    int t1;
    int t2;
    int t3;

    if ((unsigned int)a4 < (unsigned int)0x8) {
        t1 = nlsndG2Read((*(int *)0x8C454CAC));
        if (a5 != 0x4A0) {
            if (a5 != 0x10A0) {
                return 0xFFFFFF80;
            }
            t2 = nlsndG2Read(((0xA0800000 + t1) + ((((a4 << 2) << 1) + 0x5) << 2)));
            return ((int)(t2 & 0x7F00) >> 8);
        }
        t3 = nlsndG2Read(((0xA0800000 + t1) + ((((a4 << 2) << 1) + 0x5) << 2)));
        return (t3 & 0x7F);
    }
    return 0xFFFFFF80;
}


int nlSetIntrFunction(int a4, int a5)
{
    int t0;
    int t4;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xD) {
        /* the setter takes the function in r5, which the original leaves as the caller passed it */
        t4 = (((int (*)(int, int))((*(int *)(((a4 << 2) + 0x8C1DCB98)))))(a4, a5));
    } else {
        t4 = (nlIntrDefaultFunction());
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t4;
}


int nlFreeCommonTextureAll(void)
{
    int t14;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    int t2;

    nlFreeTextureAll();
    t14 = 0x8C1DC87C;
    if ((*(int *)0x8C1DC87C) != 0) {
        t3 = 0xFFFFFFF8;
        t4 = 0xFFFFFFFF;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)0x8C1DC87C)) {
                break;
            }
            t4 = (t4 + 0x1);
            *(unsigned int *)((((*(int *)0x8C4241C0) + t3) + 0x0)) = 0x0;
            t2 = (*(int *)0x8C4241C0);
            t2 = (t2 + t3);
            t3 = (t3 + 0x8);
            *(unsigned int *)((t2 + 0x4)) = 0xFFFFFFFF;
        }
        t9 = 0x8C1DC87C;
        t10 = 0x0;
        t11 = 0x0;
        for (;;) {
            if ((int)t11 >= (int)(*(int *)0x8C1DC880)) {
                break;
            }
            t9 = (*(int *)0x8C4241C4);
            t11 = (t11 + 0x1);
            *(unsigned int *)((t10 + t9)) = 0x0;
            t10 = (t10 + 0x4);
        }
        t14 = t9;
    }
    return t14;
}


int nlSpriteSetGarbagedTextureGI(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = nlSpriteSetGarbagedTextureOnce_Sub(a4, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int nlSpriteFreeTextureGI(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = nlSpriteFreeTextureOnce_Sub(a4, a5, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}


int nlSpriteFreeTexture(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = nlSpriteFreeTextureOnce_Sub(a4, a5, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int nlArcCos(float f4)
{
    int t0;

    if (_builtin_fabsf(f4) > 1.0f) {
        if (f4 > 0.0f) {
            return 0x0;
        }
        return 0x8000;
    }
    t0 = nlArcSin(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int nlSpriteSetGarbagedTexture(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x4))) == -1) {
            break;
        }
        t4 = nlSpriteSetGarbagedTextureOnce_Sub(a4, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}


int nlCommonTextureGarbageCollection(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    t1 = *(int *)0x8C458608;
    t2 = (collectTextureGarbage());
    t3 = 0x0;
    t4 = t1;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)0x8C45860C)) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (nlCreateTextureParamA(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

int nlPrintf(Stk4 s)
{
    int t0;
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    vsprintf(0x8C44F750, s.w[0], t0);
    nlPuts(0x8C44F750);
    return 0x0;
}

int nlObjPutLoadTexture(int a4, int a5)
{
    int t0;
    int t5;
    int stk[8];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t0 = (t0 | (nlObjPutLoadTextureOnce_Sub((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x4), 0x0)));
        t5 = *(int *)(((int)stk + 8));     /* the cursor the call advanced: the original tests it after the call (8C0F1EB2) */
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}


