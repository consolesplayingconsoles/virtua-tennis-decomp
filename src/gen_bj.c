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


