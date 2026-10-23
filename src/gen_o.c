/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int ADXSTM_Close(int);
int ADXT_Stop(void);
int abs(int);
int _lsft(int, int);
int mwlSbSetFx(int, int, int);
int mwlSbSetPitch(int, int, int);
int mwlSbSetFilter(int, int, int);
int mwlSbSetGain(int, int);
int set_event2(int, int);
int vecMake(float, float, float);
int cpuAimPointSet(int, int, float, float);
int sprInitRectF(int, int, int, int, int, int);
int rankDrawTbl1(void);
int rankDrawTbl2(void);
int nlObjPutMVAsm(int, int, int, int);
int _setsbit(int, int, int);
int ADXT_GetOutVol(int);
int ADXSTMF_Create(int, int, int, int);
int ADXF_Ocbi(int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int _mult(int, int, int);
int gdFsOpenRange(void);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kmFreeTexture(int);
int kmyAllocateArea(int, int, int);
int kmyConvertAddress64to32(int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyiCheckNativeHandle(int);
int memmove(int, int, int);
int mwRnaErrCallFunc(int, ...);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlsndCheckPackFreeError(int);
int nlsndG2Read(int);
int nlsndPackFreeInit(int, int, int);
int nlsndStreamChgPan(int, int, int);
int nlsndStreamGetHdInfo(int, int);
int nlsndStreamSetHdInfo(int, int);
int nlsndStreamSetHdPan(int, int, int);
int set_event(int, int);
int strncpy(int, int, int);
int nlFreeTextureAll(void);
int mwRnaSetPitch(int a4, int a5, int a6);
int valStepToward(int a4, float f4, float f5);
int cpuDblIsMyBall(int a4);
int _mult64(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int decoGaugeSprInit(void);
int padIdleFrames(void);
void nlFastInvertMatrix(void);
int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8);
int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7);
float angleLerp(int a4, int a5, float f4);
int nlsndPackFreeBG(int a4);
int search_dir_by_startfat(int a4, int a5);
int kmyGetFrameBufferSize(int a4);
int mwlSbSetDrctLvl(int a4, int a5);
int nlSinfReduce(int a4, float f4);
int nlObjPutMvSub(int a4, int a5);
int mwRnaSetBitPerSmpl(int a4, int a5);
int kmyConnectInterrupt(int a4, int a5, int a6);
int kmySetPassInfo(int a4, int a5, int a6);
int strmBgmFadeOut(int a4, int a5);
int kmyZeroMemory(int a4, int a5);
int mwRnaSetOutPan(int a4, int a5, int a6);
int SJRBF_GetNumData(int a4, int a5);
int kmyAllocateFrameBuffer(int a4, int a5, int a6);
int mwSbSetExPrm(int a4, int a5, int a6, int a7);
int evVoiceFadeOut(int a4);
int search_fat_backward(int a4, int a5, int a6, int a7);
int kmyGetPassInfo(int a4, int a5, int a6);
int kmtex_ConfirmSmallVQ(int a4);
int kmtex_TextureSize_Twiddled(int a4);
float rndRangef(float f4);
int matchPropStart(void);
int rankDraw(void);
float nlRoundUp(float f4);
int nlsndStreamIsPlaying(int a4);
int nlInitInterruptDC(void);
void syChainInit(void);
int mwRnaSetDrctLvl(int a4, int a5);
int syG2DmaSetProtect(int a4, int a5);
int entryGetColorId(int a4);
int stageSegaQuadUVSet(int a4, float f4, float f5, float f6);
int evFadeValueTask(int a4);
int kmiConvertUVnum(int a4);
int mwSbSetPan(int a4, int a5, int a6);
int padVibRequest(int a4, int a5, int a6, int a7, int a8, int a9);
int adxf_CloseSjStm(int a4);
int SJMEM_GetNumData(int a4, int a5);
int kmyiSetScreenSize(int a4);
void vecFromYaw(int a4, int a5, int a6, int a7, int a8);
int cpuSglAimAddSides(int a4, int a5);
int hudFadeOutStart(int a4, int a5, int a6, int a7, int a8);
int exprPlayB(int a4, int a5, int a6);

int nlFreeTextureAll(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    int t15;

    t0 = *(int *)0x8C458608;
    t2 = 0x0;
    t3 = t0;
    for (;;) {
        t4 = *(int *)0x8C45860C;
        if ((int)t2 >= (int)t4) {
            break;
        }
        t5 = *(int *)((t3 + 0x2C));
        if (t5 != 0) {
            t6 = *(int *)((t3 + 0x28));
            if (t6 == 0) {
                kmFreeTexture(t3);
            }
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x3C);
    }
    t12 = *(int *)0x8C458608;
    t13 = t12;
    t14 = 0x0;
    for (;;) {
        t15 = *(int *)0x8C45860C;
        if ((int)t14 >= (int)t15) {
            break;
        }
        *(unsigned int *)((t13 + 0x28)) = 0xFFFFFFFF;
        t14 = (t14 + 0x1);
        *(unsigned int *)((t13 + 0x2C)) = 0x0;
        *(unsigned int *)((t13 + 0x38)) = 0xFFFFFFFF;
        t13 = (t13 + 0x3C);
    }
    return ((int (*)(int, int, int))(0x8C0EA774))(t13, 0xFFFFFFFF, t14);
}

int mwRnaSetPitch(int a4, int a5, int a6)
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
    int t11;
    int t12;
    int stk[9] = {0};

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0x8C20AC30);
        return t0;
    }
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 16)) = t1;
    t2 = *(int *)((t1 + 0x0));
    t3 = *(int *)(((int)stk + 24));
    t4 = *(int *)(((int)stk + 20));
    t5 = *(int *)((t2 + 0x44));
    t6 = ((int (*)(int, int, int, int))(t5))(t1, 0x1, t4, t3);
    t7 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 16)) = t7;
    t8 = *(int *)((t7 + 0x0));
    t9 = *(int *)((t8 + 0x48));
    t10 = ((int (*)(int, int, int, int))(t9))(t7, 0x1, ((int)stk + 8), (((int)stk + 8) + 0x4));
    t11 = *(int *)(((int)stk + 8));
    *(unsigned int *)((a4 + 0x74)) = t11;
    t12 = *(int *)(((int)stk + 12));
    *(unsigned int *)((a4 + 0x78)) = t12;
    return 0x78;
}

