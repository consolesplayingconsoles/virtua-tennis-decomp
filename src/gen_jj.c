/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int atcomResetBlackList(void);
int fadeScreenStart(int, int, int, int, int, int);
int getID_Color(int, float);
float nlCos(int);
int nlDispStripTrnsl(int, int);
float nlSin(int);
int padDirRepeat(int, int);
extern int primFrameCorners();
int primLineV(int, int, Stk3, Stk3);
int rankCursorChar(int);
int rankDrawGlyph(int, int, Stk3);
int rankNameFilter(int, int);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
extern int sprListPut();
int strmBgmFadeOut(int, int);
Stk3 vecMake(float, float, float);
int rankNameEntryExec(int a4, int a5, int a6, float f4);

int rankNameEntryExec(int a4, int a5, int a6, float f4)
{
    int t1;
    int t3;
    int t5;
    float t25;
    int t33;
    int t34;
    int t35;
    int t57;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t52;
    int t82;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t77;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    float u93;
    int t96;
    int t134;
    int t137;
    int t139;
    int t145;
    float t148;
    int t161;
    float u165;
    int t193;
    float u435;
    float u436;
    float u437;
    int t308;
    float u413;
    float u414;
    float u415;
    int t348;
    int t349;
    int t362;
    int t364;
    int t365;
    int t367;
    int t371;
    int t373;
    int t438;
    int t439;
    int t465;
    int t467;
    int t480;
    int t485;
    int t487;
    int t489;
    float t509;
    int t517;
    int t518;
    int t520;
    int t521;
    int t522;
    int t523;
    int t524;
    int t525;
    int t526;
    int t537;
    int t548;
    int t556;
    float t594;
    int t604;
    int t609;
    int t614;
    int t631;
    int t651;
    int t673;
    int t695;
    int t793;
    int t795;
    int t796;
    int t797;
    int t798;
    int t874;
    int t876;
    int t883;
    int t4;
    int t6;
    float u7;
    int t58;
    float u43;
    float u44;
    int t83;
    int t84;
    float u68;
    float u69;
    float u91;
    float u92;
    int t119;
    int t120;
    int t183;
    int t184;
    float u186;
    float u187;
    float u188;
    float u177;
    float u178;
    float u174;
    float u175;
    int t191;
    int t288;
    int t289;
    float u292;
    float u293;
    float u294;
    int t214;
    int t284;
    int t236;
    int t238;
    int t233;
    int t231;
    int t280;
    int t431;
    int t432;
    int t434;
    int t409;
    int t410;
    int t328;
    int t329;
    int t402;
    int t403;
    float u406;
    float u407;
    float u408;
    int t353;
    int t354;
    int t355;
    int t356;
    int t395;
    int t396;
    float u399;
    float u400;
    float u401;
    int t387;
    int t388;
    float u391;
    float u392;
    float u393;
    int t383;
    int t379;
    int t418;
    int t419;
    int t420;
    int t421;
    int t424;
    int t425;
    int t427;
    float u428;
    float u429;
    float u430;
    int t447;
    int t488;
    int t490;
    float u491;
    float u527;
    float u528;
    int t569;
    float u602;
    int t622;
    int t769;
    int t786;
    int t787;
    int t843;
    int t844;
    int t845;
    int t846;
    int t861;
    int stk[124];

    if ((*(int *)0x8C287ADC) != 2) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0x124 + ((int)stk + 100))) = *(struct mv4 *)(0x8C126D64); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD8 + ((int)stk + 100))) = *(struct mv3 *)(0x8C126D74); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC + ((int)stk + 100))) = *(struct mv3 *)(0x8C126D80); }
        t1 = 0x8C126D8C;
        t3 = (((int)stk + 100) + 0xC);
        for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0x8C126D8C + 96)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
        *(int *)((int)stk + 96) = (0x150 + ((int)stk + 100));
        *(Stk3 *)((0x150 + ((int)stk + 100))) = vecMake(32.0f, 365.0f, 0.349999994f);
        *(unsigned int *)(((int)stk + 100)) = 0x0;
        t5 = 0x8C0E2BAC;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 100))) > (int)0x19) {
                break;
            }
            t6 = 0x8C0F7DAC;
            t5 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((0x150 + ((int)stk + 100))); }
            t6 = 0x8C0E0E84;
            t5 = (rankDrawGlyph(((*(int *)(((int)stk + 100))) + 0x41), (0x130 + ((int)stk + 88)), *(Stk3 *)(((int)stk + 88))));
            u7 = (*(float *)(((0x150 + ((int)stk + 100)) + 0x0)));
            t6 = 0x8C0F7BAC;
            u7 = (u7 + 61.0f);
            *(float *)(((0x150 + ((int)stk + 100)) + 0x0)) = u7;
            t5 = 0xA;
            t5 = ((int)((int)((*(int *)(((int)stk + 100))) + 0x1) % (int)t5));
            if (t5 == 0) {
                t5 = 0x4;
                *(float *)(((0x150 + ((int)stk + 100)) + 0x0)) = 32.0f;
                u7 = (*(float *)(((0x150 + ((int)stk + 100)) + t5)));
                u7 = (u7 + 27.0f);
                *(float *)(((0x150 + ((int)stk + 100)) + t5)) = u7;
            }
            t6 = (*(int *)(((int)stk + 100)));
            t6 = (t6 + 0x1);
            *(unsigned int *)(((int)stk + 100)) = t6;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((0x150 + ((int)stk + 100))); }
        rankDrawGlyph(0x26, (0x130 + ((int)stk + 88)), *(Stk3 *)(((int)stk + 88)));
        *(float *)(((0x150 + ((int)stk + 100)) + 0x0)) = ((*(float *)(((0x150 + ((int)stk + 100)) + 0x0))) + 61.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0x150 + ((int)stk + 100))); }
        rankDrawGlyph(0x2E, (0x13C + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)));
        *(float *)(((0x150 + ((int)stk + 100)) + 0x0)) = ((*(float *)(((0x150 + ((int)stk + 100)) + 0x0))) + 61.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0x150 + ((int)stk + 100))); }
        rankDrawGlyph(0x3C, (0x148 + ((int)stk + 64)), *(Stk3 *)(((int)stk + 64)));
        *(float *)(((0x150 + ((int)stk + 100)) + 0x0)) = ((*(float *)(((0x150 + ((int)stk + 100)) + 0x0))) + 61.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0x150 + ((int)stk + 100))); }
        rankDrawGlyph(0x65, (0x154 + ((int)stk + 52)), *(Stk3 *)(((int)stk + 52)));
        t25 = nlSin((*(int *)0x8C1D796C));
        *(unsigned int *)(((int)stk + 100)) = (0xE4 + ((int)stk + 100));
        *(float *)(((0xE4 + ((int)stk + 100)) + 0x0)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 100))) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 84.0f);
        *(float *)(((*(int *)(((int)stk + 100))) + 0x8)) = 60.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x10) + 0x0)) = 65.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x10) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 111.0f);
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x10) + 0x8)) = 60.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x20) + 0x0)) = 570.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x20) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 84.0f);
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x20) + 0x8)) = 60.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x30) + 0x0)) = 570.0f;
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x30) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 111.0f);
        *(float *)((((0xE4 + ((int)stk + 100)) + 0x30) + 0x8)) = 60.0f;
        t33 = (*(int *)(((int)stk + 100)));
        for (;;) {
            if ((unsigned int)t33 >= (unsigned int)((0xE4 + ((int)stk + 100)) + 0x40)) {
                break;
            }
            *(unsigned int *)((t33 + 0xC)) = (0xFFE600 | ((((int)(((t25 / 3.0f) + 1.0f) * 90.0f) & 0xFF) << 16) << 8));
            t33 = (t33 + 0x10);
        }
        t34 = nlDispStripTrnsl(0x4, (0xE4 + ((int)stk + 100)));
        t35 = *(int *)0x8C1D796C;
        *(unsigned int *)0x8C1D796C = (t35 + 0x300);
        t57 = t34;
        if ((*(int *)0x8C1D7934) != 0) {
            t37 = t34;
            t38 = (t35 + 0x300);
            t39 = 0x8C1D7934;
            t40 = 0x0;
            t41 = a5;
            t42 = a6;
            for (;;) {
                if ((unsigned int)t40 >= (unsigned int)0x60) {
                    break;
                }
                t38 = 0x8C421E30;
                t42 = ((int)stk + 100);
                t37 = 0xD8;
                t42 = (t42 + 0xC);
                t41 = t40;
                t42 = (t42 + t40);
                u44 = (*(float *)((((int)stk + 100) + t37)));
                u43 = (*(float *)((t42 + 0x0)));
                t41 = (t41 + (((int)stk + 100) + 0x6C));
                t37 = 0xDC;
                t40 = (t40 + 0xC);
                u43 = (u43 + u44);
                *(float *)((t41 + 0x0)) = u43;
                t39 = (*(int *)((t38 + 0x0)));
                u44 = (*(float *)((((int)stk + 100) + t37)));
                t37 = 0x4;
                u43 = (*(float *)((t42 + t37)));
                u43 = (u43 + u44);
                u44 = (float)(t39 * 0x1B);
                u43 = (u43 + u44);
                *(float *)((t41 + t37)) = u43;
                t37 = 0x8;
                u44 = (*(float *)((t42 + t37)));
                *(float *)((t41 + t37)) = u44;
            }
            *(unsigned int *)(((int)stk + 100)) = 0xFF00E600;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 100) + 0x6C)); }
            t52 = ((int (*)(int, int, int, Stk3, Stk3, Stk3, Stk3))(primFrameCorners))(0x2, (*(int *)(((int)stk + 100))), t42, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x3C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x30)); }
            primLineV(0x2, (*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x54)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x48)); }
            t57 = (primLineV(0x2, (*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
        } else {
            t58 = (t35 + 0x300);
        }
        t82 = t57;
        if ((*(int *)0x8C1D7938) == 0) {
            t83 = t58;
            t84 = 0x8C1D7938;
        } else {
            t62 = t57;
            t63 = t58;
            t64 = 0x8C1D7938;
            t65 = 0x0;
            t66 = a5;
            t67 = a6;
            for (;;) {
                if ((unsigned int)t65 >= (unsigned int)0x60) {
                    break;
                }
                t63 = 0x8C421E30;
                t67 = ((int)stk + 100);
                t62 = 0xCC;
                t67 = (t67 + 0xC);
                t66 = t65;
                t67 = (t67 + t65);
                u69 = (*(float *)((((int)stk + 100) + t62)));
                u68 = (*(float *)((t67 + 0x0)));
                t66 = (t66 + (((int)stk + 100) + 0x6C));
                t62 = 0xD0;
                t65 = (t65 + 0xC);
                u68 = (u68 + u69);
                *(float *)((t66 + 0x0)) = u68;
                t64 = (*(int *)((t63 + 0x0)));
                u69 = (*(float *)((((int)stk + 100) + t62)));
                t62 = 0x4;
                u68 = (*(float *)((t67 + t62)));
                u68 = (u68 + u69);
                u69 = (float)(t64 * 0x1B);
                u68 = (u68 + u69);
                *(float *)((t66 + t62)) = u68;
                t62 = 0x8;
                u69 = (*(float *)((t67 + t62)));
                *(float *)((t66 + t62)) = u69;
            }
            *(unsigned int *)(((int)stk + 100)) = 0xFF00E600;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 100) + 0x6C)); }
            t77 = ((int (*)(int, int, int, Stk3, Stk3, Stk3, Stk3))(primFrameCorners))(0x2, (*(int *)(((int)stk + 100))), t67, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x3C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x30)); }
            primLineV(0x2, (*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x54)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 100) + 0x6C) + 0x48)); }
            t82 = (primLineV(0x2, (*(int *)(((int)stk + 100))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
        }
        t86 = t82;
        t87 = t83;
        t88 = t84;
        t89 = a4;
        t90 = 0x0;
        u93 = f4;
        for (;;) {
            if ((int)t90 < (int)(*(int *)0x8C421E74)) {
                t86 = (t90 << 2);
                t88 = (*(int *)((0x8C421E54 + t86)));
                t96 = *(int *)0x8C421E38;
                t89 = 0x8C1D7934;
                t89 = (t89 + (t90 << 2));
                if (t88 != 0) {
                    t88 = (*(int *)(((0x8C1D792C + (t90 << 2)) + 0x0)));
                    if ((int)t96 < (int)t88) {
                        t86 = t96;
                        if ((int)t86 >= 0) {
                            t86 = (t86 & 0x1);
                        } else {
                            t86 = (~t86);
                            t86 = (t86 + 0x1);
                            t86 = (t86 & 0x1);
                            t86 = (~t86);
                            t86 = (t86 + 0x1);
                        }
                        if (t86 != 0) {
                            *(unsigned int *)((t89 + 0x0)) = 0x0;
                        } else {
                            *(unsigned int *)((t89 + 0x0)) = 0x1;
                        }
                    } else {
                        *(unsigned int *)((t89 + 0x0)) = 0x0;
                    }
                } else {
                    t88 = 0x8C421E64;
                    t87 = (*(int *)((((t90 << 2) + t88) + 0x0)));
                    if (t87 == 0) {
                        *(unsigned int *)((t89 + 0x0)) = 0x1;
                    } else {
                        t86 = (*(int *)((((t90 << 2) + t88) + 0x0)));
                        if ((t86 == 1) && (t119 = *(int *)(((0x8C1D792C + (t90 << 2)) + 0x0)), t120 = (t86 == 1), t86 = t119, (int)t96 > (int)t86)) {
                            t87 = (*(int *)((t89 + 0x0)));
                            if (t87 != 0) {
                                t86 = 0x8C1D7934;
                                t89 = t90;
                                t87 = 0x8C421E38;
                                t89 = (t89 << 2);
                                *(unsigned int *)((t89 + t86)) = 0x0;
                                t86 = 0x8C1D792C;
                                *(unsigned int *)((t89 + t86)) = ((*(int *)((t87 + 0x0))) + 0xA);
                            } else {
                                t86 = 0x8C1D7934;
                                t89 = t90;
                                t87 = 0x8C421E38;
                                t89 = (t89 << 2);
                                *(unsigned int *)((t89 + t86)) = 0x1;
                                t86 = 0x8C1D792C;
                                *(unsigned int *)((t89 + t86)) = ((*(int *)((t87 + 0x0))) + 0x1E);
                            }
                        }
                    }
                }
                t86 = t90;
                t86 = (t86 << 2);
                t89 = 0x3D;
                *(unsigned int *)(((int)stk + 100)) = t86;
                t134 = *(int *)((0x8C421E3C + t86));
                t88 = 0x1B;
                t86 = 0x144;
                u92 = (float)((t134 * t89) + 0x1E);
                *(float *)((((int)stk + 100) + t86)) = u92;
                t86 = 0x8C0E30A4;
                u93 = (*(float *)((t86 + 0x0)));
                t86 = (*(int *)(((int)stk + 100)));
                t137 = *(int *)((0x8C421E44 + t86));
                t86 = 0x148;
                u92 = (float)(t137 * t88);
                u92 = (u92 + u93);
                u93 = 1.0f;
                *(float *)((((int)stk + 100) + t86)) = u92;
                t87 = (*(int *)(((int)stk + 100)));
                t86 = 0x8C421E5C;
                t87 = (t87 + (0x13C + ((int)stk + 100)));
                t139 = t87;
                *(int *)((int)stk + 96) = t139;
                t87 = (*(int *)(((int)stk + 100)));
                t89 = (*(int *)((t87 + t86)));
                t86 = (getID_Color(t89, u93));
                t88 = t139;
                *(unsigned int *)((t88 + 0x0)) = t86;
                t88 = (*(int *)(((int)stk + 100)));
                t87 = 0x8C421E6C;
                t88 = (t88 + (0x134 + ((int)stk + 100)));
                *(unsigned int *)(((int)stk + 108)) = t88;
                t145 = t88;
                *(int *)((int)stk + 96) = t145;
                t89 = (*(int *)(((int)stk + 100)));
                t89 = (t89 + t87);
                *(unsigned int *)(((int)stk + 104)) = t89;
                t89 = (*(int *)((t89 + 0x0)));
                t148 = nlCos(t89);
                u92 = 0.0f;
                if (!(u92 > t148)) {
                    t89 = (*(int *)(((int)stk + 104)));
                    t89 = (*(int *)((t89 + 0x0)));
                    u92 = (nlCos(t89));
                } else {
                    t89 = (*(int *)(((int)stk + 104)));
                    t89 = (*(int *)((t89 + 0x0)));
                    u92 = (nlCos(t89));
                    u92 = (-u92);
                }
                t86 = 0x8C0E3144;
                u91 = 1.0f;
                *(float *)((t145 + 0x0)) = u92;
                u93 = (*(float *)((t86 + 0x0)));
                u92 = (*(float *)(((*(int *)(((int)stk + 108))) + 0x0)));
                t86 = 0x14C;
                u92 = (u92 * u93);
                t88 = 0x300;
                u91 = (u91 - u92);
                *(float *)((((int)stk + 100) + t86)) = u91;
                t161 = *(int *)(((int)stk + 104));
                t87 = (*(int *)((t161 + 0x0)));
                t87 = (t87 + t88);
                *(unsigned int *)((t161 + 0x0)) = t87;
                t86 = (*(int *)(((int)stk + 100)));
                if ((*(int *)((0x8C421E54 + t86))) == 0) {
                    t88 = 0x144;
                    t86 = 0xC;
                    t88 = (t88 + ((int)stk + 100));
                    t87 = ((int)stk + 88);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t87) = *(struct mv3 *)(t88); }
                    t88 = t90;
                    t88 = (t88 << 2);
                    t86 = 0x8C421E5C;
                    *(unsigned int *)(((int)stk + 100)) = t88;
                    t88 = (t88 + (0x140 + ((int)stk + 88)));
                    u165 = *(float *)((t88 + 0x0));
                    t88 = (*(int *)(((int)stk + 100)));
                    t89 = (*(int *)((t88 + t86)));
                    t86 = 0x8C1D7954;
                    t89 = (t89 << 2);
                    u93 = 1.0f;
                    t89 = (*(int *)((t89 + t86)));
                    t86 = (((int (*)(int, int, int, float, float, float))(sprListPut))(t89, 0x1, 0x0, u93, 1.0f, u165));
                    if (t90 == 0) {
                        t86 = 0x8C0E3158;
                        u93 = (*(float *)((t86 + 0x0)));
                        t86 = 0x144;
                        u92 = (*(float *)((((int)stk + 100) + t86)));
                        t86 = 0x144;
                        u92 = (u92 - u93);
                        *(float *)((((int)stk + 100) + t86)) = u92;
                        u177 = u92;
                        u178 = u93;
                    } else {
                        t86 = t90;
                        if (t86 == 1) {
                            t86 = 0x8C0E3228;
                            u93 = (*(float *)((t86 + 0x0)));
                            t86 = 0x144;
                            u92 = (*(float *)((((int)stk + 100) + t86)));
                            t86 = 0x144;
                            u92 = (u92 + u93);
                            *(float *)((((int)stk + 100) + t86)) = u92;
                            u174 = u92;
                            u175 = u93;
                        }
                        u177 = u174;
                        u178 = u175;
                    }
                    u92 = u177;
                    u93 = u178;
                    t88 = 0x144;
                    t86 = 0xC;
                    t88 = (t88 + ((int)stk + 100));
                    t87 = ((int)stk + 88);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t87) = *(struct mv3 *)(t88); }
                    t89 = t90;
                    t86 = 0x8C421E5C;
                    t89 = (t89 << 2);
                    t89 = (*(int *)((t89 + t86)));
                    t86 = 0x8C1D7944;
                    t89 = (t89 << 2);
                    u93 = 1.0f;
                    t89 = (*(int *)((t89 + t86)));
                    t86 = (((int (*)(int, int, int, float, float, float))(sprListPut))(t89, 0x1, 0x0, u93, 1.0f, 1.0f));
                } else {
                    t183 = t87;
                    t184 = t88;
                    u186 = u91;
                    u187 = u92;
                    u188 = u93;
                }
                u91 = u186;
                u92 = u187;
                u93 = u188;
                t87 = t183;
                t88 = t184;
                t89 = t90;
                t89 = (t89 << 2);
                t86 = t89;
                if (((*(int *)((0x8C421E54 + t86))) == 0) && (t88 = 0x8C421E4C, t191 = *(int *)((t88 + t86)), t88 = t191, (int)t88 < (int)0x3)) {
                    t88 = 0x8C421E30;
                    t87 = t90;
                    t86 = (*(int *)((t88 + 0x0)));
                    t193 = t86;
                    t86 = (t86 << 1);
                    t86 = (t86 + t193);
                    t87 = (t87 << 1);
                    t87 = (t87 + t90);
                    t86 = (t86 << 2);
                    t86 = (t86 + 0x8C421ECC);
                    t86 = (t86 + t87);
                    t87 = t90;
                    t87 = (t87 << 2);
                    t87 = (t87 + 0x8C421E4C);
                    t87 = (*(int *)((t87 + 0x0)));
                    *(unsigned char *)((t87 + t86)) = 0x0;
                }
                t86 = t90;
                t86 = (t86 << 2);
                *(unsigned int *)(((int)stk + 100)) = t86;
                if ((*(int *)((0x8C421E54 + t86))) != 0) {
                    t288 = t87;
                    t289 = t88;
                    u292 = u91;
                    u293 = u92;
                    u294 = u93;
                } else {
                    t87 = 0x8C421E5C;
                    t89 = (*(int *)((t87 + t86)));
                    t86 = (padDirRepeat(t89, 0x80));
                    if (t86 != 0) {
                        t86 = t90;
                        t86 = (t86 << 2);
                        t88 = 0x8C0D2992;
                        *(unsigned int *)(((int)stk + 100)) = t86;
                        *(unsigned int *)((0x8C421E3C + t86)) = ((*(int *)((0x8C421E3C + t86))) + 0x1);
                        t86 = (sndSeCursor());
                        t86 = (*(int *)(((int)stk + 100)));
                        t86 = (*(int *)((0x8C421E4C + t86)));
                        if (t86 == 3) {
                            t86 = t90;
                            t86 = (t86 << 2);
                            t88 = 0x9;
                            if ((int)(*(int *)((0x8C421E3C + t86))) > (int)t88) {
                                t86 = t90;
                                t86 = (t86 << 2);
                                *(unsigned int *)((0x8C421E3C + t86)) = 0x8;
                            }
                        } else {
                            t86 = t90;
                            t86 = (t86 << 2);
                            t88 = 0x9;
                            if ((int)(*(int *)((0x8C421E3C + t86))) > (int)t88) {
                                t86 = t90;
                                t86 = (t86 << 2);
                                *(unsigned int *)((0x8C421E3C + t86)) = 0x0;
                            }
                        }
                        t214 = t88;
                    }
                    t86 = t90;
                    t88 = t214;
                    t86 = (t86 << 2);
                    *(unsigned int *)(((int)stk + 100)) = t86;
                    if ((*(int *)((0x8C421E54 + t86))) == 0) {
                        t87 = 0x8C421E5C;
                        t89 = (*(int *)((t87 + t86)));
                        t86 = (padDirRepeat(t89, 0x40));
                        if (t86 != 0) {
                            t86 = t90;
                            t86 = (t86 << 2);
                            *(unsigned int *)(((int)stk + 100)) = t86;
                            *(unsigned int *)((0x8C421E3C + t86)) = ((*(int *)((0x8C421E3C + t86))) - 1);
                            t86 = (sndSeCursor());
                            t86 = (*(int *)(((int)stk + 100)));
                            t89 = (*(int *)(((int)stk + 100)));
                            t86 = (*(int *)((0x8C421E4C + t86)));
                            t89 = (t89 + 0x8C421E3C);
                            if (t86 == 3) {
                                t88 = 0x8;
                                if ((int)(*(int *)((t89 + 0x0))) >= (int)t88) {
                                } else {
                                    t88 = 0x9;
                                    *(unsigned int *)((t89 + 0x0)) = t88;
                                }
                                t233 = t88;
                            } else {
                                t86 = (*(int *)((t89 + 0x0)));
                                if ((int)t86 < 0) {
                                    t88 = 0x9;
                                    *(unsigned int *)((t89 + 0x0)) = t88;
                                    t231 = t88;
                                }
                                t233 = t231;
                            }
                            t236 = t233;
                            t238 = t89;
                        }
                        t86 = t90;
                        t88 = t236;
                        t89 = t238;
                        t86 = (t86 << 2);
                        *(unsigned int *)(((int)stk + 100)) = t86;
                        if ((*(int *)((0x8C421E54 + t86))) == 0) {
                            t87 = 0x8C421E5C;
                            t89 = (*(int *)((t87 + t86)));
                            t86 = (padDirRepeat(t89, 0x10));
                            if (t86 != 0) {
                                t86 = t90;
                                t86 = (t86 << 2);
                                *(unsigned int *)(((int)stk + 100)) = t86;
                                *(unsigned int *)((0x8C421E44 + t86)) = ((*(int *)((0x8C421E44 + t86))) - 1);
                                t86 = (sndSeCursor());
                                t86 = (*(int *)(((int)stk + 100)));
                                t86 = (*(int *)((0x8C421E4C + t86)));
                                if (t86 == 3) {
                                    t86 = t90;
                                    t86 = (t86 << 2);
                                    t86 = (*(int *)((0x8C421E44 + t86)));
                                    if (t86 == 2) {
                                    } else {
                                        t86 = t90;
                                        t86 = (t86 << 2);
                                        *(unsigned int *)((0x8C421E44 + t86)) = 0x2;
                                    }
                                } else {
                                    t86 = t90;
                                    t86 = (t86 << 2);
                                    if ((int)(*(int *)((0x8C421E44 + t86))) < 0) {
                                        t86 = t90;
                                        t86 = (t86 << 2);
                                        *(unsigned int *)((0x8C421E44 + t86)) = 0x2;
                                    }
                                }
                            }
                            t86 = t90;
                            t86 = (t86 << 2);
                            *(unsigned int *)(((int)stk + 100)) = t86;
                            if ((*(int *)((0x8C421E54 + t86))) == 0) {
                                t87 = 0x8C421E5C;
                                t89 = (*(int *)((t87 + t86)));
                                t86 = (padDirRepeat(t89, 0x20));
                                if (t86 != 0) {
                                    t86 = t90;
                                    t86 = (t86 << 2);
                                    *(unsigned int *)(((int)stk + 100)) = t86;
                                    *(unsigned int *)((0x8C421E44 + t86)) = ((*(int *)((0x8C421E44 + t86))) + 0x1);
                                    t86 = (sndSeCursor());
                                    t86 = (*(int *)(((int)stk + 100)));
                                    t86 = (*(int *)((0x8C421E4C + t86)));
                                    if (t86 == 3) {
                                        t86 = t90;
                                        t86 = (t86 << 2);
                                        t86 = (*(int *)((0x8C421E44 + t86)));
                                        if (t86 != 2) {
                                            t86 = t90;
                                            t86 = (t86 << 2);
                                            *(unsigned int *)((0x8C421E44 + t86)) = 0x2;
                                        }
                                    } else {
                                        t86 = t90;
                                        t86 = (t86 << 2);
                                        if ((int)(*(int *)((0x8C421E44 + t86))) > (int)0x2) {
                                            t86 = t90;
                                            t86 = (t86 << 2);
                                            *(unsigned int *)((0x8C421E44 + t86)) = 0x0;
                                        }
                                    }
                                }
                            }
                        } else {
                            t280 = t88;
                        }
                        t284 = t280;
                    } else {
                        t284 = t88;
                    }
                    t289 = t284;
                }
                u91 = u292;
                u92 = u293;
                u93 = u294;
                t87 = t288;
                t88 = t289;
                t89 = t90;
                t89 = (t89 << 2);
                t86 = t89;
                u435 = u91;
                u436 = u92;
                u437 = u93;
                if ((*(int *)((0x8C421E54 + t86))) != 0) {
                    t431 = t87;
                    t432 = t88;
                    t434 = t89;
                } else {
                    t308 = *(int *)((0x8C421E5C + t86));
                    t86 = 0x8C29B898;
                    t86 = (*(int *)(((*(int *)(((t308 << 2) + t86))) + 0x10)));
                    u413 = u91;
                    u414 = u92;
                    u415 = u93;
                    if ((t86 & 5) == 0) {
                        t409 = t87;
                        t410 = t88;
                    } else {
                        t89 = t90;
                        t89 = (t89 << 2);
                        t86 = t89;
                        t86 = (*(int *)((0x8C421E3C + t86)));
                        if ((t86 == 9) && (t328 = (t86 == 9), t86 = 0x8C421E44, t329 = *(int *)((t89 + t86)), t86 = t329, t86 == 2)) {
                            t86 = t90;
                            t87 = 0x8C421E38;
                            t86 = (t86 << 2);
                            *(unsigned int *)(((int)stk + 100)) = t86;
                            *(unsigned int *)((0x8C421E54 + t86)) = 0x1;
                            t86 = 0x8C1D792C;
                            t88 = (*(int *)(((int)stk + 100)));
                            *(unsigned int *)((t88 + t86)) = ((*(int *)((t87 + 0x0))) + 0x64);
                            t86 = 0x8C421E64;
                            t88 = (*(int *)(((int)stk + 100)));
                            *(unsigned int *)((t88 + t86)) = 0x2;
                            t86 = (atcomResetBlackList());
                            t87 = 0x8C421E30;
                            t88 = (*(int *)(((int)stk + 100)));
                            t89 = (*(int *)((t87 + 0x0)));
                            t86 = 0x8C421F40;
                            t348 = t89;
                            t89 = (t89 << 1);
                            t349 = *(int *)((t88 + t86));
                            t89 = (t89 + t348);
                            t88 = t90;
                            t88 = (t88 << 1);
                            t86 = 0x8C1D78B8;
                            t88 = (t88 + t90);
                            t89 = (t89 << 2);
                            t89 = (t89 + 0x8C421ECC);
                            t89 = (t89 + t88);
                            t86 = (rankNameFilter(t89, (*(int *)(((t349 << 2) + t86)))));
                        } else {
                            t89 = t90;
                            t89 = (t89 << 2);
                            t86 = t89;
                            t86 = (*(int *)((0x8C421E3C + t86)));
                            if ((t86 == 8) && ((t353 = (t86 == 8), t86 = 0x8C421E44, t354 = *(int *)((t89 + t86)), t86 = t354, t86 == 2) && (t355 = (t86 == 8), t86 = 0x8C421E4C, t356 = *(int *)((t89 + t86)), (int)t356 > 0))) {
                                t89 = t90;
                                t89 = (t89 << 2);
                                t86 = t89;
                                t88 = 0x8C0D2A9E;
                                *(unsigned int *)((0x8C421E4C + t86)) = ((*(int *)((0x8C421E4C + t86))) - 1);
                                t86 = 0x8C421E64;
                                *(unsigned int *)((t89 + t86)) = 0x0;
                                t86 = (sndSeCancel());
                            } else {
                                t86 = t90;
                                t86 = (t86 << 2);
                                *(unsigned int *)(((int)stk + 100)) = t86;
                                if ((int)(*(int *)((0x8C421E4C + t86))) <= (int)0x2) {
                                    t87 = 0x8C421E44;
                                    t88 = 0x8C421E3C;
                                    t89 = (*(int *)((t87 + t86)));
                                    t88 = (*(int *)((t88 + t86)));
                                    t362 = t89;
                                    t89 = (t89 << 2);
                                    t89 = (t89 + t362);
                                    t89 = (t89 << 1);
                                    t89 = (t89 + t88);
                                    t86 = (rankCursorChar(t89));
                                    t86 = (signed char)t86;
                                    if (t86 != 0) {
                                        t87 = 0x8C421E30;
                                        t86 = t90;
                                        t364 = *(int *)((t87 + 0x0));
                                        t88 = t364;
                                        t365 = ((t364 << 1) + t88);
                                        t88 = t90;
                                        t86 = (t86 << 1);
                                        t86 = (t86 + t88);
                                        t88 = 0x8C421ECC;
                                        t86 = (t86 + ((t365 << 2) + t88));
                                        *(unsigned int *)(((int)stk + 104)) = (t90 << 2);
                                        *(unsigned int *)(((int)stk + 100)) = ((t90 << 2) + 0x8C421E4C);
                                        t87 = (*(int *)((((t90 << 2) + 0x8C421E4C) + 0x0)));
                                        t87 = (t87 + t86);
                                        t367 = t87;
                                        *(int *)((int)stk + 96) = t367;
                                        t86 = (*(int *)(((int)stk + 104)));
                                        t89 = (*(int *)((0x8C421E44 + t86)));
                                        t87 = (*(int *)((0x8C421E3C + t86)));
                                        t371 = t89;
                                        t89 = (t89 << 2);
                                        t89 = (t89 + t371);
                                        t89 = (t89 << 1);
                                        t89 = (t89 + t87);
                                        t86 = (rankCursorChar(t89));
                                        t88 = t367;
                                        *(unsigned char *)((t88 + 0x0)) = t86;
                                        t373 = *(int *)(((int)stk + 100));
                                        t88 = (*(int *)((t373 + 0x0)));
                                        t88 = (t88 + 0x1);
                                        *(unsigned int *)((t373 + 0x0)) = t88;
                                        t86 = (sndSeDecide());
                                        t86 = (*(int *)(((int)stk + 100)));
                                        t86 = (*(int *)((t86 + 0x0)));
                                        if (t86 == 3) {
                                            t89 = t90;
                                            t89 = (t89 << 2);
                                            t86 = t89;
                                            *(unsigned int *)((0x8C421E3C + t86)) = 0x9;
                                            *(unsigned int *)((0x8C421E44 + t86)) = 0x2;
                                            t86 = 0x8C421E64;
                                            t88 = 0x8C421E38;
                                            *(unsigned int *)((t89 + t86)) = 0x1;
                                            t86 = 0x8C1D792C;
                                            *(unsigned int *)((t89 + t86)) = (*(int *)((t88 + 0x0)));
                                            t379 = t88;
                                        }
                                        t383 = t379;
                                    }
                                    t388 = t383;
                                } else {
                                    t387 = t87;
                                    t388 = t88;
                                    u391 = u91;
                                    u392 = u92;
                                    u393 = u93;
                                }
                                t395 = t387;
                                t396 = t388;
                                u399 = u391;
                                u400 = u392;
                                u401 = u393;
                            }
                            t402 = t395;
                            t403 = t396;
                            u406 = u399;
                            u407 = u400;
                            u408 = u401;
                        }
                        t409 = t402;
                        t410 = t403;
                        u413 = u406;
                        u414 = u407;
                        u415 = u408;
                    }
                    u91 = u413;
                    u92 = u414;
                    u93 = u415;
                    t87 = t409;
                    t88 = t410;
                    t89 = t90;
                    t89 = (t89 << 2);
                    t86 = t89;
                    if (((*(int *)((0x8C421E54 + t86))) == 0) && ((t418 = *(int *)((0x8C421E4C + t86)), (int)t418 > 0) && (t419 = *(int *)((0x8C421E5C + t86)), t86 = 0x8C29B898, t420 = *(int *)(((t419 << 2) + t86)), t421 = *(int *)((t420 + 0x10)), t86 = t421, (t86 & 2) != 0))) {
                        t89 = t90;
                        t89 = (t89 << 2);
                        t86 = t89;
                        *(unsigned int *)((0x8C421E4C + t86)) = ((*(int *)((0x8C421E4C + t86))) - 1);
                        t86 = 0x8C421E64;
                        *(unsigned int *)((t89 + t86)) = 0x0;
                        t86 = (sndSeCancel());
                    } else {
                        t424 = t87;
                        t425 = t88;
                        t427 = t89;
                        u428 = u91;
                        u429 = u92;
                        u430 = u93;
                    }
                    t431 = t424;
                    t432 = t425;
                    t434 = t427;
                    u435 = u428;
                    u436 = u429;
                    u437 = u430;
                }
                u91 = u435;
                u92 = u436;
                u93 = u437;
                t87 = t431;
                t90 = (t90 + 0x1);
                t88 = t432;
                t89 = t434;
                continue;
            }
            break;
        }
        *(unsigned int *)0x8C1D7968 = 0x1;
        t438 = 0x8C421E54;
        t439 = 0x0;
        for (;;) {
            if ((int)t439 >= (int)(*(int *)0x8C421E74)) {
                break;
            }
            t439 = (t439 + 0x1);
            if ((*(int *)((t438 + 0x0))) == 0) {
                *(unsigned int *)0x8C1D7968 = 0x0;
            }
            t438 = (t438 + 0x4);
        }
        if (((int)(*(int *)0x8C1D7928) > 0) && (t447 = *(int *)0x8C1D7968, t447 != 0)) {
            *(unsigned int *)0x8C1D7928 = ((*(int *)0x8C1D7928) - 1);
        }
        if ((int)(*(int *)0x8C1D7928) < (int)0x1E) {
            fadeScreenStart(0x3, 0x0, 0x1E, 0x8C421E74, *(int *)((int)stk + 100), *(int *)((int)stk + 100 + 4));
        }
        t465 = *(int *)0x8C1D7928;
        t467 = t465;
        if (t465 == 60) {
            t467 = (strmBgmFadeOut(0x2, 0x0));
        }
        t480 = t467;
        if ((*(int *)0x8C1D7928) == 0) {
            *(unsigned int *)0x8C20D150 = 0x2;
            *(unsigned int *)0x8C20D15C = 0x0;
            *(unsigned int *)0x8C1D793C = 0x1;
            t480 = 0x8C1D793C;
        }
        return t480;
    }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x110 + ((int)stk + 136))) = *(struct mv4 *)(0x8C126CE8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC4 + ((int)stk + 136))) = *(struct mv3 *)(0x8C126CF8); }
    t485 = 0x8C126D04;
    t487 = (((int)stk + 136) + 0x4);
    for (;;) { t488 = *(int *)t485; t485 = (t485 + 4); if ((unsigned int)((0x8C126D04 + 96)) < (unsigned int)t485) break; *(unsigned int *)t487 = t488; t487 = (t487 + 4); }
    *(int *)((int)stk + 132) = (0x12C + ((int)stk + 136));
    *(Stk3 *)((0x12C + ((int)stk + 136))) = vecMake(32.0f, 365.0f, 0.349999994f);
    *(unsigned int *)(((int)stk + 136)) = 0x0;
    t489 = 0x8C0E2378;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 136))) > (int)0x19) {
            break;
        }
        t490 = 0x8C0F7DAC;
        t489 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 124)) = *(struct mv3 *)((0x12C + ((int)stk + 136))); }
        t490 = 0x8C0E0E84;
        t489 = (rankDrawGlyph(((*(int *)(((int)stk + 136))) + 0x41), (0x11C + ((int)stk + 124)), *(Stk3 *)(((int)stk + 124))));
        u491 = (*(float *)(((0x12C + ((int)stk + 136)) + 0x0)));
        t490 = 0x8C0F7BAC;
        u491 = (u491 + 61.0f);
        *(float *)(((0x12C + ((int)stk + 136)) + 0x0)) = u491;
        t489 = 0xA;
        t489 = ((int)((int)((*(int *)(((int)stk + 136))) + 0x1) % (int)t489));
        if (t489 == 0) {
            t489 = 0x4;
            *(float *)(((0x12C + ((int)stk + 136)) + 0x0)) = 32.0f;
            u491 = (*(float *)(((0x12C + ((int)stk + 136)) + t489)));
            u491 = (u491 + 27.0f);
            *(float *)(((0x12C + ((int)stk + 136)) + t489)) = u491;
        }
        t490 = (*(int *)(((int)stk + 136)));
        t490 = (t490 + 0x1);
        *(unsigned int *)(((int)stk + 136)) = t490;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 124)) = *(struct mv3 *)((0x12C + ((int)stk + 136))); }
    rankDrawGlyph(0x26, (0x11C + ((int)stk + 124)), *(Stk3 *)(((int)stk + 124)));
    *(float *)(((0x12C + ((int)stk + 136)) + 0x0)) = ((*(float *)(((0x12C + ((int)stk + 136)) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((0x12C + ((int)stk + 136))); }
    rankDrawGlyph(0x2E, (0x128 + ((int)stk + 112)), *(Stk3 *)(((int)stk + 112)));
    *(float *)(((0x12C + ((int)stk + 136)) + 0x0)) = ((*(float *)(((0x12C + ((int)stk + 136)) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((0x12C + ((int)stk + 136))); }
    rankDrawGlyph(0x3C, (0x134 + ((int)stk + 100)), *(Stk3 *)(((int)stk + 100)));
    *(float *)(((0x12C + ((int)stk + 136)) + 0x0)) = ((*(float *)(((0x12C + ((int)stk + 136)) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((0x12C + ((int)stk + 136))); }
    rankDrawGlyph(0x65, (0x140 + ((int)stk + 88)), *(Stk3 *)(((int)stk + 88)));
    t509 = nlSin((*(int *)0x8C1D7964));
    *(unsigned int *)(((int)stk + 136)) = (0xD0 + ((int)stk + 136));
    *(float *)(((0xD0 + ((int)stk + 136)) + 0x0)) = 65.0f;
    *(float *)(((*(int *)(((int)stk + 136))) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 84.0f);
    *(float *)(((*(int *)(((int)stk + 136))) + 0x8)) = 60.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x10) + 0x0)) = 65.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x10) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 111.0f);
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x10) + 0x8)) = 60.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x20) + 0x0)) = 570.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x20) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 84.0f);
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x20) + 0x8)) = 60.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x30) + 0x0)) = 570.0f;
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x30) + 0x4)) = ((float)((*(int *)0x8C421E30) * 0x1B) + 111.0f);
    *(float *)((((0xD0 + ((int)stk + 136)) + 0x30) + 0x8)) = 60.0f;
    t517 = (*(int *)(((int)stk + 136)));
    for (;;) {
        if ((unsigned int)t517 >= (unsigned int)((0xD0 + ((int)stk + 136)) + 0x40)) {
            break;
        }
        *(unsigned int *)((t517 + 0xC)) = (0xFFE600 | ((((int)(((t509 / 3.0f) + 1.0f) * 90.0f) & 0xFF) << 16) << 8));
        t517 = (t517 + 0x10);
    }
    t518 = nlDispStripTrnsl(0x4, (0xD0 + ((int)stk + 136)));
    *(unsigned int *)0x8C1D7964 = ((*(int *)0x8C1D7964) + 0x300);
    t520 = *(int *)0x8C1D7934;
    if (t520 != 0) {
        t521 = t518;
        t522 = 0x8C1D7934;
        t523 = t520;
        t524 = 0x0;
        t525 = a5;
        t526 = a6;
        for (;;) {
            if ((unsigned int)t524 >= (unsigned int)0x60) {
                break;
            }
            t526 = ((int)stk + 136);
            t526 = (t526 + 0x4);
            t521 = 0xC4;
            t523 = 0x1B;
            t526 = (t526 + t524);
            t525 = t524;
            u527 = (*(float *)((t526 + 0x0)));
            t525 = (t525 + (((int)stk + 136) + 0x64));
            u528 = (*(float *)((((int)stk + 136) + t521)));
            t524 = (t524 + 0xC);
            t521 = 0xC8;
            u527 = (u527 + u528);
            *(float *)((t525 + 0x0)) = u527;
            t522 = (*(int *)0x8C421E30);
            u528 = (*(float *)((((int)stk + 136) + t521)));
            t521 = 0x4;
            u527 = (*(float *)((t526 + t521)));
            u527 = (u527 + u528);
            t523 = (t522 * t523);
            u528 = (float)t523;
            u527 = (u527 + u528);
            *(float *)((t525 + t521)) = u527;
            t521 = 0x8;
            u528 = (*(float *)((t526 + t521)));
            *(float *)((t525 + t521)) = u528;
        }
        *(unsigned int *)(((int)stk + 136)) = 0xFF00E600;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 124)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 136) + 0x64)); }
        t537 = ((int (*)(int, int, int, int, Stk3, Stk3, Stk3, Stk3))(primFrameCorners))(0x2, (*(int *)(((int)stk + 136))), t526, 0x60, *(Stk3 *)(((int)stk + 88)), *(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)), *(Stk3 *)(((int)stk + 124)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x3C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x30)); }
        primLineV(0x2, (*(int *)(((int)stk + 136))), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x54)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 136) + 0x64) + 0x48)); }
        primLineV(0x2, (*(int *)(((int)stk + 136))), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
    }
    t548 = *(int *)0x8C421E38;
    if ((*(int *)0x8C421E54) != 0) {
        if ((int)(*(int *)0x8C1D7928) > (int)0xC8) {
            t556 = ((~(((~t548) + 0x1) & 0x1)) + 0x1);
            if ((int)t548 >= 0) {
                t556 = (t548 & 0x1);
            }
            if (t556 != 0) {
                *(unsigned int *)0x8C1D7934 = 0x0;
            } else {
                *(unsigned int *)0x8C1D7934 = 0x1;
            }
        } else {
            *(unsigned int *)0x8C1D7934 = 0x0;
        }
    } else {
        if ((*(int *)0x8C421E64) == 0) {
            *(unsigned int *)0x8C1D7934 = 0x1;
        } else {
            if (((*(int *)0x8C421E64) == 1) && (t569 = *(int *)0x8C1D792C, (int)t548 > (int)t569)) {
                if ((*(int *)0x8C1D7934) != 0) {
                    *(unsigned int *)0x8C1D7934 = 0x0;
                    *(unsigned int *)0x8C1D792C = ((*(int *)0x8C421E38) + 0xA);
                } else {
                    *(unsigned int *)0x8C1D7934 = 0x1;
                    *(unsigned int *)0x8C1D792C = ((*(int *)0x8C421E38) + 0x1E);
                }
            }
        }
    }
    *(float *)(((0x120 + ((int)stk + 136)) + 0x0)) = ((float)((*(int *)0x8C421E3C) * 0x3D) + 30.0f);
    *(float *)(((0x120 + ((int)stk + 136)) + 0x4)) = ((float)((*(int *)0x8C421E44) * 0x1B) + 363.0f);
    *(float *)(((0x120 + ((int)stk + 136)) + 0x8)) = 1.0f;
    getID_Color(0x0, 1.0f);
    *(unsigned int *)(((int)stk + 136)) = 0x8C421E6C;
    t594 = nlCos((*(int *)0x8C421E6C));
    if (!(0.0f > t594)) {
        u602 = (nlCos((*(int *)(((*(int *)(((int)stk + 136))) + 0x0)))));
    } else {
        u602 = (-(nlCos((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))))));
    }
    t604 = *(int *)(((int)stk + 136));
    *(unsigned int *)((t604 + 0x0)) = ((*(int *)((t604 + 0x0))) + 0x300);
    if ((*(int *)0x8C421E54) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 124)) = *(struct mv3 *)((0x120 + ((int)stk + 136))); }
        *(unsigned int *)(((int)stk + 136)) = 0x8C421E5C;
        t609 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)((((*(int *)0x8C421E5C) << 2) + 0x8C1D7954))), 0x1, 0x0, *(Stk3 *)(((int)stk + 124)), 1.0f, 1.0f, u602);
        *(float *)(((0x120 + ((int)stk + 136)) + 0x0)) = ((*(float *)(((0x120 + ((int)stk + 136)) + 0x0))) - 16.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((0x120 + ((int)stk + 136))); }
        t614 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)((((*(int *)(((*(int *)(((int)stk + 136))) + 0x0))) << 2) + 0x8C1D7944))), 0x1, 0x0, *(Stk3 *)(((int)stk + 112)), 1.0f, 1.0f, 1.0f);
    }
    if (((*(int *)0x8C421E54) == 0) && (t622 = *(int *)0x8C421E4C, (int)t622 < (int)0x3)) {
        *(unsigned char *)((((0x8C421E7C + (((*(int *)0x8C421E30) << 2) << 1)) + (*(int *)0x8C421E4C)) + 0x0)) = 0x0;
    }
    if ((*(int *)0x8C421E54) != 0) {
    } else {
        t631 = padDirRepeat((*(int *)0x8C421E5C), 0x80);
        if (t631 != 0) {
            *(unsigned int *)0x8C421E3C = ((*(int *)0x8C421E3C) + 0x1);
            sndSeCursor();
            if ((*(int *)0x8C421E4C) == 3) {
                if ((int)(*(int *)0x8C421E3C) > (int)0x9) {
                    *(unsigned int *)0x8C421E3C = 0x8;
                }
            } else {
                if ((int)(*(int *)0x8C421E3C) > (int)0x9) {
                    *(unsigned int *)0x8C421E3C = 0x0;
                }
            }
        }
        if ((*(int *)0x8C421E54) == 0) {
            t651 = padDirRepeat((*(int *)0x8C421E5C), 0x40);
            if (t651 != 0) {
                *(unsigned int *)0x8C421E3C = ((*(int *)0x8C421E3C) - 1);
                sndSeCursor();
                if ((*(int *)0x8C421E4C) == 3) {
                    if ((int)(*(int *)0x8C421E3C) >= (int)0x8) {
                    } else {
                        *(unsigned int *)0x8C421E3C = 0x9;
                    }
                } else {
                    if ((int)(*(int *)0x8C421E3C) < 0) {
                        *(unsigned int *)0x8C421E3C = 0x9;
                    }
                }
            }
            if ((*(int *)0x8C421E54) == 0) {
                t673 = padDirRepeat((*(int *)0x8C421E5C), 0x10);
                if (t673 != 0) {
                    *(unsigned int *)0x8C421E44 = ((*(int *)0x8C421E44) - 1);
                    sndSeCursor();
                    if ((*(int *)0x8C421E4C) == 3) {
                        if ((*(int *)0x8C421E44) == 2) {
                        } else {
                            *(unsigned int *)0x8C421E44 = 0x2;
                        }
                    } else {
                        if ((int)(*(int *)0x8C421E44) < 0) {
                            *(unsigned int *)0x8C421E44 = 0x2;
                        }
                    }
                }
                if ((*(int *)0x8C421E54) == 0) {
                    t695 = padDirRepeat((*(int *)0x8C421E5C), 0x20);
                    if (t695 != 0) {
                        *(unsigned int *)0x8C421E44 = ((*(int *)0x8C421E44) + 0x1);
                        sndSeCursor();
                        if ((*(int *)0x8C421E4C) == 3) {
                            if ((*(int *)0x8C421E44) != 2) {
                                *(unsigned int *)0x8C421E44 = 0x2;
                            }
                        } else {
                            if ((int)(*(int *)0x8C421E44) > (int)0x2) {
                                *(unsigned int *)0x8C421E44 = 0x0;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((*(int *)0x8C421E54) == 0) {
        if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421E5C) << 2)))) + 0x10))) & 5) == 0) {
        } else {
            if (((*(int *)0x8C421E3C) == 9) && (t769 = *(int *)0x8C421E44, t769 == 2)) {
                *(unsigned int *)0x8C421E54 = 0x1;
                *(unsigned int *)0x8C421E64 = 0x2;
                atcomResetBlackList();
                rankNameFilter(((((*(int *)0x8C421E30) << 2) << 1) + 0x8C421E7C), (*(int *)((((*(int *)0x8C421F40) << 2) + 0x8C1D78B8))));
            } else {
                if (((*(int *)0x8C421E3C) == 8) && ((t786 = *(int *)0x8C421E44, t786 == 2) && (t787 = *(int *)0x8C421E4C, (int)t787 > 0))) {
                    *(unsigned int *)0x8C421E4C = ((*(int *)0x8C421E4C) - 1);
                    *(unsigned int *)0x8C421E64 = 0x0;
                    sndSeCancel();
                } else {
                    if ((int)(*(int *)0x8C421E4C) <= (int)0x2) {
                        t793 = *(int *)0x8C421E44;
                        t795 = rankCursorChar(((((t793 << 2) + t793) << 1) + (*(int *)0x8C421E3C)));
                        if ((signed char)t795 != 0) {
                            t796 = *(int *)0x8C421E30;
                            t797 = *(int *)0x8C421E4C;
                            *(int *)((int)stk + 132) = ((((t796 << 2) << 1) + 0x8C421E7C) + t797);
                            t798 = *(int *)0x8C421E44;
                            *(unsigned char *)((((((t796 << 2) << 1) + 0x8C421E7C) + t797) + 0x0)) = (rankCursorChar(((((t798 << 2) + t798) << 1) + (*(int *)0x8C421E3C))));
                            *(unsigned int *)0x8C421E4C = ((*(int *)0x8C421E4C) + 0x1);
                            sndSeDecide();
                            if ((*(int *)0x8C421E4C) == 3) {
                                *(unsigned int *)0x8C421E3C = 0x9;
                                *(unsigned int *)0x8C421E44 = 0x2;
                                *(unsigned int *)0x8C421E64 = 0x1;
                                *(unsigned int *)0x8C1D792C = (*(int *)0x8C421E38);
                            }
                        }
                    }
                }
            }
        }
        if (((*(int *)0x8C421E54) == 0) && ((t843 = *(int *)0x8C421E4C, (int)t843 > 0) && (t844 = *(int *)0x8C421E5C, t845 = *(int *)((0x8C29B898 + (t844 << 2))), t846 = *(int *)((t845 + 0x10)), (t846 & 2) != 0))) {
            *(unsigned int *)0x8C421E4C = ((*(int *)0x8C421E4C) - 1);
            *(unsigned int *)0x8C421E64 = 0x0;
            sndSeCancel();
        }
    }
    if (((int)(*(int *)0x8C1D7928) > 0) && (t861 = *(int *)0x8C421E54, t861 != 0)) {
        *(unsigned int *)0x8C1D7928 = ((*(int *)0x8C1D7928) - 1);
    }
    if ((int)(*(int *)0x8C1D7928) < (int)0x1E) {
        fadeScreenStart(0x3, 0x0, 0x1E, 0x0, *(int *)((int)stk + 136), *(int *)((int)stk + 136 + 4));
    }
    t874 = *(int *)0x8C1D7928;
    t876 = t874;
    if (t874 == 60) {
        t876 = (strmBgmFadeOut(0x2, 0x0));
    }
    t883 = t876;
    if ((*(int *)0x8C1D7928) == 0) {
        *(unsigned int *)0x8C20D150 = 0x2;
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C1D793C = 0x1;
        t883 = 0x8C20D15C;
    }
    return t883;
}
