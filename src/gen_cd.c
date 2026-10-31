/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DECtoBCD(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _pd_peripheral_set_null(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngReadData(int);
int fmMngReadSctAllData(int);
int fmMngWriteData(int, int, int);
int gdFsGetStat(int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsReqRdPio(int, int, int);
int get_fat(int, int);
int kdGetDeviceInfo(int);
int kdInitSystem(int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_make_devicedata(int, int);
int nlLineSendVertex(int, int, int);
int search_dir(int, int, int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int syBtFlDeleteSct(int, int, int);
int syBtFlWrite(int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int thunk_fmMngCopyBytes(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fseek(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat_1(int);
int write_sys(int);
int kmiProcessVertex_11(int a4, int a5, int a6, int a7);
int write_fat(int a4);
int pdInitPeripheral(int a4, int a5, int a6);
int vmsfs_fgetsize(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int pdTmrGetTimeCallback(int a4, int a5, int a6, int a7);
int gdFsMovePickup(int a4);
int gdFsWaitCompleteReq(int a4);
int syMmuAddEntry(int a4, int a5, int a6);
int gdFsReqDrvStatG(void);
int check_file_correct(int a4, int a5);
int gdFsRead(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int fmMngFormat(int a4, int a5, int a6);
int gdFsGetTocG(int a4, int a5);
int vmsfs_isformat(int a4, int a5, int a6, int a7);
int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5);
int set_vmstime(int a4, int a5);
int buReadFile(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
int fmMngExecServer(int a4, int a5, int a6);

int kmiProcessVertex_11(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t19;
    int t21;
    int stk[31];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x10)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x14)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t19 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t21 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t21 + 0x18)) = (*(int *)((t19 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int write_fat(int a4)
{
    int t0;
    int t1;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = write_fat_1(a4);
        if (t1 != 0xFFFFFF01) {
            if (t1 != 0xFFFFFF40) {
                break;
            }
            t0 = (search_subst_fat_top(a4));
            if ((int)t0 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC)) = t0;
            t7 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x46, t0);
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x10)))) {
                    break;
                }
                set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t0), 0xFFFA);
                t0 = (t0 + 0x1);
            }
            t0 = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if (t0 != 0) {
        write_sys(a4);
    }
    return 0x0;
}

int pdInitPeripheral(int a4, int a5, int a6)
{
    int t4;

    *(unsigned int *)0x8C45A6AC = a4;
    *(unsigned int *)0x8C45A164 = 0x0;
    *(unsigned int *)0x8C45A160 = 0x1;
    *(unsigned int *)0x8C45A168 = 0x0;
    memset(0x8C45A16C, 0x0, 0x4E0);
    if ((a6 != 0) && (a5 != 0)) {
        *(unsigned int *)0x8C45A164 = 0x1;
        kdInitSystem(a5, a6);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0x8C45A16C) + 0x30)) = (kdGetDeviceInfo(t4));
        _pd_peripheral_set_null(((t4 * 0x34) + 0x8C45A16C));
        *(unsigned int *)((0x8C45A64C + (t4 << 2))) = 0x0;
        *(unsigned char *)((t4 + 0x8C45A6B2)) = 0x0;
        *(unsigned char *)((t4 + 0x8C45A6CA)) = 0x0;
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x18) {
            break;
        }
    }
    *(unsigned char *)0x8C45A6B0 = 0xC0;
    *(unsigned char *)0x8C45A6B1 = 0xA0;
    return 0x8C45A6B1;
}

