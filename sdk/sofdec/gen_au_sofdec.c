typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int ADXT_StartAfs(int, int, int);
int ADX_DecodeInfoAu(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int, int, int, int, int, int, int, int);
int BupFailDialog(int);
int BupGetInfo(int);
int BupLoadFile(int, int, int, int);
int BupSaveFile(int, int, int, int);
int ballColliInit(void);
int buGetDiskInfo(int, int);
int buIsFormat(int);
int camMoveBegin(float, float);
int camSetEye(Stk3);
int camSetTarget(Stk3);
int colliObjInit(int, int, int, int, int, float);
int cpuAimAngleRate(int, int, int, int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int cursorBoxPut(int);
int entryCountJoined(void);
int fmMngBit2Num(int, int);
int fmMngMcpy4(int, int, int);
int fmcalccrc(int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyEnableInterrupt(void);
int kmyInitDMADevice(void);
int kmyInitializeCallback(void);
int kmyInitializeDriver(void);
int kmyInitializeFog(void);
int kmyInitializeHardware(int);
int kmyInitializeInterrupt(void);
int kmyInitializeTA(int);
int kmyRegisterCallback(int, int, int);
int kmyRegisterPALEXTCallback(int);
int memset(int, int, int);
int motionRootAtFrame(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int mtxGetPos(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTrnsl(int, int);
int nlLoadMatrix(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutSetSaturate(float, float);
int nlObjPutTrnsl(int, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int primVertexSet(int, int, int, int, int, Stk3);
int resCautionReset(int);
int search_dir(int, int, int);
int set_event2(int, int);
int shadowPlayerDraw(int, int, int, int, int, int);
int sndSeDecide(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int strmVoiceSetVol(int);
int syBtFlRead(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int cpuSglAimScoreAngle(int a4, int a5);
int vmsfs_fread1(int a4, int a5);
float padLcdProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void swingBlurPut(int a4, float f4, float f5);
int courtAngleInSector(int a4, int a5);
int umpireInit(void);
int endPlayerPut(int a4, int a5, int a6, int a7);
int vmsfs_fgetinfo(int a4, int a5, int a6);
void hudSlideShow(int a4, int a5, float f4, float f5);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
void strmVoicePlay(int a4, int a5);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int rectFrameDraw(int a4, float f4);
int endingCamera2Set(void);
int BupExecRequest(void);
int fmMngReadSctAllData(int a4);
int circuitDrawPrompt(void);
int endingScreenObjPutTrnsl(float f4);
float _in_fmods(int a4, float f4, float f5);
int kmInitDevice(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int ballInit(int a4, int a5, int a6, int a7);
int miniDrawModels(void);
int entryIsVersus(int a4, int a5, int a6, int a7);
int rankInsert1(void);
float cpuEdgeX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int scorePressure(void);
int primRectDirX(int a4, int a5, int a6, int a7, Stk4 p);
int endingScreenObjPut(void);


int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7)
{
    int t1;
    int t69;
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
    int t24;
    int t25;
    int t26;
    int t28;
    int t35;
    int t36;
    int t70;
    int t76;
    int t75;
    int t59;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t69 = a7;
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
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        t26 = (t26 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t25)) = (*(short *)((((t24 << 1) + t1) + 0x0)));
                        t28 = *(short *)(((((t24 + 0x1) << 1) + t1) + 0x0));
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = t28;
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t35 = 0x0;
                    t36 = 0x0;
                    for (;;) {
                        t36 = (t36 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t35)) = (*(short *)((t1 + t35)));
                        t35 = (t35 + 0x2);
                        if ((int)t36 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t59 = 0x0;
        }
        t69 = t59;
    }
    t70 = *(int *)((a4 + 0x4));
    t76 = t70;
    if (t70 == 2) {
        t75 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t69);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t76 = t75;
    }
    return t76;
}


int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int stk[15];

    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAu((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 44))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (((int)stk + 32) + 0x4));
    t14 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
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
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x4;
        *(unsigned short *)((a4 + 0xAA)) = (*(int *)(((int)stk + 36)));
        memset((a4 + 0x4C), 0x0, 0x4);
        t14 = (*(short *)(((int)stk + 32)));
    }
    return t14;
}


int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6)
{
    int t2;
    int t13;
    int stk[14];


    (*(int *)((int)stk + 36)) = a5;
    (*(int *)((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoSpsd(((*(int *)((int)stk + 36))), ((*(int *)((int)stk + 40))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
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
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x2;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 32)));
    }
    return t13;
}


