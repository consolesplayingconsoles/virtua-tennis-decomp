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

int crowdInit(void)
{
    int t1;
    int t13;
    int t20;
    int t21;
    int t24;
    int t26;
    int t0;

    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E0)) = t1;
        *(unsigned int *)(((0x1E4 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)t1 % (int)0x11));
        if ((*(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E4))) == 16) {
            t0 = (t1 * 0x1F4);
            t0 = (t0 + 0x8C344A08);
            *(unsigned int *)((t0 + 0x1E4)) = 0x1;
        }
        t0 = 0x8C0F7BAC;
        *(unsigned int *)(((0x1EC + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0x1C));
        t0 = 0x1EC;
        t0 = (t0 + ((t1 * 0x1F4) + 0x8C344A08));
        t0 = (*(int *)((t0 + 0x0)));
        t13 = t0;
        t0 = (t0 << 1);
        t0 = (t0 + t13);
        t0 = (t0 << 2);
        t0 = (t0 + 0x8C11F830);
        *(unsigned int *)(((0x1E8 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)(*(int *)((t0 + 0x4)))));
        *(unsigned int *)(((0x1F0 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0xA));
        t0 = (*(int *)0x8C2873D0);
        t20 = t0;
        t21 = *(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E4));
        t0 = (*(int *)((((((t21 << 1) + t21) << 2) << 2) + 0x8C11F530)));
        t24 = *(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1EC));
        t26 = motionSet(((t1 * 0x1F4) + 0x8C344A08), (*(int *)((((((t24 << 1) + t24) << 2) + 0x8C11F830) + 0x0))), 0x1, 0x12764C, (t0), t20, 1.0f);
        t0 = 0x1E;
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)t0) {
            break;
        }
    }
    return t26;
}


int miniTargetDraw(int a4, int a5, int a6, int a7)
{
    float u0;
    int t2;
    float t5;
    float t8;
    int t17;
    int t21;
    float u23;
    float u24;
    float u26;
    float u28;
    float u14;
    float u15;

    u0 = *(float *)0x8C03B0F0;
    t2 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t2 != 6) {
        if (t2 != 2) {
            if ((t2 != 0) && (t2 != 5)) {
                return t2;
            }
            t5 = ((float (*)(int, int, int, int, float, float, float, float))(vecDistXZf))(a4, a5, a6, a7, 0.0f, 0.0f, (*(float *)((a4 + 0x20))), (*(float *)((a4 + 0x28))));
            t8 = ((float (*)(float, float, float, float))(vecDistXZf))(0.0f, 0.0f, (*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x8))));
            if (t5 > t8) {
                u14 = (*(float *)((a4 + 0x20)));
                u15 = (*(float *)((a4 + 0x28)));
            } else {
                u14 = (*(float *)((a4 + 0x0)));
                u15 = (*(float *)((a4 + 0x8)));
            }
            t17 = nlArcTan2(u14, u15);
            nlRotateAY(t17);
            return nlObjPutTrnsl(0xCB5E598, u0);
        }
        t21 = nlArcTan2((*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x18))));
        nlRotateAY(t21);
        u23 = *(float *)((a4 + 0x14));
        u24 = (-u23);
        if (!(0.0f > u23)) {
            u24 = u23;
        }
        u26 = 1.0f;
        u26 = u26 + (1.0f + 1.0f) * ((-u24) + 1.0f);
        nlScale(1.0f, 1.0f, u26);
        return nlObjPutTrnsl(0xCB5E4A0, u0);
    }
    u28 = *(float *)0x8C03B100;
    nlScale(u28, u28, u28);
    return nlObjPutTrnsl(0xCB5E4A0, u0);
}


int arcadeNextStage(void)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t13;

    t0 = *(int *)0x8C287AF0;
    t2 = (int)((int)((*(int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0))) + 0x1) % (int)0x6);
    *(unsigned int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0)) = t2;
    t3 = t2;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t3 = t5;
        t3 = (t3 << 2);
        t3 = (*(int *)((0x8C287AE0 + t3)));
        if (t3 == 1) {
            t3 = (t5 * 0xD78);
            t3 = (t3 + 0x8C287D84);
            t3 = (*(int *)(((0xC58) + t3)));
            t3 = (t3 << 2);
            *(unsigned int *)((0x8C287C74 + t3)) = 0x0;
        }
        t5 = (t5 + 0x1);
    }
    if ((*(int *)0x8C287D5C) == 0) {
        t13 = entryGetRound();
        if ((int)t13 >= (int)0x5) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x0;
            return t13;
        }
        return arcadeNextMatch();
    }
    return arcadeNextMatch();
}

void umpCallScore(void)
{
    int t1;
    float u2;
    float u3;
    float u6;
    int t8;
    int t12;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C084678;
        u3 = *(float *)0x8C08467C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C084680), u3, u2);
        u6 = *(float *)0x8C084684;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), u6, u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        t8 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t8 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t8), (*(float *)0x8C084688), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t8), u6, u3, u2);
        *(float *)((t8 + 0x80)) = 1.0f;
        *(unsigned int *)((t8 + 0x88)) = 0x0;
        *(float *)((t8 + 0x80)) = 0.0f;
        t12 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t12 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t12), (*(float *)0x8C08468C), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t12), u6, u3, u2);
        *(float *)((t12 + 0x80)) = 1.0f;
        *(unsigned int *)((t12 + 0x88)) = 0x0;
        *(float *)((t12 + 0x80)) = 0.0f;
    }
}


int phraseInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t16;
    int t19;
    int t20;
    int t23;
    int t3;
    int t7;
    int t11;
    int stk[160];

    t0 = 0x8C10E9EC;
    t2 = (0x194 + ((int)stk + 12));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10E9EC + 192)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C10EAAC;
    t6 = (0xC4 + ((int)stk + 12));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C10EAAC + 208)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x8C10EB7C;
    t10 = (((int)stk + 12) + 0x4);
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((0x8C10EB7C + 192)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    t12 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = (((((t12 << 2) + t12) << 2) << 2) + 0x8C338D30);
        sprInitRectF((((((t12 << 2) + t12) << 2) << 2) + 0x8C338D30), 0x6, (0x194 + ((int)stk + 12)), 0x80, 0x80, (t12));
        t12 = (t12 + 0x1);
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x34)) = 0x5;
        if ((int)t12 >= (int)0xC) {
            break;
        }
    }
    t16 = 0x0;
    for (;;) {
        sprInitRectF((((((t16 << 2) + t16) << 2) << 2) + 0x8C3390F0), 0x7, (0xC4 + ((int)stk + 12)), 0x80, 0x80, (t16));
        t19 = (((((t16 << 2) + t16) << 2) << 2) + 0x8C3390F0);
        t16 = (t16 + 0x1);
        *(unsigned int *)((t19 + 0x34)) = 0x5;
        if ((int)t16 >= (int)0xD) {
            break;
        }
    }
    t20 = 0x0;
    for (;;) {
        sprInitRectF((((((t20 << 2) + t20) << 2) << 2) + 0x8C339500), 0x8, (((int)stk + 12) + 0x4), 0x80, 0x80, (t20));
        t23 = (((((t20 << 2) + t20) << 2) << 2) + 0x8C339500);
        t20 = (t20 + 0x1);
        *(unsigned int *)((t23 + 0x34)) = 0x5;
        if ((int)t20 >= (int)0xC) {
            break;
        }
    }
    return (phraseWordsInitB());
}


