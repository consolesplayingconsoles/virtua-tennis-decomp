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

int ndbEditInput(int a4)
{
    int t0;
    int t1;
    int t24;
    int t34;
    int t40;
    int t41;
    int t47;
    int t53;
    int t57;
    int t61;
    int t65;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C081F5C:;
    t0 = *(int *)0x8C29B898;
    *(unsigned int *)(((int)stk + 8)) = t0;
    t1 = *(int *)((t0 + 0x10));
    R10 = (0x8C29B898);
    R13 = (R4);
    R4 = (t1);
    if (((0x5 & t1) != 0)) goto L_8C081F84;
    goto L_8C081F7E;
    L_8C081F7E:;
    if (((0x400 & R4) == 0)) goto L_8C081FFA;
    goto L_8C081F84;
    L_8C081F84:;
    R11 = ((*(int *)0x8C301938));
    R12 = (0x8C301938);
    R14 = (0x8CA80000);
    R8 = (0x0);
    R9 = (0x1);
    goto L_8C081FE2;
    L_8C081FE2:;
    if ((R11 != 0)) goto L_8C081F90;
    goto L_8C081FE6;
    L_8C081FE6:;
    if ((R9 == 0)) goto L_8C081FFA;
    goto L_8C081FEA;
    L_8C081FEA:;
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(R14) = *(struct mvb8 *)(R13); }
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) + 0x1);
    goto L_8C081FFA;
    L_8C081FFA:;
    R4 = (0x8C301944);
    R5 = (0xE0);
    R6 = ((*(int *)0x8C301944));
    if ((((*(int *)(((*(int *)((R10 + 0x0))) + 0x10))) & 0x20000) == 0)) goto L_8C082050;
    goto L_8C08200A;
    L_8C08200A:;
    if (((int)R6 <= 0)) goto L_8C08208A;
    goto L_8C08200E;
    L_8C08200E:;
    t24 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (t24 - 1);
    if ((((t24 - 1) & 0x7) != 7)) goto L_8C082022;
    goto L_8C08201C;
    L_8C08201C:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) - 1);
    goto L_8C082022;
    L_8C082022:;
    if ((((*(int *)((R4 + 0x0))) & R5) != R5)) goto L_8C08208A;
    goto L_8C08202A;
    L_8C08202A:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) - 32);
    goto L_8C08208A;
    L_8C08208A:;
    *(unsigned char *)((R13 + 0x0)) = (((int)(*(int *)((R4 + 0x0))) >> 10) & 0x3);
    *(unsigned char *)((R13 + 0x1)) = (((int)(*(int *)((R4 + 0x0))) >> 8) & 0x3);
    *(unsigned char *)((R13 + 0x2)) = ((((int)(*(int *)((R4 + 0x0))) >> 5) & 0x7) - 3);
    *(unsigned char *)((R13 + 0x3)) = (((((*(int *)((R4 + 0x0))) >> 1) >> 1) >> 1) & 0x3);
    t34 = *(int *)((R4 + 0x0));
    *(unsigned char *)((R13 + 0x4)) = ((t34 & 0x7) - 3);
    R0 = (((t34 & 0x7) - 3));
    goto L_8C0820BE;
    L_8C0820BE:;
    if ((((*(int *)(((*(int *)((R10 + 0x0))) + 0x10))) & 0x200) == 0)) goto L_8C0820E0;
    goto L_8C0820C8;
    L_8C0820C8:;
    ndbPack(R4, R5, R6);
    return ndbBuildIndex();
    L_8C0820E0:;
    return R0;
    L_8C082050:;
    t40 = *(int *)((R10 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t40;
    t41 = *(int *)((t40 + 0x10));
    R7 = (t41);
    if (((0x10000 & t41) != 0)) goto L_8C082062;
    goto L_8C08205C;
    L_8C08205C:;
    R0 = (0x400);
    if (((0x400 & R7) == 0)) goto L_8C0820BE;
    goto L_8C082062;
    L_8C082062:;
    if (((int)R6 >= (int)0xFDE)) goto L_8C0820BE;
    goto L_8C082068;
    L_8C082068:;
    t47 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (t47 + 0x1);
    if ((((t47 + 0x1) & 0x7) != 7)) goto L_8C08207C;
    goto L_8C082076;
    L_8C082076:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) + 0x1);
    goto L_8C08207C;
    L_8C08207C:;
    if ((((*(int *)((R4 + 0x0))) & R5) != R5)) goto L_8C08208A;
    goto L_8C082084;
    L_8C082084:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) + 0x20);
    goto L_8C08208A;
    L_8C081F90:;
    t53 = ndbKeyEqual(R13, R14);
    R0 = (t53);
    if ((t53 == 0)) goto L_8C081FDE;
    goto L_8C081F9A;
    L_8C081F9A:;
    t57 = *(signed char *)((R13 + 0x5));
    R0 = (t57);
    if (((*(signed char *)((R14 + 0x5))) != t57)) goto L_8C081FDE;
    goto L_8C081FA4;
    L_8C081FA4:;
    t61 = *(signed char *)((R13 + 0x6));
    R0 = (t61);
    if (((*(signed char *)((R14 + 0x6))) != t61)) goto L_8C081FDE;
    goto L_8C081FAE;
    L_8C081FAE:;
    t65 = *(signed char *)((R13 + 0x7));
    R0 = (t65);
    if (((*(signed char *)((R14 + 0x7))) != t65)) goto L_8C081FDE;
    goto L_8C081FB8;
    L_8C081FB8:;
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) - 1);
    R4 = ((R14 + 0x8));
    R5 = (R11);
    R6 = (R14);
    R9 = (R8);
    goto L_8C081FDA;
    L_8C081FDA:;
    if ((R5 != 0)) goto L_8C081FCA;
    goto L_8C081FDE;
    L_8C081FDE:;
    R11 = ((R11 - 1));
    R14 = ((R14 + 0x8));
    goto L_8C081FE2;
    L_8C081FCA:;
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(R6) = *(struct mvb8 *)(R4); }
    R4 = ((R4 + 0x8));
    R5 = ((R5 - 1));
    R6 = ((R6 + 0x8));
    goto L_8C081FDA;
}


