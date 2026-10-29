/* Straight-line functions with calls and guards (batch gen_pd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudFontNumPut(int, Stk3, float);
int memset(int, int, int);
int rankDrawCharaIcon(int, int, Stk3);
extern int rankDrawString();
int rankDrawTbl2(Stk1 s);

int rankDrawTbl2(Stk1 s)
{
    float u0;
    int t26;
    int t38;
    int t42;
    int t45;
    int t48;
    int t62;
    int stk[60];

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
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    stk[51] = s.w[0];
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 64) + 0x4C)) = *(struct mv4 *)(0x8C126CD8); }
    u0 = *(float *)(((0x8C + ((int)stk + 64)) + 0x0));
    *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 64) + 0x38) + 0x5);
    *(unsigned int *)(((int)stk + 72)) = ((((int)stk + 64) + 0x40) + 0x7);
    *(unsigned int *)(((int)stk + 76)) = (((int)stk + 64) + 0x40);
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 64) + 0x40) + 0x1);
    *(unsigned int *)(((int)stk + 104)) = ((((int)stk + 64) + 0x40) + 0x2);
    *(unsigned int *)(((int)stk + 112)) = ((((int)stk + 64) + 0x40) + 0x3);
    *(unsigned int *)(((int)stk + 108)) = ((((int)stk + 64) + 0x40) + 0x4);
    *(unsigned int *)(((int)stk + 100)) = (((int)stk + 64) + 0x38);
    *(unsigned int *)(((int)stk + 96)) = ((((int)stk + 64) + 0x38) + 0x1);
    *(unsigned int *)(((int)stk + 92)) = ((((int)stk + 64) + 0x38) + 0x2);
    *(float *)(((int)stk + 88)) = (u0 + 60.0f);
    *(float *)(((int)stk + 116)) = (u0 + 176.0f);
    R10 = (0x8C421EC8);
    R11 = ((((int)stk + 64) + 0x38));
    R12 = ((((int)stk + 64) + 0x40));
    R13 = (0x0);
    R14 = ((0x8C + ((int)stk + 64)));
    R4 = (((((int)stk + 64) + 0x40) + 0x1));
    R8 = (0x6B);
    R9 = (0x0);
    F12 = (1.0f);
    F13 = (27.0f);
    F14 = (u0);
    F15 = ((1.0f + 1.0f));
    L_8C0E20F6:;
    memset(R12, 0x0, 0x9);
    memset(R11, 0x0, 0x6);
    if ((R13 == 9)) goto L_8C0E211C;
    *(unsigned char *)(((*(int *)(((int)stk + 76))) + 0x0)) = (R13 + 0x31);
    L_8C0E2122:;
    if ((R13 != 0)) goto L_8C0E212E;
    *(unsigned char *)(((*(int *)(((int)stk + 64))) + 0x0)) = 0x73;
    L_8C0E2172:;
    *(unsigned char *)(((*(int *)(((int)stk + 104))) + 0x0)) = 0x5F;
    *(unsigned char *)(((*(int *)(((int)stk + 112))) + 0x0)) = R8;
    *(unsigned int *)(((int)stk + 80)) = (((R13 << 1) + R13) << 2);
    R4 = ((*(int *)(((int)stk + 108))));
    R5 = ((((((R13 << 1) + R13) << 2) + R10) + 0x4));
    L_8C0E218E:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    t26 = (unsigned int)(R4 + 0x1) < (unsigned int)(*(int *)(((int)stk + 72)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    if (t26) goto L_8C0E218E;
    *(unsigned char *)(((*(int *)(((int)stk + 72))) + 0x0)) = R9;
    *(unsigned char *)(((*(int *)(((int)stk + 100))) + 0x0)) = 0x5F;
    *(unsigned char *)(((*(int *)(((int)stk + 96))) + 0x0)) = R8;
    R4 = ((*(int *)(((int)stk + 92))));
    R5 = ((((*(int *)(((int)stk + 80))) + R10) + 0x7));
    L_8C0E21B0:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    t38 = (unsigned int)(R4 + 0x1) < (unsigned int)(*(int *)(((int)stk + 68)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    if (t38) goto L_8C0E21B0;
    *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x0)) = R9;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(R14); }
    t42 = ((int (*)(int, int, int, Stk3, Stk1))(rankDrawString))(R12, (((int)stk + 52) + 0x58), R6, *(Stk3 *)(((int)stk + 52)), *(Stk1 *)((int)stk + 52 + 12));
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C0E22A8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(R14); }
    t45 = ((int (*)(int, int, Stk3, Stk1))(rankDrawString))(R11, (((int)stk + 40) + 0x64), *(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12));
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C0E22AC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t48 = *(int *)(((int)stk + 80));
    *(unsigned int *)(((int)stk + 84)) = (t48 + R10);
    hudFontNumPut((*(int *)(((t48 + R10) + 0x0))), *(Stk3 *)(((int)stk + 28)), F12);
    *(float *)((R14 + 0x0)) = (*(float *)(((int)stk + 88)));
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    rankDrawCharaIcon((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 84))) + 0xA))), 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)));
    *(float *)((R14 + 0x0)) = (*(float *)(((int)stk + 116)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    rankDrawCharaIcon((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 84))) + 0xB))), 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)));
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) - F15);
    *(float *)((R14 + 0x0)) = F14;
    t62 = (int)(R13 + 0x1) >= (int)0xA;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    R0 = (0x4);
    R13 = ((R13 + 0x1));
    if (t62) goto L_8C0E227C;
    goto L_8C0E20F6;
    L_8C0E227C:;
    return R0;
    L_8C0E212E:;
    R0 = (R13);
    if ((R13 != 1)) goto L_8C0E213E;
    *(unsigned char *)(((*(int *)(((int)stk + 64))) + 0x0)) = 0x6E;
    goto L_8C0E2172;
    L_8C0E213E:;
    if ((R0 != 2)) goto L_8C0E216C;
    *(unsigned char *)(((*(int *)(((int)stk + 64))) + 0x0)) = 0x72;
    goto L_8C0E2172;
    L_8C0E216C:;
    *(unsigned char *)(((*(int *)(((int)stk + 64))) + 0x0)) = 0x74;
    goto L_8C0E2172;
    L_8C0E211C:;
    *(unsigned char *)(((*(int *)(((int)stk + 76))) + 0x0)) = 0x6A;
    goto L_8C0E2122;
}
