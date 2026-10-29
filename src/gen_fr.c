/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;

    u0 = *(float *)0x8C23D204;
    u1 = *(float *)0x8C287B40;
    u2 = *(float *)((a4 + 0xB9C));
    u3 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    u4 = (-(u2 / u1));
    if (!(0.0f > (u2 / u1))) {
        u4 = (u2 / u1);
    }
    u5 = (u2 / u1);
    if (u4 > 0.949999988f) {
        u5 = ((float)(((u2 / u1) > 0.0f) - (0.0f > (u2 / u1))) * 0.949999988f);
    }
    u2 = *(float *)((a4 + 0xBA4));
    u4 = 0.300000012f;
    u4 = u4 + 3.29999995f * (u3 * u0);
    u6 = (-u2);
    if (!(0.0f > u2)) {
        u6 = u2;
    }
    u2 = *(float *)0x8C291F84;
    u7 = (-u2);
    if (!(0.0f > u2)) {
        u7 = u2;
    }
    t0 = 0x0;
    u2 = u4;
    if ((u7 + 5.0f) > u6) {
        t0 = 0x1;
        u2 = (u4 * 1.25f);
    }
    u4 = u2;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u5) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u4 = (u2 * 0.800000012f);
    }
    u2 = 0.5f;
    u2 = u2 + 0.400000006f * (float)t0;
    t1 = 0x8C0806E8;
    t2 = (0xB00 + a4);
    t3 = a5;
    u6 = 0.400000006f;
    u7 = 5.0f;
    u8 = u2;
    u9 = (float)t0;
    u10 = *(float *)&a8;
    u11 = *(float *)&a8;
    u12 = *(float *)&a10;
    u13 = *(float *)&a10;
    for (;;) {
        t0 = (t3 == 0);
        t3 = (t3 - 1);
        if (t0) {
            break;
        }
        t1 = 0xB00;
        u6 = (u3 * u0);
        u9 = (*(float *)((a4 + t1)));
        u8 = 0.0f;
        u9 = (u9 * 0.949999988f);
        u9 = (u9 - u10);
        u14 = u10;
        u14 = u14 + u6 * u9;
        u10 = u14;
        u7 = u10;
        u7 = (u7 - u5);
        if (!(u8 > u7)) {
            u9 = u7;
        } else {
            u9 = u5;
            u9 = (u9 - u10);
        }
        if (u4 > u9) {
            u9 = (*(float *)((a4 + t1)));
            u10 = u5;
            u6 = u4;
            u14 = u10;
            u14 = u14 + u6 * u9;
            u10 = u14;
            u8 = 0.0f;
            if (!(u8 > u10)) {
                u9 = u10;
            } else {
                u9 = u10;
                u9 = (-u9);
            }
            if (u9 > 0.949999988f) {
                u9 = 0.0f;
                if (u10 > u9) {
                    t2 = 0x1;
                } else {
                    if (u9 > u10) {
                        t2 = 0xFFFFFFFF;
                    } else {
                        t2 = 0x0;
                    }
                }
                u9 = (float)t2;
                u10 = u9;
                u10 = (u10 * 0.949999988f);
            }
        }
        t1 = 0xB00;
        u6 = (u3 * u0);
        u9 = (*(float *)((a4 + t1)));
        u8 = 0.0f;
        u9 = (u9 * 0.949999988f);
        u9 = (-u9);
        u9 = (u9 - u11);
        u14 = u11;
        u14 = u14 + u6 * u9;
        u11 = u14;
        u7 = u11;
        u7 = (u7 - u5);
        if (!(u8 > u7)) {
            u9 = u7;
        } else {
            u9 = u5;
            u9 = (u9 - u11);
        }
        if (u4 > u9) {
            u9 = (*(float *)((a4 + t1)));
            u11 = u5;
            u9 = (u9 * u4);
            u8 = 0.0f;
            u11 = (u11 - u9);
            if (!(u8 > u11)) {
                u9 = u11;
            } else {
                u9 = u11;
                u9 = (-u9);
            }
            if (u9 > 0.949999988f) {
                u9 = 0.0f;
                if (u11 > u9) {
                    t2 = 0x1;
                } else {
                    if (u9 > u11) {
                        t2 = 0xFFFFFFFF;
                    } else {
                        t2 = 0x0;
                    }
                }
                u9 = (float)t2;
                u11 = u9;
                u11 = (u11 * 0.949999988f);
            }
        }
        t1 = 0xB00;
        u6 = 1.60000002f;
        u7 = (*(float *)((a4 + t1)));
        u9 = u7;
        u9 = (u9 * 0.800000012f);
        u9 = (u9 - u13);
        u14 = (u3 * u0);
        u9 = (u9 * u14);
        u14 = u13;
        u14 = u14 + u6 * u9;
        u13 = u14;
        u6 = u2;
        u7 = (u7 * u6);
        u6 = 1.60000002f;
        u7 = (-u7);
        u7 = (u7 - u12);
        u14 = (u3 * u0);
        u7 = (u7 * u14);
        u14 = u12;
        u14 = u14 + u6 * u7;
        u12 = u14;
    }
    u0 = *(float *)((a4 + 0xB00));
    u2 = 1.0f;
    u2 = u2 + u0 * u13;
    u3 = 1.0f;
    u3 = u3 + u0 * u12;
    u4 = ((u0 * 118.849998f) / (1.0f + 1.0f));
    u5 = ((u0 * 118.849998f) / (1.0f + 1.0f));
    u6 = (u1 * u10);
    u7 = (u1 * u11);
    if ((u1 * u10) > (u1 * u11)) {
        u6 = (u1 * u11);
        u7 = (u1 * u10);
    }
    u1 = (-(u4 * u2));
    if (!(0.0f > (u4 * u2))) {
        u1 = (u4 * u2);
    }
    u8 = (-(u5 * u3));
    if (!(0.0f > (u5 * u3))) {
        u8 = (u5 * u3);
    }
    *(float *)((a6 + 0x0)) = u6;
    u6 = (u4 * u2);
    u9 = (u5 * u3);
    if (u1 > u8) {
        u6 = (u5 * u3);
        u9 = (u4 * u2);
    }
    *(float *)((a6 + 0x8)) = u6;
    *(float *)((a7 + 0x0)) = u7;
    *(float *)((a7 + 0x8)) = u9;
    return u0;
}
