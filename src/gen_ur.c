/* Straight-line functions with calls and guards (batch gen_ur): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int serveGetReceiver(void);
int serveGetServer(void);
int cpuDblTacticPos(int a4, int a5);

int cpuDblTacticPos(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t0 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t1 = (int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u));
        t0 = ((~(((~((t1 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t1 >> 1) + 0x2) >= 0) {
            t0 = (((t1 >> 1) + 0x2) & 0x1);
        }
        t1 = ((((-t0) + 0x1) << 1) - 1);
    } else {
        t0 = *(int *)0x8C287B10;
        t2 = *(int *)0x8C287B14;
        t3 = ((~(((~((t0 + t2) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t0 + t2) + 0x2) >= 0) {
            t3 = (((t0 + t2) + 0x2) & 0x1);
        }
        t0 = *(int *)0x8C287B00;
        t2 = *(int *)0x8C287B04;
        t4 = (int)((unsigned int)((int)((unsigned int)(t0 + t2) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t0 + t2))) ? 1u : 0u));
        t0 = ((~(((~(t4 >> 1)) + 0x1) & 0x1)) + 0x1);
        if ((int)(t4 >> 1) >= 0) {
            t0 = ((t4 >> 1) & 0x1);
        }
        t1 = (((-(t3 << 1)) + 0x1) * ((-(t0 << 1)) + 0x1));
    }
    t0 = serveGetServer();
    t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0x1);
    }
    if (t2 == 0) {
        if ((*(int *)(((((*(int *)((((t0 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t0 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t1);
        }
        if ((*(int *)(((((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
        } else {
            *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t1);
            u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00));
            *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-(u0 * (*(float *)0x8C10D660)));
        }
    } else {
        if ((*(int *)(((((*(int *)((((t0 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t0 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t1);
        }
        if ((*(int *)(((((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t1);
            u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00));
            *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-(u0 * (*(float *)0x8C10D660)));
        }
    }
    t0 = serveGetReceiver();
    if ((*(int *)(((((*(int *)((((t0 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((t0 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D664) * (float)t1);
        u0 = *(float *)((((t0 * 0xD78) + 0x8C287D84) + 0xB00));
        *(float *)((((t0 * 0xD78) + 0x8C287D84) + 0xAF0)) = (-(u0 * (*(float *)0x8C10D668)));
    }
    t2 = 0xB5C;
    if ((*(int *)(((((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D66C) * (float)t1);
        u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00));
        *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-(u0 * (*(float *)0x8C10D670)));
        t2 = 0xAF0;
    }
    return t2;
}
