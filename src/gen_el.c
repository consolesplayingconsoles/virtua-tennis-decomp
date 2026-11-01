/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXSTM_GetCurOfst(int, int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADXSTM_Stop(int);
int adxf_CloseSjStm(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int colliObjInit(int, int, int, int, int, float);
int entryClearJoined(void);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entryPortLeave(int, int);
int hudBarDraw(Stk3, float, float);
int hudNumPut(int, Stk3, float);
int nlDispStripTrnsl(int, int, Stk16);
int nlLength(int, int);
int nlSetCommonTextureOffset(int, Stk4);
int nlSingleLine(int, int, int, Stk3);
int nlSpriteFreeTexture(int, int);
int nlSpriteLoadTextureList(int, int);
int nlSpriteSetGarbagedTexture(int);
int rankDrawTbl1(Stk4);
int rankDrawTbl2(int, int, int, int, int, int, int, int, int, int, int, int);
int selGridClear(void);
int set_event(int, int);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int uniformTexRestore(int, Stk4);
Stk3 vecMake(float, float, float);
int uiScanlinesPut(float f4);
int sseleScanlines(void);
int entryRejoinPorts(void);
int adxf_SetFileInfo(int a4, int a5);
int ADXF_Stop(int a4);
int hudCallMsgDrawDab0(float f4, float f5);
int hudPointsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int menuTextLetterPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int optionBarPut(Stk1 s);
int courtColliInit(int a4, int a5, int a6, int a7);
int hudCallMsgDrawDa60(float f4, float f5);
int hudCallMsgDrawDb50(float f4, float f5);
int hudCallMsgDrawDb00(float f4, float f5);
int hudImpactSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, float f4);
int optionQuadPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int rankDraw(void);
int stageSelIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int vecDistXZf(float f4, float f5, float f6, float f7);
int cpuDebugBallLine(void);
int sprTexLoad(int a4);
int sprTexFree(int a4);
void panelDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int sprTexRestore(int a4);

int uiScanlinesPut(float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    int t6;
    int t7;
    int t15;
    float u9;
    int t10;
    int t17;
    int t18;
    int t19;
    float u20;
    int stk[25];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C12692C); }
    t0 = ((int)stk + 4);
    for (;;) {
        *(float *)((t0 + 0x8)) = f4;
        t0 = (t0 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)(((int)stk + 4) + 0x40)) {
            break;
        }
    }
    t1 = 0x8C0F7C74;
    t2 = t0;
    t3 = (((int)stk + 4) + 0x40);
    t4 = 0x0;
    u5 = f4;
    for (;;) {
        t6 = (int)((int)t4 / (int)0x3);
        t7 = ((~(((~t6) + 0x1) & 0x1)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0x1);
        }
        t15 = t7;
        if (t7 == 0) {
            t1 = t4;
            t1 = (t1 + 0x2);
            t2 = 0x0;
            u5 = (float)t1;
            u9 = (float)t1;
            for (;;) {
                t3 = t2;
                t3 = (t3 << 2);
                t3 = (t3 << 2);
                t3 = (t3 + ((int)stk + 4));
                t10 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t10 = (t2 & 0x1);
                }
                t2 = (t2 + 0x1);
                if (t10 == 1) {
                    *(float *)((t3 + 0x4)) = u5;
                } else {
                    u9 = (float)t4;
                    *(float *)((t3 + 0x4)) = u9;
                }
                if ((int)t2 >= (int)0x4) {
                    break;
                }
            }
            t3 = ((int)stk + 4);
            t2 = 0x4;
            t15 = (nlDispStripTrnsl(t2, t3, *(Stk16 *)(((int)stk + 4))));
        } else {
            t17 = t1;
            t18 = t2;
            t19 = t3;
            u20 = u5;
        }
        u5 = u20;
        t4 = (t4 + 0x3);
        t1 = t17;
        t2 = t18;
        t3 = t19;
        if ((int)t4 >= (int)0x1E0) {
            break;
        }
    }
    return t15;
}

