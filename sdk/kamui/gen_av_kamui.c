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


