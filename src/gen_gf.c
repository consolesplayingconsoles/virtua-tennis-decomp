/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char fileLoadState[];

typedef struct { int w[7]; } Stk7;
int ambEventStart(int, int, int, int, int, int);
int courtFraTexLoad(void);
int entryCountJoined(void);
int entryIsVersus(void);
int fadeScreenStart(int, int, int, int, int, int);
int matchSceneInit(void);
int matchStageSlot(void);
int ndbLoadWaitStart(void);
int nlsndSystemControl(int, int, int);
int scoreInit(void);
int set_event(int, int);
int sprSet173FreeAll(void);
int matchSceneSetup(int a4, int a5);
float cameraBlendVector240(Stk7 s);
float cameraBlendFloat240(float f4, float f5);

int matchSceneSetup(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t33;
    int t34;
    int t36;
    int t37;
    int t38;
    int t51;
    int t55;
    int t66;
    int t23;
    int t24;
    int t25;
    int t81;
    int stk[10];

    ndbLoadWaitStart();
    *(unsigned int *)0x8C181754 = 0x1;
    t1 = 0x8C185298;
    t2 = 0x8C301BA4;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t1 + 0x0)))) != 0) {
            *(unsigned int *)((t2 + 0x0)) = 0x1;
        }
        t1 = (t1 + 0x2);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C301BB4;
    t6 = 0x0;
    t7 = 0x8C301BB4;
    t8 = 0x8C301BB4;
    t9 = 0x0;
    for (;;) {
        t11 = *(short *)((((t9 << 1) + 0x8C185298) + 0x0));
        t9 = (t9 + 0x1);
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)t11) == 0) {
            *(unsigned int *)((t8 + 0x0)) = (*(int *)(((0x8C343264 + t6) + 0x0)));
        } else {
            *(unsigned int *)((t7 + 0x0)) = 0xFFFFFFFF;
        }
        t6 = (t6 + 0x38);
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    sprSet173FreeAll();
    *(unsigned int *)0x8C181750 = 0x1;
    *(unsigned int *)0x8C181760 = 0x0;
    *(unsigned int *)(int)fileLoadState = 0x0;
    *(unsigned int *)0x8C301B90 = (entryIsVersus());
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C301B90 = 0x1;
    }
    *(unsigned int *)0x8C181638 = 0x0;
    if (((*(int *)0x8C1891E8) != 2) && ((t23 = *(int *)0x8C1891E8, t23 != 3) && ((t24 = *(int *)0x8C1891E8, t24 != 9) && (t25 = *(int *)0x8C1891E8, t25 != 5)))) {
    } else {
        ambEventStart(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    nlsndSystemControl(0x0, 0x10A0, (*(int *)0x8C38BA64));
    scoreInit();
    t33 = set_event(0x38, 0x8C08509A);
    *(unsigned int *)((t33 + 0x14)) = 0x78;
    *(float *)((t33 + 0x18)) = 0.0f;
    *(unsigned int *)((t33 + 0x30)) = 0x0;
    *(unsigned int *)((t33 + 0x34)) = 0x0;
    *(unsigned int *)0x8C181758 = 0x0;
    *(unsigned int *)0x8C185410 = 0x0;
    t34 = 0x18;
    t36 = 0x8C185410;
    t37 = 0x0;
    t38 = a5;
    for (;;) {
        if ((int)t37 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t36 = 0x8C287ACC;
        t36 = (t36 + 0x14);
        if (((*(int *)((((t37 << 2) + t36) + 0x0)))) != 0) {
            t34 = 0xC58;
            t38 = (t37 * 0xD78);
            t38 = (t38 + (int)Player);
            t38 = (*(int *)((t38 + t34)));
        }
        t37 = (t37 + 0x1);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        if ((*(int *)0x8C34326C) == 0) {
            t51 = *(int *)0x8C343268;
            *(unsigned int *)((t33 + 0x1C)) = t51;
            *(unsigned int *)0x8C301B9C = t51;
        } else {
            *(unsigned int *)((t33 + 0x1C)) = 0x4;
            *(unsigned int *)0x8C301B9C = 0x4;
            *(unsigned int *)0x8C343264 = t38;
        }
        if ((*(int *)0x8C3432A4) == 0) {
            t55 = *(int *)0x8C3432A0;
            *(unsigned int *)((t33 + 0x20)) = t55;
            *(unsigned int *)0x8C301BA0 = t55;
        } else {
            *(unsigned int *)((t33 + 0x20)) = 0x4;
            *(unsigned int *)0x8C301BA0 = 0x4;
            *(unsigned int *)0x8C34329C = t38;
        }
    }
    t66 = entryCountJoined();
    if (t66 == 2) {
        *(unsigned int *)0x8C185294 = 0x1;
    } else {
        *(unsigned int *)0x8C185294 = 0x0;
    }
    *(unsigned int *)0x8C301B98 = (*(int *)0x8C343264);
    *(unsigned int *)0x8C301B94 = (*(int *)0x8C34329C);
    if ((*(int *)0x8C1891E8) == 0) {
        courtFraTexLoad();
    }
    *(unsigned int *)((t33 + 0x2C)) = (matchStageSlot());
    if (((*(int *)0x8C287D5C) != 2) && (t81 = *(int *)0x8C287D5C, t81 != 3)) {
        fadeScreenStart(0x2, 0x1, 0xA, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    *(volatile int *)0x8C1891E8;
    return matchSceneInit();
}

float cameraBlendVector240(Stk7 stackArgs)
{
    float blendDuration;
    int xWeight;
    float weightedX;
    int yWeight;
    float weightedY;
    int zWeight;
    float weightedZ;
    int stackWords[21];

    stackWords[6] = stackArgs.w[0];
    stackWords[7] = stackArgs.w[1];
    stackWords[8] = stackArgs.w[2];
    stackWords[9] = stackArgs.w[3];
    stackWords[10] = stackArgs.w[4];
    stackWords[11] = stackArgs.w[5];
    stackWords[12] = stackArgs.w[6];
    blendDuration = *(float *)0x8C02A00C;
    xWeight = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stackWords + 4)) = xWeight;
    weightedX = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x0))) * (float)((-xWeight) + 0xF0));
    weightedX = weightedX + (float)xWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x0)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x0)) = (weightedX / blendDuration);
    yWeight = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stackWords + 4)) = yWeight;
    weightedY = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x4))) * (float)((-yWeight) + 0xF0));
    weightedY = weightedY + (float)yWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x4)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x4)) = (weightedY / blendDuration);
    zWeight = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stackWords + 4)) = zWeight;
    weightedZ = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x8))) * (float)((-zWeight) + 0xF0));
    weightedZ = weightedZ + (float)zWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x8)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x8)) = (weightedZ / blendDuration);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(stackArgs.w[0]) = *(struct mv3 *)((((int)stackWords + 4) + 0x4)); }
    return (float)zWeight;
}

float cameraBlendFloat240(float startValue, float endValue)
{
    int blendWeight;
    float weightedSum;

    blendWeight = *(int *)0x8C287B4C;
    weightedSum = (endValue * (float)((-blendWeight) + 0xF0));
    weightedSum = weightedSum + (float)blendWeight * startValue;
    return (weightedSum / 240.0f);
}
