/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int btnGuideDraw(int, int, float);
int camWorldToView(int, ...);
int charaTexFree(int);
int eepromGetDeuceMode(void);
int endingMotRequest(void);
int endingTexLoad(void);
int entryGetColorId(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int motFileLoadBegin(void);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSeqRequest(int);
int playerInit(int, int);
int screenProject(int, int, int, int, int, int, int, int);
int seBallSpeed(int, int);
int seShotHit2(int, int);
int selSideCheck(void);
int serveGetServer(void);
int set_event(int, int);
int sklDrawNodeOne(int);
int sprMatchFree(void);
int sprSet115Load(void);
int sprSet173FreeAll(void);
int staffLookAtBall(int, int, int);
int stageCrowdTexLoad(void);
int stageTexFree(void);
int stageTexLoad(void);
int strmCallName(int);
int strmVoicePlay(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int lineJudgePose(int a4);
int cpuDblRecoverPosB(int a4, int a5, int a6);
int stageLoadEnding(void);
int nlLineDrawThick(int a4, int a5, int a6, int a7);
int selModelSpawn(int a4, int a5);
int hudPlayerMarkers(void);
void seShotHit(int a4, int a5);
void titleObjTrailPut(int a4, int a5);
float shotCheckNet(int a4, int a5, float f4, float f5, float f6);
int strmUmpireCall(int a4, int a5, int a6);

int lineJudgePose(int a4)
{
    int t50;
    int t51;
    int t70;
    int t77;
    int t71;
    int t72;
    int t74;
    int t76;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0B70)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5B0))), (0x5B8 + a4), (*(int *)((a4 + 0x5B4))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    t50 = 0x0;
    t51 = (0x1E4 + a4);
    for (;;) {
        nlLoadMatrix(t51);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)((t50 + (*(int *)((0x8C1D08F0 + ((*(int *)0x8C1891E8) << 2))))))));
        }
        t51 = (t51 + 0x40);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t50 = (t50 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)((0x1E4 + a4) + 0x3C0)) {
            break;
        }
    }
    t70 = *(int *)0x8C38B768;
    t77 = (nlPopMatrix(0x1));
    if (t70 != 0) {
        t71 = *(int *)(((int)stk + 8));
        t72 = t71;
        for (;;) {
            nlPushMatrix(0x0);
            t74 = *(int *)((t72 + 0x0));
            t72 = (t72 + 0x4);
            sklDrawNodeOne(t74);
            t76 = nlPopMatrix(0x1);
            if ((unsigned int)t72 >= (unsigned int)(t71 + 0x3C)) {
                break;
            }
        }
        t77 = t76;
    }
    return t77;
}

int cpuDblRecoverPosB(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t60;
    int t74;
    int t101;
    int t16;
    int t92;
    int t36;
    int t83;
    int t53;
    int t67;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = serveGetServer();
    if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x140))) == 0) {
        if ((*(int *)((a4 + 0xB5C))) == t1) {
            *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
            *(float *)((a6 + 0x0)) = (-((((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f)))) * 118.849998f));
            t16 = 0x8C06F010;
        } else {
            *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
            *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
            t16 = 0xAF0;
        }
        t101 = t16;
    } else {
        if ((unsigned char)(*(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)))) == 1) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
            if ((*(int *)((a4 + 0xB5C))) == t1) {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (-((((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((0x12B + ((t0 * 0x160) + 0x8C2FC69C)))) * 0.300000012f)) + 1.0f)))) * 118.849998f));
                t36 = 0x8C06F010;
            } else {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)(((0x13D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                t36 = 0xAF0;
            }
            t92 = t36;
        } else {
            if ((unsigned char)(*(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)))) == 2) {
                if ((*(int *)((0xB5C + a4))) == t1) {
                    *(float *)((a5 + 0x0)) = 0.0f;
                    *(float *)((a6 + 0x0)) = (-((((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((0x12B + ((t0 * 0x160) + 0x8C2FC69C)))) * 0.300000012f)) + 1.0f)))) * 118.849998f));
                    t53 = 0x8C06F100;
                } else {
                    *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 38.3949966f);
                    *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                    t53 = 0xAF0;
                }
                t83 = t53;
            } else {
                t60 = *(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)));
                t74 = (unsigned char)t60;
                if ((unsigned char)t60 == 3) {
                    *(unsigned char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C))) = ((short)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * (short)0xFFFFFFFF);
                    if ((*(int *)((a4 + 0xB5C))) == t1) {
                        *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 38.3949966f);
                        *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 83.1949997f));
                        t67 = 0xB00;
                    } else {
                        *(float *)((a5 + 0x0)) = (*(float *)((0xAE8 + a4)));
                        *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                        t67 = 0xAF0;
                    }
                    t74 = t67;
                }
                t83 = t74;
            }
            t92 = t83;
        }
        t101 = t92;
    }
    return t101;
}

