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

void vecFromYaw(int a4, int a5, int a6, int a7, int a8)
{
    int stk[8];

    *(unsigned short *)(((int)stk + 8)) = a4;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((int)stk + 8))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x4), 0.0f, 0.0f, 1.0f);
    nlCalcPoint((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
}


int rankSprTexLoad(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1D824C) == 0) {
        *(unsigned int *)0x8C1D824C = 0x1;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1D7900;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteLoadTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0xA) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int rankSprTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1D824C) != 0) {
        *(unsigned int *)0x8C1D824C = 0x0;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1D7900;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteFreeTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0xA) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int titleSprTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C422044) != 0) {
        *(unsigned int *)0x8C422044 = 0x0;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1D8250;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteFreeTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0xA) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resWtcShopSprTexLoad(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC530;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC530 = 0x1;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC51C;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteLoadTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x5) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resWtcShopSprTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1DC530) != 0) {
        *(unsigned int *)0x8C1DC530 = 0x0;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC51C;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteFreeTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x5) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resTitleSprTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1DC58C) != 0) {
        *(unsigned int *)0x8C1DC58C = 0x0;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC580;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteFreeTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x3) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resTitleSprTexLoad(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC58C;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC58C = 0x1;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC580;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteLoadTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x3) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}


int endingTexFree(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188E84;
    t6 = t0;
    if (t0 == 1) {
        nlSetCommonTextureOffset(0x1800);
        t2 = 0x0;
        t3 = 0x8C188C84;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x19) {
                break;
            }
        }
        *(unsigned int *)0x8C188E84 = 0x0;
        t6 = t5;
    }
    return t6;
}

int stageWtcMainTexFree(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188EB0;
    t6 = t0;
    if (t0 == 1) {
        nlSetCommonTextureOffset(0x1B00);
        t2 = 0x0;
        t3 = 0x8C188D14;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x1B) {
                break;
            }
        }
        *(unsigned int *)0x8C188EB0 = 0x0;
        t6 = t5;
    }
    return t6;
}

int stageExtraTexFree(void)
{
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t6 = 0x8C188EC0;
    if ((*(int *)0x8C188EC0) != 0) {
        nlSetCommonTextureOffset(0x1D00);
        t2 = 0x0;
        t3 = 0x8C188EB8;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x2) {
                break;
            }
        }
        *(unsigned int *)0x8C188EC0 = 0x0;
        t6 = t5;
    }
    return t6;
}

int stageMinigameTexFree(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188EB4;
    t6 = t0;
    if (t0 == 1) {
        nlSetCommonTextureOffset(0x1C00);
        t2 = 0x0;
        t3 = 0x8C188D80;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x40) {
                break;
            }
        }
        *(unsigned int *)0x8C188EB4 = 0x0;
        t6 = t5;
    }
    return t6;
}

int netJudgeStart(void)
{
    int t0;
    int t5;
    int t11;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t5 = 0x8C1D0DF0;
        if ((*(int *)(((t0 << 2) + 0x8C1D0DF0))) != 0) {
            motionBackup(0x8C38A25C);
            motionSetSpeed(0x8C38A25C, 1.0f);
            *(unsigned int *)0x8C38A814 = 0x2;
            *(unsigned int *)0x8C38A80C = 0x1;
            t5 = 0x5B4;
        }
        t11 = t5;
    }
    return t11;
}

int titleSprTexGarbage(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C422044) != 0) {
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1D8250;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlSpriteSetGarbagedTextureOnce(0x8C18281C, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0xA) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resEndObjTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1DC518) != 0) {
        *(unsigned int *)0x8C1DC518 = 0x0;
        nlSetCommonTextureOffset(0x3100);
        t2 = 0x0;
        t3 = 0x8C1DC50C;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x3) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int resWtcShopObjTexFree(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    if ((*(int *)0x8C1DC508) != 0) {
        *(unsigned int *)0x8C1DC508 = 0x0;
        nlSetCommonTextureOffset(0x3000);
        t2 = 0x0;
        t3 = 0x8C1DC4F8;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutFreeTextureOnce(t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x4) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

void camGetPos(Stk1 s)
{
    int stk[6];

    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    mtxGetPos(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}


int resGetTexLoad(int a4)
{
    int t0;
    int t9;

    t0 = resGetRead();
    t9 = t0;
    if (t0 == 1) {
        if ((*(int *)(((a4 << 2) + 0x8C1DC654))) == 0) {
            nlSetCommonTextureOffset(0x0);
            nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1DC68C))));
        }
        *(unsigned int *)(((a4 << 2) + 0x8C1DC654)) = 0x1;
        t9 = 0x8C1DC654;
    }
    return t9;
}


int endingCharaTexLoad(int a4)
{
    int t0;

    t0 = *(int *)((0x8C40C1E0 + (a4 << 2)));
    if (t0 != 1) {
        *(unsigned int *)((0x8C40C1E0 + (a4 << 2))) = 0x1;
        nlSetCommonTextureOffset(0x0);
        return nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1D36D8))));
    }
    return t0;
}

int endingCharaTexFree(int a4)
{
    if ((*(int *)((0x8C40C1E0 + (a4 << 2)))) != 0) {
        *(unsigned int *)((0x8C40C1E0 + (a4 << 2))) = 0x0;
        nlSetCommonTextureOffset(0x0);
        return nlSpriteFreeTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1D36D8))));
    }
    return (a4 << 2);
}

int endSprCharaTexFree(int a4)
{
    if ((*(int *)((0x8C40C200 + (a4 << 2)))) != 0) {
        *(unsigned int *)((0x8C40C200 + (a4 << 2))) = 0x0;
        nlSetCommonTextureOffset(0x0);
        return nlSpriteFreeTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1D36B8))));
    }
    return (a4 << 2);
}

int endSprCharaTexLoad(int a4)
{
    int t0;

    t0 = *(int *)((0x8C40C200 + (a4 << 2)));
    if (t0 != 1) {
        *(unsigned int *)((0x8C40C200 + (a4 << 2))) = 0x1;
        nlSetCommonTextureOffset(0x0);
        return nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1D36B8))));
    }
    return t0;
}


int commonEtcTexSetGarbaged(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    nlSetCommonTextureOffset(0x320);
    t1 = 0x0;
    t2 = 0x8C185648;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t4 = nlObjPutSetGarbagedTexture(t3);
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x280) {
            break;
        }
    }
    return t4;
}

int resCautionTexFree(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C1DC590))) != 0) {
        nlSetCommonTextureOffset(0x0);
        nlSpriteFreeTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1DC608))));
        *(unsigned int *)(((a4 << 2) + 0x8C1DC590)) = 0x0;
    }
    return 0x8C1DC590;
}


int endSprTexLoad(void)
{
    int t0;

    t0 = *(int *)0x8C1D3758;
    if (t0 != 1) {
        *(unsigned int *)0x8C1D3758 = 0x1;
        nlSetCommonTextureOffset(0x0);
        return nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)0x8C125E04));
    }
    return t0;
}

void endSprTexFree(void)
{
    if ((*(int *)0x8C1D3758) != 0) {
        *(unsigned int *)0x8C1D3758 = 0x0;
        nlSetCommonTextureOffset(0x0);
        nlSpriteFreeTextureOnce(0x8C18281C, 0x0, (*(int *)0x8C125E04));
    return;
    }
}


void miniBallCopySpawn(void)
{
    int t1;
    int t3;
    int t4;

    t1 = 0x8C291F24;
    t3 = ((set_event(0xA0, 0x8C03A068)) + 0x14);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0x8C291F24 + 140)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
}


