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


int mpdrv_init_globals(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t21;
    int t24;
    int t26;
    int t32;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int stk[11];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10B4)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10B8)) = 0x0;
    t2 = 0x0;
    t3 = 0x6000;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)0x8C47317C;
        *(unsigned int *)((((0xFE8 + t5) + t2) + 0x0)) = ((*(int *)((t5 + 0xFC8))) + t4);
        t7 = *(int *)0x8C47317C;
        t9 = ((0xFE8 + t7) + t2);
        t2 = (t2 + 0x4);
        *(unsigned int *)(((t9 + 0x60) + 0x0)) = ((*(int *)((t7 + 0xFC8))) + t3);
        t3 = (t3 + 0x400);
        t4 = (t4 + 0x400);
        if ((unsigned int)t2 >= (unsigned int)0x60) {
            break;
        }
    }
    t11 = *(int *)0x8C47317C;
    *(unsigned int *)((t11 + 0x10A8)) = (*(int *)((t11 + 0xFC4)));
    t13 = *(int *)0x8C47317C;
    *(unsigned int *)((t13 + 0x10AC)) = ((*(int *)((t13 + 0xFC4))) + 0x3000);
    t15 = *(int *)0x8C47317C;
    *(unsigned int *)((t15 + 0xFCC)) = (*(int *)((t15 + 0x10A8)));
    mpdrv_memset_l(((*(int *)0x8C47317C) + 0x4), 0x0, 0x8);
    mpdrv_memset_l(((*(int *)0x8C47317C) + 0x28), 0x0, 0x108);
    t21 = 0x0;
    for (;;) {
        mpdrv_clear_deviceinfo((((*(int *)0x8C47317C) + 0x44C) + t21));
        t21 = (t21 + 0x78);
        if ((unsigned int)t21 >= (unsigned int)0xB40) {
            break;
        }
    }
    t24 = 0x0;
    for (;;) {
        t26 = ((0xF90 + (*(int *)0x8C47317C)) + t24);
        t24 = (t24 + 0x1);
        *(unsigned char *)((t26 + 0x0)) = 0x0;
        if ((int)t24 >= (int)0x18) {
            break;
        }
    }
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(signed char *)0x8C20AFEC);
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = (*(signed char *)0x8C20AFED);
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x2)) = (*(signed char *)0x8C20AFEE);
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)0x8C20AFEF);
    t32 = 0xF;
    if ((int)(unsigned char)(*(int *)0xA05F689C) <= (int)0x1) {
        t32 = 0x7;
    }
    R1004 = ((((int)stk + 4) + 0x4) + 0x4);
    t34 = 0xA05F689C;
    t35 = ((((int)stk + 4) + 0x4) + 0x4);
    t36 = (((int)stk + 4) + 0x4);
    t37 = 0x0;
    t38 = 0x0;
    t39 = t21;
    for (;;) {
        if (((*(signed char *)((t36 + 0x0))) & (signed char)t32) != 0) {
            t35 = t38;
            t34 = (*(int *)0x8C47317C);
            t35 = (t35 + 0x1);
            t39 = 0x0;
            *(unsigned char *)((((0xF90 + t34) + t37) + 0x0)) = 0x52;
            for (;;) {
                t39 = (t39 + 0x1);
                t34 = (*(int *)0x8C47317C);
                *(unsigned char *)((((0xF90 + t34) + t35) + 0x0)) = 0x45;
                t35 = (t35 + 0x1);
                if ((int)t39 >= (int)0x5) {
                    break;
                }
            }
        }
        t36 = (t36 + 0x1);
        t38 = (t38 + 0x6);
        t37 = (t37 + 0x6);
        if ((unsigned int)t36 >= (unsigned int)(R1004)) {
            break;
        }
    }
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C0)) = 0xC3500000;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFDC)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFD8)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFE0)) = 0x1;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C8)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10EC)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E8)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10CC)) = 0x5;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10D0)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10D8)) = 0xA;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10DC)) = 0x5;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E0)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E4)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFAC)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFB0)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFBC)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x0)) = 0x54524F50;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x24)) = 0x20564544;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x448)) = 0x4F464E49;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xF8C)) = 0x4C424E45;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFA8)) = 0x54415453;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFE4)) = 0x52444152;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10BC)) = 0x54554F54;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10D4)) = 0x43515244;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10F0)) = 0x434E5546;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10F8)) = 0x20444E45;
    mpdrv_swapmode(0x0);
    return (mpdrv_init_memory());
}


