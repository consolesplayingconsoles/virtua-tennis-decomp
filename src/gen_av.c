/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXRNA_GetNumData(int);
int ADXRNA_GetNumRoom(void);
int ADXRNA_SetPlaySw(int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetStat(int);
int ADXT_GetNumChan(int);
int resetBackColorZ(int, int, int, Stk16, float);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int VQDeQueueEntry(int, int);
float _app_coss(float);
float _app_sins(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
float _in_fmods(int, float, float);
int angStepToward(int, int, int);
int ballBoyPoseIdle(int);
int ballBoyPropPut(int);
int camProject(int, int, Stk3);
int camWorldToView(int, ...);
int colliObjEntry(int);
int cpuSglAimAddLv21(int, int);
int cpuSglAimTableCall(int, int);
int fileLoadCloseSlot(int);
int kdSetBlockWriteEx(int, int, int, int, int, int, int, int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmRenderTexture(int, int);
int kmiFLWCTRLCheckTimeOut(int, int, int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmiWriteRegister(int, int);
int kmyAllocateFrameBuffer(int, int, int);
int kmyFreeArea(int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyGetFrameBufferSize(int);
int kmyReleaseFrameBufferHandle(int);
int kmyRequestCallback(int);
int kmytex_VQFreeEntry(int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTexOfs(int, int, int);
int nlDispStripTrnsl(int, int);
float nlInnerProduct(int, int);
int nlLightDir(int, float, float, float);
int nlLoadMatrix33on44(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nl_action_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int pdTmrIsReady(int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
int primVertexSet(int, int, int, int, int, Stk3);
int set_event(int, int);
int staffMorphBlend(int, int, int, float);
float valStepToward(int, float, float);
float vecLength(Stk4);
int vecMake(int, int, int, int, int, float, float, float);
float playerCalcMotionSpeeds(int a4, int a5, int a6, int a7);
int kmiSetFBSurfaceDesc(int a4);
int screenPlanePut(void);
int cpuPointBehind(int a4, int a5, int a6, int a7);
int primLineH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int fadeScreenDraw(int a4, int a5, int a6, int a7, float f4, float f5);
void nlRenderTextureEnd(void);
int kmiAllocateFB(int a4);
int entryDrawStripes(float f4);
void SJUNI_UngetChunk(int a4, int a5, int a6);
int emotFaceVtxGet(int a4, int a5, int a6);
int playerSetReceiveFlag(int a4, int a5);
int cpuSglAimLv21(int a4, int a5);
int fileLoadStartSlot(int a4, int a5, int a6, int a7);
int gdFsReqRdPio(int a4, int a5, int a6);
int miniPointPopSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int kmySetHSyncInterruptLine(int a4);
int VQFBfree(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int lightExec(int a4, int a5, int a6, int a7);
float bodyRaySphere(Stk10 s, float f4, float f5);
void ballBoyDrawIdle(int a4, float f4);
int primRectIncGradY(int a4, int a5, int a6, int a7, Stk4 p);
int pdTmrSetTime(int a4, int a5, int a6, int a7);
int adxt_stat_prep(int a4);
int SJRBF_GetChunk(int a4, int a5, int a6, int a7);
int kmySetDisplayFrameBuffer(int a4, int a5);
int selCursorReset(int a4, int a5);
int primRectDirY(int a4, int a5, int a6, int a7, Stk4 p);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);
float _in_coss(float f4);
int kmyGetFrameBufferHandle(int a4);
int kmiFLWCTRLVsyncCallBackFunc(int a4, int a5, int a6, int a7);


int screenPlanePut(void)
{
    float u2;
    float u3;
    float u6;
    float u13;
    float u14;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    u2 = *(float *)0x8C01AAC8;
    u3 = *(float *)0x8C01AACC;
    nlPerspective(0x38E, (*(float *)0x8C01AAD0), u2, u3);
    u6 = *(float *)0x8C01AAD8;
    *(float *)0x8C287A10 = (u6 / (nlTanf((*(float *)0x8C01AAE0))));
    nlMatrixMode(0x1);
    nlPushUnitMatrix();
    nlTranslate(0.0f, 0.0f, (*(float *)0x8C01AAEC));
    u13 = *(float *)0x8C287A10;
    u14 = *(float *)0x8C01AAF4;
    nlScale((u14 / u13), (u14 / u13), 1.0f);
    nlObjPut(0xC5BEA50);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(((int)((((*(float *)0x8C287A04) * (*(float *)0x8C01AB08)) / (*(float *)0x8C01AB10)) + (*(float *)0x8C01AB14)) & 0xFFFF), (*(float *)0x8C01AAD0), u2, u3);
    *(float *)0x8C287A10 = (u6 / (nlTanf((((*(float *)0x8C287A04) * (*(float *)0x8C01AB1C)) / (*(float *)0x8C01AB20)))));
    return (nlMatrixMode(0x1));
}

int cpuPointBehind(int a4, int a5, int a6, int a7)
{
    float t10;
    float t16;
    float u21;
    int stk[25];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x3C), (*(int *)(((int)stk + 12))), a7);
    nlSubVector3op((((int)stk + 4) + 0x30), (*(int *)(((int)stk + 4))), a7);
    nlOuterProduct((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24));
    nlSubVector3op((((int)stk + 4) + 0x3C), (*(int *)(((int)stk + 4))), a7);
    nlSubVector3op((((int)stk + 4) + 0x30), (*(int *)(((int)stk + 8))), a7);
    nlOuterProduct((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x18));
    t10 = nlInnerProduct((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    if (-0.0500000007f > t10) {
        return 0;
    }
    nlSubVector3op((((int)stk + 4) + 0x3C), (*(int *)(((int)stk + 8))), a7);
    nlSubVector3op((((int)stk + 4) + 0x30), (*(int *)(((int)stk + 12))), a7);
    nlOuterProduct((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0xC));
    t16 = nlInnerProduct((((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
    if (-0.0500000007f > t16) {
        return 0;
    }
    u21 = nlInnerProduct((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    if (-0.0500000007f > u21) {
        return 0;
    }
    return 1;
}


int fadeScreenDraw(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[41];

    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, ((int)stk + 20), *(Stk3 *)((int)stk + 8), 0.0f, 0.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 480.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x1C + ((int)stk + 20)), *(Stk3 *)((int)stk + 8), 0.0f, 0.9375f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 640.0f, 0.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x38 + ((int)stk + 20)), *(Stk3 *)((int)stk + 8), 0.625f, 0.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 640.0f, 480.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x54 + ((int)stk + 20)), *(Stk3 *)((int)stk + 8), 0.625f, 0.9375f);
    return (nlDispStripTexOfs(0x4, ((int)stk + 20), 0x3A5));
}


int entryDrawStripes(float f4)
{
    int t1;
    int t2;
    int t3;
    int t13;
    int t5;
    float u6;
    int t7;
    int t9;
    int stk[25];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C110E70); }
    resetBackColorZ(0xFF000000, 0xFFFFDC00, 0xFF000000, *(Stk16 *)(0x8C110E70), f4);
    t1 = 0x0;
    for (;;) {
        t2 = (int)((int)t1 / (int)0x3);
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        t13 = t3;
        if (t3 == 0) {
            t5 = 0x0;
            u6 = (float)(t1 + 0x2);
            for (;;) {
                t7 = ((~(((~t5) + 0x1) & 0x1)) + 0x1);
                if ((int)t5 >= 0) {
                    t7 = (t5 & 0x1);
                }
                t9 = (((t5 << 2) << 2) + ((int)stk + 4));
                t5 = (t5 + 0x1);
                if (t7 == 1) {
                    *(float *)((t9 + 0x4)) = (float)(t1 + 0x2);
                } else {
                    u6 = (float)t1;
                    *(float *)((t9 + 0x4)) = u6;
                }
                if ((int)t5 >= (int)0x4) {
                    break;
                }
            }
            t13 = (nlDispStripTrnsl(0x4, ((int)stk + 4)));
        }
        t1 = (t1 + 0x3);
        if ((int)t1 >= (int)0x1E0) {
            break;
        }
    }
    return t13;
}


int emotFaceVtxGet(int a4, int a5, int a6)
{
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A37F8 + ((a5 << 2) << 1)))));
            }
            case 2:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A3E68 + ((a5 << 2) << 1)))));
            }
            case 4:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A44A0 + ((a5 << 2) << 1)))));
            }
            case 6:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A4B20 + ((a5 << 2) << 1)))));
            }
            case 8:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A5160 + ((a5 << 2) << 1)))));
            }
            case 10:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A5790 + ((a5 << 2) << 1)))));
            }
            case 12:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A6370 + ((a5 << 2) << 1)))));
            }
            case 14:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A5C38 + ((a5 << 2) << 1)))));
            }
            case 16:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A7578 + ((a5 << 2) << 1)))));
            }
            case 18:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A7B90 + ((a5 << 2) << 1)))));
            }
            case 20:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A80F8 + ((a5 << 2) << 1)))));
            }
            case 22:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A8648 + ((a5 << 2) << 1)))));
            }
            case 24:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A8C28 + ((a5 << 2) << 1)))));
            }
            case 26:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A9328 + ((a5 << 2) << 1)))));
            }
            case 28:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A98A0 + ((a5 << 2) << 1)))));
            }
            case 30:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A9E90 + ((a5 << 2) << 1)))));
            }
            case 32:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A69A8 + ((a5 << 2) << 1)))));
            }
            default:
            {
                return (*(int *)(((a6 << 2) + (0x8C1A6FB0 + ((a5 << 2) << 1)))));
            }
        }
    }
    return 0xFFFFFFFF;
}


