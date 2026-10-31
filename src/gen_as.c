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
int FUN_8c0eaf00(int, int, int);
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
int sprInitPos(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAtAlpha();
float vecDistXZ(Stk4);
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
void sprListPut(int a4, int a5, int a6, float f4, float f5, float f6);
int windowFrameInit(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
void selCursorPos(int a4, int a5, int a6, int a7, int a8);
int sseleSlotEntry(int a4);
int nlSingleLineSub(int a4, int a5, int a6, int a7);
int sysInitGraphics(void);
int bgTilesInit(int a4, int a5, int a6, int a7);
int panelBodyPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int panelPartBPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
void ADXT_Destroy(int a4);
int vmsfs_xwrite1(int a4, int a5);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
int hudBgTileInit(int a4, int a5, int a6, int a7);
int panelPartCPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int mwlRnaAddWrPos(int a4);

int _its(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    int t24;
    int t28;
    int t32;
    int t33;
    int t25;
    int stk[20];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    R1016 = a5;
    R1004 = a6;
    R1028 = 0x1;
    t0 = R1016;
    t1 = R1004;
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t2 = memmove((((int)stk + 4) + 0x24), a4, 0x8);
    t3 = R1004;
    R1008 = (t3 - 1);
    R1024 = ((((t3 - 1) << 2) << 1) + 0x8C12C320);
    R1020 = ((R1008) + 0x1);
    t5 = t2;
    t6 = (t1 + t0);
    for (;;) {
        if ((int)(R1008) < 0) {
            return t5;
        }
        t5 = 0x5;
        t5 = ((int)((int)(R1020) / (int)t5));
        t5 = (t5 + 0x1);
        t5 = (t5 << 1);
        t12 = (0x8 - t5);
        t13 = (0x8 - (0x8 - t5));
        t5 = (memmove(((0x8 - t5) + (((int)stk + 4) + 0x1C)), ((R1024) + (0x8 - t5)), (0x8 - (0x8 - t5))));
        R1012 = 0x0;
        R1004 = 0x0;
        t14 = 0x8;
        for (;;) {
            t5 = (_umemcmp((t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13));
            if ((int)t5 >= 0) {
                t5 = (_sub(0x0, (t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13));
                R1028 = t5;
                R1012 = ((R1012) + t14);
            }
            t14 = ((int)((unsigned int)((int)((unsigned int)t14 + (unsigned int)0x0)) + ((((int)0x0 > (int)t14)) ? 1u : 0u)));
            t14 = (t14 >> 1);
            if (t14 != 0) {
                t5 = (_rsfts((t12 + (((int)stk + 4) + 0x1C)), t13, 0x1));
                t24 = R1004;
                R1004 = (t24 + 0x1);
                if ((int)(t24 + 0x1) >= (int)0x4) {
                    t25 = (t24 + 0x1); break;
                }
                continue;
            }
            break;
        }
        t28 = R1012;
        if ((R1028) == 0) {
            break;
        }
        *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
        t6 = (t6 - 0x1);
        R1008 = ((R1008) - 1);
        R1024 = ((R1024) - 8);
        R1020 = ((R1020) - 1);
    }
    *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
    t32 = t25;
    t33 = (t6 - 0x1);
    for (;;) {
        t33 = (t33 - 1);
        if ((unsigned int)t33 < (unsigned int)(R1016)) {
            break;
        }
        t32 = 0x30;
        *(unsigned char *)((t33 + 0x0)) = t32;
    }
    return t5;
}

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


int kmSetBackGroundRenderState(int a4)
{
    float u4;
    float u6;
    float u8;
    float u10;
    float u12;
    float u14;
    float u16;
    float u18;
    float u20;
    float u22;
    float u24;
    float u26;
    float u28;
    float u30;
    float u32;
    float u34;

    *(unsigned int *)0x8C4607EC = (*(int *)((a4 + 0x90)));
    *(unsigned int *)0x8C4607F0 = (*(int *)((a4 + 0x94)));
    *(unsigned int *)0x8C4607F4 = (*(int *)((a4 + 0x98)));
    *(unsigned int *)0x8C4607F8 = (*(int *)((a4 + 0x9C)));
    u4 = *(float *)((a4 + 0x70));
    u6 = (u4 * 255.0f);
    if (!(2.14748365e+09f > (u4 * 255.0f))) {
        u6 = ((u4 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u8 = *(float *)((a4 + 0x74));
    u10 = (u8 * 255.0f);
    if (!(2.14748365e+09f > (u8 * 255.0f))) {
        u10 = ((u8 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u12 = *(float *)((a4 + 0x78));
    u14 = (u12 * 255.0f);
    if (!(2.14748365e+09f > (u12 * 255.0f))) {
        u14 = ((u12 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u16 = *(float *)((a4 + 0x7C));
    u18 = (u16 * 255.0f);
    if (!(2.14748365e+09f > (u16 * 255.0f))) {
        u18 = ((u16 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(unsigned int *)0x8C4607FC = (((((((int)u6 & 0xFF) << 16) << 8) | (((int)u10 & 0xFF) << 16)) | (((int)u14 & 0xFF) << 8)) | ((int)u18 & 0xFF));
    u20 = *(float *)((a4 + 0x80));
    u22 = (u20 * 255.0f);
    if (!(2.14748365e+09f > (u20 * 255.0f))) {
        u22 = ((u20 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u24 = *(float *)((a4 + 0x84));
    u26 = (u24 * 255.0f);
    if (!(2.14748365e+09f > (u24 * 255.0f))) {
        u26 = ((u24 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u28 = *(float *)((a4 + 0x88));
    u30 = (u28 * 255.0f);
    if (!(2.14748365e+09f > (u28 * 255.0f))) {
        u30 = ((u28 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u32 = *(float *)((a4 + 0x8C));
    u34 = (u32 * 255.0f);
    if (!(2.14748365e+09f > (u32 * 255.0f))) {
        u34 = ((u32 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(unsigned int *)0x8C460800 = (((((((int)u22 & 0xFF) << 16) << 8) | (((int)u26 & 0xFF) << 16)) | (((int)u30 & 0xFF) << 8)) | ((int)u34 & 0xFF));
    return 0x0;
}

int emotVmuLoad(int a4)
{
    int t0;
    int t1;
    int t3;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t57;
    int t48;
    int t49;
    int t50;
    int t51;
    int t53;
    int t4;
    int t18;
    int t30;
    int t42;
    int t54;

    if (a4 == 0) {
        t0 = 0x0;
        for (;;) {
            t1 = (t0 + 0x8C34B4F4);
            t3 = (t0 + 0x8C36FE04);
            for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)(((t0 + 0x8C34B4F4) + 624)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
            t0 = (t0 + 0x270);
            if ((unsigned int)t0 >= (unsigned int)0x2490) {
                break;
            }
        }
        *(unsigned int *)0x8C37B4D8 = (BupLoadFile(0x0, 0x8C123270, 0x8C36FE04, 0x2490));
    }
    if (a4 == 1) {
        t12 = 0x8C372294;
        t13 = 0x8C34D984;
        for (;;) {
            t14 = t13;
            t13 = (t13 + 0x270);
            t15 = t14;
            t17 = t12;
            for (;;) { t18 = *(int *)t15; t15 = (t15 + 4); if ((unsigned int)((t14 + 624)) < (unsigned int)t15) break; *(unsigned int *)t17 = t18; t17 = (t17 + 4); }
            t12 = (t12 + 0x270);
            if ((unsigned int)t12 >= (unsigned int)0x8C374724) {
                break;
            }
        }
        BupLoadFile(0x0, 0x8C123280, 0x8C372294, 0x2490);
    }
    if (a4 == 2) {
        t24 = 0x8C374724;
        t25 = 0x8C34FE14;
        for (;;) {
            t26 = t25;
            t25 = (t25 + 0x270);
            t27 = t26;
            t29 = t24;
            for (;;) { t30 = *(int *)t27; t27 = (t27 + 4); if ((unsigned int)((t26 + 624)) < (unsigned int)t27) break; *(unsigned int *)t29 = t30; t29 = (t29 + 4); }
            t24 = (t24 + 0x270);
            if ((unsigned int)t24 >= (unsigned int)0x8C376BB4) {
                break;
            }
        }
        BupLoadFile(0x0, 0x8C123290, 0x8C374724, 0x2490);
    }
    if (a4 == 3) {
        t36 = 0x8C376BB4;
        t37 = 0x8C3522A4;
        for (;;) {
            t38 = t37;
            t37 = (t37 + 0x270);
            t39 = t38;
            t41 = t36;
            for (;;) { t42 = *(int *)t39; t39 = (t39 + 4); if ((unsigned int)((t38 + 624)) < (unsigned int)t39) break; *(unsigned int *)t41 = t42; t41 = (t41 + 4); }
            t36 = (t36 + 0x270);
            if ((unsigned int)t36 >= (unsigned int)0x8C379044) {
                break;
            }
        }
        BupLoadFile(0x0, 0x8C1232A0, 0x8C376BB4, 0x2490);
    }
    t57 = a4;
    if (a4 == 4) {
        t48 = 0x8C379044;
        t49 = 0x8C354734;
        for (;;) {
            t50 = t49;
            t49 = (t49 + 0x270);
            t51 = t50;
            t53 = t48;
            for (;;) { t54 = *(int *)t51; t51 = (t51 + 4); if ((unsigned int)((t50 + 624)) < (unsigned int)t51) break; *(unsigned int *)t53 = t54; t53 = (t53 + 4); }
            t48 = (t48 + 0x270);
            if ((unsigned int)t48 >= (unsigned int)0x8C37A8A4) {
                break;
            }
        }
        t57 = (BupLoadFile(0x1, 0x8C1232B0, 0x8C379044, 0x2490));
    }
    return t57;
}

int sndPack4Load(int a4, float f4)
{
    int t7;
    int t18;
    int t31;
    int t50;
    int t51;

    if (a4 == 0) {
        *(unsigned int *)0x8C1D2BDC = 0x0;
        *(unsigned int *)0x8C38BAB4 = (nlsndPackFreeBG(0x6));
    } else {
        if ((*(int *)0x8C1D2BDC) != 99) {
            t7 = *(int *)0x8C1D2BDC;
            if (t7 != 0) {
                if (t7 != 1) {
                    if (t7 != 2) {
                        if (t7 != 3) {
                        } else {
                            if ((*(int *)0x8C38BAB4) == -3) {
                                *(unsigned int *)0x8C1D2BDC = 0x0;
                                *(unsigned int *)0x8C38BAB4 = (nlsndPackFreeBG(0x5));
                            }
                            t18 = nlsndPackLoadStatus();
                            *(unsigned int *)0x8C1D2BE0 = t18;
                            if (t18 == 0) {
                                nlsndSystemControl(0x6, 0x10A0, (*(int *)0x8C38BA64));
                                *(unsigned int *)0x8C1D2BDC = 0x63;
                            }
                        }
                    } else {
                        t31 = fileLoadPollSlot(0x3, f4);
                        if (t31 == 1) {
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                            *(unsigned int *)0x8C38BAB4 = (nlsndPackLoadBG(0x8CBC0000, 0x6, 0x2000));
                        }
                    }
                } else {
                    fileLoadStartSlot(0x8CBC0000, 0x8C125CA8, 0x0, 0x3);
                    *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                }
            } else {
                t50 = nlsndPackLoadStatus();
                *(unsigned int *)0x8C1D2BE0 = t50;
                if ((t50 != 0) && (t51 = *(int *)0x8C38BAB4, t51 != -2)) {
                } else {
                    cacheOcbiRange(0x8CBC0000, 0x100000);
                    *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                }
            }
        }
    }
    return (*(int *)0x8C1D2BDC);
}

int nldispstripTexSub(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t11;
    int t12;
    int t41;
    int t14;
    int t15;
    int t16;
    int t34;
    int t36;
    int t38;
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
    t41 = t11;
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
            t34 = *(int *)(((*(int *)0x8C454FC8) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + (*(int *)0x8C454FC0)));
            t14 = t36;
            t14 = ((unsigned int)t14 >> 16);
            t14 = ((unsigned int)t14 >> 8);
            *(unsigned int *)0xFF00003C = t14;
            *(unsigned int *)0xFF000038 = t14;
            t14 = 0x8C1E28E0;
            kmyMemCopy(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = *(int *)0x8C454FC0;
            t15 = (t15 - 1);
            t14 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)((t14 + t38)) = ((*(int *)((t14 + t38))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t41 = t38;
    }
    return t41;
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



void sprListPut(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u0;
    int t1;
    int t2;
    int t4;
    int t7;
    int t8;
    int t9;
    float u11;
    float u12;
    float u13;
    float u15;
    float u17;
    float u19;
    float u20;
    int t3;
    int stk[42];

    *(unsigned int *)(((int)stk + 12)) = a5;
    if (a5 != 0) {
        u0 = *(float *)0x8C0DE200;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = (((unsigned char)(int)(f4 * u0) << 16) << 8);
        t1 = 0x8C0DE200;
        t2 = a5;
        t4 = a4;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((int)stk + 12)))) {
                break;
            }
            t3 = (0x0 + (((int)stk + 4) + 0xC));
            t7 = 0x0;
            t8 = (0x0 + (((int)stk + 4) + 0xC));
            t9 = 0x0;
            for (;;) {
                t2 = t4;
                t2 = (t2 + 0xC);
                t2 = (t2 + t7);
                u11 = *(float *)((t2 + 0x0));
                t2 = t4;
                t2 = (t2 + 0xC);
                u12 = (*(float *)(((0xA4 + ((int)stk + 4)) + 0x0)));
                u12 = u12 + f5 * u11;
                t1 = 0x4;
                t2 = (t2 + t7);
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + 0x0)) = u12;
                u13 = *(float *)((t2 + t1));
                t2 = t4;
                t2 = (t2 + 0xC);
                t2 = (t2 + t7);
                u15 = (*(float *)(((0xA4 + ((int)stk + 4)) + t1)));
                u15 = u15 + f5 * u13;
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = u15;
                t1 = 0x8;
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = (*(float *)(((0xA4 + ((int)stk + 4)) + t1)));
                t1 = 0x4;
                u17 = *(float *)((t4 + t1));
                t1 = 0xC;
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = ((*(float *)((t2 + t1))) / u17);
                t1 = 0x8;
                t2 = t4;
                u19 = *(float *)((t4 + t1));
                t2 = (t2 + 0xC);
                t1 = 0x10;
                t2 = (t2 + t7);
                u20 = *(float *)((t2 + t1));
                t2 = (unsigned char)(int)(f6 * u0);
                t2 = (t2 << 16);
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = ((-(u20 / u19)) + 1.0f);
                t2 = (t2 | (*(int *)(((int)stk + 8))));
                t2 = (t2 | ((unsigned char)(int)(f6 * u0) << 8));
                t2 = (t2 | (unsigned char)(int)(f6 * u0));
                *(unsigned int *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + 0x14)) = t2;
                if (a6 != 0) {
                    *(unsigned int *)((t3 + 0x18)) = a6;
                } else {
                    *(unsigned int *)((t8 + 0x18)) = 0x0;
                }
                t9 = (t9 + 0x1);
                t8 = (t8 + 0x1C);
                t3 = (t3 + 0x1C);
                t7 = (t7 + 0x18);
                if ((int)t9 >= (int)0x4) {
                    break;
                }
            }
            t1 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 4) + 0xC), (*(int *)((t4 + 0x0)))));
            t2 = (*(int *)(((int)stk + 4)));
            t4 = (t4 + 0x6C);
            t2 = (t2 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t2;
        }
    }
}

int windowFrameInit(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t3;
    int stk[127];

    t0 = 0x8C10F5F8;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10F5F8 + 464)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33C570), 0x24, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C33C570);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x1005;
        if ((int)t4 >= (int)0x1D) {
            break;
        }
    }
    *(float *)0x8C33C624 = 0.259765625f;
    *(float *)0x8C33C5D4 = 0.259765625f;
    *(float *)0x8C33C584 = 0.259765625f;
    *(float *)0x8C33C714 = 0.259765625f;
    *(float *)0x8C33C6C4 = 0.259765625f;
    *(float *)0x8C33C674 = 0.259765625f;
    *(float *)0x8C33C8F4 = 0.259765625f;
    *(float *)0x8C33C8A4 = 0.259765625f;
    *(float *)0x8C33C854 = 0.259765625f;
    *(float *)0x8C33C9E4 = 0.259765625f;
    *(float *)0x8C33C994 = 0.259765625f;
    *(float *)0x8C33C944 = 0.259765625f;
    *(float *)0x8C33C804 = 0.259765625f;
    *(float *)0x8C33C7B4 = 0.259765625f;
    *(float *)0x8C33C764 = 0.259765625f;
    *(float *)0x8C33C5D0 = (((*(float *)0x8C33C5E0) - (*(float *)0x8C33C5D8)) * 60.0f);
    *(float *)0x8C33C6C0 = (((*(float *)0x8C33C6D0) - (*(float *)0x8C33C6C8)) * 60.0f);
    *(float *)0x8C33C8A0 = (((*(float *)0x8C33C8B0) - (*(float *)0x8C33C8A8)) * 60.0f);
    *(float *)0x8C33C990 = (((*(float *)0x8C33C9A0) - (*(float *)0x8C33C998)) * 60.0f);
    *(float *)0x8C33C7B0 = (((*(float *)0x8C33C7C0) - (*(float *)0x8C33C7B8)) * 60.0f);
    return 0x10;
}

int ADXB_DecodeHeaderAdx(int a4, int a5, int a6)
{
    int t0;
    int t20;
    int t1;
    int t17;
    int stk[12];

    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = ADX_DecodeInfo(a5, a6, (((int)stk + 4) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    t20 = 0x0;
    if ((int)t0 >= 0) {
        t1 = ADX_DecodeInfoExADPCM2(a5, a6, (a4 + 0x1C));
        t17 = 0x0;
        if ((int)t1 < 0) {
        } else {
            ADXPD_SetCoef((*(int *)((a4 + 0x8))), (*(int *)((a4 + 0x14))), (*(short *)((a4 + 0x1C))));
            ADX_DecodeInfoExLoop(a5, a6, (a4 + 0x20), (a4 + 0x24), (a4 + 0x26), (a4 + 0x28), (a4 + 0x2C), (a4 + 0x30), (a4 + 0x34));
            *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
            *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
            *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
            *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
            *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
            *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
            *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
            *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
            *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
            *(unsigned short *)((a4 + 0xA8)) = 0x0;
            memset((a4 + 0x4C), 0x0, 0x4);
            t17 = (*(short *)(((int)stk + 28)));
        }
        t20 = t17;
    }
    return t20;
}

void selCursorPos(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    float u2;
    float u6;
    float u7;
    float u8;
    float u51;
    float u52;
    float u53;
    int stk[13];

    t0 = *(int *)(((a4 << 2) + 0x8C343AEC));
    u2 = *(float *)0x8C0A98D4;
    if ((*(int *)0x8C1855E4) == 0) {
        u6 = *(float *)0x8C0A98E0;
        u7 = *(float *)0x8C0A98E4;
        u8 = *(float *)0x8C0A98E8;
        if (a4 != 0) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if (a4 != 3) {
                    } else {
                        vecMake(a4, t0, a6, a7, ((int)stk + 8), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x0))) + (*(float *)0x8C0A98F0)), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x4))) + u8), u2);
                    }
                } else {
                    vecMake(a4, t0, a6, a7, ((int)stk + 8), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x0))) + u6), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x4))) + u8), u2);
                }
            } else {
                vecMake(a4, t0, a6, a7, ((int)stk + 8), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x0))) + (*(float *)0x8C0A98F0)), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x4))) + u7), u2);
            }
        } else {
            vecMake(a4, t0, a6, a7, ((int)stk + 8), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x0))) + u6), ((*(float *)((((((t0 << 1) + t0) << 2) + 0x8C185458) + 0x4))) + u7), u2);
        }
    } else {
        u51 = *(float *)0x8C0A98F4;
        u52 = *(float *)0x8C0A98F8;
        u53 = *(float *)0x8C18D2DC;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                    } else {
                        vecMake(a4, t0, a6, a7, ((int)stk + 8), (u53 + u51), (*(float *)0x8C0A990C), u2);
                    }
                } else {
                    vecMake(a4, t0, a6, a7, ((int)stk + 8), (u53 + u52), (*(float *)0x8C0A9908), u2);
                }
            } else {
                vecMake(a4, t0, a6, a7, ((int)stk + 8), (u53 + u51), (*(float *)0x8C0A9904), u2);
            }
        } else {
            vecMake(a4, t0, a6, a7, ((int)stk + 8), (u53 + u52), (*(float *)0x8C0A9900), u2);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 8)); }
}


