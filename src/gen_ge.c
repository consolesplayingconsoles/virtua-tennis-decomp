/* Straight-line functions with calls and guards (batch gen_ge): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int sprPutCropH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);

int sprPutCropH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    float u0;
    float u4;
    float u5;
    float u6;
    float u11;
    float u18;
    float u12;
    int stk[23];

    stk[12] = a8;
    stk[13] = a9;
    stk[14] = a10;
    u0 = *(float *)((a4 + 0x18));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x20)));
    *(float *)(((int)stk + 20)) = (*(float *)((a4 + 0x1C)));
    *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x24)));
    u4 = *(float *)((a4 + 0x10));
    u5 = *(float *)((a4 + 0x14));
    if (a5 == 0) {
        u6 = u0;
        u6 = u6 + u5 * f5;
        *(float *)((a4 + 0x20)) = u6;
        *(float *)((a4 + 0x10)) = (f5 * u4);
    }
    if (a5 == 1) {
        *(float *)((a4 + 0x18)) = ((u0 - (f5 * u4)) + u4);
        *(float *)((a4 + 0x10)) = (f5 * u4);
        u11 = *(float *)&a8;
        u11 = u11 + (float)a6 * (1.0f - f5);
        u12 = u11;
        *(float *)(((int)stk + 48)) = u12;
        u18 = u12;
    } else {
        u18 = *(float *)&a8;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    sprPutAtAlpha(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)((a4 + 0x18)) = u0;
    *(float *)((a4 + 0x1C)) = (*(float *)(((int)stk + 20)));
    *(float *)((a4 + 0x20)) = (*(float *)(((int)stk + 16)));
    *(float *)((a4 + 0x24)) = (*(float *)(((int)stk + 24)));
    *(float *)((a4 + 0x10)) = u4;
    *(float *)((a4 + 0x14)) = u5;
    return 0x14;
}
