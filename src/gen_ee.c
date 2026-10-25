/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VQAllocEntry(void);
int VQEnQueueTop(int, int);
int kmytex_GetfreememEx(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int kmytex_VQFreeEntry(int);
int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t20;
    int t2;
    int t3;
    int t4;
    int t6;
    int t32;
    int t71;
    int t33;
    int t38;
    int t19;
    int t1;
    int t5;
    int t9;
    int t80;
    int t57;
    int t41;
    int t55;
    int t48;
    int t52;
    int t65;
    int stk[25];

    stk[12] = a8;
    stk[13] = a9;
    stk[14] = a10;
    stk[15] = a11;
    stk[16] = a12;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(int *)0x8C20CA0C;
    t20 = 0x0;
    if (t0 != 0) {
        t2 = t0;
        t3 = a5;
        t4 = a6;
        t6 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t2 + 0x0))) & 0xF000) == (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)))) && (t9 = *(int *)(((((int)stk + 4) + 0x2C) + 0x10)), t4 = t9, t3 = 0x0, (unsigned int)0x0 < (unsigned int)t4)) {
                for (;;) {
                    t1 = t3;
                    t1 = (t1 << 2);
                    t1 = (t1 + (t2 + 0xC));
                    if ((*(int *)((t1 + 0x0))) == 0) {
                        t5 = t3;
                        t6 = t2;
                        t2 = 0x0;
                        t3 = t4;
                    }
                    t3 = (t3 + 0x1);
                    if ((unsigned int)t3 >= (unsigned int)t4) {
                        break;
                    }
                }
            }
            if (t6 == 0) {
                t2 = (*(int *)((t2 + 0x4)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t19 = t5;
        t20 = t6;
    }
    if (t20 != 0) {
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((t19 * ((unsigned int)(*(int *)(((((int)stk + 4) + 0x2C) + 0x4))) >> 2)) << 2) + (*(int *)((t20 + 0x8))));
        *(unsigned int *)((((t19 << 2) + (t20 + 0xC)) + 0x0)) = (*(int *)(((int)stk + 12)));
        *(unsigned short *)((t20 + 0x0)) = ((*(short *)((t20 + 0x0))) | 0x2);
        t80 = 0x0;
    } else {
        t32 = VQAllocEntry();
        t71 = 0x3;
        if (t32 == 0) {
        } else {
            t33 = (t32 + 0xC);
            for (;;) {
                *(unsigned int *)((t33 + 0x0)) = 0x0;
                t33 = (t33 + 0x4);
                if ((unsigned int)t33 >= (unsigned int)(t32 + 0x4C)) {
                    break;
                }
            }
            VQEnQueueTop(0x8C20CA0C, t32);
            *(unsigned short *)((t32 + 0x0)) = ((*(short *)((t32 + 0x0))) | (*(int *)(((((int)stk + 4) + 0x2C) + 0x0))));
            t38 = *(int *)(((((int)stk + 4) + 0x2C) + 0xC));
            if ((*(int *)0x8C20C9C8) == 1) {
                if (a4 != 0) {
                    t41 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x0));
                } else {
                    t41 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x0));
                }
                t57 = t41;
            } else {
                kmytex_GetfreememEx(((int)stk + 4), (((int)stk + 4) + 0x4));
                if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 8)))) {
                    if (a4 != 0) {
                        t48 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x1));
                    } else {
                        t48 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x1));
                    }
                    t55 = t48;
                } else {
                    if (a4 != 0) {
                        t52 = (kmytex_TXalloc2(0x4, t38, (t32 + 0x8), 0x0));
                    } else {
                        t52 = (kmytex_TXalloc(0x4, t38, (t32 + 0x8), 0x0));
                    }
                    t55 = t52;
                }
                t57 = t55;
            }
            if (t57 != 0) {
                kmytex_VQFreeEntry(t32);
                t65 = 0x3;
            } else {
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (((0x0 * ((unsigned int)(*(int *)(((((int)stk + 4) + 0x2C) + 0x4))) >> 2)) << 2) + (*(int *)((t32 + 0x8))));
                *(unsigned int *)(((0x0 + (t32 + 0xC)) + 0x0)) = (*(int *)(((int)stk + 12)));
                *(unsigned short *)((t32 + 0x0)) = ((*(short *)((t32 + 0x0))) | 0x2);
                t65 = 0x0;
            }
            t71 = t65;
        }
        t80 = t71;
    }
    return t80;
}
