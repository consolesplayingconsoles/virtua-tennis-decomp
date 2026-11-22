/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int search_exec_file(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_xfind(int a4, int a5, int a6);
int nlFreePalette(int a4, int a5, int a6, int a7);

int vmsfs_xfind(int a4, int a5, int a6)
{
    int t39;
    int t1;
    int t3;
    int t27;
    int t21;
    int t5;
    int t16;
    int t6;
    int t11;
    int t7;
    int t9;
    int t33;
    int t8;
    int stk[15];

    t39 = 0xFFFFFF01;
    if ((*(signed char *)(((a4 * 0x148) + 0x8C46459A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if (t3 != 0) {
                t21 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + 0x8C4645A0))) == 0) {
                } else {
                    t5 = buIsFormat(a4);
                    t16 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t6 = search_exec_file(a4, ((int)stk + 4));
                        t11 = 0xFFFFFF05;
                        if ((int)t6 >= 0) {
                            t7 = t6;
                            t9 = 0x0;
                            for (;;) {
                                if ((int)t9 >= (int)0xC) {
                                    break;
                                }
                                t8 = ((int)stk + 4);
                                t8 = (t8 + 0x10);
                                t7 = t9;
                                t8 = (*(signed char *)((t8 + t7)));
                                t9 = (t9 + 0x1);
                                *(unsigned char *)((a5 + t7)) = t8;
                            }
                            *(unsigned char *)((a5 + 0xC)) = 0x0;
                            t11 = 0x0;
                        }
                        t16 = t11;
                    }
                    t21 = t16;
                }
                t27 = t21;
            }
            t33 = t27;
        }
        t39 = t33;
    }
    return t39;
}

