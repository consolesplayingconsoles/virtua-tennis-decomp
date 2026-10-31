/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
float cpuSglAimScore(int, int);
int cpuShotTargetSet(int, float, float);
int entryAnyAtRound5(void);
int entryCountJoined(void);
int entryGetColorId(int, Stk3);
int entryIsVersus(int, int, int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int lightUpdate(void);
int matchCheckTiebreak(int, int);
int menuTextMsgPut(int, Stk3, float);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlsndSeqRequest(int);
int playerInit(int, int);
int primTexVertexSet(int, int, int, int, int, float, float);
int selCharInfoDraw(int, int);
int selModelSpawn(int, int);
int set_event(int, int);
int sklDrawNodeOne(int);
int staffInitAll(void);
int staffLookAtBall(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
float cpuSglPickLv07(int a4, int a5, float f4, float f5);
void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5);
int matchSetupPlayers(void);
int sceneTwoPlayerSetup(int a4, int a5, int a6);
int menuItemTextPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int fadeQuadDraw(int a4, int a5, int a6, float f4, float f5);
int seFootSlide(int a4, int a5, int a6, float f4, float f5);
int umpirePose(int a4);
int netJudgePose(int a4);
int entryCharaSelDraw(void);
void ADXF_Ocbi(int a4, int a5);




int sceneTwoPlayerSetup(int a4, int a5, int a6)
{
    int t19;
    int t25;
    int t46;
    int t5;
    int t9;
    int stk[20];

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 20) + 0x8)) = *(struct mv4 *)(0x8C10DFBC); }
    if ((*(int *)0x8C287ADC) == 4) {
        if (((*(int *)0x8C34326C) != 0) && (t5 = *(int *)0x8C3432DC, t5 != 0)) {
            *(unsigned int *)0x8C185408 = 0x1;
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 20) + 0x4)) = 0x2;
        }
        if (((*(int *)0x8C3432A4) != 0) && (t9 = *(int *)0x8C343314, t9 != 0)) {
            *(unsigned int *)0x8C185408 = 0x2;
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x1;
            *(unsigned int *)((((int)stk + 20) + 0x4)) = 0x3;
        }
    } else {
        if ((*(int *)0x8C34326C) != 0) {
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x0;
        } else {
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x1;
        }
    }
    t19 = set_event(0x38, 0x8C08D78C);
    *(unsigned int *)((t19 + 0x20)) = 0x0;
    *(unsigned int *)((t19 + 0x24)) = 0x0;
    vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t19), 0.0f, 0.0f, -20.0f);
    *(unsigned short *)((t19 + 0x28)) = 0x0;
    if ((unsigned short)(*(short *)0x8C343262) == 1) {
        *(unsigned int *)((t19 + 0x2C)) = 0x0;
    } else {
        *(unsigned int *)((t19 + 0x2C)) = 0x1;
    }
    nlsndSeqRequest(0x503A9);
    matchSetupPlayers();
    t25 = *(int *)((((int)stk + 20) + 0x0));
    *(unsigned int *)((t19 + 0x30)) = ((t25 * 0xD78) + 0x8C287D84);
    playerInit(((t25 * 0xD78) + 0x8C287D84), (*(int *)((((int)stk + 20) + 0x0))));
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    *(unsigned int *)(((0xB5C + (*(int *)((t19 + 0x30)))) + 0x0)) = (*(int *)((((int)stk + 20) + 0x0)));
    *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xC58)) = 0x10;
    *(float *)(((*(int *)((t19 + 0x30))) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)((t19 + 0x30))) + 0xB18)) = 0.0f;
    *(unsigned short *)(((*(int *)((t19 + 0x30))) + 0xB10)) = 0x0;
    *(unsigned short *)(((*(int *)((t19 + 0x30))) + 0xB12)) = 0x0;
    *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xD4C)) = 0x0;
    vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x30)))), 0.0f, 0.0f, -20.0f);
    motionSet((*(int *)((t19 + 0x30))), 0x118E84, 0x1, 0x12755C, 0x8C157020, ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    if ((*(int *)0x8C287ADC) == 4) {
        vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x30)))), -4.0f, 0.0f, -20.0f);
        t46 = *(int *)(((((int)stk + 20) + 0x4) + 0x0));
        *(unsigned int *)((t19 + 0x34)) = ((t46 * 0xD78) + 0x8C287D84);
        playerInit(((t46 * 0xD78) + 0x8C287D84), (*(int *)(((((int)stk + 20) + 0x4) + 0x0))));
        *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xB5C)) = (*(int *)(((((int)stk + 20) + 0x4) + 0x0)));
        *(unsigned int *)(((*(int *)((t19 + 0x34))) + 0xC58)) = 0x11;
        *(unsigned short *)(((*(int *)((t19 + 0x34))) + 0xB10)) = 0x0;
        *(unsigned short *)(((*(int *)((t19 + 0x34))) + 0xB12)) = 0x0;
        *(float *)(((*(int *)((t19 + 0x34))) + 0xC90)) = 0.0f;
        *(float *)(((*(int *)((t19 + 0x34))) + 0xB18)) = 0.0f;
        *(unsigned int *)(((*(int *)((t19 + 0x34))) + 0xD4C)) = 0x0;
        vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x34)))), 4.0f, 0.0f, -20.0f);
        motionSet((*(int *)((t19 + 0x34))), 0x117244, 0x1, 0x12755C, 0x8C1570A4, ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    }
    *(unsigned int *)0x8C287C60 = 0x0;
    return (vecMake(0x0, 0x0, 0x0, 0x0, 0x8C32DDA4, 0.0f, 0.0f, 0.0f));
}


