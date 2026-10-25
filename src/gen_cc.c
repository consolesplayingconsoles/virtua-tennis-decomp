/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BCDtoDEC(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int cmp_fname(int, int);
int direntry(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetSearchID(int);
int gdFsMemcpy(int, int, int);
int gdFsSetGlobalErrG(int);
int gdFsStrcmpi(int, int);
int get_fat(int, int, int, int);
int kdDevGetFD(int, int);
int kdExecGun(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kdRecvFrame(void);
int kdSetBlockWrite(int, ...);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_exit(void);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int nlLineSendVertex(int, int, int);
int pdVibMxIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int search_fat_backward(int, int, int, int);
int set_fat(int, int, int);
int syChainDeleteHandler(int);
int syRtcAicaGetCount(int);
int thunk_FUN_8c1e6b1c(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_write_retry(int, int, int);
int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5);
int write_fat_1(int a4);
int search_subst_fat_top(int a4);
int set_file_info(int a4, int a5);
int gdFsOpenG(int a4, int a5);
int kmiProcessVertex_00(int a4, int a5, int a6, int a7);
int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5);
int vmsfs_c_setfname(int a4, int a5, int a6);
int vmsfs_fread(int a4, int a5, int a6);
int gdFsSearchName(int a4, int a5, int a6);
int search_dir(int a4, int a5, int a6);
int check_fat_all(int a4, int a5, int a6, int a7);
int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7);
int syRtcGetCountForce(void);
int kdDevGetLCDInfo(int a4, int a5);
int vmsfs_write_disk_image(int a4, int a5);
int vmsio_ismount(int a4);
int gdFsSetDirG(int a4);
void kdDmaEndHandler0(int a4, int a5);
int buDefragDisk(int a4, int a5);
void kdExitSystem(void);
int vmsfs_fseek(int a4, int a5, int a6, int a7);
int pdVibMxSetStopTime(int a4, int a5);
int kdDevGetStorageInfo(int a4, int a5);
int check_fat_xross(int a4, int a5);
int gdFsFinishG(void);
int get_vmstime(int a4, int a5);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);
int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9);
int pdTmrSetTimeCallback(int a4, int a5, int a6, int a7);
int pdVmsLcdIsReady(int a4);

int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = ((*(float *)((a5 + 0x0))) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = (((*(float *)((a6 + 0x4))) - f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = (((*(float *)((a6 + 0x4))) + f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int write_fat_1(int a4)
{
    int t1;
    int t13;
    int t2;
    int t6;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x10));
    t13 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t6 = vmsfs_write_retry(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t2), (((t2 << 8) << 1) + (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x24)))));
            if ((int)t6 < 0) {
                break;
            }
            set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t2), 0xFFFA);
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t1) {
                return 0x0;
            }
        }
        set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t2), 0xFFFF);
        t13 = t6;
    }
    return t13;
}

int search_subst_fat_top(int a4)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t13;
    int t20;
    int t24;
    int stk[9];

    int R0;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1EE2CE:;
    t3 = *(int *)((((R4 * 0x148) + 0x8C464598) + 0x1C));
    t4 = *(int *)((t3 + 0x20));
    t5 = *(int *)((t3 + 0x1C));
    t6 = *(int *)((t3 + 0x10));
    *(unsigned int *)(((int)stk + 12)) = (R10);
    *(unsigned int *)(((int)stk + 8)) = (R9);
    *(unsigned int *)(((int)stk + 4)) = (R8);
    R10 = (R4);
    R11 = (0xFFFC);
    R12 = (t6);
    R4 = (t3);
    R8 = (t5);
    R9 = (((t4 + t5) - 1));
    goto L_8C1EE2F8;
    L_8C1EE2F8:;
    t13 = search_fat_backward(R10, R11, R8, R9);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R13 = (t13);
    if (((int)t13 >= 0)) goto L_8C1EE30E;
    goto L_8C1EE30A;
    L_8C1EE30A:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0xFFFFFFFF);
    goto L_8C1EE33A;
    L_8C1EE33A:;
    return R0;
    L_8C1EE30E:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = (0x0);
    if (((int)R12 <= 0)) goto L_8C1EE330;
    goto L_8C1EE314;
    L_8C1EE314:;
    t20 = (unsigned short)(get_fat(R10, (R13 - R14), R6, R7)) == R11;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t20) goto L_8C1EE32A;
    goto L_8C1EE322;
    L_8C1EE322:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R9 = (((R13 - R14) - 1));
    goto L_8C1EE330;
    L_8C1EE330:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((R14 != R12)) goto L_8C1EE2F8;
    goto L_8C1EE334;
    L_8C1EE334:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (((R13 - R12) + 0x1));
    goto L_8C1EE33A;
    L_8C1EE32A:;
    t24 = (int)(R14 + 0x1) < (int)R12;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = ((R14 + 0x1));
    if (t24) goto L_8C1EE314;
    goto L_8C1EE330;
}

