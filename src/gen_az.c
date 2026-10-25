/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int ADXF_LoadPartition(int, int, int, int);
int FUN_8c0eaf00(int, int, int);
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
        u22 = *(float *)((0x8C291F24 + t16));
        t16 = 0x4;
        u23 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x18;
        u24 = *(float *)((0x8C291F24 + t16));
        t16 = 0x8;
        t16 = (nlArcTan2(((*(float *)((((int)stk + 8) + t16))) - u24), (u23 - u22)));
        t16 = (vecFromYaw(t16, 0x0, 0x0, 0x0, 0x8C291F48));
        t16 = 0x4;
        u28 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x8;
        u29 = *(float *)((((int)stk + 8) + t16));
        t16 = 0x20;
        u30 = *(float *)((0x8C291F24 + t16));
        t16 = 0x18;
        t32 = vecDistXZf((*(float *)((0x8C291F24 + t16))), u30, u29, u28);
        t16 = 0xC;
        *(float *)((((int)stk + 8) + t16)) = t32;
        t16 = 0x1C;
        u33 = *(float *)((0x8C291F24 + t16));
        t16 = 0x70;
        u35 = *(float *)((0x8C291F24 + t16));
        u37 = ((((*(float *)((0x8C291F24 + t16))) * u33)) * (1.0f + 1.0f));
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
        t16 = (shotCheckNet(a4, 0x8C291F24));
        if (t16 == 0) {
            break;
        }
    }
    *(float *)0x8C291F4C = u18;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F58) = *(struct mv3 *)(0x8C291F48); }
}

int padVibExec(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t8;
    int t19;
    int t20;
    int t21;
    int t23;
    int t54;
    int t44;
    int t32;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t5;
    int t59;
    int t22;
    int t31;
    int stk[19];

    *(unsigned int *)0x8C40C41C = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x8C2FBBC8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C2FBBE8;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t0 = 0x8C2FBBC8;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((0x8C29B898 + (t1 << 2)));
        t3 = *(int *)((0x8C158BE0 + (t1 << 2)));
        *(unsigned int *)(((int)stk + 28)) = t2;
        t4 = *(int *)((t2 + 0x4));
        *(unsigned int *)(((int)stk + 4)) = t4;
        t6 = 0x0;
        if (((t4 & 0x100000) != 0) && (t5 = *(int *)(((int)stk + 4)), t0 = t5, (t0 & 0x200000) != 0)) {
            t6 = 0x1;
        }
        t0 = t6;
        t8 = *(int *)(((pdGetPeripheralInfo((t3 + ((t6 << 1) + t0)))) + 0x0));
        t0 = 0x100;
        if (t8 == t0) {
            *(unsigned int *)0x8C40C41C = 0x1;
        }
        *(unsigned int *)(((int)stk + 4)) = ((t1 << 2) << 1);
        t0 = (*(int *)(((t1 << 2) + 0x8C2FBBE8)));
        t0 = (t0 - 1);
        *(unsigned int *)(((t1 << 2) + 0x8C2FBBE8)) = t0;
        if (t0 == 0) {
            t19 = *(int *)((0x8C158BE0 + (t1 << 2)));
            t20 = *(int *)((0x8C29B898 + (t1 << 2)));
            *(unsigned int *)(((int)stk + 24)) = t20;
            t21 = *(int *)((t20 + 0x4));
            *(unsigned int *)(((int)stk + 32)) = t21;
            t23 = 0x0;
            if (((t21 & 0x100000) != 0) && (t22 = *(int *)(((int)stk + 32)), t0 = t22, (t0 & 0x200000) != 0)) {
                t23 = 0x1;
            }
            t0 = t23;
            pdVibMxStop((t19 + ((t23 << 1) + t0)));
            t0 = (*(int *)(((int)stk + 4)));
            t0 = (t0 + 0x8C2FBBC8);
            *(unsigned char *)((t0 + 0x3)) = 0x0;
            t59 = 0x0;
        } else {
            t0 = (*(int *)(((int)stk + 4)));
            t0 = (t0 + 0x8C2FBBC8);
            t54 = 0x8C2FBBE8;
            if ((*(int *)((t0 + 0x4))) != 0) {
                t44 = 0x8C2FBBE8;
                if (((*(int *)0x8C29BBB8) != 0) && (t0 = 0x8C29BBBC, t31 = *(int *)((t0 + 0x0)), t31 != 0)) {
                    *(unsigned char *)(((int)stk + 36)) = 0x1;
                    *(unsigned char *)(((int)stk + 37)) = 0x1;
                    t32 = *(int *)(((int)stk + 4));
                    t0 = ((int)stk + 4);
                    t0 = (t0 + 0x24);
                    *(unsigned char *)(((int)stk + 38)) = (*(signed char *)(((t32 + 0x8C2FBBC8) + 0x0)));
                    *(unsigned char *)(((((int)stk + 4) + 0x23) + 0x0)) = (*(signed char *)(((t32 + 0x8C2FBBC8) + 0x1)));
                    *(unsigned char *)((t0 + 0x0)) = (*(signed char *)(((t32 + 0x8C2FBBC8) + 0x2)));
                    t36 = *(int *)(((int)stk + 12));
                    t37 = *(int *)((0x8C29B898 + t36));
                    t38 = *(int *)((0x8C158BE0 + t36));
                    *(unsigned int *)(((int)stk + 20)) = t37;
                    t39 = *(int *)((t37 + 0x4));
                    if (((t39 & 0x100000) != 0) && ((0x200000 & t39) != 0)) {
                        t0 = 0x1;
                    } else {
                        t0 = 0x0;
                    }
                    t41 = t0;
                    t0 = (t0 << 1);
                    t0 = (t0 + t41);
                    t42 = (t38 + t0);
                    t0 = 0x8C1E0CC6;
                    t44 = (pdVibMxStart(t42, (((int)stk + 4) + 0x20)));
                }
                t0 = (*(int *)(((int)stk + 8)));
                *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)((t0 + 0x4)));
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = 0x0;
                t54 = t44;
            }
            t59 = t54;
        }
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x8);
        t0 = (*(int *)(((int)stk + 16)));
        t0 = (t0 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t0;
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
        if ((int)t1 < (int)0x4) continue;
        break;
    }
    return t59;
}

