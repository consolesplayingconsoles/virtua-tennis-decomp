/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    if ((*(int *)0x8C1891F0) == 2) {
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
    if ((*(int *)0x8C1891F0) == 1) {
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
    if ((*(int *)0x8C1891F0) == 0) {
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
    if ((*(int *)0x8C1891F0) == 3) {
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
    if ((*(int *)0x8C1891F0) == 4) {
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
    if ((*(int *)0x8C1891F0) == 5) {
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
    if ((*(int *)0x8C1891F0) == 6) {
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
    if ((*(int *)0x8C1891F0) == 7) {
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
    if ((*(int *)0x8C1891F0) == 8) {
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
    if ((*(int *)0x8C1891F0) == 9) {
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
    if ((*(int *)0x8C1891F0) == 10) {
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
    if ((*(int *)0x8C1891F0) == 11) {
        nlSetCommonTextureOffset(0x1100);
        R1004 = 0x0;
        t117 = 0x8C13892C;
        for (;;) {
            t118 = *(int *)((t117 + 0x0));
            t117 = (t117 + 0x4);
            nlObjPutLoadTexture(t118, 0x8C1316BC);
            t120 = R1004;
            R1004 = (t120 + 0x1);
            if ((unsigned int)(t120 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)0x8C1891F0) == 12) {
        nlSetCommonTextureOffset(0x1180);
        R1004 = 0x0;
        t126 = 0x8C138948;
        for (;;) {
            t127 = *(int *)((t126 + 0x0));
            t126 = (t126 + 0x4);
            nlObjPutLoadTexture(t127, 0x8C13194C);
            t129 = R1004;
            R1004 = (t129 + 0x1);
            if ((unsigned int)(t129 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)0x8C1891F0) == 13) {
        nlSetCommonTextureOffset(0x1200);
        R1004 = 0x0;
        t135 = 0x8C138964;
        for (;;) {
            t136 = *(int *)((t135 + 0x0));
            t135 = (t135 + 0x4);
            nlObjPutLoadTexture(t136, 0x8C131BAC);
            t138 = R1004;
            R1004 = (t138 + 0x1);
            if ((unsigned int)(t138 + 0x1) >= (unsigned int)0x8) {
                break;
            }
        }
    }
    if ((*(int *)0x8C1891F0) == 14) {
        nlSetCommonTextureOffset(0x1280);
        R1004 = 0x0;
        t144 = 0x8C138984;
        for (;;) {
            t145 = *(int *)((t144 + 0x0));
            t144 = (t144 + 0x4);
            nlObjPutLoadTexture(t145, 0x8C131D9C);
            t147 = R1004;
            R1004 = (t147 + 0x1);
            if ((unsigned int)(t147 + 0x1) >= (unsigned int)0x7) {
                break;
            }
        }
    }
    if ((*(int *)0x8C1891F0) == 15) {
        nlSetCommonTextureOffset(0x1300);
        R1004 = 0x0;
        t153 = 0x8C1389A0;
        for (;;) {
            t154 = *(int *)((t153 + 0x0));
            t153 = (t153 + 0x4);
            nlObjPutLoadTexture(t154, 0x8C131F1C);
            t156 = R1004;
            R1004 = (t156 + 0x1);
            if ((unsigned int)(t156 + 0x1) >= (unsigned int)0x8) {
                break;
            }
        }
    }
    if ((*(int *)0x8C1891F0) == 16) {
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
    if ((*(int *)0x8C1891F0) == 17) {
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
    *(unsigned int *)((((*(int *)0x8C1891F0) << 2) + 0x8C343F98)) = 0x1;
    *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
    return 0x8C343F98;
}


