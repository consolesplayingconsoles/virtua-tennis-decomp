typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
int resetBackColorZ(int, int, int, float);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int, int);
extern float _builtin_sqrtf(float);
int adxf_purge_all(int, int, int, int);
int buIsFormat(int);
int camViewToWorld(int, int, int, int, int, Stk3);
int fadeScreenDraw(float, float);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int get_fat(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int memset(int, int, int);
float motionGetFrame(int);
int nlArcCos(float);
int nlArcTan2(float, float);
int nlDispStripTrnsl(int, int);
float nlInnerProduct(int, int);
int nlLineSetThickness(float);
int nlMatrixMode(int);
int nlOuterProduct(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlSingleLine(int, int, int);
int nlWaitVSync(void);
int nl_cancel_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int nlsndSeqRequest(int);
int padVibRequest(int, int, int, int, int, int);
int plPic2SeleLoad(void);
int primVertexSet(int, int, int, int, int, Stk3);
int set_event2(int, int);
int sprAdvLoad(void);
int sprSet192Load(void);
int vecAnglesTo(int, int, Stk3, Stk3);
float vecDist(Stk3, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
void staffMorphBlend(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int cpuInTriangle(Stk12 s);
int nlRenderTextureBegin(int a4);
int vmsfs_sysdiskfree(int a4);
int ikSolve2Bone(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int dbgLinePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
void umpCallScoreB(int a4, int a5);
int primRectInc(int a4, int a5, int a6, int a7, Stk4 p);
void sndPlayerDiveLand(int a4);
int rankInsert2(void);
int _rnd(int a4, int a5);
void SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int primRectIncGradX(int a4, int a5, int a6, int a7, Stk4 p);
int trigger(int a4, int a5);
int FUN_8c1f1906(int a4, int a5, int a6, int a7);
float camMoveBegin(float f4, float f5);
int ndbBuildIndex(int a4, int a5, int a6, int a7);
int stageLoadSelectSprites(float f4);

void staffMorphBlend(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u6;
    float u7;
    float u12;
    float u14;
    float u19;
    float u21;
    float u4;
    int stk[10];


    if ((int)a6 > 0) {
        t0 = 0x0;
        t1 = 0x8C38AED0;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            (*(int *)((int)stk + 8)) = ((t2 * 0x3C) + 0x8C38AED0);
            u6 = *(float *)((((t2 * 0x3C) + 0x8C38AED0) + 0x24));
            u7 = u6;
            u7 = u7 + ((*(float *)((((t2 * 0x3C) + 0x8C38B308) + 0x24))) - u6) * f4;
            *(float *)(((int)stk + 4)) = u7;
            if (f4 > 1.0f) {
                u4 = (*(float *)(((int)stk + 4)));
                u4 = (u4 / f4);
                *(float *)(((int)stk + 4)) = u4;
            }
            *(unsigned int *)((a4 + ((*(int *)(((t3 + 0x8C38AED0) + 0x0))) << 2))) = ((*(int *)((((int)stk + 4) + 0x0))) | 0x1);
            u12 = *(float *)(((t3 + 0x8C38AED0) + 0x28));
            u14 = u12;
            u14 = u14 + ((*(float *)(((t3 + 0x8C38B308) + 0x28))) - u12) * f4;
            *(float *)(((int)stk + 4)) = u14;
            if (f4 > 1.0f) {
                u4 = (*(float *)(((int)stk + 4)));
                u4 = (u4 / f4);
                *(float *)(((int)stk + 4)) = u4;
            }
            *(unsigned int *)(((((*(int *)(((t0 + 0x8C38AED0) + 0x0))) << 2) + a4) + 0x4)) = (*(int *)((((int)stk + 4) + 0x0)));
            u19 = *(float *)(((t0 + 0x8C38AED0) + 0x2C));
            u21 = u19;
            u21 = u21 + ((*(float *)(((t0 + 0x8C38B308) + 0x2C))) - u19) * f4;
            *(float *)(((int)stk + 4)) = u21;
            if (f4 > 1.0f) {
                u4 = (*(float *)(((int)stk + 4)));
                u4 = (u4 / f4);
                *(float *)(((int)stk + 4)) = u4;
            }
            t2 = (t2 + 0x1);
            t0 = (t0 + 0x3C);
            *(unsigned int *)(((((*(int *)((t1 + 0x0))) << 2) + a4) + 0x8)) = (*(int *)((((int)stk + 4) + 0x0)));
            t1 = (t1 + 0x3C);
            t3 = (t3 + 0x3C);
            if ((int)t2 >= (int)a6) {
                break;
            }
        }
    }
}


int ikSolve2Bone(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int t0;
    float u1;
    float u3;
    int t5;
    int t6;
    int t8;
    int t9;
    int t13;
    int t10;
    int t11;

    if (_builtin_sqrtf(((f4 * f4) + (f5 * f5))) > (f6 + f7)) {
        *(unsigned short *)((a4 + 0x0)) = 0x0;
        t0 = nlArcTan2(f5, f4);
        *(unsigned short *)((a5 + 0x0)) = (-t0);
        t13 = (-t0);
    } else {
        u1 = (f6 * f7);
        u3 = (f6 * (_builtin_sqrtf(((f4 * f4) + (f5 * f5)))));
        if (a6 == 0) {
            *(unsigned short *)((a4 + 0x0)) = ((nlArcCos((((((f6 * f6) - (f4 * f4)) - (f5 * f5)) + (f7 * f7)) / (u1 * (1.0f + 1.0f))))) + 0x8000);
            t5 = nlArcTan2((-f5), f4);
            t6 = nlArcCos((((((f4 * f4) + (f5 * f5)) + (f6 * f6)) - (f7 * f7)) / (u3 * (1.0f + 1.0f))));
            t10 = t6;
            t11 = (t5 + t6);
        } else {
            *(unsigned short *)((a4 + 0x0)) = ((-(nlArcCos((((((f6 * f6) - (f4 * f4)) - (f5 * f5)) + (f7 * f7)) / (u1 * (1.0f + 1.0f)))))) + 0x8000);
            t8 = nlArcTan2((-f5), f4);
            t9 = nlArcCos((((((f4 * f4) + (f5 * f5)) + (f6 * f6)) - (f7 * f7)) / (u3 * (1.0f + 1.0f))));
            t10 = t9;
            t11 = (t8 - t9);
        }
        *(unsigned short *)((a5 + 0x0)) = t11;
        t13 = t10;
    }
    return t13;
}

int dbgLinePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    float u0;
    float u1;
    int t2;
    int t7;
    int stk[22];

    *(float *)(((int)stk + 36)) = f6;
    *(float *)(((int)stk + 44)) = f7;
    *(float *)(((int)stk + 40)) = f8;
    u0 = *(float *)0x8C287A10;
    *(float *)(((int)stk + 60)) = (f4 / u0);
    u1 = *(float *)0x8C287A10;
    *(float *)(((int)stk + 64)) = (f5 / u1);
    *(float *)(((int)stk + 68)) = (-1.0f);
    t2 = ((int (*)(int, int, int, int, int, Stk3, float, float, float, float, float))(camViewToWorld))(a4, a5, a6, a7, (((int)stk + 24) + 0x24), *(Stk3 *)((((int)stk + 36) + 0x18)), (f4 / u0), (f5 / u1), f6, f7, f8);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 36))) / (*(float *)0x8C287A10));
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 44))) / (*(float *)0x8C287A10));
    *(float *)(((int)stk + 56)) = (-1.0f);
    t7 = ((int (*)(int, int, int, int, int, Stk3))(camViewToWorld))(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x28), *(Stk3 *)((((int)stk + 20) + 0x1C)));
    nlLineSetThickness((*(float *)(((int)stk + 40))));
    return (nlSingleLine((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((((((((0x2 & a4) << 2) << 2) << 2) << 1) - (0x2 & a4)) << 16) | ((((((0x4 & a4) << 2) << 2) << 2) - (0x4 & a4)) << 8)) | (((0x1 & a4) << 8) - (0x1 & a4)))));
}

