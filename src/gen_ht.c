/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawBlock(int, int, int, int, int, int);
int crowdDrawBlockAlt(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int crowdDrawAus(int a4);
int crowdDrawSega(int a4);
int crowdDrawFra(int a4);
int crowdDrawWin(int a4);

int crowdDrawAus(int a4)
{
    int stk[18];
    int R1004;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1020 = *(int *)((int)stk + 20);

    *(unsigned int *)0x8C188FD4 = 0x0;
    if (a4 != 26) {
        if (a4 != 27) {
            if (a4 != 28) {
                if (a4 == 29) {
                    R1020 = 0x0;
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (1.0f + 1.0f));
                    R1004 = 0x1;
                    crowdDrawBlockAlt(0x8C11A424, 0x8C118258, 0x0, 0x8, 0x1);
                    R1020 = 0x0;
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (1.0f + 1.0f));
                    R1004 = 0x0;
                    crowdDrawBlockAlt(0x8C11A454, 0x8C1182B8, 0x0, 0x1E, 0x0);
                    R1020 = 0x0;
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (1.0f + 1.0f));
                    R1004 = 0x1;
                    crowdDrawBlockAlt(0x8C11A484, 0x8C118420, 0x0, 0x1E, 0x1);
                    R1020 = 0x0;
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (1.0f + 1.0f));
                    R1004 = 0x0;
                    crowdDrawBlockAlt(0x8C11A4B4, 0x8C118588, 0x0, 0x2B, 0x0);
                } else {
                    if (a4 == 34) {
                        R1020 = 0x0;
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                        R1004 = 0x1;
                        crowdDrawBlockAlt(0x8C11A4E4, 0x8C11878C, 0x8300, 0x2B, 0x1);
                        R1020 = 0x0;
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                        R1004 = 0x0;
                        crowdDrawBlockAlt(0x8C11A514, 0x8C118990, 0x8300, 0x1E, 0x0);
                        R1020 = 0x0;
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                        R1004 = 0x1;
                        crowdDrawBlockAlt(0x8C11A544, 0x8C118AF8, 0x8300, 0x1E, 0x1);
                        R1020 = 0x0;
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                        R1004 = 0x0;
                        crowdDrawBlockAlt(0x8C11A574, 0x8C118C60, 0x8300, 0x8, 0x0);
                    } else {
                        if (a4 == 35) {
                            R1020 = 0x0;
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                            R1004 = 0x1;
                            crowdDrawBlockAlt(0x8C11A5A4, 0x8C118CC0, 0x8200, 0x14, 0x1);
                            R1020 = 0x0;
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                            R1004 = 0x0;
                            crowdDrawBlockAlt(0x8C11A5D4, 0x8C118DB0, 0x8200, 0x1E, 0x0);
                            R1020 = 0x0;
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                            R1004 = 0x1;
                            crowdDrawBlockAlt(0x8C11A604, 0x8C118F18, 0x8200, 0x1E, 0x1);
                            R1020 = 0x0;
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, -2.0f);
                            R1004 = 0x0;
                            crowdDrawBlockAlt(0x8C11A634, 0x8C119080, 0x8200, 0x2A, 0x0);
                        } else {
                            if (a4 == 36) {
                                R1020 = 0x0;
                                *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, -2.0f);
                                R1004 = 0x1;
                                crowdDrawBlockAlt(0x8C11A664, 0x8C119278, 0x6400, 0x23, 0x1);
                                R1020 = 0x0;
                                *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, -2.0f);
                                R1004 = 0x0;
                                crowdDrawBlockAlt(0x8C11A694, 0x8C11941C, 0x6400, 0x23, 0x0);
                            } else {
                                if (a4 == 37) {
                                    R1020 = 0x0;
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 3.0f, 0.0f);
                                    R1004 = 0x0;
                                    crowdDrawBlockAlt(0x8C11A6F4, 0x8C1199D4, 0x4000, 0x51, 0x0);
                                    R1020 = 0x0;
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 3.0f, 0.0f);
                                    R1004 = 0x0;
                                    crowdDrawBlockAlt(0x8C11A754, 0x8C11A028, 0x4000, 0x2D, 0x0);
                                }
                            }
                        }
                    }
                }
            } else {
                R1020 = 0x0;
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 3.0f);
                R1004 = 0x1;
                crowdDrawBlockAlt(0x8C11A364, 0x8C117CA0, 0x0, 0x2A, 0x1);
                R1020 = 0x0;
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 3.0f);
                R1004 = 0x0;
                crowdDrawBlockAlt(0x8C11A394, 0x8C117E98, 0x0, 0x1E, 0x0);
                R1020 = 0x0;
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 3.0f);
                R1004 = 0x1;
                crowdDrawBlockAlt(0x8C11A3C4, 0x8C118000, 0x0, 0x1E, 0x1);
                R1020 = 0x0;
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 3.0f);
                R1004 = 0x0;
                crowdDrawBlockAlt(0x8C11A3F4, 0x8C118168, 0x0, 0x14, 0x0);
            }
        } else {
            R1020 = 0x0;
            *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, 1.0f);
            R1004 = 0x1;
            crowdDrawBlockAlt(0x8C11A304, 0x8C117958, 0x1900, 0x23, 0x1);
            R1020 = 0x0;
            *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, 1.0f);
            R1004 = 0x0;
            crowdDrawBlockAlt(0x8C11A334, 0x8C117AFC, 0x1900, 0x23, 0x0);
        }
    } else {
        R1020 = 0x0;
        *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 3.0f, 1.0f);
        R1004 = 0x0;
        crowdDrawBlockAlt(0x8C11A274, 0x8C116F5C, 0x3A00, 0x2D, 0x0);
        R1020 = 0x0;
        *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 3.0f, 1.0f);
        R1004 = 0x0;
        crowdDrawBlockAlt(0x8C11A2D4, 0x8C11758C, 0x3A00, 0x51, 0x0);
    }
    return (*(int *)0x8C188FD4);
}

