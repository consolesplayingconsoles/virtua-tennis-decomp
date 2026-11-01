/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
int VQalloc(int, int, int, int, int, int, int, int, int);
extern int _builtin_tas(char *);
int abs(int);
int camWorldToView(int, ...);
int charaTexFreeAll(void);
int colliObjInit(int, int, int, int, int, float);
extern int hudCallDigitPut();
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdRecvFrame(void);
int kdSetBlockRead(int, int, int, int, int);
int kdSetBlockReadEx(int, int, int, int, int, int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetCallback(int, int, int);
int kmSetFogVertexColor(int, int, int, int, int);
int kmytex_GetSmallVQprofile(int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int nlSubVector3op(int, int, int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int pdTmrAlarm(int, int);
int pdTmrIsReady(int);
int pdVibMxIsReady(int);
int resultFlagsClear(void);
int screenProject(int, int, Stk3);
int set_event(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAtAlpha();
int stageLoadInit(int);
int stageTexFree(int, int, int, int, int);
int stageWtcMainTexFree(void);
int standSort(int, int);
int vecLineCrossXZ(int, ...);
int vmsfb_sleep(void);
int vmsfs_memcpyl(int, int, int);
int vmsio_ismount(int);
int hudFontNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int vmsio_block_read(int a4, int a5, int a6);
int vecSegCrossXZ(Stk10 s);
int hudCallNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int screenSphereVisible(Stk3 s, float f4);
int pdTmrGetTime(int a4, int a5, int a6, int a7);
int sprSet192Setup(void);
int mwRnaSetPlaySw(int a4, int a5);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int stageLoadBegin(int a4);
int pdVibGetDirection(int a4);
int pdVibMxSetStopTime(int a4, int a5);
int kmyAllocateSmallVQArea(int a4, int a5, int a6);
int nlSetFogVertexColor(int a4, int a5, int a6, int a7);
int padVmsBeep(int a4, int a5);
int miniBallObjSpawn(void);


int vmsio_block_read(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t8;
    int t9;
    int t11;
    int t16;
    int t19;
    int t26;
    int t27;
    int t38;
    int t10;
    int stk[13];
    int R1008;
    int R1012;
    int R1016;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1016 = a5;
    R1008 = a6;
    t0 = vmsio_ismount(a4);
    if (t0 == 0) {
        vmsfb_sleep();
        t38 = 0xFFFFFF01;
    } else {
        t2 = *(int *)(((a4 << 2) + 0x8C20B048));
        kdGetDevice(t2);
        t4 = R1008;
        R1008 = 0x0;
        for (;;) {
            if ((int)(R1008) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x3C)))) {
                return 0x0;
            }
            t8 = t4;
            t9 = 0x0;
            for (;;) {
                t11 = kdIsChanged(t2);
                if (t11 == 0) {
                    t10 = 0x8C1E9CB8;
                    t10 = (kdSetBlockRead(t2, 0x2, 0x0, t9, ((R1016))));
                    if ((int)t10 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    for (;;) {
                        t16 = kdGetStatus(t2, t10);
                        if (t16 == 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        break;
                    }
                    R1012 = (kdGetDevice(t2));
                    t19 = kdIsChanged(t2);
                    if (t19 != 0) {
                        break;
                    }
                    t26 = *(signed char *)(((R1012) + 0x4));
                    t27 = *(int *)(((R1012) + 0x8));
                    if ((unsigned char)t26 != 8) {
                        if ((unsigned char)t26 != 0xFC) {
                            if ((unsigned char)t26 == 0xFB) {
                                return 0xFFFF0000;
                            }
                            return 0xFFFFFF01;
                        }
                        continue;
                    }
                    vmsfs_memcpyl(t8, (t27 + 0xC), (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x44))));
                    t9 = (t9 + 0x1);
                    t8 = (t8 + (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x44))));
                    R1008 = ((R1008) + 0x1);
                    if ((int)(R1008) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x3C)))) {
                        return 0x0;
                    }
                    continue;
                }
                break;
            }
            break;
        }
        t38 = 0xFFFFFF30;
    }
    return t38;
}


int hudCallNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t0;
    int t1;
    int t12;
    int t15;
    int t27;
    int t31;
    int t29;
    int stk[21];

    stk[10] = a8;
    stk[11] = a9;
    stk[12] = a10;
    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    if (t0 == 1) {
        *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + 7.0f);
    }
    if ((int)a4 > (int)0xA) {
        *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + 6.0f);
    }
    if (a4 == 11) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
        t12 = ((int (*)(int, int, int, int, Stk3, float, float))(hudCallDigitPut))(t0, 0xA, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, f5);
        *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) - 20.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
        t31 = (((int (*)(int, Stk3, float, float))(hudCallDigitPut))(t1, *(Stk3 *)(((int)stk + 4)), f4, f5));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
        t15 = ((int (*)(int, int, int, int, Stk3, float, float))(hudCallDigitPut))(t0, 0xA, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, f5);
        if (t1 == 1) {
            *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) - 15.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
            t29 = (((int (*)(int, Stk3, float, float))(hudCallDigitPut))(t1, *(Stk3 *)(((int)stk + 4)), f4, f5));
        } else {
            t27 = t1;
            if (t1 != 0) {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) - (*(float *)0x8C0996E4));
                if (t0 == 1) {
                    *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) - (*(float *)0x8C0996E8));
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
                t27 = (((int (*)(int, Stk3, float, float))(hudCallDigitPut))(t1, *(Stk3 *)(((int)stk + 4)), f4, f5));
            }
            t29 = t27;
        }
        t31 = t29;
    }
    return t31;
}