int circuitDrawBar(float f4)
{
    float u6;
    int t8;
    int t9;
    int t10;
    int t11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t17;
    int t21;
    int t25;
    int t26;
    float u27;
    float u28;
    int stk[42];

    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 4) + 0x40)) = *(struct mv16 *)(0x8C10A714); }
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x40) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x10) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x10) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x20) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x20) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 76.0f) << 16) << 8));
    u6 = *(float *)0x8C2FBE90;
    *(unsigned int *)((((((int)stk + 4) + 0x40) + 0x30) + 0xC)) = (((*(int *)((((((int)stk + 4) + 0x40) + 0x30) + 0xC))) & 0xFFFFFF) | (((int)(u6 * 76.0f) << 16) << 8));
    t8 = 0x8C10A714;
    t9 = 0x8C2FBE90;
    t10 = ((((int)stk + 4) + 0x40) + 0x30);
    t11 = 0x0;
    u12 = (u6 * 76.0f);
    u13 = 76.0f;
    for (;;) {
        t14 = (int)((int)t11 / (int)0x3);
        t15 = ((~(((~t14) + 0x1) & 0x1)) + 0x1);
        if ((int)t14 >= 0) {
            t15 = (t14 & 0x1);
        }
        if (t15 == 0) {
            t8 = t11;
            t8 = (t8 + 0x2);
            t9 = 0x0;
            u12 = (float)t8;
            u13 = u12;
            for (;;) {
                t10 = t9;
                t10 = (t10 << 2);
                t10 = (t10 << 2);
                t10 = (t10 + (((int)stk + 4) + 0x40));
                t17 = ((~(((~t9) + 0x1) & 0x1)) + 0x1);
                if ((int)t9 >= 0) {
                    t17 = (t9 & 0x1);
                }
                t9 = (t9 + 0x1);
                if (t17 == 1) {
                    *(float *)((t10 + 0x4)) = u13;
                } else {
                    u12 = (float)t11;
                    *(float *)((t10 + 0x4)) = u12;
                }
                if ((int)t9 >= (int)0x4) {
                    break;
                }
            }
            t10 = (((int)stk + 4) + 0x40);
            t9 = 0x4;
            t21 = ((int (*)(int, int))(nlDispStripTrnsl))(t9, t10);
        } else {
            t25 = t9;
            t26 = t10;
            u27 = u12;
            u28 = u13;
        }
        u12 = u27;
        u13 = u28;
        t8 = 0x1E0;
        t9 = t25;
        t10 = t26;
        t11 = (t11 + 0x3);
        if ((int)t11 >= (int)t8) {
            break;
        }
    }
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C10A754); }
    *(unsigned int *)((((int)stk + 4) + 0xC)) = (((*(int *)((((int)stk + 4) + 0xC))) & 0xFFFFFF) | (((int)(f4 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0xFFFFFF) | (((int)(f4 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = (((*(int *)(((((int)stk + 4) + 0x20) + 0xC))) & 0xFFFFFF) | (((int)(f4 * 255.0f) << 16) << 8));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = ((0xFFFFFF & (*(int *)(((((int)stk + 4) + 0x30) + 0xC)))) | (((int)(f4 * 255.0f) << 16) << 8));
    return (((int (*)(int, int, Stk16))(nlDispStripTrnsl))(0x4, ((int)stk + 4), *(Stk16 *)(0x8C10A754)));
}

int winPartsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    int t0;
    int t2;
    int t5;
    float u6;
    float u7;
    float u19;
    float u25;
    float u27;
    float u29;
    int t1;
    int t8;
    int t20;
    float u24;
    int stk[46];

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = ((((unsigned char)(int)(f4 * 255.0f) << 16) << 8) | 0xFFFFFF);
    t0 = 0x8C0DE6FC;
    t2 = a4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) < (int)(*(int *)(((int)stk + 24)))) {
            t5 = 0x0;
            u6 = (f4 * 255.0f);
            for (;;) {
                t0 = a11;
                u7 = *(float *)(((0xB4 + ((int)stk + 4)) + 0x0));
                if ((t0 != 1) && (t8 = (t0 == 1), t0 = a11, t0 != 3)) {
                    t1 = t2;
                    t1 = (t1 + 0xC);
                    t1 = (t1 + ((((t5 << 1) + t5) << 2) << 1));
                    t0 = 0x3C;
                    *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x0)) = ((*(float *)((t1 + 0x0))) + u7);
                    if (((*(float *)(((*(int *)(((int)stk + 16))) + t0))) > 371.0f) && ((t0 = t5, t0 == 2) || (t0 = t5, t0 == 3))) {
                        t1 = (t5 * 0x1C);
                        t1 = (t1 + (((int)stk + 4) + 0x18));
                        *(float *)((t1 + 0x0)) = ((*(float *)((t1 + 0x0))) + 1.0f);
                    }
                } else {
                    t1 = (*(int *)(((int)stk + 12)));
                    t0 = 0x3C;
                    u6 = (*(float *)((t1 + t0)));
                    u6 = (u6 - (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + 0x0))));
                    u6 = (u6 + u7);
                    *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x0)) = u6;
                }
                t0 = 0x4;
                u19 = *(float *)(((0xB4 + ((int)stk + 4)) + t0));
                t0 = a11;
                if ((t0 != 2) && (t20 = (t0 == 2), t0 = a11, t0 != 3)) {
                    t1 = t2;
                    t1 = (t1 + 0xC);
                    t0 = 0x4;
                    t1 = (t1 + ((((t5 << 1) + t5) << 2) << 1));
                    u24 = (*(float *)((t1 + t0)));
                } else {
                    t0 = 0x4;
                    u24 = ((-(*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)))) + 90.0f);
                }
                u25 = u19;
                u25 = u25 + u24 * f5;
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u25;
                t0 = 0x8;
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = (*(float *)(((0xB4 + ((int)stk + 4)) + t0)));
                t0 = 0x4;
                u27 = *(float *)((t2 + t0));
                t0 = 0xC;
                u6 = (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)));
                u6 = (u6 / u27);
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u6;
                t0 = 0x8;
                u29 = *(float *)((t2 + t0));
                t0 = 0x10;
                u6 = (*(float *)((((t2 + 0xC) + ((((t5 << 1) + t5) << 2) << 1)) + t0)));
                u6 = (u6 / u29);
                u6 = (-u6);
                u6 = (u6 + 1.0f);
                *(float *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + t0)) = u6;
                *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x14)) = (*(int *)(((int)stk + 20)));
                if ((*(int *)(((int)stk + 4))) != 0) {
                    *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x18)) = (*(int *)(((int)stk + 4)));
                } else {
                    *(unsigned int *)((((t5 * 0x1C) + (((int)stk + 4) + 0x18)) + 0x18)) = 0x0;
                }
                t5 = (t5 + 0x1);
                if ((int)t5 < (int)0x4) continue;
                break;
            }
            t0 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 4) + 0x18), (*(int *)((t2 + 0x0)))));
            t1 = (*(int *)(((int)stk + 8)));
            t2 = (t2 + 0x6C);
            t1 = (t1 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t1;
            continue;
        }
        break;
    }
    *(unsigned int *)0x8C40C624 = (*(int *)(((int)stk + 4)));
    return t0;
}

