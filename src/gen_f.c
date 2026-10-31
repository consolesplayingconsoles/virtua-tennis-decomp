/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char fileLoadState[];
extern char motionCur[];
extern char stageNo[];

int vecMake(float, float, float);
int vecAnglesTo(int, int);
int mtxMultiKeepPos(int);
int modelSetMaterial(int, int, int);
int lineJudgeInit(void);
int netJudgeInit(void);
int netJudgeStart(void);
int umpireInit(void);
int kmyiCheckTAHandle(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int kmiFLWCTRLStartRenderEntry(void);
int kmyReleaseRenderPacket(void);
int kmyiCheckNativeHandle(int);
int motionBoneOffset(int);
int motionRoot(void);
int motionRoot2(void);
int motionRotate(int);
int motionRotate2(int);
int nlGetTranslate(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslate(float, float, float);

void motionRootBone(int a4, int a5)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)(int)motionCur;
    t1 = *(int *)((t0 + 0x44));
    if (t1 != 0) {
        u2 = *(float *)((t0 + 0x4));
        if (u2 == 0.0f) {
            motionRoot();
            motionRotate(a5);
    return;
        }
        motionRoot2();
        motionRotate2(a5);
    return;
    }
    motionRoot();
    motionRotate(a5);
}

void motionBone(int a4)
{
    int t1;
    int t2;
    int t3;
    float u4;

    motionBoneOffset(a4);
    t1 = *(int *)(int)motionCur;
    t2 = *(int *)((t1 + 0x44));
    if (t2 != 0) {
        t3 = *(int *)(int)motionCur;
        u4 = *(float *)((t3 + 0x4));
        if (u4 == 0.0f) {
            motionRotate(a4);
    return;
        }
        motionRotate2(a4);
    return;
    }
    motionRotate(a4);
}


void bodyPlacePoints(int a4)
{
    float u1;
    float u2;
    float u3;
    int t6;
    int t7;
    int t9;
    float u10;
    float u11;
    float u12;

    nlPushUnitMatrix();
    u1 = *(float *)((a4 + 0x32C));
    u2 = *(float *)((a4 + 0x328));
    u3 = *(float *)((a4 + 0x324));
    nlTranslate(u3, u2, u1);
    mtxMultiKeepPos((0x350 + a4));
    t6 = 0x0;
    for (;;) {
        t7 = *(int *)((a4 + 0x398));
        if ((int)t6 >= (int)t7) break;
        nlPushMatrix(0x0);
        t9 = *(int *)((a4 + 0x390));
        u10 = *(float *)(((t9 + (((t6 << 1) + t6) << 2)) + 0x8));
        u11 = *(float *)(((t9 + (((t6 << 1) + t6) << 2)) + 0x4));
        u12 = *(float *)(((t9 + (((t6 << 1) + t6) << 2)) + 0x0));
        nlTranslate(u12, u11, u10);
        nlGetTranslate(((a4 + 0xC) + (((t6 << 1) + t6) << 2)));
        nlGetTranslate(((0x18C + a4) + (((t6 << 1) + t6) << 2)));
        nlPopMatrix(0x1);
        t6 = (t6 + 0x1);
    }
    nlPopMatrix(0x1);
}

void stageLoadInit(int a4)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0x8C301970 = a4;
    *(unsigned int *)0x8C30196C = 0x0;
    *(unsigned int *)0x8C343FEC = 0x0;
    *(unsigned int *)0x8C343FF4 = 0x0;
    *(unsigned int *)0x8C343FF8 = 0x0;
    *(unsigned int *)0x8C343FFC = 0x0;
    *(unsigned int *)0x8C344000 = 0x0;
    *(float *)0x8C343FF0 = 0.0f;
    *(unsigned int *)0x8C343FE8 = 0x0;
    *(unsigned int *)0x8C344010 = 0x0;
    t0 = *(int *)(int)stageNo;
    *(unsigned int *)0x8C344004 = t0;
    *(unsigned int *)0x8C344008 = a4;
    *(unsigned int *)0x8C34400C = 0x0;
    *(unsigned int *)0x8C344018 = 0x0;
    *(unsigned int *)0x8C34401C = 0x0;
    *(unsigned int *)0x8C344020 = 0x0;
    *(unsigned int *)0x8C344024 = 0x0;
    *(unsigned int *)0x8C344028 = 0x0;
    *(unsigned int *)0x8C34402C = 0x0;
    *(unsigned int *)0x8C344030 = 0x0;
    *(unsigned int *)(int)fileLoadState = 0x0;
    t1 = *(int *)0x8C421F60;
    if (t1 != 0) {
        t2 = 0x0;
        do {
            *(unsigned int *)(((0x8C343264 + (t2 * 0x38)) + 0x4)) = t2;
            *(unsigned int *)((((t2 * 0x38) + 0x8C343264) + 0x30)) = 0xFFFFFFFF;
            *(unsigned int *)((((t2 << 2) + 0x8C3437C4) + 0x0)) = t2;
            t2 = (t2 + 0x1);
        } while ((int)t2 < (int)0x4);
    }
}

