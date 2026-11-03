/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int menuTextMsgPut(int a4, int a5, int a6, int a7, Stk3 s, float f4);

int menuTextMsgPut(int a4, int a5, int a6, int a7, Stk3 s, float f4)
{
    int stk[127];
    register int t12;
    register int t15;
    register float u27;
    register float u30;
    register float u37;
    register float u38;
    register float u42;
    register float u47;
    register float u53;
    register float u60;
    register float u63;
    register float u68;
    register float u75;
    register float u81;
    register float u86;
    register float u88;
    register float u97;
    register float u100;
    register float u105;
    register float u111;
    register float u117;
    register float u123;
    register float u129;
    register float u135;
    register float u141;
    register float u147;
    register float u153;
    register float u159;
    register float u165;
    register float u171;
    register float u177;
    register float u183;
    register float u189;
    register float u195;
    register float u201;
    register float u207;
    register float u213;
    register float u219;
    register float u225;
    register float u231;
    register float u237;
    register float u243;
    register float u249;
    register float u255;
    register float u261;
    register float u267;
    register float u273;
    register float u279;
    register float u285;
    register float u291;
    register float u297;
    register float u303;
    register float u309;
    register float u315;
    register float u321;
    register float u327;
    register int t331;
    register float u337;
    register float u343;
    register float u349;
    register int t353;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    stk[118] = s.w[0];
    stk[119] = s.w[1];
    stk[120] = s.w[2];
    R4 = a4;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x194 + ((int)stk + 16))) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
    *(unsigned int *)(((int)stk + 20)) = 0x8C1849C8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C33538C;
    *(unsigned int *)(((int)stk + 24)) = 0x8C1849D8;
    *(unsigned int *)(((int)stk + 28)) = 0x8C3353DC;
    *(unsigned int *)(((int)stk + 32)) = 0x8C1849E8;
    *(unsigned int *)(((int)stk + 36)) = 0x8C33542C;
    *(unsigned int *)(((int)stk + 416)) = 0x8C184A08;
    *(unsigned int *)(((int)stk + 412)) = 0x8C3354CC;
    *(unsigned int *)(((int)stk + 408)) = 0x8C184A18;
    *(unsigned int *)(((int)stk + 404)) = 0x8C33551C;
    *(unsigned int *)(((int)stk + 400)) = 0x8C184A28;
    *(unsigned int *)(((int)stk + 396)) = 0x8C33556C;
    *(unsigned int *)(((int)stk + 392)) = 0x8C184A38;
    *(unsigned int *)(((int)stk + 388)) = 0x8C3355BC;
    *(unsigned int *)(((int)stk + 384)) = 0x8C184A48;
    *(unsigned int *)(((int)stk + 380)) = 0x8C33560C;
    *(unsigned int *)(((int)stk + 376)) = 0x8C184A58;
    *(unsigned int *)(((int)stk + 372)) = 0x8C33565C;
    *(unsigned int *)(((int)stk + 368)) = 0x8C184A68;
    *(unsigned int *)(((int)stk + 364)) = 0x8C3356AC;
    *(unsigned int *)(((int)stk + 360)) = 0x8C184A78;
    *(unsigned int *)(((int)stk + 356)) = 0x8C3356FC;
    *(unsigned int *)(((int)stk + 352)) = 0x8C184A88;
    *(unsigned int *)(((int)stk + 348)) = 0x8C33574C;
    *(unsigned int *)(((int)stk + 344)) = 0x8C184A98;
    *(unsigned int *)(((int)stk + 340)) = 0x8C33579C;
    *(unsigned int *)(((int)stk + 336)) = 0x8C184AA8;
    *(unsigned int *)(((int)stk + 332)) = 0x8C3357EC;
    *(unsigned int *)(((int)stk + 328)) = 0x8C184AB8;
    *(unsigned int *)(((int)stk + 324)) = 0x8C33583C;
    *(unsigned int *)(((int)stk + 320)) = 0x8C184AC8;
    *(unsigned int *)(((int)stk + 316)) = 0x8C33588C;
    *(unsigned int *)(((int)stk + 312)) = 0x8C184AD8;
    R10 = (0x8C33533C);
    R13 = (R4);
    R14 = ((0x1C8 + ((int)stk + 16)));
    R2 = (0x8C3358DC);
    R4 = (0x8C184930);
    R5 = (0x8C33506C);
    R8 = (0x8C33547C);
    R9 = (0x8C1849F8);
    F15 = (F4);
    *(unsigned int *)(((int)stk + 308)) = R2;
    *(unsigned int *)(((int)stk + 304)) = (0x1B8 + R4);
    *(unsigned int *)(((int)stk + 300)) = (0x8C0 + R5);
    *(unsigned int *)(((int)stk + 296)) = (0x1C8 + R4);
    *(unsigned int *)(((int)stk + 292)) = (0x910 + R5);
    *(unsigned int *)(((int)stk + 288)) = (0x1D8 + R4);
    *(unsigned int *)(((int)stk + 284)) = (0x960 + R5);
    *(unsigned int *)(((int)stk + 280)) = (0x1E8 + R4);
    *(unsigned int *)(((int)stk + 276)) = (0x9B0 + R5);
    *(unsigned int *)(((int)stk + 272)) = (0x1F8 + R4);
    *(unsigned int *)(((int)stk + 268)) = (0xA00 + R5);
    *(unsigned int *)(((int)stk + 264)) = (0x208 + R4);
    *(unsigned int *)(((int)stk + 260)) = (0xA50 + R5);
    *(unsigned int *)(((int)stk + 256)) = (0x218 + R4);
    *(unsigned int *)(((int)stk + 252)) = (0xAA0 + R5);
    *(unsigned int *)(((int)stk + 248)) = (0x228 + R4);
    *(unsigned int *)(((int)stk + 244)) = (0xAF0 + R5);
    *(unsigned int *)(((int)stk + 240)) = (0x238 + R4);
    *(unsigned int *)(((int)stk + 236)) = (0xB40 + R5);
    *(unsigned int *)(((int)stk + 232)) = (0x248 + R4);
    *(unsigned int *)(((int)stk + 228)) = (0xB90 + R5);
    *(unsigned int *)(((int)stk + 224)) = (0x258 + R4);
    *(unsigned int *)(((int)stk + 220)) = (0xBE0 + R5);
    *(unsigned int *)(((int)stk + 216)) = (0x268 + R4);
    *(unsigned int *)(((int)stk + 212)) = (0xC30 + R5);
    *(unsigned int *)(((int)stk + 208)) = (0x278 + R4);
    *(unsigned int *)(((int)stk + 204)) = (0xC80 + R5);
    *(unsigned int *)(((int)stk + 200)) = (0x288 + R4);
    *(unsigned int *)(((int)stk + 196)) = (0xCD0 + R5);
    *(unsigned int *)(((int)stk + 192)) = (0x298 + R4);
    *(unsigned int *)(((int)stk + 188)) = (0xD20 + R5);
    *(unsigned int *)(((int)stk + 184)) = (0x2A8 + R4);
    *(unsigned int *)(((int)stk + 180)) = (0xD70 + R5);
    *(unsigned int *)(((int)stk + 176)) = (0x2B8 + R4);
    *(unsigned int *)(((int)stk + 172)) = (0xDC0 + R5);
    *(unsigned int *)(((int)stk + 168)) = (0x2C8 + R4);
    *(unsigned int *)(((int)stk + 164)) = (0xE10 + R5);
    *(unsigned int *)(((int)stk + 160)) = (0x2D8 + R4);
    *(unsigned int *)(((int)stk + 156)) = (0xE60 + R5);
    *(unsigned int *)(((int)stk + 152)) = (0x2E8 + R4);
    *(unsigned int *)(((int)stk + 148)) = (0xEB0 + R5);
    *(unsigned int *)(((int)stk + 144)) = (0x2F8 + R4);
    *(unsigned int *)(((int)stk + 140)) = (0xF00 + R5);
    *(unsigned int *)(((int)stk + 136)) = (0x308 + R4);
    *(unsigned int *)(((int)stk + 132)) = (0xF50 + R5);
    *(unsigned int *)(((int)stk + 128)) = (0x318 + R4);
    *(unsigned int *)(((int)stk + 124)) = (0xFA0 + R5);
    *(unsigned int *)(((int)stk + 120)) = (0x328 + R4);
    *(unsigned int *)(((int)stk + 116)) = (0xFF0 + R5);
    *(unsigned int *)(((int)stk + 112)) = (0x338 + R4);
    *(unsigned int *)(((int)stk + 108)) = (0x1040 + R5);
    *(unsigned int *)(((int)stk + 104)) = (0x348 + R4);
    *(unsigned int *)(((int)stk + 100)) = (0x1090 + R5);
    *(unsigned int *)(((int)stk + 96)) = (0x358 + R4);
    *(unsigned int *)(((int)stk + 92)) = (0x10E0 + R5);
    *(unsigned int *)(((int)stk + 88)) = (0x368 + R4);
    *(unsigned int *)(((int)stk + 84)) = (0x1130 + R5);
    *(unsigned int *)(((int)stk + 80)) = (0x378 + R4);
    *(unsigned int *)(((int)stk + 76)) = (0x1180 + R5);
    *(unsigned int *)(((int)stk + 72)) = (0x388 + R4);
    *(unsigned int *)(((int)stk + 68)) = (0x11D0 + R5);
    *(unsigned int *)(((int)stk + 64)) = (0x398 + R4);
    *(unsigned int *)(((int)stk + 60)) = (0x1220 + R5);
    *(unsigned int *)(((int)stk + 56)) = (0x3A8 + R4);
    *(unsigned int *)(((int)stk + 52)) = (0x1270 + R5);
    *(unsigned int *)(((int)stk + 48)) = (0x3B8 + R4);
    *(unsigned int *)(((int)stk + 44)) = (0x12C0 + R5);
    *(unsigned int *)(((int)stk + 40)) = (0x3C8 + R4);
    R11 = ((0x3D8 + R4));
    R12 = ((0x1310 + R5));
    R3 = ((0x3C8 + R4));
    L_8C093F2C:;
    t12 = *(signed char *)((R13 + 0x0));
    R2 = (t12);
    if ((t12 == 0)) goto L_8C093F36;
    t15 = *(signed char *)((R13 + 0x0));
    R0 = ((t15 - 46));
    F14 = (1.0f);
    if (!(((unsigned int)(t15 - 46) < (unsigned int)0x4D))) goto L_8C093F20;
    R1 = ((R0 << 1));
    switch (((R0 << 1))) { case 0: goto L_8C093EEA; case 2: goto L_8C093F20; case 4: goto L_8C093F20; case 6: goto L_8C093F20; case 8: goto L_8C093F20; case 10: goto L_8C093F20; case 12: goto L_8C093F20; case 14: goto L_8C093F20; case 16: goto L_8C093F20; case 18: goto L_8C093F20; case 20: goto L_8C093F20; case 22: goto L_8C093F20; case 24: goto L_8C093F20; case 26: goto L_8C093F20; case 28: goto L_8C093F20; case 30: goto L_8C093F20; case 32: goto L_8C093F20; case 34: goto L_8C093F20; case 36: goto L_8C093F20; case 38: goto L_8C0935C2; case 40: goto L_8C0935E6; case 42: goto L_8C09360C; case 44: goto L_8C093632; case 46: goto L_8C093654; case 48: goto L_8C09367A; case 50: goto L_8C0936A4; case 52: goto L_8C0936CE; case 54: goto L_8C09370C; case 56: goto L_8C093736; case 58: goto L_8C093760; case 60: goto L_8C09378A; case 62: goto L_8C0937B4; case 64: goto L_8C0937DE; case 66: goto L_8C093808; case 68: goto L_8C09384C; case 70: goto L_8C093876; case 72: goto L_8C0938A0; case 74: goto L_8C0938CA; case 76: goto L_8C0938F4; case 78: goto L_8C09391E; case 80: goto L_8C093948; case 82: goto L_8C09398C; case 84: goto L_8C0939B6; case 86: goto L_8C0939E0; case 88: goto L_8C093A0A; case 90: goto L_8C093F20; case 92: goto L_8C093F20; case 94: goto L_8C093F20; case 96: goto L_8C093F20; case 98: goto L_8C093F20; case 100: goto L_8C093F20; case 102: goto L_8C093A34; case 104: goto L_8C093A5E; case 106: goto L_8C093A88; case 108: goto L_8C093ACC; case 110: goto L_8C093AF6; case 112: goto L_8C093B20; case 114: goto L_8C093B4A; case 116: goto L_8C093B74; case 118: goto L_8C093B9E; case 120: goto L_8C093BC8; case 122: goto L_8C093C0C; case 124: goto L_8C093C36; case 126: goto L_8C093C60; case 128: goto L_8C093C8A; case 130: goto L_8C093CB4; case 132: goto L_8C093CDE; case 134: goto L_8C093D08; case 136: goto L_8C093D44; case 138: goto L_8C093D74; case 140: goto L_8C093DA8; case 142: goto L_8C093DD2; case 144: goto L_8C093E04; case 146: goto L_8C093E2C; case 148: goto L_8C093E62; case 150: goto L_8C093E88; case 152: goto L_8C093EAE; }
    goto L_8C093EEA;
    L_8C093F20:;
    F3 = (((*(float *)((R14 + 0x0))) + 5.0f));
    F4 = (5.0f);
    L_8C093F28:;
    *(float *)((R14 + 0x0)) = F3;
    L_8C093F2A:;
    R13 = ((R13 + 0x1));
    goto L_8C093F2C;
    L_8C093EEA:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha(R12, *(Stk3 *)(((int)stk + 4)), F15);
    u27 = *(float *)((R11 + 0x0));
    R3 = ((int)u27);
    FPUL_ = ((int)u27);
    L_8C093F0E:;
    u30 = *(float *)((R14 + 0x0));
    *(float *)((R14 + 0x0)) = (u30 + (float)FPUL_);
    F2 = ((u30 + (float)FPUL_));
    F3 = ((float)FPUL_);
    goto L_8C093F2A;
    L_8C093EAE:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 44))), *(Stk3 *)(((int)stk + 4)), F15);
    u37 = *(float *)((R14 + 0x0));
    u38 = *(float *)(((*(int *)(((int)stk + 40))) + 0x0));
    *(float *)((R14 + 0x0)) = (u37 + (float)((int)u38 - 2));
    R3 = (((int)u38 - 2));
    F2 = ((u37 + (float)((int)u38 - 2)));
    FPUL_ = (((int)u38 - 2));
    L_8C093EE0:;
    u42 = *(float *)((R14 + 0x4));
    *(float *)((R14 + 0x4)) = (u42 - F14);
    F3 = ((u42 - F14));
    goto L_8C093F2A;
    L_8C093E88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 52))), *(Stk3 *)(((int)stk + 4)), F15);
    u47 = *(float *)(((*(int *)(((int)stk + 48))) + 0x0));
    R3 = (((int)u47 - 2));
    FPUL_ = (((int)u47 - 2));
    goto L_8C093F0E;
    L_8C093E62:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 60))), *(Stk3 *)(((int)stk + 4)), F15);
    u53 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
    R3 = (((int)u53 - 2));
    FPUL_ = (((int)u53 - 2));
    goto L_8C093F0E;
    L_8C093E2C:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 68))), *(Stk3 *)(((int)stk + 4)), F15);
    u60 = *(float *)(((*(int *)(((int)stk + 64))) + 0x0));
    R3 = (((int)u60 - 4));
    FPUL_ = (((int)u60 - 4));
    L_8C093E58:;
    u63 = *(float *)((R14 + 0x0));
    *(float *)((R14 + 0x0)) = (u63 + (float)FPUL_);
    F2 = ((u63 + (float)FPUL_));
    goto L_8C093EE0;
    L_8C093E04:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 76))), *(Stk3 *)(((int)stk + 4)), F15);
    u68 = *(float *)(((*(int *)(((int)stk + 72))) + 0x0));
    R3 = (((int)u68 - 2));
    FPUL_ = (((int)u68 - 2));
    goto L_8C093F0E;
    L_8C093DD2:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 4)), F15);
    u75 = *(float *)(((*(int *)(((int)stk + 80))) + 0x0));
    R3 = (((int)u75 - 2));
    FPUL_ = (((int)u75 - 2));
    goto L_8C093E58;
    L_8C093DA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 92))), *(Stk3 *)(((int)stk + 4)), F15);
    u81 = *(float *)(((*(int *)(((int)stk + 88))) + 0x0));
    R3 = (((int)u81 - 2));
    FPUL_ = (((int)u81 - 2));
    goto L_8C093F0E;
    L_8C093D74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 4)), F15);
    u86 = *(float *)((R14 + 0x0));
    u88 = *(float *)(((*(int *)(((int)stk + 96))) + 0x0));
    *(float *)((R14 + 0x0)) = (u86 + (float)((int)u88 - 2));
    R3 = (((int)u88 - 2));
    F2 = ((u86 + (float)((int)u88 - 2)));
    FPUL_ = (((int)u88 - 2));
    L_8C093DA2:;
    F3 = (((*(float *)((R14 + 0x0))) - F14));
    goto L_8C093F28;
    L_8C093D44:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 108))), *(Stk3 *)(((int)stk + 4)), F15);
    u97 = *(float *)(((*(int *)(((int)stk + 104))) + 0x0));
    R3 = (((int)u97 - 2));
    FPUL_ = (((int)u97 - 2));
    L_8C093D6A:;
    u100 = *(float *)((R14 + 0x0));
    *(float *)((R14 + 0x0)) = (u100 + (float)FPUL_);
    F2 = ((u100 + (float)FPUL_));
    goto L_8C093DA2;
    L_8C093D08:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 4)), F15);
    u105 = *(float *)(((*(int *)(((int)stk + 112))) + 0x0));
    R3 = (((int)u105 - 2));
    FPUL_ = (((int)u105 - 2));
    goto L_8C093F0E;
    L_8C093CDE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 124))), *(Stk3 *)(((int)stk + 4)), F15);
    u111 = *(float *)(((*(int *)(((int)stk + 120))) + 0x0));
    R3 = (((int)u111 - 2));
    FPUL_ = (((int)u111 - 2));
    goto L_8C093F0E;
    L_8C093CB4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 132))), *(Stk3 *)(((int)stk + 4)), F15);
    u117 = *(float *)(((*(int *)(((int)stk + 128))) + 0x0));
    R3 = (((int)u117 - 2));
    FPUL_ = (((int)u117 - 2));
    goto L_8C093F0E;
    L_8C093C8A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 4)), F15);
    u123 = *(float *)(((*(int *)(((int)stk + 136))) + 0x0));
    R3 = (((int)u123 - 2));
    FPUL_ = (((int)u123 - 2));
    goto L_8C093F0E;
    L_8C093C60:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 148))), *(Stk3 *)(((int)stk + 4)), F15);
    u129 = *(float *)(((*(int *)(((int)stk + 144))) + 0x0));
    R3 = (((int)u129 - 2));
    FPUL_ = (((int)u129 - 2));
    goto L_8C093F0E;
    L_8C093C36:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 156))), *(Stk3 *)(((int)stk + 4)), F15);
    u135 = *(float *)(((*(int *)(((int)stk + 152))) + 0x0));
    R3 = (((int)u135 - 2));
    FPUL_ = (((int)u135 - 2));
    goto L_8C093F0E;
    L_8C093C0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 164))), *(Stk3 *)(((int)stk + 4)), F15);
    u141 = *(float *)(((*(int *)(((int)stk + 160))) + 0x0));
    R3 = (((int)u141 - 2));
    FPUL_ = (((int)u141 - 2));
    goto L_8C093F0E;
    L_8C093BC8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 172))), *(Stk3 *)(((int)stk + 4)), F15);
    u147 = *(float *)(((*(int *)(((int)stk + 168))) + 0x0));
    R3 = (((int)u147 - 2));
    FPUL_ = (((int)u147 - 2));
    goto L_8C093F0E;
    L_8C093B9E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 180))), *(Stk3 *)(((int)stk + 4)), F15);
    u153 = *(float *)(((*(int *)(((int)stk + 176))) + 0x0));
    R3 = (((int)u153 - 2));
    FPUL_ = (((int)u153 - 2));
    goto L_8C093F0E;
    L_8C093B74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 188))), *(Stk3 *)(((int)stk + 4)), F15);
    u159 = *(float *)(((*(int *)(((int)stk + 184))) + 0x0));
    R3 = (((int)u159 - 2));
    FPUL_ = (((int)u159 - 2));
    goto L_8C093F0E;
    L_8C093B4A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 196))), *(Stk3 *)(((int)stk + 4)), F15);
    u165 = *(float *)(((*(int *)(((int)stk + 192))) + 0x0));
    R3 = (((int)u165 - 2));
    FPUL_ = (((int)u165 - 2));
    goto L_8C093F0E;
    L_8C093B20:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 204))), *(Stk3 *)(((int)stk + 4)), F15);
    u171 = *(float *)(((*(int *)(((int)stk + 200))) + 0x0));
    R3 = (((int)u171 - 2));
    FPUL_ = (((int)u171 - 2));
    goto L_8C093F0E;
    L_8C093AF6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 212))), *(Stk3 *)(((int)stk + 4)), F15);
    u177 = *(float *)(((*(int *)(((int)stk + 208))) + 0x0));
    R3 = (((int)u177 - 2));
    FPUL_ = (((int)u177 - 2));
    goto L_8C093F0E;
    L_8C093ACC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 220))), *(Stk3 *)(((int)stk + 4)), F15);
    u183 = *(float *)(((*(int *)(((int)stk + 216))) + 0x0));
    R3 = (((int)u183 - 2));
    FPUL_ = (((int)u183 - 2));
    goto L_8C093F0E;
    L_8C093A88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 228))), *(Stk3 *)(((int)stk + 4)), F15);
    u189 = *(float *)(((*(int *)(((int)stk + 224))) + 0x0));
    R3 = (((int)u189 - 2));
    FPUL_ = (((int)u189 - 2));
    goto L_8C093F0E;
    L_8C093A5E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 236))), *(Stk3 *)(((int)stk + 4)), F15);
    u195 = *(float *)(((*(int *)(((int)stk + 232))) + 0x0));
    R3 = (((int)u195 - 2));
    FPUL_ = (((int)u195 - 2));
    goto L_8C093F0E;
    L_8C093A34:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 244))), *(Stk3 *)(((int)stk + 4)), F15);
    u201 = *(float *)(((*(int *)(((int)stk + 240))) + 0x0));
    R3 = (((int)u201 - 2));
    FPUL_ = (((int)u201 - 2));
    goto L_8C093F0E;
    L_8C093A0A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 252))), *(Stk3 *)(((int)stk + 4)), F15);
    u207 = *(float *)(((*(int *)(((int)stk + 248))) + 0x0));
    R3 = (((int)u207 - 2));
    FPUL_ = (((int)u207 - 2));
    goto L_8C093F0E;
    L_8C0939E0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 260))), *(Stk3 *)(((int)stk + 4)), F15);
    u213 = *(float *)(((*(int *)(((int)stk + 256))) + 0x0));
    R3 = (((int)u213 - 2));
    FPUL_ = (((int)u213 - 2));
    goto L_8C093F0E;
    L_8C0939B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 268))), *(Stk3 *)(((int)stk + 4)), F15);
    u219 = *(float *)(((*(int *)(((int)stk + 264))) + 0x0));
    R3 = (((int)u219 - 2));
    FPUL_ = (((int)u219 - 2));
    goto L_8C093F0E;
    L_8C09398C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 276))), *(Stk3 *)(((int)stk + 4)), F15);
    u225 = *(float *)(((*(int *)(((int)stk + 272))) + 0x0));
    R3 = (((int)u225 - 2));
    FPUL_ = (((int)u225 - 2));
    goto L_8C093F0E;
    L_8C093948:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 284))), *(Stk3 *)(((int)stk + 4)), F15);
    u231 = *(float *)(((*(int *)(((int)stk + 280))) + 0x0));
    R3 = (((int)u231 - 2));
    FPUL_ = (((int)u231 - 2));
    goto L_8C093F0E;
    L_8C09391E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 292))), *(Stk3 *)(((int)stk + 4)), F15);
    u237 = *(float *)(((*(int *)(((int)stk + 288))) + 0x0));
    R3 = (((int)u237 - 2));
    FPUL_ = (((int)u237 - 2));
    goto L_8C093F0E;
    L_8C0938F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 300))), *(Stk3 *)(((int)stk + 4)), F15);
    u243 = *(float *)(((*(int *)(((int)stk + 296))) + 0x0));
    R3 = (((int)u243 - 2));
    FPUL_ = (((int)u243 - 2));
    goto L_8C093F0E;
    L_8C0938CA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 308))), *(Stk3 *)(((int)stk + 4)), F15);
    u249 = *(float *)(((*(int *)(((int)stk + 304))) + 0x0));
    R3 = (((int)u249 - 2));
    FPUL_ = (((int)u249 - 2));
    goto L_8C093F0E;
    L_8C0938A0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 316))), *(Stk3 *)(((int)stk + 4)), F15);
    u255 = *(float *)(((*(int *)(((int)stk + 312))) + 0x0));
    R3 = (((int)u255 - 2));
    FPUL_ = (((int)u255 - 2));
    goto L_8C093F0E;
    L_8C093876:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 324))), *(Stk3 *)(((int)stk + 4)), F15);
    u261 = *(float *)(((*(int *)(((int)stk + 320))) + 0x0));
    R3 = (((int)u261 - 2));
    FPUL_ = (((int)u261 - 2));
    goto L_8C093F0E;
    L_8C09384C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 332))), *(Stk3 *)(((int)stk + 4)), F15);
    u267 = *(float *)(((*(int *)(((int)stk + 328))) + 0x0));
    R3 = (((int)u267 - 2));
    FPUL_ = (((int)u267 - 2));
    goto L_8C093F0E;
    L_8C093808:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 340))), *(Stk3 *)(((int)stk + 4)), F15);
    u273 = *(float *)(((*(int *)(((int)stk + 336))) + 0x0));
    R3 = (((int)u273 - 2));
    FPUL_ = (((int)u273 - 2));
    goto L_8C093F0E;
    L_8C0937DE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 348))), *(Stk3 *)(((int)stk + 4)), F15);
    u279 = *(float *)(((*(int *)(((int)stk + 344))) + 0x0));
    R3 = (((int)u279 - 2));
    FPUL_ = (((int)u279 - 2));
    goto L_8C093F0E;
    L_8C0937B4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 356))), *(Stk3 *)(((int)stk + 4)), F15);
    u285 = *(float *)(((*(int *)(((int)stk + 352))) + 0x0));
    R3 = (((int)u285 - 2));
    FPUL_ = (((int)u285 - 2));
    goto L_8C093F0E;
    L_8C09378A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 364))), *(Stk3 *)(((int)stk + 4)), F15);
    u291 = *(float *)(((*(int *)(((int)stk + 360))) + 0x0));
    R3 = (((int)u291 - 2));
    FPUL_ = (((int)u291 - 2));
    goto L_8C093F0E;
    L_8C093760:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 372))), *(Stk3 *)(((int)stk + 4)), F15);
    u297 = *(float *)(((*(int *)(((int)stk + 368))) + 0x0));
    R3 = (((int)u297 - 2));
    FPUL_ = (((int)u297 - 2));
    goto L_8C093F0E;
    L_8C093736:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 380))), *(Stk3 *)(((int)stk + 4)), F15);
    u303 = *(float *)(((*(int *)(((int)stk + 376))) + 0x0));
    R3 = (((int)u303 - 2));
    FPUL_ = (((int)u303 - 2));
    goto L_8C093F0E;
    L_8C09370C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 388))), *(Stk3 *)(((int)stk + 4)), F15);
    u309 = *(float *)(((*(int *)(((int)stk + 384))) + 0x0));
    R3 = (((int)u309 - 2));
    FPUL_ = (((int)u309 - 2));
    goto L_8C093F0E;
    L_8C0936CE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 396))), *(Stk3 *)(((int)stk + 4)), F15);
    u315 = *(float *)(((*(int *)(((int)stk + 392))) + 0x0));
    R3 = (((int)u315 - 2));
    FPUL_ = (((int)u315 - 2));
    goto L_8C093F0E;
    L_8C0936A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 404))), *(Stk3 *)(((int)stk + 4)), F15);
    u321 = *(float *)(((*(int *)(((int)stk + 400))) + 0x0));
    R3 = (((int)u321 - 2));
    FPUL_ = (((int)u321 - 2));
    goto L_8C093F0E;
    L_8C09367A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 412))), *(Stk3 *)(((int)stk + 4)), F15);
    u327 = *(float *)(((*(int *)(((int)stk + 408))) + 0x0));
    R3 = (((int)u327 - 2));
    FPUL_ = (((int)u327 - 2));
    goto L_8C093F0E;
    L_8C093654:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha(R8, *(Stk3 *)(((int)stk + 4)), F15);
    t331 = *(int *)(((int)stk + 416));
    R3 = (t331);
    FPUL_ = (((int)(*(float *)((t331 + 0x0))) - 2));
    goto L_8C093F0E;
    L_8C093632:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), F15);
    u337 = *(float *)((R9 + 0x0));
    R3 = (((int)u337 - 2));
    FPUL_ = (((int)u337 - 2));
    goto L_8C093F0E;
    L_8C09360C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 28))), *(Stk3 *)(((int)stk + 4)), F15);
    u343 = *(float *)(((*(int *)(((int)stk + 32))) + 0x0));
    R3 = (((int)u343 - 2));
    FPUL_ = (((int)u343 - 2));
    goto L_8C093F0E;
    L_8C0935E6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4)), F15);
    u349 = *(float *)(((*(int *)(((int)stk + 24))) + 0x0));
    R3 = (((int)u349 - 2));
    FPUL_ = (((int)u349 - 2));
    goto L_8C093F0E;
    L_8C0935C2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha(R10, *(Stk3 *)(((int)stk + 4)), F15);
    t353 = *(int *)(((int)stk + 20));
    R3 = (t353);
    FPUL_ = (((int)(*(float *)((t353 + 0x0))) - 2));
    goto L_8C093D6A;
    L_8C093F36:;
    return (int)((*(float *)((R14 + 0x0))) - (*(float *)(((int)stk + 420))));
}
