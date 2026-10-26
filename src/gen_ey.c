/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutCropV(int, int, int, int, Stk3, float, float, float);
int hudCallDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);

int hudCallDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t1;
    int t46;
    int t41;
    int t36;
    int t31;
    int t26;
    int t21;
    int t16;
    int t11;
    int t6;
    int stk[21];

    stk[10] = a8;
    stk[11] = a9;
    stk[12] = a10;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                                if (a4 != 7) {
                                    if (a4 != 8) {
                                        t1 = a4;
                                        if (a4 != 9) {
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                                            t1 = (sprPutCropV(0x8C33DDD0, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                                        }
                                        t6 = t1;
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                                        t6 = (sprPutCropV(0x8C33DD80, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                                    }
                                    t11 = t6;
                                } else {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                                    t11 = (sprPutCropV(0x8C33DD30, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                                }
                                t16 = t11;
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                                t16 = (sprPutCropV(0x8C33DCE0, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                            }
                            t21 = t16;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                            t21 = (sprPutCropV(0x8C33A720, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                        }
                        t26 = t21;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                        t26 = (sprPutCropV(0x8C33A770, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                    }
                    t31 = t26;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                    t31 = (sprPutCropV(0x8C33A7C0, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
                }
                t36 = t31;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                t36 = (sprPutCropV(0x8C33A860, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
            }
            t41 = t36;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
            t41 = (sprPutCropV(0x8C33A810, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
        }
        t46 = t41;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
        t46 = (sprPutCropV(0x8C33A6D0, 0x1, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
    }
    return t46;
}
