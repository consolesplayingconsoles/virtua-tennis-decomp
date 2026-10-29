/* Straight-line functions with calls and guards (batch gen_vi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int sprPutAt();
int hudRankIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int hudRankIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[22];
    register int t4;
    register int t1;
    register int t8;
    register int t10;
    register int t17;
    register int t29;
    register int t32;
    register int t25;
    register int t20;
    register int t13;

    stk[11] = a8;
    stk[12] = a9;
    stk[13] = a10;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    t4 = a4;
                    if (a4 == 4) {
                        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 82.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                        t1 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E730, a5, a6, a7, *(Stk3 *)(((int)stk + 16)));
                        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 258.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                        t4 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E780, *(Stk3 *)(((int)stk + 16))));
                    }
                    t13 = t4;
                } else {
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 33.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t8 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E550, a5, a6, a7, *(Stk3 *)(((int)stk + 16)));
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 65.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t10 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33E5A0, *(Stk3 *)(((int)stk + 4)));
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 216.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t13 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E5F0, *(Stk3 *)(((int)stk + 16))));
                }
                t20 = t13;
            } else {
                *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 83.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                t17 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E4B0, a5, a6, a7, *(Stk3 *)(((int)stk + 16)));
                *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 235.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                t20 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E500, *(Stk3 *)(((int)stk + 16))));
            }
            t25 = t20;
        } else {
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 139.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
            t25 = (((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E640, a5, a6, a7, *(Stk3 *)(((int)stk + 16))));
        }
        t32 = t25;
    } else {
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 42.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t29 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E690, a5, a6, a7, *(Stk3 *)(((int)stk + 16)));
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 235.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t32 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E6E0, *(Stk3 *)(((int)stk + 4))));
    }
    return t32;
}
