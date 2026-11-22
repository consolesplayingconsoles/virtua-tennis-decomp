/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSTM_Tell(int);
int Qreset(void);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxstm_sj_internal_error(void);
int buIsFormat(int);
int circuitNumDraw(int, int, int, float, float, float);
int direntry(int, int);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int get_fat(int, int, int, int);
int get_vmstime(int, int);
int kdGetDevice(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdSetBlockRead(int, ...);
int kmiLaunchQ(int);
int kmiWriteRegister(int, int);
int kmyMemCopy(int, int, int);
int kmytex_FBAllocEntry(void);
int msgEventStart(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaSetTransSw(int, int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaClearBuf(void);
int mwlRnaInsrtSlntDat(int);
int mwlRnaIsCopyEnd(int);
int mwlRnaStartTrans(int);
int nlObjPutSetFadeColor(float, float, float);
int nlsndSeqRequest(int);
int search_fat_dir(int, int);
int set_fat(int, int, int);
int set_file_info(int, int, int, int);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stripQuadDrawA(float, float, float, float);
int vmsfb_sleep(void);
int vmsfs_memcpyl(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int adxstmf_stat_exec(int a4, int a5);
int miniTimerDraw(void);
int kmyInitAllocator(int a4, int a5, int a6, int a7, int a8);
int kmyUpdatePalette(void);
int kmyQueryFinishDMA(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);
int kmiStartupDMA(int a4, int a5, int a6);
int mwlRnaExecSvrHndl(int a4);
void mwRnaSetStmHdInfo(int a4, int a5, int a6);
int motFileLoadStep(int a4, int a5, int a6, int a7);
int vmsio_block_read(int a4, int a5, int a6);
int write_dir_all(int a4, int a5, int a6, int a7);


int miniTimerDraw(void)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;

    t1 = *(int *)(((*(int *)0x8C2FBEF0) + 0x3C));
    t2 = (int)((int)t1 / (int)0x3C);
    if ((int)t2 > (int)0xA) {
        nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    } else {
        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        if (((*(int *)0x8C287C60) == 0) && ((t6 = *(int *)0x8C2FBEF0, t7 = *(int *)((t6 + 0x20)), t7 == 1) && (t8 = *(int *)0x8C2FBEF0, t9 = *(int *)((t8 + 0x3C)), t9 != 0))) {
            if (((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) % (int)0x3C)) == 0) {
                nlsndSeqRequest(0x1602A9);
            }
        }
    }
    circuitNumDraw((int)(float)(int)((((float)t1 / 60.0f) - (float)t2) * 100.0f), 0x4, 0x8C159E48, 600.0f, 30.0f, 1.0f);
    sprSheetSet(0x8C10CCA8);
    sprSheetPut(0x2007, 544.0f, 30.0f, 1.0f, 1.0f);
    circuitNumDraw(((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) / (int)0x3C)), 0x4, 0x8C159E48, 529.0f, 30.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return stripQuadDrawA(428.0f, 20.0f, 215.0f, 58.0f);
}


int motFileLoadStep(int a4, int a5, int a6, int a7)
{
    int t3;
    int t8;
    int t16;
    int t17;
    int t24;
    int t25;
    int t29;
    int t33;
    int t34;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C015CE2:;
    if (((*(int *)0x8C34A1F8) == 0)) goto L_8C015D2C;
    goto L_8C015CF4;
    L_8C015CF4:;
    t3 = (fileLoadPoll(R4, R5, R6, R7)) == 1;
    if (t3) goto L_8C015D2C;
    goto L_8C015CFE;
    L_8C015CFE:;
    R0 = (0x0);
    goto L_8C015E08;
    L_8C015E08:;
    return R0;
    L_8C015D2C:;
    R7 = (0x8C28758C);
    if (((*(int *)0x8C28758C) == 0)) goto L_8C015DD4;
    goto L_8C015D34;
    L_8C015D34:;
    t8 = *(int *)0x8C287590;
    R14 = (0x8C287590);
    R4 = (0x8C287588);
    R5 = (0x8C2873F8);
    R6 = (t8);
    if ((t8 == 0)) goto L_8C015DD8;
    goto L_8C015D40;
    L_8C015D40:;
    *(unsigned int *)((((*(int *)((((((((R6 - 1) << 2) + (R6 - 1)) << 2) << 1) + R5) + 0x0))) << 2) + 0x8C2873CC)) = (*(int *)((R4 + 0x0)));
    t16 = *(int *)((R14 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((((((t16 - 1) << 2) + (t16 - 1)) << 2) << 1) + R5);
    t17 = *(int *)((((((((t16 - 1) << 2) + (t16 - 1)) << 2) << 1) + R5) + 0x24));
    R6 = (t17);
    if (((int)t17 >= 0)) goto L_8C015D72;
    goto L_8C015D70;
    L_8C015D70:;
    R6 = ((R6 + 0x1F));
    goto L_8C015D72;
    L_8C015D72:;
    *(unsigned int *)((R4 + 0x0)) = ((*(int *)((R4 + 0x0))) + ((((((int)R6 >> 5) << 2) << 2) << 1) + 0x40));
    *(unsigned int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C287598)) = 0x1;
    t24 = *(int *)((R14 + 0x0));
    *(unsigned int *)((((((((t24 - 1) << 2) + (t24 - 1)) << 2) << 1) + R5) + 0x0)) = 0x0;
    t25 = *(int *)((R14 + 0x0));
    R6 = (0x0);
    if (((*(int *)(((((((t25 << 2) + t25) << 2) << 1) + R5) + 0x0))) != 0)) goto L_8C015DD8;
    goto L_8C015DB8;
    L_8C015DB8:;
    *(unsigned int *)((R7 + 0x0)) = R6;
    t29 = *(int *)((R4 + 0x0));
    *(unsigned int *)0x8C2873C8 = t29;
    if (((unsigned int)t29 <= (unsigned int)0xCDFFFFF)) goto L_8C015DD4;
    goto L_8C015DC8;
    L_8C015DC8:;
    msgEventStart(0x1E, 0x14, 0x8C1016C4, 0xE10);
    goto L_8C015DD4;
    L_8C015DD4:;
    R0 = (0xFFFFFFFF);
    goto L_8C015E08;
    L_8C015DD8:;
    t33 = *(int *)((R14 + 0x0));
    t34 = *(int *)((R4 + 0x0));
    R12 = (t34);
    R13 = ((((((t33 << 2) + t33) << 2) << 1) + R5));
    if ((t34 == (*(int *)((((*(int *)(((((((t33 << 2) + t33) << 2) << 1) + R5) + 0x0))) << 2) + 0x8C2873CC))))) goto L_8C015E00;
    goto L_8C015DF4;
    L_8C015DF4:;
    fileLoadStart(R12, (R13 + 0x4), 0x0);
    goto L_8C015E00;
    L_8C015E00:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    R0 = (0x1);
    goto L_8C015E08;
}


