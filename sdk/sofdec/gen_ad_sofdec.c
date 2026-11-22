/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_ExecServer(void);
int ADXF_GetNumReadSct(int);
int ADXF_GetStat(int);
int ADXF_ReadNw32(int, int, int);
int ADXSTM_ExecServer(void);
int _destructFiber(int, int);
int adxf_ChkPrmGfr(int, int);
int adxf_wait_1ms(void);
int fadeReset(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int fileLoadSync(int, int, int);
int frameHookNop(void);
int gameModeSet(int, int, int);
int gdFsExecServer(int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTextureRom(int, int);
int kmQueryFinishLastTextureDMA(void);
int kmyContinueTA(int);
int kmyEnableASyncCopy(int);
int kmyQueryFinishDMA(int);
int kmyRequestCallback(int);
int kmySetupTA(int);
int longjmp(int, int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInitEvent(void);
int nlInitTextureSurface(int, int);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlSpriteSetImaginaryScreenSize(float, float);
int nlWaitVSync(void);
int nlsndG2Write(int, int);
int padLcdModeClear(void);
int rankSprTexLoad(void);
int setjmp(int, int, int, int, float, float, float, float, float, float, float, float);
int sndPack2LoadSync(void);
int sprInitRectF(int, int, int, int, int, int);
int stageFreeAll(void);
int stageSoftReset(void);
int strmControl(int, int);
int titleSprTexLoad(void);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsio_init(void);
int vmsfs_init(int a4, int a5, int a6);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int nlsndPackLoadInit(int a4, int a5, int a6, int a7);
int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int hudBarSprInit(void);
int adxf_LoadData(int a4, int a5, int a6);
int kmiFLWCTRLStartPass(int a4);
int nlLoadTextureMem(int a4, int a5, int a6);
int mainSoftReset(int a4);
int sklDrawNodeOne(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlInitSprite(int a4, int a5, int a6);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int rankDispLoad(void);
int nlInitCommonTexture(int a4, int a5, int a6);


int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t25;
    int t26;
    int t15;

    t0 = adxf_ChkPrmGfr(a4, a5);
    if ((int)t0 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0x8C46C264));
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t4 = *(short *)(((t1 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t5 = (0x0 + ((t1 + 0x14) + 0x2));
                    t6 = 0x0;
                    t7 = (unsigned short)t4;
                    for (;;) {
                        t8 = *(short *)((t5 + 0x0));
                        t5 = (t5 + 0x2);
                        t6 = (t6 + 0x1);
                        t7 = (t7 + (unsigned short)t8);
                        if ((int)t6 >= (int)a5) {
                            break;
                        }
                    }
                    *(unsigned int *)((a6 + 0x0)) = (t7 + (*(int *)((t1 + 0x8))));
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((((t1 + 0x14) + 0x2) + (a5 << 1))));
                    return t0;
                }
                *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t4 + (*(int *)((t1 + 0x8))));
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((((t1 + 0x14) + 0x2) + (a5 << 1))));
                return t0;
            }
            t13 = (t1 + 0x14);
            t14 = t2;
            t16 = t1;
            t17 = a5;
            t18 = 0x0;
            for (;;) {
                if ((int)t18 >= (int)(unsigned short)(*(short *)((t16 + 0x10)))) {
                    t16 = (*(int *)((t16 + 0x0)));
                    t14 = (*(int *)((t16 + 0x0)));
                    if (t14 == 0) {
                        t17 = t16;
                        t17 = (t17 + 0x14);
                        t18 = (*(short *)((t17 + 0x0)));
                        t13 = t17;
                        t17 = 0x0;
                        t18 = (unsigned short)t18;
                        t13 = (t13 + 0x2);
                        if ((int)a5 > 0) {
                            t25 = (0x0 + t13);
                            for (;;) {
                                t26 = *(short *)((t25 + 0x0));
                                t25 = (t25 + 0x2);
                                t15 = t26;
                                t17 = (t17 + 0x1);
                                t15 = (unsigned short)t15;
                                t18 = (t18 + t15);
                                if ((int)t17 >= (int)a5) {
                                    break;
                                }
                            }
                            t15 = (*(int *)((t16 + 0x8)));
                            t18 = (t18 + t15);
                            *(unsigned int *)((a6 + 0x0)) = t18;
                            t15 = (*(short *)((t13 + (a5 << 1))));
                            t15 = (unsigned short)t15;
                            *(unsigned int *)((a7 + 0x0)) = t15;
                            return t0;
                        }
                        t15 = (*(int *)((t16 + 0x8)));
                        t18 = (t18 + t15);
                        *(unsigned int *)((a6 + 0x0)) = t18;
                        t15 = (*(short *)((t13 + (a5 << 1))));
                        t15 = (unsigned short)t15;
                        *(unsigned int *)((a7 + 0x0)) = t15;
                        return t0;
                    }
                    t13 = t16;
                    t13 = (t13 + 0x14);
                    t18 = 0x0;
                    continue;
                }
                t17 = t18;
                t17 = (t17 << 2);
                t17 = (t17 << 1);
                t17 = (t17 + t13);
                t15 = (*(short *)((t17 + 0x0)));
                t15 = (unsigned short)t15;
                if (t15 == a5) {
                    break;
                }
                t18 = (t18 + 0x1);
            }
            break;
        }
        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((t16 + 0x8))) + (*(int *)((t17 + 0x4))));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)(*(short *)((t17 + 0x2)));
    }
    return t0;
}


int adxf_LoadData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t12;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_ReadNw32(a4, a5, a6);
        if ((int)t1 <= 0) {
            gdFsExecServer(t1);
            ADXSTM_ExecServer();
            ADXF_ExecServer();
            adxf_wait_1ms();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        t7 = t1; break;
    }
    if (t0 == 0x2710) {
        return 0x0;
    }
    t8 = 0x0;
    for (;;) {
        gdFsExecServer(t7);
        ADXSTM_ExecServer();
        ADXF_ExecServer();
        t12 = ADXF_GetStat(a4);
        if (t12 != 3) {
            adxf_wait_1ms();
            t8 = (t8 + 0x1);
            if ((int)t8 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    return ADXF_GetNumReadSct(a4);
}

