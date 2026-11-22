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


int kmyCopyToTexture(int a4, int a5, int a6, int a7)
{
    int t6;
    int t11;
    int t16;
    int t20;
    int t22;
    int t28;
    int t35;
    int t37;
    int t41;
    int t42;
    int t47;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1F4080:;
    R10 = (R5);
    R12 = (R6);
    R14 = (R7);
    R9 = (R4);
    if ((R6 != 0)) goto L_8C1F40A4;
    goto L_8C1F409E;
    L_8C1F409E:;
    R0 = (0xEEEE);
    goto L_8C1F41BA;
    L_8C1F41BA:;
    return R0;
    L_8C1F40A4:;
    t6 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 4)) = t6;
    R0 = (t6);
    if (((0x1F & R9) == 0)) goto L_8C1F40B8;
    goto L_8C1F40B4;
    L_8C1F40B4:;
    goto L_8C1F41A4;
    L_8C1F41A4:;
    kmyMemCopy((0xA4000000 + R9), R10, R12);
    if ((R14 == 0)) goto L_8C1F41B8;
    goto L_8C1F41B4;
    L_8C1F41B4:;
    t11 = ((int (*)(int, int, int, int))(R14))(0x0, R5, R6, R7);
    goto L_8C1F41B8;
    L_8C1F41B8:;
    R0 = (0x0);
    goto L_8C1F41BA;
    L_8C1F40B8:;
    if (((0x1F & R10) == 0)) goto L_8C1F40C2;
    goto L_8C1F40BE;
    L_8C1F40BE:;
    goto L_8C1F41A4;
    L_8C1F40C2:;
    if ((R0 == 0)) goto L_8C1F40CA;
    goto L_8C1F40C6;
    L_8C1F40C6:;
    goto L_8C1F41A4;
    L_8C1F40CA:;
    t16 = (kmyIsEnabledASyncCopy()) != 0;
    if (t16) goto L_8C1F40D8;
    goto L_8C1F40D4;
    L_8C1F40D4:;
    goto L_8C1F41A4;
    L_8C1F40D8:;
    R11 = ((0xFFFFFFE0 & R12));
    if (((0xFFFFFFE0 & R12) == 0)) goto L_8C1F4164;
    goto L_8C1F40E0;
    L_8C1F40E0:;
    t20 = (kmyGetInterruptLevel()) != 0;
    R8 = (0x8C1F51A0);
    if (t20) goto L_8C1F40FA;
    goto L_8C1F40EC;
    L_8C1F40EC:;
    t22 = kmyGetDMAHANDLE(0x1);
    R13 = (t22);
    if ((t22 == 0)) goto L_8C1F40EC;
    goto L_8C1F40F6;
    L_8C1F40F6:;
    goto L_8C1F4140;
    L_8C1F4140:;
    kmySetTextureDMA(R13, R9, R10, R11);
    if ((R14 == 0)) goto L_8C1F4158;
    goto L_8C1F4150;
    L_8C1F4150:;
    kmySetDMACallback(R13, R14);
    goto L_8C1F4158;
    L_8C1F4158:;
    t28 = kmyRequestDMA(R13);
    *(unsigned int *)0x8C470D24 = t28;
    R13 = (t28);
    goto L_8C1F4164;
    L_8C1F4164:;
    R6 = ((0x1F & R12));
    if (((0x1F & R12) == 0)) goto L_8C1F417C;
    goto L_8C1F416C;
    L_8C1F416C:;
    kmyMemCopy(((R9 + R11) + 0xA4000000), (R10 + R11), R6);
    goto L_8C1F417C;
    L_8C1F417C:;
    if ((R14 != 0)) goto L_8C1F41B8;
    goto L_8C1F4180;
    L_8C1F4180:;
    t35 = (kmyGetInterruptLevel()) != 0;
    if (t35) goto L_8C1F41B8;
    goto L_8C1F418A;
    L_8C1F418A:;
    t37 = (kmyIsEnabledASyncCopy()) != 0;
    if (t37) goto L_8C1F41B8;
    goto L_8C1F4194;
    L_8C1F4194:;
    R12 = (0x8C1F6AE0);
    R14 = (0x101);
    goto L_8C1F4198;
    L_8C1F4198:;
    t41 = (kmyQueryFinishDMA(R13)) != R14;
    if (t41) goto L_8C1F4198;
    goto L_8C1F41A0;
    L_8C1F41A0:;
    goto L_8C1F41B8;
    L_8C1F40FA:;
    t42 = kmyGetDMAHANDLE(0x1);
    R13 = (t42);
    if ((t42 != 0)) goto L_8C1F4140;
    goto L_8C1F4104;
    L_8C1F4104:;
    kmyMemCopy((0xA4000000 + R9), R10, R12);
    if ((R14 == 0)) goto L_8C1F41B8;
    goto L_8C1F4114;
    L_8C1F4114:;
    t47 = ((int (*)(int, int, int, int))(R14))(0x0, R5, R6, R7);
    goto L_8C1F41B8;
}


