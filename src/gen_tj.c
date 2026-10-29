/* Straight-line functions with calls and guards (batch gen_tj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblIsMyBall(int a4);

int cpuDblIsMyBall(int a4)
{
    int t0;
    float u3;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 8) == 0) {
        u3 = *(float *)0x8C291F50;
        if ((float)((u3 > 0.0f) - (0.0f > u3)) != (*(float *)((a4 + 0xB00)))) {
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && ((t13 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12F)), t13 == 0) && (t14 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)), t14 == 0))) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}
