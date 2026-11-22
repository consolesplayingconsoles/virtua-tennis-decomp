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

    surfaceTableAddress = *(int *)0x8C458608;
    *(unsigned int *)0x8C458DC4 = ((*(int *)0x8C458DC4) + 0x1);
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
            kmLoadTextureRom(((*(int *)0x8C458608) + (textureIndex * 0x3C)), loadDataAddress);
        } else {
            kmyEnableASyncCopy(0x1);
            kmLoadTextureRom(((*(int *)0x8C458608) + (textureIndex * 0x3C)), loadDataAddress);
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


