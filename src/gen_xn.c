/* Straight-line functions with calls and guards (batch gen_xn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[714]; } Stk714;
int cpuInFan(int, int, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuReachRange(int, int, int, int, float, float, float, float, float);
int cpuSglHitReady(int);
int cpuSglShotDefault(int);
int cpuShotAimCheck(int, int, int, int);
int cpuShotAimStick(int);
int cpuShotRange(int, int, int, int, int);
int cpuShotRangeFix(int, int, int, int, Stk3);
float nlRandom(void);
Stk3 vecMake(float, float, float);
float FUN_8c04810c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_8c06a654(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_8c048f84(int a4, float f4, float f5, float f6, float f7);
int FUN_8c045f4a(int a4, Stk714 s);

float FUN_8c04810c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[29];

    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_3 = a4;
    v0_10 = a7;
    v0_4 = *(int *)((v0_3 + 0xB5C));
    w0_1 = *(float *)(((((0x1 & (v0_4 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    w0_2 = *(float *)0x8C291F44;
    v0_5 = (0x160);
    v0_0 = (0x0);
    v0_1 = (((v0_4 * 0x160) + 0x8C2FC69C));
    v0_2 = (v0_3);
    v0_4 = ((((0x1 & (v0_4 + 0x1)) * 0xD78) + 0x8C287D84));
    v0_3 = (0x8C291F24);
    v0_6 = (0x8C287ACC);
    v0_7 = (0x8C2FC69C);
    v0_8 = (0x1);
    w0_0 = (1.0f);
    w0_7 = (0.0f);
    w0_4 = ((w0_2 - w0_1));
    w0_3 = (w0_1);
    if ((!((w0_2 - w0_1) > 0.0f))) goto L_8C048166;
    v0_9 = (0x1);
    L_8C048170:;
    w0_1 = *(float *)((v0_3 + 0x2C));
    w0_7 = (0.0f);
    w0_2 = (w0_1);
    w0_6 = ((w0_3 - (*(float *)((v0_3 + 0x14)))));
    if ((!(w0_1 > 0.0f))) goto L_8C048186;
    v0_11 = (0x1);
    L_8C0481C6:;
    w0_7 = (0.0f);
    if ((!((w0_6 + (float)((v0_11 << 2) + v0_11)) > 0.0f))) goto L_8C0481DE;
    v0_11 = (0x1);
    L_8C04820C:;
    if ((v0_9 != v0_11)) goto L_8C04821A;
    *(unsigned char *)((v0_1 + 0xB0)) = v0_8;
    *(unsigned int *)((v0_2 + 0xA24)) = v0_0;
    v0_9 = (0xA24);
    L_8C0486BC:;
    return F0;
    L_8C04821A:;
    w0_5 = (41.1500015f);
    w0_1 = (118.849998f);
    w0_2 = (0.300000012f);
    if ((((*(int *)((v0_4 + 0xB60))) & 0x100) == 0)) goto L_8C048234;
    v0_6 = *(int *)((v0_4 + 0xB5C));
    w0_2 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + w0_0);
    w0_2 = ((*(float *)((v0_2 + 0xB00))) * w0_2);
    v0_9 = (0x138);
    v0_3 = (((v0_6 * v0_5) + v0_7));
    w0_3 = ((-(w0_2 * w0_1)));
    w0_7 = (0.0f);
    if (((*(float *)((((v0_6 * v0_5) + v0_7) + 0x138))) == 0.0f)) goto L_8C0485C0;
    goto L_8C0486BC;
    L_8C0485C0:;
    w0_1 = *(float *)((v0_3 + 0x28));
    w0_2 = (w0_1);
    if ((w0_7 > w0_1)) goto L_8C0485CC;
    w0_2 = (w0_2);
    L_8C0485D0:;
    v0_9 = (0x8C048610);
    if ((!(w0_2 > 0.5f))) goto L_8C0486BC;
    v0_9 = (0x118);
    if (((int)(*(short *)((v0_3 + 0x118))) >= (int)0x2D)) goto L_8C0486BC;
    w0_1 = *(float *)((v0_3 + 0x28));
    w0_7 = (0.0f);
    w0_6 = (w0_1);
    w0_4 = (26.1500015f);
    if ((!(w0_1 > 0.0f))) goto L_8C048618;
    v0_11 = (0x1);
    L_8C048622:;
    w0_1 = *(float *)((v0_4 + 0xAE8));
    w0_6 = *(float *)((v0_4 + 0xB9C));
    w0_7 = (0.0f);
    w0_2 = ((w0_6 - w0_1));
    if ((!((w0_6 - w0_1) > 0.0f))) goto L_8C048636;
    v0_9 = (0x1);
    L_8C048640:;
    if ((v0_11 != v0_9)) goto L_8C048666;
    w0_1 = (*(float *)((v0_4 + 0xB9C)));
    w0_1 = w0_1 + w0_5 * (*(float *)((v0_3 + 0x28)));
    F0 = (w0_5);
    w0_2 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C04865A;
    w0_7 = (w0_2);
    L_8C04865E:;
    if ((w0_7 > w0_4)) goto L_8C048684;
    L_8C0486A0:;
    *(float *)((v0_3 + 0x130)) = w0_2;
    *(float *)((v0_3 + 0x138)) = w0_0;
    L_8C0486A8:;
    *(unsigned int *)((v0_2 + 0xA24)) = v0_0;
    *(unsigned char *)((v0_1 + 0xB1)) = v0_0;
    *(unsigned char *)((v0_1 + 0xB0)) = v0_0;
    *(float *)((v0_2 + 0xA34)) = w0_2;
    *(float *)((v0_2 + 0xA3C)) = w0_3;
    v0_9 = (0xA3C);
    goto L_8C0486BC;
    L_8C048684:;
    w0_7 = (0.0f);
    if ((!(w0_2 > 0.0f))) goto L_8C04868E;
    v0_11 = (0x1);
    L_8C048698:;
    w0_2 = (((float)v0_11 * w0_4));
    goto L_8C0486A0;
    L_8C04868E:;
    if ((!(w0_7 > w0_2))) goto L_8C048696;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048698;
    L_8C048696:;
    v0_11 = (0x0);
    goto L_8C048698;
    L_8C04865A:;
    w0_7 = ((-w0_2));
    goto L_8C04865E;
    L_8C048666:;
    w0_1 = (*(float *)((v0_4 + 0xB9C)));
    w0_1 = w0_1 + w0_5 * (*(float *)((v0_3 + 0x28)));
    F0 = (w0_5);
    w0_2 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C04867C;
    w0_7 = (w0_2);
    L_8C048680:;
    if ((!(w0_7 > w0_4))) goto L_8C0486A0;
    goto L_8C048684;
    L_8C04867C:;
    w0_7 = ((-w0_2));
    goto L_8C048680;
    L_8C048636:;
    if ((!(w0_7 > w0_2))) goto L_8C04863E;
    v0_9 = (0xFFFFFFFF);
    goto L_8C048640;
    L_8C04863E:;
    v0_9 = (0x0);
    goto L_8C048640;
    L_8C048618:;
    if ((!(w0_7 > w0_6))) goto L_8C048620;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048622;
    L_8C048620:;
    v0_11 = (0x0);
    goto L_8C048622;
    L_8C0485CC:;
    w0_2 = ((-w0_2));
    goto L_8C0485D0;
    L_8C048234:;
    v0_9 = (0xA24);
    if (((*(int *)((v0_2 + 0xA24))) != 0)) goto L_8C048240;
    goto L_8C0486BC;
    L_8C048240:;
    v0_11 = *(int *)((v0_3 + 0x54));
    v0_9 = (v0_11);
    if (((v0_11 & 4) != 0)) goto L_8C04824C;
    w0_0 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + w0_0);
    w0_0 = ((*(float *)((v0_2 + 0xB00))) * w0_0);
    v0_3 = cpuReachRange(v0_4, (((int)stk + 28) + 0x1C), v0_7, v0_10, w0_2, w0_6, w0_4, w0_3, f8);
    v0_6 = (v0_3);
    v0_7 = (0x8C015EEA);
    w0_3 = ((-(w0_0 * w0_1)));
    if (((int)v0_3 < 0)) goto L_8C048492;
    v0_3 = *(int *)((v0_4 + 0xB5C));
    v0_7 = *(short *)((((v0_3 * v0_5) + 0x8C2FC69C) + 0x118));
    v0_10 = (int)(v0_7 - v0_6) >= (int)v0_8;
    v0_9 = ((v0_7 - v0_6));
    v0_3 = (((v0_3 * v0_5) + 0x8C2FC69C));
    v0_6 = ((v0_7 - v0_6));
    if (v0_10) goto L_8C048402;
    v0_6 = (v0_8);
    L_8C048402:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
    cpuShotRangeFix(v0_4, v0_6, (((int)stk + 16) + 0x1C), (((int)stk + 16) + 0x10), *(Stk3 *)(((int)stk + 16)));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 44))) - (*(float *)((v0_4 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 40))) - (*(float *)((v0_4 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_4)); }
    w0_0 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_3);
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 32))) - (*(float *)((v0_4 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 40))) - (*(float *)((v0_4 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_4)); }
    w0_1 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_3)) * 0.5f);
    w0_1 = w0_1 + 0.5f * w0_0;
    F0 = (0.5f);
    w0_2 = (w0_1);
    goto L_8C0486A8;
    L_8C048492:;
    w0_0 = *(float *)((v0_4 + 0xB9C));
    v0_9 = (0xB9C);
    w0_2 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C0484A0;
    w0_7 = (w0_2);
    L_8C0484A4:;
    if ((!(w0_7 > w0_5))) goto L_8C048554;
    w0_4 = *(float *)((v0_4 + 0xB00));
    w0_7 = *(float *)((v0_4 + 0xBA4));
    w0_0 = *(float *)((v0_4 + 0xB9C));
    *(float *)(((int)stk + 28)) = w0_0;
    w0_2 = (0.0f);
    w0_6 = (0.0f);
    w0_4 = (((w0_4 * w0_1) - w0_7));
    if ((!(w0_0 > 0.0f))) goto L_8C0484CC;
    v0_11 = (0x1);
    L_8C048502:;
    *(Stk3 *)(((int)stk + 16)) = vecMake((((float)v0_11 * w0_5) - (*(float *)(((int)stk + 28)))), w0_6, w0_4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_4)); }
    w0_0 = *(float *)((v0_4 + 0xB9C));
    F0 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_3)));
    w0_7 = (0.0f);
    w0_6 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C04853A;
    v0_11 = (0x1);
    L_8C048544:;
    w0_2 = ((F0 - ((float)v0_11 * 20.0f)));
    goto L_8C0486A8;
    L_8C04853A:;
    if ((!(w0_7 > w0_6))) goto L_8C048542;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048544;
    L_8C048542:;
    v0_11 = (0x0);
    goto L_8C048544;
    L_8C0484CC:;
    if ((!(w0_2 > (*(float *)(((int)stk + 28)))))) goto L_8C048500;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048502;
    L_8C048500:;
    v0_11 = (0x0);
    goto L_8C048502;
    L_8C048554:;
    w0_0 = *(float *)((v0_4 + v0_9));
    w0_2 = (w0_0);
    w0_6 = (24.1500015f);
    if ((0.0f > w0_0)) goto L_8C048564;
    w0_7 = (w0_2);
    L_8C048568:;
    if ((w0_7 > w0_6)) goto L_8C048570;
    goto L_8C0486A8;
    L_8C048570:;
    w0_7 = (0.0f);
    if ((!(w0_2 > 0.0f))) goto L_8C04857A;
    v0_11 = (0x1);
    L_8C048584:;
    w0_2 = (((float)v0_11 * w0_6));
    goto L_8C0486A8;
    L_8C04857A:;
    if ((!(w0_7 > w0_2))) goto L_8C048582;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048584;
    L_8C048582:;
    v0_11 = (0x0);
    goto L_8C048584;
    L_8C048564:;
    w0_7 = ((-w0_2));
    goto L_8C048568;
    L_8C0484A0:;
    w0_7 = ((-w0_2));
    goto L_8C0484A4;
    L_8C04824C:;
    if ((((*(int *)0x8C287B3C) & 0x4000) == 0)) goto L_8C04828E;
    v0_4 = (int)((int)(((*(int *)(((v0_6 + 0x44) + 0x0))) + (*(int *)(((v0_6 + 0x44) + 0x4)))) + 0x6) % (int)0x6);
    v0_4 = (int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u));
    v0_9 = (((v0_4 >> 1) + 0x2));
    if (((int)((v0_4 >> 1) + 0x2) < 0)) goto L_8C04827A;
    v0_9 = ((v0_9 & 0x1));
    L_8C048284:;
    v0_7 = (((((-v0_9) + 0x1) << 1) - 1));
    L_8C048302:;
    w0_6 = (28.8050003f);
    w0_4 = ((float)(-v0_7));
    if ((!((*(float *)((v0_2 + 0xC90))) > 1.39999998f))) goto L_8C04835E;
    if (((*(signed char *)((v0_1 + 0x12B))) != 0)) goto L_8C04832C;
    w0_3 = (((*(float *)((v0_2 + 0xB00))) * w0_1));
    L_8C048338:;
    w0_0 = *(float *)((v0_3 + 0x58));
    w0_3 = ((-w0_3));
    w0_2 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C048348;
    w0_7 = (w0_2);
    L_8C04834C:;
    if ((w0_7 > w0_6)) goto L_8C04838E;
    w0_2 = (((float)v0_7 * 8.2300005f));
    goto L_8C0486A8;
    L_8C04838E:;
    w0_7 = (32.920002f);
    L_8C048398:;
    w0_2 = ((w0_4 * w0_7));
    goto L_8C0486A8;
    L_8C048348:;
    w0_7 = ((-w0_2));
    goto L_8C04834C;
    L_8C04832C:;
    w0_1 = *(float *)((v0_2 + 0xB00));
    w0_0 = ((w0_1 * 83.1949997f));
    w0_3 = ((w0_1 * 83.1949997f));
    goto L_8C048338;
    L_8C04835E:;
    w0_5 = *(float *)((v0_3 + 0x58));
    w0_0 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + w0_0);
    w0_2 = ((*(float *)((v0_2 + 0xB00))) * w0_0);
    w0_0 = ((w0_2 * w0_1));
    w0_3 = ((-(w0_2 * w0_1)));
    w0_2 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C048386;
    w0_7 = (w0_2);
    L_8C04838A:;
    if ((!(w0_7 > w0_6))) goto L_8C048394;
    goto L_8C04838E;
    L_8C048394:;
    w0_7 = (2.05750012f);
    goto L_8C048398;
    L_8C048386:;
    w0_7 = ((-w0_2));
    goto L_8C04838A;
    L_8C04827A:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_8C048284;
    L_8C04828E:;
    v0_4 = *(int *)(((v0_6 + 0x44) + 0x0));
    v0_5 = *(int *)(((v0_6 + 0x44) + 0x4));
    v0_9 = (((v0_4 + v0_5) + 0x2));
    if (((int)((v0_4 + v0_5) + 0x2) < 0)) goto L_8C0482C0;
    v0_9 = ((v0_9 & 0x1));
    L_8C0482CA:;
    v0_4 = *(int *)(((v0_6 + 0x34) + 0x0));
    v0_5 = *(int *)(((v0_6 + 0x34) + 0x4));
    v0_4 = (int)((unsigned int)((int)((unsigned int)(v0_4 + v0_5) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_4 + v0_5))) ? 1u : 0u));
    v0_5 = ((-(v0_9 << 1)) + 0x1);
    v0_9 = (((v0_4 >> 1) + 0x2));
    v0_7 = v0_5;
    if (((int)((v0_4 >> 1) + 0x2) < 0)) goto L_8C0482EE;
    v0_9 = ((v0_9 & 0x1));
    L_8C0482F8:;
    v0_7 = ((v0_7 * ((-(v0_9 << 1)) + 0x1)));
    goto L_8C048302;
    L_8C0482EE:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_8C0482F8;
    L_8C0482C0:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_8C0482CA;
    L_8C0481DE:;
    if ((!(w0_2 > w0_7))) goto L_8C0481E6;
    v0_11 = (0x1);
    L_8C0481F2:;
    if ((!(0.0f > (w0_6 + (float)((v0_11 << 2) + v0_11))))) goto L_8C04820A;
    v0_11 = (0xFFFFFFFF);
    goto L_8C04820C;
    L_8C04820A:;
    v0_11 = (0x0);
    goto L_8C04820C;
    L_8C0481E6:;
    if ((!(0.0f > w0_2))) goto L_8C0481F0;
    v0_11 = (0xFFFFFFFF);
    goto L_8C0481F2;
    L_8C0481F0:;
    v0_11 = (0x0);
    goto L_8C0481F2;
    L_8C048186:;
    if ((!(w0_7 > w0_2))) goto L_8C0481C4;
    v0_11 = (0xFFFFFFFF);
    goto L_8C0481C6;
    L_8C0481C4:;
    v0_11 = (0x0);
    goto L_8C0481C6;
    L_8C048166:;
    if ((!(w0_7 > w0_4))) goto L_8C04816E;
    v0_9 = (0xFFFFFFFF);
    goto L_8C048170;
    L_8C04816E:;
    v0_9 = (0x0);
    goto L_8C048170;
}

int FUN_8c06a654(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) != 0) {
        if (((*(int *)0x8C291F78) & 4) == 0) {
            u0 = *(float *)((a4 + 0xAF0));
            u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u3 = ((*(float *)((a4 + 0xB00))) * u2);
            u2 = ((-u0) + u1);
            if (!(0.0f > (u0 - u1))) {
                u2 = (u0 - u1);
            }
            if (20.0f > u2) {
                u0 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (27.4249992f > u1) {
                    t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u0 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u1 = ((-u0) + ((float)(-t3) * 27.4249992f));
                    if (!(0.0f > (u0 - ((float)(-t3) * 27.4249992f)))) {
                        u1 = (u0 - ((float)(-t3) * 27.4249992f));
                    }
                    u0 = 27.4249992f;
                    u0 = u0 + 0.25f * u1;
                    u1 = ((float)(signed char)t3 * u0);
                } else {
                    t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u0 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u2 = (-u0);
                    if (!(0.0f > u0)) {
                        u2 = u0;
                    }
                    u0 = ((u2 + -27.4249992f) * 0.5f);
                    u0 = -u0;
                    u1 = ((float)t3 * (u0 + 27.4249992f));
                }
                u0 = u1;
            } else {
                u1 = *(float *)((a4 + 0xAF0));
                u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u4 = (-u1);
                if (!(0.0f > u1)) {
                    u4 = u1;
                }
                u1 = (-u2);
                if (!(0.0f > u2)) {
                    u1 = u2;
                }
                if (u1 > u4) {
                    u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u2 = (-u1);
                    if (!(0.0f > u1)) {
                        u2 = u1;
                    }
                    if (27.4249992f > u2) {
                        t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                        u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u2 = ((-u1) + ((float)(-t3) * 27.4249992f));
                        if (!(0.0f > (u1 - ((float)(-t3) * 27.4249992f)))) {
                            u2 = (u1 - ((float)(-t3) * 27.4249992f));
                        }
                        u1 = 27.4249992f;
                        u1 = u1 + 0.25f * u2;
                        u2 = ((float)(signed char)t3 * u1);
                    } else {
                        t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                        u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u4 = (-u1);
                        if (!(0.0f > u1)) {
                            u4 = u1;
                        }
                        u1 = ((u4 + -27.4249992f) * 0.5f);
                        u1 = -u1;
                        u2 = ((float)t3 * (u1 + 27.4249992f));
                    }
                    u1 = u2;
                } else {
                    u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u4 = (-u2);
                    if (!(0.0f > u2)) {
                        u4 = u2;
                    }
                    if (27.4249992f > u4) {
                        t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                        u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u4 = ((-u2) + ((float)(-t3) * 27.4249992f));
                        if (!(0.0f > (u2 - ((float)(-t3) * 27.4249992f)))) {
                            u4 = (u2 - ((float)(-t3) * 27.4249992f));
                        }
                        u2 = 27.4249992f;
                        u2 = u2 + 0.25f * u4;
                        u4 = ((float)(signed char)t3 * u2);
                    } else {
                        t3 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D));
                        u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u5 = (-u2);
                        if (!(0.0f > u2)) {
                            u5 = u2;
                        }
                        u2 = ((u5 + -27.4249992f) * 0.5f);
                        u2 = -u2;
                        u4 = ((float)t3 * (u2 + 27.4249992f));
                    }
                    u1 = u4;
                }
                u0 = u1;
            }
            u1 = u0;
            u0 = (-(u3 * 118.849998f));
        } else {
            u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u3 = (-u2);
            if (!(0.0f > u2)) {
                u3 = u2;
            }
            if (27.4249992f > u3) {
                u2 = *(float *)((a4 + 0xAE8));
                t3 = (u2 > 0.0f) - (0.0f > u2);
                t4 = (u2 > 0.0f) - (0.0f > u2);
                u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u3 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                if (!(0.0f > (u2 - (((float)((u3 > 0.0f) - (0.0f > u3)) * 41.1500015f) / (1.0f + 1.0f))))) {
                    u4 = (u2 - (((float)((u3 > 0.0f) - (0.0f > u3)) * 41.1500015f) / (1.0f + 1.0f)));
                } else {
                    u4 = ((-u2) + (((float)((u3 > 0.0f) - (0.0f > u3)) * 41.1500015f) / (1.0f + 1.0f)));
                }
                u2 = ((float)t4 * u4);
                u3 = (u2 * (float)((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) + 0x1));
                u2 = (u3 * 0.100000001f);
                u2 = u2 + 27.4249992f * (float)t3;
                u3 = u2;
            } else {
                u2 = *(float *)((a4 + 0xAE8));
                t3 = (u2 > 0.0f) - (0.0f > u2);
                t4 = (u2 > 0.0f) - (0.0f > u2);
                u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u4 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                if (!(0.0f > (u2 - (((float)((u4 > 0.0f) - (0.0f > u4)) * 41.1500015f) / (1.0f + 1.0f))))) {
                    u5 = (u2 - (((float)((u4 > 0.0f) - (0.0f > u4)) * 41.1500015f) / (1.0f + 1.0f)));
                } else {
                    u5 = ((-u2) + (((float)((u4 > 0.0f) - (0.0f > u4)) * 41.1500015f) / (1.0f + 1.0f)));
                }
                u2 = 0.800000012f;
                u2 = u2 + 0.100000001f * (float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)));
                u4 = ((float)t4 * u5);
                u3 = (((float)t3 * 32.9099998f) - (u4 * u2));
            }
            u2 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u4 = ((*(float *)((a4 + 0xB00))) * u2);
            u1 = u3;
            u0 = (-(u4 * 118.849998f));
        }
        u2 = *(float *)((a4 + 0xAF0));
        u3 = (-u2);
        if (!(0.0f > u2)) {
            u3 = u2;
        }
        if (40.0f > u3) {
            u3 = (-u2);
            if (!(0.0f > u2)) {
                u3 = u2;
            }
            u4 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u5 = (-u4);
            if (!(0.0f > u4)) {
                u5 = (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)));
            }
            if (u5 > u3) {
                if (!(0.0f > (u2 - (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)))))) {
                    u3 = (u2 - (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))));
                } else {
                    u3 = ((-u2) + (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))));
                }
                if (u3 > (*(float *)0x8C06ABDC)) {
                    u2 = *(float *)((a4 + 0xAE8));
                    u3 = *(float *)((a4 + 0xB9C));
                    if ((((u2 - u1) > 0.0f) - (0.0f > (u2 - u1))) == (((u3 - u1) > 0.0f) - (0.0f > (u3 - u1)))) {
                        if (!(0.0f > ((*(float *)((a4 + 0xB9C))) - u1))) {
                            u2 = ((*(float *)((a4 + 0xB9C))) - u1);
                        } else {
                            u2 = ((-(*(float *)((a4 + 0xB9C)))) + u1);
                        }
                        t3 = 0x118;
                        if (((*(float *)0x8C06ABE0) > u2) && (t0 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t0 > (int)0xA)) {
                        } else {
                            *(unsigned int *)((a4 + 0xA24)) = 0x0;
                            *(float *)((a4 + 0xA34)) = u1;
                            *(float *)((a4 + 0xA3C)) = u0;
                            t3 = 0xA3C;
                        }
                        t0 = t3;
                    } else {
                        *(unsigned int *)((a4 + 0xA24)) = 0x0;
                        *(float *)((a4 + 0xA34)) = u1;
                        *(float *)((a4 + 0xA3C)) = u0;
                        t0 = 0xA3C;
                    }
                    t1 = t0;
                } else {
                    *(unsigned int *)((a4 + 0xA24)) = 0x0;
                    *(float *)((a4 + 0xA34)) = u1;
                    *(float *)((a4 + 0xA3C)) = u0;
                    t1 = 0xA3C;
                }
                t0 = t1;
            } else {
                *(unsigned int *)((a4 + 0xA24)) = 0x0;
                *(float *)((a4 + 0xA34)) = u1;
                *(float *)((a4 + 0xA3C)) = u0;
                t0 = 0xA3C;
            }
            t1 = t0;
        } else {
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(float *)((a4 + 0xA34)) = u1;
            *(float *)((a4 + 0xA3C)) = u0;
            t1 = 0xA3C;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_8c048f84(int a4, float f4, float f5, float f6, float f7)
{
    int stk[28];
    register int t0;
    register int t1;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u45;
    register float u24;
    register float u25;
    register float u28;
    register int t48;
    register float u49;
    register float u50;
    register float u56;
    register float u57;
    register float u58;
    register float u59;
    register float u65;
    register float u80;
    register float u81;
    register float u95;
    register float u103;
    register int t109;
    register int t200;
    register float u111;
    register float u116;
    register float u125;
    register float u126;
    register float u143;
    register float u145;
    register float u148;
    register float u153;
    register float u174;
    register float u175;
    register int t178;
    register float u180;
    register float u181;
    register int t184;
    register int t192;
    register int t193;
    register int t188;
    register int t190;
    register int t198;
    register float u214;
    register int t229;
    register int t227;
    register int t239;
    register int t237;
    register float u250;
    register float u251;
    register float u252;
    register float u260;
    register int t293;
    register int t384;
    register float u295;
    register float u300;
    register float u309;
    register float u310;
    register float u327;
    register float u329;
    register float u332;
    register float u337;
    register float u358;
    register float u359;
    register int t362;
    register float u364;
    register float u365;
    register int t368;
    register int t376;
    register int t377;
    register int t372;
    register int t374;
    register int t382;
    register int t426;
    register float u90;
    register float u91;
    register float u38;
    register float u72;
    register int t411;
    register int t131;
    register int t396;
    register float u222;
    register int t283;
    register int t274;
    register float u246;
    register int t265;
    register int t315;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB1))) == 0) {
        if ((int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) < (int)0x1E) {
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x1;
        }
    }
    if ((*(int *)((a4 + 0xA24))) != 0) {
        if (((*(int *)0x8C291F78) & 4) != 0) {
            u17 = *(float *)((a4 + 0xB00));
            u18 = *(float *)0x8C291F7C;
            u19 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
            u20 = (u17 * u19);
            u21 = (-u18);
            if (!(0.0f > u18)) {
                u21 = u18;
            }
            u45 = 0.0f;
            if (12.3450012f > u21) {
            } else {
                u24 = *(float *)0x8C291F7C;
                u25 = (-u24);
                if (!(0.0f > u24)) {
                    u25 = u24;
                }
                if (28.8050003f > u25) {
                    u28 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u38 = ((float)((u28 > 0.0f) - (0.0f > u28)) * 26.7474995f);
                } else {
                    u38 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                }
                u45 = u38;
            }
            u90 = u45;
            u91 = (-(u20 * 118.849998f));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + (((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84))); }
            t48 = cpuInFan((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), *(Stk3 *)(((int)stk + 4)));
            if (t48 != 0) {
                u49 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u50 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u56 = (float)((((u49 - u50) > 0.0f) - (0.0f > (u49 - u50))) * (*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                u57 = (u56 * 0.5f);
                u57 = u57 + 0.899999976f * u49;
                u72 = u57;
            } else {
                u58 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u59 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u65 = u58;
                u65 = u65 + 1.10000002f * ((float)(((u58 - u59) > 0.0f) - (0.0f > (u58 - u59))) * (float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                u72 = u65;
            }
            u80 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u81 = ((*(float *)((a4 + 0xB00))) * u80);
            u90 = u72;
            u91 = (-(u81 * 118.849998f));
        }
        u95 = (-u90);
        if (!(0.0f > u90)) {
            u95 = u90;
        }
        u103 = u90;
        if (u95 > 24.6900024f) {
            u103 = ((float)((u90 > 0.0f) - (0.0f > u90)) * 24.6900024f);
        }
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u103;
        *(float *)((a4 + 0xA3C)) = u91;
        t426 = 0xA3C;
    } else {
        if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) {
            t109 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0));
            t200 = (unsigned char)t109;
            if ((unsigned char)t109 != 1) {
            } else {
                u111 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u116 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                if (((u111 > 0.0f) - (0.0f > u111)) == ((u116 > 0.0f) - (0.0f > u116))) {
                    u125 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u126 = *(float *)((a4 + 0xAE8));
                    if ((((u116 > 0.0f) - (0.0f > u116)) == (((u125 - u126) > 0.0f) - (0.0f > (u125 - u126)))) && (t131 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t131 < (int)0x19)) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x2;
                    }
                }
                if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) == 2) {
                    u143 = *(float *)((a4 + 0xAE8));
                    u145 = (-u143);
                    if (!(0.0f > u143)) {
                        u145 = (*(float *)((a4 + 0xAE8)));
                    }
                    if (u145 > 29.1500015f) {
                        u148 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                        u153 = *(float *)((a4 + 0xAE8));
                        if (((u148 > 0.0f) - (0.0f > u148)) == ((u153 > 0.0f) - (0.0f > u153))) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                        }
                    }
                }
                u174 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u175 = *(float *)0x8C291F44;
                t178 = ((u175 - u174) > 0.0f) - (0.0f > (u175 - u174));
                u180 = *(float *)0x8C291F38;
                u181 = *(float *)0x8C291F50;
                t184 = (u181 > 0.0f) - (0.0f > u181);
                t192 = 0x2C;
                t193 = 0x1;
                if (((u174 - u180) + (float)((t184 << 2) + t184)) > 0.0f) {
                } else {
                    t188 = (u181 > 0.0f) - (0.0f > u181);
                    t190 = 0x0;
                    if (0.0f > ((u174 - u180) + (float)((t188 << 2) + t188))) {
                        t190 = 0xFFFFFFFF;
                    }
                    t192 = ((t188 << 2) + t188);
                    t193 = t190;
                }
                t198 = t192;
                if (t178 != t193) {
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                    t198 = 0xB0;
                }
                t200 = t198;
            }
            t411 = t200;
        } else {
            if ((int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) < (int)0xF) {
                *(int *)((int)stk + 12) = ((int)stk + 16);
                cpuShotRange((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x10), ((int)stk + 16));
                u214 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB78));
                if ((int)((u214 > 0.0f) - (0.0f > u214)) > 0) {
                    u222 = (*(float *)(((int)stk + 40)));
                } else {
                    u222 = (*(float *)(((int)stk + 52)));
                }
                if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) == 0) {
                    t229 = 0x1;
                    if ((u222 - (*(float *)((a4 + 0xAE8)))) > 0.0f) {
                    } else {
                        t227 = 0x0;
                        if (0.0f > (u222 - (*(float *)((a4 + 0xAE8))))) {
                            t227 = 0xFFFFFFFF;
                        }
                        t229 = t227;
                    }
                    t239 = 0x1;
                    if (((*(float *)((a4 + 0xA34))) - (*(float *)((a4 + 0xAE8)))) > 0.0f) {
                    } else {
                        t237 = 0x0;
                        if (0.0f > ((*(float *)((a4 + 0xA34))) - (*(float *)((a4 + 0xAE8))))) {
                            t237 = 0xFFFFFFFF;
                        }
                        t239 = t237;
                    }
                    if (t229 == t239) {
                        if (!(0.0f > (u222 - (*(float *)((a4 + 0xAE8)))))) {
                            u246 = (u222 - (*(float *)((a4 + 0xAE8))));
                        } else {
                            u246 = ((-u222) + (*(float *)((a4 + 0xAE8))));
                        }
                        if (u246 > 10.0f) {
                            u250 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                            u251 = ((*(float *)((a4 + 0xB00))) * u250);
                            u252 = (-u222);
                            if (!(0.0f > u222)) {
                                u252 = u222;
                            }
                            u260 = u222;
                            if (u252 > 24.6900024f) {
                                u260 = ((float)((u222 > 0.0f) - (0.0f > u222)) * 24.6900024f);
                            }
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                            *(unsigned int *)((a4 + 0xA24)) = 0x0;
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                            *(float *)((a4 + 0xA34)) = u260;
                            *(float *)((a4 + 0xA3C)) = (-(u251 * 118.849998f));
                            t265 = 0xA3C;
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                            *(unsigned int *)((a4 + 0xA24)) = 0x0;
                            t265 = 0xA24;
                        }
                        t274 = t265;
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                        *(unsigned int *)((a4 + 0xA24)) = 0x0;
                        t274 = 0xA24;
                    }
                    t283 = t274;
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                    *(unsigned int *)((a4 + 0xA24)) = 0x0;
                    t283 = 0xA24;
                }
                t396 = t283;
            } else {
                t293 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0));
                t384 = (unsigned char)t293;
                if ((unsigned char)t293 != 1) {
                } else {
                    u295 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u300 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    if (((u295 > 0.0f) - (0.0f > u295)) == ((u300 > 0.0f) - (0.0f > u300))) {
                        u309 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u310 = *(float *)((a4 + 0xAE8));
                        if ((((u300 > 0.0f) - (0.0f > u300)) == (((u309 - u310) > 0.0f) - (0.0f > (u309 - u310)))) && (t315 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t315 < (int)0x19)) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x2;
                        }
                    }
                    if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) == 2) {
                        u327 = *(float *)((a4 + 0xAE8));
                        u329 = (-u327);
                        if (!(0.0f > u327)) {
                            u329 = (*(float *)((a4 + 0xAE8)));
                        }
                        if (u329 > 29.1500015f) {
                            u332 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                            u337 = *(float *)((a4 + 0xAE8));
                            if (((u332 > 0.0f) - (0.0f > u332)) == ((u337 > 0.0f) - (0.0f > u337))) {
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                            }
                        }
                    }
                    u358 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u359 = *(float *)0x8C291F44;
                    t362 = ((u359 - u358) > 0.0f) - (0.0f > (u359 - u358));
                    u364 = *(float *)0x8C291F38;
                    u365 = *(float *)0x8C291F50;
                    t368 = (u365 > 0.0f) - (0.0f > u365);
                    t376 = 0x2C;
                    t377 = 0x1;
                    if (((u358 - u364) + (float)((t368 << 2) + t368)) > 0.0f) {
                    } else {
                        t372 = (u365 > 0.0f) - (0.0f > u365);
                        t374 = 0x0;
                        if (0.0f > ((u358 - u364) + (float)((t372 << 2) + t372))) {
                            t374 = 0xFFFFFFFF;
                        }
                        t376 = ((t372 << 2) + t372);
                        t377 = t374;
                    }
                    t382 = t376;
                    if (t362 != t377) {
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                        t382 = 0xB0;
                    }
                    t384 = t382;
                }
                t396 = t384;
            }
            t411 = t396;
        }
        t426 = t411;
    }
    return t426;
}

int FUN_8c045f4a(int a4, Stk714 s)
{
    int stk[22];

    register int R5;
    register float F0;
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
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 32)) = 0x8C2FC69C;
    v0_2 = *(int *)((v0_3 + 0xB5C));
    v0_0 = ((0x8C2FC69C + (v0_2 * 0x160)));
    v0_1 = (v0_3);
    v0_3 = (0x160);
    w0_4 = (32.0f);
    w0_5 = (96.0f);
    w0_2 = (0.0f);
    if (((*(float *)(((0x8C2FC69C + (v0_2 * 0x160)) + 0x4))) == 0.0f)) goto L_8C045FC0;
    cpuSglHitReady(v0_1);
    w0_0 = *(float *)((v0_1 + 0xAE8));
    w0_1 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (0.0f);
    w0_3 = ((w0_1 - w0_0));
    if ((!((w0_1 - w0_0) > 0.0f))) goto L_8C045F9C;
    v0_3 = (0x1);
    L_8C045FA6:;
    w0_0 = ((*(float *)((v0_1 + 0xB00))) * (float)v0_3);
    *(unsigned short *)((v0_0 + 0x20)) = (int)((-(w0_0 * w0_4)) + w0_5);
    v0_6 = (0x20);
    L_8C0463F6:;
    return v0_6;
    L_8C045F9C:;
    if ((!(w0_2 > w0_3))) goto L_8C045FA4;
    v0_3 = (0xFFFFFFFF);
    goto L_8C045FA6;
    L_8C045FA4:;
    v0_3 = (0x0);
    goto L_8C045FA6;
    L_8C045FC0:;
    w0_0 = (8.0f);
    w0_1 = (24.0f);
    if ((((*(int *)((v0_1 + 0xB60))) & 0x100) != 0)) goto L_8C045FD6;
    w0_6 = *(float *)((v0_1 + 0xAE8));
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_3 = ((w0_7 - w0_6));
    if ((!((w0_7 - w0_6) > w0_2))) goto L_8C046300;
    v0_7 = (0x1);
    L_8C046332:;
    w0_2 = ((*(float *)((v0_1 + 0xB00))) * (float)v0_7);
    *(unsigned short *)((v0_0 + 0x20)) = (int)((-(w0_2 * w0_4)) + w0_5);
    w0_3 = *(float *)((v0_1 + 0xB98));
    w0_4 = *(float *)((v0_1 + 0xA2C));
    w0_2 = (0.0f);
    w0_5 = ((w0_4 - w0_3));
    if ((!((w0_4 - w0_3) > 0.0f))) goto L_8C04635E;
    v0_7 = (0x1);
    L_8C046368:;
    w0_4 = *(float *)((v0_1 + 0xB00));
    v0_6 = (0xB00);
    w0_2 = (0.0f);
    w0_3 = (w0_4);
    if ((!(w0_4 > 0.0f))) goto L_8C046376;
    v0_3 = (0x1);
    L_8C046380:;
    if ((v0_7 != v0_3)) goto L_8C0463F6;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))))) goto L_8C0463A0;
    w0_2 = (((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))));
    L_8C0463AA:;
    v0_6 = (0x8C046418);
    if ((!(10.0f > w0_2))) goto L_8C0463F6;
    w0_4 = *(float *)(((0xB98 + v0_1) + 0x0));
    w0_5 = *(float *)(((0xA2C + v0_1) + 0x0));
    v0_6 = (0x20);
    w0_2 = (0.0f);
    w0_3 = ((w0_5 - w0_4));
    if ((!((w0_5 - w0_4) > 0.0f))) goto L_8C0463CC;
    v0_7 = (0x1);
    L_8C0463D6:;
    w0_2 = ((*(float *)(((0xB00 + v0_1) + 0x0))) * (float)v0_7);
    *(unsigned short *)((v0_0 + v0_6)) = (int)((float)(*(short *)((v0_0 + v0_6))) + ((-(w0_2 * w0_0)) + w0_1));
    goto L_8C0463F6;
    L_8C0463CC:;
    if ((!(w0_2 > w0_3))) goto L_8C0463D4;
    v0_7 = (0xFFFFFFFF);
    goto L_8C0463D6;
    L_8C0463D4:;
    v0_7 = (0x0);
    goto L_8C0463D6;
    L_8C0463A0:;
    w0_2 = (((-(*(float *)((v0_1 + v0_6)))) + (*(float *)((v0_1 + 0xB9C)))));
    goto L_8C0463AA;
    L_8C046376:;
    if ((!(w0_2 > w0_3))) goto L_8C04637E;
    v0_3 = (0xFFFFFFFF);
    goto L_8C046380;
    L_8C04637E:;
    v0_3 = (0x0);
    goto L_8C046380;
    L_8C04635E:;
    if ((!(w0_2 > w0_5))) goto L_8C046366;
    v0_7 = (0xFFFFFFFF);
    goto L_8C046368;
    L_8C046366:;
    v0_7 = (0x0);
    goto L_8C046368;
    L_8C046300:;
    if ((!(0.0f > w0_3))) goto L_8C046330;
    v0_7 = (0xFFFFFFFF);
    goto L_8C046332;
    L_8C046330:;
    v0_7 = (0x0);
    goto L_8C046332;
    L_8C045FD6:;
    v0_2 = (0x0);
    v0_4 = (0xD78);
    v0_5 = (0x8C287D84);
    if (((*(signed char *)((v0_0 + 0x12A))) == 0)) goto L_8C04609A;
    if (((int)(*(short *)((v0_0 + 0x118))) >= (int)0xA)) goto L_8C04609A;
    v0_7 = *(int *)(((int)stk + 32));
    v0_6 = *(int *)((v0_1 + 0xB5C));
    v0_8 = *(int *)(((((0x1 & (v0_6 + 0x1)) * v0_4) + v0_5) + 0xB5C));
    *(unsigned int *)(((int)stk + 32)) = ((v0_8 * v0_3) + v0_7);
    w0_2 = *(float *)((((v0_8 * v0_3) + v0_7) + 0x30));
    R5 = ((((0x1 & (v0_6 + 0x1)) * v0_4) + v0_5));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C04604C;
    w0_2 = (w0_3);
    L_8C046050:;
    if ((!(w0_2 > 0.100000001f))) goto L_8C046078;
    w0_2 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_8C046062;
    v0_7 = (0x1);
    L_8C04606C:;
    if (((float)v0_7 != (*(float *)((v0_1 + 0xB00))))) goto L_8C046096;
    L_8C046078:;
    w0_2 = *(float *)((R5 + 0xAF0));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C046086;
    w0_2 = (w0_3);
    L_8C04608A:;
    if ((!(45.1629982f > w0_2))) goto L_8C046096;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    L_8C046096:;
    *(unsigned char *)((v0_0 + 0x12A)) = v0_2;
    L_8C04609A:;
    if (!(((int)(*(short *)((v0_0 + 0x118))) < (int)0x5))) goto L_8C04625C;
    w0_3 = *(float *)((v0_0 + 0x138));
    v0_6 = (0x138);
    w0_2 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C0460B6;
    w0_2 = ((*(float *)((v0_0 + v0_6))));
    goto L_8C0460B8;
    L_8C04625C:;
    cpuSglShotDefault(v0_1);
    if (((*(signed char *)((v0_0 + 0x24))) != 0)) goto L_8C04627C;
    v0_3 = cpuShotAimCheck(v0_1, R5, v0_4, v0_5);
    *(unsigned char *)(((0x24 + v0_0) + 0x0)) = v0_3;
    if (!(((unsigned char)v0_3 == 0))) goto L_8C04627C;
    *(unsigned short *)((v0_0 + 0x20)) = v0_2;
    goto L_8C04628E;
    L_8C04627C:;
    *(unsigned short *)(((0x20 + v0_0) + 0x0)) = (cpuShotAimStick(v0_1));
    L_8C04628E:;
    w0_4 = *(float *)(((0xB98 + v0_1) + 0x0));
    w0_5 = *(float *)(((0xA2C + v0_1) + 0x0));
    v0_6 = (0x20);
    w0_2 = (0.0f);
    w0_3 = ((w0_5 - w0_4));
    if ((!((w0_5 - w0_4) > 0.0f))) goto L_8C0462A8;
    v0_3 = (0x1);
    L_8C0462B2:;
    w0_2 = ((*(float *)(((0xB00 + v0_1) + 0x0))) * (float)v0_3);
    *(unsigned short *)((v0_0 + v0_6)) = (int)((float)(*(short *)((v0_0 + v0_6))) + ((-(w0_2 * w0_0)) + w0_1));
    v0_6 = (0x8);
    if (((*(float *)((v0_0 + 0x8))) > 0.0f)) goto L_8C0462E0;
    goto L_8C0463F6;
    L_8C0462E0:;
    *(float *)((v0_0 + v0_6)) = ((*(float *)((v0_0 + v0_6))) - 1.0f);
    *(unsigned short *)((v0_0 + 0x20)) = v0_2;
    v0_6 = (0x20);
    w0_4 = (1.0f);
    goto L_8C0463F6;
    L_8C0462A8:;
    if ((!(w0_2 > w0_3))) goto L_8C0462B0;
    v0_3 = (0xFFFFFFFF);
    goto L_8C0462B2;
    L_8C0462B0:;
    v0_3 = (0x0);
    goto L_8C0462B2;
    L_8C0460B8:;
    if ((w0_2 > 83.1949997f)) goto L_8C0460C4;
    goto L_8C04625C;
    L_8C0460C4:;
    w0_2 = *(float *)((v0_1 + 0xB9C));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C0460D2;
    w0_2 = (w0_3);
    L_8C0460D6:;
    if ((w0_2 > 15.0f)) goto L_8C0460E2;
    goto L_8C04625C;
    L_8C0460E2:;
    w0_5 = *(float *)((v0_0 + 0x130));
    w0_4 = (0.0f);
    w0_2 = ((w0_5 - w0_3));
    if ((!((w0_5 - w0_3) > 0.0f))) goto L_8C0460F2;
    v0_7 = (0x1);
    L_8C0460FC:;
    w0_2 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_8C046106;
    v0_6 = (0x1);
    L_8C04612E:;
    v0_7 = v0_7 == (-v0_6);
    v0_6 = ((-v0_6));
    if (v0_7) goto L_8C046138;
    goto L_8C04625C;
    L_8C046138:;
    *(unsigned int *)(((int)stk + 32)) = (((*(int *)((((s.w[713] * v0_4) + v0_5) + 0xB5C))) * v0_3) + 0x8C2FC69C);
    *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = ((*(float *)((v0_0 + 0x130))) - (*(float *)((v0_1 + 0xB9C))));
    *(float *)(((((int)stk + 32) + 0x8) + 0x8)) = ((*(float *)((v0_0 + 0x138))) - (*(float *)((v0_1 + 0xBA4))));
    w0_2 = *(float *)((((s.w[713] * v0_4) + v0_5) + 0xAF0));
    w0_3 = *(float *)(((*(int *)(((int)stk + 32))) + 0x30));
    *(float *)(((int)stk + 36)) = (w0_2 + (w0_3 * 10.0f));
    v0_7 = (((s.w[713] * v0_4) + v0_5));
    v0_3 = ((((int)stk + 32) + 0x8));
    w0_4 = ((w0_3 * 10.0f));
    w0_5 = (w0_2);
    if ((0.0f > (w0_2 + (w0_3 * 10.0f)))) goto L_8C046190;
    w0_2 = ((*(float *)(((int)stk + 36))));
    L_8C046198:;
    if ((!(46.0f > w0_2))) goto L_8C04625C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xB9C + v0_1)); }
    v0_3 = 0.0f > ((*(float *)((v0_7 + 0xAE8))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20)), w0_5)));
    v0_6 = (0xAE8);
    if (v0_3) goto L_8C046220;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xB9C + v0_1)); }
    w0_2 = (((*(float *)((v0_7 + 0xAE8))) - (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20)), (*(float *)((v0_7 + 0xAF0)))))));
    L_8C046250:;
    if ((!(15.0f > w0_2))) goto L_8C04625C;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    goto L_8C04625C;
    L_8C046220:;
    *(float *)(((int)stk + 28)) = (-(*(float *)((v0_7 + v0_6))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_1)); }
    w0_2 = (((*(float *)(((int)stk + 28))) + (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)((v0_7 + 0xAF0)))))));
    goto L_8C046250;
    L_8C046190:;
    w0_2 = (((-w0_5) - w0_4));
    goto L_8C046198;
    L_8C046106:;
    if ((!(w0_2 > w0_3))) goto L_8C04612C;
    v0_6 = (0xFFFFFFFF);
    goto L_8C04612E;
    L_8C04612C:;
    v0_6 = (0x0);
    goto L_8C04612E;
    L_8C0460F2:;
    if ((!(w0_4 > w0_2))) goto L_8C0460FA;
    v0_7 = (0xFFFFFFFF);
    goto L_8C0460FC;
    L_8C0460FA:;
    v0_7 = (0x0);
    goto L_8C0460FC;
    L_8C0460D2:;
    w0_2 = ((-w0_3));
    goto L_8C0460D6;
    L_8C0460B6:;
    w0_2 = ((-w0_2));
    goto L_8C0460B8;
    L_8C046086:;
    w0_2 = ((-w0_3));
    goto L_8C04608A;
    L_8C046062:;
    if ((!(w0_2 > w0_3))) goto L_8C04606A;
    v0_7 = (0xFFFFFFFF);
    goto L_8C04606C;
    L_8C04606A:;
    v0_7 = (0x0);
    goto L_8C04606C;
    L_8C04604C:;
    w0_2 = ((-w0_3));
    goto L_8C046050;
}
