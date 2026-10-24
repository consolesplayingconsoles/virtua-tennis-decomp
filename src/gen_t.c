/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXB_GetNumChan(int);
int ADXB_GetPcmBuf(int);
int SJRBF_GetBufPtr(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int abs(int);
int camProject(int, int, Stk3);
int camWorldToView(void);
int crowdAnimModel(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyZeroMemory(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int nlsndSeqRequest(int);
int primSprDrawOfs(int, int, int, int, Stk3);
int screenProject(int, int, Stk3);
int set_event(int, int);
int set_event2(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprSet173Free(int);
int syMmuAddEntry(int, int, int);
void FBSortQueue(int a4, int a5);
int nlsndIcsControl(int a4, int a5, int a6);
int kmyInitDMADevice(void);
int screenSphereVisible(Stk4 s, float f4);
int logoADraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int sySqInit(void);
int hudRankSprInit(void);
int kmiSetFBSurfaceDesc(int a4);
int menuTextNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int stageSelSprInit2(void);
int sprRecInit(int a4, int a5, int a6, int a7, int a8);
int trigger(void);
int logoBDrawRot(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int stageSelSprInit3(void);
int nlsndSystemControl(int a4, int a5, int a6);
int playerSetReceiveFlag(int a4, int a5);
int resSpGetFree(int a4, int a5);
int nlSearchPalette(int a4, int a5);
int adxsjd_get_wr(int a4, int a5, int a6, int a7);
int miniPopupSpawn(Stk4 s);
int hudSlideShow(int a4);
int crowdModelUpdate(int a4);

void FBSortQueue(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t11;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t36;
    int t37;
    int t29;
    int t30;
    int t31;
    int t16;
    int t17;
    int t18;
    int t20;
    int t41;
    int t42;
    int t45;
    int stk[10];

    if ((*(int *)((a4 + 0x0))) != 0) {
        t1 = *(int *)((a4 + 0x0));
        t2 = t1;
        t3 = 0x0;
        t4 = t1;
        for (;;) {
            t6 = *(int *)((t4 + 0xC));
            if ((unsigned int)(*(int *)((t2 + 0xC))) > (unsigned int)t6) {
                t4 = t2;
            }
            t2 = (*(int *)((t2 + 0x8)));
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t11 = *(int *)((a5 + 0x0));
            if (t11 != t4) {
                kmytex_FBDeQueueEntry(a4, a5, t4);
                kmytex_FBEnQueueEntry(a5, t4, (*(int *)((a5 + 0x0))));
            } else {
                t16 = t11;
                t17 = 0x1;
                t18 = t6;
                t20 = a5;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((int)(t3 - 2) > 0) {
                t23 = t16;
                t24 = t17;
                t25 = t18;
                t26 = t20;
                t27 = (t3 - 2);
                for (;;) {
                    t28 = *(int *)((a4 + 0x0));
                    t36 = t28;
                    t37 = t28;
                    if ((int)t27 > 0) {
                        t29 = 0x0;
                        t30 = t28;
                        t31 = t28;
                        for (;;) {
                            t31 = (*(int *)((t31 + 0x8)));
                            t25 = (*(int *)((t30 + 0xC)));
                            t24 = (*(int *)((t31 + 0xC)));
                            t29 = (t29 + 0x1);
                            if ((unsigned int)t24 > (unsigned int)t25) {
                                t30 = t31;
                            }
                            if ((int)t29 >= (int)t27) {
                                break;
                            }
                        }
                        t36 = t30;
                        t37 = t31;
                    }
                    if (t37 != t36) {
                        t25 = 0x8C1F9350;
                        t26 = a5;
                        kmytex_FBDeQueueEntry(a4, t26, t36);
                        t24 = 0x8C1F9334;
                        t26 = t36;
                        kmytex_FBEnQueueEntry(a5, t26, t37);
                    } else {
                        t41 = t23;
                        t42 = t24;
                        t45 = t26;
                    }
                    t23 = t41;
                    t24 = t42;
                    t25 = (*(int *)(((int)stk + 4)));
                    t26 = t45;
                    t27 = (t27 - 1);
                    t25 = (t25 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t25;
                    if ((int)t25 >= (int)(t3 - 2)) {
                        break;
                    }
                }
            }
        }
    }
}


int kmyInitDMADevice(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x8C4709FC = 0x8C203420;
    kmyZeroMemory(0x8C203420, 0x1840);
    *(unsigned int *)0x8C203420 = 0x1840;
    *(unsigned int *)0x8C203424 = 0x1;
    kmyConnectInterrupt(0x11, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x12, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x13, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x19, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x18, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x17, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x16, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x15, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x1C, 0x8C203248, 0x0);
    kmyConnectInterrupt(0x1B, 0x8C203248, 0x0);
    *(unsigned int *)0xA05F6884 = 0x0;
    *(unsigned int *)0xA05F6888 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int screenSphereVisible(Stk4 s, float f4)
{
    int t26;
    int t4;
    float u5;
    float u6;
    float u7;
    int t19;
    int t11;
    float u12;
    float u13;
    float u14;
    int t17;
    int stk[25];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    stk[16] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    camWorldToView();
    t26 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)((((int)stk + 20) + 0x8)));
        t4 = abs((*(int *)(((int)stk + 20))));
        u5 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u6 = *(float *)0x8C287A10;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = u5;
        }
        t19 = 0x0;
        if ((((u6 * f4) / u7) + (*(float *)0x8C08A2CC)) > (float)t4) {
            t11 = abs((*(int *)(((int)stk + 24))));
            u12 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u13 = *(float *)0x8C287A10;
            u14 = (-u12);
            if (!(0.0f > u12)) {
                u14 = u12;
            }
            t17 = 0x0;
            if ((((u13 * f4) / u14) + (*(float *)0x8C08A2D0)) > (float)t11) {
                t17 = 0x1;
            }
            t19 = t17;
        }
        t26 = t19;
    }
    return t26;
}

int logoADraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int stk[31];

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    stk[22] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
    t0 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C334D9C, a5, a6, a7, *(Stk3 *)((((int)stk + 64) + 0xC)));
    *(float *)(((((int)stk + 64) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0xC) + 0x0))) + 128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
    t2 = ((int (*)(int, Stk3))(sprPutAt))(0x8C334DEC, *(Stk3 *)((((int)stk + 64) + 0xC)));
    *(float *)(((((int)stk + 64) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0xC) + 0x0))) + 213.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
    t4 = ((int (*)(int, Stk3))(sprPutAt))(0x8C334E3C, *(Stk3 *)((((int)stk + 64) + 0xC)));
    *(float *)(((((int)stk + 64) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0xC) + 0x0))) + -128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
    t6 = ((int (*)(int, Stk3))(sprPutAt))(0x8C334E8C, *(Stk3 *)((((int)stk + 64) + 0xC)));
    *(float *)(((((int)stk + 64) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0xC) + 0x0))) + 165.0f);
    *(float *)(((((int)stk + 64) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 64) + 0xC) + 0x4))) + 3.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 64) + 0xC)); }
    return (((int (*)(int, Stk3))(sprPutAt))(0x8C334984, *(Stk3 *)((((int)stk + 64) + 0xC))));
}

