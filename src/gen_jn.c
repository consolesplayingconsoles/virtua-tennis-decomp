/* Straight-line functions with calls and guards (batch gen_jn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int hudProfileDraw(int, Stk3);
int nlDispStrip(int, int);
int nlDispStripTrnsl(int, int);
int primRectFrame(int, int, int, int);
int primVertexSet(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int windowBgDraw(int, int, float);
int selPanelDraw(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);

int selPanelDraw(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    int t14;
    int t20;
    int t26;
    int t44;
    float u48;
    float u49;
    float u50;
    int t63;
    int t70;
    int t77;
    int t84;
    int t93;
    int t100;
    int t107;
    int t114;
    int t123;
    int t130;
    int t137;
    int t144;
    int t153;
    int t160;
    int t167;
    int t174;
    int t183;
    int t190;
    int t203;
    int t210;
    int t219;
    int t226;
    int t233;
    int t240;
    int stk[59];

    int R0;
    int R1;
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
    stk[50] = a8;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    *(float *)(((int)stk + 48)) = F5;
    *(float *)(((0xB0 + ((int)stk + 24)) + 0x0)) = ((*(float *)(((0xB0 + ((int)stk + 24)) + 0x0))) + 280.0f);
    *(float *)(((0xB0 + ((int)stk + 24)) + 0x4)) = ((*(float *)(((0xB0 + ((int)stk + 24)) + 0x4))) + 90.0f);
    *(float *)(((0xB0 + ((int)stk + 24)) + 0x8)) = 10.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x28)) = *(struct mv3 *)((0xB0 + ((int)stk + 24))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x34)) = *(struct mv3 *)((0xB0 + ((int)stk + 24))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x1C)) = *(struct mv3 *)((0xB0 + ((int)stk + 24))); }
    *(unsigned int *)(((int)stk + 44)) = (*(int *)0x8C343264);
    *(Stk3 *)(((int)stk + 12)) = vecMake(415.0f, 174.0f, 0.100000001f);
    primRectFrame(0x5D, 0x78, 0x2, R4);
    *(Stk3 *)(((int)stk + 12)) = vecMake(322.0f, 175.0f, 1.0f);
    windowBgDraw((*(int *)(((int)stk + 44))), 0x1, (*(float *)(((int)stk + 48))));
    *(float *)(((((int)stk + 24) + 0x34) + 0x0)) = ((*(float *)(((((int)stk + 24) + 0x34) + 0x0))) + 48.0f);
    *(float *)(((((int)stk + 24) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 24) + 0x34) + 0x4))) + -86.0f);
    *(float *)(((((int)stk + 24) + 0x34) + 0x0)) = ((*(float *)(((((int)stk + 24) + 0x34) + 0x0))) + -95.0f);
    *(unsigned int *)(((int)stk + 36)) = (((int)stk + 24) + 0x40);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 24) + 0x40);
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)(((((int)stk + 24) + 0x34) + 0x0))) + 95.0f), (((*(float *)(((((int)stk + 24) + 0x34) + 0x4))) + (1.0f + 1.0f)) + -2.0f), (*(float *)(((0xB0 + ((int)stk + 24)) + 0x8))));
    t14 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t14;
    primVertexSet(R4, 0x0, 0x0, 0x0, t14);
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 24) + 0x40) + 0x10);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 24) + 0x40) + 0x10);
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)(((((int)stk + 24) + 0x34) + 0x0))) + 93.0f), (((*(float *)(((((int)stk + 24) + 0x34) + 0x4))) + (1.0f + 1.0f)) + -2.0f), (*(float *)(((0xB0 + ((int)stk + 24)) + 0x8))));
    t20 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t20;
    primVertexSet(R4, 0x0, 0x0, 0x0, t20);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 24) + 0x40) + 0x20);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 24) + 0x40) + 0x20);
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)(((((int)stk + 24) + 0x34) + 0x0))) + 95.0f), (((*(float *)(((((int)stk + 24) + 0x34) + 0x4))) + (1.0f + 1.0f)) + 122.0f), (*(float *)(((0xB0 + ((int)stk + 24)) + 0x8))));
    t26 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t26;
    primVertexSet(R4, 0x0, 0x0, 0x0, t26);
    R1 = (((((int)stk + 24) + 0x40) + 0x30));
    R10 = (R4);
    R11 = (0x8C0BABC0);
    R12 = (0x8C015EEA);
    R13 = ((0xB0 + ((int)stk + 24)));
    R14 = ((((int)stk + 24) + 0x28));
    R8 = ((((int)stk + 24) + 0x34));
    R9 = ((((int)stk + 24) + 0x40));
    F12 = ((1.0f + 1.0f));
    F13 = (48.0f);
    F14 = ((1.0f + 1.0f));
    F15 = (-86.0f);
    *(unsigned int *)(((int)stk + 32)) = R1;
    *(unsigned int *)(((int)stk + 24)) = R1;
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R8 + 0x0))) + 93.0f), (((*(float *)((R8 + 0x4))) + F14) + 122.0f), (*(float *)((R13 + 0x8))));
    t44 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t44;
    primVertexSet(R10, 0x0, 0x0, 0x0, t44);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    u48 = *(float *)((R13 + 0x0));
    u49 = *(float *)((R13 + 0x8));
    u50 = *(float *)((R13 + 0x4));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x2C);
    *(Stk3 *)((((int)stk + 8) + 0x2C)) = vecMake((u48 + 66.0f), (u50 + F15), (u49 + (-1.0f)));
    R8 = (0x8C0F70A0);
    if (((*(int *)(((int)stk + 44))) == -1)) goto L_8C09DCA6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x1C)); }
    hudProfileDraw((*(int *)(((int)stk + 44))), *(Stk3 *)(((int)stk + 12)));
    L_8C09DCA6:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F13);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 185.0f), (*(float *)((R14 + 0x4))), (*(float *)((R13 + 0x8))));
    t63 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t63;
    primVertexSet(R10, 0x0, 0x0, 0x0, t63);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (*(float *)((R14 + 0x4))), (*(float *)((R13 + 0x8))));
    t70 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t70;
    primVertexSet(R10, 0x0, 0x0, 0x0, t70);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 185.0f), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t77 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t77;
    primVertexSet(R10, 0x0, 0x0, 0x0, t77);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t84 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t84;
    primVertexSet(R10, 0x0, 0x0, 0x0, t84);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 185.0f), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t93 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t93;
    primVertexSet(R10, 0x0, 0x0, 0x0, t93);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t100 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t100;
    primVertexSet(R10, 0x0, 0x0, 0x0, t100);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 185.0f), (((*(float *)((R14 + 0x4))) + F12) + 120.0f), (*(float *)((R13 + 0x8))));
    t107 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t107;
    primVertexSet(R10, 0x0, 0x0, 0x0, t107);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), (((*(float *)((R14 + 0x4))) + F12) + 120.0f), (*(float *)((R13 + 0x8))));
    t114 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t114;
    primVertexSet(R10, 0x0, 0x0, 0x0, t114);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), ((*(float *)((R14 + 0x4))) + 57.0f), (*(float *)((R13 + 0x8))));
    t123 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t123;
    primVertexSet(R10, 0x0, 0x0, 0x0, t123);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), ((*(float *)((R14 + 0x4))) + 57.0f), (*(float *)((R13 + 0x8))));
    t130 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t130;
    primVertexSet(R10, 0x0, 0x0, 0x0, t130);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), (((*(float *)((R14 + 0x4))) + F12) + 57.0f), (*(float *)((R13 + 0x8))));
    t137 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t137;
    primVertexSet(R10, 0x0, 0x0, 0x0, t137);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (((*(float *)((R14 + 0x4))) + F12) + 57.0f), (*(float *)((R13 + 0x8))));
    t144 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t144;
    primVertexSet(R10, 0x0, 0x0, 0x0, t144);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), ((*(float *)((R14 + 0x4))) + 87.0f), (*(float *)((R13 + 0x8))));
    t153 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t153;
    primVertexSet(R10, 0x0, 0x0, 0x0, t153);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), ((*(float *)((R14 + 0x4))) + 87.0f), (*(float *)((R13 + 0x8))));
    t160 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t160;
    primVertexSet(R10, 0x0, 0x0, 0x0, t160);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 183.0f), (((*(float *)((R14 + 0x4))) + F12) + 87.0f), (*(float *)((R13 + 0x8))));
    t167 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t167;
    primVertexSet(R10, 0x0, 0x0, 0x0, t167);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (((*(float *)((R14 + 0x4))) + F12) + 87.0f), (*(float *)((R13 + 0x8))));
    t174 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t174;
    primVertexSet(R10, 0x0, 0x0, 0x0, t174);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + 185.0f), (((*(float *)((R14 + 0x4))) + F12) + 120.0f), (*(float *)((R13 + 0x8))));
    t183 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t183;
    primVertexSet(R10, 0x0, 0x0, 0x0, t183);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (((*(float *)((R14 + 0x4))) + F12) + 120.0f), (*(float *)((R13 + 0x8))));
    t190 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t190;
    primVertexSet(R10, 0x0, 0x0, 0x0, t190);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    F13 = (120.0f);
    F14 = (185.0f);
    F15 = (4.0f);
    F2 = ((*(float *)((R14 + 0x4))));
    F3 = (4.0f);
    F6 = ((*(float *)((R13 + 0x8))));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + F14), ((F2 + F3) + F13), F6);
    t203 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t203;
    primVertexSet(R10, 0x0, 0x0, 0x0, t203);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (((*(float *)((R14 + 0x4))) + F15) + F13), (*(float *)((R13 + 0x8))));
    t210 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t210;
    primVertexSet(R10, 0x0, 0x0, 0x0, t210);
    *(volatile int *)(((int)stk + 24));
    nlDispStrip(0x4, R9);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + F14), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t219 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t219;
    primVertexSet(0x50FFFFFF, 0x0, 0x0, 0x0, t219);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 40)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), ((*(float *)((R14 + 0x4))) + F12), (*(float *)((R13 + 0x8))));
    t226 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t226;
    primVertexSet(0x50FFFFFF, 0x0, 0x0, 0x0, t226);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 12)) = vecMake(((*(float *)((R14 + 0x0))) + F14), (((*(float *)((R14 + 0x4))) + F15) + F13), (*(float *)((R13 + 0x8))));
    t233 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t233;
    primVertexSet(0xFFFFFF, 0x0, 0x0, 0x0, t233);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 12)) = vecMake((*(float *)((R14 + 0x0))), (((*(float *)((R14 + 0x4))) + F15) + F13), (*(float *)((R13 + 0x8))));
    t240 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 8) = t240;
    primVertexSet(0xFFFFFF, 0x0, 0x0, 0x0, t240);
    *(volatile int *)(((int)stk + 24));
    return (nlDispStripTrnsl(0x4, R9));
}

int sysVideoSelect(int a4, int a5, int a6)
{
    int t6;
    int t7;
    float u8;
    int t11;
    int t24;
    int t27;
    int t28;
    int t30;
    int t31;
    int t34;
    int t102;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t140;
    float u142;
    float u145;
    float u146;
    float u148;
    float u149;
    int t153;
    float u164;
    float u167;
    float u168;
    int t172;
    float u183;
    float u186;
    float u187;
    int t191;
    float u9;
    float u10;
    int t225;
    int t70;
    int t63;
    int t29;
    float u32;
    int t49;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t100;
    int t157;
    int t158;
    int t176;
    int t177;
    int t195;
    int t196;
    int stk[48];

    *(unsigned int *)(((int)stk + 112)) = 0x0;
    fileLoadSync(0xCA80000, 0x8C101318, 0x0);
    *(unsigned int *)(((int)stk + 48)) = 0x708;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x1;
    sysSetVideoMode(0x1);
    sprTexLoad(0x153);
    sprTexLoad(0x150);
    sprTexLoad(0x151);
    sprTexLoad(0x152);
    *(unsigned int *)(((int)stk + 104)) = 0x8C29B8A8;
    *(unsigned int *)(((int)stk + 40)) = 0x8C29B898;
    *(unsigned int *)(((int)stk + 96)) = 0x8C29B89C;
    *(unsigned int *)(((int)stk + 84)) = 0x8C29B8A0;
    *(unsigned int *)(((int)stk + 80)) = 0x8C29B8A4;
    *(unsigned int *)(((int)stk + 92)) = (((int)stk + 32) + 0x58);
    *(unsigned int *)(((int)stk + 64)) = (((int)stk + 32) + 0x5C);
    *(unsigned int *)(((int)stk + 100)) = (((int)stk + 32) + 0x60);
    *(unsigned int *)(((int)stk + 76)) = (((int)stk + 32) + 0x64);
    *(unsigned int *)(((int)stk + 72)) = (((int)stk + 32) + 0x68);
    *(unsigned int *)(((int)stk + 68)) = (((int)stk + 32) + 0x6C);
    t6 = (((int)stk + 32) + 0x6C);
    t7 = 0x0;
    u8 = 1.0f;
    for (;;) {
        t11 = *(int *)(((int)stk + 108));
        if (t11 != 0) {
            if (t11 == 1) {
                t24 = *(int *)(((int)stk + 48));
                *(unsigned int *)(((int)stk + 48)) = (t24 - 1);
                if ((int)(t24 - 1) <= 0) {
                    t6 = 0x708;
                    *(unsigned int *)(((int)stk + 108)) = 0x0;
                    *(unsigned int *)(((int)stk + 48)) = t6;
                    *(unsigned int *)(((int)stk + 116)) = 0x1;
                    sysSetVideoMode(0x1);
                } else {
                    t6 = 0x0;
                    *(unsigned int *)(((int)stk + 36)) = t6;
                    t6 = 0x8C0F7A50;
                    t27 = (int)((int)(*(int *)(((int)stk + 48))) / (int)0x3C);
                    t6 = 0x8C12C5AC;
                    *(unsigned int *)(((int)stk + 88)) = (((t27 << 2) + t6) + 0x4);
                    t28 = (((t27 << 2) + t6) + 0x4);
                    t30 = (t24 - 1);
                    t31 = a5;
                    for (;;) {
                        t6 = (*(int *)(((int)stk + 36)));
                        if ((int)t6 >= (int)0x3) {
                            break;
                        }
                        t6 = 0x0;
                        t31 = 0x8C101168;
                        t30 = t6;
                        *(unsigned int *)(((int)stk + 52)) = t6;
                        *(unsigned int *)(((int)stk + 60)) = t30;
                        t34 = *(int *)(((int)stk + 36));
                        t6 = t34;
                        *(unsigned int *)(((int)stk + 32)) = ((((t34 << 2) + t6) << 2) + t31);
                        *(unsigned int *)(((int)stk + 56)) = ((((t34 << 2) + t6) << 2) + t31);
                        t6 = (*(int *)(((int)stk + 36)));
                        t6 = (t6 << 2);
                        t6 = (t6 << 2);
                        t6 = (t6 << 2);
                        t6 = (t6 << 1);
                        t6 = (t6 + 0x20);
                        u32 = (float)t6;
                        u10 = u32;
                        for (;;) {
                            t6 = (*(int *)(((int)stk + 52)));
                            if ((int)t6 >= (int)0x5) {
                                break;
                            }
                            t30 = (*(int *)(((int)stk + 56)));
                            t6 = (*(int *)((t30 + 0x0)));
                            if ((int)t6 > (int)0x5) {
                                t28 = 0x8C12C5AC;
                                t49 = (*(int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2) + t28)));
                            } else {
                                t49 = (*(int *)(((*(int *)(((int)stk + 88))) + 0x0)));
                            }
                            t28 = (sprSheetSet(t49));
                            t6 = (*(int *)(((int)stk + 60)));
                            u32 = (float)t6;
                            t28 = (sprSheetPut(0x0, u32, u10, 1.0f, 1.0f));
                            t6 = (*(int *)(((int)stk + 52)));
                            t30 = 0x80;
                            t6 = (t6 + 0x1);
                            *(unsigned int *)(((int)stk + 52)) = t6;
                            t29 = (*(int *)(((int)stk + 60)));
                            t29 = (t29 + t30);
                            *(unsigned int *)(((int)stk + 60)) = t29;
                            t6 = (*(int *)(((int)stk + 32)));
                            t6 = (t6 + 0x4);
                            *(unsigned int *)(((int)stk + 32)) = t6;
                            t30 = (*(int *)(((int)stk + 56)));
                            t30 = (t30 + 0x4);
                            *(unsigned int *)(((int)stk + 56)) = t30;
                        }
                        t29 = (*(int *)(((int)stk + 36)));
                        t29 = (t29 + 0x1);
                        *(unsigned int *)(((int)stk + 36)) = t29;
                    }
                    t63 = t6;
                }
                t70 = t63;
            } else {
                t70 = t6;
            }
            t225 = t70;
        } else {
            t6 = (*(int *)(((int)stk + 40)));
            if ((((*(int *)(((*(int *)((t6 + 0x0))) + 0x10))) & 0x5) == 0) && ((t78 = *(int *)(((int)stk + 96)), t79 = *(int *)((t78 + 0x0)), t6 = t79, t80 = *(int *)((t6 + 0x10)), (t80 & 0x5) == 0) && ((t81 = *(int *)(((int)stk + 84)), t82 = *(int *)((t81 + 0x0)), t6 = t82, t83 = *(int *)((t6 + 0x10)), (t83 & 0x5) == 0) && (t84 = *(int *)(((int)stk + 80)), t85 = *(int *)((t84 + 0x0)), t6 = t85, t86 = *(int *)((t6 + 0x10)), (t86 & 0x5) == 0)))) {
                t100 = t6;
            } else {
                if (t7 == 0) {
                    *(unsigned int *)(((int)stk + 116)) = 0x1;
                    *(unsigned int *)(((int)stk + 112)) = 0x1;
                }
                if (t7 == 1) {
                    *(unsigned int *)(((int)stk + 116)) = 0x2;
                    *(unsigned int *)(((int)stk + 112)) = 0x1;
                }
                if (t7 == 2) {
                    *(unsigned int *)(((int)stk + 108)) = 0x1;
                    t6 = 0x2;
                    *(unsigned int *)(((int)stk + 48)) = 0x12C;
                    *(unsigned int *)(((int)stk + 116)) = t6;
                }
                sysSetVideoMode((*(int *)(((int)stk + 116))));
            }
            t102 = *(int *)(((int)stk + 48));
            t6 = t100;
            *(unsigned int *)(((int)stk + 48)) = (t102 - 1);
            if ((int)(t102 - 1) < 0) {
                *(unsigned int *)(((int)stk + 116)) = 0x1;
                *(unsigned int *)(((int)stk + 112)) = 0x1;
            }
            t105 = *(int *)(((int)stk + 40));
            t106 = (t102 - 1);
            t107 = t105;
            t108 = t105;
            t109 = a6;
            for (;;) {
                t6 = (*(int *)(((int)stk + 104)));
                u10 = 0.0f;
                if ((unsigned int)t107 >= (unsigned int)t6) {
                    break;
                }
                if (((*(int *)(((*(int *)((t107 + 0x0))) + 0x10))) & 128) != 0) {
                    t106 = 0x2;
                    if ((int)t7 < (int)t106) {
                        t7 = (t7 + 0x1);
                    }
                    t106 = 0x708;
                    u8 = u10;
                    *(unsigned int *)(((int)stk + 48)) = t106;
                }
                t6 = (*(int *)((t108 + 0x0)));
                t109 = 0x40;
                t106 = (*(int *)((t6 + 0x10)));
                if ((t106 & t109) != 0) {
                    if ((int)t7 > 0) {
                        t7 = (t7 - 1);
                    }
                    t6 = 0x708;
                    u8 = u10;
                    *(unsigned int *)(((int)stk + 48)) = t6;
                }
                t107 = (t107 + 0x4);
                t108 = (t108 + 0x4);
            }
            u8 = (u8 + 0.100000001f);
            if (u8 > 1.0f) {
                u8 = 1.0f;
            }
            dbgVdEdit(t107, t108, t109);
            u9 = 100.0f;
            uiScanlinesPut(u9);
            t6 = (*(int *)(((int)stk + 92)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF00BABA;
            t6 = (*(int *)(((int)stk + 64)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF00BABA;
            t6 = (*(int *)(((int)stk + 100)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF00BABA;
            t6 = (*(int *)(((int)stk + 76)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF00BABA;
            t6 = (*(int *)(((int)stk + 72)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF000000;
            t6 = (*(int *)(((int)stk + 68)));
            *(unsigned int *)((t6 + 0x0)) = 0xFF000000;
            t6 = 0x8C0DEE2C;
            screenQuadPut((((int)stk + 32) + 0x58), u10);
            sprSheetSet(0x8C101268);
            u9 = 30.0f;
            sprSheetPut(0x0, 50.0f, u9, 1.0f, 1.0f);
            sprSheetSet(0x8C101220);
            *(float *)0x8C287668 = ((*(float *)0x8C287668) * 320.0f);
            sprSheetPut(0x0, u10, u10, 1.10000002f, 1.0f);
            sprSheetSet(0x8C101244);
            sprSheetPut(0x0, 320.0f, u10, 1.10000002f, 1.0f);
            u9 = 74.0f;
            *(Stk3 *)(((int)stk + 20)) = vecMake(640.0f, u9, 1.0f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(u10, u9, 1.0f);
            t6 = 0x8C0BB580;
            primLineH(0x2, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            t6 = 0x8C20D198;
            t140 = *(int *)((t6 + 0x0));
            u10 = 16.0f;
            *(unsigned int *)((t6 + 0x0)) = (t140 + 0x1);
            t6 = 0x444;
            u142 = u10;
            u142 = u142 + u10 * (nlSin(((t140 + 0x1) * t6)));
            t6 = (int)u142;
            *(unsigned int *)(((int)stk + 32)) = t6;
            sprSheetSet(0x8C1011B4);
            u9 = 175.0f;
            u10 = 0.5f;
            u145 = 0.899999976f;
            u145 = u145 + 0.100000001f * u8;
            *(float *)(((int)stk + 44)) = u145;
            if (t7 != 0) {
                u146 = *(float *)0x8C28766C;
                t6 = 0x8C0F2780;
                *(float *)0x8C28766C = (u146 * 0.899999976f);
                *(float *)0x8C287668 = (u146 * 0.899999976f);
                nlObjPutSetFadeColor(u10, u10, u10);
                t158 = 0x200A;
            } else {
                t6 = 0xFFFFFFFF;
                u148 = *(float *)0x8C28766C;
                u149 = *(float *)(((((int)stk + 32) + 0xC) + 0x0));
                *(float *)0x8C28766C = (u148 * u149);
                *(float *)0x8C287668 = (u148 * u149);
                *(unsigned int *)0x8C287690 = t6;
                t6 = (*(int *)(((int)stk + 32)));
                t6 = (t6 << 8);
                t153 = (((*(int *)(((int)stk + 32))) << 16) | t6);
                t6 = (*(int *)(((int)stk + 32)));
                *(unsigned int *)0x8C287694 = ((t153 | t6) | 0xFF000000);
                t157 = t6;
                t158 = 0x2000A;
            }
            t6 = t157;
            sprSheetPut(t158, 154.0f, u9, 1.0f, 1.0f);
            sprSheetSet(0x8C1011D8);
            if (t7 != 1) {
                u164 = *(float *)0x8C28766C;
                *(float *)0x8C28766C = (u164 * 0.899999976f);
                *(float *)0x8C287668 = (u164 * 0.899999976f);
                nlObjPutSetFadeColor(u10, u10, u10);
                t177 = 0x200A;
            } else {
                nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                t6 = 0xFFFFFFFF;
                u167 = *(float *)0x8C28766C;
                u168 = *(float *)(((((int)stk + 32) + 0xC) + 0x0));
                *(float *)0x8C28766C = (u167 * u168);
                *(float *)0x8C287668 = (u167 * u168);
                *(unsigned int *)0x8C287690 = t6;
                t6 = (*(int *)(((int)stk + 32)));
                t6 = (t6 << 8);
                t172 = (((*(int *)(((int)stk + 32))) << 16) | t6);
                t6 = (*(int *)(((int)stk + 32)));
                *(unsigned int *)0x8C287694 = ((t172 | t6) | 0xFF000000);
                t176 = t6;
                t177 = 0x2000A;
            }
            t6 = t176;
            sprSheetPut(t177, 320.0f, u9, 1.0f, 1.0f);
            sprSheetSet(0x8C1011FC);
            if (t7 != 2) {
                u183 = *(float *)0x8C28766C;
                *(float *)0x8C28766C = (u183 * 0.899999976f);
                *(float *)0x8C287668 = (u183 * 0.899999976f);
                nlObjPutSetFadeColor(u10, u10, u10);
                t196 = 0x200A;
            } else {
                nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                t6 = 0xFFFFFFFF;
                u186 = *(float *)0x8C28766C;
                u187 = *(float *)(((((int)stk + 32) + 0xC) + 0x0));
                *(float *)0x8C28766C = (u186 * u187);
                *(float *)0x8C287668 = (u186 * u187);
                *(unsigned int *)0x8C287690 = t6;
                t6 = (*(int *)(((int)stk + 32)));
                t6 = (t6 << 8);
                t191 = (((*(int *)(((int)stk + 32))) << 16) | t6);
                t6 = (*(int *)(((int)stk + 32)));
                *(unsigned int *)0x8C287694 = ((t191 | t6) | 0xFF000000);
                t195 = t6;
                t196 = 0x2000A;
            }
            t6 = t195;
            sprSheetPut(t196, 486.0f, u9, 1.0f, 1.0f);
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            if (t7 != 0) {
                if (t7 != 1) {
                    if (t7 != 2) {
                    } else {
                        sprSheetSet(0x8C101304);
                        *(unsigned int *)(((int)stk + 36)) = 0x1AE;
                    }
                } else {
                    sprSheetSet(0x8C1012D0);
                    *(unsigned int *)(((int)stk + 36)) = 0x186;
                }
            } else {
                sprSheetSet(0x8C10129C);
                *(unsigned int *)(((int)stk + 36)) = 0x186;
            }
            t6 = (*(int *)(((int)stk + 36)));
            u10 = 90.0f;
            sprSheetPut(0xD, u10, (float)t6, 1.0f, u8);
            u9 = 283.0f;
            u10 = 573.0f;
            *(Stk3 *)(((int)stk + 20)) = vecMake(u10, u9, 1.10000002f);
            t6 = 0x8C0BB710;
            primRectInc(0x1FA, 0x9A, 0x80FF8000, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
            *(Stk3 *)(((int)stk + 20)) = vecMake(u10, u9, 1.0f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(67.0f, u9, 1.0f);
            t6 = 0x8C0BB580;
            primLineH(0x2, 0xFFFFFF00, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(u10, 437.0f, 1.0f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(67.0f, 437.0f, 1.0f);
            primLineH(0x2, 0xFFFFFF00, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(67.0f, 437.0f, 1.0f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(67.0f, u9, 1.0f);
            primLineV(0x2, 0xFFFFFF00, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(u10, 437.0f, 1.0f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(u10, u9, 1.0f);
            primLineV(0x2, 0xFFFFFF00, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
        }
        t6 = t225;
        nlWaitVSync();
        mainCheckReset();
        mainCheckDrive();
        pdExecPeripheralServer();
        padRepeatExec();
        t6 = (*(int *)(((int)stk + 112)));
        if (t6 == 0) continue;
        break;
    }
    sprTexFree(0x150);
    sprTexFree(0x151);
    sprTexFree(0x152);
    sprTexFree(0x153);
    nlInitPrint();
    nlPrnIndentOn();
    return (nlPrintSetZ((*(float *)0x8C0117D8)));
}
