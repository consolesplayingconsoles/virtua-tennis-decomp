/* Straight-line functions with calls and guards (batch gen_tv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddCorners2(int a4, int a5);

int cpuDblAimAddCorners2(int a4, int a5)
{
    int t0;
    float u0;
    float u1;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    u1 = *(float *)((((int)Player + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
            t0 = ((u0 > 0.0f) - (0.0f > u0));
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C07DCDC));
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t0 * 54.8499985f), u1);
    } else {
        u0 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        u0 = *(float *)((a4 + 0xB9C));
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
    }
    return ((a5 + 0x1) + 0x1);
}