int nlSingleLineSub(int a4, int a5, int a6, int a7)
{
    int t15;
    int t16;
    float u17;
    float u20;
    float u23;
    float u24;
    float u27;
    float u30;
    int t32;
    int t33;
    int t34;
    int stk[15];

    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (nlLineSendHeader(a7));
    nlPushMatrix(0x8C1DCAB8);
    nlMultiMatrix8((*(int *)0x8C450888));
    if ((0x2 & a7) != 0) {
        nlMultiMatrix8((*(int *)0x8C45087C));
    }
    nlMultiPushedMatrix();
    nlCalcPoint4((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x1C));
    nlCalcPoint4((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t15 = nlLineClipNear((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
    if (t15 != 0) {
        t16 = nlLineCalcColor((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
        if (t16 == 0) {
            return 0x0;
        }
        u17 = *(float *)(((int)stk + 40));
        u20 = (*(float *)0x8C454C48);
        u20 = u20 + (1.0f / u17) * (*(float *)(((int)stk + 32)));
        *(float *)(((int)stk + 32)) = u20;
        u23 = (*(float *)0x8C454C4C);
        u23 = u23 + (1.0f / u17) * (*(float *)(((int)stk + 36)));
        *(float *)(((int)stk + 36)) = u23;
        u24 = *(float *)(((int)stk + 24));
        u27 = (*(float *)0x8C454C48);
        u27 = u27 + (1.0f / u24) * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 16)) = u27;
        u30 = (*(float *)0x8C454C4C);
        u30 = u30 + (1.0f / u24) * (*(float *)(((int)stk + 20)));
        *(float *)(((int)stk + 20)) = u30;
        t32 = nlLineDrawThick((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x2C));
        t33 = *(int *)0x8C42445C;
        t34 = t33;
        if ((a7 & 0x1) != 0) {
            t34 = (t33 + 0x8);
        }
        *(unsigned int *)((t34 + 0x0)) = (((*(int *)((t34 + 0x0))) & 0xFC000000) | (t32 & 0x3FFFFFF));
        return 0x1;
    }
    return 0x0;
}

int sysInitGraphics(void)
{
    nlSysMetricsInit();
    nlInitMatrix(0x8C23D214, 0x10);
    nlSysUseLatency2V();
    nlSysSetDirectListTypeLatency2V(0x0);
    nlSysSetTextureSize(0x124000);
    nlSysSetVertexBufferBaseAddress(0xCEF0000);
    nlCreateVertexBuffer(0x0, 0x4000, 0x40000, 0x0);
    nlInitPrint();
    nlPrnIndentOn();
    nlPrintSetZ(9.99999975e-06f);
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333337f, 0.300000012f, 300.0f);
    nlMatrixMode(0x1);
    nlInitCommonTexture(0x8C23D67C, 0x600, 0x4000);
    nlRenderTextureInit(0x8C28085C, 0x2);
    nlInitSprite(0x8C2747BC, 0x500, 0x1000);
    nlInitPalette(0x8C23D654, 0x5);
    nlFreeCommonTextureAll();
    nlObjPutInit();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlSetTrnslMode(0x4, 0x5);
    lightSet(0xDC, 0xDC, 0x64, 0xFF);
    fogSetPreset(0x8C301C34, 0x1);
    nlDispStripInit();
    emotKeysDefault();
    entryInit();
    FUN_8c0eaf00(0xE0E0E0E0, 0xE0E0E0E0, 0xE0E0E0E0);
    nlWaitVSync();
    nlWaitVSync();
    return setBorderColor(0x0);
}

int bgTilesInit(int a4, int a5, int a6, int a7)
{
    int stk[15];
    int R1020;

    R1020 = *(int *)((int)stk + 20);

    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, 400.0f);
    R1020 = 0x8C33CF40;
    sprInitPos(0x8C33CF40, 0x27);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 256.0f, 0.0f, 400.0f);
    R1020 = 0x8C33CF90;
    sprInitPos(0x8C33CF90, 0x28);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 256.0f, 400.0f);
    R1020 = 0x8C33CFE0;
    sprInitPos(0x8C33CFE0, 0x29);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 256.0f, 256.0f, 400.0f);
    R1020 = 0x8C33D030;
    sprInitPos(0x8C33D030, 0x2A);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 512.0f, 0.0f, 400.0f);
    sprInitPos(0x8C33D080, 0x2B);
    *(unsigned int *)0x8C33D0B4 = 0x5;
    *(float *)0x8C33D0A0 = 0.5f;
    *(float *)0x8C33D090 = 0.5f;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 512.0f, 256.0f, 400.0f);
    sprInitPos(0x8C33D0D0, 0x2B);
    *(unsigned int *)0x8C33D104 = 0x5;
    *(float *)0x8C33D0E8 = 0.5f;
    *(float *)0x8C33D0E0 = 0.5f;
    return 0x10;
}

int panelBodyPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    float u2;
    float u3;
    int t6;
    int t8;
    int t10;
    int t14;
    int stk[41];
    int R1128;

    R1128 = *(int *)((int)stk + 128);

    stk[29] = a8;
    stk[30] = a9;
    stk[31] = a10;
    R1128 = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C340210, a5, a6, a7, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    u2 = *(float *)0x8C09BD58;
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + u2);
    u3 = *(float *)0x8C09BD5C;
    *(float *)0x8C340270 = (((*(float *)0x8C340280) - (*(float *)0x8C340278)) * u3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t6 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C340260, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + u3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t8 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C3402B0, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)((((int)stk + 76) + 0x4)) = ((*(float *)((((int)stk + 76) + 0x4))) + 128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 76)); }
    t10 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C340300, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + u2);
    *(float *)0x8C340360 = (((*(float *)0x8C340370) - (*(float *)0x8C340368)) * u3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 76)); }
    t14 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C340350, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + u3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 76)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C3403A0, *(Stk3 *)(((int)stk + 76)), f4));
}

int panelPartBPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t4;
    int t6;
    int t8;
    int t12;
    int stk[41];
    int R1128;

    R1128 = *(int *)((int)stk + 128);

    stk[29] = a8;
    stk[30] = a9;
    stk[31] = a10;
    R1128 = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33FD10, a5, a6, a7, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + 18.0f);
    *(float *)0x8C33FD70 = (((*(float *)0x8C33FD80) - (*(float *)0x8C33FD78)) * 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t4 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FD60, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t6 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FDB0, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)((((int)stk + 76) + 0x4)) = ((*(float *)((((int)stk + 76) + 0x4))) + 85.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 76)); }
    t8 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FE00, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + 18.0f);
    *(float *)0x8C33FE60 = (((*(float *)0x8C33FE70) - (*(float *)0x8C33FE68)) * 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 76)); }
    t12 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FE50, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 76)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FEA0, *(Stk3 *)(((int)stk + 76)), f4));
}

