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

    t0 = *(signed char *)((0x8C454CF4 + ((short)a4 * (short)0x1C)));
    t29 = t0;
    if (t0 == 1) {
        t2 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        t22 = t2;
        if (t2 != 0) {
            t3 = *(int *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x14));
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
                    t10 = *(int *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x14));
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
                        *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x0;
                        return 0x0;
                    }
                    nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                    *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x0;
                    return 0x0;
                }
                t4 = (t4 | 0x8000);
                nlsndG2Write(t4, (t6 | 0xA0000000));
                nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x0;
                return 0x0;
            }
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
            *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x0;
            t22 = 0x0;
        }
        t29 = t22;
    }
    return t29;
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
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
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
    t5 = *(int *)0x8C458DCC;
    R1004 = (R6 + t5);
    R13 = (0x8C4241C0);
    R14 = ((((R6 + t5) << 2) << 1));
    if (((unsigned int)(*(int *)((((*(int *)0x8C4241C0) + (((R6 + t5) << 2) << 1)) + 0x0))) <= (unsigned int)0x0)) goto L_8C0F40EA;
    goto L_8C0F401E;
    L_8C0F401E:;
    t11 = *(int *)((R13 + 0x0));
    *(unsigned int *)(((t11 + R14) + 0x0)) = ((*(int *)(((t11 + R14) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((R13 + 0x0))) + R14) + 0x0))) != 0)) goto L_8C0F40EA;
    goto L_8C0F4032;
    L_8C0F4032:;
    t17 = *(int *)((((*(int *)((R13 + 0x0))) + R14) + 0x4));
    R10 = (t17);
    R11 = (0x8C458608);
    R12 = ((t17 * 0x3C));
    if (((*(int *)((((*(int *)0x8C458608) + (t17 * 0x3C)) + 0x28))) != 0)) goto L_8C0F4070;
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
    t31 = R1004;
    R1008 = (t31 << 1);
    t33 = *(short *)(((t31 << 1) + (*(int *)0x8C454C80)));
    t34 = ((int (*)(int, int))(nlCommonTextureClearTextureIndex))(R10, R5);
    nlSpriteClearSpriteIndex(t33);
    *(unsigned int *)((((*(int *)((R13 + 0x0))) + R14) + 0x4)) = 0xFFFFFFFF;
    *(unsigned short *)(((*(int *)0x8C454C80) + (R1008))) = 0xFFFFFFFF;
    R12 = (t33);
    if (((*(int *)0x8C1DC888) != 0)) goto L_8C0F40EA;
    goto L_8C0F40AC;
    L_8C0F40AC:;
    t42 = *(int *)0x8C454C90;
    R4 = ((unsigned short)(*(short *)((((((R12 << 2) << 2) << 1) + t42) + 0x16))));
    R5 = ((0x7 & ((unsigned int)(*(int *)((((((R12 << 2) << 2) << 1) + t42) + 0xC))) >> 27)));
    if (((*(int *)0x8C450BF8) == 0)) goto L_8C0F40EA;
    goto L_8C0F40D0;
    L_8C0F40D0:;
    if ((R5 == 5)) goto L_8C0F40DC;
    goto L_8C0F40D6;
    L_8C0F40D6:;
    if ((R5 != 6)) goto L_8C0F40EA;
    goto L_8C0F40DC;
    L_8C0F40DC:;
    if (((int)R4 >= (int)(*(short *)0x8C458E24))) goto L_8C0F40EA;
    goto L_8C0F40E4;
    L_8C0F40E4:;
    nlFreePalette(R4, R5, R6, R7);
    goto L_8C0F40EA;
    L_8C0F40EA:;
    R0 = (0x0);
    goto L_8C0F40EC;
}


