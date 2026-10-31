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

int miniTimerDraw(void)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;

    t1 = *(int *)(((*(int *)0x8C2FBEF0) + 0x3C));
    t2 = (int)((int)t1 / (int)0x3C);
    if ((int)t2 > (int)0xA) {
        nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    } else {
        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        if (((*(int *)0x8C287C60) == 0) && ((t6 = *(int *)0x8C2FBEF0, t7 = *(int *)((t6 + 0x20)), t7 == 1) && (t8 = *(int *)0x8C2FBEF0, t9 = *(int *)((t8 + 0x3C)), t9 != 0))) {
            if (((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) % (int)0x3C)) == 0) {
                nlsndSeqRequest(0x1602A9);
            }
        }
    }
    circuitNumDraw((int)(float)(int)((((float)t1 / 60.0f) - (float)t2) * 100.0f), 0x4, 0x8C159E48, 600.0f, 30.0f, 1.0f);
    sprSheetSet(0x8C10CCA8);
    sprSheetPut(0x2007, 544.0f, 30.0f, 1.0f, 1.0f);
    circuitNumDraw(((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) / (int)0x3C)), 0x4, 0x8C159E48, 529.0f, 30.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return stripQuadDrawA(428.0f, 20.0f, 215.0f, 58.0f);
}

int kmyInitAllocator(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t13;
    int t25;
    int t37;
    int t58;
    int t42;
    int t54;
    int t63;
    int t33;

    *(unsigned int *)0x8C20C9D0 = a5;
    *(unsigned int *)0x8C20C9E8 = a6;
    *(unsigned int *)0x8C20C9D4 = a7;
    *(unsigned int *)0x8C20CA10 = a8;
    t0 = *(int *)0x8C20CA14;
    t2 = (0xFFFFFFE0 & (t0 + 0x20));
    if ((0x1F & t0) == 0) {
        t2 = t0;
    }
    *(unsigned int *)0x8C20CA14 = t2;
    *(unsigned int *)0x8C20C9CC = a4;
    t4 = *(int *)0x8C20CA14;
    if ((*(int *)0x8C20C9C8) == 1) {
        if (a4 == 0x1000000) {
            *(unsigned int *)0x8C20CA18 = ((-t4) + 0x1000000);
            *(unsigned int *)0x8C20C9D8 = 0x0;
            *(unsigned int *)0x8C20C9DC = (*(int *)0x8C20CA18);
            *(unsigned int *)0x8C20C9E0 = 0x1000000;
        } else {
            *(unsigned int *)0x8C20CA18 = ((-t4) + 0x800000);
            *(unsigned int *)0x8C20C9D8 = 0x0;
            *(unsigned int *)0x8C20C9DC = (*(int *)0x8C20CA18);
            *(unsigned int *)0x8C20C9E0 = 0x800000;
        }
        *(unsigned int *)0x8C20C9E4 = 0x0;
        kmiWriteRegister(0xE4, 0x0);
        Qreset();
        t13 = kmytex_FBAllocEntry();
        t25 = 0x3;
        if (t13 != 0) {
            *(unsigned int *)((t13 + 0xC)) = (*(int *)0x8C20C9D8);
            *(unsigned int *)((t13 + 0x10)) = (*(int *)0x8C20C9DC);
            *(unsigned int *)((t13 + 0x8)) = (*(int *)0x8C20C9F4);
            *(unsigned int *)0x8C20C9F4 = t13;
            *(unsigned int *)((t13 + 0x4)) = (*(int *)0x8C20C9F8);
            *(unsigned int *)0x8C20C9F8 = t13;
            if ((*(int *)0x8C20CA14) != 0) {
                *(unsigned int *)(((*(int *)0x8C20CA1C) + 0x0)) = (*(int *)0x8C20CA18);
            }
            t25 = 0x0;
        }
        t63 = t25;
    } else {
        if (a4 == 0x1000000) {
            *(unsigned int *)0x8C20CA18 = ((-t4) + 0x800000);
            *(unsigned int *)0x8C20C9D8 = 0x0;
            *(unsigned int *)0x8C20C9DC = (*(int *)0x8C20CA18);
            t33 = 0x800000;
        } else {
            *(unsigned int *)0x8C20CA18 = ((-t4) + 0x400000);
            *(unsigned int *)0x8C20C9D8 = 0x0;
            *(unsigned int *)0x8C20C9DC = (*(int *)0x8C20CA18);
            t33 = 0x400000;
        }
        *(unsigned int *)0x8C20C9E0 = t33;
        *(unsigned int *)0x8C20C9E4 = t33;
        kmiWriteRegister(0xE4, 0x0);
        Qreset();
        t37 = kmytex_FBAllocEntry();
        t58 = 0x3;
        if (t37 != 0) {
            *(unsigned int *)((t37 + 0xC)) = (*(int *)0x8C20C9D8);
            *(unsigned int *)((t37 + 0x10)) = (*(int *)0x8C20C9DC);
            *(unsigned int *)((t37 + 0x8)) = (*(int *)0x8C20C9F4);
            *(unsigned int *)0x8C20C9F4 = t37;
            *(unsigned int *)((t37 + 0x4)) = (*(int *)0x8C20C9F8);
            *(unsigned int *)0x8C20C9F8 = t37;
            t42 = kmytex_FBAllocEntry();
            t54 = 0x3;
            if (t42 == 0) {
            } else {
                *(unsigned int *)((t42 + 0xC)) = (*(int *)0x8C20C9E0);
                *(unsigned int *)((t42 + 0x10)) = (*(int *)0x8C20C9E4);
                *(unsigned int *)((t42 + 0x8)) = (*(int *)0x8C20CA04);
                *(unsigned int *)0x8C20CA04 = t42;
                *(unsigned int *)((t42 + 0x4)) = (*(int *)0x8C20CA08);
                *(unsigned int *)0x8C20CA08 = t42;
                if ((*(int *)0x8C20CA14) != 0) {
                    *(unsigned int *)(((*(int *)0x8C20CA1C) + 0x0)) = (*(int *)0x8C20CA18);
                }
                t54 = 0x0;
            }
            t58 = t54;
        }
        t63 = t58;
    }
    return t63;
}

