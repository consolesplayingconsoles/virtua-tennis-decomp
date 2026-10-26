/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int check_cache(int);
int check_caps(int);
int gdDecSubcode(int, int, int, int);
int gdFsGetDrvStatG(int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmSetStrideWidth(int);
int kmiGetITPCurrent(int);
int kmiStartupDMA(void);
int kmiWriteRegister(int, int);
int kmtex_TextureSize(int);
int kmyContinueTA(int);
int kmySetupTA(int, int, int, int);
int kmyiSetScreenSize(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
float nlInnerProduct(int, int);
float nlPow(float, float);
int nlRand(void);
float nlScalor(int);
int nlkmCreateTextureSurface_stride(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndSeqRequest(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vecLineCrossXZ(int, ...);
extern int vecMake();
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);
int cpuDblAimArc(int a4, int a5, int a6, int a7);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int kmiCallbackEndOf(int a4, int a5, int a6);
int kmyInitializeJAMMA15KHz(int a4);
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int kmiLaunchQ(int a4);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7);
int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4);
int kmyInitializeNTSC(int a4);
int nlsndStreamInit(int a4, int a5, int a6);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7, int a8);


int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int t210;
    int t1;
    int t3;
    int t11;
    int t199;
    int t188;
    int t21;
    int t22;
    int t25;
    int t172;
    int t26;
    int t165;
    int t27;
    int t33;
    int t34;
    int t37;
    int t38;
    int t45;
    int t46;
    int t47;
    int t49;
    int t58;
    int t67;
    int t72;
    int t77;
    int t83;
    int t89;
    int t95;
    int t101;
    int t107;
    int t113;
    int t119;
    int t121;
    int t122;
    int t125;
    int t126;
    int t134;
    int t143;
    int t159;
    int t161;
    int t180;
    int t35;
    int t36;
    int t44;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t210 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) == 0) {
    } else {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)(((0x8C20C74C + ((((t1 << 2) + t1) << 2) << 2)) + 0xC)));
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = ((int)((int)(*(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0x8C20C74C) + 0xC))) / (int)0xA));
        }
        t11 = vmsio_ismount(a4);
        t199 = 0xFFFFFF01;
        if (t11 == 0) {
        } else {
            t188 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)(((int)stk + 8))) + 0x8C464598) + 0x8))) == 0) {
            } else {
                memset((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x0, 0x200);
                t21 = vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))));
                if ((int)t21 < 0) {
                    t22 = 0xFFFFFF81;
                    if (t21 != 0xFFFFFF40) {
                        t22 = 0xFFFFFF01;
                    }
                    t180 = t22;
                } else {
                    t25 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))));
                    t172 = 0xFFFFFF01;
                    if ((int)t25 < 0) {
                    } else {
                        t26 = check_caps(((a4 * 0x148) + 0x8C464598));
                        t165 = 0xFFFFFF83;
                        if ((int)t26 >= 0) {
                            t27 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                            *(unsigned int *)((t27 + 0x30)) = (*(int *)((t27 + 0x1C)));
                            memset((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x0, 0x200);
                            t33 = *(int *)(((int)stk + 12));
                            t34 = (memset(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x10), 0x20, 0x20));
                            t37 = 0x0;
                            t38 = t33;
                            for (;;) {
                                if ((int)t37 >= (int)0x20) {
                                    break;
                                }
                                t34 = (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20)));
                                t35 = t37;
                                t36 = (*(signed char *)((t38 + 0x0)));
                                t38 = (t38 + 0x1);
                                t35 = (t35 + 0x10);
                                t37 = (t37 + 0x1);
                                *(unsigned char *)((t35 + t34)) = t36;
                            }
                            set_vmstime((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))));
                            t45 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x30);
                            t46 = 0x0;
                            t47 = (((int)stk + 4) + 0x10);
                            for (;;) {
                                if ((int)t46 >= (int)0x8) {
                                    break;
                                }
                                t44 = (*(signed char *)((t47 + 0x0)));
                                t47 = (t47 + 0x1);
                                t46 = (t46 + 0x1);
                                *(unsigned char *)((t45 + 0x0)) = t44;
                                t45 = (t45 + 0x1);
                            }
                            t49 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                            *(unsigned int *)(((int)stk + 4)) = t49;
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)((t49 + 0xC)));
                            *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x14)));
                            t58 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 4))) + 0x4))), t47);
                            *(unsigned char *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x4E)) = (*(int *)(((int)stk + 16)));
                            *(unsigned char *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x4F)) = 0x0;
                            t67 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))));
                            t72 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x4A, (*(int *)(((int)stk + 12))));
                            t77 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x46, (*(int *)(((int)stk + 8))));
                            t83 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x18))));
                            t89 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x10))));
                            t95 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x1C))));
                            t101 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x20))));
                            t107 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x34))));
                            t113 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x38))));
                            t119 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0))));
                            t121 = (memset((((a4 << 8) << 1) + 0x8C4694A4), 0x0, 0x200));
                            t122 = 0x0;
                            for (;;) {
                                if ((int)t122 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x0)))) {
                                    t125 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                                    t126 = *(int *)((t125 + 0x18));
                                    *(volatile int *)(((0x30 + t125) + 0x0));
                                    *(unsigned int *)(((int)stk + 4)) = t126;
                                    t121 = (memset((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x28))), 0x0, ((t126 << 8) << 1)));
                                    t121 = (write_dir_all(a4));
                                    t122 = 0xFFFA;
                                    t121 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x8))), t122));
                                    t134 = 0x0;
                                    for (;;) {
                                        if ((int)t134 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t121 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t134), t122));
                                        t134 = (t134 + 0x1);
                                    }
                                    t121 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x8))), t122));
                                    t143 = 0x0;
                                    for (;;) {
                                        if ((int)t143 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t121 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0xC))) + t143), t122));
                                        t143 = (t143 + 0x1);
                                    }
                                    t121 = (write_fat(a4));
                                    t121 = (memset((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x55, 0x10));
                                    t121 = (write_sys(a4));
                                    t121 = (memset((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))), 0x0, 0x10));
                                    t121 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xB)) = t121;
                                    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xC)) = t121;
                                    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xA)) = t121;
                                    t121 = (check_cache(a4));
                                    return t121;
                                }
                                t159 = 0x0;
                                if (a8 != 0) {
                                    t121 = (vmsfs_write_retry(a4, t122, (((a4 << 8) << 1) + 0x8C4694A4)));
                                    t159 = t121;
                                }
                                t121 = t159;
                                if (t121 != 0xFFFFFF01) {
                                    t161 = 0xFFFF;
                                    if (t121 != 0xFFFFFF40) {
                                        t161 = 0xFFFC;
                                    }
                                    t121 = (set_fat(a4, t122, t161));
                                    t122 = (t122 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t165 = 0xFFFFFF01;
                        }
                        t172 = t165;
                    }
                    t180 = t172;
                }
                t188 = t180;
            }
            t199 = t188;
        }
        t210 = t199;
    }
    return t210;
}

