/* Straight-line functions with calls and guards (batch gen_wi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int charaTexFree(int);
int charaTexLoad(int, int);
int fileLoadCloseSlot(int);
int muneTexLoad(int, int, int);
int muneSlotLoad(int a4, int a5);

int muneSlotLoad(int a4, int a5)
{
    int stk[126];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_1 = a5;
    v0_4 = (*(int *)(((((v0_3 << 2) << 2) + 0x8C37DAAC) + 0x4))) == v0_1;
    v0_0 = (0x8C37DAAC);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    v0_3 = ((((v0_3 << 2) << 2) + 0x8C37DAAC));
    if (v0_4) goto L_8C0C63A2;
    if (((*(int *)((v0_3 + 0x8))) == -1)) goto L_8C0C63A2;
    fileLoadCloseSlot(v0_2);
    L_8C0C63A2:;
    v0_3 = (0x8C1AFA64);
    if (((*(int *)(((v0_1 << 2) + 0x8C1AFA64))) != 0)) goto L_8C0C63E8;
    *(unsigned int *)(((((v0_2 << 2) << 2) + v0_0) + 0x8)) = v0_1;
    v0_4 = muneTexLoad(v0_1, (*(int *)(((v0_2 << 2) + 0x8C124AE0))), v0_2);
    v0_3 = (v0_4);
    if ((v0_4 != 1)) goto L_8C0C63E8;
    *(unsigned int *)(((((v0_2 << 2) << 2) + v0_0) + 0x0)) = (*(int *)(((((v0_2 << 2) << 2) + v0_0) + 0x8)));
    v0_3 = charaTexLoad((*(int *)(((((v0_2 << 2) << 2) + v0_0) + 0x8))), v0_2);
    *(unsigned int *)(((((v0_2 << 2) << 2) + v0_0) + 0xC)) = ((*(int *)(((((v0_2 << 2) << 2) + v0_0) + 0xC))) + 0x1);
    *(unsigned int *)(((((v0_2 << 2) << 2) + v0_0) + 0x8)) = 0xFFFFFFFF;
    v0_3 = (v0_3);
    L_8C0C63E8:;
    v0_4 = ((((v0_2 << 2) << 2) + v0_0));
    if ((v0_1 == (*(int *)(((((v0_2 << 2) << 2) + v0_0) + 0x4))))) goto L_8C0C63FA;
    v0_3 = ((charaTexFree((*(int *)((v0_4 + 0x4))))));
    L_8C0C63FA:;
    *(unsigned int *)(((((v0_2 << 2) << 2) + v0_0) + 0x4)) = v0_1;
    return v0_3;
}
