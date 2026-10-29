/* Straight-line functions with calls and guards (batch gen_nf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void rankNameCopy(int a4, int a5);

void rankNameCopy(int a4, int a5)
{
    int t1;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = (0x3);
    L_8C0E423E:;
    t1 = R6 == 0;
    R6 = ((R6 - 1));
    if (t1) goto L_8C0E424A;
    if (!(((*(signed char *)((R5 + 0x0))) != 0))) goto L_8C0E424A;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_8C0E423E;
    L_8C0E424A:;
    if (((int)R6 < 0)) goto L_8C0E4252;
    *(unsigned char *)((R4 + 0x0)) = 0x0;
    L_8C0E4252:;
    return;
}