int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7)
{
    int t3;
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
    int t101;
    int t102;
    int t95;
    int t96;
    int t89;
    int t90;
    int t83;
    int t84;
    int t77;
    int t78;
    int t71;
    int t72;
    int t66;
    int t67;
    int t61;
    int t62;
    int t108;
    int t27;
    int t23;
    int t18;
    int t14;
    int t10;
    int t6;

    if (((0xFF00 & a7) != 0x1000) && ((0xFF00 & a7) != 0x1100)) {
        *(unsigned int *)((a4 + 0x0)) = 0x2;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if (((0xFF00 & a7) != 0x500) && ((0xFF00 & a7) != 0x600)) {
        if (((0xFF00 & a7) != 0x700) && ((0xFF00 & a7) != 0x800)) {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            if ((unsigned char)a7 != 0) {
                if ((unsigned char)a7 != 1) {
                    if ((unsigned char)a7 != 2) {
                        if ((unsigned char)a7 != 3) {
                            t3 = 0x4;
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                t3 = 0x0;
                            }
                            t6 = t3;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                            t6 = 0x0;
                        }
                        t10 = t6;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                        t10 = 0x0;
                    }
                    t14 = t10;
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                    t14 = 0x0;
                }
                t18 = t14;
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
                t18 = 0x0;
            }
            t23 = t18;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
            t23 = 0x0;
        }
        t27 = t23;
    } else {
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t27 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t58 = t27;
    t59 = 0x0;
    if (a5 != 8) {
        t54 = t27;
        t55 = 0x8;
        if (a5 != 16) {
            t50 = t27;
            t51 = 0x10;
            if (a5 != 32) {
                t46 = t27;
                t47 = 0x18;
                if (a5 != 64) {
                    t42 = t27;
                    t43 = 0x20;
                    if (a5 != 0x80) {
                        t38 = t27;
                        t39 = 0x28;
                        if (a5 != 0x100) {
                            t34 = t27;
                            t35 = 0x30;
                            if (a5 != 0x200) {
                                t30 = t27;
                                t31 = 0x38;
                                if (a5 != 0x400) {
                                    t30 = 0x4;
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
    t101 = t58;
    t102 = t59;
    if (a6 != 8) {
        t95 = t58;
        t96 = (t59 | 0x1);
        if (a6 != 16) {
            t89 = t58;
            t90 = (t59 | 0x2);
            if (a6 != 32) {
                t83 = t58;
                t84 = (t59 | 0x3);
                if (a6 != 64) {
                    t77 = t58;
                    t78 = (t59 | 0x4);
                    if (a6 != 0x80) {
                        t71 = t58;
                        t72 = (t59 | 0x5);
                        if (a6 != 0x100) {
                            t66 = t58;
                            t67 = (t59 | 0x6);
                            if (a6 != 0x200) {
                                t61 = t58;
                                t62 = (t59 | 0x7);
                                if (a6 != 0x400) {
                                    t61 = 0x4;
                                    t62 = t59;
                                }
                                t66 = t61;
                                t67 = t62;
                            }
                            t71 = t66;
                            t72 = t67;
                        }
                        t77 = t71;
                        t78 = t72;
                    }
                    t83 = t77;
                    t84 = t78;
                }
                t89 = t83;
                t90 = t84;
            }
            t95 = t89;
            t96 = t90;
        }
        t101 = t95;
        t102 = t96;
    }
    t108 = t101;
    if (((0xFF00 & a7) != 0x900) && (((0xFF00 & a7) != 0xB00) && (((0xFF00 & a7) != 0xD00) && (((0xFF00 & a7) != 0x500) && (((0xFF00 & a7) != 0x700) && (a5 != a6)))))) {
        t108 = 0x4;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x80000000);
    }
    if (((0xFF00 & a7) == 0xB00) || ((0xFF00 & a7) == 0x900)) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4000000);
    }
    if (((0xFF00 & a7) == 0x300) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1000) || ((0xFF00 & a7) == 0x1100)))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x40000000);
    }
    if ((0xFF00 & a7) == 0xB00) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x2000000);
    }
    if (((0xFF00 & a7) == 0x500) || (((0xFF00 & a7) == 0x600) || (((0xFF00 & a7) == 0x700) || ((0xFF00 & a7) == 0x800)))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x8000);
    }
    *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | t102);
    kmtex_TextureSize(a4);
    return t108;
}

