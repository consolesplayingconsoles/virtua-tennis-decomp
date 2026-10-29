/* Straight-line functions with calls and guards (batch gen_tx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuSglAim(int, int, int, int);
int cpuSglShot(int a4, int a5, int a6, int a7);

int cpuSglShot(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    cpuSglAim(a4, a5, a6, a7);
    u0 = *(float *)((a4 + 0xAE8));
    u1 = *(float *)((a4 + 0xB9C));
    u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
    t0 = 0x20;
    if ((int)(*(int *)0x8C2FCC1C) > (int)0x7) {
        if ((*(int *)0x8C291F74) == 5) {
            *(float *)((a4 + 0xA28)) = 0.0f;
            *(float *)((a4 + 0xA2C)) = 0.0f;
            t1 = 0xA2C;
        } else {
            t2 = *(int *)((a4 + 0xC64));
            t3 = *(int *)((((((t2 << 1) + t2) << 2) << 1) + 0x8C105FDC));
            u0 = *(float *)((a4 + 0xA28));
            u1 = (-(u0 * 41.1500015f));
            if (!(0.0f > (u0 * 41.1500015f))) {
                u1 = (u0 * 41.1500015f);
            }
            if (((float)t3 * 1.0f) > ((-u1) + 41.1500015f)) {
                u0 = *(float *)((a4 + 0xA28));
                u1 = (41.1500015f - ((float)t3 * 1.0f));
                *(float *)((a4 + 0xA28)) = (((float)((u0 > 0.0f) - (0.0f > u0)) * u1) / 41.1500015f);
            }
            u0 = (((*(float *)((a4 + 0xA2C))) + 1.0f) * 59.4249992f);
            u0 = -u0;
            t2 = 0x8C044B34;
            if (((float)t3 * 1.0f) > (u0 + 118.849998f)) {
                u0 = (((float)t3 * 1.0f) + -118.849998f);
                if (!(0.0f > (118.849998f - ((float)t3 * 1.0f)))) {
                    u0 = (118.849998f - ((float)t3 * 1.0f));
                }
                u1 = (-1.0f);
                u1 = u1 + (1.0f + 1.0f) * (u0 / 118.849998f);
                *(float *)((a4 + 0xA2C)) = ((*(float *)((a4 + 0xB00))) * u1);
                t2 = 0xA2C;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}
