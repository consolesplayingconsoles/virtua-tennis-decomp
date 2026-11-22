/* Straight-line functions with calls and guards (batch gen_fc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[4]; } Stk4;
int VQalloc(int, int, int, int, int, int, int, int, int);
extern int _builtin_tas(char *);
int abs(int);
void camWorldToView(Stk4);
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


