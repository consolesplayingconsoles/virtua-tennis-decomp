typedef struct { int w[3]; } Stk3;
/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int copySmallVQToTextureRom(int, int, int, int);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int cacheOcbiRange(int, int);
int commonSprInitAll(void);
int fileLoadSync(int, int, int);
int kmFreeTexture(int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTextureRom(int, int, int, int);
int kmyReleaseRenderPacket(int);
int kmyiCheckNativeHandle(int);
int kmyiCheckTAHandle(int);
int logoSmallPut(int, int, int, int, int, int, int, int, int, int, int, int);
int modeMarkPut(int, int, int, int, int, int, int, int, float);
int motionBackup(int);
int motionSwitch(int, int, int, int, float);
int mwRnaErrCallFunc(int, ...);
int nlArcTan(float);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
float nlCos(int);
int nlDispStrip(int, int);
int nlDispStripTrnsl(int, int);
int nlLdexpf(int, float);
int nlLineClipPoint(int, int, int);
int nlLineSetDiv(float);
int nlRotateAX(int);
extern int nlRotateAY();
extern int nlRotateAZ();
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
float nlSinfReduce(int, float);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndPackFree(int);
int nlsndPackFreeInit(int, int, int);
int nlsndPackLoad(int, int);
int prefetch(int);
int resCautionRead(int);
int sndStopAll(void);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprListPut(int, int, int, float, float, float);
int strmControl(int, int);
extern int thunk_nlSprPut();
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_read_retry(int, int, int);
int winPartsPut(int, int, int, int, Stk3, int, float, float);
int vmsfs_read_disk_image(int a4, int a5);
int evFadeValueTask(int a4);
int kmLoadTextureRom(int a4, int a5);
int kmytex_FBAllocEntry(void);
int stripQuadDrawA(float f4, float f5, float f6, float f7);
int stripQuadDrawB(float f4, float f5, float f6, float f7);
void unlockApplyW1(void);
void nlChgModelPolyAttrOn(int a4);
void colliObjInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmtex_TextureSize_Twiddled(int a4);
int kmtex_ConfirmSmallVQ(int a4);
int kmtex_TextureSize_VQ(int a4);
int hudCallSprInit3(void);
int decoSprInit(void);
int nlCommonTextureGetNextTextureIndex(void);
int resCautionShow(int a4);
int nlsndStreamChgFx(int a4, int a5, int a6);
int motionRotateRaw(int a4, float f4, float f5);
int nlFreeTextureAll(void);
int nlsndCheckPackReloadError(int a4, int a5);
int nlLineSendVertex(int a4, int a5, int a6);
int bgScreenDraw(int, int, int, int);
int winDrawFilled(int a4, int a5, int a6, int a7, float f4, float f5);
int nlExp(float f4);
float shadowLightMatrixAng(int a4, int a5, float f4, float f5);
int btnGuideInitB(void);
void nlSetPaletteMap(int a4, int a5);
int nlsndSeqRequest(int a4);
int search_dir_by_startfat(int a4, int a5);
int menuIconInitA(void);
int menuIconInitB(void);
int hudCallSprInit(void);
int kmSetColorClampValue(Stk4 s);
int phraseWordsInitB(void);
int hudCallSprInit2(void);
int modeMarkSprInit(void);
int logoSmallInit(void);
int panelMenuSprInitC(void);
void nlLoadMatrix(int a4);
int nlsndCheckPackFreeError(int a4);
int logoWaveInit(void);
int nlSysSetDirectListTypeLatency2V(int a4);
int nlsndPackFreeBG(int a4);
int btnGuideInitA(void);
float nlSinf(float f4);
int mwRnaSetOutVol(int a4, int a5);
int kmyDeleteNativeBuffer(int a4, int a5);
int nlArcSin(float f4);
int VQDeQueueEntry(int a4, int a5);
int sndPack2LoadSync(void);
void titleSprTexLoad(void);
int screenQuadPut(int a4, float f4);
int nlsndStreamSetHdChs(int a4, int a5);
void perfMark(void);
int titleSprBlinkPut(int a4, int a5, int a6, int a7, float f4);
void sys_init(void);
int mtxGetPos(int a4, int a5, int a6, int a7);
int netJudgeReact(void);
int nlLineClipNear(int a4, int a5);


void nlChgModelPolyAttrOn(int a4)
{
    int t2;
    int t3;
    int t4;
    int t1;

    if (((int)(*(int *)((a4 + 0x0))) >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        t2 = (a4 + 0x18);
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t4 = t2;
            t2 = (t2 + 0x50);
            if ((t3 & 0xC0) != 0xC0) {
                *(unsigned int *)((t4 + 0x0)) = (((*(int *)((t4 + 0x0))) & 0xFFFFFF3F) | 0x80);
            }
            t2 = (t2 + (*(int *)((t4 + 0x4C))));
            if ((*(int *)((t2 + 0x0))) == 0) {
                break;
            }
        }
        return;
    }
}


int nlCommonTextureGetNextTextureIndex(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0x8C1DC880)) {
            return 0xFFFFFFFF;
        }
        t8 = *(int *)((t2 + (*(int *)0x8C4241C4)));
        if (t8 != -1) {
            break;
        }
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x20);
    }
    t9 = 0x1;
    t10 = 0x0;
    for (;;) {
        if ((t8 & t9) == 0) {
            break;
        }
        t9 = (t9 << 1);
        t10 = (t10 + 0x1);
    }
    t11 = *(int *)0x8C4241C4;
    *(unsigned int *)((t3 + t11)) = ((*(int *)((t3 + t11))) | t9);
    return (t0 + t10);
}


