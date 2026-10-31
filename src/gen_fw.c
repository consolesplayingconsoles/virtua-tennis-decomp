/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuSglPointInit(void);
int cpuDblPointInit(int, int, int, int);
int eepromGetDiff(void);
int nlRand(void);
int cpuDblInit(int a4, int a5, int a6, float f4, float f5, float f6);
int cpuSglInit(int a4, int a5, int a6, float f4, float f5, float f6, float f7);

int cpuDblInit(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int t4;
    int t7;
    int t8;
    int t11;
    int t20;
    int t21;
    int t24;
    int t26;
    int t27;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    float u63;
    float u64;
    float u65;
    int t46;
    int t48;
    int t49;
    int t40;
    int t42;
    int t43;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t34;
    int t36;
    int t37;
    int t28;
    int t30;
    int t31;
    float u61;
    float u62;
    int t83;
    int t84;
    int t85;
    int t86;

    *(unsigned int *)0x8C2FCC68 = 0x0;
    *(unsigned int *)0x8C2FCC64 = 0x0;
    if ((*(int *)0x8C421F60) != 0) {
        *(unsigned int *)0x8C2FCC1C = 0x7;
        t46 = 0x8C421F60;
        t48 = 0x8C2FCC64;
        t49 = 0x7;
    } else {
        t4 = *(int *)0x8C20D14C;
        if (t4 == 6) {
            t7 = *(int *)0x8C2FBE20;
            t8 = *(int *)((((((t7 << 2) << 2) + t7) << 2) + 0x8C108E7C));
            *(unsigned int *)0x8C2FCC20 = t8;
            *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)((t8 + (((*(int *)0x8C1891E8) << 2) + 0x8C10D358))));
            t11 = *(int *)0x8C40C308;
            if ((t11 == 0xFFFFFFF) && ((t12 = *(int *)0x8C40C30C, t12 == 0x3FFFF) && (t13 = *(int *)0x8C40C310, t13 == 0x3FF))) {
                *(unsigned int *)0x8C2FCC28 = 0x5;
                t14 = 0x5;
                t16 = 0x3FF;
                t17 = 0x3FFFF;
            } else {
                *(unsigned int *)0x8C2FCC28 = 0x4;
                t14 = 0xFFFFFFF;
                t16 = 0x8C10D358;
                t17 = t11;
            }
            *(unsigned int *)0x8C2FCC28 = 0x4;
            t40 = t14;
            t42 = t16;
            t43 = t17;
        } else {
            if ((*(int *)0x8C287D5C) == 0) {
                t20 = eepromGetDiff();
                t21 = *(signed char *)((0x8C10D6F4 + ((t20 << 1) + (t20 << 2))));
                *(unsigned int *)0x8C2FCC1C = (unsigned char)t21;
                t34 = ((t20 << 1) + (t20 << 2));
                t36 = (t20 << 2);
                t37 = (unsigned char)t21;
            } else {
                if ((*(int *)0x8C1D136C) == 0) {
                    t24 = *(signed char *)((0x8C10D718 + (eepromGetDiff())));
                    t26 = (int)((int)(nlRand()) % (int)0x3);
                    *(unsigned int *)0x8C2FCC24 = (t26 + (unsigned char)t24);
                    *(unsigned int *)0x8C2FCC1C = (t26 + (unsigned char)t24);
                    t28 = (t26 + (unsigned char)t24);
                    t31 = 0x8C2FCC24;
                } else {
                    t27 = *(int *)0x8C2FCC24;
                    *(unsigned int *)0x8C2FCC1C = t27;
                    *(unsigned int *)0x8C1D136C = 0x0;
                    t28 = t4;
                    t30 = 0x8C2FCC64;
                    t31 = t27;
                }
                t34 = t28;
                t36 = t30;
                t37 = t31;
            }
            t40 = t34;
            t42 = t36;
            t43 = t37;
        }
        t46 = t40;
        t48 = t42;
        t49 = t43;
    }
    t53 = t46;
    t54 = t48;
    t55 = t49;
    t56 = 0x8C2FC69C;
    t57 = (int)Player;
    t58 = a6;
    t59 = 0x3;
    t60 = 0x8C2FCC1C;
    u63 = f4;
    u64 = f5;
    u65 = f6;
    for (;;) {
        if ((int)t59 < 0) {
            break;
        }
        t53 = (*(int *)0x8C20D14C);
        if (t53 == 6) {
            t60 = 0x8C2FBC58;
            t53 = 0x25;
            t58 = 0x8C15A010;
            t53 = (*(signed char *)((t60 + t53)));
            u63 = 1.0f;
            t53 = (unsigned char)t53;
            u61 = u63;
            t53 = (t53 << 2);
            t55 = (*(int *)((t58 + t53)));
            t53 = 0x141;
            *(unsigned char *)((t56 + t53)) = t55;
            t53 = 0x8C056AEC;
            t55 = (*(int *)0x8C2FCC20);
            u65 = (*(float *)((t53 + 0x0)));
            t53 = 0x8C056AF0;
            u64 = (*(float *)((t53 + 0x0)));
            t53 = 0x10;
            u62 = (float)t55;
            u62 = (u62 / u64);
            u61 = (u61 - u62);
            u61 = (u61 * u65);
            *(float *)((t56 + t53)) = u61;
        } else {
            t55 = (*(int *)0x8C287D5C);
            if (t55 == 0) {
                t53 = 0x141;
                t58 = 0x2;
                *(unsigned char *)((t56 + t53)) = t58;
                t53 = 0xC58;
                t53 = (*(int *)((t57 + t53)));
                t58 = t53;
                if (t53 != 16) {
                    t53 = t58;
                    if (t53 == 17) {
                        t53 = 0x141;
                        *(unsigned char *)((t56 + t53)) = 0x3;
                    }
                } else {
                    t53 = 0x141;
                    *(unsigned char *)((t56 + t53)) = 0x3;
                }
            } else {
                t53 = 0xB5C;
                t58 = 0x8C3438E8;
                t53 = (*(int *)((t57 + t53)));
                t53 = (t53 << 2);
                t55 = (*(int *)((t58 + t53)));
                t53 = 0x141;
                *(unsigned char *)((t56 + t53)) = t55;
                t53 = (*(signed char *)((t56 + t53)));
                t53 = (unsigned char)t53;
                if ((t53 == 2) && ((t83 = (t53 == 2), t53 = 0xC58, t84 = *(int *)((t57 + t53)), t53 = t84, t53 == 16) || (t85 = (t53 == 2), t53 = 0xC58, t86 = *(int *)((t57 + t53)), t53 = t86, t53 == 17))) {
                    t53 = 0x141;
                    *(unsigned char *)((t56 + t53)) = 0x3;
                }
            }
            t53 = 0x10;
            *(float *)((t56 + t53)) = 0.0f;
        }
        t53 = 0x14;
        *(float *)((t56 + t53)) = 0.0f;
        t58 = 0x1;
        t53 = 0x12B;
        *(unsigned char *)((t56 + t53)) = t58;
        t58 = 0x147;
        t53 = 0xA24;
        t58 = (t58 + t56);
        *(unsigned int *)((t57 + t53)) = 0x4;
        t58 = (t58 + 0x11);
        for (;;) {
            t55 = 0x147;
            t55 = (t55 + t56);
            t55 = (t55 + 0x1);
            if ((unsigned int)t58 < (unsigned int)t55) {
                break;
            }
            *(unsigned char *)(((t58 - 0x1) + 0x0)) = 0x0;
            t58 = (t58 - 0x1);
        }
        t54 = 0x160;
        t59 = (t59 - 1);
        t55 = 0xD78;
        t56 = (t56 + t54);
        t57 = (t57 + t55);
    }
    return cpuDblPointInit(t56, t57, t58, t59);
}