int vmsfs_fgetsize(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int stk[15];

    *(unsigned int *)(((int)stk + 4)) = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0x8C46459A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0x8C4645A0))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 4));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            return (*(int *)(((int)stk + 48)));
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t11;
    int t14;
    int t23;
    int t26;
    int stk[11];

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
    R7 = a7;
    L_8C1EEF36:;
    *(unsigned int *)(((int)stk + 12)) = R5;
    *(unsigned int *)(((int)stk + 16)) = R6;
    *(unsigned int *)(((int)stk + 8)) = R7;
    R11 = (R4);
    R13 = (a8);
    if ((a8 != 0)) goto L_8C1EEF6A;
    goto L_8C1EEF52;
    L_8C1EEF52:;
    t4 = vmsfs_fgetsize(R11, (*(int *)(((int)stk + 12))));
    R4 = (t4);
    if (((int)t4 >= 0)) goto L_8C1EEF64;
    goto L_8C1EEF60;
    L_8C1EEF60:;
    R0 = (R4);
    goto L_8C1EEFC0;
    L_8C1EEFC0:;
    return R0;
    L_8C1EEF64:;
    R13 = ((R4 - (*(int *)(((int)stk + 8)))));
    goto L_8C1EEF6A;
    L_8C1EEF6A:;
    t11 = vmsfs_fopen(R11, (*(int *)(((int)stk + 12))), ((int)stk + 4));
    R14 = (t11);
    if (((int)t11 < 0)) goto L_8C1EEFBE;
    goto L_8C1EEF7A;
    L_8C1EEF7A:;
    t14 = *(int *)(((int)stk + 16));
    *(unsigned int *)((((R11 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    *(unsigned int *)((((R11 * 0x148) + 0x8C464598) + 0x34)) = R13;
    vmsfs_fseek((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), 0x0, R7);
    R11 = (0x0);
    R12 = (t14);
    if (((unsigned int)0x0 >= (unsigned int)R13)) goto L_8C1EEFB4;
    goto L_8C1EEF9C;
    L_8C1EEF9C:;
    R10 = (0x200);
    goto L_8C1EEF9E;
    L_8C1EEF9E:;
    t23 = vmsfs_fread1((*(int *)(((int)stk + 4))), R12);
    R14 = (t23);
    if (((int)t23 < 0)) goto L_8C1EEFB6;
    goto L_8C1EEFAC;
    L_8C1EEFAC:;
    t26 = (unsigned int)(R11 + 0x1) < (unsigned int)R13;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R10));
    if (t26) goto L_8C1EEF9E;
    goto L_8C1EEFB4;
    L_8C1EEFB4:;
    R14 = (0x0);
    goto L_8C1EEFB6;
    L_8C1EEFB6:;
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    goto L_8C1EEFBE;
    L_8C1EEFBE:;
    R0 = (R14);
    goto L_8C1EEFC0;
}

int pdTmrGetTimeCallback(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t35;
    int t39;
    int t3;
    int t29;
    int t33;
    int t4;
    int t28;
    int t42;
    int t43;
    int t20;
    int t21;

    t0 = *(signed char *)((a4 + 0x8C20A958));
    t1 = *(int *)((a7 + 0x0));
    t35 = t1;
    t39 = 0xFFFFFFFE;
    if ((t1 & 4) != 0) {
        t3 = *(signed char *)((a6 + 0x4));
        t29 = (unsigned char)t3;
        t33 = 0xFFFFFFFE;
        if ((unsigned char)t3 == 8) {
            t4 = *(int *)((a6 + 0x8));
            *(unsigned short *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x0)) = (((unsigned char)(*(signed char *)(((t4 + 0x8) + 0x1))) << 8) + (unsigned char)(*(signed char *)(((t4 + 0x8) + 0x0))));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x2)) = (*(signed char *)(((t4 + 0x8) + 0x2)));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x3)) = (*(signed char *)(((t4 + 0x8) + 0x3)));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x4)) = (*(signed char *)(((t4 + 0x8) + 0x4)));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x5)) = (*(signed char *)(((t4 + 0x8) + 0x5)));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x6)) = (*(signed char *)(((t4 + 0x8) + 0x6)));
            if (((unsigned char)(*(signed char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x2))) == 2) && (t20 = *(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0)), t21 = *(signed char *)((t20 + 0x3)), (int)(unsigned char)t21 > (int)0x1D)) {
                *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x3)) = 0x1D;
            }
            t28 = *(signed char *)((0x8C20A978 + ((unsigned char)(*(signed char *)(((t4 + 0x8) + 0x7))) & 0x7)));
            *(unsigned char *)(((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0))) + 0x7)) = t28;
            t29 = t28;
            t33 = 0x0;
        }
        t35 = t29;
        t39 = t33;
    }
    if ((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x8))) != 0) {
        t42 = *(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x4));
        t43 = *(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x8));
        return ((int (*)(int, int, int, int))(t43))(t39, t42, a6, a7);
    }
    return t35;
}

