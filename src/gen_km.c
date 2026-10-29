/* Straight-line functions with calls and guards (batch gen_km): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlLineSetThickness(float);
int nlSingleLine(int, int, int);
Stk3 vecMake(float, float, float);
int cpuDebugLine(int a4, Stk3 s, float f4);

int cpuDebugLine(int a4, Stk3 s, float f4)
{
    float u0;
    float u1;
    int stk[28];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    stk[17] = s.w[0];
    stk[18] = s.w[1];
    stk[19] = s.w[2];
    R4 = a4;
    F4 = f4;
    *(unsigned int *)(((int)stk + 20)) = R4;
    nlLineSetThickness(F4);
    u0 = *(float *)(((((int)stk + 20) + 0x30) + 0x0));
    u1 = *(float *)(((((int)stk + 20) + 0x30) + 0x8));
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x10);
    *(Stk3 *)((((int)stk + 20) + 0x10)) = vecMake((u0 - F4), 1.0f, (u1 - F4));
    u0 = *(float *)(((((int)stk + 20) + 0x30) + 0x0));
    u1 = *(float *)(((((int)stk + 20) + 0x30) + 0x8));
    *(int *)((int)stk + 12) = (((int)stk + 16) + 0x8);
    *(Stk3 *)((((int)stk + 16) + 0x8)) = vecMake((u0 + F4), 1.0f, (u1 + F4));
    nlSingleLine((((int)stk + 12) + 0x18), (((int)stk + 12) + 0xC), (*(int *)(((int)stk + 20))));
    u0 = *(float *)(((((int)stk + 20) + 0x30) + 0x0));
    u1 = *(float *)(((((int)stk + 20) + 0x30) + 0x8));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x18);
    *(Stk3 *)((((int)stk + 12) + 0x18)) = vecMake((u0 - F4), 1.0f, (u1 + F4));
    u0 = *(float *)(((((int)stk + 20) + 0x30) + 0x0));
    u1 = *(float *)(((((int)stk + 20) + 0x30) + 0x8));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    *(Stk3 *)((((int)stk + 8) + 0x10)) = vecMake((u0 + F4), 1.0f, (u1 - F4));
    nlSingleLine((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (*(int *)(((int)stk + 20))));
    return (nlLineSetThickness(1.0f));
}