int sySqInit(void)
{
    int t0;
    int t12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;

    t0 = *(int *)0xFF000010;
    t12 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t1 = (t0 & 0x1);
        t2 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0xC000000 + t4) >= (unsigned int)0xD000000) {
                break;
            }
            t1 = (syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4));
            t2 = (0x8C461B18 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t1;
        }
        t6 = t1;
        t7 = t2;
        t8 = 0x0;
        t9 = 0x0;
        for (;;) {
            if ((unsigned int)(0x10000000 + t9) >= (unsigned int)0x10800000) {
                break;
            }
            t6 = (syMmuAddEntry((0x10000000 + t9), (0xE1000000 + t9), 0x4));
            t7 = (0x8C461B58 + (t8 << 2));
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x100000);
            *(unsigned int *)((t7 + 0x0)) = t6;
        }
        t11 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0x8C461B78 = t11;
        t12 = t11;
    }
    return t12;
}

int hudRankSprInit(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t8;
    int t10;
    int t11;
    int t3;
    int stk[55];

    t0 = 0x8C10FC90;
    t2 = (((int)stk + 12) + 0x30);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10FC90 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 12)) = *(struct mv12 *)(0x8C10FD10); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33E4B0), 0x15, (((int)stk + 12) + 0x30), 0x100, 0x100, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C33E4B0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    t8 = 0x0;
    for (;;) {
        t10 = sprInitRectF((((((t8 << 2) + t8) << 2) << 2) + 0x8C33E730), 0x16, ((int)stk + 12), 0x100, 0x80, (t8));
        t11 = (((((t8 << 2) + t8) << 2) << 2) + 0x8C33E730);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t11 + 0x34)) = 0x5;
        if ((int)t8 >= (int)0x3) {
            break;
        }
    }
    return t10;
}