int sseleScanlines(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t13;
    int t5;
    float u6;
    int t7;
    int t9;
    int t15;
    int stk[25];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C123404); }
    t0 = 0x8C0F7C74;
    t1 = 0x0;
    for (;;) {
        t2 = (int)((int)t1 / (int)0x3);
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        t13 = t3;
        if (t3 == 0) {
            t0 = t1;
            t0 = (t0 + 0x2);
            t5 = 0x0;
            u6 = (float)t0;
            for (;;) {
                t7 = ((~(((~t5) + 0x1) & 0x1)) + 0x1);
                if ((int)t5 >= 0) {
                    t7 = (t5 & 0x1);
                }
                t9 = (((t5 << 2) << 2) + ((int)stk + 4));
                t5 = (t5 + 0x1);
                if (t7 == 1) {
                    *(float *)((t9 + 0x4)) = (float)t0;
                } else {
                    u6 = (float)t1;
                    *(float *)((t9 + 0x4)) = u6;
                }
                if ((int)t5 >= (int)0x4) {
                    break;
                }
            }
            t13 = (nlDispStripTrnsl(0x4, ((int)stk + 4), *(Stk16 *)(((int)stk + 4))));
        } else {
            t15 = t0;
        }
        t1 = (t1 + 0x3);
        t0 = t15;
        if ((int)t1 >= (int)0x1E0) {
            break;
        }
    }
    return t13;
}

int entryRejoinPorts(void)
{
    int t0;
    int t1;
    int t14;
    int t19;
    int t22;
    int t9;
    int stk[13];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C11100C); }
    t0 = ((int)stk + 4);
    t1 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t1 << 1) + 0x8C185298)))) != 0) {
            *(unsigned int *)((((int)stk + 4) + (t1 << 2))) = 0x1;
        }
        if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x30))) != -1) {
            uniformTexRestore(t1, *(Stk4 *)(((int)stk + 4)));
        } else {
            t9 = t0;
        }
        t0 = t9;
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    t14 = 0x0;
    for (;;) {
        entryPortLeave(t14, 0x1);
        t14 = (t14 + 0x1);
        if ((int)t14 >= (int)0x4) {
            break;
        }
    }
    selGridClear();
    entryInit();
    entryClearJoined();
    t19 = 0x0;
    for (;;) {
        t22 = (t19 << 2);
        if ((*(int *)((((int)stk + 4) + (t19 << 2)))) != 0) {
            t22 = (entryPortJoin(t19, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
        }
        t19 = (t19 + 0x1);
        if ((int)t19 >= (int)0x4) {
            break;
        }
    }
    return t22;
}

int adxf_SetFileInfo(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t18;
    int t13;
    int t9;
    int stk[9];

    t0 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
    if ((int)t0 < 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
        t18 = t0;
    } else {
        t2 = ADXSTM_GetFsizeSct(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
            t13 = t2;
        } else {
            t4 = ADXSTM_GetFsizeByte(a5, ((int)stk + 4));
            if ((int)t4 < 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                t9 = t4;
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 12)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 4)));
                t9 = 0x0;
            }
            t13 = t9;
        }
        t18 = t13;
    }
    return t18;
}

int ADXF_Stop(int a4)
{
    int stk[5];

    adxf_SetCmdHstry(0x5, 0x0, a4, 0xFFFFFFFF, 0xFFFFFFFF);
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
        return 0xFFFFFFFD;
    }
    if ((*(signed char *)((a4 + 0x1))) != 1) {
        if ((*(signed char *)((a4 + 0x1))) == 3) {
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            return (*(int *)((a4 + 0x18)));
        }
        if ((*(int *)((a4 + 0x4))) == 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
            return 0xFFFFFFFF;
        }
        ADXCRS_Lock();
        ADXSTM_Stop((*(int *)((a4 + 0x4))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 8));
        *(unsigned int *)((a4 + 0x24)) = (*(int *)(((int)stk + 8)));
        adxf_CloseSjStm(a4);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        ADXCRS_Unlock();
        adxf_SetCmdHstry(0x5, 0x1, a4, 0xFFFFFFFF, 0xFFFFFFFF);
        return (*(int *)((a4 + 0x18)));
    }
    return (*(int *)((a4 + 0x18)));
}

int hudCallMsgDrawDab0(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C09A874)), f5);
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C09A878);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A87C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33DAB0, 0x0, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A888));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33DB00, 0x0, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}


int menuTextLetterPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t6;
    int t10;
    int stk[34];

    stk[23] = a8;
    stk[24] = a9;
    stk[25] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 16) + 0x4)) = *(struct mv16 *)(0x8C10E468); }
    if ((*(int *)(((int)stk + 16))) == -1) {
        *(float *)(((((int)stk + 16) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4C) + 0x0))) + -6.0f);
        *(float *)(((((int)stk + 16) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x4C) + 0x4))) + 18.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4C)); }
        t10 = 0x8C33736C;
    } else {
        *(float *)(((((int)stk + 16) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4C) + 0x0))) + -31.0f);
        *(float *)(((((int)stk + 16) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x4C) + 0x4))) + 18.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4C)); }
        t6 = *(int *)(((((*(int *)(((int)stk + 16))) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
        t10 = (((((t6 << 2) + t6) << 2) << 2) + 0x8C33506C);
    }
    return (sprPutAtAlpha(t10, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int optionBarPut(Stk1 s)
{
    int t0;
    int t1;
    int t2;
    float u4;
    float u3;
    int stk[28];

    stk[19] = s.w[0];
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C126514); }
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = 400.0f;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = 400.0f;
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = 0xB2CFDE00;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0xB2CFDE00;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = 0xCFDE00;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = 0xCFDE00;
    t0 = 0x8C0DD720;
    t1 = 0xCFDE00;
    t2 = ((int)stk + 4);
    u4 = 400.0f;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)(((int)stk + 4) + 0x40)) {
            break;
        }
        t0 = 0x4;
        u3 = (*(float *)((t2 + 0x0)));
        u4 = (*(float *)(((((int)stk + 4) + 0x48) + 0x0)));
        t1 = t0;
        t1 = (t1 + (((int)stk + 4) + 0x48));
        u3 = (u3 + u4);
        *(float *)((t2 + 0x0)) = u3;
        u4 = (*(float *)((t1 + 0x0)));
        u3 = (*(float *)((t2 + t0)));
        u4 = (u4 + 1.0f);
        u3 = (u3 + u4);
        *(float *)((t2 + t0)) = u3;
        t0 = 0x8;
        u4 = (*(float *)(((((int)stk + 4) + 0x48) + t0)));
        *(float *)((t2 + t0)) = u4;
        t2 = (t2 + 0x10);
    }
    return (nlDispStripTrnsl(0x4, ((int)stk + 4), *(Stk16 *)(((int)stk + 4))));
}

int courtColliInit(int a4, int a5, int a6, int a7)
{
    int t3;
    int t0;
    int t1;
    int t2;

    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)(((((*(int *)0x8C1891E8) * 0x124) + 0x8C106314) + 0x20)))) {
            break;
        }
        t2 = 0x78;
        t1 = (*(int *)0x8C1891E8);
        t0 = 0xC;
        t2 = (t3 * t2);
        t2 = (t2 + 0x8C29562C);
        t1 = (t1 * 0x124);
        t1 = (t1 + 0x8C106314);
        t1 = (t1 + 0x24);
        t1 = (t1 + ((t3 << 2) << 2));
        t0 = (colliObjInit(t1, a5, a6, a7, (t2), (*(float *)((t1 + t0)))));
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x38)) = ((*(int *)((t2 + 0x38))) | 0x2);
    }
    return t0;
}

int hudCallMsgDrawDa60(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 16)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A674));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DA60, 0x0, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}

int hudCallMsgDrawDb50(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 16)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A67C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DB50, 0x0, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}

int hudCallMsgDrawDb00(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 16)), (f4 * 0.5f), f5);
    *(float *)((((int)stk + 28) + 0x8)) = 0.00499999989f;
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DB00, 0x0, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}



int rankDraw(void)
{
    float u0;
    float u1;
    float u2;
    int t6;
    int stk[9];

    u0 = *(float *)0x8C0E2028;
    u1 = *(float *)0x8C0E202C;
    u2 = *(float *)0x8C0E2030;
    if ((*(int *)0x8C287ADC) == 2) {
        *(Stk3 *)(((int)stk + 8)) = vecMake(u2, u1, u0);
        t6 = (rankDrawTbl1(*(Stk4 *)((int)stk + 8)));
    } else {
        *(Stk3 *)(((int)stk + 8)) = vecMake(u2, u1, u0);
        t6 = (rankDrawTbl2(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
    }
    return t6;
}

int stageSelIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(float *)(((((int)stk + 16) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x8) + 0x0))) + (*(float *)0x8C09EF84));
    *(float *)(((((int)stk + 16) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x8) + 0x4))) + 7.0f);
    *(unsigned int *)0x8C34145C = 0x300;
    *(unsigned int *)0x8C341468 = ((*(int *)0x8C341468) | 0x1000);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    return (sprPutAt(0x8C341434, a5, a6, a7, *(Stk3 *)(((int)stk + 4))));
}

