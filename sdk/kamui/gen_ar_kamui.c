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


int kmytex_GetSmallVQprofile(int a4, int a5)
{
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 3) {
                if (a5 != 4) {
                    if (a5 != 5) {
                        if (a5 != 6) {
                            if (a5 != 7) {
                                if (a5 == 8) {
                                    *(unsigned int *)((a4 + 0x0)) = 0x8000;
                                    *(unsigned int *)((a4 + 0x4)) = 0x800;
                                    *(unsigned int *)((a4 + 0x8)) = 0x560;
                                    *(unsigned int *)((a4 + 0xC)) = 0xD60;
                                    *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x0)) = 0x7000;
                            *(unsigned int *)((a4 + 0x4)) = 0x400;
                            *(unsigned int *)((a4 + 0x8)) = 0x400;
                            *(unsigned int *)((a4 + 0xC)) = 0x1000;
                            *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
                            return 0x1;
                        }
                        *(unsigned int *)((a4 + 0x0)) = 0x6000;
                        *(unsigned int *)((a4 + 0x4)) = 0x200;
                        *(unsigned int *)((a4 + 0x8)) = 0x160;
                        *(unsigned int *)((a4 + 0xC)) = 0xF60;
                        *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
                        return 0x1;
                    }
                    *(unsigned int *)((a4 + 0x0)) = 0x5000;
                    *(unsigned int *)((a4 + 0x4)) = 0x100;
                    *(unsigned int *)((a4 + 0x8)) = 0x100;
                    *(unsigned int *)((a4 + 0xC)) = 0x1000;
                    *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
                    return 0x1;
                }
                *(unsigned int *)((a4 + 0x0)) = 0x4000;
                *(unsigned int *)((a4 + 0x4)) = 0x80;
                *(unsigned int *)((a4 + 0x8)) = 0x60;
                *(unsigned int *)((a4 + 0xC)) = 0xFE0;
                *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
                return 0x1;
            }
            *(unsigned int *)((a4 + 0x0)) = 0x3000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x40;
            *(unsigned int *)((a4 + 0xC)) = 0xFC0;
            *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
            return 0x1;
        }
        *(unsigned int *)((a4 + 0x0)) = 0x2000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xFA0;
        *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
        return 0x1;
    }
    *(unsigned int *)((a4 + 0x0)) = 0x1000;
    *(unsigned int *)((a4 + 0x4)) = 0x80;
    *(unsigned int *)((a4 + 0x8)) = 0x20;
    *(unsigned int *)((a4 + 0xC)) = 0xF90;
    *(unsigned int *)((a4 + 0x10)) = ((int)((unsigned int)0x800 / (unsigned int)(*(int *)((a4 + 0x4)))));
    return 0x1;
}


int FBfree(int a4, int a5)
{
    int t0;
    int t3;
    int t12;
    int t4;
    int t5;
    int t7;
    int t8;
    int t47;
    int t17;
    int t18;
    int t33;
    int t34;
    int t36;
    int t37;
    int t9;
    int t38;
    int stk[11];

    *(unsigned short *)(((int)stk + 8)) = a4;
    t0 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + ((t0 << 2) << 2));
    kmytex_FBDeQueueEntry((*(int *)(((int)stk + 4))), ((0x8C20C9EC + ((t0 << 2) << 2)) + 0x4), a5);
    t3 = *(int *)(((0x8C20C9EC + ((t0 << 2) << 2)) + 0x8));
    t12 = 0x0;
    if (t3 != 0) {
        t4 = t3;
        t5 = 0x0;
        for (;;) {
            t7 = *(int *)((a5 + 0xC));
            t8 = *(int *)((t4 + 0xC));
            if ((t8 != ((*(int *)((a5 + 0x10))) + t7)) && (t9 = *(int *)((t4 + 0x10)), t7 != (t9 + t8))) {
                t4 = (*(int *)((t4 + 0x8)));
            } else {
                t5 = t4;
                t4 = 0x0;
            }
            if (t4 == 0) {
                break;
            }
        }
        t12 = t5;
    }
    t47 = a5;
    if (t12 != 0) {
        t17 = t12;
        t18 = a5;
        for (;;) {
            if ((*(int *)((t17 + 0xC))) == ((*(int *)((t18 + 0xC))) + (*(int *)((t18 + 0x10))))) {
                *(unsigned int *)((t17 + 0xC)) = (*(int *)((t18 + 0xC)));
                *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) + (*(int *)((t18 + 0x10))));
            } else {
                *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) + (*(int *)((t18 + 0x10))));
            }
            kmytex_FBFreeEntry(t18);
            kmytex_FBDeQueueEntry(((0x8C20C9EC + ((t0 << 2) << 2)) + 0x8), ((0x8C20C9EC + ((t0 << 2) << 2)) + 0xC), t17);
            t18 = t17;
            t33 = *(int *)(((0x8C20C9EC + ((t0 << 2) << 2)) + 0x8));
            t17 = 0x0;
            if (t33 != 0) {
                t34 = t33;
                for (;;) {
                    t36 = *(int *)((t18 + 0xC));
                    t37 = *(int *)((t34 + 0xC));
                    if ((t37 != ((*(int *)((t18 + 0x10))) + t36)) && (t38 = *(int *)((t34 + 0x10)), t36 != (t38 + t37))) {
                        t34 = (*(int *)((t34 + 0x8)));
                    } else {
                        t17 = t34;
                        t34 = 0x0;
                    }
                    if (t34 == 0) {
                        break;
                    }
                }
            }
            if (t17 == 0) {
                break;
            }
        }
        t47 = t18;
    }
    *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + ((t0 << 2) << 2));
    kmytex_FBEnQueueTop(((*(int *)(((int)stk + 4))) + 0x8), ((0x8C20C9EC + ((t0 << 2) << 2)) + 0xC), t47);
    return 0x0;
}