int stageLoadEnding(void)
{
    int t2;
    int t3;
    int t5;
    int t9;
    int t10;
    int t11;
    int t13;
    int t18;
    int t19;
    int t20;
    int t22;
    int t25;
    int t26;
    int t1;
    int t17;

    sprSet173FreeAll();
    *(unsigned int *)0x8C188EA4 = 0x0;
    *(unsigned int *)0x8C188EA0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C188E9C = 0xFFFFFFFF;
    *(unsigned int *)0x8C188E98 = 0xFFFFFFFF;
    *(unsigned int *)0x8C188E94 = 0xFFFFFFFF;
    t2 = 0x0;
    t3 = 0x8C287D84;
    for (;;) {
        if ((*(int *)((t2 + 0x8C287AE0))) != 1) {
            t5 = *(int *)0x8C188EA4;
            t1 = 0xC58;
            t1 = (t1 + t3);
            *(unsigned int *)0x8C188EA4 = (t5 + 0x1);
            t1 = (*(int *)((t1 + 0x0)));
            *(unsigned int *)((0x8C188E94 + (((t5 + 0x1) - 1) << 2))) = t1;
        }
        t2 = (t2 + 0x4);
        t3 = (t3 + 0xD78);
        if ((unsigned int)t2 >= (unsigned int)0x10) {
            break;
        }
    }
    *(unsigned int *)0x8C188EA4 = 0x0;
    t9 = t1;
    t10 = 0x0;
    t11 = 0x8C287D84;
    for (;;) {
        if ((*(int *)((t10 + 0x8C287AE0))) == 1) {
            t13 = *(int *)0x8C188EA4;
            t9 = 0xC58;
            t9 = (t9 + t11);
            *(unsigned int *)0x8C188EA4 = (t13 + 0x1);
            t9 = (*(int *)((t9 + 0x0)));
            *(unsigned int *)((0x8C188E9C + (((t13 + 0x1) - 1) << 2))) = t9;
        }
        t10 = (t10 + 0x4);
        t11 = (t11 + 0xD78);
        if ((unsigned int)t10 >= (unsigned int)0x10) {
            break;
        }
    }
    t18 = 0x0;
    for (;;) {
        t19 = 0x8C188E9C;
        t20 = 0x8C188E9C;
        for (;;) {
            t22 = *(int *)((t20 + 0x0));
            t20 = (t20 + 0x4);
            if (((*(int *)((((t18 << 2) + 0x8C188E94) + 0x0))) == t22) && (t17 = 0x10, (int)t22 >= (int)t17)) {
                *(unsigned int *)((t19 + 0x0)) = 0xFFFFFFFF;
            }
            t19 = (t19 + 0x4);
            if ((unsigned int)t20 >= (unsigned int)0x8C188EA4) {
                break;
            }
        }
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x2) {
            break;
        }
    }
    t25 = 0x8C188E9C;
    for (;;) {
        t26 = *(int *)((t25 + 0x0));
        t25 = (t25 + 0x4);
        charaTexFree(t26);
        if ((unsigned int)t25 >= (unsigned int)0x8C188EA4) {
            break;
        }
    }
    if ((*(int *)0x8C1891E8) != 4) {
        stageTexFree();
        *(unsigned int *)0x8C287ACC = 0x4;
        *(unsigned int *)0x8C1891F0 = 0x4;
        *(unsigned int *)0x8C1891E8 = 0x4;
        fileLoadStart(0x8C880000, 0x8C111128, 0x0);
        for (;;) {
            if ((*(int *)0x8C34A1F0) == 1) {
                break;
            }
            fileLoadPoll();
            frameHookNop();
            nlWaitVSync();
        }
        fileLoadStart(0x8CA80000, 0x8C111148, 0x0);
        for (;;) {
            if ((*(int *)0x8C34A1F0) == 1) {
                break;
            }
            fileLoadPoll();
            frameHookNop();
            nlWaitVSync();
        }
        stageTexLoad();
        fileLoadStart(0x8C9B0000, 0x8C111168, 0x0);
        for (;;) {
            if ((*(int *)0x8C34A1F0) == 1) {
                break;
            }
            fileLoadPoll();
            frameHookNop();
            nlWaitVSync();
        }
        stageCrowdTexLoad();
    }
    sprMatchFree();
    fileLoadStart(0x8CB40000, 0x8C111188, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    fileLoadStart(0x8CA80000, 0x8C1111A0, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    endingTexLoad();
    fileLoadStart(0x8CA80000, 0x8C1111B8, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    sprSet115Load();
    endingMotRequest();
    return motFileLoadBegin();
}

int nlLineDrawThick(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t10;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    int t19;
    int t21;
    int t55;
    int t38;
    int t39;
    int t76;
    int t71;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)0x8C1DCAA4;
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + (u0 - u1) * (u0 - u1);
    if (u5 == 0.0f) {
        t10 = a6;
        if (!((*(float *)((a5 + 0x8))) > (*(float *)((a6 + 0x8))))) {
            t10 = a5;
        }
        nlLineSendQuadE(a4, t10, a7, (u4 * 0.5f));
        t76 = (a4 + 0x80);
    } else {
        u13 = *(float *)0x8C1DCAA0;
        u14 = (u4 * 0.5f);
        u15 = ((1.0f / _builtin_sqrtf(u5)) * u14);
        u16 = ((1.0f / _builtin_sqrtf(u5)) * u14);
        t17 = (int)((1.0f / u13) * (u0 - u1));
        if ((int)(int)((1.0f / u13) * (u0 - u1)) < 0) {
            t17 = (-(int)((1.0f / u13) * (u0 - u1)));
        }
        t19 = (int)((1.0f / u13) * (u2 - u3));
        if ((int)(int)((1.0f / u13) * (u2 - u3)) < 0) {
            t19 = (-(int)((1.0f / u13) * (u2 - u3)));
        }
        t21 = t19;
        if ((int)t17 < (int)t19) {
            t21 = t17;
        }
        *(float *)((a5 + 0x8)) = (1.0f / (*(float *)((a5 + 0x8))));
        *(float *)((a6 + 0x8)) = (1.0f / (*(float *)((a6 + 0x8))));
        if ((int)t21 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t71 = a4;
        } else {
            *(float *)0x8C454C58 = ((1.0f / (float)t21) * (u0 - u1));
            *(float *)0x8C454C5C = ((1.0f / (float)t21) * (u2 - u3));
            *(float *)0x8C454C60 = (((*(float *)((a5 + 0x8))) - (*(float *)((a6 + 0x8)))) * (1.0f / (float)t21));
            *(float *)0x8C454C64 = (*(float *)((a6 + 0x0)));
            *(float *)0x8C454C70 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
            *(float *)0x8C454C68 = (*(float *)((a6 + 0x4)));
            *(float *)0x8C454C74 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C6C = (*(float *)((a6 + 0x8)));
            *(float *)0x8C454C78 = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
            nlLineSendQuadD(a4, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t55 = (a4 + 0x80);
            if ((int)0x1 < (int)(t21 - 1)) {
                t38 = 0x1;
                t39 = (a4 + 0x80);
                for (;;) {
                    *(float *)0x8C454C64 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
                    *(float *)0x8C454C70 = ((*(float *)0x8C454C70) + (*(float *)0x8C454C58));
                    *(float *)0x8C454C68 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
                    *(float *)0x8C454C74 = ((*(float *)0x8C454C74) + (*(float *)0x8C454C5C));
                    *(float *)0x8C454C6C = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
                    *(float *)0x8C454C78 = ((*(float *)0x8C454C78) + (*(float *)0x8C454C60));
                    nlLineSendQuadC(t39, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
                    t38 = (t38 + 0x1);
                    t39 = (t39 + 0x80);
                    if ((int)t38 >= (int)(t21 - 1)) {
                        break;
                    }
                }
                t55 = t39;
            }
            *(float *)0x8C454C64 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
            *(float *)0x8C454C70 = ((*(float *)0x8C454C70) + (*(float *)0x8C454C58));
            *(float *)0x8C454C68 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C74 = ((*(float *)0x8C454C74) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C6C = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
            *(float *)0x8C454C78 = ((*(float *)0x8C454C78) + (*(float *)0x8C454C60));
            nlLineSendQuadB(t55, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t71 = t55;
        }
        t76 = (t71 + 0x80);
    }
    return t76;
}

int selModelSpawn(int a4, int a5)
{
    int t0;
    int t9;
    int t35;
    int t56;
    int t50;
    int t15;
    int t40;

    if (a5 == 1) {
        t0 = *(int *)(((0x8C343264 + (a4 * 0x38)) + 0x4));
        *(unsigned int *)(((t0 << 2) + 0x8C343878)) = 0x2;
        *(float *)(((t0 << 2) + 0x8C3438C8)) = 1.0f;
        *(unsigned int *)(((0x8C343898 + (t0 << 2)) + 0x0)) = (*(int *)(((t0 << 2) + 0x8C3438A8)));
    }
    t9 = set_event(0x64, 0x8C0A8CEC);
    *(unsigned int *)((t9 + 0x4C)) = a5;
    *(unsigned int *)((t9 + 0x28)) = 0x16;
    *(unsigned int *)((t9 + 0x3C)) = 0x0;
    *(unsigned int *)((t9 + 0x2C)) = ((nlRand()) & 0x1);
    *(unsigned int *)((t9 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((t9 + 0x34)) = 0x0;
    *(unsigned int *)((t9 + 0x38)) = 0x0;
    *(unsigned int *)((t9 + 0x54)) = 0x0;
    *(unsigned int *)((t9 + 0x60)) = 0xFFFFFFFF;
    *(unsigned int *)((t9 + 0x50)) = 0xFFFFFFFF;
    if ((*(int *)0x8C287ADC) == 2) {
        if (a4 == 0) {
            vecMake(0xFFFFFFFF, 0x0, 0x0, 0x0, (0x1C + t9), -18.0f, -2.0f, -24.0f);
            t15 = 0x1B00;
        } else {
            vecMake(0xFFFFFFFF, 0x0, 0x0, 0x0, (0x1C + t9), 18.0f, -2.0f, -24.0f);
            t15 = 0xE500;
        }
        *(unsigned short *)((t9 + 0x48)) = t15;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x1C)) = *(struct mv3 *)(((((a4 << 1) + a4) << 2) + 0x8C110CFC)); }
        *(unsigned short *)((t9 + 0x48)) = (*(int *)(((a4 << 2) + 0x8C110D2C)));
    }
    *(unsigned int *)((t9 + 0x18)) = a4;
    *(unsigned int *)((t9 + 0x5C)) = ((a4 * 0xD78) + 0x8C287D84);
    *(unsigned int *)((((a4 * 0xD78) + 0x8C287D84) + 0xB5C)) = a4;
    *(unsigned int *)(((*(int *)((t9 + 0x5C))) + 0xC58)) = 0x0;
    if (a5 == 1) {
        *(unsigned int *)(((*(int *)((t9 + 0x5C))) + 0xC58)) = (*(int *)(((0x8C343264 + (a4 * 0x38)) + 0x0)));
    }
    playerInit((*(int *)((t9 + 0x5C))), (*(int *)((t9 + 0x18))));
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    t35 = *(int *)((t9 + 0x5C));
    vecMake(0x0, 0x0, 0x0, 0x0, (0xAF4 + t35), 0.0f, 0.0f, 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + t35)) = *(struct mv3 *)((0xAF4 + t35)); }
    *(float *)(((*(int *)((t9 + 0x5C))) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)((t9 + 0x5C))) + 0xB18)) = 0.0f;
    if (((*(int *)(((0x8C343264 + (a4 * 0x38)) + 0x8))) != 0) && (t40 = *(int *)0x8C287ADC, t40 == 2)) {
        *(unsigned int *)((((a4 * 0x38) + 0x8C343264) + 0x4)) = (selSideCheck());
    }
    t56 = 0x4C;
    if ((*(int *)((t9 + 0x4C))) != 0) {
        *(unsigned int *)((t9 + 0x54)) = 0x1;
        *(unsigned int *)((t9 + 0x28)) = 0x19;
        t50 = *(int *)((t9 + 0x5C));
        t56 = (motionSet(t50, 0x10D2D8, 0x1, 0x12755C, ((*(int *)((((*(int *)((t50 + 0xC58))) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204)));
    }
    return t56;
}

int hudPlayerMarkers(void)
{
    int t3;
    int t5;
    int t7;
    int t36;
    int t39;
    int t69;
    int t55;
    int t4;
    int t6;
    int t8;
    int t12;
    int t28;
    int t50;
    int t53;
    int t45;
    float u46;
    int stk[38];

    if ((*(int *)0x8C185410) != 0) {
    } else {
        if ((*(int *)0x8C287B44) != 0) {
            t55 = 0x78;
        } else {
            t3 = 0x8C09610C;
            t5 = 0x8C287ACC;
            t7 = 0x0;
            for (;;) {
                if ((int)t7 < (int)(*(int *)0x8C287ADC)) {
                    t8 = 0xD78;
                    t3 = 0xB60;
                    t8 = (t7 * t8);
                    t8 = (t8 + 0x8C287D84);
                    t4 = (*(int *)((t8 + t3)));
                    if (((t4 & 0x40000) != 0) && (t3 = 0xB68, t12 = *(int *)((t8 + t3)), t3 = t12, t3 == 5)) {
                        *(unsigned int *)0x8C1850A0 = 0x0;
                    }
                    t5 = t7;
                    t3 = (entryGetColorId(t5));
                    t4 = 0x8C287C60;
                    t6 = t3;
                    *(unsigned int *)(((int)stk + 40)) = (t3 << 2);
                    if ((*(int *)((t4 + 0x0))) == 0) {
                        t3 = 0xB64;
                        t5 = (*(int *)((t8 + t3)));
                        t3 = 0x8C29B898;
                        t5 = (t5 << 2);
                        t5 = (*(int *)((t5 + t3)));
                        *(unsigned int *)(((int)stk + 48)) = t5;
                        t5 = (*(int *)((t5 + 0x10)));
                        if (((0x20 & t5) != 0) || (t3 = 0x80, (t3 & t5) != 0)) {
                            t3 = (*(int *)(((int)stk + 40)));
                            *(unsigned int *)((0x8C1850A8 + t3)) = 0x1;
                        }
                        t3 = 0xB64;
                        t5 = (*(int *)((t8 + t3)));
                        t3 = 0x8C29B898;
                        t5 = (t5 << 2);
                        t5 = (*(int *)((t5 + t3)));
                        *(unsigned int *)(((int)stk + 44)) = t5;
                        t5 = (*(int *)((t5 + 0x10)));
                        if (((0x10 & t5) != 0) || (t4 = 0x40, (t4 & t5) != 0)) {
                            t3 = (*(int *)(((int)stk + 40)));
                            *(unsigned int *)((0x8C1850A8 + t3)) = 0x0;
                        }
                        t28 = t5;
                    }
                    t5 = t28;
                    if ((*(int *)0x8C1850A0) == 0) {
                        t50 = t4;
                        t53 = t5;
                    } else {
                        t4 = (((int)stk + 32) + 0x44);
                        t3 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((0xAE8 + t8)); }
                        t3 = 0x4;
                        *(float *)(((((int)stk + 32) + 0x44) + t3)) = ((*(float *)(((((int)stk + 32) + 0x44) + t3))) + 17.0f);
                        t3 = 0xC;
                        t4 = ((int)stk + 20);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
                        t4 = 0x8C01612E;
                        t3 = (camWorldToView((((int)stk + 20) + 0x38)));
                        t3 = 0xC;
                        t4 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
                        t5 = ((int)stk + 4);
                        t5 = (t5 + 0x20);
                        t3 = (screenProject(t5, (((int)stk + 4) + 0x1C), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
                        t4 = 0xD2;
                        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x140);
                        t3 = (*(int *)(((int)stk + 32)));
                        t3 = (t3 + t4);
                        *(unsigned int *)(((int)stk + 32)) = (t3 + 0x10);
                        t36 = (t3 + 0x10);
                        t3 = (*(int *)(((int)stk + 40)));
                        t3 = (*(int *)((0x8C1850A8 + t3)));
                        if (t3 == 1) {
                            t4 = 0x1D1;
                            t4 = (t4 - t36);
                            t39 = t4;
                            t4 = 0x8C015EEA;
                            t3 = (vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x38), (float)((*(int *)(((int)stk + 36))) + 0x31), (float)t39, 0.00200000009f));
                            t3 = 0xC;
                            t4 = ((int)stk + 16);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((((int)stk + 32) + 0x38)); }
                            t45 = 0x1;
                            u46 = (*(float *)0x8C1850A4);
                        } else {
                            t3 = (vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x38), (float)((*(int *)(((int)stk + 36))) - 36), (float)(0x1D2 - t36), 0.00200000009f));
                            t3 = 0xC;
                            t4 = ((int)stk + 16);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((((int)stk + 32) + 0x38)); }
                            t45 = 0x0;
                            u46 = (*(float *)0x8C1850A4);
                        }
                        t5 = t6;
                        t3 = (btnGuideDraw(t5, t45, u46));
                    }
                    t4 = t50;
                    t7 = (t7 + 0x1);
                    t5 = t53;
                    continue;
                }
                break;
            }
            t55 = t3;
        }
        t69 = t55;
    }
    return t69;
}

