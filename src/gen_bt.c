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

int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7)
{
    int t0;
    int t21;
    int t15;
    float u28;
    int t30;
    float u32;
    float u36;
    float u40;
    float u45;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    float u72;
    int t75;
    int t77;
    int t79;
    int t81;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    float u92;
    float u93;
    float u94;
    int t144;
    int t18;
    int t12;
    int t57;
    float u60;
    float u61;
    float u62;
    float u54;
    float u49;
    int stk[18];

    t0 = *(int *)0x8C424410;
    *(unsigned int *)(((int)stk + 12)) = (((a5 + a6) + a7) + t0);
    t21 = (((((a4 + a5) + a6) + a7) + t0) + ((((a4 + a5) + a6) + a7) + t0));
    if ((*(int *)0x8C42440C) == 3) {
    } else {
        if ((*(int *)0x8C424250) == 0) {
            t18 = (*(int *)(((int)stk + 12)));
        } else {
            t15 = (((a4 + a5) + a7) + t0);
            if ((*(int *)0x8C424250) == 2) {
            } else {
                if ((*(int *)0x8C424250) == 4) {
                    t12 = (((a4 + a5) + a6) + a7);
                }
                t15 = t12;
            }
            t18 = t15;
        }
        t21 = t18;
    }
    *(unsigned int *)0x8C42423C = (t21 << 2);
    *(float *)(((int)stk + 4)) = ((float)a4 * 100.0f);
    *(float *)(((int)stk + 8)) = ((float)t0 * 100.0f);
    if ((*(int *)0x8C42440C) == 3) {
        u28 = *(float *)(((int)stk + 4));
        t30 = (int)((unsigned int)((int)((unsigned int)t21 + (unsigned int)0x0)) + ((((int)0x0 > (int)t21)) ? 1u : 0u));
        *(float *)0x8C424254 = (u28 / (float)(t30 >> 1));
        *(float *)0x8C424258 = (((float)a5 * 100.0f) / (float)(t30 >> 1));
        *(float *)0x8C42425C = (((float)a6 * 100.0f) / (float)(t30 >> 1));
        *(float *)0x8C424260 = (((float)a7 * 100.0f) / (float)(t30 >> 1));
        u32 = *(float *)(((int)stk + 8));
        *(float *)0x8C424264 = (u32 / (float)(t30 >> 1));
        t57 = (t30 >> 1);
        u60 = (u28 / (float)(t30 >> 1));
        u61 = (u32 / (float)(t30 >> 1));
        u62 = (float)(t30 >> 1);
    } else {
        if ((*(int *)0x8C424250) == 0) {
            *(float *)0x8C424254 = 0.0f;
            *(float *)0x8C424258 = (((float)a5 * 100.0f) / (float)t21);
            *(float *)0x8C42425C = (((float)a6 * 100.0f) / (float)t21);
            *(float *)0x8C424260 = (((float)a7 * 100.0f) / (float)t21);
            u36 = *(float *)(((int)stk + 8));
            *(float *)0x8C424264 = (u36 / (float)t21);
            u54 = (u36 / (float)t21);
        } else {
            if ((*(int *)0x8C424250) == 2) {
                *(float *)0x8C424254 = ((*(float *)(((int)stk + 4))) / (float)t21);
                *(float *)0x8C424258 = (((float)a5 * 100.0f) / (float)t21);
                *(float *)0x8C42425C = 0.0f;
                *(float *)0x8C424260 = (((float)a7 * 100.0f) / (float)t21);
                u40 = *(float *)(((int)stk + 8));
                *(float *)0x8C424264 = (u40 / (float)t21);
                u49 = (u40 / (float)t21);
            } else {
                u45 = ((float)a4 * 100.0f);
                if ((*(int *)0x8C424250) == 4) {
                    *(float *)0x8C424254 = ((*(float *)(((int)stk + 4))) / (float)t21);
                    *(float *)0x8C424258 = (((float)a5 * 100.0f) / (float)t21);
                    *(float *)0x8C42425C = (((float)a6 * 100.0f) / (float)t21);
                    *(float *)0x8C424260 = (((float)a7 * 100.0f) / (float)t21);
                    *(float *)0x8C424264 = 0.0f;
                    u45 = (((float)a7 * 100.0f) / (float)t21);
                }
                u49 = u45;
            }
            u54 = u49;
        }
        t57 = t21;
        u60 = (float)t21;
        u61 = u54;
        u62 = 100.0f;
    }
    if ((*(int *)0x8C424460) != 0) {
        t67 = *(int *)0x8C42440C;
        if (t67 == 3) {
            t68 = t67;
            t69 = a5;
            t70 = 0x1;
            t71 = a7;
            u72 = u61;
            for (;;) {
                if ((unsigned int)t70 >= (unsigned int)(*(int *)0x8C424240)) {
                    break;
                }
                t71 = 0x8C42420C;
                t68 = 0x10;
                t71 = (t71 + 0x38);
                u72 = (*(float *)((t71 + t68)));
                t69 = (t70 * 0x38);
                t75 = t71;
                t71 = 0x8C42420C;
                t71 = (t71 + 0x38);
                *(float *)(((t75 + t69) + t68)) = u72;
                t68 = 0x14;
                u72 = (*(float *)((t71 + t68)));
                t77 = (t71 + t69);
                t71 = 0x8C42420C;
                *(float *)((t77 + t68)) = u72;
                t68 = 0x18;
                t71 = (t71 + 0x38);
                u72 = (*(float *)((t71 + t68)));
                t79 = (t71 + t69);
                t71 = 0x8C42420C;
                *(float *)((t79 + t68)) = u72;
                t68 = 0x1C;
                t71 = (t71 + 0x38);
                u72 = (*(float *)((t71 + t68)));
                t81 = t71;
                t71 = 0x8C42420C;
                t71 = (t71 + 0x38);
                *(float *)(((t81 + t69) + t68)) = u72;
                t68 = 0x20;
                u72 = (*(float *)((t71 + t68)));
                t69 = (t69 + t71);
                t70 = (t70 + 0x1);
                *(float *)((t69 + t68)) = u72;
            }
        } else {
            *(unsigned int *)(((int)stk + 16)) = (((a4 + a5) + a7) + t0);
            *(unsigned int *)(((int)stk + 20)) = (((a4 + a5) + a6) + a7);
            t85 = t67;
            t86 = (((a4 + a5) + a6) + a7);
            t87 = 0x8C424460;
            t88 = 0x0;
            t89 = 0x0;
            t90 = t57;
            t91 = 0x8C42420C;
            u92 = u60;
            u93 = u61;
            u94 = u62;
            for (;;) {
                if ((unsigned int)t89 < (unsigned int)(*(int *)0x8C424240)) {
                    t91 = (t89 * 0x38);
                    t87 = (*(int *)(((0x8C424244 + t91) + 0xC)));
                    if (t87 == 0) {
                        t90 = (*(int *)(((int)stk + 12)));
                        u92 = ((float)a5 * 100.0f);
                        t85 = 0x10;
                        *(float *)(((0x8C424244 + t91) + t85)) = 0.0f;
                        u93 = (float)t90;
                        t85 = 0x14;
                        u92 = (u92 / u93);
                        u94 = u93;
                        u93 = ((float)a6 * 100.0f);
                        u93 = (u93 / u94);
                        *(float *)(((0x8C424244 + t91) + t85)) = u92;
                        t85 = 0x18;
                        *(float *)(((0x8C424244 + t91) + t85)) = u93;
                        u93 = ((float)a7 * 100.0f);
                        u93 = (u93 / u94);
                        t85 = 0x1C;
                        *(float *)(((0x8C424244 + t91) + t85)) = u93;
                        t85 = 0x4;
                        u93 = (*(float *)((((int)stk + 4) + t85)));
                        t85 = 0x20;
                        u93 = (u93 / u94);
                        *(float *)(((0x8C424244 + t91) + t85)) = u93;
                        t88 = (t88 | 0x1);
                    } else {
                        t85 = 0x8C42420C;
                        t85 = (t85 + 0x38);
                        t85 = (t85 + t91);
                        t85 = (*(int *)((t85 + 0xC)));
                        if (t85 == 2) {
                            t90 = (*(int *)(((int)stk + 16)));
                            u92 = (*(float *)(((int)stk + 4)));
                            t87 = 0x10;
                            t85 = t87;
                            t88 = (t88 | t87);
                            u93 = (float)t90;
                            u92 = (u92 / u93);
                            u94 = u93;
                            u93 = ((float)a5 * 100.0f);
                            u93 = (u93 / u94);
                            *(float *)(((0x8C424244 + t91) + t85)) = u92;
                            t85 = 0x14;
                            *(float *)(((0x8C424244 + t91) + t85)) = u93;
                            u93 = ((float)a7 * 100.0f);
                            u93 = (u93 / u94);
                            t85 = 0x18;
                            *(float *)(((0x8C424244 + t91) + t85)) = 0.0f;
                            t85 = 0x1C;
                            *(float *)(((0x8C424244 + t91) + t85)) = u93;
                            t85 = 0x4;
                            u93 = (*(float *)((((int)stk + 4) + t85)));
                            u93 = (u93 / u94);
                            t86 = (0x8C424244 + t91);
                            t86 = (t86 + 0x10);
                            t87 = (t87 + t86);
                            *(float *)((t87 + 0x0)) = u93;
                        } else {
                            if (t85 == 4) {
                                t90 = (*(int *)(((int)stk + 20)));
                                u92 = (*(float *)(((int)stk + 4)));
                                t85 = 0x10;
                                t87 = 0x100;
                                u93 = (float)t90;
                                t88 = (t88 | t87);
                                u92 = (u92 / u93);
                                u94 = u93;
                                u93 = ((float)a5 * 100.0f);
                                u93 = (u93 / u94);
                                *(float *)(((0x8C424244 + t91) + t85)) = u92;
                                t85 = 0x14;
                                *(float *)(((0x8C424244 + t91) + t85)) = u93;
                                u93 = ((float)a6 * 100.0f);
                                u93 = (u93 / u94);
                                t85 = 0x18;
                                *(float *)(((0x8C424244 + t91) + t85)) = u93;
                                u93 = ((float)a7 * 100.0f);
                                u93 = (u93 / u94);
                                t85 = 0x1C;
                                *(float *)(((0x8C424244 + t91) + t85)) = u93;
                                t85 = 0x20;
                                *(float *)(((0x8C424244 + t91) + t85)) = 0.0f;
                            }
                        }
                    }
                    t89 = (t89 + 0x1);
                    continue;
                }
                break;
            }
            if ((t88 != 1) && ((t88 != 16) && (t88 != 0x100))) {
                *(unsigned int *)0x8C42423C = ((((a6 + (a4 + a5)) + a7) + t0) << 2);
            } else {
                *(unsigned int *)0x8C42423C = (t90 << 2);
            }
        }
    }
    t144 = kmSetSystemConfiguration(0x8C42420C);
    if (t144 != 0) {
        _builtin_trapa(65);
    }
    *(unsigned int *)(((*(int *)0x8C454FC4) + 0x0)) = 0x800000;
    if ((*(int *)0x8C424494) == 0) {
        nlLoadDummyTexture();
        *(unsigned int *)0x8C424494 = 0x1;
    }
    return t144;
}

