/* Straight-line functions with calls and guards (batch gen_eq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_fat_all(int, int, int);
int copy_device(void);
int get_fat(int, int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetGetLastError(int, int, int, int, int);
int kmQueryFinishLastTextureDMA(void);
int kmResetRenderer(void);
int kmiAllocateFB(int);
int kmiCalculateWorkSize(int);
int kmiCheckSysConfigSetting(int);
int kmiFLWCTRLFinalizePass(int);
int kmiFLWCTRLGetRenderPacket(int, int);
int kmiInitVertexBufferDesc(int);
int kmiQueryFinishAllPacket(void);
int kmiSetDisplayClipSize(void);
int kmiSetFBSurfaceDesc(int);
int kmiSetNativeBufferInfo(int);
int kmiSetVertexBufferBase(int);
int kmyConnectInterrupt(int, int, int);
int kmyCreateRegionArray(int);
int kmyDeleteNativeBuffer(int, int);
int kmyEnableASyncCopy(int);
int kmyEnableHolizontalScaler(int, int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyInitAllocator(int, int, int, int, int);
int kmyReleaseFrameBufferHandle(int);
int kmySetBGPlane(int);
int kmySetDMAErrorCallback(int, int);
int kmySetDisplayFrameBuffer(int, int);
int kmySetPassDepth(int, int, int, int);
int kmySetStripBuffer(int, int);
int kmySetVirticalFilterMode(int, int);
int kmyZeroMemory(int, int);
int memset(int, int, int);
int menuStatusDraw(int, int, int, int, int, int, int, int, int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_get_gunmode(void);
float nlSin(int);
int padDirOn(int, int);
int playerInputSide(int);
int primSprDrawScaleAlpha(int, int, int, Stk3, float, float, float);
int search_dir_by_startfat(int, int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int, int);
int strlen(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaReset(int);
int syG2DmaSetProtect(int, int);
int trigger(void);
Stk3 vecMake(float, float, float);
int vmsfb_sleep(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int);
int selGridDraw(void);
int syG2SysInit(void);
int kmBeginScene(int a4, int a5);
void vmsio_block_write(int a4, int a5, int a6);
int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int kdRecvFrame(void);
int kmSetSystemConfiguration(int a4);
int kmyGetFreeSize(int a4, int a5);
int vmsfs_xdefrag(int a4, int a5);
int kmEndPass(int a4);
int playerReadPad(int a4);
int kmiFLWCTRLInitFLWControl(void);

int selGridDraw(void)
{
    float u3;
    int t5;
    int t6;
    int t26;
    int t74;
    int t75;
    int t4;
    int t16;
    float u30;
    float u51;
    int stk[23];

    *(unsigned short *)0x8C1854A4 = ((*(short *)0x8C1854A4) + 0x500);
    u3 = 400.0f;
    u3 = u3 + 112.0f * (nlSin((unsigned short)(*(short *)0x8C1854A4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(float *)(((int)stk + 24)) = (u3 / 512.0f);
    for (;;) {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        t5 = *(int *)(((int)stk + 20));
        *(float *)(((int)stk + 28)) = (float)((t5 * 0x4B) + 0x10);
        for (;;) {
            t6 = *(int *)(((int)stk + 16));
            *(Stk3 *)((((int)stk + 16) + 0x10)) = vecMake((*(float *)(((int)stk + 28))), (float)(((((t6 << 2) << 2) << 1) + t6) + 0x17B), 0.100000001f);
            if ((*(int *)0x8C287D5C) == 2) {
                *(float *)(((((int)stk + 16) + 0x10) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x4))) + 20.0f);
            }
            if (((*(int *)(((int)stk + 16))) == 1) && (t16 = *(int *)0x8C287D5C, t16 == 2)) {
            } else {
                t4 = (*(int *)(((int)stk + 16)));
                t26 = t4;
                t4 = (t4 << 2);
                t4 = (t4 << 1);
                t4 = (t4 + t26);
                t4 = (t4 << 2);
                if ((*(int *)(((t5 << 2) + (t4 + 0x8C1853C0)))) == 0) {
                    if ((*(int *)(((t5 << 2) + (0x8C185330 + t4)))) == 1) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                        u30 = 0.5859375f;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                        u30 = 0.29296875f;
                    }
                    primSprDrawScaleAlpha(0x8C33D7E0, 0x200, 0x80, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, u30);
                }
                if ((*(int *)(((t5 << 2) + (t4 + 0x8C1853C0)))) == 1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                    primSprDrawScaleAlpha(0x8C33D7E0, 0x200, 0x80, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 0.29296875f);
                }
                if ((*(int *)(((t5 << 2) + (t4 + 0x8C1853C0)))) == 2) {
                    if ((*(int *)(((t5 << 2) + (0x8C185330 + t4)))) == 1) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                        u51 = (*(float *)(((int)stk + 24)));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                        u51 = 0.29296875f;
                    }
                    primSprDrawScaleAlpha(0x8C33D7E0, 0x200, 0x80, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, u51);
                }
                if ((*(int *)(((t5 << 2) + (t4 + 0x8C1853C0)))) == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                    primSprDrawScaleAlpha(0x8C33D7E0, 0x200, 0x80, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
                }
            }
            t74 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t74 + 0x1);
            if ((int)(t74 + 0x1) < (int)0x2) continue;
            break;
        }
        t75 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t75 + 0x1);
        if ((int)(t75 + 0x1) < (int)0x8) continue;
        break;
    }
    return (menuStatusDraw(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16)));
}

int syG2SysInit(void)
{
    int t0;
    int t7;
    int t24;
    int t32;
    int t34;
    int t36;
    int t38;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    strlen((*(int *)0x8C20CA28));
    *(unsigned int *)0x8C20CA24 = 0x8C471E60;
    memset(0x8C471E60, 0xFF, 0x114);
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0x0)) = 0xA05F7800;
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0xD4)) = 0x1;
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0xD8)) = 0x0;
    t7 = 0x0;
    for (;;) {
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x0)) = t7;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x28)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x2C)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x30)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x4)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x8)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0xC)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x10)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x14)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x18)) = 0x3;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x1C)) = 0x0;
        *(unsigned int *)(((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)) + 0x20)) = 0x0;
        syG2DmaReset((((*(int *)0x8C20CA24) + 0x4) + (t7 * 0x34)));
        t24 = (t7 << 2);
        t7 = (t7 + 0x1);
        *(unsigned int *)((((0xDC + (*(int *)0x8C20CA24)) + t24) + 0x0)) = 0x0;
        *(unsigned int *)((((0xFC + (*(int *)0x8C20CA24)) + t24) + 0x0)) = 0x0;
        *(unsigned int *)(((t24 + (0xEC + (*(int *)0x8C20CA24))) + 0x0)) = 0x0;
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0x10C)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0x110)) = 0x0;
    syG2DmaSetProtect(0xC000000, 0xCFFFFFF);
    *(unsigned int *)(((*(int *)0x8C20CA24) + 0xD4)) = 0x1;
    t32 = *(int *)0x8C20CA24;
    *(unsigned int *)(((0x24 + (t32 + 0x4)) + 0x0)) = (syChainAddHandler(0xA60, 0x8C1FCC60, 0x10, (t32 + 0x4)));
    t34 = *(int *)0x8C20CA24;
    *(unsigned int *)(((0x24 + (t34 + 0x38)) + 0x0)) = (syChainAddHandler(0xA80, 0x8C1FCC60, 0x10, (t34 + 0x38)));
    t36 = *(int *)0x8C20CA24;
    *(unsigned int *)(((0x24 + (t36 + 0x6C)) + 0x0)) = (syChainAddHandler(0xAA0, 0x8C1FCC60, 0x10, (t36 + 0x6C)));
    t38 = *(int *)0x8C20CA24;
    *(unsigned int *)(((0x24 + ((t38 + 0x4) + 0x9C)) + 0x0)) = (syChainAddHandler(0xAC0, 0x8C1FCC60, 0x10, ((t38 + 0x4) + 0x9C)));
    *(unsigned int *)0x8C471F7C = 0x0;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int kmBeginScene(int a4, int a5)
{
    int t3;
    int t4;
    int t6;
    int t7;
    int t16;
    int t90;
    int t23;
    int t26;
    int t44;
    int t46;
    int t66;
    int t72;
    int stk[12];

    if (((*(int *)((a4 + 0x4))) & 16) != 0) {
        if ((*(int *)0x8C45F794) == 0) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)(((0x8C45F634 + t3) + 0x0));
                t6 = (0x8C45F134 + t3);
                t3 = (t3 + 0x4);
                *(unsigned int *)((t6 + 0x0)) = t4;
                if ((unsigned int)t3 >= (unsigned int)0x14) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 12)) = 0x8C45F134;
            t7 = *(int *)((a4 + 0x44));
            *(unsigned int *)(((0x8C45F148 + (t7 << 2)) + 0x0)) = (*(int *)(((0x8C45F134 + (t7 << 2)) + 0x0)));
            *(unsigned int *)(((((*(int *)((a4 + 0x44))) << 2) + 0x8C45F134) + 0x0)) = 0x10000000;
        }
        for (;;) {
            t16 = kmQueryFinishLastTextureDMA();
            if (t16 == 0) {
                break;
            }
        }
    }
    t90 = 0xEEEE;
    if (((*(int *)0x8C45F010) & 3) != 0) {
    } else {
        *(unsigned int *)0x8C45F010 = (((*(int *)0x8C45F010) & 0xFFFFFFFC) | 0x1);
        if ((*(int *)0x8C45EFE0) != 0) {
            for (;;) {
                t23 = kmiQueryFinishAllPacket();
                if (t23 == 0) {
                    break;
                }
            }
            if (((*(int *)0x8C45EFE0) & 0x1) != 0) {
                t26 = 0x0;
                for (;;) {
                    kmyGetDisplayRegionSize((*(int *)0x8C45EFD0), ((int)stk + 4), (((int)stk + 4) + 0x4), (*(int *)0x8C45EFD8));
                    kmySetPassDepth((*(int *)(((0x8C45F79C + t26) + 0x0))), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x34))));
                    kmyCreateRegionArray((*(int *)(((0x8C45F79C + t26) + 0x0))));
                    kmySetBGPlane((*(int *)(((0x8C45F79C + t26) + 0x0))));
                    t26 = (t26 + 0x4);
                    if ((unsigned int)t26 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            if (((*(int *)0x8C45EFE0) & 2) != 0) {
                t44 = 0x0;
                for (;;) {
                    t46 = *(int *)(((0x8C45F79C + t44) + 0x0));
                    kmyEnableHolizontalScaler(t46, (*(int *)0x8C45EFD8));
                    kmySetVirticalFilterMode(t46, (*(int *)0x8C45EFE4));
                    t44 = (t44 + 0x4);
                    if ((unsigned int)t44 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            *(unsigned int *)0x8C45EFE0 = 0x0;
        }
        *(unsigned int *)0x8C45EFF8 = 0x0;
        *(unsigned int *)0x8C45F008 = 0x0;
        *(unsigned int *)(((*(int *)((a4 + 0x24))) + 0x18)) = (a4 + 0x38);
        *(unsigned int *)0x8C45F7B4 = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            *(unsigned int *)0x8C45F7B4 = 0x1;
            if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
                t66 = *(int *)(((*(int *)((a4 + 0x24))) + 0x8));
                *(unsigned int *)((t66 + 0x18)) = ((*(int *)((t66 + 0x18))) | 0x4);
            }
        } else {
            t72 = *(int *)(((*(int *)((a4 + 0x24))) + 0x8));
            *(unsigned int *)((t72 + 0x18)) = ((*(int *)((t72 + 0x18))) & 0xFFFFFFFB);
        }
        if (a4 != 0) {
            if (((*(int *)((a4 + 0x4))) & 32) == 0) {
                *(unsigned int *)0x8C45F918 = 0x1;
            } else {
                *(unsigned int *)0x8C45F918 = 0x0;
            }
        }
        t90 = (kmiFLWCTRLGetRenderPacket((*(int *)((a4 + 0x24))), (*(int *)0x8C45F7B4)));
    }
    return t90;
}

void vmsio_block_write(int a4, int a5, int a6)
{
    int t3;
    int t11;
    int t26;
    int t28;
    int t33;
    int t37;
    int t39;
    int t44;
    int t49;
    int t56;
    int t65;
    int t70;
    int t74;
    int t76;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1FEF02:;
    *(unsigned int *)(((int)stk + 24)) = R4;
    *(unsigned int *)(((int)stk + 16)) = R6;
    *(unsigned int *)(((int)stk + 36)) = (((*(int *)(((int)stk + 24))) * 0x148) + 0x8C464598);
    t3 = (vmsio_ismount((*(int *)(((int)stk + 24))))) != 0;
    R10 = (0x8C1E9B7A);
    R11 = (0x8C1E9E26);
    R13 = (0x8C1FEBBE);
    R8 = (R5);
    if (t3) goto L_8C1FEF68;
    goto L_8C1FEF36;
    L_8C1FEF36:;
    vmsfb_sleep();
    goto L_8C1FF0CA;
    L_8C1FF0CA:;
    R0 = (0xFFFFFF01);
    goto L_8C1FF0CC;
    L_8C1FF0CC:;
    return;
    L_8C1FEF68:;
    t11 = *(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C20B048));
    kdGetDevice(t11);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x48)));
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    R14 = (t11);
    R4 = (0x0);
    R9 = (0x0);
    goto L_8C1FF008;
    L_8C1FF008:;
    if (((int)(*(int *)(((int)stk + 44))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 36))) + 0x1C))) + 0x40))))) goto L_8C1FEF8C;
    goto L_8C1FF016;
    L_8C1FF016:;
    t26 = (kdIsChanged(R14)) != 0;
    if (t26) goto L_8C1FF05E;
    goto L_8C1FF01E;
    L_8C1FF01E:;
    t28 = kdSetGetLastError(R14, 0x2, 0x0, R9, (R8));
    R12 = (t28);
    if (((int)t28 >= 0)) goto L_8C1FF03C;
    goto L_8C1FF034;
    L_8C1FF034:;
    vmsfb_sleep();
    goto L_8C1FF016;
    L_8C1FF03C:;
    t33 = (kdGetStatus(R14, R12)) != 0;
    if (t33) goto L_8C1FF04E;
    goto L_8C1FF046;
    L_8C1FF046:;
    vmsfb_sleep();
    goto L_8C1FF03C;
    L_8C1FF04E:;
    *(unsigned int *)(((int)stk + 20)) = (kdGetDevice(R14));
    t37 = (kdIsChanged(R14)) == 0;
    if (t37) goto L_8C1FF07C;
    goto L_8C1FF05E;
    L_8C1FF05E:;
    R0 = (0xFFFFFF30);
    goto L_8C1FF0CC;
    L_8C1FF07C:;
    t39 = *(int *)0x8C20CA40;
    *(unsigned int *)(((int)stk + 16)) = t39;
    if ((t39 == 0)) goto L_8C1FF09C;
    goto L_8C1FF088;
    L_8C1FF088:;
    t44 = (((int (*)(int, int, int, int))((*(int *)(((int)stk + 16)))))((*(int *)(((int)stk + 24))), R8, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x10))) != 0;
    if (t44) goto L_8C1FF0A8;
    goto L_8C1FF09C;
    L_8C1FF09C:;
    *(unsigned char *)(((int)stk + 28)) = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x4)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0xC)));
    goto L_8C1FF0A8;
    L_8C1FF0A8:;
    t49 = *(signed char *)(((int)stk + 28));
    R0 = ((unsigned char)t49);
    if (((unsigned char)t49 == 7)) goto L_8C1FF0C0;
    goto L_8C1FF0B0;
    L_8C1FF0B0:;
    if ((R0 == 0xFC)) goto L_8C1FF016;
    goto L_8C1FF0B6;
    L_8C1FF0B6:;
    if ((R0 == 0xFB)) goto L_8C1FF0C4;
    goto L_8C1FF0BC;
    L_8C1FF0BC:;
    goto L_8C1FF0CA;
    L_8C1FF0C4:;
    R0 = (0xFFFFFF40);
    goto L_8C1FF0CC;
    L_8C1FF0C0:;
    R0 = (0x0);
    goto L_8C1FF0CC;
    L_8C1FEF8C:;
    t56 = kdIsChanged(R14);
    R0 = (t56);
    if ((t56 != 0)) goto L_8C1FF05E;
    goto L_8C1FEF94;
    L_8C1FEF94:;
    t65 = kdSetBlockWrite(R14, 0x2, 0x0, R9, (R8), ((*(int *)(((int)stk + 20)))), (((int)((int)(*(int *)(((int)stk + 16))) / (int)0x4))));
    R12 = (t65);
    if (((int)t65 >= 0)) goto L_8C1FEFC2;
    goto L_8C1FEFBA;
    L_8C1FEFBA:;
    vmsfb_sleep();
    goto L_8C1FEF8C;
    L_8C1FEFC2:;
    t70 = (kdGetStatus(R14, R12)) != 0;
    if (t70) goto L_8C1FEFD4;
    goto L_8C1FEFCC;
    L_8C1FEFCC:;
    vmsfb_sleep();
    goto L_8C1FEFC2;
    L_8C1FEFD4:;
    *(unsigned int *)(((int)stk + 40)) = (kdGetDevice(R14));
    t74 = (kdIsChanged(R14)) != 0;
    if (t74) goto L_8C1FF05E;
    goto L_8C1FEFE4;
    L_8C1FEFE4:;
    t76 = *(signed char *)(((*(int *)(((int)stk + 40))) + 0x4));
    R0 = ((unsigned char)t76);
    if (((unsigned char)t76 == 7)) goto L_8C1FEFF8;
    goto L_8C1FEFEE;
    L_8C1FEFEE:;
    if ((R0 == 0xFC)) goto L_8C1FEF8C;
    goto L_8C1FEFF4;
    L_8C1FEFF4:;
    goto L_8C1FF0CA;
    L_8C1FEFF8:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    R9 = ((R9 + 0x1));
    goto L_8C1FF008;
}

int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    int t27;
    int t29;
    int t30;
    float u32;
    float u34;
    float u35;
    float u37;
    int t40;
    int t41;
    float u43;
    float u45;
    float u46;
    float u48;
    int t12;
    float u13;
    float u14;
    int stk[13];

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 24)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t7 = 0x0;
    t8 = a4;
    t9 = a6;
    t10 = a4;
    t11 = a8;
    u15 = (float)(t1 << 16);
    u16 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u17 = 65536.0f;
    u18 = f5;
    u19 = f6;
    u20 = (float)(t0 << 16);
    u21 = (float)(t2 << 16);
    u22 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 16)))) {
            t8 = (*(short *)((t10 + 0x0)));
            t27 = (t8 << 8);
            t8 = (unsigned char)((int)t8 >> 8);
            t8 = (t8 | (t27 & 0xFFFFFF00));
            if (((short)t8 & 0x8000) != 0) {
                break;
            }
            t8 = (short)t8;
            t10 = (t10 + 0x2);
            t8 = (t8 & 0x1FFF);
            t8 = (t8 + 0x1);
            u16 = (float)t8;
            u19 = u16;
            t29 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u15);
                t30 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                t8 = t30;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0x8C20B9F8;
                t8 = (unsigned char)t8;
                u32 = u16;
                u32 = u32 + u13 * u20;
                u16 = u32;
                t8 = (t8 << 2);
                u17 = (*(float *)((t8 + t7)));
                t12 = t8;
                u13 = u19;
                u18 = u20;
                u34 = u16;
                u34 = u34 + u13 * u17;
                u16 = u34;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0x8C20BDF8;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u15 = u14;
                t8 = (int)u14;
                u35 = u16;
                u35 = u35 + u13 * u14;
                u16 = u35;
                u13 = u19;
                t8 = ((unsigned int)t8 >> 16);
                *(unsigned short *)((t9 + 0x0)) = t8;
                t9 = (t9 + 0x2);
                u17 = (*(float *)((t12 + t7)));
                u37 = u16;
                u37 = u37 + u13 * u17;
                u16 = u37;
                u17 = u16;
                u20 = u16;
                t8 = (int)u17;
                t8 = ((unsigned int)t8 >> 16);
                t29 = (t29 + 0x2);
                t8 = (short)t8;
                *(unsigned short *)((t9 + 0x0)) = t8;
                t9 = (t9 + 0x2);
                if ((int)t29 >= (int)0x20) {
                    break;
                }
            }
            t8 = (*(short *)((t10 + 0x0)));
            t12 = t8;
            t12 = ((int)t12 >> 8);
            t12 = (unsigned char)t12;
            t12 = (t12 | ((t8 << 8) & 0xFFFFFF00));
            t8 = (short)t12;
            if ((0x8000 & t8) != 0) {
                t7 = (*(int *)(((int)stk + 12)));
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C209318))(t8, a5, t9, a7, u17, u18, u19, ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f), ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f), u20, u21, u22);
            }
            t10 = (t10 + 0x2);
            t8 = (t8 & 0x1FFF);
            t8 = (t8 + 0x1);
            u16 = (float)t8;
            u19 = u16;
            t40 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u22);
                t41 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                t8 = t41;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0x8C20B9F8;
                t8 = (unsigned char)t8;
                u43 = u16;
                u43 = u43 + u13 * u21;
                u16 = u43;
                t8 = (t8 << 2);
                u17 = (*(float *)((t8 + t7)));
                t12 = t8;
                u13 = u19;
                u18 = u21;
                u45 = u16;
                u45 = u45 + u13 * u17;
                u16 = u45;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t7 = 0x8C20BDF8;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u22 = u14;
                t8 = (int)u14;
                u46 = u16;
                u46 = u46 + u13 * u14;
                u16 = u46;
                u13 = u19;
                t8 = ((unsigned int)t8 >> 16);
                *(unsigned short *)((t11 + 0x0)) = t8;
                t11 = (t11 + 0x2);
                u17 = (*(float *)((t12 + t7)));
                u48 = u16;
                u48 = u48 + u13 * u17;
                u16 = u48;
                u17 = u16;
                u21 = u16;
                t8 = (int)u17;
                t8 = ((unsigned int)t8 >> 16);
                t40 = (t40 + 0x2);
                t8 = (short)t8;
                *(unsigned short *)((t11 + 0x0)) = t8;
                t11 = (t11 + 0x2);
                if ((int)t40 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x2);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            continue;
        }
        t7 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u15 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u21 >> 16);
        *(volatile int *)(((int)stk + 24));
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C209314))(t8, a5, t9, a7, u17, u18, u19, ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f), ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f), u20, u21, u22);
    }
    *(volatile int *)(((int)stk + 8));
    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C209318))(t8, a5, t9, a7, u17, u18, u19, ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f), ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f), u20, u21, u22);
}

int kdRecvFrame(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t10;
    int t16;
    int t41;
    int t18;
    int t19;
    int t29;
    int t36;
    int t37;
    int t38;
    int t34;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t58;
    int t62;
    int t42;
    int t44;
    int t46;
    int t26;
    int t22;
    int t30;
    int t40;
    int t69;
    int t70;
    int t72;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = mpdrv_frame_recv_pre();
    if (t1 == -2) {
        *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E8)) = 0x1;
    } else {
        if ((int)t1 < 0) {
            t3 = *(int *)0x8C461E94;
            if (t3 != 0) {
                t5 = ((int (*)(int, int, int, int))(t3))(0x2, 0xFFFFFFF8, (*(int *)0x8C461E64), t1);
            }
        } else {
            mpdrv_frame_recv_main();
            t10 = *(int *)0x8C4620E0;
            *(unsigned short *)(((0x8C461E8C + (t10 << 1)) + 0x0)) = (((*(int *)0xA05F810C) & 0x3FF) + ((unsigned short)(*(short *)(((0x8C461E90 + (t10 << 1)) + 0x0))) * (unsigned short)((*(int *)0xA05F80DC) & 0x3FF)));
            copy_device();
            mpdrv_frame_recv_post();
            t16 = mpdrv_get_gunmode();
            t41 = t16;
            if (t16 != 0) {
                t18 = *(int *)0x8C461E98;
                if (t18 != 0) {
                    t19 = ((int (*)(void))(t18))();
                    if (t19 != 0) {
                        *(unsigned int *)0x8C4620EC = (trigger());
                        t22 = 0x8C4620EC;
                    }
                    t26 = t22;
                } else {
                    *(unsigned int *)0x8C4620EC = (trigger());
                    t26 = 0x8C4620EC;
                }
                t29 = *(int *)(((*(int *)0x8C47317C) + 0xFBC));
                t36 = 0xFBC;
                t37 = t26;
                t38 = t29;
                if ((t29 != 0) && (t30 = *(int *)0x8C4620EC, t30 != 0)) {
                    *(unsigned int *)0x8C4620E4 = (*(int *)0xA05F8040);
                    *(unsigned int *)0xA05F8040 = (*(int *)((0xFBC + (*(int *)0x8C47317C))));
                    t34 = *(int *)0xA05F80E8;
                    *(unsigned int *)0xA05F80E8 = (t34 | 0x8);
                    *(unsigned int *)0x8C4620E8 = 0x1;
                    *(unsigned int *)0x8C462108 = ((*(int *)0x8C462108) + 0x1);
                    t36 = (t34 | 0x8);
                    t37 = 0x8C4620E8;
                    t38 = 0x8C4620E4;
                    t40 = 0x8C462108;
                }
                t41 = t36;
                t42 = t37;
                t44 = t38;
                t46 = t40;
            }
            t47 = t41;
            t48 = t42;
            t49 = t44;
            t50 = t46;
            t51 = 0x0;
            t52 = 0x8C461E9C;
            for (;;) {
                if ((int)t51 >= (int)0x30) {
                    break;
                }
                if ((*(int *)((t52 + 0x8))) != 0) {
                    t50 = (*(int *)((t52 + 0x0)));
                    t47 = (kdGetStatus(t50, (*(int *)((t52 + 0x4)))));
                    if (t47 != 0) {
                        t58 = *(int *)((t52 + 0x8));
                        *(unsigned int *)((t52 + 0x8)) = 0x0;
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (kdGetDeviceInfo(t50));
                        t62 = t47;
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (kdGetDevice(t50));
                        t48 = (t58);
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (((int (*)(int, int, int, int))(t48))(t50, (*(int *)((t52 + 0x4))), t47, t62));
                    }
                } else {
                    t69 = t48;
                    t70 = t49;
                    t72 = t50;
                }
                t48 = t69;
                t52 = (t52 + 0xC);
                t49 = t70;
                t50 = t72;
                t51 = (t51 + 0x1);
            }
            *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E8)) = 0x0;
            *(unsigned int *)0x8C4620E0 = ((*(int *)0x8C4620E0) ^ 0x1);
            *(unsigned int *)0x8C461E60 = ((*(int *)0x8C461E60) + 0x1);
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t1;
}

int kmSetSystemConfiguration(int a4)
{
    int t3;
    int t4;
    int t11;
    int t28;
    int t33;
    int t37;
    int t56;
    int t57;
    int t16;
    int t17;
    int t69;
    int stk[11];

    kmiCheckSysConfigSetting(a4);
    if (((*(int *)((a4 + 0x4))) & 0x100) != 0) {
        *(unsigned int *)0x8C45F924 = 0x1;
    } else {
        *(unsigned int *)0x8C45F924 = 0x0;
    }
    t3 = *(int *)((a4 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = t3;
    t4 = *(int *)((a4 + 0x18));
    kmyInitAllocator((*(int *)0x8C45F7BC), (*(int *)((a4 + 0x18))), (*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x1C))), (t3 + (((unsigned int)((((t4 << 1) + t4) << 2) << 1) >> 2) << 2)));
    t11 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        t11 = 0x1;
    }
    kmyEnableASyncCopy(t11);
    if (((*(int *)((a4 + 0x4))) & 2) != 0) {
        *(unsigned int *)0x8C45EFF0 = 0x1;
        t16 = 0x1;
        t17 = (*(int *)((a4 + 0x10)));
    } else {
        *(unsigned int *)0x8C45EFF0 = 0x0;
        t16 = 0x0;
        t17 = 0x0;
    }
    kmySetStripBuffer(t16, t17);
    kmiFLWCTRLInitFLWControl();
    kmiCalculateWorkSize(a4);
    kmiSetNativeBufferInfo(a4);
    kmiAllocateFB(a4);
    kmiSetVertexBufferBase(a4);
    kmiInitVertexBufferDesc(a4);
    kmiSetFBSurfaceDesc(a4);
    kmiSetDisplayClipSize();
    t28 = 0x0;
    for (;;) {
        *(unsigned int *)((t28 + 0x8C460788)) = (*(int *)(((0x8C45F79C + t28) + 0x0)));
        t28 = (t28 + 0x4);
        if ((unsigned int)t28 >= (unsigned int)0x8) {
            break;
        }
    }
    if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
        t33 = 0x0;
        for (;;) {
            *(unsigned int *)(((t33 << 2) + 0x8C460790)) = (*(int *)(((0x8C45F7A4 + (t33 << 2)) + 0x0)));
            if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
                t37 = *(int *)(((t33 << 2) + (*(int *)((a4 + 0x8)))));
                *(unsigned int *)(((int)stk + 8)) = t37;
                kmyZeroMemory(((*(int *)(((*(int *)(((int)stk + 8))) + 0x1C))) + 0xA5000000), (*(int *)((t37 + 0x14))));
            }
            t33 = (t33 + 0x1);
            if ((unsigned int)t33 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                break;
            }
        }
    }
    *(unsigned int *)0x8C45F7F0 = 0x1E;
    *(unsigned int *)0x8C45F7B8 = 0x0;
    *(unsigned int *)0x8C45F934 = (*(int *)((a4 + 0x28)));
    *(unsigned int *)0x8C45F938 = 0x2;
    *(unsigned int *)0x8C45F93C = (*(int *)((a4 + 0xC)));
    *(unsigned int *)0x8C4607D0 = (*(int *)0x8C45F00C);
    *(unsigned int *)0x8C45F7F4 = 0x0;
    *(unsigned int *)0x8C45F7F8 = 0x0;
    *(unsigned int *)0x8C45F7FC = 0x0;
    t56 = 0x0;
    for (;;) {
        t57 = 0x0;
        for (;;) {
            *(unsigned int *)((t57 + (0x8C45F818 + (((t56 << 2) + t56) << 2)))) = 0x0;
            t57 = (t57 + 0x4);
            if ((unsigned int)t57 >= (unsigned int)0x14) {
                break;
            }
        }
        t56 = (t56 + 0x1);
        if ((unsigned int)t56 >= (unsigned int)0x8) {
            break;
        }
    }
    if (((*(int *)0x8C45EFF0) == 0) && (t69 = *(int *)0x8C45EFEC, t69 == 0)) {
    } else {
        kmySetDisplayFrameBuffer((*(int *)0x8C460790), (*(int *)0x8C460794));
    }
    *(unsigned int *)0x8C45F900 = 0x1;
    return 0x0;
}

int kmyGetFreeSize(int a4, int a5)
{
    int t0;
    int t12;
    int t1;
    int t2;
    int t6;
    int t7;
    int t13;
    int t22;
    int t25;
    int t14;
    int t15;
    int t17;
    int t20;
    int t26;
    int t27;
    int t28;
    int t29;
    int t58;
    int t59;
    int t54;
    int t55;
    int t50;
    int t51;
    int t46;
    int t47;
    int t42;
    int t43;
    int t38;
    int t39;
    int t34;
    int t35;
    int t30;
    int t31;
    int t61;
    int t62;
    int t83;
    int t9;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = *(int *)0x8C20C9F4;
    t12 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t1 + 0x10))) > (unsigned int)t2) {
                t2 = (*(int *)((t1 + 0x10)));
            }
            t6 = *(int *)(((int)stk + 12));
            t7 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 12)) = (t6 + t7);
            t1 = (*(int *)((t1 + 0x8)));
            if (t1 == 0) {
                break;
            }
        }
        t9 = (t6 + t7);
        t12 = t2;
    }
    t13 = *(int *)0x8C20CA04;
    t22 = t9;
    t25 = 0x0;
    if (t13 != 0) {
        t14 = t13;
        t15 = 0x0;
        for (;;) {
            t17 = *(int *)((t14 + 0x10));
            if ((unsigned int)(*(int *)((t14 + 0x10))) > (unsigned int)t15) {
                t15 = (*(int *)((t14 + 0x10)));
            }
            t20 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t20 + t17);
            t14 = (*(int *)((t14 + 0x8)));
            if (t14 == 0) {
                break;
            }
        }
        t22 = (t20 + t17);
        t25 = t15;
    }
    t26 = *(int *)0x8C20CA0C;
    if (t26 != 0) {
        t27 = t22;
        t28 = t26;
        for (;;) {
            t29 = *(short *)((t28 + 0x0));
            t58 = 0x10;
            t59 = 0x90;
            if (((unsigned short)t29 & 0xF000) != 0x1000) {
                t54 = 0x10;
                t55 = 0xA0;
                if (((unsigned short)t29 & 0xF000) != 0x2000) {
                    t50 = 0x10;
                    t51 = 0xC0;
                    if (((unsigned short)t29 & 0xF000) != 0x3000) {
                        t46 = 0x10;
                        t47 = 0xE0;
                        if (((unsigned short)t29 & 0xF000) != 0x4000) {
                            t42 = 0x8;
                            t43 = 0x200;
                            if (((unsigned short)t29 & 0xF000) != 0x5000) {
                                t38 = 0x4;
                                t39 = 0x360;
                                if (((unsigned short)t29 & 0xF000) != 0x6000) {
                                    t34 = 0x2;
                                    t35 = 0x800;
                                    if (((unsigned short)t29 & 0xF000) != 0x7000) {
                                        t30 = 0x1;
                                        t31 = 0xD60;
                                        if (((unsigned short)t29 & 0xF000) != 0x8000) {
                                            t30 = 0x0;
                                            t31 = 0x0;
                                        }
                                        t34 = t30;
                                        t35 = t31;
                                    }
                                    t38 = t34;
                                    t39 = t35;
                                }
                                t42 = t38;
                                t43 = t39;
                            }
                            t46 = t42;
                            t47 = t43;
                        }
                        t50 = t46;
                        t51 = t47;
                    }
                    t54 = t50;
                    t55 = t51;
                }
                t58 = t54;
                t59 = t55;
            }
            if ((unsigned int)0x0 < (unsigned int)t58) {
                t61 = 0x0;
                t62 = (t28 + 0xC);
                for (;;) {
                    t61 = (t61 + 0x1);
                    if ((*(int *)((t62 + 0x0))) == 0) {
                        t27 = (*(int *)(((int)stk + 4)));
                        t27 = (t27 + t59);
                        *(unsigned int *)(((int)stk + 4)) = t27;
                    }
                    t62 = (t62 + 0x4);
                    if ((unsigned int)t61 >= (unsigned int)t58) {
                        break;
                    }
                }
            }
            t28 = (*(int *)((t28 + 0x4)));
            if (t28 == 0) {
                break;
            }
        }
    }
    *(unsigned int *)((a4 + 0x0)) = (((*(int *)(((int)stk + 12))) + (*(int *)(((int)stk + 8)))) + (*(int *)(((int)stk + 4))));
    t83 = t12;
    if ((unsigned int)t12 < (unsigned int)t25) {
        t83 = t25;
    }
    *(unsigned int *)((a5 + 0x0)) = t83;
    return 0x0;
}

int vmsfs_xdefrag(int a4, int a5)
{
    int t6;
    int t10;
    int t15;
    int t20;
    int t24;
    int t26;
    int t29;
    int t32;
    int t35;
    int t38;
    int t42;
    int t45;
    int t48;
    int t54;
    int stk[13];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C1EDBAC:;
    *(unsigned int *)(((int)stk + 4)) = (R4 * 0x148);
    R10 = (R5);
    R11 = (((R4 * 0x148) + 0x8C464598));
    R14 = (R4);
    if (((*(signed char *)((((R4 * 0x148) + 0x8C464598) + 0x2))) == 0)) goto L_8C1EDC16;
    goto L_8C1EDBD2;
    L_8C1EDBD2:;
    t6 = (vmsio_isready(R14)) != 0;
    if (t6) goto L_8C1EDC00;
    goto L_8C1EDBDC;
    L_8C1EDBDC:;
    vmsfs_unmount(R14);
    goto L_8C1EDC16;
    L_8C1EDC16:;
    R0 = (0xFFFFFF01);
    goto L_8C1EDD1A;
    L_8C1EDD1A:;
    return R0;
    L_8C1EDC00:;
    t10 = (vmsio_ismount(R14)) == 0;
    if (t10) goto L_8C1EDC16;
    goto L_8C1EDC0A;
    L_8C1EDC0A:;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0x8C464598) + 0x8))) != 0)) goto L_8C1EDC1C;
    goto L_8C1EDC16;
    L_8C1EDC1C:;
    t15 = (int)(buIsFormat(R14)) >= 0;
    if (t15) goto L_8C1EDC2C;
    goto L_8C1EDC26;
    L_8C1EDC26:;
    R0 = (0xFFFFFF03);
    goto L_8C1EDD1A;
    L_8C1EDC2C:;
    if (((*(int *)(((*(int *)((R11 + 0x1C))) + 0x38))) == 0)) goto L_8C1EDC4A;
    goto L_8C1EDC34;
    L_8C1EDC34:;
    t20 = vmsfs_xfind(R14, (((int)stk + 4) + 0x4), R6);
    R4 = (t20);
    if ((t20 == 0)) goto L_8C1EDC4A;
    goto L_8C1EDC42;
    L_8C1EDC42:;
    t24 = (int)(check_fat_all(R14, R5, R6)) >= 0;
    if (t24) goto L_8C1EDC50;
    goto L_8C1EDC4A;
    L_8C1EDC4A:;
    R0 = (0xFFFFFF0B);
    goto L_8C1EDD1A;
    L_8C1EDC50:;
    t26 = search_fat_used(R14, R5, R6);
    R13 = (t26);
    if (((int)t26 < 0)) goto L_8C1EDCF0;
    goto L_8C1EDC5A;
    L_8C1EDC5A:;
    t29 = search_fat_free(R14, (R13 + 0x1), R6);
    R12 = (t29);
    if (((int)t29 < 0)) goto L_8C1EDCF0;
    goto L_8C1EDC68;
    L_8C1EDC68:;
    t32 = vmsfs_read_retry(R14, R13, R10);
    R4 = (t32);
    if (((int)t32 < 0)) goto L_8C1EDD18;
    goto L_8C1EDC78;
    L_8C1EDC78:;
    t35 = vmsfs_write_retry(R14, R12, R10);
    R4 = (t35);
    if (((int)t35 < 0)) goto L_8C1EDD18;
    goto L_8C1EDC88;
    L_8C1EDC88:;
    t38 = search_fat(R14, R13, R6);
    R5 = (t38);
    if (((int)t38 <= 0)) goto L_8C1EDC9E;
    goto L_8C1EDC94;
    L_8C1EDC94:;
    set_fat(R14, R5, R12);
    goto L_8C1EDCB2;
    L_8C1EDCB2:;
    t42 = get_fat(R14, R13, R6);
    set_fat(R14, R12, t42);
    set_fat(R14, R13, 0xFFFC);
    goto L_8C1EDC50;
    L_8C1EDC9E:;
    t45 = search_dir_by_startfat(R14, R13, R6);
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(t45, 0x2, R12);
    goto L_8C1EDCB2;
    L_8C1EDD18:;
    R0 = (R4);
    goto L_8C1EDD1A;
    L_8C1EDCF0:;
    R4 = ((R11 + 0x48));
    R5 = (0x100);
    R6 = (0x1);
    goto L_8C1EDCFE;
    L_8C1EDCFE:;
    if (((unsigned int)R4 < (unsigned int)((R11 + 0x48) + R5))) goto L_8C1EDCFA;
    goto L_8C1EDD08;
    L_8C1EDD08:;
    t54 = write_dir(R14, R5, R6);
    R4 = (t54);
    if (((int)t54 < 0)) goto L_8C1EDD18;
    goto L_8C1EDD12;
    L_8C1EDD12:;
    R4 = ((write_fat(R14)));
    goto L_8C1EDD18;
    L_8C1EDCFA:;
    *(unsigned char *)((R4 + 0x0)) = R6;
    R4 = ((R4 + 0x1));
    goto L_8C1EDCFE;
}

int kmEndPass(int a4)
{
    int t1;
    int t2;
    int t11;
    int t25;
    int t39;
    int t40;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1E3AC0:;
    *(unsigned int *)(((int)stk + 12)) = (kmiFLWCTRLFinalizePass(R4));
    t1 = *(int *)((R4 + 0x8));
    t2 = *(int *)((t1 + 0x10));
    *(unsigned int *)((t1 + 0x10)) = (t2 + 0x1);
    *(unsigned int *)((R4 + 0x18)) = ((*(int *)((R4 + 0x18))) + 0x38);
    t11 = (*(int *)(((*(int *)((R4 + 0x8))) + 0x10)));
    R12 = (R4);
    R4 = (0x8C45EFC4);
    R6 = (t2);
    R7 = t11;
    if (((*(int *)0x8C45F794) == 0)) goto L_8C1E3AFA;
    goto L_8C1E3AF6;
    L_8C1E3AF6:;
    goto L_8C1E3C1A;
    L_8C1E3C1A:;
    if ((((*(int *)(((*(int *)((R12 + 0x8))) + 0x18))) & 4) == 0)) goto L_8C1E3C28;
    goto L_8C1E3C22;
    L_8C1E3C22:;
    kmyEnableASyncCopy(0x1);
    goto L_8C1E3C28;
    L_8C1E3C28:;
    return (*(int *)(((int)stk + 12)));
    L_8C1E3AFA:;
    if (((unsigned int)R7 < (unsigned int)(*(int *)(((*(int *)((R12 + 0x8))) + 0x14))))) goto L_8C1E3B06;
    goto L_8C1E3B02;
    L_8C1E3B02:;
    goto L_8C1E3C1A;
    L_8C1E3B06:;
    *(unsigned int *)(((int)stk + 8)) = (R7 << 2);
    R11 = ((((R6 << 2) + R6) << 2));
    R13 = ((((R7 << 2) + R7) << 2));
    R5 = (0x0);
    R8 = (((((R7 + 0x1) << 2) + (R7 + 0x1)) << 2));
    R9 = ((R6 << 2));
    goto L_8C1E3B32;
    L_8C1E3B32:;
    t25 = *(int *)((R4 + 0x40));
    R14 = ((R5 << 2));
    R6 = (((((((t25 << 2) + t25) << 2) << 2) << 1) + (0x170 + R4)));
    if (((*(int *)0x8C460784) != 1)) goto L_8C1E3C00;
    goto L_8C1E3B54;
    L_8C1E3B54:;
    if ((R5 != (*(int *)((((0x710 + R4) + (*(int *)(((int)stk + 8)))) + 0x0))))) goto L_8C1E3BE0;
    goto L_8C1E3B62;
    L_8C1E3B62:;
    if (((unsigned int)R7 >= (unsigned int)0x7)) goto L_8C1E3B9A;
    goto L_8C1E3B68;
    L_8C1E3B68:;
    if ((R5 == (*(int *)((((0x710 + R4) + R9) + 0x0))))) goto L_8C1E3B86;
    goto L_8C1E3B74;
    L_8C1E3B74:;
    R0 = ((R6 + R8));
    R3 = ((*(int *)(((((0xB0 + R4) + R11) + R14) + 0x0))));
    goto L_8C1E3B98;
    L_8C1E3B98:;
    *(unsigned int *)((R14 + R0)) = R3;
    goto L_8C1E3B9A;
    L_8C1E3B9A:;
    t39 = *(int *)((R4 + 0x40));
    *(unsigned int *)((R14 + (((((((t39 << 2) + t39) << 2) << 2) << 1) + (0x170 + R4)) + R13))) = 0x10000000;
    goto L_8C1E3C12;
    L_8C1E3C12:;
    t40 = (unsigned int)(R5 + 0x1) < (unsigned int)0x5;
    R5 = ((R5 + 0x1));
    if (t40) goto L_8C1E3B32;
    goto L_8C1E3C1A;
    L_8C1E3B86:;
    *(unsigned int *)(((int)stk + 4)) = R6;
    R0 = ((R6 + R8));
    R3 = ((*(int *)((((R6 + R13) + R14) + 0x0))));
    goto L_8C1E3B98;
    L_8C1E3BE0:;
    if ((R5 == (*(int *)((((0x710 + R4) + R9) + 0x0))))) goto L_8C1E3C12;
    goto L_8C1E3BEC;
    L_8C1E3BEC:;
    *(unsigned int *)((R14 + (R6 + R13))) = (*(int *)(((((0xB0 + R4) + R11) + R14) + 0x0)));
    goto L_8C1E3C12;
    L_8C1E3C00:;
    *(unsigned int *)((R14 + (R6 + R13))) = (*(int *)(((((0xB0 + R4) + R11) + R14) + 0x0)));
    goto L_8C1E3C12;
}

int playerReadPad(int a4)
{
    int t1;
    int t3;
    int t5;
    int t11;
    int t13;
    int t16;
    int t63;
    int t64;
    int t80;
    int t81;
    int t42;
    int t43;
    int t44;

    t1 = padDirOn((*(int *)((a4 + 0xB64))), 0x10);
    t3 = padDirOn((*(int *)((a4 + 0xB64))), 0x20);
    t5 = padDirOn((*(int *)((a4 + 0xB64))), 0x40);
    *(unsigned short *)((a4 + 0xD46)) = (((t1 | t3) | t5) | (padDirOn((*(int *)((a4 + 0xB64))), 0x80)));
    playerInputSide(a4);
    t11 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x10));
    t13 = 0x1;
    if (((t11 & 0x2) == 0) && ((0x400 & t11) == 0)) {
        t13 = 0x0;
    }
    *(unsigned short *)(((0xD44 + a4) + 0x0)) = ((((((0x5 & t11) == 0)) ? 1 : 0) ^ 0x1) + (t13 << 1));
    t16 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x4));
    if (((0x100000 & t16) != 0) && ((0x200000 & t16) != 0)) {
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            if (((*(int *)((a4 + 0xB68))) == 2) && (t42 = *(int *)((a4 + 0xB64)), t43 = *(int *)(((t42 << 2) + 0x8C29B898)), t44 = *(short *)((t43 + 0x22)), (int)t44 < (int)0xFFFFFFE2)) {
                *(unsigned short *)((a4 + 0xD44)) = 0x1;
            }
            if ((*(int *)((a4 + 0xB68))) == 5) {
                if ((int)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x22))) <= (int)0x1E) {
                    t63 = *(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x20));
                    t64 = (-t63);
                    if ((int)t63 >= 0) {
                        t64 = t63;
                    }
                    if ((int)t64 <= (int)0x1E) {
                    } else {
                        *(unsigned short *)((a4 + 0xD44)) = 0x2;
                    }
                } else {
                    *(unsigned short *)((a4 + 0xD44)) = 0x1;
                }
            }
        } else {
            t80 = *(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x20));
            t81 = (-t80);
            if ((int)t80 >= 0) {
                t81 = t80;
            }
            if ((int)t81 > (int)0x1E) {
                *(unsigned short *)((a4 + 0xD44)) = 0x1;
            } else {
                if ((int)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x22))) < (int)0xFFFFFFE2) {
                    *(unsigned short *)((a4 + 0xD44)) = 0x2;
                }
            }
        }
    }
    if ((int)(*(short *)((a4 + 0xD44))) > (int)0x3) {
        *(unsigned short *)((a4 + 0xD44)) = 0x0;
    }
    return 0xD44;
}

int kmiFLWCTRLInitFLWControl(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t16;
    int t17;
    int t33;
    int t34;

    if ((*(int *)0x8C20C6D4) == 0) {
        *(unsigned int *)0x8C20C6D4 = 0x8C45F934;
        t1 = 0x0;
        for (;;) {
            t2 = (0x8C45F79C + t1);
            t1 = (t1 + 0x4);
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            if ((unsigned int)t1 >= (unsigned int)0x8) {
                break;
            }
        }
        t3 = 0x0;
        for (;;) {
            t4 = (0x8C45F7A4 + t3);
            t3 = (t3 + 0x4);
            *(unsigned int *)((t4 + 0x0)) = 0x0;
            if ((unsigned int)t3 >= (unsigned int)0x10) {
                break;
            }
        }
    } else {
        t6 = (kmResetRenderer());
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            if ((*(int *)(((0x8C45F79C + t8) + 0x0))) != 0) {
                t6 = 0x7D4;
                t6 = (kmyDeleteNativeBuffer((*(int *)((0x8C45EFC4 + t6))), (*(int *)(((0x8C45F79C + t7) + 0x0)))));
            }
            t8 = (t8 + 0x4);
            t7 = (t7 + 0x4);
            if ((unsigned int)t8 >= (unsigned int)0x8) {
                break;
            }
        }
        t16 = 0x0;
        t17 = 0x0;
        for (;;) {
            *(unsigned int *)((t17 + 0x8C4607A0)) = 0xFFFFFFFF;
            if ((*(int *)(((0x8C45F7A4 + t17) + 0x0))) != 0) {
                kmyReleaseFrameBufferHandle((*(int *)(((0x8C45F7A4 + t16) + 0x0))));
            }
            t17 = (t17 + 0x4);
            t16 = (t16 + 0x4);
            if ((unsigned int)t17 >= (unsigned int)0x10) {
                break;
            }
        }
    }
    *(unsigned int *)0x8C4607B4 = 0x0;
    *(unsigned int *)0x8C4607C0 = 0x0;
    *(unsigned int *)0x8C4607C4 = 0xFFFFFFFF;
    *(unsigned int *)0x8C45F940 = 0x0;
    *(unsigned int *)0x8C45F944 = 0x0;
    *(unsigned int *)0x8C45F948 = 0x0;
    *(unsigned int *)0x8C45F94C = 0x0;
    *(unsigned int *)0x8C45F950 = 0x0;
    *(unsigned int *)0x8C45F954 = 0x0;
    *(unsigned int *)0x8C45F958 = 0x0;
    *(unsigned int *)0x8C45F95C = 0x0;
    *(unsigned int *)0x8C45F960 = 0x0;
    *(unsigned int *)0x8C4607D4 = 0x0;
    *(unsigned int *)0x8C4607D8 = 0x0;
    *(unsigned int *)0x8C4607E0 = 0x0;
    t33 = 0x0;
    for (;;) {
        *(unsigned int *)((t33 + 0x8C45F964)) = 0x0;
        *(unsigned int *)(((0x8C45F964 + t33) + 0xC)) = 0x0;
        t34 = (0x8C45F964 + t33);
        t33 = (t33 + 0x1C4);
        *(unsigned int *)((t34 + 0x10)) = 0x0;
        if ((unsigned int)t33 >= (unsigned int)0xE20) {
            break;
        }
    }
    *(unsigned int *)0x8C4607B8 = 0x0;
    *(unsigned int *)0x8C4607BC = 0x0;
    *(unsigned int *)0x8C4607E4 = 0x0;
    kmyConnectInterrupt(0x14, 0x8C1F9E16, 0x0);
    kmyConnectInterrupt(0x1D, 0x8C1F9D46, 0x0);
    kmySetDMAErrorCallback(0x0, 0x8C1F9640);
    return kmySetDMAErrorCallback(0x1, 0x8C1F9680);
}
