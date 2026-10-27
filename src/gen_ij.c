/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int menuDimScreen(int, int, int, int);
int menuListDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int nlDispStripTexOfs(int, int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int menuListExec(int a4, int a5, int a6, int a7);
int rankDrawCharaIcon(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);

int menuListExec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;
    int t24;
    int t26;
    int t28;
    int t29;
    int t87;
    int t75;
    int t32;
    int t34;
    int t40;
    int t43;
    float u44;
    int t49;
    int t58;
    float u59;
    int t64;
    int t3;
    int t7;
    int t11;
    int t15;
    int t19;
    int t23;
    int t27;
    int t67;
    int t52;
    float u45;
    float u60;
    int stk[232];

    t0 = 0x8C125680;
    t2 = (0x2DC + ((int)stk + 40));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125680 + 108)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C1256EC;
    t6 = (0x270 + ((int)stk + 40));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C1256EC + 108)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x8C125758;
    t10 = (0x204 + ((int)stk + 40));
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((0x8C125758 + 108)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    t12 = 0x8C1257C4;
    t14 = (0x198 + ((int)stk + 40));
    for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)((0x8C1257C4 + 108)) < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
    t16 = 0x8C125830;
    t18 = (0x12C + ((int)stk + 40));
    for (;;) { t19 = *(int *)t16; t16 = (t16 + 4); if ((unsigned int)((0x8C125830 + 108)) < (unsigned int)t16) break; *(unsigned int *)t18 = t19; t18 = (t18 + 4); }
    t20 = 0x8C12589C;
    t22 = (0xC0 + ((int)stk + 40));
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((0x8C12589C + 108)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    t24 = 0x8C125908;
    t26 = (((int)stk + 40) + 0x54);
    for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0x8C125908 + 108)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
    t28 = *(int *)(((a4 << 2) + 0x8C29B898));
    *(unsigned int *)(((int)stk + 44)) = t28;
    t29 = *(int *)((t28 + 0x8));
    t87 = 0x8C29B898;
    if (((0x400 & t29) != 0) && ((0x200 & t29) != 0)) {
    } else {
        menuDimScreen((a4 << 2), t29, a6, a7);
        t75 = a5;
        if (a5 != -1) {
            t32 = *(int *)0x8C287D5C;
            t34 = 0x0;
            if ((t32 != 0) && ((t32 != 2) && (t32 != 3))) {
                t34 = 0x3;
            }
            menuListDraw(a5, t34, 0x0, 0x0, *(int *)((int)stk + 40), *(int *)((int)stk + 40 + 4), *(int *)((int)stk + 40 + 8), *(int *)((int)stk + 40 + 12), *(int *)((int)stk + 40 + 16), *(int *)((int)stk + 40 + 20), *(int *)((int)stk + 40 + 24), *(int *)((int)stk + 40 + 28));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x0)) = (0x270 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x4)) = (0x204 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x8)) = (0x198 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0xC)) = (0x12C + ((int)stk + 40));
            *(float *)(((((int)stk + 40) + 0x38) + 0x0)) = 265.0f;
            *(float *)(((((int)stk + 40) + 0x38) + 0x4)) = 186.0f;
            *(float *)(((((int)stk + 40) + 0x38) + 0x8)) = 9.99999975e-05f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((0x2E8 + ((int)stk + 28)), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((*(int *)(((((int)stk + 40) + 0x44) + (a4 << 2)))), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), 1.0f, 1.0f, 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((0xE4 + ((int)stk + 4)), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
            t40 = *(int *)0x8C287D5C;
            if (t40 != 1) {
                if ((t40 != 2) && (t40 != 3)) {
                    *(float *)(((((int)stk + 40) + 0x38) + 0x0)) = 289.0f;
                    *(float *)(((((int)stk + 40) + 0x38) + 0x4)) = 227.0f;
                    *(float *)(((((int)stk + 40) + 0x38) + 0x8)) = 9.99999975e-05f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x0)) = 274.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x4)) = 263.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x8)) = 9.99999975e-05f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
                    sprListPut((((int)stk + 40) + 0x54), 0x1, 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, ((-((float)a5 * 0.600000024f)) + 1.0f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x2C)); }
                    t52 = (sprListPut(0x8C1D18A8, 0x2, 0x0, *(Stk3 *)(((int)stk + 16)), 1.0f, 1.0f, (((float)a5 * 0.600000024f) + 0.400000006f)));
                } else {
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x0)) = 289.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0xC)) = 278.0f;
                    *(unsigned int *)(((((int)stk + 40) + 0x24) + 0x0)) = (((int)stk + 40) + 0x54);
                    *(unsigned int *)(((int)stk + 68)) = 0x1;
                    *(unsigned int *)(((((int)stk + 40) + 0x24) + 0x4)) = 0x8C1D127C;
                    *(unsigned int *)(((int)stk + 72)) = 0x2;
                    t43 = 0x0;
                    for (;;) {
                        u44 = 227.0f;
                        u44 = u44 + 36.0f * (float)t43;
                        *(float *)((((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C)) + 0x4)) = u44;
                        *(float *)((((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C)) + 0x8)) = 9.99999975e-05f;
                        *(unsigned int *)(((int)stk + 40)) = ((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C));
                        if (t43 == a5) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C))); }
                            u45 = 1.0f;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C))); }
                            u45 = 0.400000006f;
                        }
                        t49 = sprListPut((*(int *)(((((int)stk + 40) + 0x24) + (t43 << 2)))), (*(int *)((((((int)stk + 28) + 0x28) + (t43 << 2)) + 0x0))), 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, u45);
                        t43 = (t43 + 0x1);
                        if ((int)t43 >= (int)0x2) {
                            break;
                        }
                    }
                    t52 = t49;
                }
                t67 = t52;
            } else {
                *(float *)(((((int)stk + 40) + 0x20) + 0x0)) = 289.0f;
                *(float *)(((((int)stk + 40) + 0x20) + 0xC)) = 271.0f;
                *(float *)(((((int)stk + 40) + 0x20) + 0x18)) = 274.0f;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x0)) = (((int)stk + 40) + 0x54);
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x0)) = 0x1;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x4)) = 0x8C1D17D0;
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x4)) = 0x2;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x8)) = 0x8C1D18A8;
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x8)) = 0x2;
                t58 = 0x0;
                for (;;) {
                    u59 = 227.0f;
                    u59 = u59 + 36.0f * (float)t58;
                    *(float *)((((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20)) + 0x4)) = u59;
                    *(float *)((((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20)) + 0x8)) = 9.99999975e-05f;
                    *(unsigned int *)(((int)stk + 40)) = ((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20));
                    if (t58 == a5) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20))); }
                        u60 = 1.0f;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20))); }
                        u60 = 0.400000006f;
                    }
                    t64 = sprListPut((*(int *)(((((int)stk + 40) + 0x14) + (t58 << 2)))), (*(int *)(((((int)stk + 40) + 0x8) + (t58 << 2)))), 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, u60);
                    t58 = (t58 + 0x1);
                    if ((int)t58 >= (int)0x3) {
                        break;
                    }
                }
                t67 = t64;
            }
            t75 = t67;
        }
        t87 = t75;
    }
    return t87;
}

