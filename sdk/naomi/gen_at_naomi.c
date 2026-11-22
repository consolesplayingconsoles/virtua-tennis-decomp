/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ADXPD_GetStat(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADX_DecodeInfoAiff(int, int, int, int, int, int, int, int, int, int);
int setCullingThreshold(float);
int _lsfts(int, int, int);
int _mvito4b(int, int);
int adxt_stat_decend(int, int, int, int);
int adxt_stat_decinfo(int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int);
int arcadeNextMatch(void);
int charaModelCount(int, int);
int charaTexCount(int);
int entryGetRound(void);
int hudCallDigitPut(int, Stk3, float, float);
int kmBeginPass(int);
int kmBeginScene(int);
int kmSetWaitVsyncCount(int);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDMAValue(int);
int kmyGetNativeBufferStatus(int, int);
int kmyRequestCallback(int);
int memmove(int, int, int);
int memset(int, int, int);
int modelSwapMaterial(int, int, int);
int motionSet(int, int, int, int, int, int, float);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int nlArcTan2(float, float);
int nlCreateVertexBuffer_clx16(void);
int nlCreateVertexBuffer_clx22(int, int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlDispStripTrnsl(int, int);
int nlObjPutTrnsl(int, float);
int nlRand(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int nlsndSeqRequest(int);
int phraseWordsInitB(void);
int primFrameCorners(int, int, int, int, Stk3);
int set_event2(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern float vecDistXZf();
int vecLineCrossXZ(int, ...);
int vecMake(int, int, int, int, int, float, float, float);
int crowdInit(void);
int staffMorphCapture(int a4, int a5, int a6, int a7);
int miniTargetDraw(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAuUlaw(int a4, int a5, int a6, int a7);
void vecSegCrossXZ(Stk10 s);
int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int frame_make(void);
int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7);
int ADXT_ExecHndl(int a4, int a5, int a6, int a7);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int arcadeNextStage(void);
void umpCallScore(void);
int hudCallNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int nlsndIcsControl(int a4, int a5, int a6);
int ADXB_ExecOneAu8(int a4, int a5, int a6, int a7);
int uniformTexRestore(int a4);
void sprListPutGrad(int a4, int a5, int a6, int a7, float f4, float f5);
int kmiFLWCTRLEORCallBackFunc(int a4, int a5);
int msgWinFramePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int nlCreateVertexBuffer(int a4, int a5, int a6, int a7);
int nlsndSystemControl(int a4, int a5, int a6);
int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7);
void cpuSglShotDefault(int a4);
int _unpack(int a4, int a5, int a6, float f4, float f5);
int nlSpriteF2ARGB(float f4, float f5, float f6, float f7);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7, float f4);
int kmiFLWCTRLEOVCallBackFunc(int a4);
int phraseInit(void);


int nlsndIcsControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA5) {
        if (a5 != 0x10A5) {
            if ((a5 != 0x20A5) && ((a5 != 0x30A5) && ((a5 != 0x40A5) && ((a5 != 0xA7) && (a5 != 0x10A7))))) {
                if (a5 != 0x50A5) {
                    if (a5 != 0xA6) {
                        return 0xFFFFFFFE;
                    }
                    return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1))));
                }
                return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0x7F) << 16)));
    }
    t0 = nlsndSeqRequest(((((0x7F00 & a6) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
    if (t0 != 0) {
        return t0;
    }
    return nlsndSeqRequest(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5));
}


int nlCreateVertexBuffer(int a4, int a5, int a6, int a7)
{
    int t7;
    int t8;
    int t13;
    int t11;
    int t3;

    if ((*(int *)0x8C424414) == 1) {
        t3 = (nlCreateVertexBuffer_clx22(a4, a5, a6, a7));
    } else {
        t3 = (nlCreateVertexBuffer_clx16());
    }
    nlSysInitStripContextBG(0x8C454FE0);
    nlSysInitStripContextVtx(0x8C458610);
    *(unsigned int *)0x8C458C10 = 0x8C458610;
    *(unsigned int *)0x8C458C14 = 0x0;
    t7 = *(short *)0x8C458DDA;
    t8 = *(short *)0x8C458DD8;
    if (0x0 != 0) {
        t13 = (short)t7;
        if ((*(short *)0x8C458DDE) == 1) {
            t11 = ((short)t7 + (short)t7);
            if ((int)((short)t7 + (short)t7) > (int)0x1E0) {
                t11 = 0x1E0;
            }
            t13 = t11;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)t13);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)(short)t7);
    }
    setCullingThreshold(0.0199999996f);
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    kmSetWaitVsyncCount((*(int *)0x8C424474));
    if ((*(int *)0x8C424460) == 0) {
        kmBeginScene(0x8C42420C);
        kmBeginPass(0x8C454FC0);
        *(unsigned int *)0x8C42445C = (*(int *)0x8C454FC0);
    }
    return t3;
}

int nlsndSystemControl(int a4, int a5, int a6)
{
    if ((0xFF00 & a5) == 0) {
        return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
    }
    if ((a5 != 0x1A0) && ((a5 != 0x4A0) && ((a5 != 0x9A0) && ((a5 != 0xAA0) && ((a5 != 0x10A0) && ((a5 != 0x19A0) && (a5 != 0x1CA0))))))) {
        if ((a5 != 0x5A0) && ((a5 != 0x6A0) && ((a5 != 0x7A0) && (a5 != 0x11A0)))) {
            if (a5 != 0x1BA0) {
                if ((a5 != 0x30A0) && ((a5 != 0x28A0) && (a5 != 0x29A0))) {
                    if ((a5 != 0x2A0) && (a5 != 0x3A0)) {
                        return 0xFFFFFFFE;
                    }
                    return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
                }
                return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 - 1) & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0xF) << 16)));
        }
        return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
    }
    return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
}


int nlSpriteF2ARGB(float f4, float f5, float f6, float f7)
{
    float u2;
    float u6;
    float u10;
    float u14;
    int t16;
    int t18;
    int t20;
    int t22;

    u2 = (f4 * 255.0f);
    if ((f4 * 255.0f) > 2.14748365e+09f) {
        u2 = ((f4 * 255.0f) + -4.2949673e+09f);
    }
    u6 = (f5 * 255.0f);
    if ((f5 * 255.0f) > 2.14748365e+09f) {
        u6 = ((f5 * 255.0f) + -4.2949673e+09f);
    }
    u10 = (f6 * 255.0f);
    if ((f6 * 255.0f) > 2.14748365e+09f) {
        u10 = ((f6 * 255.0f) + -4.2949673e+09f);
    }
    u14 = (f7 * 255.0f);
    if ((f7 * 255.0f) > 2.14748365e+09f) {
        u14 = ((f7 * 255.0f) + -4.2949673e+09f);
    }
    t16 = (int)u2;
    if ((unsigned int)(int)u2 > (unsigned int)0xFF) {
        t16 = 0xFF;
    }
    t18 = (int)u6;
    if ((unsigned int)(int)u6 > (unsigned int)0xFF) {
        t18 = 0xFF;
    }
    t20 = (int)u10;
    if ((unsigned int)(int)u10 > (unsigned int)0xFF) {
        t20 = 0xFF;
    }
    t22 = (int)u14;
    if ((unsigned int)(int)u14 > (unsigned int)0xFF) {
        t22 = 0xFF;
    }
    return ((((((t16 << 8) | t18) << 8) | t20) << 8) | t22);
}


