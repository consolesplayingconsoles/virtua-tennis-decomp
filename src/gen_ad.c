/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gAdxfPartitionInfoTable[];
extern char gBuFiberScheduler[];
extern char gNlCommonTextureOffset[];
extern char gNlSoundPackUsedBytes[];
extern char gNlSpriteIndexBitmap[];
extern char gNlTextureLoadAttempts[];
extern char gNlTextureSurfaces[];
extern char gVmsIoInterface[];
extern char gVmsVolumeStates[];
extern char g_0c2aec84[];
extern char g_0c2aec88[];
extern char g_0c2b76bc[];
extern char g_0c2b76c0[];
extern char g_0c2ee978[];
extern char g_0c2ef3d0[];
extern char g_0c2fd294[];

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

int vmsfs_init(int a4, int a5, int a6)
{
    int t0;
    int t5;
    int t6;
    int t19;
    int t4;

    *(unsigned int *)(int)gVmsIoInterface = (int)g_0c2ee978;
    t0 = (int)g_0c2ef3d0;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x8C464FF8) {
            break;
        }
    }
    memset((int)g_0c2ee978, 0x0, 0x14);
    memset((int)gVmsVolumeStates, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    *(unsigned int *)0x8C4694A0 = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = (*(int *)0x8C4694A0);
            t4 = (t4 + 0x1);
            *(unsigned int *)0x8C4694A0 = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5, a6);
        *(unsigned int *)(((*(int *)(int)gVmsIoInterface) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        *(unsigned int *)(((*(int *)(int)gVmsIoInterface) + 0x8)) = 0x1;
    }
    *(unsigned int *)0x8C469498 = 0x8;
    *(unsigned int *)0x8C46949C = 0x0;
    vmsfs_setretry(0xA);
    t19 = *(int *)0x8C469498;
    memset(0x8C469258, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    vmsio_init();
    return 0x0;
}

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
        t1 = *(int *)(((a4 << 2) + (int)gAdxfPartitionInfoTable));
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

int nlsndPackLoadInit(int a4, int a5, int a6, int a7)
{
    int t4;
    int t10;
    int t22;
    int t30;
    int t32;
    int t36;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0F4EA0:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R7;
    *(unsigned int *)(int)gNlSoundPackUsedBytes = ((*(int *)(int)gNlSoundPackUsedBytes) + R6);
    *(unsigned int *)(((int)stk + 8)) = (((R4 << 1) + R4) << 2);
    *(unsigned int *)((((((R4 << 1) + R4) << 2) + 0x8C454DD4) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((((((R4 << 1) + R4) << 2) + 0x8C454DD4) + 0x8)) = R6;
    nlsndG2Write((*(int *)(((int)stk + 4))), ((R4 << 2) + 0xA0800060));
    t4 = (unsigned int)(((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4) < (unsigned int)0x8C454DD4;
    *(unsigned int *)(((int)stk + 4)) = (((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4);
    t10 = (((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4);
    R1 = (0x8C454DD4);
    R11 = (0x8C454DD4);
    R12 = (R6);
    R13 = (R4);
    R4 = ((((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4));
    R5 = t10;
    R6 = (0x0);
    R7 = (0x0);
    if (t4) goto L_8C0F4F18;
    goto L_8C0F4EFA;
    L_8C0F4EFA:;
    if (((*(int *)((R4 + 0x0))) == -1)) goto L_8C0F4F10;
    goto L_8C0F4F00;
    L_8C0F4F00:;
    R6 = (((*(int *)((R5 + 0x4))) + (*(int *)((R5 + 0x8)))));
    goto L_8C0F4F18;
    L_8C0F4F18:;
    if ((R6 != 0)) goto L_8C0F4F20;
    goto L_8C0F4F1C;
    L_8C0F4F1C:;
    R6 = ((*(int *)0x8C454CB0));
    goto L_8C0F4F20;
    L_8C0F4F20:;
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + R1) + 0x4)) = R6;
    *(unsigned int *)(((int)stk + 4)) = R11;
    *(unsigned int *)(((int)stk + 8)) = (((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11);
    t22 = *(int *)(((int)stk + 4));
    R1 = ((t22 + 0x60));
    R4 = ((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11));
    R5 = ((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11));
    if (((unsigned int)(((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11) >= (unsigned int)(t22 + 0x60))) goto L_8C0F4F5C;
    goto L_8C0F4F44;
    L_8C0F4F44:;
    if (((*(int *)((R4 + 0x0))) == -1)) goto L_8C0F4F54;
    goto L_8C0F4F4A;
    L_8C0F4F4A:;
    t30 = *(int *)((R5 + 0x8));
    *(unsigned int *)((R5 + 0x4)) = ((*(int *)((R5 + 0x4))) + R12);
    R7 = ((R7 + t30));
    goto L_8C0F4F54;
    L_8C0F4F54:;
    t32 = (unsigned int)(R4 + 0xC) < (unsigned int)R1;
    R4 = ((R4 + 0xC));
    R5 = ((R5 + 0xC));
    if (t32) goto L_8C0F4F44;
    goto L_8C0F4F5C;
    L_8C0F4F5C:;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = R7;
    return R6;
    L_8C0F4F10:;
    t36 = (unsigned int)(R4 - 12) >= (unsigned int)R1;
    R4 = ((R4 - 12));
    R5 = ((R5 - 12));
    if (t36) goto L_8C0F4EFA;
    goto L_8C0F4F18;
}

int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t1;
    int t4;
    int t5;
    int t7;
    int t3;

    *(unsigned int *)(int)g_0c2fd294 = (*(int *)(int)gBuFiberScheduler);
    t1 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40000);
    *(unsigned int *)(int)gBuFiberScheduler = a4;
    setjmp((a4 + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t4 = 0x0;
    t5 = (0x210 + a4);
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x208)))) {
            break;
        }
        *(unsigned int *)((a4 + 0xD78)) = t5;
        t7 = *(int *)((t5 + 0xC));
        if (t7 != 0) {
            if (t7 != 3) {
                if (t7 != 1) {
                    if (t7 != 2) {
                    } else {
                        t3 = 0x8C2070A6;
                        *(unsigned int *)((t5 + 0xC)) = 0x3;
                        *(unsigned int *)((t5 + 0x20)) = 0x8C2070A6;
                    }
                } else {
                    t3 = (*(int *)((t5 + 0x14)));
                    if ((unsigned int)t3 <= (unsigned int)(*(int *)((a4 + 0x204)))) {
                        longjmp((t5 + 0x18), 0x1);
                    }
                }
            } else {
                _destructFiber(a4, t5);
            }
        }
        t3 = 0x124;
        t4 = (t4 + 0x1);
        t5 = (t5 + t3);
    }
    *(unsigned int *)((a4 + 0x204)) = ((*(int *)((a4 + 0x204))) + 0x1);
    *(unsigned int *)(int)gBuFiberScheduler = (*(int *)(int)g_0c2fd294);
    _builtin_set_fpscr(t1);
    return 0x204;
}

int hudBarSprInit(void)
{
    int t0;
    float u7;

    t0 = 0x0;
    for (;;) {
        sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C33DE20), 0x63, 0x8C10FF58, 0x20, 0x40, (t0));
        if ((int)t0 < (int)0x3) {
            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33DE20) + 0x34)) = 0xD;
        } else {
            *(unsigned int *)(((((((t0 << 2) + t0) << 2) << 2) + 0x8C33DE20) + 0x34)) = 0x5;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    u7 = *(float *)0x8C09B3D8;
    *(float *)0x8C33DE80 = (((*(float *)0x8C33DE90) - (*(float *)0x8C33DE88)) * u7);
    *(float *)0x8C33DF70 = (((*(float *)0x8C33DF80) - (*(float *)0x8C33DF78)) * u7);
    return 0x10;
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

int kmiFLWCTRLStartPass(int a4)
{
    int t1;
    int t3;
    int t5;
    int t8;

    if ((*(int *)0x8C460784) == 0) {
        return 0x0;
    }
    t1 = *(int *)0x8C4607B0;
    t3 = *(int *)(((*(int *)((a4 + 0x8))) + 0x10));
    t5 = kmyQueryFinishDMA((*(int *)0x8C4607D8));
    if (t5 != 0x101) {
        for (;;) {
            kmyRequestCallback(0x7);
            t8 = kmyQueryFinishDMA((*(int *)0x8C4607D8));
            if (t8 == 0x101) {
                break;
            }
        }
    }
    if (t3 == 0) {
        return kmySetupTA((*(int *)((t1 + 0x3C))));
    }
    return kmyContinueTA((*(int *)((t1 + 0x3C))));
}

int nlLoadTextureMem(int textureHeaderAddress, int textureIndex, int sourceAddress)
{
    int surfaceTableAddress;
    int createResult;
    int result;
    int dataTransformCallback;
    int loadDataAddress;
    int transformedDataAddress;
    int candidateDataAddress;
    int dmaBusy;
    int t17;

    surfaceTableAddress = *(int *)(int)gNlTextureSurfaces;
    *(unsigned int *)(int)gNlTextureLoadAttempts = ((*(int *)(int)gNlTextureLoadAttempts) + 0x1);
    createResult = kmCreateTextureSurface((surfaceTableAddress + (textureIndex * 0x3C)), (*(short *)((textureHeaderAddress + 0x0))), (*(short *)((textureHeaderAddress + 0x2))), (*(int *)((textureHeaderAddress + 0x4))));
    *(unsigned int *)(((surfaceTableAddress + (textureIndex * 0x3C)) + 0x28)) = createResult;
    result = 0x1;
    if (createResult == 0) {
        dataTransformCallback = *(int *)0x8C1DC884;
        loadDataAddress = sourceAddress;
        if (dataTransformCallback != 0) {
            transformedDataAddress = ((int (*)(int))(dataTransformCallback))(textureHeaderAddress);
            candidateDataAddress = sourceAddress;
            if (transformedDataAddress != 0) {
                candidateDataAddress = transformedDataAddress;
            }
            loadDataAddress = candidateDataAddress;
        }
        if (((*(int *)0x8C424460) != 0) && (t17 = *(int *)0x8C424464, t17 != 1)) {
            kmLoadTextureRom(((*(int *)(int)gNlTextureSurfaces) + (textureIndex * 0x3C)), loadDataAddress);
        } else {
            kmyEnableASyncCopy(0x1);
            kmLoadTextureRom(((*(int *)(int)gNlTextureSurfaces) + (textureIndex * 0x3C)), loadDataAddress);
            kmyEnableASyncCopy(0x0);
            for (;;) {
                dmaBusy = kmQueryFinishLastTextureDMA();
                if (dmaBusy == 0) {
                    break;
                }
            }
        }
        result = 0x0;
    }
    return result;
}

int mainSoftReset(int a4)
{
    int t1;
    int t3;

    fileLoadClose();
    t1 = 0x0;
    for (;;) {
        fileLoadCloseSlot(t1);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    t3 = 0x2;
    if (a4 != 0) {
        t3 = 0x6;
    }
    gameModeSet(0x0, t3, 0x0);
    sndPack2LoadSync();
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    padLcdModeClear();
    if (a4 != 0) {
        fadeReset();
        strmControl(0x2, 0x4);
        strmControl(0x4, 0x4);
    }
    stageSoftReset();
    *(unsigned int *)0x8C20D15C = 0x0;
    stageFreeAll();
    fileLoadSync(0x8CA80000, 0x8C100EB4, 0x0);
    titleSprTexLoad();
    return nlInitEvent();
}

int sklDrawNodeOne(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t2;

    nlLoadMatrix((0xC0 + a4), f4, f5, f6, f7, f8, f9);
    if (((int)(*(int *)((a4 + 0x3C))) > 0) && (t2 = *(int *)((a4 + 0x38)), t2 != 0)) {
        t3 = *(int *)((a4 + 0x38));
        nlPushMatrix(0x0);
        nlQuickInvertMatrix();
        nlMultiMatrix((0xC0 + t3));
        t7 = *(int *)((a4 + 0x3C));
        if ((int)t7 > 0) {
            t8 = 0x0;
            t9 = 0x0;
            for (;;) {
                t10 = *(int *)((t3 + 0x4));
                t11 = *(int *)((a4 + 0x4));
                t12 = *(int *)((((a4 + 0x40) + t9) + 0x0));
                t13 = *(int *)((((0x80 + a4) + t9) + 0x0));
                nlCalcPoint((t12 + t10), (t11 + t13));
                nlCalcVector(((t12 + t10) + 0xC), ((t11 + t13) + 0xC));
                t8 = (t8 + 0x1);
                *(unsigned int *)(((t11 + t13) + 0x0)) = ((*(int *)(((t11 + t13) + 0x0))) | 0x1);
                t9 = (t9 + 0x4);
                if ((int)t8 >= (int)t7) {
                    break;
                }
            }
        }
        nlPopMatrix(0x1);
    }
    return nlObjPut((*(int *)((a4 + 0x4))));
}

int nlInitSprite(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t10;
    int t12;
    int t14;

    *(unsigned int *)0x8C454C7C = 0xFFFFFFFF;
    nlSpriteSetImaginaryScreenSize((*(float *)0x8C0F3CC0), (*(float *)0x8C0F3CBC));
    *(unsigned int *)(int)g_0c2b76bc = a6;
    *(unsigned int *)(int)g_0c2b76c0 = a5;
    *(unsigned int *)0x8C454C80 = a4;
    *(unsigned int *)(int)gNlSpriteIndexBitmap = ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0x8C454C90 = ((((((int)((int)(a5 + 0x1F) / (int)0x20)) << 2) + ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC)) + 0x3) & 0xFFFFFFFC);
    if ((int)a6 > 0) {
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + (*(int *)0x8C454C80))) = 0xFFFFFFFF;
            t5 = (t5 + 0x2);
            if ((int)t4 >= (int)a6) {
                break;
            }
        }
    }
    t10 = 0x0;
    for (;;) {
        t12 = (int)((int)((*(int *)(int)g_0c2b76c0) + 0x1F) / (int)0x20);
        if ((int)t10 >= (int)t12) {
            break;
        }
        t14 = (t10 << 2);
        t10 = (t10 + 0x1);
        *(unsigned int *)(((*(int *)(int)gNlSpriteIndexBitmap) + t14)) = 0x0;
    }
    return t12;
}

int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int t4;
    int t10;
    int t13;
    int t17;
    int t20;
    int t23;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1EE9FE:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    R11 = (R4);
    R13 = (R7);
    if ((R7 != 0)) goto L_8C1EEA42;
    goto L_8C1EEA18;
    L_8C1EEA18:;
    t4 = vmsfs_fgetsize(R11, (*(int *)(((int)stk + 8))));
    R4 = (t4);
    if (((int)t4 >= 0)) goto L_8C1EEA40;
    goto L_8C1EEA26;
    L_8C1EEA26:;
    R0 = (R4);
    goto L_8C1EEA90;
    L_8C1EEA90:;
    return R0;
    L_8C1EEA40:;
    R13 = (R4);
    goto L_8C1EEA42;
    L_8C1EEA42:;
    t10 = vmsfs_fopen(R11, (*(int *)(((int)stk + 8))), ((int)stk + 4));
    R14 = (t10);
    if (((int)t10 < 0)) goto L_8C1EEA8E;
    goto L_8C1EEA52;
    L_8C1EEA52:;
    t13 = *(int *)(((int)stk + 12));
    *(unsigned int *)((((R11 * 0x148) + (int)gVmsVolumeStates) + 0x30)) = 0x1;
    *(unsigned int *)((((R11 * 0x148) + (int)gVmsVolumeStates) + 0x34)) = R13;
    t17 = ((R11 * 0x148) + (int)gVmsVolumeStates);
    R11 = (0x0);
    R12 = (t13);
    R4 = t17;
    if (((unsigned int)0x0 >= (unsigned int)R13)) goto L_8C1EEA84;
    goto L_8C1EEA6C;
    L_8C1EEA6C:;
    R10 = (0x200);
    goto L_8C1EEA6E;
    L_8C1EEA6E:;
    t20 = vmsfs_fread1((*(int *)(((int)stk + 4))), R12);
    R14 = (t20);
    if (((int)t20 < 0)) goto L_8C1EEA86;
    goto L_8C1EEA7C;
    L_8C1EEA7C:;
    t23 = (unsigned int)(R11 + 0x1) < (unsigned int)R13;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R10));
    if (t23) goto L_8C1EEA6E;
    goto L_8C1EEA84;
    L_8C1EEA84:;
    R14 = (0x0);
    goto L_8C1EEA86;
    L_8C1EEA86:;
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    goto L_8C1EEA8E;
    L_8C1EEA8E:;
    R0 = (R14);
    goto L_8C1EEA90;
}

