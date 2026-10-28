/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
float mathLerp(float, float, float);
extern int nlArcTan2();
int panelMenuSprPutA(Stk3, Stk1, float);
extern int primFrameCorners();
int primLineH(int, int, Stk3, Stk3, float);
float vecDistXZf(float, float, float, float);
Stk3 vecMake(float, float, float);
int entryGridDrawCursors(int a4, int a5, int a6, int a7, int a8);
int vecAnglesTo(int a4, int a5, Stk6 s);

int entryGridDrawCursors(int a4, int a5, int a6, int a7, int a8)
{
    int t292;
    int t284;
    int t68;
    int t69;
    int t70;
    int t71;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t29;
    int t30;
    float u25;
    float u26;
    float u27;
    int t80;
    int t82;
    int t84;
    int t86;
    float u88;
    float u90;
    int t94;
    float u99;
    float u103;
    float u111;
    float u116;
    float u118;
    int t119;
    float u122;
    float u126;
    float u133;
    float u138;
    int t178;
    float u195;
    float u196;
    float u197;
    float u198;
    float u199;
    float u200;
    float u201;
    float u202;
    float u203;
    float u204;
    float u205;
    float u206;
    int t209;
    int t213;
    int t234;
    int t219;
    float u254;
    float u255;
    float u256;
    float u272;
    float u273;
    float u274;
    float u276;
    int t367;
    int t368;
    int t369;
    int t370;
    float u316;
    float u317;
    float u318;
    float u319;
    float u320;
    float u321;
    float u322;
    float u323;
    int t328;
    int t329;
    float u324;
    float u325;
    float u326;
    int t379;
    int t381;
    int t383;
    int t385;
    float u387;
    float u389;
    int t393;
    float u398;
    float u402;
    float u410;
    float u415;
    float u417;
    int t418;
    float u421;
    float u425;
    float u432;
    float u437;
    int t477;
    float u494;
    float u495;
    float u496;
    float u497;
    float u498;
    float u499;
    float u500;
    float u501;
    float u502;
    float u503;
    float u504;
    float u505;
    int t508;
    int t512;
    int t533;
    int t518;
    float u553;
    float u554;
    float u555;
    float u571;
    float u572;
    float u573;
    float u575;
    int t583;
    int t11;
    int t12;
    int t57;
    int t58;
    int t59;
    int t60;
    int t47;
    int t48;
    int t49;
    int t50;
    int t38;
    int t39;
    int t40;
    int t31;
    float u174;
    float u167;
    float u159;
    int t248;
    int t228;
    int t243;
    int t259;
    int t278;
    int t282;
    int t310;
    int t311;
    int t356;
    int t357;
    int t358;
    int t359;
    int t346;
    int t347;
    int t348;
    int t349;
    int t337;
    int t338;
    int t339;
    int t330;
    float u473;
    float u466;
    float u458;
    int t547;
    int t527;
    int t542;
    int t558;
    int t577;
    int t581;
    int stk[69];

    stk[60] = a8;
    if ((*(int *)0x8C287ADC) == 2) {
        t292 = a4;
        if (a4 != 1) {
            t284 = a4;
            if (a4 == 2) {
            } else {
                *(float *)(((0xBC + ((int)stk + 52)) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + (*(float *)0x8C18D2DC));
                *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
                if ((int)a5 >= 0) {
                    *(float *)(((int)stk + 56)) = 0.5f;
                    *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
                    *(int *)((int)stk + 48) = ((a4 << 2) + 0x8C185604);
                    *(float *)((((a4 << 2) + 0x8C185604) + 0x0)) = (mathLerp((*(float *)(((*(int *)(((int)stk + 52))) + 0x0))), (*(float *)(((int)stk + 56))), 0.390625f));
                } else {
                    *(float *)((((a4 << 2) + 0x8C185604) + 0x0)) = 1.0f;
                    *(float *)(((int)stk + 56)) = 1.0f;
                    t11 = a4;
                    t12 = a5;
                }
                t68 = 0xFF;
                t69 = 0xFF;
                t70 = 0xFF;
                t71 = 0xFF;
                if (a5 == -1) {
                } else {
                    u17 = *(float *)(((int)stk + 56));
                    if (a5 == 0) {
                        u18 = (u17 * 255.0f);
                        u18 = u18 + (1.0f - u17) * 250.0f;
                        u19 = (u17 * 255.0f);
                        u19 = u19 + (1.0f - u17) * 30.0f;
                        u20 = (u17 * 255.0f);
                        u20 = u20 + (1.0f - u17) * 0.0f;
                        t57 = (int)u18;
                        t58 = (int)u19;
                        t59 = (int)u20;
                    } else {
                        if (a5 == 1) {
                            u21 = (u17 * 255.0f);
                            u21 = u21 + (1.0f - u17) * 0.0f;
                            u22 = (u17 * 255.0f);
                            u22 = u22 + (1.0f - u17) * 230.0f;
                            t47 = (int)u21;
                            t48 = (int)u22;
                            t49 = (int)u22;
                            t50 = (int)u22;
                        } else {
                            if (a5 == 2) {
                                u23 = (u17 * 255.0f);
                                u23 = u23 + (1.0f - u17) * 230.0f;
                                u24 = (u17 * 255.0f);
                                u24 = u24 + (1.0f - u17) * 0.0f;
                                t38 = (int)u23;
                                t39 = (int)u23;
                                t40 = (int)u24;
                            } else {
                                t29 = t11;
                                t30 = t12;
                                if (a5 == 3) {
                                    u25 = (u17 * 255.0f);
                                    u25 = u25 + (1.0f - u17) * 180.0f;
                                    u26 = (u17 * 255.0f);
                                    u26 = u26 + (1.0f - u17) * 100.0f;
                                    u27 = (u17 * 255.0f);
                                    u27 = u27 + (1.0f - u17) * 240.0f;
                                    t29 = (int)u25;
                                    t30 = (int)u26;
                                    t31 = (int)u27;
                                }
                                t38 = t29;
                                t39 = t30;
                                t40 = t31;
                            }
                            t47 = t38;
                            t48 = t39;
                            t49 = t40;
                        }
                        t57 = t47;
                        t58 = t48;
                        t59 = t49;
                        t60 = t50;
                    }
                    t68 = t57;
                    t69 = t58;
                    t70 = t59;
                    t71 = t60;
                }
                *(unsigned int *)(((int)stk + 60)) = (((((unsigned char)t68 << 16) | ((unsigned char)t69 << 8)) | (unsigned char)t70) | 0xFF000000);
                *(unsigned int *)(((int)stk + 64)) = 0xB4000000;
                *(unsigned int *)(((int)stk + 68)) = 0x9F;
                t80 = (((((unsigned char)t68 << 16) | ((unsigned char)t69 << 8)) | (unsigned char)t70) | 0xFF000000);
                if (a5 == 0) {
                    t80 = 0x2;
                }
                t82 = t80;
                if (a5 == 1) {
                    t82 = 0x0;
                }
                t84 = t82;
                if (a5 == 2) {
                    t84 = 0x3;
                }
                t86 = t84;
                if (a5 == 3) {
                    t86 = 0x1;
                }
                *(float *)(((0xBC + ((int)stk + 52)) + 0x8)) = 0.00300000003f;
                *(float *)(((((int)stk + 52) + 0x44) + 0x8)) = 0.00300000003f;
                *(float *)(((((int)stk + 52) + 0x50) + 0x8)) = 0.00300000003f;
                *(float *)(((((int)stk + 52) + 0x5C) + 0x8)) = 0.00300000003f;
                *(float *)(((((int)stk + 52) + 0x68) + 0x8)) = 0.00300000003f;
                u88 = *(float *)(((0xBC + ((int)stk + 52)) + 0x0));
                *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
                if (t86 == 2) {
                    u90 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
                    *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = (u88 - (((-u90) + 1.0f) * 159.0f));
                    *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                    *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    t94 = *(int *)(((int)stk + 52));
                    *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((1.0f - (*(float *)((t94 + 0x0)))) * 159.0f));
                    u99 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    u99 = u99 + 84.0f * (*(float *)((t94 + 0x0)));
                    *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = (u99 + 1.0f);
                    *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                    u103 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    u103 = u103 + 84.0f * (*(float *)((t94 + 0x0)));
                    *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = (u103 + 1.0f);
                    u174 = (u88 - (((-u90) + 1.0f) * 159.0f));
                } else {
                    if (t86 == 0) {
                        *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u88;
                        *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                        u111 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        u111 = u111 + 84.0f * (*(float *)((((a4 << 2) + 0x8C185604) + 0x0)));
                        *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = (u111 + 1.0f);
                        *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                        u116 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        u116 = u116 + 84.0f * (*(float *)((((a4 << 2) + 0x8C185604) + 0x0)));
                        *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = (u116 + 1.0f);
                        u167 = u88;
                    } else {
                        if (t86 == 3) {
                            u118 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
                            *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = (u88 - (((-u118) + 1.0f) * 159.0f));
                            t119 = *(int *)(((int)stk + 52));
                            u122 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                            u122 = u122 + 84.0f * (1.0f - (*(float *)((t119 + 0x0))));
                            *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = u122;
                            *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                            u126 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                            u126 = u126 + 84.0f * (1.0f - (*(float *)((t119 + 0x0))));
                            *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = u126;
                            *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((1.0f - (*(float *)((t119 + 0x0)))) * 159.0f));
                            *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                            *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                            u159 = (u88 - (((-u118) + 1.0f) * 159.0f));
                        } else {
                            if (t86 == 1) {
                                *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u88;
                                u133 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                                u133 = u133 + 84.0f * ((-(*(float *)((((a4 << 2) + 0x8C185604) + 0x0)))) + 1.0f);
                                *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = u133;
                                *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                                u138 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                                u138 = u138 + 84.0f * (1.0f - (*(float *)((((a4 << 2) + 0x8C185604) + 0x0))));
                                *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = u138;
                                *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                                *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                                *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                            } else {
                                *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u88;
                                *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                                *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                                *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                                *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                                *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                                *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                            }
                            u159 = u88;
                        }
                        *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                        u167 = u159;
                    }
                    u174 = u167;
                }
                if ((*(int *)0x8C1855E4) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x44)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x50)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x5C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x68)); }
                    t178 = ((int (*)(int, int, int, int, Stk3, Stk3, Stk3, Stk3, float, float, float, float))(primFrameCorners))(0x1, (*(int *)(((int)stk + 60))), (unsigned char)t70, t71, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), 84.0f, 159.0f, u174, -159.0f);
                }
                u195 = *(float *)(((((int)stk + 52) + 0x68) + 0x0));
                u196 = *(float *)(((((int)stk + 52) + 0x68) + 0x8));
                u197 = *(float *)(((((int)stk + 52) + 0x68) + 0x4));
                *(int *)((int)stk + 48) = (((int)stk + 52) + 0x14);
                *(Stk3 *)((((int)stk + 52) + 0x14)) = vecMake((u195 + 1.0f), (u197 + 1.0f), u196);
                u198 = *(float *)(((((int)stk + 52) + 0x5C) + 0x0));
                u199 = *(float *)(((((int)stk + 52) + 0x5C) + 0x8));
                u200 = *(float *)(((((int)stk + 52) + 0x5C) + 0x4));
                *(int *)((int)stk + 44) = (((int)stk + 48) + 0x24);
                *(Stk3 *)((((int)stk + 48) + 0x24)) = vecMake((u198 + 1.0f), (u200 + 1.0f), u199);
                u201 = *(float *)(((((int)stk + 52) + 0x50) + 0x0));
                u202 = *(float *)(((((int)stk + 52) + 0x50) + 0x8));
                u203 = *(float *)(((((int)stk + 52) + 0x50) + 0x4));
                *(int *)((int)stk + 40) = (((int)stk + 44) + 0x34);
                *(Stk3 *)((((int)stk + 44) + 0x34)) = vecMake((u201 + 1.0f), (u203 + 1.0f), u202);
                u204 = *(float *)(((((int)stk + 52) + 0x44) + 0x0));
                u205 = *(float *)(((((int)stk + 52) + 0x44) + 0x8));
                u206 = *(float *)(((((int)stk + 52) + 0x44) + 0x4));
                *(int *)((int)stk + 36) = (((int)stk + 40) + 0x44);
                *(Stk3 *)((((int)stk + 40) + 0x44)) = vecMake((u204 + 1.0f), (u206 + 1.0f), u205);
                if ((*(int *)0x8C1855E4) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x38)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x38)); }
                    t209 = ((int (*)(int, int, Stk3, Stk3, Stk3, Stk3))(primFrameCorners))(0x1, (*(int *)(((int)stk + 64))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
                }
                t213 = 0x1;
                if ((a4 != 0) && (a4 != 2)) {
                    t213 = 0x0;
                }
                if (t213 != 0) {
                    t234 = 0x52;
                    if ((a5 != 0) && (a5 != 2)) {
                        if (a5 != 1) {
                            t219 = 0x52;
                            if (a5 == 3) {
                                t219 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
                            }
                            t228 = t219;
                        } else {
                            t228 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
                        }
                        t234 = t228;
                    }
                    t248 = t234;
                } else {
                    if ((a5 != 0) && (a5 != 2)) {
                        t243 = 0x52;
                    } else {
                        t243 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
                    }
                    t248 = t243;
                }
                *(float *)(((int)stk + 188)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x8)));
                *(float *)(((((int)stk + 52) + 0x74) + 0x8)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x8)));
                u254 = *(float *)(((0xBC + ((int)stk + 52)) + 0x4));
                *(float *)(((((int)stk + 52) + 0x74) + 0x4)) = (u254 + 42.0f);
                *(float *)(((int)stk + 184)) = (u254 + 42.0f);
                if ((a4 != 0) && (a4 != 2)) {
                    u255 = *(float *)(((((int)stk + 52) + 0x68) + 0x0));
                    *(float *)(((int)stk + 180)) = (float)(int)u255;
                    t259 = (int)((float)(int)u255 + (float)t248);
                } else {
                    u256 = *(float *)(((((int)stk + 52) + 0x5C) + 0x0));
                    *(float *)(((int)stk + 180)) = (float)(int)u256;
                    t259 = (int)((float)(int)u256 - (float)t248);
                }
                *(float *)(((((int)stk + 52) + 0x74) + 0x0)) = (float)t259;
                if ((*(int *)0x8C1855E4) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0x8C + ((int)stk + 40))); }
                    primLineH(0x1, (*(int *)(((int)stk + 60))), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (float)t248);
                }
                u272 = *(float *)(((((int)stk + 52) + 0x74) + 0x8));
                u273 = *(float *)(((((int)stk + 52) + 0x74) + 0x4));
                u274 = *(float *)(((((int)stk + 52) + 0x74) + 0x0));
                u276 = -9.0f;
                if ((a4 != 0) && (a4 != 2)) {
                    u276 = -4.0f;
                }
                *(int *)((int)stk + 48) = (((int)stk + 52) + 0x74);
                *(Stk3 *)((((int)stk + 52) + 0x74)) = vecMake((u274 + u276), (u273 + -7.0f), (u272 + -9.99999975e-05f));
                if (((*(int *)0x8C1855E4) == 0) && (t278 = *(int *)(((a4 << 2) + 0x8C343ADC)), t278 != 0)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
                    t282 = (panelMenuSprPutA(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12), (((*(float *)0x8C343F1C) + 1.0f) / (1.0f + 1.0f))));
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
                    t282 = (panelMenuSprPutA(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12), 0.0f));
                }
                t284 = t282;
            }
            t292 = t284;
        }
        t583 = t292;
    } else {
        *(float *)(((0xBC + ((int)stk + 52)) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + (*(float *)0x8C18D2DC));
        *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
        if ((int)a5 >= 0) {
            *(float *)(((int)stk + 56)) = 0.5f;
            *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
            *(int *)((int)stk + 48) = ((a4 << 2) + 0x8C185604);
            *(float *)((((a4 << 2) + 0x8C185604) + 0x0)) = (mathLerp((*(float *)(((*(int *)(((int)stk + 52))) + 0x0))), (*(float *)(((int)stk + 56))), 0.390625f));
        } else {
            *(float *)((((a4 << 2) + 0x8C185604) + 0x0)) = 1.0f;
            *(float *)(((int)stk + 56)) = 1.0f;
            t310 = a4;
            t311 = a5;
        }
        t367 = 0xFF;
        t368 = 0xFF;
        t369 = 0xFF;
        t370 = 0xFF;
        if (a5 == -1) {
        } else {
            u316 = *(float *)(((int)stk + 56));
            if (a5 == 0) {
                u317 = (u316 * 255.0f);
                u317 = u317 + (1.0f - u316) * 250.0f;
                u318 = (u316 * 255.0f);
                u318 = u318 + (1.0f - u316) * 30.0f;
                u319 = (u316 * 255.0f);
                u319 = u319 + (1.0f - u316) * 0.0f;
                t356 = (int)u317;
                t357 = (int)u318;
                t358 = (int)u319;
            } else {
                if (a5 == 1) {
                    u320 = (u316 * 255.0f);
                    u320 = u320 + (1.0f - u316) * 0.0f;
                    u321 = (u316 * 255.0f);
                    u321 = u321 + (1.0f - u316) * 230.0f;
                    t346 = (int)u320;
                    t347 = (int)u321;
                    t348 = (int)u321;
                    t349 = (int)u321;
                } else {
                    if (a5 == 2) {
                        u322 = (u316 * 255.0f);
                        u322 = u322 + (1.0f - u316) * 230.0f;
                        u323 = (u316 * 255.0f);
                        u323 = u323 + (1.0f - u316) * 0.0f;
                        t337 = (int)u322;
                        t338 = (int)u322;
                        t339 = (int)u323;
                    } else {
                        t328 = t310;
                        t329 = t311;
                        if (a5 == 3) {
                            u324 = (u316 * 255.0f);
                            u324 = u324 + (1.0f - u316) * 180.0f;
                            u325 = (u316 * 255.0f);
                            u325 = u325 + (1.0f - u316) * 100.0f;
                            u326 = (u316 * 255.0f);
                            u326 = u326 + (1.0f - u316) * 240.0f;
                            t328 = (int)u324;
                            t329 = (int)u325;
                            t330 = (int)u326;
                        }
                        t337 = t328;
                        t338 = t329;
                        t339 = t330;
                    }
                    t346 = t337;
                    t347 = t338;
                    t348 = t339;
                }
                t356 = t346;
                t357 = t347;
                t358 = t348;
                t359 = t349;
            }
            t367 = t356;
            t368 = t357;
            t369 = t358;
            t370 = t359;
        }
        *(unsigned int *)(((int)stk + 60)) = (((((unsigned char)t367 << 16) | ((unsigned char)t368 << 8)) | (unsigned char)t369) | 0xFF000000);
        *(unsigned int *)(((int)stk + 64)) = 0xB4000000;
        *(unsigned int *)(((int)stk + 68)) = 0x9F;
        t379 = (((((unsigned char)t367 << 16) | ((unsigned char)t368 << 8)) | (unsigned char)t369) | 0xFF000000);
        if (a5 == 0) {
            t379 = 0x2;
        }
        t381 = t379;
        if (a5 == 1) {
            t381 = 0x0;
        }
        t383 = t381;
        if (a5 == 2) {
            t383 = 0x3;
        }
        t385 = t383;
        if (a5 == 3) {
            t385 = 0x1;
        }
        *(float *)(((0xBC + ((int)stk + 52)) + 0x8)) = 0.00300000003f;
        *(float *)(((((int)stk + 52) + 0x44) + 0x8)) = 0.00300000003f;
        *(float *)(((((int)stk + 52) + 0x50) + 0x8)) = 0.00300000003f;
        *(float *)(((((int)stk + 52) + 0x5C) + 0x8)) = 0.00300000003f;
        *(float *)(((((int)stk + 52) + 0x68) + 0x8)) = 0.00300000003f;
        u387 = *(float *)(((0xBC + ((int)stk + 52)) + 0x0));
        *(unsigned int *)(((int)stk + 52)) = ((a4 << 2) + 0x8C185604);
        if (t385 == 2) {
            u389 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
            *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = (u387 - (((-u389) + 1.0f) * 159.0f));
            *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
            *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
            *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
            t393 = *(int *)(((int)stk + 52));
            *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((1.0f - (*(float *)((t393 + 0x0)))) * 159.0f));
            u398 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
            u398 = u398 + 84.0f * (*(float *)((t393 + 0x0)));
            *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = (u398 + 1.0f);
            *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
            u402 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
            u402 = u402 + 84.0f * (*(float *)((t393 + 0x0)));
            *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = (u402 + 1.0f);
            u473 = (u387 - (((-u389) + 1.0f) * 159.0f));
        } else {
            if (t385 == 0) {
                *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u387;
                *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                u410 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                u410 = u410 + 84.0f * (*(float *)((((a4 << 2) + 0x8C185604) + 0x0)));
                *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = (u410 + 1.0f);
                *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                u415 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                u415 = u415 + 84.0f * (*(float *)((((a4 << 2) + 0x8C185604) + 0x0)));
                *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = (u415 + 1.0f);
                u466 = u387;
            } else {
                if (t385 == 3) {
                    u417 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
                    *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = (u387 - (((-u417) + 1.0f) * 159.0f));
                    t418 = *(int *)(((int)stk + 52));
                    u421 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    u421 = u421 + 84.0f * (1.0f - (*(float *)((t418 + 0x0))));
                    *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = u421;
                    *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                    u425 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                    u425 = u425 + 84.0f * (1.0f - (*(float *)((t418 + 0x0))));
                    *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = u425;
                    *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((1.0f - (*(float *)((t418 + 0x0)))) * 159.0f));
                    *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                    *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                    u458 = (u387 - (((-u417) + 1.0f) * 159.0f));
                } else {
                    if (t385 == 1) {
                        *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u387;
                        u432 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        u432 = u432 + 84.0f * ((-(*(float *)((((a4 << 2) + 0x8C185604) + 0x0)))) + 1.0f);
                        *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = u432;
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                        u437 = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        u437 = u437 + 84.0f * (1.0f - (*(float *)((((a4 << 2) + 0x8C185604) + 0x0))));
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = u437;
                        *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                        *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                        *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) - ((*(float *)((((a4 << 2) + 0x8C185604) + 0x0))) * 159.0f));
                    } else {
                        *(float *)(((((int)stk + 52) + 0x68) + 0x0)) = u387;
                        *(float *)(((((int)stk + 52) + 0x68) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                        *(float *)(((((int)stk + 52) + 0x5C) + 0x4)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x4)));
                        *(float *)(((((int)stk + 52) + 0x50) + 0x0)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x0)));
                        *(float *)(((((int)stk + 52) + 0x50) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                        *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x0))) + -159.0f);
                    }
                    u458 = u387;
                }
                *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = ((*(float *)(((0xBC + ((int)stk + 52)) + 0x4))) + 84.0f);
                u466 = u458;
            }
            u473 = u466;
        }
        if ((*(int *)0x8C1855E4) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x44)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x50)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x5C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x68)); }
            t477 = ((int (*)(int, int, int, int, Stk3, Stk3, Stk3, Stk3, float, float, float, float))(primFrameCorners))(0x1, (*(int *)(((int)stk + 60))), (unsigned char)t369, t370, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), 84.0f, 159.0f, u473, -159.0f);
        }
        u494 = *(float *)(((((int)stk + 52) + 0x68) + 0x0));
        u495 = *(float *)(((((int)stk + 52) + 0x68) + 0x8));
        u496 = *(float *)(((((int)stk + 52) + 0x68) + 0x4));
        *(int *)((int)stk + 48) = (((int)stk + 52) + 0x14);
        *(Stk3 *)((((int)stk + 52) + 0x14)) = vecMake((u494 + 1.0f), (u496 + 1.0f), u495);
        u497 = *(float *)(((((int)stk + 52) + 0x5C) + 0x0));
        u498 = *(float *)(((((int)stk + 52) + 0x5C) + 0x8));
        u499 = *(float *)(((((int)stk + 52) + 0x5C) + 0x4));
        *(int *)((int)stk + 44) = (((int)stk + 48) + 0x24);
        *(Stk3 *)((((int)stk + 48) + 0x24)) = vecMake((u497 + 1.0f), (u499 + 1.0f), u498);
        u500 = *(float *)(((((int)stk + 52) + 0x50) + 0x0));
        u501 = *(float *)(((((int)stk + 52) + 0x50) + 0x8));
        u502 = *(float *)(((((int)stk + 52) + 0x50) + 0x4));
        *(int *)((int)stk + 40) = (((int)stk + 44) + 0x34);
        *(Stk3 *)((((int)stk + 44) + 0x34)) = vecMake((u500 + 1.0f), (u502 + 1.0f), u501);
        u503 = *(float *)(((((int)stk + 52) + 0x44) + 0x0));
        u504 = *(float *)(((((int)stk + 52) + 0x44) + 0x8));
        u505 = *(float *)(((((int)stk + 52) + 0x44) + 0x4));
        *(int *)((int)stk + 36) = (((int)stk + 40) + 0x44);
        *(Stk3 *)((((int)stk + 40) + 0x44)) = vecMake((u503 + 1.0f), (u505 + 1.0f), u504);
        if ((*(int *)0x8C1855E4) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x38)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x38)); }
            t508 = ((int (*)(int, int, Stk3, Stk3, Stk3, Stk3))(primFrameCorners))(0x1, (*(int *)(((int)stk + 64))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
        }
        t512 = 0x1;
        if ((a4 != 0) && (a4 != 2)) {
            t512 = 0x0;
        }
        if (t512 != 0) {
            t533 = 0x52;
            if ((a5 != 0) && (a5 != 2)) {
                if (a5 != 1) {
                    t518 = 0x52;
                    if (a5 == 3) {
                        t518 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
                    }
                    t527 = t518;
                } else {
                    t527 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
                }
                t533 = t527;
            }
            t547 = t533;
        } else {
            if ((a5 != 0) && (a5 != 2)) {
                t542 = 0x52;
            } else {
                t542 = (0x52 + ((*(int *)(((int)stk + 68))) - (int)((*(float *)(((((int)stk + 52) + 0x68) + 0x0))) - (*(float *)(((((int)stk + 52) + 0x5C) + 0x0))))));
            }
            t547 = t542;
        }
        *(float *)(((int)stk + 188)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x8)));
        *(float *)(((((int)stk + 52) + 0x74) + 0x8)) = (*(float *)(((0xBC + ((int)stk + 52)) + 0x8)));
        u553 = *(float *)(((0xBC + ((int)stk + 52)) + 0x4));
        *(float *)(((((int)stk + 52) + 0x74) + 0x4)) = (u553 + 42.0f);
        *(float *)(((int)stk + 184)) = (u553 + 42.0f);
        if ((a4 != 0) && (a4 != 2)) {
            u554 = *(float *)(((((int)stk + 52) + 0x68) + 0x0));
            *(float *)(((int)stk + 180)) = (float)(int)u554;
            t558 = (int)((float)(int)u554 + (float)t547);
        } else {
            u555 = *(float *)(((((int)stk + 52) + 0x5C) + 0x0));
            *(float *)(((int)stk + 180)) = (float)(int)u555;
            t558 = (int)((float)(int)u555 - (float)t547);
        }
        *(float *)(((((int)stk + 52) + 0x74) + 0x0)) = (float)t558;
        if ((*(int *)0x8C1855E4) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0x8C + ((int)stk + 40))); }
            primLineH(0x1, (*(int *)(((int)stk + 60))), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (float)t547);
        }
        u571 = *(float *)(((((int)stk + 52) + 0x74) + 0x8));
        u572 = *(float *)(((((int)stk + 52) + 0x74) + 0x4));
        u573 = *(float *)(((((int)stk + 52) + 0x74) + 0x0));
        u575 = -9.0f;
        if ((a4 != 0) && (a4 != 2)) {
            u575 = -4.0f;
        }
        *(int *)((int)stk + 48) = (((int)stk + 52) + 0x74);
        *(Stk3 *)((((int)stk + 52) + 0x74)) = vecMake((u573 + u575), (u572 + -7.0f), (u571 + -9.99999975e-05f));
        if (((*(int *)0x8C1855E4) == 0) && (t577 = *(int *)(((a4 << 2) + 0x8C343ADC)), t577 != 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
            t581 = (panelMenuSprPutA(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12), (((*(float *)0x8C343F1C) + 1.0f) / (1.0f + 1.0f))));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x74)); }
            t581 = (panelMenuSprPutA(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12), 0.0f));
        }
        t583 = t581;
    }
    return t583;
}

int vecAnglesTo(int a4, int a5, Stk6 s)
{
    float u2;
    float u3;
    int t9;
    float t12;
    float u13;
    int t14;
    int stk[22];

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    stk[11] = s.w[3];
    stk[12] = s.w[4];
    stk[13] = s.w[5];
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    u2 = *(float *)(((((int)stk + 4) + 0x28) + 0x4));
    u3 = *(float *)(((((int)stk + 4) + 0x1C) + 0x4));
    *(unsigned short *)((a5 + 0x0)) = (((int (*)(int, int, float, float))(nlArcTan2))(a4, a5, ((*(float *)(((((int)stk + 4) + 0x28) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x28) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x1C) + 0x8))))));
    t9 = *(int *)(((int)stk + 4));
    t12 = vecDistXZf((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x1C) + 0x8))), (*(float *)(((((int)stk + 4) + 0x28) + 0x0))), (*(float *)(((((int)stk + 4) + 0x28) + 0x8))));
    u13 = (u2 - u3);
    u13 = -u13;
    t14 = ((int (*)(float, float))(nlArcTan2))(u13, t12);
    *(unsigned short *)((t9 + 0x0)) = t14;
    return t14;
}