int kmiCallbackEndOf(int a4, int a5, int a6)
{
    int t6;
    int t25;
    int t38;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C202FA0:;
    R13 = (0x8C203420);
    if (((*(int *)((R4 + 0x0))) != 17)) goto L_8C202FB4;
    goto L_8C202FB0;
    L_8C202FB0:;
    R14 = ((*(int *)((R13 + 0x18))));
    goto L_8C202FB6;
    L_8C202FB6:;
    if ((R14 != 0)) goto L_8C202FBE;
    goto L_8C202FBA;
    L_8C202FBA:;
    goto L_8C20323C;
    L_8C20323C:;
    return 0x1;
    L_8C202FBE:;
    t6 = *(int *)((R4 + 0x0));
    R0 = (t6);
    R12 = (0x8C208CA0);
    if ((t6 == 17)) goto L_8C202FE6;
    goto L_8C202FC6;
    L_8C202FC6:;
    if ((R0 == 18)) goto L_8C203020;
    goto L_8C202FCA;
    L_8C202FCA:;
    if ((R0 == 19)) goto L_8C203026;
    goto L_8C202FCE;
    L_8C202FCE:;
    if ((R0 == 25)) goto L_8C203030;
    goto L_8C202FD2;
    L_8C202FD2:;
    if ((R0 == 24)) goto L_8C203036;
    goto L_8C202FD6;
    L_8C202FD6:;
    if ((R0 == 23)) goto L_8C20303C;
    goto L_8C202FDA;
    L_8C202FDA:;
    if ((R0 == 22)) goto L_8C203042;
    goto L_8C202FDE;
    L_8C202FDE:;
    if ((R0 == 21)) goto L_8C203080;
    goto L_8C202FE2;
    L_8C202FE2:;
    goto L_8C20308A;
    L_8C20308A:;
    if (((unsigned short)((*(short *)((R14 + 0x1C))) & (*(short *)((R14 + 0x1E)))) == (unsigned short)(*(short *)((R14 + 0x1C))))) goto L_8C2030A4;
    goto L_8C2030A0;
    L_8C2030A0:;
    goto L_8C20323C;
    L_8C2030A4:;
    R4 = (0x0);
    R6 = (0x8);
    if (((*(int *)((R14 + 0x8))) == 4)) goto L_8C2030B2;
    goto L_8C2030AE;
    L_8C2030AE:;
    goto L_8C2031A0;
    L_8C2031A0:;
    t25 = *(int *)((R14 + 0x20));
    R0 = (t25);
    if ((t25 == 0)) goto L_8C2031B2;
    goto L_8C2031A6;
    L_8C2031A6:;
    if ((R0 == 1)) goto L_8C2031CE;
    goto L_8C2031AA;
    L_8C2031AA:;
    if ((R0 == 2)) goto L_8C2031EA;
    goto L_8C2031AE;
    L_8C2031AE:;
    goto L_8C203204;
    L_8C203204:;
    if (((R6 & (*(int *)((R14 + 0x4)))) == 0)) goto L_8C20320E;
    goto L_8C20320A;
    L_8C20320A:;
    *(unsigned int *)((R13 + 0x1C)) = R4;
    goto L_8C203210;
    L_8C203210:;
    *(unsigned int *)((R14 + 0x24)) = ((int)((unsigned int)((((((*(int *)((R14 + 0x24))) - (*(int *)0xFFD8000C)) << 2) << 2) << 2) << 1) / (unsigned int)0x64));
    *(unsigned int *)((R14 + 0x28)) = R4;
    if (((*(int *)((R14 + 0x18))) == 0)) goto L_8C203236;
    goto L_8C203230;
    L_8C203230:;
    t38 = ((int (*)(int, int, int))((*(int *)((R14 + 0x18)))))(R14, R5, R6);
    goto L_8C203236;
    L_8C203236:;
    kmiStartupDMA();
    goto L_8C20323C;
    L_8C20320E:;
    *(unsigned int *)((R13 + 0x18)) = R4;
    goto L_8C203210;
    L_8C2031EA:;
    *(unsigned short *)((R13 + 0x3C)) = ((*(short *)((R13 + 0x3C))) - 1);
    *(unsigned short *)((R13 + 0x3A)) = ((*(short *)((R13 + 0x3A))) + 0x1);
    *(unsigned short *)((R13 + 0x3A)) = ((*(short *)((R13 + 0x3A))) & 0x1F);
    *(unsigned int *)((R13 + 0x28)) = R4;
    R0 = (0x3A);
    goto L_8C203204;
    L_8C2031CE:;
    *(unsigned short *)((R13 + 0x36)) = ((*(short *)((R13 + 0x36))) - 1);
    *(unsigned short *)((R13 + 0x34)) = ((*(short *)((R13 + 0x34))) + 0x1);
    *(unsigned short *)((R13 + 0x34)) = ((*(short *)((R13 + 0x34))) & 0x1F);
    *(unsigned int *)((R13 + 0x24)) = R4;
    R0 = (0x34);
    goto L_8C203204;
    L_8C2031B2:;
    *(unsigned short *)((R13 + 0x30)) = ((*(short *)((R13 + 0x30))) - 1);
    *(unsigned short *)((R13 + 0x2E)) = ((*(short *)((R13 + 0x2E))) + 0x1);
    *(unsigned short *)((R13 + 0x2E)) = ((*(short *)((R13 + 0x2E))) & 0x1F);
    *(unsigned int *)((R13 + 0x20)) = R4;
    R0 = (0x2E);
    goto L_8C203204;
    L_8C2030B2:;
    if (((unsigned int)(*(int *)((R14 + 0x30))) > (unsigned int)0x0)) goto L_8C2030BE;
    goto L_8C2030BA;
    L_8C2030BA:;
    goto L_8C2031A0;
    L_8C2030BE:;
    R5 = (0x1);
    if (((R6 & (*(int *)((R14 + 0x4)))) == 0)) goto L_8C203112;
    goto L_8C2030C6;
    L_8C2030C6:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) - 1);
    *(unsigned int *)((R14 + 0x10)) = ((*(int *)((R14 + 0x10))) + (*(int *)((R14 + 0x34))));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x38))));
    *(unsigned short *)((R14 + 0x1E)) = R4;
    *(volatile int *)0xFFA0002C;
    *(unsigned int *)0xFFA0002C = R4;
    *(unsigned int *)0xFFA00020 = (*(int *)((R14 + 0x10)));
    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((R14 + 0xC))) >> 2) >> 2) >> 1);
    *(unsigned int *)0xFFA0002C = 0x12C1;
    *(unsigned int *)0xFFA00040 = 0x8201;
    *(unsigned int *)0xA05F6800 = (*(int *)((R14 + 0x14)));
    *(unsigned int *)0xA05F6804 = (*(int *)((R14 + 0xC)));
    R2 = (0xA05F6808);
    goto L_8C203154;
    L_8C203154:;
    *(unsigned int *)((R2 + 0x0)) = R5;
    goto L_8C20323C;
    L_8C203112:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) - 1);
    *(unsigned int *)((R14 + 0x10)) = ((*(int *)((R14 + 0x10))) + (*(int *)((R14 + 0x34))));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x38))));
    *(unsigned short *)((R14 + 0x1E)) = R4;
    *(unsigned int *)0xA05F7C80 = 0x6702007F;
    *(unsigned int *)0xA05F7C00 = (*(int *)((R14 + 0x14)));
    *(unsigned int *)0xA05F7C04 = (*(int *)((R14 + 0x10)));
    *(unsigned int *)0xA05F7C08 = (*(int *)((R14 + 0xC)));
    *(unsigned int *)0xA05F7C0C = (*(int *)((R14 + 0x3C)));
    *(unsigned int *)0xA05F7C10 = R4;
    *(unsigned int *)0xA05F7C14 = R5;
    R2 = (0xA05F7C18);
    goto L_8C203154;
    L_8C203080:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x10));
    goto L_8C203084;
    L_8C203084:;
    *(unsigned short *)((R14 + 0x1E)) = R0;
    kmiGetITPCurrent((*(int *)((R14 + 0x30))));
    goto L_8C20308A;
    L_8C203042:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x8));
    goto L_8C203084;
    L_8C20303C:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x4));
    goto L_8C203084;
    L_8C203036:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x2));
    goto L_8C203084;
    L_8C203030:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x1));
    goto L_8C203084;
    L_8C203026:;
    R3 = (0x100);
    goto L_8C203028;
    L_8C203028:;
    *(unsigned short *)((R14 + 0x1E)) = ((*(short *)((R14 + 0x1E))) | R3);
    goto L_8C20308A;
    L_8C203020:;
    R3 = (0x8000);
    goto L_8C203028;
    L_8C202FE6:;
    R3 = (0x4000);
    goto L_8C203028;
    L_8C202FB4:;
    R14 = ((*(int *)((R13 + 0x1C))));
    goto L_8C202FB6;
}

