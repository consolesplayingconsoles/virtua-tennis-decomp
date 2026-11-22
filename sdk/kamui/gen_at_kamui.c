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


int kmiFLWCTRLEORCallBackFunc(int a4, int a5)
{
    int t1;
    int t11;

    if ((*(int *)0x8C4607B4) == 0) {
    } else {
        t1 = *(int *)0x8C45F8FC;
        *(unsigned int *)0x8C45F8FC = (t1 + 0x1);
        *(unsigned int *)((((((t1 + 0x1) - 1) << 2) + 0x8C45F8D8) + 0x0)) = ((*(int *)((((((t1 + 0x1) - 1) << 2) + 0x8C45F8D8) + 0x0))) - (*(int *)0xFFD8000C));
        *(unsigned int *)0x8C45F8FC = ((*(int *)0x8C45F8FC) & 0x7);
        *(unsigned int *)0x8C4607B4 = 0x0;
        *(unsigned int *)(((*(int *)0x8C4607B8) + 0x14)) = 0x6;
        if ((*(int *)0x8C4607E8) == 0) {
            t11 = *(int *)(((*(int *)0x8C4607B8) + 0x20));
            if ((unsigned int)t11 < (unsigned int)(*(int *)0x8C45F938)) {
                if ((*(int *)0x8C45F95C) != 0) {
                    *(unsigned int *)0x8C45F950 = ((*(int *)0x8C45F950) | (((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31))));
                } else {
                    *(unsigned int *)0x8C45F944 = ((*(int *)0x8C45F944) & (~(((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31)))));
                }
            }
            *(unsigned int *)(((*(int *)0x8C4607B8) + 0x20)) = 0xFFFFFFFF;
        }
        *(unsigned int *)0x8C4607BC = (*(int *)0x8C4607B8);
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x0);
    }
    return 0x0;
}


int kmiFLWCTRLEOVCallBackFunc(int a4)
{
    int t0;
    int t6;
    int t14;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        *(unsigned int *)(((((kmyGetDMAValue(a4)) << 2) + 0x8C45F8B8) + 0x0)) = ((*(int *)0x8C45F8F8) - (*(int *)0xFFD8000C));
        kmyGetNativeBufferStatus((*(int *)((t0 + 0x3C))), 0x8C45F800);
        t6 = t0;
        for (;;) {
            if ((*(int *)((t6 + 0x14))) == 3) {
                break;
            }
            t6 = (*(int *)((t6 + 0x10)));
            if (t6 == 0) {
                kmiFLWCTRLRotateReadyQueue(0x0);
                kmyRequestCallback(0x5);
                return 0x0;
            }
        }
        t14 = *(int *)((t6 + 0x1C));
        if ((unsigned int)t14 < (unsigned int)(*(int *)0x8C45F934)) {
            if ((*(int *)0x8C45F958) != 0) {
                *(unsigned int *)0x8C45F94C = ((*(int *)0x8C45F94C) | (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31))));
            } else {
                *(unsigned int *)0x8C45F940 = ((*(int *)0x8C45F940) & (~(((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31)))));
            }
        }
        *(unsigned int *)((t6 + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x14)) = 0x4;
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x5);
    }
    return 0x0;
}


