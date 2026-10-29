/* Straight-line functions with calls and guards (batch gen_rr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int entryRecordCharas(void);

int entryRecordCharas(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x8C287D84;
    t5 = 0x0;
    for (;;) {
        t7 = *(short *)0x8C343262;
        t6 = (unsigned short)t7;
        if (((unsigned short)t7 & (unsigned short)(*(short *)((((t2 << 1) + 0x8C185298) + 0x0)))) != 0) {
            t4 = 0x8C343258;
            t4 = (t4 + 0xC);
            if (((*(int *)((t4 + 0x8))) == 1) && (t0 = *(int *)((t4 + 0x78)), t0 == 1)) {
                t4 = t2;
                t7 = 0xC58;
                t4 = (t4 << 2);
                t4 = (t4 << 2);
                t4 = (t4 << 1);
                t7 = (t7 + 0x8C287D84);
                *(unsigned int *)((((*(int *)(((0x8C343724 + t3) + 0x0))) << 2) + (0x8C343524 + t4))) = (*(int *)((t7 + 0x0)));
                *(unsigned int *)((((*(int *)(((0x8C343724 + t3) + 0x0))) << 2) + (0x8C343624 + t4))) = (*(int *)0x8C28A4CC);
                t7 = (0x8C343624 + t4);
            } else {
                *(unsigned int *)((((*(int *)(((0x8C343724 + t5) + 0x0))) << 2) + (0x8C343524 + t1))) = (*(int *)0x8C289754);
                *(unsigned int *)((((*(int *)(((0x8C343724 + t5) + 0x0))) << 2) + (0x8C343624 + t1))) = (*(int *)0x8C28B244);
                t7 = (0x8C343624 + t1);
            }
            t6 = t7;
        }
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x20);
        t5 = (t5 + 0x4);
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    return t6;
}