int kmyInitializeJAMMA15KHz(int a4)
{
    int t14;
    int t55;
    int t62;
    int t2;
    int t8;
    int t17;
    int t23;
    int t29;
    int stk[65];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x353;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t2 = *(int *)0x8C45EE2C, (t2 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 24)) = 0x218;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x10C;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C;
    *(unsigned int *)(((int)stk + 8)) = 0x334;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t8 = *(int *)0x8C45EE2C, (t8 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 16)) = 0x24;
        *(unsigned int *)(((int)stk + 20)) = 0x214;
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x12;
        *(unsigned int *)(((int)stk + 20)) = 0x10A;
    }
    *(unsigned int *)(((int)stk + 28)) = 0x57;
    t14 = 0x102;
    if (((*(int *)0x8C45EE2C) & 32) != 0) {
        t14 = 0x104;
    }
    *(unsigned int *)(((int)stk + 120)) = t14;
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t17 = *(int *)0x8C45EE2C, (t17 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 32)) = 0xC;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x6;
    }
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t23 = *(int *)0x8C45EE2C, (t23 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 36)) = 0x16C;
    } else {
        *(unsigned int *)(((int)stk + 36)) = 0x319;
    }
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t29 = *(int *)0x8C45EE2C, (t29 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 40)) = 0x1F;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x1;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    if (((*(int *)0x8C45EE2C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 52)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 52)) = 0x0;
        }
    } else {
        if (((*(int *)0x8C45EE2C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if (((*(int *)0x8C45EE2C) & 16) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 252)) = 0xA0;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    if (((*(int *)0x8C45EE2C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 244)) = 0x17;
        } else {
            *(unsigned int *)(((int)stk + 244)) = 0x16;
        }
    } else {
        if (((*(int *)0x8C45EE2C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x17;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x16;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x17;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x16;
            }
        }
    }
    *(unsigned int *)(((int)stk + 248)) = 0x17;
    *(unsigned int *)0x8C45EEE0 = 0xF0;
    t55 = *(int *)(((int)stk + 16));
    *(unsigned int *)0x8C45EED8 = ((((int)((unsigned int)((int)((unsigned int)t55 + (unsigned int)0x0)) + ((((int)0x0 > (int)t55)) ? 1u : 0u))) >> 1) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t62 = ((int (*)(int, int, int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), 0x0, 0x17, 0x16);
    return 0x0;
}

int gdFsGetStatG(int a4, int a5, int a6, int a7)
{
    int t2;
    int t25;
    int t47;
    int t51;
    int t59;
    int t63;
    int t69;
    int t75;
    int t87;
    int t97;
    int t113;
    int stk[18];

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
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1DD3CE:;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x20)) = 0x1;
    t2 = *(int *)(((*(int *)0x8C20C204) + 0x1C));
    R12 = (0x0);
    R13 = (0x8C20C204);
    R14 = (t2);
    if ((t2 != 0)) goto L_8C1DD3F4;
    goto L_8C1DD3F0;
    L_8C1DD3F0:;
    R4 = (0x0);
    goto L_8C1DD3F6;
    L_8C1DD3F6:;
    R10 = ((((int)stk + 4) + 0x1C));
    R11 = ((((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x10)))))(R4, (((int)stk + 4) + 0x1C), R6, R7)));
    if ((R14 != 0)) goto L_8C1DD40E;
    goto L_8C1DD40A;
    L_8C1DD40A:;
    goto L_8C1DD63C;
    L_8C1DD63C:;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x20)) = R12;
    return R11;
    L_8C1DD40E:;
    R0 = (R11);
    R9 = (0x2);
    if ((R11 == 0)) goto L_8C1DD446;
    goto L_8C1DD416;
    L_8C1DD416:;
    if ((R0 == 1)) goto L_8C1DD446;
    goto L_8C1DD41A;
    L_8C1DD41A:;
    if ((R0 != 65)) goto L_8C1DD422;
    goto L_8C1DD41E;
    L_8C1DD41E:;
    goto L_8C1DD540;
    L_8C1DD540:;
    t25 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x24)))))((*(int *)((R14 + 0x3C))), ((int)stk + 4), R6, R7);
    R4 = (t25);
    if ((t25 != 0)) goto L_8C1DD568;
    goto L_8C1DD552;
    L_8C1DD552:;
    if (((int)(*(int *)(((int)stk + 4))) <= 0)) goto L_8C1DD55E;
    goto L_8C1DD558;
    L_8C1DD558:;
    *(unsigned short *)((R14 + 0x4A)) = R12;
    goto L_8C1DD562;
    L_8C1DD562:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R14 + 0x20)));
    goto L_8C1DD63C;
    L_8C1DD55E:;
    *(unsigned short *)((R14 + 0x4A)) = R9;
    goto L_8C1DD562;
    L_8C1DD568:;
    if ((R4 != 1)) goto L_8C1DD63C;
    goto L_8C1DD56E;
    L_8C1DD56E:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)(((int)stk + 4)));
    goto L_8C1DD63C;
    L_8C1DD422:;
    if ((R0 != 4)) goto L_8C1DD42A;
    goto L_8C1DD426;
    L_8C1DD426:;
    goto L_8C1DD574;
    L_8C1DD574:;
    *(unsigned int *)((R14 + 0x40)) = (*(int *)((R10 + 0x8)));
    if (((*(short *)((R14 + 0x48))) != 1)) goto L_8C1DD63C;
    goto L_8C1DD582;
    L_8C1DD582:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R10 + 0x0)));
    goto L_8C1DD63C;
    L_8C1DD42A:;
    if ((R0 != 67)) goto L_8C1DD432;
    goto L_8C1DD42E;
    L_8C1DD42E:;
    goto L_8C1DD63C;
    L_8C1DD432:;
    if ((R0 != 5)) goto L_8C1DD43A;
    goto L_8C1DD436;
    L_8C1DD436:;
    goto L_8C1DD588;
    L_8C1DD588:;
    *(unsigned short *)((R14 + 0x50)) = R11;
    *(unsigned short *)((R14 + 0x52)) = (*(int *)((R10 + 0x0)));
    *(unsigned int *)((R14 + 0x44)) = (*(int *)((R10 + 0x4)));
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    if (((*(short *)((R14 + 0x52))) != -29)) goto L_8C1DD5F0;
    goto L_8C1DD5A6;
    L_8C1DD5A6:;
    if (((*(int *)((R14 + 0x44))) != 58)) goto L_8C1DD5E0;
    goto L_8C1DD5AE;
    L_8C1DD5AE:;
    t47 = gdFsGetDrvStatG(R4, R5, R6, R7);
    R4 = (t47);
    if ((t47 == 6)) goto L_8C1DD5BC;
    goto L_8C1DD5B8;
    L_8C1DD5B8:;
    if ((R4 != 0)) goto L_8C1DD5F0;
    goto L_8C1DD5BC;
    L_8C1DD5BC:;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFE9;
    goto L_8C1DD5F0;
    L_8C1DD5F0:;
    t51 = *(short *)((R14 + 0x52));
    R4 = (t51);
    if ((t51 == -23)) goto L_8C1DD600;
    goto L_8C1DD5FA;
    L_8C1DD5FA:;
    if ((R4 != -33)) goto L_8C1DD606;
    goto L_8C1DD600;
    L_8C1DD600:;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x34)) = 0x1;
    goto L_8C1DD606;
    L_8C1DD606:;
    if (((*(int *)(((*(int *)((R13 + 0x0))) + 0x24))) == 0)) goto L_8C1DD61C;
    goto L_8C1DD60E;
    L_8C1DD60E:;
    t59 = *(int *)((R13 + 0x0));
    t63 = ((int (*)(int, int, int, int))((*(int *)((t59 + 0x24)))))((*(int *)((t59 + 0x28))), (*(short *)((R14 + 0x52))), R6, R7);
    goto L_8C1DD61C;
    L_8C1DD61C:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_8C1DD63C;
    goto L_8C1DD622;
    L_8C1DD622:;
    t69 = ((int (*)(int, int, int, int))((*(int *)((R14 + 0x34)))))((*(int *)((R14 + 0x38))), (*(short *)((R14 + 0x52))), R6, R7);
    goto L_8C1DD63C;
    L_8C1DD5E0:;
    if (((*(int *)((R14 + 0x44))) != 0x104)) goto L_8C1DD5F0;
    goto L_8C1DD5EA;
    L_8C1DD5EA:;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFDB;
    goto L_8C1DD5F0;
    L_8C1DD43A:;
    if ((R0 != 64)) goto L_8C1DD442;
    goto L_8C1DD43E;
    L_8C1DD43E:;
    goto L_8C1DD588;
    L_8C1DD442:;
    goto L_8C1DD630;
    L_8C1DD630:;
    *(unsigned short *)((R14 + 0x50)) = (unsigned char)R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    goto L_8C1DD63C;
    L_8C1DD446:;
    t75 = *(short *)((R14 + 0x48));
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R12;
    *(unsigned short *)((R14 + 0x50)) = R11;
    *(unsigned int *)((R14 + 0x3C)) = R12;
    *(unsigned short *)((R14 + 0x48)) = R12;
    R4 = (t75);
    if ((R11 == 1)) goto L_8C1DD462;
    goto L_8C1DD45E;
    L_8C1DD45E:;
    goto L_8C1DD63C;
    L_8C1DD462:;
    R0 = (R4);
    if ((R4 != 1)) goto L_8C1DD48C;
    goto L_8C1DD468;
    L_8C1DD468:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R10 + 0x0)));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x1C))));
    *(unsigned short *)((R14 + 0x4A)) = R9;
    if (((*(int *)((R14 + 0x24))) != 0)) goto L_8C1DD482;
    goto L_8C1DD47E;
    L_8C1DD47E:;
    goto L_8C1DD63C;
    L_8C1DD482:;
    t87 = ((int (*)(int, int, int, int))((*(int *)((R14 + 0x24)))))((*(int *)((R14 + 0x28))), R5, R6, R7);
    goto L_8C1DD63C;
    L_8C1DD48C:;
    if ((R0 == 3)) goto L_8C1DD4A2;
    goto L_8C1DD490;
    L_8C1DD490:;
    R0 = (R4);
    if ((R4 != 4)) goto L_8C1DD4A8;
    goto L_8C1DD496;
    L_8C1DD496:;
    *(unsigned int *)((R14 + 0x18)) = (*(int *)((R14 + 0x20)));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x1C))));
    goto L_8C1DD4A2;
    L_8C1DD4A2:;
    *(unsigned short *)((R14 + 0x4A)) = R9;
    goto L_8C1DD63C;
    L_8C1DD4A8:;
    if ((R0 != 7)) goto L_8C1DD4F4;
    goto L_8C1DD4AC;
    L_8C1DD4AC:;
    t97 = (gdDecSubcode(((*(int *)((R13 + 0x0))) + 0x40), (((int)stk + 4) + 0x4), R6, R7)) == 0;
    if (t97) goto L_8C1DD4D0;
    goto L_8C1DD4BE;
    L_8C1DD4BE:;
    *(unsigned short *)((R14 + 0x50)) = 0x5;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFED;
    *(unsigned int *)((R14 + 0x44)) = R12;
    goto L_8C1DD5F0;
    L_8C1DD4D0:;
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x4)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x8)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0xC)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((*(int *)((R14 + 0x8))) + 0x10)) = ((*(int *)(((int)stk + 24))) & 0xFFFFFF);
    goto L_8C1DD63C;
    L_8C1DD4F4:;
    if ((R4 == 8)) goto L_8C1DD4FE;
    goto L_8C1DD4FA;
    L_8C1DD4FA:;
    goto L_8C1DD63C;
    L_8C1DD4FE:;
    t113 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((R13 + 0x0))) + 0xC))) + 0x48)))))(0x8C45A13C, 0x8C45A140, (*(int *)((R14 + 0x4))), 0x8C45A144);
    R4 = (t113);
    if ((t113 == 0)) goto L_8C1DD52A;
    goto L_8C1DD516;
    L_8C1DD516:;
    *(unsigned int *)((R14 + 0x3C)) = R4;
    *(unsigned short *)((R14 + 0x50)) = 0x4;
    *(unsigned short *)((R14 + 0x48)) = 0x6;
    *(unsigned int *)(((*(int *)((R13 + 0x0))) + 0x1C)) = R14;
    goto L_8C1DD63C;
    L_8C1DD52A:;
    *(unsigned short *)((R14 + 0x50)) = 0x5;
    *(unsigned short *)((R14 + 0x52)) = 0xFFFFFFE4;
    *(unsigned int *)((R14 + 0x44)) = R12;
    *(unsigned int *)(((*(int *)((R14 + 0x4))) + 0x0)) = R12;
    goto L_8C1DD5F0;
    L_8C1DD3F4:;
    R4 = ((*(int *)((R14 + 0x3C))));
    goto L_8C1DD3F6;
}