int nlsndStreamChgFx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int stk[8];
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)((((short)a4 * (short)0x1C) + 0x8C454CF4));
    if (t0 == 1) {
        R1008 = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t2 = *(short *)(((int)stk + 4));
        t3 = R1008;
        nlsndSeqRequest((((t2 << 16) | t3) | 0x3A2));
        if ((*(int *)((((short)a4 * (short)0x1C) + 0x8C454CFC))) != 0) {
            nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return nlsndSeqRequest(((((t2 << 16) | t3) | 0x3A2) + 0x800));
        }
        return 0x8C454CFC;
    }
    return t0;
}


int nlFreeTextureAll(void)
{
    int t2;
    int t3;
    int t12;
    int t13;
    int t1;
    int t8;

    t2 = 0x0;
    t3 = (*(int *)0x8C458608);
    for (;;) {
        if ((int)t2 >= (int)(*(int *)0x8C45860C)) {
            break;
        }
        if (((*(int *)((t3 + 0x2C))) != 0) && (t8 = *(int *)((t3 + 0x28)), t8 == 0)) {
            t1 = (kmFreeTexture(t3));
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x3C);
    }
    t12 = (*(int *)0x8C458608);
    t13 = 0x0;
    for (;;) {
        if ((int)t13 >= (int)(*(int *)0x8C45860C)) {
            break;
        }
        *(unsigned int *)((t12 + 0x28)) = 0xFFFFFFFF;
        t13 = (t13 + 0x1);
        *(unsigned int *)((t12 + 0x2C)) = 0x0;
        *(unsigned int *)((t12 + 0x38)) = 0xFFFFFFFF;
        t12 = (t12 + 0x3C);
    }
    *(unsigned int *)0x8C458DCC = 0x0;
    *(unsigned int *)0x8C458DC4 = 0x0;
    return t1;
}

