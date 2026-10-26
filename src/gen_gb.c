/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetFileRange(int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(int);
int adxt_start_stm(int);
int ADXT_StartAfs(int a4, int a5, int a6);

int ADXT_StartAfs(int a4, int a5, int a6)
{
    int t8;
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    ADXT_Stop(a4);
    ADXCRS_Lock();
    ADXF_GetFileRange((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 28))), ((int)stk + 16), (((int)stk + 16) + 0x4));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0x8C209B00, ((*(int *)(((int)stk + 24)))), ((*(int *)(((int)stk + 28)))));
    } else {
        adxt_start_stm(a4);
    }
    return (ADXCRS_Unlock());
}
