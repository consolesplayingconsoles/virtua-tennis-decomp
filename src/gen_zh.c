/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int cacheOcbiRange(int, int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(Stk3);
int camSetTarget(Stk3);
int camSetupView(void);
int fadeScreenStart(int, int, int, int, int, int);
int lightExec(int);
int matchSceneExec(void);
int nlExecuteEvent(void);
int stageLoadEndingModels(void);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
int vecScale(int, int, int, int, int, float);
int vecSub(Stk4, Stk3);
int FUN_8c08d59c(void);

int FUN_8c08d59c(void)
{
    int stk[26];
    register int t0;
    register int t47;
    register int t5;

    t0 = stageLoadEndingModels();
    t47 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)0x8C32DD98 = ((*(int *)0x8C32DD98) + 0x1);
        *(float *)0x8C287A04 = 40.0f;
        lightExec(t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(0x8C1826DC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C1826DC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0x8C1826E8); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
        *(int *)((int)stk + 28) = (0xC + ((int)stk + 32));
        vecDiv(0x0, 0x0, 0x0, 0x0, (0xC + ((int)stk + 32)), 300.0f);
        t5 = *(int *)0x8C32DD98;
        *(int *)((int)stk + 40) = (0xC + ((int)stk + 44));
        vecScale(0x0, 0x0, 0x0, 0x0, (0xC + ((int)stk + 44)), (float)t5);
        *(int *)((int)stk + 52) = (((int)stk + 56) + 0x18);
        vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 56) + 0x18));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1826D0); }
        camSetTarget(*(Stk3 *)(((int)stk + 40)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
        camSetEye(*(Stk3 *)(((int)stk + 28)));
        camMoveBegin(1.0f, 1.0f);
        if ((int)(*(int *)0x8C32DD98) > (int)0x96) {
            *(float *)0x8C32DD9C = ((*(float *)0x8C32DD9C) - 0.0399999991f);
            *(float *)0x8C32DDA0 = ((*(float *)0x8C32DDA0) + 0.0299999993f);
            if (0.0f > (*(float *)0x8C32DD9C)) {
                *(float *)0x8C32DD9C = 0.0f;
            }
            if ((*(float *)0x8C32DDA0) > 1.0f) {
                *(float *)0x8C32DDA0 = 1.0f;
            }
        }
        camSetupView();
        camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 80), *(int *)((int)stk + 80 + 4), *(int *)((int)stk + 80 + 8), *(int *)((int)stk + 80 + 12), *(int *)((int)stk + 80 + 16), *(int *)((int)stk + 80 + 20), *(int *)((int)stk + 80 + 24), *(int *)((int)stk + 80 + 28));
        matchSceneExec();
        if ((*(int *)0x8C32DD98) == 0) {
            fadeScreenStart(0x2, 0x0, 0x3C, 0x0, *(int *)((int)stk + 80), *(int *)((int)stk + 80 + 4));
        }
        if ((*(int *)0x8C32DD98) == 0xB5) {
            fadeScreenStart(0x3, 0x0, 0x3C, 0x0, *(int *)((int)stk + 80), *(int *)((int)stk + 80 + 4));
        }
        if ((*(int *)0x8C32DD98) == 0xF0) {
            cacheOcbiRange(0xCA00000, 0x200000);
            *(unsigned int *)0x8C20D14C = 0x4;
            *(unsigned int *)0x8C20D150 = 0x2;
        }
        t47 = (nlExecuteEvent());
    }
    return t47;
}
