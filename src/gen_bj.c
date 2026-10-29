/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int cpuAimPointSet(int, int, float, float);
int hudRankIconPut(int, Stk3);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int motionBackup(int);
int motionChange(int, int, int, int, int, float);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int nlArcTan(float);
float nlCos(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAY(int);
float nlSin(int);
float nlTan(int);
int nlTranslate(float, float, float);
int nl_requset_PixelClipping(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int serveGetReceiver(void);
int serveGetServer(void);
int sprListPutGrad(int, int, int, int, Stk3, float, float);
int sprPutAt(int, Stk3);
int staffMorphReset(void);
int standBgDraw(int, int, int, int);
int standPanelDraw(int, int, int, int, Stk3);
int standTableDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int nlPerspective(int a4, float f4, float f5, float f6);
int rankDrawGlyph(int a4, int a5, int a6);
int stageSegaCourtDraw(int a4);
int standDraw(int a4, int a5);
int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7);
int nlSetPixelClipping(float f4, float f5, float f6, float f7);
void syCacheOCBI(int a4, int a5);
void syCacheOCBP(int a4, int a5);
int ballBoyRecall(int a4);
int cpuDblTacticPos(int a4, int a5);



int stageSegaCourtDraw(int a4)
{
    int t117;
    int t5;
    int t85;

    if ((*(int *)0x8C287ADC) != 2) {
        nlObjPut(0xC8EAB70);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t5 = (*(int *)0x8C18D2A0);
        } else {
            t5 = (*(int *)0x8C18D29C);
        }
        t117 = (nlObjPut(t5));
    } else {
        nlObjPut(0xC8C6830);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18D288));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t85 = 0x8C18D298;
        } else {
            nlObjPut((*(int *)0x8C18D284));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t85 = 0x8C18D294;
        }
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, -118.699997f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 62.9000015f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 118.699997f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, 118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, -118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t85 + 0x0))));
        t117 = (nlPopMatrix(0x1));
    }
    return t117;
}


