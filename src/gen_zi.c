/* Straight-line functions with calls and guards (batch gen_zi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupRequestSave(int, int, int, int);
extern int resetBackColorZ();
int ballWallStop(int);
int colliObjEntry(int);
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimRateE(int, int, int, int, int, int, int, int, int, int, int, int);
float cpuDblPathCross(int, int, int, int, Stk3, Stk3);
float cpuDistXZ(int, int);
float cpuEdgeX(int, Stk3, float);
int cpuShotRange(int, int, int, int, int, float, float);
int cpuShotTargetSet(int, float, float);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int emotFaceVtxGet(int, int, int);
float emotRetOne(void);
int fadeScreenStart(int, int, int, int, int, int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int miniPointPopSpawn(int, Stk3);
int miniSetModel(int, int);
int netHitBall(int, int, int, int, int, int, int, int, int, int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotate(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSeqRequest(int);
int rankInsert1(void);
int rankInsert2(void);
int rankSprTexLoad(void);
int shadowBallDraw(Stk3);
extern float vecDistXZ();
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int FUN_8c038b24(int a4, float f4);
void FUN_8c0e149a(float f4);
int FUN_8c07a512(int a4, int a5, float f4, float f5);
int FUN_8c0787c0(int a4, int a5);
int FUN_8c0bdf26(int a4, int a5);
int FUN_8c06ba96(int a4, float f4);


void FUN_8c0e149a(float f4)
{
    int stk[10];
    register int t0;
    register int t145;
    register int t110;
    register int t123;
    register int t111;
    register int t114;
    register int t115;
    register int t126;
    register int t137;
    register int t138;
    register int t139;
    register int t127;
    register int t128;
    register int t129;
    register int t130;
    register int t131;
    register int t150;
    register int t161;
    register int t162;
    register int t163;
    register int t151;
    register int t152;
    register int t153;
    register int t154;
    register int t155;
    register int t166;
    register int t167;
    register int t168;
    register int t169;
    register int t170;
    register int t171;
    register int t198;
    register int t2;
    register int t14;
    register int t22;
    register int t36;
    register int t53;
    register int t94;
    register int t97;
    register int t143;
    register int t144;
    register int t121;
    register int t122;
    register int t112;
    register int t113;

    t0 = ((int (*)(int, int, int, float))(resetBackColorZ))(0xFFFFFF, 0xFFFFFF, 0xFFFFFF, f4);
    *(unsigned int *)0x8C1D793C = 0x0;
    if (((*(int *)0x8C1D3514) != 1) && (t2 = *(int *)0x8C1D351C, t2 != 1)) {
        if (((*(int *)0x8C1D3518) != 1) && (t14 = *(int *)0x8C1D3520, t14 != 1)) {
        } else {
            if ((*(int *)0x8C287ADC) == 2) {
                t22 = (*(int *)0x8C287BB0);
            } else {
                t22 = ((*(int *)0x8C287BB0) + (*(int *)0x8C287BF8));
            }
            *(unsigned int *)0x8C421E34 = t22;
        }
    } else {
        if ((*(int *)0x8C287ADC) == 2) {
            t36 = (*(int *)0x8C287B8C);
        } else {
            t36 = ((*(int *)0x8C287B8C) + (*(int *)0x8C287BD4));
        }
        *(unsigned int *)0x8C421E34 = t36;
    }
    if ((*(int *)0x8C287ADC) == 2) {
        if ((*(int *)0x8C1D3514) == 1) {
            *(unsigned int *)0x8C421E5C = (*(int *)0x8C2888E8);
            t53 = 0x8C287D84;
        } else {
            *(unsigned int *)0x8C421E5C = (*(int *)0x8C289660);
            t53 = 0x8C288AFC;
        }
        *(unsigned int *)0x8C421F40 = (*(int *)((t53 + 0xC58)));
        *(unsigned int *)0x8C421E54 = 0x0;
        *(unsigned int *)0x8C421E4C = 0x0;
        rankInsert1();
    } else {
        if ((*(int *)0x8C1D3514) == 1) {
            *(unsigned int *)(((int)stk + 4)) = 0x8C287D84;
            *(unsigned int *)0x8C421E5C = (*(int *)0x8C2888E8);
            *(unsigned int *)0x8C421F40 = (*(int *)(((*(int *)(((int)stk + 4))) + 0xC58)));
            *(unsigned int *)0x8C421E54 = 0x0;
            *(unsigned int *)0x8C421E4C = 0x0;
            *(unsigned int *)0x8C421F44 = (*(int *)0x8C28A4CC);
        }
        if ((*(int *)0x8C1D3518) == 1) {
            *(unsigned int *)0x8C421E5C = (*(int *)0x8C289660);
            *(unsigned int *)0x8C421F40 = (*(int *)0x8C289754);
            *(unsigned int *)0x8C421E54 = 0x0;
            *(unsigned int *)0x8C421E4C = 0x0;
            *(unsigned int *)0x8C421F44 = (*(int *)0x8C28B244);
        }
        if ((*(int *)0x8C1D351C) == 1) {
            *(unsigned int *)0x8C421E60 = (*(int *)0x8C28A3D8);
            *(unsigned int *)0x8C421F44 = (*(int *)0x8C28A4CC);
            *(unsigned int *)0x8C421E58 = 0x0;
            *(unsigned int *)0x8C421E50 = 0x0;
            *(unsigned int *)0x8C421F40 = (*(int *)0x8C2889DC);
        }
        if ((*(int *)0x8C1D3520) == 1) {
            *(unsigned int *)0x8C421E60 = (*(int *)0x8C28B150);
            *(unsigned int *)0x8C421F44 = (*(int *)0x8C28B244);
            *(unsigned int *)0x8C421E58 = 0x0;
            *(unsigned int *)0x8C421E50 = 0x0;
            *(unsigned int *)0x8C421F40 = (*(int *)0x8C289754);
        }
        if (((*(int *)0x8C1D3514) == 0) && (t94 = *(int *)0x8C1D3518, t94 == 0)) {
            *(unsigned int *)0x8C421E54 = 0x1;
            *(unsigned int *)0x8C421E4C = 0x3;
        }
        if (((*(int *)0x8C1D351C) == 0) && (t97 = *(int *)0x8C1D3520, t97 == 0)) {
            *(unsigned int *)0x8C421E58 = 0x1;
            *(unsigned int *)0x8C421E50 = 0x3;
        }
        rankInsert2();
    }
    if ((int)(*(int *)0x8C421E30) > (int)0x9) {
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C20D15C = 0x0;
        if ((*(int *)0x8C407FD4) == 0) {
            return;
        }
        BupRequestSave((*(int *)0x8C40C628), 0x8C126C24, 0x8C40C2F4, 0x128);
    return;
    }
    fadeScreenStart(0x2, 0x0, 0x14, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    if ((*(int *)0x8C287ADC) == 4) {
        t145 = 0x8C287ADC;
        if ((*(int *)0x8C421E54) == 1) {
            t110 = *(int *)0x8C1D351C;
            t123 = 0x8C287ADC;
            if (t110 == 1) {
                t111 = t110;
                t114 = 0x8C287ADC;
                t115 = 0x0;
                for (;;) {
                    if ((int)t115 >= (int)0x3) {
                        break;
                    }
                    t114 = (*(int *)0x8C421E30);
                    t111 = 0xC58;
                    t113 = t114;
                    t114 = (t114 << 1);
                    t111 = (*(int *)((0x8C287D84 + t111)));
                    t114 = (t114 + t113);
                    t114 = (t114 << 2);
                    t111 = (t111 << 2);
                    t111 = (*(int *)((0x8C1D78B8 + t111)));
                    t114 = (t114 + 0x8C421EC8);
                    t112 = t114;
                    t112 = (t112 + 0x4);
                    t114 = (*(signed char *)((t115 + t111)));
                    t112 = (t112 + t115);
                    t115 = (t115 + 0x1);
                    *(unsigned char *)((t112 + 0x0)) = t114;
                }
                t121 = t112;
                t122 = t113;
                t123 = t114;
            }
            t126 = *(int *)0x8C1D3520;
            t137 = t121;
            t138 = t122;
            t139 = t123;
            if (t126 == 1) {
                t127 = t126;
                t128 = t121;
                t129 = t122;
                t130 = t123;
                t131 = 0x0;
                for (;;) {
                    if ((int)t131 >= (int)0x3) {
                        break;
                    }
                    t130 = (*(int *)0x8C421E30);
                    t127 = 0xC58;
                    t129 = t130;
                    t130 = (t130 << 1);
                    t127 = (*(int *)((0x8C288AFC + t127)));
                    t130 = (t130 + t129);
                    t130 = (t130 << 2);
                    t127 = (t127 << 2);
                    t127 = (*(int *)((0x8C1D78B8 + t127)));
                    t130 = (t130 + 0x8C421EC8);
                    t128 = t130;
                    t128 = (t128 + 0x4);
                    t130 = (*(signed char *)((t131 + t127)));
                    t128 = (t128 + t131);
                    t131 = (t131 + 0x1);
                    *(unsigned char *)((t128 + 0x0)) = t130;
                }
                t137 = t128;
                t138 = t129;
                t139 = t130;
            }
            t143 = t137;
            t144 = t138;
            t145 = t139;
        }
        if ((*(int *)0x8C421E58) == 1) {
            t150 = *(int *)0x8C1D3514;
            t161 = t143;
            t162 = t144;
            t163 = t145;
            if (t150 == 1) {
                t151 = t150;
                t152 = t143;
                t153 = t144;
                t154 = t145;
                t155 = 0x0;
                for (;;) {
                    if ((int)t155 >= (int)0x3) {
                        break;
                    }
                    t153 = (*(int *)0x8C421E30);
                    t151 = 0xC58;
                    t154 = t153;
                    t153 = (t153 << 1);
                    t151 = (*(int *)((0x8C289874 + t151)));
                    t153 = (t153 + t154);
                    t153 = (t153 << 2);
                    t151 = (t151 << 2);
                    t151 = (*(int *)((0x8C1D78B8 + t151)));
                    t153 = (t153 + 0x8C421EC8);
                    t152 = t153;
                    t152 = (t152 + 0x4);
                    t151 = (*(signed char *)((t155 + t151)));
                    t152 = (t152 + t155);
                    t155 = (t155 + 0x1);
                    *(unsigned char *)((t152 + 0x3)) = t151;
                }
                t161 = t152;
                t162 = t153;
                t163 = t154;
            }
            t166 = *(int *)0x8C1D3518;
            if (t166 == 1) {
                t167 = t166;
                t168 = t161;
                t169 = t162;
                t170 = t163;
                t171 = 0x0;
                for (;;) {
                    if ((int)t171 >= (int)0x3) {
                        break;
                    }
                    t169 = (*(int *)0x8C421E30);
                    t167 = 0xC58;
                    t170 = t169;
                    t169 = (t169 << 1);
                    t167 = (*(int *)((0x8C28A5EC + t167)));
                    t169 = (t169 + t170);
                    t169 = (t169 << 2);
                    t167 = (t167 << 2);
                    t167 = (*(int *)((0x8C1D78B8 + t167)));
                    t169 = (t169 + 0x8C421EC8);
                    t168 = t169;
                    t168 = (t168 + 0x4);
                    t167 = (*(signed char *)((t171 + t167)));
                    t168 = (t168 + t171);
                    t171 = (t171 + 0x1);
                    *(unsigned char *)((t168 + 0x3)) = t167;
                }
            }
        }
    }
    *(unsigned int *)0x8C20D150 = 0x1;
    *(unsigned int *)0x8C421E38 = 0x0;
    *(unsigned int *)0x8C421E3C = 0x0;
    *(unsigned int *)0x8C421E44 = 0x0;
    *(unsigned int *)0x8C421E40 = 0x9;
    *(unsigned int *)0x8C421E48 = 0x0;
    *(unsigned int *)0x8C421E6C = 0x0;
    *(unsigned int *)0x8C421E70 = 0x4000;
    *(unsigned int *)0x8C421E68 = 0x0;
    *(unsigned int *)0x8C421E64 = 0x0;
    *(unsigned int *)0x8C1D7930 = 0x0;
    *(unsigned int *)0x8C1D792C = 0x0;
    *(unsigned int *)0x8C1D7938 = 0x1;
    *(unsigned int *)0x8C1D7934 = 0x1;
    *(unsigned int *)0x8C1D7928 = 0x12C;
    fileLoadStart(0x8CA80000, 0x8C126C34, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        t198 = ((int (*)(int, int, int))(resetBackColorZ))(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
        fileLoadPoll();
        nlWaitVSync();
    }
    rankSprTexLoad();
}

int FUN_8c07a512(int a4, int a5, float f4, float f5)
{
    int stk[30];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_1 = a4;
    v0_0 = a5;
    w0_1 = f5;
    w0_3 = *(float *)0x8C291F7C;
    v0_4 = (v0_0);
    v0_2 = (0x8C291F24);
    v0_0 = (v0_1);
    v0_1 = ((((*(int *)((v0_1 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    w0_0 = (0.0f);
    w0_2 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C07A550;
    w0_4 = (w0_2);
    L_8C07A554:;
    if (!((71.9549942f > w0_4))) goto L_8C07A8B2;
    w0_3 = *(float *)((v0_2 + 0x60));
    v0_5 = (0x60);
    w0_4 = (0.0f);
    w0_4 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C07A584;
    w0_4 = ((*(float *)((v0_2 + v0_5))));
    goto L_8C07A586;
    L_8C07A8B2:;
    *(unsigned short *)((v0_1 + 0x1E)) = 0x0;
    *(float *)((v0_1 + 0x4)) = w0_0;
    v0_5 = (0x4);
    L_8C07A8BA:;
    return v0_5;
    L_8C07A586:;
    if ((167.089996f > w0_4)) goto L_8C07A592;
    goto L_8C07A8B2;
    L_8C07A592:;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    cpuShotRange(v0_0, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), w0_2, w0_1);
    v0_3 = (0x8C2FCC6C);
    v0_6 = (0x0);
    if (((int)v0_4 <= 0)) goto L_8C07A618;
    v0_7 = (0x8C07F238);
    L_8C07A5B6:;
    w0_3 = *(float *)((v0_3 + 0x8));
    w0_2 = ((*(float *)((v0_3 + 0x0))));
    w0_1 = (w0_3);
    if ((!(0.0f > w0_3))) goto L_8C07A5C4;
    w0_1 = ((-w0_1));
    L_8C07A5C4:;
    if ((!(w0_2 > (*(float *)(((int)stk + 60)))))) goto L_8C07A5E4;
    if ((!((*(float *)(((int)stk + 48))) > w0_2))) goto L_8C07A5E4;
    if ((!(w0_1 > (*(float *)(((int)stk + 68)))))) goto L_8C07A5E4;
    if (((*(float *)(((int)stk + 56))) > w0_1)) goto L_8C07A60A;
    L_8C07A5E4:;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
    cpuAimAngleRate((0xB9C + v0_0), v0_3, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 8) + 0x4));
    *(float *)((v0_3 + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((v0_3 + 0x8)) = (*(float *)(((int)stk + 20)));
    L_8C07A60A:;
    cpuDblAimRateE(v0_0, v0_3, R6, R7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    v0_5 = (int)(v0_6 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x20));
    v0_6 = ((v0_6 + 0x1));
    if (v0_5) goto L_8C07A5B6;
    L_8C07A618:;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_3 = (0x8C2FCC6C);
    v0_7 = (0x0);
    v0_6 = (0xFFFFD8F0);
    if (((int)v0_4 <= 0)) goto L_8C07A684;
    L_8C07A626:;
    v0_5 = (0x1C);
    if (((*(float *)((v0_3 + 0x1C))) > (float)v0_6)) goto L_8C07A672;
    if (((*(float *)((v0_3 + v0_5))) != (float)v0_6)) goto L_8C07A67C;
    v0_8 = nlRand();
    v0_5 = (v0_8);
    if (((int)v0_8 < 0)) goto L_8C07A664;
    v0_5 = ((v0_5 & 0x1));
    L_8C07A66E:;
    if ((v0_5 == 0)) goto L_8C07A67C;
    L_8C07A672:;
    w0_1 = *(float *)((v0_3 + 0x1C));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    v0_6 = ((int)w0_1);
    L_8C07A67C:;
    v0_5 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x20));
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_8C07A626;
    L_8C07A684:;
    v0_3 = *(int *)(((int)stk + 8));
    *(float *)((v0_1 + 0x130)) = (*(float *)((((((v0_3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
    *(float *)((v0_1 + 0x138)) = (*(float *)((((((v0_3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
    v0_3 = (((((v0_3 << 2) << 2) << 1) + 0x8C2FCC6C));
    if ((((*(int *)((v0_0 + 0xB60))) & 4) == 0)) goto L_8C07A6D0;
    v0_4 = !(18.0f > (cpuDistXZ((0xAE8 + v0_0), (0xBA8 + v0_0))));
    if (v0_4) goto L_8C07A6D0;
    v0_4 = ((int)((int)(nlRand()) % (int)0x3)) == 0;
    if (v0_4) goto L_8C07A6D0;
    *(unsigned char *)((v0_3 + 0xC)) = 0x2;
    L_8C07A6D0:;
    *(unsigned char *)(((0x13C + v0_1) + 0x0)) = (*(signed char *)((v0_3 + 0xC)));
    w0_4 = *(float *)((v0_1 + 0x138));
    w0_3 = ((-1.0f));
    w0_1 = (w0_4);
    w0_2 = (118.849998f);
    if ((0.0f > w0_4)) goto L_8C07A714;
    w0_4 = (w0_1);
    L_8C07A718:;
    w0_1 = w0_3;
    w0_1 = w0_1 + (1.0f + 1.0f) * (w0_4 / w0_2);
    cpuShotTargetSet(v0_0, (((*(float *)((v0_0 + 0xB00))) * (*(float *)((v0_1 + 0x130)))) / (*(float *)0x8C287B40)), w0_1);
    *(unsigned char *)(((0x1D + v0_1) + 0x0)) = (*(signed char *)((v0_3 + 0xC)));
    v0_3 = (((-((*(signed char *)((v0_1 + 0x12B))) << 1)) + 0x14));
    if (((*(int *)((v0_2 + 0x50))) != 5)) goto L_8C07A766;
    v0_3 = ((v0_3 + (((int)((int)(nlRand()) % (int)0xA)) + 0x14)));
    L_8C07A766:;
    v0_4 = *(signed char *)(((0x12B + v0_1) + 0x0));
    *(float *)((v0_1 + 0xC)) = ((*(float *)((v0_1 + 0xC))) - (float)((-((v0_4 << 1) + v0_4)) + 0x2B));
    w0_4 = *(float *)((v0_1 + 0xC));
    v0_3 = ((int)((float)v0_3 + ((float)(*(short *)((v0_1 + 0x118))) * ((-(w0_4 / 100.0f)) + 1.0f))));
    w0_1 = (1.0f);
    w0_1 = (-200.0f);
    if ((!(-200.0f > w0_4))) goto L_8C07A7B4;
    *(float *)((v0_1 + 0xC)) = w0_1;
    L_8C07A7B4:;
    if ((!((float)v0_3 > (*(float *)((v0_2 + 0x30)))))) goto L_8C07A88A;
    if (((*(signed char *)((v0_1 + 0xB6))) != 0)) goto L_8C07A88A;
    *(float *)((v0_1 + 0x4)) = ((float)v0_3 - (*(float *)((v0_2 + 0x30))));
    if ((!((*(float *)((v0_1 + 0x4))) > (float)((*(short *)((v0_1 + 0x118))) - 5)))) goto L_8C07A896;
    if (((*(int *)((v0_2 + 0x50))) == 5)) goto L_8C07A82E;
    v0_3 = nlRand();
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_8C07A820;
    v0_5 = ((v0_5 & 0x3));
    L_8C07A82A:;
    if ((v0_5 == 0)) goto L_8C07A848;
    L_8C07A82E:;
    if (((*(int *)((v0_2 + 0x50))) != 5)) goto L_8C07A896;
    v0_2 = ((int)((int)(nlRand()) % (int)0xA)) != 0;
    if (v0_2) goto L_8C07A896;
    L_8C07A848:;
    *(float *)((v0_1 + 0x130)) = (*(float *)((v0_0 + 0xAE8)));
    *(float *)((v0_1 + 0x138)) = w0_0;
    w0_4 = *(float *)((v0_1 + 0x138));
    w0_1 = (w0_4);
    if ((0.0f > w0_4)) goto L_8C07A860;
    w0_4 = (w0_1);
    L_8C07A864:;
    w0_1 = w0_3;
    w0_1 = w0_1 + (1.0f + 1.0f) * (w0_4 / w0_2);
    cpuShotTargetSet(v0_0, (((*(float *)((v0_0 + 0xB00))) * (*(float *)((v0_1 + 0x130)))) / (*(float *)0x8C287B40)), w0_1);
    v0_5 = (0x2);
    L_8C07A890:;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_5;
    *(float *)((v0_1 + 0x4)) = w0_0;
    L_8C07A896:;
    *(float *)((v0_1 + 0x8)) = (((*(float *)((v0_1 + 0x10))) * 50.0f) / 32768.0f);
    *(unsigned int *)((v0_0 + 0xA24)) = 0x1;
    v0_5 = (0xA24);
    w0_4 = (32768.0f);
    goto L_8C07A8BA;
    L_8C07A860:;
    w0_4 = ((-w0_1));
    goto L_8C07A864;
    L_8C07A820:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x3)) + 0x1));
    goto L_8C07A82A;
    L_8C07A88A:;
    v0_5 = ((unsigned char)(*(signed char *)((v0_1 + 0x1D))));
    goto L_8C07A890;
    L_8C07A714:;
    w0_4 = ((-w0_1));
    goto L_8C07A718;
    L_8C07A664:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x1)) + 0x1));
    goto L_8C07A66E;
    L_8C07A584:;
    w0_4 = ((-w0_4));
    goto L_8C07A586;
    L_8C07A550:;
    w0_4 = ((-w0_2));
    goto L_8C07A554;
}

int FUN_8c0787c0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
    cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 47.5400009f));
    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 47.5400009f));
    if (((*(int *)0x8C291F78) & 0x4) != 0) {
        t0 = (int)((int)(nlRand()) % (int)0xA);
        t1 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
        if (t0 == 0) {
            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
            cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
            t1 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        t0 = t1;
    } else {
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 71.3100052f));
        t0 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    }
    t1 = t0;
    for (;;) {
        if (((*(int *)0x8C291F78) & 0x4) == 0) {
            t0 = (int)((int)(nlRand()) % (int)0x14);
            if (t0 == 0) {
                u0 = *(float *)((a4 + 0xB00));
                t0 = t1;
                t1 = (t1 + 0x1);
                u1 = -54.8499985f;
                u1 = u1 + 109.699997f * (nlRandom());
                cpuAimPointSet(t0, 0x1, u1, (u0 * 118.849998f));
            } else {
                t0 = nlRand();
                t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t2 = (t0 & 0x3);
                }
                if (t2 == 0) {
                    u0 = 0.449999988f;
                    u0 = u0 + 0.0500000007f * (nlRandom());
                    u1 = ((*(float *)((a4 + 0xB00))) * u0);
                    t0 = t1;
                    t1 = (t1 + 0x1);
                    u0 = -54.8499985f;
                    u0 = u0 + 109.699997f * (nlRandom());
                    cpuAimPointSet(t0, 0x1, u0, (u1 * 118.849998f));
                } else {
                    u0 = *(float *)0x8C28886C;
                    u1 = *(float *)((a4 + 0xB9C));
                    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                        u0 = 0.5f;
                        u0 = u0 + 0.0500000007f * (nlRandom());
                        u1 = ((*(float *)((a4 + 0xB00))) * u0);
                        u0 = *(float *)0x8C28886C;
                        u2 = *(float *)((a4 + 0xB9C));
                        u3 = (-1.0f);
                        u3 = u3 + (1.0f + 1.0f) * (nlRandom());
                        u4 = (u3 * 10.0f);
                        u4 = u4 + 0.5f * (u2 + u0);
                        u0 = (u1 * 118.849998f);
                        u1 = u4;
                    } else {
                        u2 = 0.5f;
                        u2 = u2 + 0.0500000007f * (nlRandom());
                        u3 = ((*(float *)((a4 + 0xB00))) * u2);
                        u2 = *(float *)0x8C28886C;
                        u4 = ((float)((u2 > 0.0f) - (0.0f > u2)) * (nlRandom()));
                        u0 = (u3 * 118.849998f);
                        u1 = (u4 * 54.8499985f);
                    }
                    t0 = t1;
                    t1 = (t1 + 0x1);
                    cpuAimPointSet(t0, 0x1, u1, u0);
                }
            }
        } else {
            t0 = nlRand();
            t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x3);
            }
            if (t2 == 0) {
                u0 = 0.449999988f;
                u0 = u0 + 0.0500000007f * (nlRandom());
                u1 = ((*(float *)((a4 + 0xB00))) * u0);
                t0 = t1;
                t1 = (t1 + 0x1);
                u0 = -54.8499985f;
                u0 = u0 + 109.699997f * (nlRandom());
                cpuAimPointSet(t0, 0x1, u0, (u1 * 118.849998f));
            } else {
                u0 = *(float *)0x8C28886C;
                u1 = *(float *)((a4 + 0xB9C));
                if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = 0.5f;
                    u0 = u0 + 0.0500000007f * (nlRandom());
                    u1 = ((*(float *)((a4 + 0xB00))) * u0);
                    u0 = *(float *)0x8C28886C;
                    u2 = *(float *)((a4 + 0xB9C));
                    u3 = (-1.0f);
                    u3 = u3 + (1.0f + 1.0f) * (nlRandom());
                    u4 = (u3 * 10.0f);
                    u4 = u4 + 0.5f * (u2 + u0);
                    u0 = (u1 * 118.849998f);
                    u1 = u4;
                } else {
                    u2 = 0.5f;
                    u2 = u2 + 0.0500000007f * (nlRandom());
                    u3 = ((*(float *)((a4 + 0xB00))) * u2);
                    u2 = *(float *)0x8C28886C;
                    u4 = ((float)((u2 > 0.0f) - (0.0f > u2)) * (nlRandom()));
                    u0 = (u3 * 118.849998f);
                    u1 = (u4 * 54.8499985f);
                }
                t0 = t1;
                t1 = (t1 + 0x1);
                cpuAimPointSet(t0, 0x1, u1, u0);
            }
        }
        if ((int)t1 <= (int)0x5A) continue;
        break;
    }
    return t1;
}


int FUN_8c06ba96(int a4, float f4)
{
    int stk[18];
    register int t0;
    register int t1;
    register int t50;
    register float u5;
    register float u6;
    register float u7;
    register float u9;
    register int t11;
    register int t12;
    register float t16;
    register float u19;
    register float u33;
    register float u34;
    register float u36;
    register float u35;
    register float u39;
    register float u30;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 36)) = 0x8C2FC69C;
    t50 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        u5 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u6 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = u5;
        }
        u9 = (-u6);
        if (!(0.0f > u6)) {
            u9 = u6;
        }
        t11 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        t12 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
        if (u9 > u7) {
            t11 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
            t12 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
        t16 = cpuDblPathCross(((((*(int *)((t12 + 0xB5C))) * 0x160) + (*(int *)(((int)stk + 36)))) + 0xB8), (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)), 0x3, (t0 * 0x160), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        u19 = 71.3100052f;
        if ((*(int *)((a4 + 0xC58))) == 16) {
            u19 = 47.5400009f;
        }
        *(float *)(((int)stk + 32)) = (-((*(float *)((a4 + 0xB00))) * u19));
        if (10.0f > t16) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t12)); }
            u30 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 32)))));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t11)); }
            u30 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 32)))));
        }
        *(float *)(((int)stk + 28)) = u30;
        u33 = -5.0f;
        u33 = u33 + 10.0f * (nlRandom());
        u34 = *(float *)(((int)stk + 28));
        *(float *)(((int)stk + 28)) = (u34 + u33);
        u36 = (u34 + u33);
        if (0.0f > (u34 + u33)) {
            u35 = (u34 + u33);
            u35 = -u35;
            u36 = u35;
        }
        if (u36 > 39.8499985f) {
            u39 = *(float *)(((int)stk + 28));
            *(float *)(((int)stk + 28)) = ((float)((u39 > 0.0f) - (0.0f > u39)) * 39.8499985f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB1)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = (*(float *)(((int)stk + 28)));
        *(float *)((a4 + 0xA3C)) = (*(float *)(((int)stk + 32)));
        t50 = 0xA3C;
    }
    return t50;
}