int kmyGetDefaultFilterMode(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t6;
    int t8;
    int t19;
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = *(int *)0x8C20AE00;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(int *)0x8C20ADFC);
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t1;
    t3 = *(int *)0x8C20AE08;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = (*(int *)0x8C20AE04);
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0xC)) = t3;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x10)) = (*(int *)0x8C20AE0C);
    t6 = *(int *)0x8C20AE14;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(int *)0x8C20AE10);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t6;
    t8 = *(int *)0x8C20AE1C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(int *)0x8C20AE18);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = (*(int *)0x8C20AE20);
    *(unsigned int *)((a6 + 0x0)) = (*(int *)(((int)stk + 4)));
    t19 = a7;
    if ((0x42 & a4) == 66) {
        t19 = (kmyiGetPALExtRatio(a4, a5, a6, a7));
    }
    if ((*(int *)(((int)stk + 4))) != 0) {
        if ((0x42 & a4) == 66) {
            if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x4) + (t19 << 2))));
            } else {
                *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x18) + (t19 << 2))));
            }
        } else {
            if ((0x20 & a4) != 0) {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = 0x2;
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned int *)((a7 + 0x0)) = 0x4;
            }
        }
    } else {
        if ((a4 & 0x1) != 0) {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
        } else {
            if ((0x42 & a4) == 66) {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x4) + (t19 << 2))));
                } else {
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x18) + (t19 << 2))));
                }
            } else {
                if (((a4 & 0x1) != 1) && ((0x2C & a4) == 32)) {
                    *(unsigned int *)((a7 + 0x0)) = 0x2;
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x1;
                }
            }
        }
    }
    return 0x0;
}


int kmyInitializeJAMMA31KHz(int a4)
{
    int t6;
    int stk[67];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x353;
    *(unsigned int *)(((int)stk + 24)) = 0x211;
    *(unsigned int *)(((int)stk + 4)) = 0x88;
    *(unsigned int *)(((int)stk + 8)) = 0x343;
    *(unsigned int *)(((int)stk + 16)) = 0x24;
    *(unsigned int *)(((int)stk + 20)) = 0x208;
    *(unsigned int *)(((int)stk + 28)) = 0x51;
    *(unsigned int *)(((int)stk + 32)) = 0x3;
    *(unsigned int *)(((int)stk + 36)) = 0x319;
    *(unsigned int *)(((int)stk + 40)) = 0xF;
    *(unsigned int *)(((int)stk + 120)) = 0x208;
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if ((a4 & 0x10) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 252)) = 0x90;
    *(unsigned int *)(((int)stk + 244)) = 0x23;
    *(unsigned int *)(((int)stk + 248)) = 0x23;
    *(unsigned int *)(((int)stk + 252)) = 0xA5;
    *(unsigned int *)(((int)stk + 244)) = 0x24;
    *(unsigned int *)(((int)stk + 248)) = 0x24;
    *(unsigned int *)0x8C45EEE0 = 0x1E0;
    *(unsigned int *)0x8C45EED8 = ((*(int *)(((int)stk + 16))) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t6 = ((int (*)(int, int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), 0x24, 0x1E0);
    return 0x0;
}

int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int t0;
    int t16;
    int t22;
    int t41;
    int t31;
    int t37;
    int t48;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)0x8C45EFC4;
    if (t0 == 0) {
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0x8C1F6340;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = 0x8C1F6980;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = 0x8C1F6580;
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = 0x8C1F6980;
        if ((0x42 & a4) == 66) {
            *(unsigned int *)0x8C45F928 = a4;
            kmyRequestCallback(0xB, t0, a6, a7);
            *(unsigned int *)0x8C45F930 = (*(int *)0x8C45F92C);
        }
        *(unsigned int *)0x8C45EFE8 = 0x1;
        *(unsigned int *)0x8C45EFD0 = a4;
        *(unsigned int *)0x8C45EFDC = (*(int *)(((int)stk + 4)));
        *(unsigned int *)0x8C45EFD4 = (*(int *)(((int)stk + 8)));
        kmyGetDefaultFilterMode((*(int *)0x8C45EFD0), (*(int *)(((int)stk + 12))), 0x8C45EFD8, 0x8C45EFE4);
        t16 = *(int *)0x8C45EFE4;
        if ((t16 != 2) && ((t16 != 10) && (((int)t16 < (int)0x1E) || ((int)t16 > (int)0x22)))) {
            *(unsigned int *)0x8C45EFEC = 0x0;
        } else {
            *(unsigned int *)0x8C45EFEC = 0x1;
        }
        *(unsigned int *)0x8C45EFE0 = ((*(int *)0x8C45EFE0) | 0x3);
        kmyWaitVBlank(t16);
        t22 = ((int (*)(int))((*(int *)(((((int)stk + 4) + 0xC) + ((0x3 & a4) << 2))))))(a4);
        kmySetDisplayBpp((*(int *)(((int)stk + 4))));
        kmBlankScreen(0x1);
        *(unsigned int *)0x8C45F900 = 0x1;
        t48 = 0x0;
    } else {
        t41 = 0x1;
        if (t0 == 0x10000) {
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0x8C1F5F60;
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = 0x8C1F6200;
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = 0x8C1F5F60;
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = 0x8C1F6200;
            *(unsigned int *)0x8C45EFE8 = 0x1;
            *(unsigned int *)0x8C45EFD0 = a4;
            *(unsigned int *)0x8C45EFDC = (*(int *)(((int)stk + 4)));
            *(unsigned int *)0x8C45EFD4 = (*(int *)(((int)stk + 8)));
            kmyGetDefaultFilterMode((*(int *)0x8C45EFD0), (*(int *)(((int)stk + 12))), 0x8C45EFD8, 0x8C45EFE4);
            t31 = *(int *)0x8C45EFE4;
            if ((t31 != 2) && ((t31 != 10) && (((int)t31 < (int)0x1E) || ((int)t31 > (int)0x22)))) {
                *(unsigned int *)0x8C45EFEC = 0x0;
            } else {
                *(unsigned int *)0x8C45EFEC = 0x1;
            }
            *(unsigned int *)0x8C45EFE0 = ((*(int *)0x8C45EFE0) | 0x3);
            kmyWaitVBlank(t31);
            t37 = ((int (*)(int))((*(int *)(((((int)stk + 4) + 0xC) + ((0x3 & a4) << 2))))))(a4);
            kmySetDisplayBpp((*(int *)(((int)stk + 4))));
            kmBlankScreen(0x1);
            *(unsigned int *)0x8C45F900 = 0x1;
            t41 = 0x0;
        }
        t48 = t41;
    }
    return t48;
}