int valStepToward(int a4, float f4, float f5)
{
    float u5;
    float u0;
    float u7;

    u5 = 1000.0f;
    if ((int)a4 > 0) {
        u0 = (f4 - f5);
        if (!(0.0f > (f5 - f4))) {
            u0 = (f5 - f4);
        }
        u5 = (u0 / (float)a4);
    }
    u7 = (f4 - f5);
    if (!(0.0f > (f5 - f4))) {
        u7 = (f5 - f4);
    }
    if (u5 > u7) {
        return ((int (*)(int, float, float, float))(0x8C016D82))(a4, f5, f5, u5);
    }
    if ((f5 - f4) > 0.0f) {
        return ((int (*)(int, float, float, float, float))(0x8C016D7A))(a4, f4, f5, u5, (f5 - f4));
    }
    if (0.0f > (f5 - f4)) {
        return ((int (*)(int, float, float, float, float))(0x8C016D7A))(a4, f4, f5, u5, (f5 - f4));
    }
    return ((int (*)(int, float, float, float, float))(0x8C016D78))(a4, f4, f5, u5, (f5 - f4));
}

int cpuDblIsMyBall(int a4)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xB60));
    if ((t1 & 8) == 0) {
        u2 = *(float *)0x8C291F50;
        if (u2 > 0.0f) {
            return ((int (*)(int, int, int))(0x8C05A43A))(a4, ((t0 * 0x160) + 0x8C2FC69C), 0x8C291F24);
        }
        if (0.0f > u2) {
            return ((int (*)(int, int, int))(0x8C05A43A))(a4, ((t0 * 0x160) + 0x8C2FC69C), 0x8C291F24);
        }
        return ((int (*)(int, int, int))(0x8C05A43A))(a4, ((t0 * 0x160) + 0x8C2FC69C), 0x8C291F24);
    }
    return ((int (*)(int, int, int))(0x8C05A45E))(a4, ((t0 * 0x160) + 0x8C2FC69C), 0x8C291F24);
}

int _mult64(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t11;
    int t12;
    int t13;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (a6 + t0);
    t1 = *(int *)(((int)stk + 8));
    t2 = *(int *)(((int)stk + 4));
    _mult(t2, t1, (((int)stk + 4) + 0x8));
    t4 = *(signed char *)(((((int)stk + 4) + 0x8) + 0x0));
    if (((unsigned char)t4 & 128) != 0) {
        t5 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t5 + 0x1);
    } else {
        _lsft((((int)stk + 4) + 0x8), 0x10);
    }
    _setsbit((((int)stk + 4) + 0x8), 0x10, 0x42);
    t11 = *(signed char *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x8)) = (t11 & 0xE0);
    t12 = *(int *)(((int)stk + 4));
    t13 = memmove(t12, (((int)stk + 4) + 0x8), 0x9);
    return t13;
}

int adxt_start_sj(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t0;

    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((a4 + 0x3));
        if ((int)t1 >= (int)t2) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (a4 + 0x18));
        t3 = *(int *)((t0 + 0x0));
        t0 = t3;
        t4 = *(int *)((t0 + 0x0));
        t5 = *(int *)((t4 + 0x14));
        t6 = ((int (*)(int, int))(t5))(t0, a5);
        t1 = (t1 + 0x1);
    }
    t7 = *(int *)((a4 + 0x4));
    ADXSJD_SetInSj(t7, a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    t9 = *(int *)((a4 + 0x4));
    ADXSJD_Start();
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned char *)((a4 + 0x71)) = 0x0;
    return 0x71;
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    int t0;
    int t2;

    t0 = gdFsOpenRange();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0x8C20AA64, a4, a5);
        return 0x0;
    }
    t2 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    if (t2 != 0) {
        strncpy((t2 + 0x40), 0x8C20AA9C, 0x20);
    }
    return t2;
}

int decoGaugeSprInit(void)
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
    int stk[15] = {0};

    t0 = *(int *)0x8C110988;
    *(unsigned int *)((((int)stk + 12) + 0xC)) = t0;
    t1 = *(int *)0x8C110984;
    *(unsigned int *)((((int)stk + 12) + 0x8)) = t1;
    t2 = *(int *)0x8C110980;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = t2;
    t3 = *(int *)0x8C11097C;
    *(unsigned int *)((((int)stk + 12) + 0x0)) = t3;
    t4 = 0x0;
    t5 = 0x8C1851CC;
    t6 = 0x8C3422A8;
    for (;;) {
        t7 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t8 = sprInitRectF(t6, t7, ((int)stk + 12), 0x40, 0x40, 0x0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t6 + 0x34)) = 0x5;
        t6 = (t6 + 0x50);
        if ((unsigned int)t4 >= (unsigned int)0x2F) {
            break;
        }
    }
    return t8;
}