int cpuSglAimLv21(int a4, int a5)
{
    float u1;
    float u2;
    float u5;
    int t8;
    int t9;
    int t6;
    int t7;
    int t16;
    int t13;

    u1 = *(float *)((0xAF0 + (((((*(int *)((a4 + 0xB5C))) + 0x1) & 0x1) * 0xD78) + 0x8C287D84)));
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    u5 = 0.899999976f;
    u5 = u5 + 0.200000003f * (nlRandom());
    if (!((u5 * 64.0f) > u2) && (t6 = *(int *)0x8C287B00, t7 = *(int *)0x8C287B04, (int)t6 <= (int)t7)) {
        t8 = nlRand();
        t9 = ((~(((~t8) + 0x1) & 0x1)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0x1);
        }
        if (t9 != 0) {
            t13 = (cpuSglAimTableCall(a4, a5));
        } else {
            t13 = (cpuSglAimAddLv21(a4, a5));
        }
        t16 = t13;
    } else {
        t16 = (cpuSglAimTableCall(a4, a5));
    }
    return (a5 + t16);
}

int fileLoadStartSlot(int a4, int a5, int a6, int a7)
{
    int t0;
    int t12;
    int t13;
    int t16;
    int t17;
    int t25;
    int t29;
    int t5;
    int stk[11];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1008 = a6;
    R1004 = a7;
    t0 = *(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC));
    if (t0 != 0) {
        fileLoadCloseSlot((R1004));
    } else {
        t5 = t0;
    }
    *(unsigned int *)((((a7 * 0x4C) + 0x8C34A238) + 0x8)) = 0x0;
    *(unsigned int *)((((a7 * 0x4C) + 0x8C34A238) + 0x0)) = 0x1;
    *(unsigned int *)((((a7 * 0x4C) + 0x8C34A238) + 0x4)) = 0x0;
    t12 = 0x0;
    t13 = t5;
    for (;;) {
        if ((*(signed char *)((a5 + t12))) == 0) {
            break;
        }
        t13 = (*(signed char *)((a5 + t12)));
        t16 = ((((a7 * 0x4C) + 0x8C34A238) + 0x18) + t12);
        t12 = (t12 + 0x1);
        *(unsigned char *)((t16 + 0x0)) = t13;
    }
    t17 = 0x0;
    for (;;) {
        R1004 = ((a7 * 0x4C) + 0x8C34A238);
        *(unsigned int *)(((((a7 * 0x4C) + 0x8C34A238) + 0xC) + 0x0)) = (ADXF_Open(a5, 0x0));
        *(unsigned int *)0x8C34B134 = ((*(int *)0x8C34B134) + 0x1);
        if ((*(int *)(((R1004) + 0xC))) == 0) {
            if ((int)t17 < (int)0xA) {
                t17 = (t17 + 0x1);
                continue;
            }
            break;
        }
        if ((R1008) == 0) {
            t25 = ADXF_GetFsizeSct((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))));
            *(unsigned int *)0x8C34B13C = t25;
            ADXF_ReadNw32((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))), t25, (R1012));
            return 0x1;
        }
        t29 = R1008;
        *(unsigned int *)0x8C34B13C = ((unsigned int)((unsigned int)((unsigned int)t29 >> 8) >> 2) >> 1);
        ADXF_ReadNw32((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))), ((unsigned int)((unsigned int)((unsigned int)t29 >> 8) >> 2) >> 1), (R1012));
        return 0x1;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}


