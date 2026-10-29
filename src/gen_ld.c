/* Straight-line functions with calls and guards (batch gen_ld): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int modelGetSize(int a4, int a5, int a6, int a7);

int modelGetSize(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t1;

    t2 = (a4 + 0x18);
    t3 = 0x18;
    t4 = a6;
    t5 = a7;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) == 0) {
            break;
        }
        t1 = 0x0;
        t4 = t2;
        t5 = (*(int *)((t4 + (0x4C))));
        t1 = (t1 + 0x50);
        t2 = (t2 + 0x50);
        t3 = (t3 + t1);
        t2 = (t2 + t5);
        t3 = (t3 + t5);
    }
    return (t3 + 0x8);
}
