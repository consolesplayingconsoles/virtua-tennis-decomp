/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gNlFontHeight[];
extern char gNlFontWidth[];
extern char gNlPaletteAllocationBitmap[];
extern char gNlSoundStreams[];
extern char gNlSpriteIndexBitmap[];
extern char gVmsFileCommandStates[];
extern char gVmsVolumeStates[];
extern char g_0c14a7b8[];
extern char g_0c2af0c0[];
extern char g_0c2af0c4[];
extern char g_0c2af0d0[];
extern char g_0c2b3190[];
extern char g_0c2b7624[];
extern char g_0c2b7628[];
extern char g_0c2b762c[];
extern char g_0c2b7630[];
extern char g_0c2b76c0[];
extern char g_0c2fd440[];
extern char g_0c2fd444[];
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
int ADXRNA_GetTime(int, int, int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetTotalNumSmpl(int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int check_cache(int);
int nlChangeDisplayMode(int, int);
int nlExp(float);
int nlInitPrint(void);
float nlLog(float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPrintSetZ(float);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlSetPalExtMode(int);
int nlTranslate(float, float, float);
int nlsndG2WriteN(int, int, int);
int nlsndSeqRequest(int);
int rankDrawGlyph(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int vmsfs_c_progress(int, int, int, int);
void ballBoyPropPut(int a4);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
void sysSetVideoMode(int a4);
int nlSearchPalette(int a4, int a5);
int nlLineCalcFogA(int a4);
int ndbPack(int a4, int a5, int a6);
int syIntAdrChk_putchar(int a4, int a5);
int scoreBoardSync(void);
int kmiConvertUVnum(int a4);
int ADXT_GetTime(int a4, int a5, int a6);
int hudFlagInit(void);
int rankDrawString(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void nlPow(float f4, float f5);
int nlsndFxControl(int a4, int a5, int a6);
float cpuStickNudge(int a4, float f4);
int nlsndStreamSetHdInfo(int a4, int a5);
int kmyUseAnotherList(int a4, int a5);
int nlSpriteGetNextSpriteIndex(void);
int vmsfs_mount2(int a4);
int kmtex_GetTextureLevel(int a4, int a5);
int nlArcTan(float f4);
int nlsndStreamOpen(int a4);
int kmyiSetScreenSize(int a4);
void perfPrint(void);
void dbgMenuDrawTitles(void);
int padDirOn(int a4, int a5);
int nlLocate(int a4, int a5);

void ballBoyPropPut(int a4)
{
    int t0;
    int t3;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t3 = 0x1;
        if (0.0f > (*(float *)((a4 + 0x5A4)))) {
            t3 = 0x0;
        }
        if ((*(int *)((((0x8C1D10DC + ((t0 << 2) << 1)) + (t3 << 2)) + 0x0))) != 0) {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0x5A4))), (*(float *)0x8C0CAEBC), (*(float *)((a4 + 0x5AC))));
            nlObjPut((*(int *)((((0x8C1D10DC + (((*(int *)0x8C1891E8) << 2) << 1)) + (t3 << 2)) + 0x0))));
            nlPopMatrix(0x1);
    return;
        }
        return;
    }
}

int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int stk[12];

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a7;
    if ((int)a5 < (int)0x8) {
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = 0x0;
        return 0xFFFFFFFF;
    }
    t2 = adxb_DecodeInfoAuSub((*(int *)(((int)stk + 36))), a5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), (((int)stk + 12) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 36));
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a11 + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned char *)((a10 + 0x0)) = (*(int *)(((int)stk + 20)));
        *(unsigned char *)((a8 + 0x0)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)((a12 + 0x0)) = (*(int *)(((int)stk + 28)));
        *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return 0x0;
    }
    return 0xFFFFFFFF;
}

