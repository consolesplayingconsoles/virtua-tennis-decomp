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
int nlResetBackColorZ(int, int, int, Stk16, float);
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
int primTexVertexSet(int, int, int, int, int, float, float);
int primVertexSet(int, int, int, int, int);
int set_event(int, int);
int staffMorphBlend(int, int, int, float);
float valStepToward(int, float, float);
float vecLength(Stk4);
int vecMake(int, int, int, int, int, float, float, float);
float playerCalcMotionSpeeds(int a4, int a5, int a6, int a7);
int kmiSetFBSurfaceDesc(int a4);
int screenPlanePut(void);
float cpuPointBehind(int a4, int a5, int a6, int a7);
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
int primRectIncGradY(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int pdTmrSetTime(int a4, int a5, int a6, int a7);
int adxt_stat_prep(int a4);
int SJRBF_GetChunk(int a4, int a5, int a6, int a7);
int kmySetDisplayFrameBuffer(int a4, int a5);
int selCursorReset(int a4, int a5);
int primRectDirY(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);
float _in_coss(float f4);
int kmyGetFrameBufferHandle(int a4);
int kmiFLWCTRLVsyncCallBackFunc(int a4, int a5, int a6, int a7);


int kmiSetFBSurfaceDesc(int a4)
{
    int t1;
    int t2;
    int t4;
    int t8;
    int t10;
    int t11;
    int t12;
    int t22;
    int stk[16];

    t1 = *(int *)0x8C20AE90;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(int *)0x8C20AE8C);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t1;
    t2 = *(int *)0x8C20AE98;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(int *)0x8C20AE94);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t2;
    t4 = *(int *)0x8C20AEA0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = (*(int *)0x8C20AE9C);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t4;
    t8 = 0x2;
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
    } else {
        t8 = (*(int *)((a4 + 0xC)));
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t10 = *(int *)((a4 + 0x8));
    if ((unsigned int)0x0 < (unsigned int)t8) {
        t11 = t10;
        for (;;) {
            t12 = *(int *)((t11 + 0x0));
            *(unsigned int *)((t12 + 0x0)) = 0x1;
            *(unsigned int *)((t12 + 0x8)) = (*(int *)0x8C45EFDC);
            *(unsigned int *)((t12 + 0x4)) = (*(int *)(((((*(int *)0x8C45EFDC) << 2) + (((int)stk + 4) + 0x4)) + 0x0)));
            *(unsigned int *)((t12 + 0x18)) = 0x0;
            if ((*(int *)0x8C45EFF0) != 0) {
                *(unsigned int *)((t12 + 0x18)) = ((*(int *)((t12 + 0x18))) | 0x1);
            }
            kmyGetDisplayParametersInfo(0x7, 0x0, (t12 + 0xC));
            kmyGetDisplayParametersInfo(0x8, 0x0, (t12 + 0x10));
            t22 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t22 + 0x1);
            t11 = (t11 + 0x4);
            if ((unsigned int)(t22 + 0x1) >= (unsigned int)t8) {
                break;
            }
        }
    }
    return 0x0;
}

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