int lightExec(int a4, int a5, int a6, int a7)
{
    int t3;
    int stk[8];

    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, ((float)(*(int *)0x8C287A28) / (*(float *)0x8C017298)));
    t3 = *(int *)0x8C287A40;
    *(unsigned int *)0x8C287A40 = (t3 - 1);
    *(unsigned short *)0x8C287A3C = (angStepToward((*(short *)0x8C287A3C), (*(short *)0x8C287A38), (t3 - 1)));
    *(unsigned short *)0x8C287A3E = (angStepToward((*(short *)0x8C287A3E), (*(short *)0x8C287A3A), (*(int *)0x8C287A40)));
    *(unsigned int *)0x8C287A28 = (int)(valStepToward((*(int *)0x8C287A40), (float)(*(int *)0x8C287A28), (float)(*(int *)0x8C287A2C)));
    *(unsigned int *)0x8C287A30 = (int)(valStepToward((*(int *)0x8C287A40), (float)(*(int *)0x8C287A30), (float)(*(int *)0x8C287A34)));
    nlPushUnitMatrix();
    nlLoadMatrix33on44(0x8C287938);
    nlRotateAY((unsigned short)(*(short *)0x8C287A3E));
    nlRotateAX((unsigned short)(*(short *)0x8C287A3C));
    nlCalcPoint((((int)stk + 4) + 0x4), 0x8C287A1C);
    nlObjPutSetLightDirectionV(0x8C287A1C);
    nlLightDir(0x0, (*(float *)0x8C287A1C), (*(float *)0x8C287A20), (*(float *)0x8C287A24));
    return (nlPopMatrix(0x1));
}

