/* Straight-line functions with calls and guards (batch gen_po): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudFontNumPut(int, Stk3, float);
int memset(int, int, int);
int rankDrawCharaIcon(int, int, Stk3);
int rankDrawString(int, int, int, Stk3, Stk1);
int rankDrawTbl1(int a4, int a5, int a6, int a7, int a8);

int rankDrawTbl1(int a4, int a5, int a6, int a7, int a8)
{
    int t25;
    int t30;
    int t41;
    int t48;
    int stk[47];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    stk[38] = a8;
    R4 = a4;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 40) + 0x30)) = *(struct mv4 *)(0x8C126CC8); }
    *(float *)(((int)stk + 44)) = (*(float *)(((((int)stk + 40) + 0x70) + 0x0)));
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 40) + 0x24);
    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 40) + 0x24) + 0x2);
    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 40) + 0x24) + 0x3);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 40) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 40) + 0x24) + 0x5);
    *(float *)(((int)stk + 64)) = ((*(float *)(((int)stk + 44))) + 84.0f);
    R10 = (0x8C421E78);
    R11 = (((((int)stk + 40) + 0x24) + 0x1));
    R12 = ((((int)stk + 40) + 0x24));
    R13 = (0x0);
    R14 = ((((int)stk + 40) + 0x70));
    R8 = (0x0);
    R9 = (((((int)stk + 40) + 0x24) + 0x8));
    F12 = (462.0f);
    F13 = (1.0f);
    F14 = (27.0f);
    F15 = ((1.0f + 1.0f));
    L_8C0E1ECE:;
    memset(R12, 0x0, 0x9);
    if ((R13 == 9)) goto L_8C0E1EEA;
    *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = (R13 + 0x31);
    L_8C0E1EF0:;
    if ((R13 != 0)) goto L_8C0E1EFA;
    *(unsigned char *)((R11 + 0x0)) = 0x73;
    R1 = (0x73);
    L_8C0E1F14:;
    *(unsigned char *)(((*(int *)(((int)stk + 60))) + 0x0)) = 0x5F;
    *(unsigned char *)(((*(int *)(((int)stk + 56))) + 0x0)) = 0x20;
    *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x0)) = 0x6B;
    *(unsigned int *)(((int)stk + 72)) = ((R13 << 2) << 1);
    R4 = ((*(int *)(((int)stk + 48))));
    R5 = (((((R13 << 2) << 1) + R10) + 0x4));
    L_8C0E1F34:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    t25 = (unsigned int)(R4 + 0x1) < (unsigned int)R9;
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    if (t25) goto L_8C0E1F34;
    *(unsigned char *)((R9 + 0x0)) = R8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    rankDrawString(R12, (((int)stk + 28) + 0x3C), R6, *(Stk3 *)(((int)stk + 28)), *(Stk1 *)((int)stk + 28 + 12));
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t30 = *(int *)(((int)stk + 72));
    *(unsigned int *)(((int)stk + 68)) = (t30 + R10);
    hudFontNumPut((*(int *)(((t30 + R10) + 0x0))), *(Stk3 *)(((int)stk + 16)), F13);
    *(float *)((R14 + 0x0)) = (*(float *)(((int)stk + 64)));
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    rankDrawCharaIcon((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 68))) + 0x7))), 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)));
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) - F15);
    *(float *)((R14 + 0x0)) = (*(float *)(((int)stk + 44)));
    t41 = (int)(R13 + 0x1) < (int)0xA;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F14);
    R0 = (0x4);
    R13 = ((R13 + 0x1));
    if (t41) goto L_8C0E1ECE;
    return R0;
    L_8C0E1EFA:;
    R0 = (R13);
    if ((R13 != 1)) goto L_8C0E1F06;
    *(unsigned char *)((R11 + 0x0)) = 0x6E;
    goto L_8C0E1F14;
    L_8C0E1F06:;
    if ((R0 != 2)) goto L_8C0E1F10;
    *(unsigned char *)((R11 + 0x0)) = 0x72;
    goto L_8C0E1F14;
    L_8C0E1F10:;
    *(unsigned char *)((R11 + 0x0)) = 0x74;
    R1 = (0x74);
    goto L_8C0E1F14;
    L_8C0E1EEA:;
    t48 = *(int *)(((int)stk + 40));
    *(unsigned char *)((t48 + 0x0)) = 0x6A;
    R1 = (t48);
    goto L_8C0E1EF0;
}
