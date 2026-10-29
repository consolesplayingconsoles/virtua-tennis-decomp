/* Straight-line functions with calls and guards (batch gen_ra): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int, int, int);
float sprSheetPut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

float sprSheetPut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    int stk[17];

    if (((a4 & 0x7) != 7) && (((0xB & a4) != 11) && ((0xF & a4) != 15))) {
        *(unsigned int *)(((int)stk + 4)) = 0x8;
        t0 = 0x1;
        t1 = 0x0;
        t2 = a5;
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
        t0 = 0xFFFFFFFF;
        t1 = 0x7;
        t2 = 0xFFFFFFFF;
    }
    *(unsigned int *)(((int)stk + 16)) = (t0 << 2);
    *(unsigned int *)(((int)stk + 12)) = ((((t0 << 2) + t0) << 2) << 2);
    *(unsigned int *)(((int)stk + 8)) = (t0 << 2);
    t3 = *(int *)(((int)stk + 4));
    u0 = f4;
    if (t1 != t3) {
        t4 = t3;
        t3 = ((((t0 << 2) + t0) << 2) << 2);
        t5 = ((t1 << 2) + 0x8C2878D8);
        t6 = t2;
        t2 = ((t1 << 2) + 0x8C2878D8);
        t7 = ((t1 << 2) + 0x8C2878D8);
        t8 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C287658);
        t9 = t1;
        u1 = f4;
        u2 = f5;
        u3 = f6;
        u4 = f7;
        u5 = f4;
        for (;;) {
            t1 = t6;
            if ((*(int *)((0x8C287658 + ((((t9 << 2) + t9) << 2) << 2)))) != -1) {
                t5 = t9;
                t5 = (t5 << 2);
                t5 = (t5 + t9);
                t5 = (t5 << 2);
                t5 = (t5 << 2);
                t5 = (t5 + 0x8C287658);
                *(float *)((t5 + 0x4)) = u5;
                *(float *)((t5 + 0x8)) = f5;
                *(float *)((t5 + 0xC)) = f6;
                *(float *)((t5 + 0x2C)) = f7;
                *(unsigned int *)((t5 + 0x34)) = a4;
                nlSprPut(t5, t6, a6, a7);
                t3 = 0x8C287654;
                t5 = (*(int *)((t3 + 0x0)));
                if (t0 == -1) {
                    t6 = t9;
                    t6 = (t6 << 2);
                    t6 = (t6 + t9);
                    t6 = (t6 << 2);
                    t6 = (t6 << 2);
                    u6 = (*(float *)((t7 + 0x0)));
                    t6 = (t6 + 0x8C287658);
                    u7 = (*(float *)((t6 + 0x18)));
                    u8 = (float)(*(int *)((t5 + 0x4)));
                    u9 = (*(float *)((t6 + 0x20)));
                    u9 = (u9 - u7);
                    u7 = u8;
                    u10 = u6;
                    u10 = u10 + u7 * u9;
                    u6 = u10;
                    u5 = (u5 - u6);
                    t10 = t6;
                } else {
                    u7 = (*(float *)((t8 + 0x18)));
                    u9 = (*(float *)((t8 + 0x20)));
                    u6 = (*(float *)((t2 + 0x0)));
                    u8 = (float)(*(int *)((t5 + 0x4)));
                    u9 = (u9 - u7);
                    u7 = u8;
                    u8 = u6;
                    u8 = u8 + u7 * u9;
                    u6 = u8;
                    u5 = (u5 + u6);
                }
                t1 = t10;
            } else {
                t10 = t4;
                u6 = u1;
                u7 = u2;
                u8 = u3;
                u9 = u4;
            }
            u1 = u6;
            u2 = u7;
            u3 = u8;
            u4 = u9;
            t4 = t10;
            t6 = t1;
            t9 = (t9 + t0);
            t3 = (*(int *)(((int)stk + 12)));
            t2 = (t2 + (*(int *)(((int)stk + 16))));
            t4 = (*(int *)(((int)stk + 8)));
            t8 = (t8 + t3);
            t7 = (t7 + t4);
            if (t9 == (*(int *)(((int)stk + 4)))) {
                break;
            }
        }
        u0 = u5;
    }
    return u0;
}
