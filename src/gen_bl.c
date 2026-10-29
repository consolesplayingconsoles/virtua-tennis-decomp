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

