/* Straight-line functions with calls and guards (batch gen_ji): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int btnGuideDrawA(int, Stk3);
int colliObjInit(int, int, int, int, int, float);
extern int countryNamePut();
int effServeSpeedShow(int);
int evSkidMarkSpawn(int, int, int);
int lightOverrideAmbient(int, int);
int lightOverrideDiffuse(int, int);
int motionRootFirst(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int playerRecA20Clear(int);
int seFootstepCheck(int, int, int, int, int, int, int, int, int);
int serveGetPos(int, int, int, int, int);
int serveGetReceiver(void);
int serveGetServer(void);
int standRowBarDraw(int, int);
Stk3 vecMake(float, float, float);
int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void playerInit(int a4, int a5, int a6, int a7);

int standTableDraw(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t3;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;
    float u16;
    float u17;
    float u18;
    int t19;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    float u36;
    float u37;
    float u38;
    int t39;
    int t49;
    int t50;
    int t77;
    int t173;
    int t79;
    int t94;
    int t99;
    int t100;
    int t106;
    int t111;
    int t112;
    int t114;
    int t116;
    int t125;
    int t126;
    int t132;
    int t137;
    int t138;
    int t140;
    int t142;
    int t151;
    int t152;
    int t257;
    int t188;
    int t198;
    int t208;
    int t228;
    int t238;
    int t5;
    int t12;
    int t13;
    int t23;
    int t25;
    int t26;
    int t43;
    int t45;
    int t46;
    float u58;
    float u59;
    float u73;
    float u74;
    int t271;
    int t171;
    int t88;
    int t254;
    int t222;
    int t252;
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
        t15 = t13;
        *(int *)((int)stk + 96) = t15;
        *(Stk3 *)(t15) = vecMake(479.0f, (float)t10, 0.100000001f);
        u16 = *(float *)((t13 + 0x0));
        u17 = *(float *)((t13 + 0x8));
        u18 = *(float *)((t13 + 0x4));
        t9 = t12;
        t9 = (t9 + (0xC4 + ((int)stk + 100)));
        t19 = t9;
        *(int *)((int)stk + 92) = t19;
        *(Stk3 *)(t19) = vecMake((u16 + 72.0f), (u18 + -17.0f), u17);
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
            t23 = t9;
            t25 = 0x8C0F7DAC;
            t26 = t11;
        }
        t9 = t23;
        t14 = (t14 + 0x1);
        t10 = t25;
        t11 = t26;
    }
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x64);
    t29 = t9;
    t30 = (((int)stk + 100) + 0x64);
    t31 = t11;
    t32 = 0x0;
    for (;;) {
        if ((int)t32 >= (int)0x5) {
            break;
        }
        t29 = t32;
        t29 = (t29 << 1);
        t30 = t32;
        t29 = (t29 + t30);
        t30 = t32;
        t30 = (t30 << 2);
        t30 = (t30 << 2);
        t30 = (t30 << 2);
        t29 = (t29 << 2);
        *(unsigned int *)(((int)stk + 100)) = t29;
        t29 = (t29 + (0x10C + ((int)stk + 100)));
        *(unsigned int *)(((int)stk + 104)) = t29;
        t33 = t29;
        *(int *)((int)stk + 96) = t33;
        *(Stk3 *)(t33) = vecMake(16.0f, (float)(0x157 - t30), 0.100000001f);
        t30 = (*(int *)(((int)stk + 104)));
        t29 = (*(int *)(((int)stk + 100)));
        u36 = *(float *)((t30 + 0x8));
        u37 = *(float *)((t30 + 0x0));
        u38 = *(float *)((t30 + 0x4));
        t29 = (t29 + (((int)stk + 100) + 0x7C));
        t39 = t29;
        *(int *)((int)stk + 92) = t39;
        *(Stk3 *)(t39) = vecMake((u37 + 72.0f), (u38 + -17.0f), u36);
        if (t32 == (*(int *)(((int)stk + 132)))) {
            t31 = t32;
            t31 = (t31 << 1);
            t30 = t32;
            t31 = (t31 + t30);
            t31 = (t31 << 2);
            t29 = (*(int *)(((int)stk + 116)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t29) = *(struct mv3 *)((t31 + (0x10C + ((int)stk + 100)))); }
            t29 = (*(int *)(((int)stk + 120)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t29) = *(struct mv3 *)((t31 + (((int)stk + 100) + 0x7C))); }
            t43 = t29;
            t45 = 0x8C0F7DAC;
            t46 = t31;
        }
        t29 = t43;
        t32 = (t32 + 0x1);
        t30 = t45;
        t31 = t46;
    }
    t49 = *(int *)(((int)stk + 108));
    t50 = *(int *)(((int)stk + 132));
    if ((int)t49 > (int)0xA) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x58)) = *(struct mv3 *)(((((t50 << 1) + t50) << 2) + (0x154 + ((int)stk + 100)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x4C)) = *(struct mv3 *)(((((t50 << 1) + t50) << 2) + (0x10C + ((int)stk + 100)))); }
        u58 = f5;
        u59 = f6;
    } else {
        *(float *)(((((int)stk + 100) + 0x58) + 0x0)) = (((*(float *)((((((t50 << 1) + t50) << 2) + (0x154 + ((int)stk + 100))) + 0x0))) - (((float)t49 / 10.0f) * 250.0f)) + 250.0f);
        *(float *)(((int)stk + 176)) = (((*(float *)((((((t50 << 1) + t50) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + (((float)t49 / 10.0f) * 250.0f)) + -250.0f);
        u58 = (((float)t49 / 10.0f) * 250.0f);
        u59 = 250.0f;
    }
    if ((int)(*(int *)(((int)stk + 108))) > (int)0x14) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x70)) = *(struct mv3 *)(((((t50 << 1) + t50) << 2) + (0xC4 + ((int)stk + 100)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x64)) = *(struct mv3 *)(((((t50 << 1) + t50) << 2) + (((int)stk + 100) + 0x7C))); }
        u73 = u58;
        u74 = u59;
    } else {
        *(float *)(((((int)stk + 100) + 0x70) + 0x0)) = (((*(float *)((((0xC4 + ((int)stk + 100)) + (((t50 << 1) + t50) << 2)) + 0x0))) - (((float)t49 / 20.0f) * 300.0f)) + 300.0f);
        *(float *)(((int)stk + 200)) = (((*(float *)((((((int)stk + 100) + 0x7C) + (((t50 << 1) + t50) << 2)) + 0x0))) + (((float)t49 / 20.0f) * 300.0f)) + -300.0f);
        u73 = 300.0f;
        u74 = (((float)t49 / 20.0f) * 300.0f);
    }
    *(unsigned int *)(((int)stk + 140)) = ((*(int *)(((int)stk + 132))) + 0x1);
    *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
    *(unsigned int *)(((int)stk + 120)) = (((int)stk + 100) + 0x58);
    *(unsigned int *)(((int)stk + 108)) = (((int)stk + 100) + 0x70);
    *(unsigned int *)(((int)stk + 104)) = (((int)stk + 100) + 0x64);
    *(unsigned int *)(((int)stk + 116)) = (((int)stk + 100) + 0x4C);
    t77 = *(int *)0x8C287ADC;
    if (t77 != 2) {
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
        t173 = 0x44;
        if ((int)(*(int *)(((int)stk + 140))) <= 0) {
        } else {
            t79 = 0x0;
            for (;;) {
                *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((t79 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343524))));
                *(unsigned int *)(((*(int *)(((int)stk + 136))) + 0x0)) = (*(int *)(((t79 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343624))));
                if (t79 != (*(int *)(((int)stk + 132)))) {
                    *(unsigned int *)(((int)stk + 112)) = (((t79 << 1) + t79) << 2);
                    if (((*(int *)0x8C34326C) != 0) && (t88 = *(int *)0x8C3432DC, t88 != 0)) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 112))) + (0x154 + ((int)stk + 100)))) = *(struct mv3 *)(((*(int *)(((int)stk + 112))) + (0x10C + ((int)stk + 100)))); }
                    }
                    t94 = *(int *)(((int)stk + 112));
                    *(unsigned int *)(((int)stk + 124)) = (t94 + (0x154 + ((int)stk + 100)));
                    *(float *)((0x4 + (t94 + (0x154 + ((int)stk + 100))))) = ((*(float *)((0x4 + (t94 + (0x154 + ((int)stk + 100)))))) + -14.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 124)))); }
                    t99 = ((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), 0x8C341800, a6, a7, *(Stk3 *)(((int)stk + 88)), 0.400000006f, u73, u74);
                    t100 = *(int *)(((int)stk + 124));
                    *(float *)((t100 + 0x4)) = ((*(float *)((t100 + 0x4))) + 23.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 124)))); }
                    t171 = (((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 76)), 0.400000006f));
                } else {
                    t106 = *(int *)(((int)stk + 120));
                    *(float *)((t106 + 0x4)) = ((*(float *)((t106 + 0x4))) + -3.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
                    t111 = ((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 160))) + 0x0))), 0x8C341800, a6, a7, *(Stk3 *)(((int)stk + 88)), 1.0f, u73, u74);
                    t112 = *(int *)(((int)stk + 108));
                    *(float *)((t112 + 0x0)) = ((*(float *)((t112 + 0x0))) + -38.0f);
                    t114 = *(int *)(((int)stk + 108));
                    *(float *)((t114 + 0x4)) = ((*(float *)((t114 + 0x4))) + (-1.0f));
                    t116 = *(int *)(((int)stk + 120));
                    *(float *)((t116 + 0x4)) = ((*(float *)((t116 + 0x4))) + 21.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 172))) + 0x0))), *(Stk3 *)(((int)stk + 76)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
                    t125 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 144))) + 0x0))), *(Stk3 *)(((int)stk + 64)), 1.0f);
                    t126 = *(int *)(((int)stk + 108));
                    *(float *)((t126 + 0x0)) = ((*(float *)((t126 + 0x0))) + 69.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 156))) + 0x0))), *(Stk3 *)(((int)stk + 52)));
                    t132 = *(int *)(((int)stk + 116));
                    *(float *)((t132 + 0x4)) = ((*(float *)((t132 + 0x4))) + -3.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
                    t137 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 164))) + 0x0))), *(Stk3 *)(((int)stk + 40)), 1.0f);
                    t138 = *(int *)(((int)stk + 104));
                    *(float *)((t138 + 0x0)) = ((*(float *)((t138 + 0x0))) + -38.0f);
                    t140 = *(int *)(((int)stk + 104));
                    *(float *)((t140 + 0x4)) = ((*(float *)((t140 + 0x4))) + (-1.0f));
                    t142 = *(int *)(((int)stk + 116));
                    *(float *)((t142 + 0x4)) = ((*(float *)((t142 + 0x4))) + 21.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 168))) + 0x0))), *(Stk3 *)(((int)stk + 28)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
                    t151 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 152))) + 0x0))), *(Stk3 *)(((int)stk + 16)), 1.0f);
                    t152 = *(int *)(((int)stk + 104));
                    *(float *)((t152 + 0x0)) = ((*(float *)((t152 + 0x0))) + (*(float *)0x8C0A4824));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
                    btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 148))) + 0x0))), *(Stk3 *)(((int)stk + 4)));
                    *(unsigned int *)(((int)stk + 124)) = (((t79 << 1) + t79) << 2);
                    *(unsigned int *)(((int)stk + 112)) = ((((t79 << 1) + t79) << 2) + (0x10C + ((int)stk + 100)));
                    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((t79 << 1) + t79) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + (*(float *)0x8C0A482C)), ((*(float *)((((((t79 << 1) + t79) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                    standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                    *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 124))) + (0x154 + ((int)stk + 100))) + 0x0))) + (*(float *)0x8C0A4834)), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                    t171 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                }
                t79 = (t79 + 0x1);
                if ((int)t79 < (int)(*(int *)(((int)stk + 140)))) continue;
                break;
            }
            t173 = t171;
        }
        t271 = t173;
    } else {
        *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
        *(unsigned int *)(((int)stk + 124)) = 0x8C3417DC;
        *(unsigned int *)(((int)stk + 136)) = (0x1B0 + ((int)stk + 100));
        *(unsigned int *)(((int)stk + 100)) = (0x1A8 + ((int)stk + 100));
        t257 = t77;
        if ((int)(*(int *)(((int)stk + 140))) <= 0) {
        } else {
            t188 = 0x0;
            for (;;) {
                *(unsigned int *)(((*(int *)(((int)stk + 100))) + 0x0)) = (*(int *)(((t188 << 2) + (((((*(int *)0x8C3417E4) << 2) << 2) << 1) + 0x8C343424))));
                if ((*(int *)0x8C3417D8) != 0) {
                    if (t188 == (*(int *)(((int)stk + 132)))) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
                        t198 = ((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((int)stk + 88)), 1.0f, u73, u74);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
                        btnGuideDrawA(0x4, *(Stk3 *)(((int)stk + 76)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
                        btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(((int)stk + 64)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
                        t208 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 52)), 1.0f);
                        *(unsigned int *)(((int)stk + 144)) = (((t188 << 1) + t188) << 2);
                        *(unsigned int *)(((int)stk + 112)) = ((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100)));
                        *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + 152.0f), ((*(float *)((((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                        *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 144))) + (0x154 + ((int)stk + 100))) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        t222 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100)))); }
                        t222 = (((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((int)stk + 88)), 0.400000006f, u73, u74));
                    }
                    t254 = t222;
                } else {
                    if (t188 == (*(int *)(((int)stk + 132)))) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((*(int *)(((int)stk + 120)))); }
                        t228 = ((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((int)stk + 88)), 1.0f, u73, u74);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((*(int *)(((int)stk + 108)))); }
                        btnGuideDrawA(0x4, *(Stk3 *)(((int)stk + 76)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
                        btnGuideDrawA((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))), *(Stk3 *)(((int)stk + 64)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 116)))); }
                        t238 = ((int (*)(int, Stk3, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))), *(Stk3 *)(((int)stk + 52)), 1.0f);
                        *(unsigned int *)(((int)stk + 144)) = (((t188 << 1) + t188) << 2);
                        *(unsigned int *)(((int)stk + 112)) = ((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100)));
                        *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100))) + 0x0))) + 152.0f), ((*(float *)((((((t188 << 1) + t188) << 2) + (0x10C + ((int)stk + 100))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        standRowBarDraw(0x22, (*(int *)(((int)stk + 128))));
                        *(Stk3 *)(((int)stk + 88)) = vecMake(((*(float *)((((*(int *)(((int)stk + 144))) + (0x154 + ((int)stk + 100))) + 0x0))) + -37.0f), ((*(float *)(((*(int *)(((int)stk + 112))) + 0x4))) + 14.0f), (1.0f + 1.0f));
                        t252 = (standRowBarDraw(0x22, (*(int *)(((int)stk + 128)))));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((t188 << 1) + t188) << 2) + (0x154 + ((int)stk + 100)))); }
                        t252 = (((int (*)(int, int, int, int, Stk3, float, float, float))(countryNamePut))((*(int *)(((*(int *)(((int)stk + 100))) + 0x0))), a5, a6, a7, *(Stk3 *)(((int)stk + 88)), 0.400000006f, u73, u74));
                    }
                    t254 = t252;
                }
                t188 = (t188 + 0x1);
                if ((int)t188 < (int)(*(int *)(((int)stk + 140)))) continue;
                break;
            }
            t257 = t254;
        }
        t271 = t257;
    }
    return t271;
}

void playerInit(int a4, int a5, int a6, int a7)
{
    float u4;
    int t7;
    int t5;
    int t10;
    int t13;
    int t14;
    int t15;
    int t16;
    int t23;
    int t25;
    int t28;
    int t35;
    int t55;
    int t56;
    int t58;
    float u74;
    int t77;
    int t75;
    int t95;
    int t105;
    int t108;
    int t111;
    int t128;
    int t129;
    int t131;
    int t86;
    int t88;
    int t38;
    int t39;
    int t40;
    int t69;
    int t104;
    int t132;
    int stk[16];

    if ((*(int *)((a4 + 0xC58))) == -1) {
        *(unsigned int *)((a4 + 0xC58)) = 0x0;
    }
    *(unsigned int *)((a4 + 0xB5C)) = a5;
    *(int *)((int)stk + 12) = (0xAE8 + a4);
    serveGetPos(a5, a5, a6, a7, (0xAE8 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAF4 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned short *)((a4 + 0xB0A)) = 0x0;
    *(unsigned short *)((a4 + 0xB0C)) = 0x0;
    u4 = *(float *)((a4 + 0xAF0));
    t7 = 0x1;
    if (u4 > 0.0f) {
    } else {
        t5 = 0x0;
        if (0.0f > u4) {
            t5 = 0xFFFFFFFF;
        }
        t7 = t5;
    }
    *(float *)((a4 + 0xB00)) = (float)(-t7);
    *(unsigned short *)(((0xB04 + a4) + 0x0)) = ((short)((((*(float *)((a4 + 0xAF0))) > 0.0f)) ? 1 : 0) * (short)0xFFFF8000);
    t10 = *(short *)((a4 + 0xB04));
    *(unsigned short *)((a4 + 0xB08)) = t10;
    *(unsigned short *)((a4 + 0xB06)) = t10;
    *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
    *(unsigned short *)((a4 + 0xB10)) = 0x0;
    *(unsigned short *)((a4 + 0xB12)) = (*(short *)((a4 + 0xB06)));
    *(float *)((a4 + 0xB14)) = 0.0f;
    *(float *)((a4 + 0xB18)) = 1.0f;
    t13 = *(short *)((a4 + 0xB06));
    *(unsigned short *)((a4 + 0xB1E)) = t13;
    *(unsigned short *)((a4 + 0xB1C)) = t13;
    *(float *)((a4 + 0xB24)) = 0.0f;
    *(float *)((a4 + 0xB20)) = 0.0f;
    *(unsigned short *)((a4 + 0xB2A)) = 0x0;
    *(unsigned short *)((a4 + 0xB28)) = 0x0;
    *(float *)((a4 + 0xB30)) = 0.0f;
    *(float *)((a4 + 0xB2C)) = 0.0f;
    t14 = 0x0;
    t15 = 0x0;
    for (;;) {
        *(unsigned short *)((((0xB34 + a4) + t14) + 0x0)) = 0x0;
        t16 = ((0xB3A + a4) + t14);
        t14 = (t14 + 0x2);
        *(unsigned short *)((t16 + 0x0)) = 0x0;
        *(float *)((((0xB4C + a4) + t15) + 0x0)) = 0.0f;
        *(float *)((((0xB40 + a4) + t15) + 0x0)) = 0.0f;
        t15 = (t15 + 0x4);
        if ((unsigned int)t14 >= (unsigned int)0x6) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xB68)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB6C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(int *)((int)stk + 12) = (0xB78 + a4);
    *(Stk3 *)((0xB78 + a4)) = vecMake(0.100000001f, 0.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB84 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB90 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB9C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBA8 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBB4 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBC0 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
    *(unsigned int *)((a4 + 0xBD0)) = 0x0;
    *(unsigned int *)((a4 + 0xBD4)) = 0x0;
    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
    *(float *)((a4 + 0xBDC)) = 1.0f;
    *(unsigned int *)((a4 + 0xB60)) = 0x0;
    if ((*(int *)0x8C287ADC) == 4) {
        *(unsigned int *)((a4 + 0xD50)) = 0x6;
    }
    t23 = serveGetServer();
    if (t23 != a5) {
        *(unsigned int *)((a4 + 0xB58)) = 0x0;
        t25 = (*(int *)0x8C2873D0);
        *(int *)((int)stk + 12) = t25;
        t28 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x0)));
        *(int *)((int)stk + 8) = t28;
        motionSet(a4, (*(int *)((((*(int *)((a4 + 0xB58))) << 2) + 0x8C102C6C))), 0x1, 0x12755C, t28, t25, (*(float *)0x8C23D204));
        *(float *)((a4 + 0x4C)) = (*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x4)));
        t35 = serveGetReceiver();
        if (t35 == a5) {
            *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x8);
            *(unsigned int *)0x8C287AF8 = a5;
            if (((*(int *)0x8C287B00) == 0) && ((t38 = *(int *)0x8C287B04, t38 == 0) && ((t39 = *(int *)0x8C287B10, t39 == 0) && (t40 = *(int *)0x8C287B14, t40 == 0)))) {
                *(unsigned int *)((a4 + 0xD50)) = 0x7;
            } else {
                *(unsigned int *)((a4 + 0xD50)) = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x40)));
            }
        }
        t86 = 0xD40;
        t88 = 0x8C01DE1A;
    } else {
        *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x40000);
        *(unsigned int *)((a4 + 0xB58)) = 0x0;
        t55 = (*(int *)0x8C2873D0);
        *(int *)((int)stk + 12) = t55;
        t56 = *(int *)((a4 + 0xC58));
        *(unsigned int *)(((int)stk + 16)) = ((t56 * 0x6C) + 0x8C102424);
        t58 = (*(int *)((((t56 * 0x6C) + 0x8C102424) + 0x0)));
        *(int *)((int)stk + 8) = t58;
        motionSet(a4, (*(int *)(((((*(int *)(((*(int *)(((int)stk + 16))) + 0x34))) << 2) << 2) + 0x8C105F1C))), 0x1, 0x12755C, t58, t55, (*(float *)0x8C23D204));
        *(float *)((a4 + 0x4C)) = (*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x4)));
        effServeSpeedShow(a5);
        if ((((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) == 0) && (t69 = *(int *)0x8C287B28, t69 == 0)) {
            *(float *)((a4 + 0xD00)) = 0.0f;
        }
        if ((*(float *)((a4 + 0xD00))) != 0.0f) {
            u74 = *(float *)((a4 + 0xAE8));
            t77 = 0x1;
            if (u74 > 0.0f) {
            } else {
                t75 = 0x0;
                if (0.0f > u74) {
                    t75 = 0xFFFFFFFF;
                }
                t77 = t75;
            }
            *(float *)((a4 + 0xAE8)) = ((float)t77 * (*(float *)((a4 + 0xD00))));
        }
        *(unsigned int *)((a4 + 0xD40)) = 0x8C02414C;
        t86 = 0xD50;
        t88 = 0x5;
    }
    *(unsigned int *)((a4 + t86)) = t88;
    t95 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((0xBE0 + a4) + t95) + 0x30)) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xBE0 + a4) + t95)) = *(struct mv3 *)(0x8C1016D4); }
        t95 = (t95 + 0xC);
        if ((unsigned int)t95 >= (unsigned int)0x30) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xC40)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC44 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned short *)((a4 + 0xD44)) = 0x0;
    *(unsigned short *)((a4 + 0xD46)) = 0x0;
    *(unsigned short *)((a4 + 0xD48)) = 0x0;
    *(unsigned short *)((a4 + 0xD4A)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xAD0 + a4) + 0xC)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAD0 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xAB8 + a4) + 0xC)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAB8 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xC50)) = 0x63;
    *(unsigned int *)((a4 + 0xC54)) = 0x63;
    *(unsigned int *)((a4 + 0xC5C)) = 0x0;
    *(unsigned int *)((a4 + 0xC60)) = 0x0;
    *(unsigned int *)((a4 + 0xC64)) = 0x0;
    *(unsigned int *)((a4 + 0xC68)) = 0x0;
    *(float *)((a4 + 0xC70)) = 1.0f;
    *(unsigned int *)((a4 + 0xC74)) = 0x1;
    *(unsigned int *)((a4 + 0xC6C)) = 0x0;
    *(unsigned int *)((a4 + 0xC78)) = 0x0;
    *(float *)((a4 + 0xC7C)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC80 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned short *)((a4 + 0xC8C)) = 0x0;
    *(float *)((a4 + 0xC90)) = 0.0f;
    *(float *)((a4 + 0xC94)) = 1.0f;
    *(unsigned int *)((a4 + 0xC9C)) = 0x0;
    *(unsigned int *)((a4 + 0xCA0)) = 0x0;
    *(unsigned int *)((a4 + 0xCB0)) = 0x0;
    *(float *)((a4 + 0xCB4)) = 0.0f;
    *(unsigned int *)((a4 + 0xCBC)) = 0x0;
    *(unsigned int *)((a4 + 0xCC0)) = 0x0;
    *(unsigned int *)((a4 + 0xCC4)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCD4 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC8 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCE0 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xCEC)) = 0x0;
    *(unsigned int *)((a4 + 0xCF0)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCF4 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xC98)) = 0x0;
    *(unsigned int *)((a4 + 0xC9C)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD04 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xD10)) = 0x0;
    *(unsigned int *)((a4 + 0xD14)) = 0x0;
    *(float *)(((0xD34 + a4) + 0x4)) = 1.0f;
    *(float *)(((0xD34 + a4) + 0x0)) = 1.0f;
    *(unsigned short *)((a4 + 0xD3E)) = 0x3E7;
    *(unsigned short *)((a4 + 0xD3C)) = 0x3E7;
    *(unsigned int *)((a4 + 0xD30)) = 0x63;
    *(unsigned int *)((a4 + 0xD4C)) = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x3C)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD60 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD54 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xD6C)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0xD70)) = 0x0;
    *(unsigned int *)((a4 + 0xD74)) = 0x0;
    playerRecA20Clear((0xA20 + a4));
    *(int *)((int)stk + 12) = (0xA40 + a4);
    colliObjInit((0xAE8 + a4), 0x0, 0x0, 0x0, (0xA40 + a4), 5.0f);
    *(unsigned int *)((a4 + 0xA70)) = (*(int *)((a4 + 0xB5C)));
    if (((*(int *)0x8C421F60) != 0) && (t104 = *(int *)0x8C295DDC, (t104 & 32) != 0)) {
        *(unsigned short *)((a4 + 0xB06)) = 0x0;
        t105 = 0x6148;
        if (a5 == 0) {
            t105 = 0x2C4C;
        }
        t108 = (*(int *)0x8C2873E0);
        *(int *)((int)stk + 12) = t108;
        t111 = (*(int *)(((0x8C102424 + ((*(int *)((a4 + 0xC58))) * 0x6C)) + 0x0)));
        *(int *)((int)stk + 8) = t111;
        motionSet(a4, t105, 0x0, 0x7D204, t111, t108, (*(float *)0x8C23D204));
        *(int *)((int)stk + 4) = (0xAE8 + a4);
        motionRootFirst(a4, 0x0, 0x0, 0x0, (0xAE8 + a4));
        *(unsigned int *)((a4 + 0xD40)) = 0x8C025500;
    }
    lightOverrideAmbient((*(int *)((a4 + 0xB5C))), 0x0);
    lightOverrideDiffuse((*(int *)((a4 + 0xB5C))), 0x0);
    seFootstepCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16));
    evSkidMarkSpawn(a4, 0x0, 0x0);
    t128 = 0x8C28B364;
    for (;;) {
        t129 = a4;
        t131 = (t128 + (a5 * 0xD78));
        for (;;) { t132 = *(int *)t129; t129 = (t129 + 4); if ((unsigned int)((a4 + 3448)) < (unsigned int)t129) break; *(unsigned int *)t131 = t132; t131 = (t131 + 4); }
        t128 = (t128 + 0x35E0);
        if ((unsigned int)t128 >= (unsigned int)0x8C291F24) {
            break;
        }
    }
}
