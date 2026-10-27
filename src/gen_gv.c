/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
int cpuInTriangle(Stk3, Stk3, Stk3, Stk3);
int msgWinFramePut(int, int, int, int, Stk12, float, float, float, float);
extern int msgWinPut();
int nlCalcPoint(int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslate(float, float, float);
int pdTmrAlarm(int, int);
int resCautionTexFree(int);
float vecDist(Stk3, Stk3);
Stk3 vecMake(float, float, float);
float swingTrackTip(int a4);
int msgWinStep(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int cpuInFan(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

float swingTrackTip(int a4)
{
    float t7;
    int stk[33];

    *(unsigned int *)(((int)stk + 32)) = ((a4 * 0xD78) + 0x8C287D84);
    *(Stk3 *)((((int)stk + 32) + 0x44)) = vecMake(0.0f, 0.0f, 1.0f);
    nlPushUnitMatrix();
    nlLoadMatrix((((*(int *)(((int)stk + 32))) + 0x1E0) + 0x2C0));
    nlTranslate(80.0f, 0.0f, 0.0f);
    nlCalcPoint((((int)stk + 28) + 0x48), (0x8C334324 + ((((a4 << 1) + a4) << 2) << 1)));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 32)) = (0x8C334324 + ((((a4 << 1) + a4) << 2) << 1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x8C334324 + ((((a4 << 1) + a4) << 2) << 1))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((int)stk + 32))) + 0xC)); }
    t7 = vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    *(float *)((((a4 << 2) + 0x8C334384) + 0x0)) = t7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x8C334324 + ((((a4 << 1) + a4) << 2) << 1)) + 0xC)) = *(struct mv3 *)((0x8C334324 + ((((a4 << 1) + a4) << 2) << 1))); }
    return t7;
}

int msgWinStep(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t5;
    int t6;
    int t17;
    int stk[20];

    if ((int)(*(int *)0x8C423BD4) >= (int)0x1) {
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0D182C), (*(float *)0x8C0D1828), (*(float *)0x8C0D1824));
        t5 = ((int (*)(int, int, int, int, int, int, int))(msgWinPut))(0x1, 0x1, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    } else {
        t6 = *(int *)0x8C1D1760;
        if (t6 == 1) {
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x0)) = (*(signed char *)0x8C125AFC);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x1)) = (*(signed char *)0x8C125AFD);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x2)) = (*(signed char *)0x8C125AFE);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x3)) = (*(signed char *)0x8C125AFF);
            resCautionTexFree((*(int *)0x8C1D175C));
            *(unsigned int *)0x8C1D175C = 0xFFFFFFFF;
            pdTmrAlarm(0x1, (((int)stk + 20) + 0x2C));
            *(unsigned int *)0x8C1D1760 = ((*(int *)0x8C1D1760) - 1);
        } else {
            if ((int)t6 <= 0) {
                *(unsigned int *)0x8C1D175C = 0xFFFFFFFF;
            } else {
                { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 20)) = *(struct mv12 *)(0x8C125B00); }
                msgWinFramePut(((int)stk + 20), a5, a6, a7, *(Stk12 *)(((int)stk + 20)), f4, f5, f6, f7);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0x8C38BA54); }
                t17 = ((int (*)(int, int, Stk3))(msgWinPut))((*(int *)0x8C1D175C), 0x0, *(Stk3 *)(((int)stk + 8)));
                *(unsigned int *)0x8C1D1760 = ((*(int *)0x8C1D1760) - 1);
            }
        }
    }
    return 0x0;
}

int cpuInFan(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t4;
    int stk[31];

    stk[20] = a8;
    stk[21] = a9;
    stk[22] = a10;
    t5 = 0x0;
    if (0x1 != 0) {
        t0 = a5;
        t1 = 0x1;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + a4)); }
            t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + a5)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t0); }
            t4 = cpuInTriangle(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
            if ((signed char)t4 != 0) {
                break;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t1 >= (int)0x9) {
                return 0x0;
            }
        }
        t5 = 0x1;
    }
    return t5;
}