int fadeQuadDraw(int a4, int a5, int a6, float f4, float f5)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    int stk[101];

    u0 = *(float *)((a6 + 0x18));
    u1 = *(float *)((a6 + 0x20));
    u2 = ((float)a4 * (u1 - u0));
    u3 = *(float *)((a6 + 0x1C));
    u4 = *(float *)((a6 + 0x24));
    u5 = u0;
    u5 = u5 + f4 * (u1 - u0);
    vecMake(a4, a5, (0xFF & (int)(f5 * 255.0f)), 0xFF000000, (((int)stk + 124) + 0x3C), (((float)a4 * (u1 - u0)) + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 120) + 0x34), (*(float *)((a6 + 0x4))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x2C), (((float)a4 * (u1 - u0)) + (*(float *)((a6 + 0x4)))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x24), (*(float *)((a6 + 0x4))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 108) + 0x1C), ((f4 * u2) + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 104) + 0x14), ((f4 * u2) + (*(float *)((a6 + 0x4)))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 100) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 100) + 0x60), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 84) + 0x40)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f5 * 255.0f)) << 16) | ((0xFF & (int)(f5 * 255.0f)) << 8)) | (0xFF & (int)(f5 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x38 + (((int)stk + 100) + 0x60)), u5, ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f5 * 255.0f)) << 16) | ((0xFF & (int)(f5 * 255.0f)) << 8)) | (0xFF & (int)(f5 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x54 + (((int)stk + 100) + 0x60)), u5, ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x94 + ((int)stk + 36))); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x70 + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x8C + ((int)stk + 20))); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x8C + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x6, (((int)stk + 100) + 0x60), (*(int *)((a6 + 0x0)))));
}


int umpirePose(int a4)
{
    int t50;
    int t51;
    int t70;
    int t77;
    int t71;
    int t72;
    int t74;
    int t76;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D1070)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5B0))), (0x5B8 + a4), (*(int *)((a4 + 0x5B4))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    t50 = 0x0;
    t51 = (0x1E4 + a4);
    for (;;) {
        nlLoadMatrix(t51);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)((t50 + (*(int *)((0x8C1D0DF0 + ((*(int *)0x8C1891E8) << 2))))))));
        }
        t51 = (t51 + 0x40);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t50 = (t50 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)((0x1E4 + a4) + 0x3C0)) {
            break;
        }
    }
    t70 = *(int *)0x8C38B768;
    t77 = (nlPopMatrix(0x1));
    if (t70 != 0) {
        t71 = *(int *)(((int)stk + 8));
        t72 = t71;
        for (;;) {
            nlPushMatrix(0x0);
            t74 = *(int *)((t72 + 0x0));
            t72 = (t72 + 0x4);
            sklDrawNodeOne(t74);
            t76 = nlPopMatrix(0x1);
            if ((unsigned int)t72 >= (unsigned int)(t71 + 0x3C)) {
                break;
            }
        }
        t77 = t76;
    }
    return t77;
}

