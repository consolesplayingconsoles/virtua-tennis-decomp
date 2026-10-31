/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gBuBlockTableA[];
extern char gBuBlockTableB[];
extern char gDisplayFilterUsesSharedFrameBuffer[];
extern char gMapleDriver[];

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
int vecAnglesTo(int, int);
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
int modeMarkPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int panelTopPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int hudFramePutWide(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int lightUpdate(int a4, int a5);
int camGetAngles(int a4, int a5, int a6, int a7);


int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int stk[2];

    *(unsigned short *)((a7 + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x30;
    if ((int)a5 >= (int)0x30) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned short)t0;
        t1 = *(int *)(((int)stk + 4));
        *(unsigned short *)(((int)stk + 4)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00)) == 0x8000) {
            t2 = *(short *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 4)) = t2;
            t3 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00));
            if ((int)((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00)) < (int)0x2C) {
                return 0xFFFFFFFF;
            }
            t4 = *(short *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 4)) = t4;
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)t4 >> 8) | (((*(int *)(((int)stk + 4))) << 8) & 0xFF00));
            t6 = *(short *)((a4 + 0x16));
            *(unsigned int *)(((int)stk + 4)) = t6;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned char)((int)t6 >> 8) | (((*(int *)(((int)stk + 4))) << 8) & 0xFFFFFF00));
            if ((*(short *)((a7 + 0x0))) != 1) {
                return 0xFFFFFFFE;
            }
            t9 = *(short *)((a4 + 0x1A));
            *(unsigned short *)((a8 + 0x0)) = ((unsigned char)((int)t9 >> 8) | ((t9 << 8) & 0xFFFFFF00));
            t10 = *(int *)((a4 + 0x1C));
            *(unsigned int *)((a9 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t10 >> 16) >> 8) | (((int)t10 >> 8) & 0xFF00)) | ((t10 << 8) & 0xFF0000)) | ((t10 << 16) << 8));
            t11 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a10 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t11 >> 16) >> 8) | (((int)t11 >> 8) & 0xFF00)) | ((t11 << 8) & 0xFF0000)) | ((t11 << 16) << 8));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t12 >> 16) >> 8) | (((int)t12 >> 8) & 0xFF00)) | ((t12 << 8) & 0xFF0000)) | ((t12 << 16) << 8));
            t13 = *(int *)((a4 + 0x28));
            *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t13 >> 16) >> 8) | (((int)t13 >> 8) & 0xFF00)) | ((t13 << 8) & 0xFF0000)) | ((t13 << 16) << 8));
            return 0x0;
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

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
        t5 = *(int *)((((unsigned short)(*(short *)((a5 + 0x40))) << 2) + (int)gBuBlockTableA));
        t7 = *(int *)((((unsigned short)(*(short *)((a5 + 0x44))) << 2) + (int)gBuBlockTableB));
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

void vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int t6;
    int t10;
    int t14;
    int t17;
    int t19;
    int t20;
    int t24;
    int t29;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1EC31E:;
    *(unsigned int *)(((int)stk + 8)) = R6;
    *(unsigned int *)(((int)stk + 4)) = R7;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    R11 = (0x0);
    R12 = (R5);
    R14 = (R4);
    if (((*(signed char *)(((R4 * 0x148) + 0x8C46459A))) == 0)) goto L_8C1EC372;
    goto L_8C1EC348;
    L_8C1EC348:;
    t6 = (vmsio_isready(R14)) != 0;
    if (t6) goto L_8C1EC35A;
    goto L_8C1EC352;
    L_8C1EC352:;
    vmsfs_unmount(R14);
    goto L_8C1EC372;
    L_8C1EC372:;
    R0 = (0xFFFFFF01);
    goto L_8C1EC456;
    L_8C1EC456:;
    return;
    L_8C1EC35A:;
    t10 = (vmsio_ismount(R14)) == 0;
    if (t10) goto L_8C1EC372;
    goto L_8C1EC364;
    L_8C1EC364:;
    if (((*(signed char *)(((R14 * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1EC3B4;
    goto L_8C1EC372;
    L_8C1EC3B4:;
    t14 = (int)(buIsFormat(R14)) >= 0;
    if (t14) goto L_8C1EC3C4;
    goto L_8C1EC3BE;
    L_8C1EC3BE:;
    R0 = (0xFFFFFF03);
    goto L_8C1EC456;
    L_8C1EC3C4:;
    t17 = (int)(check_isopen()) < 0;
    if (t17) goto L_8C1EC3FC;
    goto L_8C1EC3D0;
    L_8C1EC3D0:;
    t19 = (int)(search_dir(R14, R12, (((int)stk + 4) + 0x8))) < 0;
    if (t19) goto L_8C1EC3F0;
    goto L_8C1EC3E0;
    L_8C1EC3E0:;
    t20 = clear_file(R14, R12);
    R4 = (t20);
    if (((int)t20 >= 0)) goto L_8C1EC3F0;
    goto L_8C1EC3EC;
    L_8C1EC3EC:;
    R0 = (R4);
    goto L_8C1EC456;
    L_8C1EC3F0:;
    t24 = search_free_dir(R14);
    R10 = (t24);
    if (((int)t24 >= 0)) goto L_8C1EC402;
    goto L_8C1EC3FC;
    L_8C1EC3FC:;
    R0 = (0xFFFFFF08);
    goto L_8C1EC456;
    L_8C1EC402:;
    direntry(R14, R10);
    t29 = open_file_handle();
    R13 = (t29);
    if ((t29 != 0)) goto L_8C1EC41C;
    goto L_8C1EC416;
    L_8C1EC416:;
    R0 = (0xFFFFFF07);
    goto L_8C1EC456;
    L_8C1EC41C:;
    *(unsigned int *)((R13 + 0x8)) = R11;
    *(unsigned int *)((R13 + 0x4)) = 0x1;
    *(unsigned int *)((R13 + 0x2C)) = R10;
    *(unsigned int *)((R13 + 0x38)) = 0xFFFF;
    *(unsigned int *)((R13 + 0x30)) = R11;
    *(unsigned int *)((R13 + 0x28)) = R14;
    *(unsigned short *)((R13 + 0x2)) = R11;
    *(unsigned char *)((R13 + 0x1)) = R11;
    R4 = ((R13 + 0x10));
    goto L_8C1EC43E;
    L_8C1EC43E:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_8C1EC438;
    goto L_8C1EC444;
    L_8C1EC444:;
    *(unsigned char *)((R4 + 0x0)) = R11;
    set_vmstime((R13 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R13;
    R0 = (0x0);
    goto L_8C1EC456;
    L_8C1EC438:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R12 + 0x0)));
    R12 = ((R12 + 0x1));
    R4 = ((R4 + 0x1));
    goto L_8C1EC43E;
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


int adxsjd_decexec_end(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t12;
    int t15;
    int t17;
    int t19;
    int t27;
    int t34;
    int t39;
    int t51;
    int t16;
    int t46;
    int t47;
    int t48;
    int stk[15];

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((int)stk + 4)) = (ADXB_GetTotalNumSmpl(t1));
    t3 = ADXB_GetDecDtLen(t1);
    t4 = ADXB_GetDecNumSmpl(t1);
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)((a4 + 0x34));
    t7 = (t5 - t6);
    if ((int)t4 < (int)(t5 - t6)) {
        t7 = t4;
    }
    SJ_SplitChunk((a4 + 0x14), t3, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8));
    t12 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0x10));
    t15 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (t7 << 1);
    t17 = 0x0;
    for (;;) {
        t19 = ADXB_GetNumChan((*(int *)((a4 + 0x4))));
        if ((int)t17 >= (int)t19) {
            break;
        }
        SJ_SplitChunk((((t17 << 2) << 1) + (a4 + 0x1C)), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8));
        if ((*(int *)((a4 + 0x50))) != 0) {
            t27 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x50)))))((*(int *)((a4 + 0x54))), t17, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
        }
        t16 = t17;
        t16 = (t16 << 2);
        *(unsigned int *)(((int)stk + 4)) = t16;
        t16 = (t16 + (a4 + 0xC));
        t16 = (*(int *)((t16 + 0x0)));
        t34 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x20)))))(t16, 0x1, (((int)stk + 4) + 0x10));
        t16 = a4;
        t16 = (t16 + 0xC);
        t16 = (t16 + (*(int *)(((int)stk + 4))));
        t16 = (*(int *)((t16 + 0x0)));
        t39 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x1C)))))(t16, 0x0, (((int)stk + 4) + 0x8));
        t17 = (t17 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t7);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + t7);
    *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + t7);
    *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + t3);
    if (((int)(*(int *)((a4 + 0x3C))) >= 0) && ((t46 = *(int *)((a4 + 0x3C)), t47 = *(int *)((a4 + 0x40)), (int)t47 >= (int)t46) && (t48 = *(int *)((a4 + 0x48)), t48 != 0))) {
        t51 = ((int (*)(int))((*(int *)((a4 + 0x48)))))((*(int *)((a4 + 0x4C))));
    }
    return (ADXB_Reset(t1));
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
            *(unsigned int *)(int)gDisplayFilterUsesSharedFrameBuffer = 0x0;
        } else {
            *(unsigned int *)(int)gDisplayFilterUsesSharedFrameBuffer = 0x1;
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
                *(unsigned int *)(int)gDisplayFilterUsesSharedFrameBuffer = 0x0;
            } else {
                *(unsigned int *)(int)gDisplayFilterUsesSharedFrameBuffer = 0x1;
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
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)(*(int *)(((*(int *)(int)gMapleDriver) + 0x10D8)))) {
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
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)(int)gMapleDriver, t64 = *(int *)((0x10C4 + t63)), t64 == 1))) {
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

int modeMarkPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t1;
    int t8;
    int t4;
    int t17;
    int t31;
    int t21;
    int stk[24];

    stk[12] = a8;
    stk[13] = a9;
    stk[14] = a10;
    stk[15] = a11;
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


int hudFramePutWide(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t7;
    int t14;
    float u17;
    int stk[20];

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
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
    t5 = vecAnglesTo(a4, a5);
    *(unsigned short *)((a4 + 0x0)) = (-(*(short *)((a4 + 0x0))));
    *(unsigned short *)((a5 + 0x0)) = (-(*(short *)((a5 + 0x0))));
    return t5;
}