void winTriPartsPut(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u11;
    register float u12;
    register float u22;
    register float u26;
    register float u29;
    register float u35;
    register float u37;
    register int t3;
    register int t13;
    register int t23;
    int stk[39];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if ((*(int *)(((int)stk + 16))) != 0) {
        *(unsigned int *)(((int)stk + 20)) = a4;
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 24)) = ((((unsigned char)(int)(f4 * 255.0f) << 16) << 8) | 0xFFFFFF);
        t1 = 0x8C0DE948;
        t2 = 0xFFFFFF;
        t4 = a4;
        for (;;) {
            t5 = *(int *)(((int)stk + 12));
            if ((int)t5 < (int)(*(int *)(((int)stk + 16)))) {
                t3 = (0x0 + (((int)stk + 4) + 0x18));
                t7 = t5;
                t8 = 0x0;
                t9 = 0x0;
                t10 = (0x0 + (((int)stk + 4) + 0x18));
                u11 = (f4 * 255.0f);
                for (;;) {
                    t1 = a7;
                    t2 = (t8 * 0x1C);
                    t2 = (t2 + (((int)stk + 4) + 0x18));
                    *(unsigned int *)(((int)stk + 4)) = t2;
                    u12 = *(float *)(((0x98 + ((int)stk + 4)) + 0x0));
                    if ((t1 != 1) && (t13 = (t1 == 1), t1 = a7, t1 != 3)) {
                        t2 = t4;
                        t2 = (t2 + 0xC);
                        t2 = (t2 + ((((t8 << 1) + t8) << 2) << 1));
                        *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((*(float *)((t2 + 0x0))) + u12);
                    } else {
                        t7 = t4;
                        t7 = (t7 + 0xC);
                        t1 = 0x3C;
                        t7 = (t7 + ((((t8 << 1) + t8) << 2) << 1));
                        t2 = (*(int *)(((int)stk + 4)));
                        u11 = (*(float *)(((*(int *)(((int)stk + 20))) + t1)));
                        u11 = (u11 - (*(float *)((t7 + 0x0))));
                        u11 = (u11 + u12);
                        *(float *)((t2 + 0x0)) = u11;
                    }
                    t1 = 0x4;
                    t2 = (t8 * 0x1C);
                    t2 = (t2 + (((int)stk + 4) + 0x18));
                    *(unsigned int *)(((int)stk + 4)) = t2;
                    u22 = *(float *)(((0x98 + ((int)stk + 4)) + t1));
                    t1 = a7;
                    if ((t1 != 2) && (t23 = (t1 == 2), t1 = a7, t1 != 3)) {
                        t2 = t4;
                        t2 = (t2 + 0xC);
                        t1 = 0x4;
                        u26 = u22;
                        u26 = u26 + (*(float *)(((((((t8 << 1) + t8) << 2) << 1) + t2) + t1))) * f5;
                        *(float *)(((*(int *)(((int)stk + 4))) + t1)) = u26;
                    } else {
                        t1 = 0x4;
                        t2 = (*(int *)(((int)stk + 4)));
                        u29 = u22;
                        u29 = u29 + ((-(*(float *)(((((((t8 << 1) + t8) << 2) << 1) + (t4 + 0xC)) + t1)))) + 90.0f) * f5;
                        *(float *)((t2 + t1)) = u29;
                    }
                    t1 = 0x8;
                    t2 = t4;
                    t2 = (t2 + 0xC);
                    t2 = (t2 + t9);
                    *(float *)((((t8 * 0x1C) + (((int)stk + 4) + 0x18)) + t1)) = (*(float *)(((0x98 + ((int)stk + 4)) + t1)));
                    t1 = 0x4;
                    u35 = *(float *)((t4 + t1));
                    t1 = 0xC;
                    u11 = (*(float *)((t2 + t1)));
                    t2 = t4;
                    t2 = (t2 + 0xC);
                    u11 = (u11 / u35);
                    t2 = (t2 + t9);
                    *(float *)((((t8 * 0x1C) + (((int)stk + 4) + 0x18)) + t1)) = u11;
                    t1 = 0x8;
                    u37 = *(float *)((t4 + t1));
                    t1 = 0x10;
                    u11 = (*(float *)((t2 + t1)));
                    u11 = (u11 / u37);
                    u11 = (-u11);
                    u11 = (u11 + 1.0f);
                    *(float *)((((t8 * 0x1C) + (((int)stk + 4) + 0x18)) + t1)) = u11;
                    t2 = (*(int *)(((int)stk + 24)));
                    *(unsigned int *)((((t8 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x14)) = t2;
                    t8 = (t8 + 0x1);
                    if ((*(int *)(((int)stk + 8))) != 0) {
                        *(unsigned int *)((t3 + 0x18)) = (*(int *)(((int)stk + 8)));
                    } else {
                        *(unsigned int *)((t10 + 0x18)) = 0x0;
                    }
                    t10 = (t10 + 0x1C);
                    t3 = (t3 + 0x1C);
                    t9 = (t9 + 0x18);
                    if ((int)t8 >= (int)0x3) {
                        break;
                    }
                }
                t1 = (nlDispStripTexOfsTrnsl(0x3, (((int)stk + 4) + 0x18), (*(int *)((t4 + 0x0)))));
                t2 = (*(int *)(((int)stk + 12)));
                t4 = (t4 + 0x54);
                t2 = (t2 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = t2;
                continue;
            }
            break;
        }
    }
}


int umpireExec(void)
{
    register int t0;
    register int t27;
    register int t32;
    register float t42;
    register int t47;
    register int t49;
    register int t15;
    register int t16;
    register int t40;
    register int t43;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 3) {
        return t0;
    }
    if (((*(int *)0x8C421F60) != 0) && ((t15 = *(int *)0x8C29B27C, t15 != 1) && (t16 = *(int *)0x8C29B27C, t16 != 3))) {
        return t16;
    }
    t27 = *(int *)0x8C37EA80;
    if ((t27 & 8) != 0) {
        return t27;
    }
    t32 = *(int *)0x8C1891E8;
    if ((int)t32 > (int)0x9) {
        return t27;
    }
    if ((*(int *)(((t32 << 2) + 0x8C1D0DF0))) == 0) {
        return 0x8C1D0DF0;
    }
    if (((*(int *)0x8C20D14C) == 0) && (t40 = *(int *)0x8C20D150, t40 == 3)) {
        return t40;
    }
    motionBackup(0x8C38A898);
    t42 = motionGetFrame(0x8C38A898);
    if (!(100.0f > t42) && (t43 = *(int *)0x8C38AE50, t43 == 1)) {
        motionSetSpeed(0x8C38A898, (1.0f + 1.0f));
    }
    t47 = motionIsEnd(0x8C38A898);
    if (t47 != 0) {
        t49 = *(int *)0x8C38AE50;
        if (t49 == 1) {
            *(unsigned int *)0x8C38AE50 = 0x2;
            motionSwitch(0x8C38A898, (*(int *)0x8C124E64), 0x0, (*(int *)0x8C2873D4), 1.0f);
            *(unsigned int *)0x8C38AE48 = 0x0;
        } else {
            if (t49 == 2) {
                *(unsigned int *)0x8C38AE50 = 0x0;
                motionSwitch(0x8C38A898, (*(int *)0x8C124E60), 0x0, (*(int *)0x8C2873D4), 0.0f);
                *(unsigned int *)0x8C38AE48 = 0x1;
            }
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        motionAdvanceSimple(0x8C38A898);
    }
    colliObjEntry(0x8C38AE58);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C38AE38), (*(float *)0x8C38AE3C), (*(float *)0x8C38AE40));
    nlRotateAY((*(short *)0x8C38AE44));
    umpirePose(0x8C38A894);
    return nlPopMatrix(0x1);
}

