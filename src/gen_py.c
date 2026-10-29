/* Straight-line functions with calls and guards (batch gen_py): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddDeep2(int a4, int a5);

int cpuDblAimAddDeep2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0x8C288874;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(23.7700005f > u1)) {
        u0 = *(float *)(((((*(int *)0x8C2888E0) * 0x160) + 0x8C2FC69C) + 0x30));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (!(u1 > 0.25f)) {
            u1 = *(float *)0x8C28886C;
            u2 = *(float *)0x8C28A35C;
            if (((u1 > 0.0f) - (0.0f > u1)) == ((u2 > 0.0f) - (0.0f > u2))) {
                u1 = *(float *)((a4 + 0xB9C));
                u2 = *(float *)0x8C28886C;
                if (((u1 > 0.0f) - (0.0f > u1)) == ((u2 > 0.0f) - (0.0f > u2))) {
                    u1 = *(float *)((a4 + 0xB9C));
                    t0 = a5;
                    u2 = ((*(float *)((a4 + 0xB00))) * 83.1949997f);
                    t1 = (-((u1 > 0.0f) - (0.0f > u1)));
                } else {
                    u1 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)((u1 > 0.0f) - (0.0f > u1)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u1 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u1 > 0.0f) - (0.0f > u1)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                    u1 = *(float *)((a4 + 0xB9C));
                    t0 = ((a5 + 0x1) + 0x1);
                    u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t1 = ((u1 > 0.0f) - (0.0f > u1));
                }
                cpuAimPointSet(t0, 0x2, ((float)t1 * 54.8499985f), u2);
                t1 = (t0 + 0x1);
            } else {
                u1 = *(float *)((a4 + 0xB9C));
                u2 = *(float *)0x8C28886C;
                if (((u1 > 0.0f) - (0.0f > u1)) == ((u2 > 0.0f) - (0.0f > u2))) {
                    u1 = *(float *)((a4 + 0xB9C));
                    u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t0 = ((u1 > 0.0f) - (0.0f > u1));
                } else {
                    u1 = *(float *)((a4 + 0xB9C));
                    u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t0 = (-((u1 > 0.0f) - (0.0f > u1)));
                }
                cpuAimPointSet(a5, 0x2, ((float)t0 * 54.8499985f), u2);
                t1 = (a5 + 0x1);
            }
            t0 = t1;
        } else {
            u1 = *(float *)((a4 + 0xB00));
            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)0x8C28886C;
                u1 = *(float *)0x8C28A35C;
                if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = *(float *)0x8C28886C;
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        t1 = a5;
                        u1 = ((*(float *)((a4 + 0xB00))) * 83.1949997f);
                        t2 = (-((u0 > 0.0f) - (0.0f > u0)));
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        u0 = *(float *)((a4 + 0xB9C));
                        t1 = ((a5 + 0x1) + 0x1);
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t2 = ((u0 > 0.0f) - (0.0f > u0));
                    }
                    cpuAimPointSet(t1, 0x2, ((float)t2 * 54.8499985f), u1);
                    t2 = (t1 + 0x1);
                } else {
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = *(float *)0x8C28886C;
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t1 = ((u0 > 0.0f) - (0.0f > u0));
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t1 = (-((u0 > 0.0f) - (0.0f > u0)));
                    }
                    cpuAimPointSet(a5, 0x2, ((float)t1 * 54.8499985f), u1);
                    t2 = (a5 + 0x1);
                }
                t1 = t2;
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u0 = *(float *)0x8C28886C;
                u2 = (-u0);
                if (!(0.0f > u0)) {
                    u2 = u0;
                }
                if (u1 > u2) {
                    u0 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), (*(float *)0x8C288874));
                    u0 = *(float *)((a4 + 0xB9C));
                    u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f);
                    u0 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                } else {
                    u2 = *(float *)0x8C28886C;
                    cpuAimPointSet(a5, 0x1, (u2 - ((float)((u2 > 0.0f) - (0.0f > u2)) * 25.0f)), (*(float *)0x8C288874));
                    u2 = *(float *)0x8C28886C;
                    u1 = (u2 - ((float)((u2 > 0.0f) - (0.0f > u2)) * 30.0f));
                    u0 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                }
                cpuAimPointSet((a5 + 0x1), 0x1, u1, u0);
                t1 = ((a5 + 0x1) + 0x1);
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        u0 = *(float *)0x8C28886C;
        u1 = *(float *)0x8C28A35C;
        if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)0x8C28886C;
            if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((a4 + 0xB9C));
                t0 = a5;
                u1 = ((*(float *)((a4 + 0xB00))) * 83.1949997f);
                t2 = (-((u0 > 0.0f) - (0.0f > u0)));
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                u0 = *(float *)((a4 + 0xB9C));
                t0 = ((a5 + 0x1) + 0x1);
                u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                t2 = ((u0 > 0.0f) - (0.0f > u0));
            }
            cpuAimPointSet(t0, 0x2, ((float)t2 * 54.8499985f), u1);
            t2 = (t0 + 0x1);
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)0x8C28886C;
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
            t2 = (a5 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}
