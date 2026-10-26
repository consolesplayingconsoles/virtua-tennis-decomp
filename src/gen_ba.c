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
int primTexVertexSet(int, int, int, int, int, float, float);
int primVertexSet(int, int, int, int, int);
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
int vecAdd(int, int, int, int, int);
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

void bodyGroundFriction(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    float u9;
    float u10;
    float u20;
    int t49;
    int t50;
    int t3;
    int t4;
    float u7;
    float u8;
    int t27;
    int t28;
    int t30;
    float u31;
    float u32;
    int t48;
    int stk[40];

    stk[28] = a8;
    stk[29] = a9;
    stk[30] = a10;
    stk[31] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x18)) = *(struct mv3 *)(0x8C1016D4); }
    t0 = (((int)stk + 32) + 0x18);
    t1 = 0x8C1016D4;
    t2 = a4;
    t5 = 0x0;
    t6 = 0x0;
    u9 = f4;
    u10 = f5;
    for (;;) {
        if ((int)t6 >= (int)(*(int *)((a4 + 0x30C)))) {
            break;
        }
        t1 = t6;
        t0 = a4;
        u10 = f4;
        t0 = (t0 + 0xC);
        u8 = 0.0f;
        *(unsigned int *)(((int)stk + 36)) = ((((t6 << 1) + t1) << 2) + t0);
        u9 = (*(float *)((((((t6 << 1) + t1) << 2) + t0) + 0x4)));
        u10 = (u10 - u9);
        if (!(u8 > u10)) {
            u8 = u10;
        } else {
            u8 = (-f4);
            u8 = (u8 + u9);
        }
        u7 = (*(float *)((a4 + 0x310)));
        if (u7 > u8) {
            t4 = t6;
            t4 = (t4 << 1);
            t4 = (t4 + t6);
            t4 = (t4 << 2);
            *(unsigned int *)(((int)stk + 40)) = t4;
            t3 = a4;
            t1 = 0x8C015EEA;
            t4 = (t4 + (0x18C + a4));
            t3 = (t3 + 0xC);
            u9 = (*(float *)((t4 + 0x0)));
            u10 = 0.0f;
            t3 = (t3 + (*(int *)(((int)stk + 40))));
            u8 = (*(float *)((t3 + 0x8)));
            u20 = ((*(float *)((t4 + 0x8))) - u8);
            u8 = (*(float *)((t3 + 0x0)));
            u9 = (u9 - u8);
            vecMake(t2, a5, a6, a7, (((int)stk + 32) + 0xC), u9, u10, u20);
            u8 = (*(float *)(((((int)stk + 32) + 0xC) + 0x0)));
            u7 = (*(float *)(((int)stk + 56)));
            t5 = (t5 + 0x1);
            u7 = (u7 + u8);
            *(float *)(((int)stk + 56)) = u7;
            u8 = (*(float *)(((((int)stk + 32) + 0xC) + 0x8)));
            u7 = (*(float *)(((int)stk + 64)));
            u7 = (u7 + u8);
            *(float *)(((int)stk + 64)) = u7;
        } else {
            t27 = t0;
            t28 = t1;
            t30 = t2;
            u31 = u9;
            u32 = u10;
        }
        u9 = u31;
        u10 = u32;
        t0 = t27;
        t6 = (t6 + 0x1);
        t1 = t28;
        t2 = t30;
    }
    if (t5 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        vecDiv(t2, a5, a6, a7, (((int)stk + 20) + 0x24), (float)t5, u10);
    }
    nlScaleVector(a4, a4, (*(float *)((a4 + 0x314))));
    nlAddVector((((int)stk + 32) + 0x18), a4);
    *(float *)((a4 + 0x4)) = 0.0f;
    t49 = t5;
    t50 = 0x0;
    for (;;) {
        if ((int)t50 >= (int)(*(int *)((a4 + 0x30C)))) {
            break;
        }
        t49 = t50;
        t48 = 0x18C;
        t49 = (t49 << 1);
        t49 = (t49 + t50);
        t48 = (t48 + a4);
        t49 = (t49 << 2);
        t48 = (t48 + t49);
        *(unsigned int *)(((int)stk + 32)) = t48;
        t48 = ((int)stk + 20);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t48) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        t48 = ((int)stk + 8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t48) = *(struct mv3 *)(((a4 + 0xC) + t49)); }
        vecAdd(0x0, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 32)))));
        t48 = (*(int *)(((int)stk + 32)));
        t50 = (t50 + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 32) + 0x50) + 0x0)))) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
}

