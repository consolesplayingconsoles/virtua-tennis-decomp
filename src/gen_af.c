/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gRenderPacketVBlankWaitPending[];
extern char gStripBufferEnabled[];
extern char gStripBufferSizeBytes[];
extern char gVmsVolumeStates[];
extern char g_0c2b31dc[];
extern char stageNo[];

extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int buIsFormat(int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int get_vmstime(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDMAValue(int, int);
int kmySetTADMA(int, int, int, int, int, int);
int kmyZeroMemory(int, int);
int kmyiCheckNativeHandle(int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int set_file_info(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int stageTexLoad(void);
int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7);
int nlsndStreamGetParam(int a4, int a5, int a6, int a7);
int kmyGetDisplayParametersInfo(int a4, int a5, int a6);
int kmyGetDMAHANDLE(int a4);
int kmySetVirticalFilterMode(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int nlPushMatrix(int a4);
int nlSetIntrPriority(int a4, int a5);
void nlLoadMatrix33on44(int a4);
int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8);

int stageTexLoad(void)
{
    int t2;
    int t3;
    int t4;
    int t12;
    int t13;
    int t14;
    int t22;
    int t23;
    int t24;
    int t33;
    int t34;
    int t35;
    int t44;
    int t45;
    int t46;
    int t55;
    int t56;
    int t57;
    int t65;
    int t66;
    int t67;
    int t75;
    int t76;
    int t77;
    int t85;
    int t86;
    int t87;
    int t96;
    int t97;
    int t98;
    int t107;
    int t108;
    int t109;
    int t117;
    int t118;
    int t120;
    int t126;
    int t127;
    int t129;
    int t135;
    int t136;
    int t138;
    int t144;
    int t145;
    int t147;
    int t153;
    int t154;
    int t156;
    int t162;
    int t163;
    int t164;
    int t172;
    int t173;
    int t174;
    int stk[10];

    if ((*(int *)(int)stageNo) == 2) {
        nlSetCommonTextureOffset(0x900);
        t2 = 0x0;
        t3 = 0x8C136A6C;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C12E33C);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x136) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 1) {
        nlSetCommonTextureOffset(0x500);
        t12 = 0x0;
        t13 = 0x8C13614C;
        for (;;) {
            t14 = *(int *)((t13 + 0x0));
            t13 = (t13 + 0x4);
            nlObjPutLoadTexture(t14, 0x8C12D53C);
            t12 = (t12 + 0x1);
            if ((unsigned int)t12 >= (unsigned int)0x11D) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 0) {
        nlSetCommonTextureOffset(0x700);
        t22 = 0x0;
        t23 = 0x8C1365C0;
        for (;;) {
            t24 = *(int *)((t23 + 0x0));
            t23 = (t23 + 0x4);
            nlObjPutLoadTexture(t24, 0x8C12DC6C);
            t22 = (t22 + 0x1);
            if ((unsigned int)t22 >= (unsigned int)0x12B) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 3) {
        nlSetCommonTextureOffset(0xB00);
        t33 = 0x0;
        t34 = 0x8C136F44;
        for (;;) {
            t35 = *(int *)((t34 + 0x0));
            t34 = (t34 + 0x4);
            nlObjPutLoadTexture(t35, 0x8C12E9EC);
            t33 = (t33 + 0x1);
            if ((unsigned int)t33 >= (unsigned int)0x119) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 4) {
        nlSetCommonTextureOffset(0xD00);
        t44 = 0x0;
        t45 = 0x8C1373A8;
        for (;;) {
            t46 = *(int *)((t45 + 0x0));
            t45 = (t45 + 0x4);
            nlObjPutLoadTexture(t46, 0x8C12F03C);
            t44 = (t44 + 0x1);
            if ((unsigned int)t44 >= (unsigned int)0x154) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 5) {
        nlSetCommonTextureOffset(0x1600);
        t55 = 0x0;
        t56 = 0x8C1378F8;
        for (;;) {
            t57 = *(int *)((t56 + 0x0));
            t56 = (t56 + 0x4);
            nlObjPutLoadTexture(t57, 0x8C12F6EC);
            t55 = (t55 + 0x1);
            if ((unsigned int)t55 >= (unsigned int)0xCB) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 6) {
        nlSetCommonTextureOffset(0x1700);
        t65 = 0x0;
        t66 = 0x8C137C24;
        for (;;) {
            t67 = *(int *)((t66 + 0x0));
            t66 = (t66 + 0x4);
            nlObjPutLoadTexture(t67, 0x8C12FCCC);
            t65 = (t65 + 0x1);
            if ((unsigned int)t65 >= (unsigned int)0xC5) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 7) {
        nlSetCommonTextureOffset(0x1900);
        t75 = 0x0;
        t76 = 0x8C137F38;
        for (;;) {
            t77 = *(int *)((t76 + 0x0));
            t76 = (t76 + 0x4);
            nlObjPutLoadTexture(t77, 0x8C13033C);
            t75 = (t75 + 0x1);
            if ((unsigned int)t75 >= (unsigned int)0xCB) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 8) {
        nlSetCommonTextureOffset(0x1E00);
        t85 = 0x0;
        t86 = 0x8C138264;
        for (;;) {
            t87 = *(int *)((t86 + 0x0));
            t86 = (t86 + 0x4);
            nlObjPutLoadTexture(t87, 0x8C1308FC);
            t85 = (t85 + 0x1);
            if ((unsigned int)t85 >= (unsigned int)0xCA) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 9) {
        nlSetCommonTextureOffset(0x2400);
        t96 = 0x0;
        t97 = 0x8C13858C;
        for (;;) {
            t98 = *(int *)((t97 + 0x0));
            t97 = (t97 + 0x4);
            nlObjPutLoadTexture(t98, 0x8C130F0C);
            t96 = (t96 + 0x1);
            if ((unsigned int)t96 >= (unsigned int)0xE0) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 10) {
        nlSetCommonTextureOffset(0x1080);
        t107 = 0x0;
        t108 = 0x8C13890C;
        for (;;) {
            t109 = *(int *)((t108 + 0x0));
            t108 = (t108 + 0x4);
            nlObjPutLoadTexture(t109, 0x8C1314AC);
            t107 = (t107 + 0x1);
            if ((unsigned int)t107 >= (unsigned int)0x8) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 11) {
        nlSetCommonTextureOffset(0x1100);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t117 = 0x8C13892C;
        for (;;) {
            t118 = *(int *)((t117 + 0x0));
            t117 = (t117 + 0x4);
            nlObjPutLoadTexture(t118, 0x8C1316BC);
            t120 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t120 + 0x1);
            if ((unsigned int)(t120 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 12) {
        nlSetCommonTextureOffset(0x1180);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t126 = 0x8C138948;
        for (;;) {
            t127 = *(int *)((t126 + 0x0));
            t126 = (t126 + 0x4);
            nlObjPutLoadTexture(t127, 0x8C13194C);
            t129 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t129 + 0x1);
            if ((unsigned int)(t129 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 13) {
        nlSetCommonTextureOffset(0x1200);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t135 = 0x8C138964;
        for (;;) {
            t136 = *(int *)((t135 + 0x0));
            t135 = (t135 + 0x4);
            nlObjPutLoadTexture(t136, 0x8C131BAC);
            t138 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t138 + 0x1);
            if ((unsigned int)(t138 + 0x1) >= (unsigned int)0x8) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 14) {
        nlSetCommonTextureOffset(0x1280);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t144 = 0x8C138984;
        for (;;) {
            t145 = *(int *)((t144 + 0x0));
            t144 = (t144 + 0x4);
            nlObjPutLoadTexture(t145, 0x8C131D9C);
            t147 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t147 + 0x1);
            if ((unsigned int)(t147 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 15) {
        nlSetCommonTextureOffset(0x1300);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t153 = 0x8C1389A0;
        for (;;) {
            t154 = *(int *)((t153 + 0x0));
            t153 = (t153 + 0x4);
            nlObjPutLoadTexture(t154, 0x8C131F1C);
            t156 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t156 + 0x1);
            if ((unsigned int)(t156 + 0x1) >= (unsigned int)0x8) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 16) {
        nlSetCommonTextureOffset(0x1380);
        t162 = 0x0;
        t163 = 0x8C1389C0;
        for (;;) {
            t164 = *(int *)((t163 + 0x0));
            t163 = (t163 + 0x4);
            nlObjPutLoadTexture(t164, 0x8C13217C);
            t162 = (t162 + 0x1);
            if ((unsigned int)t162 >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)(int)stageNo) == 17) {
        nlSetCommonTextureOffset(0x1400);
        t172 = 0x0;
        t173 = 0x8C1389DC;
        for (;;) {
            t174 = *(int *)((t173 + 0x0));
            t173 = (t173 + 0x4);
            nlObjPutLoadTexture(t174, 0x8C13241C);
            t172 = (t172 + 0x1);
            if ((unsigned int)t172 >= (unsigned int)0x7) {
                break;
            }
        }
    }
    *(unsigned int *)0x8C343F40 = 0x1;
    *(unsigned int *)((((*(int *)(int)stageNo) << 2) + 0x8C343F98)) = 0x1;
    *(unsigned int *)0x8C1891F4 = (*(int *)(int)stageNo);
    return 0x8C343F98;
}

int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t31;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t48;
    int t50;
    int t53;
    int t35;
    int t72;
    int t73;
    int t74;
    int t75;
    int stk[13];

    t0 = *(int *)0x8C4607B0;
    if (((*(int *)0x8C45F918) != 0) && (a5 != 0)) {
        *(unsigned int *)((t0 + 0x38)) = 0x1;
    } else {
        *(unsigned int *)((t0 + 0x38)) = 0x0;
    }
    *(unsigned int *)((t0 + 0x30)) = a6;
    *(unsigned int *)((t0 + 0x8)) = a4;
    *(unsigned int *)((t0 + 0x1A4)) = (*(int *)0x8C45F7CC);
    *(unsigned int *)((t0 + 0x1AC)) = (*(int *)0x8C45F7D4);
    *(unsigned int *)((t0 + 0x1A8)) = (*(int *)0x8C45F7D0);
    *(unsigned int *)((t0 + 0x1B0)) = (*(int *)0x8C45F7D8);
    *(unsigned int *)((t0 + 0x1B4)) = (*(int *)0x8C45F7DC);
    *(unsigned int *)((t0 + 0x1BC)) = (*(int *)0x8C45F7E4);
    *(unsigned int *)((t0 + 0x1B8)) = (*(int *)0x8C45F7E0);
    *(unsigned int *)((t0 + 0x1C0)) = (*(int *)0x8C45F7E8);
    t11 = a5;
    if (a4 == 0) {
        *(unsigned int *)((t0 + 0x40)) = a7;
        t11 = 0x0;
    }
    *(unsigned int *)((t0 + 0x28)) = (*(int *)0x8C4607D4);
    if (t11 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x8;
        *(unsigned int *)0x8C4607D4 = ((*(int *)0x8C4607D4) + 0x1);
        if ((unsigned int)(*(int *)0x8C4607D4) >= (unsigned int)(*(int *)0x8C45F93C)) {
            *(unsigned int *)0x8C4607D4 = 0x0;
        }
        if ((*(int *)(int)gRenderPacketVBlankWaitPending) != 0) {
            *(unsigned int *)0x8C4607D4 = ((*(int *)0x8C4607D4) & 0x1);
        }
    } else {
        *(unsigned int *)((t0 + 0x18)) = 0x6;
    }
    *(unsigned int *)((t0 + 0x2C)) = (*(int *)0x8C45F7B8);
    if ((*(int *)0x8C460784) == 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x2;
    } else {
        t31 = *(int *)0x8C45F00C;
        t32 = *(int *)(((0x8C45F6D4 + ((t31 - 1) << 2)) + 0x0));
        t33 = t32;
        t34 = 0x5;
        for (;;) {
            if (((((int)t33 >= 0) ? (0x1 << (t33 & 31)) : ((-(int)t33 & 31) ? ((int)0x1 >> (-(int)t33 & 31)) : ((int)0x1 >> 31))) & (*(int *)((((0x184 + t0) + ((t31 - 1) << 2)) + 0x0)))) != 0) {
                t35 = t33;
            }
            t34 = (t34 - 0x1);
            t33 = ((int)((unsigned int)(t33 + 0x1) % (unsigned int)0x5));
            if (t34 == 0) {
                break;
            }
        }
        t40 = t32;
        t41 = ((t31 - 1) << 2);
        t42 = t33;
        t43 = t34;
        t44 = 0x5;
        t45 = t32;
        for (;;) {
            if (((((int)t45 >= 0) ? (0x1 << (t45 & 31)) : ((-(int)t45 & 31) ? ((int)0x1 >> (-(int)t45 & 31)) : ((int)0x1 >> 31))) & (*(int *)((((((*(int *)0x8C4607D0) - 1) << 2) + (0x184 + t0)) + 0x0)))) != 0) {
                for (;;) {
                    t40 = 0x0;
                    t48 = kmyGetDMAHANDLE(t40);
                    *(unsigned int *)(((int)stk + 12)) = t48;
                    if (t48 != 0) {
                        break;
                    }
                    t40 = 0x7;
                    kmyRequestCallback(t40);
                }
                t50 = *(int *)0x8C4607D0;
                t43 = t45;
                t43 = (t43 << 2);
                *(unsigned int *)(((int)stk + 16)) = t43;
                t43 = (*(int *)((t43 + (((((t50 - 1) << 2) + (t50 - 1)) << 2) + (0xE4 + t0)))));
                t42 = (*(int *)0x8C4607D0);
                t42 = (t42 - 1);
                t53 = t42;
                t42 = (t42 << 2);
                t42 = (t42 + t53);
                t41 = (*(int *)((t0 + 0x3C)));
                t42 = (t42 << 2);
                t42 = (t42 + (t0 + 0x44));
                t42 = (*(int *)((t42 + (*(int *)(((int)stk + 16))))));
                t40 = (*(int *)(((int)stk + 12)));
                kmySetTADMA(t40, t41, t42, t43, 0x0, (((int)t45 >= 0) ? (0x1 << (t45 & 31)) : ((-(int)t45 & 31) ? ((int)0x1 >> (-(int)t45 & 31)) : ((int)0x1 >> 31))));
                if (t45 == t35) {
                    t41 = 0x8C1F9F0E;
                    t40 = (*(int *)(((int)stk + 12)));
                    kmySetDMACallback(t40, 0x8C1F9F0E);
                    t41 = (*(int *)0x8C4607D0);
                    t40 = (*(int *)(((int)stk + 12)));
                    kmySetDMAValue(t40, t41);
                }
                t40 = (*(int *)(((int)stk + 12)));
                *(unsigned int *)0x8C4607D8 = (kmyRequestDMA(t40));
            } else {
                t72 = t40;
                t73 = t41;
                t74 = t42;
                t75 = t43;
            }
            t40 = t72;
            t41 = t73;
            t42 = t74;
            t43 = t75;
            t44 = (t44 - 0x1);
            t45 = ((int)((unsigned int)(t45 + 0x1) % (unsigned int)0x5));
            if (t44 == 0) {
                break;
            }
        }
    }
    kmiFLWCTRLRotateReadyQueue(0x0);
    return (*(int *)((t0 + 0x4)));
}


int kmyGetDisplayParametersInfo(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t34;
    int t70;
    int t71;
    int t33;
    int t62;
    int t74;
    int stk[13];

    t0 = *(int *)0x8C20B484;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(int *)0x8C20B480);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t0;
    t2 = *(int *)0x8C20B48C;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = (*(int *)0x8C20B488);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0xC)) = t2;
    t4 = *(int *)0x8C20B494;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x10)) = (*(int *)0x8C20B490);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x14)) = t4;
    if ((unsigned int)a4 >= (unsigned int)0xC) {
    } else {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE9C);
            }
                break;
            case 2:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EEA0);
            }
                break;
            case 4:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE30);
            }
                break;
            case 6:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2))));
            }
                break;
            case 8:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), a6, 0x0, a5);
            }
                break;
            case 10:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), 0x0, a6, a5);
            }
                break;
            case 12:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), ((int)stk + 4), (((int)stk + 4) + 0x4), a5);
                *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 4))) * (*(int *)(((int)stk + 8))));
            }
                break;
            case 14:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0xC)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE9C);
                }
            }
                break;
            case 16:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x10)));
                } else {
                    if ((*(int *)(int)gStripBufferEnabled) == 0) {
                        if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t33 = *(int *)0x8C45EE2C, (t33 & 0x2C) == 32) && (0x1 != 0))) {
                            t34 = *(int *)0x8C45EEA0;
                            *(unsigned int *)((a6 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t34 + (unsigned int)0x0)) + ((((int)0x0 > (int)t34)) ? 1u : 0u))) >> 1);
                        } else {
                            *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EEA0);
                        }
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = (*(int *)(int)gStripBufferSizeBytes);
                    }
                }
            }
                break;
            case 18:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x8)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE30);
                }
            }
                break;
            case 20:
            {
                if (a5 != 0) {
                    t62 = (*(int *)((a5 + 0x4)));
                } else {
                    t62 = (*(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2))));
                }
                *(unsigned int *)((a6 + 0x0)) = t62;
            }
                break;
            default:
            {
                if (a5 != 0) {
                    t74 = (((*(int *)((a5 + 0x2C))) << 2) << 1);
                } else {
                    t70 = *(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2)));
                    t71 = t70;
                    if ((int)t70 < 0) {
                        t71 = (t70 + 0x7);
                    }
                    t74 = ((*(int *)0x8C45EE9C) * (((t71 >> 1) >> 1) >> 1));
                }
                *(unsigned int *)((a6 + 0x0)) = t74;
            }
                break;
        }
    }
    return 0x0;
}