int rankDrawCharaIcon(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t10;
    float u25;
    float u26;
    int t15;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    int t55;
    int t3;
    int t38;
    float u44;
    float u45;
    int t29;
    float u34;
    float u35;
    int t21;
    int stk[50];

    t0 = 0x8C126BDC;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126BDC + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)((((int)stk + 4) + (a4 << 2)));
    if ((int)t4 < (int)0x6) {
        t5 = ((~(((~t4) + 0x1) & 0x1)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x1);
        }
        t38 = 0x9B;
        u44 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
        u45 = (((float)t5 * 32.0f) / 64.0f);
    } else {
        if (1 && ((int)t4 < (int)0xC)) {
            t10 = ((~(((~(t4 - 6)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t4 - 6) >= 0) {
                t10 = ((t4 - 6) & 0x1);
            }
            t29 = 0x9C;
            u34 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 6) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 6))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
            u35 = (((float)t10 * 32.0f) / 64.0f);
        } else {
            u25 = f5;
            u26 = f6;
            if ((int)t4 >= (int)0xC) {
                t15 = ((~(((~(t4 - 12)) + 0x1) & 0x1)) + 0x1);
                if ((int)(t4 - 12) >= 0) {
                    t15 = ((t4 - 12) & 0x1);
                }
                t21 = 0x9D;
                u25 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 12) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 12))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
                u26 = (((float)t15 * 32.0f) / 64.0f);
            }
            t29 = t21;
            u34 = u25;
            u35 = u26;
        }
        t38 = t29;
        u44 = u34;
        u45 = u35;
    }
    u47 = *(float *)0x8C0E13BC;
    u48 = *(float *)0x8C0E13C0;
    u49 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x8));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x8)) = u49;
    *(float *)(((((int)stk + 4) + 0x48) + 0x8)) = u49;
    u50 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x0)) = u50;
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = u50;
    u51 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x0)) = (u51 + 32.0f);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x0)) = (u51 + 32.0f);
    u52 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x4)) = u52;
    *(float *)(((((int)stk + 4) + 0x48) + 0x4)) = u52;
    u53 = *(float *)0x8C0E13C4;
    u54 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0xC)) = u45;
    *(float *)(((((int)stk + 4) + 0x48) + 0xC)) = u45;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x10)) = u44;
    *(float *)(((((int)stk + 4) + 0x48) + 0x10)) = u44;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x10)) = (u44 + u48);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x10)) = (u44 + u48);
    t55 = (((int)stk + 4) + 0x48);
    for (;;) {
        if ((unsigned int)t55 >= (unsigned int)((((int)stk + 4) + 0x48) + 0x70)) {
            break;
        }
        *(unsigned int *)((t55 + 0x14)) = ((0xFF000000 & a5) | 0xFFFFFF);
        *(unsigned int *)((t55 + 0x18)) = 0x0;
        t55 = (t55 + 0x1C);
    }
    return (nlDispStripTexOfs(0x4, (((int)stk + 4) + 0x48), t38));
}

