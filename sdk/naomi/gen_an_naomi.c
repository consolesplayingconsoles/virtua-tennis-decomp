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
                if (((*(short *)((((t2 << 1) + 0x8C424204) + 0x0))) & t6) == 0) {
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
        if ((unsigned int)0x8C424204 < (unsigned int)0x8C42420C) {
            t12 = 0x8C424204;
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
    u3 = *(float *)0x8C454C4C;
    u4 = *(float *)0x8C454C50;
    u5 = *(float *)((a4 + 0x0));
    u6 = *(float *)0x8C454C54;
    t9 = 0x2;
    if (u5 > ((*(float *)0x8C454C48) * u2)) {
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

    t0 = *(signed char *)((0x8C454CF4 + ((short)a4 * (short)0x1C)));
    t17 = t0;
    if (t0 == 1) {
        t2 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        t12 = t2;
        if (t2 == 0) {
            nlsndG2WriteN(a5, ((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800100) + 0x20), 0x10);
            *(unsigned int *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0xC)) = (unsigned short)(*(short *)((a5 + 0x2A)));
            t5 = *(signed char *)((a5 + 0x8));
            if ((short)(unsigned char)t5 != 0) {
                if ((short)(unsigned char)t5 != 1) {
                    t6 = (short)(unsigned char)t5;
                    if (((short)(unsigned char)t5 == 2) || ((short)(unsigned char)t5 == 3)) {
                        *(unsigned short *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x2)) = 0x4;
                        t6 = 0x4;
                    }
                    t8 = t6;
                } else {
                    *(unsigned short *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x2)) = 0x8;
                    t8 = 0x8;
                }
                t10 = t8;
            } else {
                *(unsigned short *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x2)) = 0x10;
                t10 = 0x10;
            }
            t12 = t10;
        }
        t17 = t12;
    }
    return t17;
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
        if ((int)t0 >= (int)((int)((int)((*(int *)0x8C454C88) + 0x1F) / (int)0x20))) {
            return 0xFFFFFFFF;
        }
        t6 = *(int *)(((t0 << 2) + (*(int *)0x8C454C8C)));
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
    t10 = *(int *)0x8C454C8C;
    *(unsigned int *)(((t0 << 2) + t10)) = ((*(int *)(((t0 << 2) + t10))) | t8);
    return ((((t0 << 2) << 2) << 1) + t9);
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
            if (((*(signed char *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x0))) == 0) && (t2 = *(int *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x8)), t2 == 0)) {
                if (0x1 == 0) {
                    return 0xFFFFFFFF;
                }
                *(unsigned char *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x0)) = 0x1;
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
            *(unsigned char *)(((((short)t0 * (short)0x1C) + 0x8C454CF4) + 0x0)) = 0x1;
            t9 = t0;
        }
        t34 = t9;
    } else {
        t26 = 0xFFFFFFFF;
        if ((short)a4 == 2) {
            t14 = 0x0;
            for (;;) {
                if (((*(signed char *)(((((short)t14 * (short)0x1C) + 0x8C454CF4) + 0x0))) == 0) && (t16 = *(int *)(((((short)t14 * (short)0x1C) + 0x8C454CF4) + 0x8)), t16 != 0)) {
                    break;
                }
                t14 = (t14 + 0x1);
                if ((int)((short)t14) >= (int)0x8) {
                    if (0x0 == 0) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned char *)(((((short)t14 * (short)0x1C) + 0x8C454CF4) + 0x0)) = 0x1;
                    return t14;
                }
            }
            if (0x1 == 0) {
                t23 = 0xFFFFFFFF;
            } else {
                *(unsigned char *)(((((short)t14 * (short)0x1C) + 0x8C454CF4) + 0x0)) = 0x1;
                t23 = t14;
            }
            t26 = t23;
        }
        t34 = t26;
    }
    return t34;
}


int nlLocate(int a4, int a5)
{
    int t0;
    float u2;
    float u5;

    t0 = *(int *)0x8C44F95C;
    if ((*(int *)0x8C1DC8CC) == 0) {
        u2 = *(float *)0x8C1DCA2C;
        *(unsigned int *)0x8C44F954 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)0x8C44F964 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)0x8C44F958 = (int)((float)((*(int *)0x8C44F960) * a5) + (*(float *)0x8C1DCA30));
    } else {
        u5 = *(float *)0x8C1DCA30;
        *(unsigned int *)0x8C44F954 = (int)((float)(t0 * a4) + u5);
        *(unsigned int *)0x8C44F964 = (int)((float)(t0 * a4) + u5);
        *(unsigned int *)0x8C44F958 = (int)(((float)(((*(int *)0x8C44F960) * a5) + (*(short *)0x8C458DD8)) - (*(float *)0x8C1DCA2C)) - (*(float *)0x8C1DCA24));
    }
    return 0x8C44F960;
}
