/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuSglServe(int a4);

int cpuSglServe(int a4)
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
    register float u0;
    register float u1;
    int stk[10];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((*(int *)(((int)stk + 28))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t10 = (int)((int)(((*(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0))) + (*(int *)(((*(int *)(((int)stk + 24))) + 0x48)))) + 0x6) % (int)0x6);
        t11 = (int)((unsigned int)((int)((unsigned int)t10 + (unsigned int)0x0)) + ((((int)0x0 > (int)t10)) ? 1u : 0u));
        t10 = ((~(((~((t11 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t11 >> 1) + 0x2) >= 0) {
            t10 = (((t11 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((((-t10) + 0x1) << 1) - 1);
    } else {
        t10 = *(int *)(((0x48 + (*(int *)(((int)stk + 24)))) + 0x0));
        t11 = *(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0));
        t12 = ((~(((~((t11 + t10) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t11 + t10) + 0x2) >= 0) {
            t12 = (((t11 + t10) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((-(t12 << 1)) + 0x1);
        t10 = *(int *)(((*(int *)(((int)stk + 24))) + 0x38));
        t11 = *(int *)(((*(int *)(((int)stk + 24))) + 0x34));
        t12 = (int)((unsigned int)((int)((unsigned int)(t11 + t10) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t11 + t10))) ? 1u : 0u));
        t10 = ((~(((~((t12 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t12 >> 1) + 0x2) >= 0) {
            t10 = (((t12 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) * ((-(t10 << 1)) + 0x1));
    }
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x20)) = 0x0;
    t10 = *(int *)((0xB68 + (*(int *)(((int)stk + 28)))));
    if (t10 != 0) {
        t11 = t10;
        if (t10 == 1) {
        } else {
            if (t10 != 2) {
                if (t10 == 5) {
                    t12 = *(int *)(((int)stk + 20));
                    *(unsigned short *)(((0x20 + t12) + 0x0)) = 0x0;
                    t13 = t12;
                    if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                        t12 = *(short *)0x8C2FD8EC;
                        *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t12 << 2) << 2) << 1));
                        *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                        t13 = (0x60 - (((t12 << 2) << 2) << 1));
                    }
                    if ((*(int *)0x8C159F9C) != 0) {
                        t12 = *(int *)(((int)stk + 20));
                        *(unsigned short *)((t12 + 0x20)) = ((*(short *)((t12 + 0x20))) + 0x10);
                        *(unsigned int *)0x8C159F9C = 0x0;
                        t12 = 0x8C159F9C;
                    } else {
                        t14 = t13;
                        if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                            t13 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((0x20 + t13)) = ((*(short *)((0x20 + t13))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                            *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                            t14 = t13;
                        }
                        t12 = t14;
                    }
                    u0 = *(float *)0x8C23D204;
                    u1 = *(float *)0x8C2FD900;
                    *(float *)0x8C2FD900 = (u1 - u0);
                    t13 = t12;
                    if (0.0f > (u1 - u0)) {
                        t12 = *(signed char *)0x8C2FD8FC;
                        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t12;
                        t13 = (unsigned char)t12;
                    }
                    t12 = t13;
                } else {
                    if (t10 == 6) {
                        t13 = *(int *)(((int)stk + 20));
                        *(unsigned short *)(((0x20 + t13) + 0x0)) = 0x0;
                        t14 = t13;
                        if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                            t13 = *(short *)0x8C2FD8EC;
                            *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t13 << 2) << 2) << 1));
                            *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                            t14 = (0x60 - (((t13 << 2) << 2) << 1));
                        }
                        if ((*(int *)0x8C159F9C) != 0) {
                            t13 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((t13 + 0x20)) = ((*(short *)((t13 + 0x20))) + 0x10);
                            *(unsigned int *)0x8C159F9C = 0x0;
                            t13 = 0x8C159F9C;
                        } else {
                            t15 = t14;
                            if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                                t14 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((0x20 + t14)) = ((*(short *)((0x20 + t14))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                                *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                                t15 = t14;
                            }
                            t13 = t15;
                        }
                        u0 = *(float *)0x8C23D204;
                        u1 = *(float *)0x8C2FD900;
                        *(float *)0x8C2FD900 = (u1 - u0);
                        t14 = t13;
                        if (0.0f > (u1 - u0)) {
                            t13 = *(signed char *)0x8C2FD8FC;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t13;
                            t14 = (unsigned char)t13;
                        }
                        t13 = t14;
                    } else {
                        t14 = t10;
                        if (t10 == 7) {
                            t15 = *(int *)(((int)stk + 20));
                            *(unsigned short *)(((0x20 + t15) + 0x0)) = 0x0;
                            t16 = t15;
                            if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                                t15 = *(short *)0x8C2FD8EC;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t15 << 2) << 2) << 1));
                                *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                                t16 = (0x60 - (((t15 << 2) << 2) << 1));
                            }
                            if ((*(int *)0x8C159F9C) != 0) {
                                t15 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((t15 + 0x20)) = ((*(short *)((t15 + 0x20))) + 0x10);
                                *(unsigned int *)0x8C159F9C = 0x0;
                                t15 = 0x8C159F9C;
                            } else {
                                t17 = t16;
                                if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                                    t16 = *(int *)(((int)stk + 20));
                                    *(unsigned short *)((0x20 + t16)) = ((*(short *)((0x20 + t16))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                                    *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                                    t17 = t16;
                                }
                                t15 = t17;
                            }
                            u0 = *(float *)0x8C23D204;
                            u1 = *(float *)0x8C2FD900;
                            *(float *)0x8C2FD900 = (u1 - u0);
                            t16 = t15;
                            if (0.0f > (u1 - u0)) {
                                t15 = *(signed char *)0x8C2FD8FC;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t15;
                                t16 = (unsigned char)t15;
                            }
                            t14 = t16;
                        }
                        t13 = t14;
                    }
                    t12 = t13;
                }
                t13 = t12;
            } else {
                u0 = *(float *)0x8C23D204;
                u1 = *(float *)0x8C2FD900;
                *(float *)0x8C2FD900 = (u1 - u0);
                t12 = t10;
                if (!(0.0f > (u1 - u0))) {
                } else {
                    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x1;
                    if ((*(int *)0x8C421F60) != 0) {
                        t10 = nlRand();
                        t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                        if ((int)t10 >= 0) {
                            t14 = (t10 & 0x1);
                        }
                        *(unsigned int *)(((int)stk + 16)) = (t14 + 0x1);
                        t10 = nlRand();
                        t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                        if ((int)t10 >= 0) {
                            t14 = (t10 & 0x1);
                        }
                        *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                        *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                        *(float *)0x8C2FD8F8 = 0.0f;
                        *(unsigned char *)0x8C2FD8FC = 0x1;
                    } else {
                        if ((*(int *)0x8C159FA0) != 0) {
                            *(unsigned char *)0x8C2FD8FC = 0x0;
                            *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x3;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x20)) = 0x20;
                            t10 = (int)((int)(nlRand()) % (int)0x3);
                            if (t10 != 0) {
                                if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 48.0f;
                                    t10 = 0xFFFFFFFF;
                                } else {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 43.0f;
                                    t10 = 0x1;
                                }
                                *(unsigned int *)0x8C2FD8EC = t10;
                            } else {
                                if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 39.0f;
                                    t10 = 0x1;
                                } else {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 41.0f;
                                    t10 = 0xFFFFFFFF;
                                }
                                *(unsigned int *)0x8C2FD8EC = t10;
                            }
                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                        } else {
                            if ((*(int *)0x8C20D14C) != 6) {
                                if ((int)(*(int *)0x8C2FCC1C) < (int)0x4) {
                                    *(unsigned int *)(((int)stk + 16)) = (((-(*(int *)0x8C2FCC1C)) + ((int)((int)(nlRand()) % (int)0xA))) + 0xF);
                                    t10 = nlRand();
                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t10 >= 0) {
                                        t14 = (t10 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                    t10 = *(int *)0x8C2FCC1C;
                                    *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)((((t10 << 2) + t10) << 1) + 0x14)));
                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                    t10 = *(int *)0x8C2FCC1C;
                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)(((t10 << 2) + t10) + 0xA)));
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    if ((int)(*(int *)0x8C2FCC1C) < (int)0x6) {
                                        *(unsigned int *)(((int)stk + 16)) = (((-(*(int *)0x8C2FCC1C)) + ((int)((int)(nlRand()) % (int)0x3))) + 0xA);
                                        t10 = nlRand();
                                        t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t10 >= 0) {
                                            t14 = (t10 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                        t10 = *(int *)0x8C2FCC1C;
                                        *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)((((t10 << 2) + t10) << 1) + 0x14))) + 0x32);
                                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                        *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x5));
                                        t10 = nlRand();
                                        t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t10 >= 0) {
                                            t14 = (t10 & 0x1);
                                        }
                                        *(unsigned char *)0x8C2FD8FC = (t14 + 0x1);
                                    } else {
                                        if ((int)(*(int *)0x8C2FCC1C) < (int)0x6) {
                                            *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x3));
                                            t10 = nlRand();
                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t10 >= 0) {
                                                t14 = (t10 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                            t10 = *(int *)0x8C2FCC1C;
                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)((((t10 << 2) + t10) << 1) + 0x14))) + 0x46);
                                            if ((*(int *)(((int)stk + 16))) == 0) {
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                            } else {
                                                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x5));
                                            }
                                            t10 = nlRand();
                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t10 >= 0) {
                                                t14 = (t10 & 0x1);
                                            }
                                            *(unsigned char *)0x8C2FD8FC = (t14 + 0x1);
                                        } else {
                                            if ((*(int *)0x8C287D5C) != 0) {
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t14;
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x50);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 16) {
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t14;
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x50);
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                    *(float *)0x8C2FD8F8 = 0.0f;
                                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                                } else {
                                                    t10 = (int)((int)(nlRand()) % (int)0xA);
                                                    *(unsigned int *)(((int)stk + 8)) = t10;
                                                    if ((int)t10 < (int)0x5) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        t14 = nlRand();
                                                        t15 = ((~(((~t14) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t14 >= 0) {
                                                            t15 = (t14 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD8EC = ((t15 << 1) - 1);
                                                        *(float *)0x8C2FD8F4 = 100.0f;
                                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    } else {
                                                        if ((int)t10 < (int)0x7) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t14 = 0x1;
                                                            if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                                            } else {
                                                                t15 = 0x0;
                                                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                                    t15 = 0xFFFFFFFF;
                                                                }
                                                                t14 = t15;
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = (-(t14 * (*(int *)(((int)stk + 12)))));
                                                            *(float *)0x8C2FD8F4 = 100.0f;
                                                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                            *(float *)0x8C2FD8F8 = 3.0f;
                                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                                        } else {
                                                            if ((int)t10 < (int)0x9) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                *(unsigned int *)0x8C2FD8EC = 0x1;
                                                                *(float *)0x8C2FD8F4 = 100.0f;
                                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                                *(unsigned char *)0x8C2FD8FC = 0x2;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                t10 = nlRand();
                                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t10 >= 0) {
                                                                    t14 = (t10 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                                *(float *)0x8C2FD8F4 = 100.0f;
                                                                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                                *(float *)0x8C2FD8F8 = 10.0f;
                                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned char *)(((0x12B + (*(int *)(((int)stk + 20)))) + 0x0)) = (*(int *)((((*(int *)(((0xC58 + (*(int *)(((int)stk + 28)))) + 0x0))) << 2) + 0x8C159F50)));
                                if ((*(int *)0x8C2FCC20) != 0) {
                                    t10 = *(int *)0x8C2FCC20;
                                    if (t10 != 1) {
                                        if (t10 != 2) {
                                            *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x3));
                                            t10 = nlRand();
                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t10 >= 0) {
                                                t14 = (t10 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                            *(float *)0x8C2FD8F4 = 100.0f;
                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        } else {
                                            t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t14;
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xA);
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)(((int)((int)(nlRand()) % (int)0xF)) + 0xA);
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t14 + 0x1);
                                                } else {
                                                    t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t10 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t10 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            if (t14 != 0) {
                                                                t10 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t10 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t10;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0xC58))) > (int)0x7) {
                                            t10 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                            if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = (t14 + 0x1);
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0xA));
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t14 + 0x1);
                                                } else {
                                                    t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t10 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t10 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            if (t14 != 0) {
                                                                t10 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t10 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t10;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x28));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        } else {
                                            t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t14;
                                                t10 = nlRand();
                                                t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t10 >= 0) {
                                                    t14 = (t10 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t14 + 0x1);
                                                } else {
                                                    t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t10 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t10 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            if (t14 != 0) {
                                                                t10 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t10 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t10;
                                                            t10 = nlRand();
                                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t10 >= 0) {
                                                                t14 = (t10 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                    if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                        t10 = nlRand();
                                        t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t10 >= 0) {
                                            t14 = (t10 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = (t14 + 0x1);
                                        *(unsigned int *)0x8C2FD8EC = 0x0;
                                        *(float *)0x8C2FD8F4 = 0.0f;
                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                        *(float *)0x8C2FD8F8 = 0.0f;
                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                    } else {
                                        t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                        if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x14;
                                            t10 = nlRand();
                                            t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t10 >= 0) {
                                                t14 = (t10 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                            *(float *)0x8C2FD8F4 = 30.0f;
                                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                            *(float *)0x8C2FD8F8 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0xF);
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        } else {
                                            t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                            } else {
                                                t10 = (int)((int)(nlRand()) % (int)0xA);
                                                if (t10 == 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(float *)0x8C2FD8F4 = (float)t14;
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                } else {
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    if (t14 != 0) {
                                                        t10 = ((-((int)((int)(nlRand()) % (int)0x5))) - 1);
                                                    } else {
                                                        t10 = (((int)((int)(nlRand()) % (int)0xF)) + 0x5);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t10;
                                                    t10 = nlRand();
                                                    t14 = ((~(((~t10) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t10 >= 0) {
                                                        t14 = (t10 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t14 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                }
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((*(float *)0x8C23D204) > 1.0f) {
                        t10 = (0x5E - (*(int *)(((int)stk + 16))));
                    } else {
                        t10 = (0x5D - (*(int *)(((int)stk + 16))));
                    }
                    *(float *)0x8C2FD900 = (float)t10;
                    if (((*(int *)(((int)stk + 16))) == 0) && (t0 = *(int *)0x8C2FD8F0, t0 == -1)) {
                        *(float *)0x8C2FD8F8 = 0.0f;
                    }
                    if (((int)(*(int *)0x8C2FCC1C) >= (int)0x4) && (t1 = *(int *)(((int)stk + 16)), t1 != 0)) {
                        t0 = (int)((int)(nlRand()) % (int)0x3);
                        if (t0 == 0) {
                            *(float *)0x8C2FD900 = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0x5E);
                        }
                    }
                    if ((*(int *)0x8C159FA0) != 0) {
                    } else {
                        t0 = *(int *)0x8C2FD8EC;
                        u0 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t0))) ? 1u : 0u))) >> 1);
                        u0 = u0 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                        *(unsigned int *)(((int)stk + 8)) = (int)(u0 + 1.0f);
                        if ((unsigned char)(*(signed char *)0x8C2FD8FC) == 1) {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                t1 = (*(int *)(((int)stk + 8)));
                            } else {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                t1 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t1) + 0x0)));
                        } else {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                t1 = (*(int *)(((int)stk + 8)));
                            } else {
                                t0 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                t1 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t0 + t1) + 0x0)));
                        }
                        if ((*(float *)0x8C2FD8F4) > (float)(*(int *)(((int)stk + 4)))) {
                            *(float *)0x8C2FD8F4 = (float)(*(int *)(((int)stk + 4)));
                        }
                    }
                    if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x5C))) != 0) {
                        *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) * 0.699999988f);
                        *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) * 0.899999976f);
                    }
                    if (((unsigned char)(*(signed char *)0x8C2FD8FC) == 2) && (t2 = *(int *)0x8C2FD8EC, t2 == -1)) {
                        *(float *)0x8C2FD8F8 = 10.0f;
                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                    }
                    if ((*(int *)0x8C2FD8EC) == 0) {
                        *(float *)0x8C2FD8F4 = 0.0f;
                    }
                    if ((*(int *)0x8C2FD8F0) == 0) {
                        *(float *)0x8C2FD8F8 = 0.0f;
                    }
                    *(unsigned int *)0x8C159F9C = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x12B)));
                    t12 = 0x12B;
                }
                t13 = t12;
            }
            t11 = t13;
        }
        t0 = t11;
    } else {
        if (((*(int *)0x8C287D5C) == 0) && ((t3 = *(int *)0x8C2FCC1C, t3 != 12) && ((t4 = *(int *)(((int)stk + 28)), t5 = *(int *)((0xC58 + t4)), t5 == 16) && (t6 = *(int *)(((int)stk + 24)), t7 = *(int *)(((int)stk + 24)), t8 = *(int *)(((t6 + 0x44) + 0x0)), t9 = *(int *)((0x48 + t7)), (int)(t8 + t9) >= (int)0x2)))) {
            t1 = *(int *)0x8C159FA0;
            t2 = (int)((int)(nlRand()) % (int)(((t1 << 2) + t1) + 0x5));
            if (t2 == 0) {
                *(unsigned int *)0x8C159FA0 = 0x1;
            } else {
                *(unsigned int *)0x8C159FA0 = 0x0;
            }
        } else {
            *(unsigned int *)0x8C159FA0 = 0x0;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0xA24)) = 0x3;
        if ((*(int *)0x8C159FA0) != 0) {
            t1 = (int)((int)(nlRand()) % (int)0x1E);
            *(float *)0x8C2FD900 = (float)(t1 + 0x1);
            t2 = (t1 + 0x1);
        } else {
            *(float *)0x8C2FD900 = 70.0f;
            t2 = 0x8C04680C;
        }
        t0 = t2;
    }
    return t0;
}
