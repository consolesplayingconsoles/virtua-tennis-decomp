/* Straight-line functions with calls and guards (batch gen_wu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void scoreReset(void);

void scoreReset(void)
{
    int stk[1];
    register int t5;

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register float F4;
    register int T_;
    *(unsigned int *)0x8C287B88 = 0x0;
    R4 = (0x0);
    R5 = (0x8C287B88);
    R6 = (0x0);
    R7 = (0x90);
    F4 = (0.0f);
    L_8C0191BC:;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0x8)) = R4;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0xC)) = R4;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0x10)) = R4;
    *(float *)((((R5 + 0x4) + R6) + 0x14)) = F4;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0x18)) = R4;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0x1C)) = R4;
    t5 = (unsigned int)(R6 + 0x24) < (unsigned int)R7;
    *(unsigned int *)((((R5 + 0x4) + R6) + 0x20)) = R4;
    R0 = (0x14);
    R6 = ((R6 + 0x24));
    if (t5) goto L_8C0191BC;
    L_8C0191FC:;
}
