/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
float cos(float);
int gdFsLoadDir(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmSetCullingRegister(float);
int kmtex_CheckTextureFormat(int, int, int, int);
int kmtex_ConfirmSmallVQ(int);
int kmyAllocateArea(int, int, int);
int kmyAllocateSmallVQArea(int, int, int);
int kmyCopyToFrameBuffer(int, int, int);
int kmyGetBGPlaneBase(int, int);
int kmyRequestCallback(int);
int kmySetBGPlane(int);
int kmySetBackGroundDepth(int, float);
int kmySetCheapShadowMode(int, int);
int kmySetColorClampMAX(int);
int kmySetColorClampMIN(int);
int kmySetPunchThroughThreshold(int);
int kmySetSkipCount(int, int);
int kmySetStrideWidth(int);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getlerr(int, int, int, int, int);
int mpdrv_set_getminfo_ns(int, int, int);
int nlCalcVector(int, int);
int nlMakeProjConvMat(int);
int nlScaleUnitVector(int, int, float);
int nlSetPixelClipping(float, float, float, float);
int nlTransposeMatrix(void);
int nlSetWindowSize(float f4, float f5, float f6, float f7);
int kmiSetupRender(int a4, int a5);
int kmCreateTextureSurface(int a4, int a5, int a6, int a7);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);
int kmyInitializeBGPlane(int a4);
int kdSetDeviceRequestEx(int a4, int a5);
int kdSetDeviceKillEx(int a4, int a5);
int kdSetAllStatusRequestEx(int a4, int a5);
int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7);
int kdSetFT4ControlEx(int a4, int a5, int a6);
int mpdrv_frame_recv_pre(void);
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int nlInvLightVector(void);
int kdSetGetLastError(int a4, int a5, int a6, int a7, int a8);
int gdFsChangeDir(void);

int nlSetWindowSize(float f4, float f5, float f6, float f7)
{
    float u4;
    float u5;
    float u12;
    float u13;
    float u14;
    int t1;

    u4 = f7;
    u5 = f5;
    if (((*(short *)0x8C458DDE) != 0) && (t1 = *(short *)0x8C458DDA, (int)(t1 << 1) <= (int)0x1E0)) {
        u4 = (f7 * (1.0f + 1.0f));
        u5 = (f5 * (1.0f + 1.0f));
    }
    *(float *)0x8C450B20 = f4;
    *(float *)0x8C450B24 = f5;
    *(float *)0x8C450B18 = f6;
    *(float *)0x8C450B1C = f7;
    *(float *)0x8C1DCA30 = u5;
    *(float *)0x8C1DCA28 = u4;
    if ((*(short *)0x8C458DDE) != 0) {
        *(float *)0x8C1DCA2C = (f4 * (1.0f + 1.0f));
        *(float *)0x8C1DCA24 = (f6 * (1.0f + 1.0f));
    } else {
        *(float *)0x8C1DCA2C = f4;
        *(float *)0x8C1DCA24 = f6;
    }
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u12 = *(float *)0x8C1DCA28;
    u13 = *(float *)0x8C1DC9F0;
    *(float *)0x8C450B14 = (u12 * u13);
    u14 = *(float *)0x8C450B10;
    if (u14 > (u12 * u13)) {
        *(float *)0x8C1DC9F4 = u14;
    } else {
        *(float *)0x8C1DC9F4 = (u12 * u13);
    }
    nlMakeProjConvMat(0x8C450A90);
    return nlSetPixelClipping(f4, f5, f6, f7);
}


int nlInvLightVector(void)
{
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA40, 0x8C458DA8);
    nlCalcVector(0x8C1DCA50, 0x8C458D98);
    nlScaleUnitVector(0x8C458D98, 0x8C458D98, (*(float *)0x8C0F2BD0));
    return nlTransposeMatrix();
}