int kmiLaunchQ(int a4)
{
    int t0;
    int t9;
    int t16;
    int t40;
    int t90;
    int t114;
    int t115;
    int t100;
    int t75;
    int t65;
    int t55;
    int t50;
    int t45;
    int t95;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 == 1) {
                kmySetupTA((*(int *)((a4 + 0x30))), 0xA05F7C10, 0xA05F7C14, 0xA05F7C18);
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t9 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t9;
                *(unsigned int *)0xA05F6808 = 0x1;
                t75 = t9;
            } else {
                if (t0 == 2) {
                    kmyContinueTA((*(int *)((a4 + 0x30))));
                    *(volatile int *)0xFFA0002C;
                    *(unsigned int *)0xFFA0002C = 0x0;
                    *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                    *(unsigned int *)0xFFA0002C = 0x12C1;
                    *(unsigned int *)0xFFA00040 = 0x8201;
                    *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                    t16 = *(int *)((a4 + 0xC));
                    *(unsigned int *)0xA05F6804 = t16;
                    *(unsigned int *)0xA05F6808 = 0x1;
                    t65 = t16;
                } else {
                    if (t0 == 3) {
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x14C, (*(int *)((a4 + 0x34))));
                        kmiWriteRegister(0x148, (*(int *)((a4 + 0x30))));
                        *(volatile int *)0xFFA0002C;
                        *(unsigned int *)0xFFA0002C = 0x0;
                        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                        *(unsigned int *)0xFFA0002C = 0x12C1;
                        *(unsigned int *)0xFFA00040 = 0x8201;
                        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)0xA05F6804 = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)0xA05F6808 = 0x1;
                        t55 = 0xA05F6808;
                    } else {
                        if (t0 == 5) {
                            *(unsigned int *)0xA05F7C80 = 0x6702007F;
                            *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                            *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                            *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                            *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                            *(unsigned int *)0xA05F7C10 = 0x0;
                            *(unsigned int *)0xA05F7C14 = 0x1;
                            *(unsigned int *)0xA05F7C18 = 0x1;
                            t50 = 0xA05F7C04;
                        } else {
                            if (t0 == 7) {
                                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                *(unsigned int *)0xA05F7C10 = 0x0;
                                *(unsigned int *)0xA05F7C14 = 0x1;
                                *(unsigned int *)0xA05F7C18 = 0x1;
                                t45 = 0xA05F7C04;
                            } else {
                                t40 = t0;
                                if (t0 == 6) {
                                    *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                    *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                    *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                    *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                    *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                    *(unsigned int *)0xA05F7C10 = 0x0;
                                    *(unsigned int *)0xA05F7C14 = 0x1;
                                    *(unsigned int *)0xA05F7C18 = 0x1;
                                    t40 = 0xA05F7C04;
                                }
                                t45 = t40;
                            }
                            t50 = t45;
                        }
                        t55 = t50;
                    }
                    t65 = t55;
                }
                t75 = t65;
            }
            t100 = t75;
        } else {
            if (((*(int *)((a4 + 0x4))) & 8) != 0) {
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t90 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t90;
                *(unsigned int *)0xA05F6808 = 0x1;
                t95 = t90;
            } else {
                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x3C)));
                *(unsigned int *)0xA05F7C10 = 0x0;
                *(unsigned int *)0xA05F7C14 = 0x1;
                *(unsigned int *)0xA05F7C18 = 0x1;
                t95 = 0xA05F7C04;
            }
            t100 = t95;
        }
        t115 = t100;
    } else {
        *(volatile int *)0xFFA0002C;
        *(unsigned int *)0xFFA0002C = 0x0;
        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
        *(unsigned int *)0xFFA0002C = 0x12C1;
        *(unsigned int *)0xFFA00040 = 0x8201;
        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
        t114 = *(int *)((a4 + 0xC));
        *(unsigned int *)0xA05F6804 = t114;
        *(unsigned int *)0xA05F6808 = 0x1;
        t115 = t114;
    }
    *(unsigned int *)((a4 + 0x24)) = (*(int *)0xFFD8000C);
    *(unsigned int *)((a4 + 0x28)) = 0x3;
    return t115;
}

