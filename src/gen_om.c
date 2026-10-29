/* Straight-line functions with calls and guards (batch gen_om): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u14;
    int t10;
    int t8;
    float u16;
    float u17;
    float u18;
    float u20;
    float u21;
    int t24;
    float u26;
    float u32;
    float u34;
    int t35;
    int t36;
    int t37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u43;
    float u44;
    float u45;
    int t46;
    float u48;
    float u51;
    float u61;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    float u83;
    float u86;
    float u88;
    float u90;
    float u91;

    u2 = *(float *)0x8C23D204;
    u3 = *(float *)0x8C287B40;
    u4 = *(float *)((a4 + 0xB9C));
    u5 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    u6 = (-(u4 / u3));
    if (!(0.0f > (u4 / u3))) {
        u6 = (u4 / u3);
    }
    u14 = (u4 / u3);
    if (u6 > 0.949999988f) {
        t10 = 0x1;
        if ((u4 / u3) > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > (u4 / u3)) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        u14 = ((float)t10 * 0.949999988f);
    }
    u16 = *(float *)((a4 + 0xBA4));
    u17 = 0.300000012f;
    u17 = u17 + 3.29999995f * (u5 * u2);
    u18 = (-u16);
    if (!(0.0f > u16)) {
        u18 = u16;
    }
    u20 = *(float *)0x8C291F84;
    u21 = (-u20);
    if (!(0.0f > u20)) {
        u21 = u20;
    }
    t24 = 0x0;
    u26 = u17;
    if ((u21 + 5.0f) > u18) {
        t24 = 0x1;
        u26 = (u17 * 1.25f);
    }
    u32 = u26;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u14) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u32 = (u26 * 0.800000012f);
    }
    u34 = 0.5f;
    u34 = u34 + 0.400000006f * (float)t24;
    t35 = 0x8C0806E8;
    t36 = (0xB00 + a4);
    t37 = a5;
    u38 = 0.400000006f;
    u39 = 5.0f;
    u40 = u34;
    u41 = (float)t24;
    u42 = *(float *)&a8;
    u43 = *(float *)&a8;
    u44 = *(float *)&a10;
    u45 = *(float *)&a10;
    for (;;) {
        t46 = (t37 == 0);
        t37 = (t37 - 1);
        if (t46) {
            break;
        }
        t35 = 0xB00;
        u38 = (u5 * u2);
        u41 = (*(float *)((a4 + t35)));
        u40 = 0.0f;
        u41 = (u41 * 0.949999988f);
        u41 = (u41 - u42);
        u48 = u42;
        u48 = u48 + u38 * u41;
        u42 = u48;
        u39 = u42;
        u39 = (u39 - u14);
        if (!(u40 > u39)) {
            u41 = u39;
        } else {
            u41 = u14;
            u41 = (u41 - u42);
        }
        if (u32 > u41) {
            u41 = (*(float *)((a4 + t35)));
            u42 = u14;
            u38 = u32;
            u51 = u42;
            u51 = u51 + u38 * u41;
            u42 = u51;
            u40 = 0.0f;
            if (!(u40 > u42)) {
                u41 = u42;
            } else {
                u41 = u42;
                u41 = (-u41);
            }
            if (u41 > 0.949999988f) {
                u41 = 0.0f;
                if (u42 > u41) {
                    t36 = 0x1;
                } else {
                    if (u41 > u42) {
                        t36 = 0xFFFFFFFF;
                    } else {
                        t36 = 0x0;
                    }
                }
                u41 = (float)t36;
                u42 = u41;
                u42 = (u42 * 0.949999988f);
            }
        }
        t35 = 0xB00;
        u38 = (u5 * u2);
        u41 = (*(float *)((a4 + t35)));
        u40 = 0.0f;
        u41 = (u41 * 0.949999988f);
        u41 = (-u41);
        u41 = (u41 - u43);
        u61 = u43;
        u61 = u61 + u38 * u41;
        u43 = u61;
        u39 = u43;
        u39 = (u39 - u14);
        if (!(u40 > u39)) {
            u41 = u39;
        } else {
            u41 = u14;
            u41 = (u41 - u43);
        }
        if (u32 > u41) {
            u41 = (*(float *)((a4 + t35)));
            u43 = u14;
            u41 = (u41 * u32);
            u40 = 0.0f;
            u43 = (u43 - u41);
            if (!(u40 > u43)) {
                u41 = u43;
            } else {
                u41 = u43;
                u41 = (-u41);
            }
            if (u41 > 0.949999988f) {
                u41 = 0.0f;
                if (u43 > u41) {
                    t36 = 0x1;
                } else {
                    if (u41 > u43) {
                        t36 = 0xFFFFFFFF;
                    } else {
                        t36 = 0x0;
                    }
                }
                u41 = (float)t36;
                u43 = u41;
                u43 = (u43 * 0.949999988f);
            }
        }
        t35 = 0xB00;
        u38 = 1.60000002f;
        u39 = (*(float *)((a4 + t35)));
        u41 = u39;
        u41 = (u41 * 0.800000012f);
        u41 = (u41 - u45);
        u73 = (u5 * u2);
        u41 = (u41 * u73);
        u74 = u45;
        u74 = u74 + u38 * u41;
        u45 = u74;
        u38 = u34;
        u39 = (u39 * u38);
        u38 = 1.60000002f;
        u39 = (-u39);
        u39 = (u39 - u44);
        u75 = (u5 * u2);
        u39 = (u39 * u75);
        u76 = u44;
        u76 = u76 + u38 * u39;
        u44 = u76;
    }
    u77 = *(float *)((a4 + 0xB00));
    u78 = 1.0f;
    u78 = u78 + u77 * u45;
    u79 = 1.0f;
    u79 = u79 + u77 * u44;
    u80 = ((u77 * 118.849998f) / (1.0f + 1.0f));
    u81 = ((u77 * 118.849998f) / (1.0f + 1.0f));
    u82 = (u3 * u42);
    u83 = (u3 * u43);
    if ((u3 * u42) > (u3 * u43)) {
        u82 = (u3 * u43);
        u83 = (u3 * u42);
    }
    u86 = (-(u80 * u78));
    if (!(0.0f > (u80 * u78))) {
        u86 = (u80 * u78);
    }
    u88 = (-(u81 * u79));
    if (!(0.0f > (u81 * u79))) {
        u88 = (u81 * u79);
    }
    *(float *)((a6 + 0x0)) = u82;
    u90 = (u80 * u78);
    u91 = (u81 * u79);
    if (u86 > u88) {
        u90 = (u81 * u79);
        u91 = (u80 * u78);
    }
    *(float *)((a6 + 0x8)) = u90;
    *(float *)((a7 + 0x0)) = u83;
    *(float *)((a7 + 0x8)) = u91;
    return u77;
}
