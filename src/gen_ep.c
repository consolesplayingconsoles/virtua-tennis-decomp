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

int kmiSetVertexBufferBase(int a4)
{
    int t1;
    int t2;
    int t6;
    int t16;
    int t18;
    int t20;
    int t38;
    int t73;
    int t44;
    int t47;
    int t48;
    int t68;
    int t77;
    int t78;
    float u79;
    int t80;
    float u82;
    int t87;
    float u88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    float u95;
    float u103;
    float u104;
    float u108;
    float u109;
    int t115;
    int t117;
    int t130;
    int t131;
    int t132;
    int t137;
    int t138;
    int t141;
    int t143;
    int t144;
    int t145;
    int t146;
    int t151;
    int t158;
    int t170;
    int t171;
    int t172;
    int t173;
    float u176;
    int t179;
    float u180;
    int t183;
    int t186;
    int t187;
    int t188;
    int t193;
    int t201;
    int t208;
    int t211;
    int t17;
    float u75;
    float u41;
    float u42;
    int t99;
    int t100;
    float u136;
    int t155;
    int t166;
    int t190;
    int t191;
    int stk[22];

    t1 = *(int *)((a4 + 0x24));
    *(unsigned int *)0x8C45F00C = (*(int *)((a4 + 0x34)));
    t2 = *(int *)((a4 + 0x2C));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) - (0x1F & ((t2 + 0x1F) & 0xFFFFFFE0)));
    if (((*(int *)((a4 + 0x4))) & 0x10) != 0) {
        *(unsigned int *)((t1 + 0x14)) = 0x1;
        *(unsigned int *)0x8C45EFF4 = 0x1;
    } else {
        t6 = *(int *)((a4 + 0x28));
        *(unsigned int *)((t1 + 0x14)) = t6;
        *(unsigned int *)0x8C45EFF4 = t6;
        *(unsigned int *)(((int)stk + 16)) = (((int)((unsigned int)(*(int *)(((int)stk + 16))) / (unsigned int)(*(int *)((a4 + 0x28))))) & 0xFFFFFFE0);
    }
    if ((unsigned int)0x0 < (unsigned int)(*(int *)0x8C45EFF4)) {
        t16 = t2;
        t18 = 0x0;
        for (;;) {
            *(unsigned int *)((((t18 << 2) + 0x8C45F114) + 0x0)) = ((((((t18 << 2) + t18) << 2) << 2) << 1) + 0x8C45F134);
            *(unsigned int *)(((int)stk + 4)) = (((((t18 << 2) + t18) << 2) << 2) << 1);
            if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x34)))) {
                t20 = 0x0;
                for (;;) {
                    t17 = t20;
                    t17 = (t17 << 2);
                    t17 = (t17 + t20);
                    t17 = (t17 << 2);
                    t16 = 0x0;
                    for (;;) {
                        *(unsigned int *)((t16 + ((0x8C45F134 + (*(int *)(((int)stk + 4)))) + t17))) = 0x0;
                        t16 = (t16 + 0x4);
                        if ((unsigned int)t16 >= (unsigned int)0x14) {
                            break;
                        }
                    }
                    t20 = (t20 + 0x1);
                    if ((unsigned int)t20 >= (unsigned int)(*(int *)((a4 + 0x34)))) {
                        break;
                    }
                }
            }
            t18 = (t18 + 0x1);
            if ((unsigned int)t18 >= (unsigned int)(*(int *)0x8C45EFF4)) {
                break;
            }
        }
    }
    if (((*(int *)((a4 + 0x4))) & 64) == 0) {
        *(unsigned int *)0x8C45F794 = 0x0;
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x14);
        t38 = (((int)stk + 4) + 0x20);
        for (;;) {
            *(float *)((t38 + 0x0)) = 0.0f;
            t38 = (t38 + 0x4);
            if ((unsigned int)t38 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t73 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x34)))) {
            for (;;) {
                t44 = *(int *)(((int)stk + 8));
                *(unsigned int *)((((t44 << 2) + 0x8C45F6D4) + 0x0)) = (*(int *)(((((*(int *)(((int)stk + 8))) * 0x38) + (a4 + 0x38)) + 0xC)));
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 8))) * 0x38);
                t47 = ((t44 << 2) + 0x8C45F6D4);
                t48 = 0x0;
                for (;;) {
                    if (((*(int *)((a4 + 0x4))) & 0x10) != 0) {
                        if ((*(int *)((((a4 + 0x38) + (*(int *)(((int)stk + 4)))) + 0xC))) != t48) {
                            t47 = t48;
                            t47 = (t47 << 2);
                            *(unsigned int *)(((int)stk + 12)) = t47;
                            u41 = (*(float *)(((((int)stk + 4) + 0x20) + t47)));
                            u42 = (*(float *)((((((a4 + 0x38) + (*(int *)(((int)stk + 4)))) + 0x10) + t47) + 0x0)));
                            u41 = (u41 + u42);
                            *(float *)(((((int)stk + 4) + 0x20) + t47)) = u41;
                        }
                    } else {
                        t47 = t48;
                        t47 = (t47 << 2);
                        *(unsigned int *)(((int)stk + 12)) = t47;
                        u41 = (*(float *)(((((int)stk + 4) + 0x20) + t47)));
                        u42 = (*(float *)((((((a4 + 0x38) + (*(int *)(((int)stk + 4)))) + 0x10) + t47) + 0x0)));
                        u41 = (u41 + u42);
                        *(float *)(((((int)stk + 4) + 0x20) + t47)) = u41;
                    }
                    t48 = (t48 + 0x1);
                    if ((unsigned int)t48 >= (unsigned int)0x5) {
                        break;
                    }
                }
                t68 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t68 + 0x1);
                if ((unsigned int)(t68 + 0x1) >= (unsigned int)(*(int *)((a4 + 0x34)))) {
                    break;
                }
            }
            t73 = (t68 + 0x1);
            u75 = u41;
        }
        t77 = t73;
        t78 = (((int)stk + 4) + 0x20);
        u79 = u75;
        for (;;) {
            t80 = *(int *)((a4 + 0x34));
            u82 = (float)t80;
            if ((int)t80 < 0) {
                t77 = 0x4F800000;
                u79 = (*(float *)&(t77));
                u82 = ((float)t80 + u79);
            }
            *(float *)((t78 + 0x0)) = ((*(float *)((t78 + 0x0))) / u82);
            t78 = (t78 + 0x4);
            if ((unsigned int)t78 >= (unsigned int)((((int)stk + 4) + 0x20) + 0x14)) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        if ((unsigned int)0x0 >= (unsigned int)(*(int *)0x8C45EFF4)) {
        } else {
            t87 = ((t2 + 0x1F) & 0xFFFFFFE0);
            u88 = u79;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t89 = *(int *)(((int)stk + 12));
                t90 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = (((t90 << 2) + t90) << 2);
                t91 = (((t90 << 2) + t90) << 2);
                for (;;) {
                    t92 = *(int *)(((int)stk + 16));
                    t93 = *(int *)(((int)stk + 4));
                    u95 = (float)t92;
                    if ((int)t92 < 0) {
                        t91 = 0x4F800000;
                        u88 = (*(float *)&(t91));
                        u95 = ((float)t92 + u88);
                    }
                    if ((((*(int *)((a4 + 0x4))) & 0x10) != 0) && (t99 = *(int *)(((int)stk + 4)), t100 = *(int *)((a4 + 0x44)), t91 = t100, t91 == t99)) {
                        t91 = 0x4F000000;
                        *(unsigned int *)(((t93 << 2) + (0x8C45F134 + (((((t89 << 2) + t89) << 2) << 2) << 1)))) = 0x10000000;
                        *(unsigned int *)(((((0x8C45F134 + (((((t89 << 2) + t89) << 2) << 2) << 1)) + 0x14) + (t93 << 2)) + 0x0)) = t87;
                        u88 = (*(float *)&(t91));
                        *(unsigned int *)(((t93 << 2) + (0x8C45F634 + (*(int *)(((int)stk + 8)))))) = t87;
                        u103 = *(float *)(((((int)stk + 4) + 0x20) + (t93 << 2)));
                        u104 = ((u103 * u95) / 100.0f);
                        if (!(u88 > ((u103 * u95) / 100.0f))) {
                            u88 = (u88 + u88);
                            u104 = (((u103 * u95) / 100.0f) - u88);
                        }
                        *(unsigned int *)(((int)stk + 20)) = ((int)u104 & 0xFFFFFFE0);
                        *(unsigned int *)(((0x8C45F6F4 + (t93 << 2)) + 0x0)) = ((int)u104 & 0xFFFFFFE0);
                    } else {
                        t91 = 0x4F000000;
                        *(unsigned int *)(((t93 << 2) + (0x8C45F134 + (((((t89 << 2) + t89) << 2) << 2) << 1)))) = t87;
                        u88 = (*(float *)&(t91));
                        *(unsigned int *)(((t93 << 2) + (0x8C45F634 + (*(int *)(((int)stk + 8)))))) = t87;
                        u108 = *(float *)(((((int)stk + 4) + 0x20) + (t93 << 2)));
                        u109 = ((u108 * u95) / 100.0f);
                        if (!(u88 > ((u108 * u95) / 100.0f))) {
                            u88 = (u88 + u88);
                            u109 = (((u108 * u95) / 100.0f) - u88);
                        }
                        *(unsigned int *)(((int)stk + 20)) = ((int)u109 & 0xFFFFFFE0);
                        *(unsigned int *)(((0x8C45F6F4 + (t93 << 2)) + 0x0)) = ((int)u109 & 0xFFFFFFE0);
                    }
                    t115 = *(int *)(((int)stk + 4));
                    t91 = (*(int *)(((int)stk + 20)));
                    t87 = (t87 + t91);
                    *(unsigned int *)(((int)stk + 4)) = (t115 + 0x1);
                    if ((unsigned int)(t115 + 0x1) >= (unsigned int)0x5) {
                        break;
                    }
                }
                t117 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t117 + 0x1);
                if ((unsigned int)(t117 + 0x1) < (unsigned int)(*(int *)0x8C45EFF4)) continue;
                break;
            }
        }
        t130 = 0x0;
        for (;;) {
            t131 = *(int *)(((0x8C45F134 + t130) + 0x0));
            t132 = (0x8C45F074 + t130);
            t130 = (t130 + 0x4);
            *(unsigned int *)((t132 + 0x0)) = t131;
            if ((unsigned int)t130 >= (unsigned int)0x14) {
                break;
            }
        }
    } else {
        *(unsigned int *)0x8C45F794 = 0x1;
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x20) + 0x14);
        *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x20);
        if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x34)))) {
            for (;;) {
                t137 = *(int *)(((int)stk + 16));
                t138 = *(int *)(((int)stk + 16));
                *(unsigned int *)((((t138 << 2) + 0x8C45F6D4) + 0x0)) = (*(int *)((((t137 * 0x38) + (a4 + 0x38)) + 0xC)));
                t141 = (*(int *)(((int)stk + 32)));
                for (;;) {
                    *(float *)((t141 + 0x0)) = 0.0f;
                    t141 = (t141 + 0x4);
                    if ((unsigned int)t141 >= (unsigned int)(*(int *)(((int)stk + 28)))) {
                        break;
                    }
                }
                t143 = *(int *)(((int)stk + 16));
                t144 = ((t138 << 2) + 0x8C45F6D4);
                t145 = ((t137 * 0x38) + (a4 + 0x38));
                t146 = 0x0;
                for (;;) {
                    if (((*(int *)((a4 + 0x4))) & 0x10) != 0) {
                        t151 = ((a4 + 0x38) + (t143 * 0x38));
                        if ((*(int *)((((a4 + 0x38) + (t143 * 0x38)) + 0xC))) != t146) {
                            t144 = t146;
                            t144 = (t144 << 2);
                            t145 = t144;
                            *(unsigned int *)(((int)stk + 4)) = t144;
                            u136 = (*(float *)((((((a4 + 0x38) + (t143 * 0x38)) + 0x10) + t145) + 0x0)));
                            *(float *)(((((int)stk + 4) + 0x20) + t144)) = u136;
                            t151 = ((((a4 + 0x38) + (t143 * 0x38)) + 0x10) + t145);
                        }
                        t155 = t151;
                    } else {
                        t144 = t146;
                        t144 = (t144 << 2);
                        t145 = t144;
                        *(unsigned int *)(((int)stk + 4)) = t144;
                        u136 = (*(float *)((((((a4 + 0x38) + (t143 * 0x38)) + 0x10) + t145) + 0x0)));
                        *(float *)(((((int)stk + 4) + 0x20) + t144)) = u136;
                        t155 = ((((a4 + 0x38) + (t143 * 0x38)) + 0x10) + t145);
                    }
                    t146 = (t146 + 0x1);
                    if ((unsigned int)t146 >= (unsigned int)0x5) {
                        break;
                    }
                }
                t158 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((((t158 * 0x38) + (a4 + 0x38)) + 0x4)));
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t158 * 0x38) + (a4 + 0x38)) + 0x8)));
                if (((*(int *)((a4 + 0x4))) & 0x10) == 0) {
                    *(unsigned int *)(((int)stk + 4)) = ((int)((unsigned int)(*(int *)(((int)stk + 4))) / (unsigned int)(*(int *)((a4 + 0x28)))));
                } else {
                    t166 = t155;
                }
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) & 0xFFFFFFE0);
                t170 = *(int *)(((int)stk + 16));
                t171 = t166;
                t172 = 0x0;
                for (;;) {
                    t173 = *(int *)(((int)stk + 4));
                    u136 = (*(float *)(((((int)stk + 4) + 0x20) + t172)));
                    u176 = (float)t173;
                    if ((int)t173 < 0) {
                        t171 = 0x4F800000;
                        u176 = ((float)t173 + ((*(float *)&(t171))));
                    }
                    u136 = (u136 * u176);
                    t171 = 0x4F000000;
                    u136 = (u136 / 100.0f);
                    t179 = t171;
                    u180 = (*(float *)&t179);
                    if (!((*(float *)&t179) > u136)) {
                        u136 = (u136 - ((*(float *)&t179) + (*(float *)&t179)));
                        u180 = ((*(float *)&t179) + (*(float *)&t179));
                    }
                    t183 = ((0x8C45F6F4 + (((t170 << 2) + t170) << 2)) + t172);
                    t172 = (t172 + 0x4);
                    *(unsigned int *)((t183 + 0x0)) = ((int)u136 & 0xFFFFFFE0);
                    if ((unsigned int)t172 >= (unsigned int)0x14) {
                        break;
                    }
                }
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 16))) * 0x38);
                if ((unsigned int)0x0 < (unsigned int)(*(int *)0x8C45EFF4)) {
                    t186 = 0x0;
                    for (;;) {
                        t187 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 4)) = (((((t187 << 2) + t187) << 2) << 2) << 1);
                        t188 = 0x0;
                        for (;;) {
                            if ((((*(int *)((a4 + 0x4))) & 0x10) != 0) && (t190 = *(int *)(((int)stk + 24)), t191 = *(int *)((((a4 + 0x38) + t190) + 0xC)), t186 = t191, t188 == t186)) {
                                *(unsigned int *)(((t188 << 2) + ((0x8C45F134 + (*(int *)(((int)stk + 4)))) + (((t170 << 2) + t170) << 2)))) = 0x10000000;
                            } else {
                                t193 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 20)) = (t188 << 2);
                                *(unsigned int *)(((t188 << 2) + ((0x8C45F134 + t193) + (((t170 << 2) + t170) << 2)))) = (*(int *)(((int)stk + 12)));
                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)(((0x8C45F6F4 + (((t170 << 2) + t170) << 2)) + (*(int *)(((int)stk + 20)))))));
                            }
                            t188 = (t188 + 0x1);
                            if ((unsigned int)t188 >= (unsigned int)0x5) {
                                break;
                            }
                        }
                        t201 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t201 + 0x1);
                        if ((unsigned int)(t201 + 0x1) >= (unsigned int)(*(int *)0x8C45EFF4)) {
                            break;
                        }
                    }
                }
                t208 = 0x0;
                for (;;) {
                    *(unsigned int *)((t208 + (0x8C45F074 + (((t170 << 2) + t170) << 2)))) = (*(int *)((((0x8C45F134 + (((t170 << 2) + t170) << 2)) + t208) + 0x0)));
                    t208 = (t208 + 0x4);
                    if ((unsigned int)t208 >= (unsigned int)0x14) {
                        break;
                    }
                }
                t211 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t211 + 0x1);
                if ((unsigned int)(t211 + 0x1) < (unsigned int)(*(int *)((a4 + 0x34)))) continue;
                break;
            }
        }
    }
    return 0x0;
}

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