int set_file_info(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t16;

    *(unsigned int *)((a5 + 0x4)) = (unsigned char)(*(signed char *)((a4 + 0x0)));
    t1 = (a5 + 0x10);
    t2 = (a4 + 0x4);
    for (;;) {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a5 + 0x1C)) {
            break;
        }
    }
    *(unsigned char *)((a5 + 0x1C)) = 0x0;
    t4 = (a5 + 0x20);
    t5 = (a4 + 0x10);
    for (;;) {
        t6 = *(signed char *)((t5 + 0x0));
        t5 = (t5 + 0x1);
        *(unsigned char *)((t4 + 0x0)) = t6;
        t4 = (t4 + 0x1);
        if ((unsigned int)t4 >= (unsigned int)(a5 + 0x28)) {
            break;
        }
    }
    *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))(a4, 0x2));
    *(unsigned int *)((a5 + 0x28)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))(a4, 0x18));
    *(unsigned char *)((a5 + 0xA)) = (*(signed char *)((a4 + 0x1)));
    t16 = ((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))(a4, 0x1A);
    *(unsigned short *)((a5 + 0x8)) = t16;
    return t16;
}

int gdFsOpenG(int a4, int a5)
{
    int t2;
    int t5;
    int t7;
    int t9;
    int t10;
    int t19;

    t2 = a5;
    if (a5 == 0) {
        t2 = (*(int *)(((*(int *)0x8C20C204) + 0x10)));
    }
    t5 = gdFsSearchName(a4, t2, 0x0);
    if (t5 == 0) {
        gdFsSetGlobalErrG(0xFFFFFFF8);
        t19 = 0x0;
    } else {
        t7 = *(int *)0x8C20C204;
        t9 = 0x0;
        t10 = (*(int *)((t7 + 0x18)));
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((t7 + 0x0)))) {
                t9 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t9);
                return 0x0;
            }
            if ((*(short *)((t10 + 0x4C))) == 0) {
                break;
            }
            t10 = (t10 + 0x54);
            t9 = (t9 + 0x1);
        }
        gdFsCreateHnG(t10, t5, ((*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x0))) + 0x96), (*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x4))));
        gdFsSetGlobalErrG(0x0);
        t19 = t10;
    }
    return t19;
}

