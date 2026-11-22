/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
int cpuInFan(int, int, Stk3);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
extern int cpuReachPoint();
float nlPow(float, float);
float nlTanfReduce(int, float);
int cpuDblAimRateD(int a4, int a5);
void bodyInit(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5);
float nlTanf(float f4);
int kmyZeroMemory(int a4, int a5);
int kmyMemCopy(int a4, int a5, int a6);
void vmsfs_memcpyl(int a4, int a5, int a6);
void SJMEM_Error(void);
void SJRBF_Error(void);
void SJUNI_Error(void);


void SJMEM_Error(void)
{
    for (;;) {
    }
}

void SJRBF_Error(void)
{
    for (;;) {
    }
}

void SJUNI_Error(void)
{
    for (;;) {
    }
}