void winTriPartsPut(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    float u11;
    float u12;
    float u22;
    float u26;
    float u29;
    float u35;
    float u37;
    int t3;
    int t13;
    int t23;
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

int markerDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t18;
    int t7;
    int t13;
    float u14;
    float u35;
    int t38;
    int t66;
    int t56;
    int t44;
    int t28;
    int stk[20];

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    t18 = a4;
                    if (a4 != 4) {
                    } else {
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - 59.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - 9.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) + 83.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 6.0f);
                        *(float *)0x8C33EF54 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                        *(float *)0x8C33EF58 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EF5C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        t7 = ((int (*)(int, int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33EF50, a7, f4);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - 44.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 19.0f);
                        *(float *)0x8C33EFA4 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                        *(float *)0x8C33EFA8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EFAC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        t13 = ((int (*)(int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33EFA0, f4);
                        u14 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (u14 + 92.0f);
                        *(float *)0x8C33EFF4 = (u14 + 92.0f);
                        *(float *)0x8C33EFF8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EFFC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        t18 = (((int (*)(int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33EFF0, f4));
                    }
                    t28 = t18;
                } else {
                    *(float *)0x8C33E824 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                    *(float *)0x8C33E828 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                    *(float *)0x8C33E82C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                    t28 = (((int (*)(int, int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33E820, a7, f4));
                }
                t44 = t28;
            } else {
                *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - 7.0f);
                u35 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
                *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (u35 + 5.0f);
                *(float *)0x8C33E8C4 = (u35 + 5.0f);
                *(float *)0x8C33E8C8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                *(float *)0x8C33E8CC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                t38 = ((int (*)(int, int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33E8C0, a7, f4);
                *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 19.0f);
                *(float *)0x8C33E914 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                *(float *)0x8C33E918 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                *(float *)0x8C33E91C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                t44 = (((int (*)(int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33E910, f4));
            }
            t56 = t44;
        } else {
            *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - (1.0f + 1.0f));
            *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + (1.0f + 1.0f));
            *(float *)0x8C33E964 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
            *(float *)0x8C33E968 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
            *(float *)0x8C33E96C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
            t56 = (((int (*)(int, int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33E960, a7, f4));
        }
        t66 = t56;
    } else {
        *(float *)0x8C33E874 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
        *(float *)0x8C33E878 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
        *(float *)0x8C33E87C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
        t66 = (((int (*)(int, int, int, int, float))(fadeQuadDrawB))(0x100, 0x100, 0x8C33E870, a7, f4));
    }
    return t66;
}

int umpireExec(void)
{
    int t0;
    int t27;
    int t32;
    float t42;
    int t47;
    int t49;
    int t15;
    int t16;
    int t40;
    int t43;

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
    int t11;
    int t15;
    int t17;
    int t18;
    int t26;
    int t33;
    int t34;
    int t39;
    int t40;
    int t41;
    int t50;
    int t45;
    int t43;
    int t56;
    int t21;
    int t22;
    int t27;
    int t28;
    int t35;
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

int resultBoxDraw(int a4, int a5, int a6, int a7)
{
    int t21;
    int t28;
    int t35;
    int t42;
    int stk[37];

    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x10);
    vecMake(a4, a5, a6, a7, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -85.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 20) + 0x10) + 0x10);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -146.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 20) + 0x10) + 0x20);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -85.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x10) + 0x30);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -146.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x30));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10));
    t21 = *(int *)(((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 108.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (t21));
    t28 = *(int *)(((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 169.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (t28));
    t35 = *(int *)(((int)stk + 32));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 108.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (t35));
    t42 = *(int *)(((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 169.0f), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (t42));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}


int kmiWriteFBRegister(Stk29 s)
{
    int t9;
    int t10;
    int t11;
    int stk[40];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    stk[7] = s.w[4];
    stk[8] = s.w[5];
    stk[9] = s.w[6];
    stk[10] = s.w[7];
    stk[11] = s.w[8];
    stk[12] = s.w[9];
    stk[13] = s.w[10];
    stk[14] = s.w[11];
    stk[15] = s.w[12];
    stk[16] = s.w[13];
    stk[17] = s.w[14];
    stk[18] = s.w[15];
    stk[19] = s.w[16];
    stk[20] = s.w[17];
    stk[21] = s.w[18];
    stk[22] = s.w[19];
    stk[23] = s.w[20];
    stk[24] = s.w[21];
    stk[25] = s.w[22];
    stk[26] = s.w[23];
    stk[27] = s.w[24];
    stk[28] = s.w[25];
    stk[29] = s.w[26];
    stk[30] = s.w[27];
    stk[31] = s.w[28];
    *(unsigned int *)0x8C45EE38 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x58))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x54))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE3C = (((*(int *)(((((int)stk + 4) + 0x8) + 0x60))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x5C))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE40 = ((((*(int *)(((((int)stk + 4) + 0x8) + 0x48))) & 0xF) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x4C))) & 0x1F) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x50))) & 0xF) << 8) << 1));
    *(unsigned int *)0x8C45EEAC = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(unsigned int *)0x8C45EEB0 = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)(*(int *)0x8C45EEA8) > 0) {
        *(unsigned int *)0x8C45EE44 = (((t10 & 0x3FF) | ((((t11 - (*(int *)0x8C45EEA8)) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        *(unsigned int *)0x8C45EE44 = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    *(unsigned int *)0x8C45EE80 = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    *(unsigned int *)0x8C45EE84 = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    *(unsigned int *)0x8C45EE48 = ((*(int *)(((((int)stk + 4) + 0x8) + 0x44))) & 0x1FF);
    *(unsigned int *)0x8C45EE50 = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    *(unsigned int *)0x8C45EE4C = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & (*(int *)(((((int)stk + 4) + 0x8) + 0x40)))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & (*(int *)(((((int)stk + 4) + 0x8) + 0x68)))) << 16)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x64))) & 0x1) << 22)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x6C))) & 0x1) << 23));
    return 0x6C;
}