int kmiProcessVertex_00(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t13;
    int t15;
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
        t13 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t15 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t15 + 0x14)) = (*(int *)((t13 + 0x18)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = ((*(float *)((a5 + 0x0))) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = ((*(float *)((a6 + 0x0))) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = ((*(float *)((a6 + 0x4))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = ((*(float *)((a6 + 0x0))) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = ((*(float *)((a6 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int vmsfs_c_setfname(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t9;
    int t11;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t8;

    t0 = ((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x2C);
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x39)) {
            break;
        }
    }
    t1 = ((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x3C);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x49)) {
            break;
        }
    }
    t9 = a5;
    t11 = 0x8C462180;
    if ((unsigned int)a5 < (unsigned int)(a5 + 0xC)) {
        t3 = a5;
        t4 = a5;
        t5 = ((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x2C);
        for (;;) {
            t6 = *(signed char *)((t4 + 0x0));
            if (t6 != 0) {
                t7 = *(signed char *)((t3 + 0x0));
                t3 = (t3 + 0x1);
                t4 = (t4 + 0x1);
                *(unsigned char *)((t5 + 0x0)) = t7;
                t5 = (t5 + 0x1);
                if ((unsigned int)t4 >= (unsigned int)(a5 + 0xC)) {
                    t8 = t7; break;
                }
                continue;
            }
            t8 = t6; break;
        }
        t9 = t3;
        t11 = t8;
    }
    if ((unsigned int)a6 < (unsigned int)(a6 + 0xC)) {
        t13 = t11;
        t14 = a6;
        t15 = ((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x3C);
        t16 = a6;
        for (;;) {
            if ((*(signed char *)((t14 + 0x0))) != 0) {
                t18 = *(signed char *)((t16 + 0x0));
                t16 = (t16 + 0x1);
                t13 = t18;
                t14 = (t14 + 0x1);
                *(unsigned char *)((t15 + 0x0)) = t13;
                t15 = (t15 + 0x1);
                if ((unsigned int)t14 >= (unsigned int)(a6 + 0xC)) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    return t9;
}

int vmsfs_fread(int a4, int a5, int a6)
{
    int t24;
    int t14;
    int t2;
    int t6;
    int t3;
    int t4;
    int t5;

    t24 = 0xFFFFFF00;
    if (a4 != 0) {
        t14 = 0xFFFFFF01;
        if ((*(signed char *)(((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C464598) + 0x2))) == 0) {
        } else {
            t2 = *(int *)((a4 + 0x28));
            *(unsigned int *)(((0x8C464598 + (t2 * 0x148)) + 0x30)) = 0x1;
            *(unsigned int *)(((0x8C464598 + (t2 * 0x148)) + 0x34)) = a6;
            t6 = 0x0;
            if ((int)a6 > 0) {
                t3 = 0x0;
                t4 = a5;
                for (;;) {
                    t5 = vmsfs_fread1(a4, t4);
                    if ((int)t5 < 0) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    t4 = (t4 + 0x200);
                    if ((int)t3 >= (int)a6) {
                        return 0x0;
                    }
                }
                t6 = t5;
            }
            t14 = t6;
        }
        t24 = t14;
    }
    return t24;
}

int gdFsSearchName(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)((a5 + 0x0));
    t1 = gdFsGetSearchID(a4);
    t8 = 0x0;
    if ((int)t0 > 0) {
        t2 = 0x0;
        t3 = (a5 + 0x10);
        for (;;) {
            if ((unsigned char)(*(signed char *)((t3 + 0x9))) == (unsigned char)t1) {
                if (a6 == 1) {
                    t5 = thunk_FUN_8c1e6b1c();
                    if (t5 != 1) {
                        t2 = (t2 + 0x1);
                        t3 = (t3 + 0x2C);
                        if ((int)t2 >= (int)t0) {
                            return 0x0;
                        }
                        continue;
                    }
                    break;
                }
                t6 = gdFsStrcmpi(a4, (t3 + 0xA));
                if (t6 == 1) {
                    break;
                }
                t2 = (t2 + 0x1);
                t3 = (t3 + 0x2C);
                if ((int)t2 >= (int)t0) {
                    return 0x0;
                }
                continue;
            }
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x2C);
            if ((int)t2 >= (int)t0) {
                return 0x0;
            }
        }
        t8 = (t2 + 0x1);
    }
    return t8;
}

int search_dir(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t6;
    int t8;

    t1 = 0x0;
    t2 = (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x28)));
    for (;;) {
        if ((int)t1 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = *(signed char *)((t2 + 0x0));
        if (((unsigned char)t6 != 51) && ((unsigned char)t6 != 0xCC)) {
            
            t2 = (t2 + 0x20);
            t1 = (t1 + 0x1);
            continue;
        }
        t8 = cmp_fname(a5, (t2 + 0x4));
        if (t8 != 0) {
            break;
        }
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    set_file_info(t2, a6);
    return t1;
}

int check_fat_all(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t3 = get_fat(a4, t0, a6, a7);
        if (((unsigned short)t3 != 0xFFFC) && (((unsigned short)t3 != 0xFFFF) && ((unsigned short)t3 != 0xFFFA))) {
            if ((int)t0 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
                if ((int)(unsigned short)t3 < (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
                    t0 = (t0 + 0x1);
                    continue;
                }
                break;
            }
            if ((int)(unsigned short)t3 >= (int)((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))) + 0x1)) {
                break;
            }
            t0 = (t0 + 0x1);
            continue;
        }
        t0 = (t0 + 0x1);
    }
    return 0xFFFFFFFF;
}

int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7)
{
    int t1;
    int t25;
    int t19;
    int t17;
    int t6;
    int t8;
    int stk[10];

    *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x0)) = 0x0;
    if ((*(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x10))) != 0) {
        t1 = pdVibSetUnitInfo(a4, a5, a6, a7, (((int)stk + 8) + 0x8), ((int)stk + 12));
        t6 = (((int (*)(int, int, int, int))((*(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x10)))))((*(int *)(((int)stk + 12))), t1, (((int)stk + 12) + 0x4), (*(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x8)))));
        t8 = t1;
    }
    t25 = t6;
    if (t8 == 0) {
        t19 = 0x18;
        if ((unsigned int)(unsigned char)(*(signed char *)((((a4 * 0x1C) + 0x8C46A904) + 0x18))) > (unsigned int)(*(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x14)))) {
            t17 = *(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x14));
            *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x14)) = (t17 + 0x1);
            t19 = (kdSetGetMediaInfoEx(a4, 0x100, (t17 + 0x1), 0x8C1EF912));
        }
        t25 = t19;
    }
    return t25;
}