float cpuPointBehind(int a4, int a5, int a6, int a7)
{
    float t10;
    float u24;
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
    u24 = t10;
    if (!(-0.0500000007f > t10)) {
        nlSubVector3op((((int)stk + 4) + 0x3C), (*(int *)(((int)stk + 8))), a7);
        nlSubVector3op((((int)stk + 4) + 0x30), (*(int *)(((int)stk + 12))), a7);
        nlOuterProduct((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0xC));
        t16 = nlInnerProduct((((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
        u21 = t16;
        if (!(-0.0500000007f > t16)) {
            
            u21 = (nlInnerProduct((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC)));
        }
        u24 = u21;
    }
    return u24;
}


int fadeScreenDraw(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[41];

    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, ((int)stk + 20), 0.0f, 0.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 480.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x1C + ((int)stk + 20)), 0.0f, 0.9375f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 640.0f, 0.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x38 + ((int)stk + 20)), 0.625f, 0.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 640.0f, 480.0f, f5);
    primTexVertexSet(((((0xFF & (int)(f4 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, 0x0, (0x54 + ((int)stk + 20)), 0.625f, 0.9375f);
    return (nlDispStripTexOfs(0x4, ((int)stk + 20), 0x3A5));
}


int kmiAllocateFB(int a4)
{
    int t1;
    int t27;
    int stk[9];

    t1 = kmyGetFrameBufferSize((*(int *)0x8C45EFDC));
    kmyAllocateFrameBuffer(t1, ((int)stk + 4), (((int)stk + 4) + 0x4));
    kmyReleaseFrameBufferHandle((*(int *)0x8C45F7A4));
    kmyReleaseFrameBufferHandle((*(int *)0x8C45F7A8));
    *(unsigned int *)0x8C45F7A4 = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 4)))));
    *(unsigned int *)0x8C45F7A8 = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 8)))));
    *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x0))) + 0x1C)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x0))) + 0x14)) = t1;
    if ((unsigned int)(*(int *)((a4 + 0xC))) > (unsigned int)0x1) {
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x4))) + 0x1C)) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x4))) + 0x14)) = t1;
    }
    if ((((*(int *)((a4 + 0x4))) & 0x2) == 0) && (t27 = *(int *)((a4 + 0xC)), (unsigned int)t27 > (unsigned int)0x2)) {
        kmyAllocateFrameBuffer(t1, ((int)stk + 4), (((int)stk + 4) + 0x4));
        kmyReleaseFrameBufferHandle((*(int *)0x8C45F7AC));
        kmyReleaseFrameBufferHandle((*(int *)0x8C45F7B0));
        *(unsigned int *)0x8C45F7AC = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 4)))));
        *(unsigned int *)0x8C45F7B0 = (kmyGetFrameBufferHandle((*(int *)(((int)stk + 8)))));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x8))) + 0x1C)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0x8))) + 0x14)) = t1;
        if ((unsigned int)(*(int *)((a4 + 0xC))) > (unsigned int)0x3) {
            *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) + 0x1C)) = (*(int *)(((int)stk + 8)));
            *(unsigned int *)(((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) + 0x14)) = t1;
        }
    }
    return 0x0;
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
    nlResetBackColorZ(0xFF000000, 0xFFFFDC00, 0xFF000000, *(Stk16 *)(0x8C110E70), f4);
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

void SJUNI_UngetChunk(int a4, int a5, int a6)
{
    int t8;
    int t10;
    int t21;
    int t26;
    int t7;
    int t11;
    int t12;
    int t13;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t7 = *(int *)((a6 + 0x0)), t7 != 0)) {
            t8 = SJUNI_Lock();
            t10 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t10 != 0) && (t11 = *(int *)((a6 + 0x0)), t12 = *(int *)((a6 + 0x4)), t13 = *(int *)((t10 + 0x8)), (t11 + t12) == t13))) {
                *(unsigned int *)((t10 + 0x8)) = (*(int *)((a6 + 0x0)));
                *(unsigned int *)((t10 + 0xC)) = ((*(int *)((t10 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t21 = *(int *)((a4 + 0x14));
                if (t21 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t26 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t21 + 0x0)));
                    *(unsigned int *)((t21 + 0x0)) = 0x0;
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t21 + 0x8)) = *(struct mv2 *)(a6); }
                    *(unsigned int *)((t21 + 0x0)) = (*(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)));
                    *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t21;
                }
            }
            SJUNI_Unlock(a4, t8);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6);
    return;
    }
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

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC));
    if (t0 != 0) {
        fileLoadCloseSlot((*(int *)(((int)stk + 4))));
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
        *(unsigned int *)(((int)stk + 4)) = ((a7 * 0x4C) + 0x8C34A238);
        *(unsigned int *)(((((a7 * 0x4C) + 0x8C34A238) + 0xC) + 0x0)) = (ADXF_Open(a5, 0x0));
        *(unsigned int *)0x8C34B134 = ((*(int *)0x8C34B134) + 0x1);
        if ((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))) == 0) {
            if ((int)t17 < (int)0xA) {
                t17 = (t17 + 0x1);
                continue;
            }
            break;
        }
        if ((*(int *)(((int)stk + 8))) == 0) {
            t25 = ADXF_GetFsizeSct((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))));
            *(unsigned int *)0x8C34B13C = t25;
            ADXF_ReadNw32((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))), t25, (*(int *)(((int)stk + 12))));
            return 0x1;
        }
        t29 = *(int *)(((int)stk + 8));
        *(unsigned int *)0x8C34B13C = ((unsigned int)((unsigned int)((unsigned int)t29 >> 8) >> 2) >> 1);
        ADXF_ReadNw32((*(int *)((((a7 * 0x4C) + 0x8C34A238) + 0xC))), ((unsigned int)((unsigned int)((unsigned int)t29 >> 8) >> 2) >> 1), (*(int *)(((int)stk + 12))));
        return 0x1;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