int shadowBallDraw(int a4)
{
    int t0;
    float t3;
    int t30;
    int t33;
    int t34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u41;
    float u43;
    int t44;
    int t47;
    int t56;
    int t57;
    int t58;
    float u84;
    float t99;
    int t31;
    int t32;
    int t80;
    int stk[62];

    t0 = *(int *)0x8C1891E8;
    if ((t0 != 1) && ((t0 != 4) && ((t0 != 7) && ((t0 != 8) && ((t0 != 14) && (t0 != 10)))))) {
        nlPushMatrix(0x0);
        t3 = shadowBallScale((*(float *)(((0xC8 + ((int)stk + 48)) + 0x4))));
        nlTranslate((*(float *)(((0xC8 + ((int)stk + 48)) + 0x0))), (*(float *)0x8C08BA04), (*(float *)(((0xC8 + ((int)stk + 48)) + 0x8))));
        nlScale(t3, 1.0f, t3);
    } else {
        *(unsigned int *)(((int)stk + 48)) = 0x8C10DD0C;
        *(unsigned short *)(((((int)stk + 48) + 0x54) + 0x0)) = (nlArcTan2(((*(float *)(((0xC8 + ((int)stk + 48)) + 0x0))) - (*(float *)0x8C10DD0C)), ((*(float *)0x8C10DD14) - (*(float *)(((0xC8 + ((int)stk + 48)) + 0x8))))));
        *(unsigned int *)(((int)stk + 48)) = 0x8C10DD18;
        *(unsigned short *)(((((int)stk + 48) + 0x54) + 0x2)) = (-(nlArcTan2(((*(float *)0x8C10DD18) - (*(float *)(((0xC8 + ((int)stk + 48)) + 0x0)))), ((*(float *)0x8C10DD20) - (*(float *)(((0xC8 + ((int)stk + 48)) + 0x8)))))));
        *(unsigned int *)(((int)stk + 48)) = 0x8C10DD24;
        *(unsigned short *)(((((int)stk + 48) + 0x54) + 0x4)) = ((-(nlArcTan2(((*(float *)(((0xC8 + ((int)stk + 48)) + 0x0))) - (*(float *)0x8C10DD24)), ((*(float *)(((0xC8 + ((int)stk + 48)) + 0x8))) - (*(float *)0x8C10DD2C))))) + 0x8000);
        *(unsigned int *)(((int)stk + 48)) = 0x8C10DD30;
        *(unsigned short *)(((((int)stk + 48) + 0x54) + 0x6)) = ((nlArcTan2(((*(float *)0x8C10DD30) - (*(float *)(((0xC8 + ((int)stk + 48)) + 0x0)))), ((*(float *)(((0xC8 + ((int)stk + 48)) + 0x8))) - (*(float *)0x8C10DD38)))) + 0x8000);
        t30 = (nlLocate(0x14, 0x22));
        t33 = a4;
        t34 = 0x0;
        for (;;) {
            if ((int)t34 >= (int)0x4) {
                break;
            }
            t31 = t34;
            t30 = t34;
            t31 = (t31 << 1);
            t32 = ((int)stk + 48);
            t31 = (t31 + t30);
            t30 = t34;
            t31 = (t31 << 2);
            t31 = (t31 + 0x8C10DD0C);
            t32 = (t32 + 0x3C);
            *(unsigned int *)(((int)stk + 52)) = ((t34 << 2) + t32);
            u35 = *(float *)((t31 + 0x0));
            t31 = t34;
            t31 = (t31 << 1);
            u36 = *(float *)(((0xC8 + ((int)stk + 48)) + 0x0));
            t31 = (t31 + t30);
            t31 = (t31 << 2);
            t31 = (t31 + 0x8C10DD0C);
            t30 = 0x8;
            *(float *)(((int)stk + 44)) = (u36 - u35);
            u37 = *(float *)((t31 + 0x0));
            t31 = t34;
            u38 = *(float *)(((0xC8 + ((int)stk + 48)) + t30));
            t30 = t34;
            t31 = (t31 << 1);
            t31 = (t31 + t30);
            t31 = (t31 << 2);
            t30 = 0x8;
            t31 = (t31 + 0x8C10DD0C);
            u39 = *(float *)((t31 + t30));
            t31 = t34;
            t30 = t34;
            t31 = (t31 << 1);
            t31 = (t31 + t30);
            t31 = (t31 << 2);
            t30 = 0x8;
            t31 = (t31 + 0x8C10DD0C);
            u41 = ((u38 - u39) * (u38 - (*(float *)((t31 + t30)))));
            u41 = u41 + (u36 - u37) * (u36 - u35);
            *(float *)((((t34 << 2) + t32) + 0x0)) = _builtin_sqrtf(u41);
            *(unsigned int *)(((int)stk + 48)) = (t34 << 1);
            t31 = (*(int *)(((int)stk + 52)));
            u43 = *(float *)((t31 + 0x0));
            t31 = t34;
            t44 = ((t34 << 1) + t31);
            t31 = 0x8C0ECD60;
            t30 = 0x4;
            t30 = (nlArcTan2((*(float *)((((t44 << 2) + 0x8C10DD0C) + t30))), u43));
            t32 = ((t34 << 1) + (((int)stk + 48) + 0x4C));
            *(unsigned short *)((t32 + 0x0)) = t30;
            t47 = ((int)t34 >= (int)0x2);
            t34 = (t34 + 0x1);
            if (!t47) {
                t33 = (*(int *)(((int)stk + 48)));
                t31 = 0x4800;
                t33 = (t33 + (((int)stk + 48) + 0x4C));
                t32 = (*(short *)((t33 + 0x0)));
                t31 = (t31 - t32);
                t32 = 0x8000;
                *(unsigned short *)((t33 + 0x0)) = t31;
                t30 = (*(int *)(((int)stk + 48)));
                t31 = (*(short *)(((((int)stk + 48) + 0x54) + t30)));
                t31 = (t31 + t32);
                *(unsigned short *)(((((int)stk + 48) + 0x54) + t30)) = t31;
            } else {
                t33 = (*(int *)(((int)stk + 48)));
                t32 = 0x5800;
                t33 = (t33 + (((int)stk + 48) + 0x4C));
                t31 = (*(short *)((t33 + 0x0)));
                t31 = (t31 + t32);
                *(unsigned short *)((t33 + 0x0)) = t31;
            }
        }
        vecMake(t33, 0x0, 0x0, 0x0, (((int)stk + 48) + 0x74), 0.0f, 0.0f, 1.0f);
        *(unsigned int *)(((int)stk + 52)) = (((int)stk + 48) + 0xC);
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        t56 = 0x8C08B7E4;
        t57 = 0x0;
        t58 = 0x0;
        for (;;) {
            if ((unsigned int)t58 < (unsigned int)0x8) {
                t57 = 0x8C0EFDB0;
                t56 = (nlPushUnitMatrix());
                t56 = t58;
                t56 = (nlRotateAY((unsigned short)(*(short *)(((((int)stk + 48) + 0x54) + t56)))));
                t56 = t58;
                t56 = (nlRotateAX((unsigned short)(*(short *)(((((int)stk + 48) + 0x4C) + t56)))));
                t57 = 0x8C0EEC80;
                t56 = (nlCalcPoint((((int)stk + 48) + 0x74), (((int)stk + 48) + 0x68)));
                t56 = (nlPopMatrix(0x1));
                t56 = 0xC;
                t57 = ((int)stk + 48);
                t57 = (t57 + 0x68);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(t57); }
                t56 = 0x8C08B948;
                t57 = 0x8C015F4C;
                t56 = (vecScale(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x74), (*(float *)((t56 + 0x0)))));
                t56 = 0xC;
                t57 = ((int)stk + 32);
                t57 = (t57 + 0x78);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t57); }
                t56 = 0xC;
                t57 = (0xC8 + ((int)stk + 48));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(t57); }
                t56 = (segPlaneHit(0x8C10DD3C, 0x4, 0x0, 0x0, (((int)stk + 48) + 0x5C)));
                t57 = (*(int *)(((int)stk + 48)));
                t57 = (t57 + (((int)stk + 48) + 0x1C));
                *(unsigned int *)(((int)stk + 56)) = t57;
                t56 = 0xC;
                t57 = (((int)stk + 48) + 0x5C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(t57); }
                t56 = 0xC;
                t57 = (0xC8 + ((int)stk + 48));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t57); }
                t57 = 0x8C016036;
                *(float *)(((*(int *)(((int)stk + 44))) + 0x0)) = (vecDist(*(Stk3 *)(t57)));
                t57 = (*(int *)(((int)stk + 48)));
                t57 = (t57 + (((int)stk + 48) + 0xC));
                t56 = (shadowBallTrailLen((*(float *)(((*(int *)(((int)stk + 56))) + 0x0)))));
                *(unsigned int *)(((t57) + 0x0)) = t56;
                t56 = 0x4;
                if (1.0f > (*(float *)(((0xC8 + ((int)stk + 48)) + t56)))) {
                    t57 = (0xC8 + ((int)stk + 48));
                    t56 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 48) + 0x5C)) = *(struct mv3 *)(t57); }
                    t80 = t57;
                }
                t57 = t80;
                t56 = 0x4;
                *(float *)(((((int)stk + 48) + 0x5C) + t56)) = 0.00100000005f;
                t56 = (nlPushMatrix(0x0));
                t56 = 0x8;
                u84 = *(float *)(((((int)stk + 48) + 0x5C) + t56));
                t56 = 0x4;
                t56 = (nlTranslate((*(float *)(((((int)stk + 48) + 0x5C) + 0x0))), ((*(float *)(((((int)stk + 48) + 0x5C) + t56))) + 0.00999999978f), u84));
                t56 = 0x8C1825BC;
                t56 = (nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 52))) + 0x0))) << 2) + t56)))));
                t56 = (nlTranslate(0.0f, 0.00999999978f, 0.0f));
                t56 = (nlObjPut(0xC5AD9D0));
                t56 = (nlPopMatrix(0x1));
                t57 = (*(int *)(((int)stk + 52)));
                t58 = (t58 + 0x2);
                t57 = (t57 + 0x4);
                *(unsigned int *)(((int)stk + 52)) = t57;
                *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x4);
                continue;
            }
            break;
        }
        nlPushMatrix(0x0);
        t99 = shadowBallScale((*(float *)(((0xC8 + ((int)stk + 48)) + 0x4))));
        nlTranslate((*(float *)(((0xC8 + ((int)stk + 48)) + 0x0))), 0.00999999978f, (*(float *)(((0xC8 + ((int)stk + 48)) + 0x8))));
        nlScale(t99, 1.0f, t99);
        nlObjPut(0xC5AFFE0);
        nlTranslate(0.0f, 0.00999999978f, 0.0f);
    }
    nlObjPut(0xC5AD9D0);
    return (nlPopMatrix(0x1));
}


