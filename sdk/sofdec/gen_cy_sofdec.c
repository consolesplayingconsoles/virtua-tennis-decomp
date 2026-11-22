/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSTM_Tell(int);
int Qreset(void);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxstm_sj_internal_error(void);
int buIsFormat(int);
int circuitNumDraw(int, int, int, float, float, float);
int direntry(int, int);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int get_fat(int, int, int, int);
int get_vmstime(int, int);
int kdGetDevice(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdSetBlockRead(int, ...);
int kmiLaunchQ(int);
int kmiWriteRegister(int, int);
int kmyMemCopy(int, int, int);
int kmytex_FBAllocEntry(void);
int msgEventStart(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaSetTransSw(int, int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaClearBuf(void);
int mwlRnaInsrtSlntDat(int);
int mwlRnaIsCopyEnd(int);
int mwlRnaStartTrans(int);
int nlObjPutSetFadeColor(float, float, float);
int nlsndSeqRequest(int);
int search_fat_dir(int, int);
int set_fat(int, int, int);
int set_file_info(int, int, int, int);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stripQuadDrawA(float, float, float, float);
int vmsfb_sleep(void);
int vmsfs_memcpyl(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int adxstmf_stat_exec(int a4, int a5);
int miniTimerDraw(void);
int kmyInitAllocator(int a4, int a5, int a6, int a7, int a8);
int kmyUpdatePalette(void);
int kmyQueryFinishDMA(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);
int kmiStartupDMA(int a4, int a5, int a6);
int mwlRnaExecSvrHndl(int a4);
void mwRnaSetStmHdInfo(int a4, int a5, int a6);
int motFileLoadStep(int a4, int a5, int a6, int a7);
int vmsio_block_read(int a4, int a5, int a6);
int write_dir_all(int a4, int a5, int a6, int a7);

int adxstmf_stat_exec(int a4, int a5)
{
    register int t1;
    register int t3;
    register int t4;
    register int t8;
    register int t11;
    register int t12;
    register int t17;
    register int t21;
    register int t22;
    register int t24;
    register int t46;
    register int t96;
    register int t51;
    register int t84;
    register int t56;
    register int t57;
    register int t58;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t67;
    register int t71;
    register int t14;
    register int t48;
    register int t91;
    register int t81;
    register int t75;
    int stk[11];

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = gdFsGetStat((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x4));
            t8 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 8) + 0xC));
            t11 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 8) + 0x4));
            t12 = ADXSTM_Tell(a4);
            if ((t12 == (*(int *)((a4 + 0x30)))) && (t14 = *(int *)((a4 + 0x38)), t14 != 0)) {
                t17 = ((int (*)(int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t21 = ADXSTM_Tell(a4);
            t22 = *(int *)((a4 + 0x14));
            t24 = (t22 + 0x7FF);
            if ((int)(t22 + 0x7FF) < 0) {
                t24 = ((t22 + 0x7FF) + 0x7FF);
            }
            if ((int)t21 >= (int)((int)t24 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                ADXERR_CallErrFunc(0x8C20AADC);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t46 = *(signed char *)((a4 + 0x2));
    t96 = t46;
    if (t46 == 0) {
        if ((t1 != 0) && (t48 = *(int *)((t1 + 0x0)), t48 != 0)) {
            t51 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1);
            t84 = t51;
            if ((int)t51 < (int)(*(int *)((a4 + 0x1C)))) {
                t56 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24));
                t57 = *(int *)((a4 + 0x28));
                t58 = t57;
                if ((int)t57 < 0) {
                    t58 = (t57 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x30)));
                t62 = ADXSTM_Tell(a4);
                t63 = *(int *)(((int)stk + 8));
                t64 = *(int *)((a4 + 0x2C));
                t65 = (t63 - t62);
                if ((int)((int)t58 >> 11) < (int)(t63 - t62)) {
                    t65 = ((int)t58 >> 11);
                }
                t67 = t64;
                if ((int)t65 < (int)t64) {
                    t67 = t65;
                }
                if (t67 != 0) {
                    t71 = gdFsReqRd32((*(int *)((a4 + 0x8))), t67, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t71;
                    if ((int)t71 <= 0) {
                        t75 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t75 = 0x1;
                    }
                    t81 = t75;
                } else {
                    t81 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24)));
                }
                t84 = t81;
            }
            t91 = t84;
        } else {
            t91 = (adxstm_sj_internal_error());
        }
        t96 = t91;
    }
    return t96;
}