int stageSelSprInit2(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t8;
    int t10;
    int t11;
    int t3;
    int stk[47];

    t0 = 0x8C110428;
    t2 = (((int)stk + 12) + 0x30);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C110428 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 12)) = *(struct mv12 *)(0x8C110488); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C340DA4), 0x6E, (((int)stk + 12) + 0x30), 0x40, 0x40, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C340DA4);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0x6) {
            break;
        }
    }
    t8 = 0x0;
    for (;;) {
        t10 = sprInitRectF((((((t8 << 2) + t8) << 2) << 2) + 0x8C340F84), 0x6F, ((int)stk + 12), 0x40, 0x40, (t8));
        t11 = (((((t8 << 2) + t8) << 2) << 2) + 0x8C340F84);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t11 + 0x34)) = 0x5;
        if ((int)t8 >= (int)0x3) {
            break;
        }
    }
    return t10;
}

int sprRecInit(int a4, int a5, int a6, int a7, int a8)
{
    float u9;
    float u10;
    float u11;
    float u13;
    float u14;
    float u15;

    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = (*(float *)0x8C0DF28C);
    *(float *)((a4 + 0x18)) = ((*(float *)((a6 + 0x0))) / (*(float *)((a7 + 0x0))));
    *(float *)((a4 + 0x1C)) = ((*(float *)((a6 + 0x4))) / (*(float *)(((a7 + 0x4) + 0x0))));
    *(float *)((a4 + 0x20)) = ((*(float *)((a6 + 0x8))) / (*(float *)((a7 + 0x0))));
    *(float *)((a4 + 0x24)) = ((*(float *)((a6 + 0xC))) / (*(float *)(((a7 + 0x4) + 0x0))));
    u9 = *(float *)((a4 + 0x18));
    u10 = *(float *)((a4 + 0x20));
    u11 = (-((u10 - u9) * 1.0f));
    if (!(0.0f > ((u10 - u9) * 1.0f))) {
        u11 = ((u10 - u9) * 1.0f);
    }
    *(float *)((a4 + 0x10)) = u11;
    u13 = *(float *)((a4 + 0x1C));
    u14 = *(float *)((a4 + 0x24));
    u15 = (-((u14 - u13) * 1.0f));
    if (!(0.0f > ((u14 - u13) * 1.0f))) {
        u15 = ((u14 - u13) * 1.0f);
    }
    *(float *)((a4 + 0x14)) = u15;
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    if (a8 != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x100A;
    } else {
        *(unsigned int *)((a4 + 0x34)) = 0x1005;
    }
    return 0x2C;
}


