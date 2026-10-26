/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int ambEventStart(int, int, int, int, int, int);
int courtFraTexLoad(void);
int entryCountJoined(void);
int entryIsVersus(void);
int fadeScreenStart(int, int, int, int, int, int);
int matchSceneInit(void);
int matchStageSlot(void);
int ndbLoadWaitStart(void);
int nlsndSystemControl(int, int, int);
int scoreInit(void);
int set_event(int, int);
int sprSet173FreeAll(void);
int FUN_8c08535e(int a4, int a5);
float FUN_8c029f50(Stk7 s);
float FUN_8c029fe0(float f4, float f5);

int FUN_8c08535e(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t33;
    int t34;
    int t36;
    int t37;
    int t38;
    int t51;
    int t55;
    int t66;
    int t23;
    int t24;
    int t25;
    int t81;
    int stk[10];

    ndbLoadWaitStart();
    *(unsigned int *)0x8C181754 = 0x1;
    t1 = 0x8C185298;
    t2 = 0x8C301BA4;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t1 + 0x0)))) != 0) {
            *(unsigned int *)((t2 + 0x0)) = 0x1;
        }
        t1 = (t1 + 0x2);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C301BB4;
    t6 = 0x0;
    t7 = 0x8C301BB4;
    t8 = 0x8C301BB4;
    t9 = 0x0;
    for (;;) {
        t11 = *(short *)((((t9 << 1) + 0x8C185298) + 0x0));
        t9 = (t9 + 0x1);
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)t11) == 0) {
            *(unsigned int *)((t8 + 0x0)) = (*(int *)(((0x8C343264 + t6) + 0x0)));
        } else {
            *(unsigned int *)((t7 + 0x0)) = 0xFFFFFFFF;
        }
        t6 = (t6 + 0x38);
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    sprSet173FreeAll();
    *(unsigned int *)0x8C181750 = 0x1;
    *(unsigned int *)0x8C181760 = 0x0;
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C301B90 = (entryIsVersus());
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C301B90 = 0x1;
    }
    *(unsigned int *)0x8C181638 = 0x0;
    if (((*(int *)0x8C1891E8) != 2) && ((t23 = *(int *)0x8C1891E8, t23 != 3) && ((t24 = *(int *)0x8C1891E8, t24 != 9) && (t25 = *(int *)0x8C1891E8, t25 != 5)))) {
    } else {
        ambEventStart(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    nlsndSystemControl(0x0, 0x10A0, (*(int *)0x8C38BA64));
    scoreInit();
    t33 = set_event(0x38, 0x8C08509A);
    *(unsigned int *)((t33 + 0x14)) = 0x78;
    *(float *)((t33 + 0x18)) = 0.0f;
    *(unsigned int *)((t33 + 0x30)) = 0x0;
    *(unsigned int *)((t33 + 0x34)) = 0x0;
    *(unsigned int *)0x8C181758 = 0x0;
    *(unsigned int *)0x8C185410 = 0x0;
    t34 = 0x18;
    t36 = 0x8C185410;
    t37 = 0x0;
    t38 = a5;
    for (;;) {
        if ((int)t37 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t36 = 0x8C287ACC;
        t36 = (t36 + 0x14);
        if (((*(int *)((((t37 << 2) + t36) + 0x0)))) != 0) {
            t34 = 0xC58;
            t38 = (t37 * 0xD78);
            t38 = (t38 + 0x8C287D84);
            t38 = (*(int *)((t38 + t34)));
        }
        t37 = (t37 + 0x1);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        if ((*(int *)0x8C34326C) == 0) {
            t51 = *(int *)0x8C343268;
            *(unsigned int *)((t33 + 0x1C)) = t51;
            *(unsigned int *)0x8C301B9C = t51;
        } else {
            *(unsigned int *)((t33 + 0x1C)) = 0x4;
            *(unsigned int *)0x8C301B9C = 0x4;
            *(unsigned int *)0x8C343264 = t38;
        }
        if ((*(int *)0x8C3432A4) == 0) {
            t55 = *(int *)0x8C3432A0;
            *(unsigned int *)((t33 + 0x20)) = t55;
            *(unsigned int *)0x8C301BA0 = t55;
        } else {
            *(unsigned int *)((t33 + 0x20)) = 0x4;
            *(unsigned int *)0x8C301BA0 = 0x4;
            *(unsigned int *)0x8C34329C = t38;
        }
    }
    t66 = entryCountJoined();
    if (t66 == 2) {
        *(unsigned int *)0x8C185294 = 0x1;
    } else {
        *(unsigned int *)0x8C185294 = 0x0;
    }
    *(unsigned int *)0x8C301B98 = (*(int *)0x8C343264);
    *(unsigned int *)0x8C301B94 = (*(int *)0x8C34329C);
    if ((*(int *)0x8C1891E8) == 0) {
        courtFraTexLoad();
    }
    *(unsigned int *)((t33 + 0x2C)) = (matchStageSlot());
    if (((*(int *)0x8C287D5C) != 2) && (t81 = *(int *)0x8C287D5C, t81 != 3)) {
        fadeScreenStart(0x2, 0x1, 0xA, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    *(volatile int *)0x8C1891E8;
    return matchSceneInit();
}

float FUN_8c029f50(Stk7 s)
{
    float u0;
    int t1;
    float u4;
    int t5;
    float u8;
    int t9;
    float u12;
    int stk[21];

    stk[6] = s.w[0];
    stk[7] = s.w[1];
    stk[8] = s.w[2];
    stk[9] = s.w[3];
    stk[10] = s.w[4];
    stk[11] = s.w[5];
    stk[12] = s.w[6];
    u0 = *(float *)0x8C02A00C;
    t1 = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stk + 4)) = t1;
    u4 = ((*(float *)(((((int)stk + 4) + 0x24) + 0x0))) * (float)((-t1) + 0xF0));
    u4 = u4 + (float)t1 * (*(float *)(((((int)stk + 4) + 0x18) + 0x0)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (u4 / u0);
    t5 = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stk + 4)) = t5;
    u8 = ((*(float *)(((((int)stk + 4) + 0x24) + 0x4))) * (float)((-t5) + 0xF0));
    u8 = u8 + (float)t5 * (*(float *)(((((int)stk + 4) + 0x18) + 0x4)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (u8 / u0);
    t9 = *(int *)0x8C287B4C;
    *(unsigned int *)(((int)stk + 4)) = t9;
    u12 = ((*(float *)(((((int)stk + 4) + 0x24) + 0x8))) * (float)((-t9) + 0xF0));
    u12 = u12 + (float)t9 * (*(float *)(((((int)stk + 4) + 0x18) + 0x8)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (u12 / u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0x4)); }
    return (float)t9;
}

float FUN_8c029fe0(float f4, float f5)
{
    int t0;
    float u1;

    t0 = *(int *)0x8C287B4C;
    u1 = (f5 * (float)((-t0) + 0xF0));
    u1 = u1 + (float)t0 * f4;
    return (u1 / 240.0f);
}
