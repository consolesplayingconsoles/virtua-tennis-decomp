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
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    kmiCheckSysConfigSetting(a4);
    if (((*(int *)((a4 + 0x4))) & 0x100) != 0) {
        *(unsigned int *)0x8C45F924 = 0x1;
    } else {
        *(unsigned int *)0x8C45F924 = 0x0;
    }
    t3 = *(int *)((a4 + 0x20));
    R1008 = t3;
    t4 = *(int *)((a4 + 0x18));
    kmyInitAllocator((*(int *)0x8C45F7BC), (*(int *)((a4 + 0x18))), (R1008), (*(int *)((a4 + 0x1C))), (t3 + (((unsigned int)((((t4 << 1) + t4) << 2) << 1) >> 2) << 2)));
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
                R1008 = t37;
                kmyZeroMemory(((*(int *)(((R1008) + 0x1C))) + 0xA5000000), (*(int *)((t37 + 0x14))));
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


int kmEndPass(int a4)
{
    register int t1;
    register int t2;
    register int t11;
    register int t25;
    register int t39;
    register int t40;
    int stk[11];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
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
