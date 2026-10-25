/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VQDeQueueEntry(int, int);
int kmyFreeArea(int);
int kmytex_VQFreeEntry(int);
int VQFBfree(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

int VQFBfree(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t1;
    int t27;
    int t4;
    int t5;
    int t7;
    int t60;
    int t33;
    int t40;
    int t34;
    int t35;
    int t36;
    int t51;
    int t45;
    int t48;
    int t26;
    int t2;
    int t3;
    int t6;
    int stk[20];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    stk[11] = a12;
    t0 = *(int *)0x8C20CA0C;
    t1 = *(int *)(((((int)stk + 4) + 0x18) + 0x10));
    t27 = 0x0;
    if (t0 != 0) {
        t4 = t0;
        t5 = a6;
        t7 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t4 + 0x0))) & 0xF000) == (*(int *)(((((int)stk + 4) + 0x18) + 0x0)))) && (t5 = 0x0, (unsigned int)0x0 < (unsigned int)t1)) {
                for (;;) {
                    t3 = t5;
                    t3 = (t3 << 2);
                    t3 = (t3 + (t4 + 0xC));
                    if ((*(int *)((t3 + 0x0))) != 0) {
                        t2 = (*(int *)(((((int)stk + 4) + 0x18) + 0x4)));
                        t2 = ((unsigned int)t2 >> 2);
                        t2 = (t5 * t2);
                        t2 = (t2 << 2);
                        t2 = (t2 + (*(int *)((t4 + 0x8))));
                        if (t2 == a4) {
                            t6 = t5;
                            t7 = t4;
                            t4 = 0x0;
                            t5 = t1;
                        }
                    }
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)t1) {
                        break;
                    }
                }
            }
            if (t7 == 0) {
                t4 = (*(int *)((t4 + 0x4)));
            }
            if (t4 == 0) {
                break;
            }
        }
        t26 = t6;
        t27 = t7;
    }
    t60 = 0x7;
    if (t27 != 0) {
        *(unsigned int *)((((t26 << 2) + (t27 + 0xC)) + 0x0)) = 0x0;
        t33 = *(int *)(((((int)stk + 4) + 0x18) + 0x10));
        t40 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)t33) {
            t34 = 0x0;
            t35 = 0x0;
            for (;;) {
                t36 = *(int *)((((t34 << 2) + (t27 + 0xC)) + 0x0));
                t34 = (t34 + 0x1);
                if (t36 != 0) {
                    t35 = 0x1;
                }
                if ((unsigned int)t34 >= (unsigned int)t33) {
                    break;
                }
            }
            t40 = t35;
        }
        t51 = 0x0;
        if (t40 == 0) {
            t45 = kmyFreeArea((*(int *)((t27 + 0x8))));
            t48 = t45;
            if (t45 != 0) {
            } else {
                VQDeQueueEntry(0x8C20CA0C, t27);
                kmytex_VQFreeEntry(t27);
                t48 = 0x0;
            }
            t51 = t48;
        }
        t60 = t51;
    }
    return t60;
}