int kmyUpdatePalette(void)
{
    int t10;
    int t11;
    int t12;
    int t32;
    int t19;
    int t20;
    int t21;
    int t23;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t36;
    int t22;
    int t26;
    int t27;
    int t28;
    int t46;
    int t47;
    int t48;

    if (((*(int *)0x8C471E08) & 0x1) != 0) {
        kmiWriteRegister(0x108, (*(int *)0x8C471E14));
    }
    if (((*(int *)0x8C471E08) & 2) != 0) {
        t10 = 0x0;
        t11 = 0x0;
        t12 = 0x1000;
        for (;;) {
            kmiWriteRegister(t12, (*(int *)((t11 + 0x8C470E08))));
            t10 = (t10 + 0x1);
            t12 = (t12 + 0x4);
            t11 = (t11 + 0x4);
            if ((int)t10 >= (int)0x400) {
                break;
            }
        }
    } else {
        if (((*(int *)0x8C471E08) & 4) != 0) {
            t32 = 0x8C471E08;
            if ((*(int *)0x8C471E0C) != 0) {
                t19 = 0x8C471E08;
                t20 = 0x8C471E0C;
                t21 = 0x8C471E08;
                t23 = 0x0;
                for (;;) {
                    if ((int)t23 >= (int)0x20) {
                        break;
                    }
                    t19 = 0x8C471E0C;
                    t20 = 0x1;
                    t20 = (((int)t23 >= 0) ? (t20 << (t23 & 31)) : ((-(int)t23 & 31) ? ((int)t20 >> (-(int)t23 & 31)) : ((int)t20 >> 31)));
                    t21 = (*(int *)((t19 + 0x0)));
                    if ((t20 & t21) != 0) {
                        t22 = t23;
                        t22 = (t22 << 2);
                        t22 = (t22 << 2);
                        t21 = 0x8C470E08;
                        kmyMemCopy(((t22 << 2) + 0xA05F9000), ((t22 << 2) + t21), 0x40);
                    } else {
                        t26 = t19;
                        t27 = t20;
                        t28 = t21;
                    }
                    t19 = t26;
                    t23 = (t23 + 0x1);
                    t20 = t27;
                    t21 = t28;
                }
                t32 = t19;
                t36 = t22;
            }
            t37 = *(int *)0x8C471E10;
            if (t37 != 0) {
                t39 = t32;
                t40 = t37;
                t41 = 0x8C471E10;
                t42 = t36;
                t43 = 0x0;
                for (;;) {
                    if ((int)t43 >= (int)0x20) {
                        break;
                    }
                    t39 = 0x8C471E10;
                    t41 = 0x1;
                    t41 = (((int)t43 >= 0) ? (t41 << (t43 & 31)) : ((-(int)t43 & 31) ? ((int)t41 >> (-(int)t43 & 31)) : ((int)t41 >> 31)));
                    t40 = (*(int *)((t39 + 0x0)));
                    if ((t41 & t40) != 0) {
                        t42 = t43;
                        t41 = 0x200;
                        t42 = (t42 << 2);
                        t40 = 0x8C470E08;
                        t42 = (t42 << 2);
                        t42 = (t42 + t41);
                        kmyMemCopy(((t42 << 2) + 0xA05F9000), ((t42 << 2) + t40), 0x40);
                    } else {
                        t46 = t39;
                        t47 = t40;
                        t48 = t41;
                    }
                    t39 = t46;
                    t43 = (t43 + 0x1);
                    t40 = t47;
                    t41 = t48;
                }
            }
            *(unsigned int *)0x8C471E0C = 0x0;
            *(unsigned int *)0x8C471E10 = 0x0;
        }
    }
    *(unsigned int *)0x8C471E08 = 0x0;
    return 0x0;
}

