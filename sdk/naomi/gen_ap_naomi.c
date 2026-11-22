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


float nlUnitVector(int vectorAddress)
{
    float x;
    float y;
    float z;
    float lengthSquared;
    float inverseLength;
    float dotLeft[4];
    float dotRight[4];

    x = *(float *)((vectorAddress + 0x0));
    y = *(float *)(((vectorAddress + 0x4) + 0x0));
    z = *(float *)((((vectorAddress + 0x4) + 0x4) + 0x0));
    dotLeft[0] = x;
    dotLeft[1] = y;
    dotLeft[2] = z;
    dotLeft[3] = 0.0f;
    dotRight[0] = x;
    dotRight[1] = y;
    dotRight[2] = z;
    dotRight[3] = 0.0f;
    lengthSquared = _builtin_fipr(dotLeft, dotRight);
    inverseLength = iaFsrra(lengthSquared);
    *(float *)((((vectorAddress + 0xC) - 0x4) + 0x0)) = (z * inverseLength);
    *(float *)(((((vectorAddress + 0xC) - 0x4) - 0x4) + 0x0)) = (y * inverseLength);
    *(float *)((((((vectorAddress + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (x * inverseLength);
    return _builtin_sqrtf(lengthSquared);
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

int nlSpriteF2C(float f4)
{
    float u0;
    int t1;

    u0 = (f4 * 255.0f);
    if (u0 > 2147483648.0f) {
        u0 = (u0 + -4294967296.0f);
    }
    t1 = (int)u0;
    if ((unsigned int)t1 > (unsigned int)0xFF) {
        t1 = 0xFF;
    }
    return t1;
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


int nlSetFatalErrorMode(int a4)
{
    int t0;

    t0 = 0x8C0EC070;
    if (a4 == 0) {
        t0 = 0x8C0EBFB0;
    }
    return kmSetFatalErrorCallback(t0);
}

