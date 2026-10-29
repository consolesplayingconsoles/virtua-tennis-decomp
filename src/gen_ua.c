/* Straight-line functions with calls and guards (batch gen_ua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int motionSetSpeed(int, float);
int ballBoyIdleExec(int a4, int a5);

int ballBoyIdleExec(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u0;
    float u1;

    *(unsigned int *)((a4 + 0x5C8)) = 0x1;
    if (((*(int *)0x8C20D14C) == 6) && (t0 = *(int *)0x8C287D5C, t0 == 3)) {
        t2 = t0;
    } else {
        t0 = 0x60;
        if ((int)(*(int *)0x8C287B2C) > 0) {
            u0 = *(float *)((a5 + 0x64));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = (*(float *)((a5 + 0x64)));
            }
            t3 = 0x64;
            if ((float)(*(int *)0x8C38B780) > u1) {
                u0 = *(float *)((a5 + 0x6C));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = (*(float *)((a5 + 0x6C)));
                }
                t4 = 0x8C0C7920;
                if ((65.0f > u1) && (t1 = *(int *)0x8C37EA7C, t1 == 0)) {
                    t1 = 0x4C;
                    if ((*(int *)((a5 + 0x4C))) != 0) {
                        u0 = *(float *)((a5 + 0x6C));
                        u1 = *(float *)((a5 + 0x3C));
                        t5 = 0x3C;
                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                            t6 = 0x78;
                            if ((*(int *)0x8C287B44) == 0) {
                                if (0.0f > (*(float *)((a5 + 0x6C)))) {
                                    t7 = 0x6C;
                                    if (a4 != 0x8C37F100) {
                                    } else {
                                        *(unsigned int *)((a4 + 0x5DC)) = 0x1;
                                        motionSetSpeed((a4 + 0x4), 1.0f);
                                        *(unsigned int *)((a4 + 0x5D4)) = 0x1;
                                        *(unsigned int *)0x8C37EA7C = 0x1;
                                        *(unsigned int *)((a4 + 0x5D0)) = 0x1;
                                        *(unsigned int *)((a4 + 0x600)) = 0x1;
                                        *(unsigned int *)((a4 + 0x5E0)) = 0x0;
                                        t7 = 0x5E0;
                                    }
                                    t8 = t7;
                                } else {
                                    t7 = 0x6C;
                                    if (a4 == 0x8C37EA84) {
                                        *(unsigned int *)((a4 + 0x5DC)) = 0x1;
                                        motionSetSpeed((a4 + 0x4), 1.0f);
                                        *(unsigned int *)((a4 + 0x5D4)) = 0x1;
                                        *(unsigned int *)0x8C37EA7C = 0x1;
                                        *(unsigned int *)((a4 + 0x5D0)) = 0x1;
                                        *(unsigned int *)((a4 + 0x600)) = 0x1;
                                        *(unsigned int *)((a4 + 0x5E0)) = 0x0;
                                        t7 = 0x5E0;
                                    }
                                    t8 = t7;
                                }
                                t6 = t8;
                            }
                            t5 = t6;
                        }
                        t1 = t5;
                    }
                    t4 = t1;
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t2 = t0;
    }
    return t2;
}
