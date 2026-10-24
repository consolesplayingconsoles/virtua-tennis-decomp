/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXPD_EntrySte(int, int, int, int, int);
int ADXPD_Start(int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
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
float FUN_8c0f0860(int a4);
int kmSetCheapShadowMode(int a4);
int endingTexFree(void);
int stageWtcMainTexFree(void);
int stageExtraTexFree(void);
int stageMinigameTexFree(void);
int netJudgeStart(void);
int titleSprTexGarbage(void);
int resEndObjTexFree(void);
int resWtcShopObjTexFree(void);
void camGetPos(Stk4 s);
int sprPutAtAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int resGetTexLoad(int a4);
int FUN_8c1e6420(float f4);
int nlChgObjectPolyAttrOff(int a4);
int kmSetStrideWidth(int a4);
int ADXB_EvokeExpandSte(int a4, int a5);
int endingCharaTexLoad(int a4);
int endingCharaTexFree(int a4);
int endSprCharaTexFree(int a4);
int endSprCharaTexLoad(int a4);
int nlSysUseLatency2V(void);
int nlsndStreamGetBufInfo(int a4, int a5, int a6);
void nlSpriteF2C(float f4);
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

int nlsndStreamSetHdBitSize(int a4, int a5)
{
    if ((short)a5 != 4) {
        if ((short)a5 != 8) {
            if ((short)a5 != 16) {
                return (short)a5;
            }
            *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x0;
            return (short)a5;
        }
        *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x1;
        return (short)a5;
    }
    *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x3;
    return (short)a5;
}

int get_data(int a4)
{
    int t5;

    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        if ((unsigned char)(*(signed char *)((a4 + 0x8))) == 5) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    } else {
        t5 = *(signed char *)((a4 + 0x8));
        if (((unsigned char)t5 != 0xFF) && ((unsigned char)t5 != 0)) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((a4 + 0x0)) = 0x0;
        }
    }
    return 0x0;
}

int nlsndG2DmaGetHandleStatus(int a4)
{
    int t2;

    if ((*(int *)((a4 + 0x0))) != 1) {
        return 0xFFFFFFFF;
    }
    t2 = *(int *)0x8C454CEC;
    if (t2 == 0) {
        return 0x100;
    }
    if (t2 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}

int nlChgObjectPolyAttrOn(int a4)
{
    int t2;
    int t3;
    int t0;
    int t1;
    int t7;
    int t9;
    int t15;

    t2 = a4;
    t3 = a4;
    for (;;) {
        if ((*(int *)((t3 + 0x4))) != 0) {
            t2 = (*(int *)((t3 + 0x4)));
            t0 = (nlChgObjectPolyAttrSub(t2, 0xC0, 0x80));
            if (t0 != 0) {
                break;
            }
        } else {
            t7 = t1;
            t9 = t2;
        }
        t1 = t7;
        t2 = t9;
        if ((*(int *)((t3 + 0x2C))) != 0) {
            t2 = (*(int *)((t3 + 0x2C)));
            t0 = (nlChgObjectPolyAttrOn(t2));
        } else {
            t15 = t2;
        }
        t1 = (*(int *)((t3 + 0x30)));
        t2 = t15;
        if (t1 != 0) {
            t3 = (*(int *)((t3 + 0x30)));
            continue;
        }
        return t0;
    }
    for (;;) {
    }
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

float FUN_8c0f0860(int a4)
{
    float u0;
    float u1;
    float u2;
    float u5;
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
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

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

void camGetPos(Stk4 s)
{
    int stk[6];

    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    mtxGetPos(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}

int sprPutAtAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[16];

    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    *(float *)(((int)stk + 4)) = f4;
    nlSetCommonTextureOffset((*(int *)((a4 + 0x0))));
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x8)));
    *(float *)((a4 + 0x2C)) = (*(float *)(((int)stk + 4)));
    return (nlSprPut(a4));
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

int FUN_8c1e6420(float f4)
{
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x2);
    *(float *)0x8C471E38 = f4;
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x2);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFFD);
    return 0x78;
}

int nlChgObjectPolyAttrOff(int a4)
{
    int t2;
    int t3;
    int t0;
    int t1;
    int t9;
    int t16;

    t2 = a4;
    t3 = a4;
    for (;;) {
        if ((*(int *)((t3 + 0x4))) != 0) {
            t2 = (*(int *)((t3 + 0x4)));
            t0 = (nlChgObjectPolyAttrSub(t2, 0xC0, 0x0));
        } else {
            t9 = t2;
        }
        t1 = (*(int *)((t3 + 0x2C)));
        t2 = t9;
        if (t1 != 0) {
            t2 = (*(int *)((t3 + 0x2C)));
            t0 = (nlChgObjectPolyAttrOff(t2));
        } else {
            t16 = t2;
        }
        t1 = (*(int *)((t3 + 0x30)));
        t2 = t16;
        if (t1 != 0) {
            t3 = (*(int *)((t3 + 0x30)));
            continue;
        }
        break;
    }
    return t0;
}

int kmSetStrideWidth(int a4)
{
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x8);
    *(unsigned int *)0x8C471E2C = a4;
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x8);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFF7);
    return 0x0;
}

