/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuTextMsgPutB(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

int menuTextMsgPutB(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int stk[129];

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
    register float w0_4;
    stk[120] = a8;
    v0_4 = a4;
    v0_0 = a6;
    v0_0 = a7;
    w0_1 = f4;
    w0_0 = f5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x19C + ((int)stk + 16))) = *(struct mv3 *)((0x1D0 + ((int)stk + 16))); }
    *(unsigned int *)(((int)stk + 20)) = 0x8C33533C;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1849C8;
    *(unsigned int *)(((int)stk + 24)) = 0x8C1849D8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C3353DC;
    *(unsigned int *)(((int)stk + 28)) = 0x8C1849E8;
    *(unsigned int *)(((int)stk + 32)) = 0x8C33542C;
    *(unsigned int *)(((int)stk + 36)) = 0x8C1849F8;
    *(unsigned int *)(((int)stk + 44)) = 0x8C33547C;
    *(unsigned int *)(((int)stk + 424)) = 0x8C184A18;
    *(unsigned int *)(((int)stk + 420)) = 0x8C33551C;
    *(unsigned int *)(((int)stk + 416)) = 0x8C184A28;
    *(unsigned int *)(((int)stk + 412)) = 0x8C33556C;
    *(unsigned int *)(((int)stk + 408)) = 0x8C184A38;
    *(unsigned int *)(((int)stk + 404)) = 0x8C3355BC;
    *(unsigned int *)(((int)stk + 400)) = 0x8C184A48;
    *(unsigned int *)(((int)stk + 396)) = 0x8C33560C;
    *(unsigned int *)(((int)stk + 392)) = 0x8C184A58;
    *(unsigned int *)(((int)stk + 388)) = 0x8C33565C;
    *(unsigned int *)(((int)stk + 384)) = 0x8C184A68;
    *(unsigned int *)(((int)stk + 380)) = 0x8C3356AC;
    *(unsigned int *)(((int)stk + 376)) = 0x8C184A78;
    *(unsigned int *)(((int)stk + 372)) = 0x8C3356FC;
    *(unsigned int *)(((int)stk + 368)) = 0x8C184A88;
    *(unsigned int *)(((int)stk + 364)) = 0x8C33574C;
    *(unsigned int *)(((int)stk + 360)) = 0x8C184A98;
    *(unsigned int *)(((int)stk + 356)) = 0x8C33579C;
    *(unsigned int *)(((int)stk + 352)) = 0x8C184AA8;
    *(unsigned int *)(((int)stk + 348)) = 0x8C3357EC;
    *(unsigned int *)(((int)stk + 344)) = 0x8C184AB8;
    *(unsigned int *)(((int)stk + 340)) = 0x8C33583C;
    *(unsigned int *)(((int)stk + 336)) = 0x8C184AC8;
    *(unsigned int *)(((int)stk + 332)) = 0x8C33588C;
    *(unsigned int *)(((int)stk + 328)) = 0x8C184AD8;
    *(unsigned int *)(((int)stk + 324)) = 0x8C3358DC;
    v0_5 = (0x8C33538C);
    v0_1 = (v0_4);
    v0_2 = ((0x1D0 + ((int)stk + 16)));
    v0_4 = (0x8C184930);
    v0_6 = (0x8C33506C);
    v0_5 = (0x8C3354CC);
    v0_5 = (0x8C184A08);
    w0_0 = (w0_1);
    *(unsigned int *)(((int)stk + 320)) = (0x1B8 + v0_4);
    *(unsigned int *)(((int)stk + 316)) = (0x8C0 + v0_6);
    *(unsigned int *)(((int)stk + 312)) = (0x1C8 + v0_4);
    *(unsigned int *)(((int)stk + 308)) = (0x910 + v0_6);
    *(unsigned int *)(((int)stk + 304)) = (0x1D8 + v0_4);
    *(unsigned int *)(((int)stk + 300)) = (0x960 + v0_6);
    *(unsigned int *)(((int)stk + 296)) = (0x1E8 + v0_4);
    *(unsigned int *)(((int)stk + 292)) = (0x9B0 + v0_6);
    *(unsigned int *)(((int)stk + 288)) = (0x1F8 + v0_4);
    *(unsigned int *)(((int)stk + 284)) = (0xA00 + v0_6);
    *(unsigned int *)(((int)stk + 280)) = (0x208 + v0_4);
    *(unsigned int *)(((int)stk + 276)) = (0xA50 + v0_6);
    *(unsigned int *)(((int)stk + 272)) = (0x218 + v0_4);
    *(unsigned int *)(((int)stk + 268)) = (0xAA0 + v0_6);
    *(unsigned int *)(((int)stk + 264)) = (0x228 + v0_4);
    *(unsigned int *)(((int)stk + 260)) = (0xAF0 + v0_6);
    *(unsigned int *)(((int)stk + 256)) = (0x238 + v0_4);
    *(unsigned int *)(((int)stk + 252)) = (0xB40 + v0_6);
    *(unsigned int *)(((int)stk + 248)) = (0x248 + v0_4);
    *(unsigned int *)(((int)stk + 244)) = (0xB90 + v0_6);
    *(unsigned int *)(((int)stk + 240)) = (0x258 + v0_4);
    *(unsigned int *)(((int)stk + 236)) = (0xBE0 + v0_6);
    *(unsigned int *)(((int)stk + 232)) = (0x268 + v0_4);
    *(unsigned int *)(((int)stk + 228)) = (0xC30 + v0_6);
    *(unsigned int *)(((int)stk + 224)) = (0x278 + v0_4);
    *(unsigned int *)(((int)stk + 220)) = (0xC80 + v0_6);
    *(unsigned int *)(((int)stk + 216)) = (0x288 + v0_4);
    *(unsigned int *)(((int)stk + 212)) = (0xCD0 + v0_6);
    *(unsigned int *)(((int)stk + 208)) = (0x298 + v0_4);
    *(unsigned int *)(((int)stk + 204)) = (0xD20 + v0_6);
    *(unsigned int *)(((int)stk + 200)) = (0x2A8 + v0_4);
    *(unsigned int *)(((int)stk + 196)) = (0xD70 + v0_6);
    *(unsigned int *)(((int)stk + 192)) = (0x2B8 + v0_4);
    *(unsigned int *)(((int)stk + 188)) = (0xDC0 + v0_6);
    *(unsigned int *)(((int)stk + 184)) = (0x2C8 + v0_4);
    *(unsigned int *)(((int)stk + 180)) = (0xE10 + v0_6);
    *(unsigned int *)(((int)stk + 176)) = (0x2D8 + v0_4);
    *(unsigned int *)(((int)stk + 172)) = (0xE60 + v0_6);
    v0_3 = ((0x2E8 + v0_4));
    *(unsigned int *)(((int)stk + 168)) = v0_3;
    *(unsigned int *)(((int)stk + 164)) = (0xEB0 + v0_6);
    *(unsigned int *)(((int)stk + 160)) = (0x2F8 + v0_4);
    *(unsigned int *)(((int)stk + 156)) = (0xF00 + v0_6);
    *(unsigned int *)(((int)stk + 152)) = (0x308 + v0_4);
    *(unsigned int *)(((int)stk + 148)) = (0xF50 + v0_6);
    *(unsigned int *)(((int)stk + 144)) = (0x318 + v0_4);
    *(unsigned int *)(((int)stk + 140)) = (0xFA0 + v0_6);
    *(unsigned int *)(((int)stk + 136)) = (0x328 + v0_4);
    *(unsigned int *)(((int)stk + 132)) = (0xFF0 + v0_6);
    *(unsigned int *)(((int)stk + 128)) = (0x338 + v0_4);
    *(unsigned int *)(((int)stk + 124)) = (0x1040 + v0_6);
    *(unsigned int *)(((int)stk + 120)) = (0x348 + v0_4);
    *(unsigned int *)(((int)stk + 116)) = (0x1090 + v0_6);
    *(unsigned int *)(((int)stk + 112)) = (0x358 + v0_4);
    *(unsigned int *)(((int)stk + 108)) = (0x10E0 + v0_6);
    *(unsigned int *)(((int)stk + 104)) = (0x368 + v0_4);
    *(unsigned int *)(((int)stk + 100)) = (0x1130 + v0_6);
    *(unsigned int *)(((int)stk + 96)) = (0x378 + v0_4);
    *(unsigned int *)(((int)stk + 92)) = (0x1180 + v0_6);
    *(unsigned int *)(((int)stk + 88)) = (0x388 + v0_4);
    *(unsigned int *)(((int)stk + 84)) = (0x11D0 + v0_6);
    *(unsigned int *)(((int)stk + 80)) = (0x398 + v0_4);
    *(unsigned int *)(((int)stk + 76)) = (0x1220 + v0_6);
    *(unsigned int *)(((int)stk + 72)) = (0x3A8 + v0_4);
    *(unsigned int *)(((int)stk + 68)) = (0x1270 + v0_6);
    *(unsigned int *)(((int)stk + 64)) = (0x3B8 + v0_4);
    *(unsigned int *)(((int)stk + 60)) = (0x12C0 + v0_6);
    *(unsigned int *)(((int)stk + 56)) = (0x3C8 + v0_4);
    *(unsigned int *)(((int)stk + 52)) = (v0_6 + 0x1310);
    *(unsigned int *)(((int)stk + 48)) = (v0_4 + 0x3D8);
    v0_3 = (0x3D8);
    v0_4 = ((v0_4 + 0x3D8));
    v0_6 = ((v0_6 + 0x1310));
    L_8C094EBE:;
    v0_3 = *(signed char *)((v0_1 + 0x0));
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_8C094EC8;
    v0_6 = *(signed char *)((v0_1 + 0x0));
    v0_5 = ((v0_6 - 46));
    v0_3 = (0x8C0BAF18);
    v0_4 = (0x100);
    w0_1 = (1.0f);
    if (!(((unsigned int)(v0_6 - 46) < (unsigned int)0x4D))) goto L_8C094EA8;
    v0_6 = ((v0_5 << 1));
    switch (((v0_5 << 1))) { case 0: goto L_8C094E6E; case 2: goto L_8C094EA8; case 4: goto L_8C094EA8; case 6: goto L_8C094EA8; case 8: goto L_8C094EA8; case 10: goto L_8C094EA8; case 12: goto L_8C094EA8; case 14: goto L_8C094EA8; case 16: goto L_8C094EA8; case 18: goto L_8C094EA8; case 20: goto L_8C094EA8; case 22: goto L_8C094EA8; case 24: goto L_8C094EA8; case 26: goto L_8C094EA8; case 28: goto L_8C094EA8; case 30: goto L_8C094EA8; case 32: goto L_8C094EA8; case 34: goto L_8C094EA8; case 36: goto L_8C094EA8; case 38: goto L_8C0944EA; case 40: goto L_8C094520; case 42: goto L_8C09454A; case 44: goto L_8C094572; case 46: goto L_8C09459A; case 48: goto L_8C0945C0; case 50: goto L_8C0945EC; case 52: goto L_8C094618; case 54: goto L_8C094650; case 56: goto L_8C09467C; case 58: goto L_8C0946A8; case 60: goto L_8C0946D4; case 62: goto L_8C094700; case 64: goto L_8C09472C; case 66: goto L_8C094758; case 68: goto L_8C09479C; case 70: goto L_8C0947C8; case 72: goto L_8C0947F4; case 74: goto L_8C094820; case 76: goto L_8C09484C; case 78: goto L_8C094878; case 80: goto L_8C0948A4; case 82: goto L_8C0948E8; case 84: goto L_8C094914; case 86: goto L_8C094940; case 88: goto L_8C09496C; case 90: goto L_8C094EA8; case 92: goto L_8C094EA8; case 94: goto L_8C094EA8; case 96: goto L_8C094EA8; case 98: goto L_8C094EA8; case 100: goto L_8C094EA8; case 102: goto L_8C094998; case 104: goto L_8C0949C4; case 106: goto L_8C0949F0; case 108: goto L_8C094A34; case 110: goto L_8C094A60; case 112: goto L_8C094A8C; case 114: goto L_8C094AB8; case 116: goto L_8C094AE4; case 118: goto L_8C094B10; case 120: goto L_8C094B3C; case 122: goto L_8C094B80; case 124: goto L_8C094BAC; case 126: goto L_8C094BD8; case 128: goto L_8C094C04; case 130: goto L_8C094C30; case 132: goto L_8C094C5C; case 134: goto L_8C094C88; case 136: goto L_8C094CB4; case 138: goto L_8C094CEC; case 140: goto L_8C094D24; case 142: goto L_8C094D50; case 144: goto L_8C094D82; case 146: goto L_8C094DAE; case 148: goto L_8C094DF2; case 150: goto L_8C094E1C; case 152: goto L_8C094E46; }
    goto L_8C094E6E;
    L_8C094EA8:;
    w0_3 = (((*(float *)((v0_2 + 0x0))) + 4.0f));
    L_8C094EB0:;
    *(float *)((v0_2 + 0x0)) = w0_3;
    L_8C094EB2:;
    w0_1 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_1 - 3.0f);
    v0_1 = ((v0_1 + 0x1));
    w0_3 = ((w0_1 - 3.0f));
    w0_1 = (3.0f);
    goto L_8C094EBE;
    L_8C094E6E:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 52))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 48))) + 0x0));
    v0_3 = ((int)w0_1);
    FPUL_ = ((int)w0_1);
    L_8C094E98:;
    w0_1 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_1 + (float)FPUL_);
    w0_2 = ((w0_1 + (float)FPUL_));
    goto L_8C094EB2;
    L_8C094E46:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 60))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094E1C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 68))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 64))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094DF2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 76))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 72))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094DAE:;
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 84))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_2 = *(float *)(((*(int *)(((int)stk + 80))) + 0x0));
    v0_3 = (((int)w0_2 - 4));
    FPUL_ = ((int)w0_2);
    L_8C094DDE:;
    w0_2 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_2 + (float)v0_3);
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) - w0_1);
    w0_2 = ((w0_2 + (float)v0_3));
    FPUL_ = (v0_3);
    goto L_8C094EB2;
    L_8C094D82:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 92))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 88))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094D50:;
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 100))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_2 = *(float *)(((*(int *)(((int)stk + 96))) + 0x0));
    v0_3 = (((int)w0_2 - 2));
    FPUL_ = ((int)w0_2);
    goto L_8C094DDE;
    L_8C094D24:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 108))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 104))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094CEC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 116))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_3 = ((*(float *)(((*(int *)(((int)stk + 112))) + 0x0))));
    L_8C094D0E:;
    w0_4 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_4 + (float)((int)w0_3 - 2));
    v0_4 = ((int)w0_3 - 2);
    v0_3 = (((int)w0_3 - 2));
    w0_2 = ((w0_4 + (float)((int)w0_3 - 2)));
    w0_3 = (((w0_4 + (float)((int)w0_3 - 2)) - w0_1));
    FPUL_ = v0_4;
    goto L_8C094EB0;
    L_8C094CB4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 124))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_3 = ((*(float *)(((*(int *)(((int)stk + 120))) + 0x0))));
    goto L_8C094D0E;
    L_8C094C88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 132))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 128))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094C5C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 140))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 136))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094C30:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 148))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 144))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094C04:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 156))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 152))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094BD8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 164))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 160))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094BAC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 172))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 168))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094B80:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 180))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 176))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094B3C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 188))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 184))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094B10:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 196))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 192))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094AE4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 204))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 200))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094AB8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 212))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 208))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094A8C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 220))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 216))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094A60:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 228))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 224))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094A34:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 236))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 232))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0949F0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 244))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 240))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0949C4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 252))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 248))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094998:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 260))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 256))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09496C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 268))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 264))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094940:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 276))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 272))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094914:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 284))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 280))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0948E8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 292))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 288))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0948A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 300))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 296))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094878:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 308))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 304))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09484C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 316))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 312))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094820:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 324))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 320))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0947F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 332))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 328))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0947C8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 340))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 336))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09479C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 348))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 344))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094758:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 356))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 352))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09472C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 364))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 360))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094700:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 372))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 368))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0946D4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 380))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 376))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0946A8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 388))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 384))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09467C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 396))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 392))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094650:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 404))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 400))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094618:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 412))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 408))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0945EC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 420))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 416))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C0945C0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))(v0_5, v0_4, v0_4, v0_0, w0_0, w0_0);
    v0_4 = *(int *)(((int)stk + 424));
    v0_3 = (v0_4);
    FPUL_ = (((int)(*(float *)((v0_4 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C09459A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 44))), v0_4, v0_4, v0_0, w0_0, w0_0);
    FPUL_ = (((int)(*(float *)((v0_5 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C094572:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 32))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 36))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C09454A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 16))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_1 = *(float *)(((*(int *)(((int)stk + 28))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094E98;
    L_8C094520:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))(v0_5, v0_4, v0_4, v0_0, w0_0, w0_0);
    v0_4 = *(int *)(((int)stk + 24));
    v0_3 = (v0_4);
    FPUL_ = (((int)(*(float *)((v0_4 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C0944EA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_3 = ((int (*)(int, int, int, int, float, float))(v0_3))((*(int *)(((int)stk + 20))), v0_4, v0_4, v0_0, w0_0, w0_0);
    w0_3 = *(float *)((v0_2 + 0x0));
    w0_1 = *(float *)(((*(int *)(((int)stk + 40))) + 0x0));
    v0_3 = (((int)w0_1 - 2));
    w0_2 = ((w0_3 + (float)((int)w0_1 - 2)));
    w0_3 = (((w0_3 + (float)((int)w0_1 - 2)) - (1.0f + 1.0f)));
    FPUL_ = (((int)w0_1 - 2));
    goto L_8C094EB0;
    L_8C094EC8:;
    return (int)((*(float *)((v0_2 + 0x0))) - (*(float *)(((int)stk + 428))));
}