int gdFsMovePickup(int a4)
{
    int t30;
    int t25;
    int t7;
    int t13;
    int t18;
    int t22;
    int t0;

    t30 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = *(short *)((a4 + 0x4C)), t0 != 0)) {
        t25 = 0xFFFFFFF3;
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t7 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t13 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x18)))))(((*(int *)((a4 + 0x8))) + (*(int *)((a4 + 0x14)))));
            if (t13 != 0) {
                *(unsigned int *)((a4 + 0x3C)) = t13;
                *(unsigned short *)((a4 + 0x50)) = 0x3;
                *(unsigned short *)((a4 + 0x48)) = 0x2;
                *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                t18 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x40)))))();
            }
            _builtin_set_imask(((unsigned int)(((t7 & 0xF) << 2) << 2) >> 4));
            t22 = 0xFFFFFFF3;
            if (t13 != 0) {
                t22 = (gdFsWaitCompleteReq(a4));
            }
            t25 = t22;
        }
        t30 = t25;
    }
    return t30;
}

int gdFsWaitCompleteReq(int a4)
{
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t23;
    int t26;
    int t21;

    t2 = a4;
    t3 = (*(int *)((a4 + 0x18)));
    t4 = (syTmrGetCount());
    for (;;) {
        t8 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C))) + 0x48)))))(t2);
        t2 = a4;
        t9 = gdFsGetStat(t2);
        t2 = t9;
        if (t9 != 0) {
            if (t9 != 1) {
                if ((t9 != 2) && ((t9 != 3) && (t9 != 4))) {
                    break;
                }
                if (t3 != (*(int *)((a4 + 0x18)))) {
                    t4 = (syTmrGetCount());
                    t3 = (*(int *)((a4 + 0x18)));
                } else {
                    t21 = t2;
                }
                t2 = t21;
                t23 = syTmrGetCount();
                t2 = t4;
                t2 = (syTmrDiffCount(t2, t23));
                if ((unsigned int)t2 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t26 = 0xFFFFFFE7;
    if ((t9 == 5) || (t9 == 64)) {
        t26 = (*(short *)((a4 + 0x52)));
    }
    return t26;
}

int syMmuAddEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t26;
    int t18;
    int t19;
    int t15;
    int t16;
    int t12;
    int t13;
    int t9;
    int t10;
    int t8;

    t0 = *(int *)0xFF000010;
    if ((unsigned int)(0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2)) < (unsigned int)0x40) {
        t1 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
        for (;;) {
            if (((*(int *)((((t1 << 8) + 0xF6000000) + 0x0))) & 0x100) == 0x100) {
                t1 = (t1 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)0x40) {
                    break;
                }
                continue;
            }
            break;
        }
        t8 = t1;
    } else {
        t8 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
    }
    t26 = 0xFF;
    if (t8 == 64) {
    } else {
        t18 = 0x1FFFFC00;
        t19 = 0x0;
        if ((signed char)a6 != 1) {
            t15 = 0x1FFFF000;
            t16 = 0x10;
            if ((signed char)a6 != 2) {
                t12 = 0x1FFF0000;
                t13 = 0x80;
                if ((signed char)a6 != 3) {
                    t9 = 0x1FF00000;
                    t10 = 0x90;
                    if ((signed char)a6 != 4) {
                        t9 = ((a5 & 0xFFFFFC00) | 0x100);
                        t10 = a6;
                    }
                    t12 = t9;
                    t13 = t10;
                }
                t15 = t12;
                t16 = t13;
            }
            t18 = t15;
            t19 = t16;
        }
        *(unsigned int *)(((0xF6000000 + (t8 << 8)) + 0x0)) = ((a5 & 0xFFFFFC00) | 0x100);
        *(unsigned int *)((((t8 << 8) + 0xF7000000) + 0x0)) = (((a4 & t18) | t19) | 0x13E);
        t26 = t8;
    }
    return t26;
}