int screenSphereVisible(Stk3 s, float f4)
{
    int t26;
    int t4;
    float u5;
    float u6;
    float u7;
    int t19;
    int t11;
    float u12;
    float u13;
    float u14;
    int t17;
    int stk[24];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    camWorldToView((((int)stk + 20) + 0x8));
    t26 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)(((int)stk + 8)));
        t4 = abs((*(int *)(((int)stk + 20))));
        u5 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u6 = *(float *)0x8C287A10;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = u5;
        }
        t19 = 0x0;
        if ((((u6 * f4) / u7) + (*(float *)0x8C08A2CC)) > (float)t4) {
            t11 = abs((*(int *)(((int)stk + 24))));
            u12 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u13 = *(float *)0x8C287A10;
            u14 = (-u12);
            if (!(0.0f > u12)) {
                u14 = u12;
            }
            t17 = 0x0;
            if ((((u13 * f4) / u14) + (*(float *)0x8C08A2D0)) > (float)t11) {
                t17 = 0x1;
            }
            t19 = t17;
        }
        t26 = t19;
    }
    return t26;
}

int pdTmrGetTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t6;
    int t2;
    int t3;
    int t8;

    t0 = *(signed char *)((a4 + 0x8C20A958));
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0)) = a5;
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x4)) = a7;
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x8)) = a6;
    t1 = pdTmrIsReady(a4);
    t6 = 0xFFFFFFFE;
    if (t1 == 0) {
    } else {
        t2 = kdSetBlockReadEx(a4, 0x8, 0x0, 0x0, 0x0, 0x8C1EF278);
        t3 = 0x0;
        if ((int)t2 < 0) {
            t3 = 0xFFFFFFFF;
        }
        t6 = t3;
    }
    if (((int)t6 < 0) && (a6 != 0)) {
        t8 = ((int (*)(int, int))(a6))(t6, a7);
    }
    return 0x0;
}

int sprSet192Setup(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int stk[23];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 20) + 0x8)) = *(struct mv8 *)(0x8C124AC0); }
    *(unsigned int *)(((int)stk + 20)) = 0x8C124AC0;
    t0 = 0x0;
    t1 = 0x8C124A78;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        *(unsigned int *)(((int)stk + 24)) = (0x8C37CF10 + t0);
        sprInitRectF((0x8C37CF10 + t0), t2, (((int)stk + 20) + 0x8), 0x80, 0x80, 0x0);
        t4 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t5 = sprInitRectF((0x8C37D4B0 + t0), t4, (((int)stk + 20) + 0x8), 0x80, 0x80, 0x1);
        t6 = *(int *)(((int)stk + 24));
        *(unsigned int *)((t6 + 0x34)) = ((*(int *)((t6 + 0x34))) | 0x5);
        *(unsigned int *)(((0x8C37D4B0 + t0) + 0x34)) = ((*(int *)(((0x8C37D4B0 + t0) + 0x34))) | 0x5);
        *(unsigned int *)(((0x8C37D4B0 + t0) + 0x28)) = 0xFFFFC000;
        t0 = (t0 + 0x50);
        if ((unsigned int)t1 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
            break;
        }
    }
    return t5;
}

int mwRnaSetPlaySw(int a4, int a5)
{
    int t4;
    int t5;
    int t8;
    int t13;
    int t14;
    int t17;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114((((int)stk + 8) + 0x4));
    if ((*(int *)(((int)stk + 8))) == 0) {
        t4 = mwRnaGetPlaySw(a4);
        if (t4 != 0) {
            t5 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 8)) = t5;
            t8 = ((int (*)(int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x14)))))(t5);
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x5);
        }
    } else {
        if ((*(int *)(((int)stk + 8))) == 1) {
            t13 = mwRnaGetPlaySw(a4);
            if (t13 != 1) {
                t14 = *(int *)((a4 + 0x38));
                *(unsigned int *)(((int)stk + 8)) = t14;
                t17 = ((int (*)(int))((*(int *)(((*(int *)((t14 + 0x0))) + 0x10)))))(t14);
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x2);
            }
        }
    }
    return (ovUnlockCs_8c20012c((((int)stk + 8) + 0x4)));
}

