/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

typedef struct { int w[3]; } Stk3;

int nlDispStripTexOfsTrnsl(int, int, int);
int cursorBoxPut(int a4, int a5, int a6, int a7, Stk3 v, float f4, float f5, float f6);

/* manual: the position is a 3-float vector by value on the stack (read through r11 = the caller's sp); the generated form took one word, a8 */
int cursorBoxPut(int a4, int a5, int a6, int a7, Stk3 v, float f4, float f5, float f6)
{
    int t0;
    int t2;
    float u4;
    int t6;
    int t14;
    int t15;
    float u16;
    int t18;
    int t20;
    int t21;
    float u24;
    float u26;
    float u27;
    int t28;
    float u29;
    float u40;
    int t43;
    float u44;
    float u41;
    float u42;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    float u60;
    float u61;
    int t3;
    int t19;
    float u22;
    int t49;
    float u50;
    int t37;
    float u38;
    int t34;
    float u35;
    int t31;
    float u32;
    int t46;
    float u47;
    int stk[197];

    stk[188] = v.w[0];
    stk[189] = v.w[1];
    stk[190] = v.w[2];
    t0 = 0x8C126670;
    t2 = (((int)stk + 4) + 0x2C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126670 + 540)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    u4 = f5;
    if (46.0f > f5) {
        u4 = 46.0f;
    }
    t6 = a5;
    if (0.0f > (u4 + -92.0f)) {
        t6 = (int)(u4 / (1.0f + 1.0f));
    }
    if (a4 == 0) {
        *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x0)) = 0x0;
        *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x1)) = 0xFF;
        *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x2)) = 0x0;
    } else {
        if (a4 == 1) {
            *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x0)) = 0xFF;
            *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x1)) = 0xFF;
            *(unsigned char *)(((0x248 + ((int)stk + 4)) + 0x2)) = 0x0;
        }
    }
    t14 = 0x8C126670;
    t15 = (0x248 + ((int)stk + 4));
    u16 = 255.0f;
    for (;;) {
        if ((unsigned int)t15 >= (unsigned int)((0x248 + ((int)stk + 4)) + 0x3)) {
            break;
        }
        t14 = (*(signed char *)((t15 + 0x0)));
        t14 = (unsigned char)t14;
        u16 = (float)t14;
        u16 = (u16 * f6);
        t14 = (int)u16;
        *(unsigned char *)((t15 + 0x0)) = t14;
        t15 = (t15 + 0x1);
    }
    *(unsigned int *)(((int)stk + 32)) = (((a4 == 0)) ? 1 : 0);
    *(unsigned int *)(((int)stk + 28)) = (0x248 + ((int)stk + 4));
    *(unsigned int *)(((int)stk + 24)) = ((0x248 + ((int)stk + 4)) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((0x248 + ((int)stk + 4)) + 0x2);
    *(unsigned int *)(((int)stk + 16)) = (((unsigned char)(int)(f4 * 255.0f) << 16) << 8);
    *(float *)(((int)stk + 40)) = (float)t6;
    *(float *)(((int)stk + 36)) = ((float)t6 + 18.0f);
    *(float *)(((int)stk + 12)) = ((u4 + -92.0f) + 110.0f);
    *(float *)(((int)stk + 44)) = ((u4 + -92.0f) + 124.0f);
    *(unsigned int *)(((int)stk + 4)) = (0x24C + ((int)stk + 4));
    t18 = 0x8C0DECA0;
    t20 = 0x0;
    t21 = (((int)stk + 4) + 0x2C);
    for (;;) {
        if ((int)t20 < (int)0x5) {
            if (0.0f > (u4 + -92.0f)) {
                t18 = t20;
                if (t18 == 1) {
                    t18 = 0x20;
                    u24 = *(float *)((((int)stk + 4) + t18));
                    t18 = 0x48;
                    *(float *)(((t21 + 0xC) + t18)) = u24;
                    t18 = 0x30;
                    *(float *)(((t21 + 0xC) + t18)) = u24;
                    u22 = u24;
                    t37 = (t21 + 0xC);
                    u38 = u24;
                } else {
                    if (t18 == 2) {
                        t18 = 0x18;
                        *(float *)(((t21 + 0xC) + t18)) = u22;
                        t18 = 0x24;
                        *(float *)(((t21 + 0xC) + 0x0)) = u22;
                        u26 = *(float *)((((int)stk + 4) + t18));
                        t18 = 0x48;
                        *(float *)(((t21 + 0xC) + t18)) = (u26 + u22);
                        t18 = 0x30;
                        *(float *)(((t21 + 0xC) + t18)) = (u26 + u22);
                        u27 = (u26 + u22);
                        u22 = (u26 + u22);
                        t34 = (t21 + 0xC);
                        u35 = u27;
                    } else {
                        t18 = t20;
                        if (t18 == 3) {
                            t18 = 0x48;
                            *(float *)(((t21 + 0xC) + t18)) = u22;
                            t18 = 0x30;
                            *(float *)(((t21 + 0xC) + t18)) = u22;
                            t18 = 0x18;
                            *(float *)(((t21 + 0xC) + t18)) = u22;
                            *(float *)(((t21 + 0xC) + 0x0)) = u22;
                            t31 = (t21 + 0xC);
                            u32 = 124.0f;
                        } else {
                            t28 = t15;
                            u29 = 124.0f;
                            if (t18 == 4) {
                                t18 = 0x18;
                                *(float *)(((t21 + 0xC) + t18)) = u22;
                                t18 = 0x48;
                                *(float *)(((t21 + 0xC) + 0x0)) = u22;
                                *(float *)(((t21 + 0xC) + t18)) = (u22 + 14.0f);
                                t18 = 0x30;
                                *(float *)(((t21 + 0xC) + t18)) = (u22 + 14.0f);
                                t28 = (t21 + 0xC);
                                u29 = (u22 + 14.0f);
                            }
                            t31 = t28;
                            u32 = u29;
                        }
                        t34 = t31;
                        u35 = u32;
                    }
                    t37 = t34;
                    u38 = u35;
                }
                t49 = t37;
                u50 = u38;
            } else {
                t18 = t20;
                if (t18 == 3) {
                    t18 = 0x8;
                    u40 = *(float *)((((int)stk + 4) + t18));
                    t18 = 0x48;
                    *(float *)(((t21 + 0xC) + t18)) = u40;
                    t18 = 0x30;
                    *(float *)(((t21 + 0xC) + t18)) = u40;
                    t46 = (t21 + 0xC);
                    u47 = u40;
                } else {
                    t43 = t15;
                    u44 = 124.0f;
                    if (t18 == 4) {
                        t18 = 0x8;
                        u41 = *(float *)((((int)stk + 4) + t18));
                        t18 = 0x18;
                        *(float *)(((t21 + 0xC) + t18)) = u41;
                        t18 = 0x28;
                        *(float *)(((t21 + 0xC) + 0x0)) = u41;
                        u42 = *(float *)((((int)stk + 4) + t18));
                        t18 = 0x48;
                        *(float *)(((t21 + 0xC) + t18)) = u42;
                        t18 = 0x30;
                        *(float *)(((t21 + 0xC) + t18)) = u42;
                        t43 = (t21 + 0xC);
                        u44 = u42;
                    }
                    t46 = t43;
                    u47 = u44;
                }
                t49 = t46;
                u50 = u47;
            }
            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
            t19 = (*(int *)(((int)stk + 4)));
            t54 = ((0x248 + ((int)stk + 4)) + 0x2);
            t55 = 0x5;
            t56 = t49;
            t57 = 0x0;
            t58 = (((unsigned char)(int)(f4 * 255.0f) << 16) << 8);
            t59 = t19;
            u60 = u50;
            u61 = 0.0f;
            for (;;) {
                if ((int)t57 >= (int)0x4) {
                    break;
                }
                t58 = t57;
                t58 = (t58 << 1);
                t55 = t57;
                t58 = (t58 + t55);
                t54 = t21;
                t58 = (t58 << 2);
                t56 = 0x1C;
                u61 = (*(float *)(((0x2EC + ((int)stk + 4)) + 0x0)));
                t58 = (t58 << 1);
                t54 = (t54 + 0xC);
                t55 = t21;
                t54 = (t54 + t58);
                u60 = (*(float *)((t54 + 0x0)));
                t56 = (t57 * t56);
                u60 = (u60 + u61);
                t55 = (t55 + 0xC);
                t18 = 0x4;
                t56 = (t56 + (0x24C + ((int)stk + 4)));
                t55 = (t55 + t58);
                *(float *)((t56 + 0x0)) = u60;
                u60 = (*(float *)((t55 + t18)));
                t55 = t21;
                u61 = (*(float *)(((0x2EC + ((int)stk + 4)) + t18)));
                t55 = (t55 + 0xC);
                u60 = (u60 + u61);
                *(float *)((t56 + t18)) = u60;
                t18 = 0x8;
                u61 = (*(float *)(((0x2EC + ((int)stk + 4)) + t18)));
                *(float *)((t56 + t18)) = u61;
                t18 = 0x4;
                u61 = (*(float *)((t21 + t18)));
                t18 = 0xC;
                t55 = (t55 + t58);
                u60 = (*(float *)((t55 + t18)));
                t55 = t21;
                t55 = (t55 + 0xC);
                u60 = (u60 / u61);
                t58 = (t58 + t55);
                *(float *)((t56 + t18)) = u60;
                t18 = 0x8;
                u61 = (*(float *)((t21 + t18)));
                t18 = 0x10;
                u60 = (*(float *)((t58 + t18)));
                u60 = (u60 / u61);
                u60 = (-u60);
                u60 = (u60 + 1.0f);
                *(float *)((t56 + t18)) = u60;
                t55 = (*(int *)(((int)stk + 32)));
                if ((t55 == 0) && (t18 = a4, t18 != 1)) {
                    *(unsigned int *)((t19 + 0x14)) = a4;
                } else {
                    t55 = (*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0)));
                    t55 = (unsigned char)t55;
                    t54 = (*(signed char *)(((*(int *)(((int)stk + 24))) + 0x0)));
                    t55 = (t55 << 16);
                    t54 = (unsigned char)t54;
                    t54 = (t54 << 8);
                    t55 = (t55 | t54);
                    t54 = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0)));
                    t54 = (unsigned char)t54;
                    t55 = (t55 | t54);
                    t55 = (t55 | (*(int *)(((int)stk + 16))));
                    *(unsigned int *)((t59 + 0x14)) = t55;
                }
                t55 = (*(int *)(((int)stk + 8)));
                t19 = (t19 + 0x1C);
                t59 = (t59 + 0x1C);
                t57 = (t57 + 0x1);
                *(unsigned int *)((t55 + 0x18)) = 0x0;
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1C);
            }
            t18 = (nlDispStripTexOfsTrnsl(0x4, (0x24C + ((int)stk + 4)), (*(int *)((t21 + 0x0)))));
            t20 = (t20 + 0x1);
            t21 = (t21 + 0x6C);
            continue;
        }
        break;
    }
    return t18;
}