int gdFsReqDrvStatG(void)
{
    int t2;
    int t18;
    int t3;
    int t8;
    int t13;
    int t16;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    t18 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t8 = ((int (*)(int, int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x3C)))))(0x1, 0xE, ((*(int *)0x8C20C204) + 0x40));
        if (t8 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t8;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            *(unsigned short *)((t2 + 0x48)) = 0xA;
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t13 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t16 = 0x0;
        if (t8 == 0) {
            t16 = 0xFFFFFFF3;
        }
        t18 = t16;
    }
    return t18;
}

int check_file_correct(int a4, int a5)
{
    int t0;
    int t20;
    int t3;
    int t5;
    int t6;
    int t8;
    int t12;
    int t13;
    int stk[17];

    t0 = search_dir(a4, a5, ((int)stk + 4));
    t20 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        direntry(a4, t0);
        t3 = *(int *)(((int)stk + 16));
        if ((int)t3 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
            t5 = t3;
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(*(int *)(((int)stk + 44)))) {
                    return 0x0;
                }
                t8 = get_fat(a4, t5);
                if (t6 == ((*(int *)(((int)stk + 44))) - 1)) {
                    if ((unsigned short)t8 != 0xFFFA) {
                        break;
                    }
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                if (((unsigned short)t8 != t5) && (((unsigned short)t8 != 0xFFFA) && (((unsigned short)t8 != 0xFFFC) && (((unsigned short)t8 != 0xFFFF) && (t12 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C)), t13 = *(int *)((t12 + 0x30)), (int)(unsigned short)t8 < (int)t13))))) {
                    t6 = (t6 + 0x1);
                    t5 = (unsigned short)t8;
                    continue;
                }
                return 0xFFFFFF41;
            }
        }
        t20 = 0xFFFFFF41;
    }
    return t20;
}

int gdFsRead(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t25;
    int t21;
    int t2;
    int t3;
    int t11;
    int t12;

    t0 = 0x0;
    if ((0x1F & a6) == 0) {
        t0 = 0x1;
    }
    t4 = 0x1F;
    t5 = 0x0;
    t6 = a5;
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)0x4E20) {
            break;
        }
        t2 = t0;
        if (t2 == 1) {
            t6 = a5;
            t5 = a4;
            t2 = (gdFsReqRd32(t5, t6, a6));
        } else {
            t6 = a5;
            t5 = a4;
            t2 = (gdFsReqRdPio(t5, t6, a6));
        }
        t5 = t2;
        if ((t5 == 0) && ((a5 != 0) && (t11 = *(int *)((a4 + 0x14)), t3 = t11, t12 = *(int *)((a4 + 0x10)), t4 = t12, (int)t3 < (int)t4))) {
            t6 = 0xC350;
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t6 = (t6 - 1);
            }
            t7 = (t7 + 0x1);
            continue;
        }
        break;
    }
    t25 = 0xFFFFFFEB;
    if (t7 == 0x4E20) {
    } else {
        t21 = t5;
        if ((int)t5 >= 0) {
            t21 = (gdFsWaitCompleteReq(a4));
        }
        t25 = t21;
    }
    return t25;
}

