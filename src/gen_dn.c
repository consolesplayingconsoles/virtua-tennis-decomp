/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetCommonTextureOffset(int);
int nlSprPut(int);
typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int a4, Stk3 v, float f4);

/* manual: the sprite, a vector by value on the stack and the alpha: the generated form also took r5-r7, which the code never reads */
int sprPutAtAlpha(int a4, Stk3 v, float f4)
{
    int stk[15];

    stk[4] = v.w[0];
    stk[5] = v.w[1];
    stk[6] = v.w[2];
    *(float *)(((int)stk + 4)) = f4;
    nlSetCommonTextureOffset((*(int *)((a4 + 0x0))));
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x8)));
    *(float *)((a4 + 0x2C)) = (*(float *)(((int)stk + 4)));
    return (nlSprPut(a4));
}
