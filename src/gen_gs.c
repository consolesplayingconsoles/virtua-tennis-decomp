/* Straight-line functions with calls and guards (batch gen_gs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int hudBarDrawAlt(Stk3, Stk3, float, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int hudCallMsgDrawA9f0(float f4, float f5);

int hudCallMsgDrawA9f0(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C09A3A4)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A3AC);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A3B0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33A9F0, 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}
