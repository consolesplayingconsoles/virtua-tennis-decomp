/* Straight-line functions with calls and guards (batch gen_ud): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuDblCoverPos(int a4);

float cpuDblCoverPos(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u0 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450));
    u1 = ((float)(*(signed char *)0x8C2FD924) * 0.00999999978f);
    u1 = u1 + 0.0500000007f * (((u0 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
    u0 = *(float *)((a4 + 0xAF0));
    u2 = *(float *)0x8C291F84;
    u3 = (-u0);
    if (!(0.0f > u0)) {
        u3 = (*(float *)((a4 + 0xAF0)));
    }
    u0 = (-u2);
    if (!(0.0f > u2)) {
        u0 = u2;
    }
    if (u0 > u3) {
        t3 = (*(signed char *)(((0x8C15A0D0 + ((*(int *)((a4 + 0xC58))) << 1)) + 0x0)));
    } else {
        t3 = (*(signed char *)(((0x8C15A0D0 + ((*(int *)((a4 + 0xC58))) << 1)) + 0x1)));
    }
    u0 = u1;
    u0 = u0 + 0.0199999996f * (float)t3;
    u1 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
    }
    u1 = u0;
    if (u2 > 0.25f) {
        u2 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
        t3 = (u2 > 0.0f) - (0.0f > u2);
        u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t4 = 0x1;
        if ((u2 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
        } else {
            u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t5 = 0x0;
            if (0.0f > (u2 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
                t5 = 0xFFFFFFFF;
            }
            t4 = t5;
        }
        if (t3 == t4) {
            u2 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
            u3 = (-u2);
            if (!(0.0f > u2)) {
                u3 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
            }
            u2 = u0;
            u2 = u2 + 0.00999999978f * (u3 * (float)(*(signed char *)0x8C2FD92A));
            u3 = u2;
        } else {
            u2 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
            u4 = (-u2);
            if (!(0.0f > u2)) {
                u4 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
            }
            u2 = (u4 * (float)(*(signed char *)0x8C2FD92B));
            u3 = (u0 - (u2 * 0.00999999978f));
        }
        u1 = u3;
    }
    t3 = *(int *)(((0x8C2FC69C + (t2 * 0x160)) + 0x158));
    t4 = 0x1;
    if ((int)t3 > 0) {
    } else {
        t5 = 0x0;
        if ((int)t3 < 0) {
            t5 = 0xFFFFFFFF;
        }
        t4 = t5;
    }
    u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    t3 = 0x1;
    if ((u0 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
    } else {
        u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t5 = 0x0;
        if (0.0f > (u0 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
            t5 = 0xFFFFFFFF;
        }
        t3 = t5;
    }
    if (t4 == t3) {
        u0 = u1;
        u0 = u0 + 0.00999999978f * (float)(*(signed char *)0x8C2FD92C);
        u2 = u0;
    } else {
        t3 = *(int *)(((0x8C2FC69C + (t2 * 0x160)) + 0x158));
        t2 = 0x1;
        if ((int)t3 > 0) {
        } else {
            t4 = 0x0;
            if ((int)t3 < 0) {
                t4 = 0xFFFFFFFF;
            }
            t2 = t4;
        }
        u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t3 = 0x1;
        if ((u0 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
        } else {
            u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t4 = 0x0;
            if (0.0f > (u0 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
                t4 = 0xFFFFFFFF;
            }
            t3 = t4;
        }
        u0 = u1;
        if (t2 == (-t3)) {
            u0 = (u1 - ((float)(*(signed char *)0x8C2FD92D) * 0.00999999978f));
        }
        u2 = u0;
    }
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
    }
    u0 = u2;
    if (u1 > 0.25f) {
        u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        t2 = (u1 > 0.0f) - (0.0f > u1);
        t3 = 0x1;
        if (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) > 0.0f) {
        } else {
            t4 = 0x0;
            if (0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))))) {
                t4 = 0xFFFFFFFF;
            }
            t3 = t4;
        }
        if (t2 == (-t3)) {
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u3 = (-u1);
            if (!(0.0f > u1)) {
                u3 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
            }
            u1 = u2;
            u1 = u1 + 0.00999999978f * (u3 * (float)(*(signed char *)0x8C2FD926));
            u3 = u1;
        } else {
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u4 = (-u1);
            if (!(0.0f > u1)) {
                u4 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
            }
            u1 = (u4 * (float)(*(signed char *)0x8C2FD927));
            u3 = (u2 - (u1 * 0.00999999978f));
        }
        u0 = u3;
    }
    u1 = u0;
    if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
        u1 = (u0 - ((float)(*(signed char *)0x8C2FD928) * 0.00999999978f));
    }
    u0 = u1;
    if ((0x100 & (*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)))) != 0) {
        u2 = u1;
        u2 = u2 + 0.00999999978f * (float)(*(signed char *)0x8C2FD92E);
        u0 = u2;
    }
    u1 = *(float *)((a4 + 0xAE8));
    u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u3 = *(float *)0x8C287B40;
    u4 = u0;
    u4 = u4 + (float)(*(signed char *)0x8C2FD929) * (((float)(((u1 - u2) > 0.0f) - (0.0f > (u1 - u2))) * (*(float *)((a4 + 0xB9C)))) / u3);
    t1 = 0x1;
    if (((*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8))) - (*(float *)((a4 + 0xAE8)))) > 0.0f) {
    } else {
        t2 = 0x0;
        if (0.0f > ((*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8))) - (*(float *)((a4 + 0xAE8))))) {
            t2 = 0xFFFFFFFF;
        }
        t1 = t2;
    }
    u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
    u1 = (((float)t1 * u0) / u3);
    return (u4 - (u1 * (float)(*(signed char *)0x8C2FD92F)));
}