int vmsfs_getvolume(int a4, int a5)
{
    int t1;
    int t3;
    int t6;
    int t11;
    int t12;
    int t4;
    int t5;
    int t9;
    int t10;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0x8C464598);
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 12)), t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t11 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))) + 0x10);
            t12 = 0x0;
            for (;;) {
                if ((int)t12 >= (int)0x20) {
                    break;
                }
                t9 = (*(int *)(((int)stk + 8)));
                t12 = (t12 + 0x1);
                t9 = (t9 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t9;
                t10 = (*(signed char *)((t11 + 0x0)));
                t11 = (t11 + 0x1);
                *(unsigned char *)(((t9 - 0x1) + 0x0)) = t10;
                t9 = (t9 - 0x1);
            }
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int fmMngFormat(int a4, int a5, int a6)
{
    int t0;
    int t30;
    int t27;
    int t2;
    int t23;
    int t3;
    int t10;
    int t20;
    int t17;
    int t18;

    t0 = *(int *)0x8C20CA44;
    t30 = 0xFFFFFFF5;
    if (t0 == 0) {
    } else {
        t27 = 0xFFFFFFFA;
        if ((a4 == 0) || (a4 == 1)) {
            t2 = syBtFlDeleteSct((*(int *)((t0 + 0x4))), a5, a6);
            t23 = 0xFFFFFFFD;
            if (t2 != 0) {
            } else {
                t3 = *(int *)0x8C20CA44;
                thunk_fmMngCopyBytes();
                *(unsigned short *)(((*(int *)0x8C20CA44) + 0x2)) = a4;
                *(unsigned char *)(((t3 + 0x34) + 0x11)) = a4;
                *(unsigned char *)(((t3 + 0x34) + 0x10)) = (*(signed char *)(((*(int *)0x8C20CA44) + 0x0)));
                t10 = syBtFlWrite((*(int *)(((*(int *)0x8C20CA44) + 0x4))), (t3 + 0x34), 0x12);
                t20 = 0xFFFFFFFE;
                if (t10 != 18) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0x8C20CA44) + 0xC))), (*(int *)(((*(int *)0x8C20CA44) + 0x8))));
                    t17 = fmMngReadSctAllData((*(int *)0x8C20CA44));
                    t18 = 0x0;
                    if (t17 != 0) {
                        t18 = t17;
                    }
                    t20 = t18;
                }
                t23 = t20;
            }
            t27 = t23;
        }
        t30 = t27;
    }
    return t30;
}

int gdFsGetTocG(int a4, int a5)
{
    int t2;
    int t3;
    int t7;
    int t15;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF3;
    }
    t3 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t7 = ((int (*)(int, int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x38)))))(a4, a5);
    if (t7 != 0) {
        *(unsigned int *)((t2 + 0x3C)) = t7;
        *(unsigned short *)((t2 + 0x50)) = 0x4;
        *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
    }
    _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
    t15 = 0xFFFFFFF3;
    if (t7 == 0) {
    } else {
        t15 = (gdFsWaitCompleteReq(t2));
    }
    return t15;
}

int vmsfs_isformat(int a4, int a5, int a6, int a7)
{
    int t26;
    int t1;
    int t3;
    int t12;
    int t6;
    int t7;
    int t19;
    int t4;

    t26 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t19 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t12 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x8)), t4 != 0)) {
                t6 = (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20)));
                t7 = 0x0;
                for (;;) {
                    if ((unsigned char)(*(signed char *)((t6 + 0x0))) != 85) {
                        break;
                    }
                    t7 = (t7 + 0x1);
                    t6 = (t6 + 0x1);
                    if ((int)t7 >= (int)0x10) {
                        if ((*(int *)(((a4 << 2) + 0x8C464FD8))) != 0) {
                            return 0xFFFFFF03;
                        }
                        return 0x0;
                    }
                }
                *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xC)) = 0x0;
                t12 = 0xFFFFFF03;
            }
            t19 = t12;
        }
        t26 = t19;
    }
    return t26;
}