int syRtcGetCountForce(void)
{
    int t0;
    int t1;
    int t14;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[9];

    t0 = 0x0;
    for (;;) {
        t1 = syRtcAicaGetCount((((int)stk + 4) + 0x4));
        if (t1 == 0) {
            t0 = 0x1;
        }
        if (t0 != 0) {
            break;
        }
    }
    t14 = 0xFFFFFFFF;
    if (t0 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            t4 = 0x0;
            for (;;) {
                t5 = syRtcAicaGetCount(((int)stk + 4));
                if ((t5 == 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(int *)(((int)stk + 4)), t6 == t7)) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                    if ((int)t4 >= (int)0x3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if (t4 == 3) {
                t3 = 0x1;
            }
            if (t3 != 0) {
                break;
            }
        }
        t14 = (*(int *)(((int)stk + 4)));
    }
    return t14;
}

int kdDevGetLCDInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x4);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x2))) >> 2) >> 2) & 0xF);
    *(unsigned char *)((a4 + 0x6)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 2) & 0x3);
    *(unsigned char *)((a4 + 0x7)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 1) & 0x1);
    return 0x0;
}

int vmsfs_write_disk_image(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t6;

    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0x8C20C78C)));
    t2 = a5;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t6 = vmsfs_write_retry(a4, t3, t2);
        if ((int)t6 < 0) {
            break;
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x200);
    }
    return t6;
}

