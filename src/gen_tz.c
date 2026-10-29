/* Straight-line functions with calls and guards (batch gen_tz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void cpuSglShotDefault(int a4);

void cpuSglShotDefault(int a4)
{
    int t0;
    int t1;
    int t2;
    float u0;
    float u1;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xC64));
    t2 = *(int *)((((((t1 << 1) + t1) << 2) << 1) + 0x8C105FDC));
    u0 = *(float *)((a4 + 0xA28));
    u1 = (-(u0 * 41.1500015f));
    if (!(0.0f > (u0 * 41.1500015f))) {
        u1 = (u0 * 41.1500015f);
    }
    if (((float)t2 * 1.0f) > ((-u1) + 41.1500015f)) {
        u0 = *(float *)((a4 + 0xA28));
        u1 = (41.1500015f - ((float)t2 * 1.0f));
        *(float *)((a4 + 0xA28)) = (((float)((u0 > 0.0f) - (0.0f > u0)) * u1) / 41.1500015f);
    }
    u0 = (((*(float *)((a4 + 0xA2C))) + 1.0f) * 59.4249992f);
    u0 = -u0;
    if (((float)t2 * 1.0f) > (u0 + 118.849998f)) {
        u0 = (((float)t2 * 1.0f) + -118.849998f);
        if (!(0.0f > (118.849998f - ((float)t2 * 1.0f)))) {
            u0 = (118.849998f - ((float)t2 * 1.0f));
        }
        u1 = (-1.0f);
        u1 = u1 + (1.0f + 1.0f) * (u0 / 118.849998f);
        *(float *)((a4 + 0xA2C)) = ((*(float *)((a4 + 0xB00))) * u1);
    }
    if ((*(int *)0x8C20D14C) == 6) {
        if ((int)(*(int *)0x8C2FCC20) >= (int)0x2) {
            if ((*(int *)((a4 + 0xC5C))) == 12) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
            }
        }
    } else {
        if ((int)(*(int *)0x8C2FCC1C) > (int)0x5) {
            if ((*(int *)((a4 + 0xC5C))) == 12) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                *(float *)((a4 + 0xA2C)) = (*(float *)((a4 + 0xB00)));
            }
        }
    }
}
