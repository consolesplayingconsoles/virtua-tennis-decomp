/* Straight-line functions with calls and guards (batch gen_vu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
int kmQueryFinishLastTextureDMA(void);
int kmiFLWCTRLStartPass(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyEnableASyncCopy(int);
int kmyGetPassInfo(int, int, int);
int kmySeparatePassInfo(int, int, int, int, int, int);
int kmBeginPass(int a4);

int kmBeginPass(int a4)
{
    int stk[18];
    register int t1;
    register int t4;
    register int t11;
    register int t12;
    register int t22;
    register int t23;
    int t24;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t25;

    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x10));
    *(unsigned int *)((a4 + 0x0)) = (0x8C45F074 + (((t1 << 2) + t1) << 2));
    if (((*(int *)(((*(int *)((a4 + 0x8))) + 0x18))) & 4) != 0) {
        for (;;) {
            t4 = kmQueryFinishLastTextureDMA();
            if (t4 == 0) {
                break;
            }
        }
        kmyEnableASyncCopy(0x0);
    }
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)0x8C45F004;
        *(unsigned int *)((t11 + (0x8C45F074 + (((t1 << 2) + t1) << 2)))) = (*(int *)((((((((((t12 << 2) + t12) << 2) << 2) << 1) + 0x8C45F134) + (((t1 << 2) + t1) << 2)) + t11) + 0x0)));
        t11 = (t11 + 0x4);
        if ((unsigned int)t11 >= (unsigned int)0x14) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 16)) = (kmiFLWCTRLStartPass(a4, 0x14, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
    kmyGetPassInfo((*(int *)0x8C45F79C), (*(int *)(((*(int *)((a4 + 0x8))) + 0x10))), ((int)stk + 12));
    *(int *)((int)stk + 8) = ((((int)stk + 12) + 0xC) + 0x10);
    *(int *)((int)stk + 4) = ((((int)stk + 12) + 0xC) + 0xC);
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 12) + 0xC);
    t22 = *(int *)((a4 + 0x0));
    t23 = *(int *)(((int)stk + 20));
    t24 = (kmySeparatePassInfo((*(int *)(((int)stk + 12))), (((int)stk + 12) + 0xC), ((((int)stk + 12) + 0xC) + 0x4), ((((int)stk + 12) + 0xC) + 0x8), ((((int)stk + 12) + 0xC) + 0xC), ((((int)stk + 12) + 0xC) + 0x10)));
    t27 = a4;
    t28 = 0x0;
    t29 = t22;
    t30 = t23;
    t31 = (((int)stk + 12) + 0xC);
    for (;;) {
        if ((unsigned int)t30 >= (unsigned int)((((int)stk + 12) + 0xC) + 0x14)) {
            break;
        }
        t25 = (*(int *)((t30 + 0x0)));
        if (t25 != 0) {
            t31 = t29;
            t27 = 0x3FFFFFF;
            t24 = (*(int *)((t31 + 0x0)));
            t25 = 0xFF00003C;
            t27 = (t27 & t24);
            t24 = ((unsigned int)t24 >> 16);
            t24 = ((unsigned int)t24 >> 8);
            *(unsigned int *)((t25 + 0x0)) = t24;
            t27 = (t27 | 0xE0000000);
            *(unsigned int *)(((0xFF000038) + 0x0)) = t24;
            t24 = t28;
            t24 = (t24 | 0x808C0002);
            *(unsigned int *)((t27 + 0x0)) = t24;
            t27 = (t27 + 0x4);
            t24 = 0x80000000;
            *(unsigned int *)((t27 + 0x0)) = t24;
            t27 = (t27 + 0x4);
            *(unsigned int *)((t27 + 0x0)) = 0x20800000;
            t27 = (t27 + 0x4);
            _builtin_prefetch((void *)t27);
            t24 = (*(int *)((t31 + 0x0)));
            t24 = (t24 + 0x20);
            *(unsigned int *)((t31 + 0x0)) = t24;
        }
        t30 = (t30 + 0x4);
        t29 = (t29 + 0x4);
        t28 = (t28 + 0x1000000);
    }
    return (*(int *)(((int)stk + 16)));
}