int shopInit(void)
{
    int t2;
    int t17;
    int t27;
    int t29;
    int t38;
    int t40;
    int t53;
    int stk[9];

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
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    L_8C0E6478:;
    padRepeatInit();
    nlInitEvent();
    t2 = *(int *)0x8C2FBE1C;
    *(unsigned int *)0x8C4220A4 = (*(int *)(((((((t2 << 2) + t2) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4)));
    strmBgmPlay(0xE);
    *(unsigned int *)0x8C4220B0 = 0x0;
    *(unsigned int *)0x8C1D9CC8 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x8C1D9CC8;
    R14 = (0x0);
    R4 = (0x8C1D9CC8);
    R6 = (0x8C1D9CB4);
    R8 = (0x8C40C2F4);
    R9 = (0x8C4220A4);
    goto L_8C0E65E2;
    L_8C0E65E2:;
    if (((unsigned int)R6 >= (unsigned int)(*(int *)(((int)stk + 4))))) goto L_8C0E65EC;
    goto L_8C0E65E8;
    L_8C0E65E8:;
    goto L_8C0E64C8;
    L_8C0E64C8:;
    R4 = ((*(int *)((R6 + 0x0))));
    goto L_8C0E65D6;
    L_8C0E65D6:;
    if (((*(int *)((R4 + 0x8))) == -1)) goto L_8C0E65E0;
    goto L_8C0E65DC;
    L_8C0E65DC:;
    goto L_8C0E64CE;
    L_8C0E64CE:;
    t17 = *(int *)((R4 + 0x10));
    R0 = (t17);
    R1 = ((0x8C2FBC84 + (*(int *)((R9 + 0x0)))));
    R11 = (0x3E8);
    R12 = (0x2710);
    R13 = (0x1388);
    R5 = (0x8C2FBC58);
    R7 = (0x1);
    if ((t17 != 4)) goto L_8C0E6524;
    goto L_8C0E64E6;
    L_8C0E64E6:;
    t27 = *(signed char *)((R1 + 0x0));
    *(unsigned int *)((R4 + 0x14)) = t27;
    *(unsigned int *)((R4 + 0x4)) = ((t27 + 0x1) * R11);
    if ((((t27 + 0x1) * R11) != R13)) goto L_8C0E64FC;
    goto L_8C0E64FA;
    L_8C0E64FA:;
    *(unsigned int *)((R4 + 0x4)) = R12;
    goto L_8C0E64FC;
    L_8C0E64FC:;
    t29 = *(int *)((R4 + 0x14));
    R13 = (t29);
    if (((*(float *)((((((t29 << 1) + t29) << 2) + 0x8C1081D8) + 0x0))) > (*(float *)((R5 + 0x1C))))) goto L_8C0E65D2;
    goto L_8C0E6516;
    L_8C0E6516:;
    if (((unsigned char)(*(signed char *)((R5 + 0x28))) == R13)) goto L_8C0E65CE;
    goto L_8C0E6520;
    L_8C0E6520:;
    goto L_8C0E65D2;
    L_8C0E65D2:;
    *(unsigned int *)((R4 + 0x18)) = R7;
    goto L_8C0E65D4;
    L_8C0E65D4:;
    R4 = ((R4 + 0x24));
    goto L_8C0E65D6;
    L_8C0E65CE:;
    *(unsigned int *)((R4 + 0x18)) = R14;
    goto L_8C0E65D4;
    L_8C0E6524:;
    if ((R0 != 5)) goto L_8C0E6566;
    goto L_8C0E6528;
    L_8C0E6528:;
    t38 = *(signed char *)((R1 + 0x0));
    *(unsigned int *)((R4 + 0x14)) = t38;
    *(unsigned int *)((R4 + 0x4)) = ((t38 + 0x1) * R11);
    if ((((t38 + 0x1) * R11) != R13)) goto L_8C0E653E;
    goto L_8C0E653C;
    L_8C0E653C:;
    *(unsigned int *)((R4 + 0x4)) = R12;
    goto L_8C0E653E;
    L_8C0E653E:;
    t40 = *(int *)((R4 + 0x14));
    R13 = (t40);
    if (((*(float *)((((((t40 << 1) + t40) << 2) + 0x8C108214) + 0x0))) > (*(float *)((R5 + 0x20))))) goto L_8C0E65D2;
    goto L_8C0E6558;
    L_8C0E6558:;
    if (((unsigned char)(*(signed char *)((R5 + 0x29))) == R13)) goto L_8C0E65CE;
    goto L_8C0E6562;
    L_8C0E6562:;
    goto L_8C0E65D2;
    L_8C0E6566:;
    if (((*(int *)((R4 + 0x10))) != 6)) goto L_8C0E65B8;
    goto L_8C0E656C;
    L_8C0E656C:;
    if (((unsigned char)(*(signed char *)((R5 + 0x25))) != (*(int *)((R4 + 0x14))))) goto L_8C0E65D2;
    goto L_8C0E6578;
    L_8C0E6578:;
    goto L_8C0E65CE;
    L_8C0E65B8:;
    t53 = *(int *)((R4 + 0x14));
    if ((((((int)t53 >= 0) ? (R7 << (t53 & 31)) : ((-(int)t53 & 31) ? ((int)R7 >> (-(int)t53 & 31)) : ((int)R7 >> 31))) & (*(int *)(((((*(int *)((R4 + 0x10))) << 2) + (R8 + 0x14)) + 0x0)))) == 0)) goto L_8C0E65D2;
    goto L_8C0E65CE;
    L_8C0E65E0:;
    R6 = ((R6 + 0x4));
    goto L_8C0E65E2;
    L_8C0E65EC:;
    FUN_8c0eaf00(0xFF000000, 0xFF000000, 0xFF000000);
    *(unsigned int *)0x8C20D15C = R14;
    *(unsigned int *)0x8C4220A8 = R14;
    *(unsigned int *)0x8C4220AC = R14;
    return memmove(0x8C422048, (R8 + 0x14), 0xC);
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
    R13 = (0x8C291F24);
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

int endingFlyObjPut(int a4, int a5, int a6, int a7)
{
    float u3;
    float u4;
    int stk[11];

    if ((int)(*(int *)0x8C402CA0) <= (int)0x78) {
        *(float *)((a4 + 0x38)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.99000001f);
        u3 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 8)) = (u3 - (((float)(*(int *)0x8C402CA0) / 120.0f) * u3));
        u4 = *(float *)((a4 + 0x3C));
        *(float *)((a4 + 0x3C)) = (u4 * 0.99000001f);
        *(float *)(((int)stk + 16)) = ((u4 * 0.99000001f) - (((float)(*(int *)0x8C402CA0) / 120.0f) * ((u4 * 0.99000001f))));
    } else {
        vecMake(0x8C402CA0, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((int)stk + 8)); }
    }
    nlScaleVector(((int)stk + 8), ((int)stk + 8), (*(float *)0x8C23D204));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0xC), (*(float *)((a4 + 0x2C))), 0.0f, (-(*(float *)((a4 + 0x24)))));
    *(unsigned short *)((a4 + 0x86)) = ((*(short *)((a4 + 0x86))) + (int)(((nlLength((a4 + 0xC), a4)) / 3.14159274f) * 65536.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)((a4 + 0xC)); }
    nlAddVector((a4 + 0xC), (((int)stk + 4) + 0x4));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
    nlRotate((((int)stk + 4) + 0x10), ((unsigned short)(*(short *)((a4 + 0x86))) + 0x8000));
    nlRotateAX(0xFFFFE200);
    nlRotateAY(0x2800);
    nlObjPut(0xCB40000);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xC))), ((*(float *)((a4 + 0x10))) + (-1.0f)), (*(float *)((a4 + 0x14))));
    nlRotate((((int)stk + 4) + 0x10), ((-(unsigned short)(*(short *)((a4 + 0x86)))) - 32768));
    nlRotateAX(0x1E00);
    nlRotateAY(0x2800);
    nlObjPutSetLightDirectionF((*(float *)0x8C38B834), (-(*(float *)0x8C38B838)), (*(float *)0x8C38B83C));
    nlObjPut(0xCB46AD8);
    nlObjPutSetLightDirectionV(0x8C38B834);
    return (nlPopMatrix(0x1));
}

int hudRankIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t4;
    int t1;
    int t8;
    int t10;
    int t17;
    int t29;
    int t32;
    int t25;
    int t20;
    int t13;
    int stk[23];

    stk[11] = a8;
    stk[12] = a9;
    stk[13] = a10;
    stk[14] = a11;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    t4 = a4;
                    if (a4 == 4) {
                        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 82.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                        t1 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E730, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x10)));
                        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 258.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                        t4 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E780, *(Stk3 *)((((int)stk + 28) + 0x10))));
                    }
                    t13 = t4;
                } else {
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 33.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t8 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E550, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x10)));
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 65.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t10 = ((int (*)(int, Stk3))(sprPutAt))(0x8C33E5A0, *(Stk3 *)((((int)stk + 28) + 0x10)));
                    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 216.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                    t13 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E5F0, *(Stk3 *)((((int)stk + 28) + 0x10))));
                }
                t20 = t13;
            } else {
                *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 83.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                t17 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E4B0, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x10)));
                *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 235.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
                t20 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E500, *(Stk3 *)((((int)stk + 28) + 0x10))));
            }
            t25 = t20;
        } else {
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 139.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
            t25 = (((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E640, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x10))));
        }
        t32 = t25;
    } else {
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 42.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t29 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C33E690, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x10)));
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 235.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t32 = (((int (*)(int, Stk3))(sprPutAt))(0x8C33E6E0, *(Stk3 *)((((int)stk + 28) + 0x10))));
    }
    return t32;
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
    R10 = (0x8C2873CC);
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