int gdFsReqRdPio(int a4, int a5, int a6)
{
    int t56;
    int t48;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t25;
    int t30;
    int t33;
    int t0;
    int t41;
    int t35;

    t56 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = *(short *)((a4 + 0x4C)), t0 != 0)) {
        t48 = 0x0;
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t16 = *(int *)((a4 + 0x14));
            t17 = *(int *)((a4 + 0x8));
            t18 = *(int *)((a4 + 0x10));
            if ((int)(t16 + t17) < (int)(t17 + t18)) {
                t19 = a5;
                if ((int)(a5 + (t16 + t17)) > (int)(t17 + t18)) {
                    t19 = ((t17 + t18) - (t16 + t17));
                }
                if (t19 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    *(unsigned short *)((a4 + 0x50)) = 0x1;
                    t35 = 0x0;
                } else {
                    t21 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t25 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t16 + t17), t19, a6, 0x0);
                    if (t25 != 0) {
                        *(unsigned int *)((a4 + 0x3C)) = t25;
                        *(unsigned int *)((a4 + 0x1C)) = t19;
                        *(unsigned short *)((a4 + 0x50)) = 0x2;
                        *(unsigned short *)((a4 + 0x4A)) = 0x1;
                        *(unsigned short *)((a4 + 0x48)) = 0x1;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        t30 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x40)))))();
                    } else {
                        *(unsigned short *)((a4 + 0x50)) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t21 & 0xF) << 2) << 2) >> 4));
                    t33 = 0x0;
                    if (t25 != 0) {
                        t33 = t19;
                    }
                    t35 = t33;
                }
                t41 = t35;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                *(unsigned short *)((a4 + 0x50)) = 0x1;
                t41 = 0x0;
            }
            t48 = t41;
        }
        t56 = t48;
    }
    return t56;
}


