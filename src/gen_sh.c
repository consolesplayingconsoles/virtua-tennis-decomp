/* Straight-line functions with calls and guards (batch gen_sh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlChgObjectPolyAttrSub(int a4, int a5, int a6);

int nlChgObjectPolyAttrSub(int a4, int a5, int a6)
{
    int stk[2];
    register int t3;
    register int t13;
    register int t17;
    register int t18;

    register int R0;
    register int R1;
    register int R3;
    register int R4;
    int R5;
    register int R6;
    register int R7;
    int R13;
    register int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R13 = ((~R5));
    R4 = ((*(int *)((R4 + 0xC))));
    L_8C0F7996:;
    t3 = *(short *)((R4 + 0x0));
    R4 = ((R4 + 0x2));
    R7 = (t3);
    if (((int)t3 < 0)) goto L_8C0F7A40;
    R0 = ((unsigned char)R7);
    if (((unsigned int)(unsigned char)R7 >= (unsigned int)0x1E)) goto L_8C0F7A30;
    switch (((R0 << 1))) { case 0: goto L_8C0F79EE; case 2: goto L_8C0F7A30; case 4: goto L_8C0F7A00; case 6: goto L_8C0F7A00; case 8: goto L_8C0F7A00; case 10: goto L_8C0F7A00; case 12: goto L_8C0F7A00; case 14: goto L_8C0F7A00; case 16: goto L_8C0F79EC; case 18: goto L_8C0F79EC; case 20: goto L_8C0F79EC; case 22: goto L_8C0F79EC; case 24: goto L_8C0F7A20; case 26: goto L_8C0F7A20; case 28: goto L_8C0F7A20; case 30: goto L_8C0F7A20; case 32: goto L_8C0F7A20; case 34: goto L_8C0F7A20; case 36: goto L_8C0F7A20; case 38: goto L_8C0F7A20; case 40: goto L_8C0F7A20; case 42: goto L_8C0F7A20; case 44: goto L_8C0F7A30; case 46: goto L_8C0F7A30; case 48: goto L_8C0F7A20; case 50: goto L_8C0F7A20; case 52: goto L_8C0F7A20; case 54: goto L_8C0F7A20; case 56: goto L_8C0F7A20; case 58: goto L_8C0F7A20; }
    L_8C0F7A30:;
    return 0xFFFFFFFF;
    L_8C0F7A20:;
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    goto L_8C0F7996;
    L_8C0F7A00:;
    t13 = *(int *)(((R4 + 0x2) + 0x0));
    t17 = (R4 + 0x2);
    R3 = ((t13 & R5));
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    R7 = t17;
    if (((t13 & R5) == R5)) goto L_8C0F7996;
    t18 = *(int *)((R7 + 0x0));
    *(unsigned int *)((R7 + 0x0)) = ((t18 & R13) | R6);
    R3 = (((t18 & R13) | R6));
    goto L_8C0F7996;
    L_8C0F79EE:;
    goto L_8C0F7996;
    L_8C0F79EC:;
    R4 = ((R4 + 0x2));
    goto L_8C0F79EE;
    L_8C0F7A40:;
    return 0x0;
}
