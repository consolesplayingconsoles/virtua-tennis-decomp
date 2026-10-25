/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
int entryCountJoined(Stk2);
int entryGetColorId(int);
int entryIsVersus(void);
int standSort(int a4, int a5);

int standSort(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t38;
    int t53;
    int t64;
    int t83;
    int t84;
    int t85;
    int t86;
    int t94;
    int t98;
    int t99;
    int t100;
    int t24;
    int t79;
    int t75;
    int t102;
    int stk[13];

    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x8)) = *(struct mv2 *)(0x8C110724); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)(0x8C11072C); }
    if ((*(int *)0x8C287ADC) == 4) {
        t1 = entryCountJoined(*(Stk2 *)(0x8C11072C));
        if (t1 == 2) {
            t2 = entryIsVersus();
            if (t2 == 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((((t3 << 1) + 0x8C185298) + 0x0)))) != 0) {
                        t8 = t4;
                        t4 = (t4 + 0x4);
                        *(unsigned int *)((((int)stk + 4) + t8)) = (*(int *)((((t3 << 2) + 0x8C343724) + 0x0)));
                        *(unsigned int *)(((((int)stk + 4) + 0x8) + t8)) = t3;
                    }
                    t3 = (t3 + 0x1);
                    if ((int)t3 >= (int)0x4) {
                        break;
                    }
                }
            }
        }
    } else {
        t24 = 0x8C287ADC;
    }
    if ((int)(*(int *)((((int)stk + 4) + 0x0))) >= (int)(*(int *)((((int)stk + 4) + 0x4)))) {
        *(unsigned int *)((0x8C343724 + ((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2))) = (*(int *)(((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) + 0x8C343724) + 0x0)));
        t38 = 0x0;
        for (;;) {
            *(unsigned int *)((t38 + (((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343524))) = (*(int *)((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343524) + t38) + 0x0)));
            *(unsigned int *)((t38 + (((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343624))) = (*(int *)((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343624) + t38) + 0x0)));
            t38 = (t38 + 0x4);
            if ((unsigned int)t38 >= (unsigned int)0x20) {
                break;
            }
        }
        t79 = t38;
    } else {
        if ((int)(*(int *)((0x8C343724 + ((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2)))) > (int)(*(int *)((0x8C343724 + ((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2))))) {
            *(unsigned int *)((0x8C343724 + ((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2))) = (*(int *)(((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) + 0x8C343724) + 0x0)));
            t53 = 0x0;
            for (;;) {
                *(unsigned int *)((t53 + (((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343524))) = (*(int *)((((((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343524) + t53) + 0x0)));
                *(unsigned int *)((t53 + (((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343624))) = (*(int *)((((((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343624) + t53) + 0x0)));
                t53 = (t53 + 0x4);
                if ((unsigned int)t53 >= (unsigned int)0x20) {
                    break;
                }
            }
            t75 = t53;
        } else {
            *(unsigned int *)((0x8C343724 + ((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2))) = (*(int *)(((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) + 0x8C343724) + 0x0)));
            t64 = 0x0;
            for (;;) {
                *(unsigned int *)((t64 + (((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343524))) = (*(int *)((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343524) + t64) + 0x0)));
                *(unsigned int *)((t64 + (((((*(int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0))) << 2) << 2) << 1) + 0x8C343624))) = (*(int *)((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x0))) << 2) << 2) << 1) + 0x8C343624) + t64) + 0x0)));
                t64 = (t64 + 0x4);
                if ((unsigned int)t64 >= (unsigned int)0x20) {
                    break;
                }
            }
            t75 = t64;
        }
        t79 = t75;
    }
    if ((*(int *)0x8C287ADC) == 2) {
        t83 = t24;
        t84 = 0x0;
        t85 = t79;
        for (;;) {
            t86 = *(short *)0x8C343262;
            if (((unsigned short)t86 & (unsigned short)(*(short *)((((t84 << 1) + 0x8C185298) + 0x0)))) != 0) {
                t85 = t84;
                t85 = (t85 << 2);
                *(unsigned int *)0x8C3417E4 = t84;
                *(unsigned int *)0x8C3417D8 = (*(int *)(((0x8C3437C4 + t85) + 0x0)));
                t85 = (t85 + 0x8C3437C4);
                t83 = (*(int *)(((((*(int *)((t85 + 0x0))) * 0x38) + 0x8C343264) + 0x4)));
                *(unsigned int *)0x8C3417DC = t83;
            }
            t84 = (t84 + 0x1);
            if ((int)t84 >= (int)0x4) {
                break;
            }
        }
        t102 = (unsigned short)t86;
    } else {
        t94 = 0x0;
        for (;;) {
            if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((((t94 << 1) + 0x8C185298) + 0x0)))) != 0) {
                *(unsigned int *)0x8C3417E4 = t94;
            }
            t98 = *(int *)(((0x8C2889DC + (t94 * 0xD78)) + 0x0));
            *(unsigned int *)((((t94 * 0x38) + 0x8C343264) + 0x0)) = t98;
            *(unsigned int *)(((t94 << 2) + 0x8C3417E8)) = t98;
            t99 = entryGetColorId(t94);
            t100 = (t94 << 2);
            t94 = (t94 + 0x1);
            *(unsigned int *)(((0x8C3417F8 + t100) + 0x0)) = t99;
            if ((int)t94 >= (int)0x4) {
                break;
            }
        }
        t102 = t99;
    }
    return t102;
}