int rankDrawCharaIcon(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t10;
    float u25;
    float u26;
    int t15;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    int t55;
    int t3;
    int t38;
    float u44;
    float u45;
    int t29;
    float u34;
    float u35;
    int t21;
    int stk[59];

    stk[50] = a8;
    t0 = 0x8C126BDC;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126BDC + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)((((int)stk + 4) + (a4 << 2)));
    if ((int)t4 < (int)0x6) {
        t5 = ((~(((~t4) + 0x1) & 0x1)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x1);
        }
        t38 = 0x9B;
        u44 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
        u45 = (((float)t5 * 32.0f) / 64.0f);
    } else {
        if (1 && ((int)t4 < (int)0xC)) {
            t10 = ((~(((~(t4 - 6)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t4 - 6) >= 0) {
                t10 = ((t4 - 6) & 0x1);
            }
            t29 = 0x9C;
            u34 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 6) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 6))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
            u35 = (((float)t10 * 32.0f) / 64.0f);
        } else {
            u25 = f5;
            u26 = f6;
            if ((int)t4 >= (int)0xC) {
                t15 = ((~(((~(t4 - 12)) + 0x1) & 0x1)) + 0x1);
                if ((int)(t4 - 12) >= 0) {
                    t15 = ((t4 - 12) & 0x1);
                }
                t21 = 0x9D;
                u25 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 12) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 12))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
                u26 = (((float)t15 * 32.0f) / 64.0f);
            }
            t29 = t21;
            u34 = u25;
            u35 = u26;
        }
        t38 = t29;
        u44 = u34;
        u45 = u35;
    }
    u47 = *(float *)0x8C0E13BC;
    u48 = *(float *)0x8C0E13C0;
    u49 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x8));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x8)) = u49;
    *(float *)(((((int)stk + 4) + 0x48) + 0x8)) = u49;
    u50 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x0)) = u50;
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = u50;
    u51 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x0)) = (u51 + 32.0f);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x0)) = (u51 + 32.0f);
    u52 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x4)) = u52;
    *(float *)(((((int)stk + 4) + 0x48) + 0x4)) = u52;
    u53 = *(float *)0x8C0E13C4;
    u54 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0xC)) = u45;
    *(float *)(((((int)stk + 4) + 0x48) + 0xC)) = u45;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x10)) = u44;
    *(float *)(((((int)stk + 4) + 0x48) + 0x10)) = u44;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x10)) = (u44 + u48);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x10)) = (u44 + u48);
    t55 = (((int)stk + 4) + 0x48);
    for (;;) {
        if ((unsigned int)t55 >= (unsigned int)((((int)stk + 4) + 0x48) + 0x70)) {
            break;
        }
        *(unsigned int *)((t55 + 0x14)) = ((0xFF000000 & a5) | 0xFFFFFF);
        *(unsigned int *)((t55 + 0x18)) = 0x0;
        t55 = (t55 + 0x1C);
    }
    return (nlDispStripTexOfs(0x4, (((int)stk + 4) + 0x48), t38));
}
