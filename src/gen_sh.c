/* Straight-line functions with calls and guards (batch gen_sh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlChgObjectPolyAttrSub(int a4, int a5, int a6);

int nlChgObjectPolyAttrSub(int a4, int a5, int a6)
{
    int stk[2];

    int R1;
    int R5;
    int R13;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    v0_0 = a4;
    R5 = a5;
    v0_1 = a6;
    R13 = ((~R5));
    v0_0 = ((*(int *)((v0_0 + 0xC))));
    L_8C0F7996:;
    v0_1 = *(short *)((v0_0 + 0x0));
    v0_0 = ((v0_0 + 0x2));
    v0_2 = (v0_1);
    if (((int)v0_1 < 0)) goto L_8C0F7A40;
    v0_0 = ((unsigned char)v0_2);
    if (((unsigned int)(unsigned char)v0_2 >= (unsigned int)0x1E)) goto L_8C0F7A30;
    switch (((v0_0 << 1))) { case 0: goto L_8C0F79EE; case 2: goto L_8C0F7A30; case 4: goto L_8C0F7A00; case 6: goto L_8C0F7A00; case 8: goto L_8C0F7A00; case 10: goto L_8C0F7A00; case 12: goto L_8C0F7A00; case 14: goto L_8C0F7A00; case 16: goto L_8C0F79EC; case 18: goto L_8C0F79EC; case 20: goto L_8C0F79EC; case 22: goto L_8C0F79EC; case 24: goto L_8C0F7A20; case 26: goto L_8C0F7A20; case 28: goto L_8C0F7A20; case 30: goto L_8C0F7A20; case 32: goto L_8C0F7A20; case 34: goto L_8C0F7A20; case 36: goto L_8C0F7A20; case 38: goto L_8C0F7A20; case 40: goto L_8C0F7A20; case 42: goto L_8C0F7A20; case 44: goto L_8C0F7A30; case 46: goto L_8C0F7A30; case 48: goto L_8C0F7A20; case 50: goto L_8C0F7A20; case 52: goto L_8C0F7A20; case 54: goto L_8C0F7A20; case 56: goto L_8C0F7A20; case 58: goto L_8C0F7A20; }
    L_8C0F7A30:;
    return 0xFFFFFFFF;
    L_8C0F7A20:;
    v0_0 = (((v0_0 + 0x2) + (unsigned short)(*(short *)((v0_0 + 0x0)))));
    goto L_8C0F7996;
    L_8C0F7A00:;
    v0_3 = *(int *)(((v0_0 + 0x2) + 0x0));
    v0_2 = (v0_0 + 0x2);
    v0_4 = ((v0_3 & R5));
    v0_0 = (((v0_0 + 0x2) + (unsigned short)(*(short *)((v0_0 + 0x0)))));
    v0_2 = v0_2;
    if (((v0_3 & R5) == R5)) goto L_8C0F7996;
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_2 + 0x0)) = ((v0_3 & R13) | v0_1);
    v0_4 = (((v0_3 & R13) | v0_1));
    goto L_8C0F7996;
    L_8C0F79EE:;
    goto L_8C0F7996;
    L_8C0F79EC:;
    v0_0 = ((v0_0 + 0x2));
    goto L_8C0F79EE;
    L_8C0F7A40:;
    return 0x0;
}
