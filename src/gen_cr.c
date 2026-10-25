/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int btnGuideDrawA(int, Stk3);
extern int countryNamePut();
int standRowBarDraw(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t3;
    int t9;
    int t10;
    int t11;
    int t14;
    int t31;
    int t32;
    int t33;
    int t34;
    int t53;
    int t54;
    int t81;
    int t179;
    int t83;
    int t98;
    int t100;
    int t103;
    int t104;
    int t106;
    int t110;
    int t112;
    int t115;
    int t116;
    int t118;
    int t120;
    int t122;
    int t126;
    int t129;
    int t130;
    int t132;
    int t136;
    int t138;
    int t141;
    int t142;
    int t144;
    int t146;
    int t148;
    int t152;
    int t155;
    int t156;
    int t159;
    int t267;
    int t194;
    int t201;
    int t204;
    int t205;
    int t207;
    int t211;
    int t214;
    int t233;
    int t236;
    int t237;
    int t239;
    int t243;
    int t246;
    int t5;
    int t12;
    int t13;
    int t25;
    int t27;
    int t28;
    int t47;
    int t49;
    int t50;
    int t281;
    int t177;
    int t92;
    int t264;
    int t230;
    int t262;
    int stk[147];

    *(unsigned int *)(((int)stk + 132)) = a4;
    *(unsigned int *)(((int)stk + 128)) = a5;
    *(unsigned int *)(((int)stk + 108)) = a6;
    *(volatile int *)0x8C3417D8;
    if ((*(int *)0x8C287ADC) == 2) {
        t3 = *(int *)(((((*(int *)0x8C3417D8) * 0x38) + 0x8C343264) + 0x0));
        *(unsigned int *)(((int)stk + 532)) = t3;
        t5 = t3;
    }
    *(unsigned int *)(((int)stk + 104)) = (((int)stk + 100) + 0x58);
    *(unsigned int *)(((int)stk + 100)) = (((int)stk + 100) + 0x70);
    t9 = t5;
    t10 = (((int)stk + 100) + 0x58);
    t11 = a4;
    t14 = 0x0;
    for (;;) {
        if ((int)t14 >= (int)0x5) {
            break;
        }
        t12 = t14;
        t12 = (t12 << 1);
        t10 = t14;
        t12 = (t12 + t10);
        t10 = 0x157;
        t10 = (t10 - (((t14 << 2) << 2) << 2));
        t12 = (t12 << 2);
        t13 = t12;
        t13 = (t13 + (0x154 + ((int)stk + 100)));
        vecMake(t11, a5, a6, a7, (t13), 479.0f, (float)t10, 0.100000001f);
        t9 = t12;
        t9 = (t9 + (0xC4 + ((int)stk + 100)));
        vecMake(0x0, 0x0, 0x0, 0x0, (t9), ((*(float *)((t13 + 0x0))) + 72.0f), ((*(float *)((t13 + 0x4))) + -17.0f), (*(float *)((t13 + 0x8))));
        if (t14 == (*(int *)(((int)stk + 132)))) {
            t11 = t14;
            t11 = (t11 << 1);
            t10 = t14;
            t11 = (t11 + t10);
            t11 = (t11 << 2);
            t10 = 0x8C0F7DAC;
            t9 = (*(int *)(((int)stk + 104)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)((t11 + (0x154 + ((int)stk + 100)))); }
            t9 = (*(int *)(((int)stk + 100)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)((t11 + (0xC4 + ((int)stk + 100)))); }
            t25 = t9;
            t27 = 0x8C0F7DAC;
            t28 = t11;
        }
        t9 = t25;
        t14 = (t14 + 0x1);
        t10 = t27;
        t11 = t28;
    }
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x64);
    t31 = t9;
    t32 = (((int)stk + 100) + 0x64);
    t33 = t11;
    t34 = 0x0;
    for (;;) {
        if ((int)t34 >= (int)0x5) {
            break;
        }
        t31 = t34;
        t31 = (t31 << 1);
        t32 = t34;
        t31 = (t31 + t32);
        t32 = t34;
        t32 = (t32 << 2);
        t32 = (t32 << 2);
        t32 = (t32 << 2);
        t31 = (t31 << 2);
        *(unsigned int *)(((int)stk + 100)) = t31;
        t31 = (t31 + (0x10C + ((int)stk + 100)));
        *(unsigned int *)(((int)stk + 104)) = t31;
        vecMake(t33, a5, a6, a7, (t31), 16.0f, (float)(0x157 - t32), 0.100000001f);
        t32 = (*(int *)(((int)stk + 104)));
        t31 = (*(int *)(((int)stk + 100)));
        t31 = (t31 + (((int)stk + 100) + 0x7C));
        vecMake(0x0, 0x0, 0x0, 0x0, (t31), ((*(float *)((t32 + 0x0))) + 72.0f), ((*(float *)((t32 + 0x4))) + -17.0f), (*(float *)((t32 + 0x8))));
        if (t34 == (*(int *)(((int)stk + 132)))) {
            t33 = t34;
            t33 = (t33 << 1);
            t32 = t34;
            t33 = (t33 + t32);
            t33 = (t33 << 2);
            t31 = (*(int *)(((int)stk + 116)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t31) = *(struct mv3 *)((t33 + (0x10C + ((int)stk + 100)))); }
            t31 = (*(int *)(((int)stk + 120)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t31) = *(struct mv3 *)((t33 + (((int)stk + 100) + 0x7C))); }
            t47 = t31;
            t49 = 0x8C0F7DAC;
            t50 = t33;
        }
        t31 = t47;
        t34 = (t34 + 0x1);
        t32 = t49;
        t33 = t50;
    }
    t53 = *(int *)(((int)stk + 108));
    t54 = *(int *)(((int)stk + 132));
    if ((int)t53 > (int)0xA) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x58)) = *(struct mv3 *)(((((t54 << 1) + t54) << 2) + (0x154 + ((int)stk + 100)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x4C)) = *(struct mv3 *)(((((t54 << 1) + t54) << 2) + (0x10C + ((int)stk + 100)))); }
    } else {
        *(float *)(((((int)stk + 100) + 0x58) + 0x0)) = (((*(float *)((((((t54 << 1) + t54) << 2) + (0x154 + ((int)stk + 100))) + 0x0))) - (((float)t53 / 10.0f) * 250.0f)) + 250.0f);
        *(float *)(((int)stk + 176)) = (((*(float *)((((((t54 << 1) + t54) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + (((float)t53 / 10.0f) * 250.0f)) + -250.0f);
    }
    if ((int)(*(int *)(((int)stk + 108))) > (int)0x14) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x70)) = *(struct mv3 *)(((((t54 << 1) + t54) << 2) + (0xC4 + ((int)stk + 100)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x64)) = *(struct mv3 *)(((((t54 << 1) + t54) << 2) + (((int)stk + 100) + 0x7C))); }
    } else {
        *(float *)(((((int)stk + 100) + 0x70) + 0x0)) = (((*(float *)((((0xC4 + ((int)stk + 100)) + (((t54 << 1) + t54) << 2)) + 0x0))) - (((float)t53 / 20.0f) * 300.0f)) + 300.0f);
        *(float *)(((int)stk + 200)) = (((*(float *)((((((int)stk + 100) + 0x7C) + (((t54 << 1) + t54) << 2)) + 0x0))) + (((float)t53 / 20.0f) * 300.0f)) + -300.0f);
    }
    *(unsigned int *)(((int)stk + 140)) = ((*(int *)(((int)stk + 132))) + 0x1);
    *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x58);
    *(unsigned int *)(((int)stk + 108)) = (((int)stk + 100) + 0x70);
    *(unsigned int *)(((int)stk + 104)) = (((int)stk + 100) + 0x64);
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    t81 = *(int *)0x8C287ADC;
    if (t81 != 2) {
        *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
        *(unsigned int *)(((int)stk + 136)) = ((0x1A8 + ((int)stk + 100)) + 0x4);
        *(unsigned int *)(((int)stk + 160)) = 0x8C3417EC;
        *(unsigned int *)(((int)stk + 172)) = 0x8C3417FC;
        *(unsigned int *)(((int)stk + 144)) = 0x8C3417F4;
        *(unsigned int *)(((int)stk + 156)) = 0x8C341804;
        *(unsigned int *)(((int)stk + 164)) = 0x8C3417E8;
        *(unsigned int *)(((int)stk + 168)) = 0x8C3417F8;
        *(unsigned int *)(((int)stk + 152)) = 0x8C3417F0;
        *(unsigned int *)(((int)stk + 148)) = 0x8C341800;
        t179 = 0x44;
        if ((int)(*(int *)(((int)stk + 140))) <= 0) {
        } else {
            t83 = 0x0;
            for (;;) {
                *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((t83 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343524))));
                *(unsigned int *)(((*(int *)(((int)stk + 136))) + 0x0)) = (*(int *)(((t83 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343624))));
                if (t83 != (*(int *)(((int)stk + 132)))) {
                    *(unsigned int *)(((int)stk + 112)) = (((t83 << 1) + t83) << 2);
                    if (((*(int *)0x8C34326C) != 0) && (t92 = *(int *)0x8C3432DC, t92 != 0)) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 112))) + (0x154 + ((int)stk + 100)))) = *(struct mv3 *)(((*(int *)(((int)stk + 112))) + (0x10C + ((int)stk + 100)))); }
                    }
                    t98 = *(int *)(((int)stk + 112));
                    *(unsigned int *)(((int)stk + 124)) = (t98 + (0x154 + ((int)stk + 100)));
                    *(float *)((0x4 + (t98 + (0x154 + ((int)stk + 100))))) = ((*(float *)((0x4 + (t98 + (0x154 + ((int)stk + 100)))))) + -14.0f);
                    t100 = *(int *)(((int)stk + 124));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(t100); }
                    t103 = ((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), 0x8C341800, a6, a7, *(Stk3 *)(t100));
                    t104 = *(int *)(((int)stk + 124));
                    *(float *)((t104 + 0x4)) = ((*(float *)((t104 + 0x4))) + 23.0f);
                    t106 = *(int *)(((int)stk + 124));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(t106); }
                    t177 = (((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(t106)));
                } else {
                    t110 = *(int *)(((int)stk + 120));
                    *(float *)((t110 + 0x4)) = ((*(float *)((t110 + 0x4))) + -3.0f);
                    t112 = *(int *)(((int)stk + 120));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(t112); }
                    t115 = ((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 160))) + 0x0))), 0x8C341800, a6, a7, *(Stk3 *)(t112));
                    t116 = *(int *)(((int)stk + 108));
                    *(float *)((t116 + 0x0)) = ((*(float *)((t116 + 0x0))) + -38.0f);
                    t118 = *(int *)(((int)stk + 108));
                    *(float *)((t118 + 0x4)) = ((*(float *)((t118 + 0x4))) + (-1.0f));
                    t120 = *(int *)(((int)stk + 120));
                    *(float *)((t120 + 0x4)) = ((*(float *)((t120 + 0x4))) + 21.0f);
                    t122 = *(int *)(((int)stk + 108));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(t122); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 172))) + 0x0))), *(Stk3 *)(t122));
                    t126 = *(int *)(((int)stk + 120));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t126); }
                    t129 = ((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 144))) + 0x0))), *(Stk3 *)(t126));
                    t130 = *(int *)(((int)stk + 108));
                    *(float *)((t130 + 0x0)) = ((*(float *)((t130 + 0x0))) + 69.0f);
                    t132 = *(int *)(((int)stk + 108));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(t132); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 156))) + 0x0))), *(Stk3 *)(t132));
                    t136 = *(int *)(((int)stk + 116));
                    *(float *)((t136 + 0x4)) = ((*(float *)((t136 + 0x4))) + -3.0f);
                    t138 = *(int *)(((int)stk + 116));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(t138); }
                    t141 = ((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 164))) + 0x0))), *(Stk3 *)(t138));
                    t142 = *(int *)(((int)stk + 104));
                    *(float *)((t142 + 0x0)) = ((*(float *)((t142 + 0x0))) + -38.0f);
                    t144 = *(int *)(((int)stk + 104));
                    *(float *)((t144 + 0x4)) = ((*(float *)((t144 + 0x4))) + (-1.0f));
                    t146 = *(int *)(((int)stk + 116));
                    *(float *)((t146 + 0x4)) = ((*(float *)((t146 + 0x4))) + 21.0f);
                    t148 = *(int *)(((int)stk + 104));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(t148); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 168))) + 0x0))), *(Stk3 *)(t148));
                    t152 = *(int *)(((int)stk + 116));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t152); }
                    t155 = ((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 152))) + 0x0))), *(Stk3 *)(t152));
                    t156 = *(int *)(((int)stk + 104));
                    *(float *)((t156 + 0x0)) = ((*(float *)((t156 + 0x0))) + (*(float *)0x8C0A4824));
                    t159 = *(int *)(((int)stk + 104));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t159); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 148))) + 0x0))), *(Stk3 *)(t159));
                    *(unsigned int *)(((int)stk + 124)) = (((t83 << 1) + t83) << 2);
                    *(unsigned int *)(((int)stk + 112)) = ((((t83 << 1) + t83) << 2) + (0x10C + ((int)stk + 100)));
                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((((t83 << 1) + t83) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + (*(float *)0x8C0A482C)), ((*(float *)((((((t83 << 1) + t83) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                    standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((*(int *)(((int)stk + 124))) + (0x154 + ((int)stk + 100))) + 0x0))) + (*(float *)0x8C0A4834)), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                    t177 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                }
                t83 = (t83 + 0x1);
                if ((int)t83 < (int)(*(int *)(((int)stk + 140)))) continue;
                break;
            }
            t179 = t177;
        }
        t281 = t179;
    } else {
        *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
        *(unsigned int *)(((int)stk + 124)) = 0x8C3417DC;
        *(unsigned int *)(((int)stk + 136)) = (0x1B0 + ((int)stk + 100));
        *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
        t267 = t81;
        if ((int)(*(int *)(((int)stk + 140))) <= 0) {
        } else {
            t194 = 0x0;
            for (;;) {
                *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((t194 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343424))));
                if ((*(int *)0x8C3417D8) != 0) {
                    if (t194 == (*(int *)(((int)stk + 132)))) {
                        t201 = *(int *)(((int)stk + 116));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(t201); }
                        t204 = ((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(t201));
                        t205 = *(int *)(((int)stk + 104));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(t205); }
                        btnGuideDrawA(0x4, *(Stk3 *)(t205));
                        t207 = *(int *)(((int)stk + 108));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t207); }
                        btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(t207));
                        t211 = *(int *)(((int)stk + 120));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(t211); }
                        t214 = ((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(t211));
                        *(unsigned int *)(((int)stk + 144)) = (((t194 << 1) + t194) << 2);
                        *(unsigned int *)(((int)stk + 112)) = ((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100)));
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + 152.0f), ((*(float *)((((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((*(int *)(((int)stk + 144))) + (0x154 + ((int)stk + 100))) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        t230 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100)))); }
                        t230 = (((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100))))));
                    }
                    t264 = t230;
                } else {
                    if (t194 == (*(int *)(((int)stk + 132)))) {
                        t233 = *(int *)(((int)stk + 120));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(t233); }
                        t236 = ((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(t233));
                        t237 = *(int *)(((int)stk + 108));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(t237); }
                        btnGuideDrawA(0x4, *(Stk3 *)(t237));
                        t239 = *(int *)(((int)stk + 104));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t239); }
                        btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(t239));
                        t243 = *(int *)(((int)stk + 116));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(t243); }
                        t246 = ((int (*)(int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(t243));
                        *(unsigned int *)(((int)stk + 144)) = (((t194 << 1) + t194) << 2);
                        *(unsigned int *)(((int)stk + 112)) = ((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100)));
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + 152.0f), ((*(float *)((((((t194 << 1) + t194) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 88), ((*(float *)((((*(int *)(((int)stk + 144))) + (0x154 + ((int)stk + 100))) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        t262 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((t194 << 1) + t194) << 2) + (0x154 + ((int)stk + 100)))); }
                        t262 = (((int (*)(int, int, int, int, Stk3))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((((t194 << 1) + t194) << 2) + (0x154 + ((int)stk + 100))))));
                    }
                    t264 = t262;
                }
                t194 = (t194 + 0x1);
                if ((int)t194 < (int)(*(int *)(((int)stk + 140)))) continue;
                break;
            }
            t267 = t264;
        }
        t281 = t267;
    }
    return t281;
}
