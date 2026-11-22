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


int nlLineCalcColor(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a6;
    for (;;) {
        t1 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(nlLineCalcFogA))(a4, a5, t0, a7, f4, f5, f6, f7, f8, f9, f10);
        t2 = ((int (*)(int))(nlLineCalcFogA))(a5);
        if ((t1 & t2) != 0) {
            break;
        }
        if ((t1 == 0) && (t2 == 0)) {
            return 0x1;
        }
        t3 = t2;
        if (t1 != 0) {
            t3 = t1;
        }
        if (t1 == 0) {
            t0 = a5;
        } else {
            t0 = a4;
        }
        if ((t3 & 0x1) != 0) {
            nlLineCalcFogB(a4, a5, t0, (*(float *)0x8C454C50));
        } else {
            if ((t3 & 0x2) != 0) {
                nlLineCalcFogB(a4, a5, t0, (*(float *)0x8C454C48));
            } else {
                if ((t3 & 0x4) != 0) {
                    nlLineCalcFogC(a4, a5, t0, (*(float *)0x8C454C54));
                } else {
                    if ((t3 & 0x8) != 0) {
                        nlLineCalcFogC(a4, a5, t0, (*(float *)0x8C454C4C));
                    }
                }
            }
        }
    }
    return 0x0;
}


int nlArcTan2(float f4, float f5)
{
    int t1;
    int t9;
    int t17;
    int t24;

    if (!(f4 > f5)) {
        if (!((-f4) > f5)) {
            if (f5 == 0.0f) {
                return 0x0;
            }
            return nlArcTan((f4 / f5));
        }
        t1 = 0xC000;
        if (f4 == 0.0f) {
        } else {
            t1 = (((-(nlArcTan((f5 / f4)))) + 0xC000) & 0xFFFF);
        }
        return t1;
    }
    if (!((-f4) > f5)) {
        t9 = 0x4000;
        if (f4 == 0.0f) {
        } else {
            t9 = (((-(nlArcTan((f5 / f4)))) + 0x4000) & 0xFFFF);
        }
        t24 = t9;
    } else {
        t17 = 0x8000;
        if (f5 == 0.0f) {
        } else {
            t17 = (((nlArcTan((f4 / f5))) + 0x8000) & 0xFFFF);
        }
        t24 = t17;
    }
    return t24;
}


