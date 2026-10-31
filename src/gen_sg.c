/* Straight-line functions with calls and guards (batch gen_sg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char g_0c2f605c[];

int mwlRnaExecSvrHndl(int, int, int, int, int, int, int, int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int mwRnaExecServer(int a4);

int mwRnaExecServer(int a4)
{
    int stk[7];

    int R0;
    int R2;
    int R3;
    int R5;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    v0_4 = a4;
    ovLockCs_8c200114(((int)stk + 4));
    v0_0 = (0x8C46DB0C);
    v0_1 = (0x90);
    v0_2 = ((int)g_0c2f605c);
    v0_3 = ((int)g_0c2f605c);
    v0_4 = ((int)g_0c2f605c);
    L_8C1F2800:;
    if (((unsigned char)(*(signed char *)((v0_3 + 0x0))) != 1)) goto L_8C1F280C;
    mwlRnaExecSvrHndl(v0_2, R5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    L_8C1F280C:;
    v0_4 = (unsigned int)(v0_3 + v0_1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + v0_1));
    v0_3 = ((v0_3 + v0_1));
    if (v0_4) goto L_8C1F2800;
    return (ovUnlockCs_8c20012c(((int)stk + 4)));
}
