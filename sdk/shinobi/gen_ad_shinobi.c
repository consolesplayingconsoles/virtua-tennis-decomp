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

int vmsfs_init(int a4, int a5, int a6)
{
    int t0;
    int t5;
    int t6;
    int t19;
    int t4;

    *(unsigned int *)0x8C464594 = 0x8C464580;
    t0 = 0x8C464FD8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x8C464FF8) {
            break;
        }
    }
    memset(0x8C464580, 0x0, 0x14);
    memset(0x8C464598, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    *(unsigned int *)0x8C4694A0 = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = (*(int *)0x8C4694A0);
            t4 = (t4 + 0x1);
            *(unsigned int *)0x8C4694A0 = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5, a6);
        *(unsigned int *)(((*(int *)0x8C464594) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        *(unsigned int *)(((*(int *)0x8C464594) + 0x8)) = 0x1;
    }
    *(unsigned int *)0x8C469498 = 0x8;
    *(unsigned int *)0x8C46949C = 0x0;
    vmsfs_setretry(0xA);
    t19 = *(int *)0x8C469498;
    memset(0x8C469258, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    vmsio_init();
    return 0x0;
}


int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t1;
    int t4;
    int t5;
    int t7;
    int t3;

    *(unsigned int *)0x8C4762CC = (*(int *)0x8C4762C8);
    t1 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40000);
    *(unsigned int *)0x8C4762C8 = a4;
    setjmp((a4 + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t4 = 0x0;
    t5 = (0x210 + a4);
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x208)))) {
            break;
        }
        *(unsigned int *)((a4 + 0xD78)) = t5;
        t7 = *(int *)((t5 + 0xC));
        if (t7 != 0) {
            if (t7 != 3) {
                if (t7 != 1) {
                    if (t7 != 2) {
                    } else {
                        t3 = 0x8C2070A6;
                        *(unsigned int *)((t5 + 0xC)) = 0x3;
                        *(unsigned int *)((t5 + 0x20)) = 0x8C2070A6;
                    }
                } else {
                    t3 = (*(int *)((t5 + 0x14)));
                    if ((unsigned int)t3 <= (unsigned int)(*(int *)((a4 + 0x204)))) {
                        longjmp((t5 + 0x18), 0x1);
                    }
                }
            } else {
                _destructFiber(a4, t5);
            }
        }
        t3 = 0x124;
        t4 = (t4 + 0x1);
        t5 = (t5 + t3);
    }
    *(unsigned int *)((a4 + 0x204)) = ((*(int *)((a4 + 0x204))) + 0x1);
    *(unsigned int *)0x8C4762C8 = (*(int *)0x8C4762CC);
    _builtin_set_fpscr(t1);
    return 0x204;
}


int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int t4;
    int t10;
    int t13;
    int t17;
    int t20;
    int t23;
    int stk[10];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1EE9FE:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    R11 = (R4);
    R13 = (R7);
    if ((R7 != 0)) goto L_8C1EEA42;
    goto L_8C1EEA18;
    L_8C1EEA18:;
    t4 = vmsfs_fgetsize(R11, (*(int *)(((int)stk + 8))));
    R4 = (t4);
    if (((int)t4 >= 0)) goto L_8C1EEA40;
    goto L_8C1EEA26;
    L_8C1EEA26:;
    R0 = (R4);
    goto L_8C1EEA90;
    L_8C1EEA90:;
    return R0;
    L_8C1EEA40:;
    R13 = (R4);
    goto L_8C1EEA42;
    L_8C1EEA42:;
    t10 = vmsfs_fopen(R11, (*(int *)(((int)stk + 8))), ((int)stk + 4));
    R14 = (t10);
    if (((int)t10 < 0)) goto L_8C1EEA8E;
    goto L_8C1EEA52;
    L_8C1EEA52:;
    t13 = *(int *)(((int)stk + 12));
    *(unsigned int *)((((R11 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    *(unsigned int *)((((R11 * 0x148) + 0x8C464598) + 0x34)) = R13;
    t17 = ((R11 * 0x148) + 0x8C464598);
    R11 = (0x0);
    R12 = (t13);
    R4 = t17;
    if (((unsigned int)0x0 >= (unsigned int)R13)) goto L_8C1EEA84;
    goto L_8C1EEA6C;
    L_8C1EEA6C:;
    R10 = (0x200);
    goto L_8C1EEA6E;
    L_8C1EEA6E:;
    t20 = vmsfs_fread1((*(int *)(((int)stk + 4))), R12);
    R14 = (t20);
    if (((int)t20 < 0)) goto L_8C1EEA86;
    goto L_8C1EEA7C;
    L_8C1EEA7C:;
    t23 = (unsigned int)(R11 + 0x1) < (unsigned int)R13;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + R10));
    if (t23) goto L_8C1EEA6E;
    goto L_8C1EEA84;
    L_8C1EEA84:;
    R14 = (0x0);
    goto L_8C1EEA86;
    L_8C1EEA86:;
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    goto L_8C1EEA8E;
    L_8C1EEA8E:;
    R0 = (R14);
    goto L_8C1EEA90;
}


