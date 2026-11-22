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


