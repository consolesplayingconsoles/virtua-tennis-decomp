/* Straight-line functions with calls and guards (batch gen_tm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
int cpuSglAimAddLv23(int a4, int a5);

int cpuSglAimAddLv23(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u0;
    float u1;
    float u2;

    t0 = *(int *)((a4 + 0xB5C));
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
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
            t1 = (a5 + 0x1);
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
            if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((a4 + 0xB9C));
                t2 = a5;
                t3 = 0x1;
                u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f);
                u0 = ((*(float *)((a4 + 0xB00))) * 106.964996f);
            } else {
                u2 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)(-((u2 > 0.0f) - (0.0f > u2))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                u2 = *(float *)((a4 + 0xB9C));
                t2 = (a5 + 0x1);
                t3 = 0x2;
                u1 = ((float)(-((u2 > 0.0f) - (0.0f > u2))) * 41.1500015f);
                u0 = ((*(float *)((a4 + 0xB00))) * 106.964996f);
            }
            cpuAimPointSet(t2, t3, u1, u0);
            t1 = (t2 + 0x1);
        }
        t2 = t1;
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
                u2 = ((*(float *)((a4 + 0xB00))) * 106.964996f);
                t1 = (((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)));
            } else {
                u0 = *(float *)((a4 + 0xAE8));
                u1 = *(float *)((a4 + 0xB9C));
                u2 = ((*(float *)((a4 + 0xB00))) * 47.5400009f);
                t1 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
            }
            cpuAimPointSet(a5, 0x1, ((float)t1 * 41.1500015f), u2);
            t1 = (a5 + 0x1);
        } else {
            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 47.5400009f));
            t1 = ((a5 + 0x1) + 0x1);
        }
        t2 = t1;
    }
    return t2;
}