int nlsndCheckPackReloadError(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x8)) {
        t0 = 0x8C127EB8;
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            if (t4 != t3) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                t2 = a5;
                t2 = (t2 << 1);
                t2 = (t2 + a5);
                t2 = (t2 << 2);
                t2 = (t2 + 0x8C454DD4);
                t0 = (*(int *)((t2 + 0x0)));
                if (t0 == -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                if ((int)(*(int *)((t2 + 0x8))) < (int)(*(int *)((a4 + 0x8)))) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                t1 = (*(int *)(((*(int *)0x8C454CE8) + 0x0)));
                if (t1 != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int nlLineSendVertex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    t2 = a5;
    t3 = a4;
    for (;;) {
        if (t1 == 3) {
            *(unsigned int *)((t3 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t3 + 0x0)) = 0xE0000000;
        }
        t6 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t6;
        t3 = (t3 + 0x4);
        t7 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t7;
        t3 = (t3 + 0x4);
        t8 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t8;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t9 = prefetch(t3);
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t9;
}


int nlExp(float f4)
{
    float u0;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u4;

    u0 = *(float *)0x8C0ED0D8;
    if (!(0.0f > f4)) {
        u4 = (*(float *)0x8C0ED0DC);
    } else {
        u4 = (*(float *)0x8C0ED0E0);
    }
    u7 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    u8 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    t9 = 0xA;
    u10 = ((u7 * u8) / (*(float *)0x8C0ED0E4));
    for (;;) {
        t11 = t9;
        t9 = (t9 - 4);
        u12 = ((float)t11 + u10);
        u10 = (u7 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x6) {
            break;
        }
    }
    return nlLdexpf((int)(u4 + (f4 / u0)), ((((f4 - ((float)(int)(u4 + (f4 / u0)) * u0)) + u10) + (1.0f + 1.0f)) / ((u10 - (f4 - ((float)(int)(u4 + (f4 / u0)) * u0))) + (1.0f + 1.0f))));
}


void nlSetPaletteMap(int firstColor, int colorCount)
{
    int mapIndexOrWord;
    int allocationBit;
    int remainingChunks;
    int bitmapAddress;
    int hasMoreChunks;

    mapIndexOrWord = ((int)firstColor >> 4);
    allocationBit = (((int)(firstColor & 0xF) >= 0) ? (0x1 << ((firstColor & 0xF) & 31)) : ((-(int)(firstColor & 0xF) & 31) ? ((int)0x1 >> (-(int)(firstColor & 0xF) & 31)) : ((int)0x1 >> 31)));
    remainingChunks = ((int)(colorCount + 0xF) >> 4);
    bitmapAddress = ((((int)firstColor >> 4) << 1) + 0x8C424204);
    for (;;) {
        hasMoreChunks = ((int)remainingChunks > 0);
        remainingChunks = (remainingChunks - 1);
        if (!hasMoreChunks) {
            break;
        }
        mapIndexOrWord = (*(short *)((bitmapAddress + 0x0)));
        mapIndexOrWord = (mapIndexOrWord | allocationBit);
        allocationBit = (allocationBit + allocationBit);
        *(unsigned short *)((bitmapAddress + 0x0)) = mapIndexOrWord;
        if ((int)allocationBit >= (int)0x10000) {
            allocationBit = 0x1;
            bitmapAddress = (bitmapAddress + 0x2);
        }
    }
}

int nlsndSeqRequest(int a4)
{
    int t22;
    int t16;
    int t2;
    int t10;
    int t5;

    t22 = 0xFFFFFFFD;
    if ((*(int *)0x8C454CA4) != 0) {
    } else {
        *(unsigned int *)0x8C454CA4 = 0xFFFFFFFF;
        t16 = 0xFFFFFFFE;
        if ((a4 & 128) == 0) {
        } else {
            t2 = nlsndG2Read((*(int *)0x8C454CA8));
            t10 = 0xFFFFFFFF;
            if (t2 != 0) {
            } else {
                nlsndG2Write(a4, (*(int *)0x8C454CA8));
                t5 = *(int *)0x8C454CA8;
                *(unsigned int *)0x8C454CA8 = (t5 + 0x4);
                if ((t5 + 0x4) == 0xA0800500) {
                    *(unsigned int *)0x8C454CA8 = 0xA0800400;
                }
                t10 = 0x0;
            }
            t16 = t10;
        }
        *(unsigned int *)0x8C454CA4 = 0x0;
        t22 = t16;
    }
    return t22;
}


int nlsndCheckPackFreeError(int a4)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x8)) {
        if ((*(int *)((0x8C454DD4 + (((a4 << 1) + a4) << 2)))) == -1) {
            return 0xFFFFFFFE;
        }
        if ((*(int *)(((*(int *)0x8C454CE8) + 0x0))) != 0) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int nlSysSetDirectListTypeLatency2V(int a4)
{
    int t4;
    int t2;
    int t0;
    int t6;

    t4 = 0x0;
    if (a4 != 0) {
        t2 = 0x2;
        if (a4 != 2) {
            t0 = 0x4;
            if (a4 != 4) {
                t0 = 0x0;
            }
            t2 = t0;
        }
        t4 = t2;
    }
    t6 = *(int *)0x8C424414;
    if (t6 == 1) {
        *(unsigned int *)0x8C424250 = t4;
        return t6;
    }
    return ((int (*)(int, int))(0x8C1E2F68))(0x1, t4);
}

int nlsndPackFreeBG(int a4)
{
    int t0;
    int t8;
    int t2;
    int stk[7];

    t0 = nlsndCheckPackFreeError(a4);
    t8 = t0;
    if (t0 != 0) {
    } else {
        t2 = *(int *)(((((a4 << 1) + a4) << 2) + 0x8C454DDC));
        *(unsigned int *)((((*(int *)0x8C454CE8) + 0x18) + 0x0)) = (nlsndPackFreeInit(a4, t2, ((int)stk + 4)));
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x101;
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x8)) = (-t2);
        *(unsigned int *)(((*(int *)0x8C454CE8) + 0x10)) = (*(int *)(((int)stk + 4)));
        t8 = 0x0;
    }
    return t8;
}


