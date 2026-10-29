/* Straight-line functions with calls and guards (batch gen_tn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRandom(void);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int lineJudgeCall(int a4, int a5, float f4, float f5);

int lineJudgeCall(int a4, int a5, float f4, float f5)
{
    int stk[18];
    int t202;
    int t6;
    float u8;
    float u19;
    float u24;
    float u36;
    int t83;
    float u85;
    int t99;
    float u101;
    float u124;
    float u129;
    float u130;
    float u148;
    float u149;
    float u153;
    float u154;
    float u170;
    float u171;
    float u173;
    float u178;
    int t183;
    float u196;
    float u197;
    int t200;
    int t126;
    int t150;
    int t175;

    t202 = 0x8C0C9F00;
    if ((int)(*(int *)0x8C287B2C) > 0) {
    } else {
        if (((*(int *)((a4 + 0x54))) & 4) == 0) {
        } else {
            if ((*(int *)((a4 + 0x4C))) != 1) {
            } else {
                t6 = serveGetServer();
                *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
                serveGetPos(t6, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x4));
                u8 = *(float *)((a4 + 0x58));
                if ((u8 > -5.0f) && (5.0f > u8)) {
                    u19 = *(float *)(((int)stk + 12));
                    if ((*(float *)((a4 + 0x58))) > 0.5f) {
                        u24 = *(float *)((a4 + 0x58));
                        if (((u24 > 0.0f) - (0.0f > u24)) == ((u19 > 0.0f) - (0.0f > u19))) {
                            *(unsigned int *)0x8C380390 = 0x1;
                            *(unsigned int *)0x8C38168C = 0x2;
                        } else {
                            *(unsigned int *)0x8C380390 = 0x3;
                            *(unsigned int *)0x8C38168C = 0x3;
                        }
                    } else {
                        if (-0.5f > (*(float *)((a4 + 0x58)))) {
                            u36 = *(float *)((a4 + 0x58));
                            if (((u36 > 0.0f) - (0.0f > u36)) == ((u19 > 0.0f) - (0.0f > u19))) {
                                *(unsigned int *)0x8C380390 = 0x2;
                                *(unsigned int *)0x8C38168C = 0x1;
                            } else {
                                *(unsigned int *)0x8C380390 = 0x3;
                                *(unsigned int *)0x8C38168C = 0x3;
                            }
                        } else {
                            *(unsigned int *)0x8C380390 = 0x3;
                            *(unsigned int *)0x8C38168C = 0x3;
                        }
                    }
                }
            }
        }
        if (((*(int *)((a4 + 0x54))) & 4) == 0) {
            if ((*(int *)0x8C37FDF4) == ((*(int *)0x8C124E18) + (*(int *)0x8C2873D4))) {
                *(unsigned int *)(((int)stk + 8)) = 0x8C37FDD0;
                *(unsigned int *)0x8C38038C = 0x5;
                t83 = *(int *)(((int)stk + 8));
                *(int *)((int)stk + 4) = (0x5C4 + t83);
                u85 = 5.0f;
                u85 = u85 + 10.0f * (nlRandom());
                *(unsigned int *)(((0x5C4 + t83) + 0x0)) = (int)u85;
            }
            *(unsigned int *)(((int)stk + 8)) = 0x8C3810CC;
            if ((*(int *)0x8C3810F0) == ((*(int *)0x8C124E18) + (*(int *)0x8C2873D4))) {
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x5;
                t99 = *(int *)(((int)stk + 8));
                *(int *)((int)stk + 4) = (0x5C4 + t99);
                u101 = 5.0f;
                u101 = u101 + 10.0f * (nlRandom());
                *(unsigned int *)(((0x5C4 + t99) + 0x0)) = (int)u101;
            }
        }
        u124 = *(float *)0x8C287B40;
        if ((*(float *)((a4 + 0x58))) > ((-u124) + -5.0f)) {
            if ((((-u124) + 5.0f) > (*(float *)((a4 + 0xC)))) && (t126 = *(int *)((a4 + 0x4C)), t126 == 1)) {
                u129 = *(float *)((a4 + 0x58));
                u130 = (-u129);
                if (!(0.0f > u129)) {
                    u130 = u129;
                }
                if (u130 > (u124 + 0.5f)) {
                    *(unsigned int *)0x8C3809E4 = 0x2;
                    *(unsigned int *)0x8C381038 = 0x1;
                } else {
                    *(unsigned int *)0x8C3809E4 = 0x3;
                    *(unsigned int *)0x8C381038 = 0x3;
                }
            }
        }
        u148 = *(float *)((a4 + 0x58));
        u149 = *(float *)0x8C287B40;
        if (u148 > (u149 + -5.0f)) {
            if (((u149 + 5.0f) > u148) && (t150 = *(int *)((a4 + 0x4C)), t150 == 1)) {
                u153 = *(float *)((a4 + 0x58));
                u154 = (-u153);
                if (!(0.0f > u153)) {
                    u154 = u153;
                }
                if (u154 > (u149 + 0.5f)) {
                    *(unsigned int *)0x8C37FD3C = 0x1;
                    *(unsigned int *)0x8C381CE0 = 0x2;
                } else {
                    *(unsigned int *)0x8C37FD3C = 0x3;
                    *(unsigned int *)0x8C381CE0 = 0x3;
                }
            }
        }
        u170 = *(float *)((a4 + 0x60));
        u171 = (-u170);
        if (!(0.0f > u170)) {
            u171 = u170;
        }
        if (u171 > 118.849998f) {
            u173 = (-u170);
            if (!(0.0f > u170)) {
                u173 = u170;
            }
            if ((123.849998f > u173) && (t175 = *(int *)((a4 + 0x4C)), t175 == 1)) {
                u178 = *(float *)((a4 + 0x60));
                t183 = 0x3860;
                if ((int)((u178 > 0.0f) - (0.0f > u178)) > 0) {
                    t183 = 0x2BB8;
                }
                *(unsigned int *)((0x8C37F77C + t183)) = 0xB;
            }
        }
        u196 = *(float *)((a4 + 0x60));
        u197 = (-u196);
        if (!(0.0f > u196)) {
            u197 = u196;
        }
        t200 = 0x8C0CA1D8;
        if ((*(float *)0x8C0CA1D8) > u197) {
            *(unsigned int *)0x8C382988 = 0xB;
            t200 = 0x320C;
        }
        t202 = t200;
    }
    return t202;
}
