/* Straight-line functions with calls and guards (batch gen_if): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int dbgMenuSetValue(int a4, int a5, int a6);

int dbgMenuSetValue(int a4, int a5, int a6)
{
    int t2;
    int t6;

    t2 = a6;
    if ((int)a6 < (int)(*(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x4)))) {
        t2 = (*(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x4)));
    }
    t6 = t2;
    if ((int)t2 > (int)(*(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x8)))) {
        t6 = (*(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x8)));
    }
    *(unsigned int *)(((((((a5 << 1) + a5) << 2) << 1) + ((a4 * 0x1F0) + 0x8C285E4C)) + 0x0)) = t6;
    return (((((a5 << 1) + a5) << 2) << 1) + ((a4 * 0x1F0) + 0x8C285E4C));
}