int fadeQuadDrawB(int a4, int a5, int a6, int a7, float f4)
{
    int t4;
    int t13;
    int stk[70];

    *(unsigned int *)(((int)stk + 84)) = (int)((float)a4 * ((*(float *)((a6 + 0x20))) - (*(float *)((a6 + 0x18)))));
    *(unsigned int *)(((int)stk + 88)) = (int)((float)a5 * ((*(float *)((a6 + 0x24))) - (*(float *)((a6 + 0x1C)))));
    t4 = *(int *)(((int)stk + 84));
    vecMake((0xFF & (int)(f4 * 255.0f)), a5, a6, a7, (((int)stk + 84) + 0x2C), ((float)t4 + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 80) + 0x24), (*(float *)((a6 + 0x4))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    t13 = *(int *)(((int)stk + 88));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 76) + 0x1C), ((float)t4 + (*(float *)((a6 + 0x4)))), ((float)t13 + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 72) + 0x14), (*(float *)((a6 + 0x4))), ((float)t13 + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x3C)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (((int)stk + 68) + 0x48), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x40)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x48), (*(int *)((a6 + 0x0)))));
}

int nlChangeDisplayMode(int a4, int a5)
{
    int t15;
    int t30;
    int t36;
    int t37;
    int t41;
    int t39;

    *(unsigned int *)0x8C42446C = 0x0;
    if ((a4 != 0) && ((a4 != 21) && ((a4 != 21) && (a4 != 21)))) {
    } else {
        *(unsigned int *)0x8C42446C = 0x1;
    }
    *(unsigned int *)0x8C424470 = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        *(unsigned int *)0x8C424470 = 0x1;
    }
    if ((*(int *)0x8C424460) == 0) {
        nlSysEndPass();
        nlSysRender(0x0);
        nlSysEndScene();
    }
    *(unsigned short *)0x8C458DDC = 0x0;
    *(unsigned short *)0x8C458DDE = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0x8C458DDC = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0x8C458DDE = 0x1;
    }
    t15 = *(int *)((((a5 & 0xF) << 2) + 0x8C127A44));
    if ((*(int *)0x8C424470) == 1) {
        kmSetPALEXTCallback(0x8C0EAB40);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0x4))), t15, (*(short *)0x8C458DDC), (*(short *)0x8C458DDE));
    *(unsigned short *)0x8C458DD8 = (*(short *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0x8)));
    *(unsigned short *)0x8C458DDA = (*(short *)((((((a4 << 1) + a4) << 2) + 0x8C1278F4) + 0xA)));
    t30 = kmSetSystemConfiguration(0x8C42420C);
    nlLoadDummyTexture();
    *(unsigned int *)0x8C424494 = 0x1;
    FUN_8c0eaf00((*(int *)0x8C1DC894), (*(int *)0x8C1DC898), (*(int *)0x8C1DC89C));
    t36 = *(short *)0x8C458DDA;
    t37 = *(short *)0x8C458DD8;
    if (0x0 != 0) {
        t41 = (short)t36;
        if ((*(short *)0x8C458DDE) == 1) {
            t39 = ((short)t36 + (short)t36);
            if ((int)((short)t36 + (short)t36) > (int)0x1E0) {
                t39 = 0x1E0;
            }
            t41 = t39;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t37, (float)t41);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t37, (float)(short)t36);
    }
    if ((*(int *)0x8C424460) == 0) {
        nlSysBeginScene();
        nlSysBeginPass();
    }
    return t30;
}
