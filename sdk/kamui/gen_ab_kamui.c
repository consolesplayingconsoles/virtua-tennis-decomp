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


int kmGetCurrentScanline(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u10;
    float u15;
    int t20;
    int t21;
    int t26;
    int t29;
    int t23;
    int t25;
    int t5;
    int t18;
    float u19;
    int t13;

    t0 = kmiReadRegister(0x10C);
    t1 = *(int *)0x8C45EEA8;
    t2 = *(int *)0x8C45EEB8;
    t3 = *(int *)0x8C45EEA0;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t5 = *(int *)0x8C45EE2C, (t5 & 44) != 0) && (0x1 != 0))) {
        u10 = 0.5f;
        if (((*(int *)0x8C45EE2C) & 32) != 0) {
            u10 = 1.0f;
        }
        t18 = ((t2 + t1) + (t2 + t1));
        u19 = u10;
    } else {
        u15 = 1.0f;
        if (((((((*(int *)0x8C45EE2C) == 0)) ? 1 : 0) & 32) != 0) && ((t13 = *(int *)0x8C45EE2C, (t13 & 0x1) == 1) && (0x1 != 0))) {
            u15 = 0.5f;
        }
        t18 = (t2 + t1);
        u19 = u15;
    }
    t20 = *(int *)0x8C45EE74;
    t21 = *(int *)0x8C45EE2C;
    t26 = (t21 & 0x1);
    t29 = (0x3FF & t0);
    if ((t21 & 0x1) != 1) {
        t23 = *(int *)0x8C45EE2C;
        t25 = (0x3FF & t0);
        if (((t23 & 44) != 0) && ((0x1 != 0) && ((t0 & 0x40000) != 0))) {
            t25 = ((0x3FF & t0) + 0x1);
        }
        t26 = t23;
        t29 = t25;
    }
    if ((int)(int)((float)(t29 - t18) * u19) <= (int)t3) {
        *(unsigned int *)((a4 + 0x0)) = (int)((float)(t29 - t18) * u19);
    } else {
        *(unsigned int *)((a4 + 0x0)) = ((int)((float)(t29 - t18) * u19) - ((unsigned int)t20 >> 16));
    }
    return t26;
}


int kmiFLWCTRLRotateReadyQueue(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t14;
    int t32;
    int t5;
    int t31;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t2 = 0x0;
        t3 = t0;
        for (;;) {
            t4 = kmiFLWCTRLCheckFinishPacket(t3);
            if ((t4 != 0) && (t5 = *(int *)((t3 + 0x14)), (t5 & 0x1) == 0)) {
                t14 = *(int *)((t3 + 0x14));
                if (t14 != 2) {
                    if (t14 != 4) {
                        if (t14 != 6) {
                        } else {
                            if (((*(int *)0x8C4607C0) == 0) && (a4 != 0)) {
                                kmiFLWCTRLStartDisplayEntry(t3);
                            }
                        }
                    } else {
                        if ((((*(int *)((t3 + 0x38))) != 0) && (a4 != 1)) || (t31 = *(int *)0x8C4607B4, t31 != 0)) {
                        } else {
                            t32 = kmiFLWCTRLStartRenderEntry(t3);        /* manual: the entry, as the original passes it (mov r14,r4 before the bsr at 8C1FB1AC); the call without it read r4 as the host left it */
                            if (t32 == 0) {
                                t2 = 0x1;
                            }
                        }
                    }
                } else {
                    kmiFLWCTRLStartDMAEntry(t3);        /* manual: the entry in r4, as the original passes it (mov r14,r4 at 8C1FB192) */
                }
            }
            t3 = (*(int *)((t3 + 0x10)));
            if (t3 == 0) {
                break;
            }
        }
        kmiGuaranteeFFModeProcessOver(a4, t2);
        _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

