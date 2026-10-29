/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlDispStripTexOfsTrnsl(int, int, int);
void sprListPutGrad(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

void sprListPutGrad(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    float u19;
    float u22;
    int stk[48];

    int R0;
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
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F15;
    int T_;
    stk[39] = a8;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F5 = f5;
    *(unsigned int *)(((int)stk + 4)) = R5;
    R10 = (R7);
    R12 = (0x0);
    R14 = (R4);
    R9 = (R6);
    F15 = (F5);
    if ((R5 == 0)) goto L_8C0DE3B6;
    R8 = (R12);
    L_8C0DE3B0:;
    if (!(((int)R8 < (int)(*(int *)(((int)stk + 4)))))) goto L_8C0DE3B6;
    R4 = (R12);
    goto L_8C0DE398;
    L_8C0DE3B6:;
    return;
    L_8C0DE398:;
    R13 = ((((int)stk + 4) + 0x4));
    if (((int)R4 < (int)0x4)) goto L_8C0DE308;
    R0 = ((nlDispStripTexOfsTrnsl(0x4, R13, (*(int *)((R14 + 0x0))))));
    R14 = ((R14 + 0x6C));
    R8 = ((R8 + 0x1));
    goto L_8C0DE3B0;
    L_8C0DE308:;
    u19 = (*(float *)(((0x98 + ((int)stk + 4)) + 0x0)));
    u19 = u19 + F15 * (*(float *)((((R14 + 0xC) + ((((R4 << 1) + R4) << 2) << 1)) + 0x0)));
    *(float *)((((R4 * 0x1C) + R13) + 0x0)) = u19;
    u22 = (*(float *)(((0x98 + ((int)stk + 4)) + 0x4)));
    u22 = u22 + F15 * (*(float *)((((R14 + 0xC) + ((((R4 << 1) + R4) << 2) << 1)) + 0x4)));
    *(float *)((((R4 * 0x1C) + R13) + 0x4)) = u22;
    *(float *)((((R4 * 0x1C) + R13) + 0x8)) = (*(float *)(((0x98 + ((int)stk + 4)) + 0x8)));
    *(float *)((((R4 * 0x1C) + R13) + 0xC)) = ((*(float *)((((R14 + 0xC) + ((((R4 << 1) + R4) << 2) << 1)) + 0xC))) / (*(float *)((R14 + 0x4))));
    *(float *)((((R4 * 0x1C) + R13) + 0x10)) = ((-((*(float *)(((((((R4 << 1) + R4) << 2) << 1) + (R14 + 0xC)) + 0x10))) / (*(float *)((R14 + 0x8))))) + 1.0f);
    *(unsigned int *)((((R4 * 0x1C) + R13) + 0x18)) = 0x0;
    R5 = (((R4 * 0x1C) + R13));
    if ((R4 == 0)) goto L_8C0DE384;
    if (!((R4 != 2))) goto L_8C0DE384;
    if ((R10 == 0)) goto L_8C0DE394;
    *(unsigned int *)((R5 + 0x14)) = R10;
    goto L_8C0DE396;
    L_8C0DE384:;
    if ((R9 == 0)) goto L_8C0DE394;
    *(unsigned int *)((R5 + 0x14)) = R9;
    L_8C0DE396:;
    R4 = ((R4 + 0x1));
    goto L_8C0DE398;
    L_8C0DE394:;
    *(unsigned int *)((R5 + 0x14)) = R12;
    goto L_8C0DE396;
}
