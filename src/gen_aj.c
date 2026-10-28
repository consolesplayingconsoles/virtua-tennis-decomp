/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRandom(void);
float entryPickRandomChara(void);

float entryPickRandomChara(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    float u12;
    int t13;
    float t14;
    int stk[27];

    t0 = 0x0;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)((((int)stk + 4) + t1)) = (*(int *)((0x8C287C74 + t1)));
        if ((unsigned int)t0 >= (unsigned int)0x48) {
            break;
        }
    }
    t3 = 0x0;
    for (;;) {
        t4 = 0x8C1853C0;
        t5 = 0x8C1109D4;
        for (;;) {
            if ((*(int *)((t4 + (t3 << 2)))) != 0) {
                *(unsigned int *)((((int)stk + 4) + ((*(int *)((t5 + (t3 << 2)))) << 2))) = 0x0;
            }
            t4 = (t4 + 0x24);
            t5 = (t5 + 0x24);
            if ((unsigned int)t4 >= (unsigned int)0x8C185408) {
                break;
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x9) {
            break;
        }
    }
    u12 = *(float *)0x8C0B1174;
    t13 = 0x0;
    for (;;) {
        t14 = nlRandom();
        t13 = (t13 + 0x1);
        if (((*(int *)((((int)stk + 4) + ((int)(t14 * u12) << 2)))) != 0) && ((int)t13 <= (int)0x64)) {
            break;
        }
    }
    return (t14 * u12);
}
