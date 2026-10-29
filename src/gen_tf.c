/* Straight-line functions with calls and guards (batch gen_tf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int seFootLand(int a4, int a5, float f4);

int seFootLand(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u0;
    float u1;
    float u2;

    if ((*(int *)0x8C38BA70) == 0) {
    } else {
        if ((*(int *)0x8C38BA74) == 0) {
        } else {
            t0 = *(int *)0x8C287B44;
            t1 = t0;
            if (t0 == 7) {
            } else {
                u1 = *(float *)((a4 + 0x14));
                t0 = 0x0;
                if ((*(int *)0x8C402C0C) != ((u1 > 0.0f) - (0.0f > u1))) {
                    t0 = 0x1;
                }
                u1 = *(float *)((a4 + 0x10));
                u2 = *(float *)0x8C1D2BD4;
                if ((((u1 - u2) > 0.0f) - (0.0f > (u1 - u2))) == 1) {
                    t2 = 0x1;
                    if ((*(float *)0x8C1D2BD8) > 0.0f) {
                    } else {
                        t3 = 0x0;
                        if (0.0f > (*(float *)0x8C1D2BD8)) {
                            t3 = 0xFFFFFFFF;
                        }
                        t2 = t3;
                    }
                    if ((t2 == -1) && ((u0 = *(float *)0x8C1D2BD8, u0 != 0.0f) && (5.0f > u1))) {
                        *(float *)0x8C1D2BD8 = 0.0f;
                        t2 = *(int *)0x8C402C08;
                        if (t2 == 1) {
                            t3 = 0x507A9;
                            if (t0 == 0) {
                                t3 = 0x7A9;
                            }
                            nlsndSeqRequest(t3);
                        } else {
                            if (t2 == 0) {
                                t3 = 0x406A9;
                                if (t0 == 0) {
                                    t3 = 0x6A9;
                                }
                                nlsndSeqRequest(t3);
                            } else {
                                if (t2 == 2) {
                                    t3 = 0x8A9;
                                    if (t0 != 0) {
                                        t3 = 0x208A9;
                                    }
                                    nlsndSeqRequest(t3);
                                } else {
                                    if (t2 == 3) {
                                        t2 = 0x208A9;
                                        if (t0 == 0) {
                                            t2 = 0x8A9;
                                        }
                                        nlsndSeqRequest(t2);
                                    }
                                }
                            }
                        }
                    }
                }
                *(float *)0x8C1D2BD4 = (*(float *)((a4 + 0x10)));
                *(float *)0x8C1D2BD8 = (u1 - u2);
                t1 = 0x10;
            }
            t0 = t1;
        }
        t1 = t0;
    }
    return t1;
}
