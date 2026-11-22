/* Straight-line functions with calls and guards (batch gen_rp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmyRegisterBGPlane(int);
int kmiProcessVertex_16(int a4, int a5, int a6, int a7);

int kmiProcessVertex_16(int a4, int a5, int a6, int a7)
{
    int stk[30];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = R5;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = R6;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = R7;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((R4 + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((R4 + 0x4)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((R4 + 0x8)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((R4 + 0xC)));
    *(float *)(((int)stk + 32)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x4)));
    *(float *)(((int)stk + 36)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x8)));
    *(float *)(((int)stk + 40)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0xC)));
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x34)));
    *(unsigned int *)(((int)stk + 52)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 56)) = (*(int *)0x8C460800);
    *(float *)(((int)stk + 60)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x10)));
    *(float *)(((int)stk + 64)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x14)));
    *(float *)(((int)stk + 68)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x18)));
    *(unsigned int *)(((int)stk + 72)) = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x38)));
    *(unsigned int *)(((int)stk + 80)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 84)) = (*(int *)0x8C460800);
    *(float *)(((int)stk + 88)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x1C)));
    *(float *)(((int)stk + 92)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x20)));
    *(float *)(((int)stk + 96)) = (*(float *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x24)));
    *(unsigned int *)(((int)stk + 100)) = (*(int *)(((*(int *)((((int)stk + 4) + 0x0))) + 0x3C)));
    *(unsigned int *)(((int)stk + 108)) = (*(int *)0x8C4607FC);
    *(unsigned int *)(((int)stk + 112)) = (*(int *)0x8C460800);
    return (kmyRegisterBGPlane((((int)stk + 4) + 0xC)));
}
