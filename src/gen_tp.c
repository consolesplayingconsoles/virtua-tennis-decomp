/* Straight-line functions with calls and guards (batch gen_tp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimPointSet(int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int cpuDblAimAddRange(int a4, int a5);

int cpuDblAimAddRange(int a4, int a5)
{
    int stk[21];
    float u1;
    float u2;
    float u3;
    float u7;
    float u14;
    float u23;
    float u30;
    float u38;
    float u39;
    float u41;
    float u44;
    float u51;
    float u58;
    float u67;
    float u74;
    int t88;
    int t83;

    *(int *)((int)stk + 4) = ((int)stk + 8);
    cpuShotRange(a4, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), ((int)stk + 8));
    u1 = *(float *)(((int)stk + 40));
    u2 = *(float *)((a4 + 0xBB0));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    if (!(59.4249992f > u3)) {
        u7 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet(a5, 0x1, ((float)((u7 > 0.0f) - (0.0f > u7)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        u14 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u14 > 0.0f) - (0.0f > u14))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
        u23 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u23 > 0.0f) - (0.0f > u23)) * 54.8499985f), (*(float *)((a4 + 0xBB0))));
        u30 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u30 > 0.0f) - (0.0f > u30))) * 54.8499985f), (*(float *)((a4 + 0xBB0))));
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
        t88 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u38 = *(float *)((a4 + 0xBB0));
        u39 = (-u38);
        if (!(0.0f > u38)) {
            u39 = u38;
        }
        u41 = (-u1);
        if (!(0.0f > u1)) {
            u41 = u1;
        }
        if ((u39 * 0.400000006f) > u41) {
            u44 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x2, ((float)((u44 > 0.0f) - (0.0f > u44)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t83 = (a5 + 0x1);
        } else {
            u51 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u51 > 0.0f) - (0.0f > u51)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u58 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u58 > 0.0f) - (0.0f > u58))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u67 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u67 > 0.0f) - (0.0f > u67)) * 54.8499985f), (*(float *)((a4 + 0xBB0))));
            u74 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-((u74 > 0.0f) - (0.0f > u74))) * 54.8499985f), (*(float *)((a4 + 0xBB0))));
            cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
            t83 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        t88 = t83;
    }
    return t88;
}
