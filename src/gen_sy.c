/* Straight-line functions with calls and guards (batch gen_sy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTrnsl(int, int);
int primVertexSet(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int resultBoxDraw(int a4, int a5, int a6, int a7, int a8);

int resultBoxDraw(int a4, int a5, int a6, int a7, int a8)
{
    int stk[46];
    register int t17;
    register int t21;
    register int t23;
    register int t27;
    register int t29;
    register int t33;
    register int t35;
    register int t39;
    int R1004;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    float R1152;
    float R1156;

    R1004 = *(int *)((int)stk + 4);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1152 = *(float *)((int)stk + 152);
    R1156 = *(float *)((int)stk + 156);

    stk[37] = a8;
    R1020 = (((int)stk + 20) + 0x10);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -85.0f), ((R1152) + (-1.0f)), (R1156));
    R1004 = (((int)stk + 20) + 0x10);
    primVertexSet(a4, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    R1028 = ((((int)stk + 20) + 0x10) + 0x10);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -146.0f), ((R1152) + (-1.0f)), (R1156));
    R1004 = ((((int)stk + 20) + 0x10) + 0x10);
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    R1032 = ((((int)stk + 20) + 0x10) + 0x20);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -85.0f), ((R1152) + 1.0f), (R1156));
    R1004 = ((((int)stk + 20) + 0x10) + 0x20);
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    R1024 = ((((int)stk + 20) + 0x10) + 0x30);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + -146.0f), ((R1152) + 1.0f), (R1156));
    R1004 = ((((int)stk + 20) + 0x10) + 0x30);
    primVertexSet(a4, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x30));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10));
    t17 = R1020;
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 108.0f), ((R1152) + (-1.0f)), (R1156));
    t21 = t17;
    R1004 = t21;
    primVertexSet(a5, 0x0, 0x0, 0x0, t21);
    t23 = R1028;
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 169.0f), ((R1152) + (-1.0f)), (R1156));
    t27 = t23;
    R1004 = t27;
    primVertexSet(a5, 0x0, 0x0, 0x0, t27);
    t29 = R1032;
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 108.0f), ((R1152) + 1.0f), (R1156));
    t33 = t29;
    R1004 = t33;
    primVertexSet(a5, 0x0, 0x0, 0x0, t33);
    t35 = R1024;
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) + 169.0f), ((R1152) + 1.0f), (R1156));
    t39 = t35;
    R1004 = t39;
    primVertexSet(a5, 0x0, 0x0, 0x0, t39);
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}
