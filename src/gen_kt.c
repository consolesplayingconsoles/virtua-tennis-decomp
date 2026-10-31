/* Straight-line functions with calls and guards (batch gen_kt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
float nlRandom(void);
int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7);

int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
    t2 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
    t3 = *(int *)((((int)Player + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB5C));
    u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAF0));
    u1 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
    u2 = (u1 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u1 = ((-u0) - (u2 * 0.800000012f));
    if (!(0.0f > (u0 + (u2 * 0.800000012f)))) {
        u1 = (u0 + (u2 * 0.800000012f));
    }
    t4 = a5;
    if (47.5400009f > u1) {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        u2 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
        u3 = (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u2 = (((-u0) + u1) + (u3 * 0.800000012f));
        if (!(0.0f > ((u0 - u1) - (u3 * 0.800000012f)))) {
            u2 = ((u0 - u1) - (u3 * 0.800000012f));
        }
        t2 = a5;
        if (20.0f > u2) {
            cpuAimPointSet(a5, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t2 = (a5 + 0x1);
        }
        t4 = t2;
    }
    u0 = *(float *)((((int)Player + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
    u1 = *(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x30));
    u2 = (u1 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u1 = ((-u0) - (u2 * 0.800000012f));
    if (!(0.0f > (u0 + (u2 * 0.800000012f)))) {
        u1 = (u0 + (u2 * 0.800000012f));
    }
    t2 = t4;
    if (47.5400009f > u1) {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = *(float *)((((int)Player + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
        u2 = *(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28));
        u3 = (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u2 = (((-u0) + u1) + (u3 * 0.800000012f));
        if (!(0.0f > ((u0 - u1) - (u3 * 0.800000012f)))) {
            u2 = ((u0 - u1) - (u3 * 0.800000012f));
        }
        t3 = t4;
        if (20.0f > u2) {
            cpuAimPointSet(t4, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t3 = (t4 + 0x1);
        }
        t2 = t3;
    }
    u0 = *(float *)((a4 + 0xB9C));
    u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u3 = (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u2 = (((-u0) - u1) - (u3 * 0.800000012f));
    if (!(0.0f > ((u0 + u1) + (u3 * 0.800000012f)))) {
        u2 = ((u0 + u1) + (u3 * 0.800000012f));
    }
    if (15.0f > u2) {
        u0 = (*(float *)((a4 + 0xB9C)));
        u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
    } else {
        u2 = *(float *)((a4 + 0xB00));
        u3 = *(float *)((a4 + 0xB9C));
        u4 = ((float)((u3 > 0.0f) - (0.0f > u3)) * (nlRandom()));
        u0 = (u4 * 54.8499985f);
        u1 = (u2 * 11.8850002f);
    }
    cpuAimPointSet(t2, 0x1, u0, u1);
    return (t2 + 0x1);
}