void ADXT_Destroy(int a4)
{
    int t22;
    int t23;
    int t26;
    int t31;
    int t33;
    int t42;
    int t52;
    int t62;
    int t28;
    int t30;
    int t32;
    int t34;
    int t44;
    int t54;
    int t64;
    int t65;

    if (a4 != 0) {
        ADXT_Stop(a4);
        if ((*(int *)((a4 + 0xC))) != 0) {
            ADXRNA_Destroy((*(int *)((a4 + 0xC))));
        }
        if ((*(int *)((a4 + 0x4))) != 0) {
            ADXSJD_Destroy((*(int *)((a4 + 0x4))));
        }
        if ((*(int *)((a4 + 0x8))) != 0) {
            ADXSTM_Close((*(int *)((a4 + 0x8))));
        }
        ADXCRS_Lock();
        t22 = *(int *)((a4 + 0x10));
        if (t22 != 0) {
            t23 = *(int *)((a4 + 0x10));
            t26 = ((int (*)(int))((*(int *)(((*(int *)((t23 + 0x0))) + 0xC)))))(t23);
        } else {
            t28 = t22;
        }
        t31 = t28;
        t33 = 0x0;
        for (;;) {
            if ((int)t33 >= (int)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t30 = a4;
            t34 = t33;
            t30 = (t30 + 0x18);
            t34 = (t34 << 2);
            t30 = (t30 + t34);
            t31 = (*(int *)((t30 + 0x0)));
            if (t31 != 0) {
                t32 = a4;
                t32 = (t32 + 0x18);
                t32 = (t32 + t34);
                t32 = (*(int *)((t32 + 0x0)));
                t31 = (*(int *)((t32 + 0x0)));
                t30 = (*(int *)((t31 + 0xC)));
                t42 = ((int (*)(int))(t30))(t32);
            } else {
                t44 = t30;
            }
            t30 = t44;
            t31 = a4;
            t31 = (t31 + 0x78);
            t31 = (t31 + t34);
            t30 = (*(int *)((t31 + 0x0)));
            if (t30 != 0) {
                t32 = a4;
                t32 = (t32 + 0x78);
                t32 = (t32 + t34);
                t32 = (*(int *)((t32 + 0x0)));
                t31 = (*(int *)((t32 + 0x0)));
                t30 = (*(int *)((t31 + 0xC)));
                t52 = ((int (*)(int))(t30))(t32);
            } else {
                t54 = t30;
            }
            t30 = t54;
            t31 = 0x80;
            t31 = (t31 + a4);
            t31 = (t31 + t34);
            t30 = (*(int *)((t31 + 0x0)));
            if (t30 != 0) {
                t32 = 0x80;
                t32 = (t32 + a4);
                t32 = (t32 + t34);
                t32 = (*(int *)((t32 + 0x0)));
                t31 = (*(int *)((t32 + 0x0)));
                t30 = (*(int *)((t31 + 0xC)));
                t62 = ((int (*)(int))(t30))(t32);
            } else {
                t64 = t30;
                t65 = t31;
            }
            t33 = (t33 + 0x1);
            t30 = t64;
            t31 = t65;
        }
        if ((*(int *)((a4 + 0x74))) != 0) {
            ADXAMP_Destroy((*(int *)((a4 + 0x74))));
        }
        memset(a4, 0x0, 0x8C);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        ADXCRS_Unlock();
    return;
    }
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

int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7)
{
    int t1;
    int t71;
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
    int t35;
    int t24;
    int t25;
    int t26;
    int t28;
    int t43;
    int t36;
    int t37;
    int t38;
    int t39;
    int t72;
    int t78;
    int t77;
    int t61;
    int t50;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t71 = a7;
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
                t35 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = ((unsigned char)(*(signed char *)((t24 + t1))) << 8);
                        t28 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = ((unsigned char)t28 << 8);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t35 = t26;
                }
                t50 = t35;
            } else {
                t43 = 0x0;
                if ((int)t16 > 0) {
                    t36 = (0x0 + t1);
                    t37 = (0x0 + ((t18 << 1) + t14));
                    t38 = 0x0;
                    for (;;) {
                        t39 = *(signed char *)((t36 + 0x0));
                        t36 = (t36 + 0x1);
                        t38 = (t38 + 0x1);
                        *(unsigned short *)((t37 + 0x0)) = ((unsigned char)t39 << 8);
                        t37 = (t37 + 0x2);
                        if ((int)t38 >= (int)t16) {
                            break;
                        }
                    }
                    t43 = t38;
                }
                t50 = t43;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t61 = t50;
        }
        t71 = t61;
    }
    t72 = *(int *)((a4 + 0x4));
    t78 = t72;
    if (t72 == 2) {
        t77 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t71);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t78 = t77;
    }
    return t78;
}

