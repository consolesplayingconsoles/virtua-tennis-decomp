/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fadeCaptureBegin(float);
int fadeCaptureEnd(int);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int rankEntryMain(int a4, float f4);

int rankEntryMain(int a4, float f4)
{
    int t8;
    int t11;
    int t14;
    int t17;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int T_;
    R4 = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0x8C20D150) << 2) + 0x8C126BCC)));
    if (((*(int *)0x8C1D793C) != 1)) goto L_8C0E1464;
    if (((*(int *)0x8C1D7940) != 0)) goto L_8C0E1464;
    fadeCaptureBegin(f4);
    *(unsigned int *)0x8C1D7940 = 0x1;
    L_8C0E1464:;
    t8 = ((int (*)(int))((*(int *)(((int)stk + 4)))))(R4);
    nlExecuteEvent();
    nlExecuteEvent2();
    t11 = *(int *)0x8C1D793C;
    R0 = (t11);
    if ((t11 != 1)) goto L_8C0E1492;
    t14 = *(int *)0x8C1D7940;
    R0 = (t14);
    if ((t14 != 1)) goto L_8C0E1492;
    t17 = fadeCaptureEnd(0x0);
    *(unsigned int *)0x8C1D7940 = 0x2;
    R0 = (t17);
    L_8C0E1492:;
    return R0;
}
