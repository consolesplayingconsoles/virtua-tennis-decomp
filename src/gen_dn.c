/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int sprPutAtAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int sprPutAtAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[15];

    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    *(float *)(((int)stk + 4)) = f4;
    nlSetCommonTextureOffset((*(int *)((a4 + 0x0))));
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x8)));
    *(float *)((a4 + 0x2C)) = (*(float *)(((int)stk + 4)));
    return (nlSprPut(a4));
}
