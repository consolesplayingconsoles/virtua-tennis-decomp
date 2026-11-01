/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int menuTextMsgPut(int a4, int a5, int a6, int a7, int a8, float f4);

int menuTextMsgPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[127];

    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    stk[118] = a8;
    v0_4 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
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
    v0_5 = (0x8C33533C);
    v0_0 = (v0_4);
    v0_1 = ((0x1C8 + ((int)stk + 16)));
    v0_5 = (0x8C3358DC);
    v0_4 = (0x8C184930);
    v0_3 = (0x8C33506C);
    v0_6 = (0x8C33547C);
    v0_6 = (0x8C1849F8);
    w0_0 = (w0_1);
    *(unsigned int *)(((int)stk + 308)) = v0_5;
    *(unsigned int *)(((int)stk + 304)) = (0x1B8 + v0_4);
    *(unsigned int *)(((int)stk + 300)) = (0x8C0 + v0_3);
    *(unsigned int *)(((int)stk + 296)) = (0x1C8 + v0_4);
    *(unsigned int *)(((int)stk + 292)) = (0x910 + v0_3);
    *(unsigned int *)(((int)stk + 288)) = (0x1D8 + v0_4);
    *(unsigned int *)(((int)stk + 284)) = (0x960 + v0_3);
    *(unsigned int *)(((int)stk + 280)) = (0x1E8 + v0_4);
    *(unsigned int *)(((int)stk + 276)) = (0x9B0 + v0_3);
    *(unsigned int *)(((int)stk + 272)) = (0x1F8 + v0_4);
    *(unsigned int *)(((int)stk + 268)) = (0xA00 + v0_3);
    *(unsigned int *)(((int)stk + 264)) = (0x208 + v0_4);
    *(unsigned int *)(((int)stk + 260)) = (0xA50 + v0_3);
    *(unsigned int *)(((int)stk + 256)) = (0x218 + v0_4);
    *(unsigned int *)(((int)stk + 252)) = (0xAA0 + v0_3);
    *(unsigned int *)(((int)stk + 248)) = (0x228 + v0_4);
    *(unsigned int *)(((int)stk + 244)) = (0xAF0 + v0_3);
    *(unsigned int *)(((int)stk + 240)) = (0x238 + v0_4);
    *(unsigned int *)(((int)stk + 236)) = (0xB40 + v0_3);
    *(unsigned int *)(((int)stk + 232)) = (0x248 + v0_4);
    *(unsigned int *)(((int)stk + 228)) = (0xB90 + v0_3);
    *(unsigned int *)(((int)stk + 224)) = (0x258 + v0_4);
    *(unsigned int *)(((int)stk + 220)) = (0xBE0 + v0_3);
    *(unsigned int *)(((int)stk + 216)) = (0x268 + v0_4);
    *(unsigned int *)(((int)stk + 212)) = (0xC30 + v0_3);
    *(unsigned int *)(((int)stk + 208)) = (0x278 + v0_4);
    *(unsigned int *)(((int)stk + 204)) = (0xC80 + v0_3);
    *(unsigned int *)(((int)stk + 200)) = (0x288 + v0_4);
    *(unsigned int *)(((int)stk + 196)) = (0xCD0 + v0_3);
    *(unsigned int *)(((int)stk + 192)) = (0x298 + v0_4);
    *(unsigned int *)(((int)stk + 188)) = (0xD20 + v0_3);
    *(unsigned int *)(((int)stk + 184)) = (0x2A8 + v0_4);
    *(unsigned int *)(((int)stk + 180)) = (0xD70 + v0_3);
    *(unsigned int *)(((int)stk + 176)) = (0x2B8 + v0_4);
    *(unsigned int *)(((int)stk + 172)) = (0xDC0 + v0_3);
    *(unsigned int *)(((int)stk + 168)) = (0x2C8 + v0_4);
    *(unsigned int *)(((int)stk + 164)) = (0xE10 + v0_3);
    *(unsigned int *)(((int)stk + 160)) = (0x2D8 + v0_4);
    *(unsigned int *)(((int)stk + 156)) = (0xE60 + v0_3);
    *(unsigned int *)(((int)stk + 152)) = (0x2E8 + v0_4);
    *(unsigned int *)(((int)stk + 148)) = (0xEB0 + v0_3);
    *(unsigned int *)(((int)stk + 144)) = (0x2F8 + v0_4);
    *(unsigned int *)(((int)stk + 140)) = (0xF00 + v0_3);
    *(unsigned int *)(((int)stk + 136)) = (0x308 + v0_4);
    *(unsigned int *)(((int)stk + 132)) = (0xF50 + v0_3);
    *(unsigned int *)(((int)stk + 128)) = (0x318 + v0_4);
    *(unsigned int *)(((int)stk + 124)) = (0xFA0 + v0_3);
    *(unsigned int *)(((int)stk + 120)) = (0x328 + v0_4);
    *(unsigned int *)(((int)stk + 116)) = (0xFF0 + v0_3);
    *(unsigned int *)(((int)stk + 112)) = (0x338 + v0_4);
    *(unsigned int *)(((int)stk + 108)) = (0x1040 + v0_3);
    *(unsigned int *)(((int)stk + 104)) = (0x348 + v0_4);
    *(unsigned int *)(((int)stk + 100)) = (0x1090 + v0_3);
    *(unsigned int *)(((int)stk + 96)) = (0x358 + v0_4);
    *(unsigned int *)(((int)stk + 92)) = (0x10E0 + v0_3);
    *(unsigned int *)(((int)stk + 88)) = (0x368 + v0_4);
    *(unsigned int *)(((int)stk + 84)) = (0x1130 + v0_3);
    *(unsigned int *)(((int)stk + 80)) = (0x378 + v0_4);
    *(unsigned int *)(((int)stk + 76)) = (0x1180 + v0_3);
    *(unsigned int *)(((int)stk + 72)) = (0x388 + v0_4);
    *(unsigned int *)(((int)stk + 68)) = (0x11D0 + v0_3);
    *(unsigned int *)(((int)stk + 64)) = (0x398 + v0_4);
    *(unsigned int *)(((int)stk + 60)) = (0x1220 + v0_3);
    *(unsigned int *)(((int)stk + 56)) = (0x3A8 + v0_4);
    *(unsigned int *)(((int)stk + 52)) = (0x1270 + v0_3);
    *(unsigned int *)(((int)stk + 48)) = (0x3B8 + v0_4);
    *(unsigned int *)(((int)stk + 44)) = (0x12C0 + v0_3);
    *(unsigned int *)(((int)stk + 40)) = (0x3C8 + v0_4);
    v0_2 = ((0x3D8 + v0_4));
    v0_3 = ((0x1310 + v0_3));
    v0_4 = ((0x3C8 + v0_4));
    L_8C093F2C:;
    v0_4 = *(signed char *)((v0_0 + 0x0));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_8C093F36;
    v0_5 = *(signed char *)((v0_0 + 0x0));
    v0_4 = ((v0_5 - 46));
    w0_1 = (1.0f);
    if (!(((unsigned int)(v0_5 - 46) < (unsigned int)0x4D))) goto L_8C093F20;
    v0_5 = ((v0_4 << 1));
    switch (((v0_4 << 1))) { case 0: goto L_8C093EEA; case 2: goto L_8C093F20; case 4: goto L_8C093F20; case 6: goto L_8C093F20; case 8: goto L_8C093F20; case 10: goto L_8C093F20; case 12: goto L_8C093F20; case 14: goto L_8C093F20; case 16: goto L_8C093F20; case 18: goto L_8C093F20; case 20: goto L_8C093F20; case 22: goto L_8C093F20; case 24: goto L_8C093F20; case 26: goto L_8C093F20; case 28: goto L_8C093F20; case 30: goto L_8C093F20; case 32: goto L_8C093F20; case 34: goto L_8C093F20; case 36: goto L_8C093F20; case 38: goto L_8C0935C2; case 40: goto L_8C0935E6; case 42: goto L_8C09360C; case 44: goto L_8C093632; case 46: goto L_8C093654; case 48: goto L_8C09367A; case 50: goto L_8C0936A4; case 52: goto L_8C0936CE; case 54: goto L_8C09370C; case 56: goto L_8C093736; case 58: goto L_8C093760; case 60: goto L_8C09378A; case 62: goto L_8C0937B4; case 64: goto L_8C0937DE; case 66: goto L_8C093808; case 68: goto L_8C09384C; case 70: goto L_8C093876; case 72: goto L_8C0938A0; case 74: goto L_8C0938CA; case 76: goto L_8C0938F4; case 78: goto L_8C09391E; case 80: goto L_8C093948; case 82: goto L_8C09398C; case 84: goto L_8C0939B6; case 86: goto L_8C0939E0; case 88: goto L_8C093A0A; case 90: goto L_8C093F20; case 92: goto L_8C093F20; case 94: goto L_8C093F20; case 96: goto L_8C093F20; case 98: goto L_8C093F20; case 100: goto L_8C093F20; case 102: goto L_8C093A34; case 104: goto L_8C093A5E; case 106: goto L_8C093A88; case 108: goto L_8C093ACC; case 110: goto L_8C093AF6; case 112: goto L_8C093B20; case 114: goto L_8C093B4A; case 116: goto L_8C093B74; case 118: goto L_8C093B9E; case 120: goto L_8C093BC8; case 122: goto L_8C093C0C; case 124: goto L_8C093C36; case 126: goto L_8C093C60; case 128: goto L_8C093C8A; case 130: goto L_8C093CB4; case 132: goto L_8C093CDE; case 134: goto L_8C093D08; case 136: goto L_8C093D44; case 138: goto L_8C093D74; case 140: goto L_8C093DA8; case 142: goto L_8C093DD2; case 144: goto L_8C093E04; case 146: goto L_8C093E2C; case 148: goto L_8C093E62; case 150: goto L_8C093E88; case 152: goto L_8C093EAE; }
    goto L_8C093EEA;
    L_8C093F20:;
    w0_2 = (((*(float *)((v0_1 + 0x0))) + 5.0f));
    w0_1 = (5.0f);
    L_8C093F28:;
    *(float *)((v0_1 + 0x0)) = w0_2;
    L_8C093F2A:;
    v0_0 = ((v0_0 + 0x1));
    goto L_8C093F2C;
    L_8C093EEA:;
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha(v0_3, *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)((v0_2 + 0x0));
    v0_4 = ((int)w0_1);
    FPUL_ = ((int)w0_1);
    L_8C093F0E:;
    w0_1 = *(float *)((v0_1 + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_1 + (float)FPUL_);
    w0_3 = ((w0_1 + (float)FPUL_));
    w0_2 = ((float)FPUL_);
    goto L_8C093F2A;
    L_8C093EAE:;
    *(float *)((v0_1 + 0x4)) = ((*(float *)((v0_1 + 0x4))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 44))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_3 = *(float *)((v0_1 + 0x0));
    w0_2 = *(float *)(((*(int *)(((int)stk + 40))) + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_3 + (float)((int)w0_2 - 2));
    v0_4 = (((int)w0_2 - 2));
    w0_3 = ((w0_3 + (float)((int)w0_2 - 2)));
    FPUL_ = (((int)w0_2 - 2));
    L_8C093EE0:;
    w0_2 = *(float *)((v0_1 + 0x4));
    *(float *)((v0_1 + 0x4)) = (w0_2 - w0_1);
    w0_2 = ((w0_2 - w0_1));
    goto L_8C093F2A;
    L_8C093E88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 52))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 48))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093E62:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 60))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093E2C:;
    *(float *)((v0_1 + 0x4)) = ((*(float *)((v0_1 + 0x4))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 68))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_2 = *(float *)(((*(int *)(((int)stk + 64))) + 0x0));
    v0_4 = (((int)w0_2 - 4));
    FPUL_ = (((int)w0_2 - 4));
    L_8C093E58:;
    w0_2 = *(float *)((v0_1 + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_2 + (float)FPUL_);
    w0_3 = ((w0_2 + (float)FPUL_));
    goto L_8C093EE0;
    L_8C093E04:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 76))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 72))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093DD2:;
    *(float *)((v0_1 + 0x4)) = ((*(float *)((v0_1 + 0x4))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_2 = *(float *)(((*(int *)(((int)stk + 80))) + 0x0));
    v0_4 = (((int)w0_2 - 2));
    FPUL_ = (((int)w0_2 - 2));
    goto L_8C093E58;
    L_8C093DA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 92))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 88))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093D74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_3 = *(float *)((v0_1 + 0x0));
    w0_2 = *(float *)(((*(int *)(((int)stk + 96))) + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_3 + (float)((int)w0_2 - 2));
    v0_4 = (((int)w0_2 - 2));
    w0_3 = ((w0_3 + (float)((int)w0_2 - 2)));
    FPUL_ = (((int)w0_2 - 2));
    L_8C093DA2:;
    w0_2 = (((*(float *)((v0_1 + 0x0))) - w0_1));
    goto L_8C093F28;
    L_8C093D44:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 108))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_2 = *(float *)(((*(int *)(((int)stk + 104))) + 0x0));
    v0_4 = (((int)w0_2 - 2));
    FPUL_ = (((int)w0_2 - 2));
    L_8C093D6A:;
    w0_2 = *(float *)((v0_1 + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_2 + (float)FPUL_);
    w0_3 = ((w0_2 + (float)FPUL_));
    goto L_8C093DA2;
    L_8C093D08:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 112))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093CDE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 124))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 120))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093CB4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 132))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 128))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093C8A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 136))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093C60:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 148))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 144))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093C36:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 156))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 152))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093C0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 164))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 160))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093BC8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 172))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 168))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093B9E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 180))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 176))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093B74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 188))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 184))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093B4A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 196))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 192))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093B20:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 204))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 200))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093AF6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 212))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 208))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093ACC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 220))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 216))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093A88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 228))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 224))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093A5E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 236))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 232))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093A34:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 244))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 240))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093A0A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 252))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 248))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0939E0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 260))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 256))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0939B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 268))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 264))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09398C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 276))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 272))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093948:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 284))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 280))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09391E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 292))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 288))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0938F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 300))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 296))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0938CA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 308))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 304))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0938A0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 316))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 312))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093876:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 324))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 320))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09384C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 332))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 328))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093808:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 340))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 336))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0937DE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 348))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 344))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0937B4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 356))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 352))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09378A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 364))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 360))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093760:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 372))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 368))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093736:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 380))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 376))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09370C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 388))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 384))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0936CE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 396))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 392))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0936A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 404))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 400))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09367A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 412))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 408))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C093654:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha(v0_6, *(Stk3 *)(((int)stk + 4)), w0_0);
    v0_5 = *(int *)(((int)stk + 416));
    v0_4 = (v0_5);
    FPUL_ = (((int)(*(float *)((v0_5 + 0x0))) - 2));
    goto L_8C093F0E;
    L_8C093632:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)((v0_6 + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C09360C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 28))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 32))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0935E6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha((*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4)), w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 24))) + 0x0));
    v0_4 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C093F0E;
    L_8C0935C2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    sprPutAtAlpha(v0_5, *(Stk3 *)(((int)stk + 4)), w0_0);
    v0_5 = *(int *)(((int)stk + 20));
    v0_4 = (v0_5);
    FPUL_ = (((int)(*(float *)((v0_5 + 0x0))) - 2));
    goto L_8C093D6A;
    L_8C093F36:;
    return (int)((*(float *)((v0_1 + 0x0))) - (*(float *)(((int)stk + 420))));
}
