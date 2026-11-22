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


void sprListPut(int a4, int a5, int a6, Stk3 p, float f4, float f5, float f6)
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
                u12 = (*(float *)&p.w[0]);
                u12 = u12 + f5 * u11;
                t1 = 0x4;
                t2 = (t2 + t7);
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + 0x0)) = u12;
                u13 = *(float *)((t2 + t1));
                t2 = t4;
                t2 = (t2 + 0xC);
                t2 = (t2 + t7);
                u15 = (*(float *)&p.w[1]);
                u15 = u15 + f5 * u13;
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = u15;
                t1 = 0x8;
                *(float *)((((t9 * 0x1C) + (((int)stk + 4) + 0xC)) + t1)) = (*(float *)&p.w[2]);
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
    resetBackColorZ(0xE0E0E0E0, 0xE0E0E0E0, 0xE0E0E0E0);
    nlWaitVSync();
    nlWaitVSync();
    return setBorderColor(0x0);
}

int bgTilesInit(int a4, int a5, int a6, int a7)
{
    int stk[15];


    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, 400.0f);
    (*(int *)((int)stk + 20)) = 0x8C33CF40;
    sprInitPos(0x8C33CF40, 0x27, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 256.0f, 0.0f, 400.0f);
    (*(int *)((int)stk + 20)) = 0x8C33CF90;
    sprInitPos(0x8C33CF90, 0x28, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 256.0f, 400.0f);
    (*(int *)((int)stk + 20)) = 0x8C33CFE0;
    sprInitPos(0x8C33CFE0, 0x29, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 256.0f, 256.0f, 400.0f);
    (*(int *)((int)stk + 20)) = 0x8C33D030;
    sprInitPos(0x8C33D030, 0x2A, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 512.0f, 0.0f, 400.0f);
    sprInitPos(0x8C33D080, 0x2B, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)0x8C33D0B4 = 0x5;
    *(float *)0x8C33D0A0 = 0.5f;
    *(float *)0x8C33D090 = 0.5f;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 512.0f, 256.0f, 400.0f);
    sprInitPos(0x8C33D0D0, 0x2B, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)0x8C33D104 = 0x5;
    *(float *)0x8C33D0E8 = 0.5f;
    *(float *)0x8C33D0E0 = 0.5f;
    return 0x10;
}

int panelBodyPut(int a4, int a5, int a6, int a7, Stk4 p, float f4)
{
    int t0;
    float u2;
    float u3;
    int t6;
    int t8;
    int t10;
    int t14;
    int stk[41];


    stk[29] = p.w[0];
    stk[30] = p.w[1];
    stk[31] = p.w[2];
    stk[32] = p.w[3];
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

int panelPartBPut(int a4, int a5, int a6, int a7, Stk4 p, float f4)
{
    int t0;
    int t4;
    int t6;
    int t8;
    int t12;
    int stk[41];


    stk[29] = p.w[0];
    stk[30] = p.w[1];
    stk[31] = p.w[2];
    stk[32] = p.w[3];
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


int hudBgTileInit(int a4, int a5, int a6, int a7)
{
    float u0;
    float u4;
    float u14;
    float u17;
    int stk[15];


    u0 = *(float *)0x8C09B24C;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, u0);
    (*(int *)((int)stk + 20)) = 0x8C33F1D0;
    sprInitPos(0x8C33F1D0, 0x10, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    u4 = *(float *)0x8C09B254;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u4, 0.0f, u0);
    (*(int *)((int)stk + 20)) = 0x8C33F220;
    sprInitPos(0x8C33F220, 0x11, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, u4, u0);
    (*(int *)((int)stk + 20)) = 0x8C33F270;
    sprInitPos(0x8C33F270, 0x12, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u4, u4, u0);
    (*(int *)((int)stk + 20)) = 0x8C33F2C0;
    sprInitPos(0x8C33F2C0, 0x13, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)((((*(int *)((int)stk + 20))) + 0x34)) = 0x5;
    u14 = *(float *)0x8C09B258;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u14, 0.0f, u0);
    sprInitPos(0x8C33F310, 0x14, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)0x8C33F344 = 0x5;
    u17 = *(float *)0x8C09B25C;
    *(float *)0x8C33F330 = u17;
    *(float *)0x8C33F320 = u17;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u14, u4, u0);
    sprInitPos(0x8C33F360, 0x14, *(Stk3 *)(((int)stk + 8)));
    *(unsigned int *)0x8C33F394 = 0x5;
    *(float *)0x8C33F378 = u17;
    *(float *)0x8C33F370 = u17;
    return 0x10;
}

int panelPartCPut(int a4, int a5, int a6, int a7, Stk4 p, float f4)
{
    int t0;
    int t4;
    int t6;
    int t8;
    int t12;
    int stk[41];


    stk[29] = p.w[0];
    stk[30] = p.w[1];
    stk[31] = p.w[2];
    stk[32] = p.w[3];
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

