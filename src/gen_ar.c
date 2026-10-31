/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gGdFsGlobalState[];
extern char gNlCommonTextureOffset[];
extern char gNlPaletteCount[];
extern char gNlSoundStreams[];
extern char gNlTextureSurfaces[];
extern char gVmsIoInterface[];
extern char gVmsVolumeStates[];
extern char g_0c2aec84[];
extern char g_0c2b3568[];
extern char g_0c2ee998[];

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int nlResetBackColorZ(int, int, int, float);
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
int cameraCalcPoint(int, int, int, int, int);
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

    t0 = *(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)(((int)stk + 8)))) {
            if ((*(int *)(((int)stk + 12))) != 0) {
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
        if ((*(signed char *)((((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x48) + t4) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((t4 << 8) << 1);
            for (;;) {
                t17 = vmsfs_write_retry(a4, t7, ((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x28))) + (*(int *)(((int)stk + 4)))));
                if (t17 == 0) {
                    break;
                }
                if (t17 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7, 0xFFFF);
                    t6 = (search_fat_dir(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6, t5);
                    if (t4 == 0) {
                        t25 = ((int (*)(int, int, int))((*(int *)(((*(int *)(int)gVmsIoInterface) + 0x10)))))((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x20))), 0x4A, t6);
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
            *(unsigned char *)((((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x48) + t4) + 0x0)) = 0x0;
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

int nlsndStreamStop(int a4)
{
    int t0;
    int t29;
    int t2;
    int t22;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    t29 = t0;
    if (t0 == 1) {
        t2 = *(signed char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1));
        t22 = t2;
        if (t2 != 0) {
            t3 = *(int *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x14));
            t4 = 0x0;
            for (;;) {
                t5 = nlsndG2Read(t3);
                if (t5 == 0) {
                    t4 = (t4 + 0x1);
                    if ((unsigned int)t4 >= (unsigned int)0x40000) {
                        break;
                    }
                    continue;
                }
                t6 = nlsndG2Read(t3);
                t4 = (nlsndG2Read((t6 | 0xA0000000)));
                t4 = (t4 & 0x7FF);
                nlsndG2Write(t4, (t6 | 0xA0000000));
                t9 = nlsndG2Read((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800128));
                if ((t9 & 0x300) == 0x100) {
                    t10 = *(int *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x14));
                    t11 = 0x0;
                    for (;;) {
                        t12 = nlsndG2Read((t10 + 0x4));
                        if (t12 == 0) {
                            t11 = (t11 + 0x1);
                            if ((unsigned int)t11 >= (unsigned int)0x40000) {
                                break;
                            }
                            continue;
                        }
                        t13 = nlsndG2Read((t10 + 0x4));
                        t14 = nlsndG2Read((t13 | 0xA0000000));
                        nlsndG2Write((t14 & 0x7FF), (t13 | 0xA0000000));
                        t4 = (t4 | 0x8000);
                        nlsndG2Write(t4, (t6 | 0xA0000000));
                        nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                        *(unsigned char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1)) = 0x0;
                        return 0x0;
                    }
                    nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                    *(unsigned char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1)) = 0x0;
                    return 0x0;
                }
                t4 = (t4 | 0x8000);
                nlsndG2Write(t4, (t6 | 0xA0000000));
                nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                *(unsigned char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1)) = 0x0;
                return 0x0;
            }
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
            *(unsigned char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1)) = 0x0;
            t22 = 0x0;
        }
        t29 = t22;
    }
    return t29;
}

