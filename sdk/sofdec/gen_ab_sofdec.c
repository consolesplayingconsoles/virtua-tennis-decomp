/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int SJ_SplitChunk(int, int, int, int);
int _add(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _mvsto2b(int, int);
int check_file_correct(int, int);
int kmiFLWCTRLCheckFinishPacket(int);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLStartDMAEntry(int);
int kmiFLWCTRLStartDisplayEntry(int);
int kmiFLWCTRLStartRenderEntry(int);
int kmiGuaranteeFFModeProcessOver(int, int);
int kmiReadRegister(int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaStartCopy(int, int, int, int, int);
int mwlRnaWaitTransEnd(int, int, int, int);
int nlArcTan(float);
int nlCalcPoint(int, int);
extern int nlLineCalcFogA();
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAZ(int);
int nlSprPut(int, int, int, int);
int nlTranslate(float, float, float);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int setjmp(int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);
int entryAssignSlotIds(void);
int kmGetCurrentScanline(int a4);
int nlLineCalcColor(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int adxsjd_decode_prep(int a4);
int mwRnaSetTransSw(int a4, int a5, int a6, int a7);
int kmiFLWCTRLRotateReadyQueue(int a4);
int buFbrCreateFiber(int a4, int a5, int a6, int a7);
int motionChange(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int sprRecPutRotated(int a4, int a5, int a6, int a7);
int mwlRnaInsrtSlntDat(int a4);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int _mult(int a4, int a5, int a6);
int nlArcTan2(float f4, float f5);


int adxsjd_decode_prep(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t9;
    int t12;
    int t13;
    int t15;
    int t24;
    int t27;
    int t35;
    int t8;
    int t31;
    int stk[11];

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x4));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, 0x1000, (((int)stk + 4) + 0xC));
    t5 = *(int *)(((int)stk + 20));
    if ((int)t5 >= (int)0x10) {
        t7 = ADXB_DecodeHeader(t2, (*(int *)(((int)stk + 16))), t5);
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 20)), (int)t7 <= (int)t8)) {
            t9 = ADXB_GetFormat(t2);
            if (t9 == 4) {
                *(unsigned char *)((a4 + 0x3)) = 0x1;
            }
            t12 = ADXB_GetFormat(t2);
            if (t12 == 2) {
                t13 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 4)) = t13;
                t15 = 0x40;
                if ((int)t13 < (int)0x40) {
                    t15 = (*(int *)(((int)stk + 4)));
                }
                memmove((a4 + 0x58), (*(int *)(((int)stk + 16))), t15);
            }
            SJ_SplitChunk((((int)stk + 4) + 0xC), t7, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4));
            t24 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0xC));
            t27 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0x4));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t31 = 0x2;
        } else {
            t31 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
        }
        t35 = t31;
    } else {
        t35 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
    }
    return t35;
}

int mwRnaSetTransSw(int a4, int a5, int a6, int a7)
{
    int t3;
    int t16;
    int t23;
    int t36;
    int stk[7];


    (*(int *)((int)stk + 12)) = a5;
    if (a4 == 0) {
        t36 = (mwRnaErrCallFunc(0x8C20AC30));
    } else {
        *(unsigned int *)((a4 + 0x8C)) = 0x1;
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            mwlRnaWaitTransEnd(a4, a5, a6, a7);
            t3 = mwRnaGetTransSw(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        ovLockCs_8c200114(((int)stk + 8));
        *(unsigned int *)((a4 + 0x8C)) = 0x0;
        if (((*(int *)((int)stk + 12))) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                *(unsigned int *)((a4 + 0x50)) = (*(int *)((a4 + 0x2C)));
                *(unsigned int *)((a4 + 0x54)) = 0x0;
                *(unsigned int *)((a4 + 0x58)) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if (((*(int *)((int)stk + 12))) == 1) {
                t23 = mwRnaGetTransSw(a4);
                if (t23 != 1) {
                    *(unsigned int *)((a4 + 0x2C)) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                    *(unsigned int *)((a4 + 0x4C)) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned int *)((a4 + 0x50)) = (*(int *)((a4 + 0x2C)));
                    *(unsigned int *)((a4 + 0x54)) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                }
            }
        }
        t36 = (ovUnlockCs_8c20012c(((int)stk + 8)));
    }
    return t36;
}


int mwlRnaInsrtSlntDat(int a4)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t12;
    int t22;
    int t15;
    int t17;
    int t18;
    int t21;

    t0 = *(int *)((a4 + 0x28));
    t3 = *(int *)((a4 + 0x8));
    t4 = (int)((int)0x20 / (int)t3);
    t5 = (int)((int)((t0 - (*(int *)((a4 + 0x34)))) - (*(int *)((a4 + 0x54)))) / (int)((t4 << 2) << 1));
    t6 = *(int *)((a4 + 0x50));
    t7 = (t0 - t6);
    if ((int)(t5 * ((t4 << 2) << 1)) < (int)(t0 - t6)) {
        t7 = (t5 * ((t4 << 2) << 1));
    }
    t9 = (int)((int)0x800 / (int)t3);
    t10 = t7;
    if ((int)t7 >= (int)((t9 << 2) << 1)) {
        t10 = ((t9 << 2) << 1);
    }
    t12 = (int)((int)t10 / (int)((t4 << 2) << 1));
    t22 = 0x0;
    if ((int)(t12 * ((t4 << 2) << 1)) > 0) {
        t15 = 0x8C46DB0C;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t15 = 0x8C46E32C;
        }
        t17 = t15;
        t18 = 0x0;
        for (;;) {
            if ((int)t18 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t17 = a4;
            t21 = mwlRnaStartCopy(t17, t18, (*(int *)((a4 + 0x50))), ((t15 + 0x20) & 0xFFFFFFE0), (t12 * ((t4 << 2) << 1)));
            t18 = (t18 + 0x1);
            t17 = t21;
        }
        *(unsigned int *)((a4 + 0x58)) = t17;
        t22 = t17;
    }
    return t22;
}