int padIdleFrames(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t24;
    int t27;
    int t0;
    int t22;
    int t18;
    int t15;
    int t12;

    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((0x8C29B898 + (t1 << 2)));
        t3 = *(int *)((t2 + 0x8));
        if (t3 == 0) {
            t4 = *(short *)((t2 + 0x1C));
            if (t4 == 0) {
                t5 = *(int *)0x8C29B898;
                t0 = t5;
                t6 = *(short *)((t0 + 0x1E));
                if (t6 == 0) {
                    t7 = *(short *)((t2 + 0x1A));
                    if (t7 == 0) {
                        t8 = *(short *)((t2 + 0x18));
                        t9 = 0x0;
                        if (t8 == 0) {
                        } else {
                            t1 = 0x4;
                            t9 = 0x1;
                        }
                        t12 = t9;
                    } else {
                        t1 = 0x4;
                        t12 = 0x1;
                    }
                    t15 = t12;
                } else {
                    t1 = 0x4;
                    t15 = 0x1;
                }
                t18 = t15;
            } else {
                t1 = 0x4;
                t18 = 0x1;
            }
            t22 = t18;
        } else {
            t1 = 0x4;
            t22 = 0x1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    if (t22 == 0) {
        t24 = *(int *)0x8C1D135C;
        *(unsigned int *)0x8C1D135C = (t24 + 0x1);
    } else {
        *(unsigned int *)0x8C1D135C = 0x0;
    }
    t27 = *(int *)0x8C1D135C;
    return t27;
}

void nlFastInvertMatrix(void)
{
    float u2;
    float u6;
    float u9;
    float u12;
    float u15;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    int t23;
    float u24;
    int t25;
    float u26;
    int t27;
    float u0[4];
    float u1[4];
    float u3[16];
    float u4[4];
    float u5[4];
    float u7[4];
    float u8[4];
    float u10[4];
    float u11[4];
    float u13[4];
    float u14[4];
    float u16[4];
    float u17[4];
    float u28[16];

    _builtin_st_ext((float (*)[4])u3);
    u0[0] = u3[12];
    u0[1] = u3[13];
    u0[2] = u3[14];
    u0[3] = u3[15];
    u1[0] = u3[0];
    u1[1] = u3[1];
    u1[2] = u3[2];
    u1[3] = u3[3];
    u2 = _builtin_fipr(u0, u1);
    u4[0] = u3[12];
    u4[1] = u3[13];
    u4[2] = u3[14];
    u4[3] = u3[15];
    u5[0] = u3[4];
    u5[1] = u3[5];
    u5[2] = u3[6];
    u5[3] = u3[7];
    u6 = _builtin_fipr(u4, u5);
    u7[0] = u3[12];
    u7[1] = u3[13];
    u7[2] = u3[14];
    u7[3] = u3[15];
    u8[0] = u3[8];
    u8[1] = u3[9];
    u8[2] = u3[10];
    u8[3] = u3[11];
    u9 = _builtin_fipr(u7, u8);
    u10[0] = u3[0];
    u10[1] = u3[1];
    u10[2] = u3[2];
    u10[3] = (u2 - u2);
    u11[0] = u3[0];
    u11[1] = u3[1];
    u11[2] = u3[2];
    u11[3] = (u2 - u2);
    u12 = _builtin_fipr(u10, u11);
    u13[0] = u3[4];
    u13[1] = u3[5];
    u13[2] = u3[6];
    u13[3] = (u6 - u6);
    u14[0] = u3[4];
    u14[1] = u3[5];
    u14[2] = u3[6];
    u14[3] = (u6 - u6);
    u15 = _builtin_fipr(u13, u14);
    u16[0] = u3[8];
    u16[1] = u3[9];
    u16[2] = u3[10];
    u16[3] = (u9 - u9);
    u17[0] = u3[8];
    u17[1] = u3[9];
    u17[2] = u3[10];
    u17[3] = (u9 - u9);
    u18 = _builtin_fipr(u16, u17);
    u19 = iaFsrra(u12);
    u20 = iaFsrra(u15);
    u21 = iaFsrra(u18);
    u22 = (u3[1] * u19);
    t23 = (*(int *)&u22);
    u24 = (u3[2] * u19);
    t25 = (*(int *)&u24);
    u26 = (u3[6] * u20);
    t27 = (*(int *)&u26);
    _builtin_st_ext((float (*)[4])u28);
    u28[0] = (u3[0] * u19);
    u28[1] = (u3[4] * u20);
    u28[2] = (u3[8] * u21);
    u28[3] = 0.0f;
    u28[4] = (*(float *)&t23);
    u28[5] = (u3[5] * u20);
    u28[6] = (u3[9] * u21);
    u28[7] = (u20 - u20);
    u28[8] = (*(float *)&t25);
    u28[9] = (*(float *)&t27);
    u28[10] = (u3[10] * u21);
    u28[11] = 0.0f;
    u28[12] = ((-u2) * u19);
    u28[13] = ((-u6) * u20);
    u28[14] = ((-u9) * u21);
    u28[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u28);
}

int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t3;
    int t7;
    int t8;

    t0 = *(int *)0x8C46D688;
    t1 = ((~(((~t0) + 0x1) & 0xFF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xFF);
    }
    *(unsigned int *)0x8C46D688 = t1;
    if (a5 == 0) {
        t3 = *(short *)(((a4 << 1) + 0x8C46D668));
        *(unsigned short *)(((a4 << 1) + 0x8C46D668)) = (t3 + 0x1);
    }
    *(unsigned char *)(((((t1 << 2) << 2) + 0x8C46C668) + 0x0)) = a4;
    *(unsigned char *)(((((t1 << 2) << 2) + 0x8C46C668) + 0x1)) = a5;
    t7 = *(short *)(((a4 << 1) + 0x8C46D668));
    *(unsigned short *)(((0x2 + (((t1 << 2) << 2) + 0x8C46C668)) + 0x0)) = t7;
    *(unsigned int *)(((((t1 << 2) << 2) + 0x8C46C668) + 0x4)) = a6;
    *(unsigned int *)(((((t1 << 2) << 2) + 0x8C46C668) + 0x8)) = a7;
    *(unsigned int *)(((((t1 << 2) << 2) + 0x8C46C668) + 0xC)) = a8;
    t8 = *(int *)0x8C46D688;
    *(unsigned int *)0x8C46D688 = (t8 + 0x1);
    return 0x8C46D668;
}

int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t18;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t13;

    t0 = SJMEM_Lock();
    t18 = 0x0;
    if (a5 != 0) {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0xC));
            t2 = a6;
            if ((int)t1 < (int)a6) {
                t2 = t1;
            }
            t13 = t2;
        } else {
            t4 = *(int *)((a4 + 0x1C));
            if (t4 != 0) {
                t5 = *(int *)((a4 + 0x1C));
                t6 = *(int *)((a4 + 0x20));
                t7 = ((int (*)(int, int))(t5))(t6, 0xFFFFFFFD);
            }
            t13 = 0x0;
        }
        t18 = t13;
    }
    *(unsigned int *)((a7 + 0x0)) = t18;
    SJMEM_Unlock(a4, t0);
    return (((t18 == a6)) ? 1 : 0);
}

