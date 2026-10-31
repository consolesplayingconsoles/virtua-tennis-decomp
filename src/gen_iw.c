/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
int charaTexFree(int);
int cpuAimPointSet(int, int, float, float);
float cpuLineXAtZ(Stk3, int, int, int, float);
int cpuShotRange(int, int, int, int, int);
int decoHeaderDrawB(int, int, int, int, Stk3, float, float, float);
int entryGetColorId(int);
int nlRand(void);
int nlsndSeqRequest(int);
int padDirAny(int);
int padDirRepeat(int, int);
int selCellSetCursor(int);
int selModelSpawn(int, int);
int sndSe05_04(void);
int sndSeCursor(void);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int windowFrameDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int entryCharaSelPort(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int cpuSglAimAddRange(int a4, int a5);

int entryCharaSelPort(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t3;
    int t23;
    int t26;
    int t32;
    int t34;
    int t36;
    int t48;
    int t51;
    int t58;
    int t61;
    int t68;
    int t74;
    float u75;
    int t92;
    int t97;
    int t109;
    int t121;
    int t137;
    int t141;
    int t145;
    int t147;
    int t163;
    int t171;
    int t186;
    int t188;
    int t211;
    int t221;
    int t222;
    int t230;
    int t231;
    int t241;
    int t268;
    int t272;
    int t273;
    int t278;
    int t284;
    int t292;
    int t296;
    int t297;
    int t302;
    int t317;
    int t321;
    int t334;
    int t338;
    int t352;
    int t356;
    int t361;
    int t364;
    int t370;
    int t374;
    int t379;
    int t382;
    int stk[28];

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
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    *(unsigned int *)(((int)stk + 28)) = R5;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    t3 = (*(short *)(((((*(int *)((((R4 << 2) + 0x8C3437C4) + 0x0))) * 0x38) + 0x8C343264) + 0x14))) == 0;
    R10 = (0x8C0300E0);
    R11 = (0x0);
    R12 = (0x8C343B4C);
    R13 = (0x8C343258);
    R14 = (R4);
    R4 = (((R4 << 2) + 0x8C3437C4));
    R8 = (((*(int *)(((int)stk + 28))) << 2));
    R9 = (0x38);
    if (t3) goto L_8C0AD316;
    L_8C0AD9E2:;
    if (((*(short *)(((((*(int *)((R4 + 0x0))) * R9) + (R13 + 0xC)) + 0x14))) != 0)) goto L_8C0AD9F8;
    L_8C0ADCEC:;
    R4 = (0x8C343AEC);
    R5 = (0x8C343AFC);
    if (((*(int *)((0x8C343AFC + (R14 << 2)))) == (*(int *)((0x8C343AEC + (R14 << 2)))))) goto L_8C0ADD0C;
    *(unsigned int *)((R5 + (R14 << 2))) = (*(int *)((R4 + (R14 << 2))));
    sndSeCursor();
    L_8C0ADD0C:;
    t23 = *(int *)(((((R14 << 2) << 1) + R12) + 0x0));
    *(float *)(((((int)stk + 20) + 0x28) + 0x0)) = (*(float *)((((((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) * 0x6C) + 0x8C1854C4) + (((t23 << 1) + t23) << 2)) + 0x0)));
    t26 = *(int *)(((((R14 << 2) << 1) + R12) + 0x0));
    *(float *)(((((int)stk + 20) + 0x28) + 0x4)) = (*(float *)((((0x8C1854C4 + ((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) * 0x6C)) + (((t26 << 1) + t26) << 2)) + 0x4)));
    R1 = (t23);
    R10 = ((((int)stk + 20) + 0x28));
    R11 = ((((R14 << 2) << 1) + R12));
    *(float *)((R10 + 0x8)) = (*(float *)0x8C0ADE80);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R10); }
    t32 = *(int *)((R11 + 0x4));
    *(int *)((int)stk + 4) = ((-t32) + 0x1);
    t34 = entryGetColorId((*(int *)((((R14 << 2) + (0x56C + R13)) + 0x0))));
    return (windowFrameDraw(t34, ((-t32) + 0x1), R14, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
    L_8C0AD9F8:;
    *(unsigned int *)(((int)stk + 32)) = R11;
    *(unsigned int *)(((int)stk + 36)) = R11;
    *(unsigned int *)(((int)stk + 20)) = R11;
    t36 = *(int *)((R4 + 0x0));
    *(unsigned int *)(((int)stk + 24)) = t36;
    *(volatile int *)(((0x4 + ((t36 * R9) + (R13 + 0xC))) + 0x0));
    R1 = (0x8C287D5C);
    R4 = (((R14 << 2) + 0x8C343878));
    if (((*(int *)0x8C287D5C) != 0)) goto L_8C0ADA48;
    *(unsigned int *)((R4 + 0x0)) = 0x2;
    goto L_8C0ADCEC;
    L_8C0ADA48:;
    if (((*(int *)((R4 + 0x0))) != 2)) goto L_8C0ADA52;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    L_8C0ADA52:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_8C0ADAFE;
    t48 = (padDirRepeat((*(int *)(((int)stk + 28))), 0x40)) == 0;
    if (t48) goto L_8C0ADA66;
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    L_8C0ADA66:;
    t51 = (padDirRepeat((*(int *)(((int)stk + 28))), 0x80)) == 0;
    if (t51) goto L_8C0ADA74;
    *(unsigned int *)(((int)stk + 36)) = 0x1;
    L_8C0ADA74:;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C0ADAA6;
    R0 = (0x8C3438E8);
    if (((int)((*(int *)((((*(int *)(((R14 << 2) + 0x8C3437C4))) << 2) + 0x8C3438E8))) - 1) < 0)) goto L_8C0ADAA6;
    t58 = *(int *)((((R14 << 2) + (0x56C + R13)) + 0x0));
    *(unsigned int *)(((t58 << 2) + R0)) = ((*(int *)(((t58 << 2) + R0))) - 1);
    sndSeCursor();
    L_8C0ADAA6:;
    t61 = *(int *)(((int)stk + 36));
    R1 = (t61);
    if ((t61 == 0)) goto L_8C0ADADC;
    R0 = (0x8C3438E8);
    if (((int)((*(int *)((((*(int *)(((R14 << 2) + 0x8C3437C4))) << 2) + 0x8C3438E8))) + 0x1) > (int)0x2)) goto L_8C0ADADC;
    t68 = *(int *)((((R14 << 2) + (0x56C + R13)) + 0x0));
    *(unsigned int *)(((t68 << 2) + R0)) = ((*(int *)(((t68 << 2) + R0))) + 0x1);
    sndSeCursor();
    L_8C0ADADC:;
    *(unsigned int *)(((((*(int *)((R8 + (0x56C + R13)))) * R9) + (R13 + 0xC)) + 0x20)) = (*(int *)((((*(int *)((((R14 << 2) + (0x56C + R13)) + 0x0))) << 2) + 0x8C3438E8)));
    L_8C0ADAFE:;
    t74 = *(int *)(((int)stk + 24));
    u75 = *(float *)(((0x8C3438C8 + (t74 << 2)) + 0x0));
    *(float *)(((0x8C3438C8 + (t74 << 2)) + 0x0)) = (u75 + 0.200000003f);
    R10 = ((t74 << 2));
    F4 = (1.0f);
    if ((1.0f > (u75 + 0.200000003f))) goto L_8C0ADB1A;
    *(float *)((R10 + 0x8C3438C8)) = F4;
    L_8C0ADB1A:;
    if ((((*(int *)(((*(int *)((R8 + (int)padPeri))) + 0x10))) & 5) == 0)) goto L_8C0ADB54;
    if (((*(int *)(((R14 << 2) + 0x8C343878))) == 2)) goto L_8C0ADB54;
    *(unsigned int *)(((R14 << 2) + 0x8C343878)) = 0x2;
    if (((*(int *)(((R14 << 2) + 0x8C343888))) != 0)) goto L_8C0ADB4A;
    nlsndSeqRequest(0xAA9);
    L_8C0ADB4A:;
    *(unsigned int *)(((R14 << 2) + 0x8C343888)) = 0x1;
    L_8C0ADB54:;
    R3 = ((0x56C + R13));
    R4 = ((R14 << 2));
    F14 = (278.0f);
    F15 = (0.100000001f);
    t92 = (*(int *)(((R4 + R3) + 0x0))) != 0;
    R4 = ((R4 + R3));
    if (t92) goto L_8C0ADBB2;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 20) + 0x1C);
    F4 = (147.0f);
    F5 = (F14);
    F6 = (F15);
    L_8C0ADBDC:;
    *(Stk3 *)(*(int *)((int)stk + 16)) = vecMake(F4, F5, F6);
    L_8C0ADC12:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x1C)); }
    t97 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 32)) = (R14 << 2);
    decoHeaderDrawB((*(int *)((((*(int *)((((R14 << 2) + (0x56C + R13)) + 0x0))) << 2) + 0x8C3438E8))), t97, R6, R7, *(Stk3 *)(((int)stk + 8)), F4, F5, F6);
    if ((((*(int *)(((*(int *)((R8 + (int)padPeri))) + 0x10))) & 2) == 0)) goto L_8C0ADCEC;
    if (((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C343878))) != 1)) goto L_8C0ADCEC;
    t109 = (padDirAny((*(int *)(((int)stk + 28))))) != 0;
    if (t109) goto L_8C0ADCEC;
    *(unsigned int *)(((R14 << 2) + 0x8C343878)) = R11;
    selCellSetCursor((*(int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x0))));
    charaTexFree((*(int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x0))));
    *(unsigned int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x28)) = 0x1;
    *(unsigned int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x0)) = 0xFFFFFFFF;
    *(unsigned short *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x14)) = R11;
    *(float *)((R10 + 0x8C3438C8)) = 0.0f;
    selModelSpawn((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))), 0x0);
    L_8C0ADCE8:;
    *(unsigned int *)0x8C343AB4 = R11;
    goto L_8C0ADCEC;
    L_8C0ADBB2:;
    t121 = *(int *)((R4 + 0x0));
    R0 = (t121);
    if ((t121 != 1)) goto L_8C0ADBCA;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 20) + 0x1C);
    F4 = (468.0f);
    F5 = (F14);
    F6 = (F15);
    goto L_8C0ADBDC;
    L_8C0ADBCA:;
    if ((R0 != 2)) goto L_8C0ADBF8;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 20) + 0x1C);
    F4 = (292.0f);
    F5 = (F14);
    F6 = (F15);
    goto L_8C0ADBDC;
    L_8C0ADBF8:;
    if (((*(int *)((R4 + 0x0))) != 3)) goto L_8C0ADC12;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x1C);
    *(Stk3 *)((((int)stk + 20) + 0x1C)) = vecMake(613.0f, F14, F15);
    goto L_8C0ADC12;
    L_8C0AD316:;
    if (((*(int *)0x8C343AB4) == 0)) goto L_8C0AD322;
    goto L_8C0AD9E2;
    L_8C0AD322:;
    *(unsigned int *)(((int)stk + 40)) = R11;
    *(unsigned int *)(((int)stk + 36)) = R11;
    *(unsigned int *)(((int)stk + 20)) = R11;
    *(unsigned int *)(((int)stk + 24)) = R11;
    t137 = (padDirRepeat((*(int *)(((int)stk + 28))), 0x10)) == 0;
    R5 = (0x20);
    if (t137) goto L_8C0AD33A;
    *(unsigned int *)(((int)stk + 40)) = 0x1;
    L_8C0AD33A:;
    t141 = (padDirRepeat((*(int *)(((int)stk + 28))), R5)) == 0;
    R5 = (0x40);
    if (t141) goto L_8C0AD348;
    *(unsigned int *)(((int)stk + 36)) = 0x1;
    L_8C0AD348:;
    t145 = (padDirRepeat((*(int *)(((int)stk + 28))), R5)) == 0;
    if (t145) goto L_8C0AD354;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    L_8C0AD354:;
    t147 = padDirRepeat((*(int *)(((int)stk + 28))), 0x80);
    R0 = (t147);
    if ((t147 == 0)) goto L_8C0AD362;
    *(unsigned int *)(((int)stk + 24)) = 0x1;
    L_8C0AD362:;
    if (((*(int *)(((int)stk + 40))) != 0)) goto L_8C0AD37A;
    if (((*(int *)(((int)stk + 36))) != 0)) goto L_8C0AD37A;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_8C0AD37A;
    if (((*(int *)(((int)stk + 24))) == 0)) goto L_8C0AD394;
    L_8C0AD37A:;
    *(unsigned int *)(((0x8C343B6C + ((R14 << 2) << 1)) + 0x0)) = (*(int *)(((((R14 << 2) << 1) + R12) + 0x0)));
    *(unsigned int *)(((0x8C343B6C + ((R14 << 2) << 1)) + 0x4)) = (*(int *)(((((R14 << 2) << 1) + R12) + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    L_8C0AD394:;
    R10 = (0x8C1853C0);
    if (((*(int *)(((int)stk + 40))) == 0)) goto L_8C0AD430;
    t163 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    R0 = ((t163 + 0x1));
    R4 = (R11);
    R5 = ((((R14 << 2) << 1) + R12));
    if (((int)(t163 + 0x1) < 0)) goto L_8C0AD3B2;
    R0 = ((R0 & 0x1));
    L_8C0AD3BC:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    L_8C0AD410:;
    t171 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t171 << 2) << 1) + t171) << 2) + R10)))) != 0)) goto L_8C0AD3CA;
    L_8C0AD686:;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C0AD6F2;
    R4 = ((0x8C343B6C + ((R14 << 2) << 1)));
    R5 = ((((R14 << 2) << 1) + R12));
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) != (*(int *)(((0x8C343B6C + ((R14 << 2) << 1)) + 0x0))))) goto L_8C0AD6AA;
    if (((*(int *)((R5 + 0x4))) == (*(int *)((R4 + 0x4))))) goto L_8C0AD6B4;
    L_8C0AD6AA:;
    sndSeCursor();
    L_8C0AD6BA:;
    t186 = *(int *)(((0x8C343B6C + ((R14 << 2) << 1)) + 0x4));
    *(unsigned int *)((((*(int *)(((0x8C343B6C + ((R14 << 2) << 1)) + 0x0))) << 2) + (((((t186 << 2) << 1) + t186) << 2) + R10))) = R11;
    t188 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    *(unsigned int *)((((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) << 2) + (((((t188 << 2) << 1) + t188) << 2) + R10))) = 0x2;
    L_8C0AD6F2:;
    *(unsigned int *)((0x8C343ACC + (R14 << 2))) = ((((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) << 2) << 1) + (*(int *)(((((R14 << 2) << 1) + R12) + 0x0))));
    R4 = (0x8C343ACC);
    R5 = (0x10);
    R6 = ((((R14 << 2) << 1) + R12));
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) != 8)) goto L_8C0AD720;
    if (((*(int *)((R6 + 0x4))) != 0)) goto L_8C0AD720;
    *(unsigned int *)((R4 + (R14 << 2))) = R5;
    L_8C0AD720:;
    R6 = ((((R14 << 2) << 1) + R12));
    R7 = (0x11);
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) != 8)) goto L_8C0AD73C;
    if (((*(int *)((R6 + 0x4))) != 1)) goto L_8C0AD73C;
    *(unsigned int *)((R4 + (R14 << 2))) = R7;
    L_8C0AD73C:;
    if ((((*(int *)(((*(int *)((R8 + (int)padPeri))) + 0x10))) & 5) == 0)) goto L_8C0AD83A;
    if (((*(int *)((((*(int *)(((R14 << 2) + 0x8C343ACC))) << 2) + 0x8C1AFA64))) != 2)) goto L_8C0AD83A;
    t211 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    if (((*(int *)(((((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) << 2) + (0x8C185330 + ((((t211 << 2) << 1) + t211) << 2))) + 0x0))) != 0)) goto L_8C0AD7A8;
    sndSe05_04();
    L_8C0AD83A:;
    if ((((*(int *)(((*(int *)((R8 + (int)padPeri))) + 0x10))) & 2) != 0)) goto L_8C0AD848;
    goto L_8C0ADCEC;
    L_8C0AD848:;
    t221 = (padDirAny((*(int *)(((int)stk + 28))))) == 0;
    if (t221) goto L_8C0AD858;
    goto L_8C0ADCEC;
    L_8C0AD858:;
    t222 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    *(unsigned int *)((((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) << 2) + (((((t222 << 2) << 1) + t222) << 2) + R10))) = R11;
    charaTexFree((*(int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x0))));
    *(unsigned int *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x28)) = 0x1;
    *(unsigned short *)(((((*(int *)((((0x56C + R13) + (R14 << 2)) + 0x0))) * R9) + (R13 + 0xC)) + 0x14)) = R11;
    *(unsigned int *)(((((*(int *)((((R14 << 2) + (0x56C + R13)) + 0x0))) * R9) + (R13 + 0xC)) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((R8 + 0x8C343878)) = R11;
    t230 = *(int *)((((0x56C + R13) + R8) + 0x0));
    *(unsigned int *)(((int)stk + 44)) = ((t230 * R9) + (R13 + 0xC));
    t231 = *(int *)((((t230 * R9) + (R13 + 0xC)) + 0x0));
    R4 = (t231);
    if ((t231 == 16)) goto L_8C0AD8F8;
    if ((R4 != 17)) goto L_8C0AD952;
    L_8C0AD8F8:;
    *(unsigned short *)(((((*(int *)((((0x56C + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x14)) = R11;
    R3 = (0x56C);
    *(unsigned int *)(((((*(int *)((((R3 + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x28)) = 0x1;
    selModelSpawn((*(int *)((((0x56C + R13) + R8) + 0x0))), 0x0);
    L_8C0AD952:;
    t241 = (unlockCountW0()) == 0;
    if (t241) goto L_8C0AD960;
    goto L_8C0ADCE8;
    L_8C0AD960:;
    selCellSetCursor((*(int *)(((((*(int *)((((0x56C + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x0))));
    *(unsigned int *)(((((*(int *)((((0x56C + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x30)) = 0xFFFFFFFF;
    *(unsigned short *)(((((*(int *)((((0x56C + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x14)) = R11;
    *(unsigned int *)(((((*(int *)((((0x56C + R13) + R8) + 0x0))) * R9) + (R13 + 0xC)) + 0x28)) = 0x1;
    selModelSpawn((*(int *)((((0x56C + R13) + R8) + 0x0))), 0x0);
    *(unsigned int *)((R8 + 0x8C343878)) = 0x0;
    *(unsigned int *)((R8 + 0x8C343898)) = 0x0;
    *(unsigned short *)((R13 + 0x8)) = ((*(short *)((R13 + 0x8))) | (*(short *)((((*(int *)(((int)stk + 28))) << 1) + 0x8C185298))));
    goto L_8C0ADCE8;
    L_8C0AD7A8:;
    *(unsigned int *)(((int)stk + 20)) = (R14 << 2);
    *(unsigned short *)(((((*(int *)((((R14 << 2) + (0x56C + R13)) + 0x0))) * R9) + (R13 + 0xC)) + 0x14)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x8C343878)) = 0x1;
    *(unsigned int *)((R4 + (*(int *)(((int)stk + 20))))) = ((((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) << 2) << 1) + (*(int *)(((((R14 << 2) << 1) + R12) + 0x0))));
    R6 = ((((R14 << 2) << 1) + R12));
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) != 8)) goto L_8C0AD7F4;
    if (((*(int *)((R6 + 0x4))) != 0)) goto L_8C0AD7F4;
    *(unsigned int *)((R4 + (R14 << 2))) = R5;
    L_8C0AD7F4:;
    R5 = ((((R14 << 2) << 1) + R12));
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) != 8)) goto L_8C0AD80E;
    if (((*(int *)((R5 + 0x4))) != 1)) goto L_8C0AD80E;
    *(unsigned int *)((R4 + (R14 << 2))) = R7;
    L_8C0AD80E:;
    t268 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    *(unsigned int *)((((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) << 2) + (((((t268 << 2) << 1) + t268) << 2) + R10))) = 0x3;
    *(unsigned int *)(((0x8C3438A8 + (R14 << 2)) + 0x0)) = (*(int *)(((R14 << 2) + 0x8C343898)));
    goto L_8C0AD83A;
    L_8C0AD6B4:;
    sndSe05_04();
    goto L_8C0AD6BA;
    L_8C0AD3CA:;
    t272 = *(int *)(((int)stk + 20));
    t273 = *(int *)((t272 + 0x4));
    R0 = ((t273 + 0x1));
    R1 = (t272);
    if (((int)(t273 + 0x1) < 0)) goto L_8C0AD3F8;
    R0 = ((R0 & 0x1));
    L_8C0AD402:;
    t278 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R1 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t278) goto L_8C0AD410;
    goto L_8C0AD686;
    L_8C0AD3F8:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AD402;
    L_8C0AD3B2:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AD3BC;
    L_8C0AD430:;
    if (((*(int *)(((int)stk + 36))) == 0)) goto L_8C0AD4AC;
    t284 = *(int *)(((((R14 << 2) << 1) + R12) + 0x4));
    R0 = ((t284 + 0x1));
    R4 = (R11);
    R5 = ((((R14 << 2) << 1) + R12));
    if (((int)(t284 + 0x1) < 0)) goto L_8C0AD44C;
    R0 = ((R0 & 0x1));
    L_8C0AD456:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    L_8C0AD48C:;
    t292 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t292 << 2) << 1) + t292) << 2) + R10)))) != 0)) goto L_8C0AD464;
    goto L_8C0AD686;
    L_8C0AD464:;
    t296 = *(int *)(((int)stk + 20));
    t297 = *(int *)((t296 + 0x4));
    R0 = ((t297 + 0x1));
    R1 = (t296);
    if (((int)(t297 + 0x1) < 0)) goto L_8C0AD474;
    R0 = ((R0 & 0x1));
    L_8C0AD47E:;
    t302 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R1 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t302) goto L_8C0AD48C;
    goto L_8C0AD686;
    L_8C0AD474:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AD47E;
    L_8C0AD44C:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AD456;
    L_8C0AD4AC:;
    R5 = (0x8C185414);
    R6 = (0x8C185414);
    if (((*(int *)(((int)stk + 24))) == 0)) goto L_8C0AD590;
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) != 0)) goto L_8C0AD52A;
    *(unsigned int *)(((((R14 << 2) << 1) + R12) + 0x0)) = ((int)((int)((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) + 0x1) % (int)(*(int *)((R6 + 0x0)))));
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    *(unsigned int *)(((int)stk + 24)) = R5;
    L_8C0AD50A:;
    t317 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t317 << 2) << 1) + t317) << 2) + R10)))) != 0)) goto L_8C0AD4E8;
    goto L_8C0AD686;
    L_8C0AD4E8:;
    t321 = *(int *)(((int)stk + 20));
    *(unsigned int *)((t321 + 0x0)) = ((int)((int)((*(int *)((t321 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))));
    if (((int)(R4 + 0x1) < (int)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - 1))) goto L_8C0AD50A;
    goto L_8C0AD686;
    L_8C0AD52A:;
    *(unsigned int *)(((((R14 << 2) << 1) + R12) + 0x0)) = ((int)((int)((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) + 0x1) % (int)(*(int *)((R6 + 0x4)))));
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    *(unsigned int *)(((int)stk + 24)) = (R5 + 0x4);
    L_8C0AD570:;
    t334 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t334 << 2) << 1) + t334) << 2) + R10)))) != 0)) goto L_8C0AD54E;
    goto L_8C0AD686;
    L_8C0AD54E:;
    t338 = *(int *)(((int)stk + 20));
    *(unsigned int *)((t338 + 0x0)) = ((int)((int)((*(int *)((t338 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))));
    if (((int)(R4 + 0x1) < (int)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - 1))) goto L_8C0AD570;
    goto L_8C0AD686;
    L_8C0AD590:;
    if (((*(int *)(((int)stk + 20))) == 0)) goto L_8C0AD686;
    R4 = (R11);
    if (((*(int *)(((((R14 << 2) << 1) + R12) + 0x4))) != 0)) goto L_8C0AD612;
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    t352 = *(int *)((R6 + 0x0));
    *(unsigned int *)(((((R14 << 2) << 1) + R12) + 0x0)) = ((int)((int)(((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) + t352) - 1) % (int)t352));
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    *(unsigned int *)(((int)stk + 24)) = R5;
    L_8C0AD5F2:;
    t356 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    R0 = ((((((t356 << 2) << 1) + t356) << 2) + R10));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t356 << 2) << 1) + t356) << 2) + R10)))) != 0)) goto L_8C0AD5D0;
    goto L_8C0AD686;
    L_8C0AD5D0:;
    t361 = *(int *)(((int)stk + 20));
    t364 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
    *(unsigned int *)((t361 + 0x0)) = ((int)((int)(((*(int *)((t361 + 0x0))) + t364) - 1) % (int)t364));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - 1))) goto L_8C0AD686;
    goto L_8C0AD5F2;
    L_8C0AD612:;
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    t370 = *(int *)((R6 + 0x4));
    *(unsigned int *)(((((R14 << 2) << 1) + R12) + 0x0)) = ((int)((int)(((*(int *)(((((R14 << 2) << 1) + R12) + 0x0))) + t370) - 1) % (int)t370));
    *(unsigned int *)(((int)stk + 20)) = (((R14 << 2) << 1) + R12);
    *(unsigned int *)(((int)stk + 24)) = (R5 + 0x4);
    L_8C0AD66A:;
    t374 = *(int *)(((*(int *)(((int)stk + 20))) + 0x4));
    R0 = ((((((t374 << 2) << 1) + t374) << 2) + R10));
    if (((*(int *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2) + (((((t374 << 2) << 1) + t374) << 2) + R10)))) != 0)) goto L_8C0AD648;
    goto L_8C0AD686;
    L_8C0AD648:;
    t379 = *(int *)(((int)stk + 20));
    t382 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
    *(unsigned int *)((t379 + 0x0)) = ((int)((int)(((*(int *)((t379 + 0x0))) + t382) - 1) % (int)t382));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) - 1))) goto L_8C0AD686;
    goto L_8C0AD66A;
}

