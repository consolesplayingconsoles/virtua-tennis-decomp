/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int copy_device(void);
int kdRecvFrame(void);
int kmiFLWCTRLFindFreeNBuf(void);
int kmiFLWCTRLFindTailQueue(void);
int kmiFLWCTRLFindVacantQueue(void);
int kmiFLWCTRLLockNBuf(int);
int kmyAllocateNativeCommandBuffer(int, int, int);
int kmyCreateRegionArray(int);
int kmyDisablePassInfoPreSort(int);
int kmyDisablePassInfoZClear(int);
int kmyEnablePassInfoPreSort(int);
int kmyEnablePassInfoZClear(int);
int kmyGeneratePassInfo(int, int, int, int, int, int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyInitializeBGPlane(int);
int kmyRegisterNativeBuffer(int, int, int, int, int);
int kmyRequestCallback(int);
int kmySetPassDepth(int, int, int, int);
int kmySetPassInfo(int, int, int);
int kmySetRegionArrayCallback(int, int);
int kmySetVirticalFilterMode(int, int);
int kmySetupTA(int);
int kmyUseAnotherList(int, int);
int lightPlayerApply(int);
int lightRestore(int, int, int, int, int, int, int, int, int, int, int);
int mpdrv_clear_deviceinfo(int);
extern int mpdrv_frame_send();
int mpdrv_init_memory(void);
int mpdrv_memset_l(int, int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_swapmode(int);
int nlCalcPoint(int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSpriteGetNextSpriteIndex(void);
int nlSpriteSetVtxContext(int, int);
int nlTranslate(float, float, float);
int playerDrawNodeFacing(int, int, int, int, int, int);
int sklDrawNode(int);
Stk3 vecMake(float, float, float);
int kmiSetVertexBufferBase(int a4);
int kmiSetNativeBufferInfo(int a4, int a5);
int playerDrawModel(int a4);
int nlSpriteLoadTextureOnce_Sub(int a4, int a5, int a6, int a7);
int mpdrv_init_globals(void);
int kmiFLWCTRLGetRenderPacket(int a4, int a5);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int kdSendFrame(int a4, int a5);


int kmiSetNativeBufferInfo(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t141;
    int t6;
    int t29;
    int t30;
    int t31;
    int t80;
    int t121;
    int t132;
    int t14;
    int t15;
    int t38;
    int t92;
    int t93;
    int t100;
    int t101;
    int stk[31];

    t0 = 0x0;
    for (;;) {
        t1 = (0x8C45F79C + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    t3 = kmyAllocateNativeCommandBuffer(((unsigned int)(*(int *)0x8C45F7C4) >> 1), (((int)stk + 12) + 0x44), (((int)stk + 12) + 0x48));
    t141 = t3;
    if (t3 != 0) {
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        *(unsigned int *)(((int)stk + 32)) = 0x0;
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x30) + 0x10);
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 12) + 0x30) + 0xC);
        *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 12) + 0x30) + 0x8);
        *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 12) + 0x30) + 0x4);
        *(unsigned int *)(((int)stk + 52)) = (((int)stk + 12) + 0x30);
        for (;;) {
            t6 = *(int *)(((int)stk + 16));
            kmyRegisterNativeBuffer((*(int *)0x8C45F798), (0x8C45F79C + (t6 << 2)), (*(int *)((((((int)stk + 8) + 0x48) + (t6 << 2)) + 0x0))), ((unsigned int)(*(int *)0x8C45F7C4) >> 1), ((*(int *)0x8C45EFD8)));
            if (((*(int *)((a4 + 0x4))) & 0x2) == 0) {
                t14 = (((*(int *)(((int)stk + 16))) << 2) + 0x8C45F79C);
                t15 = 0x8C206A40;
            } else {
                t14 = (((*(int *)(((int)stk + 16))) << 2) + 0x8C45F79C);
                t15 = 0x8C2069C0;
            }
            kmySetRegionArrayCallback((*(int *)((t14 + 0x0))), t15);
            kmyGetDisplayRegionSize((*(int *)0x8C45EFD0), (((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x20), (*(int *)0x8C45EFD8));
            kmySetPassDepth((*(int *)(((0x8C45F79C + (*(int *)(((int)stk + 48)))) + 0x0))), (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 44))), (*(int *)((a4 + 0x34))));
            if ((unsigned int)0x0 >= (unsigned int)(*(int *)((a4 + 0x34)))) {
            } else {
                t29 = 0x0;
                for (;;) {
                    t30 = 0x0;
                    t31 = a5;
                    for (;;) {
                        if ((*(float *)((((t30 << 2) + (((a4 + 0x38) + (t29 * 0x38)) + 0x10)) + 0x0))) == 0.0f) {
                            if ((((*(int *)((a4 + 0x4))) & 16) != 0) && (t38 = *(int *)((((a4 + 0x38) + (t29 * 0x38)) + 0xC)), t38 == t30)) {
                                *(unsigned int *)(((((int)stk + 12) + 0x30) + (t30 << 2))) = 0x3;
                            } else {
                                *(unsigned int *)(((((int)stk + 12) + 0x30) + (t30 << 2))) = 0x0;
                            }
                        } else {
                            t31 = t30;
                            t31 = (t31 << 2);
                            if ((t30 != 0) && ((t30 != 4) && (t30 != 2))) {
                                *(unsigned int *)(((((int)stk + 12) + 0x30) + t31)) = 0x1;
                            } else {
                                if ((*(float *)((((((a4 + 0x38) + (t29 * 0x38)) + 0x10) + t31) + 0x0))) > 50.0f) {
                                    *(unsigned int *)(((((int)stk + 12) + 0x30) + t31)) = 0x3;
                                } else {
                                    *(unsigned int *)(((((int)stk + 12) + 0x30) + t31)) = 0x2;
                                }
                            }
                        }
                        t30 = (t30 + 0x1);
                        if ((unsigned int)t30 >= (unsigned int)0x5) {
                            break;
                        }
                    }
                    kmyGeneratePassInfo((((int)stk + 4) + 0x8), (*(int *)(((*(int *)(((int)stk + 52))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 28))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 56))) + 0x0))), ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))), ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
                    if (t29 != 0) {
                        kmyDisablePassInfoZClear(((int)stk + 12));
                    } else {
                        kmyEnablePassInfoZClear(((int)stk + 12));
                    }
                    if (((*(int *)(((t29 * 0x38) + (a4 + 0x38)))) & 1) != 0) {
                        kmyEnablePassInfoPreSort(((int)stk + 12));
                    } else {
                        kmyDisablePassInfoPreSort(((int)stk + 12));
                    }
                    if (((*(int *)(((t29 * 0x38) + (a4 + 0x38)))) & 128) != 0) {
                        t80 = *(int *)(((t29 * 0x38) + (a4 + 0x38)));
                        if ((t80 & 16) != 0) {
                            if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) != 0) {
                                kmyUseAnotherList(((int)stk + 12), 0x1);
                            }
                        } else {
                            if (((t80 & 32) != 0) && (t92 = *(int *)(((int)stk + 28)), t93 = *(int *)((t92 + 0x0)), t93 != 0)) {
                                kmyUseAnotherList(((int)stk + 12), 0x3);
                            }
                        }
                        if ((((*(int *)(((t29 * 0x38) + (a4 + 0x38)))) & 64) != 0) && (t100 = *(int *)(((int)stk + 20)), t101 = *(int *)((t100 + 0x0)), t101 != 0)) {
                            kmyUseAnotherList(((int)stk + 12), 0x4);
                        }
                    }
                    kmySetPassInfo((*(int *)(((0x8C45F79C + (*(int *)(((int)stk + 36)))) + 0x0))), t29, (*(int *)(((int)stk + 12))));
                    t29 = (t29 + 0x1);
                    if ((unsigned int)t29 < (unsigned int)(*(int *)((a4 + 0x34)))) continue;
                    break;
                }
            }
            t121 = *(int *)(((int)stk + 32));
            kmyCreateRegionArray((*(int *)(((0x8C45F79C + t121) + 0x0))));
            kmyInitializeBGPlane((*(int *)(((0x8C45F79C + t121) + 0x0))));
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
            *(unsigned int *)(((int)stk + 32)) = (t121 + 0x4);
            *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x4);
            *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x4);
            if ((unsigned int)(*(int *)(((int)stk + 16))) < (unsigned int)0x2) continue;
            break;
        }
        if ((*(int *)0x8C45EFF0) != 0) {
            t132 = 0x0;
            for (;;) {
                kmySetVirticalFilterMode((*(int *)(((0x8C45F79C + t132) + 0x0))), 0x0);
                t132 = (t132 + 0x4);
                if ((unsigned int)t132 >= (unsigned int)0x8) {
                    break;
                }
            }
        }
        t141 = 0x0;
    }
    return t141;
}


