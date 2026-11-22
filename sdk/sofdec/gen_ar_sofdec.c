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


int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7)
{
    int t1;
    int t82;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
    int t30;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t83;
    int t89;
    int t88;
    int t71;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t82 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = (((unsigned char)(*(signed char *)((((t24 + 0x2) + t1) + 0x0))) << 8) | (unsigned char)(*(signed char *)((t24 + t1))));
                        t29 = *(signed char *)((((t24 + 0x3) + t1) + 0x0));
                        t30 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x4);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = (((unsigned char)t29 << 8) | (unsigned char)t30);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t40 = 0x0;
                    t41 = (0x0 + ((t18 << 1) + t14));
                    t42 = 0x0;
                    for (;;) {
                        t43 = *(signed char *)((((t40 + 0x1) + t1) + 0x0));
                        t42 = (t42 + 0x1);
                        t44 = *(signed char *)((t1 + t40));
                        t40 = (t40 + 0x2);
                        *(unsigned short *)((t41 + 0x0)) = (((unsigned char)t43 << 8) | (unsigned char)t44);
                        t41 = (t41 + 0x2);
                        if ((int)t42 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t71 = 0x0;
        }
        t82 = t71;
    }
    t83 = *(int *)((a4 + 0x4));
    t89 = t83;
    if (t83 == 2) {
        t88 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t82);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t89 = t88;
    }
    return t89;
}