int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (((*(float *)((a5 + 0x0))) + f5) + f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (((*(float *)((a5 + 0x4))) - f4) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = (((*(float *)((a5 + 0x0))) - f5) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = (((*(float *)((a5 + 0x4))) + f4) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = (((*(float *)((a6 + 0x4))) - f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = (((*(float *)((a6 + 0x4))) + f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int set_vmstime(int a4, int a5)
{
    int t16;

    *(unsigned char *)((a4 + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) / (int)0x64))));
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = (DECtoBCD(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) % (int)0x64))));
    *(unsigned char *)((((a4 + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)(((((a4 + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)(((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (DECtoBCD((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t16 = *(signed char *)((a5 + 0x7));
    *(unsigned char *)(((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((0x8C20A91C + ((unsigned char)t16 & 0x7))));
    return ((unsigned char)t16 & 0x7);
}

int buReadFile(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    t4 = 0xFFFFFFFF;
    if (t1 != 0) {
    } else {
        vmsfs_c_setfunc(t0, 0x5);
        vmsfs_c_setparam(t0, a4, a5, a6, 0x0, 0x0, 0x0);
        t4 = 0x0;
    }
    return t4;
}

int mpdrv_frame_recv_main(int a4)
{
    int t3;
    int t7;
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t23;
    int t18;
    int t20;

    t3 = a4;
    t7 = 0x0;
    for (;;) {
        if ((int)t7 >= (int)0x4) {
            break;
        }
        t0 = 0x8C20B030;
        t1 = 0xF90;
        t2 = (*(int *)(((t7 << 2) + t0)));
        t0 = (*(int *)0x8C47317C);
        t1 = (t1 + t0);
        t2 = (t2 + t1);
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t2 = 0x8C1FE0A2;
            t3 = t7;
            t0 = (mpdrv_check_port(t3));
            t3 = t7;
            t4 = 0x0;
            t3 = (t3 << 1);
            t3 = (t3 + (t7 << 2));
            t5 = t3;
            t6 = t3;
            for (;;) {
                t0 = (*(int *)0x8C47317C);
                t2 = (*(signed char *)((((0xF90 + t0) + t5) + 0x0)));
                if (t2 != 0) {
                    t3 = t6;
                    t0 = (mpdrv_make_devicedata(t3, t7));
                } else {
                    t18 = t2;
                    t20 = t3;
                }
                t4 = (t4 + 0x1);
                t2 = t18;
                t3 = t20;
                t6 = (t6 + 0x1);
                t5 = (t5 + 0x1);
                if ((int)t4 >= (int)0x6) {
                    break;
                }
            }
        } else {
            t23 = t1;
        }
        t1 = t23;
        t7 = (t7 + 0x1);
    }
    return 0x0;
}

int fmMngExecServer(int a4, int a5, int a6)
{
    int t0;
    int t46;
    int t2;
    int t4;
    int t23;

    t0 = *(int *)0x8C20CA44;
    t46 = 0x0;
    if (t0 == 0) {
    } else {
        t2 = *(int *)((t0 + 0x1C));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    *(unsigned int *)((t0 + 0x1C)) = 0x0;
                    *(unsigned int *)(((*(int *)0x8C20CA44) + 0x20)) = 0x0;
                } else {
                    t4 = fmMngWriteData(t0, a5, a6);
                    if (t4 != 1) {
                        *(unsigned int *)(((*(int *)0x8C20CA44) + 0x1C)) = 0x0;
                        if (t4 != 0) {
                            *(unsigned int *)(((*(int *)0x8C20CA44) + 0x20)) = 0x3;
                        } else {
                            *(unsigned int *)(((*(int *)0x8C20CA44) + 0x20)) = 0x1;
                        }
                        *(unsigned int *)(((*(int *)0x8C20CA44) + 0x2C)) = t4;
                    }
                }
            } else {
                t23 = fmMngReadData(t0);
                *(unsigned int *)(((*(int *)0x8C20CA44) + 0x1C)) = 0x0;
                if (t23 != 0) {
                    *(unsigned int *)(((*(int *)0x8C20CA44) + 0x20)) = 0x3;
                } else {
                    *(unsigned int *)(((*(int *)0x8C20CA44) + 0x20)) = 0x1;
                }
                *(unsigned int *)(((*(int *)0x8C20CA44) + 0x2C)) = t23;
            }
        }
        t46 = (*(int *)(((*(int *)0x8C20CA44) + 0x20)));
    }
    return t46;
}
