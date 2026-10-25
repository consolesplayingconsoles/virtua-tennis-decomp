/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ballBoyPoseIdle(int);
int camViewToWorld(int, int, int, int, int);
int endingFlyObjPut(int);
int endingTrophyPut(void);
int evEndingThrowSpawn(int);
int evFlashStart(float);
int lightOverrideAmbient(int, int);
int lineJudgePose(int);
int motionAdvanceSimple(int);
int motionBackup(int);
float motionGetFrame(int);
int netJudgePose(int);
int nlArcTan2(float, float);
int nlGetTranslate(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutSetGlobalAmbience(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int sndEndingCheer(int, int, int, int, int, int);
int sndIcsSet(int, int, int);
int sunPut(int, int, int, float);
int umpirePose(int);
int endingDraw(void);

int endingDraw(void)
{
    int t18;
    int t19;
    float t31;
    int t49;
    float u55;
    float u56;
    float u61;
    int t69;
    int t73;
    int t78;
    int t82;
    float t93;
    int t110;
    float t111;
    float t113;
    float u143;
    float t123;
    float u130;
    float u131;
    float u136;
    float t153;
    int t157;
    float u164;
    float u165;
    float u167;
    float u168;
    float t250;
    int t263;
    int t349;
    int t339;
    int t329;
    int t319;
    int t268;
    int t269;
    int t270;
    int t285;
    int t286;
    float u260;
    float u241;
    float u216;
    int t22;
    float u206;
    int t44;
    int t48;
    float u197;
    int t116;
    int t117;
    float u189;
    int stk[25];

    if ((*(int *)0x8C402CAC) == 3) {
        sndIcsSet(0x7F, 0x64, ((int)((int)((*(int *)0x8C402CA0) - 120) / (int)0xFFFFFFFE)));
        if ((*(int *)0x8C402CA0) == 119) {
            sndIcsSet(0x0, 0x0, 0x0);
        }
    }
    endingTrophyPut();
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0f, 0.0f);
    nlObjPut(0xCB4D5A0);
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C402CA0);
    t18 = *(int *)0x8C402CAC;
    t19 = *(int *)0x8C402CB4;
    if (t18 != 0) {
        if (t18 != 1) {
            if (t18 == 2) {
                if (((int)(*(int *)(((int)stk + 20))) >= (int)0xC8) && (t22 = *(int *)(((int)stk + 20)), (int)t22 <= (int)0xE4)) {
                    *(unsigned int *)0x8C40C184 = (int)((float)(*(int *)0x8C40C184) + -0.666666687f);
                }
                t31 = motionGetFrame((*(int *)0x8C402CB4));
                *(unsigned int *)0x8C407FB0 = (int)t31;
                *(unsigned int *)(((int)stk + 20)) = 0x8C2873EC;
                sunPut(((*(int *)0x8C2873EC) + 0xA064), (int)t31, 0xCB4F8B0, 1.0f);
                sunPut(((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) + 0xA064), (*(int *)0x8C407FB0), 0xCB59400, 1.0f);
                if ((*(int *)0x8C402CA0) != 0xEF) {
                } else {
                    *(float *)0x8C287A04 = 21.0f;
                }
                u216 = 1.0f;
            } else {
                if (t18 == 4) {
                    if (((*(int *)0x8C287ADC) == 4) && (t44 = *(int *)(((int)stk + 20)), t44 == 0x82)) {
                        *(unsigned int *)((t19 + 0xD14)) = 0x2;
                    }
                    if (((*(int *)0x8C287ADC) == 4) && (t48 = *(int *)0x8C402CA0, t48 == 0xA0)) {
                        t49 = *(int *)0x8C402CB8;
                        *(unsigned int *)(((t49 + 0xD10) + 0x4)) = 0x2;
                        *(unsigned int *)(((t49 + 0xD10) + 0x0)) = 0x2;
                    }
                    u55 = *(float *)0x8C40C2C8;
                    u56 = u55;
                    if (u55 > 255.0f) {
                        u56 = 255.0f;
                    }
                    u61 = u56;
                    if ((*(float *)0x8C38B7FC) > u56) {
                        u61 = (*(float *)0x8C38B7FC);
                    }
                    nlPushMatrix(0x0);
                    nlTranslate(7.17999983f, 20.1268997f, 0.0f);
                    nlPushMatrix(0x0);
                    nlGetTranslate((((int)stk + 20) + 0x14));
                    t69 = nlArcTan2((*(float *)(((int)stk + 40))), (-(*(float *)(((int)stk + 48)))));
                    nlRotateAY((t69 << 2));
                    t73 = nlArcTan2((*(float *)(((int)stk + 40))), (-(*(float *)(((int)stk + 48)))));
                    nlRotateAX((t73 << 2));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x14)); }
                    camViewToWorld(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x20));
                    t78 = nlArcTan2((*(float *)(((int)stk + 40))), (-(*(float *)(((int)stk + 48)))));
                    nlRotateAY((t78 << 2));
                    t82 = nlArcTan2((*(float *)(((int)stk + 40))), (-(*(float *)(((int)stk + 48)))));
                    nlRotateAX((t82 << 2));
                    nlObjPutCheapEnvMap(0xCB4F8B0);
                    nlPopMatrix(0x1);
                    nlObjPutSetGlobalAmbience((u61 / 255.0f));
                    nlObjPut(0xCB4F8B0);
                    nlObjPut(0xCB59400);
                    nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
                    nlPopMatrix(0x1);
                    if ((int)(*(int *)0x8C402CA0) < (int)0x50) {
                    } else {
                        t93 = nlRandom();
                        if ((int)(t93 * 3.0f) != 1) {
                        } else {
                            evFlashStart(100.0f);
                            sndEndingCheer(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
                        }
                    }
                    u206 = u61;
                } else {
                    if (t18 == 5) {
                        evEndingThrowSpawn(0x4);
                        evEndingThrowSpawn(0x5);
                        t110 = *(int *)0x8C402CB4;
                        if ((*(int *)0x8C287ADC) == 4) {
                            t111 = motionGetFrame(t110);
                            *(unsigned int *)0x8C407FB0 = (int)t111;
                            t116 = ((*(int *)0x8C2873EC) + 0x17284);
                            t117 = (int)t111;
                        } else {
                            t113 = motionGetFrame(t110);
                            *(unsigned int *)0x8C407FB0 = (int)t113;
                            t116 = ((*(int *)0x8C2873EC) + 0xEF30);
                            t117 = (int)t113;
                        }
                        sunPut(t116, t117, 0xCB4F8B0, 1.0f);
                        u143 = 1.0f;
                        if ((int)(*(int *)0x8C402CA0) < (int)0xE1) {
                        } else {
                            t123 = nlRandom();
                            if ((int)(t123 * 3.0f) == 1) {
                                evFlashStart(100.0f);
                                sndEndingCheer(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
                            }
                            u130 = *(float *)0x8C40C2C8;
                            u131 = u130;
                            if (u130 > 255.0f) {
                                u131 = 255.0f;
                            }
                            u136 = u131;
                            if ((*(float *)0x8C38B7FC) > u131) {
                                u136 = (*(float *)0x8C38B7FC);
                            }
                            lightOverrideAmbient(0x0, (int)u136);
                            u143 = u136;
                        }
                        u197 = u143;
                    } else {
                        if (t18 == 6) {
                            evEndingThrowSpawn(0x2);
                            evEndingThrowSpawn(0x3);
                            evEndingThrowSpawn(0x5);
                            evEndingThrowSpawn(0x7);
                            evEndingThrowSpawn(0x4);
                            evEndingThrowSpawn(0x6);
                            evEndingThrowSpawn(0xC);
                            t153 = motionGetFrame((*(int *)0x8C402CB4));
                            *(unsigned int *)0x8C407FB0 = (int)t153;
                            sunPut(((*(int *)0x8C2873EC) + 0x123B8), (int)t153, 0xCB4F8B0, 1.0f);
                            t157 = (int)((int)(int)((nlRandom()) * 7.0f) % (int)0x3);
                            if (t157 != 0) {
                                evFlashStart(100.0f);
                            }
                            u164 = *(float *)0x8C40C2C8;
                            u165 = u164;
                            if (u164 > 255.0f) {
                                u165 = 255.0f;
                            }
                            u167 = *(float *)0x8C38B7FC;
                            u168 = u165;
                            if (u167 > u165) {
                                u168 = u167;
                            }
                            lightOverrideAmbient(0x0, (int)u168);
                            u189 = u168;
                        } else {
                            if (t18 == 7) {
                                endingFlyObjPut(0x8C402CBC);
                                nlPushMatrix(0x0);
                                nlTranslate(0.0f, 0.0f, 0.0f);
                                nlObjPut((*(int *)((((*(int *)0x8C407FC8) << 2) + 0x8C1D36A4))));
                                nlPopMatrix(0x1);
                            }
                            u189 = 1.0f;
                        }
                        u197 = u189;
                    }
                    u206 = u197;
                }
                u216 = u206;
            }
            u241 = u216;
        } else {
            evEndingThrowSpawn(0x4);
            evEndingThrowSpawn(0x5);
            if ((*(int *)0x8C287ADC) == 2) {
                *(unsigned int *)0x8C407FB0 = (int)(motionGetFrame((*(int *)0x8C402CB4)));
            } else {
                *(unsigned int *)0x8C407FB0 = (int)(motionGetFrame((*(int *)0x8C402CB8)));
            }
            sunPut(((*(int *)0x8C2873EC) + 0x4B08), (*(int *)0x8C407FB0), 0xC5053E0, 1.0f);
            u241 = 1.0f;
        }
        u260 = u241;
    } else {
        if ((*(int *)(((int)stk + 20))) == 0xAA) {
            *(unsigned int *)((t19 + 0xD14)) = 0x1;
        }
        evEndingThrowSpawn(0x1);
        t250 = motionGetFrame((*(int *)0x8C402CB4));
        *(unsigned int *)0x8C407FB0 = (int)t250;
        sunPut(((*(int *)0x8C2873EC) + 0x1680), (int)t250, 0xC5053E0, 0.699999988f);
        u260 = 1.0f;
    }
    t263 = *(int *)0x8C402CAC;
    t349 = t263;
    if (t263 != 1) {
        t339 = t263;
        if (t263 != 3) {
            t329 = t263;
            if (t263 != 5) {
                t319 = 0x8C1891E8;
                if ((int)(*(int *)0x8C1891E8) > (int)0x9) {
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0x0;
                    *(float *)(((int)stk + 28)) = (u260 / 255.0f);
                    t268 = 0x8C0D4838;
                    t269 = 0x0;
                    t270 = 0x0;
                    for (;;) {
                        if ((unsigned int)t270 >= (unsigned int)0xCF8) {
                            break;
                        }
                        t269 = 0x8C014C34;
                        *(unsigned int *)(((int)stk + 32)) = (0x8C402D4C + t270);
                        t268 = (motionBackup(((0x8C402D4C + t270) + 0x4)));
                        t268 = (motionAdvanceSimple((0x8C37EA88 + t270)));
                        t268 = (nlPushMatrix(0x0));
                        t269 = (*(int *)(((int)stk + 20)));
                        t268 = 0x8C0D48B4;
                        t268 = (nlTranslate(-50.0f, 0.0f, ((float)t269 + (*(float *)((t268 + 0x0))))));
                        t268 = (nlRotateAY(0x4000));
                        t269 = 0x8C0F2680;
                        t268 = 0x8;
                        t268 = (nlObjPutSetGlobalAmbience((*(float *)((((int)stk + 20) + t268)))));
                        t268 = (nlObjPut(0xCB5AC18));
                        t269 = 0x8C0C87A0;
                        t268 = (ballBoyPoseIdle((*(int *)(((int)stk + 32)))));
                        t268 = (nlPopMatrix(0x1));
                        t269 = 0x67C;
                        t270 = (t270 + t269);
                        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x14);
                    }
                    *(float *)(((int)stk + 24)) = (u260 / 255.0f);
                    t285 = 0x4;
                    t286 = 0x0;
                    for (;;) {
                        if ((int)t286 >= (int)0x6) {
                            break;
                        }
                        *(unsigned int *)(((int)stk + 20)) = ((t286 * 0x654) + 0x8C403A44);
                        t285 = (motionBackup((((t286 * 0x654) + 0x8C403A44) + 0x4)));
                        t285 = (motionAdvanceSimple(((*(int *)(((int)stk + 20))) + 0x4)));
                        t285 = (nlPushMatrix(0x0));
                        t285 = (nlTranslate(-50.0f, 0.0f, ((float)(((t286 << 2) + t286) << 2) + -50.0f)));
                        t285 = (nlRotateAY(0x4000));
                        t285 = 0x4;
                        t285 = (nlObjPutSetGlobalAmbience((*(float *)((((int)stk + 20) + t285)))));
                        t285 = (nlObjPut(0xCB5AC18));
                        t285 = (lineJudgePose((*(int *)(((int)stk + 20)))));
                        t285 = (nlPopMatrix(0x1));
                        t286 = (t286 + 0x1);
                    }
                    motionBackup(0x8C40733C);
                    motionAdvanceSimple(0x8C40733C);
                    nlPushMatrix(0x0);
                    nlTranslate(-50.0f, 0.0f, 70.0f);
                    nlRotateAY(0x4000);
                    *(float *)(((int)stk + 36)) = (u260 / 255.0f);
                    nlObjPutSetGlobalAmbience((u260 / 255.0f));
                    nlObjPut(0xCB5AC18);
                    netJudgePose(0x8C407338);
                    nlPopMatrix(0x1);
                    motionBackup(0x8C407978);
                    motionAdvanceSimple(0x8C407978);
                    nlPushMatrix(0x0);
                    nlTranslate(-50.0f, 0.0f, 90.0f);
                    nlRotateAY(0x4000);
                    nlObjPutSetGlobalAmbience((*(float *)(((int)stk + 36))));
                    nlObjPut(0xCB5AC18);
                    umpirePose(0x8C407974);
                    t319 = (nlPopMatrix(0x1));
                }
                t329 = t319;
            }
            t339 = t329;
        }
        t349 = t339;
    }
    return t349;
}
