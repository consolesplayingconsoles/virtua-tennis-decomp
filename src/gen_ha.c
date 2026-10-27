/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuDblPathCross(int, int, int, Stk3, Stk3, float, float);
float cpuDistXZ(int, int);
int nlRand(void);
float nlScalor(int);
void cpuDblPoachCheck(int a4, float f4, float f5, float f6);

void cpuDblPoachCheck(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t66;
    int t67;
    float u72;
    float u73;
    float u58;
    float u59;
    float t18;
    float t19;
    float t21;
    float u24;
    float u25;
    float u26;
    float u28;
    float u117;
    float u118;
    float t78;
    float t79;
    float t81;
    float u84;
    float u85;
    float u86;
    float u88;
    float u167;
    float u168;
    int t171;
    int t169;
    float u173;
    int t176;
    int t174;
    float u181;
    float u182;
    int t185;
    int t183;
    float u187;
    int t190;
    int t188;
    int t320;
    int t321;
    float u325;
    float u326;
    float t252;
    float t253;
    int t375;
    int t376;
    float u380;
    float u381;
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
    int t392;
    int t390;
    float u394;
    int t397;
    int t395;
    float u402;
    int t405;
    int t403;
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
    float u130;
    float u131;
    int t52;
    int t53;
    int t20;
    float u45;
    float u46;
    float u37;
    float u38;
    int t76;
    int t77;
    int t111;
    int t112;
    int t80;
    float u105;
    float u106;
    float u97;
    float u98;
    int t214;
    int t307;
    int t308;
    float u312;
    float u313;
    int t266;
    int t267;
    float u271;
    float u272;
    float u275;
    int t328;
    int t361;
    int t362;
    float u366;
    float u367;
    int t384;
    int t385;
    int stk[17];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 0x4) != 0) {
    } else {
        if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) {
            t66 = 0x160;
            t67 = 0x8C2FC69C;
            u72 = f4;
            u73 = f5;
            if (((*(int *)((a4 + 0xB60))) & 0x4) == 0) {
            } else {
                u58 = f4;
                u59 = f5;
                if (((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x4) == 0) {
                    t52 = 0x160;
                    t53 = 0x8C2FC69C;
                } else {
                    t18 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    t19 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                    if ((t18 > t19) && (t20 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t20 < (int)0xF)) {
                        t21 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                        if (!(10.0f > t21)) {
                            u24 = *(float *)((a4 + 0xAF0));
                            u25 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
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
                            u37 = u24;
                            u38 = u25;
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                        }
                        u45 = u37;
                        u46 = u38;
                    }
                    u58 = u45;
                    u59 = u46;
                }
                t66 = t52;
                t67 = t53;
                u72 = u58;
                u73 = u59;
            }
            t124 = t66;
            t125 = t67;
            u130 = u72;
            u131 = u73;
        } else {
            u117 = f4;
            u118 = f5;
            if (((unsigned char)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) && ((t76 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)), (t76 & 0x4) != 0) && (t77 = *(int *)((a4 + 0xB60)), (t77 & 0x4) != 0))) {
                t78 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                t79 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                if ((t78 > t79) && (t80 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t80 < (int)0xF)) {
                    t81 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    if (!(10.0f > t81)) {
                        u84 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
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
                        u97 = u85;
                        u98 = u84;
                    } else {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                    }
                    u105 = u97;
                    u106 = u98;
                }
                u117 = u105;
                u118 = u106;
            } else {
                t111 = 0x160;
                t112 = 0x8C2FC69C;
            }
            t124 = t111;
            t125 = t112;
            u130 = u117;
            u131 = u118;
        }
        if ((int)(*(int *)0x8C2FCC1C) >= (int)0x14) {
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) == (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)))) {
            } else {
                if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                    u167 = *(float *)((a4 + 0xAF0));
                    u168 = *(float *)0x8C291F44;
                    t171 = 0x1;
                    if ((u168 - u167) > 0.0f) {
                    } else {
                        t169 = 0x0;
                        if (0.0f > (u168 - u167)) {
                            t169 = 0xFFFFFFFF;
                        }
                        t171 = t169;
                    }
                    u173 = *(float *)0x8C291F38;
                    t176 = 0x1;
                    if ((u167 - u173) > 0.0f) {
                    } else {
                        t174 = 0x0;
                        if (0.0f > (u167 - u173)) {
                            t174 = 0xFFFFFFFF;
                        }
                        t176 = t174;
                    }
                    if (t171 == t176) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                } else {
                    u181 = *(float *)((a4 + 0xAF0));
                    u182 = *(float *)0x8C291F44;
                    t185 = 0x1;
                    if ((u182 - (u181 * 0.75f)) > 0.0f) {
                    } else {
                        t183 = 0x0;
                        if (0.0f > (u182 - (u181 * 0.75f))) {
                            t183 = 0xFFFFFFFF;
                        }
                        t185 = t183;
                    }
                    u187 = *(float *)0x8C291F38;
                    t190 = 0x1;
                    if (((u181 * 0.75f) - u187) > 0.0f) {
                    } else {
                        t188 = 0x0;
                        if (0.0f > ((u181 * 0.75f) - u187)) {
                            t188 = 0xFFFFFFFF;
                        }
                        t190 = t188;
                    }
                    if (t185 == t190) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                }
            }
        } else {
            t320 = t124;
            t321 = t125;
            u325 = u130;
            u326 = u131;
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
                        u271 = u130;
                        u272 = u131;
                    }
                    t307 = t266;
                    t308 = t267;
                    u312 = u271;
                    u313 = u272;
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
                    u312 = u130;
                    u313 = u131;
                }
                t320 = t307;
                t321 = t308;
                u325 = u312;
                u326 = u313;
            }
            t375 = t320;
            t376 = t321;
            u380 = u325;
            u381 = u326;
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
                    u366 = u325;
                    u367 = u326;
                }
                t375 = t361;
                t376 = t362;
                u380 = u366;
                u381 = u367;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
            t382 = cpuDblPathCross((0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), t375, t376, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), u380, u381);
            if (((int)(*(int *)0x8C2FCC1C) >= (int)0x5) && (t384 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 != t384)) {
                u388 = *(float *)((a4 + 0xAF0));
                u389 = *(float *)0x8C291F44;
                t392 = 0x1;
                if ((u389 - u388) > 0.0f) {
                } else {
                    t390 = 0x0;
                    if (0.0f > (u389 - u388)) {
                        t390 = 0xFFFFFFFF;
                    }
                    t392 = t390;
                }
                u394 = *(float *)0x8C291F38;
                t397 = 0x1;
                if ((u388 - u394) > 0.0f) {
                } else {
                    t395 = 0x0;
                    if (0.0f > (u388 - u394)) {
                        t395 = 0xFFFFFFFF;
                    }
                    t397 = t395;
                }
                if (t392 == t397) {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                }
            } else {
                u402 = *(float *)0x8C291F38;
                t405 = 0x1;
                if (u402 > 0.0f) {
                } else {
                    t403 = 0x0;
                    if (0.0f > u402) {
                        t403 = 0xFFFFFFFF;
                    }
                    t405 = t403;
                }
                if ((float)t405 == (-(*(float *)((a4 + 0xB00))))) {
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
