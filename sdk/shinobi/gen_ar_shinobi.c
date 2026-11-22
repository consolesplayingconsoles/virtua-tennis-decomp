/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int resetBackColorZ(int, int, int, float);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int _rnd(int, int);
int bcd2bin(int);
int bcdtime2fad(int);
int buIsFormat(int);
int cameraCalcPoint(int, int, int, int, int, Stk3);
float cpuAimDistRate(int, int, int, int, int, float, float);
int cpuDblSignalPut(int, int, int, int, float);
int cpuShotRange(int, int, int, int, int);
int crcchk(int, int, int, int);
int eepromGetMatch(void);
int fileLoadSync(int, int, int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetGdDcf(void);
extern int get_fat();
int get_vmstime(int, int);
int kmFreeTexture(int);
int kmyMemCopy(int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memmove(int, int, int);
int memset(int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlArcTan(float);
int nlCalcPoint(int, int);
extern int nlCommonTextureClearTextureIndex();
int nlFreePalette(int, int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSpriteClearSpriteIndex(int);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndSeqRequest(int);
int search_fat(int, int);
int search_fat_dir(int, int);
int search_fat_free_xross(int);
int serveGetServer(void);
int set_fat(int, int, int);
int vecAnglesTo(int, int, Stk3);
int vmsfs_diskfree(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int write_dir(int a4, int a5, int a6, int a7);
int nlsndStreamStop(int a4);
int crowdInitAlt(void);
int kmytex_GetSmallVQprofile(int a4, int a5);
float nlObjPutCheapEnvMap(int a4);
int nldispstripTexOfsSub(int a4, int a5);
int _power(int a4, int a5, int a6);
float cpuSglAimScore(int a4, int a5);
float cpuSglAimScore2(int a4, int a5);
int FBfree(int a4, int a5);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int gdDecSubcode(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAiff16(int a4, int a5, int a6, int a7);
int miniPlayerInput(int a4);
float cameraFovForSize(float f4);
int cpuDblSignalDraw(int a4, int a5, int a6, int a7, float f4);
int initSprLoad(float f4);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_getinfo(int a4, int a5);
void matchCheckTiebreak(int a4, int a5, int a6, int a7);

int write_dir(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t12;
    int t13;
    int t17;
    int t25;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    R1008 = (*(int *)((t0 + 0x18)));
    R1012 = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(R1008)) {
            if ((R1012) != 0) {
                t12 = write_fat(a4);
                if ((int)t12 >= 0) {
                    t13 = write_sys(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0x8C464598) + 0x48) + t4) + 0x0))) != 0) {
            R1004 = ((t4 << 8) << 1);
            for (;;) {
                t17 = vmsfs_write_retry(a4, t7, ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x28))) + (R1004)));
                if (t17 == 0) {
                    break;
                }
                if (t17 != 0xFFFFFF01) {
                    R1012 = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7, 0xFFFF);
                    t6 = (search_fat_dir(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6, t5);
                    if (t4 == 0) {
                        t25 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x4A, t6);
                    } else {
                        set_fat(a4, t3, t6);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t17;
            }
            t29 = ((int (*)(int, int))(get_fat))(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0x8C464598) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t29;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(((int (*)(int, int, int, int))(get_fat))(a4, t7, a6, a7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}


int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;
    int t1;

    t0 = *(int *)0x8C20C204;
    if ((t0 != 0) && (t1 = *(short *)((t0 + 0x38)), t1 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t2 = gdFsGetGdDcf();
    t4 = ((int (*)(void))((*(int *)((t2 + 0x0)))))();
    t5 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x8C20C204 = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0x8C20C204) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0x8C20C204) + 0xC)) = t2;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0x8C20C204) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x3C)) = a8;
    t17 = 0x3A;
    t18 = ((*(int *)0x8C20C204) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)0x8C20C204) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)0x8C20C204);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0x8C20C204;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0x8C20C204;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0x8C1DD6E4))();
}


int vmsfs_fwrite1(int a4, int a5)
{
    int t1;
    int t5;
    int t73;
    int t62;
    int t9;
    int t52;
    int t10;
    int t11;
    int t43;
    int t12;
    int t23;
    int t13;
    int t16;
    int t84;
    int t36;

    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t84 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t73 = 0xFFFFFF01;
        if (t5 != 0) {
            t62 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C4645A0))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t52 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x28));
                    t11 = search_fat_free_xross(t10);
                    t43 = 0xFFFFFF04;
                    if ((int)t11 >= 0) {
                        t12 = vmsfs_write_retry(t10, t11, a5);
                        if ((int)t12 < 0) {
                            t23 = t12;
                            if (t12 == 0xFFFFFF01) {
                            } else {
                                t13 = t11;
                                for (;;) {
                                    set_fat(t10, t13, 0xFFFF);
                                    t13 = (search_fat(t10, 0xFFFC));
                                    if ((int)t13 < 0) {
                                        break;
                                    }
                                    t16 = vmsfs_write_retry(t10, t13, a5);
                                    if (t16 == 0) {
                                        set_fat(t10, t13, 0xFFFA);
                                        if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t13;
                                            *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                            return 0x0;
                                        }
                                        set_fat(t10, (*(int *)((a4 + 0x3C))), t13);
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t13;
                                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                        return 0x0;
                                    }
                                }
                                t23 = 0xFFFFFF04;
                            }
                            t36 = t23;
                        } else {
                            set_fat(t10, t11, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t11;
                            } else {
                                set_fat(t10, (*(int *)((a4 + 0x3C))), t11);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t11;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t36 = 0x0;
                        }
                        t43 = t36;
                    }
                    t52 = t43;
                }
                t62 = t52;
            }
            t73 = t62;
        }
        t84 = t73;
    }
    return t84;
}

int vmsfs_getinfo(int a4, int a5)
{
    int t48;
    int t1;
    int t3;
    int t38;
    int t6;
    int t33;
    int t7;
    int t11;
    int t15;
    int t16;
    int t17;
    int t43;
    int t4;
    int t5;
    int t9;
    int t10;
    int stk[9];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = R1004, t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t33 = 0xFFFFFF03;
                if ((int)t6 >= 0) {
                    t7 = t6;
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t10 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20)));
                        t10 = (t10 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t10 + t7))));
                    }
                    t15 = t10;
                    t16 = (((int)stk + 4) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 4) + 0x4));
                    *(unsigned short *)((a5 + 0x20)) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))) + 0x1);
                    *(unsigned short *)((a5 + 0x22)) = (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)));
                    *(unsigned short *)(((0x26 + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x0));
                    *(unsigned short *)((a5 + 0x24)) = (*(short *)((a5 + 0x26)));
                    *(unsigned short *)((a5 + 0x28)) = (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x38)));
                    *(unsigned short *)(((0x2A + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x1));
                    *(unsigned short *)((a5 + 0x2C)) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x2C))) + 0x1);
                    *(unsigned short *)((a5 + 0x2E)) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
}

