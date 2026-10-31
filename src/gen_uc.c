/* Straight-line functions with calls and guards (batch gen_uc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
float cpuDblPathCross(int, int, int, Stk3, Stk3);
float cpuDistXZ(int, int);
int nlRand(void);
float nlScalor(int);
void cpuDblPoachCheck(int a4, float f4, float f5, float f6);

void cpuDblPoachCheck(int a4, float f4, float f5, float f6)
{
    int stk[17];
    int t0;
    int t1;
    int t66;
    int t67;
    float t18;
    float t19;
    float t21;
    float u24;
    float u25;
    float u26;
    float u28;
    float t78;
    float t79;
    float t81;
    float u84;
    float u85;
    float u86;
    float u88;
    float u167;
    float u168;
    float u173;
    float u181;
    float u182;
    float u187;
    int t320;
    int t321;
    float t252;
    float t253;
    int t375;
    int t376;
    float t332;
    float t333;
    int t334;
    int t335;
    int t337;
    int t338;
    int t340;
    int t341;
    float t382;
    float u388;
    float u389;
    float u394;
    float u402;
    float u420;
    float u422;
    float u424;
    float u426;
    float u430;
    float u432;
    float u434;
    float u436;
    float u456;
    float u458;
    float u460;
    float u462;
    int t124;
    int t125;
    int t52;
    int t53;
    int t20;
    int t76;
    int t77;
    int t111;
    int t112;
    int t80;
    int t214;
    int t307;
    int t308;
    int t266;
    int t267;
    float u275;
    int t328;
    int t361;
    int t362;
    int t384;
    int t385;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player) + 0xB5C));
    if (((*(int *)0x8C291F78) & 0x4) != 0) {
    } else {
        if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) {
            t66 = 0x160;
            t67 = 0x8C2FC69C;
            if (((*(int *)((a4 + 0xB60))) & 0x4) == 0) {
            } else {
                if (((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player) + 0xB60))) & 0x4) == 0) {
                    t52 = 0x160;
                    t53 = 0x8C2FC69C;
                } else {
                    t18 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    t19 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)));
                    if ((t18 > t19) && (t20 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t20 < (int)0xF)) {
                        t21 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)));
                        if (!(10.0f > t21)) {
                            u24 = *(float *)((a4 + 0xAF0));
                            u25 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player) + 0xAF0));
                            u26 = (-u24);
                            if (!(0.0f > u24)) {
                                u26 = u24;
                            }
                            u28 = (-u25);
                            if (!(0.0f > u25)) {
                                u28 = u25;
                            }
                            if (u28 > u26) {
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                            }
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                        }
                    }
                }
                t66 = t52;
                t67 = t53;
            }
            t124 = t66;
            t125 = t67;
        } else {
            if (((unsigned char)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) && ((t76 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player) + 0xB60)), (t76 & 0x4) != 0) && (t77 = *(int *)((a4 + 0xB60)), (t77 & 0x4) != 0))) {
                t78 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player)));
                t79 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                if ((t78 > t79) && (t80 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t80 < (int)0xF)) {
                    t81 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    if (!(10.0f > t81)) {
                        u84 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + (int)Player) + 0xAF0));
                        u85 = *(float *)((a4 + 0xAF0));
                        u86 = (-u84);
                        if (!(0.0f > u84)) {
                            u86 = u84;
                        }
                        u88 = (-u85);
                        if (!(0.0f > u85)) {
                            u88 = u85;
                        }
                        if (u88 > u86) {
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                        }
                    } else {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                    }
                }
            } else {
                t111 = 0x160;
                t112 = 0x8C2FC69C;
            }
            t124 = t111;
            t125 = t112;
        }
        if ((int)(*(int *)0x8C2FCC1C) >= (int)0x14) {
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) == (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)))) {
            } else {
                if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                    u167 = *(float *)((a4 + 0xAF0));
                    u168 = *(float *)0x8C291F44;
                    u173 = *(float *)0x8C291F38;
                    if ((((u168 - u167) > 0.0f) - (0.0f > (u168 - u167))) == (((u167 - u173) > 0.0f) - (0.0f > (u167 - u173)))) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                } else {
                    u181 = *(float *)((a4 + 0xAF0));
                    u182 = *(float *)0x8C291F44;
                    u187 = *(float *)0x8C291F38;
                    if ((((u182 - (u181 * 0.75f)) > 0.0f) - (0.0f > (u182 - (u181 * 0.75f)))) == ((((u181 * 0.75f) - u187) > 0.0f) - (0.0f > ((u181 * 0.75f) - u187)))) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                }
            }
        } else {
            t320 = t124;
            t321 = t125;
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && (t214 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)), t214 == 0)) {
                if ((int)(*(int *)0x8C2FCC1C) <= (int)0x4) {
                    if ((*(float *)0x8C291F54) > 25.0f) {
                        t252 = nlScalor((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                        if (0.200000003f > t252) {
                            t253 = nlScalor((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                            if (!(0.200000003f > t253)) {
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        }
                    } else {
                        t266 = t124;
                        t267 = t125;
                    }
                    t307 = t266;
                    t308 = t267;
                } else {
                    if (((int)(*(int *)0x8C2FCC1C) <= (int)0x7) && (u275 = *(float *)0x8C291F54, u275 > 15.0f)) {
                        if ((int)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) > (int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)))) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        } else {
                            if ((int)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) < (int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)))) {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        }
                    }
                    t307 = t124;
                    t308 = t125;
                }
                t320 = t307;
                t321 = t308;
            }
            t375 = t320;
            t376 = t321;
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) && (t328 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)), t328 != 0)) {
                if ((int)(*(int *)0x8C2FCC1C) < (int)0x4) {
                    t332 = nlScalor((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    if (t332 > 0.449999988f) {
                        t333 = nlScalor((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        if (t333 > 0.449999988f) {
                            t334 = nlRand();
                            t335 = ((~(((~t334) + 0x1) & 0x1)) + 0x1);
                            if ((int)t334 >= 0) {
                                t335 = (t334 & 0x1);
                            }
                            if (t335 != 0) {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            } else {
                                t337 = nlRand();
                                t338 = ((~(((~t337) + 0x1) & 0x1)) + 0x1);
                                if ((int)t337 >= 0) {
                                    t338 = (t337 & 0x1);
                                }
                                if (t338 != 0) {
                                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                } else {
                                    t340 = nlRand();
                                    t341 = ((~(((~t340) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t340 >= 0) {
                                        t341 = (t340 & 0x1);
                                    }
                                    if (t341 != 0) {
                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t361 = t320;
                    t362 = t321;
                }
                t375 = t361;
                t376 = t362;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
            t382 = cpuDblPathCross((0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), t375, t376, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (((int)(*(int *)0x8C2FCC1C) >= (int)0x5) && (t384 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 != t384)) {
                u388 = *(float *)((a4 + 0xAF0));
                u389 = *(float *)0x8C291F44;
                u394 = *(float *)0x8C291F38;
                if ((((u389 - u388) > 0.0f) - (0.0f > (u389 - u388))) == (((u388 - u394) > 0.0f) - (0.0f > (u388 - u394)))) {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                }
            } else {
                u402 = *(float *)0x8C291F38;
                if ((float)((u402 > 0.0f) - (0.0f > u402)) == (-(*(float *)((a4 + 0xB00))))) {
                    if (((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && (t382 == 0.0f)) {
                        if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                            u420 = *(float *)0x8C291F38;
                            u422 = (-u420);
                            if (!(0.0f > u420)) {
                                u422 = (*(float *)0x8C291F38);
                            }
                            u424 = *(float *)((a4 + 0xAF0));
                            u426 = (-u424);
                            if (!(0.0f > u424)) {
                                u426 = (*(float *)((a4 + 0xAF0)));
                            }
                            if (!((u422 + 10.0f) > u426)) {
                                if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
                                    u430 = *(float *)0x8C291F38;
                                    u432 = (-u430);
                                    if (!(0.0f > u430)) {
                                        u432 = (*(float *)0x8C291F38);
                                    }
                                    u434 = *(float *)((a4 + 0xAF0));
                                    u436 = (-u434);
                                    if (!(0.0f > u434)) {
                                        u436 = (*(float *)((a4 + 0xAF0)));
                                    }
                                    if (u432 > u436) {
                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                    }
                                }
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        } else {
                            if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
                                u456 = *(float *)0x8C291F38;
                                u458 = (-u456);
                                if (!(0.0f > u456)) {
                                    u458 = (*(float *)0x8C291F38);
                                }
                                u460 = *(float *)((a4 + 0xAF0));
                                u462 = (-u460);
                                if (!(0.0f > u460)) {
                                    u462 = (*(float *)((a4 + 0xAF0)));
                                }
                                if (u458 > u462) {
                                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
