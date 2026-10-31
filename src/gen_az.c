/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];
extern char motFileAddr[];

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int ADXF_LoadPartition(int, int, int, int);
int nlResetBackColorZ(int, int, int);
int VQAllocEntry(void);
int VQEnQueueTop(int, int);
extern float _builtin_sqrtf(float);
int cpuChasePlan(int, int, int, int, int, int, int, int, int, int, int, int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmytex_GetfreememEx(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int kmytex_VQFreeEntry(int);
int memmove(int, int, int);
int motionBackup(int);
int motionIsEnd(int);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlDispStripTexOfs(int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
extern int nlDispStripTrnsl();
int nlInitEvent(void);
float nlLength(int, int);
int nlLoadDummyTexture(void);
int nlObjPut(int);
int nlObjPutSetLightDirectionF(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSetWindowSize(float, float, float, float);
extern int nlSubVector();
int nlSysBeginPass(void);
int nlSysBeginScene(void);
int nlSysEndPass(void);
int nlSysEndScene(void);
int nlSysRender(int);
int nlTranslate(float, float, float);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsnd_PL_WaitRequest(void);
int padRepeatInit(void);
int pdGetPeripheralInfo(int);
int pdVibMxStart(int, int);
int pdVibMxStop(int);
int primTexVertexSet(int, int, int, int, int, float, float);
float rndRangef(float);
int shotCheckNet(int, int);
extern int sprPutAt();
int strmBgmPlay(int);
float vecDistXZf(float, float, float, float);
int vecFromYaw(int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
void shotAim(int a4);
int padVibExec(void);
int circuitDrawBar(float f4);
int winPartsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int rankDrawCharaIcon(int a4, int a5, float f4, float f5, float f6);
int shopInit(void);
int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int cpuSglChase(int a4, int a5, int a6, int a7);
int endingFlyObjPut(int a4, int a5, int a6, int a7);
int hudRankIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int afsLoadPartitions(void);
void netJudgeUpdate(int a4);
int nlsndPackLoadStatus(int a4);
int fadeQuadDrawB(int a4, int a5, int a6, int a7, float f4);
int nlChangeDisplayMode(int a4, int a5);

void shotAim(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t5;
    float u7;
    float u8;
    int t10;
    float u14;
    int t16;
    int t17;
    float u18;
    float u22;
    float u23;
    float u24;
    float u28;
    float u29;
    float u30;
    float t32;
    float u33;
    float u35;
    float u37;
    float u44;
    float u46;
    float u38;
    float t40;
    int stk[18];

    u0 = *(float *)((a4 + 0xB00));
    u1 = *(float *)0x8C287B40;
    u2 = *(float *)((a4 + 0xB90));
    u3 = *(float *)((a4 + 0xB98));
    t5 = *(int *)((a4 + 0xC64));
    u7 = (((rndRangef((1.0f + 1.0f))) + (-1.0f)) * (float)(*(int *)((((((t5 << 1) + t5) << 2) << 1) + 0x8C105FDC))));
    u7 = u7 + (u2 * u0) * (u0 * u1);
    *(float *)(((int)stk + 16)) = u7;
    u8 = *(float *)((a4 + 0xB00));
    *(float *)(((int)stk + 4)) = ((u8 * 118.849998f) / (1.0f + 1.0f));
    t10 = *(int *)((a4 + 0xC64));
    u14 = ((((rndRangef(1.0f)) * (float)(*(int *)((((((t10 << 1) + t10) << 2) << 1) + 0x8C105FDC))))) * (*(float *)((a4 + 0xB00))));
    u14 = u14 + ((u3 * u0) + 1.0f) * ((u8 * 118.849998f) / (1.0f + 1.0f));
    *(float *)(((int)stk + 12)) = u14;
    t16 = 0x28;
    t17 = 0x0;
    u18 = (*(float *)0x8C291F4C);
    for (;;) {
        if (t17 != 0) {
            t16 = 0x8C029CB4;
            u18 = (u18 + (*(float *)((t16 + 0x0))));
        }
        t16 = 0x20;
        u22 = *(float *)(((int)Ball + t16));
        t16 = 0x4;
        u23 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x18;
        u24 = *(float *)(((int)Ball + t16));
        t16 = 0x8;
        t16 = (nlArcTan2(((*(float *)((((int)stk + 8) + t16))) - u24), (u23 - u22)));
        t16 = (vecFromYaw(t16, 0x0, 0x0, 0x0, 0x8C291F48));
        t16 = 0x4;
        u28 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x8;
        u29 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x20;
        u30 = *(float *)(((int)Ball + t16));
        t16 = 0x18;
        t32 = vecDistXZf((*(float *)(((int)Ball + t16))), u30, u29, u28);
        t16 = 0xC;
        *(float *)((((int)stk + 8) + t16)) = t32;
        t16 = 0x1C;
        u33 = *(float *)(((int)Ball + t16));
        t16 = 0x70;
        u35 = *(float *)(((int)Ball + t16));
        u37 = ((((*(float *)(((int)Ball + t16))) * u33)) * (1.0f + 1.0f));
        u37 = u37 + u18 * u18;
        *(float *)(((int)stk + 8)) = (((-u18) - _builtin_sqrtf(u37)) / (-(u35 * 1.0f)));
        t17 = 0x1;
        u44 = 0.0f;
        u46 = (((-u18) - _builtin_sqrtf(u37)) / (-(u35 * 1.0f)));
        if ((((-u18) - _builtin_sqrtf(u37)) / (-(u35 * 1.0f))) > 1.0f) {
            u38 = 0.0f;
            for (;;) {
                t16 = 0x8C029CC0;
                t40 = nlPow((*(float *)((t16 + 0x0))), (float)t17);
                t17 = (t17 + 0x1);
                u38 = (u38 + t40);
                if (!((*(float *)(((int)stk + 8))) > (float)t17)) {
                    break;
                }
            }
            u44 = u38;
            u46 = (float)t17;
        } else {
            _builtin_sqrtf(u37);
        }
        t16 = 0xC;
        t16 = (nlScaleVector(0x8C291F48, 0x8C291F48, ((*(float *)((((int)stk + 8) + t16))) / u44)));
        t17 = 0x1;
        t16 = (shotCheckNet(a4, (int)Ball));
        if (t16 == 0) {
            break;
        }
    }
    *(float *)0x8C291F4C = u18;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F58) = *(struct mv3 *)(0x8C291F48); }
}







int cpuSglChase(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    float u9;
    float u10;
    float u16;
    int t23;
    float u30;
    float u34;
    int t46;
    int t49;
    int t53;
    int t61;
    int t62;
    int t63;
    int t64;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    L_8C04641C:;
    t0 = *(int *)((R4 + 0xB5C));
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
    t2 = ((*(int *)((R4 + 0xB60))) & 0x1) != 0;
    R0 = (0xB60);
    R11 = (0x1);
    R12 = (R4);
    R13 = ((int)Ball);
    R14 = (((t0 * 0x160) + 0x8C2FC69C));
    R4 = (0x0);
    if (t2) goto L_8C046450;
    goto L_8C04644C;
    L_8C04644C:;
    goto L_8C0465B0;
    L_8C0465B0:;
    return R0;
    L_8C046450:;
    u9 = *(float *)((R12 + 0xAF0));
    u10 = *(float *)((R13 + 0x14));
    R5 = (0x3);
    F3 = (0.0f);
    F4 = ((u10 - u9));
    if ((!((u10 - u9) > 0.0f))) goto L_8C046466;
    goto L_8C046462;
    L_8C046462:;
    R3 = (0x1);
    goto L_8C046470;
    L_8C046470:;
    u16 = *(float *)((R12 + 0xB00));
    R0 = (0xB00);
    F3 = (0.0f);
    F5 = (u16);
    if ((!(u16 > 0.0f))) goto L_8C04647E;
    goto L_8C04647A;
    L_8C04647A:;
    R1 = (0x1);
    goto L_8C046488;
    L_8C046488:;
    if ((R3 == R1)) goto L_8C0464A0;
    goto L_8C04648C;
    L_8C04648C:;
    t23 = *(signed char *)((R14 + 0x1C));
    R0 = ((unsigned char)t23);
    if (((unsigned char)t23 == 3)) goto L_8C0464A0;
    goto L_8C046496;
    L_8C046496:;
    *(float *)((R14 + 0x0)) = 0.0f;
    *(unsigned char *)((R14 + 0x1C)) = R5;
    R0 = (0x1C);
    R4 = (R11);
    goto L_8C0464A0;
    L_8C0464A0:;
    if ((!((*(float *)((R14 + 0x0))) > 0.0f))) goto L_8C0464AC;
    goto L_8C0464A8;
    L_8C0464A8:;
    goto L_8C0465B0;
    L_8C0464AC:;
    u30 = *(float *)((R13 + 0x6C));
    F4 = (u30);
    if ((0.0f > u30)) goto L_8C0464BA;
    goto L_8C0464B6;
    L_8C0464B6:;
    F3 = (F4);
    goto L_8C0464BE;
    L_8C0464BE:;
    u34 = *(float *)((R12 + 0xAF0));
    F5 = (u34);
    if ((0.0f > u34)) goto L_8C0464E0;
    goto L_8C0464C8;
    L_8C0464C8:;
    F2 = (F5);
    goto L_8C0464E4;
    L_8C0464E4:;
    if ((!(F2 > F3))) goto L_8C0464F8;
    goto L_8C0464E8;
    L_8C0464E8:;
    if (((unsigned char)(*(signed char *)((R14 + 0x1C))) == 3)) goto L_8C0464F8;
    goto L_8C0464F2;
    L_8C0464F2:;
    *(unsigned char *)((R14 + 0x1C)) = R5;
    R4 = (R11);
    goto L_8C0464F8;
    L_8C0464F8:;
    R0 = (0x1C);
    if (((*(signed char *)((R14 + 0x1C))) == 0)) goto L_8C04650C;
    goto L_8C046500;
    L_8C046500:;
    if ((R4 != 0)) goto L_8C04651A;
    goto L_8C046504;
    L_8C046504:;
    t46 = *(int *)((R12 + 0xA24));
    R0 = (t46);
    if ((t46 == 2)) goto L_8C04651A;
    goto L_8C04650C;
    L_8C04650C:;
    t49 = cpuChasePlan(R12, R5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned char *)(((0x1C + R14) + 0x0)) = t49;
    R0 = (t49);
    R4 = (R11);
    goto L_8C04651A;
    L_8C04651A:;
    if ((R4 == 0)) goto L_8C0465B0;
    goto L_8C04651E;
    L_8C04651E:;
    t53 = *(signed char *)((R14 + 0x1C));
    R0 = ((unsigned char)t53);
    R11 = (0x8C0F06E0);
    if (((unsigned char)t53 == 1)) goto L_8C04653A;
    goto L_8C04652A;
    L_8C04652A:;
    if ((R0 == 2)) goto L_8C04654A;
    goto L_8C04652E;
    L_8C04652E:;
    if ((R0 == 3)) goto L_8C04655A;
    goto L_8C046532;
    L_8C046532:;
    if ((R0 == 4)) goto L_8C046592;
    goto L_8C046536;
    L_8C046536:;
    goto L_8C04659E;
    L_8C04659E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x94 + R14)) = *(struct mv3 *)(((int)stk + 4)); }
    *(unsigned int *)((R12 + 0xA24)) = 0x2;
    R0 = (0xA24);
    goto L_8C0465B0;
    L_8C046592:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xA0 + R14)); }
    goto L_8C04659E;
    L_8C04655A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R13 + 0x64)); }
    t61 = ((int (*)(int, int, Stk3))(nlSubVector))(((int)stk + 4), (R13 + 0x24), *(Stk3 *)((R13 + 0x64)));
    t62 = ((int (*)(int, int))(nlSubVector))(((int)stk + 4), (R13 + 0x24));
    t63 = ((int (*)(int, int))(nlSubVector))(((int)stk + 4), (R13 + 0x24));
    t64 = ((int (*)(int, int))(nlSubVector))(((int)stk + 4), (R13 + 0x24));
    goto L_8C046586;
    L_8C046586:;
    R0 = ((((int (*)(int, int))(nlSubVector))(((int)stk + 4), (R13 + 0x24))));
    goto L_8C04659E;
    L_8C04654A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R13 + 0x58)); }
    goto L_8C046586;
    L_8C04653A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xA0 + R14)); }
    goto L_8C04659E;
    L_8C0464E0:;
    F2 = ((-F5));
    goto L_8C0464E4;
    L_8C0464BA:;
    F3 = ((-F4));
    goto L_8C0464BE;
    L_8C04647E:;
    if ((!(F3 > F5))) goto L_8C046486;
    goto L_8C046482;
    L_8C046482:;
    R1 = (0xFFFFFFFF);
    goto L_8C046488;
    L_8C046486:;
    R1 = (0x0);
    goto L_8C046488;
    L_8C046466:;
    if ((!(F3 > F4))) goto L_8C04646E;
    goto L_8C04646A;
    L_8C04646A:;
    R3 = (0xFFFFFFFF);
    goto L_8C046470;
    L_8C04646E:;
    R3 = (0x0);
    goto L_8C046470;
}