int logoBDrawRot(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[31];

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    stk[22] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    primSprDrawOfs(0x8C334F2C, 0x80, 0x80, a4, *(Stk3 *)((((int)stk + 52) + 0x18)));
    *(float *)(((((int)stk + 52) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x0))) + (*(float *)0x8C08FF44));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    primSprDrawOfs(0x8C334F7C, 0x80, 0x80, a4, *(Stk3 *)((((int)stk + 52) + 0x18)));
    *(float *)(((((int)stk + 52) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x0))) + (*(float *)0x8C08FF48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    primSprDrawOfs(0x8C334FCC, 0x80, 0x80, a4, *(Stk3 *)((((int)stk + 52) + 0x18)));
    *(float *)(((((int)stk + 52) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x0))) + (*(float *)0x8C08FF4C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    return (primSprDrawOfs(0x8C33501C, 0x80, 0x80, a4, *(Stk3 *)((((int)stk + 52) + 0x18))));
}

int stageSelSprInit3(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t11;
    int t12;
    int t14;
    int t15;
    int t3;
    int t7;
    int stk[103];

    t0 = 0x8C1104B8;
    t2 = (0x110 + ((int)stk + 12));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C1104B8 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C110518;
    t6 = ((int)stk + 12);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C110518 + 272)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x0;
    for (;;) {
        sprInitRectF((((((t8 << 2) + t8) << 2) << 2) + 0x8C341074), 0x70, (0x110 + ((int)stk + 12)), 0x100, 0x100, (t8));
        t11 = (((((t8 << 2) + t8) << 2) << 2) + 0x8C341074);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t11 + 0x34)) = 0x5;
        if ((int)t8 >= (int)0x6) {
            break;
        }
    }
    t12 = 0x0;
    for (;;) {
        t14 = sprInitRectF((((((t12 << 2) + t12) << 2) << 2) + 0x8C341254), 0x71, ((int)stk + 12), 0x100, 0x100, (t12));
        t15 = (((((t12 << 2) + t12) << 2) << 2) + 0x8C341254);
        t12 = (t12 + 0x1);
        *(unsigned int *)((t15 + 0x34)) = 0x5;
        if ((int)t12 >= (int)0x11) {
            break;
        }
    }
    return t14;
}



int resSpGetFree(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t19;
    int t16;
    int t17;

    if ((*(int *)(((a4 << 2) + 0x8C1DC64C))) != 0) {
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = (((a4 << 2) << 1) + 0x8C1DC67C);
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlSpriteFreeTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0x2) {
                break;
            }
        }
        if (a4 == 0) {
            t7 = 0x8C1DC674;
            t8 = 0x8C1DC654;
            t9 = 0x8C1DC68C;
            t10 = 0x8C1DC654;
            t11 = 0x8C1DC654;
            for (;;) {
                if ((*(int *)((t11 + 0x0))) != 0) {
                    t8 = 0x0;
                    t7 = 0x8C18281C;
                    nlSpriteFreeTextureOnce(t7, t8, (*(int *)((t9 + 0x0))));
                } else {
                    t16 = t7;
                    t17 = t8;
                }
                t11 = (t11 + 0x4);
                t7 = t16;
                t8 = t17;
                *(unsigned int *)((t10 + 0x0)) = 0x0;
                t10 = (t10 + 0x4);
                t9 = (t9 + 0x4);
                if ((unsigned int)t11 >= (unsigned int)0x8C1DC674) {
                    break;
                }
            }
        } else {
            t19 = 0x10;
            for (;;) {
                sprSet173Free(t19);
                t19 = (t19 + 0x1);
                if ((int)t19 >= (int)0x12) {
                    break;
                }
            }
        }
        *(unsigned int *)(((a4 << 2) + 0x8C1DC64C)) = 0x0;
    }
    return 0x8C1DC64C;
}


