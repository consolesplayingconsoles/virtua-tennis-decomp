/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selCursorReset(int a4, int a5);

int selCursorReset(int a4, int a5)
{
    int t27;
    int t3;
    int t4;
    int t18;
    int t24;
    int t20;
    int t21;
    int t7;
    int t15;

    *(unsigned int *)((0x8C343ACC + (a4 << 2))) = 0xFFFFFFFF;
    t27 = 0x8C185298;
    if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((a4 << 1) + 0x8C185298)))) != 0) {
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = (*(int *)((0x8C110A94 + (a4 << 2))));
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)) = 0x0;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((*(int *)((0x8C1853C0 + ((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2)))) == 0) {
                break;
            }
            t4 = (t4 + 0x1);
            if ((int)(a4 + t4) >= 0) {
                t7 = ((a4 + t4) & 0x3);
            } else {
                t7 = ((~(((~(a4 + t4)) + 0x1) & 0x3)) + 0x1);
            }
            t3 = (*(int *)((0x8C110A94 + (t7 << 2))));
            *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t3;
            if ((int)t4 <= (int)0x4) continue;
            break;
        }
        *(unsigned int *)((((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2) + 0x8C1853C0)) = 0x2;
        *(unsigned int *)((0x8C343ACC + (a4 << 2))) = (*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)));
        if (((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) == 8) && (t15 = *(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)), t15 == 0)) {
            *(unsigned int *)((0x8C343ACC + (a4 << 2))) = 0x10;
        }
        t18 = *(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0));
        t24 = t18;
        if (t18 == 8) {
            t20 = *(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4));
            t21 = t20;
            if (t20 == 1) {
                *(unsigned int *)((0x8C343ACC + (a4 << 2))) = 0x11;
                t21 = (a4 << 2);
            }
            t24 = t21;
        }
        t27 = t24;
    }
    return t27;
}
