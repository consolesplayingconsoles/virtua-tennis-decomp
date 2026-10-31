/* A function proven on cases written by hand: the generator's C with the replacements []. */

int nlPrintf(int, ...);
int FUN_8c0c6c0e(int a4, int a5, int a6, int a7);

int FUN_8c0c6c0e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = a7;
    t6 = (a4 + 0x18);
    for (;;) {
        if ((int)(*(int *)((t6 + 0x0))) < 0) {
            t2 = (*(int *)((t6 + 0x20)));
            t7 = (nlPrintf(0x8C124DF0, (t2)));
            t6 = (t6 + 0x50);
        } else {
            t8 = t0;
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
            t13 = t5;
        }
        t0 = t8;
        t1 = t9;
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t5 = t13;
        if ((int)(*(int *)((t6 + 0x0))) > 0) {
            t0 = (*(int *)((t6 + 0x0)));
            t6 = (t6 + 0x4);
            if ((t0 & 0x8) != 0) {
                t2 = 0x3;
            } else {
                t2 = 0x1;
            }
            t8 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            t5 = t8;
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)t5) {
                    break;
                }
                t3 = 0x0;
                if ((int)t2 > 0) {
                    for (;;) {
                        t1 = (*(int *)((t6 + 0x0)));
                        t3 = (t3 + 0x1);
                        if ((t1 & 0x1) != 0) {
                            t6 = (t6 + 0x20);
                        } else {
                            t6 = (t6 + 0x8);
                        }
                        if ((int)t3 >= (int)t2) {
                            break;
                        }
                    }
                }
                t4 = (t4 + 0x1);
            }
        }
        if ((*(int *)((t6 + 0x0))) == 0) {
            break;
        }
    }
    return t7;
}
