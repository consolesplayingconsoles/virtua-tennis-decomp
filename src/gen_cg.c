typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_GetDecDtLen(int);
int ADXB_GetDecNumSmpl(int);
int ADXB_GetNumChan(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Reset(int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
int buCalcCRC(int, int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int direntry(int, int);
int kmBlankScreen(int);
int kmyGetDMAHANDLE(int);
int kmyGetInterruptLevel(void);
int kmyIsEnabledASyncCopy(void);
int kmyMemCopy(int, int, int);
int kmyQueryFinishDMA(int);
int kmyRequestCallback(int, int, int, int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDisplayBpp(int);
int kmySetTextureDMA(int, int, int, int);
int kmyWaitVBlank(int);
int kmyiGetPALExtRatio(int, int, int, int);
int kmyiSetScreenSize(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int make_header(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_swaplong(int, int);
int nlCalcPoint(int, int);
int nlCopyMatrix(int, int, float);
int nlGetMatrix(int);
float nlLUDecomp(int, int);
int nlLoadMatrix(int);
int nlLoadMatrix33on44(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int open_file_handle(void);
int search_dir(int, int, int);
int search_free_dir(int);
int set_vmstime(int, int);
extern int sprPutAtAlpha();
float valStepToward(int, int, Stk3, float, float);
int vecAnglesTo(int, int, Stk6);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
float nlInvertMatrix(int a4);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int kmyCopyToTexture(int a4, int a5, int a6, int a7);
int buAnalyzeBackupFileImage(int a4, int a5);
void vmsfs_fcreate(int a4, int a5, int a6, int a7);
int kmyGetDefaultFilterMode(int a4, int a5, int a6, int a7);
int mpdrv_make_deviceinfo(int a4, int a5, int a6);
int adxsjd_decexec_end(int a4);
int kmyInitializeJAMMA31KHz(int a4);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int kmytex_TXalloc(int a4, int a5, int a6, int a7);
int nldispstripSub(int a4, int a5, int a6);
int modeMarkPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int panelTopPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int hudFramePutWide(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int lightUpdate(int a4, int a5);
int camGetAngles(int a4, int a5, int a6, int a7);


int modeMarkPut(int a4, int a5, int a6, int a7, Stk4 p, float f4)
{
    int t1;
    int t8;
    int t4;
    int t17;
    int t31;
    int t21;
    int stk[24];


    stk[12] = p.w[0];
    stk[13] = p.w[1];
    stk[14] = p.w[2];
    stk[15] = p.w[3];
    *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + 3.0f);
    t1 = *(int *)0x8C287D5C;
    if (t1 != 0) {
        if (t1 != 1) {
            t8 = t1;
            if (t1 != 2) {
            } else {
                *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + 12.0f);
                *(float *)(((((int)stk + 16) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x0))) + 59.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
                t4 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C3418F8, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x20)), f4);
                *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + -7.0f);
                *(float *)(((((int)stk + 16) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x0))) + 87.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
                t8 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C341948, *(Stk3 *)((((int)stk + 16) + 0x20)), f4));
            }
            t21 = t8;
        } else {
            *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + 10.0f);
            *(float *)(((((int)stk + 16) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x0))) + 80.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
            t17 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C341858, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x20)), f4);
            *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + -10.0f);
            *(float *)(((((int)stk + 16) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x0))) + 128.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
            t21 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C3418A8, *(Stk3 *)((((int)stk + 16) + 0x20)), f4));
        }
        t31 = t21;
    } else {
        *(float *)(((((int)stk + 16) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x4))) + 8.0f);
        *(float *)(((((int)stk + 16) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x20) + 0x0))) + 104.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
        t31 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C341808, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x20)), f4));
    }
    return t31;
}


int hudFramePutWide(int a4, int a5, int a6, int a7, Stk4 p, float f4)
{
    int t0;
    int t7;
    int t14;
    float u17;
    int stk[20];


    stk[8] = p.w[0];
    stk[9] = p.w[1];
    stk[10] = p.w[2];
    stk[11] = p.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
    t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33A450, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x10)), f4);
    *(float *)(((((int)stk + 16) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x0))) + (*(float *)0x8C0954A4));
    if ((*(int *)0x8C287ADC) == 2) {
        *(float *)0x8C33A4B0 = (((*(float *)0x8C33A4C0) - (*(float *)0x8C33A4B8)) * (*(float *)0x8C0954AC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t7 = ((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C33A4A0, 0x140, *(Stk3 *)((((int)stk + 16) + 0x10)), f4);
        u17 = (*(float *)0x8C0954B0);
    } else {
        *(float *)(((((int)stk + 16) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x0))) + (*(float *)0x8C0954B4));
        *(float *)0x8C33A4B0 = (((*(float *)0x8C33A4C0) - (*(float *)0x8C33A4B8)) * (*(float *)0x8C0954B8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t14 = ((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C33A4A0, 0x140, *(Stk3 *)((((int)stk + 16) + 0x10)), f4);
        u17 = (*(float *)0x8C0954BC);
    }
    *(float *)(((((int)stk + 16) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x0))) + u17);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33A4F0, *(Stk3 *)((((int)stk + 16) + 0x10)), f4));
}

int lightUpdate(int a4, int a5)
{
    int t0;
    float t4;
    int t5;
    int stk[10];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C125668); }
    t0 = 0x0;
    for (;;) {
        t4 = valStepToward((*(int *)0x8C38B848), a5, *(Stk3 *)(0x8C125668), (*(float *)(((0x8C38B804 + t0) + 0x0))), (*(float *)(((0x8C38B814 + t0) + 0x0))));
        t5 = (0x8C38B804 + t0);
        t0 = (t0 + 0x4);
        *(float *)((t5 + 0x0)) = t4;
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    nlPushUnitMatrix();
    nlLoadMatrix33on44(0x8C287938);
    nlRotateAY((*(int *)0x8C38B828));
    nlRotateAX((*(int *)0x8C38B824));
    nlCalcPoint(((int)stk + 4), 0x8C38B834);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C287A1C) = *(struct mv3 *)(0x8C38B834); }
    *(unsigned short *)0x8C287A3C = (*(int *)0x8C38B824);
    *(unsigned short *)0x8C287A3E = (*(int *)0x8C38B828);
    nlScaleVector(0x8C38B834, 0x8C38B834, ((*(float *)0x8C38B840) / 100.0f));
    nlObjPutSetLightDirectionV(0x8C38B834);
    nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
    return (nlObjPutSetFadeColor((*(float *)0x8C38B808), (*(float *)0x8C38B80C), (*(float *)0x8C38B810)));
}

int camGetAngles(int a4, int a5, int a6, int a7)
{
    int t5;
    int stk[13];

    vecMake(a4, a5, a6, a7, ((int)stk + 20), (*(float *)0x8C287958), (*(float *)0x8C28795C), (*(float *)0x8C287960));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
    t5 = vecAnglesTo(a4, a5, *(Stk6 *)(((int)stk + 8)));
    *(unsigned short *)((a4 + 0x0)) = (-(*(short *)((a4 + 0x0))));
    *(unsigned short *)((a5 + 0x0)) = (-(*(short *)((a5 + 0x0))));
    return t5;
}


