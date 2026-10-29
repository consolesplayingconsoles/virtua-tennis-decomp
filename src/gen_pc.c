/* Straight-line functions with calls and guards (batch gen_pc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int seFootSlide(int a4, int a5, int a6, float f4, float f5);

int seFootSlide(int a4, int a5, int a6, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    if ((*(int *)0x8C38BA70) == 0) {
    } else {
        if ((*(int *)0x8C38BA74) == 0) {
        } else {
            if ((*(int *)0x8C181758) != 0) {
            } else {
                u0 = *(float *)((a4 + 0x14));
                t0 = 0x0;
                if ((*(int *)0x8C402C0C) != ((u0 > 0.0f) - (0.0f > u0))) {
                    t0 = 0x1;
                }
                u0 = *(float *)((a4 + 0x38));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                t1 = 0x8C0D19C4;
                if (!(u1 > 0.0500000007f)) {
                } else {
                    t2 = *(int *)0x8C402C08;
                    if (t2 == 0) {
                        if (t0 == 0) {
                            u0 = *(float *)((a4 + 0x38));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            if (!(0.699999988f > u1)) {
                                t3 = (nlsndSeqRequest(0x6A9));
                            } else {
                                u0 = *(float *)((a4 + 0x38));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = u0;
                                }
                                t4 = 0x306A9;
                                if (0.400000006f > u1) {
                                    t4 = 0x406A9;
                                }
                                t3 = (nlsndSeqRequest(t4));
                            }
                            t4 = t3;
                        } else {
                            u0 = *(float *)((a4 + 0x38));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            t3 = 0x406A9;
                            if (!(0.699999988f > u1)) {
                                t3 = 0x306A9;
                            }
                            t4 = (nlsndSeqRequest(t3));
                        }
                        t3 = t4;
                    } else {
                        if (t2 == 1) {
                            if (t0 == 0) {
                                u0 = *(float *)((a4 + 0x38));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = u0;
                                }
                                if (!(0.699999988f > u1)) {
                                    t4 = (nlsndSeqRequest(0x7A9));
                                } else {
                                    u0 = *(float *)((a4 + 0x38));
                                    u1 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u1 = u0;
                                    }
                                    t5 = 0x407A9;
                                    if (0.400000006f > u1) {
                                        t5 = 0x507A9;
                                    }
                                    t4 = (nlsndSeqRequest(t5));
                                }
                                t5 = t4;
                            } else {
                                u0 = *(float *)((a4 + 0x38));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = u0;
                                }
                                t4 = 0x507A9;
                                if (!(0.699999988f > u1)) {
                                    t4 = 0x407A9;
                                }
                                t5 = (nlsndSeqRequest(t4));
                            }
                            t4 = t5;
                        } else {
                            if (t2 == 2) {
                                if (t0 == 0) {
                                    u0 = *(float *)((a4 + 0x38));
                                    u1 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u1 = u0;
                                    }
                                    if (0.699999988f > u1) {
                                        u0 = *(float *)((a4 + 0x38));
                                        u1 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u1 = u0;
                                        }
                                        t5 = 0x108A9;
                                        if (0.400000006f > u1) {
                                            t5 = 0x208A9;
                                        }
                                        t6 = (nlsndSeqRequest(t5));
                                    } else {
                                        t6 = (nlsndSeqRequest(0x8A9));
                                    }
                                    t5 = t6;
                                } else {
                                    u0 = *(float *)((a4 + 0x38));
                                    u1 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u1 = u0;
                                    }
                                    t6 = 0x208A9;
                                    if (!(0.699999988f > u1)) {
                                        t6 = 0x108A9;
                                    }
                                    t5 = (nlsndSeqRequest(t6));
                                }
                                t6 = t5;
                            } else {
                                t5 = t2;
                                if (t2 == 3) {
                                    if (t0 == 0) {
                                        u0 = *(float *)((a4 + 0x38));
                                        u1 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u1 = u0;
                                        }
                                        if (!(0.699999988f > u1)) {
                                            t0 = (nlsndSeqRequest(0x8A9));
                                        } else {
                                            u0 = *(float *)((a4 + 0x38));
                                            u1 = (-u0);
                                            if (!(0.0f > u0)) {
                                                u1 = u0;
                                            }
                                            t2 = 0x208A9;
                                            if (!(0.400000006f > u1)) {
                                                t2 = 0x108A9;
                                            }
                                            t0 = (nlsndSeqRequest(t2));
                                        }
                                        t2 = t0;
                                    } else {
                                        u0 = *(float *)((a4 + 0x38));
                                        u1 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u1 = u0;
                                        }
                                        t0 = 0x208A9;
                                        if (!(0.699999988f > u1)) {
                                            t0 = 0x108A9;
                                        }
                                        t2 = (nlsndSeqRequest(t0));
                                    }
                                    t5 = t2;
                                }
                                t6 = t5;
                            }
                            t4 = t6;
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t0 = t1;
            }
            t1 = t0;
        }
        t0 = t1;
    }
    return t0;
}
