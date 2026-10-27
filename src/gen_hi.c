/* Straight-line functions with calls and guards (batch gen_hi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlSin(int);
int sprPutAtAlpha(int, Stk3, float);
int decoNumDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);

int decoNumDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    float u15;
    int t0;
    float t1;
    float u3;
    float u5;
    int t40;
    int t45;
    int t50;
    int stk[45];

    stk[34] = a8;
    stk[35] = a9;
    stk[36] = a10;
    *(unsigned int *)(((int)stk + 40)) = a4;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 40) + 0x8)) = *(struct mv10 *)(0x8C110954); }
    u15 = 1.0f;
    if (a7 == 0) {
        t0 = *(int *)0x8C20D198;
        t1 = nlSin((((t0 << 1) + t0) << 8));
        u3 = t1;
        if (0.0f > t1) {
            u3 = (t1 * (-1.0f));
        }
        u5 = 0.5f;
        u5 = u5 + 0.5f * u3;
        u15 = u5;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x30)) = *(struct mv3 *)((((int)stk + 40) + 0x60)); }
    *(unsigned int *)(((int)stk + 44)) = ((int)((int)(*(int *)(((int)stk + 40))) % (int)0xA));
    *(unsigned int *)(((int)stk + 40)) = ((int)((int)(*(int *)(((int)stk + 40))) / (int)0xA));
    *(float *)(((((int)stk + 40) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x30) + 0x0))) - (*(float *)0x8C0A5E94));
    if (a7 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
        sprPutAtAlpha(0x8C341F88, *(Stk3 *)(((int)stk + 28)), (f4 * u15));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x60)); }
    sprPutAtAlpha(0x8C341DA8, *(Stk3 *)(((int)stk + 28)), f4);
    *(float *)(((((int)stk + 40) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x60) + 0x0))) + (*(float *)0x8C0A5EA0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x60)); }
    t40 = *(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 40))) << 2)));
    sprPutAtAlpha((((((t40 << 2) + t40) << 2) << 2) + 0x8C341A38), *(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 40) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x60) + 0x0))) + (*(float *)0x8C0A5EA4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x60)); }
    t45 = *(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 44))) << 2)));
    sprPutAtAlpha((((((t45 << 2) + t45) << 2) << 2) + 0x8C341A38), *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 40) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x30) + 0x0))) + (*(float *)0x8C0A5EA8));
    t50 = 0x8C0A5EA8;
    if (a7 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
        t50 = (sprPutAtAlpha(0x8C341FD8, *(Stk3 *)(((int)stk + 28)), (f4 * u15)));
    }
    return t50;
}