float bodyRaySphere(Stk10 s, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u19;
    float u22;
    float u25;
    float u28;
    float u31;
    float u35;
    float u36;
    int stk[25];


    (*(int *)((int)stk + 28)) = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    stk[10] = s.w[3];
    stk[11] = s.w[4];
    stk[12] = s.w[5];
    stk[13] = s.w[6];
    stk[14] = s.w[7];
    stk[15] = s.w[8];
    stk[16] = s.w[9];
    u0 = *(float *)(((((int)stk + 4) + 0x34) + 0x4));
    u1 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
    u2 = *(float *)(((((int)stk + 4) + 0x34) + 0x8));
    u3 = *(float *)(((((int)stk + 4) + 0x28) + 0x4));
    u4 = (u0 * u0);
    u4 = u4 + u1 * u1;
    u5 = *(float *)(((((int)stk + 4) + 0x28) + 0x0));
    u6 = u4;
    u6 = u6 + u2 * u2;
    u7 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
    u8 = *(float *)(((((int)stk + 4) + 0x1C) + 0x4));
    u9 = *(float *)(((((int)stk + 4) + 0x1C) + 0x8));
    u10 = (u0 * (u3 - u8));
    u10 = u10 + u1 * (u5 - u7);
    u11 = *(float *)(((((int)stk + 4) + 0x28) + 0x8));
    u12 = *(float *)0x8C03CE3C;
    u13 = u10;
    u13 = u13 + u2 * (u11 - u9);
    u14 = ((u3 - u8) * (u3 - u8));
    u14 = u14 + (u5 - u7) * (u5 - u7);
    u15 = u14;
    u15 = u15 + (u11 - u9) * (u11 - u9);
    u16 = (u13 * (1.0f + 1.0f));
    u17 = (u13 * (1.0f + 1.0f));
    u19 = (u6 * ((u15 - ((f4 + f5) * (f4 + f5)))));
    if (0.0f > ((u16 * u17) - (u19 * u12))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0x28)); }
        u31 = (u11 - u9);
        u35 = ((u16 * u17) - (u19 * u12));
        u36 = (u13 * (1.0f + 1.0f));
    } else {
        u22 = (*(float *)(((((int)stk + 4) + 0x28) + 0x0)));
        u22 = u22 + (((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12)))) / (u6 * (1.0f + 1.0f))) * (*(float *)(((((int)stk + 4) + 0x34) + 0x0)));
        *(float *)((((int)stk + 4) + 0x0)) = u22;
        u25 = (*(float *)(((((int)stk + 4) + 0x28) + 0x4)));
        u25 = u25 + (((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12)))) / (u6 * (1.0f + 1.0f))) * (*(float *)(((((int)stk + 4) + 0x34) + 0x4)));
        *(float *)((((int)stk + 4) + 0x4)) = u25;
        u28 = (*(float *)(((((int)stk + 4) + 0x28) + 0x8)));
        u28 = u28 + (((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12)))) / (u6 * (1.0f + 1.0f))) * (*(float *)(((((int)stk + 4) + 0x34) + 0x8)));
        *(float *)((((int)stk + 4) + 0x8)) = u28;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
        u31 = (((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12)))) / (u6 * (1.0f + 1.0f)));
        u35 = (((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12)))) / (u6 * (1.0f + 1.0f)));
        u36 = ((-(u13 * (1.0f + 1.0f))) - _builtin_sqrtf(((u16 * u17) - (u19 * u12))));
    }
    return u31;
}

