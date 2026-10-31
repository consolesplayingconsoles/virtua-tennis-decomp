/* Straight-line functions with calls and guards (batch gen_kq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camViewToWorld(int, int, int, int, int);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int motionAdvance(int);
int motionBackup(int);
int motionIsEnd(int);
int motionRootAtFrame(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotLoad(int, int);
int muneSlotReset(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetTranslate(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlSin(int);
int nlTranslate(float, float, float);
extern int playerInit();
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int shopPutItemModel(int);
int uniformPreviewPut(int, int);
int uniformPreviewReset(int, int);
int uniformSlotLoad(int, int, int, int, int, int);
int uniformSlotReset(int, int);
Stk3 vecMake(float, float, float);
void shopPreviewExec(int a4, int a5, int a6, int a7);

void shopPreviewExec(int a4, int a5, int a6, int a7)
{
    float t2;
    int t12;
    int t21;
    int t22;
    int t31;
    float u41;
    int t50;
    int t51;
    int t56;
    float u81;
    int t89;
    int t99;
    float u146;
    int t154;
    int t159;
    int t160;
    int t238;
    int t242;
    int t247;
    int t251;
    int t269;
    int t274;
    int t276;
    int t279;
    int t298;
    int t300;
    int t304;
    int t306;
    int t309;
    int t312;
    float u8;
    int t76;
    int stk[32];

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = (a5 << 2);
    if ((*(int *)0x8C4220A8) != 0) {
        t2 = nlSin((*(int *)0x8C1D9CD4));
        if (!(0.0f > t2)) {
            u8 = (nlSin((*(int *)0x8C1D9CD4)));
        } else {
            u8 = (-(nlSin((*(int *)0x8C1D9CD4))));
        }
        *(unsigned int *)0x8C1D9CDC = (int)((nlSin((*(int *)0x8C1D9CD4))) * 2304.0f);
        t12 = *(int *)(((int)stk + 32));
        if (t12 != 4) {
            if (t12 == 5) {
                nlPushMatrix(0x0);
                nlTranslate(7.0f, 0.0f, -20.0f);
                nlRotateAY((*(int *)0x8C1D9CD8));
                nlObjPut(0xC9B2678);
                nlPopMatrix(0x1);
                *(unsigned int *)0x8C1D9CD8 = ((*(int *)0x8C1D9CD8) + 0x50);
            } else {
                if (t12 == 0) {
                    t21 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                    *(unsigned int *)(((int)stk + 48)) = t21;
                    t22 = *(int *)((t21 + 0x8));
                    if (((-(((((0x20000 & t22) == 0)) ? 1 : 0) - 1)) != 0) || ((-(((((t22 & 0x10000) == 0)) ? 1 : 0) - 1)) != 0)) {
                        *(unsigned int *)0x8C1D9CD4 = ((*(int *)0x8C1D9CD4) + (((-(((((0x20000 & t22) == 0)) ? 1 : 0) - 1)) - (-(((((t22 & 0x10000) == 0)) ? 1 : 0) - 1))) * 0x222));
                    }
                    nlPushMatrix(0x0);
                    nlTranslate(10.0f, 1.0f, 0.0f);
                    nlRotateAY((*(int *)0x8C1D9CD4));
                    t31 = ((~(((~a5) + 0x1) & 0x3)) + 0x1);
                    if ((int)a5 >= 0) {
                        t31 = (a5 & 0x3);
                    }
                    uniformPreviewPut(t31, a5);
                    nlPopMatrix(0x1);
                } else {
                    if (t12 == 1) {
                        if ((*(int *)(((*(int *)(((int)stk + 28))) + 0x8C1AFA64))) != 0) {
                            motionBackup(0x8C4220DC);
                            *(float *)0x8C4220F0 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                            motionAdvance(0x8C4220DC);
                            u41 = *(float *)0x8C4220E8;
                            *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
                            motionRootAtFrame(0x8C4220DC, (int)u41, 0x0, 0x0, (((int)stk + 28) + 0x28));
                            if ((*(int *)0x8C422E28) != 0) {
                                *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) * (-1.0f));
                            }
                            nlAddVector(0x8C422BC4, (((int)stk + 28) + 0x28));
                            t50 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                            *(unsigned int *)(((int)stk + 44)) = t50;
                            t51 = *(int *)((t50 + 0x8));
                            if (((-(((((0x20000 & t51) == 0)) ? 1 : 0) - 1)) != 0) || ((-(((((t51 & 0x10000) == 0)) ? 1 : 0) - 1)) != 0)) {
                                *(unsigned int *)0x8C1D9CD4 = ((*(int *)0x8C1D9CD4) + (((-(((((0x20000 & t51) == 0)) ? 1 : 0) - 1)) - (-(((((t51 & 0x10000) == 0)) ? 1 : 0) - 1))) * 0x222));
                            }
                            *(float *)0x8C422E10 = 0.0f;
                            *(float *)0x8C422E14 = 0.0f;
                            *(float *)0x8C4220D8 = 18.0f;
                            t56 = motionIsEnd(0x8C4220DC);
                            if (t56 != 0) {
                                *(int *)((int)stk + 24) = 0x8C422BC4;
                                *(Stk3 *)(0x8C422BC4) = vecMake(0.0f, 0.0f, 0.0f);
                            }
                            nlPushMatrix(0x0);
                            nlTranslate((*(float *)0x8C4220D8), -11.0f, 0.0f);
                            nlRotateAY((*(int *)0x8C1D9CD4));
                            nlPushMatrix(0x0);
                            nlTranslate((*(float *)0x8C422BC4), (*(float *)0x8C422BC8), (*(float *)0x8C422BCC));
                            playerPut(0x8C4220DC, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                            nlPopMatrix(0x1);
                            nlPopMatrix(0x1);
                        } else {
                            muneSlotLoad(0x0, a5);
                        }
                    } else {
                        if (t12 == 6) {
                            *(unsigned int *)0x8C423BD0 = 0x1;
                            if (((*(int *)((((*(int *)0x8C422D34) << 2) + 0x8C1AFA64))) != 0) && (t76 = *(int *)0x8C1D9CC8, t76 != 0)) {
                                motionBackup(0x8C4220DC);
                                *(float *)0x8C4220F0 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                                motionAdvance(0x8C4220DC);
                                u81 = *(float *)0x8C4220E8;
                                *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
                                motionRootAtFrame(0x8C4220DC, (int)u81, 0x0, 0x0, (((int)stk + 28) + 0x28));
                                if ((*(int *)0x8C422E28) != 0) {
                                    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) * (-1.0f));
                                }
                                nlAddVector(0x8C422BC4, (((int)stk + 28) + 0x28));
                                *(float *)0x8C422E10 = 0.0f;
                                *(float *)0x8C422E14 = 0.0f;
                                t89 = motionIsEnd(0x8C4220DC);
                                if (t89 != 0) {
                                    *(int *)((int)stk + 24) = 0x8C422BC4;
                                    *(Stk3 *)(0x8C422BC4) = vecMake(0.0f, 0.0f, 0.0f);
                                }
                            } else {
                                *(unsigned int *)0x8C423BD0 = 0x0;
                                *(unsigned int *)(((int)stk + 28)) = (*(int *)0x8C422D34);
                                if ((*(int *)((((*(int *)0x8C422D34) << 2) + 0x8C1AFA64))) == 0) {
                                    muneSlotLoad(0x0, (*(int *)(((int)stk + 28))));
                                } else {
                                    t99 = *(signed char *)0x8C2FBC83;
                                    if ((*(int *)0x8C1D9CCC) == 0) {
                                        if (t99 != -1) {
                                            uniformSlotReset(0x0, t99);
                                            *(unsigned int *)0x8C1D9CCC = 0x1;
                                        } else {
                                            *(unsigned int *)0x8C1D9CC8 = 0x1;
                                        }
                                    } else {
                                        uniformSlotLoad(0x0, t99, (*(int *)(((int)stk + 28))), 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
                                        if ((*(int *)((((*(signed char *)0x8C2FBC83) << 2) + 0x8C1AF8A4))) != 0) {
                                            *(unsigned int *)0x8C1D9CC8 = 0x1;
                                        }
                                    }
                                }
                            }
                            if ((*(int *)((((*(int *)0x8C423AAC) << 2) + 0x8C1AFA64))) == 0) {
                                *(unsigned int *)0x8C423BD0 = 0x0;
                                muneSlotLoad(0x1, (*(int *)0x8C423AAC));
                            } else {
                                motionBackup(0x8C422E54);
                                *(float *)0x8C422E68 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                                motionAdvance(0x8C422E54);
                                u146 = *(float *)0x8C422E60;
                                *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
                                motionRootAtFrame(0x8C422E54, (int)u146, 0x0, 0x0, (((int)stk + 28) + 0x28));
                                if ((*(int *)0x8C423BA0) != 0) {
                                    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) * (-1.0f));
                                }
                                nlAddVector(0x8C42393C, (((int)stk + 28) + 0x28));
                                *(float *)0x8C423B88 = 0.0f;
                                *(float *)0x8C423B8C = 0.0f;
                                t154 = motionIsEnd(0x8C422E54);
                                if (t154 != 0) {
                                    *(int *)((int)stk + 24) = 0x8C42393C;
                                    *(Stk3 *)(0x8C42393C) = vecMake(0.0f, 0.0f, 0.0f);
                                }
                            }
                            if ((*(int *)0x8C423BD0) != 0) {
                                t159 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                                *(unsigned int *)(((int)stk + 40)) = t159;
                                t160 = *(int *)((t159 + 0x8));
                                if (((-(((((0x20000 & t160) == 0)) ? 1 : 0) - 1)) != 0) || ((-(((((t160 & 0x10000) == 0)) ? 1 : 0) - 1)) != 0)) {
                                    *(unsigned int *)0x8C1D9CD4 = ((*(int *)0x8C1D9CD4) + (((-(((((0x20000 & t160) == 0)) ? 1 : 0) - 1)) - (-(((((t160 & 0x10000) == 0)) ? 1 : 0) - 1))) * 0x222));
                                }
                                nlPushMatrix(0x0);
                                nlTranslate(18.0f, -11.0f, 0.0f);
                                nlPushMatrix(0x0);
                                nlTranslate(3.0f, 0.0f, -3.0f);
                                nlRotateAY((*(int *)0x8C1D9CD4));
                                nlPushMatrix(0x0);
                                nlTranslate((*(float *)0x8C422BC4), (*(float *)0x8C422BC8), (*(float *)0x8C422BCC));
                                playerPut(0x8C4220DC, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                nlPopMatrix(0x1);
                                nlPopMatrix(0x1);
                                nlPushMatrix(0x0);
                                nlTranslate(-4.0f, 0.0f, 4.0f);
                                nlRotateAY((*(int *)0x8C1D9CD4));
                                nlPushMatrix(0x0);
                                nlTranslate((*(float *)0x8C42393C), (*(float *)0x8C423940), (*(float *)0x8C423944));
                                playerPut(0x8C422E54, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
                                nlPopMatrix(0x1);
                                nlPopMatrix(0x1);
                                nlPopMatrix(0x1);
                            }
                        } else {
                            if (t12 == 2) {
                                shopPutItemModel(a5);
                            }
                        }
                    }
                }
            }
        } else {
            nlPushMatrix(0x0);
            nlTranslate(6.0f, 0.0f, -20.0f);
            nlRotateAZ(0x1400);
            nlRotateAY((*(int *)0x8C1D9CD8));
            nlObjPut(0xC9B05A0);
            nlObjPutSetFadeColor(u8, u8, u8);
            nlObjPut(0xC9B0000);
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlGetTranslate((((int)stk + 28) + 0x1C));
            t238 = nlArcTan2((*(float *)(((int)stk + 56))), (-(*(float *)(((int)stk + 64)))));
            nlRotateAY((t238 << 2));
            t242 = nlArcTan2((*(float *)(((int)stk + 56))), (-(*(float *)(((int)stk + 64)))));
            nlRotateAX((t242 << 2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            *(int *)((int)stk + 12) = (((int)stk + 16) + 0x28);
            camViewToWorld(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12));
            t247 = nlArcTan2((*(float *)(((int)stk + 56))), (-(*(float *)(((int)stk + 64)))));
            nlRotateAY((t247 << 2));
            t251 = nlArcTan2((*(float *)(((int)stk + 56))), (-(*(float *)(((int)stk + 64)))));
            nlRotateAX((t251 << 2));
            nlObjPutCheapEnvMap(0xC9B1AF8);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(7.0f, (-1.0f), -5.0f);
            nlRotateAY(((*(int *)0x8C1D9CDC) - 1280));
            nlObjPut(0xC9B1AF8);
            nlPopMatrix(0x1);
            *(unsigned int *)0x8C1D9CD4 = ((*(int *)0x8C1D9CD4) + 0x300);
            *(unsigned int *)0x8C1D9CD8 = ((*(int *)0x8C1D9CD8) + 0x50);
        }
    } else {
        *(unsigned int *)0x8C1D9CE0 = 0x0;
        *(unsigned int *)0x8C1D9CDC = 0x0;
        *(unsigned int *)0x8C1D9CD8 = 0x0;
        *(unsigned int *)0x8C1D9CD4 = 0x0;
        *(float *)0x8C4220D8 = 0.0f;
        *(unsigned int *)(((int)stk + 36)) = (a5 * 0x6C);
        t269 = *(int *)(((int)stk + 32));
        if (t269 != 4) {
            if (t269 != 5) {
                if (t269 != 2) {
                    if (t269 != 0) {
                        if (t269 != 6) {
                            if (t269 == 1) {
                                *(unsigned int *)0x8C422D34 = a5;
                                t274 = ((int (*)(int, int, int, int))(playerInit))(0x8C4220DC, 0x2, a6, a7);
                                *(float *)0x8C422BF4 = 0.0f;
                                *(float *)0x8C422D6C = 0.0f;
                                *(unsigned short *)0x8C422BE2 = 0x0;
                                *(int *)((int)stk + 24) = 0x8C422BC4;
                                *(Stk3 *)(0x8C422BC4) = vecMake(0.0f, 0.0f, 0.0f);
                                *(unsigned int *)0x8C423BCC = 0x0;
                                *(float *)0x8C287A04 = 50.0f;
                                t276 = (*(int *)0x8C2873D0);
                                *(int *)((int)stk + 20) = t276;
                                t279 = (*(int *)((0x8C102424 + (*(int *)(((int)stk + 36))))));
                                *(int *)((int)stk + 16) = t279;
                                motionSet(0x8C4220DC, 0x115604, 0x1, 0x12755C, t279, t276, 1.0f);
                                if ((*(int *)(((*(int *)(((int)stk + 28))) + 0x8C1AFA64))) != 0) {
                                } else {
                                    fileLoadCloseSlot(0x0);
                                    muneSlotReset(0x0, a5);
                                }
                            }
                        } else {
                            *(unsigned int *)0x8C423BCC = 0x0;
                            *(float *)0x8C287A04 = 50.0f;
                            *(unsigned int *)(((int)stk + 32)) = 0x8C287D84;
                            *(unsigned int *)0x8C422D34 = (*(int *)0x8C2889DC);
                            t298 = ((int (*)(int, int, int, int))(playerInit))(0x8C4220DC, 0x2, a6, a7);
                            *(float *)0x8C422BF4 = 0.0f;
                            *(float *)0x8C422D6C = 0.0f;
                            *(unsigned short *)0x8C422BE2 = 0x0;
                            *(int *)((int)stk + 24) = 0x8C422BC4;
                            *(Stk3 *)(0x8C422BC4) = vecMake(0.0f, 0.0f, 0.0f);
                            *(unsigned int *)(((int)stk + 52)) = 0x8C2873D0;
                            t300 = (*(int *)0x8C2873D0);
                            *(int *)((int)stk + 20) = t300;
                            t304 = (*(int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0xC58))) * 0x6C) + 0x8C102424)));
                            *(int *)((int)stk + 16) = t304;
                            motionSet(0x8C4220DC, 0x115604, 0x1, 0x12755C, t304, t300, 1.0f);
                            *(unsigned int *)0x8C423AAC = a5;
                            t306 = ((int (*)(int, int))(playerInit))(0x8C422E54, 0x1);
                            *(float *)0x8C42396C = 0.0f;
                            *(float *)0x8C423AE4 = 0.0f;
                            *(unsigned short *)0x8C42395A = 0x0;
                            *(int *)((int)stk + 12) = 0x8C42393C;
                            *(Stk3 *)(0x8C42393C) = vecMake(0.0f, 0.0f, 0.0f);
                            t309 = (*(int *)(((*(int *)(((int)stk + 52))) + 0x0)));
                            *(int *)((int)stk + 8) = t309;
                            t312 = (*(int *)((((*(int *)(((int)stk + 36))) + 0x8C102424) + 0x0)));
                            *(int *)((int)stk + 4) = t312;
                            motionSet(0x8C422E54, 0x115604, 0x1, 0x12755C, t312, t309, 1.0f);
                            if ((*(int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0xC58))) << 2) + 0x8C1AFA64))) == 0) {
                                fileLoadCloseSlot(0x0);
                                muneSlotReset(0x0, (*(int *)0x8C2889DC));
                            }
                            *(unsigned int *)0x8C1D9CCC = 0x0;
                            if ((*(int *)(((*(int *)(((int)stk + 28))) + 0x8C1AFA64))) != 0) {
                            } else {
                                fileLoadCloseSlot(0x1);
                                muneSlotReset(0x1, a5);
                            }
                        }
                    } else {
                        if ((*(int *)0x8C4220AC) == 0) {
                            fileLoadCloseSlot(0x0);
                            fileLoadCloseSlot(0x1);
                            fileLoadCloseSlot(0x2);
                            fileLoadCloseSlot(0x3);
                            uniformPreviewReset(0x0, a5);
                            uniformPreviewReset(0x1, a5);
                            uniformPreviewReset(0x2, a5);
                            uniformPreviewReset(0x3, a5);
                            *(unsigned int *)0x8C4220AC = 0x1;
                        }
                        *(float *)0x8C287A04 = 30.0f;
                    }
                } else {
                    fileLoadClose();
                    shopPutItemModel(a5);
                }
            } else {
                *(float *)0x8C287A04 = 15.0f;
            }
        } else {
            *(float *)0x8C287A04 = 15.0f;
        }
    }
    *(unsigned int *)0x8C4220A8 = ((*(int *)0x8C4220A8) + 0x1);
}
