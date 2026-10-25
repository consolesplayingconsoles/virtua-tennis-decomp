/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
void sprPutCropV(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);

void sprPutCropV(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    float u2;
    float u3;
    float u5;
    int stk[21];

    stk[12] = a8;
    *(float *)(((int)stk + 20)) = (*(float *)((a4 + 0x18)));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x20)));
    u2 = *(float *)((a4 + 0x1C));
    u3 = *(float *)((a4 + 0x24));
    *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x10)));
    u5 = *(float *)((a4 + 0x14));
    if (a5 == 0) {
        *(float *)((a4 + 0x24)) = ((f6 * u5) + u2);
        *(float *)((a4 + 0x14)) = (f6 * u5);
    }
    if (a5 == 1) {
        *(float *)((a4 + 0x1C)) = ((u2 - (f6 * u5)) + u5);
        *(float *)((a4 + 0x14)) = (f6 * u5);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    sprPutAtAlpha(a4, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x20)), f4);
    *(float *)((a4 + 0x18)) = (*(float *)(((int)stk + 20)));
    *(float *)((a4 + 0x1C)) = u2;
    *(float *)((a4 + 0x20)) = (*(float *)(((int)stk + 16)));
    *(float *)((a4 + 0x24)) = u3;
    *(float *)((a4 + 0x10)) = (*(float *)(((int)stk + 24)));
    *(float *)((a4 + 0x14)) = u5;
}
