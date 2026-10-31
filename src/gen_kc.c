/* Straight-line functions with calls and guards (batch gen_kc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int nlRand(void);
int cpuDblAimAddLv13(int a4, int a5);

int cpuDblAimAddLv13(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u0;
    float u1;
    float u2;
    float u3;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)((a4 + 0xB9C));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(u1 > 34.8499985f)) {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (15.0f > u1) {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2 = ((-u0) + u1);
            if (!(0.0f > (u0 - u1))) {
                u2 = (u0 - u1);
            }
            if (10.0f > u2) {
                u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t1 = a5;
                u1 = (((*(float *)((a4 + 0xB9C))) + u0) * 0.5f);
                u0 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            } else {
                u2 = *(float *)((a4 + 0xB9C));
                u3 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                cpuAimPointSet(a5, 0x1, ((float)(((u3 - u2) > 0.0f) - (0.0f > (u3 - u2))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                u2 = *(float *)((a4 + 0xB9C));
                u3 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t1 = (a5 + 0x1);
                u1 = ((float)(((u3 - u2) > 0.0f) - (0.0f > (u3 - u2))) * 54.8499985f);
                u0 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            }
            cpuAimPointSet(t1, 0x1, u1, u0);
            t2 = (t1 + 0x1);
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)((a4 + 0xAE8));
            if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) != ((u0 > 0.0f) - (0.0f > u0))) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t1 = (int)((int)(nlRand()) % (int)0x5);
                t3 = (((a5 + 0x1) + 0x1) + 0x1);
                if (t1 == 0) {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t3 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t1 = t3;
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u0 > 0.0f) - (0.0f > u0))) {
                    u1 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
                    if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u0 > 0.0f) - (0.0f > u0))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t3 = (int)((int)(nlRand()) % (int)0x5);
                        t4 = ((a5 + 0x1) + 0x1);
                        if (t3 != 0) {
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t4 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                        }
                        t3 = t4;
                    } else {
                        t4 = (int)((int)(nlRand()) % (int)0x3);
                        if (t4 != 0) {
                            u0 = *(float *)((a4 + 0xB9C));
                            t4 = a5;
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t5 = ((u0 > 0.0f) - (0.0f > u0));
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u0 = *(float *)((a4 + 0xB9C));
                            t4 = (a5 + 0x1);
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t5 = (-((u0 > 0.0f) - (0.0f > u0)));
                        }
                        cpuAimPointSet(t4, 0x1, ((float)t5 * 54.8499985f), u1);
                        t3 = (t4 + 0x1);
                    }
                    t4 = t3;
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t3 = (int)((int)(nlRand()) % (int)0x5);
                    t5 = ((a5 + 0x1) + 0x1);
                    if (t3 != 0) {
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t5 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t4 = t5;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u2 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == (((u2 - u0) > 0.0f) - (0.0f > (u2 - u0)))) {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == ((u0 > 0.0f) - (0.0f > u0))) {
                u0 = *(float *)((a4 + 0xB9C));
                t0 = a5;
                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                t2 = ((u0 > 0.0f) - (0.0f > u0));
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                u0 = *(float *)((a4 + 0xB9C));
                t0 = (a5 + 0x1);
                u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                t2 = (-((u0 > 0.0f) - (0.0f > u0)));
            }
            cpuAimPointSet(t0, 0x1, ((float)t2 * 54.8499985f), u1);
            t2 = (t0 + 0x1);
        } else {
            t0 = (int)((int)(nlRand()) % (int)0x3);
            if (t0 == 0) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            } else {
                t0 = nlRand();
                t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                if ((int)t0 >= 0) {
                    t3 = (t0 & 0x1);
                }
                if (t3 != 0) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t0 = (-((u0 > 0.0f) - (0.0f > u0)));
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                    t0 = (-((u0 > 0.0f) - (0.0f > u0)));
                }
                cpuAimPointSet(a5, 0x1, ((float)t0 * 54.8499985f), u1);
            }
            t2 = (a5 + 0x1);
        }
        t1 = t2;
    }
    return (t1 - a5);
}