void sysSetVideoMode(int a4)
{
    if (a4 != (*(int *)0x8C23D200)) {
        if (a4 != 1) {
            if (a4 != 2) {
            } else {
                *(unsigned int *)0x8C23D200 = 0x2;
                nlChangeDisplayMode(0x9, 0x80);
                *(float *)0x8C23D204 = 1.0f;
                *(float *)0x8C23D208 = 1.0f;
            }
        } else {
            *(unsigned int *)0x8C23D200 = 0x1;
            nlSetPalExtMode(0x1);
            nlChangeDisplayMode(0x1A, 0x80);
            *(float *)0x8C23D204 = 1.20000005f;
            *(float *)0x8C23D208 = 1.20000005f;
            *(float *)0x8C23D204 = 1.0f;
            *(float *)0x8C23D208 = 1.0f;
        }
        nlInitPrint();
        nlPrnIndentOn();
        nlPrintSetZ(9.99999975e-06f);
    return;
    }
}

int nlSearchPalette(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t17;
    int t12;
    int t13;
    int t31;
    int t24;
    int t28;
    int t0;
    int t15;

    if (a4 == 16) {
        t1 = 0x0;
        t2 = 0x0;
        t3 = 0xFFFFFFFF;
        for (;;) {
            t4 = ((t2 << 2) << 2);
            t5 = 0x0;
            t6 = 0x1;
            for (;;) {
                if (((*(short *)((((t2 << 1) + (int)gNlPaletteAllocationBitmap) + 0x0))) & t6) == 0) {
                    t9 = (t1 == 0);
                    t1 = (t1 + 0x1);
                    if (t9) {
                        t3 = t4;
                    }
                    if ((int)t1 < (int)((int)(a5 + 0xF) >> 4)) {
                        t0 = 0x10;
                        t5 = (t5 + 0x1);
                        t6 = (t6 + t6);
                        t4 = (t4 + 0x1);
                        if ((int)t5 >= (int)t0) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t1 = 0x0;
                t0 = 0x10;
                t5 = (t5 + 0x1);
                t6 = (t6 + t6);
                t4 = (t4 + 0x1);
                if ((int)t5 >= (int)t0) {
                    break;
                }
            }
            t0 = 0x4;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t0) {
                break;
            }
        }
        t24 = t3;
        t28 = t1;
    } else {
        t17 = 0x0;
        if ((unsigned int)(int)gNlPaletteAllocationBitmap < (unsigned int)0x8C42420C) {
            t12 = (int)gNlPaletteAllocationBitmap;
            t13 = 0x0;
            for (;;) {
                if (((*(short *)((t12 + 0x0))) & ((((int)((int)(a5 + 0xF) >> 4) >= 0) ? (0x1 << (((int)(a5 + 0xF) >> 4) & 31)) : ((-(int)((int)(a5 + 0xF) >> 4) & 31) ? ((int)0x1 >> (-(int)((int)(a5 + 0xF) >> 4) & 31)) : ((int)0x1 >> 31))) - 1)) == 0) {
                    break;
                }
                t12 = (t12 + 0x2);
                t13 = (t13 + 0x10);
                if ((unsigned int)t12 >= (unsigned int)0x8C42420C) {
                    if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
            }
            t15 = t13;
            t17 = ((int)(a5 + 0xF) >> 4);
        } else {
            t15 = 0xFFFFFFFF;
        }
        t24 = t15;
        t28 = t17;
    }
    t31 = t24;
    if ((int)t28 < (int)((int)(a5 + 0xF) >> 4)) {
        t31 = 0xFFFFFFFF;
    }
    return t31;
}

int nlLineCalcFogA(int a4)
{
    float u0;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t9;
    int t7;
    int t16;
    int t12;

    u0 = *(float *)((a4 + 0x4));
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)(int)g_0c2b7628;
    u4 = *(float *)(int)g_0c2b762c;
    u5 = *(float *)((a4 + 0x0));
    u6 = *(float *)(int)g_0c2b7630;
    t9 = 0x2;
    if (u5 > ((*(float *)(int)g_0c2b7624) * u2)) {
    } else {
        t7 = 0x0;
        if ((u4 * u2) > u5) {
            t7 = 0x1;
        }
        t9 = t7;
    }
    t16 = (t9 | 0x8);
    if (u0 > (u3 * u2)) {
    } else {
        t12 = t9;
        if ((u6 * u2) > u0) {
            t12 = (t9 | 0x4);
        }
        t16 = t12;
    }
    return t16;
}


int syIntAdrChk_putchar(int a4, int a5)
{
    int t0;
    int t8;
    int t4;
    int t7;
    int t16;
    int t18;
    int t21;
    int t22;

    t0 = *(int *)(int)g_0c2fd444;
    if (t0 != 0) {
        t8 = t0;
        if (t0 == 1) {
            for (;;) {
                if (((unsigned char)(*(signed char *)((((*(int *)0x8C476474) + 0x10) + 0x0))) & 0x80) == 0x80) {
                    break;
                }
            }
            *(unsigned char *)((((*(int *)0x8C476474) + 0xC) + 0x0)) = a4;
            t4 = *(int *)0x8C476474;
            *(unsigned char *)(((t4 + 0x10) + 0x0)) = ((*(signed char *)(((t4 + 0x10) + 0x0))) & 0x7F);
            for (;;) {
                t7 = *(signed char *)((((*(int *)0x8C476474) + 0x10) + 0x0));
                if (((unsigned char)t7 & 0x4) == 4) {
                    break;
                }
            }
            t8 = ((unsigned char)t7 & 0x4);
        }
        t22 = t8;
    } else {
        for (;;) {
            if (((unsigned short)(*(short *)(((*(int *)(int)g_0c2fd440) + 0x10))) & 0x20) == 32) {
                break;
            }
        }
        *(unsigned char *)((((*(int *)(int)g_0c2fd440) + 0xC) + 0x0)) = a4;
        t16 = *(int *)(int)g_0c2fd440;
        *(unsigned short *)(((t16 + 0x10) + 0x0)) = ((*(short *)(((t16 + 0x10) + 0x0))) & 0xFFDF);
        t18 = *(int *)(int)g_0c2fd440;
        *(unsigned short *)(((t18 + 0x10) + 0x0)) = ((*(short *)(((t18 + 0x10) + 0x0))) & 0xFFBF);
        for (;;) {
            t21 = *(short *)(((*(int *)(int)g_0c2fd440) + 0x10));
            if (((unsigned short)t21 & 0x40) == 64) {
                break;
            }
        }
        t22 = ((unsigned short)t21 & 0x40);
    }
    return t22;
}

int scoreBoardSync(void)
{
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;

    if ((*(int *)0x8C334424) == 4) {
        *(unsigned int *)0x8C337C0C = 0x3C;
    } else {
        *(unsigned int *)0x8C337C0C = 0x38;
    }
    if ((*(int *)0x8C334428) == 4) {
        *(unsigned int *)0x8C337C10 = 0x3C;
    } else {
        *(unsigned int *)0x8C337C10 = 0x39;
    }
    *(unsigned int *)0x8C337C14 = (*(int *)0x8C3343F0);
    *(unsigned int *)0x8C337C18 = (*(int *)0x8C3343F4);
    *(unsigned int *)0x8C337C48 = 0x0;
    *(unsigned int *)0x8C337C44 = 0x0;
    t8 = 0x0;
    for (;;) {
        t9 = 0x0;
        t10 = 0x8C337C44;
        for (;;) {
            t11 = *(int *)(((t8 << 2) + (0x8C3343C8 + t9)));
            *(unsigned int *)((((t9 + 0x8C337C1C) + (t8 << 2)) + 0x0)) = t11;
            if (t11 != 0) {
                *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) + 0x1);
            }
            t15 = (0x8C3343C8 + t9);
            t9 = (t9 + 0x14);
            t10 = (t10 + 0x4);
            if ((unsigned int)t9 >= (unsigned int)0x28) {
                break;
            }
        }
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0x5) {
            break;
        }
    }
    return t15;
}

