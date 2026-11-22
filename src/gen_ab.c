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


int entryAssignSlotIds(void)
{
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t0;
    int stk[10];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C11101C); }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0x8C287ADC;
        if ((int)t1 >= (int)t2) {
            break;
        }
        t0 = (t1 * 0x38);
        t0 = (t0 + 0x8C343264);
        t0 = (*(int *)((t0 + 0x4)));
        if (t0 != -1) {
            t0 = (t1 * 0x38);
            t0 = (t0 + 0x8C343264);
            t0 = (*(int *)((t0 + 0x4)));
            t0 = (t0 << 2);
            *(unsigned int *)((((int)stk + 4) + t0)) = 0x1;
        }
        t1 = (t1 + 0x1);
    }
    t7 = t0;
    t8 = ((int)stk + 4);
    t9 = t2;
    t10 = t1;
    t11 = 0x0;
    for (;;) {
        if ((int)t11 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t7 = 0x8C343258;
        t7 = (t7 + 0xC);
        t8 = (t11 * 0x38);
        t7 = (t7 + t8);
        t7 = (*(int *)((t7 + 0x4)));
        if (t7 == -1) {
            t10 = 0x0;
            for (;;) {
                t7 = 0x8C343258;
                t7 = (t7 + 0xC);
                t7 = (t7 + t8);
                t7 = (*(int *)((t7 + 0x4)));
                if (t7 != -1) {
                    break;
                }
                t7 = t10;
                t7 = (t7 << 2);
                t9 = (*(int *)((((int)stk + 4) + t7)));
                if (t9 == 0) {
                    t9 = 0x8C343258;
                    t9 = (t9 + 0xC);
                    t9 = (t9 + t8);
                    *(unsigned int *)((t9 + 0x4)) = t10;
                    *(unsigned int *)((((int)stk + 4) + t7)) = 0x1;
                }
                t10 = (t10 + 0x1);
            }
        }
        t11 = (t11 + 0x1);
    }
    return t7;
}


int motionChange(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t5;
    int t7;
    int t1;
    int t29;
    int t8;
    int t21;
    int t23;

    if (((*(int *)0x8C2873C0) == 0) && (t1 = *(int *)((a4 + 0x20)), t1 == (a5 + a8))) {
    } else {
        if ((*(int *)0x8C2873C4) != 0) {
            t5 = 0x8C2871D8;
            t7 = a4;
            for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((0x8C2871D8 + 480)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
        }
        if ((*(float *)((a4 + 0x4))) == 0.0f) {
            *(unsigned int *)((a4 + 0x1C)) = (*(int *)((a4 + 0x20)));
            *(float *)((a4 + 0x8)) = (*(float *)((a4 + 0xC)));
            *(float *)((a4 + 0x10)) = (*(float *)((a4 + 0x14)));
            *(unsigned int *)((a4 + 0x24)) = (*(int *)((a4 + 0x28)));
            *(unsigned int *)((a4 + 0x2C)) = (*(int *)((a4 + 0x30)));
            t21 = 0x50;
            t23 = (*(int *)((a4 + 0x54)));
        } else {
            *(unsigned int *)((a4 + 0x44)) = 0x1;
            t21 = 0x48;
            t23 = ((-(*(int *)((a4 + 0x48)))) + 0x1);
        }
        *(unsigned int *)((a4 + t21)) = t23;
        *(unsigned int *)((a4 + 0x54)) = a8;
        *(unsigned int *)((a4 + 0x20)) = (a5 + a8);
        *(float *)((a4 + 0xC)) = 0.0f;
        *(float *)((a4 + 0x14)) = f4;
        *(unsigned int *)((a4 + 0x28)) = a7;
        *(unsigned int *)((a4 + 0x30)) = (int)((float)(*(int *)(((a5 + a8) + 0x0))) / (*(float *)((((*(int *)((a4 + 0x20))) + 0xC) + 0x0))));
        *(float *)((a4 + 0x0)) = 0.0f;
        *(unsigned int *)((a4 + 0x18)) = 0x1;
        *(float *)((a4 + 0x4)) = (float)a6;
        *(unsigned int *)0x8C2873C4 = 0x1;
        t29 = 0x4;
    }
    return t29;
}

int sprRecPutRotated(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t26;
    int t29;
    int t18;
    int t19;
    int t20;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (-a7);
    if ((int)(*(int *)(((int)stk + 4))) > 0) {
        t1 = 0x0;
        t2 = a4;
        t3 = a6;
        for (;;) {
            if (t1 != 0) {
                nlPushUnitMatrix();
                nlTranslate((*(float *)(((((int)stk + 4) + 0x8) + 0x0))), (*(float *)(((((int)stk + 4) + 0x8) + 0x4))), (*(float *)(((((int)stk + 4) + 0x8) + 0x8))));
                nlPushMatrix(0x0);
                nlRotateAZ(a7);
                nlCalcPoint(t3, t3);
                nlPopMatrix(0x1);
                nlPopMatrix(0x1);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + t3)); }
                t18 = a5;
                t19 = a6;
                t20 = a7;
            }
            *(float *)((t2 + 0x4)) = (*(float *)((t3 + 0x0)));
            *(float *)((t2 + 0x8)) = (*(float *)((t3 + 0x4)));
            *(float *)((t2 + 0xC)) = (*(float *)((t3 + 0x8)));
            *(unsigned int *)((t2 + 0x28)) = (*(int *)(((int)stk + 8)));
            t26 = nlSprPut(t2, t18, t19, t20);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x50);
            t3 = (t3 + 0xC);
            if ((int)t1 >= (int)(*(int *)(((int)stk + 4)))) {
                break;
            }
        }
        t29 = t26;
    }
    return t29;
}


