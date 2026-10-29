/* Straight-line functions with calls and guards (batch gen_jp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyMemCopy(int, int, int);
int kmyiWaitScanline0(void);
int kmyInitializeHardware(int a4);

int kmyInitializeHardware(int a4)
{
    int t1;
    int t6;
    int t7;
    int t3;
    int t19;
    int t46;
    int t55;
    int t56;
    int t75;
    int t78;
    int t79;
    int t16;
    int t17;
    int t11;
    int t12;
    int t38;
    int t34;
    int t30;
    int t27;
    int stk[10];

    *(unsigned int *)0x8C470D1C = (0xFFFF0000 & a4);
    *(unsigned int *)(((int)stk + 8)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    *(unsigned int *)0x8C470D0C = 0x5;
    if ((*(int *)(((int)stk + 8))) != 0x17FD11DB) {
        *(unsigned int *)0x8C470D0C = 0x5;
        t16 = 0xDD18957;
        t17 = 0x0;
    } else {
        if (t1 == 1) {
            *(unsigned int *)0x8C470D0C = 0x5;
            t11 = 0xDD18957;
            t12 = 0x0;
        } else {
            t6 = 0xDD18957;
            t7 = 0x0;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                *(unsigned int *)0x8C470D0C = 0x6;
                t3 = 0x15D1C955;
                if ((0xFFFF0000 & a4) == 0) {
                    t3 = 0x15D1C951;
                }
                t6 = t3;
                t7 = 0x800408;
            }
            t11 = t6;
            t12 = t7;
        }
        t16 = t11;
        t17 = t12;
    }
    t19 = *(int *)0xA05F689C;
    *(unsigned int *)0x8C470D18 = t19;
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                if ((t19 != 4) && ((t19 != 5) && (t19 != 6))) {
                    if (t19 != 8) {
                        if (t19 != 9) {
                            *(unsigned int *)0x8C470D10 = 0xEF;
                        } else {
                            *(unsigned int *)0x8C470D10 = 0x6F;
                        }
                    } else {
                        *(unsigned int *)0x8C470D10 = 0x7F;
                    }
                    t27 = 0x101;
                } else {
                    *(unsigned int *)0x8C470D10 = 0x7F;
                    t27 = 0x10101;
                }
                t30 = t27;
            } else {
                *(unsigned int *)0x8C470D10 = 0x3;
                t30 = 0x101;
            }
            t34 = t30;
        } else {
            *(unsigned int *)0x8C470D10 = 0x1;
            t34 = 0x0;
        }
        t38 = t34;
    } else {
        *(unsigned int *)0x8C470D10 = 0x0;
        t38 = 0x0;
    }
    kmiWriteRegister(0xA8, t16);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    kmyiWaitScanline0();
    t46 = kmiReadRegister(0x44);
    kmiWriteRegister(0x44, (0x800000 & t46));
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t55 = 0x110;
    t56 = 0x92039;
    if ((*(int *)0x8C470D0C) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t55 = 0x98;
        t56 = t17;
    }
    kmiWriteRegister(t55, t56);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t38);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if ((*(int *)0x8C470D0C) != 6) {
        for (;;) {
        }
    }
    t75 = 0x7DF77;
    if ((*(int *)0x8C470D0C) == 6) {
        t75 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t75);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t78 = 0x0;
    t79 = 0xA5000000;
    for (;;) {
        kmyMemCopy(t79, ((int)stk + 4), 0x4);
        t78 = (t78 + 0x1);
        t79 = (t79 + 0x4);
        if ((int)t78 >= (int)0x200000) {
            break;
        }
    }
    return 0x0;
}