int kmiConvertUVnum(int a4)
{
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int T_;
    R4 = a4;
    L_8C0EA560:;
    R0 = (R4);
    if ((R4 != 8)) goto L_8C0EA570;
    goto L_8C0EA566;
    L_8C0EA566:;
    R4 = (0x0);
    goto L_8C0EA608;
    L_8C0EA608:;
    return R4;
    L_8C0EA570:;
    if ((R0 != 16)) goto L_8C0EA580;
    goto L_8C0EA574;
    L_8C0EA574:;
    R4 = (0x1);
    goto L_8C0EA608;
    L_8C0EA580:;
    R0 = (R4);
    if ((R4 != 32)) goto L_8C0EA5C0;
    goto L_8C0EA586;
    L_8C0EA586:;
    R4 = (0x2);
    goto L_8C0EA608;
    L_8C0EA5C0:;
    if ((R0 != 64)) goto L_8C0EA5D0;
    goto L_8C0EA5C4;
    L_8C0EA5C4:;
    R4 = (0x3);
    goto L_8C0EA608;
    L_8C0EA5D0:;
    if ((R4 != 0x80)) goto L_8C0EA5E0;
    goto L_8C0EA5D6;
    L_8C0EA5D6:;
    R4 = (0x4);
    goto L_8C0EA608;
    L_8C0EA5E0:;
    if ((R4 != 0x100)) goto L_8C0EA5F0;
    goto L_8C0EA5E6;
    L_8C0EA5E6:;
    R4 = (0x5);
    goto L_8C0EA608;
    L_8C0EA5F0:;
    if ((R4 != 0x200)) goto L_8C0EA600;
    goto L_8C0EA5F6;
    L_8C0EA5F6:;
    R4 = (0x6);
    goto L_8C0EA608;
    L_8C0EA600:;
    if ((R4 != 0x400)) goto L_8C0EA608;
    goto L_8C0EA606;
    L_8C0EA606:;
    R4 = (0x7);
    goto L_8C0EA608;
}