void crowdAnimModel(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t38;
    int t56;
    int t60;
    int t61;
    int t2;
    int t8;
    float u10;
    float u11;
    int t42;
    int t45;
    int t46;
    int t47;
    int t48;
    float u49;
    float u50;
    int stk[19];

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        *(unsigned int *)0x8C32DCC8 = 0x0;
        *(unsigned int *)0x8C182668 = 0x5;
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        t1 = 0x8C08CF54;
        t3 = 0x8C182668;
        t4 = a4;
        t5 = a5;
        t6 = a6;
        t7 = a7;
        t9 = (a4 + 0x18);
        for (;;) {
            if ((int)(*(int *)((t9 + 0x0))) < 0) {
                t2 = (*(int *)0x8C32DCC8);
                t9 = (t9 + 0x50);
                t2 = (t2 + 0x1);
                *(unsigned int *)0x8C32DCC8 = t2;
                t3 = (*(int *)(((int)stk + 36)));
                t2 = 0x8C182664;
                t1 = (*(int *)((t2 + 0x0)));
                t8 = (t3 * 0x1C);
                if (t1 == 1) {
                    t4 = t8;
                    t3 = 0x8;
                    t4 = (t4 + ((a5 * 0x460) + 0x8C3020C8));
                    t3 = (t3 + t4);
                    t1 = 0x4;
                    u11 = (*(float *)((t3 + 0x0)));
                    u10 = (*(float *)((t4 + t1)));
                    u10 = (u10 + u11);
                    *(float *)((t4 + t1)) = u10;
                } else {
                    t4 = t8;
                    t3 = 0x8;
                    t4 = (t4 + ((a5 * 0x460) + 0x8C3020C8));
                    t3 = (t3 + t4);
                    u11 = (*(float *)((t3 + 0x0)));
                    t1 = 0x4;
                    u10 = (*(float *)((t4 + t1)));
                    u11 = (u11 / 16.0f);
                    u10 = (u10 + u11);
                    *(float *)((t4 + t1)) = u10;
                }
                t2 = 0x8C182668;
                t1 = 0x4;
                t3 = (*(int *)((t2 + 0x0)));
                u10 = (*(float *)(((t8 + ((a5 * 0x460) + 0x8C3020C8)) + t1)));
                u11 = (float)t3;
                if (u10 > u11) {
                    t4 = t8;
                    t4 = (t4 + ((a5 * 0x460) + 0x8C3020C8));
                    t3 = (*(int *)((t4 + 0xC)));
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((t4 + 0xC)) = t3;
                    u10 = (*(float *)((t4 + t1)));
                    u11 = (float)(*(int *)((t2 + 0x0)));
                    u10 = (u10 - u11);
                    *(float *)((t4 + t1)) = u10;
                }
                t3 = (*(int *)(((t8 + ((a5 * 0x460) + 0x8C3020C8)) + 0xC)));
                if ((int)t3 > (int)0x8) {
                    t2 = t8;
                    t2 = (t2 + ((a5 * 0x460) + 0x8C3020C8));
                    *(unsigned int *)((t2 + 0xC)) = 0x1;
                }
                t3 = (*(int *)(((t8 + ((a5 * 0x460) + 0x8C3020C8)) + 0x14)));
                t38 = ((int)t3 >= 0);
                t3 = (t3 - 1);
                *(unsigned int *)(((t8 + ((a5 * 0x460) + 0x8C3020C8)) + 0x14)) = t3;
                if (!t38) {
                    t3 = t9;
                    t3 = (t3 - 48);
                    t1 = 0x1C;
                    t8 = (t8 + ((a5 * 0x460) + 0x8C3020C8));
                    t3 = t8;
                    t2 = ((int)stk + 4);
                    { struct mv7 { int w[7]; }; *(struct mv7 *)(t2) = *(struct mv7 *)(t3); }
                    t1 = (crowdFrameTcw());
                    *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = t1;
                } else {
                    t42 = t2;
                    t45 = t4;
                    t46 = t5;
                    t47 = t6;
                    t48 = t7;
                    u49 = u10;
                    u50 = u11;
                }
                u10 = u49;
                u11 = u50;
                t2 = t42;
                t3 = (*(int *)(((int)stk + 36)));
                t4 = t45;
                t5 = t46;
                t6 = t47;
                t7 = t48;
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 36)) = t3;
            }
            t56 = *(int *)((t9 + 0x0));
            if ((int)t56 > 0) {
                t2 = (*(int *)((t9 + 0x0)));
                t9 = (t9 + 0x4);
                if ((t2 & 0x8) != 0) {
                    t5 = 0x3;
                } else {
                    t5 = 0x1;
                }
                t60 = *(int *)((t9 + 0x0));
                t9 = (t9 + 0x4);
                t7 = t60;
                t6 = 0x0;
                t61 = t56;
                for (;;) {
                    if ((int)t6 >= (int)t7) {
                        break;
                    }
                    t4 = 0x0;
                    if ((int)t5 > 0) {
                        for (;;) {
                            t61 = (*(int *)((t9 + 0x0)));
                            t4 = (t4 + 0x1);
                            if ((t61 & 0x1) != 0) {
                                t9 = (t9 + 0x20);
                            } else {
                                t9 = (t9 + 0x8);
                            }
                            if ((int)t4 >= (int)t5) {
                                break;
                            }
                        }
                    }
                    t6 = (t6 + 0x1);
                }
            }
            t3 = (*(int *)((t9 + 0x0)));
            if (t3 != 0) continue;
            break;
        }
    }
}

