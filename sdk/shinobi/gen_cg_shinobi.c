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


int buAnalyzeBackupFileImage(int a4, int a5)
{
    int t45;
    int t5;
    int t7;
    int t8;
    int t37;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t33;
    int t34;
    int t35;
    int t1;
    int t2;
    int t3;
    int t28;

    t45 = 0xFFFFFF21;
    if (((*(short *)((a5 + 0x40))) != 0) && ((t1 = *(short *)((a5 + 0x40)), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = *(short *)((a5 + 0x44)), (int)(unsigned short)t2 <= (int)0x3) && (t3 = *(int *)((a5 + 0x48)), (unsigned int)t3 <= (unsigned int)0xE1000)))) {
        t5 = *(int *)((((unsigned short)(*(short *)((a5 + 0x40))) << 2) + 0x8C20C220));
        t7 = *(int *)((((unsigned short)(*(short *)((a5 + 0x44))) << 2) + 0x8C20C230));
        t8 = *(int *)((a5 + 0x48));
        t37 = 0xFFFFFF21;
        if ((unsigned int)(((t5 + t7) + t8) + 0x80) > (unsigned int)0xE1000) {
        } else {
            t9 = 0x80;
            t10 = 0x10;
            t11 = a4;
            t12 = a5;
            for (;;) {
                if (t10 == 0) {
                    break;
                }
                t9 = (*(signed char *)((t12 + 0x0)));
                t12 = (t12 + 0x1);
                t10 = (t10 - 1);
                *(unsigned char *)((t11 + 0x0)) = t9;
                t11 = (t11 + 0x1);
            }
            *(unsigned char *)((t11 + 0x0)) = 0x0;
            t14 = t9;
            t15 = 0x20;
            t16 = (a4 + 0x12);
            t17 = (a5 + 0x10);
            for (;;) {
                if (t15 == 0) {
                    break;
                }
                t18 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t14 = t18;
                t15 = (t15 - 1);
                *(unsigned char *)((t16 + 0x0)) = t14;
                t16 = (t16 + 0x1);
            }
            *(unsigned char *)((t16 + 0x0)) = 0x0;
            t19 = t14;
            t20 = 0x10;
            t21 = (a4 + 0x34);
            t22 = (a5 + 0x30);
            for (;;) {
                if (t20 == 0) {
                    break;
                }
                t23 = *(signed char *)((t22 + 0x0));
                t22 = (t22 + 0x1);
                t19 = t23;
                t20 = (t20 - 1);
                *(unsigned char *)((t21 + 0x0)) = t19;
                t21 = (t21 + 0x1);
            }
            *(unsigned char *)((t21 + 0x0)) = 0x0;
            *(unsigned short *)((a4 + 0x4E)) = (*(short *)((a5 + 0x42)));
            *(unsigned short *)((a4 + 0x4C)) = (*(short *)((a5 + 0x40)));
            *(unsigned int *)((a4 + 0x44)) = (a5 + 0x60);
            *(unsigned int *)((a4 + 0x48)) = (a5 + 0x80);
            *(unsigned short *)((a4 + 0x54)) = (*(short *)((a5 + 0x44)));
            if ((*(short *)((a5 + 0x44))) == 0) {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
                t28 = ((a5 + 0x80) + t5);
            } else {
                *(unsigned int *)((a4 + 0x50)) = ((a5 + 0x80) + t5);
                t28 = (((a5 + 0x80) + t5) + t7);
            }
            *(unsigned int *)((a4 + 0x5C)) = (*(int *)((a5 + 0x48)));
            if ((*(int *)((a5 + 0x48))) == 0) {
                *(unsigned int *)((a4 + 0x58)) = 0x0;
            } else {
                *(unsigned int *)((a4 + 0x58)) = t28;
            }
            t33 = *(short *)((a5 + 0x46));
            *(unsigned short *)((a5 + 0x46)) = 0x0;
            t34 = buCalcCRC(a5, (((t5 + t7) + t8) + 0x80));
            *(unsigned short *)((a5 + 0x46)) = t33;
            t35 = 0x0;
            if ((unsigned short)t34 != (unsigned short)t33) {
                t35 = 0xFFFFFF20;
            }
            t37 = t35;
        }
        t45 = t37;
    }
    return t45;
}


int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8)
{
    int t2;
    int t16;
    int t68;
    int t62;
    int t63;
    int t64;
    int stk[8];

    *(unsigned char *)(((int)stk + 4)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 4));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)(*(int *)(((*(int *)0x8C47317C) + 0x10D8)))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0x8C47317C, t64 = *(int *)((0x10C4 + t63)), t64 == 1))) {
        t68 = *(int *)((a8 + 0x0));
        if ((t68 != -1) && (t68 != 0xFFFFFF00)) {
            mpdrv_swaplong(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}


