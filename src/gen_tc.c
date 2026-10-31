/* Straight-line functions with calls and guards (batch gen_tc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5);

void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[9];
    float u45;
    float u46;
    int t57;
    float u50;
    float u52;
    int t54;
    float u67;
    float u68;
    float u71;
    float u73;
    float u75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    float u82;
    float u83;
    float u84;
    float u85;
    float u102;
    float u103;
    float u111;
    float u204;
    float u209;
    int t42;
    int t63;

    if ((*(int *)0x8C421F60) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) == 3) {
        } else {
            if ((*(int *)0x8C181758) != 0) {
            } else {
                if ((*(int *)0x8C38BA70) == 0) {
                } else {
                    if ((*(int *)0x8C38BA74) == 0) {
                    } else {
                        if (((*(int *)0x8C402C98) != (*(int *)((a4 + 0x50)))) && (t42 = *(int *)((a4 + 0x50)), t42 == 12)) {
                            u45 = *(float *)((a4 + 0x58));
                            u46 = (-u45);
                            if (!(0.0f > u45)) {
                                u46 = u45;
                            }
                            t57 = 0xA03A9;
                            if ((*(float *)0x8C287B40) > u46) {
                                u50 = *(float *)((a4 + 0x60));
                                u52 = (-u50);
                                if (!(0.0f > u50)) {
                                    u52 = (*(float *)((a4 + 0x60)));
                                }
                                t54 = 0xA03A9;
                                if (118.849998f > u52) {
                                    t54 = 0xB03A9;
                                }
                                t57 = t54;
                            }
                            nlsndSeqRequest(t57);
                        } else {
                            t63 = 0x8C402C98;
                        }
                        u67 = *(float *)((a4 + 0x14));
                        u68 = (-u67);
                        if (!(0.0f > u67)) {
                            u68 = u67;
                        }
                        if (!(118.849998f > u68)) {
                        } else {
                            u71 = *(float *)((a4 + 0xC));
                            u73 = (-u71);
                            if (!(0.0f > u71)) {
                                u73 = (*(float *)((a4 + 0xC)));
                            }
                            u75 = *(float *)0x8C287B40;
                            if (!(u75 > u73)) {
                            } else {
                                t76 = 0xC;
                                t77 = t63;
                                t78 = 0x8C287B40;
                                t79 = 0x0;
                                t80 = 0x0;
                                t81 = a6;
                                u82 = u75;
                                u83 = u73;
                                u84 = u67;
                                u85 = f5;
                                for (;;) {
                                    if ((int)t79 >= (int)(*(int *)0x8C287ADC)) {
                                        break;
                                    }
                                    t76 = 0x14;
                                    u83 = 0.0f;
                                    u85 = (*(float *)((a4 + t76)));
                                    t81 = (t79 * 0xD78);
                                    t81 = (t81 + 0x8C287D84);
                                    if (u85 > u83) {
                                        t78 = 0x1;
                                    } else {
                                        if (u83 > u85) {
                                            t78 = 0xFFFFFFFF;
                                        } else {
                                            t78 = 0x0;
                                        }
                                    }
                                    t76 = 0xAF0;
                                    u83 = 0.0f;
                                    *(unsigned int *)(((int)stk + 8)) = t81;
                                    u84 = (*(float *)((t81 + t76)));
                                    if (u84 > u83) {
                                        t77 = 0x1;
                                    } else {
                                        if (u83 > u84) {
                                            t77 = 0xFFFFFFFF;
                                        } else {
                                            t77 = 0x0;
                                        }
                                    }
                                    if (t78 == t77) {
                                        u82 = 0.0f;
                                        if (!(u82 > u84)) {
                                            u83 = u84;
                                        } else {
                                            u83 = u84;
                                            u83 = (-u83);
                                        }
                                        u82 = (float)t80;
                                        if (u83 > u82) {
                                            t76 = 0xAF0;
                                            u83 = 0.0f;
                                            *(unsigned int *)(((int)stk + 4)) = t81;
                                            u84 = (*(float *)((t81 + t76)));
                                            if (!(u83 > u84)) {
                                                u83 = u84;
                                            } else {
                                                u83 = u84;
                                                u83 = (-u83);
                                            }
                                            t80 = (int)u83;
                                        }
                                    }
                                    t79 = (t79 + 0x1);
                                }
                                u102 = *(float *)((a4 + 0x14));
                                u103 = (-u102);
                                if (!(0.0f > u102)) {
                                    u103 = u102;
                                }
                                if (u103 > (float)(t80 + 0xA)) {
                                    if ((*(int *)0x8C402C9C) != ((u102 > 0.0f) - (0.0f > u102))) {
                                        nlsndSeqRequest(0xB03A9);
                                        u111 = *(float *)((a4 + 0x14));
                                        *(unsigned int *)0x8C402C9C = ((u111 > 0.0f) - (0.0f > u111));
                                    }
                                }
                            }
                        }
                    }
                }
                u204 = *(float *)((a4 + 0x14));
                u209 = *(float *)((a4 + 0x8));
                if (((u204 > 0.0f) - (0.0f > u204)) != ((u209 > 0.0f) - (0.0f > u209))) {
                    *(unsigned int *)0x8C402C9C = 0x0;
                }
                *(unsigned int *)0x8C402C98 = (*(int *)((a4 + 0x50)));
            }
        }
    }
}