float angleLerp(int a4, int a5, float f4)
{
    float u16;

    if (f4 == 0.0f) {
    } else {
        abs((a4 - a5));
        
        u16 = f4;
    }
    return u16;
}

int nlsndPackFreeBG(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t13;
    int stk[7] = {0};

    t0 = nlsndCheckPackFreeError(a4);
    if (t0 != 0) {
        t13 = t0;
    } else {
        t1 = *(int *)0x8C454CE8;
        t2 = *(int *)(((((a4 << 1) + a4) << 2) + 0x8C454DDC));
        t3 = nlsndPackFreeInit(a4, t2, ((int)stk + 4));
        *(unsigned int *)(((t1 + 0x18) + 0x0)) = t3;
        t4 = *(int *)0x8C454CE8;
        *(unsigned int *)((t4 + 0x0)) = 0x101;
        t5 = *(int *)0x8C454CE8;
        *(unsigned int *)((t5 + 0x8)) = (-t2);
        t6 = *(int *)(((int)stk + 4));
        t7 = *(int *)0x8C454CE8;
        *(unsigned int *)((t7 + 0x10)) = t6;
    }
    return ((int (*)(int))(0x8C0F59DA))(t13);
}

int search_dir_by_startfat(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x28));
    t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t2 = *(int *)((t1 + 0x30));
    return ((int (*)(int, int))(0x8C1EDB2C))(a4, a5);
}

int kmyGetFrameBufferSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int stk[11] = {0};

    t0 = *(int *)0x8C20ADE8;
    t1 = *(int *)0x8C20ADE4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t1;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t0;
    t2 = *(int *)0x8C20ADF0;
    t3 = *(int *)0x8C20ADEC;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t3;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t2;
    t4 = *(int *)0x8C20ADF8;
    t5 = *(int *)0x8C20ADF4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = t5;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = t4;
    t6 = *(int *)(((((int)stk + 4) + 0xC) + (a4 << 2)));
    *(unsigned int *)(((int)stk + 12)) = t6;
    kmyGetDisplayParametersInfo(0x7, 0x0, (((int)stk + 4) + 0x4));
    kmyGetDisplayParametersInfo(0x8, 0x0, ((int)stk + 4));
    t9 = *(int *)(((int)stk + 12));
    t10 = *(int *)(((int)stk + 8));
    t11 = *(int *)(((int)stk + 4));
    return ((t9 * t10) * t11);
}

int mwlSbSetDrctLvl(int a4, int a5)
{
    int t14;
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    t14 = 0x0;
    if (a5 == 0) {
    } else {
        t0 = *(int *)(((int)stk + 12));
        t1 = nlsndStreamGetHdInfo(t0, ((int)stk + 8));
        if (t1 == 0) {
            mwRnaErrCallFunc(0x8C20B314);
        }
        t5 = *(int *)((a4 + 0x1C));
        t6 = *(int *)(((int)stk + 8));
        t7 = *(int *)((t5 + 0x4));
        memmove(t7, t1, t6);
        t9 = *(int *)((a4 + 0x1C));
        t10 = *(short *)((a4 + 0x6));
        t11 = *(int *)((t9 + 0x4));
        nlsndStreamSetHdInfo(t10, t11);
        t13 = *(int *)(((int)stk + 8));
        *(unsigned int *)((a4 + 0x64)) = t13;
        t14 = 0x1;
    }
    *(unsigned char *)((a4 + 0x5)) = t14;
    return t14;
}

int nlSinfReduce(int a4, float f4)
{
    float u0;
    float u1;
    float u5;
    float u6;
    float u7;
    int t8;
    float u9;
    int t10;
    float u11;
    float u3;

    if (!(0.0f > f4)) {
        u0 = *(float *)0x8C0ED65C;
        u3 = u0;
    } else {
        u1 = *(float *)0x8C0ED660;
        u3 = u1;
    }
    u5 = *(float *)0x8C0ED664;
    *(unsigned int *)((a4 + 0x0)) = (int)(u3 + (f4 / u5));
    u6 = *(float *)0x8C0ED668;
    u7 = *(float *)0x8C0ED66C;
    t8 = 0xB;
    u9 = 0.0f;
    for (;;) {
        t10 = t8;
        t8 = (t8 - 2);
        u11 = ((float)t10 - u9);
        u9 = (((f4 - ((float)(int)(u3 + (f4 / u5)) * u6)) + u7 * (float)(int)(u3 + (f4 / u5))) * ((f4 - ((float)(int)(u3 + (f4 / u5)) * u6)) + u7 * (float)(int)(u3 + (f4 / u5))));
        u9 = (u9 / u11);
        if ((int)t8 < (int)0x3) {
            break;
        }
    }
    return ((int (*)(int, int, float, float, float))(0x8C0ED578))(t8, 0x3, ((f4 - ((float)(int)(u3 + (f4 / u5)) * u6)) + u7 * (float)(int)(u3 + (f4 / u5))), u9, (((f4 - ((float)(int)(u3 + (f4 / u5)) * u6)) + u7 * (float)(int)(u3 + (f4 / u5))) * ((f4 - ((float)(int)(u3 + (f4 / u5)) * u6)) + u7 * (float)(int)(u3 + (f4 / u5)))));
}

