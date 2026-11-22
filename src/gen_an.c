typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int rankDrawGlyph(int, int, int, int, Stk3, float, float);
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
int rankDrawString(int a4, int a5, int a6, int a7, Stk4 p);
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

int rankDrawString(int a4, int a5, int a6, int a7, Stk4 p)
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
    int R1016;

    stk[11] = p.w[0];
    stk[12] = p.w[1];
    stk[13] = p.w[2];
    stk[14] = p.w[3];
    R1016 = *(int *)((int)stk + 16);

    R1016 = a5;
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
            t2 = (R1016);
            t1 = (*(signed char *)((t3 + 0x0)));
            t0 = (rankDrawGlyph(t1, t2, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x1C)), 0.0f, 0.0f));
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
    R7 = (((R4 << 2) + 0x8C29B898));
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

