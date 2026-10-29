/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
float cpuShotRange(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10);

float cpuShotRange(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    float u0;
    float u1;
    int t3;
    int t4;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u19;
    int t15;
    int t13;
    float u21;
    float u22;
    float u23;
    float u25;
    float u26;
    int t29;
    float u31;
    float u37;
    float u39;
    int t40;
    int t41;
    int t42;
    float u43;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    float u49;
    int t50;
    float u52;
    float u55;
    float u65;
    float u79;
    float u80;
    float u81;
    float u84;
    float u85;
    float u86;
    float u87;
    float u88;
    float u89;
    float u90;
    float u91;
    float u92;
    float u93;
    float u96;
    float u98;
    float u100;
    float u101;
    float u104;
    float u106;
    float u108;
    float u109;

    u0 = *(float *)((a4 + 0xB90));
    u1 = *(float *)((a4 + 0xB98));
    t3 = (int)((int)(nlRand()) % (int)0x3);
    t4 = *(int *)(((0xC50 + a4) + 0x0));
    u7 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    u8 = *(float *)0x8C23D204;
    u9 = *(float *)0x8C287B40;
    u10 = *(float *)((a4 + 0xB9C));
    u11 = (-(u10 / u9));
    if (!(0.0f > (u10 / u9))) {
        u11 = (u10 / u9);
    }
    u19 = (u10 / u9);
    if (u11 > 0.949999988f) {
        t15 = 0x1;
        if ((u10 / u9) > 0.0f) {
        } else {
            t13 = 0x0;
            if (0.0f > (u10 / u9)) {
                t13 = 0xFFFFFFFF;
            }
            t15 = t13;
        }
        u19 = ((float)t15 * 0.949999988f);
    }
    u21 = 0.300000012f;
    u21 = u21 + 3.29999995f * (u7 * u8);
    u22 = *(float *)((a4 + 0xBA4));
    u23 = (-u22);
    if (!(0.0f > u22)) {
        u23 = u22;
    }
    u25 = *(float *)0x8C291F84;
    u26 = (-u25);
    if (!(0.0f > u25)) {
        u26 = u25;
    }
    t29 = 0x0;
    u31 = u21;
    if ((u26 + 5.0f) > u23) {
        t29 = 0x1;
        u31 = (u21 * 1.25f);
    }
    u37 = u31;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 0x1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u19) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u37 = (u31 * 0.800000012f);
    }
    u39 = 0.5f;
    u39 = u39 + 0.400000006f * (float)t29;
    t40 = 0x8C0803E0;
    t41 = (0xB00 + a4);
    t42 = ((t3 + t4) + 0xD);
    u43 = 0.400000006f;
    u44 = (float)t29;
    u45 = f10;
    u46 = u1;
    u47 = u1;
    u48 = u0;
    u49 = u0;
    for (;;) {
        t50 = (t42 == 0);
        t42 = (t42 - 1);
        if (t50) {
            break;
        }
        t40 = 0xB00;
        u43 = (u7 * u8);
        u44 = (*(float *)((a4 + t40)));
        u44 = (u44 * 0.949999988f);
        u44 = (u44 - u49);
        u52 = u49;
        u52 = u52 + u43 * u44;
        u49 = u52;
        u45 = u49;
        u45 = (u45 - u19);
        if (!(0.0f > u45)) {
            u44 = u45;
        } else {
            u44 = u19;
            u44 = (u44 - u49);
        }
        if (u37 > u44) {
            u44 = (*(float *)((a4 + t40)));
            u49 = u19;
            u43 = u37;
            u55 = u49;
            u55 = u55 + u43 * u44;
            u49 = u55;
            if (!(0.0f > u49)) {
                u44 = u49;
            } else {
                u44 = u49;
                u44 = (-u44);
            }
            if (u44 > 0.949999988f) {
                u44 = 0.0f;
                if (u49 > u44) {
                    t41 = 0x1;
                } else {
                    if (u44 > u49) {
                        t41 = 0xFFFFFFFF;
                    } else {
                        t41 = 0x0;
                    }
                }
                u44 = (float)t41;
                u49 = u44;
                u49 = (u49 * 0.949999988f);
            }
        }
        t40 = 0xB00;
        u43 = (u7 * u8);
        u44 = (*(float *)((a4 + t40)));
        u44 = (u44 * 0.949999988f);
        u44 = (-u44);
        u44 = (u44 - u48);
        u65 = u48;
        u65 = u65 + u43 * u44;
        u48 = u65;
        u45 = u48;
        u45 = (u45 - u19);
        if (!(0.0f > u45)) {
            u44 = u45;
        } else {
            u44 = u19;
            u44 = (u44 - u48);
        }
        if (u37 > u44) {
            u44 = (*(float *)((a4 + t40)));
            u48 = u19;
            u44 = (u44 * u37);
            u48 = (u48 - u44);
            if (!(0.0f > u48)) {
                u44 = u48;
            } else {
                u44 = u48;
                u44 = (-u44);
            }
            if (u44 > 0.949999988f) {
                u44 = 0.0f;
                if (u48 > u44) {
                    t41 = 0x1;
                } else {
                    if (u44 > u48) {
                        t41 = 0xFFFFFFFF;
                    } else {
                        t41 = 0x0;
                    }
                }
                u44 = (float)t41;
                u48 = u44;
                u48 = (u48 * 0.949999988f);
            }
        }
        t40 = 0xB00;
        u43 = 1.60000002f;
        u45 = (*(float *)((a4 + t40)));
        u44 = u45;
        u45 = (u45 * u39);
        u44 = (u44 * 0.800000012f);
        u45 = (-u45);
        u45 = (u45 - u47);
        u44 = (u44 - u46);
        u45 = (u45 * ((u7 * u8)));
        u44 = (u44 * ((u7 * u8)));
        u79 = u47;
        u79 = u79 + u43 * u45;
        u47 = u79;
        u80 = u46;
        u80 = u80 + u43 * u44;
        u46 = u80;
    }
    u81 = *(float *)((a4 + 0xB00));
    u84 = 1.0f;
    u84 = u84 + u81 * (((((u46 * u81) + 0.800000012f) / (1.0f + 1.0f))) * u81);
    u85 = 1.0f;
    u85 = u85 + u81 * (((((u47 * u81) + 0.800000012f) / (1.0f + 1.0f))) * u81);
    u86 = ((u81 * 118.849998f) / (1.0f + 1.0f));
    u87 = ((u81 * 118.849998f) / (1.0f + 1.0f));
    u88 = ((u46 * u81) + 1.0f);
    u89 = ((u47 * u81) + 1.0f);
    u90 = ((u81 * 118.849998f) / (1.0f + 1.0f));
    u91 = ((u81 * 118.849998f) / (1.0f + 1.0f));
    u92 = (u9 * u48);
    u93 = (u9 * u49);
    if ((u9 * u49) > (u9 * u48)) {
        u92 = (u9 * u49);
        u93 = (u9 * u48);
    }
    u96 = (-(u87 * u88));
    if (!(0.0f > (u87 * u88))) {
        u96 = (u87 * u88);
    }
    u98 = (-(u89 * u90));
    if (!(0.0f > (u89 * u90))) {
        u98 = (u89 * u90);
    }
    u100 = (u89 * u90);
    u101 = (u87 * u88);
    if (u96 > u98) {
        u100 = (u87 * u88);
        u101 = (u89 * u90);
    }
    u104 = (-(u86 * u84));
    if (!(0.0f > (u86 * u84))) {
        u104 = (u86 * u84);
    }
    u106 = (-(u91 * u85));
    if (!(0.0f > (u91 * u85))) {
        u106 = (u91 * u85);
    }
    u108 = (u91 * u85);
    u109 = (u86 * u84);
    if (u104 > u106) {
        u108 = (u86 * u84);
        u109 = (u91 * u85);
    }
    *(float *)((a7 + 0x0)) = u93;
    *(float *)((a5 + 0x0)) = u93;
    *(float *)((a8 + 0x0)) = u92;
    *(float *)((a6 + 0x0)) = u92;
    *(float *)((a5 + 0x8)) = u101;
    *(float *)((a6 + 0x8)) = u100;
    *(float *)((a7 + 0x8)) = u109;
    *(float *)((a8 + 0x8)) = u108;
    return u81;
}

