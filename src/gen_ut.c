/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];
extern char Player[];

int ballBoyExec(int);
int ballExec(int, int, int, int, int, int, int, int, int, int, int, int);
int ballWallStop(int);
int cameraExec(int, int, int, int, int, int, int, int, int, int, int, int);
int circuitRateStep(int, int, int, int);
int courtColliEntry(void);
int dbgMenuGetValue(int, int);
int lineJudgeExec(int);
int matchExec(void);
int miniExec(int, int, int, int, int, int, int, int, int, int, int, int);
int motionBackup(int);
int netHitNop(void);
int netJudgeExec(int);
int perfMark(int);
int perfPrint(void);
int replaySnapshot(int);
int sndCrowdBallReact(int);
int staffRestart(void);
int umpireExec(void);
int matchFrame(int a4, int a5, int a6, int a7);

int matchFrame(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t0;
    register float u27;
    register float u37;
    register float u39;
    register int t61;
    register int t63;
    register int t64;
    register int t109;
    register int t111;
    register int t6;
    register int t62;
    register int t68;
    register int t104;

    t0 = *(int *)0x8C287D5C;
    if ((t0 != 2) && (t0 != 3)) {
    } else {
        circuitRateStep(t0, a5, a6, a7);
    }
    if (((*(int *)0x8C287C60) == 0) && (t6 = *(int *)0x8C287B44, t6 == 0)) {
        *(unsigned int *)0x8C287B88 = ((*(int *)0x8C287B88) + 0x1);
        if ((*(float *)0x8C23D204) > 1.0f) {
            if (((int)((int)(*(int *)0x8C287B88) % (int)0x6)) == 0) {
                *(unsigned int *)0x8C287B88 = ((*(int *)0x8C287B88) + 0x1);
            }
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        u27 = *(float *)0x8C287C40;
        if ((*(float *)0x8C287C3C) == 1.0f) {
            *(float *)0x8C287C3C = ((*(float *)0x8C287C3C) - u27);
        } else {
            *(float *)0x8C287C3C = ((*(float *)0x8C287C3C) - ((float)(*(int *)0x8C301BF0) * u27));
        }
        u37 = *(float *)0x8C287C3C;
        if (((*(int *)0x8C287B3C) & 0x200000) != 0) {
            u39 = *(float *)0x8C287C44;
            if (u39 > u37) {
                *(float *)0x8C287C3C = u39;
            }
        } else {
            if (0.0f > u37) {
                *(float *)0x8C287C3C = 0.0f;
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFBFFFF);
            }
        }
    }
    t61 = (netHitNop());
    t63 = (int)Player;
    t64 = 0x0;
    for (;;) {
        if ((int)t64 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        if (t64 == 0) {
            t61 = (perfMark(0x8C102324));
        } else {
            t68 = t62;
        }
        t62 = t68;
        t61 = (motionBackup(t63));
        t61 = 0xD40;
        t62 = (*(int *)((t63 + t61)));
        t61 = (((int (*)(int))(t62))(t63));
        if (t64 == 0) {
            t61 = (perfPrint());
        }
        t62 = 0xD78;
        t64 = (t64 + 0x1);
        t63 = (t63 + t62);
    }
    ballExec((int)Ball, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    sndCrowdBallReact((int)Ball);
    ballWallStop((int)Ball);
    matchExec();
    perfMark(0x8C10232C);
    if ((*(int *)0x8C34B148) != 7) {
        ballBoyExec((int)Ball);
        lineJudgeExec((int)Ball);
        netJudgeExec((int)Ball);
        umpireExec();
    }
    if ((*(int *)0x8C287B2C) == 0) {
        staffRestart();
    }
    perfPrint();
    miniExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    if ((*(int *)0x8C421F60) == 0) {
        if (((*(int *)0x8C287B3C) & 8) != 0) {
            *(unsigned int *)0x8C38BA70 = 0x0;
        } else {
            *(unsigned int *)0x8C38BA70 = 0x1;
        }
        t104 = 0x8C38BA70;
    }
    replaySnapshot(t104);
    cameraExec((*(int *)0x8C287B44), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t109 = 0x0;
    for (;;) {
        t111 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x2);
        if ((int)t109 >= (int)(t111 * 0x186A0)) {
            break;
        }
        t109 = (t109 + 0x1);
    }
    return courtColliEntry();
}