int kmytex_TXalloc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t9;
    int t4;
    int t5;
    int t44;
    int t22;
    int t33;
    int t38;
    int t19;
    int t30;

    t0 = ((a5 + 0x20) & 0xFFFFFFE0);
    if ((0x1F & a5) == 0) {
        t0 = a5;
    }
    t3 = *(int *)(((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x8));
    t9 = 0x0;
    if (t3 != 0) {
        t4 = t3;
        t5 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t4 + 0x10))) >= (unsigned int)t0) {
                t5 = t4;
                t4 = 0x0;
            } else {
                t4 = (*(int *)((t4 + 0x8)));
            }
            if (t4 == 0) {
                break;
            }
        }
        t9 = t5;
    }
    t44 = 0x3;
    if (t9 != 0) {
        if ((*(int *)((t9 + 0x10))) == t0) {
            kmytex_FBDeQueueEntry(((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x8), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0xC), t9);
            kmytex_FBEnQueueTop((0x8C20C9EC + (((short)a7 << 2) << 2)), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x4), t9);
            *(unsigned int *)((a6 + 0x0)) = (*(int *)((t9 + 0xC)));
            *(unsigned int *)((t9 + 0x14)) = a6;
            *(unsigned short *)((t9 + 0x0)) = 0x1;
            if ((short)a7 == 0) {
                t19 = ((*(short *)((t9 + 0x0))) | 0x10);
            } else {
                t19 = ((*(short *)((t9 + 0x0))) | 0x20);
            }
            *(unsigned short *)((t9 + 0x0)) = t19;
            *(unsigned short *)((t9 + 0x0)) = ((*(short *)((t9 + 0x0))) | a4);
            t38 = 0x0;
        } else {
            t22 = kmytex_FBAllocEntry();
            t33 = 0x3;
            if (t22 == 0) {
            } else {
                *(unsigned int *)((t22 + 0xC)) = (*(int *)((t9 + 0xC)));
                *(unsigned int *)((t22 + 0x10)) = t0;
                *(unsigned int *)((t9 + 0x10)) = ((*(int *)((t9 + 0x10))) - t0);
                *(unsigned int *)((t9 + 0xC)) = ((*(int *)((t9 + 0xC))) + t0);
                kmytex_FBEnQueueTop((0x8C20C9EC + (((short)a7 << 2) << 2)), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x4), t22);
                *(unsigned int *)((a6 + 0x0)) = (*(int *)((t22 + 0xC)));
                *(unsigned int *)((t22 + 0x14)) = a6;
                if ((short)a7 == 0) {
                    t30 = ((*(short *)((t22 + 0x0))) | 0x10);
                } else {
                    t30 = ((*(short *)((t22 + 0x0))) | 0x20);
                }
                *(unsigned short *)((t22 + 0x0)) = t30;
                *(unsigned short *)((t22 + 0x0)) = ((*(short *)((t22 + 0x0))) | a4);
                t33 = 0x0;
            }
            t38 = t33;
        }
        t44 = t38;
    }
    return t44;
}