int nlObjPutMvSub(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x18));
    if ((int)t0 >= 0) {
        if (t1 != 0) {
            t2 = *(int *)0x8C42445C;
            t3 = *(int *)((t2 + 0x4));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
            t4 = *(int *)0x8C458E04;
            *(unsigned int *)0x8C458D98 = (((t1 | t4) & 0x30000) | 0x818C0000);
            *(unsigned int *)0x8C458D9C = 0x0;
            t5 = *(int *)0x8C450BFC;
            *(unsigned int *)0x8C458DA0 = t5;
            t6 = *(int *)0x8C450C00;
            nlObjPutMVAsm(a4, 0x8C458D98, a5, t6);
        }
    }
    return nlPopMatrix(0x1);
}

int mwRnaSetBitPerSmpl(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0x8C20AC30);
        t10 = t0;
    } else {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0x8));
        t3 = (t1 * t2);
        if ((int)(t1 * t2) < 0) {
            t3 = ((t1 * t2) + 0x7);
        }
        t5 = (int)((int)(((t3 >> 1) >> 1) >> 1) / (int)a5);
        *(unsigned int *)((a4 + 0x28)) = ((t5 << 2) << 1);
        t6 = *(int *)((a4 + 0x38));
        t7 = *(int *)((t6 + 0x0));
        t8 = *(int *)((t7 + 0x2C));
        t9 = ((int (*)(int, int))(t8))(t6, a5);
        *(unsigned int *)((a4 + 0x8)) = a5;
        t10 = t9;
    }
    return t10;
}

int kmyConnectInterrupt(int a4, int a5, int a6)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((0x8C470AD0 + ((a4 << 2) << 2)) + 0x0)) = a5;
    *(unsigned int *)(((0x8C470AD0 + ((a4 << 2) << 2)) + 0xC)) = a6;
    *(unsigned int *)(((0x8C470AD0 + ((a4 << 2) << 2)) + 0x4)) = 0x0;
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C470AD0) + 0x8)) = a4;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int kmySetPassInfo(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t5;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0xC));
        if ((unsigned int)a5 < (unsigned int)t1) {
            t2 = *(int *)((a4 + 0xC));
            t5 = (a6 & 0xEFFFFFFF);
            if ((a5 + 0x1) != t2) {
                t5 = (a6 | 0x10000000);
            }
            *(unsigned int *)(((((a5 << 2) << 1) + (a4 + 0x48)) + 0x0)) = t5;
            return 0x0;
        }
        return 0xEEEE;
    }
    return 0xEEEE;
}

int strmBgmFadeOut(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C38BA94;
    if (a4 != 0) {
        t1 = ADXT_GetOutVol(t0);
        *(unsigned int *)0x8C38BA68 = t1;
        *(unsigned int *)0x8C40C220 = 0x2;
        *(unsigned int *)0x8C40C22C = a5;
        t2 = *(int *)0x8C38BA68;
        *(float *)0x8C40C224 = ((float)(t2 + 0xDC) / ((float)a4 * 60.0f));
        return 0x4;
    }
    return ADXT_Stop();
}

int kmyZeroMemory(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

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
    return ((int (*)(int, int))(0x8C1E2988))(a4, (a5 - 0x1));
}

int mwRnaSetOutPan(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0x8C20AC30);
        t10 = t0;
    } else {
        t3 = 0xFFFFFFF1;
        if ((int)a6 >= (int)0xFFFFFFF1) {
            t1 = a6;
            if ((int)a6 > (int)0xF) {
                t1 = 0xF;
            }
            t3 = t1;
        }
        t6 = *(int *)((a4 + 0x38));
        t7 = *(int *)((t6 + 0x0));
        t8 = *(int *)((t7 + 0x3C));
        t9 = ((int (*)(int, int, int))(t8))(t6, a5, t3);
        *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t3;
        t10 = t9;
    }
    return t10;
}

int SJRBF_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a5 == 1) {
        t0 = *(int *)((a4 + 0xC));
        return t0;
    }
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x10));
        return t1;
    }
    t2 = *(int *)((a4 + 0x28));
    if (t2 != 0) {
        t3 = *(int *)((a4 + 0x28));
        t4 = *(int *)((a4 + 0x2C));
        t5 = ((int (*)(int, int))(t3))(t4, 0xFFFFFFFD);
    }
    return 0x0;
}

int kmyAllocateFrameBuffer(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = (0xFFFFFFE0 & (a4 + 0x20));
    if ((0x1F & a4) == 0) {
        t0 = a4;
    }
    *(unsigned int *)(((int)stk + 16)) = t0;
    t3 = kmyAllocateArea(0x2, (t0 << 1), ((int)stk + 4));
    if (t3 == 0) {
        t4 = *(int *)(((int)stk + 12));
        t5 = *(int *)(((int)stk + 4));
        t6 = kmyConvertAddress64to32(t5);
        *(unsigned int *)((t4 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 4));
        t8 = *(int *)(((int)stk + 8));
        t9 = kmyConvertAddress64to32((t7 + 0x4));
        *(unsigned int *)((t8 + 0x0)) = t9;
    }
    return t3;
}

