/* Straight-line functions with calls and guards (batch gen_hn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawBlock(int, int, int, int, int, int);
int miniTargetInit(int, int, Stk3);
int set_event(int, int);
int sprPutCropH(int, int, int, int, Stk3, float, float);
int crowdDrawUsa(int a4);
int decoGaugeBarPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int miniTargetSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int crowdDrawUsa(int a4)
{
    int stk[19];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    *(unsigned short *)(((int)stk + 36)) = 0x8D00;
    *(unsigned short *)(((int)stk + 40)) = 0x5900;
    *(unsigned int *)0x8C188FD4 = 0x0;
    if (a4 != 19) {
        if (a4 != 20) {
            if (a4 == 21) {
                R1032 = 0x0;
                R1028 = 0x1;
                crowdDrawBlock(0x8C116884, 0x8C114D9C, 0x1600, 0x35, 0x1, 0x0);
                R1024 = 0x0;
                R1020 = 0x0;
                crowdDrawBlock(0x8C1168B4, 0x8C115018, 0x1600, 0x11, 0x0, 0x0);
            } else {
                if (a4 == 22) {
                    R1032 = 0x0;
                    R1028 = 0x1;
                    crowdDrawBlock(0x8C1168E4, 0x8C1150E4, 0x0, 0x10, 0x1, 0x0);
                    R1024 = 0x0;
                    R1020 = 0x0;
                    crowdDrawBlock(0x8C116914, 0x8C1151A4, 0x0, 0x25, 0x0, 0x0);
                } else {
                    if (a4 == 23) {
                        R1032 = 0x0;
                        R1028 = 0x1;
                        crowdDrawBlock(0x8C116944, 0x8C115360, 0x0, 0xC, 0x1, 0x0);
                        R1024 = 0x0;
                        R1020 = 0x0;
                        crowdDrawBlock(0x8C116974, 0x8C1153F0, 0x0, 0x18, 0x0, 0x0);
                    } else {
                        if (a4 == 24) {
                            R1032 = 0x0;
                            R1028 = 0x1;
                            crowdDrawBlock(0x8C1169A4, 0x8C115510, 0x0, 0x10, 0x1, 0x0);
                            R1024 = 0x0;
                            R1020 = 0x0;
                            crowdDrawBlock(0x8C1169D4, 0x8C1155D0, 0x0, 0x25, 0x0, 0x0);
                        } else {
                            if (a4 == 31) {
                                R1032 = 0x0;
                                R1028 = 0x1;
                                crowdDrawBlock(0x8C116A04, 0x8C11578C, (*(short *)(((int)stk + 36))), 0x10, 0x1, 0x0);
                                R1024 = 0x0;
                                R1020 = 0x0;
                                crowdDrawBlock(0x8C116A34, 0x8C11584C, (*(short *)(((int)stk + 36))), 0x25, 0x0, 0x0);
                            } else {
                                if (a4 == 32) {
                                    R1032 = 0x0;
                                    R1028 = 0x1;
                                    crowdDrawBlock(0x8C116A64, 0x8C115A08, 0x8100, 0xC, 0x1, 0x0);
                                    R1024 = 0x0;
                                    R1020 = 0x0;
                                    crowdDrawBlock(0x8C116A94, 0x8C115A98, 0x8100, 0x18, 0x0, 0x0);
                                } else {
                                    if (a4 == 33) {
                                        R1032 = 0x0;
                                        R1028 = 0x1;
                                        crowdDrawBlock(0x8C116AC4, 0x8C115BB8, 0x7E00, 0x10, 0x1, 0x0);
                                        R1024 = 0x0;
                                        R1020 = 0x0;
                                        crowdDrawBlock(0x8C116AF4, 0x8C115C78, 0x7E00, 0x25, 0x0, 0x0);
                                    } else {
                                        if (a4 == 34) {
                                            R1032 = 0x0;
                                            R1028 = 0x1;
                                            crowdDrawBlock(0x8C116B24, 0x8C115E34, (*(short *)(((int)stk + 40))), 0x35, 0x1, 0x0);
                                            R1024 = 0x0;
                                            R1020 = 0x0;
                                            crowdDrawBlock(0x8C116B54, 0x8C1160B0, (*(short *)(((int)stk + 40))), 0x11, 0x0, 0x0);
                                        } else {
                                            if (a4 == 35) {
                                                R1032 = 0x0;
                                                R1028 = 0x1;
                                                crowdDrawBlock(0x8C116B84, 0x8C11617C, 0x4000, 0x18, 0x1, 0x0);
                                                R1024 = 0x0;
                                                R1020 = 0x0;
                                                crowdDrawBlock(0x8C116BB4, 0x8C11629C, 0x4000, 0xB, 0x0, 0x0);
                                                R1016 = 0x0;
                                                R1012 = 0x0;
                                                crowdDrawBlock(0x8C116BE4, 0x8C116320, 0x4000, 0xF, 0x0, 0x0);
                                            } else {
                                                if (a4 == 36) {
                                                    R1032 = 0x0;
                                                    R1028 = 0x1;
                                                    crowdDrawBlock(0x8C116C14, 0x8C1163D4, 0x4500, 0x18, 0x1, 0x0);
                                                    R1024 = 0x0;
                                                    R1020 = 0x0;
                                                    crowdDrawBlock(0x8C116C44, 0x8C1164F4, 0x4500, 0xC, 0x0, 0x0);
                                                    R1016 = 0x0;
                                                    R1012 = 0x1;
                                                    crowdDrawBlock(0x8C116C74, 0x8C116584, 0x4500, 0x18, 0x1, 0x0);
                                                    R1008 = 0x0;
                                                    R1004 = 0x0;
                                                    crowdDrawBlock(0x8C116CA4, 0x8C1166A4, 0x4500, 0xC, 0x0, 0x0);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            R1032 = 0x0;
            R1028 = 0x0;
            crowdDrawBlock(0x8C1167F4, 0x8C114B44, 0x3A00, 0xF, 0x0, 0x0);
            R1024 = 0x0;
            R1020 = 0x1;
            crowdDrawBlock(0x8C116824, 0x8C114BF8, 0x3A00, 0x18, 0x1, 0x0);
            R1016 = 0x0;
            R1012 = 0x0;
            crowdDrawBlock(0x8C116854, 0x8C114D18, 0x3A00, 0xB, 0x0, 0x0);
        }
    } else {
        R1032 = 0x0;
        R1028 = 0x0;
        crowdDrawBlock(0x8C116734, 0x8C1147E4, 0x3D00, 0x18, 0x0, 0x0);
        R1024 = 0x0;
        R1020 = 0x1;
        crowdDrawBlock(0x8C116764, 0x8C114904, 0x3D00, 0xC, 0x1, 0x0);
        R1016 = 0x0;
        R1012 = 0x0;
        crowdDrawBlock(0x8C116794, 0x8C114994, 0x3D00, 0x18, 0x0, 0x0);
        R1008 = 0x0;
        R1004 = 0x1;
        crowdDrawBlock(0x8C1167C4, 0x8C114AB4, 0x3D00, 0xC, 0x1, 0x0);
    }
    return (*(int *)0x8C188FD4);
}

int decoGaugeBarPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t1;
    int t4;
    int t7;
    int stk[20];

    stk[9] = a8;
    stk[10] = a9;
    stk[11] = a10;
    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    if ((int)(*(int *)(((int)stk + 20))) < 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        t1 = *(int *)(((int)stk + 24));
        t7 = (sprPutCropH((((((t1 << 2) + t1) << 2) << 2) + 0x8C3422A8), (*(int *)(((int)stk + 16))), 0x40, a7, *(Stk3 *)(((int)stk + 4)), f4, f5));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        t4 = *(int *)(((int)stk + 20));
        t7 = (sprPutCropH(((((((t4 << 2) + t4) << 2) << 2) + 0x8C3422A8) + 0x5A0), (*(int *)(((int)stk + 16))), 0x40, a7, *(Stk3 *)(((int)stk + 4)), f4, f5));
    }
    return t7;
}

int miniTargetSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int stk[23];

    stk[12] = a8;
    stk[13] = a9;
    stk[14] = a10;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = set_event(0x528, 0x8C037F98);
    *(unsigned int *)((t0 + 0x14)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)((t0 + 0x524)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    return (miniTargetInit(t0, (*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4))));
}
