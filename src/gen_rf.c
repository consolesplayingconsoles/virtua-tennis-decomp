/* Straight-line functions with calls and guards (batch gen_rf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestLoad(int, int, int, int);
int buGetDiskInfo(int, int);
int resCautionReset(int);
int thunk_buIsExistFile(int, int);
int BupCheckCard(int a4);

int BupCheckCard(int a4)
{
    int t0;
    int t7;
    int t18;
    int stk[18];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    *(unsigned int *)0x8C40C628 = 0x0;
    t0 = buGetDiskInfo(0x0, 0x8C40C6C4);
    R11 = (0x8C40C6B0);
    R12 = (0x0);
    R13 = (t0);
    R14 = (0x8C1D78B4);
    if ((t0 == (*(int *)0x8C1D78B0))) goto L_8C0E056E;
    t7 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t7 + 0x1);
    if (((int)(t7 + 0x1) <= (int)0x5)) goto L_8C0E058E;
    if (((int)R13 < 0)) goto L_8C0E055E;
    BupRequestLoad(0x0, 0x8C126AB0, 0x8C40C2F4, 0x128);
    L_8C0E055E:;
    *(unsigned int *)0x8C1D78B0 = R13;
    *(unsigned int *)((R14 + 0x0)) = R12;
    resCautionReset(0x0);
    L_8C0E0570:;
    R0 = (R13);
    if ((R13 == 0xFFFFFF03)) goto L_8C0E058A;
    if ((R0 == 0xFFFFFF01)) goto L_8C0E058A;
    if ((R0 == -1)) goto L_8C0E058E;
    if (!((R0 == 0))) goto L_8C0E05BA;
    t18 = (thunk_buIsExistFile(0x0, 0x8C126AB0)) != 0;
    R0 = (0x3A);
    R14 = (R12);
    if (t18) goto L_8C0E05A2;
    R14 = (0x1);
    goto L_8C0E05A2;
    L_8C0E05BA:;
    return R0;
    L_8C0E05A2:;
    R4 = ((unsigned short)(*(short *)((R11 + R0))));
    if ((R14 == 0)) goto L_8C0E05AE;
    R0 = (0x0);
    goto L_8C0E05BA;
    L_8C0E05AE:;
    if (((int)R4 < (int)0x2)) goto L_8C0E05B8;
    R0 = (0x1);
    goto L_8C0E05BA;
    L_8C0E05B8:;
    R0 = (0xFFFFFFFC);
    goto L_8C0E05BA;
    L_8C0E058E:;
    R0 = (0xFFFFFFFD);
    goto L_8C0E05BA;
    L_8C0E058A:;
    R0 = (0xFFFFFFFE);
    goto L_8C0E05BA;
    L_8C0E056E:;
    *(unsigned int *)((R14 + 0x0)) = R12;
    goto L_8C0E0570;
}
