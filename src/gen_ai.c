/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gNlPaletteAllocationBitmap[];
extern char gNlPaletteTable[];
extern char g_0c2ee992[];
extern char g_0c2ee998[];

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
    if ((*(signed char *)(((a4 * 0x148) + (int)g_0c2ee992))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if (t3 != 0) {
                t21 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + (int)g_0c2ee998))) == 0) {
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

int nlFreePalette(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;

    t0 = *(int *)(int)gNlPaletteTable;
    if ((int)(*(short *)(((t0 + ((a4 << 2) << 1)) + 0x4))) > (int)0x1) {
        t2 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x4));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = (t2 - 1);
        t13 = (t2 - 1);
    } else {
        t3 = *(signed char *)(((t0 + ((a4 << 2) << 1)) + 0x3));
        t4 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x0));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x6)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
        *(unsigned char *)(((t0 + ((a4 << 2) << 1)) + 0x2)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        t5 = (int)gNlPaletteAllocationBitmap;
        t6 = (int)gNlPaletteTable;
        t7 = ((((int)t4 >> 4) << 1) + (int)gNlPaletteAllocationBitmap);
        t8 = (((int)(0xF & t4) >= 0) ? (0x1 << ((0xF & t4) & 31)) : ((-(int)(0xF & t4) & 31) ? ((int)0x1 >> (-(int)(0xF & t4) & 31)) : ((int)0x1 >> 31)));
        t9 = (unsigned char)t3;
        for (;;) {
            t10 = ((int)t9 > 0);
            t9 = (t9 - 1);
            if (!t10) {
                break;
            }
            t5 = (*(short *)((t7 + 0x0)));
            t6 = (~t8);
            t8 = (t8 + t8);
            t5 = (t5 & t6);
            *(unsigned short *)((t7 + 0x0)) = t5;
            if (t8 == 0x10000) {
                t7 = (t7 + 0x2);
                t8 = 0x1;
            }
        }
        t13 = 0x0;
    }
    return t13;
}