int cpuSglInit(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    register int t7;
    register int t8;
    register int t20;
    register int t24;
    register int t25;
    register int t26;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register float u68;
    register float u69;
    register float u70;
    register float u71;
    register int t53;
    register int t56;
    register int t45;
    register int t48;
    register int t12;
    register int t13;
    register int t14;
    register int t17;
    register int t37;
    register int t40;
    register int t29;
    register int t32;
    register float u66;
    register float u67;

    *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
    *(unsigned int *)0x8C301958 = 0x0;
    if ((*(int *)0x8C421F60) != 0) {
        *(unsigned int *)0x8C2FCC1C = 0x18;
        t53 = 0x8C421F60;
        t56 = 0x8C301958;
    } else {
        if ((*(int *)0x8C20D14C) == 6) {
            t7 = *(int *)0x8C2FBE20;
            t8 = *(int *)((((((t7 << 2) << 2) + t7) << 2) + 0x8C108E7C));
            *(unsigned int *)0x8C2FCC20 = t8;
            *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)((t8 + (((*(int *)0x8C1891E8) << 2) + 0x8C10D358))));
            if (((*(int *)0x8C40C308) == 0xFFFFFFF) && ((t12 = *(int *)0x8C40C30C, t12 == 0x3FFFF) && (t13 = *(int *)0x8C40C310, t13 == 0x3FF))) {
                *(unsigned int *)0x8C2FCC28 = 0x5;
                t14 = 0x5;
                t17 = 0x3FFFF;
            } else {
                *(unsigned int *)0x8C2FCC28 = 0x4;
                t14 = 0xFFFFFFF;
                t17 = 0x8C10D358;
            }
            *(unsigned int *)0x8C2FCC28 = 0x4;
            t45 = t14;
            t48 = t17;
        } else {
            if ((*(int *)0x8C287D5C) == 0) {
                t20 = eepromGetDiff();
                *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)((0x8C10D4E8 + ((t20 << 1) + (t20 << 2)))));
                t37 = ((t20 << 1) + (t20 << 2));
                t40 = (t20 << 2);
            } else {
                if ((*(int *)0x8C1D136C) == 0) {
                    t24 = *(signed char *)((0x8C10D50C + (eepromGetDiff())));
                    t25 = nlRand();
                    t26 = ((~(((~t25) + 0x1) & 0x1)) + 0x1);
                    if ((int)t25 >= 0) {
                        t26 = (t25 & 0x1);
                    }
                    *(unsigned int *)0x8C2FCC24 = ((unsigned char)t24 + t26);
                    *(unsigned int *)0x8C2FCC1C = ((unsigned char)t24 + t26);
                    t29 = t26;
                    t32 = 0x8C2FCC24;
                } else {
                    *(unsigned int *)0x8C2FCC1C = (*(int *)0x8C2FCC24);
                    *(unsigned int *)0x8C1D136C = 0x0;
                    t29 = 0x8C2FCC24;
                    t32 = 0x8C301958;
                }
                t37 = t29;
                t40 = t32;
            }
            t45 = t37;
            t48 = t40;
        }
        t53 = t45;
        t56 = t48;
    }
    t62 = t53;
    t63 = t56;
    t64 = 0x1;
    t65 = 0x8C2FC69C;
    u68 = f4;
    u69 = f5;
    u70 = f6;
    u71 = f7;
    for (;;) {
        if ((int)t64 < 0) {
            break;
        }
        t62 = (*(int *)0x8C20D14C);
        u68 = 0.0f;
        if (t62 == 6) {
            t63 = (*(int *)0x8C2FCC20);
            t62 = 0x8C042078;
            u71 = (*(float *)((t62 + 0x0)));
            t62 = 0x8C04207C;
            u70 = (*(float *)((t62 + 0x0)));
            t62 = 0x10;
            u69 = 1.0f;
            u67 = (float)t63;
            u66 = u69;
            u67 = (u67 / u70);
            u66 = (u66 - u67);
            u66 = (u66 * u71);
            *(float *)((t65 + t62)) = u66;
        } else {
            t62 = 0x10;
            *(float *)((t65 + t62)) = u68;
        }
        t63 = 0x160;
        t62 = 0x14;
        *(float *)((t65 + t62)) = u68;
        t64 = (t64 - 1);
        t65 = (t65 + t63);
    }
    return cpuSglPointInit();
}
