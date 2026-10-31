/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gMapleDriver[];
extern char gMapleTransferLockAddress[];

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

int kmiSetupRender(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C471E18;
    t1 = *(int *)0x8C471E1C;
    *(unsigned int *)0x8C471E1C = 0x0;
    if (((*(int *)(((a4 << 2) + 0x8C471E20))) & 1) != 0) {
        kmySetBackGroundDepth(a5, (*(float *)0x8C471E28));
        kmySetBGPlane(a5);
        *(unsigned int *)(((0x8C471E20 + (a4 << 2)) + 0x0)) = ((*(int *)(((0x8C471E20 + (a4 << 2)) + 0x0))) & 0xFFFFFFFE);
    }
    if ((0x2 & (t1 & (~t0))) != 0) {
        kmSetCullingRegister((*(float *)0x8C471E38));
    }
    if ((0x4 & (t1 & (~t0))) != 0) {
        kmySetCheapShadowMode((*(int *)0x8C471E30), (*(int *)0x8C471E34));
    }
    if ((0x8 & (t1 & (~t0))) != 0) {
        kmySetStrideWidth((*(int *)0x8C471E2C));
    }
    if ((0x10 & (t1 & (~t0))) != 0) {
        kmySetColorClampMAX((*(int *)0x8C471E3C));
    }
    if ((0x20 & (t1 & (~t0))) != 0) {
        kmySetColorClampMIN((*(int *)0x8C471E40));
    }
    if (((t1 & (~t0)) & 0x40) != 0) {
        kmySetPunchThroughThreshold((*(int *)0x8C471E44));
    }
    return 0x0;
}

int kmCreateTextureSurface(int a4, int a5, int a6, int a7)
{
    int t0;
    int t22;
    int t4;
    int t5;
    int t7;
    int t18;
    int t9;
    int t13;
    int t14;

    t0 = kmtex_CheckTextureFormat(a4, a5, a6, a7);
    t22 = t0;
    if (t0 != 0) {
    } else {
        t4 = *(int *)0x8C45F924;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
            if (t4 != 0) {
                t5 = kmtex_ConfirmSmallVQ(a4);
                t9 = (kmyAllocateSmallVQArea(0x1, t5, (a4 + 0x1C)));
            } else {
                t7 = kmtex_ConfirmSmallVQ(a4);
                t9 = (kmyAllocateSmallVQArea(0x0, t7, (a4 + 0x1C)));
            }
            t18 = t9;
        } else {
            if (t4 != 0) {
                t13 = 0x1;
                t14 = (*(int *)((a4 + 0x14)));
            } else {
                t13 = 0x0;
                t14 = (*(int *)((a4 + 0x14)));
            }
            t18 = (kmyAllocateArea(t13, t14, (a4 + 0x1C)));
        }
        if (t18 == 3) {
            kmyRequestCallback(0x3);
        }
        t22 = t18;
    }
    return t22;
}

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

int kmyInitializeBGPlane(int a4)
{
    int stk[5];

    *(unsigned int *)0x8C470D30 = 0x80800000;
    *(unsigned int *)0x8C470D34 = 0x20800000;
    *(unsigned int *)0x8C470D38 = 0x0;
    *(unsigned int *)0x8C470D3C = 0x40000000;
    *(unsigned int *)0x8C470D40 = 0x43820000;
    *(unsigned int *)0x8C470D44 = 0x3727C5AC;
    *(unsigned int *)0x8C470D48 = 0xFF000000;
    *(unsigned int *)0x8C470D4C = 0x43160000;
    *(unsigned int *)0x8C470D50 = 0x40000000;
    *(unsigned int *)0x8C470D54 = 0x3727C5AC;
    *(unsigned int *)0x8C470D58 = 0xFF000000;
    *(unsigned int *)0x8C470D5C = 0x440C0000;
    *(unsigned int *)0x8C470D60 = 0x43820000;
    *(unsigned int *)0x8C470D64 = 0x3727C5AC;
    *(unsigned int *)0x8C470D68 = 0xFF000000;
    *(unsigned int *)0x8C470D2C = 0x3C;
    kmySetBackGroundDepth(a4, (*(float *)0x8C470D44));
    kmyGetBGPlaneBase(a4, ((int)stk + 4));
    kmyCopyToFrameBuffer((*(int *)(((int)stk + 4))), 0x8C470D30, (*(int *)0x8C470D2C));
    return (kmySetSkipCount(a4, (*(int *)0x8C470D30)));
}

int kdSetDeviceRequestEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetDeviceKillEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetAllStatusRequestEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a7, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetFT4ControlEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int mpdrv_frame_recv_pre(void)
{
    int t0;

    t0 = *(int *)(int)gMapleDriver;
    if ((*(int *)((t0 + 0xFC0))) != 0) {
        return 0xFFFFFFFD;
    }
    if (((*(int *)(((*(int *)((t0 + 0x10F4))) + 0x18))) & 1) != 0) {
        return 0xFFFFFFFF;
    }
    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20AFC4);
        return 0xFFFFFFFE;
    }
    return 0x0;
}

int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    return t2;
}

int nlInvLightVector(void)
{
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA40, 0x8C458DA8);
    nlCalcVector(0x8C1DCA50, 0x8C458D98);
    nlScaleUnitVector(0x8C458D98, 0x8C458D98, (*(float *)0x8C0F2BD0));
    return nlTransposeMatrix();
}

int kdSetGetLastError(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = mpdrv_set_getlerr(a4, a5, a6, a7, a8);
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int gdFsChangeDir(void)
{
    return gdFsLoadDir();
}