int ADXT_GetTime(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        if ((*(signed char *)((a4 + 0x1))) == 5) {
            *(unsigned int *)((a5 + 0x0)) = (ADXSJD_GetTotalNumSmpl((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (ADXSJD_GetSfreq((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * ((int)((int)0x10 / (int)(ADXSJD_GetOutBps((*(int *)((a4 + 0x4))))))));
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x1;
        }
    } else {
        ADXRNA_GetTime((*(int *)((a4 + 0xC))), a5, a6);
    }
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + (*(int *)((a4 + 0x88))));
    return 0x88;
}

int hudFlagInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t14;
    int t15;
    int t16;
    int t17;
    int t3;
    int t7;
    int stk[63];

    t0 = 0x8C10F004;
    t2 = (((int)stk + 28) + 0x60);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10F004 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C10F064;
    t6 = ((int)stk + 28);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C10F064 + 96)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x0;
    for (;;) {
        sprInitRectF((((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30), 0x18, (((int)stk + 28) + 0x60), 0x40, 0x40, (t8));
        sprInitRectF((0x1E0 + (((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30)), 0x19, ((int)stk + 28), 0x40, 0x40, (t8));
        t14 = sprInitRectF((0x3C0 + (((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30)), 0x1A, ((int)stk + 28), 0x40, 0x40, (t8));
        t15 = (((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30);
        t16 = (0x1E0 + (((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30));
        t17 = (0x3C0 + (((((t8 << 2) + t8) << 2) << 2) + 0x8C33AB30));
        t8 = (t8 + 0x1);
        *(unsigned int *)((t15 + 0x34)) = 0x5;
        *(unsigned int *)((t16 + 0x34)) = 0x5;
        *(unsigned int *)((t17 + 0x34)) = 0x5;
        if ((int)t8 >= (int)0x6) {
            break;
        }
    }
    return t14;
}

int rankDrawString(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    int t8;
    int t13;
    int t14;
    float u15;
    int stk[23];

    stk[11] = a8;
    stk[12] = a9;
    stk[13] = a10;
    stk[14] = a11;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = 0x8C0E13DC;
    t1 = a4;
    t2 = a5;
    t3 = a4;
    for (;;) {
        if ((*(signed char *)((t3 + 0x0))) == 0) {
            break;
        }
        t0 = (*(signed char *)((t3 + 0x0)));
        t1 = t0;
        if ((t0 != 32) && (t8 = (t0 == 32), t0 = t1, t0 != 95)) {
            t0 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
            t2 = (*(int *)(((int)stk + 16)));
            t1 = (*(signed char *)((t3 + 0x0)));
            t0 = (rankDrawGlyph(t1, t2, *(Stk3 *)((((int)stk + 16) + 0x1C))));
        } else {
            t13 = t1;
            t14 = t2;
            u15 = u4;
        }
        u4 = u15;
        t0 = (*(signed char *)((t3 + 0x0)));
        t1 = t13;
        t2 = t14;
        if (t0 == 107) {
            u4 = (*(float *)(((((int)stk + 16) + 0x1C) + 0x0)));
            u4 = (u4 + 32.0f);
            *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = u4;
        } else {
            if (t0 == 95) {
                u4 = (*(float *)(((((int)stk + 16) + 0x1C) + 0x0)));
                u4 = (u4 + 12.0f);
            } else {
                u4 = (*(float *)(((((int)stk + 16) + 0x1C) + 0x0)));
                u4 = (u4 + 24.0f);
            }
            *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = u4;
        }
        t3 = (t3 + 0x1);
    }
    return t0;
}

void nlPow(float f4, float f5)
{
    int t2;
    float u3;
    int t6;
    float u7;
    float u8;
    float t14;

    if (f4 == 0.0f) {
        
        return;
    }
    if (f5 == (float)(int)f5) {
        t2 = (int)f5;
        u3 = f4;
        if ((int)(int)f5 < 0) {
            t2 = (-(int)f5);
            u3 = (1.0f / f4);
        }
        t6 = t2;
        u7 = 1.0f;
        u8 = u3;
        for (;;) {
            if ((t6 & 0x1) != 0) {
                u7 = (u7 * u8);
            }
            t6 = ((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u)));
            t6 = (t6 >> 1);
            if (t6 != 0) {
                u8 = (u8 * u8);
                continue;
            }
            break;
        }
        return;
    }
    if (0.0f > f4) {
        return;
    }
    t14 = nlLog(f4);
    nlExp((f5 * t14));
}

int nlsndFxControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            if (a5 != 0x20A4) {
                return 0xFFFFFFFE;
            }
            return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
    }
    t0 = nlsndSeqRequest((((0x7F00 & a6) << 8) + 0x70A4));
    if (t0 != 0) {
        return t0;
    }
    return nlsndSeqRequest((((0x7F & a6) << 16) + 0xA4));
}

float cpuStickNudge(int a4, float f4)
{
    int t0;
    float u6;
    float u8;
    float u11;
    int t14;
    int t12;
    float u17;
    float u47;
    float u37;
    float u27;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7))) != 0) {
        if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC))) != 1) {
            u6 = *(float *)((a4 + 0xCF4));
            u8 = (-u6);
            if (!(0.0f > u6)) {
                u8 = (*(float *)((a4 + 0xCF4)));
            }
            if (0.75f > u8) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7)) = 0x0;
            } else {
                u11 = *(float *)((a4 + 0xCF4));
                t14 = 0x1;
                if (u11 > 0.0f) {
                } else {
                    t12 = 0x0;
                    if (0.0f > u11) {
                        t12 = 0xFFFFFFFF;
                    }
                    t14 = t12;
                }
                u17 = *(float *)((a4 + 0xB00));
                if ((float)t14 != ((float)((-((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) & 0xC0)) + 0x60) / (u17 * (1.0f + 1.0f)))) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = ((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) & 0xFFFFFF3F);
                }
                u27 = (u17 * (1.0f + 1.0f));
            }
            u37 = u27;
        } else {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7)) = 0x0;
        }
        u47 = u37;
    }
    return u47;
}

