/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int cpuAimPointSet(int, int, float, float);
int cpuDblSignalDraw(int, float);
float cpuDistXZ(int, int);
extern int cursorBoxPut();
int entryGetColorId(int);
float hudFadeNearPlayers(int, int, int, int, int, int, int, int, int);
int hudPlayerPanelDraw(int, int, Stk3, float, float);
int hudScoreBoardDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int infoWinDraw(int, int, Stk3, float);
int kmSetSystemConfiguration(int);
int menuIconPut(int, Stk3);
int menuIconPutRot(int, int, Stk3);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlLoadDummyTexture(void);
int nlLocate(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int primVertexSet(int, int, int, int, int);
int segPlaneHit(int, int, int, int, int);
float shadowBallScale(float);
int shadowBallTrailLen(float);
float vecDist(Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int vecScale(int, int, int, int, int, float);
int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7);
int shadowBallDraw(int a4);
int menuItemDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int standBarDraw(int a4, int a5, int a6);
int cpuDblAimAddCourt2(int a4, int a5);
int hudMatchDraw(int a4, float f4);





int cpuDblAimAddCourt2(int a4, int a5)
{
    int t0;
    int t5;
    int t6;
    int t9;
    int t56;
    int t10;
    float u11;
    int t14;
    int t12;
    float u16;
    int t19;
    int t17;
    float u22;
    float u23;
    int t26;
    int t24;
    float u29;
    float u30;
    float u32;
    float u33;
    int t36;
    int t34;
    float u38;
    float u39;
    int t42;
    int t40;
    int t68;
    int t69;
    int t72;
    int t120;
    int t73;
    float u74;
    int t77;
    int t75;
    float u79;
    int t82;
    int t80;
    float u85;
    float u86;
    int t89;
    int t87;
    float u92;
    float u93;
    float u95;
    float u96;
    int t99;
    int t97;
    float u101;
    float u102;
    int t105;
    int t103;
    int t129;
    int t130;
    int t190;
    int t177;
    int t131;
    float u132;
    int t135;
    int t133;
    float u137;
    int t140;
    int t138;
    float u143;
    float u144;
    int t147;
    int t145;
    float u150;
    float u151;
    float u153;
    float u154;
    int t157;
    int t155;
    float u159;
    float u160;
    int t163;
    int t161;
    int t201;
    int t261;
    int t248;
    int t202;
    float u203;
    int t206;
    int t204;
    float u208;
    int t211;
    int t209;
    float u214;
    float u215;
    int t218;
    int t216;
    float u221;
    float u222;
    float u224;
    float u225;
    int t228;
    int t226;
    float u230;
    float u231;
    int t234;
    int t232;
    int t272;
    float u273;
    int t276;
    int t274;
    float u278;
    int t281;
    int t279;
    float u284;
    float u285;
    int t288;
    int t286;
    float u291;
    float u292;
    float u294;
    float u295;
    int t298;
    int t296;
    float u300;
    float u301;
    int t304;
    int t302;
    float t316;
    int t322;
    int t377;
    float u47;
    int t48;
    int t360;
    float u110;
    int t111;
    int t343;
    float u168;
    int t169;
    int t327;
    float u239;
    int t240;
    float u309;
    int t310;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) {
        t5 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        t6 = ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        if ((0x100 & (*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60)))) != 0) {
            t5 = ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            t6 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        }
        t9 = *(int *)((t5 + 0xC5C));
        t56 = a5;
        if (((int)t9 >= (int)0x9) && ((int)t9 <= (int)0xC)) {
            t10 = *(int *)((t6 + 0xB5C));
            u11 = *(float *)((a4 + 0xB9C));
            t14 = 0x1;
            if (u11 > 0.0f) {
            } else {
                t12 = 0x0;
                if (0.0f > u11) {
                    t12 = 0xFFFFFFFF;
                }
                t14 = t12;
            }
            u16 = *(float *)((t6 + 0xAE8));
            t19 = 0x1;
            if (u16 > 0.0f) {
            } else {
                t17 = 0x0;
                if (0.0f > u16) {
                    t17 = 0xFFFFFFFF;
                }
                t19 = t17;
            }
            if (t14 != t19) {
                u22 = *(float *)((a4 + 0xB00));
                u23 = *(float *)((a4 + 0xB9C));
                t26 = 0x1;
                if (u23 > 0.0f) {
                } else {
                    t24 = 0x0;
                    if (0.0f > u23) {
                        t24 = 0xFFFFFFFF;
                    }
                    t26 = t24;
                }
                cpuAimPointSet(a5, 0x1, ((float)t26 * 54.8499985f), (u22 * 118.849998f));
            } else {
                u29 = *(float *)((((t10 * 0x160) + 0x8C2FC69C) + 0x28));
                u30 = (-u29);
                if (!(0.0f > u29)) {
                    u30 = u29;
                }
                if (0.5f > u30) {
                    u32 = *(float *)((a4 + 0xB00));
                    u33 = *(float *)((a4 + 0xB9C));
                    t36 = 0x1;
                    if (u33 > 0.0f) {
                    } else {
                        t34 = 0x0;
                        if (0.0f > u33) {
                            t34 = 0xFFFFFFFF;
                        }
                        t36 = t34;
                    }
                    u47 = (u32 * 118.849998f);
                    t48 = (-t36);
                } else {
                    u38 = *(float *)((a4 + 0xB00));
                    u39 = *(float *)((((t10 * 0x160) + 0x8C2FC69C) + 0x28));
                    t42 = 0x1;
                    if (u39 > 0.0f) {
                    } else {
                        t40 = 0x0;
                        if (0.0f > u39) {
                            t40 = 0xFFFFFFFF;
                        }
                        t42 = t40;
                    }
                    u47 = (u38 * 118.849998f);
                    t48 = (-t42);
                }
                cpuAimPointSet(a5, 0x1, ((float)t48 * 54.8499985f), u47);
            }
            t56 = (a5 + 0x1);
        }
        t377 = t56;
    } else {
        if (((*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) {
            t68 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            t69 = ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            if ((0x100 & (*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60)))) != 0) {
                t68 = ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                t69 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            }
            t72 = *(int *)((t68 + 0xC5C));
            t120 = a5;
            if (((int)t72 >= (int)0x9) && ((int)t72 <= (int)0xC)) {
                t73 = *(int *)((t69 + 0xB5C));
                u74 = *(float *)((a4 + 0xB9C));
                t77 = 0x1;
                if (u74 > 0.0f) {
                } else {
                    t75 = 0x0;
                    if (0.0f > u74) {
                        t75 = 0xFFFFFFFF;
                    }
                    t77 = t75;
                }
                u79 = *(float *)((t69 + 0xAE8));
                t82 = 0x1;
                if (u79 > 0.0f) {
                } else {
                    t80 = 0x0;
                    if (0.0f > u79) {
                        t80 = 0xFFFFFFFF;
                    }
                    t82 = t80;
                }
                if (t77 != t82) {
                    u85 = *(float *)((a4 + 0xB00));
                    u86 = *(float *)((a4 + 0xB9C));
                    t89 = 0x1;
                    if (u86 > 0.0f) {
                    } else {
                        t87 = 0x0;
                        if (0.0f > u86) {
                            t87 = 0xFFFFFFFF;
                        }
                        t89 = t87;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t89 * 54.8499985f), (u85 * 118.849998f));
                } else {
                    u92 = *(float *)((((t73 * 0x160) + 0x8C2FC69C) + 0x28));
                    u93 = (-u92);
                    if (!(0.0f > u92)) {
                        u93 = u92;
                    }
                    if (0.5f > u93) {
                        u95 = *(float *)((a4 + 0xB00));
                        u96 = *(float *)((a4 + 0xB9C));
                        t99 = 0x1;
                        if (u96 > 0.0f) {
                        } else {
                            t97 = 0x0;
                            if (0.0f > u96) {
                                t97 = 0xFFFFFFFF;
                            }
                            t99 = t97;
                        }
                        u110 = (u95 * 118.849998f);
                        t111 = (-t99);
                    } else {
                        u101 = *(float *)((a4 + 0xB00));
                        u102 = *(float *)((((t73 * 0x160) + 0x8C2FC69C) + 0x28));
                        t105 = 0x1;
                        if (u102 > 0.0f) {
                        } else {
                            t103 = 0x0;
                            if (0.0f > u102) {
                                t103 = 0xFFFFFFFF;
                            }
                            t105 = t103;
                        }
                        u110 = (u101 * 118.849998f);
                        t111 = (-t105);
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t111 * 54.8499985f), u110);
                }
                t120 = (a5 + 0x1);
            }
            t360 = t120;
        } else {
            t129 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xC5C));
            if ((int)t129 < (int)0x9) {
                t130 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xC5C));
                t190 = a5;
                if ((int)t130 < (int)0x9) {
                } else {
                    t177 = a5;
                    if ((int)t130 > (int)0xC) {
                    } else {
                        t131 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
                        u132 = *(float *)((a4 + 0xB9C));
                        t135 = 0x1;
                        if (u132 > 0.0f) {
                        } else {
                            t133 = 0x0;
                            if (0.0f > u132) {
                                t133 = 0xFFFFFFFF;
                            }
                            t135 = t133;
                        }
                        u137 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        t140 = 0x1;
                        if (u137 > 0.0f) {
                        } else {
                            t138 = 0x0;
                            if (0.0f > u137) {
                                t138 = 0xFFFFFFFF;
                            }
                            t140 = t138;
                        }
                        if (t135 != t140) {
                            u143 = *(float *)((a4 + 0xB00));
                            u144 = *(float *)((a4 + 0xB9C));
                            t147 = 0x1;
                            if (u144 > 0.0f) {
                            } else {
                                t145 = 0x0;
                                if (0.0f > u144) {
                                    t145 = 0xFFFFFFFF;
                                }
                                t147 = t145;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t147 * 54.8499985f), (u143 * 118.849998f));
                        } else {
                            u150 = *(float *)((((t131 * 0x160) + 0x8C2FC69C) + 0x28));
                            u151 = (-u150);
                            if (!(0.0f > u150)) {
                                u151 = u150;
                            }
                            if (0.5f > u151) {
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
                                u168 = (u153 * 118.849998f);
                                t169 = (-t157);
                            } else {
                                u159 = *(float *)((a4 + 0xB00));
                                u160 = *(float *)((((t131 * 0x160) + 0x8C2FC69C) + 0x28));
                                t163 = 0x1;
                                if (u160 > 0.0f) {
                                } else {
                                    t161 = 0x0;
                                    if (0.0f > u160) {
                                        t161 = 0xFFFFFFFF;
                                    }
                                    t163 = t161;
                                }
                                u168 = (u159 * 118.849998f);
                                t169 = (-t163);
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t169 * 54.8499985f), u168);
                        }
                        t177 = (a5 + 0x1);
                    }
                    t190 = t177;
                }
                t343 = t190;
            } else {
                if ((int)t129 > (int)0xC) {
                    t201 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xC5C));
                    t261 = a5;
                    if ((int)t201 < (int)0x9) {
                    } else {
                        t248 = a5;
                        if ((int)t201 > (int)0xC) {
                        } else {
                            t202 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
                            u203 = *(float *)((a4 + 0xB9C));
                            t206 = 0x1;
                            if (u203 > 0.0f) {
                            } else {
                                t204 = 0x0;
                                if (0.0f > u203) {
                                    t204 = 0xFFFFFFFF;
                                }
                                t206 = t204;
                            }
                            u208 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            t211 = 0x1;
                            if (u208 > 0.0f) {
                            } else {
                                t209 = 0x0;
                                if (0.0f > u208) {
                                    t209 = 0xFFFFFFFF;
                                }
                                t211 = t209;
                            }
                            if (t206 != t211) {
                                u214 = *(float *)((a4 + 0xB00));
                                u215 = *(float *)((a4 + 0xB9C));
                                t218 = 0x1;
                                if (u215 > 0.0f) {
                                } else {
                                    t216 = 0x0;
                                    if (0.0f > u215) {
                                        t216 = 0xFFFFFFFF;
                                    }
                                    t218 = t216;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t218 * 54.8499985f), (u214 * 118.849998f));
                            } else {
                                u221 = *(float *)((((t202 * 0x160) + 0x8C2FC69C) + 0x28));
                                u222 = (-u221);
                                if (!(0.0f > u221)) {
                                    u222 = u221;
                                }
                                if (0.5f > u222) {
                                    u224 = *(float *)((a4 + 0xB00));
                                    u225 = *(float *)((a4 + 0xB9C));
                                    t228 = 0x1;
                                    if (u225 > 0.0f) {
                                    } else {
                                        t226 = 0x0;
                                        if (0.0f > u225) {
                                            t226 = 0xFFFFFFFF;
                                        }
                                        t228 = t226;
                                    }
                                    u239 = (u224 * 118.849998f);
                                    t240 = (-t228);
                                } else {
                                    u230 = *(float *)((a4 + 0xB00));
                                    u231 = *(float *)((((t202 * 0x160) + 0x8C2FC69C) + 0x28));
                                    t234 = 0x1;
                                    if (u231 > 0.0f) {
                                    } else {
                                        t232 = 0x0;
                                        if (0.0f > u231) {
                                            t232 = 0xFFFFFFFF;
                                        }
                                        t234 = t232;
                                    }
                                    u239 = (u230 * 118.849998f);
                                    t240 = (-t234);
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t240 * 54.8499985f), u239);
                            }
                            t248 = (a5 + 0x1);
                        }
                        t261 = t248;
                    }
                    t327 = t261;
                } else {
                    t272 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
                    u273 = *(float *)((a4 + 0xB9C));
                    t276 = 0x1;
                    if (u273 > 0.0f) {
                    } else {
                        t274 = 0x0;
                        if (0.0f > u273) {
                            t274 = 0xFFFFFFFF;
                        }
                        t276 = t274;
                    }
                    u278 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    t281 = 0x1;
                    if (u278 > 0.0f) {
                    } else {
                        t279 = 0x0;
                        if (0.0f > u278) {
                            t279 = 0xFFFFFFFF;
                        }
                        t281 = t279;
                    }
                    if (t276 != t281) {
                        u284 = *(float *)((a4 + 0xB00));
                        u285 = *(float *)((a4 + 0xB9C));
                        t288 = 0x1;
                        if (u285 > 0.0f) {
                        } else {
                            t286 = 0x0;
                            if (0.0f > u285) {
                                t286 = 0xFFFFFFFF;
                            }
                            t288 = t286;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t288 * 54.8499985f), (u284 * 118.849998f));
                    } else {
                        u291 = *(float *)((((t272 * 0x160) + 0x8C2FC69C) + 0x28));
                        u292 = (-u291);
                        if (!(0.0f > u291)) {
                            u292 = u291;
                        }
                        if (0.5f > u292) {
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
                            u309 = (u294 * 118.849998f);
                            t310 = (-t298);
                        } else {
                            u300 = *(float *)((a4 + 0xB00));
                            u301 = *(float *)((((t272 * 0x160) + 0x8C2FC69C) + 0x28));
                            t304 = 0x1;
                            if (u301 > 0.0f) {
                            } else {
                                t302 = 0x0;
                                if (0.0f > u301) {
                                    t302 = 0xFFFFFFFF;
                                }
                                t304 = t302;
                            }
                            u309 = (u300 * 118.849998f);
                            t310 = (-t304);
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t310 * 54.8499985f), u309);
                    }
                    t316 = cpuDistXZ((0xAE8 + ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84)), (0xAE8 + ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84)));
                    t322 = (a5 + 0x1);
                    if (!(t316 > 30.0f)) {
                    } else {
                        cpuAimPointSet((a5 + 0x1), 0x1, (((*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t322 = ((a5 + 0x1) + 0x1);
                    }
                    t327 = t322;
                }
                t343 = t327;
            }
            t360 = t343;
        }
        t377 = t360;
    }
    return t377;
}



