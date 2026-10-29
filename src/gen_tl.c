/* Straight-line functions with calls and guards (batch gen_tl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddDeep(int a4, int a5);

int cpuDblAimAddDeep(int a4, int a5)
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
    int t9;
    float u0;
    float u1;
    float u2;
    float u3;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t2 = *(int *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB5C));
    u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (47.5400009f > u1) {
        u0 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0)));
        }
        if (47.5400009f > u1) {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x2, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t3 = (a5 + 0x1);
        } else {
            u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u1 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
            u2 = (-u0);
            if (!(0.0f > u0)) {
                u2 = u0;
            }
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            t4 = ((t1 * 0x160) + 0x8C2FC69C);
            t5 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            t6 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
            if (u2 > u0) {
                t4 = ((t2 * 0x160) + 0x8C2FC69C);
                t5 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
                t6 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            }
            u0 = *(float *)((t5 + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            if (!(23.7700005f > u1)) {
                u0 = *(float *)((t4 + 0x30));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                t7 = a5;
                if (0.25f > u1) {
                } else {
                    u0 = *(float *)((t4 + 0x30));
                    u1 = *(float *)((a4 + 0xB00));
                    if (((u0 > 0.0f) - (0.0f > u0)) != (-((u1 > 0.0f) - (0.0f > u1)))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = *(float *)((t5 + 0xAE8));
                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            u0 = *(float *)((t5 + 0xAE8));
                            u2 = (-u0);
                            if (!(0.0f > u0)) {
                                u2 = u0;
                            }
                            if (u1 > u2) {
                                u0 = *(float *)((a4 + 0xB9C));
                                t8 = a5;
                                u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f);
                                u0 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                            } else {
                                u2 = *(float *)((t5 + 0xAE8));
                                u3 = u2;
                                u3 = u3 + 20.0f * (float)((u2 > 0.0f) - (0.0f > u2));
                                cpuAimPointSet(a5, 0x1, u3, ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                                u2 = *(float *)((t4 + 0x28));
                                u3 = (*(float *)((t5 + 0xAE8)));
                                u3 = u3 + 20.0f * (float)(((-u2) > 0.0f) - (0.0f > (-u2)));
                                t8 = (a5 + 0x1);
                                u1 = u3;
                                u0 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                            }
                            cpuAimPointSet(t8, 0x1, u1, u0);
                            t4 = (t8 + 0x1);
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t4 = (a5 + 0x1);
                        }
                        t8 = t4;
                    } else {
                        u0 = *(float *)((t5 + 0xAE8));
                        u1 = *(float *)((t6 + 0xAE8));
                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((t5 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                                u0 = *(float *)((a4 + 0xB9C));
                                t4 = a5;
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t9 = (-((u0 > 0.0f) - (0.0f > u0)));
                            } else {
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)((a4 + 0xB9C));
                                t4 = ((a5 + 0x1) + 0x1);
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t9 = ((u0 > 0.0f) - (0.0f > u0));
                            }
                            cpuAimPointSet(t4, 0x2, ((float)t9 * 54.8499985f), u1);
                            t9 = (t4 + 0x1);
                        } else {
                            u0 = *(float *)((t5 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                                u0 = *(float *)((a4 + 0xB9C));
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t4 = ((u0 > 0.0f) - (0.0f > u0));
                            } else {
                                u0 = *(float *)((a4 + 0xB9C));
                                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t4 = (-((u0 > 0.0f) - (0.0f > u0)));
                            }
                            cpuAimPointSet(a5, 0x2, ((float)t4 * 54.8499985f), u1);
                            t9 = (a5 + 0x1);
                        }
                        t8 = t9;
                    }
                    t7 = t8;
                }
                t4 = t7;
            } else {
                u0 = *(float *)((t5 + 0xAE8));
                u1 = *(float *)((t6 + 0xAE8));
                if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((t5 + 0xAE8));
                    u1 = *(float *)((a4 + 0xB9C));
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t6 = ((u0 > 0.0f) - (0.0f > u0));
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t6 = (-((u0 > 0.0f) - (0.0f > u0)));
                    }
                    cpuAimPointSet(a5, 0x2, ((float)t6 * 54.8499985f), u1);
                    t6 = (a5 + 0x1);
                } else {
                    u0 = *(float *)((t5 + 0xAE8));
                    u1 = *(float *)((a4 + 0xB9C));
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        t5 = a5;
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)((a4 + 0xB9C));
                        t5 = ((a5 + 0x1) + 0x1);
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t7 = ((u0 > 0.0f) - (0.0f > u0));
                    }
                    cpuAimPointSet(t5, 0x2, ((float)t7 * 54.8499985f), u1);
                    t6 = (t5 + 0x1);
                }
                t4 = t6;
            }
            t3 = t4;
        }
        t4 = t3;
    } else {
        u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u1 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
        u2 = (-u0);
        if (!(0.0f > u0)) {
            u2 = u0;
        }
        u0 = (-u1);
        if (!(0.0f > u1)) {
            u0 = u1;
        }
        t3 = ((t1 * 0x160) + 0x8C2FC69C);
        t1 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        t5 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
        if (u2 > u0) {
            t3 = ((t2 * 0x160) + 0x8C2FC69C);
            t1 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
            t5 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u0 = *(float *)((t1 + 0xAF0));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (!(23.7700005f > u1)) {
            u0 = *(float *)((t3 + 0x30));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t0 = a5;
            if (0.25f > u1) {
            } else {
                u0 = *(float *)((t3 + 0x30));
                u1 = *(float *)((a4 + 0xB00));
                if (((u0 > 0.0f) - (0.0f > u0)) != (-((u1 > 0.0f) - (0.0f > u1)))) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = *(float *)((t1 + 0xAE8));
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        u0 = *(float *)((t1 + 0xAE8));
                        u2 = (-u0);
                        if (!(0.0f > u0)) {
                            u2 = u0;
                        }
                        if (u1 > u2) {
                            u0 = *(float *)((a4 + 0xB9C));
                            t2 = a5;
                            u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f);
                            u0 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                        } else {
                            u2 = *(float *)((t1 + 0xAE8));
                            u3 = u2;
                            u3 = u3 + 20.0f * (float)((u2 > 0.0f) - (0.0f > u2));
                            cpuAimPointSet(a5, 0x1, u3, ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                            u2 = *(float *)((t3 + 0x28));
                            u3 = (*(float *)((t1 + 0xAE8)));
                            u3 = u3 + 20.0f * (float)(((-u2) > 0.0f) - (0.0f > (-u2)));
                            t2 = (a5 + 0x1);
                            u1 = u3;
                            u0 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                        }
                        cpuAimPointSet(t2, 0x1, u1, u0);
                        t3 = (t2 + 0x1);
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t3 = (a5 + 0x1);
                    }
                    t2 = t3;
                } else {
                    u0 = *(float *)((t1 + 0xAE8));
                    u1 = *(float *)((t5 + 0xAE8));
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((t1 + 0xAE8));
                        u1 = *(float *)((a4 + 0xB9C));
                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((a4 + 0xB9C));
                            t3 = a5;
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t6 = (-((u0 > 0.0f) - (0.0f > u0)));
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u0 = *(float *)((a4 + 0xB9C));
                            t3 = ((a5 + 0x1) + 0x1);
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t6 = ((u0 > 0.0f) - (0.0f > u0));
                        }
                        cpuAimPointSet(t3, 0x2, ((float)t6 * 54.8499985f), u1);
                        t6 = (t3 + 0x1);
                    } else {
                        u0 = *(float *)((t1 + 0xAE8));
                        u1 = *(float *)((a4 + 0xB9C));
                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t3 = ((u0 > 0.0f) - (0.0f > u0));
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t3 = (-((u0 > 0.0f) - (0.0f > u0)));
                        }
                        cpuAimPointSet(a5, 0x2, ((float)t3 * 54.8499985f), u1);
                        t6 = (a5 + 0x1);
                    }
                    t2 = t6;
                }
                t0 = t2;
            }
            t2 = t0;
        } else {
            u0 = *(float *)((t1 + 0xAE8));
            u1 = *(float *)((t5 + 0xAE8));
            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((t1 + 0xAE8));
                u1 = *(float *)((a4 + 0xB9C));
                if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t0 = ((u0 > 0.0f) - (0.0f > u0));
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t0 = (-((u0 > 0.0f) - (0.0f > u0)));
                }
                cpuAimPointSet(a5, 0x2, ((float)t0 * 54.8499985f), u1);
                t0 = (a5 + 0x1);
            } else {
                u0 = *(float *)((t1 + 0xAE8));
                u1 = *(float *)((a4 + 0xB9C));
                if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((a4 + 0xB9C));
                    t1 = a5;
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t3 = (-((u0 > 0.0f) - (0.0f > u0)));
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    t1 = ((a5 + 0x1) + 0x1);
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t3 = ((u0 > 0.0f) - (0.0f > u0));
                }
                cpuAimPointSet(t1, 0x2, ((float)t3 * 54.8499985f), u1);
                t0 = (t1 + 0x1);
            }
            t2 = t0;
        }
        t4 = t2;
    }
    return t4;
}
