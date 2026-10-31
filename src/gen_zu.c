/* A function proven on cases written by hand: the generator's C with the replacements []. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTexOfs(int, int, int);
int primTexVertexSet(int, int, int, int, int, float, float);
Stk3 vecMake(float, float, float);
int FUN_8c0bca14(void);

int FUN_8c0bca14(void)
{
    int stk[70];
    register int t0;
    register int t6;
    register int t7;
    register float u8;
    register int t9;
    register int t11;
    register int t14;
    register int t46;
    register int t18;
    register int t20;
    register int t27;
    register float u31;
    register float u32;
    register int t34;
    register float u40;
    register float u41;
    register int t42;
    register int t54;
    register float u52;

    t0 = *(int *)0x8C18E1EC;
    *(unsigned int *)0x8C18E1EC = (t0 + 0x1);
    if (((int)((int)(t0 + 0x1) % (int)0x3)) == 0) {
        *(unsigned int *)0x8C18E1F0 = ((*(int *)0x8C18E1F0) + 0x1);
    }
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 20) + 0x64);
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 20) + 0x64) + 0x1C);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 20) + 0x64) + 0x38);
    *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 20) + 0x64) + 0x54);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 20) + 0x64) + 0x38);
    for (;;) {
        t6 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 28)) = (((t6 << 2) + t6) << 2);
        t7 = 0x0;
        u8 = (float)t6;
        for (;;) {
            t9 = *(int *)0x8C18E1F0;
            t11 = 0xFFFFFFFF;
            if ((*(int *)(((((((t7 << 2) << 2) << 2) << 1) + 0x8C18D5EC) + (t6 << 2)))) == t9) {
                t11 = 0x80FFFFFF;
            }
            t14 = 0xFFFFFFFF;
            if ((*(int *)(((((((t7 << 2) << 2) << 2) << 1) + 0x8C18D5EC) + (t6 << 2)))) == t9) {
                t14 = 0x80FFFFFF;
            }
            t46 = (t6 << 2);
            if ((int)(*(int *)((((((((t7 << 2) << 2) << 2) << 1) + 0x8C18D5EC) + (t6 << 2)) + 0x0))) >= (int)t9) {
                *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
                *(unsigned int *)(((int)stk + 56)) = (((t7 << 2) + t7) << 2);
                u8 = (float)(((t7 << 2) + t7) << 2);
                *(float *)(((int)stk + 104)) = u8;
                t18 = *(int *)(((int)stk + 28));
                *(float *)(((int)stk + 60)) = (float)t18;
                *(Stk3 *)(((int)stk + 8)) = vecMake((float)t18, u8, 10.0f);
                u8 = (float)t7;
                u8 = (u8 * 0.0390625f);
                *(float *)(((int)stk + 48)) = u8;
                t20 = (*(int *)(((int)stk + 20)));
                *(int *)((int)stk + 4) = t20;
                primTexVertexSet(t11, t14, 0x0, 0x0, t20, ((float)t6 * 0.01953125f), u8);
                *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 40)));
                u8 = (float)((*(int *)(((int)stk + 56))) + 0x14);
                *(float *)(((int)stk + 92)) = u8;
                *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 60))), u8, 10.0f);
                u8 = (*(float *)(((int)stk + 48)));
                u8 = (u8 + 0.0390625f);
                *(float *)(((int)stk + 84)) = u8;
                t27 = (*(int *)(((int)stk + 20)));
                *(int *)((int)stk + 4) = t27;
                primTexVertexSet(t11, t14, 0x0, 0x0, t27, ((float)t6 * 0.01953125f), u8);
                *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
                u31 = *(float *)(((int)stk + 104));
                u8 = (float)((*(int *)(((int)stk + 28))) + 0x14);
                *(float *)(((int)stk + 64)) = u8;
                *(Stk3 *)(((int)stk + 8)) = vecMake(u8, u31, 10.0f);
                u8 = ((float)t6 * 0.01953125f);
                u8 = (u8 + 0.01953125f);
                u32 = *(float *)(((int)stk + 48));
                *(float *)(((int)stk + 68)) = u8;
                t34 = (*(int *)(((int)stk + 20)));
                *(int *)((int)stk + 4) = t34;
                primTexVertexSet(t11, t14, 0x0, 0x0, t34, u8, u32);
                *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 44)));
                *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 92))), 10.0f);
                u40 = *(float *)(((int)stk + 84));
                u41 = *(float *)(((int)stk + 68));
                t42 = (*(int *)(((int)stk + 20)));
                *(int *)((int)stk + 4) = t42;
                primTexVertexSet(t11, t14, 0x0, 0x0, t42, u41, u40);
                *(volatile int *)(((int)stk + 20));
                t46 = (nlDispStripTexOfs(0x4, (((int)stk + 20) + 0x64), 0x3A5));
            } else {
                u52 = u8;
            }
            u8 = u52;
            t7 = (t7 + 0x1);
            if ((int)t7 < (int)0x18) continue;
            break;
        }
        t54 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 24)) = (t54 + 0x1);
        if ((int)(t54 + 0x1) < (int)0x20) continue;
        break;
    }
    return t46;
}
