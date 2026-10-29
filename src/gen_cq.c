/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblPositionCalc(int a4, int a5);

int cpuDblPositionCalc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
        u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (0.300000012f > u1) {
            *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x18)));
        } else {
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            t1 = (u0 > 0.0f) - (0.0f > u0);
            t2 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158));
            t3 = 0x1;
            if ((int)t2 > 0) {
            } else {
                t4 = 0x0;
                if ((int)t2 < 0) {
                    t4 = 0xFFFFFFFF;
                }
                t3 = t4;
            }
            if (t1 == t3) {
                t1 = 0x6;
                t2 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            } else {
                t1 = 0xA;
                t2 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            }
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            u1 = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)t2 / (int)t1)));
            u1 = u1 + 4.0f * u0;
            *(float *)((a5 + 0x0)) = u1;
        }
        u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (0.300000012f > u1) {
            *(float *)((a5 + 0x8)) = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x18)));
        } else {
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            t1 = (u0 > 0.0f) - (0.0f > u0);
            t2 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C));
            t3 = 0x1;
            if ((int)t2 > 0) {
            } else {
                t4 = 0x0;
                if ((int)t2 < 0) {
                    t4 = 0xFFFFFFFF;
                }
                t3 = t4;
            }
            if (t1 == t3) {
                t1 = 0x6;
                t2 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            } else {
                t1 = 0xA;
                t2 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            }
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            u1 = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)t2 / (int)t1)));
            u1 = u1 + 4.0f * u0;
            *(float *)((a5 + 0x8)) = u1;
        }
        u0 = *(float *)((a5 + 0x8));
        u1 = *(float *)((a4 + 0xB00));
        t1 = 0xB00;
        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            t1 = 0x8;
        }
        return t1;
    }
    u0 = *(float *)0x8C291F50;
    u1 = *(float *)((a4 + 0xB00));
    if (((u0 > 0.0f) - (0.0f > u0)) == (((-u1) > 0.0f) - (0.0f > (-u1)))) {
        *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x20)));
        t1 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x20);
        u0 = *(float *)((a4 + 0xAF0));
        *(float *)((a5 + 0x8)) = (u0 + (float)t1);
        u1 = *(float *)((a4 + 0xB00));
        if ((((u0 + (float)t1) > 0.0f) - (0.0f > (u0 + (float)t1))) == ((u1 > 0.0f) - (0.0f > u1))) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            return 0x8;
        }
        return 0xB00;
    }
    *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x30)));
    t1 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x30);
    u0 = *(float *)((a4 + 0xAF0));
    *(float *)((a5 + 0x8)) = (u0 + (float)t1);
    u1 = *(float *)((a4 + 0xB00));
    if ((((u0 + (float)t1) > 0.0f) - (0.0f > (u0 + (float)t1))) == ((u1 > 0.0f) - (0.0f > u1))) {
        *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
        return 0x8;
    }
    return 0xB00;
}
