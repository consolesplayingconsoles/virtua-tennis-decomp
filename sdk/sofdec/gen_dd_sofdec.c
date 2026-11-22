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


float ADX_GetCoefficient(int a4, int a5, int a6, int a7)
{
    float t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    t1 = cos((((float)a4 * (*(float *)0x8C1EFF74)) / (float)a5));
    u2 = *(float *)0x8C1EFF7C;
    u3 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    u4 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    u5 = (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)));
    *(unsigned short *)((a6 + 0x0)) = (int)(u3 * u2);
    u6 = *(float *)0x8C1EFF80;
    *(unsigned short *)((a7 + 0x0)) = (int)(-(((u4 * u5)) * u6));
    return u6;
}