int rankDispLoad(void)
{
    int t6;
    int t7;

    fileLoadStart(0x8CA80000, 0x8C126C34, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    rankSprTexLoad();
    t6 = 0x0;
    t7 = 0x0;
    for (;;) {
        { struct mv2 { int w[2]; }; *(struct mv2 *)((t6 + 0x8C421E78)) = *(struct mv2 *)((0x8C40C314 + t6)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x8C421EC8)) = *(struct mv3 *)((0x8C40C364 + t7)); }
        t6 = (t6 + 0x8);
        t7 = (t7 + 0xC);
        if ((unsigned int)t6 >= (unsigned int)0x50) {
            break;
        }
    }
    *(unsigned int *)0x8C421F4C = 0x0;
    *(unsigned int *)0x8C421F48 = 0x0;
    *(float *)0x8C421F50 = 55.0f;
    *(float *)0x8C421F54 = 120.0f;
    *(float *)0x8C421F58 = 0.0f;
    *(float *)0x8C421F5C = 640.0f;
    return 0x8C0E38BC;
}

int nlInitCommonTexture(int workspaceAddress, int textureCount, int commonTextureCount)
{
    int roundedBitmapBits;
    int bitmapWordsOrEntryAddress;
    int entryOffset;
    int entryIndex;
    int bitmapOrConfigurationAddress;
    int bitmapByteOffset;
    int bitmapWordIndex;

    nlInitTextureSurface(workspaceAddress, (textureCount + 0x1));
    *(unsigned int *)(int)g_0c2aec84 = ((((textureCount + 0x1) * 0x3C) + workspaceAddress) + 0x8);
    *(unsigned int *)(int)g_0c2aec88 = ((((commonTextureCount + 0x1) << 2) << 1) + ((((textureCount + 0x1) * 0x3C) + workspaceAddress) + 0x8));
    roundedBitmapBits = ((commonTextureCount + 0x1) + 0x1F);
    if ((int)((commonTextureCount + 0x1) + 0x1F) < 0) {
        roundedBitmapBits = (((commonTextureCount + 0x1) + 0x1F) + 0x1F);
    }
    *(unsigned int *)0x8C1DC880 = ((int)roundedBitmapBits >> 5);
    *(unsigned int *)0x8C1DC87C = ((commonTextureCount + 0x1) - 1);
    bitmapWordsOrEntryAddress = ((int)roundedBitmapBits >> 5);
    entryOffset = 0xFFFFFFF8;
    entryIndex = 0xFFFFFFFF;
    for (;;) {
        if ((int)entryIndex >= (int)(*(int *)0x8C1DC87C)) {
            break;
        }
        entryIndex = (entryIndex + 0x1);
        *(unsigned int *)((((*(int *)(int)g_0c2aec84) + entryOffset) + 0x0)) = 0x0;
        bitmapWordsOrEntryAddress = (*(int *)(int)g_0c2aec84);
        bitmapWordsOrEntryAddress = (bitmapWordsOrEntryAddress + entryOffset);
        entryOffset = (entryOffset + 0x8);
        *(unsigned int *)((bitmapWordsOrEntryAddress + 0x4)) = 0xFFFFFFFF;
    }
    bitmapOrConfigurationAddress = 0x8C1DC87C;
    bitmapByteOffset = 0x0;
    bitmapWordIndex = 0x0;
    for (;;) {
        if ((int)bitmapWordIndex >= (int)(*(int *)0x8C1DC880)) {
            break;
        }
        bitmapOrConfigurationAddress = (*(int *)(int)g_0c2aec88);
        bitmapWordIndex = (bitmapWordIndex + 0x1);
        *(unsigned int *)((bitmapByteOffset + bitmapOrConfigurationAddress)) = 0x0;
        bitmapByteOffset = (bitmapByteOffset + 0x4);
    }
    *(unsigned int *)(int)gNlCommonTextureOffset = 0x0;
    return bitmapOrConfigurationAddress;
}
