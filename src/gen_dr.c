/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int, int, int);
int sprPutAt(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int sprPutAt(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[13];

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x8)));
    return (nlSprPut(a4, (((int)stk + 4) + 0x4), a6, a7));
}