int kmySetHSyncInterruptLine(int a4)
{
    int t0;
    int t1;
    int t24;
    int t19;
    int t25;
    int t27;
    int t29;
    int t31;
    int t3;
    int t9;

    t0 = *(int *)0x8C45EEA8;
    t1 = *(int *)0x8C45EEB8;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t3 = *(int *)0x8C45EE2C, (t3 & 44) != 0) && (0x1 != 0))) {
        t9 = ((unsigned int)((unsigned int)(*(int *)0x8C45EE74) >> 16) >> 1);
    } else {
        t9 = ((unsigned int)(*(int *)0x8C45EE74) >> 16);
    }
    t24 = (a4 + (t1 + t0));
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) || (0x1 == 0)) {
        t19 = (a4 + (t1 + t0));
        if (((*(int *)0x8C45EE2C) & 32) != 0) {
            t19 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
        t24 = t19;
    }
    t25 = t24;
    if ((int)t24 < 0) {
        t25 = (t24 + t9);
    }
    t27 = t25;
    if ((int)t25 > (int)t9) {
        t27 = t9;
    }
    t29 = t27;
    if ((int)t27 < 0) {
        t29 = 0x0;
    }
    t31 = *(int *)0x8C45EE68;
    *(unsigned int *)0x8C45EE68 = ((t31 & 0x3FF0000) | (0x3FF & t29));
    kmiWriteRegister(0xC8, ((t31 & 0x3FF0000) | (0x3FF & t29)));
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

    stk[7] = s.w[0];
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

int primRectIncGradY(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t6;
    int t13;
    int stk[44];

    stk[32] = a8;
    stk[33] = a9;
    stk[34] = a10;
    stk[35] = a11;
    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet((*(int *)(((int)stk + 24))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    t6 = *(int *)(((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet((*(int *)(((int)stk + 24))), 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x10)));
    t13 = *(int *)(((int)stk + 32));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet((*(int *)(((int)stk + 20))), 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x10)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet((*(int *)(((int)stk + 20))), 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x10)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}

int pdTmrSetTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t16;
    int t12;
    int t13;
    int t19;
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(signed char *)((a4 + 0x8C20A958));
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x0)) = a5;
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x4)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C46A8A4) + 0x8)) = a6;
    t2 = pdTmrIsReady(a4);
    t16 = 0xFFFFFFFE;
    if (t2 == 0) {
    } else {
        *(unsigned char *)(((((int)stk + 20) + 0x4) + 0x0)) = (*(signed char *)((a5 + 0x0)));
        *(unsigned char *)((((((int)stk + 20) + 0x4) + 0x1) + 0x0)) = ((unsigned int)(unsigned short)(*(short *)((a5 + 0x0))) >> 8);
        *(unsigned char *)(((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x2)));
        *(unsigned char *)((((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x3)));
        *(unsigned char *)(((((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x4)));
        *(unsigned char *)((((((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x5)));
        *(unsigned char *)(((((((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x6)));
        *(unsigned char *)((((((((((((int)stk + 20) + 0x4) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((0x8C20A970 + ((unsigned char)(*(signed char *)((a5 + 0x7))) & 0x7))));
        t12 = kdSetBlockWriteEx(a4, 0x8, 0x0, 0x0, 0x0, (((int)stk + 12) + 0xC), 0x2, 0x8C1EF146);
        t13 = 0x0;
        if ((int)t12 < 0) {
            t13 = 0xFFFFFFFF;
        }
        t16 = t13;
    }
    if (((int)t16 < 0) && (a6 != 0)) {
        t19 = ((int (*)(int, int))(a6))(t16, (*(int *)(((int)stk + 20))));
    }
    return 0x0;
}

int adxt_stat_prep(int a4)
{
    int t1;
    int t12;
    int t15;
    int t22;
    int t25;
    int t34;
    int t37;
    int t44;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1F13EA:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((R4 + 0x4)));
    t1 = *(int *)((R4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (ADXRNA_GetNumData(t1));
    *(unsigned int *)(((int)stk + 12)) = (ADXRNA_GetNumRoom());
    R13 = (t1);
    R14 = (R4);
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)((R4 + 0x48))))) goto L_8C1F1432;
    goto L_8C1F141C;
    L_8C1F141C:;
    t12 = (int)(*(int *)(((int)stk + 12))) <= (int)(ADXSJD_GetBlkSmpl((*(int *)(((int)stk + 4)))));
    if (t12) goto L_8C1F1432;
    goto L_8C1F1428;
    L_8C1F1428:;
    t15 = (ADXSJD_GetStat((*(int *)((R14 + 0x4))))) != 3;
    if (t15) goto L_8C1F1454;
    goto L_8C1F1432;
    L_8C1F1432:;
    if (((*(signed char *)((R14 + 0x70))) != 0)) goto L_8C1F144E;
    goto L_8C1F143A;
    L_8C1F143A:;
    if (((*(signed char *)((R14 + 0x72))) != 0)) goto L_8C1F144A;
    goto L_8C1F1442;
    L_8C1F1442:;
    ADXRNA_SetPlaySw(R13, 0x1);
    goto L_8C1F144A;
    L_8C1F144A:;
    *(unsigned char *)((R14 + 0x1)) = 0x3;
    goto L_8C1F144E;
    L_8C1F144E:;
    *(unsigned char *)((R14 + 0x71)) = 0x1;
    goto L_8C1F1454;
    L_8C1F1454:;
    t22 = ADXSJD_GetStat((*(int *)((R14 + 0x4))));
    R0 = (t22);
    if ((t22 != 3)) goto L_8C1F14AA;
    goto L_8C1F145E;
    L_8C1F145E:;
    t25 = ADXT_GetNumChan(R14);
    R0 = (0x48);
    R10 = ((R14 + 0x18));
    R11 = (0x8C0F7F30);
    R12 = (t25);
    R13 = (0x0);
    R9 = ((((*(int *)((R14 + 0x48))) * t25) << 1));
    if (((int)t25 <= 0)) goto L_8C1F14AA;
    goto L_8C1F147C;
    L_8C1F147C:;
    t34 = *(int *)((R10 + 0x0));
    t37 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t34 + 0x0))) + 0x18)))))(t34, 0x0, R9, (((int)stk + 4) + 0xC));
    memset((*(int *)(((int)stk + 16))), 0x0, (*(int *)(((int)stk + 20))));
    t44 = (int)(R13 + 0x1) < (int)R12;
    R0 = ((((int (*)(int, int, int))((*(int *)(((*(int *)((t34 + 0x0))) + 0x20)))))(t34, 0x1, (((int)stk + 4) + 0xC))));
    R10 = ((R10 + 0x4));
    R13 = ((R13 + 0x1));
    R14 = (t34);
    if (t44) goto L_8C1F147C;
    goto L_8C1F14AA;
    L_8C1F14AA:;
    return R0;
}

int SJRBF_GetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t48;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t9 = *(int *)((a4 + 0x20));
        t10 = *(int *)((a4 + 0x14));
        t11 = *(int *)((a4 + 0x24));
        t12 = *(int *)((a4 + 0x10));
        t13 = ((t9 - t10) + t11);
        if ((int)t12 < (int)((t9 - t10) + t11)) {
            t13 = t12;
        }
        *(unsigned int *)((a7 + 0x4)) = t13;
        t15 = a6;
        if ((int)t13 < (int)a6) {
            t15 = t13;
        }
        *(unsigned int *)((a7 + 0x4)) = t15;
        *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x1C))) + (*(int *)((a4 + 0x14))));
        *(unsigned int *)((a4 + 0x14)) = ((int)((int)((*(int *)((a4 + 0x14))) + (*(int *)((a7 + 0x4)))) % (int)(*(int *)((a4 + 0x20)))));
        *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) - (*(int *)((a7 + 0x4))));
    } else {
        if (a5 == 1) {
            t29 = *(int *)((a4 + 0x20));
            t30 = *(int *)((a4 + 0x18));
            t31 = *(int *)((a4 + 0x24));
            t32 = *(int *)((a4 + 0xC));
            t33 = ((t29 - t30) + t31);
            if ((int)t32 < (int)((t29 - t30) + t31)) {
                t33 = t32;
            }
            *(unsigned int *)((a7 + 0x4)) = t33;
            t35 = a6;
            if ((int)t33 < (int)a6) {
                t35 = t33;
            }
            *(unsigned int *)((a7 + 0x4)) = t35;
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x1C))) + (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x18)) = ((int)((int)((*(int *)((a4 + 0x18))) + (*(int *)((a7 + 0x4)))) % (int)(*(int *)((a4 + 0x20)))));
            *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) - (*(int *)((a7 + 0x4))));
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t48 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

