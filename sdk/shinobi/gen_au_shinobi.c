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


int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int t34;
    int t1;
    int t3;
    int t27;
    int t6;
    int t23;
    int t8;
    int t19;
    int t30;
    int t4;
    int t5;
    int stk[18];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0x8C464598);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t30 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 12)), t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t23 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
                    t19 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 56))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 56)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 26)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 24)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 20))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x2C));
                        t19 = 0x0;
                    }
                    t23 = t19;
                }
                t27 = t23;
            }
            t30 = t27;
        }
        t34 = t30;
    }
    return t34;
}


int fmMngReadSctAllData(int managerAddress)
{
    int cacheBufferAddress;
    int flashBaseAddress;
    int headerReadResult;
    int readResult;
    int recordCapacity;
    int bitmapReadResult;
    int bitmapAndRecordsResult;
    int usedRecordCount;
    int formatAndRecordsResult;
    int recordsReadResult;
    int physicalRecordAddress;
    int recordsRemaining;
    int recordReadResult;
    int computedCrc;
    int logicalRecordIndex;
    int logicalRecordCapacity;

    cacheBufferAddress = *(int *)((managerAddress + 0xC));
    flashBaseAddress = *(int *)((managerAddress + 0x4));
    headerReadResult = syBtFlRead(flashBaseAddress, cacheBufferAddress, 0x40);
    readResult = 0xFFFFFFFF;
    if (headerReadResult != -1) {
        recordCapacity = *(int *)((managerAddress + 0x14));
        bitmapReadResult = syBtFlRead((flashBaseAddress + ((((recordCapacity + 0x1) << 2) << 2) << 2)), (((((recordCapacity + 0x1) << 2) << 2) << 2) + cacheBufferAddress), ((((*(int *)((managerAddress + 0x18))) << 2) << 2) << 2));
        bitmapAndRecordsResult = 0xFFFFFFFF;
        if (bitmapReadResult != -1) {
            usedRecordCount = fmMngBit2Num((((((recordCapacity + 0x1) << 2) << 2) << 2) + cacheBufferAddress), (*(int *)((managerAddress + 0x18))));
            *(unsigned int *)((managerAddress + 0x10)) = usedRecordCount;
            formatAndRecordsResult = 0xFFFFFFFA;
            if ((*(short *)((managerAddress + 0x2))) == 0) {
                recordsReadResult = 0x0;
                if ((int)usedRecordCount > 0) {
                    physicalRecordAddress = (flashBaseAddress + 0x40);
                    recordsRemaining = usedRecordCount;
                    for (;;) {
                        recordReadResult = syBtFlRead(physicalRecordAddress, (managerAddress + 0x34), 0x40);
                        if (recordReadResult == -1) {
                            break;
                        }
                        if ((unsigned short)(*(short *)(((managerAddress + 0x34) + 0x0))) != 0xFFFF) {
                            computedCrc = fmcalccrc(0x3E, (managerAddress + 0x34));
                            if (((unsigned short)(*(short *)(((managerAddress + 0x34) + 0x3E))) == (unsigned short)computedCrc) && (logicalRecordIndex = *(short *)(((managerAddress + 0x34) + 0x0)), logicalRecordCapacity = *(int *)((managerAddress + 0x14)), (int)(unsigned short)logicalRecordIndex < (int)logicalRecordCapacity)) {
                                fmMngMcpy4((managerAddress + 0x34), ((((((unsigned short)(*(short *)(((managerAddress + 0x34) + 0x0))) + 0x1) << 2) << 2) << 2) + cacheBufferAddress), 0x40);
                            }
                            recordsRemaining = (recordsRemaining - 1);
                            physicalRecordAddress = (physicalRecordAddress + 0x40);
                            if ((int)recordsRemaining <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    recordsReadResult = 0xFFFFFFFF;
                }
                formatAndRecordsResult = recordsReadResult;
            }
            bitmapAndRecordsResult = formatAndRecordsResult;
        }
        readResult = bitmapAndRecordsResult;
    }
    return readResult;
}


int vmsfs_fread1(int a4, int a5)
{
    int t2;
    int t9;
    int t15;
    int t33;
    int t35;
    int t41;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    R5 = a5;
    L_8C1EC9E0:;
    R1004 = R5;
    t2 = (vmsio_isready((*(int *)((R4 + 0x28))))) != 0;
    R14 = (R4);
    if (t2) goto L_8C1ECA02;
    goto L_8C1EC9F8;
    L_8C1EC9F8:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_8C1ECA1C;
    L_8C1ECA1C:;
    R0 = (0xFFFFFF01);
    goto L_8C1ECAC2;
    L_8C1ECAC2:;
    return R0;
    L_8C1ECA02:;
    t9 = (vmsio_ismount((*(int *)((R14 + 0x28))))) == 0;
    if (t9) goto L_8C1ECA1C;
    goto L_8C1ECA0C;
    L_8C1ECA0C:;
    if (((*(signed char *)((((*(int *)((R14 + 0x28))) * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1ECA4C;
    goto L_8C1ECA1C;
    L_8C1ECA4C:;
    t15 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) >= 0;
    if (t15) goto L_8C1ECA5C;
    goto L_8C1ECA56;
    L_8C1ECA56:;
    R0 = (0xFFFFFF03);
    goto L_8C1ECAC2;
    L_8C1ECA5C:;
    R0 = (0x40);
    R13 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x40))) != 0xFFFA)) goto L_8C1ECA74;
    goto L_8C1ECA68;
    L_8C1ECA68:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_8C1ECA7A;
    goto L_8C1ECA6E;
    L_8C1ECA6E:;
    R0 = (0xFFFF0000);
    goto L_8C1ECAC2;
    L_8C1ECA7A:;
    R0 = (0x0);
    goto L_8C1ECAC2;
    L_8C1ECA74:;
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_8C1ECA7E;
    goto L_8C1ECA7A;
    L_8C1ECA7E:;
    if (((*(int *)((R14 + R0))) == 0xFFFC)) goto L_8C1ECA8E;
    goto L_8C1ECA86;
    L_8C1ECA86:;
    if (((*(int *)((R14 + R0))) != 0xFFFF)) goto L_8C1ECA94;
    goto L_8C1ECA8E;
    L_8C1ECA8E:;
    R0 = (0xFFFFFF41);
    goto L_8C1ECAC2;
    L_8C1ECA94:;
    t33 = *(int *)((R14 + R0));
    t35 = vmsfs_read_retry(R13, t33, (R1004));
    R12 = (t33);
    R4 = (t35);
    if (((int)t35 >= 0)) goto L_8C1ECAAA;
    goto L_8C1ECAA6;
    L_8C1ECAA6:;
    R0 = (R4);
    goto L_8C1ECAC2;
    L_8C1ECAAA:;
    *(unsigned int *)(((0x40 + R14) + 0x0)) = (unsigned short)(get_fat(R13, R12, R6));
    t41 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t41 - 1);
    R0 = ((t41 - 1));
    goto L_8C1ECAC2;
}

