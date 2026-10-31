/* Straight-line functions with calls and guards (batch gen_vv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlDispStripTrnsl(int, int);
int circuitDrawMatchIcon(void);

int circuitDrawMatchIcon(void)
{
    int stk[22];
    register int t0;
    register int t42;
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register float u12;
    register int t15;
    register int t18;
    register int t21;
    register int t24;
    register int t27;
    register int t29;
    register int t33;
    register float u38;
    register int t10;
    register int t36;
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 4) + 0xC)) = *(struct mv16 *)(0x8C10AB40); }
    t0 = *(int *)0x8C2FBE48;
    t42 = t0;
    if (t0 == -1) {
    } else {
        *(unsigned int *)0x8C2FBE48 = ((int)((int)(t0 + 0x1) % (int)0x3C));
        t2 = *(int *)0x8C2FBE1C;
        t4 = *(int *)(((((((t2 << 2) + t2) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
        t6 = 0x0;
        if (((*(int *)((0x8C108E9C + ((((t4 << 2) << 2) + t4) << 2)))) & 1) != 0) {
            t6 = 0xFFFFFFE8;
        }
        t8 = *(int *)0x8C2FBE48;
        if ((int)t8 < (int)0x14) {
            t10 = t8;
        } else {
            t10 = (0x28 - t8);
        }
        u12 = ((float)t10 / 20.0f);
        if (0.0f > ((float)t10 / 20.0f)) {
            u12 = 0.0f;
        }
        R1008 = (((int)stk + 4) + 0xC);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = ((*(int *)(((((int)stk + 4) + 0xC) + 0xC))) | (((int)(u12 * 64.0f) << 16) << 8));
        R1012 = ((((int)stk + 4) + 0xC) + 0x10);
        t15 = *(int *)0x8C2FBE48;
        t18 = (t15 - 30);
        if ((int)(t15 - 30) >= 0) {
        } else {
            t18 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x10) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x10) + 0xC))) | (((int)(((float)((-t18) + 0x1E) / 30.0f) * 64.0f) << 16) << 8));
        t21 = *(int *)0x8C2FBE48;
        R1004 = (t21 - 30);
        t24 = (t21 - 30);
        if ((int)(t21 - 30) >= 0) {
        } else {
            t24 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC))) | (((int)(((float)((-t24) + 0x1E) / 30.0f) * 64.0f) << 16) << 8));
        t27 = R1008;
        *(float *)((t27 + 0x4)) = ((*(float *)((t27 + 0x4))) + (float)t6);
        t29 = R1012;
        *(float *)((t29 + 0x4)) = ((*(float *)((t29 + 0x4))) + (float)t6);
        *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4)) = ((*(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4))) + (float)t6);
        *(float *)((((((int)stk + 4) + 0xC) + 0x30) + 0x4)) = ((*(float *)((((((int)stk + 4) + 0xC) + 0x30) + 0x4))) + (float)t6);
        t33 = *(int *)0x8C2FBE48;
        if ((int)t33 > (int)0x28) {
            t36 = (0x3C - t33);
        } else {
            t36 = (t33 - 20);
        }
        u38 = ((float)t36 / 20.0f);
        if (0.0f > ((float)t36 / 20.0f)) {
            u38 = 0.0f;
        }
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x30) + 0xC)) = ((*(int *)((((((int)stk + 4) + 0xC) + 0x30) + 0xC))) | (((int)(u38 * 64.0f) << 16) << 8));
        t42 = (nlDispStripTrnsl(0x4, (((int)stk + 4) + 0xC)));
    }
    return t42;
}