int nlsndStreamSetHdInfo(int a4, int a5)
{
    int t0;
    int t17;
    int t2;
    int t12;
    int t5;
    int t6;
    int t10;
    int t8;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    t17 = t0;
    if (t0 == 1) {
        t2 = *(signed char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1));
        t12 = t2;
        if (t2 == 0) {
            nlsndG2WriteN(a5, ((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800100) + 0x20), 0x10);
            *(unsigned int *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0xC)) = (unsigned short)(*(short *)((a5 + 0x2A)));
            t5 = *(signed char *)((a5 + 0x8));
            if ((short)(unsigned char)t5 != 0) {
                if ((short)(unsigned char)t5 != 1) {
                    t6 = (short)(unsigned char)t5;
                    if (((short)(unsigned char)t5 == 2) || ((short)(unsigned char)t5 == 3)) {
                        *(unsigned short *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x2)) = 0x4;
                        t6 = 0x4;
                    }
                    t8 = t6;
                } else {
                    *(unsigned short *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x2)) = 0x8;
                    t8 = 0x8;
                }
                t10 = t8;
            } else {
                *(unsigned short *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x2)) = 0x10;
                t10 = 0x10;
            }
            t12 = t10;
        }
        t17 = t12;
    }
    return t17;
}

int kmyUseAnotherList(int a4, int a5)
{
    int t0;
    int t43;
    int t44;
    int t26;
    int t27;
    int t9;
    int t10;
    int t3;
    int t4;
    int t14;
    int t15;
    int t31;
    int t32;
    int t37;
    int t38;
    int t20;
    int t21;

    t0 = *(int *)((a4 + 0x0));
    t43 = 0xEEEE;
    t44 = t0;
    if (a5 != 0) {
        if (a5 != 1) {
            t26 = 0xEEEE;
            t27 = t0;
            if (a5 != 2) {
                if (a5 != 3) {
                    t9 = 0xEEEE;
                    t10 = t0;
                    if (a5 != 4) {
                    } else {
                        t3 = 0xEEEE;
                        t4 = t0;
                        if ((0x300 & t0) != 0) {
                            t3 = 0x0;
                            t4 = ((t0 & 0xFFFCFFFF) | 0x40000);
                        }
                        t9 = t3;
                        t10 = t4;
                    }
                    t20 = t9;
                    t21 = t10;
                } else {
                    t14 = 0xEEEE;
                    t15 = t0;
                    if ((0x30 & t0) != 0) {
                        t14 = 0x0;
                        t15 = ((t0 & 0xFFFF4FFF) | 0x4000);
                    }
                    t20 = t14;
                    t21 = t15;
                }
                t26 = t20;
                t27 = t21;
            }
            t37 = t26;
            t38 = t27;
        } else {
            t31 = 0xEEEE;
            t32 = t0;
            if ((0x3000 & t0) != 0) {
                t31 = 0x0;
                t32 = ((t0 & 0xFFFFFF4F) | 0x40);
            }
            t37 = t31;
            t38 = t32;
        }
        t43 = t37;
        t44 = t38;
    }
    *(unsigned int *)((a4 + 0x0)) = t44;
    return t43;
}

