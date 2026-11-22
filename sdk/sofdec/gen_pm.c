/* Straight-line functions with calls and guards (batch gen_pm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXAMP_SetSfreq(int, int);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_SetBitPerSmpl(int, int);
int ADXRNA_SetNumChan(int, int);
int ADXRNA_SetOutVol(int, int);
int ADXRNA_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXRNA_SetTotalNumSmpl(void);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetFormat(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetNumLoop(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_GetStat(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(int);
int adxt_set_outpan(int);
int adxt_stat_decinfo(int a4);

int adxt_stat_decinfo(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXSJD_GetStat(t0);
    if (t1 != 2) {
        return t1;
    }
    t1 = ADXSJD_GetNumChan(t0);
    if ((int)t1 > (int)(*(signed char *)((a4 + 0x3)))) {
        ADXERR_CallErrFunc(0x8C20AB38, (t1), ((*(signed char *)((a4 + 0x3)))));
        return ADXT_Stop(a4);
    }
    t1 = ADXSJD_GetSfreq(t0);
    t2 = ADXSJD_GetNumLoop(t0);
    if ((int)t2 > 0) {
        t3 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
        t4 = ((t3 << 1) + t3);
    } else {
        t3 = (int)((int)t1 / (int)(*(int *)((a4 + 0x38))));
        t4 = (((int)((unsigned int)((int)((unsigned int)((t3 << 1) + t3) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t3 << 1) + t3))) ? 1u : 0u))) >> 1);
    }
    *(unsigned int *)(((0x48 + a4) + 0x0)) = t4;
    t1 = ADXSJD_GetBlkSmpl(t0);
    *(unsigned int *)(((0x48 + a4) + 0x0)) = (((int)((int)((*(int *)((a4 + 0x48))) + (t1 << 1)) / (int)(t1 << 1))) * (t1 << 1));
    ADXSJD_SetMaxDecSmpl(t0, (*(int *)((a4 + 0x48))));
    if ((int)t2 > 0) {
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        } else {
            t1 = ADXSJD_GetLpEndOfst(t0);
            *(unsigned int *)((a4 + 0x50)) = (0x800 - ((int)((int)t1 % (int)0x800)));
            *(unsigned int *)(((0x50 + a4) + 0x0)) = ((int)((int)(*(int *)(((0x50 + a4) + 0x0))) % (int)0x800));
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), ((int)((int)((0x800 + t1) - 1) / (int)0x800)));
            ADXSTM_EntryEosFunc((*(int *)((a4 + 0x8))), 0x8C1F1110, a4);
        }
        t1 = ADXSJD_GetLpEndPos(t0);
        ADXSJD_SetTrapNumSmpl(t0, t1);
        ADXSJD_SetTrapDtLen(t0, 0x0);
        ADXSJD_SetTrapCnt(t0, 0x0);
        ADXSJD_EntryTrapFunc(t0, 0x8C1F1044, a4);
    } else {
        if ((*(int *)((a4 + 0x8))) != 0) {
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
        }
    }
    t1 = ADXSJD_GetSfreq(t0);
    t2 = ADXSJD_GetNumChan(t0);
    ADXSJD_GetTotalNumSmpl(t0);
    t3 = ADXSJD_GetOutBps(t0);
    ADXRNA_SetBitPerSmpl((*(int *)((a4 + 0xC))), t3);
    ADXRNA_SetSfreq((*(int *)((a4 + 0xC))), t1);
    ADXRNA_SetNumChan((*(int *)((a4 + 0xC))), t2);
    *(volatile int *)((a4 + 0xC));
    ADXRNA_SetTotalNumSmpl();
    ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), (*(short *)((a4 + 0x40))));
    adxt_set_outpan(a4);
    if ((*(int *)((a4 + 0x74))) != 0) {
        ADXAMP_SetSfreq((*(int *)((a4 + 0x74))), t1);
    }
    t1 = ADXSJD_GetFormat(t0);
    if (t1 == 2) {
        t1 = ADXSJD_GetSpsdInfo(t0);
        ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t1);
    }
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    return 0x2;
}