void ballBoyDrawIdle(int a4, float f4)
{
    int t0;
    int t11;
    int t14;
    float u15;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        if (t0 == 2) {
            *(float *)((a4 + 0x5FC)) = ((*(float *)((a4 + 0x5FC))) + (((*(float *)(((0x5E4 + a4) + 0x10))) - (*(float *)(((0x5E4 + a4) + 0x4)))) / -0.300000012f));
            *(float *)((a4 + 0x5FC)) = ((*(float *)((a4 + 0x5FC))) - 0.00999999978f);
            if ((*(float *)((a4 + 0x5FC))) > 1.0f) {
                *(float *)((a4 + 0x5FC)) = 1.0f;
            }
            if (0.0f > (*(float *)((a4 + 0x5FC)))) {
                *(float *)((a4 + 0x5FC)) = 0.0f;
            }
            if ((*(float *)((a4 + 0x5FC))) != 0.0f) {
                t11 = *(int *)0x8C1D0194;
                if (a4 == 0x8C37EA84) {
                    t14 = 0xC880000;
                    u15 = (*(float *)((a4 + 0x5FC)));
                } else {
                    t14 = 0xC880320;
                    u15 = (*(float *)((a4 + 0x5FC)));
                }
                staffMorphBlend(t14, 0xC880960, t11, u15);
            }
        }
        colliObjEntry((0x604 + a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x610 + a4)) = *(struct mv3 *)((0x5A4 + a4)); }
        *(unsigned int *)((a4 + 0x5C8)) = 0x1;
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x5A4))), (*(float *)((a4 + 0x5A8))), (*(float *)((a4 + 0x5AC))));
        nlRotateAY((*(short *)((a4 + 0x5BC))));
        ballBoyPoseIdle(a4);
        nlPopMatrix(0x1);
        ballBoyPropPut(a4);
    return;
    }
}

int primRectIncGradY(int a4, int a5, int a6, int a7, Stk4 p)
{
    int t6;
    int t13;
    int stk[44];


    stk[32] = p.w[0];
    stk[33] = p.w[1];
    stk[34] = p.w[2];
    stk[35] = p.w[3];
    (*(int *)((int)stk + 28)) = a4;
    (*(int *)((int)stk + 32)) = a5;
    (*(int *)((int)stk + 24)) = a6;
    (*(int *)((int)stk + 20)) = a7;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 24))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10), *(Stk3 *)((int)stk + 8));
    t6 = (*(int *)((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 24))), 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    t13 = (*(int *)((int)stk + 32));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 20))), 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 20))), 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}


int primRectDirY(int a4, int a5, int a6, int a7, Stk4 p)
{
    int t0;
    int t7;
    int stk[42];


    stk[30] = p.w[0];
    stk[31] = p.w[1];
    stk[32] = p.w[2];
    stk[33] = p.w[3];
    (*(int *)((int)stk + 20)) = a6;
    t0 = (-a5);
    if (a7 != 0) {
        t0 = a5;
    }
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x4), *(Stk3 *)((int)stk + 8));
    t7 = (*(int *)((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t7), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x4)), *(Stk3 *)((int)stk + 8));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t0), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x4)), *(Stk3 *)((int)stk + 8));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t7), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t0), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x4)), *(Stk3 *)((int)stk + 8));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x4)));
}