int nlSpriteGetNextSpriteIndex(void)
{
    int t0;
    int t6;
    int t8;
    int t9;
    int t10;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((int)((int)((*(int *)(int)g_0c2b76c0) + 0x1F) / (int)0x20))) {
            return 0xFFFFFFFF;
        }
        t6 = *(int *)(((t0 << 2) + (*(int *)(int)gNlSpriteIndexBitmap)));
        if (t6 != -1) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t8 = 0x1;
    t9 = 0x0;
    for (;;) {
        if ((t6 & t8) == 0) {
            break;
        }
        t8 = (t8 << 1);
        t9 = (t9 + 0x1);
    }
    t10 = *(int *)(int)gNlSpriteIndexBitmap;
    *(unsigned int *)(((t0 << 2) + t10)) = ((*(int *)(((t0 << 2) + t10))) | t8);
    return ((((t0 << 2) << 2) << 1) + t9);
}

int vmsfs_mount2(int a4)
{
    int t1;
    int t3;
    int t4;

    if ((*(signed char *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0x8C20C750)));
    t3 = *(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x30));
    t4 = *(int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + (int)gVmsVolumeStates) + 0x30)) = (t3 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + (int)gVmsFileCommandStates) + 0x8))), ((t3 + 0x1) - 1), t4);
    return check_cache(a4);
}

int kmtex_GetTextureLevel(int a4, int a5)
{
    int t0;

    t0 = a4;
    if ((int)a4 >= (int)a5) {
        t0 = a5;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 8) {
                    if (t0 != 16) {
                        if (t0 != 32) {
                            if (t0 != 64) {
                                if (t0 != 0x80) {
                                    if (t0 != 0x100) {
                                        if (t0 != 0x200) {
                                            if (t0 != 0x400) {
                                                return 0x3;
                                            }
                                            return 0xA;
                                        }
                                        return 0x9;
                                    }
                                    return 0x8;
                                }
                                return 0x7;
                            }
                            return 0x6;
                        }
                        return 0x5;
                    }
                    return 0x4;
                }
                return 0x3;
            }
            return 0x2;
        }
        return 0x1;
    }
    return 0x0;
}

