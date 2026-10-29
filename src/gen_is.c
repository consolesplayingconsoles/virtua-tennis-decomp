/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int btnGuideDrawA(int, Stk3);
extern int countryNamePut();
int standRowBarDraw(int, int);
Stk3 vecMake(float, float, float);
int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t24;
    int t25;
    int t34;
    int t66;
    int t71;
    int t72;
    int t80;
    int t82;
    int t87;
    int t88;
    int t90;
    int t92;
    int t101;
    int t102;
    int t108;
    int t113;
    int t114;
    int t116;
    int t118;
    int t128;
    int t129;
    int t163;
    int t173;
    int t186;
    int t197;
    int t207;
    float u224;
    int t234;
    int t235;
    float u236;
    float u237;
    float u238;
    float u245;
    float u246;
    float u247;
    int stk[147];

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
    float F0;
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
    R7 = a7;
    F5 = f5;
    F6 = f6;
    *(unsigned int *)(((int)stk + 132)) = R4;
    *(unsigned int *)(((int)stk + 128)) = R5;
    *(unsigned int *)(((int)stk + 108)) = R6;
    *(volatile int *)0x8C3417D8;
    R14 = (0x0);
    R8 = (0x8C343258);
    if (((*(int *)0x8C287ADC) != 2)) goto L_8C0A4036;
    R0 = (0x8C3417D8);
    R2 = (0x38);
    R3 = ((R8 + 0xC));
    *(unsigned int *)(((int)stk + 532)) = (*(int *)(((((*(int *)((R0 + 0x0))) * R2) + R3) + 0x0)));
    L_8C0A4036:;
    *(unsigned int *)(((int)stk + 104)) = (((int)stk + 100) + 0x58);
    *(unsigned int *)(((int)stk + 100)) = (((int)stk + 100) + 0x70);
    R12 = ((0x154 + ((int)stk + 100)));
    R13 = (0x8C015EEA);
    R9 = ((0xC4 + ((int)stk + 100)));
    F12 = (479.0f);
    F13 = (72.0f);
    F14 = (-17.0f);
    F15 = (0.100000001f);
    L_8C0A4102:;
    if (((int)R14 < (int)0x5)) goto L_8C0A4098;
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x64);
    R0 = (0x8C0A41DC);
    R10 = ((0x10C + ((int)stk + 100)));
    R11 = ((((int)stk + 100) + 0x7C));
    R14 = (0x0);
    F12 = (16.0f);
    L_8C0A4194:;
    if (((int)R14 < (int)0x5)) goto L_8C0A4124;
    t24 = *(int *)(((int)stk + 108));
    t25 = *(int *)(((int)stk + 132));
    R14 = ((((t25 << 1) + t25) << 2));
    R4 = ((((int)stk + 100) + 0x58));
    F4 = ((float)t24);
    if (((int)t24 <= (int)0xA)) goto L_8C0A41E0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R4) = *(struct mv3 *)((R14 + R12)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x4C)) = *(struct mv3 *)((R14 + R10)); }
    L_8C0A420E:;
    R4 = ((((int)stk + 100) + 0x70));
    if (((int)(*(int *)(((int)stk + 108))) <= (int)0x14)) goto L_8C0A4248;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R4) = *(struct mv3 *)((R14 + R9)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x64)) = *(struct mv3 *)((R14 + R11)); }
    L_8C0A4270:;
    *(unsigned int *)(((int)stk + 140)) = ((*(int *)(((int)stk + 132))) + 0x1);
    *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x58);
    *(unsigned int *)(((int)stk + 108)) = (((int)stk + 100) + 0x70);
    *(unsigned int *)(((int)stk + 104)) = (((int)stk + 100) + 0x64);
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    t34 = *(int *)0x8C287ADC;
    R0 = (t34);
    R11 = (0x8C095DEC);
    R14 = (0x8C09275C);
    R2 = ((0x1A8 + ((int)stk + 100)));
    R4 = ((0x1A8 + ((int)stk + 100)));
    F12 = (0.400000006f);
    F13 = ((1.0f + 1.0f));
    F14 = (14.0f);
    F15 = (1.0f);
    if ((t34 == 2)) goto L_8C0A42B4;
    *(unsigned int *)(((int)stk + 100)) = R2;
    *(unsigned int *)(((int)stk + 136)) = (R4 + 0x4);
    *(unsigned int *)(((int)stk + 160)) = 0x8C3417EC;
    *(unsigned int *)(((int)stk + 172)) = 0x8C3417FC;
    *(unsigned int *)(((int)stk + 144)) = 0x8C3417F4;
    *(unsigned int *)(((int)stk + 156)) = 0x8C341804;
    *(unsigned int *)(((int)stk + 164)) = 0x8C3417E8;
    *(unsigned int *)(((int)stk + 168)) = 0x8C3417F8;
    *(unsigned int *)(((int)stk + 152)) = 0x8C3417F0;
    *(unsigned int *)(((int)stk + 148)) = 0x8C341800;
    R0 = (0x44);
    R5 = (0x8C341800);
    R9 = (0x0);
    if (((int)(*(int *)(((int)stk + 140))) > 0)) goto L_8C0A4538;
    L_8C0A47BE:;
    return R0;
    L_8C0A4538:;
    *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((R9 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + (0x2CC + R8)))));
    *(unsigned int *)(((*(int *)(((int)stk + 136))) + 0x0)) = (*(int *)(((R9 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + (0x3CC + R8)))));
    if ((R9 == (*(int *)(((int)stk + 132))))) goto L_8C0A4570;
    *(unsigned int *)(((int)stk + 112)) = (((R9 << 1) + R9) << 2);
    R4 = ((R8 + 0xC));
    if (((*(int *)(((R8 + 0xC) + 0x8))) == 0)) goto L_8C0A4764;
    R0 = (0x78);
    if (((*(int *)((R4 + 0x78))) == 0)) goto L_8C0A4764;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 112))) + R12)) = *(struct mv3 *)(((*(int *)(((int)stk + 112))) + R10)); }
    L_8C0A4764:;
    t66 = *(int *)(((int)stk + 112));
    *(unsigned int *)(((int)stk + 124)) = (t66 + R12);
    *(float *)((0x4 + (t66 + R12))) = ((*(float *)((0x4 + (t66 + R12)))) + -14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 124)))); }
    t71 = ((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F12);
    t72 = *(int *)(((int)stk + 124));
    *(float *)((t72 + 0x4)) = ((*(float *)((t72 + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 124)))); }
    R0 = ((((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 76)), F12)));
    L_8C0A47B2:;
    t80 = (int)(R9 + 0x1) >= (int)(*(int *)(((int)stk + 140)));
    R9 = ((R9 + 0x1));
    if (t80) goto L_8C0A47BE;
    goto L_8C0A4538;
    L_8C0A4570:;
    t82 = *(int *)(((int)stk + 120));
    *(float *)((t82 + 0x4)) = ((*(float *)((t82 + 0x4))) + -3.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
    t87 = ((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 160))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F15);
    t88 = *(int *)(((int)stk + 108));
    *(float *)((t88 + 0x0)) = ((*(float *)((t88 + 0x0))) + -38.0f);
    t90 = *(int *)(((int)stk + 108));
    *(float *)((t90 + 0x4)) = ((*(float *)((t90 + 0x4))) + (-1.0f));
    t92 = *(int *)(((int)stk + 120));
    *(float *)((t92 + 0x4)) = ((*(float *)((t92 + 0x4))) + 21.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 172))) + 0x0))), *(Stk3 *)(((int)stk + 76)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
    t101 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 144))) + 0x0))), *(Stk3 *)(((int)stk + 64)), F15);
    t102 = *(int *)(((int)stk + 108));
    *(float *)((t102 + 0x0)) = ((*(float *)((t102 + 0x0))) + 69.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 156))) + 0x0))), *(Stk3 *)(((int)stk + 52)));
    t108 = *(int *)(((int)stk + 116));
    *(float *)((t108 + 0x4)) = ((*(float *)((t108 + 0x4))) + -3.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
    t113 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 164))) + 0x0))), *(Stk3 *)(((int)stk + 40)), F15);
    t114 = *(int *)(((int)stk + 104));
    *(float *)((t114 + 0x0)) = ((*(float *)((t114 + 0x0))) + -38.0f);
    t116 = *(int *)(((int)stk + 104));
    *(float *)((t116 + 0x4)) = ((*(float *)((t116 + 0x4))) + (-1.0f));
    t118 = *(int *)(((int)stk + 116));
    *(float *)((t118 + 0x4)) = ((*(float *)((t118 + 0x4))) + 21.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 168))) + 0x0))), *(Stk3 *)(((int)stk + 28)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
    F4 = (F15);
    t128 = ((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 152))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 16)), F4);
    t129 = *(int *)(((int)stk + 104));
    *(float *)((t129 + 0x0)) = ((*(float *)((t129 + 0x0))) + (*(float *)0x8C0A4824));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 148))) + 0x0))), *(Stk3 *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 124)) = (((R9 << 1) + R9) << 2);
    *(unsigned int *)(((int)stk + 112)) = ((((R9 << 1) + R9) << 2) + R10);
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x0))) + (*(float *)0x8C0A482C)), ((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x4))) + F14), F13);
    standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 124))) + R12) + 0x0))) + (*(float *)0x8C0A4834)), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + F14), F13);
    R0 = ((standRowBarDraw(0x22, (*(int *)(((int)stk + 128))))));
    goto L_8C0A47B2;
    L_8C0A42B4:;
    *(unsigned int *)(((int)stk + 100)) = R2;
    *(unsigned int *)(((int)stk + 124)) = 0x8C3417DC;
    *(unsigned int *)(((int)stk + 136)) = (0x1B0 + ((int)stk + 100));
    *(unsigned int *)(((int)stk + 100)) = R2;
    R9 = (0x0);
    if (((int)(*(int *)(((int)stk + 140))) > 0)) goto L_8C0A42D0;
    goto L_8C0A47BE;
    L_8C0A42D0:;
    *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((R9 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + (0x1CC + R8)))));
    R1 = (0x8C3417D8);
    if (((*(int *)0x8C3417D8) == 0)) goto L_8C0A42F6;
    if ((R9 != (*(int *)(((int)stk + 132))))) goto L_8C0A44B2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
    t163 = ((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
    btnGuideDrawA(0x4, *(Stk3 *)(((int)stk + 76)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(((int)stk + 64)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
    t173 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 52)), F15);
    *(unsigned int *)(((int)stk + 144)) = (((R9 << 1) + R9) << 2);
    *(unsigned int *)(((int)stk + 112)) = ((((R9 << 1) + R9) << 2) + R10);
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x0))) + 152.0f), ((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x4))) + F14), F13);
    standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 144))) + R12) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + F14), F13);
    R0 = ((standRowBarDraw(0x22, (*(int *)(((int)stk + 128))))));
    L_8C0A44D2:;
    L_8C0A44D4:;
    t186 = (int)(R9 + 0x1) >= (int)(*(int *)(((int)stk + 140)));
    R9 = ((R9 + 0x1));
    if (t186) goto L_8C0A44E0;
    goto L_8C0A42D0;
    L_8C0A44E0:;
    goto L_8C0A47BE;
    L_8C0A44B2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((R9 << 1) + R9) << 2) + R10)); }
    R0 = ((((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F12)));
    goto L_8C0A44D2;
    L_8C0A42F6:;
    if ((R9 != (*(int *)(((int)stk + 132))))) goto L_8C0A43E4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
    t197 = ((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
    btnGuideDrawA(0x4, *(Stk3 *)(((int)stk + 76)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(((int)stk + 64)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
    t207 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 52)), F15);
    *(unsigned int *)(((int)stk + 144)) = (((R9 << 1) + R9) << 2);
    *(unsigned int *)(((int)stk + 112)) = ((((R9 << 1) + R9) << 2) + R10);
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x0))) + 152.0f), ((*(float *)((((((R9 << 1) + R9) << 2) + R10) + 0x4))) + F14), F13);
    standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 144))) + R12) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + F14), F13);
    R0 = ((standRowBarDraw(0x22, (*(int *)(((int)stk + 128))))));
    L_8C0A4404:;
    goto L_8C0A44D4;
    L_8C0A43E4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((R9 << 1) + R9) << 2) + R12)); }
    R0 = ((((int (*)(int, int, int, int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), R5, R6, R7, *(Stk3 *)(((int)stk + 88)), F12)));
    goto L_8C0A4404;
    L_8C0A4248:;
    *(float *)((R4 + 0x0)) = (((*(float *)(((R9 + R14) + 0x0))) - ((F4 / 20.0f) * 300.0f)) + 300.0f);
    u224 = *(float *)(((R11 + R14) + 0x0));
    *(float *)(((int)stk + 200)) = ((u224 + ((F4 / 20.0f) * 300.0f)) + -300.0f);
    F1 = (((u224 + ((F4 / 20.0f) * 300.0f)) + -300.0f));
    F5 = (300.0f);
    F6 = (((F4 / 20.0f) * 300.0f));
    goto L_8C0A4270;
    L_8C0A41E0:;
    *(float *)((R4 + 0x0)) = (((*(float *)(((R14 + R12) + 0x0))) - ((F4 / 10.0f) * 250.0f)) + 250.0f);
    *(float *)(((int)stk + 176)) = (((*(float *)(((R14 + R10) + 0x0))) + ((F4 / 10.0f) * 250.0f)) + -250.0f);
    R0 = (0x4C);
    F1 = (-250.0f);
    F5 = (((F4 / 10.0f) * 250.0f));
    F6 = (250.0f);
    goto L_8C0A420E;
    L_8C0A4124:;
    *(unsigned int *)(((int)stk + 100)) = (((R14 << 1) + R14) << 2);
    *(unsigned int *)(((int)stk + 104)) = ((((R14 << 1) + R14) << 2) + R10);
    *(int *)((int)stk + 96) = ((((R14 << 1) + R14) << 2) + R10);
    *(Stk3 *)(((((R14 << 1) + R14) << 2) + R10)) = vecMake(F12, (float)(0x157 - (((R14 << 2) << 2) << 2)), F15);
    t234 = *(int *)(((int)stk + 104));
    t235 = *(int *)(((int)stk + 100));
    u236 = *(float *)((t234 + 0x8));
    u237 = *(float *)((t234 + 0x0));
    u238 = *(float *)((t234 + 0x4));
    *(int *)((int)stk + 92) = (t235 + R11);
    *(Stk3 *)((t235 + R11)) = vecMake((u237 + F13), (u238 + F14), u236);
    if ((R14 != (*(int *)(((int)stk + 132))))) goto L_8C0A4192;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 116)))) = *(struct mv3 *)(((((R14 << 1) + R14) << 2) + R10)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 120)))) = *(struct mv3 *)(((((R14 << 1) + R14) << 2) + R11)); }
    R4 = ((((R14 << 1) + R14) << 2));
    L_8C0A4192:;
    R14 = ((R14 + 0x1));
    goto L_8C0A4194;
    L_8C0A4098:;
    *(int *)((int)stk + 96) = ((((R14 << 1) + R14) << 2) + R12);
    *(Stk3 *)(((((R14 << 1) + R14) << 2) + R12)) = vecMake(F12, (float)(0x157 - (((R14 << 2) << 2) << 2)), F15);
    u245 = *(float *)((((((R14 << 1) + R14) << 2) + R12) + 0x0));
    u246 = *(float *)((((((R14 << 1) + R14) << 2) + R12) + 0x8));
    u247 = *(float *)((((((R14 << 1) + R14) << 2) + R12) + 0x4));
    *(int *)((int)stk + 92) = ((((R14 << 1) + R14) << 2) + R9);
    *(Stk3 *)(((((R14 << 1) + R14) << 2) + R9)) = vecMake((u245 + F13), (u247 + F14), u246);
    if ((R14 != (*(int *)(((int)stk + 132))))) goto L_8C0A4100;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 104)))) = *(struct mv3 *)(((((R14 << 1) + R14) << 2) + R12)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 100)))) = *(struct mv3 *)(((((R14 << 1) + R14) << 2) + R9)); }
    R4 = ((((R14 << 1) + R14) << 2));
    L_8C0A4100:;
    R14 = ((R14 + 0x1));
    goto L_8C0A4102;
}
