/* Straight-line functions with calls and guards (batch gen_to): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int cpuSglAimAddGrid(int a4, int a5);

int cpuSglAimAddGrid(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u0;
    float u1;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t2 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t3 = (int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u));
        t2 = ((~(((~((t3 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t3 >> 1) + 0x2) >= 0) {
            t2 = (((t3 >> 1) + 0x2) & 0x1);
        }
        t3 = ((((-t2) + 0x1) << 1) - 1);
    } else {
        t2 = *(int *)0x8C287B10;
        t4 = *(int *)0x8C287B14;
        t5 = ((~(((~((t2 + t4) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t2 + t4) + 0x2) >= 0) {
            t5 = (((t2 + t4) + 0x2) & 0x1);
        }
        t2 = *(int *)0x8C287B00;
        t4 = *(int *)0x8C287B04;
        t6 = (int)((unsigned int)((int)((unsigned int)(t2 + t4) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t2 + t4))) ? 1u : 0u));
        t2 = ((~(((~((t6 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t6 >> 1) + 0x2) >= 0) {
            t2 = (((t6 >> 1) + 0x2) & 0x1);
        }
        t3 = (((-(t5 << 1)) + 0x1) * ((-(t2 << 1)) + 0x1));
    }
    u0 = *(float *)((a4 + 0xB9C));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (16.460001f > u1) {
        cpuAimPointSet(a5, 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 65.3675003f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t2 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (u1 > 37.0349998f) {
            u0 = *(float *)0x8C291F84;
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            if (32.0f > u1) {
                cpuAimPointSet(a5, 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 47.5400009f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                t1 = (((a5 + 0x1) + 0x1) + 0x1);
                if ((float)((u0 > 0.0f) - (0.0f > u0)) == (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00)))) {
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    t0 = (((a5 + 0x1) + 0x1) + 0x1);
                    if (!(u1 > (*(float *)0x8C04BBA8))) {
                    } else {
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t0 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                cpuAimPointSet(a5, 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBAC)));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t0 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t1 = t0;
        } else {
            cpuAimPointSet(a5, 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBB0)));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t3 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t3) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t1 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t2 = t1;
    }
    return t2;
}
