/* Straight-line functions with calls and guards (batch gen_uk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlDispStripTexOfsTrnsl(int, int, int);
void sprListPutGrad(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

void sprListPutGrad(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[48];

    register int R2;
    register int R3;
    register int R11;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
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
    stk[39] = a8;
    v0_0 = a4;
    v0_6 = a5;
    v0_4 = a6;
    v0_1 = a7;
    w0_0 = f5;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_1 = (v0_1);
    v0_2 = (0x0);
    v0_3 = (v0_0);
    v0_4 = (v0_4);
    w0_0 = (w0_0);
    if ((v0_6 == 0)) goto L_8C0DE3B6;
    v0_5 = (v0_2);
    L_8C0DE3B0:;
    if (!(((int)v0_5 < (int)(*(int *)(((int)stk + 4)))))) goto L_8C0DE3B6;
    v0_0 = (v0_2);
    goto L_8C0DE398;
    L_8C0DE3B6:;
    return;
    L_8C0DE398:;
    v0_6 = ((((int)stk + 4) + 0x4));
    if (((int)v0_0 < (int)0x4)) goto L_8C0DE308;
    v0_0 = ((nlDispStripTexOfsTrnsl(0x4, v0_6, (*(int *)((v0_3 + 0x0))))));
    v0_3 = ((v0_3 + 0x6C));
    v0_5 = ((v0_5 + 0x1));
    goto L_8C0DE3B0;
    L_8C0DE308:;
    w0_1 = (*(float *)(((0x98 + ((int)stk + 4)) + 0x0)));
    w0_1 = w0_1 + w0_0 * (*(float *)((((v0_3 + 0xC) + ((((v0_0 << 1) + v0_0) << 2) << 1)) + 0x0)));
    *(float *)((((v0_0 * 0x1C) + v0_6) + 0x0)) = w0_1;
    w0_1 = (*(float *)(((0x98 + ((int)stk + 4)) + 0x4)));
    w0_1 = w0_1 + w0_0 * (*(float *)((((v0_3 + 0xC) + ((((v0_0 << 1) + v0_0) << 2) << 1)) + 0x4)));
    *(float *)((((v0_0 * 0x1C) + v0_6) + 0x4)) = w0_1;
    *(float *)((((v0_0 * 0x1C) + v0_6) + 0x8)) = (*(float *)(((0x98 + ((int)stk + 4)) + 0x8)));
    *(float *)((((v0_0 * 0x1C) + v0_6) + 0xC)) = ((*(float *)((((v0_3 + 0xC) + ((((v0_0 << 1) + v0_0) << 2) << 1)) + 0xC))) / (*(float *)((v0_3 + 0x4))));
    *(float *)((((v0_0 * 0x1C) + v0_6) + 0x10)) = ((-((*(float *)(((((((v0_0 << 1) + v0_0) << 2) << 1) + (v0_3 + 0xC)) + 0x10))) / (*(float *)((v0_3 + 0x8))))) + 1.0f);
    *(unsigned int *)((((v0_0 * 0x1C) + v0_6) + 0x18)) = 0x0;
    v0_6 = (((v0_0 * 0x1C) + v0_6));
    if ((v0_0 == 0)) goto L_8C0DE384;
    if (!((v0_0 != 2))) goto L_8C0DE384;
    if ((v0_1 == 0)) goto L_8C0DE394;
    *(unsigned int *)((v0_6 + 0x14)) = v0_1;
    goto L_8C0DE396;
    L_8C0DE384:;
    if ((v0_4 == 0)) goto L_8C0DE394;
    *(unsigned int *)((v0_6 + 0x14)) = v0_4;
    L_8C0DE396:;
    v0_0 = ((v0_0 + 0x1));
    goto L_8C0DE398;
    L_8C0DE394:;
    *(unsigned int *)((v0_6 + 0x14)) = v0_2;
    goto L_8C0DE396;
}
