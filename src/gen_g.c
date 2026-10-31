/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gMapleDriver[];
extern char gNlCommonTextureOffset[];
extern char gNlRenderTextureTableState[];
extern char gNlTextureSurfaces[];
extern char stageNo[];

int ADXT_Pause(int, int);
int ADXT_Stop(void);
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
    *(unsigned int *)(int)stageNo = t4;
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
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t6;
                u7 = *(float *)(((a4 + (((t0 << 1) + t0) << 2)) + 0x8));
                *(float *)((((int)stk + 4) + 0x8)) = u7;
                t8 = *(int *)(((a4 + (((t0 << 1) + t0) << 2)) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t8;
                emotKeyCopy(a4, t2, t0);
                t10 = *(int *)((((int)stk + 4) + 0x0));
                *(unsigned int *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x0)) = t10;
                u11 = *(float *)((((int)stk + 4) + 0x8));
                *(float *)(((a4 + (((t2 << 1) + t2) << 2)) + 0x8)) = u11;
                t12 = *(int *)((((int)stk + 4) + 0x4));
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

void uniformPreviewFree(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;

    t0 = 0x8C37DBBC;
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        if (t2 != 0) {
            t3 = *(int *)((0x8C124DE0 + t1));
            nlSetCommonTextureOffset(t3);
            t5 = *(int *)((0x8C1B1D8C + t1));
            nlObjPutFreeTextureOnce();
            *(unsigned int *)((0x8C37DBBC + t1)) = 0x0;
        }
        t0 = (t0 + 0x4);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C37DBCC);
    t7 = 0x8C37DB44;
    do {
        *(unsigned int *)((t7 + 0x0)) = 0x0;
        t7 = (t7 + 0x4);
    } while ((unsigned int)t7 < (unsigned int)0x8C37DBBC);
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
                            ADXT_Stop();
                        }
                        if (a5 == 3) {
                            t3 = *(int *)0x8C38BA98;
                            ADXT_Stop();
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
                        ADXT_Stop();
                        t22 = *(int *)0x8C38BA98;
                        ADXT_Stop();
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







void nlRenderTextureFree(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;

    t0 = *(int *)0x8C44FBF0;
    t1 = *(int *)(int)gNlRenderTextureTableState;
    if ((unsigned int)a4 <= (unsigned int)t0) {
        t2 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0));
        if ((int)t2 >= 0) {
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x0)) = 0xFFFFFFFF;
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x4)) = 0xFFFFFFFF;
            t3 = *(int *)(int)gNlCommonTextureOffset;
            t4 = *(int *)0x8C4241C0;
            t5 = *(int *)((((((t2 + t3) << 2) << 1) + t4) + 0x0));
            if (t5 != 0) {
                *(unsigned int *)(((t4 + (((t2 + t3) << 2) << 1)) + 0x0)) = 0x0;
                t6 = *(int *)0x8C4241C0;
                t7 = *(int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4));
                *(unsigned int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
                nlCommonTextureClearTextureIndex(t7);
                t9 = *(int *)(int)gNlTextureSurfaces;
                t10 = *(int *)(((t9 + (t7 * 0x3C)) + 0x2C));
                if (t10 != 0) {
                    t11 = *(int *)(int)gNlTextureSurfaces;
                    t12 = *(int *)(((t11 + (t7 * 0x3C)) + 0x28));
                    if (t12 == 0) {
                        t13 = *(int *)(int)gNlTextureSurfaces;
                        kmFreeTexture((t13 + (t7 * 0x3C)));
                    }
                    t16 = *(int *)(int)gNlTextureSurfaces;
                    *(unsigned int *)(((t16 + (t7 * 0x3C)) + 0x28)) = 0xFFFFFFFF;
                    t17 = *(int *)(int)gNlTextureSurfaces;
                    *(unsigned int *)(((t17 + (t7 * 0x3C)) + 0x2C)) = 0x0;
                    t18 = *(int *)(int)gNlTextureSurfaces;
                    *(unsigned int *)(((t18 + (t7 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                }
            }
        }
    }
}


void kmyWriteFogTable(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C4709EC;
    if ((t0 & 4) != 0) {
        t1 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t1 & 0xFFFFFFFB);
        t2 = 0x200;
        t3 = 0x0;
        do {
            t4 = *(int *)((t3 + 0x8C4707EC));
            kmiWriteRegister(t2, t4);
            t3 = (t3 + 0x4);
            t2 = (t2 + 0x4);
        } while ((unsigned int)t3 < (unsigned int)0x200);
    }
}

void kmyiInitializeNativeBuffer(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)((a4 + 0x88));
    t1 = *(int *)0x8C45EE80;
    *(unsigned int *)((t0 + 0x28)) = t1;
    t2 = *(int *)((a4 + 0x88));
    t3 = *(int *)0x8C45EE84;
    *(unsigned int *)((t2 + 0x24)) = t3;
    *(unsigned int *)((a4 + 0x1C)) = a6;
    *(unsigned int *)((a4 + 0x18)) = a5;
    t4 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t4 + 0x1C)) = a7;
    if (a7 != 0) {
        t5 = *(int *)((a4 + 0x88));
        t6 = *(int *)((t5 + 0x24));
        *(unsigned int *)((t5 + 0x24)) = (t6 | 0x10000);
    }
}

void make_header(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int stk[2];

    t0 = *(int *)((a5 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = *(int *)(int)gMapleDriver;
    t2 = *(int *)((0x10C4 + t1));
    if (t2 == 1) {
        t3 = *(signed char *)((((int)stk + 4) + 0x0));
        *(unsigned char *)((a4 + 0xB)) = t3;
        t4 = *(signed char *)(((((int)stk + 4) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xA)) = t4;
        t5 = *(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x9)) = t5;
        t6 = *(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x8)) = t6;
    } else {
        t7 = *(signed char *)((((int)stk + 4) + 0x0));
        *(unsigned char *)((a4 + 0x8)) = t7;
        t8 = *(signed char *)(((((int)stk + 4) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0x9)) = t8;
        t9 = *(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xA)) = t9;
        t10 = *(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0));
        *(unsigned char *)((a4 + 0xB)) = t10;
    }
    t12 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t12 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t12 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            t13 = *(int *)(((a5 + 0x4) + 0x0));
            *(unsigned int *)((a4 + 0x14)) = t13;
        }
    }
}

void mpdrv_clear_deviceinfo(int a4)
{
    int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    *(unsigned char *)(((a4 + 0x14) + 0x0)) = 0x28;
    *(unsigned char *)((a4 + 0x15)) = 0x6E;
    *(unsigned char *)((a4 + 0x16)) = 0x6F;
    *(unsigned char *)((a4 + 0x17)) = 0x6E;
    *(unsigned char *)((a4 + 0x18)) = 0x65;
    *(unsigned char *)((a4 + 0x19)) = 0x29;
    t1 = (a4 + 0x1A);
    do {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
    } while ((unsigned int)t1 < (unsigned int)(a4 + 0x33));
    *(unsigned char *)((a4 + 0x33)) = 0x0;
}

void syG2DmaResume(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0x8C20CA24;
    t2 = *(int *)((t1 + 0x0));
    *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x1C)) = 0x0;
}
