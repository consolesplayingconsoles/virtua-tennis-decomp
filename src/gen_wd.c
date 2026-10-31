/* Straight-line functions with calls and guards (batch gen_wd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int charaModelCount(int, int);
int charaTexCount(int);
int modelSwapMaterial(int, int, int);
int uniformTexRestore(int a4);

int uniformTexRestore(int a4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_0 = *(int *)0x8C287D5C;
    v0_2 = (0x0);
    v0_3 = (v0_0);
    v0_7 = (0x38);
    if ((v0_0 == 2)) goto L_8C0C6812;
    if ((v0_3 != 3)) goto L_8C0C681A;
    L_8C0C6812:;
    v0_4 = ((*(int *)0x8C421F70));
    v0_6 = (v0_2);
    L_8C0C6822:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 * v0_7);
    v0_3 = *(int *)((((v0_6 * v0_7) + 0x8C343264) + 0x0));
    v0_7 = *(int *)((((v0_6 * v0_7) + 0x8C343264) + 0x34));
    v0_6 = (v0_7);
    v0_0 = (v0_7);
    v0_1 = (((charaTexCount(v0_3)) - 27));
    v0_5 = (v0_3);
    if ((v0_7 == -1)) goto L_8C0C68D0;
    v0_6 = (((v0_4 * 0x70) + 0x8C1AF8A4));
    v0_3 = (v0_2);
    v0_7 = (0x1C);
    L_8C0C684C:;
    *(unsigned int *)((v0_6 + 0x0)) = v0_2;
    v0_4 = (int)(v0_3 + 0x1) < (int)v0_7;
    v0_6 = ((v0_6 + 0x4));
    v0_3 = ((v0_3 + 0x1));
    if (v0_4) goto L_8C0C684C;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_0 = ((((v0_0 << 2) << 2) + 0x8C124C10));
    v0_7 = ((((v0_5 << 2) << 2) + 0x8C124AF0));
    v0_4 = (((v0_5 << 2) + 0x8C1AF85C));
    v0_2 = (0x8C089D6C);
    L_8C0C68B4:;
    v0_2 = charaModelCount(v0_5, v0_3);
    v0_6 = (v0_2);
    if (((int)(*(int *)(((int)stk + 4))) < (int)v0_2)) goto L_8C0C687A;
    *(unsigned int *)(((0x8C343264 + (*(int *)(((int)stk + 8)))) + 0x34)) = 0xFFFFFFFF;
    *(unsigned int *)(((0x8C343264 + (*(int *)(((int)stk + 8)))) + 0x30)) = 0xFFFFFFFF;
    L_8C0C68D0:;
    return v0_6;
    L_8C0C687A:;
    v0_2 = *(int *)(((int)stk + 4));
    modelSwapMaterial((*(int *)(((v0_2 << 2) + (*(int *)((v0_4 + 0x0)))))), ((*(int *)((v0_0 + 0x0))) + v0_1), (*(int *)((v0_7 + 0x0))));
    modelSwapMaterial((*(int *)(((v0_2 << 2) + (*(int *)((v0_4 + 0x0)))))), ((*(int *)((v0_0 + 0x4))) + v0_1), (*(int *)((v0_7 + 0x4))));
    modelSwapMaterial((*(int *)(((v0_2 << 2) + (*(int *)((v0_4 + 0x0)))))), ((*(int *)((v0_0 + 0x8))) + v0_1), (*(int *)((v0_7 + 0x8))));
    modelSwapMaterial((*(int *)(((v0_2 << 2) + (*(int *)((v0_4 + 0x0)))))), ((*(int *)((v0_0 + 0xC))) + v0_1), (*(int *)((v0_7 + 0xC))));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_8C0C68B4;
    L_8C0C681A:;
    v0_4 = ((*(int *)(((v0_6 * v0_7) + 0x8C343268))));
    goto L_8C0C6822;
}
