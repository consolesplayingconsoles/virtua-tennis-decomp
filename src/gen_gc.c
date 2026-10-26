/* Straight-line functions with calls and guards (batch gen_gc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlDispStripTexOfsTrnsl(int, int, int);
int uiPanelPut(int a4, int a5, int a6, int a7, int a8, float f4);

int uiPanelPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    float u7;
    int t17;
    int t18;
    int t30;
    int t3;
    float u6;
    int stk[133];

    stk[124] = a8;
    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = 0x8C12696C;
    t2 = (((int)stk + 4) + 0x8);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C12696C + 324)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)(((int)stk + 8)) = (0x14C + ((int)stk + 4));
    t4 = 0x0;
    t5 = (((int)stk + 4) + 0x8);
    for (;;) {
        if (t4 == 1) {
            u7 = *(float *)(((t5 + 0xC) + 0x0));
            *(float *)(((t5 + 0xC) + 0x48)) = (u7 + f4);
            *(float *)(((t5 + 0xC) + 0x30)) = (u7 + f4);
            u6 = (u7 + f4);
        } else {
            if (t4 == 2) {
                *(float *)(((t5 + 0xC) + 0x18)) = u6;
                *(float *)(((t5 + 0xC) + 0x0)) = u6;
                *(float *)(((t5 + 0xC) + 0x48)) = (u6 + 22.0f);
                *(float *)(((t5 + 0xC) + 0x30)) = (u6 + 22.0f);
            }
        }
        t17 = (*(int *)(((int)stk + 8)));
        t18 = 0x0;
        for (;;) {
            *(float *)((t17 + 0x0)) = ((*(float *)((((t5 + 0xC) + t18) + 0x0))) + (*(float *)(((0x1EC + ((int)stk + 4)) + 0x0))));
            *(float *)((t17 + 0x4)) = ((*(float *)((((t5 + 0xC) + t18) + 0x4))) + (*(float *)(((0x1EC + ((int)stk + 4)) + 0x4))));
            *(float *)((t17 + 0x8)) = (*(float *)(((0x1EC + ((int)stk + 4)) + 0x8)));
            *(float *)((t17 + 0xC)) = ((*(float *)((((t5 + 0xC) + t18) + 0xC))) / (*(float *)((t5 + 0x4))));
            *(float *)((t17 + 0x10)) = ((-((*(float *)((((t5 + 0xC) + t18) + 0x10))) / (*(float *)((t5 + 0x8))))) + 1.0f);
            *(unsigned int *)((t17 + 0x14)) = (*(int *)(((int)stk + 4)));
            *(unsigned int *)((t17 + 0x18)) = 0x0;
            t17 = (t17 + 0x1C);
            t18 = (t18 + 0x18);
            if ((unsigned int)t17 >= (unsigned int)((0x14C + ((int)stk + 4)) + 0x70)) {
                break;
            }
        }
        t30 = nlDispStripTexOfsTrnsl(0x4, (0x14C + ((int)stk + 4)), (*(int *)((t5 + 0x0))));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x6C);
        if ((int)t4 >= (int)0x3) {
            break;
        }
    }
    return t30;
}
