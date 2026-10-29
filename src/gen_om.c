/* Straight-line functions with calls and guards (batch gen_om): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuShotAimCheck(int a4);

int cpuShotAimCheck(int a4)
{
    int t0;
    int t1;
    int t2;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;

    t0 = *(short *)((((*(int *)((a4 + 0xB5C))) * 0x160) + 0x8C2FC7B4));
    if ((int)(t0 - 5) < (int)0x1) {
        return 0x1;
    }
    u0 = *(float *)((a4 + 0xB90));
    u1 = *(float *)0x8C287B40;
    u2 = *(float *)((a4 + 0xA28));
    u3 = *(float *)((a4 + 0xB9C));
    u4 = (-(u3 / u1));
    if (!(0.0f > (u3 / u1))) {
        u4 = (u3 / u1);
    }
    u5 = (u3 / u1);
    if (u4 > 0.949999988f) {
        u5 = ((float)(((u3 / u1) > 0.0f) - (0.0f > (u3 / u1))) * 0.949999988f);
    }
    u1 = *(float *)0x8C23D204;
    u3 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    t1 = *(int *)((a4 + 0xC5C));
    u4 = 0.300000012f;
    u4 = u4 + 3.29999995f * (u3 * u1);
    u6 = u4;
    if (((*(int *)((((((t1 << 1) + t1) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) {
        u6 = (u4 * 1.25f);
    }
    u4 = u6;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 0x1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u5) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u4 = (u6 * 0.800000012f);
    }
    u6 = (u5 - u2);
    if (!(0.0f > (u2 - u5))) {
        u6 = (u2 - u5);
    }
    if (!(u4 > u6)) {
        u4 = ((*(float *)((a4 + 0xB00))) * (float)(((u2 - u0) > 0.0f) - (0.0f > (u2 - u0))));
        t1 = (((((0x80 & (int)((-(u4 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) ^ 0x1);
        t2 = (t0 - 5);
        u5 = 3.29999995f;
        u6 = ((-(u4 * 32.0f)) + 96.0f);
        u7 = u0;
        for (;;) {
            t0 = (t2 == 0);
            t2 = (t2 - 1);
            if (t0) {
                break;
            }
            t1 = 0xB00;
            u6 = (float)((-(((((0x40 & (int)((-(u4 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) - 1)) - (((((0x80 & (int)((-(u4 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) ^ 0x1));
            u5 = (*(float *)((a4 + t1)));
            u6 = (u6 * u5);
            u5 = (u3 * u1);
            u6 = (u6 * 0.949999988f);
            u6 = (u6 - u7);
            u8 = u7;
            u8 = u8 + u5 * u6;
            u7 = u8;
        }
        if ((((u0 - u7) > 0.0f) - (0.0f > (u0 - u7))) == (-(((u7 - u2) > 0.0f) - (0.0f > (u7 - u2))))) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}