void seShotHit(int a4, int a5)
{
    float u5;
    int t8;
    int t6;
    int t11;
    float t13;
    int t21;
    float t48;
    float t56;
    int t19;
    int t20;
    int t28;
    int t37;
    int t45;
    int t51;
    int t71;
    int t61;
    int t68;

    if ((*(int *)0x8C38BA70) == 0) {
        return;
    }
    if ((*(int *)0x8C38BA74) == 0) {
        return;
    }
    u5 = *(float *)((a4 + 0xAF0));
    t8 = 0x1;
    if (u5 > 0.0f) {
    } else {
        t6 = 0x0;
        if (0.0f > u5) {
            t6 = 0xFFFFFFFF;
        }
        t8 = t6;
    }
    t11 = 0x0;
    if ((*(int *)0x8C402C0C) != t8) {
        t11 = 0x1;
    }
    t13 = nlScalor((a5 + 0x24));
    *(float *)0x8C402C10 = t13;
    *(float *)0x8C402C14 = (*(float *)((a5 + 0x2C)));
    *(unsigned int *)0x8C402C18 = (*(int *)((a4 + 0xC5C)));
    *(unsigned int *)0x8C402C1C = (*(int *)((a4 + 0xC64)));
    *(unsigned int *)0x8C402C20 = (*(int *)((a5 + 0x50)));
    if ((((*(int *)((a4 + 0xB60))) & 0x10000) == 0) && ((t19 = *(int *)((a5 + 0x50)), t20 = *(int *)((((((t19 << 1) + t19) << 2) << 1) + 0x8C105FE0)), (t20 & 0x40000) == 0) || !(t13 > 5.0f))) {
        t21 = *(int *)0x8C402C04;
        if ((*(int *)((a4 + 0xC64))) == 2) {
            if (t11 != 0) {
                t28 = (*(int *)((((t21 * 0x54) + 0x8C1D2B2C) + 0x3C)));
            } else {
                t28 = (*(int *)((((t21 * 0x54) + 0x8C1D2B2C) + 0x1C)));
            }
            nlsndSeqRequest(t28);
        } else {
            if ((*(int *)((a4 + 0xC64))) == 5) {
                if (t11 != 0) {
                    t37 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x30)));
                } else {
                    t37 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x10)));
                }
                nlsndSeqRequest(t37);
            } else {
                if ((*(int *)((a4 + 0xC64))) == 1) {
                    if (t11 == 0) {
                        t45 = (*(int *)((((t21 * 0x54) + 0x8C1D2B2C) + 0x1C)));
                    } else {
                        t45 = (*(int *)((((t21 * 0x54) + 0x8C1D2B2C) + 0x3C)));
                    }
                    nlsndSeqRequest(t45);
                } else {
                    t48 = nlScalor((a5 + 0x24));
                    if (3.0f > t48) {
                        if (t11 == 0) {
                            t51 = ((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x48);
                        } else {
                            t51 = ((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x4C);
                        }
                        nlsndSeqRequest((*(int *)((t51 + 0x0))));
                    } else {
                        t56 = nlScalor((a5 + 0x24));
                        if (!(t56 > 5.0f)) {
                            if (t11 == 0) {
                                t61 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x10)));
                            } else {
                                t61 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x30)));
                            }
                            t71 = t61;
                        } else {
                            if (t11 == 0) {
                                t68 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x10)));
                            } else {
                                t68 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x30)));
                            }
                            t71 = t68;
                        }
                        nlsndSeqRequest(t71);
                    }
                }
            }
        }
        if ((*(int *)((a4 + 0x20))) == ((*(int *)0x8C2873D0) + 0x3BD3C)) {
            seBallSpeed(0x0, a4);
    return;
        }
        return;
    }
    seShotHit2(a4, a5);
}

