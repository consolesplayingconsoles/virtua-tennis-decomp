/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern void _builtin_prefetch(void *);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int colliObjInit(int, int, int, int, int, float);
int hudScoreIconPut(int, Stk3, float);
int kmiFLWCTRLCheckVBufOverflow(int, int, int, int);
int kmyGetDMAHANDLE(int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetTADMA(int, int, int, int, int);
int motionAdvanceSimple(int);
int motionSet(int, int, int, int, int, int, float);
int phrasePut(int, int, int, int, Stk3, int, float, float);
int sprPutAtAlpha(int, Stk3, float);
int sprPutScaledAlpha(int, int, int, int, Stk3, int, float, float);
Stk3 vecMake(float, float, float);
int kmiFLWCTRLFinalizePass(int a4);
int ballBoyInit(void);
int hudPlayerPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);

int kmiFLWCTRLFinalizePass(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t8;
    int t12;
    int t13;
    int t17;
    int t20;
    int t77;
    int t31;
    int t33;
    int t34;
    int t37;
    int t39;
    int t41;
    int t43;
    int t45;
    int t51;
    int t54;
    int t80;
    int t27;
    int t72;
    int t67;
    int stk[14];

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((t0 + 0x10));
    t3 = *(int *)(((*(int *)((a4 + 0x18))) + 0xC));
    t4 = *(int *)0x8C4607B0;
    *(unsigned int *)(((int)stk + 12)) = (t2 << 2);
    *(unsigned int *)((((t2 << 2) + (0x184 + t4)) + 0x0)) = 0x0;
    t8 = 0x0;
    if ((*(int *)0x8C460784) == 0) {
    } else {
        *(unsigned int *)0x8C45F8F8 = (*(int *)0xFFD8000C);
        t8 = t3;
    }
    *(unsigned int *)(((int)stk + 20)) = 0x5;
    t12 = t0;
    t13 = t8;
    for (;;) {
        *(int *)((int)stk + 8) = (((0xE4 + t4) + (((t2 << 2) + t2) << 2)) + (t13 << 2));
        t17 = *(int *)(((t13 << 2) + (*(int *)((a4 + 0x0)))));
        t20 = *(int *)(((t13 << 2) + ((*(int *)((((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) << 2) + (*(int *)((a4 + 0xC)))))) + (((t2 << 2) + t2) << 2))));
        *(unsigned int *)(((((t4 + 0x44) + (((t2 << 2) + t2) << 2)) + (t13 << 2)) + 0x0)) = t20;
        *(unsigned int *)(((((0xE4 + t4) + (((t2 << 2) + t2) << 2)) + (t13 << 2)) + 0x0)) = (t17 - t20);
        if (((*(int *)0x8C460784) != 0) && (t13 == t3)) {
            t27 = t12;
        } else {
            t12 = a4;
            kmiFLWCTRLCheckVBufOverflow(t12, t4, t2, t13);
        }
        t12 = t27;
        t77 = t12;
        if ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) != 0) {
            if ((*(int *)0x8C460784) == 0) {
                t31 = *(int *)((a4 + 0x0));
                t12 = (*(int *)(((t13 << 2) + t31)));
                t33 = *(int *)(((t13 << 2) + t31));
                t12 = (t12 & 0x3FFFFFF);
                t12 = (t12 | 0xE0000000);
                *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t33 >> 16) >> 8);
                *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t33 >> 16) >> 8);
                *(unsigned int *)((t12 + 0x0)) = 0x0;
                _builtin_prefetch((void *)t12);
                t34 = *(int *)((a4 + 0x0));
                *(unsigned int *)(((t13 << 2) + t34)) = ((*(int *)(((t13 << 2) + t34))) + 0x20);
                *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) + 0x20);
                t37 = *(int *)(((int)stk + 12));
                *(unsigned int *)((((0x184 + t4) + t37) + 0x0)) = ((*(int *)((((0x184 + t4) + t37) + 0x0))) | (((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31))));
                t72 = t12;
            } else {
                if (t13 != t3) {
                    t39 = *(int *)((a4 + 0x0));
                    t12 = (*(int *)(((t13 << 2) + t39)));
                    t41 = *(int *)(((t13 << 2) + t39));
                    t12 = (t12 & 0x3FFFFFF);
                    t12 = (t12 | 0xE0000000);
                    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t41 >> 16) >> 8);
                    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t41 >> 16) >> 8);
                    *(unsigned int *)((t12 + 0x0)) = 0x0;
                    _builtin_prefetch((void *)t12);
                    *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) + 0x20);
                    t43 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((0x184 + t4) + t43) + 0x0)) = ((*(int *)((((0x184 + t4) + t43) + 0x0))) | (((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31))));
                } else {
                    t45 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((0x184 + t4) + t45) + 0x0)) = ((*(int *)((((0x184 + t4) + t45) + 0x0))) | (((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31))));
                    *(unsigned int *)(((t13 << 2) + ((t4 + 0x44) + (((t2 << 2) + t2) << 2)))) = 0x8C206960;
                    *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = 0x20;
                }
                t51 = *(int *)((a4 + 0x0));
                *(unsigned int *)(((t13 << 2) + t51)) = ((*(int *)(((t13 << 2) + t51))) + 0x20);
                if (t2 != ((*(int *)0x8C4607D0) - 1)) {
                    for (;;) {
                        t12 = 0x0;
                        t54 = kmyGetDMAHANDLE(t12);
                        *(unsigned int *)(((int)stk + 16)) = t54;
                        if (t54 != 0) {
                            break;
                        }
                        t12 = 0x7;
                        kmyRequestCallback(t12);
                    }
                    *(int *)((int)stk + 8) = (((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31)));
                    *(int *)((int)stk + 4) = 0x0;
                    t12 = (*(int *)(((int)stk + 16)));
                    kmySetTADMA(t12, (*(int *)((t4 + 0x3C))), (*(int *)(((t13 << 2) + ((t4 + 0x44) + (((t2 << 2) + t2) << 2))))), (*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))), 0x0);
                    t12 = (*(int *)(((int)stk + 16)));
                    *(unsigned int *)0x8C4607D8 = (kmyRequestDMA(t12));
                } else {
                    t67 = t12;
                }
                t72 = t67;
            }
            t77 = t72;
        }
        t12 = t77;
        t13 = (t13 + 0x1);
        if ((unsigned int)t13 >= (unsigned int)0x5) {
            t13 = 0x0;
        }
        t80 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t80 - 1);
        if ((t80 - 1) != 0) continue;
        break;
    }
    return 0x0;
}