int netJudgePose(int a4)
{
    int t50;
    int t51;
    int t70;
    int t77;
    int t71;
    int t72;
    int t74;
    int t76;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D1070)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5B0))), (0x5B8 + a4), (*(int *)((a4 + 0x5B4))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    t50 = 0x0;
    t51 = (0x1E4 + a4);
    for (;;) {
        nlLoadMatrix(t51);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)((t50 + (*(int *)((0x8C1D0DF0 + ((*(int *)0x8C1891E8) << 2))))))));
        }
        t51 = (t51 + 0x40);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t50 = (t50 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)((0x1E4 + a4) + 0x3C0)) {
            break;
        }
    }
    t70 = *(int *)0x8C38B768;
    t77 = (nlPopMatrix(0x1));
    if (t70 != 0) {
        t71 = *(int *)(((int)stk + 8));
        t72 = t71;
        for (;;) {
            nlPushMatrix(0x0);
            t74 = *(int *)((t72 + 0x0));
            t72 = (t72 + 0x4);
            sklDrawNodeOne(t74);
            t76 = nlPopMatrix(0x1);
            if ((unsigned int)t72 >= (unsigned int)(t71 + 0x3C)) {
                break;
            }
        }
        t77 = t76;
    }
    return t77;
}


void ADXF_Ocbi(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1F19C4))(a4, a5);
    return;
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

float cpuSglPickLv07(int a4, int a5, float f4, float f5)
{
    int t0;
    float u1;
    float u2;
    float u5;
    float u7;
    float t9;
    float u10;
    float t12;
    float u13;
    int t15;
    int t16;
    int t17;
    float u18;
    int t19;
    int t24;
    int t25;
    int t26;
    float u27;
    int t31;
    int t50;
    float u58;
    float u59;
    float u64;
    float u67;
    float u72;
    float u108;
    float u92;
    int t23;
    int t36;
    int t37;
    float u39;
    int t77;
    int stk[14];

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(43.7324982f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(125.31749f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t9 = cpuSglAimScore(a4, a5);
            u10 = t9;
            if (18.0f > t9) {
                u10 = 18.0f;
            }
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t12 = nlRandom();
            u13 = (u10 / (1.0f + 1.0f));
            u13 = u13 + (u10 / (1.0f + 1.0f)) * t12;
            t15 = 0x8C2FCC6C;
            t16 = 0x0;
            t17 = a5;
            u18 = t12;
            for (;;) {
                t19 = (t17 == 0);
                t17 = (t17 - 1);
                if (t19) {
                    break;
                }
                u18 = (*(float *)((t15 + (0x1C))));
                t15 = (t15 + 0x20);
                if (!(u18 > u13)) {
                    t16 = (t16 + 0x1);
                }
            }
            *(unsigned int *)(((int)stk + 4)) = 0x8C2FCC6C;
            if ((int)a5 > 0) {
                t24 = t15;
                t25 = 0x8C2FCC6C;
                t26 = 0x0;
                u27 = (u10 / (1.0f + 1.0f));
                for (;;) {
                    if (!((*(float *)(((*(int *)(((int)stk + 4))) + 0x1C))) > u13)) {
                        t23 = 0x8C0F7BAC;
                        t31 = (int)((int)(nlRand()) % (int)t16);
                        if (t31 == 0) {
                            *(unsigned int *)(((int)stk + 8)) = t26;
                        }
                    } else {
                        t36 = t24;
                        t37 = t25;
                        u39 = u27;
                    }
                    u27 = u39;
                    t23 = (*(int *)(((int)stk + 4)));
                    t24 = t36;
                    t25 = t37;
                    t26 = (t26 + 0x1);
                    t23 = (t23 + 0x20);
                    *(unsigned int *)(((int)stk + 4)) = t23;
                    if ((int)t26 >= (int)a5) {
                        break;
                    }
                }
            }
            t50 = *(int *)(((int)stk + 8));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((unsigned char)(*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u58 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u59 = (-u58);
            if (!(0.0f > u58)) {
                u59 = u58;
            }
            u64 = (-1.0f);
            u64 = u64 + (1.0f + 1.0f) * (u59 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)))) / (*(float *)0x8C287B40)), u64);
            u67 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u67 = 1.0f;
            }
            u72 = u67;
            u72 = u72 + 0.5f * (((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) / 100.0f)) + 1.0f));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) - 0.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u72 > (*(float *)0x8C291F54)) && (t77 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t77 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u72 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u92 = 0.5f;
        }
        u108 = u92;
    }
    return u108;
}

