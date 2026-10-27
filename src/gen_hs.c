/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_EntryErrFunc(void);
int kmSetHSyncLine(void);
int mwRnaErrCallFunc(int, ...);
int mwRnaFinish(void);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int, int, int, int, int, int);
int mwRnaSetSfreq(int, int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int mwRnaCreate_8c1f1d9c(int a4, int a5, int a6);
int thunk_kmSetHSyncLine(void);
int thunk_ADXERR_EntryErrFunc(void);
int thunk_mwRnaFinish(void);

int mwRnaCreate_8c1f1d9c(int a4, int a5, int a6)
{
    int t16;
    int t20;
    int t30;
    int t35;
    int t44;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1F1D9C:;
    R11 = (R4);
    R12 = (0x8C200162);
    R13 = (R5);
    if (((int)R5 < (int)0x1)) goto L_8C1F1DBC;
    goto L_8C1F1DB6;
    L_8C1F1DB6:;
    if (((int)R13 <= (int)0x2)) goto L_8C1F1DC6;
    goto L_8C1F1DBC;
    L_8C1F1DBC:;
    *(int *)((int)stk + 4) = 0x8C20AB80;
    mwRnaErrCallFunc(0x8C20AB80);
    goto L_8C1F1DE2;
    L_8C1F1DE2:;
    R0 = (0x0);
    goto L_8C1F1E9A;
    L_8C1F1E9A:;
    return R0;
    L_8C1F1DC6:;
    if ((R11 == 0)) goto L_8C1F1DDA;
    goto L_8C1F1DCA;
    L_8C1F1DCA:;
    R10 = (0x0);
    R4 = (R11);
    R5 = (0x0);
    if (((int)R13 <= 0)) goto L_8C1F1DEE;
    goto L_8C1F1DD4;
    L_8C1F1DD4:;
    if (((*(int *)((R4 + 0x0))) != 0)) goto L_8C1F1DE6;
    goto L_8C1F1DDA;
    L_8C1F1DDA:;
    *(int *)((int)stk + 4) = 0x8C20ABB0;
    mwRnaErrCallFunc(0x8C20ABB0);
    R14 = (0x8C20ABB0);
    goto L_8C1F1DE2;
    L_8C1F1DE6:;
    t16 = (int)(R5 + 0x1) < (int)R13;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x1));
    if (t16) goto L_8C1F1DD4;
    goto L_8C1F1DEE;
    L_8C1F1DEE:;
    ovLockCs_8c200114(((int)stk + 8));
    t20 = mwlRnaAlloc();
    R14 = (t20);
    if ((t20 != 0)) goto L_8C1F1E28;
    goto L_8C1F1DFE;
    L_8C1F1DFE:;
    *(int *)((int)stk + 4) = 0x8C20ABDC;
    mwRnaErrCallFunc(0x8C20ABDC);
    goto L_8C1F1E92;
    L_8C1F1E92:;
    ovUnlockCs_8c20012c(((int)stk + 8));
    R0 = (R14);
    goto L_8C1F1E9A;
    L_8C1F1E28:;
    *(unsigned char *)((R14 + 0x3)) = R13;
    *(unsigned char *)((R14 + 0x2)) = R13;
    R4 = (R10);
    R5 = (R10);
    if (((int)R13 <= 0)) goto L_8C1F1E4A;
    goto L_8C1F1E36;
    L_8C1F1E36:;
    *(unsigned int *)((((R14 + 0x10) + R4) + 0x0)) = (*(int *)((R11 + R4)));
    t30 = (int)(R5 + 0x1) < (int)R13;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x1));
    if (t30) goto L_8C1F1E36;
    goto L_8C1F1E4A;
    L_8C1F1E4A:;
    t35 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C20C8B0) + 0x14)))))(R13, R5, R6);
    *(unsigned int *)((R14 + 0x38)) = t35;
    if ((t35 != 0)) goto L_8C1F1E68;
    goto L_8C1F1E5C;
    L_8C1F1E5C:;
    *(int *)((int)stk + 4) = 0x8C20AC0C;
    mwRnaErrCallFunc(0x8C20AC0C);
    R14 = (R10);
    goto L_8C1F1E92;
    L_8C1F1E68:;
    mwlRnaSetInitMember(R14);
    mwRnaSetBitPerSmpl(R14, 0x10);
    mwRnaSetSfreq(R14, 0xAC44);
    mwRnaSetNumChan(R14, (unsigned char)(*(signed char *)((R14 + 0x3))), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    t44 = *(int *)((R14 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = t44;
    *(unsigned int *)((R14 + 0x28)) = (((int (*)(int))((*(int *)(((*(int *)((t44 + 0x0))) + 0x18)))))(t44));
    *(unsigned char *)((R14 + 0x0)) = 0x1;
    goto L_8C1F1E92;
}

int thunk_kmSetHSyncLine(void)
{
    return kmSetHSyncLine();
}

int thunk_ADXERR_EntryErrFunc(void)
{
    return ADXERR_EntryErrFunc();
}

int thunk_mwRnaFinish(void)
{
    return mwRnaFinish();
}
