/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char stageNo[];

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
    t3 = (int)Player;
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
    t11 = (int)Player;
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
        *(unsigned int *)(int)stageNo = 0x4;
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



