/* Straight-line functions with calls and guards (batch gen_fv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int entryAssignSelecters(void);

int entryAssignSelecters(void)
{
    int stk[30];
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t65;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t24;
    register int t41;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t63;
    register int t72;
    register int t73;
    register int t78;
    register int t79;
    register int t80;
    register int t82;
    register int t83;
    register int t84;
    register int t85;
    register int t86;
    register int t87;
    register int t100;
    register int t101;
    register int t102;
    register int t103;
    register int t105;
    register int t117;
    register int t108;
    register int t113;
    register int t110;
    register int t16;
    register int t17;
    register int t38;
    register int t39;

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x44)) = *(struct mv4 *)(0x8C110E30); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x34)) = *(struct mv4 *)(0x8C110E40); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x24)) = *(struct mv4 *)(0x8C110E50); }
    *(unsigned int *)(((int)stk + 4)) = 0x8C343B0C;
    t0 = 0x8C343B0C;
    t1 = 0x8C185298;
    t2 = (((int)stk + 4) + 0x34);
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0xFFFFFFFF;
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t1 + 0x0)))) != 0) {
            *(unsigned int *)((t2 + 0x0)) = 0x1;
            *(unsigned int *)0x8C343D58 = ((*(int *)0x8C343D58) + 0x1);
        }
        t0 = (t0 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x2);
        if ((unsigned int)t0 >= (unsigned int)0x8C343B1C) {
            break;
        }
    }
    t10 = *(int *)0x8C287ADC;
    t65 = t10;
    if (t10 != 4) {
    } else {
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        t11 = (((int)stk + 4) + 0x24);
        t12 = 0x8C110E50;
        t13 = 0x0;
        for (;;) {
            t14 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 8)) = (t14 << 2);
            if (((*(int *)((0x8C343ADC + (t14 << 2)))) != 0) && (t11 = ((int)stk + 4), t11 = (t11 + 0x44), t16 = *(int *)((t11 + (t14 << 2))), t17 = *(int *)((0x8C343ADC + (t16 << 2))), t17 == 0)) {
                t24 = 0x0;
                for (;;) {
                    if ((*(int *)(((((int)stk + 4) + 0x34) + (t24 << 2)))) == 0) {
                        break;
                    }
                    t24 = (t24 + 0x1);
                }
                t11 = (*(int *)(((int)stk + 16)));
                t11 = (t11 + 0x8C185438);
                *(unsigned int *)(((int)stk + 8)) = t11;
                *(unsigned int *)((((*(int *)((t11 + 0x0))) << 2) + 0x8C343B0C)) = t24;
                *(unsigned int *)((0x8C185438 + ((*(int *)(((((int)stk + 4) + 0x44) + (*(int *)(((int)stk + 16)))))) << 2))) = t24;
                *(unsigned int *)(((int)stk + 20)) = (t24 << 2);
                *(unsigned int *)(((((int)stk + 4) + 0x34) + (t24 << 2))) = 0x1;
                t12 = (*(int *)0x8C343D58);
                t12 = (t12 + 0x1);
                *(unsigned int *)0x8C343D58 = t12;
                *(unsigned int *)(((((int)stk + 4) + 0x24) + ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2))) = t24;
                t12 = (*(int *)(((int)stk + 8)));
                t12 = (*(int *)((t12 + 0x0)));
                *(unsigned int *)(((((int)stk + 4) + 0x24) + (*(int *)(((int)stk + 20))))) = t12;
            } else {
                if (((*(int *)((0x8C343ADC + t13))) != 0) && (t38 = *(int *)(((((int)stk + 4) + 0x44) + t13)), t39 = *(int *)((((t38 << 2) + 0x8C343ADC) + 0x0)), t39 != 0)) {
                    t12 = (*(int *)(((int)stk + 4)));
                    t41 = *(int *)(((int)stk + 4));
                    t12 = (t12 + (((int)stk + 4) + 0x44));
                    t12 = (*(int *)((t12 + 0x0)));
                    t12 = (t12 << 2);
                    t12 = (t12 + 0x8C185438);
                    t11 = (*(int *)((t12 + 0x0)));
                    *(unsigned int *)(((((int)stk + 4) + 0x24) + ((*(int *)(((t41 + 0x8C185438) + 0x0))) << 2))) = t11;
                    t12 = (*(int *)(((t41 + 0x8C185438) + 0x0)));
                    t12 = (t12 << 2);
                    *(unsigned int *)((t12 + 0x8C343B0C)) = 0xFFFFFFFF;
                }
            }
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
            t12 = (*(int *)(((int)stk + 4)));
            t12 = (t12 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = t12;
            t11 = (*(int *)(((int)stk + 16)));
            t11 = (t11 + 0x4);
            *(unsigned int *)(((int)stk + 16)) = t11;
            t13 = (t13 + 0x4);
            if ((int)(*(int *)(((int)stk + 12))) < (int)0x4) continue;
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = 0x8C185448;
        t56 = 0x8C185448;
        t57 = 0x8C185438;
        t58 = 0x8C185438;
        t59 = 0x0;
        for (;;) {
            t60 = *(int *)((t58 + 0x0));
            t63 = t60;
            if (t60 == -1) {
                for (;;) {
                    t56 = (*(int *)(((((int)stk + 4) + 0x34) + (t59 << 2))));
                    if (t56 == 0) {
                        break;
                    }
                    t59 = (t59 + 0x1);
                }
                *(unsigned int *)((t57 + 0x0)) = t59;
                *(unsigned int *)(((((int)stk + 4) + 0x34) + (t59 << 2))) = 0x1;
                t63 = (t59 << 2);
            }
            t56 = (*(int *)(((int)stk + 4)));
            t58 = (t58 + 0x4);
            t57 = (t57 + 0x4);
            if ((unsigned int)t58 >= (unsigned int)t56) {
                break;
            }
        }
        t65 = t63;
    }
    t72 = t65;
    t73 = 0x0;
    for (;;) {
        if ((int)(*(int *)((((t73 << 2) + 0x8C185438) + 0x0))) >= 0) {
            t72 = (*(int *)((((t73 << 2) + 0x8C185438) + 0x0)));
            t72 = (t72 << 2);
            *(unsigned int *)((0x8C185448 + t72)) = t73;
        }
        t73 = (t73 + 0x1);
        if ((int)t73 >= (int)0x4) {
            break;
        }
    }
    t78 = 0x0;
    for (;;) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x14)) = *(struct mv4 *)(0x8C110E60); }
        t79 = *(int *)((0x8C185448 + (t78 << 2)));
        t80 = (t78 << 2);
        t78 = (t78 + 0x1);
        *(unsigned int *)(((t80 + 0x8C3437C4) + 0x0)) = (*(int *)(((((int)stk + 4) + 0x14) + (t79 << 2))));
        if ((int)t78 >= (int)0x4) {
            break;
        }
    }
    t82 = 0x0;
    for (;;) {
        t83 = *(int *)(((0x8C3437C4 + t82) + 0x0));
        t84 = t82;
        t85 = t82;
        t82 = (t82 + 0x4);
        t86 = *(int *)(((((int)stk + 4) + 0x24) + t84));
        *(unsigned int *)((((t83 * 0x38) + 0x8C343264) + 0x1C)) = t86;
        *(unsigned int *)(((t85 + 0x8C343F0C) + 0x0)) = t86;
        if ((unsigned int)t82 >= (unsigned int)0x10) {
            break;
        }
    }
    t87 = 0x0;
    for (;;) {
        if ((*(short *)((((t87 * 0x38) + 0x8C343264) + 0x14))) == 0) {
            *(unsigned int *)((((t87 * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
        }
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t87 << 1) + 0x8C185298)))) != 0) {
            *(unsigned int *)(((((*(int *)((((t87 << 2) + 0x8C3437C4) + 0x0))) * 0x38) + 0x8C343264) + 0x8)) = 0x0;
        } else {
            *(unsigned int *)(((((*(int *)((((t87 << 2) + 0x8C3437C4) + 0x0))) * 0x38) + 0x8C343264) + 0x8)) = 0x1;
        }
        *(unsigned int *)(((((*(int *)((((t87 << 2) + 0x8C3437C4) + 0x0))) * 0x38) + 0x8C343264) + 0x4)) = t87;
        t87 = (t87 + 0x1);
        if ((int)t87 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C185298;
    t100 = 0x8C3437C4;
    t101 = 0x8C185298;
    t102 = 0x0;
    t103 = 0x0;
    for (;;) {
        t105 = *(short *)0x8C343262;
        t117 = (unsigned short)t105;
        if (((unsigned short)t105 & (unsigned short)(*(short *)((t101 + 0x0)))) != 0) {
            t100 = 0x8C343258;
            t100 = (t100 + 0xC);
            t108 = (((*(int *)(((0x8C3437C4 + t102) + 0x0))) * 0x38) + t100);
            t100 = (*(int *)((0x8C343AEC + t102)));
            *(unsigned int *)((t108 + 0x2C)) = t100;
            t100 = (*(int *)(((0x8C343824 + t102) + 0x0)));
            t113 = t102;
            if (t100 != 0) {
                t100 = 0x56C;
                t100 = (t100 + 0x8C343258);
                t100 = (t100 + t103);
                t110 = *(int *)((t100 + 0x0));
                t100 = 0x8C343258;
                t100 = (t100 + 0xC);
                *(unsigned short *)((((t110 * 0x38) + t100) + 0x14)) = 0x0;
                t100 = (*(int *)(((0x8C3437C4 + t103) + 0x0)));
                t100 = (t100 * 0x38);
                t100 = (t100 + 0x8C343264);
                *(unsigned int *)((t100 + 0x2C)) = 0xFFFFFFFF;
                t100 = 0x5CC;
                t100 = (t100 + 0x8C343258);
                t100 = (t100 + t103);
                *(unsigned int *)((t100 + 0x0)) = 0x0;
                t113 = 0x0;
            }
            t117 = t113;
        }
        t101 = (t101 + 0x2);
        t103 = (t103 + 0x4);
        t102 = (t102 + 0x4);
        if ((unsigned int)t101 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    return t117;
}
