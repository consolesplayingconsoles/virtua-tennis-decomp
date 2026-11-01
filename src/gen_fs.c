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



float nlTanf(float f4)
{
    float t0;
    int t1;
    int t2;
    int stk[3];

    t0 = nlTanfReduce(((int)stk + 4), f4);
    t1 = *(int *)(((int)stk + 4));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 == 0) {
        return t0;
    }
    if (t0 != 0.0f) {
        return ((-1.0f) / t0);
    }
    return (*(float *)0x8C0ED670);
}

int kmyZeroMemory(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    if (((a4 | a5) & 7) == 0) {
        t0 = a4;
        t1 = ((unsigned int)((unsigned int)a5 >> 2) >> 1);
        for (;;) {
            t1 = (t1 - 0x1);
            *(float *)((t0 + 0x0)) = 0.0f;
            *(float *)(((t0 + 0x0) + 4)) = 0.0f;
            t0 = (t0 + 0x8);
            if (t1 == 0) {
                break;
            }
        }
        return (a4 | a5);
    }
    if (((a4 | a5) & 3) == 0) {
        t2 = a4;
        t3 = ((unsigned int)a5 >> 2);
        for (;;) {
            t3 = (t3 - 0x1);
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x4);
            if (t3 == 0) {
                break;
            }
        }
        return 0x0;
    }
    if (((a4 | a5) & 1) == 0) {
        t4 = a4;
        t5 = ((unsigned int)a5 >> 1);
        for (;;) {
            t5 = (t5 - 0x1);
            *(unsigned short *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x2);
            if (t5 == 0) {
                break;
            }
        }
        return 0x0;
    }
    t6 = a4;
    t7 = a5;
    for (;;) {
        t7 = (t7 - 0x1);
        *(unsigned char *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x1);
        if (t7 == 0) {
            break;
        }
    }
    return 0x0;
}

int kmyMemCopy(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        for (;;) {
            u3 = *(float *)((t1 + 0x0));
            u4 = *(float *)(((t1 + 0x0) + 4));
            t1 = (t1 + 0x8);
            t2 = (t2 - 0x1);
            *(float *)((t0 + 0x0)) = u3;
            *(float *)(((t0 + 0x0) + 4)) = u4;
            t0 = (t0 + 0x8);
            if (t2 == 0) {
                break;
            }
        }
        return ((a4 | a5) | a6);
    }
    if ((((a4 | a5) | a6) & 3) == 0) {
        t5 = a4;
        t6 = a5;
        t7 = ((unsigned int)a6 >> 2);
        for (;;) {
            t8 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            t7 = (t7 - 0x1);
            *(unsigned int *)((t5 + 0x0)) = t8;
            t5 = (t5 + 0x4);
            if (t7 == 0) {
                break;
            }
        }
        return t8;
    }
    if ((((a4 | a5) | a6) & 1) == 0) {
        t9 = a4;
        t10 = a5;
        t11 = ((unsigned int)a6 >> 1);
        for (;;) {
            t12 = *(short *)((t10 + 0x0));
            t10 = (t10 + 0x2);
            t11 = (t11 - 0x1);
            *(unsigned short *)((t9 + 0x0)) = t12;
            t9 = (t9 + 0x2);
            if (t11 == 0) {
                break;
            }
        }
        return t12;
    }
    t13 = a4;
    t14 = a5;
    t15 = a6;
    for (;;) {
        t16 = *(signed char *)((t14 + 0x0));
        t14 = (t14 + 0x1);
        t15 = (t15 - 0x1);
        *(unsigned char *)((t13 + 0x0)) = t16;
        t13 = (t13 + 0x1);
        if (t15 == 0) {
            break;
        }
    }
    return t16;
}

void vmsfs_memcpyl(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

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


