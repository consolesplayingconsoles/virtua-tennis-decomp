/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupGetInfo(int);
extern void _builtin_prefetch(void *);
int kmQueryFinishLastTextureDMA(void);
int kmiFLWCTRLStartPass(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyEnableASyncCopy(int);
int kmyGenerateRegionArray(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyGetPassInfo(int, int, int);
int kmySeparatePassInfo(int, int, int, int, int, int);
int kmyiCheckNativeHandle(int);
int nlLocate(int, int);
int nlPrintColor(int);
int nlPrintf(int, ...);
int kmyCreateRegionArray(int a4);
int eepromDriveSelect(int a4);
int kmBeginPass(int a4);

int kmyCreateRegionArray(int a4)
{
    int t0;
    int t59;
    int t2;
    int t3;
    int t4;
    int t19;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t51;
    int t26;
    int t31;
    int t49;
    int t36;
    int t37;
    int t40;
    int t1;
    int stk[18];

    t0 = kmyiCheckNativeHandle(a4);
    t59 = 0xEEEE;
    if ((t0 != 0) && ((t1 = *(int *)((a4 + 0xC)), t1 != 0) && ((unsigned int)t1 <= (unsigned int)0x8))) {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)((a4 + 0x4));
        t4 = *(int *)((a4 + 0xC));
        *(unsigned int *)(((int)stk + 4)) = ((t3 * t2) << 2);
        t19 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
            t6 = 0x0;
            t7 = 0x0;
            for (;;) {
                t8 = *(int *)(((((t7 << 2) << 1) + (a4 + 0x48)) + 0x0));
                t9 = *(int *)((0x8C20ADBC + ((((unsigned int)((unsigned int)t8 >> 2) >> 2) & 0x3) << 2)));
                t10 = *(int *)((0x8C20ADBC + ((((unsigned int)t8 >> 8) & 0x3) << 2)));
                t11 = *(int *)((0x8C20ADBC + ((((unsigned int)((unsigned int)((unsigned int)t8 >> 8) >> 2) >> 2) & 0x3) << 2)));
                t12 = *(int *)((0x8C20ADBC + ((((unsigned int)t8 >> 16) & 0x3) << 2)));
                t13 = *(int *)((0x8C20ADBC + ((t8 & 0x3) << 2)));
                t14 = *(int *)(((int)stk + 4));
                t15 = t7;
                t7 = (t7 + 0x1);
                *(unsigned int *)(((((int)stk + 4) + 0x4) + (t15 << 2))) = (((((t9 + t10) + t11) + t12) + t13) * t14);
                t6 = (t6 + (((((t9 + t10) + t11) + t12) + t13) * t14));
                if ((unsigned int)t7 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                    break;
                }
            }
            t19 = t6;
        }
        t51 = 0xEEEE;
        if ((unsigned int)(t19 + ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) > (unsigned int)(*(int *)(((a4 + 0x18) + 0x4)))) {
        } else {
            t26 = *(int *)(((a4 + 0x18) + 0x4));
            *(unsigned int *)(((a4 + 0x18) + 0x10)) = ((((*(int *)(((a4 + 0x18) + 0xC))) - t19) - 256) & 0xFFFFFF80);
            *(unsigned int *)(((a4 + 0x18) + 0x18)) = ((((((unsigned int)((t26 - t19) - ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) >> 2) << 1) + ((unsigned int)((t26 - t19) - ((((((t3 * t2) * t4) << 1) + ((t3 * t2) * t4)) << 2) << 1)) >> 2)) + (*(int *)(((a4 + 0x18) + 0x0)))) & 0xFFFFFFE0);
            *(unsigned int *)(((a4 + 0x18) + 0x1C)) = (*(int *)(((a4 + 0x18) + 0x10)));
            *(unsigned int *)(((a4 + 0x18) + 0x14)) = (0xFFFFFF00 + (*(int *)(((a4 + 0x18) + 0x18))));
            t31 = *(int *)((a4 + 0x88));
            *(unsigned int *)((t31 + 0x8)) = (((*(int *)((t31 + 0x8))) & 0xFF000000) | (((*(int *)(((a4 + 0x18) + 0x24))) - (*(int *)(((a4 + 0x18) + 0x8)))) << 1));
            t49 = 0x0;
            if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
                t36 = 0x0;
                t37 = 0x0;
                for (;;) {
                    *(unsigned int *)(((((t36 << 2) << 1) + ((a4 + 0x18) + 0x30)) + 0x4)) = ((*(int *)(((a4 + 0x18) + 0x10))) + t37);
                    t40 = (t36 << 2);
                    t36 = (t36 + 0x1);
                    t37 = (t37 + (*(int *)(((((int)stk + 4) + 0x4) + t40))));
                    if ((unsigned int)t36 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                        break;
                    }
                }
                t49 = t37;
            }
            kmyGenerateRegionArray(a4, (a4 + 0x18), a4, t49, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t51 = 0x0;
        }
        t59 = t51;
    }
    return t59;
}