void umpCallScoreB(int a4, int a5)
{
    int t3;
    float u4;
    float u5;
    int t11;

    if ((*(int *)0x8C421F60) == 0) {
        
        
        t3 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t3 + 0x8C)) = 0x78;
        u4 = *(float *)0x8C0847C4;
        u5 = *(float *)0x8C0847C8;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t3), (*(float *)0x8C0847D0), u4, u5);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t3), (*(float *)0x8C0847D8), (*(float *)0x8C0847D4), u5);
        *(float *)((t3 + 0x80)) = 1.0f;
        *(unsigned int *)((t3 + 0x88)) = 0x0;
        *(float *)((t3 + 0x80)) = 0.0f;
        t11 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t11 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t11), (*(float *)0x8C0847DC), u4, u5);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t11), (*(float *)0x8C0847D8), (*(float *)0x8C0847D4), u5);
        *(float *)((t11 + 0x80)) = 1.0f;
        *(unsigned int *)((t11 + 0x88)) = 0x0;
        *(float *)((t11 + 0x80)) = 0.0f;
    }
}

int primRectInc(int a4, int a5, int a6, int a7, Stk4 p)
{
    int t5;
    int t11;
    int stk[43];


    stk[31] = p.w[0];
    stk[32] = p.w[1];
    stk[33] = p.w[2];
    stk[34] = p.w[3];
    (*(int *)((int)stk + 20)) = a4;
    (*(int *)((int)stk + 24)) = a5;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x68) + 0x0))), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x8), *(Stk3 *)((int)stk + 8));
    t5 = (*(int *)((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x68) + 0x0))) - (float)t5), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x8)), *(Stk3 *)((int)stk + 8));
    t11 = (*(int *)((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x68) + 0x0))), (((*(float *)(((((int)stk + 20) + 0x68) + 0x4))) + (float)t11) + 1.0f), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x8)), *(Stk3 *)((int)stk + 8));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x68) + 0x0))) - (float)t5), (((*(float *)(((((int)stk + 20) + 0x68) + 0x4))) + (float)t11) + 1.0f), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x8)), *(Stk3 *)((int)stk + 8));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x8)));
}