int kmySetDisplayFrameBuffer(int a4, int a5)
{
    int t34;
    int t9;
    int t26;
    int t12;
    int t45;
    int t46;
    int t55;
    int t51;
    int t52;
    int t1;
    int t2;
    int t71;
    int t63;

    if (((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t1 = *(int *)0x8C45EE2C, (t1 & 0x2C) == 32) && (0x1 != 0))) || (t2 = *(int *)0x8C45EEE4, t2 == 1)) {
        t34 = 0xEEEE;
        if (a4 != 0) {
            t9 = *(int *)((a4 + 0x1C));
            t26 = 0xEEEE;
            if (a5 != 0) {
                t12 = *(int *)((a5 + 0x1C));
                if ((*(int *)0x8C45EEE4) == 1) {
                    kmiWriteRegister(0x60, t9);
                    kmiWriteRegister(0x64, t12);
                }
                kmiWriteRegister(0x50, t9);
                kmiWriteRegister(0x54, t12);
                t26 = 0x0;
            }
            t34 = t26;
        }
        t71 = t34;
    } else {
        if (a4 != 0) {
            t45 = *(int *)0x8C45EEC4;
            t46 = *(int *)((a4 + 0x1C));
            kmiWriteRegister(0x50, ((*(int *)((a4 + 0x1C))) + (*(int *)0x8C45EEC0)));
            kmiWriteRegister(0x54, (t46 + t45));
            t63 = 0x0;
        } else {
            t55 = 0xEEEE;
            if (a5 != 0) {
                t51 = *(int *)0x8C45EEC4;
                t52 = *(int *)((a5 + 0x1C));
                kmiWriteRegister(0x50, ((*(int *)((a5 + 0x1C))) + (*(int *)0x8C45EEC0)));
                kmiWriteRegister(0x54, (t52 + t51));
                t55 = 0x0;
            }
            t63 = t55;
        }
        t71 = t63;
    }
    return t71;
}