int stageLoadTimedStep(void)
{
    int t2;
    int t22;
    int t28;
    int t36;
    int t40;
    int t43;
    int t47;
    int t49;
    int t54;
    int stk[21];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    L_8C0B242A:;
    *(unsigned int *)((((((*(int *)0x8C343FF8) << 2) << 1) + 0x8C344088) + 0x0)) = (*(int *)0x8C34B140);
    t2 = *(int *)0x8C343FF8;
    *(unsigned int *)(((0x8C344088 + ((t2 << 2) << 1)) + 0x4)) = (*(int *)0x8C343FF4);
    *(unsigned int *)0x8C343FF8 = ((*(int *)0x8C343FF8) + 0x1);
    R13 = (0x8C287C50);
    R14 = (0x8C343FE8);
    R4 = ((0x8C344088 + ((t2 << 2) << 1)));
    if ((((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 5) == 0)) goto L_8C0B246E;
    goto L_8C0B2466;
    L_8C0B2466:;
    *(unsigned int *)0x8C3449E8 = (*(int *)0x8C20D198);
    goto L_8C0B246E;
    L_8C0B246E:;
    R11 = (0x8C421F60);
    R12 = (0x0);
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_8C0B24E8;
    goto L_8C0B2478;
    L_8C0B2478:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    *(unsigned int *)0x8C34A1EC = R12;
    if (((*(int *)((R11 + 0x0))) == 0)) goto L_8C0B248C;
    goto L_8C0B2488;
    L_8C0B2488:;
    goto L_8C0B259C;
    L_8C0B259C:;
    *(unsigned int *)0x8C344084 = (*(int *)((R14 + 0xC)));
    return (*(int *)((R14 + 0x0)));
    L_8C0B248C:;
    sndStagePackLoad(0x0);
    goto L_8C0B259C;
    L_8C0B24E8:;
    t22 = *(int *)((R14 + 0xC));
    R0 = (t22);
    if ((t22 != 1)) goto L_8C0B2520;
    goto L_8C0B24EE;
    L_8C0B24EE:;
    *(unsigned int *)((R13 + 0x0)) = 0x1F4;
    if (((*(int *)((R11 + 0x0))) != 0)) goto L_8C0B2502;
    goto L_8C0B24F8;
    L_8C0B24F8:;
    t28 = (sndStagePackLoad(0x1)) != 99;
    if (t28) goto L_8C0B259C;
    goto L_8C0B2502;
    L_8C0B2502:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    if (((*(int *)((R11 + 0x0))) == 0)) goto L_8C0B2512;
    goto L_8C0B250E;
    L_8C0B250E:;
    *(unsigned int *)((R13 + 0x0)) = R12;
    goto L_8C0B2516;
    L_8C0B2516:;
    sndFxReset();
    goto L_8C0B259C;
    L_8C0B2512:;
    *(unsigned int *)((R13 + 0x0)) = 0x1F4;
    goto L_8C0B2516;
    L_8C0B2520:;
    if ((R0 != 2)) goto L_8C0B2532;
    goto L_8C0B2524;
    L_8C0B2524:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    *(unsigned int *)((R14 + 0x18)) = ((*(int *)((R14 + 0x18))) + 0x1);
    goto L_8C0B259C;
    L_8C0B2532:;
    t36 = *(int *)((R14 + 0xC));
    R0 = (t36);
    if ((t36 != 3)) goto L_8C0B2546;
    goto L_8C0B2538;
    L_8C0B2538:;
    t40 = (stagePolyLoad()) == 1;
    if (t40) goto L_8C0B257A;
    goto L_8C0B2542;
    L_8C0B2542:;
    goto L_8C0B259C;
    L_8C0B257A:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    goto L_8C0B259C;
    L_8C0B2546:;
    if ((R0 == 4)) goto L_8C0B257A;
    goto L_8C0B254A;
    L_8C0B254A:;
    t43 = *(int *)((R14 + 0xC));
    R0 = (t43);
    if ((t43 != 5)) goto L_8C0B255E;
    goto L_8C0B2550;
    L_8C0B2550:;
    t47 = (kyakuPolyLoad()) != 1;
    if (t47) goto L_8C0B259C;
    goto L_8C0B255A;
    L_8C0B255A:;
    goto L_8C0B257A;
    L_8C0B255E:;
    if ((R0 == 6)) goto L_8C0B257A;
    goto L_8C0B2562;
    L_8C0B2562:;
    t49 = *(int *)((R14 + 0xC));
    R0 = (t49);
    if ((t49 != 7)) goto L_8C0B2570;
    goto L_8C0B2568;
    L_8C0B2568:;
    stageCrowdTexLoad();
    goto L_8C0B257A;
    L_8C0B2570:;
    if ((R0 == 8)) goto L_8C0B257A;
    goto L_8C0B2574;
    L_8C0B2574:;
    t54 = *(int *)((R14 + 0xC));
    R0 = (t54);
    if ((t54 != 9)) goto L_8C0B2582;
    goto L_8C0B257A;
    L_8C0B2582:;
    if ((R0 != 10)) goto L_8C0B259C;
    goto L_8C0B2586;
    L_8C0B2586:;
    *(unsigned int *)((R14 + 0xC)) = ((*(int *)((R14 + 0xC))) + 0x1);
    *(unsigned int *)((R13 + 0x0)) = 0xA;
    *(unsigned int *)((R14 + 0x0)) = 0x1;
    *(unsigned int *)((R14 + 0x18)) = 0x3E8;
    *(unsigned int *)0x8C301970 = R12;
    goto L_8C0B259C;
}

int staffLookAtBall(int a4, int a5, int a6, int a7)
{
    register int t11;
    register int t15;
    register int t17;
    register int t18;
    register int t26;
    register int t33;
    register int t34;
    register int t39;
    register int t40;
    register int t41;
    register int t50;
    register int t45;
    register int t43;
    register int t56;
    register int t21;
    register int t22;
    register int t27;
    register int t28;
    register int t35;
    int stk[18];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 8)) = 0x8C291F24;
    mtxGetWorldPos(a4, a5, a6, a7, (((int)stk + 8) + 0x24));
    nlSubVector3op((((int)stk + 8) + 0x18), ((*(int *)(((int)stk + 8))) + 0xC), (((int)stk + 8) + 0x24));
    *(unsigned int *)(((int)stk + 8)) = (unsigned short)(*(int *)(((int)stk + 12)));
    nlPushUnitMatrix();
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    nlCalcPoint((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    nlPopMatrix(0x1);
    t11 = nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28))));
    if ((*(int *)0x8C287C60) != 0) {
        t56 = (*(int *)((a5 + 0x0)));
    } else {
        t15 = (unsigned short)t11;
        if (((int)(unsigned short)t11 > (int)0x3000) && ((int)(unsigned short)t11 < (int)0x8000)) {
            t15 = 0x3000;
        }
        t17 = t15;
        if (((int)t15 > (int)0x8000) && ((int)t15 < (int)0xD000)) {
            t17 = 0xD000;
        }
        t18 = t17;
        if (t17 == 0x8000) {
            t18 = 0x0;
        }
        t26 = 0x0;
        if (((*(int *)(((int)stk + 16))) != 0) && ((t21 = *(int *)0x8C287B2C, (int)t21 >= (int)0xB) || (t22 = *(int *)0x8C287B2C, (int)t22 <= 0))) {
            t26 = t18;
        }
        t33 = 0x0;
        if (((int)t26 >= 0) && (((int)t26 <= (int)0x4000) && ((t27 = *(int *)((a5 + 0x0)), (int)t27 >= (int)0xC000) && (t28 = *(int *)((a5 + 0x0)), (int)t28 <= (int)0xFFFF)))) {
            t33 = 0x10000;
        }
        t34 = *(int *)((a5 + 0x0));
        *(unsigned int *)(((int)stk + 8)) = t34;
        t39 = 0x0;
        if (((int)t34 >= 0) && ((t35 = *(int *)(((int)stk + 8)), (int)t35 <= (int)0x4000) && (((int)t26 >= (int)0xC000) && ((int)t26 <= (int)0xFFFF)))) {
            t39 = 0x10000;
        }
        t40 = *(int *)((a5 + 0x0));
        t41 = (-(((t26 - t40) + t33) - t39));
        if ((int)(((t26 - t40) + t33) - t39) >= 0) {
            t41 = (((t26 - t40) + t33) - t39);
        }
        t50 = t26;
        if ((int)t41 > (int)0x300) {
            t45 = 0x1;
            if ((int)(((t26 - t40) + t33) - t39) > 0) {
            } else {
                t43 = 0x0;
                if ((int)(((t26 - t40) + t33) - t39) < 0) {
                    t43 = 0xFFFFFFFF;
                }
                t45 = t43;
            }
            t50 = ((((t45 << 1) + t45) << 8) + (*(int *)((a5 + 0x0))));
        }
        *(unsigned int *)((a5 + 0x0)) = (unsigned short)t50;
        t56 = t50;
    }
    return (nlRotateAY(t56));
}