void titleObjTrailPut(int a4, int a5)
{
    int t1;
    int t14;
    int t15;
    int t35;
    int t17;
    int t42;
    int t43;
    int t0;
    float u2;
    int t29;
    int t45;
    int stk[34];

    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x3C)) = *(struct mv6 *)(0x8C127810); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x24)) = *(struct mv6 *)(0x8C127828); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x1C)) = *(struct mv2 *)(0x8C127840); }
    t1 = 0x0;
    for (;;) {
        nlSubVector3op(((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)), ((((int)stk + 4) + 0x3C) + (((t1 << 1) + t1) << 2)), ((((int)stk + 4) + 0x24) + (((t1 << 1) + t1) << 2)));
        nlScaleVector(((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)), ((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)), ((float)a4 / (float)a5));
        nlAddVector(((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)), ((((int)stk + 4) + 0x24) + (((t1 << 1) + t1) << 2)));
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)) + 0x0))), (*(float *)((((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)) + 0x4))), (*(float *)((((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2)) + 0x8))));
        nlObjPut((*(int *)((((t1 << 2) + (((int)stk + 4) + 0x1C)) + 0x0))));
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 4)) = ((t1 << 2) + (((int)stk + 4) + 0x1C));
        t14 = (((int)stk + 4) + 0x1C);
        t15 = 0x0;
        for (;;) {
            t35 = t14;
            if ((*(float *)((((((t15 << 1) + t15) << 2) + ((t1 * 0x78) + 0x8C42409C)) + 0x4))) != (-1.0f)) {
                t17 = ((~(((~t15) + 0x1) & 0x1)) + 0x1);
                if ((int)t15 >= 0) {
                    t17 = (t15 & 0x1);
                }
                if (t17 != 0) {
                    t14 = 0xA;
                    t14 = (t14 - t15);
                    u2 = (float)t14;
                    u2 = (u2 * 0.100000001f);
                    nlPushMatrix(0x0);
                    t0 = (((t15 << 1) + t15) << 2);
                    t0 = (t0 + ((t1 * 0x78) + 0x8C42409C));
                    nlTranslate((*(float *)((t0 + 0x0))), (*(float *)((t0 + 0x4))), (*(float *)((t0 + 0x8))));
                    nlObjPutTrnsl((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), u2);
                    nlPopMatrix(0x1);
                } else {
                    t29 = t14;
                }
                t35 = t29;
            }
            t14 = t35;
            t15 = (t15 + 0x1);
            if ((int)t15 >= (int)0xA) {
                break;
            }
        }
        t42 = *(int *)0x8C20D15C;
        t43 = ((~(((~t42) + 0x1) & 0x1)) + 0x1);
        if ((int)t42 >= 0) {
            t43 = (t42 & 0x1);
        }
        if ((t43 == 0) && (t45 = *(int *)0x8C1DC6AC, (int)t42 < (int)(t45 + 0x1E))) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x6C)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x60)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x60)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x54)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x54)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x48)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x48)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x3C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x3C)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x30)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x24)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0x18)) = *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((t1 * 0x78) + 0x8C42409C) + 0xC)) = *(struct mv3 *)(((t1 * 0x78) + 0x8C42409C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((t1 * 0x78) + 0x8C42409C)) = *(struct mv3 *)(((((int)stk + 4) + 0x4) + (((t1 << 1) + t1) << 2))); }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x2) continue;
        break;
    }
}

