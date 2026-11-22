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


int kmLoadTextureRom(int a4, int a5)
{
    int t6;
    int t7;
    int t15;
    int t16;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        copySmallVQToTextureRom((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))), (*(int *)((a4 + 0x18))));
    } else {
        t6 = *(int *)((a4 + 0x18));
        if (((0x4000000 & t6) == 0) && (((0x80000000 & t6) != 0) && (((0x40000000 & t6) == 0) && ((0x8000 & t6) == 0)))) {
            t7 = *(int *)((a4 + 0xC));
            t15 = ((*(int *)((a4 + 0x1C))) + 0x4);
            t16 = ((*(int *)((((kmtex_GetTextureLevel(t7, t7)) << 2) + 0x8C20AEDC))) + 0x4);
        } else {
            t15 = (*(int *)((a4 + 0x1C)));
            t16 = (*(int *)((a4 + 0x14)));
        }
        kmyCopyToTextureRom(t15, a5, t16, 0x0);
    }
    return 0x0;
}

int kmytex_FBAllocEntry(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        for (;;) {
            if (((unsigned short)(*(short *)(((((((t1 << 1) + t1) << 2) << 1) + (*(int *)0x8C20C9E8)) + 0x0))) & 0x1) == 0) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)t0) {
                return 0x0;
            }
        }
        *(unsigned short *)((((*(int *)0x8C20C9E8) + ((((t1 << 1) + t1) << 2) << 1)) + 0x0)) = 0x1;
        return ((*(int *)0x8C20C9E8) + ((((t1 << 1) + t1) << 2) << 1));
    }
    return 0x0;
}


int kmtex_TextureSize_Twiddled(int a4)
{
    int t0;
    int t1;
    int t25;
    int t3;
    int t12;
    int t13;
    int t14;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t17;
    int t29;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t25 = (t1 * t0);
    if (((*(int *)((a4 + 0x18))) & 0x80000000) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t12 = ((unsigned int)t0 >> 1);
        t13 = ((unsigned int)t1 >> 1);
        t14 = (t1 * t0);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t5 = t3;
            t6 = ((unsigned int)t0 >> 1);
            t7 = ((unsigned int)t1 >> 1);
            t8 = (t1 * t0);
            for (;;) {
                t9 = (t7 * t6);
                t7 = ((unsigned int)t7 >> 1);
                t6 = ((unsigned int)t6 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t8 = (t8 + t9);
                if ((unsigned int)t5 <= (unsigned int)0x1) {
                    break;
                }
            }
            t12 = t6;
            t13 = t7;
            t14 = t8;
        }
        t17 = (t14 + (t13 * t12));
        if (t13 == t12) {
            t17 = (t14 + 0x4);
        }
        t25 = t17;
    }
    t29 = (t25 << 2);
    if ((*(int *)((a4 + 0x4))) == 1) {
        t29 = (t25 << 1);
    }
    return t29;
}

int kmtex_ConfirmSmallVQ(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 != 8) {
        if (t0 != 16) {
            if (t0 != 32) {
                if (t0 != 64) {
                    return 0x5;
                }
                if ((0x80000000 & (*(int *)((a4 + 0x18)))) != 0) {
                    return 0x8;
                }
                return 0x7;
            }
            if ((0x80000000 & (*(int *)((a4 + 0x18)))) != 0) {
                return 0x6;
            }
            return 0x5;
        }
        if ((0x80000000 & (*(int *)((a4 + 0x18)))) != 0) {
            return 0x4;
        }
        return 0x3;
    }
    if ((0x80000000 & (*(int *)((a4 + 0x18)))) != 0) {
        return 0x2;
    }
    return 0x1;
}

int kmtex_TextureSize_VQ(int a4)
{
    int t0;
    int t1;
    int t5;
    int t14;
    int t15;
    int t16;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t19;
    int t28;
    int t25;
    int t35;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    if (((*(int *)((a4 + 0x18))) & 0x80000000) != 0) {
        t5 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1)) {
            t5 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        }
        t14 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t15 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        t16 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((unsigned int)t5 > (unsigned int)0x1) {
            t7 = t5;
            t8 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t9 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            t10 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            for (;;) {
                t11 = (t9 * t8);
                t9 = ((unsigned int)t9 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t10 = (t10 + t11);
                if ((unsigned int)t7 <= (unsigned int)0x1) {
                    break;
                }
            }
            t14 = t8;
            t15 = t9;
            t16 = t10;
        }
        t19 = (t16 + (t15 * t14));
        if (t15 == t14) {
            t19 = (t16 + 0x2);
        }
        t35 = (t19 + 0xA);
    } else {
        t28 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
        if ((*(int *)((a4 + 0xC))) == 8) {
            t25 = (((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1));
            if ((*(int *)((a4 + 0x10))) == 8) {
                t25 = ((((unsigned int)t1 >> 1) * ((unsigned int)t0 >> 1)) + 0x10);
            }
            t28 = t25;
        }
        t35 = t28;
    }
    return (t35 + 0x800);
}


int kmSetColorClampValue(Stk4 s)
{
    *(unsigned int *)0x8C471E18 = (((*(int *)0x8C471E18) | 0x10) | 0x20);
    *(unsigned int *)0x8C471E3C = s.w[0];
    *(unsigned int *)0x8C471E40 = s.w[1];
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x20);
    *(unsigned int *)0x8C471E1C = ((*(int *)0x8C471E1C) | 0x10);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFDF);
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFEF);
    return 0x0;
}


int kmyDeleteNativeBuffer(int a4, int a5)
{
    int t0;
    int t15;
    int t1;
    int t12;
    int t2;

    t0 = kmyiCheckTAHandle(a4);
    t15 = 0xEEEE;
    if (t0 != 0) {
        t1 = kmyiCheckNativeHandle(a5);
        t12 = 0xEEEE;
        if (t1 == 0) {
        } else {
            t2 = *(int *)((a5 + 0x0));
            if (((*(int *)0x8C474400) & (((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)))) != 0) {
                *(unsigned int *)0x8C474400 = ((*(int *)0x8C474400) & (~(((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)))));
                *(unsigned int *)0x8C474404 = ((*(int *)0x8C474404) - 1);
            }
            kmyReleaseRenderPacket((*(int *)((a5 + 0x88))));
            *(unsigned int *)((a5 + 0x1C)) = 0x0;
            *(unsigned int *)((a5 + 0x20)) = 0x0;
            t12 = 0x0;
        }
        t15 = t12;
    }
    return t15;
}


int VQDeQueueEntry(int a4, int a5)
{
    int t0;
    int t6;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x0));
    t6 = 0x0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = t0;
        for (;;) {
            if ((*(int *)((t2 + 0x4))) == a5) {
                t1 = t2;
                t2 = 0x0;
            } else {
                t2 = (*(int *)((t2 + 0x4)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t6 = t1;
    }
    if ((*(int *)((a4 + 0x0))) == a5) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a5 + 0x4)));
    } else {
        *(unsigned int *)((t6 + 0x4)) = (*(int *)((a5 + 0x4)));
    }
    return t6;
}