int afsLoadPartitions(void)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t10;
    int t11;
    int t15;
    int t16;
    int t20;
    int t21;
    int t25;
    int t26;
    int t30;
    int t31;
    int t35;
    int t36;
    int t40;
    int t41;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_LoadPartition(0x0, 0x8C11FAE0, 0x8C34A3B4, 0x1D);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t5 = t0;
    for (;;) {
        t6 = ADXF_LoadPartition(0x1, 0x8C11FAEC, 0x8C34A404, 0xA);
        if (t6 == 0) {
            break;
        }
        t5 = (t5 + 0x1);
        if ((int)t5 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t10 = t5;
    for (;;) {
        t11 = ADXF_LoadPartition(0x2, 0x8C11FAF8, 0x8C34A430, 0x1EF);
        if (t11 == 0) {
            break;
        }
        t10 = (t10 + 0x1);
        if ((int)t10 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t15 = t10;
    for (;;) {
        t16 = ADXF_LoadPartition(0x3, 0x8C11FB08, 0x8C34A824, 0x12);
        if (t16 == 0) {
            break;
        }
        t15 = (t15 + 0x1);
        if ((int)t15 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t20 = t15;
    for (;;) {
        t21 = ADXF_LoadPartition(0x4, 0x8C11FB14, 0x8C34A860, 0x8);
        if (t21 == 0) {
            break;
        }
        t20 = (t20 + 0x1);
        if ((int)t20 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t25 = t20;
    for (;;) {
        t26 = ADXF_LoadPartition(0x5, 0x8C11FB20, 0x8C34A888, 0x1FF);
        if (t26 == 0) {
            break;
        }
        t25 = (t25 + 0x1);
        if ((int)t25 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t30 = t25;
    for (;;) {
        t31 = ADXF_LoadPartition(0x6, 0x8C11FB30, 0x8C34AC9C, 0x8);
        if (t31 == 0) {
            break;
        }
        t30 = (t30 + 0x1);
        if ((int)t30 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t35 = t30;
    for (;;) {
        t36 = ADXF_LoadPartition(0x7, 0x8C11FB3C, 0x8C34ACC4, 0x33);
        if (t36 == 0) {
            break;
        }
        t35 = (t35 + 0x1);
        if ((int)t35 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    t40 = t35;
    for (;;) {
        t41 = ADXF_LoadPartition(0x8, 0x8C11FB48, 0x8C34AD40, 0x1EF);
        if (t41 == 0) {
            break;
        }
        t40 = (t40 + 0x1);
        if ((int)t40 > (int)0xA) {
            *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
        }
    }
    return t41;
}

void netJudgeUpdate(int a4)
{
    int t0;
    int t7;
    int t24;
    int t31;
    int t43;
    int t48;
    int t53;
    int t60;
    int stk[12];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_8C0CA5A8:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    t0 = *(int *)0x8C1891E8;
    R4 = (t0);
    if (((int)t0 <= (int)0x9)) goto L_8C0CA5CE;
    goto L_8C0CA5CA;
    L_8C0CA5CA:;
    goto L_8C0CA728;
    L_8C0CA728:;
    return;
    L_8C0CA5CE:;
    R0 = (0x8C1D0DF0);
    if (((*(int *)(((R4 << 2) + 0x8C1D0DF0))) != 0)) goto L_8C0CA5DC;
    goto L_8C0CA5D8;
    L_8C0CA5D8:;
    goto L_8C0CA728;
    L_8C0CA5DC:;
    motionBackup(0x8C38A25C);
    t7 = *(int *)0x8C38A814;
    R0 = (t7);
    R10 = ((int)motFileAddr);
    R11 = (0x0);
    R12 = (0x8C014C4A);
    R13 = (0x1);
    R14 = (0x8C38A258);
    R8 = (0x8C015B72);
    R9 = (0x8C124E50);
    F14 = (1.0f);
    F15 = (0.0f);
    if ((t7 == 0)) goto L_8C0CA61A;
    goto L_8C0CA5FE;
    L_8C0CA5FE:;
    if ((R0 == 1)) goto L_8C0CA620;
    goto L_8C0CA602;
    L_8C0CA602:;
    if ((R0 == 2)) goto L_8C0CA652;
    goto L_8C0CA606;
    L_8C0CA606:;
    if ((R0 == 3)) goto L_8C0CA680;
    goto L_8C0CA60A;
    L_8C0CA60A:;
    if ((R0 == 4)) goto L_8C0CA6C8;
    goto L_8C0CA60E;
    L_8C0CA60E:;
    if ((R0 != 5)) goto L_8C0CA616;
    goto L_8C0CA612;
    L_8C0CA612:;
    goto L_8C0CA706;
    L_8C0CA706:;
    t24 = motionIsEnd((R14 + 0x4));
    R0 = (t24);
    if ((t24 == 0)) goto L_8C0CA728;
    goto L_8C0CA710;
    L_8C0CA710:;
    *(unsigned int *)((R14 + 0x5BC)) = R11;
    motionSwitch((R14 + 0x4), (*(int *)((R9 + 0x0))), 0x0, (*(int *)((R10 + 0x8))), F15);
    *(unsigned int *)((R14 + 0x5B4)) = R13;
    R0 = (0x5B4);
    goto L_8C0CA728;
    L_8C0CA616:;
    goto L_8C0CA728;
    L_8C0CA6C8:;
    *(unsigned int *)((R14 + 0x5B4)) = R11;
    t31 = motionIsEnd((R14 + 0x4));
    R0 = (t31);
    if ((t31 == 0)) goto L_8C0CA728;
    goto L_8C0CA6D6;
    L_8C0CA6D6:;
    motionSetSpeed((R14 + 0x4), F15);
    *(unsigned int *)((R14 + 0x5C0)) = ((*(int *)((R14 + 0x5C0))) + 0x1);
    R0 = (0x5C0);
    if (((int)(*(int *)((R14 + 0x5C0))) <= (int)0x14)) goto L_8C0CA728;
    goto L_8C0CA6EE;
    L_8C0CA6EE:;
    motionSwitch((R14 + 0x4), (*(int *)((R9 + 0xC))), 0x0, (*(int *)((R10 + 0x8))), F14);
    goto L_8C0CA6FE;
    L_8C0CA6FE:;
    *(unsigned int *)((R14 + 0x5BC)) = 0x5;
    R0 = (0x5BC);
    goto L_8C0CA728;
    L_8C0CA680:;
    *(unsigned int *)((R14 + 0x5B4)) = R13;
    t43 = motionIsEnd((R14 + 0x4));
    R0 = (t43);
    if ((t43 == 0)) goto L_8C0CA728;
    goto L_8C0CA68E;
    L_8C0CA68E:;
    *(unsigned int *)((R14 + 0x5BC)) = R11;
    goto L_8C0CA692;
    L_8C0CA692:;
    R0 = ((motionSetSpeed((R14 + 0x4), F15)));
    goto L_8C0CA728;
    L_8C0CA652:;
    *(unsigned int *)((R14 + 0x5B4)) = R13;
    t48 = motionIsEnd((R14 + 0x4));
    R0 = (t48);
    if ((t48 == 0)) goto L_8C0CA728;
    goto L_8C0CA660;
    L_8C0CA660:;
    motionSetSpeed((R14 + 0x4), F15);
    t53 = *(int *)(((*(int *)(((int)stk + 4))) + 0x54));
    R0 = (0x54);
    R4 = (t53);
    if (((0x4 & t53) != 0)) goto L_8C0CA67A;
    goto L_8C0CA674;
    L_8C0CA674:;
    if (((0x2 & R4) == 0)) goto L_8C0CA728;
    goto L_8C0CA67A;
    L_8C0CA67A:;
    *(unsigned int *)((R14 + 0x5BC)) = R13;
    R0 = (0x5BC);
    goto L_8C0CA728;
    L_8C0CA620:;
    *(unsigned int *)((R14 + 0x5B4)) = R13;
    *(unsigned int *)((R14 + 0x5C0)) = R11;
    t60 = *(int *)(((*(int *)(((int)stk + 4))) + 0x54));
    R0 = (0x54);
    R4 = (t60);
    if (((0x4 & t60) == 0)) goto L_8C0CA638;
    goto L_8C0CA634;
    L_8C0CA634:;
    goto L_8C0CA728;
    L_8C0CA638:;
    if (((0x2 & R4) != 0)) goto L_8C0CA728;
    goto L_8C0CA63E;
    L_8C0CA63E:;
    motionSwitch((R14 + 0x4), (*(int *)((R9 + 0x8))), 0x0, (*(int *)((R10 + 0x8))), F14);
    goto L_8C0CA6FE;
    L_8C0CA61A:;
    *(unsigned int *)((R14 + 0x5B4)) = R13;
    goto L_8C0CA692;
}

int nlsndPackLoadStatus(int a4)
{
    int t1;
    int t204;
    int t9;
    int t2;
    int t5;
    int t14;
    int t18;
    int t32;
    int t33;
    int t49;
    int t51;
    int t53;
    int t62;
    int t60;
    int t82;
    int t147;
    int t83;
    int t86;
    int t90;
    int t104;
    int t105;
    int t121;
    int t123;
    int t125;
    int t134;
    int t132;
    int t161;
    int t166;
    int t178;
    int t191;
    int t192;
    int t197;
    int t184;
    int t154;
    int t75;
    int t68;
    int t25;
    int t140;
    int t97;

    t1 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
    t204 = 0xFFFFFFFF;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        t9 = (unsigned char)t1;
                        if ((unsigned char)t1 == 5) {
                            t2 = nlsndG2Read(0xA08000B4);
                            t5 = 0x1;
                            if (t2 != 0) {
                            } else {
                                nlsndG2Write(0x0, 0xA08000B0);
                                *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x0;
                                t5 = 0x0;
                            }
                            t9 = t5;
                        }
                        t75 = t9;
                    } else {
                        t14 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
                        if ((t14 & 0x7F00) == 0) {
                            t18 = *(int *)0x8C454CE8;
                            if ((unsigned int)(*(int *)((t18 + 0xC))) < (unsigned int)((*(int *)((t18 + 0x4))) << 2)) {
                                t25 = ((unsigned int)(*(int *)(((*(int *)0x8C454CE8) + 0xC))) >> 2);
                            } else {
                                t25 = (*(int *)(((*(int *)0x8C454CE8) + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)(((*(int *)0x8C454CE8) + 0x14))), (*(int *)(((*(int *)0x8C454CE8) + 0x18))), t25);
                            t32 = *(int *)0x8C454CE8;
                            t33 = *(int *)((t32 + 0xC));
                            *(unsigned int *)((t32 + 0xC)) = (t33 - (t25 << 2));
                            if ((t33 - (t25 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0x8C454CE8) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0x8C454CE8) + 0x8))), ((*(int *)(((*(int *)0x8C454CE8) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t49 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t49 + 0x0)) = ((*(int *)((t49 + 0x0))) + 0x1);
                            } else {
                                t51 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t51 + 0x18)) = ((*(int *)((t51 + 0x18))) + (t25 << 2));
                                t53 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t53 + 0x14)) = ((*(int *)((t53 + 0x14))) + (t25 << 2));
                            }
                            t68 = 0x1;
                        } else {
                            t62 = 0x0;
                            if ((t14 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t60 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t60 + 0x0)) = ((*(int *)((t60 + 0x0))) + 0x1);
                                t62 = 0x1;
                            }
                            t68 = t62;
                        }
                        t75 = t68;
                    }
                    t154 = t75;
                } else {
                    t82 = nlsndBlockMoveStatus();
                    t147 = 0x1;
                    if (t82 == 0) {
                        t83 = *(int *)0x8C454CE8;
                        *(unsigned int *)((t83 + 0x0)) = ((*(int *)((t83 + 0x0))) + 0x1);
                        t86 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
                        if ((t86 & 0x7F00) == 0) {
                            t90 = *(int *)0x8C454CE8;
                            if ((unsigned int)(*(int *)((t90 + 0xC))) < (unsigned int)((*(int *)((t90 + 0x4))) << 2)) {
                                t97 = ((unsigned int)(*(int *)(((*(int *)0x8C454CE8) + 0xC))) >> 2);
                            } else {
                                t97 = (*(int *)(((*(int *)0x8C454CE8) + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)(((*(int *)0x8C454CE8) + 0x14))), (*(int *)(((*(int *)0x8C454CE8) + 0x18))), t97);
                            t104 = *(int *)0x8C454CE8;
                            t105 = *(int *)((t104 + 0xC));
                            *(unsigned int *)((t104 + 0xC)) = (t105 - (t97 << 2));
                            if ((t105 - (t97 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0x8C454CE8) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0x8C454CE8) + 0x8))), ((*(int *)(((*(int *)0x8C454CE8) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t121 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t121 + 0x0)) = ((*(int *)((t121 + 0x0))) + 0x1);
                            } else {
                                t123 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t123 + 0x18)) = ((*(int *)((t123 + 0x18))) + (t97 << 2));
                                t125 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t125 + 0x14)) = ((*(int *)((t125 + 0x14))) + (t97 << 2));
                            }
                            t140 = 0x1;
                        } else {
                            t134 = 0x0;
                            if ((t86 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t132 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t132 + 0x0)) = ((*(int *)((t132 + 0x0))) + 0x1);
                                t134 = 0x1;
                            }
                            t140 = t134;
                        }
                        t147 = t140;
                    }
                    t154 = t147;
                }
                t184 = t154;
            } else {
                t161 = nlsndG2Read(0xA08000B4);
                if (t161 == 0) {
                } else {
                    if ((*(int *)(((*(int *)0x8C454CE8) + 0x10))) != 0) {
                        t166 = *(int *)0x8C454CE8;
                        nlsndBlockMove((*(int *)(((*(int *)0x8C454CE8) + 0x18))), ((*(int *)((t166 + 0x18))) + (*(int *)((t166 + 0x8)))), (*(int *)(((*(int *)0x8C454CE8) + 0x10))));
                    }
                    t178 = *(int *)0x8C454CE8;
                    *(unsigned int *)((t178 + 0x0)) = ((*(int *)((t178 + 0x0))) + 0x1);
                }
                t184 = 0x1;
            }
            t197 = t184;
        } else {
            t191 = nlsnd_PL_WaitRequest();
            if (t191 != 0) {
            } else {
                t192 = *(int *)0x8C454CE8;
                *(unsigned int *)((t192 + 0x0)) = ((*(int *)((t192 + 0x0))) + 0x1);
            }
            t197 = 0x1;
        }
        t204 = t197;
    }
    return t204;
}




