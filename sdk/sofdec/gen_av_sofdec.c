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

int SJRBF_GetChunk(int ringAddress, int queueId, int requestedBytes, int chunkAddress)
{
    int interruptMask;
    int freeQueueBufferBytes;
    int writePosition;
    int freeQueueWrapMargin;
    int freeBytes;
    int contiguousFreeBytes;
    int grantedFreeBytes;
    int filledQueueBufferBytes;
    int readPosition;
    int filledQueueWrapMargin;
    int filledBytes;
    int contiguousDataBytes;
    int grantedDataBytes;
    int callbackResult;

    interruptMask = SJRBF_Lock();
    if (queueId == 0) {
        freeQueueBufferBytes = *(int *)((ringAddress + 0x20));
        writePosition = *(int *)((ringAddress + 0x14));
        freeQueueWrapMargin = *(int *)((ringAddress + 0x24));
        freeBytes = *(int *)((ringAddress + 0x10));
        contiguousFreeBytes = ((freeQueueBufferBytes - writePosition) + freeQueueWrapMargin);
        if ((int)freeBytes < (int)((freeQueueBufferBytes - writePosition) + freeQueueWrapMargin)) {
            contiguousFreeBytes = freeBytes;
        }
        *(unsigned int *)((chunkAddress + 0x4)) = contiguousFreeBytes;
        grantedFreeBytes = requestedBytes;
        if ((int)contiguousFreeBytes < (int)requestedBytes) {
            grantedFreeBytes = contiguousFreeBytes;
        }
        *(unsigned int *)((chunkAddress + 0x4)) = grantedFreeBytes;
        *(unsigned int *)((chunkAddress + 0x0)) = ((*(int *)((ringAddress + 0x1C))) + (*(int *)((ringAddress + 0x14))));
        *(unsigned int *)((ringAddress + 0x14)) = ((int)((int)((*(int *)((ringAddress + 0x14))) + (*(int *)((chunkAddress + 0x4)))) % (int)(*(int *)((ringAddress + 0x20)))));
        *(unsigned int *)((ringAddress + 0x10)) = ((*(int *)((ringAddress + 0x10))) - (*(int *)((chunkAddress + 0x4))));
    } else {
        if (queueId == 1) {
            filledQueueBufferBytes = *(int *)((ringAddress + 0x20));
            readPosition = *(int *)((ringAddress + 0x18));
            filledQueueWrapMargin = *(int *)((ringAddress + 0x24));
            filledBytes = *(int *)((ringAddress + 0xC));
            contiguousDataBytes = ((filledQueueBufferBytes - readPosition) + filledQueueWrapMargin);
            if ((int)filledBytes < (int)((filledQueueBufferBytes - readPosition) + filledQueueWrapMargin)) {
                contiguousDataBytes = filledBytes;
            }
            *(unsigned int *)((chunkAddress + 0x4)) = contiguousDataBytes;
            grantedDataBytes = requestedBytes;
            if ((int)contiguousDataBytes < (int)requestedBytes) {
                grantedDataBytes = contiguousDataBytes;
            }
            *(unsigned int *)((chunkAddress + 0x4)) = grantedDataBytes;
            *(unsigned int *)((chunkAddress + 0x0)) = ((*(int *)((ringAddress + 0x1C))) + (*(int *)((ringAddress + 0x18))));
            *(unsigned int *)((ringAddress + 0x18)) = ((int)((int)((*(int *)((ringAddress + 0x18))) + (*(int *)((chunkAddress + 0x4)))) % (int)(*(int *)((ringAddress + 0x20)))));
            *(unsigned int *)((ringAddress + 0xC)) = ((*(int *)((ringAddress + 0xC))) - (*(int *)((chunkAddress + 0x4))));
        } else {
            *(unsigned int *)((chunkAddress + 0x4)) = 0x0;
            *(unsigned int *)((chunkAddress + 0x0)) = 0x0;
            if ((*(int *)((ringAddress + 0x28))) != 0) {
                callbackResult = ((int (*)(int, int))((*(int *)((ringAddress + 0x28)))))((*(int *)((ringAddress + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(ringAddress, interruptMask);
}