void strmCallScore(int a4, int a5, int a6, int a7)
{
    int t1;
    int t10;
    int t13;
    int t16;
    int t14;
    int t15;
    int t20;
    int t23;
    int t21;
    int t22;
    int t52;
    int t29;
    int t33;
    int t37;
    int t41;
    int t45;
    int t49;
    int t68;
    int t64;
    int t60;
    int t56;

    t1 = *(int *)0x8C287C64;
    if ((*(int *)0x8C287B00) == t1) {
        return;
    }
    if ((*(int *)0x8C287B04) == t1) {
        return;
    }
    if ((*(int *)0x8C1D476C) == 1) {
        *(unsigned int *)0x8C1D476C = 0x0;
        return;
    }
    t10 = *(int *)0x8C1891E8;
    if ((a6 + a7) == 1) {
        t64 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x0)));
    } else {
        if ((int)a6 > (int)a7) {
            t13 = *(int *)0x8C2889DC;
            t16 = 0x0;
            if ((int)0x2 < (int)a6) {
                t14 = 0x0;
                t15 = 0x2;
                for (;;) {
                    t14 = (t14 + t15);
                    t15 = (t15 + 0x1);
                    if ((int)t15 >= (int)a6) {
                        break;
                    }
                }
                t16 = t14;
            }
            t60 = (((*(int *)((((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + (t13 << 2)) + 0x1C))) + a7) + t16);
        } else {
            if ((int)a7 > (int)a6) {
                t20 = *(int *)0x8C289754;
                t23 = 0x0;
                if ((int)0x2 < (int)a7) {
                    t21 = 0x0;
                    t22 = 0x2;
                    for (;;) {
                        t21 = (t21 + t22);
                        t22 = (t22 + 0x1);
                        if ((int)t22 >= (int)a7) {
                            break;
                        }
                    }
                    t23 = t21;
                }
                t56 = (((*(int *)((((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + (t20 << 2)) + 0x1C))) + a6) + t23);
            } else {
                t52 = 0x8C287D84;
                if (a7 == a6) {
                    t29 = 0x8C287D84;
                    if (a6 == 1) {
                        t29 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x4)));
                    }
                    t33 = t29;
                    if (a6 == 2) {
                        t33 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x8)));
                    }
                    t37 = t33;
                    if (a6 == 3) {
                        t37 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0xC)));
                    }
                    t41 = t37;
                    if (a6 == 4) {
                        t41 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x10)));
                    }
                    t45 = t41;
                    if (a6 == 5) {
                        t45 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x14)));
                    }
                    t49 = t45;
                    if (a6 == 6) {
                        t49 = (*(int *)(((((*(int *)((((t10 << 2) + 0x8C1D4770) + 0x0))) * 0x68) + 0x8C1D4908) + 0x18)));
                    }
                    t52 = t49;
                }
                t56 = t52;
            }
            t60 = t56;
        }
        t64 = t60;
    }
    t68 = ADXT_GetStat((*(int *)0x8C38BA98));
    if (t64 != -1) {
        if ((t68 != 5) && (t68 != 0)) {
            strmVoiceQueueAdd(t64);
    return;
        }
        strmVoicePlay(0x9, t64);
    return;
    }
}

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