int kmyQueryFinishDMA(int a4, int a5, int a6, int a7)
{
    int t49;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t9;
    int t12;
    int t13;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t44;
    int t39;
    int t35;

    t49 = 0x101;
    if ((int)a4 >= 0) {
        t0 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t1 = *(short *)0x8C20344E;
        t2 = *(short *)0x8C203450;
        if ((unsigned int)0x0 < (unsigned int)t2) {
            t3 = t1;
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((((t3 << 2) << 2) << 2) + 0x8C203460) + 0x0));
                t3 = (t3 + 0x1);
                if (t5 == a4) {
                    break;
                }
                t4 = (t4 + 0x1);
                t3 = (t3 & 0x1F);
                if ((unsigned int)t4 >= (unsigned int)t2) {
                    t4 = (*(short *)0x8C203454);
                    t8 = *(short *)0x8C203456;
                    t3 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)t8) {
                        for (;;) {
                            t9 = *(int *)((((((t4 << 2) << 2) << 2) + 0x8C203C60) + 0x0));
                            t4 = (t4 + 0x1);
                            if (t9 == a4) {
                                break;
                            }
                            t3 = (t3 + 0x1);
                            t4 = (t4 & 0x1F);
                            if ((unsigned int)t3 >= (unsigned int)t8) {
                                t3 = (*(short *)0x8C20345A);
                                t12 = *(short *)0x8C20345C;
                                t4 = 0x0;
                                if ((unsigned int)0x0 < (unsigned int)t12) {
                                    for (;;) {
                                        t13 = *(int *)((((((t3 << 2) << 2) << 2) + 0x8C204460) + 0x0));
                                        t3 = (t3 + 0x1);
                                        if (t13 == a4) {
                                            break;
                                        }
                                        t4 = (t4 + 0x1);
                                        t3 = (t3 & 0x1F);
                                        if ((unsigned int)t4 >= (unsigned int)t12) {
                                            _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                                            return 0x101;
                                        }
                                    }
                                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                                    return 0x100;
                                }
                                _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                                return 0x101;
                            }
                        }
                        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                        return 0x100;
                    }
                    t3 = (*(short *)0x8C20345A);
                    t16 = *(short *)0x8C20345C;
                    t4 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)t16) {
                        for (;;) {
                            t17 = *(int *)((((((t3 << 2) << 2) << 2) + 0x8C204460) + 0x0));
                            t3 = (t3 + 0x1);
                            if (t17 == a4) {
                                break;
                            }
                            t4 = (t4 + 0x1);
                            t3 = (t3 & 0x1F);
                            if ((unsigned int)t4 >= (unsigned int)t16) {
                                _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                                return 0x101;
                            }
                        }
                        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                        return 0x100;
                    }
                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                    return 0x101;
                }
            }
            _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
            t44 = 0x100;
        } else {
            t19 = *(short *)0x8C203454;
            t20 = *(short *)0x8C203456;
            if ((unsigned int)0x0 < (unsigned int)t20) {
                t21 = 0x0;
                t22 = t19;
                for (;;) {
                    t23 = *(int *)((((((t22 << 2) << 2) << 2) + 0x8C203C60) + 0x0));
                    t22 = (t22 + 0x1);
                    if (t23 == a4) {
                        break;
                    }
                    t21 = (t21 + 0x1);
                    t22 = (t22 & 0x1F);
                    if ((unsigned int)t21 >= (unsigned int)t20) {
                        t21 = (*(short *)0x8C20345A);
                        t26 = *(short *)0x8C20345C;
                        t22 = 0x0;
                        if ((unsigned int)0x0 < (unsigned int)t26) {
                            for (;;) {
                                t27 = *(int *)((((((t21 << 2) << 2) << 2) + 0x8C204460) + 0x0));
                                t21 = (t21 + 0x1);
                                if (t27 == a4) {
                                    break;
                                }
                                t22 = (t22 + 0x1);
                                t21 = (t21 & 0x1F);
                                if ((unsigned int)t22 >= (unsigned int)t26) {
                                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                                    return 0x101;
                                }
                            }
                            _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                            return 0x100;
                        }
                        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                        return 0x101;
                    }
                }
                _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                t39 = 0x100;
            } else {
                t29 = *(short *)0x8C20345A;
                t30 = *(short *)0x8C20345C;
                if ((unsigned int)0x0 < (unsigned int)t30) {
                    t31 = t29;
                    t32 = 0x0;
                    for (;;) {
                        t33 = *(int *)((((((t31 << 2) << 2) << 2) + 0x8C204460) + 0x0));
                        t31 = (t31 + 0x1);
                        if (t33 == a4) {
                            break;
                        }
                        t32 = (t32 + 0x1);
                        t31 = (t31 & 0x1F);
                        if ((unsigned int)t32 >= (unsigned int)t30) {
                            _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                            return 0x101;
                        }
                    }
                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                    t35 = 0x100;
                } else {
                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                    t35 = 0x101;
                }
                t39 = t35;
            }
            t44 = t39;
        }
        t49 = t44;
    }
    return t49;
}

