/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[8]; } Stk8;
int FUN_8c0eaf00(int, int, int, Stk8, float);
int commonLoadStep(void);
int dbgMenuInit(void);
int entryFinalCheck(void);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int, int, int, int, int, int);
int nlInitEvent(void);
int nlsndSystemControl(int, int, int);
int resCautionTexFree(int);
int sndPack4Load(int);
int stageLoadEnding(void);
Stk3 vecMake(float, float, float);
int FUN_8c0e03ce(void);
int FUN_8c0d372a(float f4);

int FUN_8c0e03ce(void)
{
    int stk[26];
    register int t5;
    register int t12;
    register int t7;

    if ((*(int *)0x8C421E24) != 99) {
        *(unsigned int *)0x8C40C69C = 0x0;
        *(unsigned int *)0x8C40C698 = 0x0;
        *(int *)((int)stk + 16) = ((int)stk + 20);
        *(Stk3 *)(((int)stk + 20)) = vecMake(150.0f, 200.0f, 0.0500000007f);
        *(int *)((int)stk + 12) = (0xC + ((int)stk + 20));
        *(Stk3 *)((0xC + ((int)stk + 20))) = vecMake(150.0f, 280.0f, 0.0500000007f);
        *(int *)((int)stk + 8) = (0x18 + ((int)stk + 20));
        *(Stk3 *)((0x18 + ((int)stk + 20))) = vecMake(480.0f, 200.0f, 0.0500000007f);
        *(int *)((int)stk + 4) = (0x24 + ((int)stk + 20));
        *(Stk3 *)((0x24 + ((int)stk + 20))) = vecMake(480.0f, 280.0f, 0.0500000007f);
        msgWinFramePut(((int)stk + 20), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        *(Stk3 *)(((int)stk + 8)) = vecMake(420.0f, 240.0f, 0.00999999978f);
        msgWinPut(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
        if ((int)(*(int *)0x8C20D15C) > (int)0x78) {
            *(unsigned char *)0x8C40C62F = 0x0;
            resCautionTexFree(0xA);
            *(unsigned int *)0x8C20D14C = 0x7;
            *(unsigned int *)0x8C20D150 = 0x3;
            *(unsigned int *)0x8C20D15C = 0x0;
            t7 = 0x8C20D150;
        } else {
            t5 = commonLoadStep();
            *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
            t7 = t5;
        }
        t12 = t7;
    } else {
        *(unsigned int *)0x8C20D14C = 0x7;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C20D15C = 0x0;
        t12 = 0x8C20D150;
    }
    return t12;
}

int FUN_8c0d372a(float f4)
{
    int stk[22];
    register int t2;
    register int t5;
    register int t19;

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x20)) = *(struct mv8 *)(0x8C125CFC); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 4)) = *(struct mv8 *)(0x8C125D1C); }
    FUN_8c0eaf00(0x0, 0x0, 0x0, *(Stk8 *)(((int)stk + 4)), f4);
    nlInitEvent();
    *(unsigned int *)0x8C287B44 = 0x2;
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    *(unsigned int *)0x8C407FD4 = 0x0;
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)((0x8C40C17C + t2)) = (*(int *)(((((int)stk + 4) + 0x20) + t2)));
        *(unsigned int *)((0x8C40C19C + t2)) = (*(int *)((((int)stk + 4) + t2)));
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x20) {
            break;
        }
    }
    *(unsigned int *)0x8C407FC8 = 0x4;
    *(unsigned int *)0x8C402CB0 = 0x0;
    t5 = entryFinalCheck();
    *(unsigned int *)0x8C402CB0 = t5;
    if (t5 == 2) {
        *(unsigned int *)0x8C407FC8 = 0x0;
    } else {
        if ((*(int *)0x8C402CB0) == 1) {
            *(unsigned int *)0x8C407FC8 = 0x1;
        } else {
            *(unsigned int *)0x8C407FC8 = 0x4;
        }
    }
    *(unsigned int *)0x8C402CA0 = 0x0;
    *(float *)0x8C402CA4 = 0.0f;
    *(unsigned int *)0x8C402CAC = 0x0;
    *(unsigned int *)0x8C402CA8 = 0xFFFFFFFF;
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    stageLoadEnding();
    sndPack4Load(0x0);
    dbgMenuInit();
    t19 = nlsndSystemControl(0x1, 0x1300A0, 0x0);
    *(unsigned int *)0x8C38B768 = 0x1;
    *(float *)0x8C407FBC = 0.0f;
    *(float *)0x8C407FB8 = 0.0f;
    *(unsigned int *)0x8C407FCC = 0x0;
    return t19;
}