void stagePolyLoad(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = *(int *)(int)stageNo;
        t2 = *(int *)(((t1 << 2) + 0x8C188FDC));
        fileLoadStart(0x8C880000, t2, 0x0);
    }
    fileLoadPoll();
}

void stageTexFileLoad(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = *(int *)(int)stageNo;
        t2 = *(int *)(((t1 << 2) + 0x8C189024));
        fileLoadStart(0x8CA80000, t2, 0x0);
    }
    fileLoadPoll();
}

void kyakuPolyLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        t1 = *(int *)(int)stageNo;
        t2 = *(int *)(((t1 << 2) + 0x8C18906C));
        fileLoadStart(0x8C9B0000, t2, 0x0);
    }
    t4 = fileLoadPoll();
    *(unsigned int *)0x8C34B144 = t4;
}

void courtFraTexLoad(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    t0 = *(int *)0x8C301B98;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t0;
    t1 = *(int *)0x8C301B94;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t1;
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0xC) + 0x8);
    *(unsigned int *)(((int)stk + 12)) = 0x8C189D6C;
    t2 = 0x8C301B94;
    t3 = 0x0;
    do {
        t4 = *(int *)(((int)stk + 4));
        t5 = *(int *)(((int)stk + 12));
        t6 = t5;
        t7 = t4;
        for (;;) {
            t8 = *(int *)(((int)stk + 8));
            if ((unsigned int)t7 >= (unsigned int)t8) break;
            t9 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            t2 = 0x8C120B74;
            t10 = *(int *)(((t9 << 2) + t2));
            t11 = *(int *)(((t6 + (t3 << 2)) + 0x0));
            t12 = modelSetMaterial(t11, t10, 0x320);
            t2 = t12;
            t13 = *(int *)(((t6 + (t3 << 2)) + 0x0));
            t14 = nlObjPutLoadTexture(t13, 0x8C12CBEC);
            t2 = t14;
            t6 = (t6 + 0xC0);
        }
        t3 = (t3 + 0x1);
    } while ((int)t3 < (int)0x30);
}

void staffRestart(void)
{
    int t0;

    t0 = 0x8C37EA84;
    do {
        *(unsigned int *)((t0 + 0x600)) = 0x0;
        t0 = (t0 + 0x67C);
    } while ((unsigned int)t0 < (unsigned int)0x8C37F77C);
    lineJudgeInit();
    netJudgeInit();
    umpireInit();
    netJudgeStart();
}

void resWtcShopPolyRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8C9B0000, 0x8C1272E4, 0x0);
    }
    fileLoadPoll();
}

void resWtcShopTexRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C1272FC, 0x0);
    }
    fileLoadPoll();
}

void resWtcShopSprRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C127314, 0x0);
    }
    fileLoadPoll();
}

void resFukuPolyRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8C880000, 0x8C127328, 0x0);
    }
    fileLoadPoll();
}

void resEndSprRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C127360, 0x0);
    }
    fileLoadPoll();
}

void resEndPolyRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CB40000, 0x8C127378, 0x0);
    }
    fileLoadPoll();
}

void resEndTexRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C127394, 0x0);
    }
    fileLoadPoll();
}

void resSprTitleRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C1273B0, 0x0);
    }
    fileLoadPoll();
}

void resTitlePolyRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8C880000, 0x8C1273CC, 0x0);
    }
    fileLoadPoll();
}

void resTitleSprRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CA80000, 0x8C1273E4, 0x0);
    }
    fileLoadPoll();
}

void resGetRead(void)
{
    int t0;

    t0 = *(int *)(int)fileLoadState;
    if (t0 == 0) {
        *(unsigned int *)(int)fileLoadState = 0x1;
        fileLoadStart(0x8CB00000, 0x8C1273FC, 0x0);
    }
    fileLoadPoll();
}