int mwSbSetExPrm(int a4, int a5, int a6, int a7)
{
    if (a5 == 0) {
        return mwlSbSetFx(a4, a6, a7);
    }
    if (a5 == 1) {
        return mwlSbSetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        return mwlSbSetGain(a4, a6);
    }
    if (a5 == 3) {
        return mwlSbSetFilter(a4, a6, a7);
    }
    if (a5 == 4) {
        return mwlSbSetDrctLvl(a4, a6);
    }
    return a5;
}

int evVoiceFadeOut(int a4)
{
    int t0;
    float u1;
    int t2;
    int t3;
    float u4;
    float u5;

    t0 = set_event(0x20, 0x8C0DA7D0);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x14)) = (int)((float)a4 / u1);
    t2 = *(int *)0x8C38BA98;
    t3 = ADXT_GetOutVol(t2);
    *(float *)((t0 + 0x18)) = (float)t3;
    u4 = *(float *)0x8C0DA9A0;
    u5 = *(float *)((t0 + 0x18));
    *(float *)((t0 + 0x1C)) = ((u5 + u4) / (float)a4);
    return 0x1C;
}

int search_fat_backward(int a4, int a5, int a6, int a7)
{
    int t6;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[7] = {0};

    *(unsigned short *)(((int)stk + 4)) = a5;
    t6 = 0xFFFFFFFF;
    if ((int)a7 >= (int)a6) {
        t0 = a7;
        for (;;) {
            t1 = *(int *)0x8C464594;
            t2 = *(int *)((t1 + 0xC));
            t3 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x24));
            t4 = ((int (*)(int, int, int, int))(t2))(t3, (t0 << 1), a6, a7);
            t5 = *(short *)(((int)stk + 4));
            if ((unsigned short)t4 == (unsigned short)t5) {
                break;
            }
            t0 = (t0 - 1);
            if ((int)t0 < (int)a6) {
                return 0xFFFFFFFF;
            }
        }
        t6 = t0;
    }
    return t6;
}

int kmyGetPassInfo(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0xC));
        if ((unsigned int)a5 < (unsigned int)t1) {
            t2 = *(int *)(((((a5 << 2) << 1) + (a4 + 0x48)) + 0x0));
            *(unsigned int *)((a6 + 0x0)) = t2;
            t3 = *(int *)((a6 + 0x0));
            *(unsigned int *)((a6 + 0x0)) = (t3 & 0xEFFFFFFF);
            return 0x0;
        }
        return 0xEEEE;
    }
    return 0xEEEE;
}

int kmtex_ConfirmSmallVQ(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0xC));
    if (t0 != 8) {
        if (t0 != 16) {
            if (t0 != 32) {
                if (t0 != 64) {
                    return ((int (*)(int, int))(0x8C1FC2A6))(a4, 0x80000000);
                }
                return ((int (*)(int, int))(0x8C1FC298))(a4, 0x80000000);
            }
            return ((int (*)(int, int))(0x8C1FC28E))(a4, 0x80000000);
        }
        return ((int (*)(int, int))(0x8C1FC280))(a4, 0x80000000);
    }
    t1 = *(int *)((a4 + 0x18));
    if ((0x80000000 & t1) != 0) {
        return 0x2;
    }
    return 0x1;
}

int kmtex_TextureSize_Twiddled(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x18));
    if ((t2 & 0x80000000) != 0) {
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            return ((int (*)(int, int, int, int))(0x8C1FC342))(a4, ((unsigned int)t0 >> 1), ((unsigned int)t1 >> 1), (t1 * t0));
        }
        return ((int (*)(int, int, int, int))(0x8C1FC342))(a4, ((unsigned int)t0 >> 1), ((unsigned int)t1 >> 1), (t1 * t0));
    }
    return ((int (*)(int, int, int, int))(0x8C1FC364))(a4, t0, t1, (t1 * t0));
}

float rndRangef(float f4)
{
    float u0;
    int t1;
    float u4;
    float u7;
    int t8;
    float u11;
    float u18;

    u0 = *(float *)0x8C029AE4;
    t1 = *(int *)0x8C294650;
    if (f4 == 0.0f) {
        u4 = (float)t1;
        if ((int)t1 < 0) {
            u4 = ((float)t1 + 4.2949673e+09f);
        }
        u7 = *(float *)0x8C294654;
        u18 = (u4 * u7);
    } else {
        *(unsigned int *)0x8C294650 = ((t1 * 0x5D588B65) + 0x1);
        *(float *)0x8C294654 = f4;
        t8 = *(int *)0x8C294650;
        u11 = (float)t8;
        if ((int)t8 < 0) {
            u11 = ((float)t8 + 4.2949673e+09f);
        }
        u18 = (u11 * f4);
    }
    return (u18 / u0);
}

int matchPropStart(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0xC8ED380 = 0x2008246D;
    t0 = set_event(0x38, 0x8C08873A);
    *(unsigned int *)((t0 + 0x28)) = 0x0;
    *(float *)((t0 + 0x18)) = 36.0f;
    *(float *)((t0 + 0x1C)) = 90.0f;
    *(float *)((t0 + 0x20)) = 153.0f;
    *(unsigned int *)((t0 + 0x24)) = 0x0;
    *(float *)((t0 + 0x14)) = 1.0f;
    *(unsigned short *)((t0 + 0x34)) = 0x0;
    t1 = nlRand();
    t2 = (int)((int)t1 % (int)0x14);
    *(unsigned int *)((t0 + 0x30)) = t2;
    return t2;
}