int selCursorInit(int a4)
{
    int t0;
    int t47;
    int t35;
    int t36;
    int t13;
    int t18;
    int t19;
    int t43;
    int t44;
    int t27;
    int t28;
    int stk[12];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 8)) = *(struct mv4 *)(0x8C110D3C); }
    t0 = *(int *)0x8C287D5C;
    t47 = t0;
    if (t0 == 2) {
    } else {
        if ((*(int *)0x8C287ADC) == 2) {
            if ((*(int *)0x8C343ADC) != 0) {
                *(unsigned int *)0x8C343AE8 = 0x1;
                *(unsigned int *)((0x8C343AEC + (a4 << 2))) = 0x3;
            } else {
                *(unsigned int *)0x8C343ADC = 0x1;
                *(unsigned int *)((0x8C343AEC + (a4 << 2))) = 0x0;
            }
            *(unsigned int *)((0x8C185428 + (a4 << 2))) = 0xFFFFFFFF;
            t43 = 0x8C343ADC;
            t44 = 0x8C343AEC;
        } else {
            *(unsigned int *)(((a4 << 2) + 0x8C343B0C)) = 0xFFFFFFFF;
            t35 = 0x8C343258;
            t36 = 0x8C343AEC;
            if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((a4 << 1) + 0x8C185298)))) != 0) {
                if ((int)(*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C))) > 0) {
                    t13 = *(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C));
                    *(unsigned int *)((((a4 << 2) + 0x8C343AEC) + 0x0)) = t13;
                    *(unsigned int *)((0x8C343ADC + (t13 << 2))) = 0x5;
                    *(unsigned int *)((((*(int *)((((a4 << 2) + 0x8C343AEC) + 0x0))) << 2) + 0x8C185438)) = a4;
                    t27 = 0x8C343258;
                    t28 = ((a4 << 2) + 0x8C343AEC);
                } else {
                    *(unsigned int *)((0x8C343AEC + (a4 << 2))) = 0x0;
                    for (;;) {
                        if ((*(int *)((0x8C343ADC + ((*(int *)((((a4 << 2) + 0x8C343AEC) + 0x0))) << 2)))) == 0) {
                            break;
                        }
                        t18 = *(int *)((((a4 << 2) + 0x8C343AEC) + 0x0));
                        t19 = ((~(((~(t18 + 0x1)) + 0x1) & 0x3)) + 0x1);
                        if ((int)(t18 + 0x1) >= 0) {
                            t19 = ((t18 + 0x1) & 0x3);
                        }
                        *(unsigned int *)((((a4 << 2) + 0x8C343AEC) + 0x0)) = t19;
                    }
                    *(unsigned int *)(((0x8C343AFC + (a4 << 2)) + 0x0)) = (*(int *)(((0x8C343AEC + (a4 << 2)) + 0x0)));
                    *(unsigned int *)((0x8C185428 + (a4 << 2))) = 0xFFFFFFFF;
                    *(unsigned int *)((0x8C343ADC + ((*(int *)(((0x8C343AEC + (a4 << 2)) + 0x0))) << 2))) = 0x1;
                    t27 = (0x8C343AEC + (a4 << 2));
                    t28 = (0x8C343AEC + (a4 << 2));
                }
                t35 = t27;
                t36 = t28;
            }
            t43 = t35;
            t44 = t36;
        }
        t47 = (selCursorPos(a4, t43, t44, 0xFFFFFFFF, (0x8C343B1C + (((a4 << 1) + a4) << 2))));
    }
    return t47;
}