int vecDistXZf(float f4, float f5, float f6, float f7)
{
    int stk[14];

    *(float *)(((int)stk + 20)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 16)) = f7;
    *(Stk3 *)((((int)stk + 12) + 0x18)) = vecMake(f4, 0.0f, (*(float *)(((int)stk + 20))));
    *(Stk3 *)((((int)stk + 8) + 0x10)) = vecMake((*(float *)(((int)stk + 12))), 0.0f, (*(float *)(((int)stk + 16))));
    return (nlLength((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14)));
}

int cpuDebugBallLine(void)
{
    float u0;
    int stk[8];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0x8C291F3C); }
    u0 = *(float *)0x8C081138;
    *(float *)(((int)stk + 20)) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F88); }
    *(float *)(((int)stk + 8)) = u0;
    return (nlSingleLine((((int)stk + 4) + 0xC), ((int)stk + 4), 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4))));
}

int sprTexLoad(int a4)
{
    int stk[11];
    int R1024;
    int R1028;
    int R1032;

    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)((((a4 << 2) << 2) + 0x8C18281C)); }
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x0)) = 0xFFFFFFFF;
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x2)) = 0xFFFFFFFF;
    R1024 = 0xFFFFFFFF;
    R1028 = 0xFFFFFFFF;
    R1032 = 0xFFFFFFFF;
    nlSetCommonTextureOffset(a4, *(Stk4 *)(((int)stk + 4)));
    return (nlSpriteLoadTextureList(((int)stk + 4), 0x0));
}

int sprTexFree(int a4)
{
    int stk[11];
    int R1024;
    int R1028;
    int R1032;

    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)((((a4 << 2) << 2) + 0x8C18281C)); }
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x0)) = 0xFFFFFFFF;
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x2)) = 0xFFFFFFFF;
    R1024 = 0xFFFFFFFF;
    R1028 = 0xFFFFFFFF;
    R1032 = 0xFFFFFFFF;
    nlSetCommonTextureOffset(a4, *(Stk4 *)(((int)stk + 4)));
    return (nlSpriteFreeTexture(((int)stk + 4), 0x0));
}

void panelDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    if (((int)a4 <= (int)0x9) && ((int)a4 >= 0)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
        t0 = *(int *)(((a4 << 2) + 0x8C10E794));
        sprPutAt((((((t0 << 2) + t0) << 2) << 2) + 0x8C337DE0), a5, a6, a7, *(Stk3 *)(((int)stk + 4)));
    }
}

int sprTexRestore(int a4)
{
    int stk[11];
    int R1024;
    int R1028;
    int R1032;

    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)((((a4 << 2) << 2) + 0x8C18281C)); }
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x0)) = 0xFFFFFFFF;
    *(unsigned short *)(((((int)stk + 4) + 0x10) + 0x2)) = 0xFFFFFFFF;
    R1024 = 0xFFFFFFFF;
    R1028 = 0xFFFFFFFF;
    R1032 = 0xFFFFFFFF;
    nlSetCommonTextureOffset(a4, *(Stk4 *)(((int)stk + 4)));
    return (nlSpriteSetGarbagedTexture(((int)stk + 4)));
}

int hudPointsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t11;
    int t8;
    int t5;
    int t2;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                    t2 = (sprPutAt(0x8C33BD50, a5, a6, a7, *(Stk3 *)(((int)stk + 4))));
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                    t2 = (hudNumPut(0x28, *(Stk3 *)(((int)stk + 4)), 1.0f));
                }
                t5 = t2;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t5 = (hudNumPut(0x1E, *(Stk3 *)(((int)stk + 4)), 1.0f));
            }
            t8 = t5;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t8 = (hudNumPut(0xF, *(Stk3 *)(((int)stk + 4)), 1.0f));
        }
        t11 = t8;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t11 = (hudNumPut(0x0, *(Stk3 *)(((int)stk + 4)), 1.0f));
    }
    return t11;
}


