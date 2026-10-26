/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int adxamp_extract(int a4);

int adxamp_extract(int a4)
{
    int t0;
    float u1;
    int t3;
    int t7;
    int t8;
    int t11;
    int t12;
    int t14;
    int t16;
    int t17;
    int t18;
    int t26;
    int t28;
    int t33;
    int t34;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t57;
    int t63;
    int t66;
    int t15;
    int stk[17];

    t0 = *(int *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x24));
    for (;;) {
        if ((int)0x0 < (int)(*(int *)((a4 + 0x1C)))) {
            t3 = *(int *)((((a4 + 0x4) + 0x0) + 0x0));
            t7 = (int)((int)((unsigned int)(((int (*)(int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x24)))))(t3, 0x1)) >> 1) / (int)(int)((float)t0 * u1));
            t8 = *(int *)((((a4 + 0xC) + 0x0) + 0x0));
            t11 = ((int (*)(int, int))((*(int *)(((*(int *)((t8 + 0x0))) + 0x24)))))(t8, 0x0);
            t12 = ((unsigned int)((unsigned int)t11 >> 2) >> 2);
            if ((int)t7 < (int)((unsigned int)((unsigned int)t11 >> 2) >> 2)) {
                t12 = t7;
            }
            *(unsigned int *)(((int)stk + 16)) = t12;
            t14 = t11;
            t16 = 0x0;
            t17 = 0x0;
            t18 = 0x0;
            for (;;) {
                if ((int)t17 >= (int)(*(int *)(((int)stk + 16)))) {
                    t18 = (t18 + 0x1);
                    if ((int)t18 < (int)(*(int *)((a4 + 0x1C)))) {
                        t17 = a4;
                        t16 = t18;
                        t17 = (t17 + 0x4);
                        t16 = (t16 << 2);
                        t17 = (t17 + t16);
                        t17 = (*(int *)((t17 + 0x0)));
                        t15 = (*(int *)((t17 + 0x0)));
                        t14 = (((int (*)(int, int))((*(int *)((t15 + 0x24)))))(t17, 0x1));
                        t26 = ((unsigned int)t14 >> 1);
                        t14 = (int)((float)t0 * u1);
                        t14 = ((int)((int)t26 / (int)t14));
                        t17 = t14;
                        t28 = *(int *)((((a4 + 0xC) + t16) + 0x0));
                        t15 = (*(int *)((t28 + 0x0)));
                        t14 = (((int (*)(int, int))((*(int *)((t15 + 0x24)))))(t28, 0x0));
                        if ((int)t17 < (int)((unsigned int)((unsigned int)t14 >> 2) >> 2)) {
                            *(unsigned int *)(((int)stk + 16)) = t17;
                            t17 = 0x0;
                            continue;
                        }
                        *(unsigned int *)(((int)stk + 16)) = ((unsigned int)((unsigned int)t14 >> 2) >> 2);
                        t17 = 0x0;
                        continue;
                    }
                    return t14;
                }
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t33 = 0x0;
                for (;;) {
                    if ((int)t33 >= (int)(int)((float)t0 * u1)) {
                        break;
                    }
                    t15 = a4;
                    t15 = (t15 + 0x4);
                    t15 = (t15 + t16);
                    t34 = *(int *)((t15 + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = t34;
                    t15 = (*(int *)((t34 + 0x0)));
                    t14 = (((int (*)(int, int, int, int))((*(int *)((t15 + 0x18)))))(t34, 0x1, (((int)((float)t0 * u1) - t33) << 1), (((int)stk + 4) + 0x18)));
                    t15 = (*(int *)(((int)stk + 32)));
                    t15 = ((unsigned int)t15 >> 1);
                    *(unsigned int *)(((int)stk + 4)) = t15;
                    t39 = *(int *)(((int)stk + 28));
                    if ((int)t15 > 0) {
                        t40 = 0x0;
                        t41 = t39;
                        for (;;) {
                            t42 = *(short *)((t41 + 0x0));
                            t43 = t42;
                            if ((int)t42 < 0) {
                                t43 = (-t42);
                            }
                            t41 = (t41 + 0x2);
                            if ((int)t43 > (int)(*(int *)(((int)stk + 8)))) {
                                *(unsigned int *)(((int)stk + 8)) = t43;
                            }
                            t15 = (*(int *)(((int)stk + 4)));
                            t40 = (t40 + 0x1);
                            if ((int)t40 >= (int)t15) {
                                break;
                            }
                        }
                    }
                    t15 = (*(int *)((((a4 + 0x4) + t16) + 0x0)));
                    *(unsigned int *)(((int)stk + 12)) = t15;
                    t14 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t15 + 0x0))) + 0x20)))))(t15, 0x0, (((int)stk + 4) + 0x18)));
                    t15 = (*(int *)(((int)stk + 4)));
                    t33 = (t33 + t15);
                }
                t57 = *(int *)((((a4 + 0xC) + t16) + 0x0));
                t15 = (*(int *)((t57 + 0x0)));
                t14 = (((int (*)(int, int, int, int))((*(int *)((t15 + 0x18)))))(t57, 0x0, 0x10, (((int)stk + 4) + 0x10)));
                t15 = (*(int *)(((int)stk + 24)));
                if (t15 == 0) {
                    break;
                }
                t15 = (*(int *)(((int)stk + 8)));
                t63 = *(int *)(((int)stk + 20));
                *(unsigned int *)((t63 + 0x0)) = t15;
                t15 = (*(int *)((((a4 + 0x14) + t16) + 0x0)));
                *(unsigned int *)((t63 + 0x4)) = t15;
                *(unsigned int *)((t63 + 0x8)) = (*(int *)((a4 + 0x20)));
                *(unsigned int *)((t63 + 0xC)) = (int)((float)t0 * u1);
                t66 = *(int *)((((a4 + 0xC) + t16) + 0x0));
                t15 = (*(int *)((t66 + 0x0)));
                t14 = (((int (*)(int, int, int))((*(int *)((t15 + 0x20)))))(t66, 0x1, (((int)stk + 4) + 0x10)));
                t15 = a4;
                t15 = (t15 + 0x14);
                t15 = (t15 + t16);
                t17 = (t17 + 0x1);
                *(unsigned int *)((t15 + 0x0)) = ((*(int *)((t15 + 0x0))) + (int)((float)t0 * u1));
                t15 = (*(int *)((a4 + 0x2C)));
                t15 = (t15 + 0x1);
                *(unsigned int *)((a4 + 0x2C)) = t15;
            }
            break;
        }
        return 0x24;
    }
    for (;;) {
    }
}
