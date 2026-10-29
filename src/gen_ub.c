/* Straight-line functions with calls and guards (batch gen_ub): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int playerSetReceiveFlag(int a4, int a5);

int playerSetReceiveFlag(int a4, int a5)
{
    int t0;
    int t1;
    float u0;
    float u1;

    t0 = 0x1;
    if (((*(int *)((a5 + 0x54))) & 8) != 0) {
        t0 = 0x0;
    }
    u0 = *(float *)((a4 + 0xBA4));
    u1 = *(float *)((a4 + 0xAF0));
    t1 = t0;
    if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
        t1 = 0xFFFFFFFF;
    }
    u0 = *(float *)((a4 + 0xB00));
    u1 = *(float *)((a5 + 0x3C));
    t0 = t1;
    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
        t0 = 0xFFFFFFFD;
    }
    t1 = t0;
    if ((int)(*(int *)((a5 + 0x4C))) > (int)0x1) {
        t1 = 0xFFFFFFFB;
    }
    if (t1 == 1) {
        *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x1);
    } else {
        *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFFFFFE);
    }
    return 0xB60;
}
