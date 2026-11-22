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
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = a6;
    t0 = *(int *)((a4 + 0x0));
    t35 = 0x0;
    if (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0x18)), t1 != 0)) {
        R1008 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
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
                t5 = (R1004);
                t17 = t9;
                if ((t5 != 0) && (t14 = R1008, t15 = (t5 == 0), t5 = t14, t5 != 0)) {
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
            R1012 = t4;
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
            t5 = (R1012);
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


