/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ambLevelGet(void);
int ballColliSync(void);
int ballMove(int, int, int, int, int, int, int, int, int, int, int, int);
int circuitStatsReset(void);
int dbgMenuInit(void);
int effBallTrailSpawn(Stk3);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int effServeSpeedCalc(int);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entrySetSlot(int, int, int, int);
int fadeScreenDraw(int, int, int, int, float, float);
int matchStart(void);
int nlArcTan2(float, float);
int nlLineSetThickness(float);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutTrnsl(int, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
int nlSingleLine(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int primLineV(int, int, int, int, int, int, int, int, int, int);
int sceneVecStub(Stk3);
int shadowBallDraw(Stk3);
int sndFadeFlagsClear(void);
int sndStopAllExcept(int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int gameMatchSetup(void);
int screenFramePut(int a4, int a5, int a6, int a7, float f4);
void ballExec(int a4);

int gameMatchSetup(void)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t12;
    int t16;
    int t31;
    int t33;
    int t36;
    int t54;
    int t56;
    int t59;
    int t67;
    int t35;
    int t58;
    int t69;
    int stk[13];

    *(unsigned int *)0x8C287B3C = 0x0;
    *(unsigned int *)0x8C287AD4 = 0x0;
    *(unsigned int *)0x8C287AD0 = 0x0;
    *(unsigned int *)0x8C295DAC = 0x0;
    *(unsigned int *)0x8C295DB0 = 0x0;
    *(unsigned int *)0x8C29BBBC = 0x1;
    t0 = 0x0;
    for (;;) {
        t1 = (0x8C287B8C + t0);
        t0 = (t0 + 0x24);
        *(unsigned int *)((t1 + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x90) {
            break;
        }
    }
    *(unsigned int *)0x8C287C54 = 0x0;
    t2 = 0x8C287C74;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C287CBC) {
            break;
        }
    }
    *(unsigned int *)0x8C295DDC = 0x0;
    *(unsigned int *)0x8C38BA70 = 0x1;
    *(unsigned int *)0x8C38BA74 = 0x1;
    *(unsigned int *)0x8C38BA78 = 0x1;
    sndStopAllExcept(0x0);
    sndFadeFlagsClear();
    dbgMenuInit();
    *(unsigned int *)0x8C287C60 = 0x0;
    *(unsigned int *)0x8C287ACC = (*(int *)0x8C1891E8);
    *(unsigned int *)0x8C1891F0 = (*(int *)0x8C1891E8);
    if ((*(int *)0x8C287D5C) == 2) {
        t9 = *(int *)0x8C2FBE20;
        t10 = *(int *)(((((((t9 << 2) << 2) + t9) << 2) + 0x8C108E5C) + 0x2C));
        *(unsigned int *)0x8C287C6C = t10;
        if (t10 == 6) {
            *(unsigned int *)0x8C287C70 = 0x1;
        } else {
            *(unsigned int *)0x8C287C70 = 0x0;
        }
        t12 = *(int *)0x8C2FBE20;
        if (((*(int *)((0x40 + (((((t12 << 2) << 2) + t12) << 2) + 0x8C108E5C)))) & 4) != 0) {
            *(unsigned int *)0x8C185408 = 0x2;
        } else {
            *(unsigned int *)0x8C185408 = 0x1;
        }
        t16 = *(int *)0x8C2FBE20;
        *(unsigned int *)0x8C2FBE28 = (((((0x1 & (*(int *)(((((((t16 << 2) << 2) + t16) << 2) + 0x8C108E5C) + 0x40)))) == 0)) ? 1 : 0) ^ 0x1);
    }
    *(unsigned int *)0x8C2889DC = (unsigned char)(*(signed char *)0x8C2FBC7C);
    *(unsigned int *)0x8C28A4CC = (unsigned char)(*(signed char *)0x8C2FBC7D);
    if ((*(int *)0x8C287D5C) == 2) {
        if (((*(int *)0x8C2FBC98) & 4) == 0) {
            t31 = *(int *)0x8C2FBE20;
            *(unsigned int *)0x8C289754 = (*(int *)(((((((t31 << 2) << 2) + t31) << 2) + 0x8C108E5C) + 0x34)));
            t33 = *(int *)0x8C289754;
            if ((t33 != (unsigned char)(*(signed char *)0x8C2FBC7C)) && (t35 = *(signed char *)0x8C2FBC7D, t33 != (unsigned char)t35)) {
            } else {
                t36 = *(int *)0x8C2FBE20;
                *(unsigned int *)0x8C289754 = (*(int *)(((((((t36 << 2) << 2) + t36) << 2) + 0x8C108E5C) + 0x3C)));
            }
            if ((*(int *)0x8C289754) == -1) {
                *(unsigned int *)(((int)stk + 8)) = 0x8C288AFC;
                for (;;) {
                    *(unsigned int *)(((0xC58 + (*(int *)(((int)stk + 8)))) + 0x0)) = ((int)((nlRandom()) * 8.0f) + 0x8);
                    if ((*(int *)(((*(int *)(((int)stk + 8))) + 0xC58))) != (unsigned char)(*(signed char *)0x8C2FBC7D)) {
                        break;
                    }
                }
            }
            t54 = *(int *)0x8C2FBE20;
            *(unsigned int *)0x8C28B244 = (*(int *)(((((((t54 << 2) << 2) + t54) << 2) + 0x8C108E5C) + 0x38)));
            t56 = *(int *)0x8C28B244;
            if ((t56 != (unsigned char)(*(signed char *)0x8C2FBC7C)) && (t58 = *(signed char *)0x8C2FBC7D, t56 != (unsigned char)t58)) {
            } else {
                t59 = *(int *)0x8C2FBE20;
                *(unsigned int *)0x8C28B244 = (*(int *)(((((((t59 << 2) << 2) + t59) << 2) + 0x8C108E5C) + 0x3C)));
            }
            if ((*(int *)0x8C28B244) == -1) {
                for (;;) {
                    *(unsigned int *)0x8C28B244 = ((int)((nlRandom()) * 8.0f) + 0x8);
                    *(unsigned int *)(((int)stk + 12)) = 0x8C28A5EC;
                    t67 = *(int *)0x8C28B244;
                    if ((t67 != (unsigned char)(*(signed char *)0x8C2FBC7D)) && (t69 = *(int *)0x8C289754, t67 != t69)) {
                        break;
                    }
                }
            }
        }
    }
    if ((*(int *)0x8C287D5C) == 3) {
        *(unsigned int *)0x8C289754 = 0x10;
    }
    entryInit();
    entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    entrySetSlot(0x0, (*(int *)0x8C2889DC), 0x0, (*(int *)0x8C421F70));
    *(unsigned int *)0x8C343294 = (*(signed char *)0x8C2FBC83);
    entrySetSlot(0x1, (*(int *)0x8C289754), 0x1, 0x0);
    entrySetSlot(0x2, (*(int *)0x8C28A4CC), 0x1, 0x0);
    entrySetSlot(0x3, (*(int *)0x8C28B244), 0x1, 0x0);
    matchStart();
    *(unsigned int *)0x8C287C54 = 0x0;
    *(float *)0x8C287A04 = (*(float *)0x8C032EB0);
    if (((*(int *)0x8C2FBC98) & 4) == 0) {
        *(unsigned int *)0x8C287C50 = 0x96;
    }
    *(unsigned int *)0x8C2FBC98 = ((*(int *)0x8C2FBC98) & 0xFFFFFFFB);
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x8000);
    return circuitStatsReset();
}


