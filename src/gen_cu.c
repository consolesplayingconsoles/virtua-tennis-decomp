/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int nlRand(void);
int serveGetServer(void);
int cpuDblAimAddLv13(int a4, int a5);
int cpuDblAimAddDeep(int a4, int a5);
int cpuDblAimAddCourt(int a4, int a5);

int cpuDblAimAddLv13(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u4;
    float u5;
    float u7;
    float u8;
    float u10;
    float u15;
    float u16;
    float u17;
    int t20;
    int t18;
    float u23;
    float u24;
    float u25;
    int t28;
    int t26;
    float u46;
    float u47;
    int t50;
    int t48;
    int t54;
    int t52;
    float u56;
    float u57;
    int t60;
    int t58;
    float u63;
    float u64;
    int t67;
    int t65;
    float u70;
    float u71;
    int t74;
    int t72;
    int t78;
    int t87;
    float u79;
    float u80;
    int t83;
    int t81;
    float u91;
    float u92;
    int t95;
    int t93;
    int t99;
    int t97;
    float u101;
    int t104;
    int t102;
    int t108;
    int t106;
    float u110;
    float u111;
    int t114;
    int t112;
    float u117;
    float u118;
    int t121;
    int t119;
    int t125;
    int t141;
    float u126;
    float u127;
    int t130;
    int t128;
    float u133;
    float u134;
    int t137;
    int t135;
    int t147;
    float u148;
    float u149;
    int t152;
    int t150;
    float u154;
    float u155;
    int t158;
    int t156;
    float u161;
    float u162;
    int t165;
    int t163;
    float u182;
    float u183;
    int t186;
    int t184;
    float u189;
    float u190;
    int t193;
    int t191;
    int t197;
    int t213;
    float u198;
    float u199;
    int t202;
    int t200;
    float u205;
    float u206;
    int t209;
    int t207;
    float u236;
    float u237;
    int t240;
    int t238;
    float u242;
    int t245;
    int t243;
    float u247;
    float u248;
    int t251;
    int t249;
    int t255;
    int t253;
    float u257;
    float u258;
    int t261;
    int t259;
    float u263;
    float u264;
    int t267;
    int t265;
    float u270;
    float u271;
    int t274;
    int t272;
    int t293;
    float u294;
    float u295;
    int t298;
    int t296;
    int t301;
    int t302;
    float u304;
    float u305;
    int t308;
    int t306;
    float u310;
    float u311;
    int t314;
    int t312;
    int t333;
    int t231;
    int t31;
    float u41;
    float u42;
    int t225;
    int t219;
    int t177;
    int t167;
    float u172;
    int t173;
    int t328;
    int t276;
    float u287;
    int t289;
    float u319;
    int t320;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((a4 + 0xB9C));
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(u2 > 34.8499985f)) {
        u4 = *(float *)((a4 + 0xB9C));
        u5 = (-u4);
        if (!(0.0f > u4)) {
            u5 = u4;
        }
        if (15.0f > u5) {
            u7 = *(float *)((a4 + 0xB9C));
            u8 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u10 = ((-u7) + u8);
            if (!(0.0f > (u7 - u8))) {
                u10 = (u7 - u8);
            }
            if (10.0f > u10) {
                t31 = a5;
                u41 = (((*(float *)((a4 + 0xB9C))) + (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))) * 0.5f);
                u42 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            } else {
                u15 = *(float *)((a4 + 0xB00));
                u16 = *(float *)((a4 + 0xB9C));
                u17 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t20 = 0x1;
                if ((u17 - u16) > 0.0f) {
                } else {
                    t18 = 0x0;
                    if (0.0f > (u17 - u16)) {
                        t18 = 0xFFFFFFFF;
                    }
                    t20 = t18;
                }
                cpuAimPointSet(a5, 0x1, ((float)t20 * 54.8499985f), (u15 * 35.6550026f));
                u23 = *(float *)((a4 + 0xB00));
                u24 = *(float *)((a4 + 0xB9C));
                u25 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t28 = 0x1;
                if ((u25 - u24) > 0.0f) {
                } else {
                    t26 = 0x0;
                    if (0.0f > (u25 - u24)) {
                        t26 = 0xFFFFFFFF;
                    }
                    t28 = t26;
                }
                t31 = (a5 + 0x1);
                u41 = ((float)t28 * 54.8499985f);
                u42 = (u23 * 118.849998f);
            }
            cpuAimPointSet(t31, 0x1, u41, u42);
            t231 = (t31 + 0x1);
        } else {
            u46 = *(float *)((a4 + 0xB9C));
            u47 = *(float *)((a4 + 0xAE8));
            t50 = 0x1;
            if ((u46 - u47) > 0.0f) {
            } else {
                t48 = 0x0;
                if (0.0f > (u46 - u47)) {
                    t48 = 0xFFFFFFFF;
                }
                t50 = t48;
            }
            t54 = 0x1;
            if (u46 > 0.0f) {
            } else {
                t52 = 0x0;
                if (0.0f > u46) {
                    t52 = 0xFFFFFFFF;
                }
                t54 = t52;
            }
            if (t50 != t54) {
                u56 = *(float *)((a4 + 0xB00));
                u57 = *(float *)((a4 + 0xB9C));
                t60 = 0x1;
                if (u57 > 0.0f) {
                } else {
                    t58 = 0x0;
                    if (0.0f > u57) {
                        t58 = 0xFFFFFFFF;
                    }
                    t60 = t58;
                }
                cpuAimPointSet(a5, 0x1, ((float)(-t60) * 54.8499985f), (u56 * 11.8850002f));
                u63 = *(float *)((a4 + 0xB00));
                u64 = *(float *)((a4 + 0xB9C));
                t67 = 0x1;
                if (u64 > 0.0f) {
                } else {
                    t65 = 0x0;
                    if (0.0f > u64) {
                        t65 = 0xFFFFFFFF;
                    }
                    t67 = t65;
                }
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t67) * 54.8499985f), (u63 * 118.849998f));
                u70 = *(float *)((a4 + 0xB00));
                u71 = *(float *)((a4 + 0xB9C));
                t74 = 0x1;
                if (u71 > 0.0f) {
                } else {
                    t72 = 0x0;
                    if (0.0f > u71) {
                        t72 = 0xFFFFFFFF;
                    }
                    t74 = t72;
                }
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t74) * 54.8499985f), (u70 * 118.849998f));
                t78 = (int)((int)(nlRand()) % (int)0x5);
                t87 = (((a5 + 0x1) + 0x1) + 0x1);
                if (t78 == 0) {
                    u79 = *(float *)((a4 + 0xB00));
                    u80 = *(float *)((a4 + 0xB9C));
                    t83 = 0x1;
                    if (u80 > 0.0f) {
                    } else {
                        t81 = 0x0;
                        if (0.0f > u80) {
                            t81 = 0xFFFFFFFF;
                        }
                        t83 = t81;
                    }
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t83 * 54.8499985f), (u79 * 118.849998f));
                    t87 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t225 = t87;
            } else {
                u91 = *(float *)((a4 + 0xB9C));
                u92 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t95 = 0x1;
                if ((u92 - u91) > 0.0f) {
                } else {
                    t93 = 0x0;
                    if (0.0f > (u92 - u91)) {
                        t93 = 0xFFFFFFFF;
                    }
                    t95 = t93;
                }
                t99 = 0x1;
                if (u91 > 0.0f) {
                } else {
                    t97 = 0x0;
                    if (0.0f > u91) {
                        t97 = 0xFFFFFFFF;
                    }
                    t99 = t97;
                }
                if (t95 != t99) {
                    u101 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
                    t104 = 0x1;
                    if ((u101 - u91) > 0.0f) {
                    } else {
                        t102 = 0x0;
                        if (0.0f > (u101 - u91)) {
                            t102 = 0xFFFFFFFF;
                        }
                        t104 = t102;
                    }
                    t108 = 0x1;
                    if (u91 > 0.0f) {
                    } else {
                        t106 = 0x0;
                        if (0.0f > u91) {
                            t106 = 0xFFFFFFFF;
                        }
                        t108 = t106;
                    }
                    if (t104 == t108) {
                        u110 = *(float *)((a4 + 0xB00));
                        u111 = *(float *)((a4 + 0xB9C));
                        t114 = 0x1;
                        if (u111 > 0.0f) {
                        } else {
                            t112 = 0x0;
                            if (0.0f > u111) {
                                t112 = 0xFFFFFFFF;
                            }
                            t114 = t112;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)(-t114) * 54.8499985f), (u110 * 59.4249992f));
                        u117 = *(float *)((a4 + 0xB00));
                        u118 = *(float *)((a4 + 0xB9C));
                        t121 = 0x1;
                        if (u118 > 0.0f) {
                        } else {
                            t119 = 0x0;
                            if (0.0f > u118) {
                                t119 = 0xFFFFFFFF;
                            }
                            t121 = t119;
                        }
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t121) * 54.8499985f), (u117 * 11.8850002f));
                        t125 = (int)((int)(nlRand()) % (int)0x5);
                        t141 = ((a5 + 0x1) + 0x1);
                        if (t125 != 0) {
                        } else {
                            u126 = *(float *)((a4 + 0xB00));
                            u127 = *(float *)((a4 + 0xB9C));
                            t130 = 0x1;
                            if (u127 > 0.0f) {
                            } else {
                                t128 = 0x0;
                                if (0.0f > u127) {
                                    t128 = 0xFFFFFFFF;
                                }
                                t130 = t128;
                            }
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t130 * 54.8499985f), (u126 * 11.8850002f));
                            u133 = *(float *)((a4 + 0xB00));
                            u134 = *(float *)((a4 + 0xB9C));
                            t137 = 0x1;
                            if (u134 > 0.0f) {
                            } else {
                                t135 = 0x0;
                                if (0.0f > u134) {
                                    t135 = 0xFFFFFFFF;
                                }
                                t137 = t135;
                            }
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t137 * 54.8499985f), (u133 * 118.849998f));
                            t141 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                        }
                        t177 = t141;
                    } else {
                        t147 = (int)((int)(nlRand()) % (int)0x3);
                        if (t147 != 0) {
                            u148 = *(float *)((a4 + 0xB00));
                            u149 = *(float *)((a4 + 0xB9C));
                            t152 = 0x1;
                            if (u149 > 0.0f) {
                            } else {
                                t150 = 0x0;
                                if (0.0f > u149) {
                                    t150 = 0xFFFFFFFF;
                                }
                                t152 = t150;
                            }
                            t167 = a5;
                            u172 = (u148 * 118.849998f);
                            t173 = t152;
                        } else {
                            u154 = *(float *)((a4 + 0xB00));
                            u155 = *(float *)((a4 + 0xB9C));
                            t158 = 0x1;
                            if (u155 > 0.0f) {
                            } else {
                                t156 = 0x0;
                                if (0.0f > u155) {
                                    t156 = 0xFFFFFFFF;
                                }
                                t158 = t156;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)(-t158) * 54.8499985f), (u154 * 11.8850002f));
                            u161 = *(float *)((a4 + 0xB00));
                            u162 = *(float *)((a4 + 0xB9C));
                            t165 = 0x1;
                            if (u162 > 0.0f) {
                            } else {
                                t163 = 0x0;
                                if (0.0f > u162) {
                                    t163 = 0xFFFFFFFF;
                                }
                                t165 = t163;
                            }
                            t167 = (a5 + 0x1);
                            u172 = (u161 * 118.849998f);
                            t173 = (-t165);
                        }
                        cpuAimPointSet(t167, 0x1, ((float)t173 * 54.8499985f), u172);
                        t177 = (t167 + 0x1);
                    }
                    t219 = t177;
                } else {
                    u182 = *(float *)((a4 + 0xB00));
                    u183 = *(float *)((a4 + 0xB9C));
                    t186 = 0x1;
                    if (u183 > 0.0f) {
                    } else {
                        t184 = 0x0;
                        if (0.0f > u183) {
                            t184 = 0xFFFFFFFF;
                        }
                        t186 = t184;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)(-t186) * 54.8499985f), (u182 * 59.4249992f));
                    u189 = *(float *)((a4 + 0xB00));
                    u190 = *(float *)((a4 + 0xB9C));
                    t193 = 0x1;
                    if (u190 > 0.0f) {
                    } else {
                        t191 = 0x0;
                        if (0.0f > u190) {
                            t191 = 0xFFFFFFFF;
                        }
                        t193 = t191;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t193) * 54.8499985f), (u189 * 11.8850002f));
                    t197 = (int)((int)(nlRand()) % (int)0x5);
                    t213 = ((a5 + 0x1) + 0x1);
                    if (t197 != 0) {
                    } else {
                        u198 = *(float *)((a4 + 0xB00));
                        u199 = *(float *)((a4 + 0xB9C));
                        t202 = 0x1;
                        if (u199 > 0.0f) {
                        } else {
                            t200 = 0x0;
                            if (0.0f > u199) {
                                t200 = 0xFFFFFFFF;
                            }
                            t202 = t200;
                        }
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t202 * 54.8499985f), (u198 * 11.8850002f));
                        u205 = *(float *)((a4 + 0xB00));
                        u206 = *(float *)((a4 + 0xB9C));
                        t209 = 0x1;
                        if (u206 > 0.0f) {
                        } else {
                            t207 = 0x0;
                            if (0.0f > u206) {
                                t207 = 0xFFFFFFFF;
                            }
                            t209 = t207;
                        }
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t209 * 54.8499985f), (u205 * 118.849998f));
                        t213 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t219 = t213;
                }
                t225 = t219;
            }
            t231 = t225;
        }
        t333 = t231;
    } else {
        u236 = *(float *)((a4 + 0xB9C));
        u237 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t240 = 0x1;
        if ((u237 - u236) > 0.0f) {
        } else {
            t238 = 0x0;
            if (0.0f > (u237 - u236)) {
                t238 = 0xFFFFFFFF;
            }
            t240 = t238;
        }
        u242 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
        t245 = 0x1;
        if ((u242 - u236) > 0.0f) {
        } else {
            t243 = 0x0;
            if (0.0f > (u242 - u236)) {
                t243 = 0xFFFFFFFF;
            }
            t245 = t243;
        }
        if (t240 == t245) {
            u247 = *(float *)((a4 + 0xB9C));
            u248 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            t251 = 0x1;
            if ((u247 - u248) > 0.0f) {
            } else {
                t249 = 0x0;
                if (0.0f > (u247 - u248)) {
                    t249 = 0xFFFFFFFF;
                }
                t251 = t249;
            }
            t255 = 0x1;
            if (u247 > 0.0f) {
            } else {
                t253 = 0x0;
                if (0.0f > u247) {
                    t253 = 0xFFFFFFFF;
                }
                t255 = t253;
            }
            if (t251 == t255) {
                u257 = *(float *)((a4 + 0xB00));
                u258 = *(float *)((a4 + 0xB9C));
                t261 = 0x1;
                if (u258 > 0.0f) {
                } else {
                    t259 = 0x0;
                    if (0.0f > u258) {
                        t259 = 0xFFFFFFFF;
                    }
                    t261 = t259;
                }
                t276 = a5;
                u287 = (u257 * 118.849998f);
                t289 = t261;
            } else {
                u263 = *(float *)((a4 + 0xB00));
                u264 = *(float *)((a4 + 0xB9C));
                t267 = 0x1;
                if (u264 > 0.0f) {
                } else {
                    t265 = 0x0;
                    if (0.0f > u264) {
                        t265 = 0xFFFFFFFF;
                    }
                    t267 = t265;
                }
                cpuAimPointSet(a5, 0x1, ((float)(-t267) * 54.8499985f), (u263 * 59.4249992f));
                u270 = *(float *)((a4 + 0xB00));
                u271 = *(float *)((a4 + 0xB9C));
                t274 = 0x1;
                if (u271 > 0.0f) {
                } else {
                    t272 = 0x0;
                    if (0.0f > u271) {
                        t272 = 0xFFFFFFFF;
                    }
                    t274 = t272;
                }
                t276 = (a5 + 0x1);
                u287 = (u270 * 11.8850002f);
                t289 = (-t274);
            }
            cpuAimPointSet(t276, 0x1, ((float)t289 * 54.8499985f), u287);
            t328 = (t276 + 0x1);
        } else {
            t293 = (int)((int)(nlRand()) % (int)0x3);
            if (t293 == 0) {
                u294 = *(float *)((a4 + 0xB00));
                u295 = *(float *)((a4 + 0xB9C));
                t298 = 0x1;
                if (u295 > 0.0f) {
                } else {
                    t296 = 0x0;
                    if (0.0f > u295) {
                        t296 = 0xFFFFFFFF;
                    }
                    t298 = t296;
                }
                cpuAimPointSet(a5, 0x1, ((float)t298 * 54.8499985f), (u294 * 118.849998f));
            } else {
                t301 = nlRand();
                t302 = ((~(((~t301) + 0x1) & 0x1)) + 0x1);
                if ((int)t301 >= 0) {
                    t302 = (t301 & 0x1);
                }
                if (t302 != 0) {
                    u304 = *(float *)((a4 + 0xB00));
                    u305 = *(float *)((a4 + 0xB9C));
                    t308 = 0x1;
                    if (u305 > 0.0f) {
                    } else {
                        t306 = 0x0;
                        if (0.0f > u305) {
                            t306 = 0xFFFFFFFF;
                        }
                        t308 = t306;
                    }
                    u319 = (u304 * 118.849998f);
                    t320 = (-t308);
                } else {
                    u310 = *(float *)((a4 + 0xB00));
                    u311 = *(float *)((a4 + 0xB9C));
                    t314 = 0x1;
                    if (u311 > 0.0f) {
                    } else {
                        t312 = 0x0;
                        if (0.0f > u311) {
                            t312 = 0xFFFFFFFF;
                        }
                        t314 = t312;
                    }
                    u319 = (u310 * 11.8850002f);
                    t320 = (-t314);
                }
                cpuAimPointSet(a5, 0x1, ((float)t320 * 54.8499985f), u319);
            }
            t328 = (a5 + 0x1);
        }
        t333 = t328;
    }
    return (t333 - a5);
}

