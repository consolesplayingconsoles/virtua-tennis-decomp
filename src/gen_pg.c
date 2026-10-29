/* Straight-line functions with calls and guards (batch gen_pg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndbPack(void);

int ndbPack(void)
{
    int t0;
    int t6;
    int t8;
    int t15;
    int t16;
    int t17;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R12;
    int R13;
    int R14;
    int T_;
    t0 = *(int *)0x8C301938;
    *(unsigned int *)(((int)stk + 4)) = 0x10000;
    *(unsigned int *)0x8C30193C = 0x0;
    R12 = (t0);
    R13 = (0x8CB00000);
    R14 = (0x8C30193C);
    R4 = (0x8CA80000);
    R7 = (0x0);
    L_8C081DDC:;
    t6 = R12 == 0;
    R12 = ((R12 - 1));
    if (t6) goto L_8C081DEE;
    t8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t8 - 1);
    if (!((((t8 - 1) + 0x1) != 0))) goto L_8C081DEE;
    t15 = *(signed char *)((R4 + 0x5));
    t16 = *(signed char *)((R4 + 0x6));
    t17 = *(signed char *)((R4 + 0x7));
    *(unsigned short *)((R13 + 0x0)) = (((((R7 | ((*(signed char *)((R4 + 0x4))) + 0x3)) | (((unsigned char)(*(signed char *)((R4 + 0x3))) << 2) << 1)) | (((((*(signed char *)((R4 + 0x2))) + 0x3) << 2) << 2) << 1)) | ((unsigned char)(*(signed char *)((R4 + 0x1))) << 8)) | (((unsigned char)(*(signed char *)((R4 + 0x0))) << 8) << 2));
    *(unsigned char *)((R13 + 0x2)) = (((R7 | (t15 + 0x8)) | (((unsigned char)t16 << 2) << 2)) | ((unsigned char)t17 << 7));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    R0 = ((((R7 | (t15 + 0x8)) | (((unsigned char)t16 << 2) << 2)) | ((unsigned char)t17 << 7)));
    R13 = ((R13 + 0x4));
    R4 = ((R4 + 0x8));
    goto L_8C081DDC;
    L_8C081DEE:;
    return R0;
}