int vmsfs_findnext_ex(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t15;
    int t19;
    int t23;
    int t30;
    int t53;
    int stk[20];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1ECEAA:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    R12 = (R4);
    R13 = (((R4 * 0x148) + 0x8C464598));
    R14 = (R6);
    if (((*(signed char *)((((R4 * 0x148) + 0x8C464598) + 0x2))) == 0)) goto L_8C1ECEFA;
    goto L_8C1ECED0;
    L_8C1ECED0:;
    t6 = (vmsio_isready(R12)) != 0;
    if (t6) goto L_8C1ECEE4;
    goto L_8C1ECEDA;
    L_8C1ECEDA:;
    vmsfs_unmount(R12);
    goto L_8C1ECEFA;
    L_8C1ECEFA:;
    R0 = (0xFFFFFF01);
    goto L_8C1ECFDC;
    L_8C1ECFDC:;
    return R0;
    L_8C1ECEE4:;
    t10 = (vmsio_ismount(R12)) == 0;
    if (t10) goto L_8C1ECEFA;
    goto L_8C1ECEEE;
    L_8C1ECEEE:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + 0x8C464598) + 0x8))) != 0)) goto L_8C1ECF00;
    goto L_8C1ECEFA;
    L_8C1ECF00:;
    t15 = (int)(buIsFormat(R12)) >= 0;
    if (t15) goto L_8C1ECF10;
    goto L_8C1ECF0A;
    L_8C1ECF0A:;
    R0 = (0xFFFFFF03);
    goto L_8C1ECFDC;
    L_8C1ECF10:;
    t19 = *(int *)((R13 + 0x18));
    t23 = (direntry(R12, (*(int *)((R13 + 0x18)))));
    R10 = (0x0);
    R11 = (0x0);
    R12 = (0x1);
    R4 = t23;
    R5 = (t19);
    goto L_8C1ECF6C;
    L_8C1ECF6C:;
    if (((int)R5 < (int)(*(int *)(((*(int *)((R13 + 0x1C))) + 0x30))))) goto L_8C1ECF24;
    goto L_8C1ECF74;
    L_8C1ECF74:;
    if ((R11 != 0)) goto L_8C1ECF7E;
    goto L_8C1ECF78;
    L_8C1ECF78:;
    R0 = (0xFFFFFF05);
    goto L_8C1ECFDC;
    L_8C1ECF7E:;
    t30 = *(int *)(((int)stk + 4));
    R11 = ((t30 + 0xC));
    R5 = (t30);
    R6 = ((R4 + 0x4));
    goto L_8C1ECF90;
    L_8C1ECF90:;
    if (((unsigned int)R5 < (unsigned int)R11)) goto L_8C1ECF8A;
    goto L_8C1ECF94;
    L_8C1ECF94:;
    *(unsigned char *)((R11 + 0x0)) = R10;
    set_file_info(R4, (((int)stk + 4) + 0x8), R6, R7);
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)((R13 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((R14 + 0x4)) = (*(int *)(((int)stk + 52)));
    *(unsigned char *)((R14 + 0x6)) = (*(signed char *)(((int)stk + 16)));
    *(unsigned char *)((R14 + 0x7)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned short *)((R14 + 0x8)) = (*(short *)(((int)stk + 20)));
    if (((*(int *)(((int)stk + 16))) != 0xCC)) goto L_8C1ECFCA;
    goto L_8C1ECFC6;
    L_8C1ECFC6:;
    R0 = (R12);
    goto L_8C1ECFCC;
    L_8C1ECFCC:;
    *(unsigned char *)((R14 + 0x6)) = R0;
    get_vmstime((R14 + 0xA), (((int)stk + 4) + 0x28));
    R0 = (0x0);
    goto L_8C1ECFDC;
    L_8C1ECFCA:;
    R0 = (R10);
    goto L_8C1ECFCC;
    L_8C1ECF8A:;
    *(unsigned char *)((R5 + 0x0)) = (*(signed char *)((R6 + 0x0)));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    goto L_8C1ECF90;
    L_8C1ECF24:;
    *(unsigned int *)((R13 + 0x18)) = ((*(int *)((R13 + 0x18))) + 0x1);
    t53 = *(signed char *)((R4 + 0x0));
    R6 = ((unsigned char)t53);
    R7 = (t53);
    if (((unsigned char)t53 == 51)) goto L_8C1ECF3A;
    goto L_8C1ECF34;
    L_8C1ECF34:;
    if ((R6 != 0xCC)) goto L_8C1ECF68;
    goto L_8C1ECF3A;
    L_8C1ECF3A:;
    R11 = (R12);
    goto L_8C1ECF74;
    L_8C1ECF68:;
    R4 = ((R4 + 0x20));
    R5 = ((R5 + 0x1));
    goto L_8C1ECF6C;
}

int kmiStartupDMA(int a4, int a5, int a6)
{
    int t132;
    int t21;
    int t23;
    int t41;
    int t43;
    int t45;
    int t63;
    int t65;
    int t67;
    int t102;
    int t107;
    int t110;
    int t24;
    int t47;
    int t58;
    int t69;
    int t93;
    int t114;

    t132 = 0x102;
    if ((*(int *)0x8C203428) != 0) {
    } else {
        t21 = *(int *)0x8C20343C;
        t23 = *(int *)0x8C203438;
        if (((int)(*(short *)0x8C203450) > 0) && (t24 = *(int *)0x8C203440, t24 == 0)) {
            t41 = *(short *)0x8C20344E;
            if (((*(int *)((((((t41 << 2) << 2) << 2) + 0x8C203460) + 0x4))) & 0x8) != 0) {
                t43 = 0x0;
                if (t21 == 0) {
                    *(unsigned int *)0x8C20343C = ((((t41 << 2) << 2) << 2) + 0x8C203460);
                    t43 = ((((t41 << 2) << 2) << 2) + 0x8C203460);
                }
                t47 = t43;
            } else {
                t45 = 0x0;
                if (t23 != 0) {
                } else {
                    *(unsigned int *)0x8C203438 = ((((t41 << 2) << 2) << 2) + 0x8C203460);
                    t45 = ((((t41 << 2) << 2) << 2) + 0x8C203460);
                }
                t47 = t45;
            }
            if (t47 != 0) {
                *(unsigned int *)0x8C203440 = t47;
                kmiLaunchQ(t47);
            }
        } else {
            if (((int)(*(short *)0x8C203456) > 0) && (t58 = *(int *)0x8C203444, t58 == 0)) {
                t63 = *(short *)0x8C203454;
                if (((*(int *)((((((t63 << 2) << 2) << 2) + 0x8C203C60) + 0x4))) & 0x8) != 0) {
                    t65 = 0x0;
                    if (t21 == 0) {
                        *(unsigned int *)0x8C20343C = ((((t63 << 2) << 2) << 2) + 0x8C203C60);
                        t65 = ((((t63 << 2) << 2) << 2) + 0x8C203C60);
                    }
                    t69 = t65;
                } else {
                    t67 = 0x0;
                    if (t23 != 0) {
                    } else {
                        *(unsigned int *)0x8C203438 = ((((t63 << 2) << 2) << 2) + 0x8C203C60);
                        t67 = ((((t63 << 2) << 2) << 2) + 0x8C203C60);
                    }
                    t69 = t67;
                }
                if (t69 != 0) {
                    *(unsigned int *)0x8C203444 = t69;
                    kmiLaunchQ(t69);
                }
            }
        }
        if (((int)(*(short *)0x8C20345C) > 0) && (t93 = *(int *)0x8C203448, t93 == 0)) {
            t102 = *(short *)0x8C20345A;
            if ((0x8 & (*(int *)((((((t102 << 2) << 2) << 2) + 0x8C204460) + 0x4)))) != 0) {
                t107 = 0x0;
                if ((*(int *)0x8C20343C) == 0) {
                    *(unsigned int *)0x8C20343C = ((((t102 << 2) << 2) << 2) + 0x8C204460);
                    t107 = ((((t102 << 2) << 2) << 2) + 0x8C204460);
                }
                t114 = t107;
            } else {
                t110 = 0x0;
                if ((*(int *)0x8C203438) != 0) {
                } else {
                    *(unsigned int *)0x8C203438 = ((((t102 << 2) << 2) << 2) + 0x8C204460);
                    t110 = ((((t102 << 2) << 2) << 2) + 0x8C204460);
                }
                t114 = t110;
            }
            if (t114 != 0) {
                *(unsigned int *)0x8C203448 = t114;
                kmiLaunchQ(t114);
            }
        }
        t132 = 0x0;
    }
    return t132;
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

int motFileLoadStep(int a4, int a5, int a6, int a7)
{
    int t3;
    int t8;
    int t16;
    int t17;
    int t24;
    int t25;
    int t29;
    int t33;
    int t34;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C015CE2:;
    if (((*(int *)0x8C34A1F8) == 0)) goto L_8C015D2C;
    goto L_8C015CF4;
    L_8C015CF4:;
    t3 = (fileLoadPoll(R4, R5, R6, R7)) == 1;
    if (t3) goto L_8C015D2C;
    goto L_8C015CFE;
    L_8C015CFE:;
    R0 = (0x0);
    goto L_8C015E08;
    L_8C015E08:;
    return R0;
    L_8C015D2C:;
    R7 = (0x8C28758C);
    if (((*(int *)0x8C28758C) == 0)) goto L_8C015DD4;
    goto L_8C015D34;
    L_8C015D34:;
    t8 = *(int *)0x8C287590;
    R14 = (0x8C287590);
    R4 = (0x8C287588);
    R5 = (0x8C2873F8);
    R6 = (t8);
    if ((t8 == 0)) goto L_8C015DD8;
    goto L_8C015D40;
    L_8C015D40:;
    *(unsigned int *)((((*(int *)((((((((R6 - 1) << 2) + (R6 - 1)) << 2) << 1) + R5) + 0x0))) << 2) + 0x8C2873CC)) = (*(int *)((R4 + 0x0)));
    t16 = *(int *)((R14 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((((((t16 - 1) << 2) + (t16 - 1)) << 2) << 1) + R5);
    t17 = *(int *)((((((((t16 - 1) << 2) + (t16 - 1)) << 2) << 1) + R5) + 0x24));
    R6 = (t17);
    if (((int)t17 >= 0)) goto L_8C015D72;
    goto L_8C015D70;
    L_8C015D70:;
    R6 = ((R6 + 0x1F));
    goto L_8C015D72;
    L_8C015D72:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) + ((((((int)R6 >> 5) << 2) << 2) << 1) + 0x40));
    *(unsigned int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C287598)) = 0x1;
    t24 = *(int *)((R14 + 0x0));
    *(unsigned int *)((((((((t24 - 1) << 2) + (t24 - 1)) << 2) << 1) + R5) + 0x0)) = 0x0;
    t25 = *(int *)((R14 + 0x0));
    R6 = (0x0);
    if (((*(int *)(((((((t25 << 2) + t25) << 2) << 1) + R5) + 0x0))) != 0)) goto L_8C015DD8;
    goto L_8C015DB8;
    L_8C015DB8:;
    *(unsigned int *)((R7 + 0x0)) = R6;
    t29 = *(int *)((R4 + 0x0));
    *(unsigned int *)0x8C2873C8 = t29;
    if (((unsigned int)t29 <= (unsigned int)0xCDFFFFF)) goto L_8C015DD4;
    goto L_8C015DC8;
    L_8C015DC8:;
    msgEventStart(0x1E, 0x14, 0x8C1016C4, 0xE10);
    goto L_8C015DD4;
    L_8C015DD4:;
    R0 = (0xFFFFFFFF);
    goto L_8C015E08;
    L_8C015DD8:;
    t33 = *(int *)((R14 + 0x0));
    t34 = *(int *)((R4 + 0x0));
    R12 = (t34);
    R13 = ((((((t33 << 2) + t33) << 2) << 1) + R5));
    if ((t34 == (*(int *)((((*(int *)(((((((t33 << 2) + t33) << 2) << 1) + R5) + 0x0))) << 2) + 0x8C2873CC))))) goto L_8C015E00;
    goto L_8C015DF4;
    L_8C015DF4:;
    fileLoadStart(R12, (R13 + 0x4), 0x0);
    goto L_8C015E00;
    L_8C015E00:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    R0 = (0x1);
    goto L_8C015E08;
}


int write_dir_all(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t12;
    int t13;
    int t19;
    int t21;
    int t33;
    int t39;
    int t52;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R6 = a6;
    L_8C1EDD9A:;
    t0 = *(int *)((((R4 * 0x148) + 0x8C464598) + 0x1C));
    *(unsigned short *)(((int)stk + 8)) = (*(short *)((t0 + 0x14)));
    t3 = *(int *)((t0 + 0x18));
    t12 = ((R4 * 0x148) + 0x8C464598);
    R10 = (0xFFFA);
    R11 = (0x0);
    R12 = ((*(short *)(((int)stk + 8))));
    R13 = (0xFFFC);
    R14 = (R4);
    R4 = (t0);
    R8 = (t3);
    R9 = t12;
    if (((int)t3 <= 0)) goto L_8C1EDDF4;
    goto L_8C1EDDD0;
    L_8C1EDDD0:;
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)R12;
    t13 = get_fat(R14, (unsigned short)R12, R6, a7);
    set_fat(R14, (*(int *)(((int)stk + 4))), R13);
    R12 = (t13);
    if (((unsigned short)t13 == R10)) goto L_8C1EDDF4;
    goto L_8C1EDDE8;
    L_8C1EDDE8:;
    if (((unsigned short)R12 == R13)) goto L_8C1EDDF4;
    goto L_8C1EDDEE;
    L_8C1EDDEE:;
    t19 = (int)(R11 + 0x1) < (int)R8;
    R11 = ((R11 + 0x1));
    if (t19) goto L_8C1EDDD0;
    goto L_8C1EDDF4;
    L_8C1EDDF4:;
    t21 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (R8 - 1);
    R11 = (0x0);
    R12 = (t21);
    goto L_8C1EDE7C;
    L_8C1EDE7C:;
    if (((int)R11 < (int)R8)) goto L_8C1EDE14;
    goto L_8C1EDE80;
    L_8C1EDE80:;
    if (((unsigned short)(*(short *)(((int)stk + 8))) == (*(int *)(((*(int *)((R9 + 0x1C))) + 0x14))))) goto L_8C1EDEA4;
    goto L_8C1EDE8C;
    L_8C1EDE8C:;
    t33 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((R9 + 0x20))), 0x4A, (*(short *)(((int)stk + 8))));
    write_fat(R14);
    write_sys(R14);
    goto L_8C1EDEA4;
    L_8C1EDEA4:;
    R0 = (0x0);
    goto L_8C1EDEA6;
    L_8C1EDEA6:;
    return R0;
    L_8C1EDE14:;
    *(unsigned int *)(((int)stk + 4)) = ((R11 << 8) << 1);
    goto L_8C1EDE1C;
    L_8C1EDE1C:;
    t39 = vmsfs_write_retry(R14, (unsigned short)R12, ((*(int *)((R9 + 0x28))) + (*(int *)(((int)stk + 4)))));
    R4 = (t39);
    if ((t39 == 0)) goto L_8C1EDE4E;
    goto L_8C1EDE30;
    L_8C1EDE30:;
    if ((R4 != 0xFFFFFF01)) goto L_8C1EDE3A;
    goto L_8C1EDE36;
    L_8C1EDE36:;
    R0 = (R4);
    goto L_8C1EDEA6;
    L_8C1EDE3A:;
    set_fat(R14, (unsigned short)R12, 0xFFFF);
    R12 = ((search_fat_dir(R14, R13)));
    goto L_8C1EDE1C;
    L_8C1EDE4E:;
    R6 = (R10);
    if ((R11 != 0)) goto L_8C1EDE58;
    goto L_8C1EDE54;
    L_8C1EDE54:;
    *(unsigned short *)(((int)stk + 8)) = R12;
    goto L_8C1EDE58;
    L_8C1EDE58:;
    *(unsigned int *)(((int)stk + 16)) = (unsigned short)R12;
    set_fat(R14, (unsigned short)R12, R6);
    if ((R11 == (*(int *)(((int)stk + 12))))) goto L_8C1EDE7A;
    goto L_8C1EDE66;
    L_8C1EDE66:;
    t52 = search_fat_dir(R14, R13);
    *(unsigned short *)(((int)stk + 4)) = t52;
    set_fat(R14, (*(int *)(((int)stk + 16))), t52);
    R12 = ((*(short *)(((int)stk + 4))));
    goto L_8C1EDE7A;
    L_8C1EDE7A:;
    R11 = ((R11 + 0x1));
    goto L_8C1EDE7C;
}
