/* Straight-line functions with calls and guards (batch gen_sa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int abs(int);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int ballInit(int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int close_file_handle(int);
int cpuAimPointSet(int, int, float, float);
float cpuLineXAtZ(Stk3, Stk3, float);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int, int, int);
int memcmp(int, int, int);
int miniBallObjSpawn(void);
int miniBowlingScore(void);
int miniLaunchBall(void);
int miniMessageSpawn(int);
int mpdrv_memset_l(int, int, int);
int nlArcTan2(int, int, float, float);
int nlLocate(int, int);
int nlRand(void);
float nlRandom(void);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int serveNextPoint(void);
int set_vmstime(int, int);
Stk3 vecMake(float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int cpuDblAimAddLv16(int a4, int a5);
int miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int cpuReachRange(int a4, int a5, float f4, float f5, float f6);
int cpuSglAimLv17(int a4, int a5, int a6, float f4, float f5);
int kmyRegisterBGPlane(int a4);
int vmsfs_fclose(int a4, int a5);
int vmsfs_xcreate(int a4, int a5, int a6, int a7);
int vmsfs_fcreate(int a4, int a5, int a6, int a7);
int ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int check_caps(int a4);
int ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
float nlLog(float f4);
int ADX_DecodeInfoExADPCM2(int a4, int a5, int a6);
int make_header(int a4, int a5);
int _rsfts(int a4, int a5, int a6);
int mpdrv_clear_deviceinfo(int a4);
int fmMngNum2Bit(int a4, int a5, int a6);
int _lsfts(int a4, int a5, int a6);
int kmiInitVertexBufferDesc(int a4);
int angDiff(int a4, int a5);
int ndbKeyEqual(int a4, int a5);
int rankNameMatch(int a4, int a5, int a6, int a7);
int ADXB_CheckAiff(int a4);
int ADXB_CheckWav(int a4);
int ADXB_CheckAu(int a4);
int gdFsCheckMedia(int a4);
int unlockTestW2(int a4);
int resTitleLoadInit(void);
int selSlot0FlagSet(void);
float emotRetOne(void);


int vmsfs_fclose(int a4, int a5)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_5 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C1EC53E;
    v0_0 = (0xFFFFFF00);
    L_8C1EC67A:;
    return v0_0;
    L_8C1EC53E:;
    v0_4 = (0x8C464598);
    v0_3 = (0x148);
    v0_1 = (0x0);
    if (!(((*(signed char *)(((((*(int *)((v0_0 + 0x28))) * 0x148) + 0x8C464598) + 0x2))) != 0))) goto L_8C1EC672;
    v0_2 = (vmsio_ismount((*(int *)((v0_0 + 0x28))))) != 0;
    if (v0_2) goto L_8C1EC564;
    goto L_8C1EC672;
    L_8C1EC672:;
    close_file_handle(v0_0);
    v0_0 = (v0_1);
    goto L_8C1EC67A;
    L_8C1EC564:;
    if (((*(signed char *)(((((*(int *)((v0_0 + 0x28))) * v0_3) + v0_4) + 0x8))) != 0)) goto L_8C1EC576;
    goto L_8C1EC672;
    L_8C1EC576:;
    v0_2 = (vmsio_isready((*(int *)((v0_0 + 0x28))))) != 0;
    if (v0_2) goto L_8C1EC588;
    vmsfs_unmount((*(int *)((v0_0 + 0x28))));
    goto L_8C1EC672;
    L_8C1EC588:;
    v0_2 = (int)(buIsFormat((*(int *)((v0_0 + 0x28))))) < 0;
    if (v0_2) goto L_8C1EC672;
    v0_2 = ((*(int *)((v0_0 + 0x28))));
    if (((*(int *)((v0_0 + 0x4))) == 0)) goto L_8C1EC670;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C1EC5BC;
    *(unsigned int *)((((v0_2 * v0_3) + v0_4) + 0x30)) = 0x1;
    v0_1 = *(int *)((((v0_2 * v0_3) + v0_4) + 0x4));
    *(unsigned int *)((((v0_2 * v0_3) + v0_4) + 0x34)) = (*(int *)((((((v0_1 << 2) + v0_1) << 2) << 2) + 0x8C20C75C)));
    v0_4 = (((v0_2 * v0_3) + v0_4));
    L_8C1EC5BC:;
    v0_3 = (*(int *)((v0_0 + 0x8))) != 1;
    v0_1 = ((direntry(v0_2, (*(int *)((v0_0 + 0x2C))))));
    if (v0_3) goto L_8C1EC5F8;
    v0_4 = (0xCC);
    L_8C1EC5FA:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_0 + 0x1)));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x2, (*(int *)((v0_0 + 0x38))));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x18, (*(int *)((v0_0 + 0x30))));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x1A, (*(short *)((v0_0 + 0x2))));
    v0_3 = ((v0_1 + 0x10));
    v0_4 = ((v0_1 + 0x4));
    v0_5 = ((v0_0 + 0x10));
    L_8C1EC63C:;
    if (((unsigned int)v0_4 < (unsigned int)v0_3)) goto L_8C1EC636;
    v0_4 = (v0_3);
    v0_5 = ((v0_0 + 0x20));
    v0_1 = ((v0_1 + 0x18));
    L_8C1EC652:;
    if (((unsigned int)v0_4 < (unsigned int)v0_1)) goto L_8C1EC64C;
    direntry_dirty(v0_2, (*(int *)((v0_0 + 0x2C))));
    v0_3 = write_dir(v0_2);
    v0_1 = (v0_3);
    if (((int)v0_3 < 0)) goto L_8C1EC672;
    write_fat(v0_2);
    L_8C1EC670:;
    v0_1 = (0x0);
    goto L_8C1EC672;
    L_8C1EC64C:;
    *(unsigned char *)((v0_4 + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    goto L_8C1EC652;
    L_8C1EC636:;
    *(unsigned char *)((v0_4 + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    goto L_8C1EC63C;
    L_8C1EC5F8:;
    v0_4 = (0x33);
    goto L_8C1EC5FA;
}

int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_1 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = (v0_2 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((v0_2 * 0x148) + 0x8C464598);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (v0_2);
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2))) == 0)) goto L_8C1EC214;
    v0_5 = (vmsio_isready(v0_2)) != 0;
    if (v0_5) goto L_8C1EC1FE;
    vmsfs_unmount(v0_2);
    L_8C1EC214:;
    v0_0 = (0xFFFFFF01);
    L_8C1EC30E:;
    return v0_0;
    L_8C1EC1FE:;
    v0_5 = (vmsio_ismount(v0_2)) == 0;
    if (v0_5) goto L_8C1EC214;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) + 0x8C464598) + 0x8))) != 0)) goto L_8C1EC21A;
    goto L_8C1EC214;
    L_8C1EC21A:;
    v0_5 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_5) goto L_8C1EC22A;
    v0_0 = (0xFFFFFF03);
    goto L_8C1EC30E;
    L_8C1EC22A:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x38))) == 0)) goto L_8C1EC2B0;
    v0_5 = (int)(check_isopen()) < 0;
    if (v0_5) goto L_8C1EC2B0;
    v0_5 = (int)(search_dir(v0_2, v0_1, (((int)stk + 4) + 0x10))) < 0;
    if (v0_5) goto L_8C1EC280;
    v0_0 = (0xFFFFFF06);
    goto L_8C1EC30E;
    L_8C1EC280:;
    v0_5 = (int)(search_exec_file(v0_2, (((int)stk + 4) + 0x10))) < 0;
    if (v0_5) goto L_8C1EC294;
    v0_0 = (0xFFFFFF09);
    goto L_8C1EC30E;
    L_8C1EC294:;
    v0_3 = (unsigned short)(get_fat(v0_2, 0x0, v0_3, v0_4)) != 0xFFFC;
    if (v0_3) goto L_8C1EC2B0;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_8C1EC2B0;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_8C1EC2D0;
    v0_0 = (0xFFFFFF07);
    goto L_8C1EC30E;
    L_8C1EC2B0:;
    v0_0 = (0xFFFFFF08);
    goto L_8C1EC30E;
    L_8C1EC2D0:;
    *(unsigned int *)((v0_4 + 0x8)) = 0x1;
    *(unsigned int *)((v0_4 + 0x4)) = 0x2;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = 0x1;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_2 = ((v0_4 + 0x10));
    L_8C1EC2F6:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_8C1EC2F0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_8C1EC30E;
    L_8C1EC2F0:;
    *(unsigned char *)((v0_2 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x1));
    goto L_8C1EC2F6;
}

int vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int stk[20];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    if (((*(signed char *)(((v0_3 * 0x148) + 0x8C46459A))) == 0)) goto L_8C1EC372;
    v0_3 = (vmsio_isready(v0_2)) != 0;
    if (v0_3) goto L_8C1EC35A;
    vmsfs_unmount(v0_2);
    L_8C1EC372:;
    v0_0 = (0xFFFFFF01);
    L_8C1EC456:;
    return v0_0;
    L_8C1EC35A:;
    v0_3 = (vmsio_ismount(v0_2)) == 0;
    if (v0_3) goto L_8C1EC372;
    if (((*(signed char *)(((v0_2 * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1EC3B4;
    goto L_8C1EC372;
    L_8C1EC3B4:;
    v0_3 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_3) goto L_8C1EC3C4;
    v0_0 = (0xFFFFFF03);
    goto L_8C1EC456;
    L_8C1EC3C4:;
    v0_3 = (int)(check_isopen()) < 0;
    if (v0_3) goto L_8C1EC3FC;
    v0_3 = (int)(search_dir(v0_2, v0_1, (((int)stk + 4) + 0x8))) < 0;
    if (v0_3) goto L_8C1EC3F0;
    v0_4 = clear_file(v0_2, v0_1);
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_8C1EC3F0;
    v0_0 = (v0_3);
    goto L_8C1EC456;
    L_8C1EC3F0:;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_8C1EC3FC;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_8C1EC41C;
    v0_0 = (0xFFFFFF07);
    goto L_8C1EC456;
    L_8C1EC3FC:;
    v0_0 = (0xFFFFFF08);
    goto L_8C1EC456;
    L_8C1EC41C:;
    *(unsigned int *)((v0_4 + 0x8)) = v0_0;
    *(unsigned int *)((v0_4 + 0x4)) = 0x1;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = v0_0;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_3 = ((v0_4 + 0x10));
    L_8C1EC43E:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_8C1EC438;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_8C1EC456;
    L_8C1EC438:;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((v0_3 + 0x1));
    goto L_8C1EC43E;
}


int check_caps(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;

    t10 = *(int *)((a4 + 0x1C));
    t11 = *(int *)((t10 + 0x0));
    if (((int)t11 >= (int)0x1) && (((int)t11 <= (int)0x7FF) && ((t0 = *(int *)((t10 + 0x0)), t1 = *(int *)((t10 + 0x8)), t0 == t1) && ((t2 = *(int *)((t10 + 0xC)), (int)t2 >= 0) && ((t3 = *(int *)((t10 + 0x0)), (int)t2 < (int)t3) && ((t4 = *(int *)((t10 + 0x14)), (int)t4 >= 0) && ((t5 = *(int *)((t10 + 0x0)), (int)t4 < (int)t5) && ((t6 = *(int *)((t10 + 0x34)), (int)t6 >= 0) && ((t7 = *(int *)((t10 + 0x0)), (int)t6 <= (int)t7) && ((t8 = *(int *)((t10 + 0x38)), (int)t8 >= 0) && (t9 = *(int *)((t10 + 0x0)), (int)t8 <= (int)t9))))))))))) {
        if ((*(int *)(((*(int *)0x8C464594) + 0x8))) == 0) {
            if ((int)(*(short *)((a4 + 0x10))) >= (int)(*(int *)((t10 + 0x10)))) {
                if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(int *)((t10 + 0x18)))) {
                    t0 = *(int *)((t10 + 0x0));
                    if (t0 != 0xFF) {
                        if (t0 != 0x1FF) {
                            if (t0 != 0x3FF) {
                                if (t0 != 0x7FF) {
                                    return 0xFFFFFFFF;
                                }
                                *(unsigned int *)((a4 + 0x4)) = 0x3;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x4)) = 0x2;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                        return 0x0;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x0;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        t0 = *(int *)((t10 + 0x0));
        if (t0 != 0xFF) {
            if (t0 != 0x1FF) {
                if (t0 != 0x3FF) {
                    if (t0 != 0x7FF) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x4)) = 0x2;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int make_header(int a4, int a5)
{
    int stk[2];
    register int t13;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a5 + 0x0)));
    if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)((((int)stk + 4) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)(((((int)stk + 4) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((((int)stk + 4) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((((int)stk + 4) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0)));
    }
    t13 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t13 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t13 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (*(int *)(((a5 + 0x4) + 0x0)));
        }
    }
    return 0x0;
}


int mpdrv_clear_deviceinfo(int a4)
{
    register int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    *(unsigned char *)(((a4 + 0x14) + 0x0)) = 0x28;
    *(unsigned char *)((a4 + 0x15)) = 0x6E;
    *(unsigned char *)((a4 + 0x16)) = 0x6F;
    *(unsigned char *)((a4 + 0x17)) = 0x6E;
    *(unsigned char *)((a4 + 0x18)) = 0x65;
    *(unsigned char *)((a4 + 0x19)) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    *(unsigned char *)((a4 + 0x33)) = 0x0;
    return 0x0;
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t0;

    t1 = (((a6 << 2) << 2) << 2);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    for (;;) {
        if ((int)t1 <= 0) {
            break;
        }
        if ((int)t3 >= (int)0x8) {
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x1);
            t3 = (t3 - 8);
        } else {
            if ((int)t3 > 0) {
                t0 = 0x8;
                for (;;) {
                    t5 = (t5 << 1);
                    if ((int)t3 > 0) {
                        t3 = (t3 - 1);
                    } else {
                        t5 = (t5 | (0x1));
                    }
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = t5;
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0xFFFFFFFF;
            }
            t4 = (t4 + 0x1);
        }
        t1 = (t1 - 1);
    }
    return 0x0;
}


int gdFsCheckMedia(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0x8C209614;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}