void sndPlayerDiveLand(int a4)
{
    float t3;
    int t19;
    int t1;
    int t2;
    int t13;
    int t14;

    if (((*(int *)0x8C38BA70) != 0) && ((t1 = *(int *)0x8C38BA74, t1 != 0) && (t2 = *(int *)0x8C287C60, t2 == 0))) {
        t3 = motionGetFrame(a4);
        if ((*(int *)((a4 + 0xC5C))) == 12) {
            if (((*(int *)((a4 + 0x20))) != ((*(int *)0x8C2873D0) + 0x74210)) && (t13 = *(int *)0x8C2873D0, t14 = *(int *)((a4 + 0x20)), t14 != (t13 + 0x71C70))) {
            } else {
                if ((int)t3 == 65) {
                    t19 = 0x109A9;
                    if ((*(int *)0x8C402C08) == 1) {
                        t19 = 0x9A9;
                    }
                    nlsndSeqRequest(t19);
                    if (((*(int *)0x8C287B3C) & 1) == 0) {
                        if ((*(int *)(((((*(int *)((a4 + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
                            padVibRequest((*(int *)((a4 + 0xB64))), 0x7, 0x7, 0x0, 0x14, 0x5);
                        }
                    }
                }
            }
        }
    }
}

int rankInsert2(void)
{
    int t0;
    int t3;
    int t4;
    int t9;
    int t11;
    int t12;
    int t20;
    int t22;
    int t24;
    int t26;
    int t27;

    *(unsigned int *)0x8C421E74 = 0x0;
    t0 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x8C421EC8)) = *(struct mv3 *)((0x8C40C364 + t0)); }
        t0 = (t0 + 0xC);
        if ((unsigned int)t0 >= (unsigned int)0x78) {
            break;
        }
    }
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)0x8C421E34;
        if ((unsigned int)(*(int *)((((((t3 << 1) + t3) << 2) + 0x8C421EC8) + 0x0))) > (unsigned int)t4) {
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xA) {
                break;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)0x8C421E30 = t3;
    if ((int)t3 <= (int)0x9) {
        t9 = t4;
        t11 = 0x8C421F28;
        t12 = 0x8;
        for (;;) {
            if ((int)t12 < (int)(*(int *)0x8C421E30)) {
                break;
            }
            t9 = t11;
            t9 = (t9 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)(t11); }
            t11 = (t11 - 12);
            t12 = (t12 - 1);
        }
    }
    t20 = *(int *)0x8C421E30;
    memset(((((t20 << 1) + t20) << 2) + 0x8C421EC8), 0x0, 0xC);
    t22 = *(int *)0x8C421E30;
    *(unsigned int *)((((((t22 << 1) + t22) << 2) + 0x8C421EC8) + 0x0)) = (*(int *)0x8C421E34);
    t24 = *(int *)0x8C421E30;
    *(unsigned char *)((((((t24 << 1) + t24) << 2) + 0x8C421EC8) + 0xA)) = (*(int *)0x8C421F40);
    t26 = *(int *)0x8C421E30;
    t27 = *(signed char *)0x8C421F44;
    *(unsigned char *)((((((t26 << 1) + t26) << 2) + 0x8C421EC8) + 0xB)) = t27;
    *(unsigned int *)0x8C421E74 = 0x2;
    return t27;
}


int primRectIncGradX(int a4, int a5, int a6, int a7, Stk4 p)
{
    int t6;
    int t13;
    int stk[44];


    stk[32] = p.w[0];
    stk[33] = p.w[1];
    stk[34] = p.w[2];
    stk[35] = p.w[3];
    (*(int *)((int)stk + 28)) = a4;
    (*(int *)((int)stk + 32)) = a5;
    (*(int *)((int)stk + 24)) = a6;
    (*(int *)((int)stk + 20)) = a7;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 24))), 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10), *(Stk3 *)((int)stk + 8));
    t6 = (*(int *)((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 20))), 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    t13 = (*(int *)((int)stk + 32));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 24))), 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) - (float)t6), (((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t13) + 1.0f), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(((*(int *)((int)stk + 20))), 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x10)), *(Stk3 *)((int)stk + 8));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}


