/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetOutPan(int, int, int);
int ADXSJD_GetNumChan(int);
int abs(int);
int eepromGetSnap(void);
int kmGetCurrentScanline(int);
int kmyCopyFromTexture(int, int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyPurgeCache(int);
int kmyiCheckNativeHandle(int);
int pdExecPeripheralServer(void);
int strmCallNameScore(int);
int strmCallScore(int, int, int, int);
int FBmovedata(int a4, int a5, int a6);
int mainDebugPause(int a4, int a5);
int motionAngleBlend(int a4, int a5);
void strmScoreAnnounce(void);
int strmCallPending(void);
int adxt_set_outpan(int a4);
int kmyMoveParameterBoundary(int a4, int a5, int a6);

int FBmovedata(int a4, int a5, int a6)
{
    int t15;
    int t19;
    int t20;
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t24;
    int t25;
    int stk[522];

    t15 = a6;
    t19 = a5;
    t20 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            kmyCopyFromTexture((*(int *)(((int)stk + 4))), t0, 0x800);
            t7 = 0x40;
            t8 = (*(int *)(((int)stk + 4)));
            for (;;) {
                if (t7 == 0) {
                    break;
                }
                kmyPurgeCache(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            kmyCopyToTexture(t1, (*(int *)(((int)stk + 4))), 0x800, 0x0);
            t2 = (t2 - 0x800);
            t0 = (t0 + 0x800);
            t1 = (t1 + 0x800);
            if ((unsigned int)t2 <= (unsigned int)0x800) {
                break;
            }
        }
        t15 = t2;
        t19 = t0;
        t20 = t1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    kmyCopyFromTexture((((int)stk + 4) + 0x4), t19, t15);
    t24 = 0x40;
    t25 = (*(int *)(((int)stk + 4)));
    for (;;) {
        if (t24 == 0) {
            break;
        }
        kmyPurgeCache(t25);
        t24 = (t24 - 1);
        t25 = (t25 + 0x20);
    }
    return (kmyCopyToTexture(t20, (*(int *)(((int)stk + 4))), t15, 0x0));
}


int kmyMoveParameterBoundary(int a4, int a5, int a6)
{
    int t0;
    int t19;
    int t4;
    int t8;
    int t9;
    int t12;
    int t13;
    int t16;
    int t17;

    t0 = kmyiCheckNativeHandle(a4);
    t19 = 0xEEEE;
    if (t0 == 0) {
    } else {
        t4 = *(int *)(((a4 + 0x18) + 0x18));
        if (a5 != 0) {
            t8 = 0xEEEE;
            t9 = 0x0;
            if ((unsigned int)((a6 + t4) - 256) < (unsigned int)(*(int *)(((a4 + 0x18) + 0x10)))) {
                t8 = 0x0;
                t9 = (a6 & 0xFFFFFFE0);
            }
            t16 = t8;
            t17 = t9;
        } else {
            t12 = 0xEEEE;
            t13 = 0x0;
            if ((unsigned int)((a6 + t4) - 256) > (unsigned int)(*(int *)(((a4 + 0x18) + 0x28)))) {
                t12 = 0x0;
                t13 = (-(a6 & 0xFFFFFFE0));
            }
            t16 = t12;
            t17 = t13;
        }
        *(unsigned int *)(((a4 + 0x18) + 0x18)) = (t4 + t17);
        *(unsigned int *)(((a4 + 0x18) + 0x14)) = ((t4 + t17) - 256);
        t19 = t16;
    }
    return t19;
}