float shotCheckNet(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    float u3;
    int t6;
    int t4;
    float u8;
    int t11;
    int t9;
    int t13;
    int t14;
    int t15;
    int t16;
    float u19;
    int t50;
    int t48;
    float u52;
    float u59;
    int t64;
    int t62;
    float u101;
    float u80;
    float u17;
    int t35;
    int t36;
    int t39;
    float u55;
    float u66;
    float u67;
    int stk[23];

    t0 = *(int *)((a4 + 0xC5C));
    if (((*(int *)((((((t0 << 1) + t0) << 2) << 1) + 0x8C105FE0))) & 0x40000) == 0) {
        u3 = *(float *)((a5 + 0x20));
        t6 = 0x1;
        if (u3 > 0.0f) {
        } else {
            t4 = 0x0;
            if (0.0f > u3) {
                t4 = 0xFFFFFFFF;
            }
            t6 = t4;
        }
        u8 = *(float *)((a5 + 0x2C));
        t11 = 0x1;
        if (u8 > 0.0f) {
        } else {
            t9 = 0x0;
            if (0.0f > u8) {
                t9 = 0xFFFFFFFF;
            }
            t11 = t9;
        }
        if (t6 == t11) {
        } else {
            *(float *)(((int)stk + 8)) = 11.75f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((a5 + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((a5 + 0x24)); }
            *(float *)(((int)stk + 28)) = f4;
            t13 = (((int)stk + 4) + 0x14);
            t14 = (a5 + 0x24);
            t15 = 0x0;
            t16 = 0x0;
            for (;;) {
                if ((t16 == 0) && ((int)t15 < (int)0x12C)) {
                    *(float *)(((int)stk + 4)) = (*(float *)(((int)stk + 44)));
                    u19 = *(float *)0x8C23D204;
                    if (u19 > 1.0f) {
                        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - ((*(float *)((a5 + 0x70))) * u19));
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) * ((1.0f - ((*(float *)0x8C23D204) * 0.00999999978f))));
                        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) * ((1.0f - ((*(float *)0x8C23D204) * 0.00999999978f))));
                        nlScaleVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (*(float *)0x8C23D204));
                        t39 = (((int)stk + 4) + 0x8);
                    } else {
                        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - (*(float *)((a5 + 0x70))));
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) * 0.99000001f);
                        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) * 0.99000001f);
                        t35 = t13;
                        t36 = t14;
                        t39 = (((int)stk + 4) + 0x14);
                    }
                    t13 = t35;
                    t14 = t36;
                    nlAddVector((((int)stk + 4) + 0x20), t39);
                    u17 = (*(float *)(((int)stk + 44)));
                    t50 = 0x1;
                    if (u17 > 0.0f) {
                    } else {
                        t48 = 0x0;
                        if (0.0f > u17) {
                            t48 = 0xFFFFFFFF;
                        }
                        t50 = t48;
                    }
                    u52 = *(float *)((a5 + 0x20));
                    if (u52 > 0.0f) {
                        t13 = 0x1;
                    } else {
                        if (0.0f > u52) {
                            t13 = 0xFFFFFFFF;
                        } else {
                            t13 = 0x0;
                        }
                    }
                    if ((t50 != t13) && (u55 = *(float *)(((int)stk + 40)), 0.349999994f > u55)) {
                        t16 = 0x1;
                    }
                    u59 = *(float *)(((int)stk + 4));
                    if (u59 > 0.0f) {
                        t14 = 0x1;
                    } else {
                        if (0.0f > u59) {
                            t14 = 0xFFFFFFFF;
                        } else {
                            t14 = 0x0;
                        }
                    }
                    t64 = 0x1;
                    if (u17 > 0.0f) {
                    } else {
                        t62 = 0x0;
                        if (0.0f > u17) {
                            t62 = 0xFFFFFFFF;
                        }
                        t64 = t62;
                    }
                    if ((t14 != t64) && (u66 = *(float *)(((int)stk + 8)), u67 = *(float *)(((int)stk + 40)), u66 > u67)) {
                        break;
                    }
                    t15 = (t15 + 0x1);
                    continue;
                }
                return u17;
            }
            u80 = u17;
        }
        u101 = u80;
    }
    return u101;
}

