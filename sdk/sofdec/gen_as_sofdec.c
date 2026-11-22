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
