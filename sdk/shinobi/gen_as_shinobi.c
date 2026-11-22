/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXAMP_Destroy(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXPD_GetStat(int);
int ADXPD_SetCoef(int, int, int);
int ADXRNA_Destroy(int);
int ADXSJD_Destroy(int);
int ADXSTM_Close(int);
int ADXT_Stop(int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoExADPCM2(int, int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int BupLoadFile(int, int, int, int);
int resetBackColorZ(int, int, int);
int SJ_SplitChunk(int, int, int, int);
extern void _builtin_prefetch(void *);
int _rsfts(int, int, int);
int _sub(int, int, int, int);
int _umemcmp(int, int, int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int check_fat_xross(int, int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int emotKeysDefault(void);
int entryCountJoined(void);
int entryInit(void);
int fileLoadPollSlot(int, float);
int fileLoadStartSlot(int, int, int, int);
int fogSetPreset(int, int);
int get_fat(int, int);
int kmyMemCopy(int, int, int);
int lightSet(int, int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionSetSpeed(int, float);
int mwRnaErrCallFunc(int, ...);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
int nlCreateVertexBuffer(int, int, int, int);
int nlDispStripInit(void);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlFreeCommonTextureAll(void);
int nlInitCommonTexture(int, int, int);
int nlInitMatrix(int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMatrixMode(int);
int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPrintSetZ(float);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlRenderTextureInit(int, int);
int nlScaleVector(int, int, float);
int nlSetTrnslMode(int, int);
int nlSysMetricsInit(void);
int nlSysSetDirectListTypeLatency2V(int);
int nlSysSetTextureSize(int);
int nlSysSetVertexBufferBaseAddress(int);
int nlSysUseLatency2V(void);
int nlUnitMatrix(void);
int nlWaitVSync(void);
int nlsndPackFreeBG(int);
int nlsndPackLoadBG(int, int, int);
int nlsndPackLoadStatus(void);
int nlsndSystemControl(int, int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int selCursorReset(int);
int selSlot0FlagClear(void);
int setBorderColor(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAtAlpha();
float vecDistXZ(Stk3, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int _its(int a4, int a5, int a6);
int vmsfs_diskfree(int a4, int a5);
int vmsfs_fsettime(int a4, int a5, int a6);
int ballBoyIdleExec(int a4, int a5);
int kmSetBackGroundRenderState(int a4);
int emotVmuLoad(int a4);
int sndPack4Load(int a4, float f4);
int nldispstripTexSub(int a4, int a5);
int vmsfs_fopen(int a4, int a5, int a6);
int ADXB_ExecOneAu16(int a4, int a5, int a6, int a7);
float zoneListSample(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void sprListPut(int a4, int a5, int a6, Stk3 p, float f4, float f5, float f6);
int windowFrameInit(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
void selCursorPos(int a4, int a5, int a6, int a7, int a8);
int sseleSlotEntry(int a4);
int nlSingleLineSub(int a4, int a5, int a6, int a7);
int sysInitGraphics(void);
int bgTilesInit(int a4, int a5, int a6, int a7);
int panelBodyPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int panelPartBPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
void ADXT_Destroy(int a4);
int vmsfs_xwrite1(int a4, int a5);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
int hudBgTileInit(int a4, int a5, int a6, int a7);
int panelPartCPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int mwlRnaAddWrPos(int a4);


int vmsfs_diskfree(int a4, int a5)
{
    int t67;
    int t1;
    int t3;
    int t52;
    int t5;
    int t44;
    int t8;
    int t9;
    int t17;
    int t18;
    int t19;
    int t26;
    int t27;
    int t28;
    int t59;
    int t4;
    int t39;
    int t34;

    t67 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t59 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t52 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x8)), t4 != 0)) {
                t5 = buIsFormat(a4);
                t44 = 0xFFFFFF03;
                if ((int)t5 < 0) {
                } else {
                    if (a5 == 1) {
                        t8 = a5;
                        t9 = 0x0;
                        for (;;) {
                            if ((int)t9 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x38)))) {
                                break;
                            }
                            t8 = (get_fat(a4, t9));
                            t8 = (unsigned short)t8;
                            if (t8 == 0xFFFC) {
                                t9 = (t9 + 0x1);
                                continue;
                            }
                            break;
                        }
                        t39 = t9;
                    } else {
                        if ((*(int *)0x8C20A914) != 0) {
                            t17 = a5;
                            t18 = 0x0;
                            t19 = 0x0;
                            for (;;) {
                                if ((int)t19 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
                                    break;
                                }
                                t17 = (get_fat(a4, t19));
                                t17 = (unsigned short)t17;
                                if (t17 == 0xFFFC) {
                                    t17 = (check_fat_xross(a4, t19));
                                    if ((int)t17 >= 0) {
                                        t18 = (t18 + 0x1);
                                    }
                                }
                                t19 = (t19 + 0x1);
                            }
                            t34 = t18;
                        } else {
                            t26 = a5;
                            t27 = 0x0;
                            t28 = 0x0;
                            for (;;) {
                                if ((int)t28 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
                                    break;
                                }
                                t26 = (get_fat(a4, t28));
                                t26 = (unsigned short)t26;
                                t28 = (t28 + 0x1);
                                if (t26 == 0xFFFC) {
                                    t27 = (t27 + 0x1);
                                }
                            }
                            t34 = t27;
                        }
                        t39 = t34;
                    }
                    t44 = t39;
                }
                t52 = t44;
            }
            t59 = t52;
        }
        t67 = t59;
    }
    return t67;
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int t0;
    int t36;
    int t3;
    int t5;
    int t30;
    int t8;
    int t27;
    int t10;
    int t24;
    int t12;
    int t22;
    int t13;
    int t17;
    int t18;
    int t33;
    int t6;
    int t7;
    int t16;
    int stk[21];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0x8C20C774)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 12)), t7 = *(signed char *)(((t6 + 0x8C464598) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 4));
                    t10 = check_isopen();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 4) + 0x38), (*(int *)(((int)stk + 8))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 4) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (write_dir(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}


int vmsfs_fopen(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t14;
    int t17;
    int t19;
    int t21;
    int t25;
    int t30;
    int stk[18];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1EC0A8:;
    *(unsigned int *)(((int)stk + 4)) = R6;
    *(unsigned int *)((R6 + 0x0)) = 0x0;
    R11 = (R5);
    R12 = (0x0);
    R13 = (R4);
    if (((*(signed char *)(((R4 * 0x148) + 0x8C46459A))) == 0)) goto L_8C1EC0F8;
    goto L_8C1EC0CE;
    L_8C1EC0CE:;
    t6 = (vmsio_isready(R13)) != 0;
    if (t6) goto L_8C1EC0E0;
    goto L_8C1EC0D8;
    L_8C1EC0D8:;
    vmsfs_unmount(R13);
    goto L_8C1EC0F8;
    L_8C1EC0F8:;
    R0 = (0xFFFFFF01);
    goto L_8C1EC1AC;
    L_8C1EC1AC:;
    return R0;
    L_8C1EC0E0:;
    t10 = (vmsio_ismount(R13)) == 0;
    if (t10) goto L_8C1EC0F8;
    goto L_8C1EC0EA;
    L_8C1EC0EA:;
    if (((*(signed char *)(((R13 * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1EC0FE;
    goto L_8C1EC0F8;
    L_8C1EC0FE:;
    t14 = (int)(buIsFormat(R13)) >= 0;
    if (t14) goto L_8C1EC10E;
    goto L_8C1EC108;
    L_8C1EC108:;
    R0 = (0xFFFFFF03);
    goto L_8C1EC1AC;
    L_8C1EC10E:;
    t17 = (int)(check_isopen()) < 0;
    if (t17) goto L_8C1EC138;
    goto L_8C1EC11A;
    L_8C1EC11A:;
    t19 = (int)(check_file_correct(R13, R11)) >= 0;
    if (t19) goto L_8C1EC12C;
    goto L_8C1EC126;
    L_8C1EC126:;
    R0 = (0xFFFFFF41);
    goto L_8C1EC1AC;
    L_8C1EC12C:;
    t21 = open_file_handle();
    R14 = (t21);
    if ((t21 != 0)) goto L_8C1EC16C;
    goto L_8C1EC138;
    L_8C1EC138:;
    R0 = (0xFFFFFF07);
    goto L_8C1EC1AC;
    L_8C1EC16C:;
    t25 = search_dir(R13, R11, (((int)stk + 4) + 0x4));
    *(unsigned int *)0x8C46949C = t25;
    if (((int)t25 >= 0)) goto L_8C1EC18C;
    goto L_8C1EC180;
    L_8C1EC180:;
    close_file_handle(R14);
    R0 = (0xFFFFFF05);
    goto L_8C1EC1AC;
    L_8C1EC18C:;
    *(unsigned int *)((R14 + 0x4)) = R12;
    *(unsigned int *)((R14 + 0x34)) = (*(int *)(((int)stk + 48)));
    t30 = *(int *)(((int)stk + 20));
    *(unsigned int *)((R14 + 0x38)) = t30;
    *(unsigned int *)((R14 + 0x40)) = t30;
    *(unsigned int *)((R14 + 0x28)) = R13;
    *(unsigned short *)((R14 + 0x2)) = (*(short *)(((int)stk + 16)));
    *(unsigned char *)((R14 + 0x1)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R14;
    R0 = (R12);
    goto L_8C1EC1AC;
}


int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t54;
    int t45;
    int t9;
    int t37;
    int t10;
    int t11;
    int t12;
    int t32;
    int t16;
    int t26;
    int t64;
    int t13;
    int t14;
    int t15;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready(t0);
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t64 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t54 = 0xFFFFFF01;
        if (t5 != 0) {
            t45 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C4645A0))) == 0) {
            } else {
                t9 = buIsFormat((*(int *)((a4 + 0x28))));
                t37 = 0xFFFFFF03;
                if ((int)t9 < 0) {
                } else {
                    t10 = *(int *)((a4 + 0x30));
                    t11 = *(int *)((a4 + 0x28));
                    t12 = get_fat(t11, t10);
                    t32 = 0xFFFFFF04;
                    if (((unsigned short)t12 == 0xFFFC) && (t13 = *(int *)((a4 + 0x30)), t14 = *(int *)((((t0 * 0x148) + 0x8C464598) + 0x1C)), t15 = *(int *)((t14 + 0x38)), (int)t13 < (int)t15)) {
                        t16 = vmsfs_write_retry(t11, t10, a5);
                        t26 = t16;
                        if ((int)t16 < 0) {
                        } else {
                            set_fat(t11, t10, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t10;
                            } else {
                                set_fat(t11, (*(int *)((a4 + 0x3C))), t10);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t10;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t26 = 0x0;
                        }
                        t32 = t26;
                    }
                    t37 = t32;
                }
                t45 = t37;
            }
            t54 = t45;
        }
        t64 = t54;
    }
    return t64;
}