int kmiFLWCTRLGetRenderPacket(int a4, int a5)
{
    register int t2;
    register int t4;
    register int t9;
    register int t11;
    register int t12;
    register int t19;
    register int t23;
    register int t25;
    register int t26;
    register int t33;
    register int t35;
    register int t36;
    register int t43;
    register int t49;
    register int t61;
    register int t62;
    register int t1;
    register int t6;
    register int t7;

    if (((*(int *)0x8C45F93C) == 4) && (t1 = *(int *)0x8C45EFEC, t1 != 0)) {
        *(unsigned int *)0x8C4607E8 = 0x1;
        for (;;) {
            t2 = kmiFLWCTRLFindVacantQueue();
            if (t2 != 0) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        t6 = t2;
        t7 = t2;
    } else {
        *(unsigned int *)0x8C4607E8 = 0x0;
        for (;;) {
            t4 = kmiFLWCTRLFindVacantQueue();
            if (t4 != 0) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        t6 = t4;
        t7 = t4;
    }
    t9 = *(int *)(((*(int *)((a4 + 0x8))) + 0xC));
    *(unsigned int *)((t7 + 0x1C)) = 0xFFFFFFFF;
    *(unsigned int *)((t7 + 0x20)) = 0xFFFFFFFF;
    *(unsigned int *)((t7 + 0x24)) = 0xFFFFFFFF;
    *(unsigned int *)0x8C460784 = a5;
    if (a5 == 0) {
        t11 = t6;
        for (;;) {
            t12 = *(int *)0x8C45F94C;
            if (t12 != 0) {
                *(unsigned int *)0x8C45F94C = 0x0;
                *(unsigned int *)0x8C45F958 = 0x1;
                t11 = (*(int *)0x8C45F940);
                t11 = (t11 & (~t12));
                *(unsigned int *)0x8C45F940 = t11;
                *(unsigned int *)0x8C45F958 = 0x0;
            }
            t19 = *(int *)0x8C45F940;
            if (((((int)(-t9) >= 0) ? (t19 << ((-t9) & 31)) : ((-(int)(-t9) & 31) ? ((unsigned int)t19 >> (-(int)(-t9) & 31)) : 0)) & 0x1) == 0) {
                break;
            }
            t11 = (kmyRequestCallback(0x7));
        }
        *(unsigned int *)0x8C45F958 = 0x1;
        *(unsigned int *)0x8C45F940 = ((*(int *)0x8C45F940) | (((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)0x8C45F958 = 0x0;
        *(unsigned int *)((t7 + 0x14)) = 0x1;
        *(unsigned int *)((t7 + 0x1C)) = t9;
        *(volatile int *)0x8C45F7F0;
    } else {
        t23 = *(int *)0x8C45F7F0;
        if (t23 == 1) {
            *(volatile int *)0x8C45F918;
            t25 = 0x954;
            for (;;) {
                t26 = *(int *)0x8C45F94C;
                if (t26 != 0) {
                    *(unsigned int *)0x8C45F94C = 0x0;
                    *(unsigned int *)0x8C45F958 = 0x1;
                    t25 = (*(int *)0x8C45F940);
                    t25 = (t25 & (~t26));
                    *(unsigned int *)0x8C45F940 = t25;
                    *(unsigned int *)0x8C45F958 = 0x0;
                }
                t33 = *(int *)0x8C45F940;
                if (((((int)(-t9) >= 0) ? (t33 << ((-t9) & 31)) : ((-(int)(-t9) & 31) ? ((unsigned int)t33 >> (-(int)(-t9) & 31)) : 0)) & 0x1) == 0) {
                    break;
                }
                t25 = (kmyRequestCallback(0x7));
            }
        } else {
            t35 = t23;
            for (;;) {
                t36 = *(int *)0x8C45F94C;
                if (t36 != 0) {
                    *(unsigned int *)0x8C45F94C = 0x0;
                    *(unsigned int *)0x8C45F958 = 0x1;
                    t35 = (*(int *)0x8C45F940);
                    t35 = (t35 & (~t36));
                    *(unsigned int *)0x8C45F940 = t35;
                    *(unsigned int *)0x8C45F958 = 0x0;
                }
                t43 = *(int *)0x8C45F940;
                if (((((int)(-t9) >= 0) ? (t43 << ((-t9) & 31)) : ((-(int)(-t9) & 31) ? ((unsigned int)t43 >> (-(int)(-t9) & 31)) : 0)) & 0x1) == 0) {
                    break;
                }
                t35 = (kmyRequestCallback(0x7));
            }
        }
        *(unsigned int *)0x8C45F958 = 0x1;
        *(unsigned int *)0x8C45F940 = ((*(int *)0x8C45F940) | (((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)0x8C45F958 = 0x0;
        *(unsigned int *)((t7 + 0x1C)) = t9;
        for (;;) {
            t49 = kmiFLWCTRLFindFreeNBuf();
            if (t49 != -1) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        kmiFLWCTRLLockNBuf(t49);
        *(unsigned int *)((t7 + 0x20)) = t49;
        *(unsigned int *)((t7 + 0x3C)) = (*(int *)(((t49 << 2) + 0x8C460788)));
        *(unsigned int *)((t7 + 0x14)) = 0x3;
        kmySetupTA((*(int *)((t7 + 0x3C))));
    }
    t61 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t62 = kmiFLWCTRLFindTailQueue();
    if (t62 != 0) {
        *(unsigned int *)((t62 + 0x10)) = t7;
        *(unsigned int *)((t7 + 0xC)) = t62;
    } else {
        *(unsigned int *)((t7 + 0xC)) = 0x0;
    }
    *(unsigned int *)((t7 + 0x10)) = 0x0;
    *(unsigned int *)((t7 + 0x4)) = ((*(int *)0x8C4607E0) & 0x7FFFFFFF);
    *(unsigned int *)((t7 + 0x0)) = 0x1;
    _builtin_set_imask(((unsigned int)(((t61 & 0xF) << 2) << 2) >> 4));
    *(unsigned int *)0x8C4607E0 = ((*(int *)0x8C4607E0) + 0x1);
    *(unsigned int *)0x8C4607B0 = t7;
    return 0x0;
}