int advInit(void)
{
    int t2;
    int t7;

    *(unsigned int *)0x8C295DDC = 0x0;
    *(unsigned int *)0x8C295DE0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C295DE8 = 0x0;
    *(unsigned int *)0x8C295DF4 = 0x0;
    *(unsigned int *)0x8C29B28C = 0x1;
    *(unsigned int *)0x8C185408 = 0x2;
    lightStagePreset();
    *(unsigned int *)0x8C287D5C = 0x0;
    *(unsigned int *)0x8C34B4F0 = 0x0;
    strmVoiceVolRestore();
    t2 = *(int *)0x8C29B27C;
    if (t2 != 0) {
        t7 = t2;
        if (t2 != 1) {
        } else {
            strmBgmPlay((*(int *)((((*(int *)0x8C287C58) << 2) + 0x8C158854))));
            *(unsigned int *)0x8C295DF0 = 0xB;
            *(unsigned int *)0x8C3432A4 = 0x1;
            *(unsigned int *)0x8C34326C = 0x1;
            *(unsigned int *)0x8C343314 = 0x1;
            *(unsigned int *)0x8C3432DC = 0x1;
            *(unsigned int *)0x8C287ADC = (((0x1 & (*(int *)0x8C287C58)) << 1) + 0x2);
            t7 = 0x78;
        }
        return t7;
    }
    strmBgmPlay(0x1);
    *(unsigned int *)0x8C295DDC = ((*(int *)0x8C295DDC) | 0x20);
    *(unsigned int *)0x8C295DF4 = 0x0;
    *(unsigned int *)0x8C295DF0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C295DEC = (int)((*(float *)0x8C02DFEC) / (*(float *)0x8C23D204));
    motionSet(0x8C29B294, 0x34DC, 0x0, 0x7D374, 0x8C158834, ((*(int *)0x8C2873E0)), (*(float *)0x8C23D204));
    motionRootFirst(0x8C29B294, 0x0, 0x0, 0x0, 0x8C29B838);
    motionSet(0x8C29B474, 0x69D8, 0x0, 0x7D374, 0x8C15883C, ((*(int *)0x8C2873E0)), (*(float *)0x8C23D204));
    motionRootFirst(0x8C29B474, 0x0, 0x0, 0x0, 0x8C29B844);
    motionSet(0x8C29B654, 0x53D80, 0x0, 0x7D324, 0x0, ((*(int *)0x8C2873E0)), (*(float *)0x8C23D204));
    *(float *)0x8C287C40 = 0.0f;
    *(float *)0x8C287C48 = 1.0f;
    *(unsigned int *)0x8C3432A4 = 0x0;
    *(unsigned int *)0x8C34326C = 0x0;
    *(unsigned int *)0x8C287ADC = 0x2;
    umpCheerTimed(0xE10);
    return nlsndSeqRequest(0x503A9);
}


