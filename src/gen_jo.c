/* Straight-line functions with calls and guards (batch gen_jo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaErrCallFunc(int, ...);
int mwlRnaStartCopy(int, int, int, int, int);
int mwlRnaStartTrans(int a4, int a5, int a6, int a7);

int mwlRnaStartTrans(int a4, int a5, int a6, int a7)
{
    int t1;
    int t4;
    int t5;
    int t17;
    int t18;
    int t20;
    int t21;
    int t24;
    int t27;
    int t28;
    int t29;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t63;
    int t64;
    int t65;
    int t67;
    int t68;
    int t69;
    int t31;
    int t34;
    int t70;
    int t58;
    int stk[13];

    t1 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t4 = (int)((int)((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34)))) / (int)((t1 << 2) << 1));
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        if ((*(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0))) == 0) {
            *(int *)((int)stk + 4) = 0x8C20ACB0;
            mwRnaErrCallFunc(0x8C20ACB0);
        }
        t17 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = t17;
        t18 = *(int *)((a4 + 0x8));
        t20 = *(int *)(((*(int *)((t17 + 0x0))) + 0x18));
        t21 = ((t4 * ((t1 << 2) << 1)) * t18);
        if ((int)((t4 * ((t1 << 2) << 1)) * t18) < 0) {
            t21 = (((t4 * ((t1 << 2) << 1)) * t18) + 0x7);
        }
        t24 = ((int (*)(int, int, int, int))(t20))((*(int *)(((int)stk + 8))), 0x1, (((t21 >> 1) >> 1) >> 1), (((t5 << 2) << 1) + (a4 + 0x18)));
        t5 = (t5 + 0x1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x3))) == 1) {
        t31 = (*(int *)((a4 + 0x1C)));
        t34 = a7;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x18);
        t27 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((a4 + 0x18) + 0x8);
        t28 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t29 = t28;
        if ((int)t27 < (int)t28) {
            t29 = t27;
        }
        t31 = t29;
        t34 = t28;
    }
    t37 = (int)((int)t31 / (int)(*(int *)((a4 + 0x8))));
    t38 = ((t37 << 2) << 1);
    if ((int)((t37 << 2) << 1) >= (int)(t4 * ((t1 << 2) << 1))) {
        t38 = (t4 * ((t1 << 2) << 1));
    }
    t40 = *(int *)((a4 + 0x28));
    t41 = *(int *)((a4 + 0x2C));
    t42 = t38;
    if ((int)t38 >= (int)(t40 - t41)) {
        t42 = (t40 - t41);
    }
    t44 = (int)((int)t42 / (int)((t1 << 2) << 1));
    if ((int)(t44 * ((t1 << 2) << 1)) <= 0) {
        t45 = (t44 * ((t1 << 2) << 1));
        t46 = 0x0;
        t47 = 0x0;
        for (;;) {
            if ((int)t46 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t47 = t46;
            t47 = (t47 << 2);
            if ((*(int *)((((a4 + 0x10) + t47) + 0x0))) == 0) {
                *(int *)((int)stk + 4) = 0x8C20ACB0;
                mwRnaErrCallFunc(0x8C20ACB0);
            } else {
                t58 = t34;
            }
            t45 = a4;
            t45 = (t45 + 0x10);
            t45 = (t45 + t47);
            t45 = (*(int *)((t45 + 0x0)));
            t63 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t45 + 0x0))) + 0x1C)))))(t45, 0x1, (((t46 << 2) << 1) + (a4 + 0x18)), t58);
            t46 = (t46 + 0x1);
        }
        t70 = 0x0;
    } else {
        t64 = 0x8C46EB4C;
        t65 = 0x0;
        for (;;) {
            if ((int)t65 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t67 = *(int *)((a4 + 0x2C));
            t68 = *(int *)(((((t65 << 2) << 1) + (a4 + 0x18)) + 0x0));
            *(unsigned int *)0x8C46EB4C = 0x0;
            *(int *)((int)stk + 4) = (t44 * ((t1 << 2) << 1));
            t64 = a4;
            t69 = mwlRnaStartCopy(t64, t65, t67, t68, (t44 * ((t1 << 2) << 1)));
            t65 = (t65 + 0x1);
            *(unsigned int *)0x8C46EB50 = 0x0;
            t64 = t69;
        }
        *(unsigned int *)((a4 + 0x3C)) = t64;
        t70 = t64;
    }
    return t70;
}
