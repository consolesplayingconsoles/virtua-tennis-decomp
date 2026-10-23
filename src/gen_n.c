/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int staffMorphReset(void);
int ballBoyRecall(int a4);
int menuSprInit(int a4, int a5, int a6);

int ballBoyRecall(int a4)
{
    int t0;
    int t5;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 > (int)0x9) {
        return ((int (*)(int))(0x8C0C8484))(t0);
    }
    if (t0 == 2) {
        staffMorphReset();
    } else {
        t5 = t0;
    }
    return ((int (*)(int))(0x8C0C847A))(t5);
}

int menuSprInit(int a4, int a5, int a6)
{
    int t0;
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
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u51;
    float u52;
    float u53;
    float u54;
    float u55;
    float u56;
    float u57;
    float u58;
    float u67;
    float u68;
    float u69;
    float u70;
    float u75;
    float u76;
    float u81;
    float u82;
    float u78;
    float u72;

    t0 = *(int *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x0));
    *(unsigned int *)((a4 + 0x0)) = t0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 != 2) {
                if (a6 != 3) {
                } else {
                    u1 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0x10));
                    *(float *)((a4 + 0x4)) = u1;
                    u2 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0x14));
                    *(float *)((a4 + 0x8)) = u2;
                    *(float *)((a4 + 0xC)) = 50.0f;
                    u3 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0x0));
                    u4 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
                    *(float *)((a4 + 0x18)) = (u3 / u4);
                    u5 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
                    u6 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
                    *(float *)((a4 + 0x1C)) = (u6 / u5);
                    u7 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
                    u8 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
                    *(float *)((a4 + 0x20)) = (u8 / u7);
                    u9 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
                    u10 = *(float *)(((0x8C1B217C + ((((a5 << 1) + a5) << 2) << 1)) + 0xC));
                    *(float *)((a4 + 0x24)) = (u10 / u9);
                    *(unsigned int *)((a4 + 0x34)) = 0x5;
                }
            } else {
                u18 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0x10));
                *(float *)((a4 + 0x4)) = u18;
                u19 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0x14));
                *(float *)((a4 + 0x8)) = u19;
                *(float *)((a4 + 0xC)) = 50.0f;
                u20 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0x0));
                u21 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
                *(float *)((a4 + 0x18)) = (u20 / u21);
                u22 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
                u23 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
                *(float *)((a4 + 0x1C)) = (u23 / u22);
                u24 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
                u25 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
                *(float *)((a4 + 0x20)) = (u25 / u24);
                u26 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
                u27 = *(float *)(((0x8C1B2164 + ((((a5 << 1) + a5) << 2) << 1)) + 0xC));
                *(float *)((a4 + 0x24)) = (u27 / u26);
                *(unsigned int *)((a4 + 0x34)) = 0x5;
            }
        } else {
            *(float *)((a4 + 0x4)) = 0.0f;
            *(float *)((a4 + 0x8)) = 0.0f;
            *(float *)((a4 + 0xC)) = 0.00999999978f;
            u35 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
            u36 = *(float *)(((0x8C1B20D4 + ((((a5 << 1) + a5) << 2) << 1)) + 0x0));
            *(float *)((a4 + 0x18)) = (u36 / u35);
            u37 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
            u38 = *(float *)(((0x8C1B20D4 + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
            *(float *)((a4 + 0x1C)) = (u38 / u37);
            u39 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
            u40 = *(float *)(((0x8C1B20D4 + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
            *(float *)((a4 + 0x20)) = (u40 / u39);
            u41 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
            u42 = *(float *)(((0x8C1B20D4 + ((((a5 << 1) + a5) << 2) << 1)) + 0xC));
            *(float *)((a4 + 0x24)) = (u42 / u41);
            *(unsigned int *)((a4 + 0x34)) = 0xA;
        }
    } else {
        *(float *)((a4 + 0x4)) = 0.0f;
        *(float *)((a4 + 0x8)) = 0.0f;
        *(float *)((a4 + 0xC)) = 55.0f;
        u51 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
        u52 = *(float *)(((0x8C1B2044 + ((((a5 << 1) + a5) << 2) << 1)) + 0x0));
        *(float *)((a4 + 0x18)) = (u52 / u51);
        u53 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
        u54 = *(float *)(((0x8C1B2044 + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
        *(float *)((a4 + 0x1C)) = (u54 / u53);
        u55 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x4));
        u56 = *(float *)(((0x8C1B2044 + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
        *(float *)((a4 + 0x20)) = (u56 / u55);
        u57 = *(float *)(((((a6 << 2) << 2) + 0x8C1B2004) + 0x8));
        u58 = *(float *)(((0x8C1B2044 + ((((a5 << 1) + a5) << 2) << 1)) + 0xC));
        *(float *)((a4 + 0x24)) = (u58 / u57);
        *(unsigned int *)((a4 + 0x34)) = 0x5;
    }
    if (a6 == 1) {
        if (a5 == 4) {
            u67 = *(float *)((a4 + 0x18));
            u68 = *(float *)((a4 + 0x20));
            u72 = ((u68 - u67) * 7.0f);
        } else {
            u69 = *(float *)((a4 + 0x18));
            u70 = *(float *)((a4 + 0x20));
            u72 = ((u70 - u69) * 1.0f);
        }
        u78 = u72;
    } else {
        u75 = *(float *)((a4 + 0x18));
        u76 = *(float *)((a4 + 0x20));
        u78 = ((u76 - u75) * 1.0f);
    }
    *(float *)((a4 + 0x10)) = u78;
    u81 = *(float *)((a4 + 0x1C));
    u82 = *(float *)((a4 + 0x24));
    *(float *)((a4 + 0x14)) = ((u82 - u81) * 1.0f);
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    return 0x2C;
}