int ADXB_EvokeExpandSte(int a4, int a5)
{
    int t0;
    int t2;
    int t4;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t2 = *(int *)((a4 + 0x8));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    ADXPD_EntrySte(t2, (*(int *)((a4 + 0x50))), (a5 << 1), (t4 + (t0 << 1)), (((*(int *)(((a4 + 0x50) + 0x1C))) << 1) + (t4 + (t0 << 1))));
    return ADXPD_Start(t2);
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

int nlSysUseLatency2V(void)
{
    int t1;

    if ((*(int *)0x8C424414) == 1) {
        *(unsigned int *)0x8C424250 = 0x0;
        t1 = *(int *)0x8C424210;
        *(unsigned int *)0x8C424210 = (t1 | 0x10);
        *(unsigned int *)0x8C42440C = 0x2;
        return (t1 | 0x10);
    }
    return ((int (*)(int, int))(0x8C1E2F68))(0x1, 0x0);
}

int nlsndStreamGetBufInfo(int a4, int a5, int a6)
{
    if ((*(signed char *)((((short)a4 * (short)0x1C) + 0x8C454CF4))) != 1) {
        return 0x0;
    }
    *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C454CC0);
    return (*(int *)(((0x8C454CF8 + ((short)a4 * (short)0x1C)) + ((short)a5 << 2))));
}

void nlSpriteF2C(float f4)
{
    
}

int nlsnd_PL_WaitRequest(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = nlsndSeqRequest(0x18A0);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
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

void nlCreateTextureParam(int a4)
{
    int t0;

    t0 = *(int *)0x8C458608;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        nlCreateTextureParamA(((a4 * 0x3C) + t0));
    return;
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = (*(int *)0x8C4241F8);
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x34)) = (*(int *)0x8C4241FC);
}

int nlGetMatrix8(int a4)
{
    int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0x8C450864);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}

void nlObjPutSetVtxColorMode(int a4)
{
    if (a4 == 0) {
        *(unsigned int *)0x8C1DCA98 = 0x0;
    } else {
        if (a4 == 1) {
            *(unsigned int *)0x8C1DCA98 = 0x8C0FABAA;
        } else {
            if (a4 == 2) {
                *(unsigned int *)0x8C1DCA98 = 0x8C0FB74A;
            }
        }
    }
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

void nlLoadMatrix8(int a4)
{
    int t1;
    float u3;
    float u4;
    float u6;
    float u7;
    float u9;
    float u10;
    float u12;
    float u13;
    float u15;
    float u16;
    float u18;
    float u19;
    float u21;
    float u22;
    float u24;
    float u25;
    float u5[16];
    float u8[16];
    float u11[16];
    float u14[16];
    float u17[16];
    float u20[16];
    float u23[16];
    float u26[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0x8C450864);
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)(((t1 + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u5);
    u5[0] = u4;
    u5[1] = u3;
    _builtin_ld_ext((float (*)[4])u5);
    u6 = *(float *)(((t1 + 0x8) + 0x0));
    u7 = *(float *)((((t1 + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u8);
    u8[2] = u7;
    u8[3] = u6;
    _builtin_ld_ext((float (*)[4])u8);
    u9 = *(float *)((((t1 + 0x8) + 0x8) + 0x0));
    u10 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u11);
    u11[4] = u10;
    u11[5] = u9;
    _builtin_ld_ext((float (*)[4])u11);
    u12 = *(float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u14);
    u14[6] = u13;
    u14[7] = u12;
    _builtin_ld_ext((float (*)[4])u14);
    u15 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u17);
    u17[8] = u16;
    u17[9] = u15;
    _builtin_ld_ext((float (*)[4])u17);
    u18 = *(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u19 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u20);
    u20[10] = u19;
    u20[11] = u18;
    _builtin_ld_ext((float (*)[4])u20);
    u21 = *(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u22 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u23);
    u23[12] = u22;
    u23[13] = u21;
    _builtin_ld_ext((float (*)[4])u23);
    u24 = *(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u25 = *(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u26);
    u26[14] = u25;
    u26[15] = u24;
    _builtin_ld_ext((float (*)[4])u26);
}

int nlsndBlockMoveStatus(void)
{
    int t0;

    t0 = nlsndG2Read(0xA0800098);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int nlsndStreamGetFreq(int a4)
{
    if ((*(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x0))) != 1) {
        return 0x0;
    }
    return (*(int *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0xC)));
}

int nlsndStreamGetBitSize(int a4)
{
    if ((*(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x0))) != 1) {
        return 0x0;
    }
    return (*(short *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x2)));
}

void paletteUpload(void)
{
    if ((*(signed char *)0x8C458E20) != 0) {
        *(unsigned char *)0x8C458E20 = 0x0;
        kmSetPaletteData(0x8C458EA0);
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

int nlSetFatalErrorMode(int a4)
{
    int t0;

    t0 = 0x8C0EC070;
    if (a4 == 0) {
        t0 = 0x8C0EBFB0;
    }
    return kmSetFatalErrorCallback(t0);
}

void mwRnaSetupSnd(int a4, int a5)
{
    *(unsigned int *)0x8C20C8B0 = a4;
    *(unsigned int *)0x8C20C8B4 = a5;
}
