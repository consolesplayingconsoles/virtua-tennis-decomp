/* Straight-line functions with calls and guards (batch gen_sk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
int nlDispStripTrnsl(int, int);
int primVertexSet(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int primLineV(int a4, int a5, Stk6 s);

int primLineV(int a4, int a5, Stk6 s)
{
    int t4;
    int stk[42];

    stk[28] = s.w[0];
    stk[29] = s.w[1];
    stk[30] = s.w[2];
    stk[31] = s.w[3];
    stk[32] = s.w[4];
    stk[33] = s.w[5];
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x5C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x8))));
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x4);
    primVertexSet(a5, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x4));
    t4 = *(int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x5C) + 0x0))) - (float)t4), (*(float *)(((((int)stk + 20) + 0x5C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x8))));
    *(int *)((int)stk + 4) = (0x10 + (((int)stk + 20) + 0x4));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x4)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x68) + 0x0))), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    *(int *)((int)stk + 4) = (0x20 + (((int)stk + 20) + 0x4));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x4)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x68) + 0x0))) - (float)t4), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    *(int *)((int)stk + 4) = (0x30 + (((int)stk + 20) + 0x4));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x4)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x4)));
}
