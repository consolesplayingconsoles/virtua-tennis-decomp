/* Straight-line functions with calls and guards (batch gen_ty): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlScalor(int);
int nlsndSeqRequest(int);
void seBallSpeed(int a4, int a5);

void seBallSpeed(int a4, int a5)
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
    float u0;

    if ((*(int *)0x8C38BA70) == 0) {
        return;
    }
    if ((*(int *)0x8C38BA74) == 0) {
        return;
    }
    u0 = *(float *)((a5 + 0xAF0));
    t0 = 0x0;
    if ((*(int *)0x8C402C0C) != ((u0 > 0.0f) - (0.0f > u0))) {
        t0 = 0x1;
    }
    if (a4 == 0) {
        u0 = nlScalor(0x8C291F48);
        t1 = 0x0;
        if (u0 > 7.0f) {
        } else {
            t2 = 0x2;
            if (u0 > 5.0f) {
                t2 = 0x1;
            }
            t1 = t2;
        }
        if (t0 == 0) {
            t2 = *(int *)((a5 + 0xC58));
            t3 = ((((t2 << 1) + t2) << 2) + 0x8C1D297C);
            t4 = t2;
        } else {
            t2 = *(int *)((a5 + 0xC58));
            t3 = ((((t2 << 1) + t2) << 2) + 0x8C1D2A54);
            t4 = t2;
        }
        t2 = t3;
        t5 = t4;
        t4 = t1;
        t6 = (t1 << 2);
        t7 = 0x0;
        t8 = (*(int *)(((t1 << 2) + t3)));
        for (;;) {
            if ((t8 == 0) && (t7 == 0)) {
                t4 = (t4 + 0x1);
                if ((int)t4 > (int)0x2) {
                    t7 = 0x1;
                    t4 = 0x2;
                }
                t6 = t4;
                t6 = (t6 << 2);
                if (t0 == 0) {
                    t2 = 0xC58;
                    t2 = (*(int *)((a5 + t2)));
                    t5 = t2;
                    t2 = (t2 << 1);
                    t2 = (t2 + t5);
                    t2 = (t2 << 2);
                    t2 = (t2 + 0x8C1D297C);
                } else {
                    t2 = 0xC58;
                    t2 = (*(int *)((a5 + t2)));
                    t5 = t2;
                    t2 = (t2 << 1);
                    t2 = (t2 + t5);
                    t2 = (t2 << 2);
                    t2 = (t2 + 0x8C1D2A54);
                }
                t8 = (*(int *)((t6 + t2)));
                continue;
            }
            break;
        }
        if (t8 != 0) {
            nlsndSeqRequest(t8);
    return;
        }
        return;
    }
}