int crowdInitAlt(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t15;
    int t20;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1E0)) = t0;
        t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0xF);
        }
        *(unsigned int *)(((0x1E4 + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = t1;
        t4 = (int)((int)(nlRand()) / (int)0x3E8);
        t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0xF);
        }
        *(unsigned int *)(((0x1EC + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = t5;
        *(unsigned int *)(((0x1E8 + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0xF)) % (int)(*(int *)((((((*(int *)(((0x1EC + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0))) << 2) << 2) + 0x8C188EC4) + 0x4)))));
        *(unsigned int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1F0)) = 0x64;
        t15 = *(int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1E4));
        t20 = motionSet(((t0 * 0x1F4) + 0x8C344A08), (*(int *)((((((*(int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1EC))) << 2) << 2) + 0x8C188EC4) + 0x0))), 0x1, 0x12764C, ((*(int *)((((((t15 << 1) + t15) << 2) << 2) + 0x8C11F530)))), ((*(int *)0x8C2873D0)), 1.0f);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2D) {
            break;
        }
    }
    return t20;
}

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

float nlObjPutCheapEnvMap(int a4)
{
    int t2;
    int t21;
    float u29;
    float u30;
    float u31;
    int t32;
    float u34;
    float u35;
    int t37;
    int t38;
    int t53;
    int t63;
    int t73;
    int t74;
    int t75;
    float u77;
    float u78;
    int t80;
    int t81;
    int t96;
    int t103;
    float u33[4];
    float u76[4];
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    int T_;
    R4 = a4;
    L_8C0F23A0:;
    t2 = (int)(*(int *)((R4 + 0x0))) < 0;
    R0 = (0x8C0F24CC);
    R2 = ((*(signed char *)(((R4 + 0x3C) + 0x0))));
    R4 = ((R4 + 0x3C));
    F1 = (0.5f);
    if (t2) goto L_8C0F2426;
    goto L_8C0F23AE;
    L_8C0F23AE:;
    R1 = ((*(int *)(((R4 + 0x2C) + 0x0))));
    R4 = (((R4 + 0x2C) + 0x4));
    R6 = (0xFFFFFFFE);
    R7 = ((*(int *)(((R0 + 0x4) + 0x0))));
    F8 = ((*(float *)((R0 + 0x0))));
    goto L_8C0F23B8;
    L_8C0F23B8:;
    if ((R2 == R6)) goto L_8C0F243A;
    goto L_8C0F23BC;
    L_8C0F23BC:;
    if (((R7 & R1) == 0)) goto L_8C0F243A;
    goto L_8C0F23C0;
    L_8C0F23C0:;
    if (((int)R2 <= (int)R6)) goto L_8C0F2442;
    goto L_8C0F23C4;
    L_8C0F23C4:;
    t21 = (*(int *)((R4 + 0x0)));
    R4 = ((R4 + 0x4));
    R5 = t21;
    F0 = (F1);
    if (((R1 & 8) == 0)) goto L_8C0F23D4;
    goto L_8C0F23CE;
    L_8C0F23CE:;
    R5 = (((R5 << 1) + R5));
    goto L_8C0F23D4;
    L_8C0F23D4:;
    R2 = ((*(int *)((R4 + 0x0))));
    goto L_8C0F23D6;
    L_8C0F23D6:;
    R0 = (0x1);
    R4 = ((R4 + 0xC));
    if (((R2 & 0x1) == 0)) goto L_8C0F242A;
    goto L_8C0F23E0;
    L_8C0F23E0:;
    u29 = *(float *)((R4 + 0x0));
    u30 = *(float *)(((R4 + 0x4) + 0x0));
    u31 = *(float *)((((R4 + 0x4) + 0x4) + 0x0));
    t32 = *(int *)(((((R4 + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_prefetch((void *)((((R4 + 0x4) + 0x4) + 0x8) + 0x24));
    u33[0] = u29;
    u33[1] = u30;
    u33[2] = u31;
    u33[3] = F7;
    _builtin_ftrv(u33, u33);
    u34 = F1;
    u34 = u34 + F0 * u33[0];
    u35 = F1;
    u35 = u35 + F0 * u33[1];
    *(float *)(((((((R4 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFF8)) = u34;
    t37 = *(int *)(((((((R4 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0x0));
    *(unsigned int *)(((((((R4 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFFC)) = ((t32 & R0) | ((*(int *)&(u35)) & R6));
    t38 = (R5 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    R2 = (t37);
    R4 = ((((((R4 + 0x4) + 0x4) + 0x8) + 0x24) - 32));
    R5 = ((R5 - 0x1));
    if (t38) goto L_8C0F23D6;
    goto L_8C0F2412;
    L_8C0F2412:;
    R1 = ((*(int *)((R4 + 0x0))));
    R4 = ((R4 + 0x4));
    goto L_8C0F2414;
    L_8C0F2414:;
    if (((int)R1 > 0)) goto L_8C0F23C4;
    goto L_8C0F2418;
    L_8C0F2418:;
    if ((R1 == 0)) goto L_8C0F2426;
    goto L_8C0F241C;
    L_8C0F241C:;
    R1 = ((*(int *)((((R4 + 0x20) + 0x2C) + 0x0))));
    R2 = ((*(signed char *)(((R4 + 0x20) + 0x0))));
    R4 = ((((R4 + 0x20) + 0x2C) + 0x4));
    goto L_8C0F23B8;
    L_8C0F2426:;
    return F0;
    L_8C0F242A:;
    _builtin_prefetch((void *)(R4 + 0x20));
    t53 = (R5 - 0x1) != 0;
    R0 = ((R4 + 0x20));
    R4 = ((R4 - 4));
    R5 = ((R5 - 0x1));
    if (t53) goto L_8C0F23D4;
    goto L_8C0F2436;
    L_8C0F2436:;
    R1 = ((*(int *)((R4 + 0x0))));
    R4 = ((R4 + 0x4));
    goto L_8C0F2414;
    L_8C0F2442:;
    t63 = (*(int *)((R4 + 0x0)));
    R4 = ((R4 + 0x4));
    R5 = t63;
    F0 = (F8);
    if (((R1 & 8) == 0)) goto L_8C0F2452;
    goto L_8C0F244C;
    L_8C0F244C:;
    R5 = (((R5 << 1) + R5));
    goto L_8C0F2452;
    L_8C0F2452:;
    R2 = ((*(int *)((R4 + 0x0))));
    goto L_8C0F2454;
    L_8C0F2454:;
    R0 = (0x1);
    R3 = ((*(int *)((R4 + 0xC))));
    R4 = ((R4 + 0xD));
    if (((R2 & 0x1) == 0)) goto L_8C0F24B6;
    goto L_8C0F245E;
    L_8C0F245E:;
    t73 = *(signed char *)((R4 + 0x0));
    t74 = *(signed char *)(((R4 + 0x1) + 0x0));
    t75 = *(int *)((((R4 + 0x1) + 0xE) + 0x0));
    _builtin_prefetch((void *)(((R4 + 0x1) + 0xE) + 0x24));
    u76[0] = (float)t74;
    u76[1] = (float)t73;
    u76[2] = (float)(signed char)R3;
    u76[3] = 0.0f;
    _builtin_ftrv(u76, u76);
    u77 = F1;
    u77 = u77 + F0 * u76[0];
    u78 = F1;
    u78 = u78 + F0 * u76[1];
    *(float *)((((((R4 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFF8)) = u77;
    t80 = *(int *)((((((R4 + 0x1) + 0xE) + 0x24) - 32) + 0x0));
    *(unsigned int *)((((((R4 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFFC)) = ((t75 & R0) | ((*(int *)&(u78)) & R6));
    t81 = (R5 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    R2 = (t80);
    R4 = (((((R4 + 0x1) + 0xE) + 0x24) - 32));
    R5 = ((R5 - 0x1));
    if (t81) goto L_8C0F2454;
    goto L_8C0F249E;
    L_8C0F249E:;
    R1 = ((*(int *)((R4 + 0x0))));
    R4 = ((R4 + 0x4));
    goto L_8C0F24A0;
    L_8C0F24A0:;
    if (((int)R1 > 0)) goto L_8C0F2442;
    goto L_8C0F24A4;
    L_8C0F24A4:;
    if ((R1 == 0)) goto L_8C0F24B2;
    goto L_8C0F24A8;
    L_8C0F24A8:;
    R1 = ((*(int *)((((R4 + 0x20) + 0x2C) + 0x0))));
    R2 = ((*(signed char *)(((R4 + 0x20) + 0x0))));
    R4 = ((((R4 + 0x20) + 0x2C) + 0x4));
    goto L_8C0F23B8;
    L_8C0F24B2:;
    return F0;
    L_8C0F24B6:;
    _builtin_prefetch((void *)(R4 + 0x20));
    t96 = (R5 - 0x1) != 0;
    R0 = ((R4 + 0x20));
    R4 = ((R4 - 5));
    R5 = ((R5 - 0x1));
    if (t96) goto L_8C0F2452;
    goto L_8C0F24C2;
    L_8C0F24C2:;
    R1 = ((*(int *)((R4 + 0x0))));
    R4 = ((R4 + 0x4));
    goto L_8C0F24A0;
    L_8C0F243A:;
    t103 = *(int *)(((R4 - 8) + 0x0));
    R0 = (t103);
    R4 = ((((R4 - 8) + 0x4) + t103));
    goto L_8C0F2412;
}

int nldispstripTexOfsSub(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t11;
    int t12;
    int t42;
    int t14;
    int t15;
    int t16;
    int t35;
    int t37;
    int t39;
    int t27;
    float u28;
    int stk[20];

    t0 = *(int *)0x8C454FC8;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + (*(int *)0x8C454FC0)));
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmyMemCopy(((t4 & 0x3FFFFFF) | 0xE0000000), (*(int *)0x8C454FC4), t3);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 4))));
    if (t3 == 64) {
        _builtin_prefetch((void *)((*(int *)(((int)stk + 4))) + 0x20));
    }
    t11 = *(int *)0x8C454FC0;
    t12 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t12 + t11)) = ((*(int *)((t12 + t11))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    t42 = t11;
    if ((int)a4 > 0) {
        t14 = t12;
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t14;
            }
            if ((*(int *)0x8C454F3C) != 0) {
                t14 = 0x8C0EEC80;
                nlCalcPoint(t16, (((int)stk + 4) + 0xC));
                u28 = (*(float *)(((int)stk + 24)));
            } else {
                *(float *)(((int)stk + 16)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 20)) = (*(float *)((t16 + 0x4)));
                t27 = t14;
                u28 = (*(float *)((t16 + 0x8)));
            }
            t14 = t27;
            *(float *)(((int)stk + 24)) = (1.0f / u28);
            *(float *)(((int)stk + 28)) = (*(float *)((t16 + 0xC)));
            *(float *)(((int)stk + 32)) = (*(float *)((t16 + 0x10)));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 36)) = t14;
            *(unsigned int *)(((int)stk + 40)) = (*(int *)((t16 + 0x18)));
            t35 = *(int *)(((*(int *)0x8C454FC8) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t35 << 2);
            t37 = *(int *)(((t35 << 2) + (*(int *)0x8C454FC0)));
            t14 = t37;
            t14 = ((unsigned int)t14 >> 16);
            t14 = ((unsigned int)t14 >> 8);
            *(unsigned int *)0xFF00003C = t14;
            *(unsigned int *)0xFF000038 = t14;
            t14 = 0x8C1E28E0;
            kmyMemCopy(((t37 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
            t39 = *(int *)0x8C454FC0;
            t15 = (t15 - 1);
            t14 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)((t14 + t39)) = ((*(int *)((t14 + t39))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t42 = t39;
    }
    return t42;
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

int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7)
{
    int t5;
    int t11;
    int t17;
    int t25;
    int t31;
    int t33;
    int t34;
    int t42;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    L_8C0F3FE0:;
    R4 = ((R4 + ((R6 << 2) << 2)));
    R5 = (((R6 << 2) << 2));
    if ((R7 != 1)) goto L_8C0F4002;
    goto L_8C0F4000;
    L_8C0F4000:;
    R6 = ((*(int *)((R4 + 0xC))));
    goto L_8C0F4002;
    L_8C0F4002:;
    t5 = *(int *)(int)gNlCommonTextureOffset;
    *(unsigned int *)(((int)stk + 4)) = (R6 + t5);
    R13 = ((int)g_0c2aec84);
    R14 = ((((R6 + t5) << 2) << 1));
    if (((unsigned int)(*(int *)((((*(int *)(int)g_0c2aec84) + (((R6 + t5) << 2) << 1)) + 0x0))) <= (unsigned int)0x0)) goto L_8C0F40EA;
    goto L_8C0F401E;
    L_8C0F401E:;
    t11 = *(int *)((R13 + 0x0));
    *(unsigned int *)(((t11 + R14) + 0x0)) = ((*(int *)(((t11 + R14) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((R13 + 0x0))) + R14) + 0x0))) != 0)) goto L_8C0F40EA;
    goto L_8C0F4032;
    L_8C0F4032:;
    t17 = *(int *)((((*(int *)((R13 + 0x0))) + R14) + 0x4));
    R10 = (t17);
    R11 = ((int)gNlTextureSurfaces);
    R12 = ((t17 * 0x3C));
    if (((*(int *)((((*(int *)(int)gNlTextureSurfaces) + (t17 * 0x3C)) + 0x28))) != 0)) goto L_8C0F4070;
    goto L_8C0F404A;
    L_8C0F404A:;
    t25 = kmFreeTexture(((*(int *)((R11 + 0x0))) + R12));
    R4 = (t25);
    if ((t25 == 0)) goto L_8C0F4070;
    goto L_8C0F4058;
    L_8C0F4058:;
    *(unsigned int *)0x8C454C7C = 0x2;
    R0 = (R4);
    goto L_8C0F40EC;
    L_8C0F40EC:;
    return R0;
    L_8C0F4070:;
    *(unsigned int *)((((*(int *)((R11 + 0x0))) + R12) + 0x2C)) = 0x0;
    *(unsigned int *)((((*(int *)((R11 + 0x0))) + R12) + 0x38)) = 0xFFFFFFFF;
    t31 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t31 << 1);
    t33 = *(short *)(((t31 << 1) + (*(int *)0x8C454C80)));
    t34 = ((int (*)(int, int))(nlCommonTextureClearTextureIndex))(R10, R5);
    nlSpriteClearSpriteIndex(t33);
    *(unsigned int *)((((*(int *)((R13 + 0x0))) + R14) + 0x4)) = 0xFFFFFFFF;
    *(unsigned short *)(((*(int *)0x8C454C80) + (*(int *)(((int)stk + 8))))) = 0xFFFFFFFF;
    R12 = (t33);
    if (((*(int *)0x8C1DC888) != 0)) goto L_8C0F40EA;
    goto L_8C0F40AC;
    L_8C0F40AC:;
    t42 = *(int *)0x8C454C90;
    R4 = ((unsigned short)(*(short *)((((((R12 << 2) << 2) << 1) + t42) + 0x16))));
    R5 = ((0x7 & ((unsigned int)(*(int *)((((((R12 << 2) << 2) << 1) + t42) + 0xC))) >> 27)));
    if (((*(int *)(int)g_0c2b3568) == 0)) goto L_8C0F40EA;
    goto L_8C0F40D0;
    L_8C0F40D0:;
    if ((R5 == 5)) goto L_8C0F40DC;
    goto L_8C0F40D6;
    L_8C0F40D6:;
    if ((R5 != 6)) goto L_8C0F40EA;
    goto L_8C0F40DC;
    L_8C0F40DC:;
    if (((int)R4 >= (int)(*(short *)(int)gNlPaletteCount))) goto L_8C0F40EA;
    goto L_8C0F40E4;
    L_8C0F40E4:;
    nlFreePalette(R4, R5, R6, R7);
    goto L_8C0F40EA;
    L_8C0F40EA:;
    R0 = (0x0);
    goto L_8C0F40EC;
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

    t0 = *(int *)(int)gGdFsGlobalState;
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
    *(unsigned int *)(int)gGdFsGlobalState = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)(int)gGdFsGlobalState) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0xC)) = t2;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)(int)gGdFsGlobalState) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)(int)gGdFsGlobalState) + 0x3C)) = a8;
    t17 = 0x3A;
    t18 = ((*(int *)(int)gGdFsGlobalState) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)(int)gGdFsGlobalState) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)(int)gGdFsGlobalState);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)(int)gGdFsGlobalState;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)(int)gGdFsGlobalState;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)(int)gGdFsGlobalState) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0x8C1DD6E4))();
}



int miniPlayerInput(int a4)
{
    int t1;
    int t12;
    int t17;
    int t26;
    int t28;
    float u29;
    int t34;
    int t39;
    int t40;
    int t46;
    int t54;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    L_8C037600:;
    t1 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    R0 = (t1);
    R5 = (0x8C2FBEF0);
    R6 = (0x0);
    if ((t1 == 3)) goto L_8C037624;
    goto L_8C03760C;
    L_8C03760C:;
    if ((R0 == 4)) goto L_8C0376FC;
    goto L_8C037610;
    L_8C037610:;
    if ((R0 == 0)) goto L_8C037640;
    goto L_8C037614;
    L_8C037614:;
    if ((R0 == 5)) goto L_8C037646;
    goto L_8C037618;
    L_8C037618:;
    if ((R0 == 6)) goto L_8C037640;
    goto L_8C03761C;
    L_8C03761C:;
    if ((R0 == 7)) goto L_8C0376FC;
    goto L_8C037620;
    L_8C037620:;
    goto L_8C037718;
    L_8C037718:;
    return R0;
    L_8C0376FC:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    goto L_8C037700;
    L_8C037700:;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    t12 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t12);
    if ((t12 != 3)) goto L_8C037718;
    goto L_8C03770C;
    L_8C03770C:;
    *(unsigned short *)((R4 + 0xD44)) = 0x3;
    *(unsigned short *)((R4 + 0xD46)) = 0x20;
    R0 = (0xD46);
    goto L_8C037718;
    L_8C037640:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    goto L_8C037700;
    L_8C037646:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    t17 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t17);
    if ((t17 != 3)) goto L_8C03765C;
    goto L_8C037656;
    L_8C037656:;
    *(unsigned short *)((R4 + 0xD44)) = 0x1;
    R0 = (0xD44);
    goto L_8C03765C;
    L_8C03765C:;
    R6 = (0x8C23D204);
    R7 = (0x8C10B980);
    F4 = (1.0f);
    if (((*(float *)0x8C23D204) != 1.0f)) goto L_8C03769E;
    goto L_8C037668;
    L_8C037668:;
    t26 = *(int *)0x8C2FBEF0;
    t28 = *(int *)((t26 + 0x24));
    u29 = *(float *)(((((t28 << 2) + t28) << 2) + 0x8C10B984));
    R0 = (0x8C10B984);
    F1 = ((u29 + 97.0f));
    if (((float)(*(int *)((t26 + 0x18))) != (u29 + 97.0f))) goto L_8C03769E;
    goto L_8C03768A;
    L_8C03768A:;
    t34 = *(int *)(((*(int *)((R5 + 0x0))) + 0x24));
    *(unsigned short *)((R4 + 0xD44)) = (*(int *)((((((t34 << 2) + t34) << 2) + R7) + 0x8)));
    R0 = (0xD44);
    goto L_8C03769E;
    L_8C03769E:;
    if ((!((*(float *)((R6 + 0x0))) > F4))) goto L_8C037718;
    goto L_8C0376A4;
    L_8C0376A4:;
    t39 = *(int *)0x8C2FBEF0;
    t40 = *(int *)((t39 + 0x24));
    R0 = (0x8C10B984);
    if (((*(int *)((t39 + 0x18))) != ((int)((*(float *)(((((t40 << 2) + t40) << 2) + 0x8C10B984))) / 1.20000005f) + 0x52))) goto L_8C037718;
    goto L_8C0376CA;
    L_8C0376CA:;
    t46 = *(int *)(((*(int *)((R5 + 0x0))) + 0x24));
    *(unsigned short *)((R4 + 0xD44)) = (*(int *)(((R7 + (((t46 << 2) + t46) << 2)) + 0x8)));
    R0 = (0xD44);
    goto L_8C037718;
    L_8C037624:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    R0 = (0xD46);
    if (((int)(*(int *)(((*(int *)((R5 + 0x0))) + 0x10))) <= 0)) goto L_8C037718;
    goto L_8C037634;
    L_8C037634:;
    t54 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t54);
    if ((t54 == 3)) goto L_8C03770C;
    goto L_8C03763C;
    L_8C03763C:;
    goto L_8C037718;
}



