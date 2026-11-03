typedef struct { int w[3]; } Stk3;
int primSprDrawScale(int, int, int, Stk3, float, float);
/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuTextMsgPutB(int a4, int a5, int a6, int a7, Stk3 s, float f4, float f5);

int menuTextMsgPutB(int a4, int a5, int a6, int a7, Stk3 s, float f4, float f5)
{
    int stk[129];
    register int t12;
    register int t15;
    register float u23;
    register int t31;
    register float u33;
    register float u36;
    register int t39;
    register float u41;
    register int t45;
    register float u47;
    register int t51;
    register float u53;
    register int t58;
    register float u60;
    register float u63;
    register int t68;
    register float u70;
    register int t75;
    register float u77;
    register int t81;
    register float u83;
    register int t87;
    register float u91;
    register int t95;
    register int t97;
    register int t102;
    register float u104;
    register int t108;
    register float u110;
    register int t114;
    register float u116;
    register int t120;
    register float u122;
    register int t126;
    register float u128;
    register int t132;
    register float u134;
    register int t138;
    register float u140;
    register int t144;
    register float u146;
    register int t150;
    register float u152;
    register int t156;
    register float u158;
    register int t162;
    register float u164;
    register int t168;
    register float u170;
    register int t174;
    register float u176;
    register int t180;
    register float u182;
    register int t186;
    register float u188;
    register int t192;
    register float u194;
    register int t198;
    register float u200;
    register int t204;
    register float u206;
    register int t210;
    register float u212;
    register int t216;
    register float u218;
    register int t222;
    register float u224;
    register int t228;
    register float u230;
    register int t234;
    register float u236;
    register int t240;
    register float u242;
    register int t246;
    register float u248;
    register int t252;
    register float u254;
    register int t258;
    register float u260;
    register int t264;
    register float u266;
    register int t270;
    register float u272;
    register int t276;
    register float u278;
    register int t282;
    register float u284;
    register int t288;
    register float u290;
    register int t294;
    register float u296;
    register int t300;
    register float u302;
    register int t306;
    register float u308;
    register int t312;
    register float u314;
    register int t318;
    register float u320;
    register int t323;
    register int t324;
    register int t329;
    register int t333;
    register float u335;
    register int t339;
    register float u341;
    register int t344;
    register int t345;
    register int t350;
    register float u352;
    register float u353;

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
    register float F5;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    stk[120] = s.w[0];
    stk[121] = s.w[1];
    stk[122] = s.w[2];
    R4 = a4;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
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
    R10 = (0x8C33538C);
    R11 = (R4);
    R13 = ((0x1D0 + ((int)stk + 16)));
    R4 = (0x8C184930);
    R5 = (0x8C33506C);
    R8 = (0x8C3354CC);
    R9 = (0x8C184A08);
    F15 = (F4);
    *(unsigned int *)(((int)stk + 320)) = (0x1B8 + R4);
    *(unsigned int *)(((int)stk + 316)) = (0x8C0 + R5);
    *(unsigned int *)(((int)stk + 312)) = (0x1C8 + R4);
    *(unsigned int *)(((int)stk + 308)) = (0x910 + R5);
    *(unsigned int *)(((int)stk + 304)) = (0x1D8 + R4);
    *(unsigned int *)(((int)stk + 300)) = (0x960 + R5);
    *(unsigned int *)(((int)stk + 296)) = (0x1E8 + R4);
    *(unsigned int *)(((int)stk + 292)) = (0x9B0 + R5);
    *(unsigned int *)(((int)stk + 288)) = (0x1F8 + R4);
    *(unsigned int *)(((int)stk + 284)) = (0xA00 + R5);
    *(unsigned int *)(((int)stk + 280)) = (0x208 + R4);
    *(unsigned int *)(((int)stk + 276)) = (0xA50 + R5);
    *(unsigned int *)(((int)stk + 272)) = (0x218 + R4);
    *(unsigned int *)(((int)stk + 268)) = (0xAA0 + R5);
    *(unsigned int *)(((int)stk + 264)) = (0x228 + R4);
    *(unsigned int *)(((int)stk + 260)) = (0xAF0 + R5);
    *(unsigned int *)(((int)stk + 256)) = (0x238 + R4);
    *(unsigned int *)(((int)stk + 252)) = (0xB40 + R5);
    *(unsigned int *)(((int)stk + 248)) = (0x248 + R4);
    *(unsigned int *)(((int)stk + 244)) = (0xB90 + R5);
    *(unsigned int *)(((int)stk + 240)) = (0x258 + R4);
    *(unsigned int *)(((int)stk + 236)) = (0xBE0 + R5);
    *(unsigned int *)(((int)stk + 232)) = (0x268 + R4);
    *(unsigned int *)(((int)stk + 228)) = (0xC30 + R5);
    *(unsigned int *)(((int)stk + 224)) = (0x278 + R4);
    *(unsigned int *)(((int)stk + 220)) = (0xC80 + R5);
    *(unsigned int *)(((int)stk + 216)) = (0x288 + R4);
    *(unsigned int *)(((int)stk + 212)) = (0xCD0 + R5);
    *(unsigned int *)(((int)stk + 208)) = (0x298 + R4);
    *(unsigned int *)(((int)stk + 204)) = (0xD20 + R5);
    *(unsigned int *)(((int)stk + 200)) = (0x2A8 + R4);
    *(unsigned int *)(((int)stk + 196)) = (0xD70 + R5);
    *(unsigned int *)(((int)stk + 192)) = (0x2B8 + R4);
    *(unsigned int *)(((int)stk + 188)) = (0xDC0 + R5);
    *(unsigned int *)(((int)stk + 184)) = (0x2C8 + R4);
    *(unsigned int *)(((int)stk + 180)) = (0xE10 + R5);
    *(unsigned int *)(((int)stk + 176)) = (0x2D8 + R4);
    *(unsigned int *)(((int)stk + 172)) = (0xE60 + R5);
    R2 = ((0x2E8 + R4));
    *(unsigned int *)(((int)stk + 168)) = R2;
    *(unsigned int *)(((int)stk + 164)) = (0xEB0 + R5);
    *(unsigned int *)(((int)stk + 160)) = (0x2F8 + R4);
    *(unsigned int *)(((int)stk + 156)) = (0xF00 + R5);
    *(unsigned int *)(((int)stk + 152)) = (0x308 + R4);
    *(unsigned int *)(((int)stk + 148)) = (0xF50 + R5);
    *(unsigned int *)(((int)stk + 144)) = (0x318 + R4);
    *(unsigned int *)(((int)stk + 140)) = (0xFA0 + R5);
    *(unsigned int *)(((int)stk + 136)) = (0x328 + R4);
    *(unsigned int *)(((int)stk + 132)) = (0xFF0 + R5);
    *(unsigned int *)(((int)stk + 128)) = (0x338 + R4);
    *(unsigned int *)(((int)stk + 124)) = (0x1040 + R5);
    *(unsigned int *)(((int)stk + 120)) = (0x348 + R4);
    *(unsigned int *)(((int)stk + 116)) = (0x1090 + R5);
    *(unsigned int *)(((int)stk + 112)) = (0x358 + R4);
    *(unsigned int *)(((int)stk + 108)) = (0x10E0 + R5);
    *(unsigned int *)(((int)stk + 104)) = (0x368 + R4);
    *(unsigned int *)(((int)stk + 100)) = (0x1130 + R5);
    *(unsigned int *)(((int)stk + 96)) = (0x378 + R4);
    *(unsigned int *)(((int)stk + 92)) = (0x1180 + R5);
    *(unsigned int *)(((int)stk + 88)) = (0x388 + R4);
    *(unsigned int *)(((int)stk + 84)) = (0x11D0 + R5);
    *(unsigned int *)(((int)stk + 80)) = (0x398 + R4);
    *(unsigned int *)(((int)stk + 76)) = (0x1220 + R5);
    *(unsigned int *)(((int)stk + 72)) = (0x3A8 + R4);
    *(unsigned int *)(((int)stk + 68)) = (0x1270 + R5);
    *(unsigned int *)(((int)stk + 64)) = (0x3B8 + R4);
    *(unsigned int *)(((int)stk + 60)) = (0x12C0 + R5);
    *(unsigned int *)(((int)stk + 56)) = (0x3C8 + R4);
    *(unsigned int *)(((int)stk + 52)) = (R5 + 0x1310);
    *(unsigned int *)(((int)stk + 48)) = (R4 + 0x3D8);
    R2 = (0x3D8);
    R4 = ((R4 + 0x3D8));
    R5 = ((R5 + 0x1310));
    L_8C094EBE:;
    t12 = *(signed char *)((R11 + 0x0));
    R3 = (t12);
    if ((t12 == 0)) goto L_8C094EC8;
    t15 = *(signed char *)((R11 + 0x0));
    R0 = ((t15 - 46));
    R12 = (0x8C0BAF18);
    R14 = (0x100);
    F14 = (1.0f);
    if (!(((unsigned int)(t15 - 46) < (unsigned int)0x4D))) goto L_8C094EA8;
    R1 = ((R0 << 1));
    switch (((R0 << 1))) { case 0: goto L_8C094E6E; case 2: goto L_8C094EA8; case 4: goto L_8C094EA8; case 6: goto L_8C094EA8; case 8: goto L_8C094EA8; case 10: goto L_8C094EA8; case 12: goto L_8C094EA8; case 14: goto L_8C094EA8; case 16: goto L_8C094EA8; case 18: goto L_8C094EA8; case 20: goto L_8C094EA8; case 22: goto L_8C094EA8; case 24: goto L_8C094EA8; case 26: goto L_8C094EA8; case 28: goto L_8C094EA8; case 30: goto L_8C094EA8; case 32: goto L_8C094EA8; case 34: goto L_8C094EA8; case 36: goto L_8C094EA8; case 38: goto L_8C0944EA; case 40: goto L_8C094520; case 42: goto L_8C09454A; case 44: goto L_8C094572; case 46: goto L_8C09459A; case 48: goto L_8C0945C0; case 50: goto L_8C0945EC; case 52: goto L_8C094618; case 54: goto L_8C094650; case 56: goto L_8C09467C; case 58: goto L_8C0946A8; case 60: goto L_8C0946D4; case 62: goto L_8C094700; case 64: goto L_8C09472C; case 66: goto L_8C094758; case 68: goto L_8C09479C; case 70: goto L_8C0947C8; case 72: goto L_8C0947F4; case 74: goto L_8C094820; case 76: goto L_8C09484C; case 78: goto L_8C094878; case 80: goto L_8C0948A4; case 82: goto L_8C0948E8; case 84: goto L_8C094914; case 86: goto L_8C094940; case 88: goto L_8C09496C; case 90: goto L_8C094EA8; case 92: goto L_8C094EA8; case 94: goto L_8C094EA8; case 96: goto L_8C094EA8; case 98: goto L_8C094EA8; case 100: goto L_8C094EA8; case 102: goto L_8C094998; case 104: goto L_8C0949C4; case 106: goto L_8C0949F0; case 108: goto L_8C094A34; case 110: goto L_8C094A60; case 112: goto L_8C094A8C; case 114: goto L_8C094AB8; case 116: goto L_8C094AE4; case 118: goto L_8C094B10; case 120: goto L_8C094B3C; case 122: goto L_8C094B80; case 124: goto L_8C094BAC; case 126: goto L_8C094BD8; case 128: goto L_8C094C04; case 130: goto L_8C094C30; case 132: goto L_8C094C5C; case 134: goto L_8C094C88; case 136: goto L_8C094CB4; case 138: goto L_8C094CEC; case 140: goto L_8C094D24; case 142: goto L_8C094D50; case 144: goto L_8C094D82; case 146: goto L_8C094DAE; case 148: goto L_8C094DF2; case 150: goto L_8C094E1C; case 152: goto L_8C094E46; }
    goto L_8C094E6E;
    L_8C094EA8:;
    F3 = (((*(float *)((R13 + 0x0))) + 4.0f));
    L_8C094EB0:;
    *(float *)((R13 + 0x0)) = F3;
    L_8C094EB2:;
    u23 = *(float *)((R13 + 0x0));
    *(float *)((R13 + 0x0)) = (u23 - 3.0f);
    R11 = ((R11 + 0x1));
    F3 = ((u23 - 3.0f));
    F4 = (3.0f);
    goto L_8C094EBE;
    L_8C094E6E:;
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + F14);
    t31 = primSprDrawScale((*(int *)(((int)stk + 52))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u33 = *(float *)(((*(int *)(((int)stk + 48))) + 0x0));
    R2 = ((int)u33);
    FPUL_ = ((int)u33);
    L_8C094E98:;
    u36 = *(float *)((R13 + 0x0));
    *(float *)((R13 + 0x0)) = (u36 + (float)FPUL_);
    F2 = ((u36 + (float)FPUL_));
    goto L_8C094EB2;
    L_8C094E46:;
    t39 = primSprDrawScale((*(int *)(((int)stk + 60))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u41 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
    R2 = (((int)u41 - 2));
    FPUL_ = (((int)u41 - 2));
    goto L_8C094E98;
    L_8C094E1C:;
    t45 = primSprDrawScale((*(int *)(((int)stk + 68))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u47 = *(float *)(((*(int *)(((int)stk + 64))) + 0x0));
    R2 = (((int)u47 - 2));
    FPUL_ = (((int)u47 - 2));
    goto L_8C094E98;
    L_8C094DF2:;
    t51 = primSprDrawScale((*(int *)(((int)stk + 76))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u53 = *(float *)(((*(int *)(((int)stk + 72))) + 0x0));
    R2 = (((int)u53 - 2));
    FPUL_ = (((int)u53 - 2));
    goto L_8C094E98;
    L_8C094DAE:;
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) + F14);
    t58 = primSprDrawScale((*(int *)(((int)stk + 84))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u60 = *(float *)(((*(int *)(((int)stk + 80))) + 0x0));
    R2 = (((int)u60 - 4));
    FPUL_ = ((int)u60);
    L_8C094DDE:;
    u63 = *(float *)((R13 + 0x0));
    *(float *)((R13 + 0x0)) = (u63 + (float)R2);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - F14);
    F2 = ((u63 + (float)R2));
    FPUL_ = (R2);
    goto L_8C094EB2;
    L_8C094D82:;
    t68 = primSprDrawScale((*(int *)(((int)stk + 92))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u70 = *(float *)(((*(int *)(((int)stk + 88))) + 0x0));
    R2 = (((int)u70 - 2));
    FPUL_ = (((int)u70 - 2));
    goto L_8C094E98;
    L_8C094D50:;
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) + F14);
    t75 = primSprDrawScale((*(int *)(((int)stk + 100))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u77 = *(float *)(((*(int *)(((int)stk + 96))) + 0x0));
    R2 = (((int)u77 - 2));
    FPUL_ = ((int)u77);
    goto L_8C094DDE;
    L_8C094D24:;
    t81 = primSprDrawScale((*(int *)(((int)stk + 108))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u83 = *(float *)(((*(int *)(((int)stk + 104))) + 0x0));
    R2 = (((int)u83 - 2));
    FPUL_ = (((int)u83 - 2));
    goto L_8C094E98;
    L_8C094CEC:;
    t87 = primSprDrawScale((*(int *)(((int)stk + 116))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    F3 = ((*(float *)(((*(int *)(((int)stk + 112))) + 0x0))));
    L_8C094D0E:;
    u91 = *(float *)((R13 + 0x0));
    *(float *)((R13 + 0x0)) = (u91 + (float)((int)F3 - 2));
    t95 = ((int)F3 - 2);
    R2 = (((int)F3 - 2));
    F2 = ((u91 + (float)((int)F3 - 2)));
    F3 = (((u91 + (float)((int)F3 - 2)) - F14));
    FPUL_ = t95;
    goto L_8C094EB0;
    L_8C094CB4:;
    t97 = primSprDrawScale((*(int *)(((int)stk + 124))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    F3 = ((*(float *)(((*(int *)(((int)stk + 120))) + 0x0))));
    goto L_8C094D0E;
    L_8C094C88:;
    t102 = primSprDrawScale((*(int *)(((int)stk + 132))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u104 = *(float *)(((*(int *)(((int)stk + 128))) + 0x0));
    R2 = (((int)u104 - 2));
    FPUL_ = (((int)u104 - 2));
    goto L_8C094E98;
    L_8C094C5C:;
    t108 = primSprDrawScale((*(int *)(((int)stk + 140))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u110 = *(float *)(((*(int *)(((int)stk + 136))) + 0x0));
    R2 = (((int)u110 - 2));
    FPUL_ = (((int)u110 - 2));
    goto L_8C094E98;
    L_8C094C30:;
    t114 = primSprDrawScale((*(int *)(((int)stk + 148))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u116 = *(float *)(((*(int *)(((int)stk + 144))) + 0x0));
    R2 = (((int)u116 - 2));
    FPUL_ = (((int)u116 - 2));
    goto L_8C094E98;
    L_8C094C04:;
    t120 = primSprDrawScale((*(int *)(((int)stk + 156))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u122 = *(float *)(((*(int *)(((int)stk + 152))) + 0x0));
    R2 = (((int)u122 - 2));
    FPUL_ = (((int)u122 - 2));
    goto L_8C094E98;
    L_8C094BD8:;
    t126 = primSprDrawScale((*(int *)(((int)stk + 164))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u128 = *(float *)(((*(int *)(((int)stk + 160))) + 0x0));
    R2 = (((int)u128 - 2));
    FPUL_ = (((int)u128 - 2));
    goto L_8C094E98;
    L_8C094BAC:;
    t132 = primSprDrawScale((*(int *)(((int)stk + 172))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u134 = *(float *)(((*(int *)(((int)stk + 168))) + 0x0));
    R2 = (((int)u134 - 2));
    FPUL_ = (((int)u134 - 2));
    goto L_8C094E98;
    L_8C094B80:;
    t138 = primSprDrawScale((*(int *)(((int)stk + 180))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u140 = *(float *)(((*(int *)(((int)stk + 176))) + 0x0));
    R2 = (((int)u140 - 2));
    FPUL_ = (((int)u140 - 2));
    goto L_8C094E98;
    L_8C094B3C:;
    t144 = primSprDrawScale((*(int *)(((int)stk + 188))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u146 = *(float *)(((*(int *)(((int)stk + 184))) + 0x0));
    R2 = (((int)u146 - 2));
    FPUL_ = (((int)u146 - 2));
    goto L_8C094E98;
    L_8C094B10:;
    t150 = primSprDrawScale((*(int *)(((int)stk + 196))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u152 = *(float *)(((*(int *)(((int)stk + 192))) + 0x0));
    R2 = (((int)u152 - 2));
    FPUL_ = (((int)u152 - 2));
    goto L_8C094E98;
    L_8C094AE4:;
    t156 = primSprDrawScale((*(int *)(((int)stk + 204))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u158 = *(float *)(((*(int *)(((int)stk + 200))) + 0x0));
    R2 = (((int)u158 - 2));
    FPUL_ = (((int)u158 - 2));
    goto L_8C094E98;
    L_8C094AB8:;
    t162 = primSprDrawScale((*(int *)(((int)stk + 212))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u164 = *(float *)(((*(int *)(((int)stk + 208))) + 0x0));
    R2 = (((int)u164 - 2));
    FPUL_ = (((int)u164 - 2));
    goto L_8C094E98;
    L_8C094A8C:;
    t168 = primSprDrawScale((*(int *)(((int)stk + 220))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u170 = *(float *)(((*(int *)(((int)stk + 216))) + 0x0));
    R2 = (((int)u170 - 2));
    FPUL_ = (((int)u170 - 2));
    goto L_8C094E98;
    L_8C094A60:;
    t174 = primSprDrawScale((*(int *)(((int)stk + 228))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u176 = *(float *)(((*(int *)(((int)stk + 224))) + 0x0));
    R2 = (((int)u176 - 2));
    FPUL_ = (((int)u176 - 2));
    goto L_8C094E98;
    L_8C094A34:;
    t180 = primSprDrawScale((*(int *)(((int)stk + 236))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u182 = *(float *)(((*(int *)(((int)stk + 232))) + 0x0));
    R2 = (((int)u182 - 2));
    FPUL_ = (((int)u182 - 2));
    goto L_8C094E98;
    L_8C0949F0:;
    t186 = primSprDrawScale((*(int *)(((int)stk + 244))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u188 = *(float *)(((*(int *)(((int)stk + 240))) + 0x0));
    R2 = (((int)u188 - 2));
    FPUL_ = (((int)u188 - 2));
    goto L_8C094E98;
    L_8C0949C4:;
    t192 = primSprDrawScale((*(int *)(((int)stk + 252))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u194 = *(float *)(((*(int *)(((int)stk + 248))) + 0x0));
    R2 = (((int)u194 - 2));
    FPUL_ = (((int)u194 - 2));
    goto L_8C094E98;
    L_8C094998:;
    t198 = primSprDrawScale((*(int *)(((int)stk + 260))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u200 = *(float *)(((*(int *)(((int)stk + 256))) + 0x0));
    R2 = (((int)u200 - 2));
    FPUL_ = (((int)u200 - 2));
    goto L_8C094E98;
    L_8C09496C:;
    t204 = primSprDrawScale((*(int *)(((int)stk + 268))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u206 = *(float *)(((*(int *)(((int)stk + 264))) + 0x0));
    R2 = (((int)u206 - 2));
    FPUL_ = (((int)u206 - 2));
    goto L_8C094E98;
    L_8C094940:;
    t210 = primSprDrawScale((*(int *)(((int)stk + 276))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u212 = *(float *)(((*(int *)(((int)stk + 272))) + 0x0));
    R2 = (((int)u212 - 2));
    FPUL_ = (((int)u212 - 2));
    goto L_8C094E98;
    L_8C094914:;
    t216 = primSprDrawScale((*(int *)(((int)stk + 284))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u218 = *(float *)(((*(int *)(((int)stk + 280))) + 0x0));
    R2 = (((int)u218 - 2));
    FPUL_ = (((int)u218 - 2));
    goto L_8C094E98;
    L_8C0948E8:;
    t222 = primSprDrawScale((*(int *)(((int)stk + 292))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u224 = *(float *)(((*(int *)(((int)stk + 288))) + 0x0));
    R2 = (((int)u224 - 2));
    FPUL_ = (((int)u224 - 2));
    goto L_8C094E98;
    L_8C0948A4:;
    t228 = primSprDrawScale((*(int *)(((int)stk + 300))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u230 = *(float *)(((*(int *)(((int)stk + 296))) + 0x0));
    R2 = (((int)u230 - 2));
    FPUL_ = (((int)u230 - 2));
    goto L_8C094E98;
    L_8C094878:;
    t234 = primSprDrawScale((*(int *)(((int)stk + 308))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u236 = *(float *)(((*(int *)(((int)stk + 304))) + 0x0));
    R2 = (((int)u236 - 2));
    FPUL_ = (((int)u236 - 2));
    goto L_8C094E98;
    L_8C09484C:;
    t240 = primSprDrawScale((*(int *)(((int)stk + 316))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u242 = *(float *)(((*(int *)(((int)stk + 312))) + 0x0));
    R2 = (((int)u242 - 2));
    FPUL_ = (((int)u242 - 2));
    goto L_8C094E98;
    L_8C094820:;
    t246 = primSprDrawScale((*(int *)(((int)stk + 324))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u248 = *(float *)(((*(int *)(((int)stk + 320))) + 0x0));
    R2 = (((int)u248 - 2));
    FPUL_ = (((int)u248 - 2));
    goto L_8C094E98;
    L_8C0947F4:;
    t252 = primSprDrawScale((*(int *)(((int)stk + 332))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u254 = *(float *)(((*(int *)(((int)stk + 328))) + 0x0));
    R2 = (((int)u254 - 2));
    FPUL_ = (((int)u254 - 2));
    goto L_8C094E98;
    L_8C0947C8:;
    t258 = primSprDrawScale((*(int *)(((int)stk + 340))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u260 = *(float *)(((*(int *)(((int)stk + 336))) + 0x0));
    R2 = (((int)u260 - 2));
    FPUL_ = (((int)u260 - 2));
    goto L_8C094E98;
    L_8C09479C:;
    t264 = primSprDrawScale((*(int *)(((int)stk + 348))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u266 = *(float *)(((*(int *)(((int)stk + 344))) + 0x0));
    R2 = (((int)u266 - 2));
    FPUL_ = (((int)u266 - 2));
    goto L_8C094E98;
    L_8C094758:;
    t270 = primSprDrawScale((*(int *)(((int)stk + 356))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u272 = *(float *)(((*(int *)(((int)stk + 352))) + 0x0));
    R2 = (((int)u272 - 2));
    FPUL_ = (((int)u272 - 2));
    goto L_8C094E98;
    L_8C09472C:;
    t276 = primSprDrawScale((*(int *)(((int)stk + 364))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u278 = *(float *)(((*(int *)(((int)stk + 360))) + 0x0));
    R2 = (((int)u278 - 2));
    FPUL_ = (((int)u278 - 2));
    goto L_8C094E98;
    L_8C094700:;
    t282 = primSprDrawScale((*(int *)(((int)stk + 372))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u284 = *(float *)(((*(int *)(((int)stk + 368))) + 0x0));
    R2 = (((int)u284 - 2));
    FPUL_ = (((int)u284 - 2));
    goto L_8C094E98;
    L_8C0946D4:;
    t288 = primSprDrawScale((*(int *)(((int)stk + 380))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u290 = *(float *)(((*(int *)(((int)stk + 376))) + 0x0));
    R2 = (((int)u290 - 2));
    FPUL_ = (((int)u290 - 2));
    goto L_8C094E98;
    L_8C0946A8:;
    t294 = primSprDrawScale((*(int *)(((int)stk + 388))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u296 = *(float *)(((*(int *)(((int)stk + 384))) + 0x0));
    R2 = (((int)u296 - 2));
    FPUL_ = (((int)u296 - 2));
    goto L_8C094E98;
    L_8C09467C:;
    t300 = primSprDrawScale((*(int *)(((int)stk + 396))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u302 = *(float *)(((*(int *)(((int)stk + 392))) + 0x0));
    R2 = (((int)u302 - 2));
    FPUL_ = (((int)u302 - 2));
    goto L_8C094E98;
    L_8C094650:;
    t306 = primSprDrawScale((*(int *)(((int)stk + 404))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u308 = *(float *)(((*(int *)(((int)stk + 400))) + 0x0));
    R2 = (((int)u308 - 2));
    FPUL_ = (((int)u308 - 2));
    goto L_8C094E98;
    L_8C094618:;
    t312 = primSprDrawScale((*(int *)(((int)stk + 412))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u314 = *(float *)(((*(int *)(((int)stk + 408))) + 0x0));
    R2 = (((int)u314 - 2));
    FPUL_ = (((int)u314 - 2));
    goto L_8C094E98;
    L_8C0945EC:;
    t318 = primSprDrawScale((*(int *)(((int)stk + 420))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u320 = *(float *)(((*(int *)(((int)stk + 416))) + 0x0));
    R2 = (((int)u320 - 2));
    FPUL_ = (((int)u320 - 2));
    goto L_8C094E98;
    L_8C0945C0:;
    t323 = primSprDrawScale(R8, R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    t324 = *(int *)(((int)stk + 424));
    R2 = (t324);
    FPUL_ = (((int)(*(float *)((t324 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C09459A:;
    t329 = primSprDrawScale((*(int *)(((int)stk + 44))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    FPUL_ = (((int)(*(float *)((R9 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C094572:;
    t333 = primSprDrawScale((*(int *)(((int)stk + 32))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u335 = *(float *)(((*(int *)(((int)stk + 36))) + 0x0));
    R2 = (((int)u335 - 2));
    FPUL_ = (((int)u335 - 2));
    goto L_8C094E98;
    L_8C09454A:;
    t339 = primSprDrawScale((*(int *)(((int)stk + 16))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u341 = *(float *)(((*(int *)(((int)stk + 28))) + 0x0));
    R2 = (((int)u341 - 2));
    FPUL_ = (((int)u341 - 2));
    goto L_8C094E98;
    L_8C094520:;
    t344 = primSprDrawScale(R10, R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    t345 = *(int *)(((int)stk + 24));
    R2 = (t345);
    FPUL_ = (((int)(*(float *)((t345 + 0x0))) - 2));
    goto L_8C094E98;
    L_8C0944EA:;
    t350 = primSprDrawScale((*(int *)(((int)stk + 20))), R14, R14, *(Stk3 *)(R13), F15, F15);      /* manual: the position vector is a structure argument; the cast call through R12 passed r7 and no stack words */
    u352 = *(float *)((R13 + 0x0));
    u353 = *(float *)(((*(int *)(((int)stk + 40))) + 0x0));
    R2 = (((int)u353 - 2));
    F2 = ((u352 + (float)((int)u353 - 2)));
    F3 = (((u352 + (float)((int)u353 - 2)) - (1.0f + 1.0f)));
    FPUL_ = (((int)u353 - 2));
    goto L_8C094EB0;
    L_8C094EC8:;
    return (int)((*(float *)((R13 + 0x0))) - (*(float *)(((int)stk + 428))));
}
