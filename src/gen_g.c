/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Pause(int, int);
int ADXT_Stop(int);
int motionBackup(void);
int motionSetSpeed(int, float);
int sprTexFree(int);
int stageLoadInit(int);
int emotKeyCopy(int, int, int);
int nlSetCommonTextureOffset(int);
int nlObjPutFreeTextureOnce(void);
int kmFreeTexture(int);
int kmiWriteRegister(int, int);
int mpdrv_memset_l(int, int, int);
int nlCommonTextureClearTextureIndex(int);
int nlObjPutLoadTexture(int, int);
int nlScaleVector(int, int, float);
int nlSpriteFreeTextureOnce(void);


void vecDiv(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t1;
    int t2;
    int t3;
    int stk[3];

    *(float *)(((int)stk + 4)) = f4;
    nlScaleVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), (1.0f / f4));
    t1 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void stageLoadTimedInit(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;

    t0 = 0x8C344088;
    do {
        t1 = t0;
        t0 = (t0 + 0x8);
        *(unsigned int *)((t1 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x8C3449E8);
    stageLoadInit(a4);
    t3 = *(int *)0x8C287ACC;
    t4 = *(int *)(((t3 << 2) + 0x8C1022B8));
    *(unsigned int *)0x8C1891E8 = t4;
    *(unsigned int *)0x8C1891F0 = t4;
    *(unsigned int *)0x8C287C50 = 0x5DC;
}

void stageMinigameTexLoad(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188EB4;
    if (t0 == 0) {
        nlSetCommonTextureOffset(0x1C00);
        t2 = 0x0;
        t3 = 0x8C188D80;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C13321C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x40);
        *(unsigned int *)0x8C188EB4 = 0x1;
    }
}

void emotKeysSort(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u7;
    int t8;
    int t10;
    float u11;
    int t12;
    int stk[11];
    int R1004;
    int R1008;
    float R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((a4 + 0x264));
        if ((int)t0 >= (int)(t1 - 1)) break;
        t2 = (t0 + 0x1);
        for (;;) {
            t3 = *(int *)((a4 + 0x264));
            if ((int)t2 >= (int)t3) break;
            t4 = *(int *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x0));
            t5 = *(int *)(((a4 + (((t0 << 1) + t0) << 2)) + 0x0));
            if ((int)t5 > (int)t4) {
                t6 = *(int *)(((((t0 << 1) + t0) << 2) + a4));
                R1004 = t6;
                u7 = *(float *)(((a4 + (((t0 << 1) + t0) << 2)) + 0x8));
                R1012 = u7;
                t8 = *(int *)(((a4 + (((t0 << 1) + t0) << 2)) + 0x4));
                R1008 = t8;
                emotKeyCopy(a4, t2, t0);
                t10 = R1004;
                *(unsigned int *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x0)) = t10;
                u11 = R1012;
                *(float *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x8)) = u11;
                t12 = R1008;
                *(unsigned int *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x4)) = t12;
            }
            t2 = (t2 + 0x1);
        }
        t0 = (t0 + 0x1);
    }
}

void sprStartFree(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AECF4;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12461C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexFree(t3);
            t5 = *(int *)0x8C1AECF8;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AECF8 = (t5 - 1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t6 = *(int *)0x8C1AECF4;
        *(unsigned int *)0x8C1AECF4 = (t6 - 1);
    }
}

void sprSet109Free(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AECFC;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12486C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexFree(t3);
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AECFC = 0x0;
        } while ((unsigned int)t1 < (unsigned int)0x6);
    }
}

void sprAdvFree(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AED00;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12465C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexFree(t3);
            t5 = *(int *)0x8C1AED04;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AED04 = (t5 - 1);
        } while ((unsigned int)t1 < (unsigned int)0x38);
        t6 = *(int *)0x8C1AED00;
        *(unsigned int *)0x8C1AED00 = (t6 - 1);
    }
}

void sprMatchFree(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED08;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12473C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t5 = *(int *)0x8C1AED08;
        *(unsigned int *)0x8C1AED08 = (t5 - 1);
    }
}

void sprSet115Free(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED0C;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124808;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexFree(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x7);
        t5 = *(int *)0x8C1AED0C;
        *(unsigned int *)0x8C1AED0C = (t5 - 1);
    }
}


void strmVoiceQueueClear(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = (0x8C40C240 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x24);
    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C23C = 0x0;
}

void strmControl(int a4, int a5)
{
    int t0;
    int t3;
    int t7;
    int t10;
    int t14;
    int t17;
    int t22;
    int t25;
    int t27;
    int t30;
    int t32;

    if (a4 != 0) {
        if (a5 != 0) {
            if (a4 != 1) {
                t0 = *(int *)0x8C38BA94;
                if (a5 != 4) {
                    if (a4 == 2) {
                        if (a5 == 1) {
                            ADXT_Stop(t0);
                        }
                        if (a5 == 3) {
                            t3 = *(int *)0x8C38BA98;
                            ADXT_Stop(t3);
                        }
                    }
                    if (a4 == 3) {
                        if (a5 == 1) {
                            t7 = *(int *)0x8C38BA94;
                            ADXT_Pause(t7, 0x1);
                        }
                        if (a5 == 3) {
                            t10 = *(int *)0x8C38BA98;
                            ADXT_Pause(t10, 0x1);
                        }
                    }
                    if (a4 == 4) {
                        if (a5 == 1) {
                            t14 = *(int *)0x8C38BA94;
                            ADXT_Pause(t14, 0x0);
                        }
                        if (a5 == 3) {
                            t17 = *(int *)0x8C38BA98;
                            ADXT_Pause(t17, 0x0);
                        }
                    }
                } else {
                    if (a4 == 2) {
                        ADXT_Stop(t0);
                        t22 = *(int *)0x8C38BA98;
                        ADXT_Stop(t22);
                    }
                    if (a4 == 3) {
                        t25 = *(int *)0x8C38BA94;
                        ADXT_Pause(t25, 0x1);
                        t27 = *(int *)0x8C38BA98;
                        ADXT_Pause(t27, 0x1);
                    }
                    if (a4 == 4) {
                        t30 = *(int *)0x8C38BA94;
                        ADXT_Pause(t30, 0x0);
                        t32 = *(int *)0x8C38BA98;
                        ADXT_Pause(t32, 0x0);
                    }
                }
            }
        }
    }
}


