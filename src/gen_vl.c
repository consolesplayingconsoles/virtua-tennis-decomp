/* Straight-line functions with calls and guards (batch gen_vl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[16]; } Stk16;
extern int nlDispStripTrnsl();
int circuitDrawBar(float f4);

int circuitDrawBar(float f4)
{
    int stk[42];

    register int R1;
    register int R2;
    register int R3;
    int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    w0_1 = f4;
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 4) + 0x40)) = *(struct mv16 *)(0x8C10A714); }
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x40) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x10) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x10) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x20) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x20) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x30) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x30) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    v0_5 = (0x8C034EE0);
    v0_0 = (0x0);
    v0_1 = (0x8C0F7130);
    R12 = (0xFFFFFF);
    v0_1 = (0x0);
    v0_2 = ((((int)stk + 4) + 0x40));
    v0_3 = (0x3);
    v0_4 = (0x4);
    w0_0 = (w0_1);
    L_8C034E7C:;
    v0_6 = (int)((int)v0_1 / (int)v0_3);
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_8C034E8C;
    v0_5 = ((v0_5 & 0x1));
    L_8C034E96:;
    if ((v0_5 != 0)) goto L_8C034F02;
    v0_6 = (v0_0);
    w0_1 = ((float)(v0_1 + 0x2));
    L_8C034EA6:;
    v0_5 = (v0_6);
    v0_7 = ((((v0_6 << 2) << 2) + v0_2));
    if (((int)v0_6 < 0)) goto L_8C034EB8;
    v0_5 = ((v0_5 & 0x1));
    L_8C034EC2:;
    v0_6 = ((v0_6 + 0x1));
    if ((v0_5 != 1)) goto L_8C034EF0;
    *(float *)((v0_7 + 0x4)) = w0_1;
    L_8C034EF8:;
    if (((int)v0_6 < (int)v0_4)) goto L_8C034EA6;
    v0_5 = ((((int (*)(int, int))(nlDispStripTrnsl))(0x4, v0_2)));
    L_8C034F02:;
    v0_5 = (int)(v0_1 + 0x3) < (int)0x1E0;
    v0_1 = ((v0_1 + 0x3));
    if (v0_5) goto L_8C034E7C;
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C10A754); }
    *(unsigned int *)((((int)stk + 4) + 0xC)) = (((*(int *)((((int)stk + 4) + 0xC))) & R12) | (((int)(w0_0 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & R12) | (((int)(w0_0 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x20) + 0xC))) & R12) | (((int)(w0_0 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = ((R12 & (*(int *)(((((int)stk + 4) + 0x30) + 0xC)))) | (((int)(w0_0 * 255.0f) << 16) << 8));
    return (((int (*)(int, int, Stk16))(nlDispStripTrnsl))(0x4, ((int)stk + 4), *(Stk16 *)(((int)stk + 4))));
    L_8C034EF0:;
    *(float *)((v0_7 + 0x4)) = (float)v0_1;
    goto L_8C034EF8;
    L_8C034EB8:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x1)) + 0x1));
    goto L_8C034EC2;
    L_8C034E8C:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x1)) + 0x1));
    goto L_8C034E96;
}