int primRectDirY(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t7;
    int stk[42];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = (-a5);
    if (a7 != 0) {
        t0 = a5;
    }
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x4));
    t7 = *(int *)(((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t7), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x4)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t0), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x4)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t7), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t0), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x4)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x4)));
}

int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6)
{
    int t0;
    int t35;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t25;
    int t17;
    int t1;
    int t4;
    int t14;
    int t15;
    int t23;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)((a4 + 0x0));
    t35 = 0x0;
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        *(unsigned int *)(((int)stk + 8)) = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t2 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t3 = t1;
        t5 = t0;
        t6 = a4;
        t7 = 0x0;
        t8 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t8 + 0x20));
            t10 = t8;
            t8 = (t8 + 0x50);
            t25 = t9;
            if ((int)t9 >= 0) {
                t5 = (*(int *)(((int)stk + 4)));
                t17 = t9;
                if ((t5 != 0) && (t14 = *(int *)(((int)stk + 8)), t15 = (t5 == 0), t5 = t14, t5 != 0)) {
                    t5 = t9;
                    t5 = (t5 << 2);
                    t5 = (t5 << 2);
                    t5 = (t5 + a5);
                    t17 = (*(int *)((t5 + 0xC)));
                }
                t3 = 0x8C458DCC;
                t2 = 0x8C4241C0;
                t4 = (*(int *)((t3 + 0x0)));
                t5 = (*(int *)((t2 + 0x0)));
                t6 = (t17 + t4);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + t5);
                t4 = (*(int *)((t6 + 0x0)));
                if (t4 == 0) {
                    t7 = 0x1;
                    t23 = 0xFFFFFFFF;
                } else {
                    t23 = (*(int *)((t6 + 0x4)));
                }
                t25 = t23;
            }
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 & 0x7E00000);
            *(unsigned int *)(((int)stk + 12)) = t4;
            if ((int)t25 >= 0) {
                t4 = 0x8C0EA610;
                t6 = t10;
                t2 = (nlSetTextureParameter(t6, t25));
            } else {
                t4 = 0x8C0EA7C0;
                t6 = t10;
                t2 = (nlSetDummyTextureParameter(t6));
            }
            t2 = 0x4C;
            t5 = (*(int *)(((int)stk + 12)));
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 | t5);
            *(unsigned int *)((t10 + 0xC)) = t4;
            t3 = (*(int *)((t10 + t2)));
            t8 = (t8 + t3);
            t6 = (*(int *)((t8 + 0x0)));
            if (t6 == 0) {
                break;
            }
        }
        t35 = t7;
    }
    return t35;
}