int vmsio_ismount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0x8C20B048));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)((t1 + 0x0))) != 0) {
        t4 = kdIsChanged(t0);
        if ((t4 == 0) && (t5 = *(int *)((t2 + 0x0)), (t5 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int gdFsSetDirG(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t14;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;

    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)(((*(int *)0x8C20C204) + 0x10));
    t3 = *(int *)((t2 + 0x4));
    t4 = *(int *)((a4 + 0x8));
    t5 = t3;
    if ((int)t3 > (int)t1) {
        t5 = t1;
    }
    *(unsigned int *)((t2 + 0x8)) = t4;
    t14 = 0x0;
    if ((int)t5 > 0) {
        t7 = (a4 + 0x10);
        t8 = (t2 + 0x10);
        t9 = 0x0;
        for (;;) {
            t10 = t8;
            t8 = (t8 + 0x2C);
            t11 = t7;
            t7 = (t7 + 0x2C);
            gdFsMemcpy(t11, t10, 0x2C);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)t5) {
                break;
            }
        }
        t14 = t9;
    }
    *(unsigned int *)((t2 + 0x0)) = t14;
    t20 = 0x0;
    if ((int)t3 < (int)t1) {
        t20 = 0xFFFFFFF4;
    }
    return t20;
}

void kdDmaEndHandler0(int a4, int a5)
{
    int t5;
    int t6;
    int t8;
    int t9;
    int t12;
    int t14;
    int t15;

    _builtin_set_imask(0xF);
    if ((*(int *)0x8C46210C) == 0) {
        *(unsigned int *)0x8C461E68 = ((*(int *)0x8C461E68) + 0x1);
        kdRecvFrame();
        kdExecGun();
        t5 = 0x8C461B9C;
        t6 = 0x8C461B9C;
        t8 = 0x8C461B9C;
        t9 = 0x8C461B9C;
        for (;;) {
            if ((*(int *)((t9 + 0x0))) != 0) {
                t12 = ((int (*)(int, int))(((*(int *)((t8 + 0x0))))))(t5, t6);
            } else {
                t14 = t5;
                t15 = t6;
            }
            t9 = (t9 + 0x4);
            t5 = t14;
            t6 = t15;
            t8 = (t8 + 0x4);
            if ((unsigned int)t9 >= (unsigned int)0x8C461C1C) {
                break;
            }
        }
    } else {
        *(unsigned int *)0x8C46210C = 0x0;
        *(unsigned int *)0x8C462110 = ((*(int *)0x8C462110) + 0x1);
    }
}

int buDefragDisk(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x9);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

void kdExitSystem(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F6920 = ((*(int *)0xA05F6920) & 0xFFFFCFFF);
    syChainDeleteHandler((*(int *)0x8C461B98));
    syChainDeleteHandler((*(int *)0x8C461B9C));
    syChainDeleteHandler((*(int *)0x8C461B94));
    syChainDeleteHandler((*(int *)0x8C461B90));
    mpdrv_exit();
    memset(0x8C461C1C, 0x0, 0x240);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int vmsfs_fseek(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t13;
    int t16;
    int t2;

    t1 = *(int *)((a4 + 0x28));
    *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x38)));
    if ((unsigned int)0x0 < (unsigned int)a5) {
        t3 = 0x0;
        for (;;) {
            if ((*(int *)((a4 + 0x40))) == 0xFFFA) {
                break;
            }
            if ((*(int *)((a4 + 0x34))) == 0) {
                return 0xFFFF0000;
            }
            t2 = 0x40;
            t3 = (t3 + 0x1);
            t2 = (t2 + a4);
            *(unsigned int *)((t2 + 0x0)) = (unsigned short)(get_fat(t1, (*(int *)((a4 + 0x40))), a6, a7));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            if ((unsigned int)t3 >= (unsigned int)a5) {
                return (*(int *)((a4 + 0x34)));
            }
        }
        t13 = 0xFFFF0000;
        if ((*(int *)((a4 + 0x34))) == 0) {
            t13 = 0x0;
        }
        t16 = t13;
    } else {
        t16 = (*(int *)((a4 + 0x34)));
    }
    return t16;
}

int pdVibMxSetStopTime(int a4, int a5)
{
    int t1;
    int t4;
    int stk[9];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = pdVibMxIsReady((*(int *)(((int)stk + 20))));
    if (t1 == 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned char *)((((int)stk + 16) + 0x0)) = 0x0;
    *(unsigned char *)(((((int)stk + 16) + 0x1) + 0x0)) = 0x2;
    *(unsigned char *)((((((int)stk + 16) + 0x1) + 0x1) + 0x0)) = (*(int *)(((int)stk + 24)));
    *(volatile int *)(((int)stk + 20));
    t4 = kdSetBlockWrite(0x0, (((int)stk + 12) + 0x4), 0x1);
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int kdDevGetStorageInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x2);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) >> 2) >> 2) & 0xF);
    *(unsigned short *)((a4 + 0x6)) = ((unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) & 0xF);
    *(unsigned short *)((a4 + 0x8)) = (((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x3))) >> 7) & 0x1);
    return 0x0;
}

int check_fat_xross(int a4, int a5)
{
    int t0;
    int t3;
    int t4;
    int t7;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
            return (unsigned short)a5;
        }
        t3 = direntry(a4, t0);
        t4 = *(signed char *)((t3 + 0x0));
        if (((unsigned char)t4 != 51) && ((unsigned char)t4 != 0xCC)) {
            t0 = (t0 + 0x1);
            continue;
        }
        t7 = ((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))(t3, 0x2);
        if ((unsigned short)a5 == (unsigned short)t7) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return 0xFFFFFFFF;
}

