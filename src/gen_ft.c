/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int crowdModelUpdate(int);
int nlRand(void);
int crowdSetup(void);
void ndbClear(void);

int crowdSetup(void)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t13;
    int stk[13];

    u0 = *(float *)0x8C08CF34;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (0x8C3020C8 + (t1 * 0x460));
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)(((int)stk + 4));
            *(unsigned int *)((((t2 * 0x1C) + t3) + 0x0)) = ((int)((int)t2 % (int)0xA));
            *(float *)((((t2 * 0x1C) + t3) + 0x8)) = (((float)((int)((int)(nlRand()) % (int)0x1E)) / u0) + 1.0f);
            *(float *)((((t2 * 0x1C) + t3) + 0x4)) = 0.0f;
            *(unsigned int *)((((t2 * 0x1C) + t3) + 0xC)) = 0xA;
            *(unsigned int *)((((t2 * 0x1C) + t3) + 0x10)) = ((int)((int)(nlRand()) % (int)0x80));
            *(unsigned int *)((((t2 * 0x1C) + t3) + 0x14)) = 0xFFFFFFFF;
            t11 = ((t2 * 0x1C) + t3);
            t2 = (t2 + 0x1);
            *(unsigned int *)((t11 + 0x18)) = ((int)((int)(nlRand()) % (int)0x5A));
            if ((int)t2 >= (int)0x28) {
                break;
            }
        }
        t13 = crowdModelUpdate(t1);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xA0) {
            break;
        }
    }
    return t13;
}

void ndbClear(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = 0x8CA80000;
    t1 = 0x20000;
    for (;;) {
        t2 = (t1 == 0);
        t1 = (t1 - 1);
        if (t2) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    t3 = 0x8CB00000;
    t4 = 0x20000;
    for (;;) {
        t5 = (t4 == 0);
        t4 = (t4 - 1);
        if (t5) {
            break;
        }
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
    }
    t6 = 0x8CB80000;
    t7 = 0x20000;
    for (;;) {
        t8 = (t7 == 0);
        t7 = (t7 - 1);
        if (t8) {
            break;
        }
        *(unsigned int *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x4);
    }
    *(unsigned int *)0x8C301944 = 0x0;
    *(unsigned int *)0x8C301938 = 0x0;
    *(unsigned int *)0x8C30193C = 0x0;
}
