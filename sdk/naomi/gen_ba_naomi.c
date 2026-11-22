/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[29]; } Stk29;
int ADXT_GetStat(int);
int colliObjEntry(int);
int crowdFrameTcw(void);
extern int fadeQuadDrawB();
int kyakuPolyLoad(void);
int lightStagePreset(void);
int motionAdvanceSimple(int);
int motionBackup(int);
float motionGetFrame(int);
int motionIsEnd(int);
int motionRootFirst(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int mtxGetWorldPos(int, int, int, int, int);
int ndbBuildIndex(void);
int ndbKeyEqual(int, int);
int ndbPack(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int, float, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
int primVertexSet(int, int, int, int, int, Stk3);
int selCursorPos(int, int, int, int, int);
int sndFxReset(void);
int sndStagePackLoad(int);
int stageCrowdTexLoad(void);
int stagePolyLoad(void);
int stageSelNameDraw(int, int, Stk3);
int strmBgmPlay(int);
int strmVoicePlay(int, int);
int strmVoiceQueueAdd(int);
int strmVoiceVolRestore(void);
int umpCheerTimed(int);
int umpirePose(int);
int vecAdd(int, int, int, int, int, Stk3, Stk3);
int vecDiv(int, int, int, int, int, float, float);
int vecMake(int, int, int, int, int, float, float, float);
int ndbEditInput(int a4);
void bodyGroundFriction(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
void winTriPartsPut(int a4, int a5, int a6, int a7, float f4, float f5);
int markerDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int umpireExec(void);
int stageLoadTimedStep(void);
int staffLookAtBall(int a4, int a5, int a6, int a7);
int primSprDrawScaleAlpha(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int selCursorInit(int a4);
int resultBoxDraw(int a4, int a5, int a6, int a7);
int sseleGridDraw(int a4, int a5, int a6, int a7);
int kmiWriteFBRegister(Stk29 s);
void crowdAnimModel(int a4, int a5, int a6, int a7);
void strmCallScore(int a4, int a5, int a6, int a7);
float nlLUDecomp(int a4, int a5, float f4, float f5);
int advInit(void);
int circuitDrawMatchIcon(void);
int primSprDraw(int a4, int a5, int a6, int a7);


float nlLUDecomp(int a4, int a5, float f4, float f5)
{
    int t2;
    int t0;
    int t5;
    int t8;
    int t9;
    float u12;
    float u13;
    int t18;
    float u20;
    int t1;
    int t3;
    int t6;
    int t7;
    int t10;
    float u11;
    int t14;
    int t15;
    int t16;
    int t17;
    float u19;
    int stk[17];

    *(unsigned int *)(((int)stk + 12)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        t1 = t0;
        t2 = t0;
    } else {
        t3 = a5;
    }
    t5 = t1;
    t8 = t3;
    t9 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            t7 = a5;
            t7 = (t7 + 0x4);
            t9 = 0x0;
            *(unsigned int *)(((int)stk + 8)) = t7;
            t18 = 0x0;
            u20 = 1.0f;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t18 = t9;
                t10 = t9;
                u13 = (-1.0f);
                t10 = (t10 << 2);
                if ((int)t18 < (int)0x4) {
                    for (;;) {
                        t5 = t18;
                        t17 = (*(signed char *)((a5 + t5)));
                        t7 = t2;
                        t6 = ((int)stk + 4);
                        t5 = t17;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t7);
                        t7 = t17;
                        t6 = (t6 + 0xC);
                        u11 = (*(float *)((t10 + t5)));
                        t7 = (t7 << 2);
                        t7 = (t7 + t6);
                        u11 = _builtin_fabsf(u11);
                        u19 = (*(float *)((t7 + 0x0)));
                        u12 = u11;
                        u12 = (u12 * u19);
                        if (u12 > u13) {
                            t8 = t18;
                            u13 = u12;
                        }
                        t18 = (t18 + 0x1);
                        if ((int)t18 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t16 = t8;
                t16 = (t16 + a5);
                t18 = (*(signed char *)((t16 + 0x0)));
                if (t8 != t9) {
                    t17 = t9;
                    t17 = (t17 + a5);
                    t6 = (*(signed char *)((t17 + 0x0)));
                    u20 = (-u20);
                    *(unsigned char *)((t16 + 0x0)) = t6;
                    *(unsigned char *)((t17 + 0x0)) = t18;
                }
                t15 = t18;
                t15 = (t15 << 2);
                t5 = t2;
                t15 = (t15 << 2);
                t5 = (t5 + t15);
                u11 = 0.0f;
                u12 = (*(float *)((t10 + t5)));
                u20 = (u20 * u12);
                if (u12 != u11) {
                    t17 = t9;
                    t17 = (t17 + 0x1);
                    t14 = t17;
                    t14 = (t14 + a5);
                    for (;;) {
                        t6 = (*(int *)(((int)stk + 8)));
                        if ((unsigned int)t14 >= (unsigned int)t6) {
                            break;
                        }
                        t18 = (*(signed char *)((t14 + 0x0)));
                        t14 = (t14 + 0x1);
                        t5 = t2;
                        t8 = t17;
                        t18 = (t18 << 2);
                        t18 = (t18 << 2);
                        t5 = (t5 + t18);
                        u13 = (*(float *)((t10 + t5)));
                        u13 = (u13 / u12);
                        *(float *)((t10 + t5)) = u13;
                        if ((int)t8 < (int)0x4) {
                            for (;;) {
                                t16 = t8;
                                t16 = (t16 << 2);
                                u19 = u13;
                                t5 = t2;
                                *(unsigned int *)(((int)stk + 4)) = t5;
                                t5 = (t5 + t18);
                                t7 = (*(int *)(((int)stk + 4)));
                                t8 = (t8 + 0x1);
                                t7 = (t7 + t15);
                                t7 = (t7 + t16);
                                u11 = (*(float *)((t7 + 0x0)));
                                u19 = (u19 * u11);
                                u11 = (*(float *)((t16 + t5)));
                                u11 = (u11 - u19);
                                *(float *)((t16 + t5)) = u11;
                                if ((int)t8 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                    }
                    t9 = (t9 + 0x1);
                    continue;
                }
                return u20;
            }
            t7 = (*(int *)(((int)stk + 12)));
            if (t7 == 0) {
                t7 = 0x8C0EF5B0;
                t5 = (nlLoadMatrix(t2, u12, u13, (-1.0f), 1.0f));
                return u20;
            }
            return u20;
        }
        t5 = t9;
        t10 = t5;
        t10 = (t10 << 2);
        t8 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u12 = 0.0f;
        t10 = (t10 << 2);
        for (;;) {
            if ((int)t8 >= (int)0x4) {
                break;
            }
            t7 = t8;
            t5 = t2;
            t7 = (t7 << 2);
            t5 = (t5 + t10);
            u11 = (*(float *)((t7 + t5)));
            u11 = _builtin_fabsf(u11);
            u13 = u11;
            t8 = (t8 + 0x1);
            if (u13 > u12) {
                u12 = u13;
            }
        }
        u11 = 0.0f;
        if (u12 == u11) {
            break;
        }
        u11 = 1.0f;
        u11 = (u11 / u12);
        t6 = ((int)stk + 4);
        t7 = t9;
        t7 = (t7 << 2);
        t6 = (t6 + 0xC);
        t7 = (t7 + t6);
        t9 = (t9 + 0x1);
        *(float *)((t7 + 0x0)) = u11;
    }
    return 0.0f;
}


