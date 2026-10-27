/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlDispStripTexOfsTrnsl(int, int, int);
int winPartsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);

int winPartsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    int t0;
    int t2;
    int t5;
    float u6;
    float u7;
    float u19;
    float u25;
    float u27;
    float u29;
    int t1;
    int t8;
    int t20;
    float u24;
    int stk[55];

    stk[46] = a8;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = ((((unsigned char)(int)(f4 * 255.0f) << 16) << 8) | 0xFFFFFF);
    t0 = 0x8C0DE6FC;
    t2 = a4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) < (int)(*(int *)(((int)stk + 24)))) {
            t5 = 0x0;
            u6 = (f4 * 255.0f);
            for (;;) {
                t0 = a11;
                u7 = *(float *)(((0xB4 + ((int)stk + 4)) + 0x0));
                if ((t0 != 1) && (t8 = (t0 == 1), t0 = a11, t0 != 3)) {
                    t1 = t2;
                    t1 = (t1 + 0xC);
                    t1 = (t1 + ((((t5 << 1) + t5) << 2) << 1));
                    t0 = 0x3C;
                    *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x0)) = ((*(float *)((t1 + 0x0))) + u7);
                    if (((*(float *)(((*(int *)(((int)stk + 16))) + t0))) > 371.0f) && ((t0 = t5, t0 == 2) || (t0 = t5, t0 == 3))) {
                        t1 = (t5 * 0x1C);
                        t1 = (t1 + (((int)stk + 4) + 0x18));
                        *(float *)((t1 + 0x0)) = ((*(float *)((t1 + 0x0))) + 1.0f);
                    }
                } else {
                    t1 = (*(int *)(((int)stk + 12)));
                    t0 = 0x3C;
                    u6 = (*(float *)((t1 + t0)));
                    u6 = (u6 - (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + 0x0))));
                    u6 = (u6 + u7);
                    *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x0)) = u6;
                }
                t0 = 0x4;
                u19 = *(float *)(((0xB4 + ((int)stk + 4)) + t0));
                t0 = a11;
                if ((t0 != 2) && (t20 = (t0 == 2), t0 = a11, t0 != 3)) {
                    t1 = t2;
                    t1 = (t1 + 0xC);
                    t0 = 0x4;
                    t1 = (t1 + ((((t5 << 1) + t5) << 2) << 1));
                    u24 = (*(float *)((t1 + t0)));
                } else {
                    t0 = 0x4;
                    u24 = ((-(*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)))) + 90.0f);
                }
                u25 = u19;
                u25 = u25 + u24 * f5;
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u25;
                t0 = 0x8;
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = (*(float *)(((0xB4 + ((int)stk + 4)) + t0)));
                t0 = 0x4;
                u27 = *(float *)((t2 + t0));
                t0 = 0xC;
                u6 = (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)));
                u6 = (u6 / u27);
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u6;
                t0 = 0x8;
                u29 = *(float *)((t2 + t0));
                t0 = 0x10;
                u6 = (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)));
                u6 = (u6 / u29);
                u6 = (-u6);
                u6 = (u6 + 1.0f);
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u6;
                *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x14)) = (*(int *)(((int)stk + 20)));
                if ((*(int *)(((int)stk + 4))) != 0) {
                    *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x18)) = (*(int *)(((int)stk + 4)));
                } else {
                    *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x18)) = 0x0;
                }
                t5 = (t5 + 0x1);
                if ((int)t5 < (int)0x4) continue;
                break;
            }
            t0 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 4) + 0x18), (*(int *)((t2 + 0x0)))));
            t1 = (*(int *)(((int)stk + 8)));
            t2 = (t2 + 0x6C);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t1;
            continue;
        }
        break;
    }
    *(unsigned int *)0x8C40C624 = (*(int *)(((int)stk + 4)));
    return t0;
}