int circuitDrawMatchIcon(void)
{
    int t0;
    int t42;
    int t2;
    int t4;
    int t6;
    int t8;
    float u12;
    int t15;
    int t18;
    int t21;
    int t24;
    int t27;
    int t29;
    int t33;
    float u38;
    int t10;
    int t36;
    int stk[22];

    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 4) + 0xC)) = *(struct mv16 *)(0x8C10AB40); }
    t0 = *(int *)0x8C2FBE48;
    t42 = t0;
    if (t0 == -1) {
    } else {
        *(unsigned int *)0x8C2FBE48 = ((int)((int)(t0 + 0x1) % (int)0x3C));
        t2 = *(int *)0x8C2FBE1C;
        t4 = *(int *)(((((((t2 << 2) + t2) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
        t6 = 0x0;
        if (((*(int *)((0x8C108E9C + ((((t4 << 2) << 2) + t4) << 2)))) & 1) != 0) {
            t6 = 0xFFFFFFE8;
        }
        t8 = *(int *)0x8C2FBE48;
        if ((int)t8 < (int)0x14) {
            t10 = t8;
        } else {
            t10 = (0x28 - t8);
        }
        u12 = ((float)t10 / 20.0f);
        if (0.0f > ((float)t10 / 20.0f)) {
            u12 = 0.0f;
        }
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0xC) + 0xC))) | (((int)(u12 * 64.0f) << 16) << 8));
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0xC) + 0x10);
        t15 = *(int *)0x8C2FBE48;
        t18 = (t15 - 30);
        if ((int)(t15 - 30) >= 0) {
        } else {
            t18 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x10) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x10) + 0xC))) | (((int)(((float)((-t18) + 0x1E) / 30.0f) * 64.0f) << 16) << 8));
        t21 = *(int *)0x8C2FBE48;
        *(unsigned int *)(((int)stk + 4)) = (t21 - 30);
        t24 = (t21 - 30);
        if ((int)(t21 - 30) >= 0) {
        } else {
            t24 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC))) | (((int)(((float)((-t24) + 0x1E) / 30.0f) * 64.0f) << 16) << 8));
        t27 = *(int *)(((int)stk + 8));
        *(float *)((t27 + 0x4)) = ((*(float *)((t27 + 0x4))) + (float)t6);
        t29 = *(int *)(((int)stk + 12));
        *(float *)((t29 + 0x4)) = ((*(float *)((t29 + 0x4))) + (float)t6);
        *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4)) = ((*(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4))) + (float)t6);
        *(float *)((((((int)stk + 4) + 0xC) + 0x30) + 0x4)) = ((*(float *)((((((int)stk + 4) + 0xC) + 0x30) + 0x4))) + (float)t6);
        t33 = *(int *)0x8C2FBE48;
        if ((int)t33 > (int)0x28) {
            t36 = (0x3C - t33);
        } else {
            t36 = (t33 - 20);
        }
        u38 = ((float)t36 / 20.0f);
        if (0.0f > ((float)t36 / 20.0f)) {
            u38 = 0.0f;
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x30) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x30) + 0xC))) | (((int)(u38 * 64.0f) << 16) << 8));
        t42 = (nlDispStripTrnsl(0x4, (((int)stk + 4) + 0xC)));
    }
    return t42;
}