int rankDraw(void)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t5;
    int t7;
    int t8;

    u0 = *(float *)0x8C0E2028;
    u1 = *(float *)0x8C0E202C;
    u2 = *(float *)0x8C0E2030;
    t3 = *(int *)0x8C287ADC;
    if (t3 == 2) {
        vecMake(u2, u1, u0);
        t5 = rankDrawTbl1();
        t8 = t5;
    } else {
        vecMake(u2, u1, u0);
        t7 = rankDrawTbl2();
        t8 = t7;
    }
    return t8;
}

float nlRoundUp(float f4)
{
    float u0;
    int t3;

    u0 = *(float *)0x8C0ED430;
    if (u0 > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                t3 = ((int)(f4 < 0.0f ? -f4 : f4) + 0x1);
            } else {
                t3 = (0xFFFFFFFF - (int)(f4 < 0.0f ? -f4 : f4));
            }
            return (float)t3;
        }
        return f4;
    }
    return f4;
}

int nlsndStreamIsPlaying(int a4)
{
    int t0;
    int t12;
    int t1;
    int t8;
    int t2;
    int t3;
    int t6;
    int t4;

    t0 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x0));
    t12 = 0x0;
    if (t0 == 1) {
        t1 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        t8 = 0x1;
        if (t1 == 0) {
            t2 = *(int *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x18));
            t3 = nlsndG2Read(t2);
            t6 = 0x2;
            if ((t3 & 64) != 0) {
            } else {
                t4 = 0x0;
                if ((t3 & 128) != 0) {
                    t4 = 0x1;
                }
                t6 = t4;
            }
            t8 = t6;
        }
        t12 = t8;
    }
    return t12;
}

int nlInitInterruptDC(void)
{
    return ((int (*)(int))(0x8C0F8100))(0x0);
}

void syChainInit(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[2] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = 0x8C460818;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0x8C461818) {
            break;
        }
    }
    t2 = 0x8C461818;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C461B18) {
            break;
        }
    }
    t3 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t3 & 0xF) << 2) << 2) >> 4));
}

int mwRnaSetDrctLvl(int a4, int a5)
{
    int t0;
    int t3;
    int t1;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0x8C20AC30);
        t9 = t0;
    } else {
        t3 = 0xFFFFFFD3;
        if ((int)a5 < (int)0xFFFFFFD3) {
        } else {
            t1 = a5;
            if ((int)a5 > 0) {
                t1 = 0x0;
            }
            t3 = t1;
        }
        t5 = *(int *)((a4 + 0x38));
        t6 = *(int *)((t5 + 0x0));
        t7 = *(int *)((t6 + 0x44));
        t8 = ((int (*)(int, int, int, int))(t7))(t5, 0x2, t3, 0x0);
        *(unsigned int *)((a4 + 0x84)) = t3;
        t9 = 0x84;
    }
    return t9;
}

int syG2DmaSetProtect(int a4, int a5)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0x8C20CA20 = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int entryGetColorId(int a4)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t4;
    int t3;
    int t6;
    int t11;
    int t15;
    int t13;
    int t7;

    t0 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x8));
    t1 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x1C));
    if (t0 != 0) {
        t2 = *(int *)0x8C287ADC;
        if (t2 == 2) {
            return 0x4;
        }
        if (t0 != 0) {
            t9 = (t1 + 0x5);
            if (t1 != -1) {
            } else {
                if (t0 != 0) {
                    t4 = 0x4;
                    if (t1 == -1) {
                    } else {
                        t3 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
                        t4 = t3;
                    }
                    t7 = t4;
                } else {
                    t6 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
                    t7 = t6;
                }
                t9 = t7;
            }
            t13 = t9;
        } else {
            t11 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
            t13 = t11;
        }
        return t13;
    }
    t15 = *(int *)((((a4 * 0x38) + 0x8C343264) + 0x4));
    return t15;
}

int stageSegaQuadUVSet(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(float *)(((a4 + 0x88) + 0x0)) = (f4 + (0.600000024f * f6));
    *(float *)((((a4 + 0x88) + 0x4) + 0x0)) = f5;
    t0 = *(int *)((((a4 + 0x88) + 0x4) + 0x0));
    *(unsigned int *)((((a4 + 0x88) + 0x4) + 0x0)) = (t0 | 0x1);
    *(float *)(((((a4 + 0x88) + 0x4) + 0x1C) + 0x0)) = f4;
    *(float *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0)) = f5;
    t1 = *(int *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t1 | 0x1);
    *(float *)(((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x0)) = (f4 + (0.600000024f * f6));
    *(float *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (f5 + (0.600000024f * f6));
    t2 = *(int *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t2 | 0x1);
    *(float *)(((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x0)) = f4;
    *(float *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (f5 + (0.600000024f * f6));
    t3 = *(int *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0));
    *(unsigned int *)((((((((((a4 + 0x88) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x1C) + 0x4) + 0x0)) = (t3 | 0x1);
    return 0x8C0BA360;
}

int evFadeValueTask(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x14));
    if ((int)t0 > (int)0x28) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)((a4 + 0x18));
        return ((int (*)(int, int))(0x8C0DA790))(a4, 0x8C40C2EC);
    }
    return ((int (*)(int, int))(0x8C0DA784))(a4, 0x8C40C2EC);
}

int kmiConvertUVnum(int a4)
{
    if (a4 == 8) {
        return ((int (*)(int))(0x8C0EA608))(0x0);
    }
    if (a4 == 16) {
        return ((int (*)(int))(0x8C0EA608))(0x1);
    }
    if (a4 == 32) {
        return ((int (*)(int))(0x8C0EA608))(0x2);
    }
    return ((int (*)(int))(0x8C0EA5C0))(a4);
}

int mwSbSetPan(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;

    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = a6;
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (0x10 | (-a6));
    }
    t3 = *(int *)((a4 + 0x18));
    if (t3 == 0) {
        t4 = *(int *)((a4 + 0x1C));
        t5 = *(int *)((t4 + 0x4));
        return nlsndStreamSetHdPan(t5, a5, t1);
    }
    t6 = *(short *)((a4 + 0x6));
    return nlsndStreamChgPan(t6, a5, t1);
}

int padVibRequest(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t21;
    int t12;

    t0 = *(int *)0x8C29BBB8;
    if (t0 != 0) {
        t1 = *(int *)0x8C29BBBC;
        if (t1 != 0) {
            t2 = *(signed char *)(((((unsigned char)a4 << 2) << 1) + 0x8C2FBBCB));
            if ((unsigned int)t2 <= (unsigned int)((signed char)(a8 >> 0))) {
                t3 = a6;
                if ((int)(unsigned char)a6 < (int)0xF) {
                    t3 = 0xF;
                }
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x0)) = a5;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x1)) = t3;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x2)) = a7;
                *(unsigned char *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x3)) = ((signed char)(a8 >> 0));
                *(unsigned int *)((((((unsigned char)a4 << 2) << 1) + 0x8C2FBBC8) + 0x4)) = a9;
            }
            t12 = ((signed char)(a8 >> 0));
        }
        t21 = t12;
    }
    return t21;
}