int gdFsFinishG(void)
{
    int t0;
    int t6;
    int t8;
    int t14;
    int t15;
    int t16;
    int t2;

    t0 = *(int *)0x8C20C208;
    if (t0 != 0) {
        t2 = (syChainDeleteHandler(t0));
    }
    t6 = *(int *)0x8C20C20C;
    t8 = t2;
    if (t6 != 0) {
        t8 = (syChainDeleteHandler(t6));
    }
    *(unsigned int *)0x8C20C208 = 0x0;
    *(unsigned int *)0x8C20C20C = 0x0;
    t14 = t8;
    t15 = ((*(int *)0x8C20C204) + 0x1080);
    t16 = 0x0;
    for (;;) {
        if ((int)t16 >= (int)((*(int *)(((*(int *)0x8C20C204) + 0x0))) + 0x1)) {
            break;
        }
        t14 = (gdFsClose(t15));
        t16 = (t16 + 0x1);
        t15 = (t15 + 0x54);
    }
    *(unsigned int *)0x8C20C204 = 0x0;
    return t14;
}

int get_vmstime(int a4, int a5)
{
    int t1;
    int t15;

    t1 = BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x0))));
    *(unsigned short *)((a4 + 0x0)) = (((unsigned short)t1 * (unsigned short)0x64) + (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x1))))));
    *(unsigned char *)((a4 + 0x2)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)((a4 + 0x3)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((a4 + 0x4)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)((a4 + 0x5)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((a4 + 0x6)) = (BCDtoDEC((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t15 = *(signed char *)((0x8C20A924 + ((unsigned char)(*(signed char *)((a5 + 0x7))) & 0x7)));
    *(unsigned char *)((a4 + 0x7)) = t15;
    return t15;
}


int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int pdTmrSetTimeCallback(int a4, int a5, int a6, int a7)
{
    int t10;
    int t2;
    int t7;
    int t5;
    int t11;
    int t13;
    int t14;

    t10 = 0xFFFFFFFE;
    if (((*(int *)((a7 + 0x0))) & 4) != 0) {
        t2 = *(signed char *)((a6 + 0x4));
        t7 = 0x0;
        if ((unsigned char)t2 != 7) {
            t5 = 0xFFFFFFFD;
            if ((unsigned char)t2 != 0xFC) {
                
                t5 = 0xFFFFFFFE;
            }
            t7 = t5;
        }
        t10 = t7;
    }
    t11 = *(signed char *)((a4 + 0x8C20A958));
    if ((*(int *)(((((((unsigned char)t11 << 1) + (unsigned char)t11) << 2) + 0x8C46A8A4) + 0x8))) != 0) {
        t13 = *(int *)(((((((unsigned char)t11 << 1) + (unsigned char)t11) << 2) + 0x8C46A8A4) + 0x4));
        t14 = *(int *)(((((((unsigned char)t11 << 1) + (unsigned char)t11) << 2) + 0x8C46A8A4) + 0x8));
        return ((int (*)(int, int, int, int))(t14))(t10, t13, a6, a7);
    }
    return 0x8C20A958;
}

int pdVmsLcdIsReady(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = kdGetDeviceInfo(a4);
    t1 = kdDevGetLCDInfo((((int)stk + 4) + 0x4), t0);
    if (((int)t1 >= 0) && ((t2 = *(int *)((t0 + 0x0)), t2 == 14) && ((t3 = *(short *)(((int)stk + 8)), (unsigned short)t3 == 1) && ((t4 = *(short *)(((int)stk + 10)), (unsigned short)t4 == 0xC0) && ((t5 = *(short *)(((int)stk + 12)), (unsigned short)t5 == 1) && ((t6 = *(signed char *)(((int)stk + 14)), t6 == 0) && (t7 = *(signed char *)(((int)stk + 15)), t7 == 0))))))) {
        return 0x1;
    }
    return 0x0;
}