int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int t4;
    int t6;
    int t12;
    int t15;
    int t20;
    int t22;
    int t25;
    int t28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t36;
    int t45;
    int t47;
    int t49;
    int t51;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t99;
    int t88;
    int t89;
    int t90;
    int t91;
    int stk[11];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a4;
    R1004 = a5;
    *(unsigned int *)0x8C47317C = 0x8C472080;
    *(unsigned int *)0x8C473044 = a6;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFC8)) = (R1004);
    if (((*(int *)(((*(int *)0x8C47317C) + 0xFC4))) & 0x1F) != 0) {
        t4 = *(int *)0x8C47317C;
        *(unsigned int *)((t4 + 0xFC4)) = ((*(int *)((t4 + 0xFC4))) + 0x20);
        t6 = *(int *)0x8C47317C;
        *(unsigned int *)((t6 + 0xFC4)) = ((*(int *)((t6 + 0xFC4))) & 0xFFFFFFE0);
    }
    t12 = *(int *)0x8C47317C;
    if (((*(int *)((t12 + 0xFC8))) & 0x1F) != 0) {
        *(unsigned int *)((t12 + 0xFC8)) = ((*(int *)((t12 + 0xFC8))) + 0x20);
        t15 = *(int *)0x8C47317C;
        *(unsigned int *)((t15 + 0xFC8)) = ((*(int *)((t15 + 0xFC8))) & 0xFFFFFFE0);
    }
    t20 = *(int *)0x8C47317C;
    *(unsigned int *)((t20 + 0xFC4)) = ((*(int *)((t20 + 0xFC4))) | 0xA0000000);
    t22 = *(int *)0x8C47317C;
    *(unsigned int *)((t22 + 0xFC8)) = ((*(int *)((t22 + 0xFC8))) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0x8C47317C)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0x8C47317C)) + t25);
        t25 = (t25 + 0x4);
        *(unsigned int *)(((t28 + 0x60) + 0x0)) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    R1008 = (R1012);
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = R1004;
            R1004 = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = R1008;
            t30 = (t30 + 0x1);
            R1008 = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0x8C47317C)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            *(unsigned int *)(((((t36 << 2) + (0xFE8 + (*(int *)0x8C47317C))) + 0x60) + 0x0)) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0x8C47317C;
    *(unsigned int *)((t45 + 0x10A8)) = (*(int *)((t45 + 0xFC4)));
    t47 = *(int *)0x8C47317C;
    *(unsigned int *)((t47 + 0x10AC)) = (((a7 << 8) << 2) + (*(int *)((t47 + 0xFC4))));
    t49 = *(int *)0x8C47317C;
    *(unsigned int *)((t49 + 0xFCC)) = (*(int *)((t49 + 0x10A8)));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0x8C47317C)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t55 = R1012;
    if ((int)a7 > 0) {
        t56 = 0x0;
        t57 = t55;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0x8C47317C))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0x8C47317C))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0x8C47317C))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0x8C20B030;
    t74 = 0x8C20B030;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0x8C20B030;
    t78 = 0x8C20B030;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0x8C47317C)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0x8C20B040) {
            break;
        }
    }
    mpdrv_set_end_ns();
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFC0)) = 0x1;
    *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x8C)) = 0x6155404F;
    *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x10)) = 0x0;
    t99 = *(int *)0x8C47317C;
    *(unsigned int *)(((*(int *)((t99 + 0x10F4))) + 0x80)) = ((*(int *)((t99 + 0x10C0))) | (*(int *)((t99 + 0x10D0))));
    *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x14)) = 0x1;
    return 0x0;
}

