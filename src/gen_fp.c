/* Straight-line functions with calls and guards (batch gen_fp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ballBoyDrawIdle(int);
int ballBoyDrawRun(int);
int ballBoyIdleExec(int, int);
int ballBoyRecall(int);
int ballBoyRunExec(int, int, int, int, int, int, int, int, int, int, int, int);
int buCalcCRC(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionBackup(int);
int buMakeBackupFileImage(int a4, int a5);
int ballBoyExec(int a4);

int buMakeBackupFileImage(int a4, int a5)
{
    int t100;
    int t11;
    int t12;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t21;
    int t23;
    int t24;
    int t25;
    int t27;
    int t30;
    int t32;
    int t33;
    int t98;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t37;
    int t43;
    int stk[12];

    t100 = 0xFFFFFF00;
    if (((*(short *)((a5 + 0x4C))) != 0) && ((t1 = *(short *)((a5 + 0x4C)), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = *(short *)((a5 + 0x54)), (int)(unsigned short)t2 <= (int)0x3) && ((t3 = *(int *)((a5 + 0x44)), t3 != 0) && ((t4 = *(int *)((a5 + 0x48)), t4 != 0) && ((t5 = *(short *)((a5 + 0x54)), t5 == 0) || (t6 = *(int *)((a5 + 0x50)), t6 != 0))))))) {
        memset(a4, 0x0, 0x60);
        memset(a4, 0x20, 0x10);
        memset((a4 + 0x10), 0x20, 0x20);
        memset((a4 + 0x30), 0x0, 0x10);
        t11 = a5;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t15 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t12 = (t12 + 0x1);
                *(unsigned char *)((t13 + 0x0)) = t15;
                t13 = (t13 + 0x1);
                if ((int)t12 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t17 = (a5 + 0x12);
        t18 = 0x0;
        t19 = (a4 + 0x10);
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 0) {
                t21 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t18 = (t18 + 0x1);
                *(unsigned char *)((t19 + 0x0)) = t21;
                t19 = (t19 + 0x1);
                if ((int)t18 >= (int)0x20) {
                    break;
                }
                continue;
            }
            break;
        }
        t23 = 0x0;
        t24 = (a5 + 0x34);
        t25 = (a4 + 0x30);
        for (;;) {
            if ((*(signed char *)((t24 + 0x0))) != 0) {
                t27 = *(signed char *)((t24 + 0x0));
                t24 = (t24 + 0x1);
                t23 = (t23 + 0x1);
                *(unsigned char *)((t25 + 0x0)) = t27;
                t25 = (t25 + 0x1);
                if ((int)t23 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t30 = *(int *)(((((unsigned short)(*(short *)((a5 + 0x4C))) & 0x3) << 2) + 0x8C20C220));
        t32 = *(int *)(((((unsigned short)(*(short *)((a5 + 0x54))) & 0x3) << 2) + 0x8C20C230));
        t33 = *(int *)((a5 + 0x5C));
        *(unsigned short *)((a4 + 0x42)) = (*(short *)((a5 + 0x4E)));
        *(unsigned short *)((a4 + 0x40)) = (*(short *)((a5 + 0x4C)));
        *(unsigned int *)(((int)stk + 4)) = 0x80;
        if (((*(short *)((a5 + 0x54))) != 0) && (t37 = *(int *)((a5 + 0x50)), t37 != 0)) {
            *(unsigned short *)((a4 + 0x44)) = (*(short *)((a5 + 0x54)));
            *(unsigned int *)(((int)stk + 12)) = (t30 + 0x80);
        } else {
            *(unsigned short *)((a4 + 0x44)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0x0;
        }
        if (((*(int *)((a5 + 0x5C))) != 0) && (t43 = *(int *)((a5 + 0x58)), t43 != 0)) {
            *(unsigned int *)((a4 + 0x48)) = (*(int *)((a5 + 0x5C)));
            *(unsigned int *)(((int)stk + 8)) = ((t30 + t32) + 0x80);
        } else {
            *(unsigned int *)((a4 + 0x48)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        if (t30 != 0) {
            memmove((a4 + 0x60), (*(int *)((a5 + 0x44))), 0x20);
            memmove(((*(int *)(((int)stk + 4))) + a4), (*(int *)((a5 + 0x48))), t30);
        }
        if (t32 != 0) {
            memmove(((*(int *)(((int)stk + 12))) + a4), (*(int *)((a5 + 0x50))), t32);
        }
        if ((*(int *)((a5 + 0x5C))) != 0) {
            memmove(((*(int *)(((int)stk + 8))) + a4), (*(int *)((a5 + 0x58))), (*(int *)((a5 + 0x5C))));
        }
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
        }
        *(unsigned short *)(((0x46 + a4) + 0x0)) = (buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80)));
        t98 = 0x0;
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            t98 = 0x1;
        }
        t100 = (t98 + ((unsigned int)((unsigned int)((t33 + (t30 + t32)) + 0x80) >> 8) >> 1));
    }
    return t100;
}

int ballBoyExec(int a4)
{
    int t0;
    int t8;
    int t14;
    int t19;
    int t24;
    float u37;
    int t61;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    L_8C0C8A8C:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    t0 = *(int *)0x8C1891E8;
    R4 = (t0);
    if (((int)t0 <= (int)0x9)) goto L_8C0C8AAE;
    goto L_8C0C8AAA;
    L_8C0C8AAA:;
    goto L_8C0C8BE8;
    L_8C0C8BE8:;
    return R0;
    L_8C0C8AAE:;
    R0 = (0x8C1D03F0);
    if (((*(int *)(((R4 << 2) + 0x8C1D03F0))) != 0)) goto L_8C0C8ABC;
    goto L_8C0C8AB8;
    L_8C0C8AB8:;
    goto L_8C0C8BE8;
    L_8C0C8ABC:;
    if (((*(int *)0x8C1D1274) == 0)) goto L_8C0C8AC8;
    goto L_8C0C8AC4;
    L_8C0C8AC4:;
    goto L_8C0C8BE8;
    L_8C0C8AC8:;
    t8 = *(int *)0x8C287D5C;
    R0 = (t8);
    if ((t8 != 3)) goto L_8C0C8AD4;
    goto L_8C0C8AD0;
    L_8C0C8AD0:;
    goto L_8C0C8BE8;
    L_8C0C8AD4:;
    R0 = (0x8C287ADC);
    if (((int)(*(int *)0x8C287ADC) <= (int)0x2)) goto L_8C0C8AE2;
    goto L_8C0C8ADE;
    L_8C0C8ADE:;
    goto L_8C0C8BE8;
    L_8C0C8AE2:;
    t14 = *(int *)0x8C37EA80;
    R0 = (t14);
    if (((t14 & 1) == 0)) goto L_8C0C8AEE;
    goto L_8C0C8AEA;
    L_8C0C8AEA:;
    goto L_8C0C8BE8;
    L_8C0C8AEE:;
    if (((*(int *)0x8C421F60) == 0)) goto L_8C0C8AFE;
    goto L_8C0C8AF6;
    L_8C0C8AF6:;
    t19 = *(int *)0x8C29B27C;
    R0 = (t19);
    if ((t19 != 1)) goto L_8C0C8BE8;
    goto L_8C0C8AFE;
    L_8C0C8AFE:;
    if (((*(int *)0x8C20D14C) != 0)) goto L_8C0C8B0E;
    goto L_8C0C8B06;
    L_8C0C8B06:;
    t24 = *(int *)0x8C20D150;
    R0 = (t24);
    if ((t24 == 3)) goto L_8C0C8BE8;
    goto L_8C0C8B0E;
    L_8C0C8B0E:;
    R10 = (0x8C37EA84);
    R11 = (0x0);
    R12 = (0x8C37EA84);
    R14 = (0x67C);
    R8 = (0x8C37EA84);
    R9 = (0x8C37EA84);
    goto L_8C0C8B1E;
    L_8C0C8B1E:;
    motionBackup((((R11 * R14) + R8) + 0x4));
    R13 = (((R11 * R14) + R8));
    if (((int)(*(int *)0x8C287B2C) >= 0)) goto L_8C0C8B94;
    goto L_8C0C8B34;
    L_8C0C8B34:;
    u37 = *(float *)((R13 + 0x5A4));
    R0 = (0x5A4);
    F3 = (u37);
    if ((0.0f > u37)) goto L_8C0C8B7C;
    goto L_8C0C8B3E;
    L_8C0C8B3E:;
    F3 = ((*(float *)((R13 + R0))));
    goto L_8C0C8B7E;
    L_8C0C8B7E:;
    if (((*(float *)0x8C0C8C70) > F3)) goto L_8C0C8B8E;
    goto L_8C0C8B86;
    L_8C0C8B86:;
    if (((*(int *)((R13 + 0x5DC))) == 0)) goto L_8C0C8B94;
    goto L_8C0C8B8E;
    L_8C0C8B8E:;
    ballBoyRecall(0x8C291F24);
    goto L_8C0C8B94;
    L_8C0C8B94:;
    R0 = (0x600);
    if (((*(int *)((((R11 * R14) + R8) + 0x600))) == 0)) goto L_8C0C8BB2;
    goto L_8C0C8BA2;
    L_8C0C8BA2:;
    if (((*(int *)0x8C38B768) == 0)) goto L_8C0C8BB2;
    goto L_8C0C8BAA;
    L_8C0C8BAA:;
    if (((*(int *)0x8C421F60) == 0)) goto L_8C0C8BDA;
    goto L_8C0C8BB2;
    L_8C0C8BB2:;
    if (((*(int *)((R9 + 0x5DC))) != 0)) goto L_8C0C8BCC;
    goto L_8C0C8BBA;
    L_8C0C8BBA:;
    ballBoyIdleExec(R10, (*(int *)(((int)stk + 4))));
    R0 = ((ballBoyDrawIdle(R10)));
    goto L_8C0C8BDA;
    L_8C0C8BDA:;
    t61 = (int)(R11 + 0x1) < (int)0x2;
    R10 = ((R10 + R14));
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R14));
    R9 = ((R9 + R14));
    if (t61) goto L_8C0C8B1E;
    goto L_8C0C8BE8;
    L_8C0C8BCC:;
    ballBoyRunExec(R12, (*(int *)(((int)stk + 4))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    R0 = ((ballBoyDrawRun(R12)));
    goto L_8C0C8BDA;
    L_8C0C8B7C:;
    F3 = ((-F3));
    goto L_8C0C8B7E;
}
