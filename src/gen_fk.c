/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int emotFaceVtxGet(int, int, int);
int emotFaceReset(int a4);

int emotFaceReset(int a4)
{
    int t9;
    int t12;
    int t13;
    int t15;
    int t28;
    int stk[14];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    int T_;
    R4 = a4;
    *(unsigned int *)(((int)stk + 8)) = (R4 << 2);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((R4 << 2) + 0x8C1AA4BC)));
    R10 = (((*(int *)(((int)stk + 8))) + 0x8C1AA504));
    R11 = (0x0);
    R12 = (R4);
    R13 = (0x0);
    R8 = (0x1);
    R9 = ((emotFaceVtxGet(R4, 0x0, 0x0)));
    L_8C0BE2B2:;
    t9 = emotFaceVtxGet(R12, R13, 0x0);
    R0 = (t9);
    if ((t9 != -1)) goto L_8C0BE25A;
    return R0;
    L_8C0BE25A:;
    t12 = *(int *)(((int)stk + 4));
    t13 = emotFaceVtxGet(R12, R13, 0x1);
    t15 = R9 == (emotFaceVtxGet(R12, R13, 0x0));
    R14 = ((t12 + (t13 << 2)));
    if (t15) goto L_8C0BE276;
    R11 = ((R11 + 0x3));
    L_8C0BE276:;
    *(float *)((R14 + 0x0)) = (*(float *)((((*(int *)((R10 + 0x0))) + (((R11 << 1) + R11) << 2)) + 0x0)));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) | R8);
    *(float *)(((R14 + 0x4) + 0x0)) = (*(float *)((((*(int *)((R10 + 0x0))) + (((R11 << 1) + R11) << 2)) + 0x4)));
    *(float *)((((R14 + 0x4) + 0x4) + 0x0)) = (*(float *)((((((R11 << 1) + R11) << 2) + (*(int *)((R10 + 0x0)))) + 0x8)));
    t28 = (emotFaceVtxGet(R12, R13, 0x0));
    R13 = ((R13 + 0x1));
    R14 = (((R14 + 0x4) + 0x4));
    R9 = t28;
    goto L_8C0BE2B2;
}
