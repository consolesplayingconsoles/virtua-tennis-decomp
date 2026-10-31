/* Straight-line functions with calls and guards (batch gen_kn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lineJudgeDraw(void);
int lineJudgeUpdate(int);
int lineJudgeExec(int a4);

int lineJudgeExec(int a4)
{
    int stk[2];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = *(int *)0x8C421F60;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_8C0CA182;
    v0_1 = (0x8C29B27C);
    if (((*(int *)0x8C29B27C) == 1)) goto L_8C0CA182;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_8C0CA182;
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 != 3)) goto L_8C0CA1D0;
    L_8C0CA182:;
    v0_2 = *(int *)0x8C37EA80;
    v0_1 = (v0_2);
    if (((v0_2 & 2) != 0)) goto L_8C0CA1D0;
    v0_2 = *(int *)0x8C287D5C;
    v0_1 = (v0_2);
    if ((v0_2 == 3)) goto L_8C0CA1D0;
    if ((v0_0 == 0)) goto L_8C0CA1B8;
    if (((*(int *)0x8C29B27C) != 0)) goto L_8C0CA1B8;
    v0_1 = *(int *)0x8C295DF4;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_8C0CA1B8;
    if ((v0_0 == 6)) goto L_8C0CA1B8;
    if ((v0_0 == 12)) goto L_8C0CA1B8;
    v0_1 = (v0_0);
    if ((v0_0 != 14)) goto L_8C0CA1D0;
    L_8C0CA1B8:;
    if (((*(int *)0x8C20D14C) != 0)) goto L_8C0CA1C8;
    v0_0 = *(int *)0x8C20D150;
    v0_1 = (v0_0);
    if ((v0_0 == 3)) goto L_8C0CA1D0;
    L_8C0CA1C8:;
    lineJudgeUpdate(a4);
    return lineJudgeDraw();
    L_8C0CA1D0:;
    return v0_1;
}
