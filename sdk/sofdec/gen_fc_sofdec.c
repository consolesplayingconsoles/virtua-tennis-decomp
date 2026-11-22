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


