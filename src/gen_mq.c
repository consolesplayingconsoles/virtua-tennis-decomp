/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int phraseBigWordPut();
Stk3 vecMake(float, float, float);
int hudCallWordsDrawB(int a4, int a5, int a6, float f4);

int hudCallWordsDrawB(int a4, int a5, int a6, float f4)
{
    int t13;
    int t15;
    int t19;
    int t22;
    int t25;
    int t28;
    int t33;
    int t38;
    int t43;
    int t48;
    int t61;
    int t63;
    int t67;
    int t70;
    int t73;
    int t76;
    int t81;
    int t87;
    int t92;
    int t97;
    int stk[19];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    R10 = (0x0);
    R11 = (R6);
    R12 = (R5);
    R9 = (0x0);
    F15 = (F4);
    if ((R5 == 4)) goto L_8C098D00;
    if ((R11 == 4)) goto L_8C098D00;
    R10 = (0x26);
    L_8C098D00:;
    R14 = (((int)stk + 20));
    F12 = (270.0f);
    F13 = (10.0f);
    F14 = (80.0f);
    if ((R4 == 0)) goto L_8C098D16;
    t13 = R14;
    *(int *)((int)stk + 16) = t13;
    *(Stk3 *)(t13) = vecMake((float)(R10 + 0x166), F12, 0.0500000007f);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t15 = ((int (*)(int, Stk3, float))(phraseBigWordPut))(0x0, *(Stk3 *)(((int)stk + 4)), F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - 103.0f);
    R13 = (R9);
    if ((R12 != 0)) goto L_8C098F32;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t19 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x2, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098F32:;
    if ((R12 != 1)) goto L_8C098F50;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t22 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x4, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098F50:;
    if ((R12 != 2)) goto L_8C098F6E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t25 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x6, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098F6E:;
    if ((R12 != 3)) goto L_8C098F8C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t28 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x8, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098F8C:;
    if ((R11 != 0)) goto L_8C098FB4;
    if ((R13 != 1)) goto L_8C098F9C;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098F9C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t33 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x2, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098FB4:;
    if ((R11 != 1)) goto L_8C098FDE;
    if ((R13 != 1)) goto L_8C098FC6;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098FC6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t38 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x4, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098FDE:;
    if ((R11 != 2)) goto L_8C099008;
    if ((R13 != 1)) goto L_8C098FF0;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098FF0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t43 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x6, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C099008:;
    if ((R11 != 3)) goto L_8C09904C;
    if ((R13 != 1)) goto L_8C099034;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C099034:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t48 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x8, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C09904C:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 1.0f);
    F1 = ((*(float *)((R14 + 0x0))));
    if ((R13 != 1)) goto L_8C099064;
    F2 = ((*(float *)0x8C0991FC));
    L_8C099068:;
    *(float *)((R14 + 0x0)) = (F1 + F2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    R4 = (0xA);
    F4 = (F15);
    L_8C09907C:;
    return (((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(R4, R5, R6, *(Stk3 *)(((int)stk + 8)), F4));
    L_8C099064:;
    F2 = ((*(float *)0x8C099200));
    goto L_8C099068;
    L_8C098D16:;
    t61 = R14;
    *(int *)((int)stk + 16) = t61;
    *(Stk3 *)(t61) = vecMake((float)(R10 + 0x16E), F12, 0.0500000007f);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t63 = ((int (*)(int, Stk3, float))(phraseBigWordPut))(0x9, *(Stk3 *)(((int)stk + 4)), F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - 90.0f);
    R13 = (R9);
    if ((R12 != 0)) goto L_8C098D70;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t67 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x1, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098D70:;
    if ((R12 != 1)) goto L_8C098D8E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t70 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x3, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098D8E:;
    if ((R12 != 2)) goto L_8C098DAC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t73 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x5, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098DAC:;
    if ((R12 != 3)) goto L_8C098DCA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t76 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x7, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098DCA:;
    if ((R11 != 0)) goto L_8C098DF2;
    if ((R13 != 1)) goto L_8C098DDA;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098DDA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t81 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x1, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098DF2:;
    if ((R11 != 1)) goto L_8C098E42;
    if ((R13 != 1)) goto L_8C098E04;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098E04:;
    R2 = (R14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R2); }
    t87 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x3, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098E42:;
    if ((R11 != 2)) goto L_8C098E6C;
    if ((R13 != 1)) goto L_8C098E54;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098E54:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t92 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x5, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098E6C:;
    if ((R11 != 3)) goto L_8C098E96;
    if ((R13 != 1)) goto L_8C098E7E;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F14);
    L_8C098E7E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    t97 = ((int (*)(int, int, int, Stk3, float))(phraseBigWordPut))(0x7, R5, R6, *(Stk3 *)(((int)stk + 8)), F15);
    R13 = ((R13 + 0x1));
    L_8C098E96:;
    F2 = ((*(float *)((R14 + 0x0))));
    if ((R13 != 1)) goto L_8C098EA4;
    F3 = (146.0f);
    L_8C098EA8:;
    *(float *)((R14 + 0x0)) = (F2 + F3);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R14); }
    R4 = (0xB);
    F4 = (F15);
    goto L_8C09907C;
    L_8C098EA4:;
    F3 = (226.0f);
    goto L_8C098EA8;
}
