/* Straight-line functions with calls and guards (batch gen_jc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
extern int nlDispStripTrnsl();
int sprListPut(int, int, int, Stk3, float, float, float);
int shopDrawCatPanel(int a4, int a5, int a6, int a7, int a8);

int shopDrawCatPanel(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t3;
    int t2;
    int t1;
    int t5;
    int t6;
    int t7;
    int t18;
    int t19;
    int t25;
    int t26;
    int t27;
    int t0;
    float u8;
    float u9;
    int stk[58];

    stk[49] = a8;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x80 + ((int)stk + 16))) = *(struct mv5 *)(0x8C1271A8); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 16) + 0x40)) = *(struct mv16 *)(0x8C1271BC); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 16)) = *(struct mv16 *)(0x8C1271FC); }
    t4 = 0x0;
    if (a4 != 1) {
        t3 = 0x1;
        if (a4 != 6) {
            t2 = 0x2;
            if (a4 != 2) {
                t1 = 0x3;
                if (a4 != 0) {
                    if ((a4 == 4) || (a4 == 5)) {
                        t0 = 0x4;
                    }
                    t1 = t0;
                }
                t2 = t1;
            }
            t3 = t2;
        }
        t4 = t3;
    }
    t5 = 0x8C1271FC;
    t6 = 0x8C0F7C74;
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)0x2) {
            t5 = ((t7 << 2) << 2);
            t5 = (t5 + (((int)stk + 16) + 0x40));
            u8 = (*(float *)((t5 + 0x0)));
            t6 = ((t7 << 2) << 2);
            u9 = (*(float *)(((0xB4 + ((int)stk + 16)) + 0x0)));
            t6 = (t6 + ((int)stk + 16));
            u8 = (u8 + u9);
            *(float *)((t5 + 0x0)) = u8;
            u8 = (*(float *)((t6 + 0x0)));
            u9 = (*(float *)(((0xB4 + ((int)stk + 16)) + 0x0)));
            u8 = (u8 + u9);
            *(float *)((t6 + 0x0)) = u8;
        }
        u9 = (*(float *)(((0x4 + (0xB4 + ((int)stk + 16))) + 0x0)));
        u8 = (*(float *)(((((t7 << 2) << 2) + (((int)stk + 16) + 0x40)) + 0x4)));
        u8 = (u8 + u9);
        t18 = (((t7 << 2) << 2) + (((int)stk + 16) + 0x40));
        t19 = (((t7 << 2) << 2) + ((int)stk + 16));
        t7 = (t7 + 0x1);
        *(float *)((t18 + 0x4)) = u8;
        u8 = (*(float *)((t19 + 0x4)));
        u9 = (*(float *)(((0x4 + (0xB4 + ((int)stk + 16))) + 0x0)));
        u8 = (u8 + u9);
        *(float *)((t19 + 0x4)) = u8;
        u9 = (*(float *)(((0xB4 + ((int)stk + 16)) + 0x8)));
        *(float *)((t18 + 0x8)) = u9;
        u9 = (*(float *)(((0xB4 + ((int)stk + 16)) + 0x8)));
        *(float *)((t19 + 0x8)) = u9;
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    t25 = ((int (*)(int, int, Stk16))(nlDispStripTrnsl))(0x4, (((int)stk + 16) + 0x40), *(Stk16 *)(((int)stk + 16)));
    t26 = ((int (*)(int, int))(nlDispStripTrnsl))(0x4, ((int)stk + 16));
    t27 = 0x1;
    if (t4 == 3) {
        t27 = 0x2;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB4 + ((int)stk + 16))); }
    return (sprListPut((*(int *)((((t4 << 2) + (0x8C + ((int)stk + 4))) + 0x0))), t27, 0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f));
}