int ballBoyInit(void)
{
    int t0;
    int t32;
    int t3;
    int t4;
    int t7;
    int t11;
    int t25;
    int t26;
    int t31;
    int t45;
    int stk[18];

    *(unsigned int *)0x8C38B76C = 0x1488;
    *(unsigned int *)0x8C38B770 = 0x600;
    *(unsigned int *)0x8C38B774 = 0x2CD0;
    *(unsigned int *)0x8C38B778 = 0x204C;
    *(unsigned int *)0x8C38B77C = 0x1104;
    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t32 = (t0 << 2);
        if ((*(int *)((0x8C1D03F0 + (t0 << 2)))) != 0) {
            *(unsigned int *)(((int)stk + 20)) = 0x8C37F77C;
            *(unsigned int *)(((int)stk + 24)) = 0x8C2873D4;
            *(unsigned int *)(((int)stk + 28)) = 0x8C38B76C;
            t3 = 0x8C37EA84;
            t4 = 0x8C37EA84;
            for (;;) {
                t7 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
                *(int *)((int)stk + 16) = t7;
                t11 = (*(int *)(((*(int *)((0x8C1D03F0 + ((*(int *)0x8C1891E8) << 2)))) + 0x0)));
                *(int *)((int)stk + 12) = t11;
                motionSet((t4 + 0x4), (*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), 0x0, 0x2F3C0, t11, t7, 1.0f);
                *(unsigned int *)((t4 + 0x5DC)) = 0x0;
                *(float *)((t4 + 0x5FC)) = 0.0f;
                *(float *)(((0x5E4 + t4) + 0x10)) = (*(float *)(((0x5E4 + t4) + 0x4)));
                if ((*(int *)0x8C287C60) == 0) {
                    motionAdvanceSimple((t3 + 0x4));
                }
                t4 = (t4 + 0x67C);
                t3 = (t3 + 0x67C);
                if ((unsigned int)t4 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                    break;
                }
            }
            t25 = *(int *)0x8C38B780;
            *(int *)((int)stk + 16) = 0x8C37F028;
            *(Stk3 *)(0x8C37F028) = vecMake((float)t25, 0.75f, 10.0f);
            t26 = *(int *)0x8C38B780;
            *(int *)((int)stk + 12) = 0x8C37F6A4;
            *(Stk3 *)(0x8C37F6A4) = vecMake((float)(-t26), 0.75f, -10.0f);
            *(unsigned short *)0x8C37F040 = 0xFFFFC000;
            *(unsigned short *)0x8C37F6BC = 0x4000;
            ballBoyReset(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16));
            *(int *)((int)stk + 8) = 0x8C37F088;
            colliObjInit(0x8C37F028, 0x0, 0x0, 0x0, 0x8C37F088, 5.0f);
            *(unsigned int *)0x8C37F0C0 = ((*(int *)0x8C37F0C0) | 0x2);
            *(int *)((int)stk + 4) = 0x8C37F704;
            colliObjInit(0x8C37F6A4, 0x0, 0x0, 0x0, 0x8C37F704, 5.0f);
            t31 = *(int *)0x8C37F73C;
            *(unsigned int *)0x8C37F73C = (t31 | 0x2);
            t32 = (t31 | 0x2);
        }
        t45 = t32;
    }
    return t45;
}

int hudPlayerPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    float u10;
    int stk[41];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    *(unsigned int *)(((int)stk + 68)) = a4;
    *(unsigned int *)(((int)stk + 72)) = a5;
    *(float *)(((int)stk + 64)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 64) + 0x18)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    *(float *)(((((int)stk + 64) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x0))) + 109.0f);
    *(float *)(((((int)stk + 64) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x4))) - 8.0f);
    *(float *)(((((int)stk + 64) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x18)); }
    phrasePut((*(int *)(((int)stk + 72))), a5, a6, a7, *(Stk3 *)(((int)stk + 52)), *(int *)((int)stk + 52 + 12), (f5 * 1.0f), f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 52) + 0x18)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    *(float *)(((((int)stk + 52) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x0))) + 9.0f);
    *(float *)(((((int)stk + 52) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x4))) - 5.0f);
    *(float *)(((((int)stk + 52) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    hudScoreIconPut((*(int *)(((int)stk + 68))), *(Stk3 *)(((int)stk + 40)), f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    u10 = *(float *)(((int)stk + 64));
    sprPutAtAlpha(0x8C33A360, *(Stk3 *)(((int)stk + 28)), (u10 * f5));
    *(float *)(((((int)stk + 64) + 0x38) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x38) + 0x0))) + 85.0f);
    *(float *)0x8C33A3C0 = (((*(float *)0x8C33A3D0) - (*(float *)0x8C33A3C8)) * 160.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    sprPutAtAlpha(0x8C33A3B0, *(Stk3 *)(((int)stk + 16)), (u10 * f5));
    *(float *)(((((int)stk + 64) + 0x38) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x38) + 0x0))) + 85.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    return (sprPutAtAlpha(0x8C33A400, *(Stk3 *)(((int)stk + 4)), (u10 * f5)));
}

int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t6;
    int t4;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    t6 = 0x8C1AED70;
    if ((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) {
        *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C0901A4));
        *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 78.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t4 = *(int *)(((int)stk + 16));
        t6 = (sprPutScaledAlpha((((((t4 << 2) + t4) << 2) << 2) + 0x8C37C2BC), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), f4, f5));
    }
    return t6;
}

int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t3;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C0901A4));
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 78.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    t3 = *(int *)(((int)stk + 16));
    return (sprPutScaledAlpha((((((t3 << 2) + t3) << 2) << 2) + 0x8C37CF10), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), f4, f5));
}
