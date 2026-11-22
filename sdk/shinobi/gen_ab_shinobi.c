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

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t42;
    int t36;
    int t5;
    int t30;
    int t7;
    int t8;
    int t10;
    int t11;
    int t13;
    int t31;
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x1);
    t42 = t0;
    if ((int)t0 >= 0) {
        t36 = 0xFFFFFF04;
        if ((unsigned int)t0 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t31 = (vmsfs_save_exec_file_verify(a4, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t5 = vmsfs_xcreate(a4, (*(int *)(((int)stk + 20))), a8, ((int)stk + 12));
                t30 = t5;
                if ((int)t5 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t7 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = ((*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0x8C20C77C))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t10 = 0x0;
                        t11 = t7;
                        for (;;) {
                            t13 = vmsfs_xwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t13 >= 0) {
                                t10 = (t10 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t10 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t13;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t30 = 0x0;
                }
                t31 = t30;
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}


int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int t1;
    int t14;
    int t3;
    int t4;
    int t5;
    int stk[47];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a5;
    R1004 = a6;
    memset((((int)stk + 4) + 0x8), 0x0, 0x98);
    t1 = *(int *)((a4 + 0x208));
    t14 = 0xFFFFFFFF;
    if ((*(int *)((a4 + 0x20C))) != t1) {
        t3 = t1;
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            if ((*(int *)((t5 + 0xC))) == 0) {
                break;
            }
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        *(unsigned int *)((t5 + 0x14)) = (*(int *)((a4 + 0x204)));
        *(unsigned int *)((t5 + 0x0)) = (R1004);
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        memmove((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        memmove((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + (R1004));
        *(unsigned int *)((t5 + 0x20)) = (R1008);
        t14 = t4;
    }
    return t14;
}


int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t41;
    int t34;
    int t6;
    int t27;
    int t8;
    int t20;
    int t13;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4));
    t41 = t1;
    if ((int)t1 >= 0) {
        t34 = 0xFFFFFF0B;
        if ((unsigned char)(*(signed char *)(((int)stk + 14))) == 1) {
            t6 = *(short *)(((int)stk + 12));
            t27 = 0xFFFFFF00;
            if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
                t8 = check_file_correct(a4, (*(int *)(((int)stk + 4))));
                t20 = t8;
                if ((int)t8 >= 0) {
                    t13 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)a8) {
                        t9 = 0x0;
                        t10 = a6;
                        t11 = a7;
                        for (;;) {
                            t12 = vmsfs_write_retry(a4, t11, t10);
                            if ((int)t12 < 0) {
                                break;
                            }
                            t9 = (t9 + 0x1);
                            t10 = (t10 + 0x200);
                            t11 = (t11 + 0x1);
                            if ((unsigned int)t9 >= (unsigned int)a8) {
                                return 0x0;
                            }
                        }
                        t13 = t12;
                    }
                    t20 = t13;
                }
                t27 = t20;
            }
            t34 = t27;
        }
        t41 = t34;
    }
    return t41;
}