int standBarDraw(int a4, int a5, int a6)
{
    int t1;
    int t4;
    int t96;
    int t97;
    int t98;
    int t99;
    int stk[40];

    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 20) + 0x48);
    *(unsigned int *)(((((int)stk + 20) + 0x48) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0)) = 0xFFFFFFC8;
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x48) + 0x8);
    *(unsigned int *)((((((int)stk + 20) + 0x48) + 0x8) + 0x0)) = 0xFFFFFF00;
    t1 = (int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u));
    *(unsigned int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0)) = 0x14FFFF00;
    t4 = (int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u));
    if (a6 == 0) {
        t96 = (t1 >> 1);
        t97 = a5;
        t98 = a6;
        t99 = (((int)stk + 20) + 0x48);
    } else {
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 20) + 0x18);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x18);
        vecMake((t1 >> 1), a5, a6, (((int)stk + 20) + 0x48), ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x8C + ((int)stk + 20)) + 0x4))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 20) + 0x18) + 0x10);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x18) + 0x10);
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) + (float)(t1 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 20) + 0x18) + 0x20);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x18) + 0x20);
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(volatile int *)(((int)stk + 20));
        nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 40)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) + (float)(t1 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) - (float)(t1 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(volatile int *)(((int)stk + 20));
        nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x8C + ((int)stk + 20)) + 0x4))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 40)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) - (float)(t1 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.0299999993f));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0xC) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(volatile int *)(((int)stk + 20));
        nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18));
    }
    vecMake(t96, t97, t98, t99, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + 5.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x18));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 20) + 0x18) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x18) + 0x10);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) + (float)(t1 >> 1)) + -5.0f), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5) + -4.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x18) + 0x20);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x18) + 0x20);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x18));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) + (float)(t1 >> 1)) + -5.0f), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5) + -4.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) - (float)(t1 >> 1)) + 5.0f), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5) + -4.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + 5.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x18));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x8C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)(t4 >> 1)), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x0))) - (float)(t1 >> 1)) + 5.0f), (((*(float *)(((0x8C + ((int)stk + 20)) + 0x4))) + (float)a5) + -4.0f), ((*(float *)(((0x8C + ((int)stk + 20)) + 0x8))) + 0.00999999978f));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x48) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    return (nlDispStripTrnsl(0x3, (((int)stk + 20) + 0x18)));
}

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

