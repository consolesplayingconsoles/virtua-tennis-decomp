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


