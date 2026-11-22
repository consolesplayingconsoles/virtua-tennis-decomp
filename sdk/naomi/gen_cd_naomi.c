/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DECtoBCD(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _pd_peripheral_set_null(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngReadData(int);
int fmMngReadSctAllData(int);
int fmMngWriteData(int, int, int);
int gdFsGetStat(int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int gdFsReqRdPio(int, int, int);
int get_fat(int, int);
int kdGetDeviceInfo(int);
int kdInitSystem(int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_make_devicedata(int, int);
int nlLineSendVertex(int, int, int);
int search_dir(int, int, int);
int search_subst_fat_top(int);
int set_fat(int, int, int);
int syBtFlDeleteSct(int, int, int);
int syBtFlWrite(int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int thunk_copyBytes(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fseek(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat_1(int);
int write_sys(int);
int kmiProcessVertex_11(int a4, int a5, int a6, int a7);
int write_fat(int a4);
int pdInitPeripheral(int a4, int a5, int a6);
int vmsfs_fgetsize(int a4, int a5);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int pdTmrGetTimeCallback(int a4, int a5, int a6, int a7);
int gdFsMovePickup(int a4);
int gdFsWaitCompleteReq(int a4);
int syMmuAddEntry(int a4, int a5, int a6);
int gdFsReqDrvStatG(void);
int check_file_correct(int a4, int a5);
int gdFsRead(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int fmMngFormat(int a4, int a5, int a6);
int gdFsGetTocG(int a4, int a5);
int vmsfs_isformat(int a4, int a5, int a6, int a7);
int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5);
int set_vmstime(int a4, int a5);
int buReadFile(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
int fmMngExecServer(int a4, int a5, int a6);


int nlLineSendQuadA(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (((*(float *)((a5 + 0x0))) + f5) + f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (((*(float *)((a5 + 0x4))) - f4) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = (((*(float *)((a5 + 0x0))) - f5) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = (((*(float *)((a5 + 0x4))) + f4) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = (((*(float *)((a6 + 0x4))) - f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = (((*(float *)((a6 + 0x4))) + f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}


