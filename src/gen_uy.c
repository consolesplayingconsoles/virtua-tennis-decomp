/* Straight-line functions with calls and guards (batch gen_uy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndBlockMove(int, int, int);
int nlsndCheckPackIndex(int, int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitBlockMove(void);
int nlsnd_PL_WaitRequest(void);
int nlsndPackLoad(int a4, int a5);

int nlsndPackLoad(int a4, int a5)
{
    int stk[7];

    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    v0_2 = nlsndCheckPackIndex(v0_0, v0_1, 0x0);
    v0_1 = (v0_0);
    v0_0 = (v0_2);
    if ((v0_2 != 0)) goto L_8C0F52EE;
    v0_0 = *(int *)((v0_1 + 0x8));
    v0_2 = nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((v0_1 + 0x4))), v0_0, ((int)stk + 4));
    v0_4 = nlsnd_PL_WaitRequest();
    v0_2 = (v0_2);
    v0_3 = (v0_0);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C0F52EE;
    v0_4 = nlsnd_PL_WaitAica1();
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C0F52EE;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C0F52DA;
    v0_4 = nlsndBlockMove(v0_2, (v0_2 + v0_3), (*(int *)(((int)stk + 4))));
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C0F52EE;
    v0_4 = nlsnd_PL_WaitBlockMove();
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C0F52EE;
    L_8C0F52DA:;
    nlsndG2WriteN(v0_1, v0_2, ((unsigned int)v0_3 >> 2));
    v0_1 = nlsnd_PL_WaitAica2andGo();
    v0_0 = (v0_1);
    if (!((v0_1 == 0))) goto L_8C0F52EE;
    v0_0 = (0x0);
    goto L_8C0F5302;
    L_8C0F52EE:;
    v0_0 = (v0_0);
    L_8C0F5302:;
    return v0_0;
}