int mwlRnaExecSvrHndl(int a4)
{
    int t0;
    int t1;
    int t3;
    int t14;
    int t17;
    int t25;
    int t29;
    int t32;
    int t37;
    int t43;
    int t52;
    int t74;
    int t2;
    int t13;
    int t38;
    int t39;
    int t67;
    int t68;
    int t69;
    int t75;

    t0 = *(int *)((a4 + 0x8C));
    if (t0 == 1) {
        return t0;
    }
    t1 = mwRnaGetTransSw(a4);
    if ((t1 == 1) && (t2 = *(signed char *)((a4 + 0x5)), (unsigned char)t2 == 1)) {
        t3 = mwlRnaIsCopyEnd(a4);
        if (t3 == 1) {
            mwlRnaAddWrPos(a4);
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            *(unsigned int *)0x8C20C8BC = 0x0;
        } else {
            *(unsigned int *)0x8C20C8BC = ((*(int *)0x8C20C8BC) + 0x1);
        }
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x6))) == 1) && (t13 = *(signed char *)((a4 + 0x5)), t13 == 0)) {
        t14 = *(int *)((a4 + 0x10));
        t17 = ((int (*)(int, int))((*(int *)(((*(int *)((t14 + 0x0))) + 0x24)))))(t14, 0x1);
        if ((int)t17 < (int)0x20) {
            mwRnaSetTransSw(a4, 0x0);
            *(unsigned char *)((a4 + 0x6)) = 0x0;
        }
    }
    t25 = mwRnaGetPlaySw(a4);
    if (t25 == 1) {
        mwlRnaAddRdPos(a4);
    }
    t29 = mwRnaGetTransSw(a4);
    if (t29 == 1) {
        if ((*(signed char *)((a4 + 0x5))) == 0) {
            t32 = mwlRnaStartTrans(a4);
            if ((int)t32 <= 0) {
            } else {
                *(unsigned char *)((a4 + 0x5)) = 0x1;
            }
        }
    } else {
        t37 = mwRnaGetPlaySw(a4);
        if ((t37 == 1) && (t38 = *(int *)((a4 + 0x28)), t39 = *(int *)((a4 + 0x54)), (int)t39 < (int)t38)) {
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                t43 = mwlRnaIsCopyEnd(a4);
                if (t43 == 1) {
                    mwlRnaAddFlshPos(a4);
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                }
            }
            if ((*(signed char *)((a4 + 0x5))) == 0) {
                t52 = mwlRnaInsrtSlntDat(a4);
                if ((int)t52 > 0) {
                    *(unsigned char *)((a4 + 0x5)) = 0x1;
                }
            }
        }
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x1))) == 5) && ((t67 = *(int *)((a4 + 0x34)), t68 = *(int *)((a4 + 0x40)), (int)t67 >= (int)t68) && (t69 = *(signed char *)((a4 + 0x7)), t69 == 0))) {
        mwRnaSetPlaySw(a4, 0x1);
        *(unsigned int *)((a4 + 0x40)) = 0x7FFFFFFF;
    }
    t74 = *(signed char *)((a4 + 0x1));
    if (((unsigned char)t74 == 6) && (t75 = *(int *)((a4 + 0x34)), t75 == 0)) {
        mwRnaSetPlaySw(a4, 0x0);
        return mwlRnaClearBuf();
    }
    return (unsigned char)t74;
}

void mwRnaSetStmHdInfo(int a4, int a5, int a6)
{
    int t1;
    int t5;
    int t6;
    int t10;
    int t13;
    int t17;
    int t21;
    int t25;
    int t29;
    int t33;
    int t36;
    int t37;
    int t40;
    int stk[18];

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
    } else {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 12)) = t1;
        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x44)))))(t1, 0x4, (*(int *)(((int)stk + 36))), 0x0);
        t6 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 12)) = t6;
        t10 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t6 + 0x0))) + 0x48)))))(t6, 0x4, (*(int *)(((int)stk + 8))), (((int)stk + 8) + 0x24));
        if ((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) > 0) {
            t13 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 8)) = t13;
            *(unsigned int *)(((int)stk + 12)) = (((int (*)(int))((*(int *)(((*(int *)((t13 + 0x0))) + 0x30)))))(t13));
            t17 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 8)) = t17;
            *(unsigned int *)(((int)stk + 48)) = (((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x28)))))(t17));
            t21 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 8)) = t21;
            *(unsigned int *)(((int)stk + 8)) = (((int (*)(int))((*(int *)(((*(int *)((t21 + 0x0))) + 0x38)))))(t21));
            *(unsigned int *)(((int)stk + 36)) = (((int)stk + 8) + 0x2C);
            t25 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 40)) = t25;
            *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x0)) = (((int (*)(int, int))((*(int *)(((*(int *)((t25 + 0x0))) + 0x40)))))(t25, 0x0));
            *(unsigned int *)(((int)stk + 40)) = (((int)stk + 8) + 0x30);
            t29 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 16)) = t29;
            *(unsigned int *)(((((int)stk + 8) + 0x30) + 0x0)) = (((int (*)(int, int))((*(int *)(((*(int *)((t29 + 0x0))) + 0x40)))))(t29, 0x1));
            t33 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 16)) = t33;
            t36 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t33 + 0x0))) + 0x48)))))(t33, 0x0, (((int)stk + 8) + 0x14), (((int)stk + 8) + 0x18));
            t37 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 16)) = t37;
            t40 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t37 + 0x0))) + 0x48)))))(t37, 0x3, (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10));
            mwRnaSetBitPerSmpl(a4, (*(int *)(((int)stk + 12))));
            mwRnaSetSfreq(a4, (*(int *)(((int)stk + 48))));
            *(unsigned int *)((a4 + 0x60)) = (*(int *)(((int)stk + 8)));
            *(unsigned int *)(((a4 + 0x64) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
            *(unsigned int *)((a4 + 0x68)) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
            *(unsigned int *)((a4 + 0x6C)) = (*(int *)(((int)stk + 28)));
            *(unsigned int *)((a4 + 0x70)) = (*(int *)(((int)stk + 32)));
            *(unsigned int *)((a4 + 0x7C)) = (*(int *)(((int)stk + 20)));
            *(unsigned int *)((a4 + 0x80)) = (*(int *)(((int)stk + 24)));
        }
    }
}


