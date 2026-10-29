/* Straight-line functions with calls and guards (batch gen_rs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
float vecLength(Stk4);
Stk3 vecMake(float, float, float);
float playerCalcMotionSpeeds(void);

float playerCalcMotionSpeeds(void)
{
    int t5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t21;
    int t22;
    float t29;
    int t31;
    int stk[19];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    *(unsigned int *)(((int)stk + 32)) = 0x41;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    R8 = (0x8C2873D0);
    F15 = (0.0f);
    L_8C027774:;
    if (((int)(*(int *)(((int)stk + 20))) < (int)(*(int *)(((int)stk + 32))))) goto L_8C0276D8;
    return F0;
    L_8C0276D8:;
    t5 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 24)) = (t5 << 2);
    t7 = *(int *)(((t5 << 2) + 0x8C102C6C));
    t9 = *(int *)(((int)stk + 24));
    t10 = *(int *)((((*(int *)((R8 + 0x0))) + t7) + 0x10));
    t11 = *(int *)((((*(int *)((R8 + 0x0))) + t7) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = ((t10 << 1) + (t10 << 2));
    R11 = (0x0);
    R12 = ((((0x0 * t10) << 1) + ((0x0 * t10) << 2)));
    R14 = ((t9 + 0x8C102C6C));
    R4 = (((t10 << 1) + (t10 << 2)));
    R5 = (t7);
    R9 = (t11);
    F14 = (F15);
    if (((int)t11 <= 0)) goto L_8C027762;
    L_8C027712:;
    t21 = *(int *)((R8 + 0x0));
    t22 = *(int *)((((*(int *)((R14 + 0x0))) + t21) + 0x4));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((float)(*(short *)((((t22 + t21) + R12) + 0x0))) / (*(float *)((((*(int *)((R14 + 0x0))) + t21) + 0x14)))), F15, ((float)(*(short *)((((t22 + t21) + R12) + 0x4))) / (*(float *)((((*(int *)((R14 + 0x0))) + t21) + 0x1C)))));
    t29 = vecLength(*(Stk4 *)((int)stk + 8));
    t31 = (int)(R11 + 0x1) < (int)R9;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + (*(int *)(((int)stk + 28)))));
    F0 = (t29);
    F14 = ((F14 + t29));
    if (t31) goto L_8C027712;
    L_8C027762:;
    *(float *)(((*(int *)(((int)stk + 24))) + 0x8C295484)) = (F14 / (float)R9);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    R0 = (0x8C295484);
    goto L_8C027774;
}
