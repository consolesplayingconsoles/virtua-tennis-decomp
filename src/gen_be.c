/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char stageNo[];

typedef struct { int w[3]; } Stk3;
int BupRequestSave(int, int, int, int);
int nlUnitVector(int);
int arcadePickRival(int);
int cameraCalcPoint(int, int, int, int, int);
int cameraCalcPointInv(int, int, int, int, int, float, float);
float cameraFovForSize(float);
int circuitApplyResult(void);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
extern int crowdDrawBlock();
int entryRecordCharas(void);
int entrySetResult(int);
int fadeStart(int);
int gameMatchSetup(void);
int hudBarDrawAlt(Stk3, float, float);
int hudCallTieBreakDraw(int, int, float, float);
int matchSetupPlayers(void);
int memmove(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInitEvent(void);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlTanf(float);
int nlTranslate(float, float, float);
int scoreReset(void);
int sndFadeFlagsClear(void);
extern int sprPutAtAlpha();
int sprPutCropV(int, int, Stk3, float, float, float);
int stageSoftReset(void);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int unlockTestW1(int);
int vecAnglesTo(int, int, Stk3);
float cpuAimAngleRate(int a4, int a5, int a6, int a7, int a8);
int hudCallPointsDraw(int a4, int a5, float f4, float f5);
int crowdDrawUsa(int a4);
int cpuSglAimAddGrid(int a4, int a5);
float cameraFovFit(float f4, float f5);
int btnGuideDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int arcadeNextMatch(void);
void scoreAddPoint(int a4, int a5, float f4, float f5, float f6);
int cpuDblPositionCalc(int a4, int a5);







int arcadeNextMatch(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t32;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t52;
    int t72;
    int t87;
    int t116;
    int t104;
    int t111;
    int t110;
    int t9;
    int t10;
    int t11;
    int t57;
    int t74;

    t0 = *(int *)0x8C287AF0;
    t1 = *(int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0));
    if (t1 == 0) {
        t2 = t1;
        t3 = 0x8C287AD0;
        t4 = (((t0 & 0x1) << 2) + 0x8C287AD0);
        t5 = 0x0;
        for (;;) {
            if ((*(int *)0x8C287ADC) != 4) {
                t3 = 0x8C0E87C8;
                t7 = unlockTestW1(t5);
                if (t7 != 0) {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                } else {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x0;
                }
            } else {
                *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                t9 = t2;
                t10 = t3;
                t11 = t4;
            }
            t2 = t9;
            t5 = (t5 + 0x1);
            t3 = t10;
            t4 = t11;
            if ((int)t5 >= (int)0x12) {
                break;
            }
        }
        *(unsigned int *)0x8C287CB8 = 0x0;
        *(unsigned int *)0x8C287CB4 = 0x0;
        if ((*(int *)(((((*(int *)0x8C287AF0) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            *(unsigned int *)0x8C421F70 = (*(int *)((((*(int *)0x8C287AF0) * 0xD78) + 0x8C2888E8)));
        }
    }
    t32 = *(int *)((((((*(int *)0x8C287AF0) & 0x1) << 2) + 0x8C287AD0) + 0x0));
    *(unsigned int *)0x8C287ACC = t32;
    *(unsigned int *)(int)stageNo = (*(int *)(((t32 << 2) + 0x8C1022B8)));
    *(unsigned int *)0x8C287C50 = 0x96;
    sndFadeFlagsClear();
    t35 = matchSetupPlayers();
    *(unsigned int *)0x8C287AFC = 0xFFFFFFFF;
    t36 = *(int *)0x8C287D5C;
    if (t36 == 0) {
        t37 = t35;
        t38 = t36;
        t39 = 0x0;
        for (;;) {
            if ((int)t39 >= (int)(*(int *)0x8C287ADC)) {
                break;
            }
            t38 = 0x8C287ACC;
            t37 = t39;
            t38 = (t38 + 0x14);
            t37 = (t37 << 2);
            t37 = (*(int *)((t38 + t37)));
            if (t37 == 1) {
                t37 = (*(int *)0x8C343248);
                if (t37 == -1) {
                    t37 = (arcadePickRival(t37));
                } else {
                    *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
                }
                t38 = 0xD78;
                t52 = t37;
                t37 = 0x8C2889DC;
                t38 = (t39 * t38);
                *(unsigned int *)((t38 + t37)) = t52;
                t38 = 0x8C0AB0A4;
                t37 = (entrySetResult(t52));
            } else {
                t57 = t38;
            }
            t39 = (t39 + 0x1);
            t38 = t57;
        }
        if ((*(int *)0x8C287ADC) == 4) {
            entryRecordCharas();
        }
    }
    scoreReset();
    t72 = *(int *)0x8C287AF4;
    *(unsigned int *)(((((((t72 & 0x1) << 2) << 1) + (t72 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
    if (((*(int *)0x8C287D5C) != 2) && (t74 = *(int *)0x8C287D5C, t74 != 3)) {
        nlInitEvent();
    }
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        stageSoftReset();
        *(unsigned int *)0x8C3343C0 = 0x0;
        *(unsigned int *)0x8C3343C4 = 0x0;
        strmScoreReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
    }
    t87 = *(int *)0x8C287D5C;
    t116 = t87;
    if (t87 != 2) {
    } else {
        *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) + (*(int *)0x8C2FBD18));
        *(unsigned int *)0x8C2FBE24 = 0x1;
        circuitApplyResult();
        *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
        *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C38BA60 = 0x7F;
        strmVoiceQueueReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20);
        if ((*(int *)0x8C2FBE2C) != 0) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x4;
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
        }
        t104 = *(int *)0x8C2FBC98;
        t111 = t104;
        if ((t104 & 4) != 0) {
            fadeStart(0x1E);
            gameMatchSetup();
            *(unsigned int *)0x8C20D150 = 0x1;
            *(unsigned int *)0x8C287C50 = 0x0;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFDF);
            *(unsigned char *)0x8C2FBC7E = (*(signed char *)0x8C2FBE1C);
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            t110 = BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
            t111 = t110;
        }
        t116 = t111;
    }
    return t116;
}