int cpuDblAimAddDeep(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;
    float u7;
    float u9;
    float u11;
    float u12;
    int t15;
    int t13;
    float u18;
    float u19;
    float u20;
    float u22;
    int t24;
    int t25;
    int t26;
    float u29;
    float u30;
    float u33;
    float u34;
    int t223;
    float u37;
    int t40;
    int t38;
    float u42;
    int t45;
    int t43;
    float u48;
    int t51;
    int t49;
    float u53;
    int t56;
    int t54;
    float u59;
    float u60;
    float u62;
    float u63;
    float u65;
    float u66;
    int t69;
    int t67;
    float u71;
    float u72;
    int t75;
    int t73;
    float u77;
    float u79;
    float u80;
    int t83;
    int t81;
    float u86;
    float u106;
    float u107;
    int t110;
    int t108;
    float u118;
    int t121;
    int t119;
    float u123;
    int t126;
    int t124;
    float u130;
    int t133;
    int t131;
    float u135;
    int t138;
    int t136;
    float u140;
    float u141;
    int t144;
    int t142;
    float u146;
    float u147;
    int t150;
    int t148;
    float u153;
    float u154;
    int t157;
    int t155;
    float u160;
    float u161;
    int t164;
    int t162;
    float u182;
    int t185;
    int t183;
    float u187;
    int t190;
    int t188;
    float u192;
    float u193;
    int t196;
    int t194;
    float u198;
    float u199;
    int t202;
    int t200;
    float u238;
    int t241;
    int t239;
    float u243;
    int t246;
    int t244;
    float u249;
    int t252;
    int t250;
    float u254;
    int t257;
    int t255;
    float u259;
    float u260;
    int t263;
    int t261;
    float u265;
    float u266;
    int t269;
    int t267;
    float u277;
    int t280;
    int t278;
    float u282;
    int t285;
    int t283;
    float u287;
    float u288;
    int t291;
    int t289;
    float u293;
    float u294;
    int t297;
    int t295;
    float u300;
    float u301;
    int t304;
    int t302;
    float u307;
    float u308;
    int t311;
    int t309;
    float u367;
    float u368;
    float u369;
    float u371;
    int t373;
    int t374;
    int t375;
    float u378;
    float u379;
    float u382;
    float u383;
    int t572;
    float u386;
    int t389;
    int t387;
    float u391;
    int t394;
    int t392;
    float u397;
    int t400;
    int t398;
    float u402;
    int t405;
    int t403;
    float u408;
    float u409;
    float u411;
    float u412;
    float u414;
    float u415;
    int t418;
    int t416;
    float u420;
    float u421;
    int t424;
    int t422;
    float u426;
    float u428;
    float u429;
    int t432;
    int t430;
    float u435;
    float u455;
    float u456;
    int t459;
    int t457;
    float u467;
    int t470;
    int t468;
    float u472;
    int t475;
    int t473;
    float u479;
    int t482;
    int t480;
    float u484;
    int t487;
    int t485;
    float u489;
    float u490;
    int t493;
    int t491;
    float u495;
    float u496;
    int t499;
    int t497;
    float u502;
    float u503;
    int t506;
    int t504;
    float u509;
    float u510;
    int t513;
    int t511;
    float u531;
    int t534;
    int t532;
    float u536;
    int t539;
    int t537;
    float u541;
    float u542;
    int t545;
    int t543;
    float u547;
    float u548;
    int t551;
    int t549;
    float u587;
    int t590;
    int t588;
    float u592;
    int t595;
    int t593;
    float u598;
    int t601;
    int t599;
    float u603;
    int t606;
    int t604;
    float u608;
    float u609;
    int t612;
    int t610;
    float u614;
    float u615;
    int t618;
    int t616;
    float u626;
    int t629;
    int t627;
    float u631;
    int t634;
    int t632;
    float u636;
    float u637;
    int t640;
    int t638;
    float u642;
    float u643;
    int t646;
    int t644;
    float u649;
    float u650;
    int t653;
    int t651;
    float u656;
    float u657;
    int t660;
    int t658;
    int t701;
    int t352;
    int t334;
    int t216;
    int t114;
    int t89;
    float u101;
    float u102;
    int t211;
    int t167;
    float u178;
    int t179;
    float u206;
    int t207;
    int t329;
    float u273;
    int t274;
    int t313;
    float u324;
    int t325;
    int t683;
    int t565;
    int t463;
    int t438;
    float u450;
    float u451;
    int t560;
    int t516;
    float u527;
    int t528;
    float u555;
    int t556;
    int t678;
    float u622;
    int t623;
    int t662;
    float u673;
    int t674;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t2 = *(int *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB5C));
    u3 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u4 = (-u3);
    if (!(0.0f > u3)) {
        u4 = u3;
    }
    if (47.5400009f > u4) {
        u7 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
        u9 = (-u7);
        if (!(0.0f > u7)) {
            u9 = (*(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0)));
        }
        if (47.5400009f > u9) {
            u11 = *(float *)((a4 + 0xB00));
            u12 = *(float *)((a4 + 0xB9C));
            t15 = 0x1;
            if (u12 > 0.0f) {
            } else {
                t13 = 0x0;
                if (0.0f > u12) {
                    t13 = 0xFFFFFFFF;
                }
                t15 = t13;
            }
            cpuAimPointSet(a5, 0x2, ((float)t15 * 54.8499985f), (u11 * 118.849998f));
            t352 = (a5 + 0x1);
        } else {
            u18 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u19 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
            u20 = (-u18);
            if (!(0.0f > u18)) {
                u20 = u18;
            }
            u22 = (-u19);
            if (!(0.0f > u19)) {
                u22 = u19;
            }
            t24 = ((t1 * 0x160) + 0x8C2FC69C);
            t25 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            t26 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
            if (u20 > u22) {
                t24 = ((t2 * 0x160) + 0x8C2FC69C);
                t25 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
                t26 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            }
            u29 = *(float *)((t25 + 0xAF0));
            u30 = (-u29);
            if (!(0.0f > u29)) {
                u30 = u29;
            }
            if (!(23.7700005f > u30)) {
                u33 = *(float *)((t24 + 0x30));
                u34 = (-u33);
                if (!(0.0f > u33)) {
                    u34 = u33;
                }
                t223 = a5;
                if (0.25f > u34) {
                } else {
                    u37 = *(float *)((t24 + 0x30));
                    t40 = 0x1;
                    if (u37 > 0.0f) {
                    } else {
                        t38 = 0x0;
                        if (0.0f > u37) {
                            t38 = 0xFFFFFFFF;
                        }
                        t40 = t38;
                    }
                    u42 = *(float *)((a4 + 0xB00));
                    t45 = 0x1;
                    if (u42 > 0.0f) {
                    } else {
                        t43 = 0x0;
                        if (0.0f > u42) {
                            t43 = 0xFFFFFFFF;
                        }
                        t45 = t43;
                    }
                    if (t40 != (-t45)) {
                        u48 = *(float *)((a4 + 0xB9C));
                        t51 = 0x1;
                        if (u48 > 0.0f) {
                        } else {
                            t49 = 0x0;
                            if (0.0f > u48) {
                                t49 = 0xFFFFFFFF;
                            }
                            t51 = t49;
                        }
                        u53 = *(float *)((t25 + 0xAE8));
                        t56 = 0x1;
                        if (u53 > 0.0f) {
                        } else {
                            t54 = 0x0;
                            if (0.0f > u53) {
                                t54 = 0xFFFFFFFF;
                            }
                            t56 = t54;
                        }
                        if (t51 == t56) {
                            u59 = *(float *)((a4 + 0xB9C));
                            u60 = (-u59);
                            if (!(0.0f > u59)) {
                                u60 = u59;
                            }
                            u62 = *(float *)((t25 + 0xAE8));
                            u63 = (-u62);
                            if (!(0.0f > u62)) {
                                u63 = u62;
                            }
                            if (u60 > u63) {
                                u65 = *(float *)((a4 + 0xB00));
                                u66 = *(float *)((a4 + 0xB9C));
                                t69 = 0x1;
                                if (u66 > 0.0f) {
                                } else {
                                    t67 = 0x0;
                                    if (0.0f > u66) {
                                        t67 = 0xFFFFFFFF;
                                    }
                                    t69 = t67;
                                }
                                t89 = a5;
                                u101 = ((float)t69 * 54.8499985f);
                                u102 = (u65 * 59.4249992f);
                            } else {
                                u71 = *(float *)((a4 + 0xB00));
                                u72 = *(float *)((t25 + 0xAE8));
                                t75 = 0x1;
                                if (u72 > 0.0f) {
                                } else {
                                    t73 = 0x0;
                                    if (0.0f > u72) {
                                        t73 = 0xFFFFFFFF;
                                    }
                                    t75 = t73;
                                }
                                u77 = u72;
                                u77 = u77 + 20.0f * (float)t75;
                                cpuAimPointSet(a5, 0x1, u77, (u71 * 59.4249992f));
                                u79 = *(float *)((a4 + 0xB00));
                                u80 = *(float *)((t24 + 0x28));
                                t83 = 0x1;
                                if ((-u80) > 0.0f) {
                                } else {
                                    t81 = 0x0;
                                    if (0.0f > (-u80)) {
                                        t81 = 0xFFFFFFFF;
                                    }
                                    t83 = t81;
                                }
                                u86 = (*(float *)((t25 + 0xAE8)));
                                u86 = u86 + 20.0f * (float)t83;
                                t89 = (a5 + 0x1);
                                u101 = u86;
                                u102 = (u79 * 59.4249992f);
                            }
                            cpuAimPointSet(t89, 0x1, u101, u102);
                            t114 = (t89 + 0x1);
                        } else {
                            u106 = *(float *)((a4 + 0xB00));
                            u107 = *(float *)((a4 + 0xB9C));
                            t110 = 0x1;
                            if (u107 > 0.0f) {
                            } else {
                                t108 = 0x0;
                                if (0.0f > u107) {
                                    t108 = 0xFFFFFFFF;
                                }
                                t110 = t108;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t110 * 54.8499985f), (u106 * 11.8850002f));
                            t114 = (a5 + 0x1);
                        }
                        t216 = t114;
                    } else {
                        u118 = *(float *)((t25 + 0xAE8));
                        t121 = 0x1;
                        if (u118 > 0.0f) {
                        } else {
                            t119 = 0x0;
                            if (0.0f > u118) {
                                t119 = 0xFFFFFFFF;
                            }
                            t121 = t119;
                        }
                        u123 = *(float *)((t26 + 0xAE8));
                        t126 = 0x1;
                        if (u123 > 0.0f) {
                        } else {
                            t124 = 0x0;
                            if (0.0f > u123) {
                                t124 = 0xFFFFFFFF;
                            }
                            t126 = t124;
                        }
                        if (t121 == t126) {
                            u130 = *(float *)((t25 + 0xAE8));
                            t133 = 0x1;
                            if (u130 > 0.0f) {
                            } else {
                                t131 = 0x0;
                                if (0.0f > u130) {
                                    t131 = 0xFFFFFFFF;
                                }
                                t133 = t131;
                            }
                            u135 = *(float *)((a4 + 0xB9C));
                            t138 = 0x1;
                            if (u135 > 0.0f) {
                            } else {
                                t136 = 0x0;
                                if (0.0f > u135) {
                                    t136 = 0xFFFFFFFF;
                                }
                                t138 = t136;
                            }
                            if (t133 == t138) {
                                u140 = *(float *)((a4 + 0xB00));
                                u141 = *(float *)((a4 + 0xB9C));
                                t144 = 0x1;
                                if (u141 > 0.0f) {
                                } else {
                                    t142 = 0x0;
                                    if (0.0f > u141) {
                                        t142 = 0xFFFFFFFF;
                                    }
                                    t144 = t142;
                                }
                                t167 = a5;
                                u178 = (u140 * 118.849998f);
                                t179 = (-t144);
                            } else {
                                u146 = *(float *)((a4 + 0xB00));
                                u147 = *(float *)((a4 + 0xB9C));
                                t150 = 0x1;
                                if (u147 > 0.0f) {
                                } else {
                                    t148 = 0x0;
                                    if (0.0f > u147) {
                                        t148 = 0xFFFFFFFF;
                                    }
                                    t150 = t148;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t150 * 54.8499985f), (u146 * 59.4249992f));
                                u153 = *(float *)((a4 + 0xB00));
                                u154 = *(float *)((a4 + 0xB9C));
                                t157 = 0x1;
                                if (u154 > 0.0f) {
                                } else {
                                    t155 = 0x0;
                                    if (0.0f > u154) {
                                        t155 = 0xFFFFFFFF;
                                    }
                                    t157 = t155;
                                }
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t157 * 54.8499985f), (u153 * 118.849998f));
                                u160 = *(float *)((a4 + 0xB00));
                                u161 = *(float *)((a4 + 0xB9C));
                                t164 = 0x1;
                                if (u161 > 0.0f) {
                                } else {
                                    t162 = 0x0;
                                    if (0.0f > u161) {
                                        t162 = 0xFFFFFFFF;
                                    }
                                    t164 = t162;
                                }
                                t167 = ((a5 + 0x1) + 0x1);
                                u178 = (u160 * 118.849998f);
                                t179 = t164;
                            }
                            cpuAimPointSet(t167, 0x2, ((float)t179 * 54.8499985f), u178);
                            t211 = (t167 + 0x1);
                        } else {
                            u182 = *(float *)((t25 + 0xAE8));
                            t185 = 0x1;
                            if (u182 > 0.0f) {
                            } else {
                                t183 = 0x0;
                                if (0.0f > u182) {
                                    t183 = 0xFFFFFFFF;
                                }
                                t185 = t183;
                            }
                            u187 = *(float *)((a4 + 0xB9C));
                            t190 = 0x1;
                            if (u187 > 0.0f) {
                            } else {
                                t188 = 0x0;
                                if (0.0f > u187) {
                                    t188 = 0xFFFFFFFF;
                                }
                                t190 = t188;
                            }
                            if (t185 == t190) {
                                u192 = *(float *)((a4 + 0xB00));
                                u193 = *(float *)((a4 + 0xB9C));
                                t196 = 0x1;
                                if (u193 > 0.0f) {
                                } else {
                                    t194 = 0x0;
                                    if (0.0f > u193) {
                                        t194 = 0xFFFFFFFF;
                                    }
                                    t196 = t194;
                                }
                                u206 = (u192 * 118.849998f);
                                t207 = t196;
                            } else {
                                u198 = *(float *)((a4 + 0xB00));
                                u199 = *(float *)((a4 + 0xB9C));
                                t202 = 0x1;
                                if (u199 > 0.0f) {
                                } else {
                                    t200 = 0x0;
                                    if (0.0f > u199) {
                                        t200 = 0xFFFFFFFF;
                                    }
                                    t202 = t200;
                                }
                                u206 = (u198 * 118.849998f);
                                t207 = (-t202);
                            }
                            cpuAimPointSet(a5, 0x2, ((float)t207 * 54.8499985f), u206);
                            t211 = (a5 + 0x1);
                        }
                        t216 = t211;
                    }
                    t223 = t216;
                }
                t334 = t223;
            } else {
                u238 = *(float *)((t25 + 0xAE8));
                t241 = 0x1;
                if (u238 > 0.0f) {
                } else {
                    t239 = 0x0;
                    if (0.0f > u238) {
                        t239 = 0xFFFFFFFF;
                    }
                    t241 = t239;
                }
                u243 = *(float *)((t26 + 0xAE8));
                t246 = 0x1;
                if (u243 > 0.0f) {
                } else {
                    t244 = 0x0;
                    if (0.0f > u243) {
                        t244 = 0xFFFFFFFF;
                    }
                    t246 = t244;
                }
                if (t241 != t246) {
                    u249 = *(float *)((t25 + 0xAE8));
                    t252 = 0x1;
                    if (u249 > 0.0f) {
                    } else {
                        t250 = 0x0;
                        if (0.0f > u249) {
                            t250 = 0xFFFFFFFF;
                        }
                        t252 = t250;
                    }
                    u254 = *(float *)((a4 + 0xB9C));
                    t257 = 0x1;
                    if (u254 > 0.0f) {
                    } else {
                        t255 = 0x0;
                        if (0.0f > u254) {
                            t255 = 0xFFFFFFFF;
                        }
                        t257 = t255;
                    }
                    if (t252 == t257) {
                        u259 = *(float *)((a4 + 0xB00));
                        u260 = *(float *)((a4 + 0xB9C));
                        t263 = 0x1;
                        if (u260 > 0.0f) {
                        } else {
                            t261 = 0x0;
                            if (0.0f > u260) {
                                t261 = 0xFFFFFFFF;
                            }
                            t263 = t261;
                        }
                        u273 = (u259 * 118.849998f);
                        t274 = t263;
                    } else {
                        u265 = *(float *)((a4 + 0xB00));
                        u266 = *(float *)((a4 + 0xB9C));
                        t269 = 0x1;
                        if (u266 > 0.0f) {
                        } else {
                            t267 = 0x0;
                            if (0.0f > u266) {
                                t267 = 0xFFFFFFFF;
                            }
                            t269 = t267;
                        }
                        u273 = (u265 * 118.849998f);
                        t274 = (-t269);
                    }
                    cpuAimPointSet(a5, 0x2, ((float)t274 * 54.8499985f), u273);
                    t329 = (a5 + 0x1);
                } else {
                    u277 = *(float *)((t25 + 0xAE8));
                    t280 = 0x1;
                    if (u277 > 0.0f) {
                    } else {
                        t278 = 0x0;
                        if (0.0f > u277) {
                            t278 = 0xFFFFFFFF;
                        }
                        t280 = t278;
                    }
                    u282 = *(float *)((a4 + 0xB9C));
                    t285 = 0x1;
                    if (u282 > 0.0f) {
                    } else {
                        t283 = 0x0;
                        if (0.0f > u282) {
                            t283 = 0xFFFFFFFF;
                        }
                        t285 = t283;
                    }
                    if (t280 == t285) {
                        u287 = *(float *)((a4 + 0xB00));
                        u288 = *(float *)((a4 + 0xB9C));
                        t291 = 0x1;
                        if (u288 > 0.0f) {
                        } else {
                            t289 = 0x0;
                            if (0.0f > u288) {
                                t289 = 0xFFFFFFFF;
                            }
                            t291 = t289;
                        }
                        t313 = a5;
                        u324 = (u287 * 118.849998f);
                        t325 = (-t291);
                    } else {
                        u293 = *(float *)((a4 + 0xB00));
                        u294 = *(float *)((a4 + 0xB9C));
                        t297 = 0x1;
                        if (u294 > 0.0f) {
                        } else {
                            t295 = 0x0;
                            if (0.0f > u294) {
                                t295 = 0xFFFFFFFF;
                            }
                            t297 = t295;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t297 * 54.8499985f), (u293 * 59.4249992f));
                        u300 = *(float *)((a4 + 0xB00));
                        u301 = *(float *)((a4 + 0xB9C));
                        t304 = 0x1;
                        if (u301 > 0.0f) {
                        } else {
                            t302 = 0x0;
                            if (0.0f > u301) {
                                t302 = 0xFFFFFFFF;
                            }
                            t304 = t302;
                        }
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t304 * 54.8499985f), (u300 * 118.849998f));
                        u307 = *(float *)((a4 + 0xB00));
                        u308 = *(float *)((a4 + 0xB9C));
                        t311 = 0x1;
                        if (u308 > 0.0f) {
                        } else {
                            t309 = 0x0;
                            if (0.0f > u308) {
                                t309 = 0xFFFFFFFF;
                            }
                            t311 = t309;
                        }
                        t313 = ((a5 + 0x1) + 0x1);
                        u324 = (u307 * 118.849998f);
                        t325 = t311;
                    }
                    cpuAimPointSet(t313, 0x2, ((float)t325 * 54.8499985f), u324);
                    t329 = (t313 + 0x1);
                }
                t334 = t329;
            }
            t352 = t334;
        }
        t701 = t352;
    } else {
        u367 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u368 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
        u369 = (-u367);
        if (!(0.0f > u367)) {
            u369 = u367;
        }
        u371 = (-u368);
        if (!(0.0f > u368)) {
            u371 = u368;
        }
        t373 = ((t1 * 0x160) + 0x8C2FC69C);
        t374 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        t375 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
        if (u369 > u371) {
            t373 = ((t2 * 0x160) + 0x8C2FC69C);
            t374 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
            t375 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u378 = *(float *)((t374 + 0xAF0));
        u379 = (-u378);
        if (!(0.0f > u378)) {
            u379 = u378;
        }
        if (!(23.7700005f > u379)) {
            u382 = *(float *)((t373 + 0x30));
            u383 = (-u382);
            if (!(0.0f > u382)) {
                u383 = u382;
            }
            t572 = a5;
            if (0.25f > u383) {
            } else {
                u386 = *(float *)((t373 + 0x30));
                t389 = 0x1;
                if (u386 > 0.0f) {
                } else {
                    t387 = 0x0;
                    if (0.0f > u386) {
                        t387 = 0xFFFFFFFF;
                    }
                    t389 = t387;
                }
                u391 = *(float *)((a4 + 0xB00));
                t394 = 0x1;
                if (u391 > 0.0f) {
                } else {
                    t392 = 0x0;
                    if (0.0f > u391) {
                        t392 = 0xFFFFFFFF;
                    }
                    t394 = t392;
                }
                if (t389 != (-t394)) {
                    u397 = *(float *)((a4 + 0xB9C));
                    t400 = 0x1;
                    if (u397 > 0.0f) {
                    } else {
                        t398 = 0x0;
                        if (0.0f > u397) {
                            t398 = 0xFFFFFFFF;
                        }
                        t400 = t398;
                    }
                    u402 = *(float *)((t374 + 0xAE8));
                    t405 = 0x1;
                    if (u402 > 0.0f) {
                    } else {
                        t403 = 0x0;
                        if (0.0f > u402) {
                            t403 = 0xFFFFFFFF;
                        }
                        t405 = t403;
                    }
                    if (t400 == t405) {
                        u408 = *(float *)((a4 + 0xB9C));
                        u409 = (-u408);
                        if (!(0.0f > u408)) {
                            u409 = u408;
                        }
                        u411 = *(float *)((t374 + 0xAE8));
                        u412 = (-u411);
                        if (!(0.0f > u411)) {
                            u412 = u411;
                        }
                        if (u409 > u412) {
                            u414 = *(float *)((a4 + 0xB00));
                            u415 = *(float *)((a4 + 0xB9C));
                            t418 = 0x1;
                            if (u415 > 0.0f) {
                            } else {
                                t416 = 0x0;
                                if (0.0f > u415) {
                                    t416 = 0xFFFFFFFF;
                                }
                                t418 = t416;
                            }
                            t438 = a5;
                            u450 = ((float)t418 * 54.8499985f);
                            u451 = (u414 * 59.4249992f);
                        } else {
                            u420 = *(float *)((a4 + 0xB00));
                            u421 = *(float *)((t374 + 0xAE8));
                            t424 = 0x1;
                            if (u421 > 0.0f) {
                            } else {
                                t422 = 0x0;
                                if (0.0f > u421) {
                                    t422 = 0xFFFFFFFF;
                                }
                                t424 = t422;
                            }
                            u426 = u421;
                            u426 = u426 + 20.0f * (float)t424;
                            cpuAimPointSet(a5, 0x1, u426, (u420 * 59.4249992f));
                            u428 = *(float *)((a4 + 0xB00));
                            u429 = *(float *)((t373 + 0x28));
                            t432 = 0x1;
                            if ((-u429) > 0.0f) {
                            } else {
                                t430 = 0x0;
                                if (0.0f > (-u429)) {
                                    t430 = 0xFFFFFFFF;
                                }
                                t432 = t430;
                            }
                            u435 = (*(float *)((t374 + 0xAE8)));
                            u435 = u435 + 20.0f * (float)t432;
                            t438 = (a5 + 0x1);
                            u450 = u435;
                            u451 = (u428 * 59.4249992f);
                        }
                        cpuAimPointSet(t438, 0x1, u450, u451);
                        t463 = (t438 + 0x1);
                    } else {
                        u455 = *(float *)((a4 + 0xB00));
                        u456 = *(float *)((a4 + 0xB9C));
                        t459 = 0x1;
                        if (u456 > 0.0f) {
                        } else {
                            t457 = 0x0;
                            if (0.0f > u456) {
                                t457 = 0xFFFFFFFF;
                            }
                            t459 = t457;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t459 * 54.8499985f), (u455 * 11.8850002f));
                        t463 = (a5 + 0x1);
                    }
                    t565 = t463;
                } else {
                    u467 = *(float *)((t374 + 0xAE8));
                    t470 = 0x1;
                    if (u467 > 0.0f) {
                    } else {
                        t468 = 0x0;
                        if (0.0f > u467) {
                            t468 = 0xFFFFFFFF;
                        }
                        t470 = t468;
                    }
                    u472 = *(float *)((t375 + 0xAE8));
                    t475 = 0x1;
                    if (u472 > 0.0f) {
                    } else {
                        t473 = 0x0;
                        if (0.0f > u472) {
                            t473 = 0xFFFFFFFF;
                        }
                        t475 = t473;
                    }
                    if (t470 == t475) {
                        u479 = *(float *)((t374 + 0xAE8));
                        t482 = 0x1;
                        if (u479 > 0.0f) {
                        } else {
                            t480 = 0x0;
                            if (0.0f > u479) {
                                t480 = 0xFFFFFFFF;
                            }
                            t482 = t480;
                        }
                        u484 = *(float *)((a4 + 0xB9C));
                        t487 = 0x1;
                        if (u484 > 0.0f) {
                        } else {
                            t485 = 0x0;
                            if (0.0f > u484) {
                                t485 = 0xFFFFFFFF;
                            }
                            t487 = t485;
                        }
                        if (t482 == t487) {
                            u489 = *(float *)((a4 + 0xB00));
                            u490 = *(float *)((a4 + 0xB9C));
                            t493 = 0x1;
                            if (u490 > 0.0f) {
                            } else {
                                t491 = 0x0;
                                if (0.0f > u490) {
                                    t491 = 0xFFFFFFFF;
                                }
                                t493 = t491;
                            }
                            t516 = a5;
                            u527 = (u489 * 118.849998f);
                            t528 = (-t493);
                        } else {
                            u495 = *(float *)((a4 + 0xB00));
                            u496 = *(float *)((a4 + 0xB9C));
                            t499 = 0x1;
                            if (u496 > 0.0f) {
                            } else {
                                t497 = 0x0;
                                if (0.0f > u496) {
                                    t497 = 0xFFFFFFFF;
                                }
                                t499 = t497;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t499 * 54.8499985f), (u495 * 59.4249992f));
                            u502 = *(float *)((a4 + 0xB00));
                            u503 = *(float *)((a4 + 0xB9C));
                            t506 = 0x1;
                            if (u503 > 0.0f) {
                            } else {
                                t504 = 0x0;
                                if (0.0f > u503) {
                                    t504 = 0xFFFFFFFF;
                                }
                                t506 = t504;
                            }
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t506 * 54.8499985f), (u502 * 118.849998f));
                            u509 = *(float *)((a4 + 0xB00));
                            u510 = *(float *)((a4 + 0xB9C));
                            t513 = 0x1;
                            if (u510 > 0.0f) {
                            } else {
                                t511 = 0x0;
                                if (0.0f > u510) {
                                    t511 = 0xFFFFFFFF;
                                }
                                t513 = t511;
                            }
                            t516 = ((a5 + 0x1) + 0x1);
                            u527 = (u509 * 118.849998f);
                            t528 = t513;
                        }
                        cpuAimPointSet(t516, 0x2, ((float)t528 * 54.8499985f), u527);
                        t560 = (t516 + 0x1);
                    } else {
                        u531 = *(float *)((t374 + 0xAE8));
                        t534 = 0x1;
                        if (u531 > 0.0f) {
                        } else {
                            t532 = 0x0;
                            if (0.0f > u531) {
                                t532 = 0xFFFFFFFF;
                            }
                            t534 = t532;
                        }
                        u536 = *(float *)((a4 + 0xB9C));
                        t539 = 0x1;
                        if (u536 > 0.0f) {
                        } else {
                            t537 = 0x0;
                            if (0.0f > u536) {
                                t537 = 0xFFFFFFFF;
                            }
                            t539 = t537;
                        }
                        if (t534 == t539) {
                            u541 = *(float *)((a4 + 0xB00));
                            u542 = *(float *)((a4 + 0xB9C));
                            t545 = 0x1;
                            if (u542 > 0.0f) {
                            } else {
                                t543 = 0x0;
                                if (0.0f > u542) {
                                    t543 = 0xFFFFFFFF;
                                }
                                t545 = t543;
                            }
                            u555 = (u541 * 118.849998f);
                            t556 = t545;
                        } else {
                            u547 = *(float *)((a4 + 0xB00));
                            u548 = *(float *)((a4 + 0xB9C));
                            t551 = 0x1;
                            if (u548 > 0.0f) {
                            } else {
                                t549 = 0x0;
                                if (0.0f > u548) {
                                    t549 = 0xFFFFFFFF;
                                }
                                t551 = t549;
                            }
                            u555 = (u547 * 118.849998f);
                            t556 = (-t551);
                        }
                        cpuAimPointSet(a5, 0x2, ((float)t556 * 54.8499985f), u555);
                        t560 = (a5 + 0x1);
                    }
                    t565 = t560;
                }
                t572 = t565;
            }
            t683 = t572;
        } else {
            u587 = *(float *)((t374 + 0xAE8));
            t590 = 0x1;
            if (u587 > 0.0f) {
            } else {
                t588 = 0x0;
                if (0.0f > u587) {
                    t588 = 0xFFFFFFFF;
                }
                t590 = t588;
            }
            u592 = *(float *)((t375 + 0xAE8));
            t595 = 0x1;
            if (u592 > 0.0f) {
            } else {
                t593 = 0x0;
                if (0.0f > u592) {
                    t593 = 0xFFFFFFFF;
                }
                t595 = t593;
            }
            if (t590 != t595) {
                u598 = *(float *)((t374 + 0xAE8));
                t601 = 0x1;
                if (u598 > 0.0f) {
                } else {
                    t599 = 0x0;
                    if (0.0f > u598) {
                        t599 = 0xFFFFFFFF;
                    }
                    t601 = t599;
                }
                u603 = *(float *)((a4 + 0xB9C));
                t606 = 0x1;
                if (u603 > 0.0f) {
                } else {
                    t604 = 0x0;
                    if (0.0f > u603) {
                        t604 = 0xFFFFFFFF;
                    }
                    t606 = t604;
                }
                if (t601 == t606) {
                    u608 = *(float *)((a4 + 0xB00));
                    u609 = *(float *)((a4 + 0xB9C));
                    t612 = 0x1;
                    if (u609 > 0.0f) {
                    } else {
                        t610 = 0x0;
                        if (0.0f > u609) {
                            t610 = 0xFFFFFFFF;
                        }
                        t612 = t610;
                    }
                    u622 = (u608 * 118.849998f);
                    t623 = t612;
                } else {
                    u614 = *(float *)((a4 + 0xB00));
                    u615 = *(float *)((a4 + 0xB9C));
                    t618 = 0x1;
                    if (u615 > 0.0f) {
                    } else {
                        t616 = 0x0;
                        if (0.0f > u615) {
                            t616 = 0xFFFFFFFF;
                        }
                        t618 = t616;
                    }
                    u622 = (u614 * 118.849998f);
                    t623 = (-t618);
                }
                cpuAimPointSet(a5, 0x2, ((float)t623 * 54.8499985f), u622);
                t678 = (a5 + 0x1);
            } else {
                u626 = *(float *)((t374 + 0xAE8));
                t629 = 0x1;
                if (u626 > 0.0f) {
                } else {
                    t627 = 0x0;
                    if (0.0f > u626) {
                        t627 = 0xFFFFFFFF;
                    }
                    t629 = t627;
                }
                u631 = *(float *)((a4 + 0xB9C));
                t634 = 0x1;
                if (u631 > 0.0f) {
                } else {
                    t632 = 0x0;
                    if (0.0f > u631) {
                        t632 = 0xFFFFFFFF;
                    }
                    t634 = t632;
                }
                if (t629 == t634) {
                    u636 = *(float *)((a4 + 0xB00));
                    u637 = *(float *)((a4 + 0xB9C));
                    t640 = 0x1;
                    if (u637 > 0.0f) {
                    } else {
                        t638 = 0x0;
                        if (0.0f > u637) {
                            t638 = 0xFFFFFFFF;
                        }
                        t640 = t638;
                    }
                    t662 = a5;
                    u673 = (u636 * 118.849998f);
                    t674 = (-t640);
                } else {
                    u642 = *(float *)((a4 + 0xB00));
                    u643 = *(float *)((a4 + 0xB9C));
                    t646 = 0x1;
                    if (u643 > 0.0f) {
                    } else {
                        t644 = 0x0;
                        if (0.0f > u643) {
                            t644 = 0xFFFFFFFF;
                        }
                        t646 = t644;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t646 * 54.8499985f), (u642 * 59.4249992f));
                    u649 = *(float *)((a4 + 0xB00));
                    u650 = *(float *)((a4 + 0xB9C));
                    t653 = 0x1;
                    if (u650 > 0.0f) {
                    } else {
                        t651 = 0x0;
                        if (0.0f > u650) {
                            t651 = 0xFFFFFFFF;
                        }
                        t653 = t651;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t653 * 54.8499985f), (u649 * 118.849998f));
                    u656 = *(float *)((a4 + 0xB00));
                    u657 = *(float *)((a4 + 0xB9C));
                    t660 = 0x1;
                    if (u657 > 0.0f) {
                    } else {
                        t658 = 0x0;
                        if (0.0f > u657) {
                            t658 = 0xFFFFFFFF;
                        }
                        t660 = t658;
                    }
                    t662 = ((a5 + 0x1) + 0x1);
                    u673 = (u656 * 118.849998f);
                    t674 = t660;
                }
                cpuAimPointSet(t662, 0x2, ((float)t674 * 54.8499985f), u673);
                t678 = (t662 + 0x1);
            }
            t683 = t678;
        }
        t701 = t683;
    }
    return t701;
}

