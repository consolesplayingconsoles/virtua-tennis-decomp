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
float valStepToward(int a4, float f4, float f5);
int cpuDblIsMyBall(int a4);
int _mult64(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int decoGaugeSprInit(void);
int padIdleFrames(void);
void nlFastInvertMatrix(void);
int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8);
int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7);
int angleLerp(int a4, int a5, float f4);
int nlsndPackFreeBG(int a4);
int search_dir_by_startfat(int a4, int a5);
int kmyGetFrameBufferSize(int a4);
int mwlSbSetDrctLvl(int a4, int a5);
float nlSinfReduce(int a4, float f4);
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


float nlSinfReduce(int a4, float f4)
{
    float u3;
    float x;
    float r;
    float u;
    int q;
    int k;
    int t10;

    if (!(0.0f > f4)) {
        u3 = *(float *)0x8C0ED65C;
    } else {
        u3 = *(float *)0x8C0ED660;
    }
    q = (int)(u3 + (f4 / *(float *)0x8C0ED664));
    *(unsigned int *)((a4 + 0x0)) = q;
    x = (f4 - ((float)q * *(float *)0x8C0ED668));
    x = x + *(float *)0x8C0ED66C * (float)q;
    r = (x * x);
    u = 0.0f;
    k = 0xB;
    for (;;) {
        t10 = k;
        k = (k - 2);
        u = (r / ((float)t10 - u));
        if ((int)k < (int)0x3) {
            break;
        }
    }
    return (x / (1.0f - u));
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