int kmytex_ABSalloc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;
    int t7;
    int t8;
    int t17;
    int t10;
    int t11;
    int t12;
    int t13;
    int t133;
    int t30;
    int t33;
    int t47;
    int t62;
    int t51;
    int t68;
    int t81;
    int t70;
    int t85;
    int t114;
    int t86;
    int t89;
    int t90;
    int t97;
    int t9;
    int t14;
    int t15;
    int t128;
    int t40;
    int t123;
    int t58;
    int t118;
    int t77;
    int t110;
    int t106;
    int stk[16];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((int)stk + 12)) = a7;
    t0 = *(int *)((a6 + 0x0));
    t1 = ((t0 + 0x20) & 0xFFFFFFE0);
    if ((t0 & 0x1F) == 0) {
        t1 = t0;
    }
    t4 = ((a5 + 0x20) & 0xFFFFFFE0);
    if ((a5 & 0x1F) == 0) {
        t4 = a5;
    }
    t7 = *(short *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = ((t7 << 2) << 2);
    t8 = *(int *)(((((t7 << 2) << 2) + 0x8C20C9EC) + 0x8));
    t17 = 0x0;
    if (t8 != 0) {
        t10 = 0x8C20C9EC;
        t11 = t8;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((t11 + 0xC));
            if (((unsigned int)t13 <= (unsigned int)t1) && ((t14 = *(int *)((t11 + 0x10)), t9 = t14, t9 = (t9 + t13), (unsigned int)t9 > (unsigned int)t1) && (((unsigned int)t13 <= (unsigned int)(t4 + t1)) && (t15 = *(int *)((t11 + 0x10)), t10 = t15, t10 = (t10 + t13), (unsigned int)t10 >= (unsigned int)(t4 + t1))))) {
                t12 = t11;
                t11 = 0x0;
            } else {
                t11 = (*(int *)((t11 + 0x8)));
            }
            if (t11 == 0) {
                break;
            }
        }
        t17 = t12;
    }
    t133 = 0x3;
    if (t17 == 0) {
    } else {
        if ((*(int *)((t17 + 0x10))) == t4) {
            t30 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + t30);
            kmytex_FBDeQueueEntry(((*(int *)(((int)stk + 4))) + 0x8), ((0x8C20C9EC + t30) + 0xC), t17);
            t33 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + t33);
            kmytex_FBEnQueueTop((*(int *)(((int)stk + 4))), ((0x8C20C9EC + t33) + 0x4), t17);
            *(unsigned int *)((a6 + 0x0)) = (*(int *)((t17 + 0xC)));
            *(unsigned int *)((t17 + 0x14)) = a6;
            *(unsigned short *)((t17 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 12))) == 0) {
                t40 = ((*(short *)((t17 + 0x0))) | 0x40);
            } else {
                t40 = ((*(short *)((t17 + 0x0))) | 0x80);
            }
            *(unsigned short *)((t17 + 0x0)) = t40;
            *(unsigned short *)((t17 + 0x0)) = ((*(short *)((t17 + 0x0))) | (*(int *)(((int)stk + 16))));
            t128 = 0x0;
        } else {
            if ((*(int *)((t17 + 0xC))) == t1) {
                t47 = kmytex_FBAllocEntry();
                t62 = 0x3;
                if (t47 == 0) {
                } else {
                    *(unsigned int *)((t47 + 0xC)) = (*(int *)((t17 + 0xC)));
                    *(unsigned int *)((t47 + 0x10)) = t4;
                    *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) - t4);
                    *(unsigned int *)((t17 + 0xC)) = ((*(int *)((t17 + 0xC))) + t4);
                    t51 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + t51);
                    kmytex_FBEnQueueTop((*(int *)(((int)stk + 4))), ((0x8C20C9EC + t51) + 0x4), t47);
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((t47 + 0xC)));
                    *(unsigned int *)((t47 + 0x14)) = a6;
                    *(unsigned short *)((t47 + 0x0)) = 0x1;
                    if ((*(short *)(((int)stk + 12))) == 0) {
                        t58 = ((*(short *)((t47 + 0x0))) | 0x40);
                    } else {
                        t58 = ((*(short *)((t47 + 0x0))) | 0x80);
                    }
                    *(unsigned short *)((t47 + 0x0)) = t58;
                    *(unsigned short *)((t47 + 0x0)) = ((*(short *)((t47 + 0x0))) | (*(int *)(((int)stk + 16))));
                    t62 = 0x0;
                }
                t123 = t62;
            } else {
                if (((*(int *)((t17 + 0xC))) + (*(int *)((t17 + 0x10)))) == (t4 + t1)) {
                    t68 = kmytex_FBAllocEntry();
                    t81 = 0x3;
                    if (t68 != 0) {
                        *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) - t4);
                        *(unsigned int *)((t68 + 0xC)) = t1;
                        *(unsigned int *)((t68 + 0x10)) = t4;
                        t70 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 4)) = (0x8C20C9EC + t70);
                        kmytex_FBEnQueueTop((*(int *)(((int)stk + 4))), ((0x8C20C9EC + t70) + 0x4), t68);
                        *(unsigned int *)((a6 + 0x0)) = (*(int *)((t68 + 0xC)));
                        *(unsigned int *)((t68 + 0x14)) = a6;
                        *(unsigned short *)((t68 + 0x0)) = 0x1;
                        if ((*(short *)(((int)stk + 12))) == 0) {
                            t77 = ((*(short *)((t68 + 0x0))) | 0x40);
                        } else {
                            t77 = ((*(short *)((t68 + 0x0))) | 0x80);
                        }
                        *(unsigned short *)((t68 + 0x0)) = t77;
                        *(unsigned short *)((t68 + 0x0)) = ((*(short *)((t68 + 0x0))) | (*(int *)(((int)stk + 16))));
                        t81 = 0x0;
                    }
                    t118 = t81;
                } else {
                    t85 = kmytex_FBAllocEntry();
                    t114 = 0x3;
                    if (t85 != 0) {
                        t86 = kmytex_FBAllocEntry();
                        *(unsigned int *)(((int)stk + 4)) = t86;
                        if (t86 == 0) {
                            kmytex_FBFreeEntry(t85);
                            t110 = 0x3;
                        } else {
                            *(unsigned int *)(((int)stk + 24)) = (*(int *)((t17 + 0x10)));
                            t89 = *(int *)((t17 + 0xC));
                            *(unsigned int *)(((int)stk + 20)) = (t1 - t89);
                            *(unsigned int *)((t17 + 0x10)) = (t1 - t89);
                            *(unsigned int *)((t85 + 0xC)) = t1;
                            *(unsigned int *)((t85 + 0x10)) = t4;
                            t90 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 28)) = (0x8C20C9EC + t90);
                            kmytex_FBEnQueueTop((*(int *)(((int)stk + 28))), ((0x8C20C9EC + t90) + 0x4), t85);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0xC)) = (t4 + t1);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x10)) = (((*(int *)(((int)stk + 24))) - t4) - (*(int *)(((int)stk + 20))));
                            t97 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 20)) = (0x8C20C9EC + t97);
                            kmytex_FBEnQueueEntry(((*(int *)(((int)stk + 20))) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((0x8C20C9EC + t97) + 0xC))));
                            *(unsigned int *)((a6 + 0x0)) = (*(int *)((t85 + 0xC)));
                            *(unsigned int *)((t85 + 0x14)) = a6;
                            *(unsigned short *)((t85 + 0x0)) = 0x1;
                            if ((*(short *)(((int)stk + 12))) == 0) {
                                t106 = ((*(short *)((t85 + 0x0))) | 0x40);
                            } else {
                                t106 = ((*(short *)((t85 + 0x0))) | 0x80);
                            }
                            *(unsigned short *)((t85 + 0x0)) = t106;
                            *(unsigned short *)((t85 + 0x0)) = ((*(short *)((t85 + 0x0))) | (*(int *)(((int)stk + 16))));
                            t110 = 0x0;
                        }
                        t114 = t110;
                    }
                    t118 = t114;
                }
                t123 = t118;
            }
            t128 = t123;
        }
        t133 = t128;
    }
    return t133;
}

