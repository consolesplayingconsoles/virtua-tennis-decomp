/* Straight-line functions with calls and guards (batch gen_lv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int hudSignPut(int a4, Stk3 s, float f4);

int hudSignPut(int a4, Stk3 s, float f4)
{
    int t39;
    int t31;
    int t23;
    int t15;
    int t7;
    int stk[20];

    stk[9] = s.w[0];
    stk[10] = s.w[1];
    stk[11] = s.w[2];
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        *(float *)(((((int)stk + 16) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x4))) + 1.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        sprPutAtAlpha(0x8C33F630, *(Stk3 *)(((int)stk + 4)), f4);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x4))) - 1.0f);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 201.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t7 = 0x230;
                    } else {
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 10.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        sprPutAtAlpha(0x8C33F400, *(Stk3 *)(((int)stk + 4)), f4);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 117.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t7 = 0x140;
                    }
                    t15 = t7;
                } else {
                    *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                    sprPutAtAlpha(0x8C33F4A0, *(Stk3 *)(((int)stk + 4)), f4);
                    *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                    t15 = 0x140;
                }
                t23 = t15;
            } else {
                *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                sprPutAtAlpha(0x8C33F590, *(Stk3 *)(((int)stk + 4)), f4);
                *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                t23 = 0x140;
            }
            t31 = t23;
        } else {
            *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            sprPutAtAlpha(0x8C33F450, *(Stk3 *)(((int)stk + 4)), f4);
            *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            t31 = 0x140;
        }
        t39 = t31;
    } else {
        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        sprPutAtAlpha(0x8C33F540, *(Stk3 *)(((int)stk + 4)), f4);
        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        t39 = 0x140;
    }
    return (sprPutAtAlpha((t39 + 0x8C33F3B0), *(Stk3 *)(((int)stk + 4)), f4));
}