int cpuSglAimAddRange(int a4, int a5)
{
    float u1;
    float u2;
    float u3;
    float t11;
    float u31;
    int t34;
    int t32;
    float u36;
    int t39;
    int t37;
    float u41;
    float t48;
    float u69;
    int t72;
    int t70;
    float u74;
    int t77;
    int t75;
    float u79;
    float u90;
    float u91;
    float u93;
    int t102;
    float u103;
    float u104;
    float u106;
    float u107;
    float t118;
    float u138;
    int t141;
    int t139;
    float u143;
    int t146;
    int t144;
    float u148;
    float t155;
    float u176;
    int t179;
    int t177;
    float u181;
    int t184;
    int t182;
    float u186;
    float u188;
    float t200;
    float u220;
    int t223;
    int t221;
    float u225;
    int t228;
    int t226;
    float u230;
    float t237;
    float u258;
    int t261;
    int t259;
    float u263;
    int t266;
    int t264;
    float u268;
    int t287;
    float u29;
    float u67;
    float u86;
    float u87;
    int t283;
    float u136;
    float u174;
    float u192;
    float u218;
    float u256;
    float u275;
    float u276;
    int stk[30];

    *(int *)((int)stk + 28) = ((int)stk + 32);
    cpuShotRange(a4, (((int)stk + 28) + 0x28), (((int)stk + 28) + 0x1C), (((int)stk + 28) + 0x10), ((int)stk + 32));
    u1 = *(float *)(((int)stk + 64));
    u2 = *(float *)((a4 + 0xBB0));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    if (!(59.4249992f > u3)) {
        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
        t11 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
        if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t11))) {
            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
            u29 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
        } else {
            *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
            u29 = (u1 + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
        }
        u31 = *(float *)(((int)stk + 68));
        t34 = 0x1;
        if (u31 > 0.0f) {
        } else {
            t32 = 0x0;
            if (0.0f > u31) {
                t32 = 0xFFFFFFFF;
            }
            t34 = t32;
        }
        u36 = *(float *)((a4 + 0xBA8));
        t39 = 0x1;
        if (u36 > 0.0f) {
        } else {
            t37 = 0x0;
            if (0.0f > u36) {
                t37 = 0xFFFFFFFF;
            }
            t39 = t37;
        }
        u41 = u29;
        if (t34 == t39) {
            u41 = (u29 * 1.10000002f);
        }
        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
        t48 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
        if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t48))) {
            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
            u67 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
        } else {
            *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
            u67 = ((*(float *)(((int)stk + 28))) + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
        }
        u69 = *(float *)(((int)stk + 56));
        t72 = 0x1;
        if (u69 > 0.0f) {
        } else {
            t70 = 0x0;
            if (0.0f > u69) {
                t70 = 0xFFFFFFFF;
            }
            t72 = t70;
        }
        u74 = *(float *)((a4 + 0xBA8));
        t77 = 0x1;
        if (u74 > 0.0f) {
        } else {
            t75 = 0x0;
            if (0.0f > u74) {
                t75 = 0xFFFFFFFF;
            }
            t77 = t75;
        }
        u79 = u67;
        if (t72 == t77) {
            u79 = (u67 * 1.10000002f);
        }
        if (u41 > u79) {
            u86 = (*(float *)(((int)stk + 68)));
            u87 = (*(float *)(((int)stk + 64)));
        } else {
            u86 = (*(float *)(((int)stk + 56)));
            u87 = (*(float *)(((int)stk + 64)));
        }
        cpuAimPointSet(a5, 0x1, u86, u87);
        t287 = (a5 + 0x1);
    } else {
        u90 = *(float *)((a4 + 0xBB0));
        u91 = (-u90);
        if (!(0.0f > u90)) {
            u91 = u90;
        }
        u93 = (-u1);
        if (!(0.0f > u1)) {
            u93 = u1;
        }
        if ((u91 * 0.400000006f) > u93) {
            cpuAimPointSet(a5, 0x2, (*(float *)(((int)stk + 44))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet((a5 + 0x1), 0x2, (*(float *)(((int)stk + 32))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t283 = ((a5 + 0x1) + 0x1);
        } else {
            t102 = (int)((int)(nlRand()) % (int)0x3);
            if (t102 == 0) {
                u103 = *(float *)(((int)stk + 76));
                u104 = (-u103);
                if (!(0.0f > u103)) {
                    u104 = u103;
                }
                u106 = *(float *)((a4 + 0xBB0));
                u107 = (-u106);
                if (!(0.0f > u106)) {
                    u107 = u106;
                }
                if (u107 > u104) {
                    *(float *)(((int)stk + 76)) = (-(*(float *)((a4 + 0xBB0))));
                }
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                t118 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
                if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t118))) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u136 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
                } else {
                    *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u136 = (u1 + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
                }
                u138 = *(float *)(((int)stk + 68));
                t141 = 0x1;
                if (u138 > 0.0f) {
                } else {
                    t139 = 0x0;
                    if (0.0f > u138) {
                        t139 = 0xFFFFFFFF;
                    }
                    t141 = t139;
                }
                u143 = *(float *)((a4 + 0xBA8));
                t146 = 0x1;
                if (u143 > 0.0f) {
                } else {
                    t144 = 0x0;
                    if (0.0f > u143) {
                        t144 = 0xFFFFFFFF;
                    }
                    t146 = t144;
                }
                u148 = u136;
                if (t141 != t146) {
                    u148 = (u136 * 1.10000002f);
                }
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                t155 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
                if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t155))) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u174 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
                } else {
                    *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 76)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u174 = ((*(float *)(((int)stk + 28))) + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
                }
                u176 = *(float *)(((int)stk + 56));
                t179 = 0x1;
                if (u176 > 0.0f) {
                } else {
                    t177 = 0x0;
                    if (0.0f > u176) {
                        t177 = 0xFFFFFFFF;
                    }
                    t179 = t177;
                }
                u181 = *(float *)((a4 + 0xBA8));
                t184 = 0x1;
                if (u181 > 0.0f) {
                } else {
                    t182 = 0x0;
                    if (0.0f > u181) {
                        t182 = 0xFFFFFFFF;
                    }
                    t184 = t182;
                }
                u186 = u174;
                if (t179 != t184) {
                    u186 = (u174 * 1.10000002f);
                }
                u188 = *(float *)(((int)stk + 76));
                if (u148 > u186) {
                    u192 = (*(float *)(((int)stk + 68)));
                } else {
                    u192 = (*(float *)(((int)stk + 56)));
                }
                cpuAimPointSet(a5, 0x1, u192, u188);
            } else {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                t200 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
                if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t200))) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u218 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
                } else {
                    *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 68)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u218 = (u1 + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
                }
                u220 = *(float *)(((int)stk + 68));
                t223 = 0x1;
                if (u220 > 0.0f) {
                } else {
                    t221 = 0x0;
                    if (0.0f > u220) {
                        t221 = 0xFFFFFFFF;
                    }
                    t223 = t221;
                }
                u225 = *(float *)((a4 + 0xBA8));
                t228 = 0x1;
                if (u225 > 0.0f) {
                } else {
                    t226 = 0x0;
                    if (0.0f > u225) {
                        t226 = 0xFFFFFFFF;
                    }
                    t228 = t226;
                }
                u230 = u218;
                if (t223 == t228) {
                    u230 = (u218 * 1.10000002f);
                }
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                t237 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))));
                if (!(0.0f > ((*(float *)((a4 + 0xAF0))) - t237))) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u256 = ((*(float *)((a4 + 0xAF0))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), (*(float *)((a4 + 0xAF0))))));
                } else {
                    *(float *)(((int)stk + 28)) = (-(*(float *)((a4 + 0xAF0))));
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xBA8))) - (*(float *)(((int)stk + 56)))), 0.0f, ((*(float *)((a4 + 0xBB0))) - (*(float *)(((int)stk + 64)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xBA8 + a4)); }
                    u256 = ((*(float *)(((int)stk + 28))) + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), (*(float *)((a4 + 0xAF0))))));
                }
                u258 = *(float *)(((int)stk + 56));
                t261 = 0x1;
                if (u258 > 0.0f) {
                } else {
                    t259 = 0x0;
                    if (0.0f > u258) {
                        t259 = 0xFFFFFFFF;
                    }
                    t261 = t259;
                }
                u263 = *(float *)((a4 + 0xBA8));
                t266 = 0x1;
                if (u263 > 0.0f) {
                } else {
                    t264 = 0x0;
                    if (0.0f > u263) {
                        t264 = 0xFFFFFFFF;
                    }
                    t266 = t264;
                }
                u268 = u256;
                if (t261 == t266) {
                    u268 = (u256 * 1.10000002f);
                }
                if (u230 > u268) {
                    u275 = (*(float *)(((int)stk + 68)));
                    u276 = (*(float *)(((int)stk + 64)));
                } else {
                    u275 = (*(float *)(((int)stk + 56)));
                    u276 = (*(float *)(((int)stk + 64)));
                }
                cpuAimPointSet(a5, 0x1, u275, u276);
            }
            t283 = (a5 + 0x1);
        }
        t287 = t283;
    }
    return t287;
}
