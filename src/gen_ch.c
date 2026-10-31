/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int ndbGetTargets(int, int, int);
int cpuSglAimAddLv21(int a4, int a5);

int cpuSglAimAddLv21(int a4, int a5)
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
    float u2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            u0 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
            if (10.0f > u0) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t2 = ((a5 + 0x1) + 0x1);
            } else {
                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAF0));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (!(35.6550026f > u1)) {
                    u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                    u2 = u0;
                    u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
                    if (!(0.0f > u2)) {
                        u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                        u2 = u0;
                        u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
                        u1 = u2;
                    } else {
                        u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                        u1 = ((-u0) - (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
                    }
                    if (41.5974998f > u1) {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x3, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t3 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        if (!(16.460001f > u1)) {
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            if (16.460001f > u1) {
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t4 = (a5 + 0x1);
                            } else {
                                u0 = *(float *)((a4 + 0xB9C));
                                u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                                if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t5 = (a5 + 0x1);
                                } else {
                                    u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAF0));
                                    u1 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u1 = u0;
                                    }
                                    if (47.5400009f > u1) {
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        t6 = (((a5 + 0x1) + 0x1) + 0x1);
                                        u1 = ((*(float *)((a4 + 0xB00))) * 65.3675003f);
                                        t7 = (-((u0 > 0.0f) - (0.0f > u0)));
                                    } else {
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u0 = *(float *)((a4 + 0xB9C));
                                        t6 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t7 = ((u0 > 0.0f) - (0.0f > u0));
                                    }
                                    cpuAimPointSet(t6, 0x1, ((float)t7 * 41.1500015f), u1);
                                    t5 = (t6 + 0x1);
                                }
                                t4 = t5;
                            }
                            t5 = t4;
                        } else {
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = u0;
                            }
                            if (!(16.460001f > u1)) {
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                                cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t4 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                            } else {
                                u0 = *(float *)((a4 + 0xAE8));
                                u1 = *(float *)((a4 + 0xB9C));
                                u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                                if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u2 > 0.0f) - (0.0f > u2))) {
                                    u0 = *(float *)((a4 + 0xAE8));
                                    u1 = *(float *)((a4 + 0xB9C));
                                    t6 = a5;
                                    u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t7 = (((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)));
                                } else {
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xAE8));
                                    u1 = *(float *)((a4 + 0xB9C));
                                    t6 = (((a5 + 0x1) + 0x1) + 0x1);
                                    u2 = ((*(float *)((a4 + 0xB00))) * 117.661499f);
                                    t7 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                                }
                                cpuAimPointSet(t6, 0x1, ((float)t7 * 41.1500015f), u2);
                                t4 = (t6 + 0x1);
                            }
                            t5 = t4;
                        }
                        t3 = t5;
                    }
                    t4 = t3;
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x3, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t4 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            if (!(35.6550026f > u1)) {
                u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u2 = u0;
                u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
                if (!(0.0f > u2)) {
                    u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                    u2 = u0;
                    u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
                    u1 = u2;
                } else {
                    u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                    u1 = ((-u0) - (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
                }
                if (41.5974998f > u1) {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x3, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t1 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (!(16.460001f > u1)) {
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        if (16.460001f > u1) {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t2 = (a5 + 0x1);
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t4 = (a5 + 0x1);
                            } else {
                                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAF0));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = u0;
                                }
                                if (47.5400009f > u1) {
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    t5 = (((a5 + 0x1) + 0x1) + 0x1);
                                    u1 = ((*(float *)((a4 + 0xB00))) * 65.3675003f);
                                    t6 = (-((u0 > 0.0f) - (0.0f > u0)));
                                } else {
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u0 = *(float *)((a4 + 0xB9C));
                                    t5 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t6 = ((u0 > 0.0f) - (0.0f > u0));
                                }
                                cpuAimPointSet(t5, 0x1, ((float)t6 * 41.1500015f), u1);
                                t4 = (t5 + 0x1);
                            }
                            t2 = t4;
                        }
                        t4 = t2;
                    } else {
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        if (!(16.460001f > u1)) {
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 117.661499f));
                            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t2 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                        } else {
                            u0 = *(float *)((a4 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u2 > 0.0f) - (0.0f > u2))) {
                                u0 = *(float *)((a4 + 0xAE8));
                                u1 = *(float *)((a4 + 0xB9C));
                                t0 = a5;
                                u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t5 = (((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)));
                            } else {
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u0 = *(float *)((a4 + 0xAE8));
                                u1 = *(float *)((a4 + 0xB9C));
                                t0 = (((a5 + 0x1) + 0x1) + 0x1);
                                u2 = ((*(float *)((a4 + 0xB00))) * 117.661499f);
                                t5 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                            }
                            cpuAimPointSet(t0, 0x1, ((float)t5 * 41.1500015f), u2);
                            t2 = (t0 + 0x1);
                        }
                        t4 = t2;
                    }
                    t1 = t4;
                }
                t0 = t1;
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((a5 + 0x1), 0x3, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t0 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t3 = t0;
        }
        t0 = t3;
    } else {
        u0 = *(float *)0x8C291F7C;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (u1 > 20.5750008f) {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 71.3100052f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t1 * 41.1500015f), u1);
        t0 = ((a5 + 0x1) + 0x1);
    }
    return (ndbGetTargets(a4, t0, 0x0));
}
