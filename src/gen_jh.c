/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
float mathLerp(float, float, float);
extern int nlArcTan2();
int panelMenuSprPutA(Stk3, Stk1, float);
extern int primFrameCorners();
int primLineH(int, int, Stk3, Stk3, float);
float vecDistXZf(float, float, float, float);
Stk3 vecMake(float, float, float);
int entryGridDrawCursors(int a4, int a5, int a6, int a7, int a8);
int vecAnglesTo(int a4, int a5, Stk6 s);


int vecAnglesTo(int a4, int a5, Stk6 s)
{
    float u2;
    float u3;
    int t9;
    float t12;
    float u13;
    int t14;
    int stk[22];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    stk[11] = s.w[3];
    stk[12] = s.w[4];
    stk[13] = s.w[5];
    R1004 = a4;
    R1008 = a5;
    u2 = *(float *)(((((int)stk + 4) + 0x28) + 0x4));
    u3 = *(float *)(((((int)stk + 4) + 0x1C) + 0x4));
    *(unsigned short *)((a5 + 0x0)) = (((int (*)(int, int, float, float))(nlArcTan2))(a4, a5, ((*(float *)(((((int)stk + 4) + 0x28) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x28) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x1C) + 0x8))))));
    t9 = R1004;
    t12 = vecDistXZf((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x1C) + 0x8))), (*(float *)(((((int)stk + 4) + 0x28) + 0x0))), (*(float *)(((((int)stk + 4) + 0x28) + 0x8))));
    u13 = (u2 - u3);
    u13 = -u13;
    t14 = ((int (*)(float, float))(nlArcTan2))(u13, t12);
    *(unsigned short *)((t9 + 0x0)) = t14;
    return t14;
}