int hudBgTileInit(int a4, int a5, int a6, int a7)
{
    float u0;
    float u4;
    float u14;
    float u17;
    int stk[15];
    int R1020;

    R1020 = *(int *)((int)stk + 20);

    u0 = *(float *)0x8C09B24C;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, u0);
    R1020 = 0x8C33F1D0;
    sprInitPos(0x8C33F1D0, 0x10);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    u4 = *(float *)0x8C09B254;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u4, 0.0f, u0);
    R1020 = 0x8C33F220;
    sprInitPos(0x8C33F220, 0x11);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, u4, u0);
    R1020 = 0x8C33F270;
    sprInitPos(0x8C33F270, 0x12);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u4, u4, u0);
    R1020 = 0x8C33F2C0;
    sprInitPos(0x8C33F2C0, 0x13);
    *(unsigned int *)(((R1020) + 0x34)) = 0x5;
    u14 = *(float *)0x8C09B258;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u14, 0.0f, u0);
    sprInitPos(0x8C33F310, 0x14);
    *(unsigned int *)0x8C33F344 = 0x5;
    u17 = *(float *)0x8C09B25C;
    *(float *)0x8C33F330 = u17;
    *(float *)0x8C33F320 = u17;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u14, u4, u0);
    sprInitPos(0x8C33F360, 0x14);
    *(unsigned int *)0x8C33F394 = 0x5;
    *(float *)0x8C33F378 = u17;
    *(float *)0x8C33F370 = u17;
    return 0x10;
}

int panelPartCPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t4;
    int t6;
    int t8;
    int t12;
    int stk[41];
    int R1128;

    R1128 = *(int *)((int)stk + 128);

    stk[29] = a8;
    stk[30] = a9;
    stk[31] = a10;
    R1128 = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33FF40, a5, a6, a7, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + 18.0f);
    *(float *)0x8C33FFA0 = (((*(float *)0x8C33FFB0) - (*(float *)0x8C33FFA8)) * 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t4 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FF90, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)(((((int)stk + 76) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x28) + 0x0))) + 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 76) + 0x28)); }
    t6 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33FFE0, *(Stk3 *)((((int)stk + 76) + 0x28)), f4);
    *(float *)((((int)stk + 76) + 0x4)) = ((*(float *)((((int)stk + 76) + 0x4))) + 128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 76)); }
    t8 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C340030, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + 18.0f);
    *(float *)0x8C340090 = (((*(float *)0x8C3400A0) - (*(float *)0x8C340098)) * 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 76)); }
    t12 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C340080, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)((((int)stk + 76) + 0x0)) = ((*(float *)((((int)stk + 76) + 0x0))) + 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 76)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C3400D0, *(Stk3 *)(((int)stk + 76)), f4));
}

int mwlRnaAddWrPos(int a4)
{
    int t3;
    int t4;
    int t17;
    int t18;
    int t29;
    int t33;
    int t0;
    int t1;
    int t2;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int stk[16];

    t3 = a4;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = a4;
        t1 = t4;
        t2 = (t2 + 0x10);
        t1 = (t1 << 2);
        t1 = (t1 + t2);
        t0 = (*(int *)((t1 + 0x0)));
        if (t0 == 0) {
            mwRnaErrCallFunc(0x8C20AC58);
        } else {
            t10 = t0;
            t11 = t1;
            t12 = t2;
            t13 = t3;
        }
        t0 = t10;
        t4 = (t4 + 0x1);
        t1 = t11;
        t2 = t12;
        t3 = t13;
    }
    t17 = 0x8C200162;
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 24)) = (*(int *)((((a4 + 0x18) + ((t18 << 2) << 1)) + 0x0)));
        *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((t18 << 2) << 1) + (a4 + 0x18)) + 0x4)));
        SJ_SplitChunk((((int)stk + 8) + 0x10), ((int)((int)((*(int *)((a4 + 0x3C))) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((int)stk + 8) + 0x8), ((int)stk + 8));
        t16 = a4;
        t17 = t18;
        t16 = (t16 + 0x10);
        t17 = (t17 << 2);
        t16 = (t16 + t17);
        t16 = (*(int *)((t16 + 0x0)));
        t29 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x20)))))(t16, 0x0, (((int)stk + 8) + 0x8));
        t16 = a4;
        t16 = (t16 + 0x10);
        t16 = (t16 + t17);
        t16 = (*(int *)((t16 + 0x0)));
        t33 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x1C)))))(t16, 0x1, ((int)stk + 8));
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((int)((int)((*(int *)((a4 + 0x2C))) + (*(int *)((a4 + 0x3C)))) % (int)(*(int *)((a4 + 0x28)))));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (*(int *)((a4 + 0x3C))));
    *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + (*(int *)((a4 + 0x3C))));
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return 0x4C;
}
