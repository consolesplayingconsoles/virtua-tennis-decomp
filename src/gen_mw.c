/* Straight-line functions with calls and guards (batch gen_mw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int entryGridMove(int a4, int a5);

int entryGridMove(int a4, int a5)
{
    int stk[18];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int T_;
    R4 = a4;
    R5 = a5;
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C110D9C); }
    R6 = (0x8C343ADC);
    R7 = (0x4);
    if (((int)(*(int *)0x8C343ADC) < (int)0x4)) goto L_8C0AB3EC;
    R0 = (0x8C343AE8);
    if (((int)(*(int *)0x8C343AE8) < (int)R7)) goto L_8C0AB3EC;
    if ((R4 != 1)) goto L_8C0AB3D8;
    R0 = (R5);
    if ((R5 != 2)) goto L_8C0AB3D8;
    return 0x2;
    L_8C0AB3D8:;
    if ((R4 != 2)) goto L_8C0AB41C;
    R0 = (R5);
    if ((R5 != 3)) goto L_8C0AB41C;
    return 0x1;
    L_8C0AB41C:;
    return (*(int *)(((R5 << 2) + (((R4 << 2) << 2) + ((int)stk + 4)))));
    L_8C0AB3EC:;
    if (((int)(*(int *)((R6 + 0x4))) < (int)R7)) goto L_8C0AB41C;
    if (((int)(*(int *)((R6 + 0x8))) < (int)R7)) goto L_8C0AB41C;
    if ((R4 != 0)) goto L_8C0AB408;
    if ((R5 != 0)) goto L_8C0AB408;
    return 0x3;
    L_8C0AB408:;
    if ((R4 != 3)) goto L_8C0AB41C;
    R0 = (R5);
    if ((R5 != 1)) goto L_8C0AB41C;
    return 0x0;
}
