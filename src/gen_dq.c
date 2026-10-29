/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuDblServe(int a4);

int cpuDblServe(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register float u0;
    register float u1;
    int stk[9];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((*(int *)(((int)stk + 28))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t15 = (int)((int)(((*(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0))) + (*(int *)(((*(int *)(((int)stk + 24))) + 0x48)))) + 0x6) % (int)0x6);
        t16 = (int)((unsigned int)((int)((unsigned int)t15 + (unsigned int)0x0)) + ((((int)0x0 > (int)t15)) ? 1u : 0u));
        t15 = ((~(((~((t16 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t16 >> 1) + 0x2) >= 0) {
            t15 = (((t16 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((((-t15) + 0x1) << 1) - 1);
    } else {
        t15 = *(int *)(((0x48 + (*(int *)(((int)stk + 24)))) + 0x0));
        t16 = *(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0));
        t17 = ((~(((~((t16 + t15) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t16 + t15) + 0x2) >= 0) {
            t17 = (((t16 + t15) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((-(t17 << 1)) + 0x1);
        t15 = *(int *)(((*(int *)(((int)stk + 24))) + 0x38));
        t16 = *(int *)(((*(int *)(((int)stk + 24))) + 0x34));
        t17 = (int)((unsigned int)((int)((unsigned int)(t16 + t15) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t16 + t15))) ? 1u : 0u));
        t15 = ((~(((~((t17 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t17 >> 1) + 0x2) >= 0) {
            t15 = (((t17 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) * ((-(t15 << 1)) + 0x1));
    }
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x20)) = 0x0;
    t15 = *(int *)((0xB68 + (*(int *)(((int)stk + 28)))));
    if (t15 != 0) {
        t16 = t15;
        if (t15 == 1) {
        } else {
            if (t15 != 2) {
                if (t15 == 5) {
                    t17 = *(int *)(((int)stk + 20));
                    *(unsigned short *)(((0x20 + t17) + 0x0)) = 0x0;
                    t18 = t17;
                    if (!(0.0f > (*(float *)0x8C2FD910))) {
                        t17 = *(short *)0x8C2FD908;
                        *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t17 << 2) << 2) << 1));
                        *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                        t18 = (0x60 - (((t17 << 2) << 2) << 1));
                    }
                    if ((*(int *)0x8C2FD920) != 0) {
                        t17 = *(int *)(((int)stk + 20));
                        *(unsigned short *)((t17 + 0x20)) = ((*(short *)((t17 + 0x20))) + 0x10);
                        *(unsigned int *)0x8C2FD920 = 0x0;
                        t17 = 0x8C2FD920;
                    } else {
                        t19 = t18;
                        if (!(0.0f > (*(float *)0x8C2FD914))) {
                            t18 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((0x20 + t18)) = ((*(short *)((0x20 + t18))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                            *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                            t19 = t18;
                        }
                        t17 = t19;
                    }
                    u0 = *(float *)0x8C23D204;
                    u1 = *(float *)0x8C2FD91C;
                    *(float *)0x8C2FD91C = (u1 - u0);
                    t18 = t17;
                    if (0.0f > (u1 - u0)) {
                        t17 = *(signed char *)0x8C2FD918;
                        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t17;
                        t18 = (unsigned char)t17;
                    }
                    t17 = t18;
                } else {
                    if (t15 == 6) {
                        t18 = *(int *)(((int)stk + 20));
                        *(unsigned short *)(((0x20 + t18) + 0x0)) = 0x0;
                        t19 = t18;
                        if (!(0.0f > (*(float *)0x8C2FD910))) {
                            t18 = *(short *)0x8C2FD908;
                            *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t18 << 2) << 2) << 1));
                            *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                            t19 = (0x60 - (((t18 << 2) << 2) << 1));
                        }
                        if ((*(int *)0x8C2FD920) != 0) {
                            t18 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((t18 + 0x20)) = ((*(short *)((t18 + 0x20))) + 0x10);
                            *(unsigned int *)0x8C2FD920 = 0x0;
                            t18 = 0x8C2FD920;
                        } else {
                            t20 = t19;
                            if (!(0.0f > (*(float *)0x8C2FD914))) {
                                t19 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((0x20 + t19)) = ((*(short *)((0x20 + t19))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                                *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                                t20 = t19;
                            }
                            t18 = t20;
                        }
                        u0 = *(float *)0x8C23D204;
                        u1 = *(float *)0x8C2FD91C;
                        *(float *)0x8C2FD91C = (u1 - u0);
                        t19 = t18;
                        if (0.0f > (u1 - u0)) {
                            t18 = *(signed char *)0x8C2FD918;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t18;
                            t19 = (unsigned char)t18;
                        }
                        t18 = t19;
                    } else {
                        t19 = t15;
                        if (t15 == 7) {
                            t15 = *(int *)(((int)stk + 20));
                            *(unsigned short *)(((0x20 + t15) + 0x0)) = 0x0;
                            t20 = t15;
                            if (!(0.0f > (*(float *)0x8C2FD910))) {
                                t15 = *(short *)0x8C2FD908;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t15 << 2) << 2) << 1));
                                *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                                t20 = (0x60 - (((t15 << 2) << 2) << 1));
                            }
                            if ((*(int *)0x8C2FD920) != 0) {
                                t15 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((t15 + 0x20)) = ((*(short *)((t15 + 0x20))) + 0x10);
                                *(unsigned int *)0x8C2FD920 = 0x0;
                                t15 = 0x8C2FD920;
                            } else {
                                t21 = t20;
                                if (!(0.0f > (*(float *)0x8C2FD914))) {
                                    t20 = *(int *)(((int)stk + 20));
                                    *(unsigned short *)((0x20 + t20)) = ((*(short *)((0x20 + t20))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                                    *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                                    t21 = t20;
                                }
                                t15 = t21;
                            }
                            u0 = *(float *)0x8C23D204;
                            u1 = *(float *)0x8C2FD91C;
                            *(float *)0x8C2FD91C = (u1 - u0);
                            t20 = t15;
                            if (0.0f > (u1 - u0)) {
                                t15 = *(signed char *)0x8C2FD918;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t15;
                                t20 = (unsigned char)t15;
                            }
                            t19 = t20;
                        }
                        t18 = t19;
                    }
                    t17 = t18;
                }
                t15 = t17;
            } else {
                if (((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) != 1) && (t0 = *(int *)(((int)stk + 20)), t1 = *(signed char *)((0x13F + t0)), (unsigned char)t1 != 2)) {
                    t0 = (unsigned char)t1;
                } else {
                    t1 = *(int *)(((int)stk + 28));
                    t17 = *(int *)(((int)stk + 20));
                    t18 = 0x1;
                    if ((-(*(float *)((t1 + 0xAE8)))) > 0.0f) {
                    } else {
                        t19 = 0x0;
                        if (0.0f > (-(*(float *)((0xAE8 + (*(int *)(((int)stk + 28)))))))) {
                            t19 = 0xFFFFFFFF;
                        }
                        t18 = t19;
                    }
                    u0 = ((*(float *)((t1 + 0xB00))) * (float)t18);
                    *(unsigned short *)((t17 + 0x20)) = (int)((-(u0 * 32.0f)) + 96.0f);
                    t0 = 0x20;
                }
                u0 = *(float *)0x8C23D204;
                u1 = *(float *)0x8C2FD91C;
                *(float *)0x8C2FD91C = (u1 - u0);
                t1 = t0;
                if (!(0.0f > (u1 - u0))) {
                } else {
                    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x1;
                    if ((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) << 2)))) != 1) {
                        if ((*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 0) {
                            t0 = nlRand();
                            t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                            if ((int)t0 >= 0) {
                                t17 = (t0 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x28);
                            t0 = nlRand();
                            t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                            if ((int)t0 >= 0) {
                                t17 = (t0 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD90C = ((t17 << 1) - 1);
                            *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0x1E));
                            *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0x1E)) + 0x5);
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            if ((unsigned char)(*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 1) {
                                t0 = nlRand();
                                t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                if ((int)t0 >= 0) {
                                    t17 = (t0 & 0x1);
                                }
                                *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x14)) + 0x37);
                                *(unsigned int *)0x8C2FD90C = 0x0;
                                *(float *)0x8C2FD914 = 0.0f;
                                *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x7));
                                t0 = nlRand();
                                t17 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                                if ((int)t0 >= 0) {
                                    t17 = (t0 & 0x3);
                                }
                                if (t17 != 0) {
                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                } else {
                                    *(unsigned int *)0x8C2FD918 = 0x2;
                                }
                            } else {
                                if ((unsigned char)(*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 2) {
                                    t0 = nlRand();
                                    t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t0 >= 0) {
                                        t17 = (t0 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                    *(float *)0x8C2FD914 = 0.0f;
                                    t0 = nlRand();
                                    t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t0 >= 0) {
                                        t17 = (t0 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = t17;
                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                } else {
                                    t0 = (int)((int)(nlRand()) % (int)0x3);
                                    if (t0 != 0) {
                                        t0 = nlRand();
                                        t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t0 >= 0) {
                                            t17 = (t0 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                        *(float *)0x8C2FD910 = 100.0f;
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t0 = nlRand();
                                        t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t0 >= 0) {
                                            t17 = (t0 & 0x1);
                                        }
                                        if (t17 != 0) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                            t0 = 0x1;
                                            if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                            } else {
                                                t17 = 0x0;
                                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                    t17 = 0xFFFFFFFF;
                                                }
                                                t0 = t17;
                                            }
                                            *(unsigned int *)0x8C2FD908 = (-(t0 * (*(int *)(((int)stk + 12)))));
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                            *(float *)0x8C2FD914 = (1.0f + 1.0f);
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        } else {
                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                            *(unsigned int *)0x8C2FD908 = 0x1;
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                            *(float *)0x8C2FD914 = 0.0f;
                                            *(unsigned int *)0x8C2FD918 = 0x2;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((*(int *)0x8C421F60) != 0) {
                            t0 = nlRand();
                            t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                            if ((int)t0 >= 0) {
                                t17 = (t0 & 0x1);
                            }
                            *(unsigned int *)(((int)stk + 16)) = (t17 + 0x1);
                            t0 = nlRand();
                            t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                            if ((int)t0 >= 0) {
                                t17 = (t0 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                            *(unsigned int *)0x8C2FD90C = 0x0;
                            *(float *)0x8C2FD914 = 0.0f;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            if ((*(int *)0x8C15A0CC) != 0) {
                                *(unsigned int *)0x8C2FD918 = 0x0;
                                *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x3;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = 0x20;
                                t0 = (int)((int)(nlRand()) % (int)0x3);
                                if (t0 != 0) {
                                    if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 48.0f;
                                        t0 = 0xFFFFFFFF;
                                    } else {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 43.0f;
                                        t0 = 0x1;
                                    }
                                    *(unsigned int *)0x8C2FD908 = t0;
                                } else {
                                    if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 37.0f;
                                        t0 = 0x1;
                                    } else {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 39.0f;
                                        t0 = 0xFFFFFFFF;
                                    }
                                    *(unsigned int *)0x8C2FD908 = t0;
                                }
                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                            } else {
                                if ((*(int *)0x8C20D14C) != 6) {
                                    if ((int)(*(int *)0x8C2FCC1C) <= (int)0x2) {
                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xF);
                                        t0 = nlRand();
                                        t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t0 >= 0) {
                                            t17 = (t0 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x14));
                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    }
                                    if ((int)(*(int *)0x8C2FCC1C) <= (int)0x5) {
                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0x5)) + 0xA);
                                        t0 = nlRand();
                                        t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t0 >= 0) {
                                            t17 = (t0 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x14));
                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                        if ((*(int *)(((int)stk + 12))) != (*(int *)0x8C2FD908)) {
                                            *(float *)0x8C2FD914 = 3.0f;
                                        } else {
                                            *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                        }
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        if ((int)(*(int *)0x8C2FCC1C) > (int)0x8) {
                                            if ((int)(*(int *)0x8C2FCC1C) > (int)0xD) {
                                            } else {
                                                if ((*(int *)0x8C287D5C) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)(0xD - (*(int *)0x8C2FCC1C))));
                                                    t0 = nlRand();
                                                    t17 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t17 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t17 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if (((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 16) && (t2 = *(int *)(((int)stk + 28)), t3 = *(int *)((0xC58 + t2)), t3 != 17)) {
                                                        *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)(0xD - (*(int *)0x8C2FCC1C))));
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                        *(float *)0x8C2FD914 = 0.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    } else {
                                                        t0 = (int)((int)(nlRand()) % (int)0xA);
                                                        *(unsigned int *)(((int)stk + 8)) = t0;
                                                        if ((int)t0 < (int)0x5) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t2 = nlRand();
                                                            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t2 >= 0) {
                                                                t3 = (t2 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD908 = ((t3 << 1) - 1);
                                                            *(float *)0x8C2FD910 = 100.0f;
                                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        } else {
                                                            if ((int)t0 < (int)0x7) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t2 = 0x1;
                                                                if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                                                } else {
                                                                    t3 = 0x0;
                                                                    if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                                        t3 = 0xFFFFFFFF;
                                                                    }
                                                                    t2 = t3;
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = (-(t2 * (*(int *)(((int)stk + 12)))));
                                                                *(float *)0x8C2FD910 = 100.0f;
                                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                                *(float *)0x8C2FD914 = 3.0f;
                                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                                            } else {
                                                                if ((int)t0 < (int)0x9) {
                                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                    *(unsigned int *)0x8C2FD908 = 0x1;
                                                                    *(float *)0x8C2FD910 = 100.0f;
                                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                                    *(float *)0x8C2FD914 = 0.0f;
                                                                    *(unsigned int *)0x8C2FD918 = 0x2;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                    t0 = nlRand();
                                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                    if ((int)t0 >= 0) {
                                                                        t2 = (t0 & 0x1);
                                                                    }
                                                                    *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                    *(float *)0x8C2FD910 = 100.0f;
                                                                    *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                                    *(float *)0x8C2FD914 = 10.0f;
                                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            t0 = (int)((int)(nlRand()) % (int)(0xA - (*(int *)0x8C2FCC1C)));
                                            *(unsigned int *)(((int)stk + 16)) = (t0 + 0x3);
                                            if ((int)(t0 + 0x3) <= (int)0x3) {
                                                t0 = nlRand();
                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t0 >= 0) {
                                                    t2 = (t0 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0xF);
                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                *(float *)0x8C2FD914 = 0.0f;
                                            } else {
                                                t0 = nlRand();
                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t0 >= 0) {
                                                    t2 = (t0 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0xE)) + 0x36);
                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                if ((*(int *)(((int)stk + 12))) != (*(int *)0x8C2FD908)) {
                                                    t0 = (((int)((int)(nlRand()) % (int)0x5)) + 0x5);
                                                } else {
                                                    t0 = (((int)((int)(nlRand()) % (int)0x5)) + 0xA);
                                                }
                                                *(float *)0x8C2FD914 = (float)t0;
                                            }
                                            if ((*(int *)0x8C2FCC1C) != 7) {
                                            } else {
                                                if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x13F))) != 0) {
                                                } else {
                                                    t0 = *(int *)(((int)stk + 16));
                                                    *(unsigned int *)(((int)stk + 16)) = (t0 + t0);
                                                    if ((int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x140))) <= (int)0x1) {
                                                        *(unsigned int *)0x8C2FD908 = (int)((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12))));
                                                        t0 = (nlRand());
                                                    } else {
                                                        *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                                                        t0 = (nlRand());
                                                    }
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)t0 % (int)0x14)) + 0x32);
                                                }
                                            }
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        }
                                    }
                                } else {
                                    if ((*(int *)0x8C2FCC20) != 0) {
                                        t0 = *(int *)0x8C2FCC20;
                                        if (t0 != 1) {
                                            if (t0 != 2) {
                                                if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) == 16) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                    *(float *)0x8C2FD910 = 100.0f;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 17) {
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                        *(float *)0x8C2FD914 = 0.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    }
                                                }
                                            } else {
                                                t0 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t2;
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t0 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                    if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xA);
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)(((int)((int)(nlRand()) % (int)0x14)) + 0xF);
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t2 + 0x1);
                                                    } else {
                                                        t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t0 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t0 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                if (t2 != 0) {
                                                                    t0 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t0 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t0;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((int)(*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) > (int)0x7) {
                                                t0 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = (t2 + 0x1);
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t2 + 0x1);
                                                    } else {
                                                        t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t0 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t0 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                if (t2 != 0) {
                                                                    t0 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t0 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t0;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x28));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t2;
                                                    t0 = nlRand();
                                                    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t0 >= 0) {
                                                        t2 = (t0 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t2 + 0x1);
                                                    } else {
                                                        t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t0 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t0 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                if (t2 != 0) {
                                                                    t0 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t0 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t0;
                                                                t0 = nlRand();
                                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t0 >= 0) {
                                                                    t2 = (t0 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                        if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                            t0 = nlRand();
                                            t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t0 >= 0) {
                                                t2 = (t0 & 0x1);
                                            }
                                            *(unsigned int *)(((int)stk + 16)) = (t2 + 0x1);
                                            *(unsigned int *)0x8C2FD908 = 0x0;
                                            *(float *)0x8C2FD910 = 0.0f;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                            *(float *)0x8C2FD914 = 0.0f;
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        } else {
                                            t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x14;
                                                t0 = nlRand();
                                                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t0 >= 0) {
                                                    t2 = (t0 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                *(float *)0x8C2FD910 = 30.0f;
                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                *(float *)0x8C2FD914 = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0x5);
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            } else {
                                                t0 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                } else {
                                                    t0 = (int)((int)(nlRand()) % (int)0xA);
                                                    if (t0 == 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(float *)0x8C2FD910 = (float)t2;
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                    } else {
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        if (t2 != 0) {
                                                            t0 = ((-((int)((int)(nlRand()) % (int)0x5))) - 1);
                                                        } else {
                                                            t0 = (((int)((int)(nlRand()) % (int)0xF)) + 0x5);
                                                        }
                                                        *(unsigned int *)(((int)stk + 16)) = t0;
                                                        t0 = nlRand();
                                                        t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t0 >= 0) {
                                                            t2 = (t0 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t2 << 1) - 1);
                                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                    }
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) == 1) {
                        if ((int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x140))) <= (int)0x1) {
                            *(unsigned int *)0x8C2FD908 = (int)((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12))));
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                        } else {
                            *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                        }
                        *(unsigned int *)0x8C2FD90C = 0x0;
                        *(float *)0x8C2FD914 = 0.0f;
                        *(unsigned int *)0x8C2FD918 = 0x1;
                    } else {
                        if ((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) == 2) {
                            if ((int)(unsigned char)(*(signed char *)((0x140 + (*(int *)(((int)stk + 20)))))) <= (int)0x1) {
                                *(unsigned int *)0x8C2FD908 = (int)((*(float *)((0xB00 + (*(int *)(((int)stk + 28)))))) * (float)(*(int *)(((int)stk + 12))));
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                            } else {
                                *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                            }
                            *(unsigned int *)0x8C2FD90C = 0x0;
                            *(float *)0x8C2FD914 = 0.0f;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        }
                    }
                    if ((*(float *)0x8C23D204) > 1.0f) {
                        t0 = (0x5E - (*(int *)(((int)stk + 16))));
                    } else {
                        t0 = (0x5D - (*(int *)(((int)stk + 16))));
                    }
                    *(float *)0x8C2FD91C = (float)t0;
                    if (((*(int *)(((int)stk + 16))) == 0) && (t4 = *(int *)0x8C2FD90C, t4 == -1)) {
                        *(float *)0x8C2FD914 = 0.0f;
                    }
                    if (((int)(*(int *)0x8C2FCC1C) < (int)0x14) && ((t5 = *(int *)0x8C2FCC1C, (int)t5 >= (int)0x4) && (t6 = *(int *)(((int)stk + 16)), t6 != 0))) {
                        t0 = (int)((int)(nlRand()) % (int)0x3);
                        if (t0 == 0) {
                            if ((*(float *)0x8C23D204) > 1.0f) {
                                t0 = (((int)((int)(nlRand()) % (int)0x3)) + 0x5F);
                            } else {
                                t0 = (((int)((int)(nlRand()) % (int)0x3)) + 0x5E);
                            }
                            *(float *)0x8C2FD91C = (float)t0;
                        }
                    }
                    if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x13F))) != 0) {
                        t0 = *(int *)0x8C2FD908;
                        u0 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t0))) ? 1u : 0u))) >> 1);
                        u0 = u0 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                        *(unsigned int *)(((int)stk + 8)) = (int)(u0 + 1.0f);
                        if ((*(int *)0x8C2FD918) == 1) {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                t2 = (*(int *)(((int)stk + 8)));
                            } else {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                t2 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                        } else {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                t2 = (*(int *)(((int)stk + 8)));
                            } else {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                t2 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                        }
                        if ((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4)))) {
                            *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                        }
                    } else {
                        if ((*(int *)0x8C15A0CC) != 0) {
                            t0 = *(int *)0x8C2FD908;
                            u0 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t0))) ? 1u : 0u))) >> 1);
                            u0 = u0 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                            *(unsigned int *)(((int)stk + 8)) = (int)(u0 + 1.0f);
                            if ((*(int *)0x8C2FD918) == 1) {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                    t2 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                    t2 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                            } else {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                    t2 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                    t2 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                            }
                            if ((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4)))) {
                                *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                            }
                        } else {
                            t0 = *(int *)0x8C2FD908;
                            u0 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t0))) ? 1u : 0u))) >> 1);
                            u0 = u0 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                            *(unsigned int *)(((int)stk + 8)) = (int)(u0 + 1.0f);
                            if ((*(int *)0x8C2FD918) == 1) {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3FA);
                                    t2 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D402);
                                    t2 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                            } else {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D40A);
                                    t2 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D412);
                                    t2 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t2) + 0x0)));
                            }
                            if (!((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4))))) {
                            } else {
                                *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                            }
                        }
                    }
                    if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x5C))) != 0) {
                        *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) * 0.699999988f);
                        *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) * 0.899999976f);
                    }
                    if (((*(int *)0x8C2FD918) == 2) && (t7 = *(int *)0x8C2FD908, t7 == -1)) {
                        *(float *)0x8C2FD914 = 10.0f;
                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                    }
                    if ((*(int *)0x8C2FD908) == 0) {
                        *(float *)0x8C2FD910 = 0.0f;
                    }
                    if ((*(int *)0x8C2FD90C) == 0) {
                        *(float *)0x8C2FD914 = 0.0f;
                    }
                    *(unsigned int *)0x8C2FD920 = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x12B)));
                    t1 = 0x12B;
                }
                t15 = t1;
            }
            t16 = t15;
        }
        t0 = t16;
    } else {
        if (((*(int *)0x8C287D5C) == 0) && ((t8 = *(int *)0x8C2FCC1C, t8 != 13) && ((t9 = *(int *)(((int)stk + 28)), t10 = *(int *)((0xC58 + t9)), t10 == 16) && (t11 = *(int *)(((int)stk + 24)), t12 = *(int *)(((int)stk + 24)), t13 = *(int *)(((t11 + 0x44) + 0x0)), t14 = *(int *)((0x48 + t12)), (int)(t13 + t14) >= (int)0x2)))) {
            t1 = *(int *)0x8C15A0CC;
            t2 = (int)((int)(nlRand()) % (int)(((t1 << 2) + t1) + 0x5));
            if (t2 == 0) {
                *(unsigned int *)0x8C15A0CC = 0x1;
            } else {
                *(unsigned int *)0x8C15A0CC = 0x0;
            }
        } else {
            *(unsigned int *)0x8C15A0CC = 0x0;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0xA24)) = 0x3;
        if ((*(int *)0x8C15A0CC) != 0) {
            t1 = (int)((int)(nlRand()) % (int)0x1E);
            *(float *)0x8C2FD91C = (float)(t1 + 0x1);
            t2 = (t1 + 0x1);
        } else {
            *(float *)0x8C2FD91C = 70.0f;
            t2 = 0x8C05AE54;
        }
        t0 = t2;
    }
    return t0;
}