float nlSinf(float f4)
{
    float t0;
    float u1;
    int t2;
    int t3;
    int stk[5];

    *(float *)(((int)stk + 8)) = f4;
    t0 = nlSinfReduce(((int)stk + 4), (f4 / (1.0f + 1.0f)));
    u1 = 1.0f;
    u1 = u1 + t0 * t0;
    t2 = *(int *)(((int)stk + 4));
    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x1);
    }
    if (t3 == 0) {
        return ((t0 * (1.0f + 1.0f)) / u1);
    }
    return (-((t0 * (1.0f + 1.0f)) / u1));
}


int nlArcSin(float f4)
{
    int t0;
    int t2;

    if (_builtin_fabsf(f4) > 1.0f) {
        t0 = 0x4000;
        if (!(f4 > 0.0f)) {
            t0 = 0xFFFFC000;
        }
        return t0;
    }
    if (_builtin_sqrtf((1.0f - (f4 * f4))) != 0.0f) {
        return nlArcTan((f4 / _builtin_sqrtf((1.0f - (f4 * f4)))));
    }
    t2 = 0xC000;
    if (f4 > 0.0f) {
        t2 = 0x4000;
    }
    return t2;
}


int nlsndStreamSetHdChs(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    if ((short)a5 != 1) {
        if ((short)a5 != 2) {
            if ((short)a5 != 4) {
                return (short)a5;
            }
            t0 = *(signed char *)(((a4 + 0x9) + 0x0));
            *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t0 & 0x80) | 0x2);
            return ((t0 & 0x80) | 0x2);
        }
        t1 = *(signed char *)(((a4 + 0x9) + 0x0));
        *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t1 & 0x80) | 0x1);
        return ((t1 & 0x80) | 0x1);
    }
    t2 = *(signed char *)(((a4 + 0x9) + 0x0));
    *(unsigned char *)(((a4 + 0x9) + 0x0)) = (t2 & 0x80);
    return (t2 & 0x80);
}


void sys_init(void)
{
    int t0;
    int t1;
    int stk[3];

    *(unsigned int *)0xFFA00020 = 0x0;
    *(unsigned int *)0xFFA0002C = 0x1201;
    *(unsigned int *)0xFFA00040 = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = *(int *)0xFFA00040;
        *(unsigned int *)(((int)stk + 8)) = t1;
        if (t1 == 0x8201) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x10000) {
                break;
            }
            t0 = (*(int *)(((int)stk + 4)));
            t0 = (t0 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t0;
        }
        *(unsigned int *)0xFFA00040 = 0x8201;
    }
}


int nlLineClipNear(int a4, int a5)
{
    float u1;
    int t6;
    int t22;

    u1 = *(float *)0x8C458E3C;
    if (u1 > (*(float *)((a4 + 0x8)))) {
        t6 = 0x0;
        if (u1 > (*(float *)((a5 + 0x8)))) {
        } else {
            nlLineClipPoint(a4, a5, a4);
            t6 = 0x1;
        }
        t22 = t6;
    } else {
        if (u1 > (*(float *)((a5 + 0x8)))) {
            nlLineClipPoint(a4, a5, a5);
        }
        t22 = 0x1;
    }
    return t22;
}

void nlLoadMatrix(int a4)
{
    int t1;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0x8C450864);
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)(((t1 + 0x4) + 0x0));
    u5 = *(float *)((((t1 + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((t1 + 0x4) + 0x4) + 0x4) + 0x0));
    u7 = *(float *)((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u8 = *(float *)(((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u9 = *(float *)((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)(((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u11 = *(float *)((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u12 = *(float *)(((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u15 = *(float *)((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u16 = *(float *)(((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u17 = *(float *)((((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u18 = *(float *)(((((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    _builtin_st_ext((float (*)[4])u19);
    u19[0] = u3;
    u19[1] = u4;
    u19[2] = u5;
    u19[3] = u6;
    u19[4] = u7;
    u19[5] = u8;
    u19[6] = u9;
    u19[7] = u10;
    u19[8] = u11;
    u19[9] = u12;
    u19[10] = u13;
    u19[11] = u14;
    u19[12] = u15;
    u19[13] = u16;
    u19[14] = u17;
    u19[15] = u18;
    _builtin_ld_ext((float (*)[4])u19);
}

