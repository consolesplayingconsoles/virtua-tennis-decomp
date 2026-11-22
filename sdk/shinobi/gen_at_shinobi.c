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


int frame_make(void)
{
    int t0;
    int t1;
    int t4;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t36;
    int t37;
    int t5;
    int t8;
    int t9;
    int t23;
    int t64;
    int t65;
    int t66;
    int t60;
    int t61;
    int t62;
    int t55;
    int t56;
    int t57;
    int t50;
    int t51;
    int t52;
    int t45;
    int t46;
    int t47;
    int t41;
    int t42;
    int t43;

    t0 = *(int *)0x8C47317C;
    t1 = *(int *)((t0 + 0x10E4));
    t4 = 0x10E4;
    if ((int)t1 > 0) {
        t4 = (mpdrv_insertnop((*(int *)((t0 + 0x10E4)))));
    } else {
        t5 = t1;
    }
    t7 = t4;
    t10 = t5;
    t11 = (0x44C + t0);
    t12 = (t0 + 0x28);
    t13 = 0x0;
    for (;;) {
        if ((int)t13 >= (int)0x18) {
            break;
        }
        t10 = 0xF90;
        t7 = (*(int *)0x8C47317C);
        t10 = (t10 + t7);
        t10 = (t10 + t13);
        t9 = (*(signed char *)((t10 + 0x0)));
        if ((t9 != 0) && (t23 = *(signed char *)((t12 + 0x6)), t7 = t23, t7 == 0)) {
            t7 = (*(signed char *)((t12 + 0x4)));
            t7 = (unsigned char)t7;
            if (t7 != 1) {
                if (t7 != 2) {
                    if (t7 != 3) {
                        if (t7 != 4) {
                            if (t7 != 9) {
                                t41 = t8;
                                t42 = t9;
                                t43 = t10;
                            } else {
                                t36 = *(int *)((t11 + 0x0));
                                t9 = t36;
                                t37 = t36;
                                if ((t9 & 0x1) != 0) {
                                    t37 = 0x1;
                                }
                                t9 = 0x8C1FE6A2;
                                t7 = (mpdrv_set_getcond_ns(t13, t37));
                            }
                            t45 = t41;
                            t46 = t42;
                            t47 = t43;
                        } else {
                            t9 = 0x8C1FE748;
                            t7 = (mpdrv_set_dkill_ns(t13));
                        }
                        t50 = t45;
                        t51 = t46;
                        t52 = t47;
                    } else {
                        t9 = 0x8C1FE78C;
                        t7 = (mpdrv_set_dreset_ns(t13));
                    }
                    t55 = t50;
                    t56 = t51;
                    t57 = t52;
                } else {
                    t9 = 0x8C1FE7D0;
                    t7 = (mpdrv_set_allstatreq_ns(t13));
                }
                t60 = t55;
                t61 = t56;
                t62 = t57;
            } else {
                t7 = (mpdrv_set_dreq_ns(t13));
            }
            t64 = t60;
            t65 = t61;
            t66 = t62;
        } else {
            t64 = t8;
            t65 = t9;
            t66 = t10;
        }
        t8 = t64;
        t11 = (t11 + 0x78);
        t9 = t65;
        t10 = t66;
        t12 = (t12 + 0x2C);
        t13 = (t13 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}


