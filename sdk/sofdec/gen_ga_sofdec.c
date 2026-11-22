/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int cpuChasePlan(int, int, int, int, int, int, int, int, int, int, int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int nlSubVector(int, int, Stk3);
int cpuDblChase(int a4, int a5, int a6, int a7);
int gdFsReinitG(void);
int adxf_read_sj32(int a4, int a5, int a6);


int adxf_read_sj32(int a4, int a5, int a6)
{
    int t38;
    int t19;
    int t20;
    int t21;
    int t26;
    int t31;
    int t59;
    int t52;
    int t45;
    int t35;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
        t59 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
            t52 = 0xFFFFFFFD;
        } else {
            if ((*(int *)(((int)stk + 4))) == 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                t45 = 0xFFFFFFFD;
            } else {
                t38 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                        t35 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock(a4, a5);
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t19 = *(int *)((a4 + 0x10));
                        t20 = *(int *)((a4 + 0x18));
                        t21 = (t19 - t20);
                        if ((int)a5 < (int)(t19 - t20)) {
                            t21 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t21;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t26 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)(((int)stk + 4))));
                        t31 = 0xFFFFFFFF;
                        if (t26 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t26;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t31 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                        t35 = t31;
                    }
                    t38 = t35;
                }
                t45 = t38;
            }
            t52 = t45;
        }
        t59 = t52;
    }
    return t59;
}