int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4)
{
    float u68;
    int t31;
    float u11;
    float u13;
    float u15;
    float u17;
    float u19;
    float u21;
    float u23;
    float u25;
    float u34;
    float u36;
    float u38;
    float u40;
    float u42;
    float u44;
    float u46;
    float u48;
    int t76;
    int t77;
    int t78;
    int t79;
    float u58;

    *(unsigned int *)0x8C4607EC = ((*(int *)((a4 + 0x0))) & 0xFFFFFF3F);
    *(unsigned int *)0x8C4607F0 = (*(int *)((a4 + 0x4)));
    *(unsigned int *)0x8C4607F4 = (*(int *)((a4 + 0x8)));
    *(unsigned int *)0x8C4607F8 = (*(int *)((a4 + 0xC)));
    u68 = f4;
    if ((a5 == 7) || ((a5 == 8) || ((a5 == 2) || ((a5 == 10) || ((a5 == 13) || (a5 == 14)))))) {
        if (((*(int *)0x8C4607EC) & 0x30) != 32) {
            *(unsigned int *)0x8C4607FC = 0xFFFFFFFF;
            *(unsigned int *)0x8C460800 = 0xFFFFFFFF;
            u58 = f4;
        } else {
            t31 = (a4 + 0x10);
            if ((((*(int *)0x8C4607EC) & 4) != 0) || (a5 == 10)) {
                u11 = *(float *)(((a4 + 0x20) + 0x10));
                u13 = (u11 * 255.0f);
                if (!(2.14748365e+09f > (u11 * 255.0f))) {
                    u13 = ((u11 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u15 = *(float *)(((a4 + 0x20) + 0x14));
                u17 = (u15 * 255.0f);
                if (!(2.14748365e+09f > (u15 * 255.0f))) {
                    u17 = ((u15 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u19 = *(float *)(((a4 + 0x20) + 0x18));
                u21 = (u19 * 255.0f);
                if (!(2.14748365e+09f > (u19 * 255.0f))) {
                    u21 = ((u19 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u23 = *(float *)(((a4 + 0x20) + 0x1C));
                u25 = (u23 * 255.0f);
                if (!(2.14748365e+09f > (u23 * 255.0f))) {
                    u25 = ((u23 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                *(unsigned int *)0x8C460800 = (((((((int)u13 & 0xFF) << 16) << 8) | (((int)u17 & 0xFF) << 16)) | (((int)u21 & 0xFF) << 8)) | ((int)u25 & 0xFF));
                t31 = (a4 + 0x20);
            }
            u34 = *(float *)((t31 + 0x4));
            u36 = (u34 * 255.0f);
            if (!(2.14748365e+09f > (u34 * 255.0f))) {
                u36 = ((u34 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u38 = *(float *)((t31 + 0x8));
            u40 = (u38 * 255.0f);
            if (!(2.14748365e+09f > (u38 * 255.0f))) {
                u40 = ((u38 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u42 = *(float *)((t31 + 0x0));
            u44 = (u42 * 255.0f);
            if (!(2.14748365e+09f > (u42 * 255.0f))) {
                u44 = ((u42 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u46 = *(float *)((t31 + 0xC));
            u48 = (u46 * 255.0f);
            if (!(2.14748365e+09f > (u46 * 255.0f))) {
                u48 = ((u46 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)0x8C4607FC = ((((((int)u36 & 0xFF) << 16) | (((int)u40 & 0xFF) << 8)) | ((((int)u44 & 0xFF) << 16) << 8)) | ((int)u48 & 0xFF));
            u58 = 255.0f;
        }
        u68 = u58;
    }
    if ((a5 == 15) || (a5 == 16)) {
        *(unsigned int *)0x8C4607FC = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0x8C460800 = (*(int *)((a4 + 0x14)));
    }
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x1);
    *(float *)0x8C471E28 = (*(float *)((a6 + 0xC)));
    t76 = ((int (*)(int, int, int, int, float))((*(int *)(((a5 << 2) + 0x8C20C6D8)))))(a4, a6, a7, a8, u68);
    t77 = 0x0;
    for (;;) {
        t78 = *(int *)(((0x8C471E20 + t77) + 0x0));
        t79 = (0x8C471E20 + t77);
        t77 = (t77 + 0x4);
        *(unsigned int *)((t79 + 0x0)) = (t78 | 0x1);
        if ((unsigned int)t77 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFFE);
    return t76;
}

int kmyInitializeNTSC(int a4)
{
    int t35;
    int t42;
    int stk[66];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x359;
    if (((a4 & 0x1) != 1) && (((0x2C & a4) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 24)) = 0x20C;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x106;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x7E;
    *(unsigned int *)(((int)stk + 8)) = 0x345;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 16)) = 0x24;
        *(unsigned int *)(((int)stk + 20)) = 0x204;
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x12;
        *(unsigned int *)(((int)stk + 20)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 28)) = 0x3F;
    if ((0x20 & a4) != 0) {
        *(unsigned int *)(((int)stk + 120)) = 0x104;
    } else {
        *(unsigned int *)(((int)stk + 120)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 32)) = 0x6;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x3;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 36)) = 0x16C;
    } else {
        *(unsigned int *)(((int)stk + 36)) = 0x319;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 40)) = 0x1F;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x1;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 52)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 52)) = 0x0;
        }
    } else {
        if ((0x2C & a4) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if ((0x10 & a4) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 252)) = 0xA4;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 244)) = 0x12;
        } else {
            *(unsigned int *)(((int)stk + 244)) = 0x11;
        }
    } else {
        if ((a4 & 0x2C) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x11;
            }
        }
    }
    *(unsigned int *)(((int)stk + 248)) = 0x12;
    *(unsigned int *)0x8C45EEE0 = 0xF0;
    t35 = *(int *)(((int)stk + 16));
    *(unsigned int *)0x8C45EED8 = ((((int)((unsigned int)((int)((unsigned int)t35 + (unsigned int)0x0)) + ((((int)0x0 > (int)t35)) ? 1u : 0u))) >> 1) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t42 = ((int (*)(int, int, int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), (a4 & 0x1), 0x1, 0x12);
    return 0x0;
}

int nlsndStreamInit(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t14;
    int t17;
    int t19;
    int t25;
    int t30;
    int t48;
    int t51;
    int t55;
    int t56;
    int t59;
    int t61;
    int t63;
    int t70;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
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
    L_8C0F6160:;
    *(unsigned short *)(((int)stk + 12)) = R4;
    *(unsigned short *)(((int)stk + 4)) = R5;
    if (((short)R6 == 0)) goto L_8C0F61B0;
    goto L_8C0F6180;
    L_8C0F6180:;
    R0 = (0xFFFFFFFE);
    goto L_8C0F6384;
    L_8C0F6384:;
    return R0;
    L_8C0F61B0:;
    t2 = *(short *)(((int)stk + 4));
    t3 = *(short *)(((int)stk + 12));
    R14 = (((t2 << 1) + t3));
    R9 = (0x8);
    if (((int)(short)((t2 << 1) + t3) <= (int)0x8)) goto L_8C0F61D0;
    goto L_8C0F61C0;
    L_8C0F61C0:;
    R0 = (0xFFFFFFFF);
    goto L_8C0F6384;
    L_8C0F61D0:;
    R11 = (0x0);
    R4 = (0x8C454CF4);
    R5 = (0x0);
    goto L_8C0F61D6;
    L_8C0F61D6:;
    if (((*(signed char *)((R4 + 0x0))) != 1)) goto L_8C0F61E0;
    goto L_8C0F61DC;
    L_8C0F61DC:;
    R0 = (0xFFFFFFFD);
    goto L_8C0F6384;
    L_8C0F61E0:;
    t14 = (int)(short)(R5 + 0x1) < (int)R9;
    R4 = ((R4 + 0x1C));
    R5 = ((R5 + 0x1));
    if (t14) goto L_8C0F61D6;
    goto L_8C0F61EA;
    L_8C0F61EA:;
    t17 = *(short *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t17;
    nlsndG2Write(t17, 0xA08000A0);
    t19 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = t19;
    nlsndG2Write(t19, 0xA08000A4);
    R4 = (0x8C454CC0);
    R5 = ((nlsndG2Read(0xA080008C)));
    if (((short)R14 == 0)) goto L_8C0F6290;
    goto L_8C0F6212;
    L_8C0F6212:;
    t25 = (int)((unsigned int)(R5 - ((((short)R14 << 2) << 2) << 2)) / (unsigned int)(short)R14);
    *(unsigned int *)((R4 + 0x0)) = (t25 & 0x7FFFFFE0);
    R6 = (0x4000);
    if (((int)(t25 & 0x7FFFFFE0) <= (int)0x4000)) goto L_8C0F6232;
    goto L_8C0F6230;
    L_8C0F6230:;
    *(unsigned int *)((R4 + 0x0)) = R6;
    goto L_8C0F6232;
    L_8C0F6232:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)((R4 + 0x0))) + 0x40);
    t30 = nlsndG2Read((*(int *)0x8C454CB4));
    R4 = (t30);
    if (((0x1F & t30) == 0)) goto L_8C0F6250;
    goto L_8C0F6248;
    L_8C0F6248:;
    R4 = (((0xFFFFFFE0 & R4) + 0x20));
    goto L_8C0F6250;
    L_8C0F6250:;
    R12 = ((((*(int *)0x8C454CB8) - (*(int *)(((int)stk + 4)))) - R4));
    R14 = (0xA0800100);
    goto L_8C0F6294;
    L_8C0F6294:;
    nlsndG2Write((*(int *)(((int)stk + 4))), 0xA08000A8);
    R8 = (0xA0800000);
    T_ = ((((int)(*(int *)(((int)stk + 8))) > 0)));
    goto L_8C0F62A2;
    L_8C0F62A2:;
    R13 = (R11);
    if ((!T_)) goto L_8C0F62F2;
    goto L_8C0F62A6;
    L_8C0F62A6:;
    R10 = (0x1C);
    R3 = (0x8C454CF4);
    goto L_8C0F62AA;
    L_8C0F62AA:;
    *(unsigned char *)(((((short)R13 * (short)R10) + R3) + 0x1)) = R11;
    *(unsigned char *)(((((short)R13 * (short)R10) + R3) + 0x0)) = R11;
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x18)) = R14;
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x4)) = (R12 + R8);
    nlsndG2Write(R12, (R14 + 0xC));
    t48 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x8)) = 0x0;
    nlsndG2Write(0x0, (R14 + 0x10));
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x10)) = (R14 + 0x14);
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x14)) = (R14 + 0x4);
    t51 = (int)(short)(R13 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R12 = ((R12 - t48));
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x60));
    if (t51) goto L_8C0F62A6;
    goto L_8C0F62F2;
    L_8C0F62F2:;
    t55 = *(int *)(((int)stk + 8));
    t56 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (t55 + t56);
    if (((int)(short)R13 >= (int)(t55 + t56))) goto L_8C0F6352;
    goto L_8C0F6300;
    L_8C0F6300:;
    *(unsigned char *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x1)) = R11;
    *(unsigned char *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x0)) = R11;
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x18)) = R14;
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x8)) = (R12 + R8);
    nlsndG2Write(R12, (R14 + 0x10));
    t59 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x4)) = ((R12 - t59) + R8);
    nlsndG2Write((R12 - t59), (R14 + 0xC));
    t61 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x10)) = (R14 + 0x14);
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x14)) = (R14 + 0x4);
    t63 = (int)(short)(R13 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R12 = (((R12 - t59) - t61));
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x60));
    if (t63) goto L_8C0F6300;
    goto L_8C0F6352;
    L_8C0F6352:;
    R4 = ((((short)R13 * (short)0x1C) + 0x8C454CF4));
    R5 = (0xFFFFFFFF);
    if (((int)(short)R13 >= (int)R9)) goto L_8C0F637C;
    goto L_8C0F6364;
    L_8C0F6364:;
    *(unsigned char *)((R4 + 0x0)) = R5;
    *(unsigned char *)((R4 + 0x1)) = R11;
    *(unsigned int *)(((R4 + 0x4) + 0x4)) = R5;
    *(unsigned int *)(((R4 + 0x4) + 0x0)) = R5;
    t70 = (int)(short)(R13 + 0x1) < (int)R9;
    R13 = ((R13 + 0x1));
    R4 = ((R4 + 0x1C));
    if (t70) goto L_8C0F6364;
    goto L_8C0F637C;
    L_8C0F637C:;
    nlsndSeqRequest(0xA1);
    R0 = (0x0);
    goto L_8C0F6384;
    L_8C0F6290:;
    *(unsigned int *)(((int)stk + 4)) = R11;
    *(unsigned int *)((R4 + 0x0)) = R11;
    goto L_8C0F6294;
}


