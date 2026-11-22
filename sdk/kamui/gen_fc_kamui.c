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