float camMoveBegin(float f4, float f5)
{
    float t4;
    float u20;
    float u7;
    int stk[17];
    float R1052;
    float R1056;

    R1052 = *(float *)((int)stk + 52);
    R1056 = *(float *)((int)stk + 56);

    R1056 = f4;
    R1052 = f5;
    if ((*(int *)0x8C287640) == 0) {
        if ((*(int *)0x8C287634) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C2875CC); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C2875C0); }
            vecAnglesTo(0x8C287648, 0x8C28764A, *(Stk3 *)(0x8C2875C0), *(Stk3 *)(0x8C2875CC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C2875CC); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2875C0); }
            t4 = vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            *(float *)0x8C287628 = t4;
            u7 = t4;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875D8) = *(struct mv3 *)(0x8C2875C0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875E4) = *(struct mv3 *)(0x8C2875CC); }
        *(unsigned short *)0x8C287644 = (*(short *)0x8C287648);
        *(unsigned short *)0x8C287646 = (*(short *)0x8C28764A);
        *(float *)0x8C287624 = (*(float *)0x8C287628);
        *(float *)0x8C287614 = (R1056);
        *(float *)0x8C287618 = (R1052);
        *(unsigned int *)0x8C28763C = 0x0;
        *(unsigned int *)0x8C287638 = 0x0;
        *(float *)0x8C287620 = 0.0f;
        *(float *)0x8C28761C = 0.0f;
        u20 = u7;
    }
    return u20;
}

int ndbBuildIndex(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t0;
    int t1;
    int t2;

    *(unsigned short *)0x8CB80000 = 0x0;
    t3 = 0x8CB80000;
    t4 = 0x8CB80000;
    t5 = 0x8CB90000;
    t6 = a7;
    t7 = 0x0;
    t8 = 0xFFF;
    t9 = 0x0;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t6 = (*(int *)0x8C30193C);
        t3 = 0x8CB00000;
        t1 = 0x0;
        for (;;) {
            if (t6 == 0) {
                break;
            }
            t2 = (*(short *)((t3 + 0x0)));
            t2 = (unsigned short)t2;
            if (t2 == t9) {
                t0 = (*(signed char *)((t3 + 0x2)));
                t1 = (t1 + 0x1);
                *(unsigned char *)((t5 + 0x0)) = t0;
                t5 = (t5 + 0x1);
            }
            t6 = (t6 - 1);
            t3 = (t3 + 0x4);
        }
        t7 = (t7 + t1);
        t4 = (t4 + 0x2);
        t8 = (t8 - 1);
        *(unsigned short *)((t4 + 0x0)) = t7;
        t9 = (t9 + 0x1);
    }
    *(unsigned short *)(((t4 + 0x2) + 0x0)) = 0xFFFF;
    *(unsigned int *)0x8C30194C = (t4 + 0x2);
    *(unsigned int *)0x8C301950 = t5;
    return t0;
}

int stageLoadSelectSprites(float f4)
{
    float u1;
    int t2;
    float u8;
    int t9;

    resetBackColorZ(0x0, 0x0, 0x0, f4);
    u1 = 1.0f;
    for (;;) {
        t2 = plPic2SeleLoad();
        if (t2 == 1) {
            break;
        }
        u1 = (u1 - 0.0199999996f);
        if (0.0f > u1) {
            u1 = 0.0f;
        }
        fadeScreenDraw(u1, 0.100000001f);
        nlWaitVSync();
    }
    sprSet192Load();
    fileLoadStart(0x8CA80000, 0x8C1110C4, 0x0);
    u8 = u1;
    for (;;) {
        t9 = fileLoadPoll();
        if (t9 == 1) {
            break;
        }
        u8 = (u8 - 0.0199999996f);
        if (0.0f > u8) {
            u8 = 0.0f;
        }
        fadeScreenDraw(u8, 0.100000001f);
        nlWaitVSync();
    }
    sprAdvLoad();
    return (fadeScreenDraw(u8, 0.100000001f));
}
