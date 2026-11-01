/* Straight-line functions with calls and guards (batch gen_wz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int sprSet192PutB(int a4, Stk3 s);

int sprSet192PutB(int a4, Stk3 s)
{
    int stk[18];

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    *(unsigned int *)(((int)stk + 16)) = (((((a4 << 2) + a4) << 2) << 2) + 0x8C37D4B0);
    *(float *)(((((((a4 << 2) + a4) << 2) << 2) + 0x8C37D4B0) + 0x2C)) = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    return (sprPutAtAlpha((*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}