int initSprLoad(float f4)
{
    float u4;
    float u5;

    nlResetBackColorZ(0xFFFFFF, 0xFFFFFF, 0xFFFFFF, f4);
    fileLoadSync(0x8CA80000, 0x8C124DFC, 0x0);
    nlSetCommonTextureOffset(0x0);
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8A);
    *(unsigned int *)0x8C37EA2C = 0x8A;
    *(unsigned int *)0x8C37EA54 = 0x0;
    u4 = *(float *)0x8C0C724C;
    *(float *)0x8C37EA30 = u4;
    u5 = *(float *)0x8C0C7250;
    *(float *)0x8C37EA34 = u5;
    *(float *)0x8C37EA38 = (*(float *)0x8C0C7254);
    *(float *)0x8C37EA44 = 0.0f;
    *(float *)0x8C37EA48 = 0.0f;
    *(float *)0x8C37EA4C = 1.0f;
    *(float *)0x8C37EA50 = 1.0f;
    *(float *)0x8C37EA58 = 1.0f;
    *(float *)0x8C37EA3C = 1.0f;
    *(float *)0x8C37EA40 = 1.0f;
    *(unsigned int *)0x8C37EA5C = 0xFFFFFFFF;
    *(unsigned int *)0x8C37EA60 = 0xA;
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8B);
    *(unsigned int *)0x8C37E9DC = 0x8B;
    *(unsigned int *)0x8C37EA04 = 0x0;
    *(float *)0x8C37E9E0 = u4;
    *(float *)0x8C37E9E4 = u5;
    *(float *)0x8C37E9E8 = (*(float *)0x8C0C7254);
    *(float *)0x8C37E9F4 = 0.0f;
    *(float *)0x8C37E9F8 = 0.0f;
    *(float *)0x8C37E9FC = 1.0f;
    *(float *)0x8C37EA00 = 1.0f;
    *(float *)0x8C37EA08 = 1.0f;
    *(float *)0x8C37E9EC = 1.0f;
    *(float *)0x8C37E9F0 = 1.0f;
    *(unsigned int *)0x8C37EA0C = 0xFFFFFFFF;
    *(unsigned int *)0x8C37EA10 = 0xA;
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8C);
    *(unsigned int *)0x8C37E98C = 0x8C;
    *(unsigned int *)0x8C37E9B4 = 0x0;
    *(float *)0x8C37E990 = u4;
    *(float *)0x8C37E994 = u5;
    *(float *)0x8C37E998 = (*(float *)0x8C0C7254);
    *(float *)0x8C37E9A4 = 0.0f;
    *(float *)0x8C37E9A8 = 0.0f;
    *(float *)0x8C37E9AC = 1.0f;
    *(float *)0x8C37E9B0 = 1.0f;
    *(float *)0x8C37E9B8 = 1.0f;
    *(float *)0x8C37E99C = 1.0f;
    *(float *)0x8C37E9A0 = 1.0f;
    *(unsigned int *)0x8C37E9BC = 0xFFFFFFFF;
    *(unsigned int *)0x8C37E9C0 = 0xA;
    return 0x14;
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
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + (int)g_0c2ee998))) == 0) {
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

    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = *(signed char *)(((t4 + (int)gVmsVolumeStates) + 0x8)), t5 != 0)) {
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
                        t7 = (*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x20)));
                        t10 = (t10 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t10 + t7))));
                    }
                    t15 = t10;
                    t16 = (((int)stk + 4) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x20))) + 0x30);
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
                    *(unsigned short *)((a5 + 0x20)) = ((*(int *)(((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x1C))) + 0x0))) + 0x1);
                    *(unsigned short *)((a5 + 0x22)) = (*(int *)(((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x1C))) + 0x30)));
                    *(unsigned short *)(((0x26 + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x0));
                    *(unsigned short *)((a5 + 0x24)) = (*(short *)((a5 + 0x26)));
                    *(unsigned short *)((a5 + 0x28)) = (*(int *)(((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x1C))) + 0x38)));
                    *(unsigned short *)(((0x2A + a5) + 0x0)) = (vmsfs_diskfree(a4, 0x1));
                    *(unsigned short *)((a5 + 0x2C)) = ((*(int *)(((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x1C))) + 0x2C))) + 0x1);
                    *(unsigned short *)((a5 + 0x2E)) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x20))) + 0x4E)));
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