int kmyGetDMAHANDLE(int a4)
{
    int t21;
    int t16;
    int t13;
    int t30;
    int t27;
    int t44;
    int t41;
    int t53;
    int t58;
    int t49;
    int t35;
    int t61;

    if ((*(int *)0x8C203428) == 0) {
        *(unsigned int *)0x8C20342C = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    *(unsigned int *)0x8C203428 = ((*(int *)0x8C203428) + 0x1);
    if (a4 != 0) {
        if (a4 != 1) {
            t21 = 0x0;
            if (a4 != 2) {
            } else {
                t16 = 0x0;
                if ((int)(*(short *)0x8C20345C) < (int)0x20) {
                    *(unsigned short *)0x8C20345C = ((*(short *)0x8C20345C) + 0x1);
                    t13 = *(short *)0x8C203458;
                    *(unsigned short *)0x8C203458 = (t13 + 0x1);
                    *(unsigned short *)0x8C203458 = ((*(short *)0x8C203458) & 0x1F);
                    t16 = (((((short)((t13 + 0x1) - 1) << 2) << 2) << 2) + 0x8C204460);
                }
                t21 = t16;
            }
            t35 = t21;
        } else {
            t30 = 0x0;
            if ((int)(*(short *)0x8C203456) < (int)0x20) {
                *(unsigned short *)0x8C203456 = ((*(short *)0x8C203456) + 0x1);
                t27 = *(short *)0x8C203452;
                *(unsigned short *)0x8C203452 = (t27 + 0x1);
                *(unsigned short *)0x8C203452 = ((*(short *)0x8C203452) & 0x1F);
                t30 = (((((short)((t27 + 0x1) - 1) << 2) << 2) << 2) + 0x8C203C60);
            }
            t35 = t30;
        }
        t49 = t35;
    } else {
        t44 = 0x0;
        if ((int)(*(short *)0x8C203450) < (int)0x20) {
            *(unsigned short *)0x8C203450 = ((*(short *)0x8C203450) + 0x1);
            t41 = *(short *)0x8C20344C;
            *(unsigned short *)0x8C20344C = (t41 + 0x1);
            *(unsigned short *)0x8C20344C = ((*(short *)0x8C20344C) & 0x1F);
            t44 = (((((short)((t41 + 0x1) - 1) << 2) << 2) << 2) + 0x8C203460);
        }
        t49 = t44;
    }
    if (t49 == 0) {
        t53 = *(int *)0x8C203428;
        *(unsigned int *)0x8C203428 = (t53 - 1);
        if ((t53 - 1) == 0) {
            _builtin_set_imask(((unsigned int)((((*(int *)0x8C20342C) & 0xF) << 2) << 2) >> 4));
        }
        t61 = 0x0;
    } else {
        kmyZeroMemory(t49, 0x40);
        *(unsigned int *)((t49 + 0x28)) = 0x1;
        *(unsigned int *)((t49 + 0x20)) = a4;
        t58 = *(int *)0x8C203424;
        *(unsigned int *)0x8C203424 = (t58 + 0x1);
        *(unsigned int *)((t49 + 0x0)) = ((t58 + 0x1) - 1);
        if ((unsigned int)(*(int *)0x8C203424) >= (unsigned int)0x80000000) {
            *(unsigned int *)0x8C203424 = 0x1;
        }
        t61 = t49;
    }
    return t61;
}

int kmySetVirticalFilterMode(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t2 = *(int *)((a4 + 0x88));
    t5 = 0x400;
    if ((unsigned int)a5 < (unsigned int)0x23) {
        switch ((a5 << 1)) {
            case 0:
            {
                t3 = 0x400;
            }
                break;
            case 2:
            {
                t3 = 0x401;
            }
                break;
            case 4:
            case 8:
            {
                t3 = 0x800;
            }
                break;
            case 6:
            {
                t3 = 0x472;
            }
                break;
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 24:
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            case 36:
            case 38:
            case 50:
            case 52:
            case 54:
            case 56:
            case 58:
            {
                t3 = 0x400;
            }
                break;
            case 20:
            {
                t3 = 0x8E3;
            }
                break;
            case 40:
            {
                t3 = 0x3DE;
            }
                break;
            case 42:
            {
                t3 = 0x3BF;
            }
                break;
            case 44:
            {
                t3 = 0x3A2;
            }
                break;
            case 46:
            {
                t3 = 0x387;
            }
                break;
            case 48:
            {
                t3 = 0x36D;
            }
                break;
            case 60:
            {
                t3 = 0x7BD;
            }
                break;
            case 62:
            {
                t3 = 0x780;
            }
                break;
            case 64:
            {
                t3 = 0x745;
            }
                break;
            case 66:
            {
                t3 = 0x70F;
            }
                break;
            default:
            {
                t3 = 0x6DB;
            }
                break;
        }
        t5 = t3;
    }
    *(unsigned int *)((t2 + 0x24)) = (((*(int *)((t2 + 0x24))) & 0xFFFF0000) | t5);
    return 0x0;
}

int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8)
{
    int t6;
    int t8;
    int t19;
    int t20;
    int t25;
    int t43;
    int t55;
    int t56;
    int stk[19];

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
    L_8C1E6E8E:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    *(unsigned int *)(((int)stk + 20)) = R5;
    *(unsigned int *)(((int)stk + 36)) = R6;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    R10 = (0x1);
    R12 = (R7);
    R4 = (a8);
    R8 = (0x1);
    R9 = (0x0);
    goto L_8C1E6ECA;
    L_8C1E6ECA:;
    t6 = (*(signed char *)((R4 + 0x0))) != 0;
    R4 = ((R4 + 0x1));
    if (t6) goto L_8C1E6EC4;
    goto L_8C1E6ED0;
    L_8C1E6ED0:;
    *(unsigned int *)(((int)stk + 40)) = R8;
    *(unsigned int *)(((int)stk + 24)) = R9;
    t8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = (t8 + 0x800);
    *(unsigned int *)(((int)stk + 28)) = R9;
    R11 = (R8);
    R12 = ((R12 + 0x1));
    R14 = ((t8 + 0x800));
    goto L_8C1E6EE2;
    L_8C1E6EE2:;
    R13 = (R14);
    if (((unsigned int)R14 >= (unsigned int)(*(int *)(((int)stk + 12))))) goto L_8C1E6F00;
    goto L_8C1E6EEA;
    L_8C1E6EEA:;
    if (((unsigned int)((((unsigned char)(*(signed char *)((R13 + 0x0))) + ((unsigned char)(*(signed char *)((R13 + 0x0))) & 0x1)) + 0x8) + R14) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_8C1E6F2A;
    goto L_8C1E6F00;
    L_8C1E6F00:;
    t19 = *(int *)(((int)stk + 4));
    t20 = *(int *)(((int)stk + 4));
    gdFsMemcpy(R14, (t20 - ((t19 - R14) + 0x800)), ((t19 - R14) + 0x800));
    t25 = (gdFsReadWG((*(int *)(((int)stk + 20))), 0x1, (*(int *)(((int)stk + 4))))) != 0;
    R13 = ((t20 - ((t19 - R14) + 0x800)));
    R14 = (0x8C1DD654);
    if (t25) goto L_8C1E6FCE;
    goto L_8C1E6F22;
    L_8C1E6F22:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    R14 = (R13);
    goto L_8C1E6F2A;
    L_8C1E6F2A:;
    gdFsMemcpy((R13 + 0x6), (((int)stk + 4) + 0xC), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 16))) != (*(int *)(((int)stk + 40))))) goto L_8C1E6FB2;
    goto L_8C1E6F40;
    L_8C1E6F40:;
    if ((R11 == 1)) goto L_8C1E6FB0;
    goto L_8C1E6F46;
    L_8C1E6F46:;
    if ((R10 != 1)) goto L_8C1E6F56;
    goto L_8C1E6F4C;
    L_8C1E6F4C:;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 8)));
    R5 = (a8);
    goto L_8C1E6F5C;
    L_8C1E6F5C:;
    if (((unsigned char)(*(signed char *)((R13 + 0x0))) != (*(int *)(((int)stk + 32))))) goto L_8C1E6FB2;
    goto L_8C1E6F66;
    L_8C1E6F66:;
    t43 = (gdFsStrncmpi((R13 + 0x8), R5, (*(int *)(((int)stk + 32))))) == 0;
    if (t43) goto L_8C1E6FB2;
    goto L_8C1E6F72;
    L_8C1E6F72:;
    if ((R10 != 0)) goto L_8C1E6F7A;
    goto L_8C1E6F76;
    L_8C1E6F76:;
    R12 = ((R12 + (*(int *)(((int)stk + 28)))));
    goto L_8C1E6F7A;
    L_8C1E6F7A:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_8C1E6F8C;
    goto L_8C1E6F80;
    L_8C1E6F80:;
    R0 = ((gdFsGetLE4((R13 + 0x2))));
    R14 = (0x8C1DD37C);
    goto L_8C1E6FD0;
    L_8C1E6FD0:;
    return R0;
    L_8C1E6F8C:;
    if ((R10 != 1)) goto L_8C1E6FA0;
    goto L_8C1E6F92;
    L_8C1E6F92:;
    R10 = (R9);
    goto L_8C1E6FA8;
    L_8C1E6FA8:;
    *(unsigned int *)(((int)stk + 28)) = (gdFsGetTokenSize(R12, 0x8C20A700, R6));
    goto L_8C1E6FB0;
    L_8C1E6FB0:;
    *(unsigned int *)(((int)stk + 40)) = R11;
    goto L_8C1E6FB2;
    L_8C1E6FB2:;
    t55 = *(signed char *)((R13 + 0x0));
    t56 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 24)) = (t56 + ((((unsigned char)t55 & R8) + (unsigned char)t55) + 0x8));
    R11 = ((R11 + 0x1));
    R14 = ((R14 + ((((unsigned char)t55 & R8) + (unsigned char)t55) + 0x8)));
    R4 = (((((unsigned char)t55 & R8) + (unsigned char)t55) + 0x8));
    if (((int)(t56 + ((((unsigned char)t55 & R8) + (unsigned char)t55) + 0x8)) < (int)(*(int *)(((int)stk + 36))))) goto L_8C1E6EE2;
    goto L_8C1E6FCE;
    L_8C1E6FCE:;
    R0 = (0x0);
    goto L_8C1E6FD0;
    L_8C1E6FA0:;
    if ((R11 == 1)) goto L_8C1E6FA8;
    goto L_8C1E6FA6;
    L_8C1E6FA6:;
    R12 = ((R12 + 0x1));
    goto L_8C1E6FA8;
    L_8C1E6F56:;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 28)));
    R5 = (R12);
    goto L_8C1E6F5C;
    L_8C1E6EC4:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_8C1E6ECA;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t15;
    int t20;
    int t28;
    int t51;
    int stk[19];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1ECD6C:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned int *)(((int)stk + 8)) = (R4 * 0x148);
    R12 = (R4);
    R13 = (R6);
    R14 = (((R4 * 0x148) + (int)gVmsVolumeStates));
    if (((*(signed char *)((((R4 * 0x148) + (int)gVmsVolumeStates) + 0x2))) == 0)) goto L_8C1ECDBA;
    goto L_8C1ECD90;
    L_8C1ECD90:;
    t6 = (vmsio_isready(R12)) != 0;
    if (t6) goto L_8C1ECDA4;
    goto L_8C1ECD9A;
    L_8C1ECD9A:;
    vmsfs_unmount(R12);
    goto L_8C1ECDBA;
    L_8C1ECDBA:;
    R0 = (0xFFFFFF01);
    goto L_8C1ECE9C;
    L_8C1ECE9C:;
    return R0;
    L_8C1ECDA4:;
    t10 = (vmsio_ismount(R12)) == 0;
    if (t10) goto L_8C1ECDBA;
    goto L_8C1ECDAE;
    L_8C1ECDAE:;
    if (((*(signed char *)((((*(int *)(((int)stk + 8))) + (int)gVmsVolumeStates) + 0x8))) != 0)) goto L_8C1ECDC0;
    goto L_8C1ECDBA;
    L_8C1ECDC0:;
    t15 = (int)(buIsFormat(R12)) >= 0;
    if (t15) goto L_8C1ECDD0;
    goto L_8C1ECDCA;
    L_8C1ECDCA:;
    R0 = (0xFFFFFF03);
    goto L_8C1ECE9C;
    L_8C1ECDD0:;
    *(unsigned int *)((R14 + 0x18)) = 0x0;
    t20 = (direntry(R12, 0x0));
    R11 = (0x0);
    R12 = (0x1);
    R4 = t20;
    R5 = (0x0);
    R7 = (0x0);
    goto L_8C1ECE04;
    L_8C1ECE04:;
    if (((int)R5 < (int)(*(int *)(((*(int *)((R14 + 0x1C))) + 0x30))))) goto L_8C1ECDE6;
    goto L_8C1ECE0C;
    L_8C1ECE0C:;
    if ((R7 != 0)) goto L_8C1ECE16;
    goto L_8C1ECE10;
    L_8C1ECE10:;
    R0 = (0xFFFFFF05);
    goto L_8C1ECE9C;
    L_8C1ECE16:;
    t28 = *(int *)(((int)stk + 4));
    R1 = ((t28 + 0xC));
    R5 = (t28);
    R6 = ((R4 + 0x4));
    goto L_8C1ECE4A;
    L_8C1ECE4A:;
    if (((unsigned int)R5 < (unsigned int)R1)) goto L_8C1ECE44;
    goto L_8C1ECE4E;
    L_8C1ECE4E:;
    *(unsigned char *)((R1 + 0x0)) = R11;
    *(unsigned int *)((R14 + 0x18)) = ((*(int *)((R14 + 0x18))) + 0x1);
    set_file_info(R4, (((int)stk + 4) + 0x8), R6, R7);
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)((R14 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((R13 + 0x4)) = (*(int *)(((int)stk + 52)));
    *(unsigned char *)((R13 + 0x6)) = (*(signed char *)(((int)stk + 16)));
    *(unsigned char *)((R13 + 0x7)) = (*(signed char *)(((int)stk + 22)));
    *(unsigned short *)((R13 + 0x8)) = (*(short *)(((int)stk + 20)));
    if (((*(int *)(((int)stk + 16))) != 0xCC)) goto L_8C1ECE8A;
    goto L_8C1ECE86;
    L_8C1ECE86:;
    R0 = (R12);
    goto L_8C1ECE8C;
    L_8C1ECE8C:;
    *(unsigned char *)((R13 + 0x6)) = R0;
    get_vmstime((R13 + 0xA), (((int)stk + 4) + 0x28));
    R0 = (0x0);
    goto L_8C1ECE9C;
    L_8C1ECE8A:;
    R0 = (R11);
    goto L_8C1ECE8C;
    L_8C1ECE44:;
    *(unsigned char *)((R5 + 0x0)) = (*(signed char *)((R6 + 0x0)));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    goto L_8C1ECE4A;
    L_8C1ECDE6:;
    t51 = *(signed char *)((R4 + 0x0));
    R1 = ((unsigned char)t51);
    if (((unsigned char)t51 == 51)) goto L_8C1ECDF6;
    goto L_8C1ECDF0;
    L_8C1ECDF0:;
    if ((R1 != 0xCC)) goto L_8C1ECDFA;
    goto L_8C1ECDF6;
    L_8C1ECDF6:;
    R7 = (R12);
    goto L_8C1ECE0C;
    L_8C1ECDFA:;
    *(unsigned int *)((R14 + 0x18)) = ((*(int *)((R14 + 0x18))) + 0x1);
    R4 = ((R4 + 0x20));
    R5 = ((R5 + 0x1));
    goto L_8C1ECE04;
}

int nlPushMatrix(int a4)
{
    int t0;
    int t1;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u2[16];
    float u4[16];
    float u21[16];
    float u38[16];

    t0 = *(int *)0x8C450864;
    t1 = *(int *)(int)g_0c2b31dc;
    _builtin_st_ext((float (*)[4])u2);
    *(float *)((((t0 + 0x40) - 0x8) + 0x0)) = u2[15];
    *(float *)(((((t0 + 0x40) - 0x8) + 0x0) + 4)) = u2[14];
    *(float *)(((((t0 + 0x40) - 0x8) - 0x8) + 0x0)) = u2[13];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u2[12];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[11];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[10];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[9];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[8];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[7];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[6];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[5];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[4];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[3];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[2];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[1];
    *(float *)((((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[0];
    *(unsigned int *)0x8C450864 = (t0 + 0x40);
    
    *(unsigned short *)(int)g_0c2b31dc = ((short)t1 + 0x1);
    if (a4 == 0) {
        _builtin_st_ext((float (*)[4])u4);
        u4[0] = u2[0];
        u4[1] = u2[1];
        u4[2] = u2[2];
        u4[3] = u2[3];
        u4[4] = u2[4];
        u4[5] = u2[5];
        u4[6] = u2[6];
        u4[7] = u2[7];
        u4[8] = u2[8];
        u4[9] = u2[9];
        u4[10] = u2[10];
        u4[11] = u2[11];
        u4[12] = u2[12];
        u4[13] = u2[13];
        u4[14] = u2[14];
        u4[15] = u2[15];
        _builtin_ld_ext((float (*)[4])u4);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    _builtin_prefetch((void *)a4);
    if ((a4 & 0x4) != 0) {
        u5 = *(float *)((a4 + 0x0));
        u6 = *(float *)(((a4 + 0x4) + 0x0));
        u7 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
        u8 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
        u9 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u10 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u11 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u12 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u13 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u14 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u15 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u16 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u17 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u18 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u19 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u20 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        _builtin_st_ext((float (*)[4])u21);
        u21[0] = u5;
        u21[1] = u6;
        u21[2] = u7;
        u21[3] = u8;
        u21[4] = u9;
        u21[5] = u10;
        u21[6] = u11;
        u21[7] = u12;
        u21[8] = u13;
        u21[9] = u14;
        u21[10] = u15;
        u21[11] = u16;
        u21[12] = u17;
        u21[13] = u18;
        u21[14] = u19;
        u21[15] = u20;
        _builtin_ld_ext((float (*)[4])u21);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    u22 = *(float *)((a4 + 0x0));
    u23 = *(float *)(((a4 + 0x0) + 4));
    u24 = *(float *)(((a4 + 0x8) + 0x0));
    u25 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u26 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u27 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u28 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u29 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u30 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u31 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u32 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u33 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u34 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u35 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u36 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u37 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u38);
    u38[0] = u23;
    u38[1] = u22;
    u38[2] = u25;
    u38[3] = u24;
    u38[4] = u27;
    u38[5] = u26;
    u38[6] = u29;
    u38[7] = u28;
    u38[8] = u31;
    u38[9] = u30;
    u38[10] = u33;
    u38[11] = u32;
    u38[12] = u35;
    u38[13] = u34;
    u38[14] = u37;
    u38[15] = u36;
    _builtin_ld_ext((float (*)[4])u38);
    return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
}

int nlSetIntrPriority(int a4, int a5)
{
    int t1;
    int t3;

    if (((int)a4 <= (int)0xC) && (((int)a5 >= 0) && ((int)a5 <= (int)0xF))) {
        _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
        t1 = *(signed char *)((((a4 << 2) + 0x8C1DCBE4) + 0x0));
        t3 = *(signed char *)((((a4 << 2) + 0x8C1DCBE4) + 0x1));
        *(unsigned short *)(((0xFFD00004 + t1) + 0x0)) = (((~(*(short *)((((a4 << 2) + 0x8C1DCBE4) + 0x2)))) & (*(short *)(((0xFFD00004 + t1) + 0x0)))) | (((int)t3 >= 0) ? (a5 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)a5 >> (-(int)t3 & 31)) : ((int)a5 >> 31))));
        *(volatile short *)(((0xFFD00004 + t1) + 0x0));
        _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF));
        return 0x1;
    }
    return 0x0;
}

void nlLoadMatrix33on44(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9[16];

    if (a4 == 0) {
    } else {
        u0 = *(float *)((a4 + 0x0));
        u1 = *(float *)(((a4 + 0x4) + 0x0));
        u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
        u3 = *(float *)(((((a4 + 0x4) + 0x4) + 0x8) + 0x0));
        u4 = *(float *)((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
        u5 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
        u6 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
        u7 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
        u8 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
        _builtin_st_ext((float (*)[4])u9);
        u9[0] = u0;
        u9[1] = u1;
        u9[2] = u2;
        u9[3] = 0.0f;
        u9[4] = u3;
        u9[5] = u4;
        u9[6] = u5;
        u9[7] = 0.0f;
        u9[8] = u6;
        u9[9] = u7;
        u9[10] = u8;
        u9[11] = 0.0f;
        _builtin_ld_ext((float (*)[4])u9);
    }
}

int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t0 = *(int *)((a4 + 0x38));
    t3 = ((int (*)(int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x4C)))))(t0, a5, a6, a7, a8);
    *(unsigned int *)((a4 + 0x5C)) = 0x1;
    return a8;
}
