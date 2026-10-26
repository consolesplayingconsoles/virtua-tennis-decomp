/* Straight-line functions with calls and guards (batch gen_ez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int sprPutAtAlpha();
int panelTopPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int panelTopPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int t4;
    int t6;
    int t10;
    int stk[32];

    stk[21] = a8;
    stk[22] = a9;
    stk[23] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x14)); }
    t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33FB80, a5, a6, a7, *(Stk3 *)(((int)stk + 52)), f4);
    *(float *)0x8C33FBE0 = (((*(float *)0x8C33FBF0) - (*(float *)0x8C33FBE8)) * 339.0f);
    *(float *)(((((int)stk + 64) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x14) + 0x0))) + 18.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 64) + 0x14)); }
    t4 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FBD0, *(Stk3 *)(((int)stk + 40)), f4);
    *(float *)(((((int)stk + 64) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x14) + 0x0))) + 339.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 64) + 0x14)); }
    t6 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FC20, *(Stk3 *)(((int)stk + 28)), f4);
    *(float *)(((((int)stk + 64) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x14) + 0x0))) + 56.0f);
    *(float *)0x8C33FC80 = (((*(float *)0x8C33FC90) - (*(float *)0x8C33FC88)) * 134.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0x14)); }
    t10 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FC70, *(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 64) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x14) + 0x0))) + 134.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 64) + 0x14)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FCC0, *(Stk3 *)(((int)stk + 4)), f4));
}
