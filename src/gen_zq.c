/* A function proven on cases written by hand: the generator's C with the replacements ['*(float *)&s.w[0]=>*(float *)&a8', '*(float *)&s.w[2]=>*(float *)&a10']. */

typedef struct { int w[3]; } Stk3;
float cpuDistXZ(int, int);
int cpuPointBehind(int, int, int, int);
int cpuSegCrossXZ(int, int, Stk3, Stk3, Stk3, Stk3);
float FUN_8c07fd10(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

float FUN_8c07fd10(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[45];
    register int t0;
    register float u25;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register float u11;
    register float u13;
    register float t15;

    stk[36] = a8;
    t0 = *(int *)((a4 + 0xB5C));
    u25 = 100.0f;
    if (0x1 != 0) {
        t1 = (0xB8 + ((t0 * 0x160) + 0x8C2FC69C));
        t2 = 0x1;
        t3 = 0x0;
        for (;;) {
            t4 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x7);
            }
            *(unsigned int *)(((int)stk + 52)) = t4;
            t6 = cpuPointBehind(t1, ((((t4 << 1) + t4) << 2) + (0xB8 + ((t0 * 0x160) + 0x8C2FC69C))), (0xAE8 + a4), (((int)stk + 52) + 0x5C));
            if ((signed char)t6 != 0) {
                break;
            }
            t2 = (t2 + 0x1);
            t3 = (t3 + 0xC);
            t1 = (t1 + 0xC);
            if ((int)t2 >= (int)0x9) {
                return 100.0f;
            }
        }
        *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = ((*(float *)((a4 + 0xAE8))) - *(float *)&a8);
        *(float *)(((((int)stk + 52) + 0x10) + 0x8)) = ((*(float *)((a4 + 0xAF0))) - *(float *)&a10);
        t9 = *(int *)(((int)stk + 52));
        u11 = *(float *)((((0xB8 + ((t0 * 0x160) + 0x8C2FC69C)) + (((t9 << 1) + t9) << 2)) + 0x0));
        *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((((0xB8 + ((t0 * 0x160) + 0x8C2FC69C)) + t3) + 0x0))) - u11);
        u13 = *(float *)((((((t9 << 1) + t9) << 2) + (0xB8 + ((t0 * 0x160) + 0x8C2FC69C))) + 0x8));
        *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((((0xB8 + ((t0 * 0x160) + 0x8C2FC69C)) + t3) + 0x8))) - u13);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((t3 + (0xB8 + ((t0 * 0x160) + 0x8C2FC69C)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
        cpuSegCrossXZ((((int)stk + 4) + 0x58), (0xB8 + ((t0 * 0x160) + 0x8C2FC69C)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
        t15 = cpuDistXZ((0xAE8 + a4), (((int)stk + 52) + 0x5C));
        u25 = (t15 / (f4 * (cpuDistXZ((0xAE8 + a4), (((int)stk + 52) + 0x5C)))));
    }
    return u25;
}
