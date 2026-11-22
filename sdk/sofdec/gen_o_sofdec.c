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


int adxf_SetCmdHstry(int fileSlot, int command, int argument0, int argument1, int argument2)
{
    int writeIndex;
    int wrappedIndex;
    int previousSequence;
    int sequenceNumber;
    int indexBeforeAdvance;

    writeIndex = *(int *)0x8C46D688;
    wrappedIndex = ((~(((~writeIndex) + 0x1) & 0xFF)) + 0x1);
    if ((int)writeIndex >= 0) {
        wrappedIndex = (writeIndex & 0xFF);
    }
    *(unsigned int *)0x8C46D688 = wrappedIndex;
    if (command == 0) {
        previousSequence = *(short *)(((fileSlot << 1) + 0x8C46D668));
        *(unsigned short *)(((fileSlot << 1) + 0x8C46D668)) = (previousSequence + 0x1);
    }
    *(unsigned char *)(((((wrappedIndex << 2) << 2) + 0x8C46C668) + 0x0)) = fileSlot;
    *(unsigned char *)(((((wrappedIndex << 2) << 2) + 0x8C46C668) + 0x1)) = command;
    sequenceNumber = *(short *)(((fileSlot << 1) + 0x8C46D668));
    *(unsigned short *)(((0x2 + (((wrappedIndex << 2) << 2) + 0x8C46C668)) + 0x0)) = sequenceNumber;
    *(unsigned int *)(((((wrappedIndex << 2) << 2) + 0x8C46C668) + 0x4)) = argument0;
    *(unsigned int *)(((((wrappedIndex << 2) << 2) + 0x8C46C668) + 0x8)) = argument1;
    *(unsigned int *)(((((wrappedIndex << 2) << 2) + 0x8C46C668) + 0xC)) = argument2;
    indexBeforeAdvance = *(int *)0x8C46D688;
    *(unsigned int *)0x8C46D688 = (indexBeforeAdvance + 0x1);
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

int SJRBF_GetNumData(int ringAddress, int queueId)
{
    int filledBytes;
    int freeBytes;
    int errorCallbackAddress;
    int errorCallback;
    int errorCallbackArgument;
    int callbackResult;

    if (queueId == 1) {
        filledBytes = *(int *)((ringAddress + 0xC));
        return filledBytes;
    }
    if (queueId == 0) {
        freeBytes = *(int *)((ringAddress + 0x10));
        return freeBytes;
    }
    errorCallbackAddress = *(int *)((ringAddress + 0x28));
    if (errorCallbackAddress != 0) {
        errorCallback = *(int *)((ringAddress + 0x28));
        errorCallbackArgument = *(int *)((ringAddress + 0x2C));
        callbackResult = ((int (*)(int, int))(errorCallback))(errorCallbackArgument, 0xFFFFFFFD);
    }
    return 0x0;
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