int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a11, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int stageLoadBegin(int a4)
{
    int t11;
    int t2;
    int t17;
    int t18;
    int t19;
    int t20;

    stageLoadInit(a4);
    if (((*(int *)0x8C287D5C) != 2) && (t2 = *(int *)0x8C287D5C, t2 != 3)) {
    } else {
        stageWtcMainTexFree();
    }
    *(unsigned int *)0x8C287C50 = 0x3E8;
    resultFlagsClear();
    *(unsigned int *)0x8C181638 = 0x0;
    *(unsigned int *)0x8C343254 = 0xFFFFFFFF;
    if (a4 == 1) {
        *(unsigned int *)0x8C185644 = 0x1;
        *(unsigned int *)0x8C34400C = 0x0;
        standSort(0x0, 0x1);
    } else {
        *(unsigned int *)0x8C185644 = 0x0;
        *(unsigned int *)0x8C34400C = 0x1;
        t11 = 0x2;
        if ((*(int *)0x8C29B27C) == 0) {
        } else {
            t11 = (*(int *)0x8C287C58);
        }
        *(unsigned int *)0x8C1891F0 = t11;
        t17 = 0x8C1891F0;
        t18 = 0x1;
        t19 = 0x8C185644;
        t20 = 0x8C343FE8;
    }
    *(unsigned int *)0x8C287C50 = 0x1F4;
    stageTexFree(t17, t18, t19, t20, a4);
    return charaTexFreeAll();
}

int pdVibGetDirection(int a4)
{
    int t1;
    int t2;
    int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0x8C20A9DC))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0x8C20A9F4 + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int pdVibMxSetStopTime(int a4, int a5)
{
    int t1;
    int t4;
    int stk[9];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = pdVibMxIsReady((*(int *)(((int)stk + 20))));
    if (t1 == 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned char *)((((int)stk + 16) + 0x0)) = 0x0;
    *(unsigned char *)(((((int)stk + 16) + 0x1) + 0x0)) = 0x2;
    *(unsigned char *)((((((int)stk + 16) + 0x1) + 0x1) + 0x0)) = (*(int *)(((int)stk + 24)));
    t4 = kdSetBlockWrite((*(int *)(((int)stk + 20))), 0x100, 0x0, 0x0, 0x0, (((int)stk + 12) + 0x4), 0x1);
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int kmyAllocateSmallVQArea(int a4, int a5, int a6)
{
    int t3;
    int t5;
    int t9;
    int t11;
    int t17;
    int t18;
    int stk[14];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    kmytex_GetSmallVQprofile((((int)stk + 24) + 0x8), a5);
    if (((*(int *)(((int)stk + 28))) & 1) != 0) {
        t3 = *(int *)(((((int)stk + 24) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = t3;
        t5 = *(int *)(((((int)stk + 24) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 16)) = t5;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x10)));
        t17 = 0x1;
        t18 = (*(int *)(((int)stk + 24)));
    } else {
        t9 = *(int *)(((((int)stk + 24) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = t9;
        t11 = *(int *)(((((int)stk + 24) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 16)) = t11;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x10)));
        t17 = 0x0;
        t18 = (*(int *)(((int)stk + 24)));
    }
    return (VQalloc(t17, t18, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16)));
}

int nlSetFogVertexColor(int a4, int a5, int a6, int a7)
{
    return (kmSetFogVertexColor(a4, a5, a6, a7, a4));
}

int padVmsBeep(int a4, int a5)
{
    int t7;
    int t8;

    *(unsigned char *)0x8C2FBC4C = (*(signed char *)0x8C2FBC48);
    *(unsigned char *)0x8C2FBC4D = (*(signed char *)0x8C2FBC49);
    *(unsigned char *)0x8C2FBC48 = a5;
    *(unsigned char *)0x8C2FBC49 = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    *(unsigned char *)0x8C2FBC4A = 0x0;
    *(unsigned char *)0x8C2FBC4B = 0x0;
    if (((*(signed char *)0x8C2FBC4C) == (*(signed char *)0x8C2FBC48)) && (t7 = *(signed char *)0x8C2FBC4D, t8 = *(signed char *)0x8C2FBC49, t7 == t8)) {
        return 0x0;
    }
    return pdTmrAlarm((*(int *)(((a4 << 2) + 0x8C159AF0))), 0x8C2FBC48);
}

int miniBallObjSpawn(void)
{
    int t0;
    int t1;
    int t3;
    int t6;
    int t4;

    t0 = set_event(0x11C, 0x8C038B24);
    t1 = 0x8C291F24;
    t3 = (t0 + 0x14);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0x8C291F24 + 140)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    *(unsigned int *)((t0 + 0x118)) = 0x0;
    colliObjInit((t0 + 0x20), 0x0, 0x0, 0x0, (0xA0 + t0), (1.0f + 1.0f));
    *(unsigned int *)((t0 + 0xD0)) = 0x1;
    t6 = *(int *)((t0 + 0xD8));
    *(unsigned int *)(((0xD8 + t0) + 0x0)) = (t6 | 0x4);
    return (t6 | 0x4);
}