void matchCheckTiebreak(int a4, int a5, int a6, int a7)
{
    int t14;
    int t24;
    int t27;
    int t32;
    int t25;
    float u44;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) == 0) {
            *(unsigned int *)0x8C287C64 = (unsigned char)(eepromGetMatch());
        } else {
            *(unsigned int *)0x8C287C64 = (*(int *)0x8C287C6C);
        }
        if ((*(int *)0x8C287C70) != 0) {
            t14 = *(int *)0x8C287C6C;
            if ((int)(*(int *)0x8C287B00) >= (int)(t14 - 1)) {
                if ((int)(*(int *)0x8C287B04) >= (int)(t14 - 1)) {
                    *(unsigned int *)0x8C287C64 = (t14 + 0x1);
                }
            }
            t24 = *(int *)0x8C287C6C;
            if (((*(int *)0x8C287B00) == t24) && (t25 = *(int *)0x8C287B04, t25 == t24)) {
                *(unsigned int *)0x8C287C64 = (t24 + 0x1);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x4000);
                *(unsigned int *)0x8C1D4A40 = 0x1;
                t27 = serveGetServer();
                if (((int)t27 >= 0) && ((int)t27 <= (int)0x3)) {
                    *(unsigned int *)(((t27 << 2) + 0x8C38BA84)) = 0x0;
                }
                t32 = *(int *)0x8C185408;
                if ((*(int *)0x8C287ADC) == 2) {
                    if (t32 == 1) {
                        *(unsigned int *)0x8C287D74 = 0x8C1019A4;
                    } else {
                        *(unsigned int *)0x8C287D74 = 0x8C101AC4;
                    }
                    *(unsigned int *)0x8C287D78 = 0x8C102218;
                    u44 = 41.1500015f;
                } else {
                    if (((t32 - 1) & 0x1) == 0) {
                        *(unsigned int *)0x8C287D74 = 0x8C101D64;
                    } else {
                        *(unsigned int *)0x8C287D74 = 0x8C101FA4;
                    }
                    *(unsigned int *)0x8C287D78 = 0x8C102250;
                    u44 = 54.8499985f;
                }
                *(float *)0x8C287B40 = u44;
                *(unsigned int *)0x8C287B30 = (*(int *)(((*(int *)0x8C287D78) + 0x0)));
                *(unsigned int *)0x8C287B38 = 0x1;
                *(unsigned int *)0x8C287B34 = 0x1;
            }
        }
    }
}
