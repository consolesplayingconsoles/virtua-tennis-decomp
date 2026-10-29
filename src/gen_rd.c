/* Straight-line functions with calls and guards (batch gen_rd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetStat(int);
int serveGetServer(void);
int strmVoicePlay(int, int);
int strmVoiceQueueAdd(int);
int strmCallPlayerOnce(int a4, int a5, int a6);

int strmCallPlayerOnce(int a4, int a5, int a6)
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
    int t9;

    *(unsigned int *)0x8C1D476C = 0x0;
    t5 = 0x8C1D476C;
    if (((*(int *)0x8C38BA70) != 0) && ((t0 = *(int *)0x8C38BA74, t0 != 0) && (t1 = *(int *)0x8C421F60, t1 == 0))) {
        if (((*(int *)0x8C20D14C) == 6) && (t2 = *(int *)0x8C287D5C, t2 == 3)) {
            t0 = t2;
        } else {
            t1 = serveGetServer();
            t2 = t1;
            if (((int)t1 >= 0) && ((int)t1 < (int)0x4)) {
                t6 = 0x8C38BA84;
                if ((*(int *)(((t1 << 2) + 0x8C38BA84))) == 0) {
                    t7 = *(int *)0x8C287C64;
                    t8 = 0x70;
                    if ((((*(int *)0x8C287B00) != t7) && (t3 = *(int *)0x8C287B04, t3 != t7)) || (t4 = *(int *)0x8C287B3C, (t4 & 0x4000) != 0)) {
                        t3 = *(int *)(((t1 * 0xD78) + 0x8C2889DC));
                        t4 = 0x8C2889DC;
                        if ((int)t3 <= (int)0x11) {
                            t7 = ADXT_GetStat((*(int *)0x8C38BA98));
                            t9 = *(int *)0x8C1891E8;
                            if ((t7 != 5) && (t7 != 0)) {
                                t7 = *(int *)((((t9 << 2) + 0x8C1D4770) + 0x0));
                                strmVoiceQueueAdd((*(int *)(((t3 << 2) + ((((((t7 << 2) << 1) + t7) << 2) << 1) + 0x8C1D4A68)))));
                            } else {
                                t7 = *(int *)((((t9 << 2) + 0x8C1D4770) + 0x0));
                                strmVoicePlay(0x9, (*(int *)(((t3 << 2) + ((((((t7 << 2) << 1) + t7) << 2) << 1) + 0x8C1D4A68)))));
                            }
                            *(unsigned int *)(((t1 << 2) + 0x8C38BA84)) = 0x1;
                            t4 = 0x8C38BA84;
                        }
                        t8 = t4;
                    }
                    t6 = t8;
                }
                t2 = t6;
            }
            t0 = t2;
        }
        t5 = t0;
    }
    return t5;
}
