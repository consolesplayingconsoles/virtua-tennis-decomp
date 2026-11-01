/* Straight-line functions with calls and guards (batch gen_wm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndbIsValid(void);
int set_event(int, int);
int ndbLoadRequest(void);

int ndbLoadRequest(void)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = R14;
    *(int *)((int)stk + 8) = v0_0;
    v0_2 = *(int *)0x8C20D14C;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_0 = (v0_2);
    R14 = (0x1);
    v0_1 = (0x8C181750);
    if ((v0_2 != 6)) goto L_8C0826CC;
    v0_2 = (int)(*(int *)0x8C2FCC20) >= (int)0x2;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (0x8C2FCC20);
    if (v0_2) goto L_8C0826CC;
    *(unsigned int *)((v0_1 + 0x0)) = R14;
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_8C0826CC:;
    v0_2 = (*(int *)0x8C185410) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_2) goto L_8C0826E2;
    *(unsigned int *)((v0_1 + 0x0)) = R14;
    *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
    *(volatile int *)((int)stk + 4);
    return v0_0;
    L_8C0826E2:;
    v0_0 = (*(int *)0x8C30195C) != (*(int *)0x8C287ACC);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_0) goto L_8C0826FE;
    v0_1 = *(int *)0x8C301958;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (v0_1);
    if (((int)v0_1 > 0)) goto L_8C082710;
    v0_1 = ndbIsValid();
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_8C082710;
    L_8C0826FE:;
    v0_0 = set_event(0x18, 0x8C082716);
    *(unsigned int *)0x8C301958 = R14;
    *(unsigned int *)((v0_0 + 0x14)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (v0_0);
    L_8C082710:;
    *(volatile int *)((int)stk + 4);
    return v0_0;
}