float _in_coss(float f4)
{
    int t1;
    int t15;
    int t9;
    int t6;
    float u18;
    float t21;
    int t22;
    float u26;
    int t28;
    float u64;
    float u57;
    float u50;
    float u43;
    float u35;
    int stk[4];

    *(float *)(((int)stk + 8)) = f4;
    t1 = 0x0;
    if ((int)(*(int *)(((int)stk + 8))) < 0) {
        t1 = 0x8;
    }
    t15 = (t1 | 0x4);
    if (f4 == 0.0f) {
    } else {
        t9 = (t1 | 0x2);
        if (((*(int *)(((int)stk + 8))) & 0x7FFFFFFF) == 0x7F800000) {
        } else {
            t6 = t1;
            if (f4 != f4) {
                t6 = (t1 | 0x1);
            }
            t9 = t6;
        }
        t15 = t9;
    }
    if ((0x3 & t15) != 0) {
        return (*(float *)0x8C12C3A8);
    }
    u18 = f4;
    if ((0x8 & t15) != 0) {
        u18 = (-f4);
    }
    t21 = _in_fmods(((int)stk + 4), u18, (*(float *)0x8C12C3D4));
    t22 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t22 & 0x7);
    u26 = t21;
    if (((t22 & 0x7) & 1) != 0) {
        u26 = ((*(float *)0x8C12C404) + t21);
    }
    t28 = *(int *)(((int)stk + 4));
    if (t28 != 0) {
        if ((t28 != 1) && (t28 != 2)) {
            if ((t28 != 3) && (t28 != 4)) {
                if ((t28 != 5) && (t28 != 6)) {
                    if (t28 != 7) {
                    } else {
                        u35 = (_app_coss(u26));
                    }
                    u43 = u35;
                } else {
                    u43 = (_app_sins(u26));
                }
                u50 = u43;
            } else {
                u50 = (-(_app_coss(u26)));
            }
            u57 = u50;
        } else {
            u57 = (-(_app_sins(u26)));
        }
        u64 = u57;
    } else {
        u64 = (_app_coss(u26));
    }
    return u64;
}

