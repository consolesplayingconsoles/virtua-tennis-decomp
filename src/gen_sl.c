/* Straight-line functions with calls and guards (batch gen_sl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTrnsl(int, int);
int primVertexSet(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int primRect(int a4, int a5, int a6, Stk3 s);

int primRect(int a4, int a5, int a6, Stk3 s)
{
    int t4;
    int t9;
    int stk[41];

    stk[30] = s.w[0];
    stk[31] = s.w[1];
    stk[32] = s.w[2];
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x64) + 0x0))), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    primVertexSet(a6, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x8));
    t4 = *(int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t4), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    *(int *)((int)stk + 4) = (0x10 + (((int)stk + 20) + 0x8));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x8)));
    t9 = *(int *)(((int)stk + 24));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x64) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t9), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    *(int *)((int)stk + 4) = (0x20 + (((int)stk + 20) + 0x8));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x8)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t4), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t9), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    *(int *)((int)stk + 4) = (0x30 + (((int)stk + 20) + 0x8));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x8)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x8)));
}