int hudMatchDraw(int a4, float f4)
{
    int t0;
    int t264;
    int t5;
    int t244;
    int t9;
    int t224;
    int t12;
    int t204;
    int t184;
    int t164;
    int t144;
    int t15;
    int t18;
    int t19;
    int t128;
    float t28;
    float t29;
    int t51;
    int t58;
    int t117;
    int t119;
    int t96;
    float u101;
    int t70;
    float u75;
    int t111;
    float u115;
    int stk[66];

    t0 = *(int *)0x8C287D5C;
    t264 = t0;
    if (t0 == 3) {
    } else {
        t5 = *(int *)0x8C287B3C;
        t244 = t0;
        if ((0x1 & t5) != 0) {
        } else {
            t9 = *(int *)0x8C185410;
            t224 = t9;
            if (t9 != 0) {
            } else {
                t12 = *(int *)0x8C421F60;
                t204 = t12;
                if (t12 != 0) {
                } else {
                    t184 = 0x8C301970;
                    if ((*(int *)0x8C301970) != 0) {
                    } else {
                        t164 = 0x8C301970;
                        if ((0x20 & t5) != 0) {
                        } else {
                            t144 = 0x8C301970;
                            if ((0x40 & t5) != 0) {
                            } else {
                                t15 = 0x0;
                                for (;;) {
                                    *(unsigned int *)(((((int)stk + 36) + 0x24) + (t15 << 2))) = (*(int *)(((0x8C10E0C4 + (((*(int *)(((0x8C2889DC + (t15 * 0xD78)) + 0x0))) << 2) << 2)) + 0x0)));
                                    t18 = entryGetColorId(t15);
                                    t19 = ((t15 << 2) + (((int)stk + 36) + 0x14));
                                    t15 = (t15 + 0x1);
                                    *(unsigned int *)((t19 + 0x0)) = t18;
                                    if ((int)t15 >= (int)0x4) {
                                        break;
                                    }
                                }
                                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x48), 12.0f, 60.0f, 0.200000003f);
                                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x40), 545.0f, 60.0f, 0.200000003f);
                                *(unsigned int *)(((int)stk + 36)) = 0x8C287B10;
                                hudScoreBoardDraw((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))), (*(int *)0x8C287B14), 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28));
                                t128 = 0x78;
                                if ((*(int *)0x8C287B44) != 0) {
                                } else {
                                    t28 = hudFadeNearPlayers(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16));
                                    t29 = hudFadeNearPlayers(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16));
                                    *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                    if ((*(int *)0x8C287ADC) != 2) {
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x6C), (*(float *)0x8C185040), ((*(float *)0x8C185044) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x0))), (*(int *)(((((int)stk + 36) + 0x24) + 0x0))), *(Stk3 *)((((int)stk + 36) + 0x6C)), 0.649999976f, t28);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 18.0f);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x0)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x0))) + 50.0f);
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C18504C;
                                        vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 36) + 0x6C) + 0xC), ((*(float *)0x8C18504C) + 3.0f), ((*(float *)0x8C185050) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x4))), (*(int *)(((((int)stk + 36) + 0x24) + 0x4))), *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0xC)), 0.649999976f, t29);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 18.0f);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + 168.0f);
                                        if ((*(int *)0x8C287ADC) == 4) {
                                            *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 36) + 0x6C) + 0x24);
                                            *(unsigned int *)(((int)stk + 40)) = 0x8C185064;
                                            vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 36) + 0x6C) + 0x24), ((*(float *)0x8C185064) + 3.0f), ((*(float *)0x8C185068) + 15.0f), 0.300000012f);
                                            t51 = *(int *)(((int)stk + 36));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t51); }
                                            hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0xC))), (*(int *)(((((int)stk + 36) + 0x24) + 0xC))), *(Stk3 *)(t51), 0.649999976f, t29);
                                            *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 36) + 0x6C) + 0x18);
                                            *(unsigned int *)(((int)stk + 36)) = 0x8C185058;
                                            vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 36) + 0x6C) + 0x18), (*(float *)0x8C185058), ((*(float *)0x8C18505C) + 15.0f), 0.300000012f);
                                            t58 = *(int *)(((int)stk + 40));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t58); }
                                            hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x8))), (*(int *)(((((int)stk + 36) + 0x24) + 0x8))), *(Stk3 *)(t58), 0.649999976f, t28);
                                            *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 26.0f);
                                            *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 26.0f);
                                            *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + -5.0f);
                                            *(float *)(((int)stk + 112)) = ((*(float *)(((int)stk + 112))) + 20.0f);
                                            *(float *)(((int)stk + 100)) = ((*(float *)(((int)stk + 100))) + 20.0f);
                                            t70 = ((((int)stk + 36) + 0x6C) + 0xC);
                                            u75 = 20.0f;
                                        }
                                        t96 = t70;
                                        u101 = u75;
                                    } else {
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x6C), (*(float *)0x8C185040), ((*(float *)0x8C185044) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x0))), (*(int *)(((((int)stk + 36) + 0x24) + 0x0))), *(Stk3 *)((((int)stk + 36) + 0x6C)), 0.649999976f, t28);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 18.0f);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x0)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x0))) + 50.0f);
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C18504C;
                                        vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 36) + 0x6C) + 0xC), (*(float *)0x8C18504C), ((*(float *)0x8C185050) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x4))), (*(int *)(((((int)stk + 36) + 0x24) + 0x4))), *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0xC)), 0.649999976f, t29);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 18.0f);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + 168.0f);
                                    }
                                    if ((*(int *)0x8C287D5C) != 3) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        infoWinDraw((*(int *)0x8C287B00), 0x0, *(Stk3 *)((((int)stk + 36) + 0x6C)), t28);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        infoWinDraw((*(int *)0x8C287B04), 0x1, *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0xC)), t29);
                                    } else {
                                        t111 = t96;
                                        u115 = u101;
                                    }
                                    t117 = *(int *)0x8C287ADC;
                                    t119 = t117;
                                    if (t117 == 4) {
                                        t119 = (cpuDblSignalDraw(t111, u115));
                                    }
                                    t128 = t119;
                                }
                                t144 = t128;
                            }
                            t164 = t144;
                        }
                        t184 = t164;
                    }
                    t204 = t184;
                }
                t224 = t204;
            }
            t244 = t224;
        }
        t264 = t244;
    }
    return t264;
}

int menuItemDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float t2;
    float u10;
    int t20;
    int t25;
    float u29;
    int t30;
    float t78;
    float t86;
    int t87;
    int t88;
    int t90;
    int t95;
    float u105;
    float u111;
    float u126;
    int t136;
    float u133;
    float u8;
    float u12;
    int stk[37];

    stk[25] = a8;
    stk[26] = a9;
    stk[27] = a10;
    stk[28] = a11;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned short *)0x8C334D9A = ((*(short *)0x8C334D9A) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D9A));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C334D9A)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C334D9A))));
    }
    u10 = u8;
    if (!(u8 > 0.200000003f)) {
        u10 = 0.200000003f;
    }
    if (a5 != 0) {
        *(float *)(((int)stk + 36)) = 1.0f;
        u12 = u10;
    } else {
        *(float *)(((int)stk + 36)) = 0.5f;
        u12 = 0.0f;
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 30.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
    menuIconPut(0xC, *(Stk3 *)((((int)stk + 32) + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    t20 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)((((int)stk + 32) + 0x44)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), (*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
    t25 = ((int (*)(int))(cursorBoxPut))(0x1);
    *(float *)(((((int)stk + 32) + 0x44) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) - 0.00100000005f);
    u29 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    t30 = *(int *)(((int)stk + 32));
    if (t30 != 0) {
        if (t30 != 1) {
            if (t30 != 2) {
                if (t30 != 3) {
                } else {
                    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 35.0f), (u29 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0xF, *(Stk3 *)((((int)stk + 32) + 0x8)));
                    *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x0))) + 40.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0x10, *(Stk3 *)((((int)stk + 32) + 0x8)));
                }
            } else {
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 56.0f), (u29 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                menuIconPut(0x10, *(Stk3 *)((((int)stk + 32) + 0x8)));
            }
        } else {
            vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 45.0f), (u29 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
            menuIconPut(0xE, *(Stk3 *)((((int)stk + 32) + 0x8)));
        }
    } else {
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 57.0f), (u29 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        menuIconPut(0xD, *(Stk3 *)((((int)stk + 32) + 0x8)));
    }
    t78 = nlCos((unsigned short)(*(short *)0x8C1846B6));
    if (t78 > 0.0f) {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x600);
    }
    t86 = nlCos((unsigned short)(*(short *)0x8C1846B8));
    t87 = *(short *)0x8C1846B8;
    t88 = 0x600;
    if (0.0f > t86) {
        t88 = 0x1400;
    }
    *(unsigned short *)0x8C1846B8 = (t87 + t88);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    t90 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)((((int)stk + 32) + 0x44)));
    if (a5 != 0) {
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), (*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
        t95 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u105 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u105 = u105 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B8)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u105;
    }
    if ((int)(*(int *)(((int)stk + 32))) > 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u111 = 57.0f;
        u111 = u111 + 195.0f * u12;
        menuIconPutRot(0x7, ((((0xFF & (int)u111) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)((((int)stk + 32) + 0x8)));
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x8), ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 120.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u126 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u126 = u126 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B6)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u126;
    }
    *(float *)(((((int)stk + 32) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x4))) + 0.0f);
    t136 = 0x4;
    if ((int)(*(int *)(((int)stk + 32))) < (int)0x3) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u133 = 57.0f;
        u133 = u133 + 195.0f * u12;
        t136 = (menuIconPutRot(0x8, ((((0xFF & (int)u133) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)((((int)stk + 32) + 0x8))));
    }
    return t136;
}