int strmUmpireCall(int a4, int a5, int a6)
{
    int t10;
    int t23;
    int t33;
    int t50;
    int t65;
    int t69;
    int t82;
    int t84;
    int t89;
    int t92;
    int t96;
    int t98;
    int t109;
    int t100;
    int t105;
    int t37;
    int t35;
    int t57;
    int t54;
    int t52;
    int t77;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        return 0x70;
    }
    t10 = *(int *)0x8C20D14C;
    if ((t10 != 2) && (t10 != 6)) {
        return t10;
    }
    if (a6 != -1) {
        if (a6 != -1) {
            return strmVoicePlay(0x9, a6);
        }
        return a6;
    }
    t23 = *(int *)0x8C1891E8;
    if (a4 == 0) {
        if (a5 == 0) {
            return a6;
        }
        if (a5 == 1) {
            t37 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x0)));
        } else {
            if (a5 == 2) {
                t35 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x4)));
            } else {
                t33 = a6;
                if (a5 != 3) {
                } else {
                    t33 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x8)));
                }
                t35 = t33;
            }
            t37 = t35;
        }
        if (t37 != -1) {
            return strmVoicePlay(0x9, t37);
        }
        return t37;
    }
    if (a4 == 1) {
        if (a5 == 0) {
            t57 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0xC)));
        } else {
            if (a5 == 1) {
                t54 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x10)));
            } else {
                if (a5 == 2) {
                    t52 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x14)));
                } else {
                    t50 = a6;
                    if (a5 != 3) {
                    } else {
                        t50 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x18)));
                    }
                    t52 = t50;
                }
                t54 = t52;
            }
            t57 = t54;
        }
        if (t57 != -1) {
            return strmVoicePlay(0x9, t57);
        }
        return t57;
    }
    if (a4 == 2) {
        if (a5 == 0) {
            t65 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x1C));
            if (t65 != -1) {
                return strmVoicePlay(0x9, t65);
            }
            return t65;
        }
        if (a5 == 1) {
            t69 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x20));
            if (t69 != -1) {
                return strmVoicePlay(0x9, t69);
            }
            return t69;
        }
        if (a5 == 2) {
            if ((*(int *)0x8C287B20) == 0) {
                t77 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x24)));
            } else {
                t77 = (*(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x3C)));
            }
            if (t77 != -1) {
                return strmVoicePlay(0x9, t77);
            }
            return t77;
        }
        if (a5 == 3) {
            if ((*(int *)0x8C287B20) == 0) {
                t82 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x28));
                if (t82 != -1) {
                    return strmVoicePlay(0x9, t82);
                }
                return t82;
            }
            t84 = 0x1;
            if ((*(int *)0x8C287B10) == 3) {
                t84 = 0x0;
            }
            return strmCallName(t84);
        }
        if (a6 != -1) {
            return strmVoicePlay(0x9, a6);
        }
        return a6;
    }
    if (a4 == 3) {
        if (a5 == 0) {
            t89 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x2C));
            if (t89 != -1) {
                return strmVoicePlay(0x9, t89);
            }
            return t89;
        }
        if (a5 == 1) {
            t92 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x30));
            if (t92 != -1) {
                return strmVoicePlay(0x9, t92);
            }
            return t92;
        }
        if (a5 == 2) {
            if ((*(int *)0x8C287B20) == 0) {
                t96 = *(int *)(((((((*(int *)((((t23 << 2) + 0x8C1D4770) + 0x0))) << 2) << 2) << 2) + 0x8C1D4800) + 0x34));
                if (t96 != -1) {
                    return strmVoicePlay(0x9, t96);
                }
                return t96;
            }
            t98 = 0x1;
            if ((*(int *)0x8C287B10) == 3) {
                t98 = 0x0;
            }
            return strmCallName(t98);
        }
        t109 = a6;
        if (a5 == 3) {
            t100 = eepromGetDeuceMode();
            t105 = a6;
            if ((unsigned char)t100 == 0) {
                t105 = (*(int *)((((((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D4770))) << 2) << 2) << 2) + 0x8C1D4838)));
            }
            t109 = t105;
        }
        if (t109 != -1) {
            return strmVoicePlay(0x9, t109);
        }
        return t109;
    }
    if (a6 != -1) {
        return strmVoicePlay(0x9, a6);
    }
    return a6;
}