int adxf_CloseSjStm(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t28;
    int t9;
    int t23;
    int t10;
    int t11;
    int t12;
    int t19;
    int t20;
    int t21;
    int t22;
    int t3;

    t0 = *(int *)((a4 + 0x4));
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0x4));
        t2 = ADXSTM_Close(t1);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t3 = t2;
    }
    t8 = *(int *)((a4 + 0x8));
    t28 = t3;
    if (t8 != 0) {
        t9 = *(signed char *)((a4 + 0x2));
        t23 = t9;
        if (t9 == 0) {
            t10 = *(int *)0x8C46C664;
            if (t10 == 1) {
                t11 = *(int *)((a4 + 0x2C));
                t12 = *(int *)((a4 + 0x28));
                ADXF_Ocbi(t12, t11);
            }
            t19 = *(int *)((a4 + 0x8));
            t20 = *(int *)((t19 + 0x0));
            t21 = *(int *)((t20 + 0xC));
            t22 = ((int (*)(int))(t21))(t19);
            *(unsigned int *)((a4 + 0x8)) = 0x0;
            t23 = t22;
        }
        t28 = t23;
    }
    return t28;
}

int SJMEM_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a5 == 1) {
        t0 = *(int *)((a4 + 0xC));
        return t0;
    }
    if (a5 != 0) {
        t1 = *(int *)((a4 + 0x1C));
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x1C));
            t3 = *(int *)((a4 + 0x20));
            t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
        }
    }
    return 0x0;
}

int kmyiSetScreenSize(int a4)
{
    if ((0x20 & a4) != 0) {
        if ((0x42 & a4) == 66) {
            *(unsigned int *)0x8C45EEA0 = 0x200;
            return ((int (*)(int, int))(0x8C1F83F4))(a4, (0x42 & a4));
        }
        *(unsigned int *)0x8C45EEA0 = 0x1E0;
        return ((int (*)(int, int))(0x8C1F83F4))(a4, (0x42 & a4));
    }
    return ((int (*)(int, int))(0x8C1F83E0))(a4, (0x42 & a4));
}

void vecFromYaw(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t6;
    int t7;
    int t8;
    int stk[8] = {0};

    *(unsigned short *)(((int)stk + 8)) = a4;
    nlPushUnitMatrix();
    t1 = *(short *)(((int)stk + 8));
    nlRotateAY((unsigned short)t1);
    vecMake(0.0f, 0.0f, 1.0f);
    nlCalcPoint((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    t6 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t6;
    t7 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t7;
    t8 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t8;
}

int cpuSglAimAddSides(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u4;
    float u5;

    u0 = *(float *)0x8C04C3B0;
    u1 = *(float *)((a4 + 0xB00));
    u2 = *(float *)0x8C287B40;
    cpuAimPointSet(a5, 0x3, u2, (u1 * u0));
    u4 = *(float *)((a4 + 0xB00));
    u5 = *(float *)0x8C287B40;
    cpuAimPointSet((a5 + 0x1), 0x3, (-u5), (u4 * u0));
    return ((a5 + 0x1) + 0x1);
}

int hudFadeOutStart(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = set_event2(0x40, 0x8C087EA4);
    *(unsigned int *)((t0 + 0x3C)) = a4;
    *(unsigned int *)((t0 + 0x28)) = a5;
    *(unsigned int *)((t0 + 0x2C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a7;
    *(unsigned int *)((t0 + 0x18)) = 0x0;
    *(unsigned int *)((t0 + 0x1C)) = a8;
    *(float *)((t0 + 0x20)) = 0.0f;
    *(float *)((t0 + 0x24)) = 0.300000012f;
    *(unsigned short *)((t0 + 0x30)) = 0x0;
    *(unsigned int *)((t0 + 0x34)) = 0x0;
    return 0x30;
}

int exprPlayB(int a4, int a5, int a6)
{
    int t0;
    int t1;

    *(unsigned int *)((((((((a5 << 1) + a5) + a6) + 0x41) * 0x270) + 0x8C34B4F4) + 0x268)) = 0x0;
    *(unsigned int *)((((((((a5 << 1) + a5) + a6) + 0x41) * 0x270) + 0x8C34B4F4) + 0x26C)) = 0x0;
    t0 = set_event(0x20, 0x8C0890DC);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    t1 = *(int *)((a4 + 0xC58));
    *(unsigned int *)((t0 + 0x1C)) = t1;
    *(unsigned int *)((t0 + 0x18)) = ((((a5 << 1) + a5) + a6) + 0x41);
    return 0xC58;
}