int playerDrawModel(int a4)
{
    int t0;
    int t28;
    int t33;
    int t39;
    int t49;
    int t25;
    int t26;
    int t62;
    int t75;
    int t88;
    int t89;
    int stk[17];

    t0 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = (0xD34 + a4);
    nlObjPutSetSaturate((*(float *)(((0xD34 + a4) + 0x0))), (*(float *)(((0xD34 + a4) + 0x4))));
    *(float *)((a4 + 0xD34)) = 0.78039217f;
    *(float *)((a4 + 0xD38)) = 0.388235301f;
    lightPlayerApply((*(int *)((a4 + 0xB5C))));
    if ((unsigned short)(*(short *)((a4 + 0xD3C))) != 0x3E7) {
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0xD3E))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0xD3C))));
        *(Stk3 *)((((int)stk + 8) + 0x4)) = vecMake(0.0f, 0.0f, 1.0f);
        nlCalcPoint((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x4));
        nlPopMatrix(0x1);
        nlObjPutSetLightDirectionV((((int)stk + 8) + 0x4));
        *(unsigned short *)((a4 + 0xD3C)) = 0x3E7;
    }
    if ((*(int *)((a4 + 0xC58))) == 16) {
        playerDrawNodeFacing((*(int *)(((t0 + 0x28) + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    } else {
        sklDrawNode((*(int *)(((t0 + 0x28) + 0x0))));
    }
    t28 = 0x1;
    if (((*(int *)0x8C287ADC) == 4) && ((t25 = *(int *)0x8C287B44, t25 == 0) && (t26 = *(int *)0x8C287B3C, (t26 & 0x800) == 0))) {
        t28 = 0x0;
    }
    nlLoadMatrix(((*(int *)((t0 + 0x38))) + 0xC0));
    t33 = *(int *)((a4 + 0xD10));
    *(unsigned int *)(((int)stk + 8)) = ((t33 + 0x1) * t28);
    nlObjPut((*(int *)(((((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x44) + (((t33 + 0x1) * t28) << 2)) + 0x0))));
    nlLoadMatrix(((*(int *)((t0 + 0x3C))) + 0xC0));
    t39 = *(int *)((a4 + 0xD14));
    *(unsigned int *)(((int)stk + 8)) = ((t39 + 0x1) * t28);
    nlObjPut((*(int *)(((((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x44) + (((t39 + 0x1) * t28) << 2)) + 0x14))));
    if (((*(int *)0x8C287B3C) & 64) == 0) {
        t49 = 0xFFFFFFFF;
        if ((int)(*(int *)(((((*(int *)((a4 + 0xB5C))) * 0x38) + 0x8C343264) + 0x30))) < (int)0x14) {
        } else {
            t49 = ((*(int *)(((((*(int *)((a4 + 0xB5C))) * 0x38) + 0x8C343264) + 0x30))) - 20);
        }
        *(unsigned int *)((a4 + 0xD6C)) = t49;
    }
    if (((*(int *)0x8C20D14C) == 6) && (t62 = *(int *)0x8C20D150, t62 == 5)) {
    } else {
        nlLoadMatrix(((0x1E0 + a4) + 0x2C0));
        if ((*(int *)((a4 + 0xD4C))) != 0) {
            nlScale(1.0f, (-1.0f), 1.0f);
        }
        if ((*(int *)((a4 + 0xD6C))) == -1) {
            if (t28 != 0) {
                t75 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x8)));
            } else {
                t75 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0xC)));
            }
            nlObjPut(t75);
        } else {
            if ((*(int *)((a4 + 0xD6C))) == 6) {
                nlTranslate(0.0f, (*(float *)0x8C01DECC), (*(float *)0x8C01DEC8));
            }
            if (t28 != 0) {
                t88 = 0x8C157548;
                t89 = ((*(int *)((a4 + 0xD6C))) << 2);
            } else {
                t88 = 0x8C157568;
                t89 = ((*(int *)((a4 + 0xD6C))) << 2);
            }
            nlObjPut((*(int *)((t89 + t88))));
        }
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    lightRestore((*(int *)((a4 + 0xB5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
    return (nlObjPutSetLightDirectionV(0x8C38B834));
}

int nlSpriteLoadTextureOnce_Sub(int a4, int a5, int a6, int a7)
{
    int t6;
    int t15;
    int t18;
    int t19;
    int t26;
    int t33;
    int t42;
    int t44;
    int t45;
    int t61;
    int t73;
    int t75;
    int stk[12];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0F3B40:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    R11 = ((((R6 << 2) << 2) + R4));
    R8 = (0x0);
    R9 = (R6);
    if ((R7 != 1)) goto L_8C0F3B6A;
    goto L_8C0F3B68;
    L_8C0F3B68:;
    R6 = ((*(int *)((R11 + 0xC))));
    goto L_8C0F3B6A;
    L_8C0F3B6A:;
    t6 = *(int *)0x8C458DCC;
    R10 = ((R6 + t6));
    R13 = ((((R6 + t6) << 2) << 1));
    R14 = (0x8C4241C0);
    if (((*(int *)((((*(int *)0x8C4241C0) + (((R6 + t6) << 2) << 1)) + 0x0))) != 0)) goto L_8C0F3B96;
    goto L_8C0F3B84;
    L_8C0F3B84:;
    *(unsigned int *)(((0x4 + ((*(int *)((R14 + 0x0))) + R13)) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    goto L_8C0F3B96;
    L_8C0F3B96:;
    t15 = *(int *)((R14 + 0x0));
    *(unsigned int *)(((t15 + R13) + 0x0)) = ((*(int *)(((t15 + R13) + 0x0))) + 0x1);
    t18 = *(int *)0x8C454C80;
    t19 = *(int *)((((*(int *)((R14 + 0x0))) + R13) + 0x4));
    R12 = (((t19 * 0x3C) + (*(int *)0x8C458608)));
    R13 = (t19);
    R4 = (((R10 << 1) + t18));
    if (((*(short *)((((R10 << 1) + t18) + 0x0))) != -1)) goto L_8C0F3BF0;
    goto L_8C0F3BC2;
    L_8C0F3BC2:;
    t26 = nlSpriteGetNextSpriteIndex();
    R14 = (t26);
    if ((t26 == -1)) goto L_8C0F3BE0;
    goto L_8C0F3BCC;
    L_8C0F3BCC:;
    *(unsigned short *)(((R10 << 1) + (*(int *)0x8C454C80))) = R14;
    goto L_8C0F3BF2;
    L_8C0F3BF2:;
    if (((*(int *)((R12 + 0x2C))) != 0)) goto L_8C0F3C0C;
    goto L_8C0F3BF8;
    L_8C0F3BF8:;
    t33 = nlLoadTextureMem(R11, R13, (*(int *)((R11 + 0x8))));
    nlCreateTextureParam(R13);
    *(unsigned int *)((R12 + 0x38)) = R13;
    R8 = ((R8 | t33));
    goto L_8C0F3C0C;
    L_8C0F3C0C:;
    *(unsigned int *)((R12 + 0x2C)) = ((*(int *)((R12 + 0x2C))) + 0x1);
    nlSpriteSetVtxContext(((((R14 << 2) << 2) << 1) + (*(int *)0x8C454C90)), R13);
    if (((*(int *)(((int)stk + 8))) != 0)) goto L_8C0F3C2E;
    goto L_8C0F3C2A;
    L_8C0F3C2A:;
    goto L_8C0F3D9C;
    L_8C0F3D9C:;
    R0 = (R8);
    goto L_8C0F3D9E;
    L_8C0F3D9E:;
    return R0;
    L_8C0F3C2E:;
    t42 = *(int *)0x8C454C90;
    t44 = *(int *)(((R9 << 2) + (*(int *)(((int)stk + 8)))));
    t45 = *(int *)((((((R14 << 2) << 2) << 1) + t42) + 0xC));
    *(unsigned short *)((((((R14 << 2) << 2) << 1) + t42) + 0x16)) = 0xFFFF;
    R12 = (t44);
    R13 = (((((R14 << 2) << 2) << 1) + t42));
    R4 = ((0x7 & ((unsigned int)t45 >> 27)));
    if (((*(int *)0x8C1DC888) == 0)) goto L_8C0F3C5E;
    goto L_8C0F3C5A;
    L_8C0F3C5A:;
    goto L_8C0F3D80;
    L_8C0F3D80:;
    if ((R4 == 5)) goto L_8C0F3D8C;
    goto L_8C0F3D86;
    L_8C0F3D86:;
    if ((R4 != 6)) goto L_8C0F3D9C;
    goto L_8C0F3D8C;
    L_8C0F3D8C:;
    *(unsigned int *)((R13 + 0xC)) = (((*(int *)((R13 + 0xC))) & 0xF81FFFFF) | (R12 << 21));
    goto L_8C0F3D9C;
    L_8C0F3C5E:;
    R5 = (0x8C450BF8);
    if (((*(int *)0x8C450BF8) != 0)) goto L_8C0F3C6A;
    goto L_8C0F3C66;
    L_8C0F3C66:;
    goto L_8C0F3D9C;
    L_8C0F3C6A:;
    if ((R4 == 5)) goto L_8C0F3C7A;
    goto L_8C0F3C70;
    L_8C0F3C70:;
    if ((R4 == 6)) goto L_8C0F3C7A;
    goto L_8C0F3C76;
    L_8C0F3C76:;
    goto L_8C0F3D9C;
    L_8C0F3C7A:;
    if (((int)R12 < (int)(*(short *)0x8C458E24))) goto L_8C0F3C86;
    goto L_8C0F3C82;
    L_8C0F3C82:;
    goto L_8C0F3D9C;
    L_8C0F3C86:;
    *(unsigned short *)((R13 + 0x16)) = R12;
    t61 = *(int *)0x8C458E38;
    R11 = (((((R12 << 1) + R12) << 2) + (*(int *)((R5 + 0x0)))));
    R14 = ((t61 + ((R12 << 2) << 1)));
    if (((*(short *)(((t61 + ((R12 << 2) << 1)) + 0x4))) == 0)) goto L_8C0F3D10;
    goto L_8C0F3CAA;
    L_8C0F3CAA:;
    *(unsigned short *)((R14 + 0x4)) = ((*(short *)((R14 + 0x4))) + 0x1);
    R12 = ((*(short *)((R14 + 0x0))));
    goto L_8C0F3D62;
    L_8C0F3D62:;
    *(unsigned int *)((R13 + 0xC)) = (((*(int *)((R13 + 0xC))) & 0xF81FFFFF) | (R12 << 21));
    goto L_8C0F3D9C;
    L_8C0F3D10:;
    *(unsigned char *)((R14 + 0x2)) = (*(signed char *)((R11 + 0x2)));
    *(unsigned char *)((R14 + 0x3)) = ((int)((*(int *)((R11 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((R14 + 0x4)) = 0x1;
    *(unsigned short *)((R14 + 0x6)) = R12;
    t73 = *(int *)((R11 + 0x8));
    t75 = nlSearchPalette((*(short *)((R11 + 0x2))), t73);
    R10 = (t73);
    R12 = (t75);
    if (((int)t75 < 0)) goto L_8C0F3D60;
    goto L_8C0F3D38;
    L_8C0F3D38:;
    *(unsigned short *)((R14 + 0x0)) = R12;
    nlSetPaletteMap(R12, R10);
    nlSetPaletteData(((R12 << 2) << 2), (*(int *)((R11 + 0x4))), R10);
    goto L_8C0F3D62;
    L_8C0F3D60:;
    R12 = (0x0);
    goto L_8C0F3D62;
    L_8C0F3BE0:;
    *(unsigned int *)0x8C454C7C = 0x3;
    R0 = (0x2);
    goto L_8C0F3D9E;
    L_8C0F3BF0:;
    R14 = ((*(short *)((R4 + 0x0))));
    goto L_8C0F3BF2;
}

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
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0x4);
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
        if ((unsigned int)t36 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
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

int kmiFLWCTRLGetRenderPacket(int a4, int a5)
{
    int t2;
    int t4;
    int t9;
    int t11;
    int t12;
    int t19;
    int t23;
    int t25;
    int t26;
    int t33;
    int t35;
    int t36;
    int t43;
    int t49;
    int t61;
    int t62;
    int t1;
    int t6;
    int t7;

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

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0x8C47317C = 0x8C472080;
    *(unsigned int *)0x8C473044 = a6;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFC8)) = (*(int *)(((int)stk + 4)));
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
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 8));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = (t35 + 0x4);
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
    t55 = *(int *)(((int)stk + 12));
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

int kdSendFrame(int a4, int a5)
{
    int t151;
    int t8;
    int t26;
    int t49;
    int t72;
    int t95;
    int t113;
    int t119;
    int t126;
    int t137;
    int t147;

    t151 = 0x0;
    if ((*(int *)0x8C4620DC) == 0) {
    } else {
        *(unsigned int *)0x8C4620F0 = ((*(int *)0x8C4620F4) - 1);
        *(unsigned int *)0x8C4620F4 = 0x0;
        t8 = a5;
        if ((*(int *)0x8C4620EC) != 0) {
            *(unsigned int *)0x8C4620F8 = ((*(int *)0xA05F80C4) & 0x3FF);
            *(unsigned int *)0x8C4620FC = ((short)((unsigned int)(*(int *)0xA05F80C4) >> 16) & 0x3FF);
            t8 = 0xA05F80C4;
        }
        *(unsigned int *)0x8C4620EC = 0x0;
        if ((*(int *)0x8C4620E8) != 0) {
            *(unsigned int *)0xA05F8040 = (*(int *)0x8C4620E4);
            *(unsigned int *)0xA05F80E8 = ((*(int *)0xA05F80E8) & 0xFFFFFFF7);
            *(unsigned int *)0x8C4620E8 = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                *(unsigned int *)0x8C461E78 = ((*(int *)0x8C461E78) + 0x1);
                if ((*(int *)0x8C461E94) != 0) {
                    t26 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFFE, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                *(unsigned int *)0x8C461E7C = ((*(int *)0x8C461E7C) + 0x1);
                if ((*(int *)0x8C461E94) != 0) {
                    t49 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFFD, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                *(unsigned int *)0x8C461E80 = ((*(int *)0x8C461E80) + 0x1);
                if ((*(int *)0x8C461E94) != 0) {
                    t72 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFFC, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                *(unsigned int *)0x8C461E84 = ((*(int *)0x8C461E84) + 0x1);
                if ((*(int *)0x8C461E94) != 0) {
                    t95 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFFB, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t113 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t113 >= 0) {
                copy_device();
            } else {
                if ((*(int *)0x8C461E94) != 0) {
                    t119 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFFA, (*(int *)0x8C461E64), t113);
                }
            }
            t147 = t113;
        } else {
            t126 = ((int (*)(int, int, int))(mpdrv_frame_send))(0x8C4620E8, t8, 0x8C4620EC);
            if ((int)t126 >= 0) {
                *(unsigned int *)0x8C46210C = 0x0;
                *(unsigned short *)(((((*(int *)0x8C4620E0) << 1) + 0x8C461E90) + 0x0)) = 0x0;
                *(unsigned short *)(((((*(int *)0x8C4620E0) << 1) + 0x8C461E88) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                *(unsigned int *)0x8C461E5C = ((*(int *)0x8C461E5C) + 0x1);
            } else {
                kdRecvFrame();
                *(unsigned int *)0x8C461E6C = ((*(int *)0x8C461E6C) + 0x1);
                if ((*(int *)0x8C461E94) != 0) {
                    t137 = ((int (*)(int, int, int, int))((*(int *)0x8C461E94)))(0x1, 0xFFFFFFF9, (*(int *)0x8C461E64), t126);
                }
            }
            t147 = t126;
        }
        t151 = t147;
    }
    return t151;
}
