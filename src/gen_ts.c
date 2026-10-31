/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ballInit(int, int);
int miniEffectSpawn(Stk4);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlsndSeqRequest(int);
int shotAim(int, float);
Stk3 vecMake(float, float, float);
void miniLaunchBall(void);

void miniLaunchBall(void)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = (0x0);
    v0_2 = (0x64);
    v0_0 = (0x8C291F24);
    v0_5 = (0x8C2FBF54);
    v0_1 = (0x8C0ED2B0);
    w0_0 = (5.0f);
    L_8C03A6C6:;
    w0_1 = nlRandom();
    v0_3 = (int)(v0_4 + 0x1) <= (int)v0_2;
    v0_4 = ((v0_4 + 0x1));
    v0_1 = ((int)(w0_1 * w0_0));
    w0_1 = (w0_1);
    if (!(v0_3)) goto L_8C03A8B2;
    v0_6 = ((v0_1 << 2));
    v0_3 = ((v0_1 << 2));
    if (((*(int *)((v0_5 + (v0_1 << 2)))) != 0)) goto L_8C03A6C6;
    if (((int)(*(int *)((0x8C2FC0A0 + v0_6))) > (int)0x14)) goto L_8C03A6C6;
    ballInit(v0_0, R5);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFFD);
    *(unsigned int *)0x8C2888E4 = (0xFFFFFFF7 & (*(int *)0x8C2888E4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0xC)) = *(struct mv3 *)(((((v0_1 << 1) + v0_1) << 2) + 0x8C2FC058)); }
    w0_1 = *(float *)(((int)stk + 40));
    w0_2 = *(float *)(((int)stk + 32));
    *(int *)((int)stk + 16) = (0xC + v0_0);
    *(Stk3 *)((0xC + v0_0)) = vecMake(w0_2, 8.0f, (w0_1 + w0_0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x18)) = *(struct mv3 *)((v0_0 + 0xC)); }
    w0_1 = ((-((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x40))) * 0.100000001f)) + 1.10000002f);
    *(int *)((int)stk + 12) = (0x34 + v0_0);
    *(Stk3 *)((0x34 + v0_0)) = vecMake(0.0f, ((w0_1 * 70.0f) / 100.0f), 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x24)) = *(struct mv3 *)((v0_0 + 0x34)); }
    *(float *)((v0_0 + 0x70)) = 0.0235200021f;
    *(float *)((v0_0 + 0x30)) = 0.0f;
    *(unsigned int *)0x8C289758 = 0x0;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((v0_1 << 1) + 0x8C2FC094))));
    w0_1 = *(float *)(((int)stk + 40));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
    *(Stk3 *)((((int)stk + 12) + 0x8)) = vecMake(0.0f, 0.0f, ((-w0_1) + 118.849998f));
    nlCalcPoint(((int)stk + 20), ((int)stk + 20));
    nlAddVector(((int)stk + 20), (((int)stk + 20) + 0xC));
    v0_4 = (0x8C015EEA);
    v0_2 = (0x8C288AFC);
    w0_1 = (8.0f);
    *(float *)((v0_2 + 0xB90)) = ((*(float *)(((int)stk + 20))) / (*(float *)0x8C03A9A4));
    *(float *)((v0_2 + 0xB98)) = (((*(float *)(((int)stk + 28))) + (*(float *)0x8C03A9A8)) / (*(float *)0x8C03A9AC));
    nlPopMatrix(0x1);
    shotAim(v0_2, (*(float *)((v0_0 + 0x70))));
    *(unsigned int *)0x8C287AF8 = 0x1;
    nlsndSeqRequest(0x1202A9);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 32))), w0_1, ((*(float *)(((int)stk + 40))) + w0_0));
    miniEffectSpawn(*(Stk4 *)((int)stk + 8));
    *(unsigned int *)((v0_3 + 0x8C2FC0A0)) = 0x1E;
    v0_6 = (0x8C2FC0A0);
    goto L_8C03A8B2;
    L_8C03A8B2:;
    return;
}