int kmyGetFrameBufferHandle(int a4)
{
    int t0;
    int t2;
    int t4;
    int t16;
    int t6;
    int t7;
    int t18;
    int stk[8];

    t0 = *(int *)0x8C20ADD0;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)0x8C20ADCC);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = *(int *)0x8C20ADD8;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = (*(int *)0x8C20ADD4);
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    t4 = *(int *)0x8C20ADE0;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = (*(int *)0x8C20ADDC);
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t4;
    t16 = 0x0;
    if ((unsigned int)0x8C45EEF4 < (unsigned int)0x8C45EFC4) {
        t6 = 0x8C45EEF4;
        t7 = 0x8C45EEF4;
        for (;;) {
            if ((*(int *)((t6 + 0x28))) == 0) {
                break;
            }
            t6 = (t6 + 0x34);
            t7 = (t7 + 0x34);
            if ((unsigned int)t6 >= (unsigned int)0x8C45EFC4) {
                if (0x0 == 0) {
                    return 0x0;
                }
                *(unsigned int *)((t6 + 0x28)) = 0x1;
                *(unsigned int *)((t6 + 0x1C)) = a4;
                *(unsigned int *)((t6 + 0x24)) = a4;
                *(unsigned int *)((t6 + 0x0)) = 0x0;
                *(unsigned int *)((t6 + 0x4)) = (((*(int *)(((((*(int *)0x8C45EE30) << 2) + ((int)stk + 4)) + 0x0))) << 2) << 1);
                *(unsigned int *)((t6 + 0x8)) = (*(int *)0x8C45EE30);
                *(unsigned int *)((t6 + 0xC)) = (*(int *)0x8C45EE9C);
                *(unsigned int *)((t6 + 0x10)) = (*(int *)0x8C45EEA0);
                *(unsigned int *)((t6 + 0x2C)) = ((unsigned int)((unsigned int)((unsigned int)((*(int *)0x8C45EE9C) * (*(int *)((t6 + 0x4)))) >> 2) >> 2) >> 2);
                return t6;
            }
        }
        t16 = 0x1;
        t18 = t7;
    } else {
        t18 = 0x8C45EEF4;
    }
    if (t16 == 0) {
        return 0x0;
    }
    *(unsigned int *)((t18 + 0x28)) = 0x1;
    *(unsigned int *)((t18 + 0x1C)) = a4;
    *(unsigned int *)((t18 + 0x24)) = a4;
    *(unsigned int *)((t18 + 0x0)) = 0x0;
    *(unsigned int *)((t18 + 0x4)) = (((*(int *)(((((*(int *)0x8C45EE30) << 2) + ((int)stk + 4)) + 0x0))) << 2) << 1);
    *(unsigned int *)((t18 + 0x8)) = (*(int *)0x8C45EE30);
    *(unsigned int *)((t18 + 0xC)) = (*(int *)0x8C45EE9C);
    *(unsigned int *)((t18 + 0x10)) = (*(int *)0x8C45EEA0);
    *(unsigned int *)((t18 + 0x2C)) = ((unsigned int)((unsigned int)((unsigned int)((*(int *)0x8C45EE9C) * (*(int *)((t18 + 0x4)))) >> 2) >> 2) >> 2);
    return t18;
}

int kmiFLWCTRLVsyncCallBackFunc(int a4, int a5, int a6, int a7)
{
    int t31;
    int t32;
    int t24;
    int t25;
    int t5;
    int t17;
    int t12;

    t31 = a4;
    t32 = a5;
    if ((*(int *)0x8C4607C0) != 0) {
        *(unsigned int *)0x8C4607CC = ((*(int *)0x8C4607CC) - 1);
        t24 = a4;
        t25 = a5;
        if ((int)(*(int *)0x8C4607CC) < 0) {
            *(unsigned int *)(((*(int *)0x8C4607C8) + 0x14)) = 0x8;
            t5 = *(int *)(((*(int *)0x8C4607C8) + 0x24));
            t17 = a5;
            if ((unsigned int)t5 < (unsigned int)(*(int *)0x8C45F93C)) {
                if ((*(int *)0x8C45F960) != 0) {
                    *(unsigned int *)0x8C45F954 = ((*(int *)0x8C45F954) | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
                    t12 = (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31)));
                } else {
                    *(unsigned int *)0x8C45F948 = ((*(int *)0x8C45F948) & (~(((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31)))));
                    t12 = (~(((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
                }
                t17 = t12;
            }
            *(unsigned int *)(((*(int *)0x8C4607C8) + 0x24)) = 0xFFFFFFFF;
            *(unsigned int *)0x8C4607C0 = 0x0;
            t24 = t5;
            t25 = t17;
        }
        t31 = t24;
        t32 = t25;
    }
    kmiFLWCTRLCheckTimeOut(t31, t32, a6, a7);
    kmiFLWCTRLRotateReadyQueue(0x1);
    kmyRequestCallback(0x1);
    *(unsigned int *)0x8C45F904 = ((*(int *)0x8C45F904) + 0x1);
    return 0x0;
}