int adxsjd_get_wr(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t8;
    int t11;
    int t12;
    int t13;
    int t1;

    t0 = *(int *)((a4 + 0xC));
    t2 = 0x0;
    for (;;) {
        t4 = ADXB_GetNumChan((*(int *)((a4 + 0x4))));
        if ((int)t2 >= (int)t4) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 + (a4 + 0xC));
        t1 = (*(int *)((t1 + 0x0)));
        t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, 0x4000, (((t2 << 2) << 1) + (a4 + 0x1C)));
        t2 = (t2 + 0x1);
    }
    *(unsigned int *)((a5 + 0x0)) = ((unsigned int)((*(int *)((a4 + 0x1C))) - (SJRBF_GetBufPtr(t0))) >> 1);
    t11 = *(int *)((a4 + 0x20));
    t12 = *(int *)((a4 + 0x38));
    t13 = t12;
    if ((int)((unsigned int)t11 >> 1) < (int)t12) {
        t13 = ((unsigned int)t11 >> 1);
    }
    *(unsigned int *)((a6 + 0x0)) = t13;
    if ((int)(*(int *)((a4 + 0x3C))) >= 0) {
        *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x3C))) - (*(int *)((a4 + 0x40))));
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    return ADXB_GetPcmBuf((*(int *)((a4 + 0x4))));
}

int miniPopupSpawn(Stk4 s)
{
    int t8;
    int t13;
    int t1;
    int t14;
    int stk[26];

    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    stk[17] = s.w[3];
    if (((*(int *)0x8C287C60) == 0) && (t1 = *(int *)0x8C2FBFD8, t1 == 0)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        camWorldToView();
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
        camProject((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x1C), *(Stk3 *)((((int)stk + 16) + 0x18)));
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + (*(float *)0x8C03BBC4));
        *(float *)(((int)stk + 32)) = ((*(float *)0x8C03BBC8) - (*(float *)(((int)stk + 32))));
        t8 = set_event(0x24, 0x8C03BA72);
        *(float *)((t8 + 0x14)) = (*(float *)(((int)stk + 36)));
        *(float *)((t8 + 0x18)) = (*(float *)(((int)stk + 32)));
        *(float *)((t8 + 0x1C)) = (*(float *)0x8C03BBD4);
        *(unsigned int *)((t8 + 0x20)) = 0x3C;
        nlsndSeqRequest(0x1102A9);
        t13 = nlsndSeqRequest(0x1902A9);
        *(unsigned int *)0x8C2FBFD8 = 0x1;
        t14 = t13;
    }
    return t14;
}


int crowdModelUpdate(int a4)
{
    int t1;
    int t32;
    int t25;
    int t18;
    int t60;
    int t41;
    int t54;
    int t51;
    int t66;

    nlSetCommonTextureOffset(0xF00);
    t1 = *(int *)0x8C1891E8;
    if (t1 != 0) {
        t32 = t1;
        if (t1 != 1) {
        } else {
            t25 = t1;
            if ((int)a4 <= (int)0x25) {
                if ((*(int *)((0x8C18AF70 + (a4 << 2)))) != 0) {
                    nlObjPutLoadTexture((*(int *)((0x8C18AF70 + (a4 << 2)))), 0x8C13293C);
                }
                t18 = (a4 << 2);
                if ((*(int *)((0x8C18B008 + (a4 << 2)))) != 0) {
                    t18 = (nlObjPutLoadTexture((*(int *)((0x8C18B008 + (a4 << 2)))), 0x8C13293C));
                }
                t25 = t18;
            }
            t32 = t25;
        }
        t66 = t32;
    } else {
        t60 = t1;
        if ((int)a4 <= (int)0x1F) {
            if ((*(int *)((0x8C18A610 + (a4 << 2)))) != 0) {
                t41 = *(int *)((0x8C18A610 + (a4 << 2)));
                crowdAnimModel(t41, a4);
                nlObjPutLoadTexture(t41, 0x8C13293C);
            }
            t54 = (a4 << 2);
            if ((*(int *)((0x8C18A68C + (a4 << 2)))) != 0) {
                t51 = *(int *)((0x8C18A68C + (a4 << 2)));
                crowdAnimModel(t51, a4);
                t54 = (nlObjPutLoadTexture(t51, 0x8C13293C));
            }
            t60 = t54;
        }
        t66 = t60;
    }
    return t66;
}
