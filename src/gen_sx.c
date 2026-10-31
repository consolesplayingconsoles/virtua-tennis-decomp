/* Straight-line functions with calls and guards (batch gen_sx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int cpuDblAimAddCourt2(int a4, int a5);

int cpuDblAimAddCourt2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u0;
    float u1;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) == 0) {
        t1 = ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player);
        t2 = ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player);
        if ((0x100 & (*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB60)))) != 0) {
            t1 = ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player);
            t2 = ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player);
        }
        t3 = *(int *)((t1 + 0xC5C));
        t1 = a5;
        if (((int)t3 >= (int)0x9) && ((int)t3 <= (int)0xC)) {
            t3 = *(int *)((t2 + 0xB5C));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)((t2 + 0xAE8));
            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            } else {
                u0 = *(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (0.5f > u1) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t2 = (-((u0 > 0.0f) - (0.0f > u0)));
                } else {
                    u0 = *(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28));
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t2 = (-((u0 > 0.0f) - (0.0f > u0)));
                }
                cpuAimPointSet(a5, 0x1, ((float)t2 * 54.8499985f), u1);
            }
            t1 = (a5 + 0x1);
        }
        t2 = t1;
    } else {
        if (((*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) == 0) {
            t1 = ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player);
            t3 = ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player);
            if ((0x100 & (*(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB60)))) != 0) {
                t1 = ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player);
                t3 = ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player);
            }
            t4 = *(int *)((t1 + 0xC5C));
            t1 = a5;
            if (((int)t4 >= (int)0x9) && ((int)t4 <= (int)0xC)) {
                t4 = *(int *)((t3 + 0xB5C));
                u0 = *(float *)((a4 + 0xB9C));
                u1 = *(float *)((t3 + 0xAE8));
                if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                } else {
                    u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (0.5f > u1) {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t3 = (-((u0 > 0.0f) - (0.0f > u0)));
                    } else {
                        u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t3 = (-((u0 > 0.0f) - (0.0f > u0)));
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t3 * 54.8499985f), u1);
                }
                t1 = (a5 + 0x1);
            }
            t3 = t1;
        } else {
            t1 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xC5C));
            if ((int)t1 < (int)0x9) {
                t4 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xC5C));
                t5 = a5;
                if ((int)t4 < (int)0x9) {
                } else {
                    t6 = a5;
                    if ((int)t4 > (int)0xC) {
                    } else {
                        t4 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
                        if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        } else {
                            u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            if (0.5f > u1) {
                                u0 = *(float *)((a4 + 0xB9C));
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                            } else {
                                u0 = *(float *)((((t4 * 0x160) + 0x8C2FC69C) + 0x28));
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t7 * 54.8499985f), u1);
                        }
                        t6 = (a5 + 0x1);
                    }
                    t5 = t6;
                }
                t4 = t5;
            } else {
                if ((int)t1 > (int)0xC) {
                    t1 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xC5C));
                    t5 = a5;
                    if ((int)t1 < (int)0x9) {
                    } else {
                        t6 = a5;
                        if ((int)t1 > (int)0xC) {
                        } else {
                            t1 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
                            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            } else {
                                u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = u0;
                                }
                                if (0.5f > u1) {
                                    u0 = *(float *)((a4 + 0xB9C));
                                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                                } else {
                                    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t7 * 54.8499985f), u1);
                            }
                            t6 = (a5 + 0x1);
                        }
                        t5 = t6;
                    }
                    t1 = t5;
                } else {
                    t5 = *(int *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
                    if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    } else {
                        u0 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x28));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        if (0.5f > u1) {
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t6 = (-((u0 > 0.0f) - (0.0f > u0)));
                        } else {
                            u0 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x28));
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t6 = (-((u0 > 0.0f) - (0.0f > u0)));
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t6 * 54.8499985f), u1);
                    }
                    u0 = cpuDistXZ((0xAE8 + ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player)), (0xAE8 + ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player)));
                    t5 = (a5 + 0x1);
                    if (!(u0 > 30.0f)) {
                    } else {
                        u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
                        u1 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((u0 + u1) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t5 = ((a5 + 0x1) + 0x1);
                    }
                    t1 = t5;
                }
                t4 = t1;
            }
            t3 = t4;
        }
        t2 = t3;
    }
    return t2;
}
