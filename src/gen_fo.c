/* Straight-line functions with calls and guards (batch gen_fo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);

int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t115;
    int t3;
    int t4;
    int t19;
    int t22;
    int t24;
    int t25;
    int t26;
    int t30;
    int t31;
    int t41;
    int t37;
    int t38;
    int t39;
    int t40;
    int t52;
    int t47;
    int t48;
    int t49;
    int t50;
    int t68;
    int t69;
    int t70;
    int t81;
    int t82;
    int t83;
    int t84;
    int t99;
    int t102;
    int t103;
    int t104;
    int t105;
    int t6;
    int t7;
    int t8;
    int t9;
    int t60;
    int stk[17];
    int R1008;
    int R1016;
    int R1020;
    int R1028;
    int R1032;

    R1008 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    *(unsigned char *)(((int)stk + 12)) = a5;
    R1032 = a6;
    t0 = *(int *)0x8C47317C;
    t115 = 0xFFFFFFFF;
    if ((*(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6))) != 0) {
    } else {
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = (*(signed char *)(((int)stk + 12)));
        R1016 = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0x8C20B018));
        *(unsigned char *)(((((int)stk + 8) + 0x10) + 0x0)) = t3;
        R1020 = (unsigned char)(0xC0 & t3);
        R1008 = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0x8C47317C;
        if (((int)(*(int *)((t4 + 0x10CC))) > 0) && ((t6 = *(int *)((t4 + 0xFD8)), (int)t6 > 0) && (t7 = *(int *)((t4 + 0xFCC)), t8 = *(int *)((t7 + 0x0)), t9 = R1008, t9 == (0x3 & (short)((unsigned int)t8 >> 16))))) {
            mpdrv_insertnop((*(int *)((t4 + 0x10CC))));
        }
        t19 = *(int *)0x8C47317C;
        *(unsigned int *)((t19 + 0xFCC)) = ((*(int *)((t19 + 0xFCC))) + ((*(int *)(((0xFD8 + t19) + 0x0))) << 2));
        t22 = R1008;
        t24 = *(int *)(((*(int *)0x8C47317C) + 0xFCC));
        R1028 = (unsigned char)(a7 + a9);
        *(unsigned int *)((t24 + 0x0)) = ((t22 << 16) | (unsigned char)(a7 + a9));
        t25 = *(int *)0x8C47317C;
        t26 = *(int *)(((0x10B4 + t25) + 0x0));
        *(unsigned int *)(((t24 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((a4 << 2) + ((t25 + 0xFE8) + (((((t26 << 1) + t26) << 2) << 2) << 1)))))));
        t30 = R1032;
        R1008 = (unsigned char)(*(signed char *)(((int)stk + 12)));
        t31 = *(signed char *)(((int)stk + 24));
        if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = (((((((R1008) << 16) << 8) & 0xFF000000) | (((unsigned char)t31 << 16) & 0xFF0000)) | (((R1020) << 8) & 0xFF00)) | (R1028));
            t41 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t37 = t30;
                t38 = 0x0;
                t39 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t40 = *(int *)((t37 + 0x0));
                    t37 = (t37 + 0x4);
                    t38 = (t38 + 0x1);
                    *(unsigned int *)((t39 + 0x0)) = t40;
                    t39 = (t39 + 0x4);
                    if ((int)t38 >= (int)a7) {
                        break;
                    }
                }
                t41 = t39;
            }
            t60 = t41;
        } else {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = ((((((R1020) << 16) & 0xFF0000) | (((unsigned char)t31 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (R1008));
            t52 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t47 = t30;
                t48 = 0x0;
                t49 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t50 = *(int *)((t47 + 0x0));
                    t47 = (t47 + 0x4);
                    t48 = (t48 + 0x1);
                    *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                    t49 = (t49 + 0x4);
                    if ((int)t48 >= (int)a7) {
                        break;
                    }
                }
                t52 = t49;
            }
            t60 = t52;
        }
        if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
            if ((int)a9 > 0) {
                t68 = a8;
                t69 = 0x0;
                t70 = t60;
                for (;;) {
                    t69 = (t69 + 0x1);
                    *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                    t70 = (t70 + 0x4);
                    t68 = (t68 + 0x4);
                    if ((int)t69 >= (int)a9) {
                        break;
                    }
                }
            }
        } else {
            if ((int)a9 > 0) {
                t81 = 0x0;
                t82 = a8;
                t83 = t60;
                for (;;) {
                    t84 = *(int *)((t82 + 0x0));
                    t82 = (t82 + 0x4);
                    t81 = (t81 + 0x1);
                    *(unsigned int *)((t83 + 0x0)) = t84;
                    t83 = (t83 + 0x4);
                    if ((int)t81 >= (int)a9) {
                        break;
                    }
                }
            }
        }
        *(unsigned int *)(((*(int *)0x8C47317C) + 0xFD8)) = (R1016);
        t99 = *(int *)0x8C47317C;
        *(unsigned int *)((t99 + 0xFDC)) = ((*(int *)((t99 + 0xFDC))) + ((R1016) << 2));
        t102 = *(int *)0x8C47317C;
        t103 = *(int *)0x8C47317C;
        t104 = *(int *)((t102 + 0xFE0));
        *(unsigned int *)((t102 + 0xFE0)) = (t104 + 0x1);
        *(unsigned int *)((((t103 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t104 + 0x1) - 1);
        t105 = *(int *)0x8C47317C;
        *(unsigned int *)((t105 + 0xFE0)) = ((*(int *)((t105 + 0xFE0))) & 0x7FFFFFFF);
        if ((*(int *)(((*(int *)0x8C47317C) + 0xFE0))) == 0) {
            *(unsigned int *)(((*(int *)0x8C47317C) + 0xFE0)) = 0x1;
        }
        t115 = (*(int *)(((((*(int *)0x8C47317C) + 0x28) + (a4 * 0x2C)) + 0x18)));
    }
    return t115;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t2;
    int t3;
    int t17;
    int t21;
    int t22;
    int t23;
    int t28;
    int t40;
    int t35;
    int t36;
    int t37;
    int t38;
    int t51;
    int t45;
    int t46;
    int t47;
    int t48;
    int t66;
    int t67;
    int t68;
    int t79;
    int t80;
    int t81;
    int t82;
    int t97;
    int t5;
    int t6;
    int t7;
    int t59;
    int stk[16];
    int R1008;
    int R1012;
    int R1016;
    int R1028;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1028 = *(int *)((int)stk + 28);

    R1008 = a4;
    *(unsigned char *)(((int)stk + 24)) = a5;
    R1012 = a6;
    R1016 = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((R1008) + 0x8C20B018)));
    t2 = *(signed char *)(((((int)stk + 8) + 0xC) + 0x0));
    t3 = *(int *)0x8C47317C;
    if (((int)(*(int *)((t3 + 0x10CC))) > 0) && ((t5 = *(int *)((t3 + 0xFD8)), (int)t5 > 0) && (t6 = *(int *)((t3 + 0xFCC)), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop((*(int *)((t3 + 0x10CC))));
    }
    t17 = *(int *)0x8C47317C;
    *(unsigned int *)((t17 + 0xFCC)) = ((*(int *)((t17 + 0xFCC))) + ((*(int *)(((0xFD8 + t17) + 0x0))) << 2));
    t21 = *(int *)(((*(int *)0x8C47317C) + 0xFCC));
    R1028 = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t22 = *(int *)0x8C47317C;
    t23 = *(int *)(((0x10B4 + t22) + 0x0));
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((R1008) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t28 = R1012;
    R1012 = (unsigned char)(*(signed char *)(((int)stk + 24)));
    R1008 = (unsigned char)(*(signed char *)(((int)stk + 20)));
    if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((R1012) << 16) << 8) & 0xFF000000) | (((R1008) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (R1028));
        t40 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t35 = t28;
            t36 = 0x0;
            t37 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t38 = *(int *)((t35 + 0x0));
                t35 = (t35 + 0x4);
                t36 = (t36 + 0x1);
                *(unsigned int *)((t37 + 0x0)) = t38;
                t37 = (t37 + 0x4);
                if ((int)t36 >= (int)a7) {
                    break;
                }
            }
            t40 = t37;
        }
        t59 = t40;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((R1008) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (R1012));
        t51 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t45 = t28;
            t46 = 0x0;
            t47 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t48 = *(int *)((t45 + 0x0));
                t45 = (t45 + 0x4);
                t46 = (t46 + 0x1);
                *(unsigned int *)((t47 + 0x0)) = ((((((t48 << 16) << 8) & 0xFF000000) | ((t48 << 8) & 0xFF0000)) | (((int)t48 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t48 >> 16) >> 8));
                t47 = (t47 + 0x4);
                if ((int)t46 >= (int)a7) {
                    break;
                }
            }
            t51 = t47;
        }
        t59 = t51;
    }
    if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
        if ((int)a9 > 0) {
            t66 = a8;
            t67 = 0x0;
            t68 = t59;
            for (;;) {
                t67 = (t67 + 0x1);
                *(unsigned int *)((t68 + 0x0)) = ((((((*(signed char *)((t66 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t66 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t66 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t66 + 0x3))));
                t68 = (t68 + 0x4);
                t66 = (t66 + 0x4);
                if ((int)t67 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t79 = 0x0;
            t80 = a8;
            t81 = t59;
            for (;;) {
                t82 = *(int *)((t80 + 0x0));
                t80 = (t80 + 0x4);
                t79 = (t79 + 0x1);
                *(unsigned int *)((t81 + 0x0)) = t82;
                t81 = (t81 + 0x4);
                if ((int)t79 >= (int)a9) {
                    break;
                }
            }
        }
    }
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFD8)) = (R1016);
    t97 = *(int *)0x8C47317C;
    *(unsigned int *)((t97 + 0xFDC)) = ((*(int *)((t97 + 0xFDC))) + ((R1016) << 2));
    return 0x0;
}