int crowdDrawSega(int a4)
{
    int t1;
    int stk[17];
    int R1004;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1020 = *(int *)((int)stk + 20);

    *(unsigned short *)(((int)stk + 24)) = 0x3200;
    *(unsigned int *)0x8C188FD4 = 0x0;
    t1 = 0x2;
    if ((*(int *)0x8C20D14C) == 3) {
        t1 = 0x0;
    }
    if (a4 != 41) {
        if (a4 != 48) {
            if (a4 == 49) {
                R1020 = (t1);
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                R1004 = 0x0;
                crowdDrawBlockAlt(0x8C11F230, 0x8C11DA3C, 0x8200, 0xE, 0x0);
                R1020 = (t1);
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                R1004 = 0x1;
                crowdDrawBlockAlt(0x8C11F260, 0x8C11DAE4, 0x8200, 0x10, 0x1);
                R1020 = (t1);
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                R1004 = 0x0;
                crowdDrawBlockAlt(0x8C11F290, 0x8C11DBA4, 0x8200, 0x1D, 0x0);
                R1020 = (t1);
                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                R1004 = 0x1;
                crowdDrawBlockAlt(0x8C11F2C0, 0x8C11DD00, 0x8200, 0x2D, 0x1);
            } else {
                if (a4 == 51) {
                    R1020 = (t1);
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                    R1004 = 0x0;
                    crowdDrawBlockAlt(0x8C11F2F0, 0x8C11DF1C, 0x4A00, 0x20, 0x0);
                    R1020 = (t1);
                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                    R1004 = 0x1;
                    crowdDrawBlockAlt(0x8C11F320, 0x8C11E09C, 0x4A00, 0x18, 0x1);
                } else {
                    if (a4 == 52) {
                        R1020 = (t1);
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                        R1004 = 0x0;
                        crowdDrawBlockAlt(0x8C11F350, 0x8C11E1BC, 0x4400, 0x3C, 0x0);
                        R1020 = (t1);
                        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                        R1004 = 0x1;
                        crowdDrawBlockAlt(0x8C11F380, 0x8C11E48C, 0x4400, 0x18, 0x1);
                    } else {
                        if (a4 == 53) {
                            R1020 = (t1);
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                            R1004 = 0x0;
                            crowdDrawBlockAlt(0x8C11F3B0, 0x8C11E5AC, 0x4100, 0x3C, 0x0);
                            R1020 = (t1);
                            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                            R1004 = 0x1;
                            crowdDrawBlockAlt(0x8C11F3E0, 0x8C11E87C, 0x4100, 0x18, 0x1);
                        } else {
                            if (a4 == 54) {
                                R1020 = (t1);
                                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                R1004 = 0x0;
                                crowdDrawBlockAlt(0x8C11F410, 0x8C11E99C, (*(short *)(((int)stk + 24))), 0x20, 0x0);
                                R1020 = (t1);
                                *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                R1004 = 0x1;
                                crowdDrawBlockAlt(0x8C11F440, 0x8C11EB1C, (*(short *)(((int)stk + 24))), 0x18, 0x1);
                            } else {
                                if (a4 == 56) {
                                    R1020 = (t1);
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                    R1004 = 0x0;
                                    crowdDrawBlockAlt(0x8C11F470, 0x8C11EC3C, 0x0, 0x1A, 0x0);
                                    R1020 = (t1);
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                    R1004 = 0x1;
                                    crowdDrawBlockAlt(0x8C11F4A0, 0x8C11ED74, 0x0, 0x2A, 0x1);
                                    R1020 = (t1);
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                    R1004 = 0x0;
                                    crowdDrawBlockAlt(0x8C11F4D0, 0x8C11EF6C, 0x0, 0xD, 0x0);
                                    R1020 = (t1);
                                    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
                                    R1004 = 0x1;
                                    crowdDrawBlockAlt(0x8C11F500, 0x8C11F008, 0x0, 0xE, 0x1);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            R1020 = (t1);
            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
            R1004 = 0x0;
            crowdDrawBlockAlt(0x8C11F170, 0x8C11D55C, 0x7E00, 0x10, 0x0);
            R1020 = (t1);
            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
            R1004 = 0x1;
            crowdDrawBlockAlt(0x8C11F1A0, 0x8C11D61C, 0x7E00, 0xE, 0x1);
            R1020 = (t1);
            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
            R1004 = 0x0;
            crowdDrawBlockAlt(0x8C11F1D0, 0x8C11D6C4, 0x7E00, 0x2D, 0x0);
            R1020 = (t1);
            *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
            R1004 = 0x1;
            crowdDrawBlockAlt(0x8C11F200, 0x8C11D8E0, 0x7E00, 0x1D, 0x1);
        }
    } else {
        R1020 = (t1);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
        R1004 = 0x0;
        crowdDrawBlockAlt(0x8C11F0B0, 0x8C11D154, 0x0, 0x23, 0x0);
        R1020 = (t1);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
        R1004 = 0x1;
        crowdDrawBlockAlt(0x8C11F0E0, 0x8C11D2F8, 0x0, 0x19, 0x1);
        R1020 = (t1);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
        R1004 = 0x0;
        crowdDrawBlockAlt(0x8C11F110, 0x8C11D424, 0x0, 0xE, 0x0);
        R1020 = (t1);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 1.5f, 0.0f);
        R1004 = 0x1;
        crowdDrawBlockAlt(0x8C11F140, 0x8C11D4CC, 0x0, 0xC, 0x1);
    }
    return (*(int *)0x8C188FD4);
}

int crowdDrawFra(int a4)
{
    int t26;
    int t64;
    int t57;
    int t46;
    int t42;
    int t38;
    int t34;
    int t30;
    int stk[16];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1036;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1036 = *(int *)((int)stk + 36);

    *(unsigned int *)0x8C188FD4 = 0x0;
    if (a4 != 4) {
        if (a4 != 5) {
            if (a4 == 13) {
                R1036 = 0x2;
                *(int *)((int)stk + 32) = 0x0;
                crowdDrawBlock(0x8C1143F4, 0x8C112F24, 0x4700, 0x38, 0x0, 0x2);
                *(int *)((int)stk + 28) = 0x0;
                *(int *)((int)stk + 24) = 0x1;
                crowdDrawBlock(0x8C114424, 0x8C1131C4, 0x4700, 0x38, 0x1, 0x0);
                R1020 = 0x0;
                R1016 = 0x0;
                crowdDrawBlock(0x8C114454, 0x8C113464, 0x4700, 0x10, 0x0, 0x0);
                t46 = (*(int *)0x8C188FD4);
            } else {
                if (a4 == 14) {
                    R1036 = 0x2;
                    *(int *)((int)stk + 32) = 0x1;
                    crowdDrawBlock(0x8C114484, 0x8C113524, 0x4700, 0x20, 0x1, 0x2);
                    *(int *)((int)stk + 28) = 0x0;
                    *(int *)((int)stk + 24) = 0x0;
                    crowdDrawBlock(0x8C1144B4, 0x8C1136A4, 0x4700, 0x20, 0x0, 0x0);
                    R1020 = 0x0;
                    R1016 = 0x1;
                    crowdDrawBlock(0x8C1144E4, 0x8C113824, 0x4700, 0x20, 0x1, 0x0);
                    t42 = (*(int *)0x8C188FD4);
                } else {
                    if (a4 == 15) {
                        R1036 = 0x2;
                        *(int *)((int)stk + 32) = 0x0;
                        crowdDrawBlock(0x8C114514, 0x8C1138B4, 0x4700, 0x38, 0x0, 0x2);
                        *(int *)((int)stk + 28) = 0x0;
                        *(int *)((int)stk + 24) = 0x1;
                        crowdDrawBlock(0x8C114544, 0x8C113B54, 0x4700, 0x38, 0x1, 0x0);
                        R1020 = 0x0;
                        R1016 = 0x0;
                        crowdDrawBlock(0x8C114574, 0x8C113DF4, 0x4700, 0x10, 0x0, 0x0);
                        t38 = (*(int *)0x8C188FD4);
                    } else {
                        if (a4 == 16) {
                            R1036 = 0x2;
                            *(int *)((int)stk + 32) = 0x1;
                            crowdDrawBlock(0x8C1145A4, 0x8C113EB4, 0x4700, 0x20, 0x1, 0x2);
                            *(int *)((int)stk + 28) = 0x0;
                            *(int *)((int)stk + 24) = 0x0;
                            crowdDrawBlock(0x8C1145D4, 0x8C114034, 0x4700, 0x20, 0x0, 0x0);
                            R1020 = 0x0;
                            R1016 = 0x1;
                            crowdDrawBlock(0x8C114604, 0x8C1141B4, 0x4700, 0xC, 0x1, 0x0);
                            t34 = (*(int *)0x8C188FD4);
                        } else {
                            if (a4 == 26) {
                                R1036 = 0x2;
                                *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, -0.699999988f, 0.0f);
                                R1020 = 0x0;
                                crowdDrawBlockAlt(0x8C114634, 0x8C1112A4, 0x8000, 0x10, 0x0);
                                R1036 = 0x2;
                                *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, -0.699999988f, 0.0f);
                                R1020 = 0x1;
                                crowdDrawBlockAlt(0x8C114664, 0x8C111364, 0x8000, 0x10, 0x1);
                                R1016 = 0x1;
                                R1012 = 0x0;
                                crowdDrawBlock(0x8C114694, 0x8C111424, 0x8000, 0x20, 0x0, 0x1);
                                R1008 = 0x1;
                                R1004 = 0x1;
                                crowdDrawBlock(0x8C1146C4, 0x8C1115A4, 0x8000, 0x2A, 0x1, 0x1);
                                t30 = (*(int *)0x8C188FD4);
                            } else {
                                t26 = 0x0;
                                if (a4 == 27) {
                                    R1036 = 0x2;
                                    *(int *)((int)stk + 32) = 0x1;
                                    crowdDrawBlock(0x8C114724, 0x8C1119E8, 0x8000, 0x8, 0x1, 0x2);
                                    *(int *)((int)stk + 28) = 0x2;
                                    *(int *)((int)stk + 24) = 0x0;
                                    crowdDrawBlock(0x8C114754, 0x8C111A48, 0x8000, 0xA, 0x0, 0x2);
                                    R1020 = 0x2;
                                    R1016 = 0x1;
                                    crowdDrawBlock(0x8C114784, 0x8C111AC0, 0x8000, 0x28, 0x1, 0x2);
                                    R1012 = 0x2;
                                    R1008 = 0x0;
                                    crowdDrawBlock(0x8C1147B4, 0x8C111CA0, 0x8000, 0x28, 0x0, 0x2);
                                    t26 = (*(int *)0x8C188FD4);
                                }
                                t30 = t26;
                            }
                            t34 = t30;
                        }
                        t38 = t34;
                    }
                    t42 = t38;
                }
                t46 = t42;
            }
            t57 = t46;
        } else {
            R1036 = 0x1;
            *(int *)((int)stk + 32) = 0x0;
            crowdDrawBlock(0x8C1142D4, 0x8C1125C4, 0x0, 0x18, 0x0, 0x1);
            *(int *)((int)stk + 28) = 0x1;
            *(int *)((int)stk + 24) = 0x1;
            crowdDrawBlock(0x8C114304, 0x8C1126E4, 0x0, 0x37, 0x1, 0x1);
            R1036 = 0x2;
            *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, -0.699999988f, 0.0f);
            R1020 = 0x0;
            crowdDrawBlockAlt(0x8C114334, 0x8C112978, 0x0, 0x15, 0x0);
            R1036 = 0x2;
            *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, -0.699999988f, 0.0f);
            R1020 = 0x1;
            crowdDrawBlockAlt(0x8C114364, 0x8C112A74, 0x0, 0x15, 0x1);
            R1016 = 0x1;
            R1012 = 0x0;
            crowdDrawBlock(0x8C114394, 0x8C112B70, 0x0, 0x37, 0x0, 0x1);
            R1008 = 0x1;
            R1004 = 0x0;
            crowdDrawBlock(0x8C1143C4, 0x8C112E04, 0x0, 0x18, 0x0, 0x1);
            t57 = (*(int *)0x8C188FD4);
        }
        t64 = t57;
    } else {
        R1036 = 0x1;
        *(int *)((int)stk + 32) = 0x0;
        crowdDrawBlock(0x8C114274, 0x8C112144, 0x0, 0x30, 0x0, 0x1);
        *(int *)((int)stk + 28) = 0x1;
        *(int *)((int)stk + 24) = 0x1;
        crowdDrawBlock(0x8C1142A4, 0x8C112384, 0x0, 0x30, 0x1, 0x1);
        t64 = (*(int *)0x8C188FD4);
    }
    return t64;
}

int crowdDrawWin(int a4)
{
    int stk[16];
    int R1004;
    int R1008;
    int R1024;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1024 = *(int *)((int)stk + 24);

    *(unsigned short *)(((int)stk + 32)) = 0x6300;
    *(unsigned short *)(((int)stk + 28)) = 0x1100;
    *(unsigned int *)0x8C188FD4 = 0x0;
    if (a4 != 11) {
        if (a4 != 21) {
            if (a4 != 22) {
                if (a4 == 23) {
                    R1024 = 0x0;
                    *(int *)((int)stk + 20) = 0x1;
                    crowdDrawBlock(0x8C11CEB4, 0x8C11BB7C, 0x2400, 0x14, 0x1, 0x0);
                    *(int *)((int)stk + 16) = 0x0;
                    *(int *)((int)stk + 12) = 0x0;
                    crowdDrawBlock(0x8C11CEE4, 0x8C11BC6C, 0x2400, 0x14, 0x0, 0x0);
                    R1024 = 0x0;
                    *(int *)((int)stk + 20) = 0x1;
                    crowdDrawBlock(0x8C11CF14, 0x8C11BD5C, 0x2400, 0x3, 0x1, 0x0);
                } else {
                    if (a4 == 24) {
                        R1024 = 0x0;
                        *(int *)((int)stk + 20) = 0x1;
                        crowdDrawBlock(0x8C11CF44, 0x8C11BD80, 0x0, 0x14, 0x1, 0x0);
                        R1024 = 0x0;
                        *(int *)((int)stk + 20) = 0x0;
                        crowdDrawBlock(0x8C11CF74, 0x8C11BE70, 0x0, 0x14, 0x0, 0x0);
                    } else {
                        if (a4 == 30) {
                            R1024 = 0x2;
                            *(int *)((int)stk + 20) = 0x0;
                            crowdDrawBlock(0x8C11CFA4, 0x8C11BF60, 0x8000, 0x12, 0x0, 0x2);
                            *(int *)((int)stk + 16) = 0x2;
                            *(int *)((int)stk + 12) = 0x1;
                            crowdDrawBlock(0x8C11CFD4, 0x8C11C038, 0x8000, 0x12, 0x1, 0x2);
                            R1008 = 0x2;
                            R1004 = 0x0;
                            crowdDrawBlock(0x8C11D004, 0x8C11C110, 0x8000, 0x30, 0x0, 0x2);
                            R1024 = 0x2;
                            *(int *)((int)stk + 20) = 0x1;
                            crowdDrawBlock(0x8C11D034, 0x8C11C350, 0x8000, 0x30, 0x1, 0x2);
                        } else {
                            if (a4 == 31) {
                                R1024 = 0x0;
                                *(int *)((int)stk + 20) = 0x0;
                                crowdDrawBlock(0x8C11D064, 0x8C11C590, (*(short *)(((int)stk + 32))), 0x9, 0x0, 0x0);
                            } else {
                                if (a4 == 32) {
                                    R1024 = 0x2;
                                    *(Stk3 *)(((int)stk + 12)) = vecMake(0.0f, 0.0f, -2.0f);
                                    R1008 = 0x1;
                                    crowdDrawBlockAlt(0x8C11D094, 0x8C11C5FC, 0x4F00, 0x2D, 0x1);
                                    R1024 = 0x2;
                                    *(Stk3 *)(((int)stk + 12)) = vecMake(0.0f, 0.0f, -2.0f);
                                    R1008 = 0x0;
                                    crowdDrawBlockAlt(0x8C11D0C4, 0x8C11C818, 0x4F00, 0x1B, 0x0);
                                    R1024 = 0x2;
                                    *(Stk3 *)(((int)stk + 12)) = vecMake(0.0f, 0.0f, -2.0f);
                                    R1008 = 0x1;
                                    crowdDrawBlockAlt(0x8C11D0F4, 0x8C11C95C, 0x4F00, 0x29, 0x1);
                                    R1024 = 0x2;
                                    *(Stk3 *)(((int)stk + 12)) = vecMake(0.0f, 0.0f, -2.0f);
                                    R1008 = 0x0;
                                    crowdDrawBlockAlt(0x8C11D124, 0x8C11CB48, 0x4F00, 0x1D, 0x0);
                                }
                            }
                        }
                    }
                }
            } else {
                R1024 = 0x2;
                *(int *)((int)stk + 20) = 0x1;
                crowdDrawBlock(0x8C11CDF4, 0x8C11B4D4, 0x3C00, 0x29, 0x1, 0x2);
                *(int *)((int)stk + 16) = 0x2;
                *(int *)((int)stk + 12) = 0x0;
                crowdDrawBlock(0x8C11CE24, 0x8C11B6C0, 0x3C00, 0x1D, 0x0, 0x2);
                R1008 = 0x2;
                R1004 = 0x1;
                crowdDrawBlock(0x8C11CE54, 0x8C11B81C, 0x3C00, 0x2D, 0x1, 0x2);
                R1024 = 0x2;
                *(int *)((int)stk + 20) = 0x0;
                crowdDrawBlock(0x8C11CE84, 0x8C11BA38, 0x3C00, 0x1B, 0x0, 0x2);
            }
        } else {
            R1024 = 0x0;
            *(int *)((int)stk + 20) = 0x1;
            crowdDrawBlock(0x8C11CD34, 0x8C11AD24, 0x3C00, 0x34, 0x1, 0x0);
            *(int *)((int)stk + 16) = 0x2;
            *(int *)((int)stk + 12) = 0x0;
            crowdDrawBlock(0x8C11CD64, 0x8C11AF94, 0x3C00, 0x1E, 0x0, 0x2);
            R1008 = 0x0;
            R1004 = 0x1;
            crowdDrawBlock(0x8C11CD94, 0x8C11B0FC, 0x3C00, 0x34, 0x1, 0x0);
            R1024 = 0x2;
            *(int *)((int)stk + 20) = 0x0;
            crowdDrawBlock(0x8C11CDC4, 0x8C11B36C, 0x3C00, 0x1E, 0x0, 0x2);
        }
    } else {
        R1024 = 0x0;
        *(int *)((int)stk + 20) = 0x0;
        crowdDrawBlock(0x8C11CCA4, 0x8C11A784, (*(short *)(((int)stk + 28))), 0x28, 0x0, 0x0);
    }
    return (*(int *)0x8C188FD4);
}
