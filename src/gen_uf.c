/* Straight-line functions with calls and guards (batch gen_uf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
int cpuSglAimAddLv12(int a4, int a5);

int cpuSglAimAddLv12(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
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
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t1 = (((a5 + 0x1) + 0x1) + 0x1);
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
                            t3 = a5;
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t4 = ((u0 > 0.0f) - (0.0f > u0));
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u0 = *(float *)((a4 + 0xB9C));
                            t3 = (a5 + 0x1);
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t4 = (-((u0 > 0.0f) - (0.0f > u0)));
                        }
                        cpuAimPointSet(t3, 0x1, ((float)t4 * 41.1500015f), u1);
                        t2 = (t3 + 0x1);
                    }
                    t3 = t2;
                } else {
                    u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (16.460001f > u1) {
                        u0 = *(float *)((a4 + 0xAE8));
                        u1 = *(float *)((a4 + 0xB9C));
                        u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
                        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u2 > 0.0f) - (0.0f > u2))) {
                            u0 = *(float *)((a4 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t2 = (((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)));
                        } else {
                            u0 = *(float *)((a4 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            u2 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
                            t2 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t2 * 41.1500015f), u2);
                        t2 = (a5 + 0x1);
                    } else {
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 23.7700005f));
                        t2 = ((a5 + 0x1) + 0x1);
                    }
                    t3 = t2;
                }
                t1 = t3;
            }
            t0 = t1;
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            t0 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t1 = t0;
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
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t0 * 41.1500015f), u1);
        t1 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    return t1;
}