int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u7;
    float u9;
    int t38;
    float u11;
    float u12;
    float u15;
    float u17;
    int t23;
    float u52;
    float u55;
    float u57;
    int t86;
    float u59;
    float u60;
    float u63;
    float u65;
    int t71;
    float u100;
    float u101;
    float u104;
    float u106;
    float u110;
    float u111;
    int t114;
    int t112;
    float u127;
    float u128;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t2 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t3 = *(int *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB5C));
    u4 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u7 = ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u9 = ((-u4) - (u7 * 0.800000012f));
    if (!(0.0f > (u4 + (u7 * 0.800000012f)))) {
        u9 = (u4 + (u7 * 0.800000012f));
    }
    t38 = a5;
    if (47.5400009f > u9) {
        u11 = *(float *)((a4 + 0xB9C));
        u12 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u15 = ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u17 = (((-u11) + u12) + (u15 * 0.800000012f));
        if (!(0.0f > ((u11 - u12) - (u15 * 0.800000012f)))) {
            u17 = ((u11 - u12) - (u15 * 0.800000012f));
        }
        t23 = a5;
        if (20.0f > u17) {
            cpuAimPointSet(a5, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t23 = (a5 + 0x1);
        }
        t38 = t23;
    }
    u52 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
    u55 = ((*(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u57 = ((-u52) - (u55 * 0.800000012f));
    if (!(0.0f > (u52 + (u55 * 0.800000012f)))) {
        u57 = (u52 + (u55 * 0.800000012f));
    }
    t86 = t38;
    if (47.5400009f > u57) {
        u59 = *(float *)((a4 + 0xB9C));
        u60 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
        u63 = ((*(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u65 = (((-u59) + u60) + (u63 * 0.800000012f));
        if (!(0.0f > ((u59 - u60) - (u63 * 0.800000012f)))) {
            u65 = ((u59 - u60) - (u63 * 0.800000012f));
        }
        t71 = t38;
        if (20.0f > u65) {
            cpuAimPointSet(t38, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t71 = (t38 + 0x1);
        }
        t86 = t71;
    }
    u100 = *(float *)((a4 + 0xB9C));
    u101 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u104 = ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u106 = (((-u100) - u101) - (u104 * 0.800000012f));
    if (!(0.0f > ((u100 + u101) + (u104 * 0.800000012f)))) {
        u106 = ((u100 + u101) + (u104 * 0.800000012f));
    }
    if (15.0f > u106) {
        u127 = (*(float *)((a4 + 0xB9C)));
        u128 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
    } else {
        u110 = *(float *)((a4 + 0xB00));
        u111 = *(float *)((a4 + 0xB9C));
        t114 = 0x1;
        if (u111 > 0.0f) {
        } else {
            t112 = 0x0;
            if (0.0f > u111) {
                t112 = 0xFFFFFFFF;
            }
            t114 = t112;
        }
        u127 = ((((float)t114 * (nlRandom()))) * 54.8499985f);
        u128 = (u110 * 11.8850002f);
    }
    cpuAimPointSet(t86, 0x1, u127, u128);
    return (t86 + 0x1);
}

int nlSetPixelClipping(float f4, float f5, float f6, float f7)
{
    int t0;
    int t3;
    int t1;
    int t7;
    int t5;
    int t9;
    int t12;
    int t10;
    int t16;
    int t14;
    int t20;
    float u34;
    float u31;
    float u28;
    float u25;
    float u22;
    int t41;
    int t49;
    int t50;
    int t44;
    int t45;
    int t52;
    int t53;
    int t59;
    int t60;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;

    t0 = *(short *)0x8C458DD8;
    t3 = 0x0;
    if ((int)(int)f4 < 0) {
    } else {
        t1 = (int)f4;
        if ((int)(int)f4 >= (int)t0) {
            t1 = t0;
        }
        t3 = t1;
    }
    t7 = 0x0;
    if ((int)(int)(f4 + f6) < 0) {
    } else {
        t5 = (int)(f4 + f6);
        if ((int)(int)(f4 + f6) >= (int)t0) {
            t5 = t0;
        }
        t7 = t5;
    }
    t9 = *(short *)0x8C458DDA;
    t12 = 0x0;
    if ((int)(int)f5 < 0) {
    } else {
        t10 = (int)f5;
        if ((int)(int)f5 >= (int)t9) {
            t10 = t9;
        }
        t12 = t10;
    }
    t16 = 0x0;
    if ((int)(int)(f5 + f7) < 0) {
    } else {
        t14 = (int)(f5 + f7);
        if ((int)(int)(f5 + f7) >= (int)t9) {
            t14 = t9;
        }
        t16 = t14;
    }
    if ((*(int *)0x8C424470) == 1) {
        t20 = *(int *)0x8C1DC88C;
        u34 = 1.03299999f;
        if (t20 != 0) {
            u31 = 1.06599998f;
            if (t20 != 1) {
                u28 = 1.10000002f;
                if (t20 != 2) {
                    u25 = 1.13300002f;
                    if (t20 != 3) {
                        u22 = 1.16600001f;
                        if (t20 != 4) {
                            u22 = 1.0f;
                        }
                        u25 = u22;
                    }
                    u28 = u25;
                }
                u31 = u28;
            }
            u34 = u31;
        }
        nl_requset_PixelClipping((float)t3, ((float)t12 * u34), (float)t7, ((float)t16 * u34));
    } else {
        nl_requset_PixelClipping((float)t3, (float)t12, (float)t7, (float)t16);
    }
    t41 = *(short *)0x8C458DDA;
    if ((*(short *)0x8C458DDE) == 0) {
        t49 = ((int)t16 >> 5);
        t50 = ((int)t12 >> 5);
        if ((*(int *)0x8C42446C) == 0) {
            t44 = 0xFFFFFFFB;
            t45 = (t41 + 0x1F);
            if ((int)(t41 << 1) <= (int)0x1E0) {
                t44 = 0xFFFFFFFC;
                t45 = (t41 + 0xF);
            }
            t49 = ((((int)t44 >= 0) ? (t45 << (t44 & 31)) : ((-(int)t44 & 31) ? ((int)t45 >> (-(int)t44 & 31)) : ((int)t45 >> 31))) - 1);
            t50 = 0x0;
        }
        *(unsigned int *)0x8C1DC9F8 = ((int)t3 >> 5);
        *(unsigned int *)0x8C1DC9FC = ((int)t7 >> 5);
        t59 = t49;
        t60 = t50;
    } else {
        t52 = 0xFFFFFFFB;
        t53 = (t41 + 0x1F);
        if ((int)(t41 << 1) <= (int)0x1E0) {
            t52 = 0xFFFFFFFC;
            t53 = (t41 + 0xF);
        }
        *(unsigned int *)0x8C1DC9F8 = ((int)t3 >> 4);
        *(unsigned int *)0x8C1DC9FC = ((int)t7 >> 4);
        t59 = ((((int)t52 >= 0) ? (t53 << (t52 & 31)) : ((-(int)t52 & 31) ? ((int)t53 >> (-(int)t52 & 31)) : ((int)t53 >> 31))) - 1);
        t60 = 0x0;
    }
    *(unsigned int *)0x8C1DCA00 = t60;
    *(unsigned int *)0x8C1DCA04 = t59;
    if (((*(int *)0x8C1DCA08) == (*(int *)0x8C1DC9F8)) && ((t64 = *(int *)0x8C1DC9FC, t65 = *(int *)0x8C1DCA0C, t65 == t64) && ((t66 = *(int *)0x8C1DCA00, t67 = *(int *)0x8C1DCA10, t67 == t66) && (t68 = *(int *)0x8C1DCA04, t69 = *(int *)0x8C1DCA14, t69 == t68)))) {
        *(unsigned int *)0x8C1DCA18 = 0x0;
        t70 = 0x8C1DCA08;
    } else {
        *(unsigned int *)0x8C1DCA18 = 0x1;
        t70 = 0x1;
    }
    return t70;
}

void syCacheOCBI(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1E7A80))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

void syCacheOCBP(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1E7CD0))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}


int cpuDblTacticPos(int a4, int a5)
{
    int t5;
    int t7;
    int t9;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t20;
    int t28;
    int t29;
    int t69;
    int t86;
    int t24;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t5 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t7 = (int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u));
        t9 = ((~(((~((t7 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t7 >> 1) + 0x2) >= 0) {
            t9 = (((t7 >> 1) + 0x2) & 0x1);
        }
        t24 = ((((-t9) + 0x1) << 1) - 1);
    } else {
        t11 = *(int *)0x8C287B10;
        t12 = *(int *)0x8C287B14;
        t13 = ((~(((~((t11 + t12) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t11 + t12) + 0x2) >= 0) {
            t13 = (((t11 + t12) + 0x2) & 0x1);
        }
        t15 = *(int *)0x8C287B00;
        t16 = *(int *)0x8C287B04;
        t18 = (int)((unsigned int)((int)((unsigned int)(t15 + t16) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t15 + t16))) ? 1u : 0u));
        t20 = ((~(((~(t18 >> 1)) + 0x1) & 0x1)) + 0x1);
        if ((int)(t18 >> 1) >= 0) {
            t20 = ((t18 >> 1) & 0x1);
        }
        t24 = (((-(t13 << 1)) + 0x1) * ((-(t20 << 1)) + 0x1));
    }
    t28 = serveGetServer();
    t29 = ((~(((~t28) + 0x1) & 0x1)) + 0x1);
    if ((int)t28 >= 0) {
        t29 = (t28 & 0x1);
    }
    if (t29 == 0) {
        if ((*(int *)(((((*(int *)((((t28 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t28 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t24);
        }
        if ((*(int *)(((((*(int *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
        } else {
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t24);
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D660)));
        }
    } else {
        if ((*(int *)(((((*(int *)((((t28 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t28 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t24);
        }
        if ((*(int *)(((((*(int *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t24);
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D660)));
        }
    }
    t69 = serveGetReceiver();
    if ((*(int *)(((((*(int *)((((t69 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D664) * (float)t24);
        *(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D668)));
    }
    t86 = 0xB5C;
    if ((*(int *)(((((*(int *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D66C) * (float)t24);
        *(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D670)));
        t86 = 0xAF0;
    }
    return t86;
}
