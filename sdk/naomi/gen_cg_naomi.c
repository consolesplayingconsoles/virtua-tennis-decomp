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


int nldispstripSub(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t7;
    int t9;
    int t8;
    int t11;
    int t12;
    int t44;
    int t15;
    int t16;
    int t17;
    int t35;
    int t37;
    int t39;
    int t40;
    int t27;
    float u29;
    int stk[21];

    *(unsigned int *)(((int)stk + 12)) = (0x8C127F38 + ((a5 << 2) << 1));
    t0 = *(int *)0x8C454FC8;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + (*(int *)0x8C454FC0)));
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmyMemCopy(((t4 & 0x3FFFFFF) | 0xE0000000), (*(int *)0x8C454FC4), t3);
    t7 = *(int *)(((int)stk + 4));
    _builtin_prefetch((void *)t7);
    t9 = t7;
    if (t3 == 64) {
        t8 = *(int *)(((int)stk + 4));
        _builtin_prefetch((void *)(t8 + 0x20));
        t9 = (t8 + 0x20);
    }
    t11 = *(int *)0x8C454FC0;
    t12 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t12 + t11)) = ((*(int *)((t12 + t11))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 16)) = 0xE0000000;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 12))) + 0x4);
    t44 = t11;
    if ((int)a4 > 0) {
        t15 = t9;
        t16 = a4;
        t17 = a6;
        for (;;) {
            if (t16 == 1) {
                t15 = 0xF0000000;
                *(unsigned int *)(((int)stk + 16)) = t15;
            }
            if ((*(int *)0x8C454F3C) != 0) {
                nlCalcPoint(t17, (((int)stk + 4) + 0x10));
                u29 = (*(float *)(((int)stk + 28)));
            } else {
                *(float *)(((int)stk + 20)) = (*(float *)((t17 + 0x0)));
                *(float *)(((int)stk + 24)) = (*(float *)((t17 + 0x4)));
                t27 = t15;
                u29 = (*(float *)((t17 + 0x8)));
            }
            t15 = t27;
            *(float *)(((int)stk + 28)) = (1.0f / u29);
            *(unsigned int *)(((int)stk + 40)) = (*(int *)((t17 + ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2))));
            t35 = *(int *)(((*(int *)0x8C454FC8) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t35 << 2);
            t37 = *(int *)(((t35 << 2) + (*(int *)0x8C454FC0)));
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            kmyMemCopy(((t37 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0xC), 0x20);
            _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
            t39 = *(int *)0x8C454FC0;
            t16 = (t16 - 1);
            t40 = *(int *)(((int)stk + 4));
            t15 = (*(int *)((t40 + t39)));
            t15 = (t15 + 0x20);
            *(unsigned int *)((t40 + t39)) = t15;
            t15 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
            t15 = (t15 << 2);
            t17 = (t17 + t15);
            if ((int)t16 <= 0) {
                break;
            }
        }
        t44 = t39;
    }
    return t44;
}


