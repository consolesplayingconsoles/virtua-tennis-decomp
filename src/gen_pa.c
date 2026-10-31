/* Straight-line functions with calls and guards (batch gen_pa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int entryAnyAtRound5(void);
int entryCountJoined(void);
int entryIsVersus(int, int, int, int);
int matchCheckTiebreak(int, int);
int staffInitAll(void);
int matchSetupPlayers(void);

int matchSetupPlayers(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    *(unsigned int *)0x8C287B3C = 0x0;
    if ((*(int *)0x8C421F60) == 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x8000);
    }
    t1 = 0x8C287CBC;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8C287D04) {
            break;
        }
    }
    t1 = 0x8C287D84;
    t2 = 0x0;
    t3 = 0x8C287AE0;
    t4 = 0x8C287AE0;
    for (;;) {
        t5 = *(int *)(((t2 * 0x38) + 0x8C34326C));
        t2 = (t2 + 0x1);
        if (t5 == 0) {
            *(unsigned int *)((t3 + 0x0)) = 0x0;
            *(unsigned int *)((0x8C287CBC + ((*(int *)((t1 + 0xC58))) << 2))) = 0x1;
        } else {
            *(unsigned int *)((t4 + 0x0)) = 0x1;
        }
        t1 = (t1 + 0xD78);
        t4 = (t4 + 0x4);
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    t2 = t1;
    if ((*(int *)0x8C287ADC) == 4) {
        t1 = 0x0;
        t3 = 0x2;
        t4 = 0x8C287AE0;
        t5 = 0x8C287D84;
        for (;;) {
            if ((*(int *)(((t1 << 2) + 0x8C287AE0))) != 0) {
                t6 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
                if ((int)t3 >= 0) {
                    t6 = (t3 & 0x3);
                }
                if ((*(int *)((0x8C287AE0 + (t6 << 2)))) == 0) {
                    *(unsigned int *)((t4 + 0x0)) = 0x2;
                    *(unsigned int *)((0x8C287CBC + ((*(int *)((t5 + 0xC58))) << 2))) = 0x1;
                }
            }
            t1 = (t1 + 0x1);
            t4 = (t4 + 0x4);
            t5 = (t5 + 0xD78);
            t3 = (t3 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t2 = t1;
    }
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFDFF);
    t1 = entryIsVersus(0x4, 0xD78, 0x8C287CBC, t2);
    if (t1 != 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x200);
    }
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFDFFFF);
    if (((*(int *)0x8C287ADC) == 4) && (t0 = *(int *)0x8C287B3C, (t0 & 0x200) == 0)) {
        t0 = entryCountJoined();
        if (t0 == 2) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20000);
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((0x8C287B00 + t0) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C287B10 + t0) + 0x0)) = 0x0;
        t1 = (0x8C287B18 + t0);
        t2 = (0x8C287B08 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)0x8C287B20 = 0x0;
    *(unsigned int *)0x8C287B24 = 0x0;
    *(unsigned int *)0x8C287B2C = 0x0;
    *(unsigned int *)0x8C287B28 = 0x0;
    *(unsigned int *)0x8C1D1270 = 0x0;
    matchCheckTiebreak(t0, 0x8);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        t0 = *(int *)0x8C185408;
        if ((*(int *)0x8C287ADC) == 2) {
            if (t0 == 1) {
                *(unsigned int *)0x8C287D74 = 0x8C101824;
            } else {
                *(unsigned int *)0x8C287D74 = 0x8C1018E4;
            }
            t1 = entryAnyAtRound5();
            if (t1 != 0) {
                if ((*(int *)0x8C185408) == 1) {
                    *(unsigned int *)0x8C287D74 = 0x8C1018E4;
                } else {
                    *(unsigned int *)0x8C287D74 = 0x8C101824;
                }
            }
            *(unsigned int *)0x8C287D78 = 0x8C1021E4;
            u0 = (*(float *)0x8C0187DC);
        } else {
            if (((t0 - 1) & 0x1) == 0) {
                *(unsigned int *)0x8C287D74 = 0x8C101BE4;
            } else {
                *(unsigned int *)0x8C287D74 = 0x8C101CA4;
            }
            *(unsigned int *)0x8C287D78 = 0x8C1021E4;
            u0 = (*(float *)0x8C0187E8);
        }
        *(float *)0x8C287B40 = u0;
        *(unsigned int *)0x8C287B30 = (*(int *)(((*(int *)0x8C287D78) + 0x0)));
        *(unsigned int *)0x8C287B38 = 0x1;
        *(unsigned int *)0x8C287B34 = 0x1;
    }
    return staffInitAll();
}
