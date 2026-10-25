/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblPositionCalc(int a4, int a5);

int cpuDblPositionCalc(int a4, int a5)
{
    int t0;
    float u3;
    float u4;
    float u10;
    int t13;
    int t11;
    int t15;
    int t18;
    int t16;
    float u28;
    float u37;
    float u38;
    float u44;
    int t47;
    int t45;
    int t49;
    int t52;
    int t50;
    float u62;
    float u70;
    int t73;
    int t71;
    float u75;
    int t78;
    int t76;
    int t81;
    float u85;
    int t88;
    int t86;
    float u90;
    int t93;
    int t91;
    int t99;
    float u100;
    int t103;
    int t101;
    float u105;
    int t108;
    int t106;
    int t115;
    float u116;
    int t119;
    int t117;
    float u121;
    int t124;
    int t122;
    int t22;
    int t23;
    int t56;
    int t57;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
        u3 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u4 = (-u3);
        if (!(0.0f > u3)) {
            u4 = u3;
        }
        if (0.300000012f > u4) {
            *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x18)));
        } else {
            u10 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            t13 = 0x1;
            if (u10 > 0.0f) {
            } else {
                t11 = 0x0;
                if (0.0f > u10) {
                    t11 = 0xFFFFFFFF;
                }
                t13 = t11;
            }
            t15 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158));
            t18 = 0x1;
            if ((int)t15 > 0) {
            } else {
                t16 = 0x0;
                if ((int)t15 < 0) {
                    t16 = 0xFFFFFFFF;
                }
                t18 = t16;
            }
            if (t13 == t18) {
                t22 = 0x6;
                t23 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            } else {
                t22 = 0xA;
                t23 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158)));
            }
            u28 = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)t23 / (int)t22)));
            u28 = u28 + 4.0f * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28)));
            *(float *)((a5 + 0x0)) = u28;
        }
        u37 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        u38 = (-u37);
        if (!(0.0f > u37)) {
            u38 = u37;
        }
        if (0.300000012f > u38) {
            *(float *)((a5 + 0x8)) = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x18)));
        } else {
            u44 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            t47 = 0x1;
            if (u44 > 0.0f) {
            } else {
                t45 = 0x0;
                if (0.0f > u44) {
                    t45 = 0xFFFFFFFF;
                }
                t47 = t45;
            }
            t49 = *(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C));
            t52 = 0x1;
            if ((int)t49 > 0) {
            } else {
                t50 = 0x0;
                if ((int)t49 < 0) {
                    t50 = 0xFFFFFFFF;
                }
                t52 = t50;
            }
            if (t47 == t52) {
                t56 = 0x6;
                t57 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            } else {
                t56 = 0xA;
                t57 = (*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C)));
            }
            u62 = ((*(float *)((a4 + 0xAF0))) + (float)((int)((int)t57 / (int)t56)));
            u62 = u62 + 4.0f * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30)));
            *(float *)((a5 + 0x8)) = u62;
        }
        u70 = *(float *)((a5 + 0x8));
        t73 = 0x1;
        if (u70 > 0.0f) {
        } else {
            t71 = 0x0;
            if (0.0f > u70) {
                t71 = 0xFFFFFFFF;
            }
            t73 = t71;
        }
        u75 = *(float *)((a4 + 0xB00));
        t78 = 0x1;
        if (u75 > 0.0f) {
        } else {
            t76 = 0x0;
            if (0.0f > u75) {
                t76 = 0xFFFFFFFF;
            }
            t78 = t76;
        }
        t81 = 0xB00;
        if (t73 == t78) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            t81 = 0x8;
        }
        return t81;
    }
    u85 = *(float *)0x8C291F50;
    t88 = 0x1;
    if (u85 > 0.0f) {
    } else {
        t86 = 0x0;
        if (0.0f > u85) {
            t86 = 0xFFFFFFFF;
        }
        t88 = t86;
    }
    u90 = *(float *)((a4 + 0xB00));
    t93 = 0x1;
    if ((-u90) > 0.0f) {
    } else {
        t91 = 0x0;
        if (0.0f > (-u90)) {
            t91 = 0xFFFFFFFF;
        }
        t93 = t91;
    }
    if (t88 == t93) {
        *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x20)));
        t99 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x20);
        u100 = *(float *)((a4 + 0xAF0));
        *(float *)((a5 + 0x8)) = (u100 + (float)t99);
        t103 = 0x1;
        if ((u100 + (float)t99) > 0.0f) {
        } else {
            t101 = 0x0;
            if (0.0f > (u100 + (float)t99)) {
                t101 = 0xFFFFFFFF;
            }
            t103 = t101;
        }
        u105 = *(float *)((a4 + 0xB00));
        t108 = 0x1;
        if (u105 > 0.0f) {
        } else {
            t106 = 0x0;
            if (0.0f > u105) {
                t106 = 0xFFFFFFFF;
            }
            t108 = t106;
        }
        if (t103 == t108) {
            *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
            return 0x8;
        }
        return 0xB00;
    }
    *(float *)((a5 + 0x0)) = ((*(float *)((a4 + 0xAE8))) + (float)((int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x158))) / (int)0x30)));
    t115 = (int)((int)(*(int *)((((t0 * 0x160) + 0x8C2FC69C) + 0x15C))) / (int)0x30);
    u116 = *(float *)((a4 + 0xAF0));
    *(float *)((a5 + 0x8)) = (u116 + (float)t115);
    t119 = 0x1;
    if ((u116 + (float)t115) > 0.0f) {
    } else {
        t117 = 0x0;
        if (0.0f > (u116 + (float)t115)) {
            t117 = 0xFFFFFFFF;
        }
        t119 = t117;
    }
    u121 = *(float *)((a4 + 0xB00));
    t124 = 0x1;
    if (u121 > 0.0f) {
    } else {
        t122 = 0x0;
        if (0.0f > u121) {
            t122 = 0xFFFFFFFF;
        }
        t124 = t122;
    }
    if (t119 == t124) {
        *(float *)((a5 + 0x8)) = (-((*(float *)((a4 + 0xB00))) * 10.0f));
        return 0x8;
    }
    return 0xB00;
}