int eepromDriveSelect(int a4)
{
    int t4;
    int t13;
    int t24;
    int t29;
    int t42;
    int t48;
    int t51;
    int t54;
    int t58;
    int t60;
    int stk[33];

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
    int T_;
    R4 = a4;
    L_8C0DF69A:;
    *(unsigned int *)(((int)stk + 20)) = R4;
    { struct mvb40 { char b[40]; }; *(struct mvb40 *)((((int)stk + 20) + 0x28)) = *(struct mvb40 *)(0x8C126AFA); }
    R11 = ((((int)stk + 20) + 0x8));
    R12 = (0x63);
    R4 = ((((int)stk + 20) + 0x8));
    R5 = (((((int)stk + 20) + 0x8) + 0x20));
    goto L_8C0DF6C6;
    L_8C0DF6C6:;
    *(unsigned int *)((R4 + 0x0)) = R12;
    t4 = (unsigned int)(R4 + 0x4) < (unsigned int)R5;
    R4 = ((R4 + 0x4));
    if (t4) goto L_8C0DF6C6;
    goto L_8C0DF6CE;
    L_8C0DF6CE:;
    nlLocate(0x5, 0xA);
    R10 = (0x0);
    R13 = (0x0);
    R14 = (0x8C1D78AC);
    R8 = (R12);
    R9 = (0x8C0EDD30);
    goto L_8C0DF6E0;
    L_8C0DF6E0:;
    t13 = BupGetInfo((*(int *)(((R13 << 2) + 0x8C1D7884))));
    R4 = (t13);
    if (((*(short *)((t13 + 0x0))) == 0)) goto L_8C0DF748;
    goto L_8C0DF6F2;
    L_8C0DF6F2:;
    *(unsigned int *)(((int)stk + 24)) = (R4 + 0x14);
    nlPrintColor(0xFFFFFFFF);
    nlPrintf(0x8C126B24, (((R13 << 2) + R13) + (((int)stk + 16) + 0x2C)), (unsigned short)(*(short *)(((*(int *)(((int)stk + 24))) + 0x26))));
    nlPrintf(0x8C126B38);
    *(unsigned int *)((R11 + (R13 << 2))) = R13;
    if ((R8 != 99)) goto L_8C0DF734;
    goto L_8C0DF732;
    L_8C0DF732:;
    R8 = (R10);
    goto L_8C0DF734;
    L_8C0DF734:;
    t24 = *(int *)((R14 + 0x0));
    R0 = (t24);
    if ((t24 != 99)) goto L_8C0DF73C;
    goto L_8C0DF73A;
    L_8C0DF73A:;
    *(unsigned int *)((R14 + 0x0)) = R13;
    goto L_8C0DF73C;
    L_8C0DF73C:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_8C0DF772;
    goto L_8C0DF742;
    L_8C0DF742:;
    *(unsigned int *)0x8C40C628 = R13;
    goto L_8C0DF804;
    L_8C0DF804:;
    return R0;
    L_8C0DF772:;
    t29 = (int)(R13 + 0x1) < (int)0x8;
    R13 = ((R13 + 0x1));
    if (t29) goto L_8C0DF6E0;
    goto L_8C0DF77A;
    L_8C0DF77A:;
    nlPrintColor(0xFFFFFFFF);
    R0 = (R8);
    if ((R8 == 99)) goto L_8C0DF7FE;
    goto L_8C0DF786;
    L_8C0DF786:;
    nlLocate(0x1, (((*(int *)((R14 + 0x0))) << 1) + 0xA));
    nlPrintf(0x8C126B44);
    R4 = (0x7);
    R5 = (0x8C29B898);
    if ((((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 16) == 0)) goto L_8C0DF7CE;
    goto L_8C0DF7A6;
    L_8C0DF7A6:;
    t42 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t42 - 1);
    if (((int)(t42 - 1) >= 0)) goto L_8C0DF7C4;
    goto L_8C0DF7B2;
    L_8C0DF7B2:;
    *(unsigned int *)((R14 + 0x0)) = R4;
    goto L_8C0DF7C4;
    L_8C0DF7C4:;
    if (((*(int *)((R11 + ((*(int *)((R14 + 0x0))) << 2)))) == 99)) goto L_8C0DF7B6;
    goto L_8C0DF7CE;
    L_8C0DF7CE:;
    t48 = *(int *)(((*(int *)((R5 + 0x0))) + 0x10));
    R0 = (t48);
    if (((t48 & 32) == 0)) goto L_8C0DF7FE;
    goto L_8C0DF7D6;
    L_8C0DF7D6:;
    t51 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t51 + 0x1);
    if (((int)(t51 + 0x1) <= (int)R4)) goto L_8C0DF7F4;
    goto L_8C0DF7E2;
    L_8C0DF7E2:;
    *(unsigned int *)((R14 + 0x0)) = R10;
    goto L_8C0DF7F4;
    L_8C0DF7F4:;
    t54 = *(int *)((R11 + ((*(int *)((R14 + 0x0))) << 2)));
    R0 = (t54);
    if ((t54 == 99)) goto L_8C0DF7E6;
    goto L_8C0DF7FE;
    L_8C0DF7FE:;
    *(unsigned int *)0x8C40C628 = (*(int *)((R14 + 0x0)));
    goto L_8C0DF804;
    L_8C0DF7E6:;
    t58 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t58 + 0x1);
    if (((int)(t58 + 0x1) <= (int)R4)) goto L_8C0DF7F4;
    goto L_8C0DF7F2;
    L_8C0DF7F2:;
    *(unsigned int *)((R14 + 0x0)) = R10;
    goto L_8C0DF7F4;
    L_8C0DF7B6:;
    t60 = *(int *)((R14 + 0x0));
    *(unsigned int *)((R14 + 0x0)) = (t60 - 1);
    if (((int)(t60 - 1) >= 0)) goto L_8C0DF7C4;
    goto L_8C0DF7C2;
    L_8C0DF7C2:;
    *(unsigned int *)((R14 + 0x0)) = R4;
    goto L_8C0DF7C4;
    L_8C0DF748:;
    if (((*(int *)((R14 + 0x0))) != R13)) goto L_8C0DF752;
    goto L_8C0DF74E;
    L_8C0DF74E:;
    *(unsigned int *)((R14 + 0x0)) = R12;
    R8 = (R12);
    goto L_8C0DF752;
    L_8C0DF752:;
    nlPrintColor(0xFF808080);
    nlPrintf(0x8C126B3C, (((R13 << 2) + R13) + (((int)stk + 20) + 0x28)));
    goto L_8C0DF772;
}