int nlArcTan(float f4)
{
    float u0;
    int t2;
    float u3;
    int t4;
    int t5;
    float u8;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t2 = 0xD;
    u3 = 0.0f;
    for (;;) {
        t4 = (t2 << 1);
        t5 = t2;
        t2 = (t2 - 1);
        u8 = (((float)t4 + u3) + 1.0f);
        u3 = ((((((float)t5 * (float)t5)) * u0)) * u0);
        u3 = (u3 / u8);
        if ((int)t2 < (int)0x1) {
            break;
        }
    }
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(((((u0 / (u3 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f) + 0.5f) & 0xFFFF));
    }
    if ((-1.0f) > f4) {
        return (unsigned short)(0xC000 - ((int)(((((u0 / (u3 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f) + 0.5f) & 0xFFFF));
    }
    return ((int)(((((u0 / (u3 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f) + 0.5f) & 0xFFFF);
}

int nlsndStreamOpen(int a4)
{
    int t0;
    int t26;
    int t14;
    int t34;
    int t2;
    int t9;
    int t16;
    int t23;

    if ((short)a4 == 1) {
        t0 = 0x0;
        for (;;) {
            if (((*(signed char *)(((((short)t0 * (short)0x1C) + (int)gNlSoundStreams) + 0x0))) == 0) && (t2 = *(int *)(((((short)t0 * (short)0x1C) + (int)gNlSoundStreams) + 0x8)), t2 == 0)) {
                if (0x1 == 0) {
                    return 0xFFFFFFFF;
                }
                *(unsigned char *)(((((short)t0 * (short)0x1C) + (int)gNlSoundStreams) + 0x0)) = 0x1;
                return t0;
            }
            t0 = (t0 + 0x1);
            if ((int)(short)t0 >= (int)0x8) {
                break;
            }
        }
        if (0x0 == 0) {
            t9 = 0xFFFFFFFF;
        } else {
            *(unsigned char *)(((((short)t0 * (short)0x1C) + (int)gNlSoundStreams) + 0x0)) = 0x1;
            t9 = t0;
        }
        t34 = t9;
    } else {
        t26 = 0xFFFFFFFF;
        if ((short)a4 == 2) {
            t14 = 0x0;
            for (;;) {
                if (((*(signed char *)(((((short)t14 * (short)0x1C) + (int)gNlSoundStreams) + 0x0))) == 0) && (t16 = *(int *)(((((short)t14 * (short)0x1C) + (int)gNlSoundStreams) + 0x8)), t16 != 0)) {
                    break;
                }
                t14 = (t14 + 0x1);
                if ((int)((short)t14) >= (int)0x8) {
                    if (0x0 == 0) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned char *)(((((short)t14 * (short)0x1C) + (int)gNlSoundStreams) + 0x0)) = 0x1;
                    return t14;
                }
            }
            if (0x1 == 0) {
                t23 = 0xFFFFFFFF;
            } else {
                *(unsigned char *)(((((short)t14 * (short)0x1C) + (int)gNlSoundStreams) + 0x0)) = 0x1;
                t23 = t14;
            }
            t26 = t23;
        }
        t34 = t26;
    }
    return t34;
}

int kmyiSetScreenSize(int a4)
{
    int t10;
    int t0;
    int t5;
    int t14;

    if ((0x20 & a4) != 0) {
        if ((0x42 & a4) == 66) {
            *(unsigned int *)0x8C45EEA0 = 0x200;
            t0 = (0x42 & a4);
        } else {
            *(unsigned int *)0x8C45EEA0 = 0x1E0;
            t0 = 0x1E0;
        }
        t10 = t0;
    } else {
        if ((0x42 & a4) == 66) {
            *(unsigned int *)0x8C45EEA0 = 0x100;
            t5 = (0x42 & a4);
        } else {
            *(unsigned int *)0x8C45EEA0 = 0xF0;
            t5 = 0xF0;
        }
        t10 = t5;
    }
    if ((a4 & 0x10) != 0) {
        *(unsigned int *)0x8C45EE9C = 0x280;
        t14 = t10;
    } else {
        *(unsigned int *)0x8C45EE9C = 0x140;
        t14 = 0x8C45EE9C;
    }
    return t14;
}

void perfPrint(void)
{
    
}

void dbgMenuDrawTitles(void)
{
    
}

int padDirOn(int a4, int a5)
{
    int t7;
    int t11;
    int t15;
    int t19;
    int t23;
    int t27;
    int t31;
    int t35;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C030184:;
    R0 = (R5);
    R6 = (0x0);
    R7 = (((R4 << 2) + (int)padPeri));
    if ((R5 == 16)) goto L_8C0301BC;
    goto L_8C030194;
    L_8C030194:;
    if ((R0 == 32)) goto L_8C0301D0;
    goto L_8C030198;
    L_8C030198:;
    if ((R0 == 64)) goto L_8C0301E4;
    goto L_8C03019C;
    L_8C03019C:;
    if ((R0 == 0x80)) goto L_8C0301F8;
    goto L_8C0301A2;
    L_8C0301A2:;
    goto L_8C03020A;
    L_8C03020A:;
    return R6;
    L_8C0301F8:;
    t7 = *(int *)((R7 + 0x0));
    R4 = (t7);
    if (((R5 & (*(int *)((t7 + 0x8)))) != 0)) goto L_8C030208;
    goto L_8C030200;
    L_8C030200:;
    t11 = *(short *)((R4 + 0x1C));
    R0 = (t11);
    if (((int)t11 <= (int)0x20)) goto L_8C03020A;
    goto L_8C030208;
    L_8C030208:;
    R6 = (0x80);
    goto L_8C03020A;
    L_8C0301E4:;
    t15 = *(int *)((R7 + 0x0));
    R4 = (t15);
    if (((R5 & (*(int *)((t15 + 0x8)))) != 0)) goto L_8C0301F4;
    goto L_8C0301EC;
    L_8C0301EC:;
    t19 = *(short *)((R4 + 0x1C));
    R0 = (t19);
    if (((int)t19 >= (int)0xFFFFFFE0)) goto L_8C03020A;
    goto L_8C0301F4;
    L_8C0301F4:;
    R6 = (0x40);
    goto L_8C03020A;
    L_8C0301D0:;
    t23 = *(int *)((R7 + 0x0));
    R4 = (t23);
    if (((R5 & (*(int *)((t23 + 0x8)))) != 0)) goto L_8C0301E0;
    goto L_8C0301D8;
    L_8C0301D8:;
    t27 = *(short *)((R4 + 0x1E));
    R0 = (t27);
    if (((int)t27 <= (int)0x20)) goto L_8C03020A;
    goto L_8C0301E0;
    L_8C0301E0:;
    R6 = (0x20);
    goto L_8C03020A;
    L_8C0301BC:;
    t31 = *(int *)((R7 + 0x0));
    R4 = (t31);
    if (((R5 & (*(int *)((t31 + 0x8)))) != 0)) goto L_8C0301CC;
    goto L_8C0301C4;
    L_8C0301C4:;
    t35 = *(short *)((R4 + 0x1E));
    R0 = (t35);
    if (((int)t35 >= (int)0xFFFFFFE0)) goto L_8C03020A;
    goto L_8C0301CC;
    L_8C0301CC:;
    R6 = (0x10);
    goto L_8C03020A;
}

int nlLocate(int a4, int a5)
{
    int t0;
    float u2;
    float u5;

    t0 = *(int *)(int)gNlFontWidth;
    if ((*(int *)(int)g_0c14a7b8) == 0) {
        u2 = *(float *)0x8C1DCA2C;
        *(unsigned int *)(int)g_0c2af0c0 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)(int)g_0c2af0d0 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)(int)g_0c2af0c4 = (int)((float)((*(int *)(int)gNlFontHeight) * a5) + (*(float *)0x8C1DCA30));
    } else {
        u5 = *(float *)0x8C1DCA30;
        *(unsigned int *)(int)g_0c2af0c0 = (int)((float)(t0 * a4) + u5);
        *(unsigned int *)(int)g_0c2af0d0 = (int)((float)(t0 * a4) + u5);
        *(unsigned int *)(int)g_0c2af0c4 = (int)(((float)(((*(int *)(int)gNlFontHeight) * a5) + (*(short *)(int)g_0c2b3190)) - (*(float *)0x8C1DCA2C)) - (*(float *)0x8C1DCA24));
    }
    return (int)gNlFontHeight;
}
