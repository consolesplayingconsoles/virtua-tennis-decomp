/* Straight-line functions with calls and guards (batch gen_ib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camViewToWorld(int, int, int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetTranslate(int);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int playerDrawNodeFacing(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int sklDrawNodeTrnsl(int a4, float f4, float f5, float f6, float f7, float f8, float f9);

int playerDrawNodeFacing(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t0;
    int t3;
    int t243;
    int t6;
    int t115;
    int t105;
    int t95;
    int t32;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t72;
    int t76;
    int t81;
    int t85;
    int t223;
    int t213;
    int t150;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t190;
    int t194;
    int t199;
    int t203;
    int t255;
    int t364;
    int t354;
    int t344;
    int t281;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t321;
    int t325;
    int t330;
    int t334;
    int t472;
    int t462;
    int t399;
    int t403;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t439;
    int t443;
    int t448;
    int t452;
    int t505;
    int t513;
    int t492;
    int t233;
    int t8;
    int t24;
    int t25;
    int t31;
    int t67;
    int t126;
    int t142;
    int t143;
    int t149;
    int t185;
    int t482;
    int t257;
    int t273;
    int t274;
    int t280;
    int t316;
    int t375;
    int t391;
    int t392;
    int t398;
    int t434;
    int stk[17];

    t0 = nlLoadMatrix((0xC0 + a4), f4, f5, f6, f7, f8, f9);
    if ((*(int *)0x8C294668) == 0) {
        t3 = *(int *)((a4 + 0x0));
        t243 = t3;
        if (t3 != 29) {
            if ((*(int *)0x8C294668) != 0) {
                t6 = *(int *)((a4 + 0x0));
                t115 = t6;
                if (t6 != 7) {
                    t105 = t6;
                    if (((*(int *)0x8C29466C) == 0) && (t8 = *(int *)((a4 + 0x0)), (unsigned int)t8 > (unsigned int)0x1D)) {
                    } else {
                        t95 = 0x8C29466C;
                        if (((*(int *)0x8C29466C) != 0) && ((t24 = *(int *)((a4 + 0x0)), (unsigned int)t24 >= (unsigned int)0x1A) && (t25 = *(int *)((a4 + 0x0)), (unsigned int)t25 <= (unsigned int)0x1C))) {
                        } else {
                            if (((int)(*(int *)((a4 + 0x3C))) > 0) && (t31 = *(int *)((a4 + 0x38)), t31 != 0)) {
                                t32 = *(int *)((a4 + 0x38));
                                nlPushMatrix(0x0);
                                nlQuickInvertMatrix();
                                nlMultiMatrix((0xC0 + t32));
                                t36 = *(int *)((a4 + 0x3C));
                                *(unsigned int *)(((int)stk + 20)) = t36;
                                if ((int)t36 > 0) {
                                    t37 = 0x0;
                                    t38 = 0x0;
                                    for (;;) {
                                        t39 = *(int *)((t32 + 0x4));
                                        t40 = *(int *)((a4 + 0x4));
                                        t41 = *(int *)((((a4 + 0x40) + t38) + 0x0));
                                        t42 = *(int *)((((0x80 + a4) + t38) + 0x0));
                                        nlCalcPoint((t41 + t39), (t40 + t42));
                                        nlCalcVector(((t41 + t39) + 0xC), ((t40 + t42) + 0xC));
                                        t37 = (t37 + 0x1);
                                        *(unsigned int *)(((t40 + t42) + 0x0)) = ((*(int *)(((t40 + t42) + 0x0))) | 0x1);
                                        t38 = (t38 + 0x4);
                                        if ((int)t37 >= (int)(*(int *)(((int)stk + 20)))) {
                                            break;
                                        }
                                    }
                                }
                                nlPopMatrix(0x1);
                            }
                            if (((*(int *)0x8C294668) == 0) && (t67 = *(int *)((a4 + 0x0)), t67 == 7)) {
                                nlPushMatrix(0x0);
                                nlGetTranslate((((int)stk + 20) + 0x4));
                                t72 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                                nlRotateAY((((t72 << 2) << 2) << 1));
                                t76 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                                nlRotateAX((((t76 << 2) << 2) << 1));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x4)); }
                                *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
                                camViewToWorld(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                                t81 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                                nlRotateAY((((t81 << 2) << 2) << 1));
                                t85 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                                nlRotateAX((((t85 << 2) << 2) << 1));
                                nlObjPutCheapEnvMap(0xC715568);
                                nlPopMatrix(0x1);
                            }
                            t95 = (nlObjPut((*(int *)((a4 + 0x4)))));
                        }
                        t105 = t95;
                    }
                    t115 = t105;
                }
                t233 = t115;
            } else {
                t223 = t3;
                if (((*(int *)0x8C29466C) == 0) && (t126 = *(int *)((a4 + 0x0)), (unsigned int)t126 > (unsigned int)0x1D)) {
                } else {
                    t213 = 0x8C29466C;
                    if (((*(int *)0x8C29466C) != 0) && ((t142 = *(int *)((a4 + 0x0)), (unsigned int)t142 >= (unsigned int)0x1A) && (t143 = *(int *)((a4 + 0x0)), (unsigned int)t143 <= (unsigned int)0x1C))) {
                    } else {
                        if (((int)(*(int *)((a4 + 0x3C))) > 0) && (t149 = *(int *)((a4 + 0x38)), t149 != 0)) {
                            t150 = *(int *)((a4 + 0x38));
                            nlPushMatrix(0x0);
                            nlQuickInvertMatrix();
                            nlMultiMatrix((0xC0 + t150));
                            t154 = *(int *)((a4 + 0x3C));
                            *(unsigned int *)(((int)stk + 20)) = t154;
                            if ((int)t154 > 0) {
                                t155 = 0x0;
                                t156 = 0x0;
                                for (;;) {
                                    t157 = *(int *)((t150 + 0x4));
                                    t158 = *(int *)((a4 + 0x4));
                                    t159 = *(int *)((((a4 + 0x40) + t156) + 0x0));
                                    t160 = *(int *)((((0x80 + a4) + t156) + 0x0));
                                    nlCalcPoint((t159 + t157), (t158 + t160));
                                    nlCalcVector(((t159 + t157) + 0xC), ((t158 + t160) + 0xC));
                                    t155 = (t155 + 0x1);
                                    *(unsigned int *)(((t158 + t160) + 0x0)) = ((*(int *)(((t158 + t160) + 0x0))) | 0x1);
                                    t156 = (t156 + 0x4);
                                    if ((int)t155 >= (int)(*(int *)(((int)stk + 20)))) {
                                        break;
                                    }
                                }
                            }
                            nlPopMatrix(0x1);
                        }
                        if (((*(int *)0x8C294668) == 0) && (t185 = *(int *)((a4 + 0x0)), t185 == 7)) {
                            nlPushMatrix(0x0);
                            nlGetTranslate((((int)stk + 20) + 0x4));
                            t190 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAY((((t190 << 2) << 2) << 1));
                            t194 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAX((((t194 << 2) << 2) << 1));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x4)); }
                            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
                            camViewToWorld(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            t199 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAY((((t199 << 2) << 2) << 1));
                            t203 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAX((((t203 << 2) << 2) << 1));
                            nlObjPutCheapEnvMap(0xC715568);
                            nlPopMatrix(0x1);
                        }
                        t213 = (nlObjPut((*(int *)((a4 + 0x4)))));
                    }
                    t223 = t213;
                }
                t233 = t223;
            }
            t243 = t233;
        }
        t492 = t243;
    } else {
        if ((*(int *)0x8C294668) != 0) {
            t255 = *(int *)((a4 + 0x0));
            t364 = t255;
            if (t255 != 7) {
                t354 = t255;
                if (((*(int *)0x8C29466C) == 0) && (t257 = *(int *)((a4 + 0x0)), (unsigned int)t257 > (unsigned int)0x1D)) {
                } else {
                    t344 = 0x8C29466C;
                    if (((*(int *)0x8C29466C) != 0) && ((t273 = *(int *)((a4 + 0x0)), (unsigned int)t273 >= (unsigned int)0x1A) && (t274 = *(int *)((a4 + 0x0)), (unsigned int)t274 <= (unsigned int)0x1C))) {
                    } else {
                        if (((int)(*(int *)((a4 + 0x3C))) > 0) && (t280 = *(int *)((a4 + 0x38)), t280 != 0)) {
                            t281 = *(int *)((a4 + 0x38));
                            nlPushMatrix(0x0);
                            nlQuickInvertMatrix();
                            nlMultiMatrix((0xC0 + t281));
                            t285 = *(int *)((a4 + 0x3C));
                            *(unsigned int *)(((int)stk + 20)) = t285;
                            if ((int)t285 > 0) {
                                t286 = 0x0;
                                t287 = 0x0;
                                for (;;) {
                                    t288 = *(int *)((t281 + 0x4));
                                    t289 = *(int *)((a4 + 0x4));
                                    t290 = *(int *)((((a4 + 0x40) + t287) + 0x0));
                                    t291 = *(int *)((((0x80 + a4) + t287) + 0x0));
                                    nlCalcPoint((t290 + t288), (t289 + t291));
                                    nlCalcVector(((t290 + t288) + 0xC), ((t289 + t291) + 0xC));
                                    t286 = (t286 + 0x1);
                                    *(unsigned int *)(((t289 + t291) + 0x0)) = ((*(int *)(((t289 + t291) + 0x0))) | 0x1);
                                    t287 = (t287 + 0x4);
                                    if ((int)t286 >= (int)(*(int *)(((int)stk + 20)))) {
                                        break;
                                    }
                                }
                            }
                            nlPopMatrix(0x1);
                        }
                        if (((*(int *)0x8C294668) == 0) && (t316 = *(int *)((a4 + 0x0)), t316 == 7)) {
                            nlPushMatrix(0x0);
                            nlGetTranslate((((int)stk + 20) + 0x4));
                            t321 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAY((((t321 << 2) << 2) << 1));
                            t325 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAX((((t325 << 2) << 2) << 1));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x4)); }
                            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
                            camViewToWorld(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            t330 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAY((((t330 << 2) << 2) << 1));
                            t334 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                            nlRotateAX((((t334 << 2) << 2) << 1));
                            nlObjPutCheapEnvMap(0xC715568);
                            nlPopMatrix(0x1);
                        }
                        t344 = (nlObjPut((*(int *)((a4 + 0x4)))));
                    }
                    t354 = t344;
                }
                t364 = t354;
            }
            t482 = t364;
        } else {
            t472 = t0;
            if (((*(int *)0x8C29466C) == 0) && (t375 = *(int *)((a4 + 0x0)), (unsigned int)t375 > (unsigned int)0x1D)) {
            } else {
                t462 = 0x8C29466C;
                if (((*(int *)0x8C29466C) != 0) && ((t391 = *(int *)((a4 + 0x0)), (unsigned int)t391 >= (unsigned int)0x1A) && (t392 = *(int *)((a4 + 0x0)), (unsigned int)t392 <= (unsigned int)0x1C))) {
                } else {
                    if (((int)(*(int *)((a4 + 0x3C))) > 0) && (t398 = *(int *)((a4 + 0x38)), t398 != 0)) {
                        t399 = *(int *)((a4 + 0x38));
                        nlPushMatrix(0x0);
                        nlQuickInvertMatrix();
                        nlMultiMatrix((0xC0 + t399));
                        t403 = *(int *)((a4 + 0x3C));
                        *(unsigned int *)(((int)stk + 20)) = t403;
                        if ((int)t403 > 0) {
                            t404 = 0x0;
                            t405 = 0x0;
                            for (;;) {
                                t406 = *(int *)((t399 + 0x4));
                                t407 = *(int *)((a4 + 0x4));
                                t408 = *(int *)((((a4 + 0x40) + t405) + 0x0));
                                t409 = *(int *)((((0x80 + a4) + t405) + 0x0));
                                nlCalcPoint((t408 + t406), (t407 + t409));
                                nlCalcVector(((t408 + t406) + 0xC), ((t407 + t409) + 0xC));
                                t404 = (t404 + 0x1);
                                *(unsigned int *)(((t407 + t409) + 0x0)) = ((*(int *)(((t407 + t409) + 0x0))) | 0x1);
                                t405 = (t405 + 0x4);
                                if ((int)t404 >= (int)(*(int *)(((int)stk + 20)))) {
                                    break;
                                }
                            }
                        }
                        nlPopMatrix(0x1);
                    }
                    if (((*(int *)0x8C294668) == 0) && (t434 = *(int *)((a4 + 0x0)), t434 == 7)) {
                        nlPushMatrix(0x0);
                        nlGetTranslate((((int)stk + 20) + 0x4));
                        t439 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                        nlRotateAY((((t439 << 2) << 2) << 1));
                        t443 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                        nlRotateAX((((t443 << 2) << 2) << 1));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x4)); }
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
                        camViewToWorld(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                        t448 = nlArcTan2((*(float *)(((int)stk + 24))), (-(*(float *)(((int)stk + 32)))));
                        nlRotateAY((((t448 << 2) << 2) << 1));
                        t452 = nlArcTan2((*(float *)(((int)stk + 28))), (-(*(float *)(((int)stk + 32)))));
                        nlRotateAX((((t452 << 2) << 2) << 1));
                        nlObjPutCheapEnvMap(0xC715568);
                        nlPopMatrix(0x1);
                    }
                    t462 = (nlObjPut((*(int *)((a4 + 0x4)))));
                }
                t472 = t462;
            }
            t482 = t472;
        }
        t492 = t482;
    }
    t505 = t492;
    if ((*(int *)((a4 + 0x2C))) != 0) {
        t505 = (((int (*)(int, int, int, int, int, int))(playerDrawNodeFacing))((*(int *)((a4 + 0x2C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4)));
    }
    t513 = t505;
    if ((*(int *)((a4 + 0x30))) != 0) {
        t513 = (((int (*)(int, int, int, int, int, int))(playerDrawNodeFacing))((*(int *)((a4 + 0x30))), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4)));
    }
    return t513;
}

int sklDrawNodeTrnsl(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t6;
    int t14;
    int t15;
    int t17;
    int t30;
    int t33;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;

    t6 = a4;
    for (;;) {
        nlLoadMatrix((0xC0 + t6), f4, f5, f6, f7, f8, f9);
        if (((int)(*(int *)((t6 + 0x3C))) > 0) && (t9 = *(int *)((t6 + 0x38)), t9 != 0)) {
            t2 = (*(int *)((t6 + 0x38)));
            nlPushMatrix(0x0);
            nlQuickInvertMatrix();
            nlMultiMatrix((0xC0 + t2));
            t14 = *(int *)((t6 + 0x3C));
            t3 = 0x0;
            t5 = 0x0;
            if ((int)t14 > 0) {
                for (;;) {
                    t15 = *(int *)((t2 + 0x4));
                    t4 = (*(int *)((t6 + 0x4)));
                    t17 = *(int *)((((t6 + 0x40) + t5) + 0x0));
                    t4 = (t4 + (*(int *)((((0x80 + t6) + t5) + 0x0))));
                    t0 = (t17 + t15);
                    t1 = t4;
                    t1 = (t1 + 0xC);
                    t0 = (t0 + 0xC);
                    nlCalcPoint((t17 + t15), t4);
                    nlCalcVector(t0, t1);
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) | 0x1);
                    t5 = (t5 + 0x4);
                    if ((int)t3 >= (int)t14) {
                        break;
                    }
                }
            }
            nlPopMatrix(0x1);
        }
        t30 = *(int *)((t6 + 0x2C));
        t33 = (nlObjPutTrnsl((*(int *)((t6 + 0x4))), f4));
        if (t30 != 0) {
            t33 = (((int (*)(int, float))(sklDrawNodeTrnsl))((*(int *)((t6 + 0x2C))), f4));
        }
        if ((*(int *)((t6 + 0x30))) != 0) {
            t6 = (*(int *)((t6 + 0x30)));
            continue;
        }
        break;
    }
    return t33;
}
