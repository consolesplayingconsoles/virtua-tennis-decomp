/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int abs(int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int camWorldToView(int, ...);
int charaModelCount(int);
int charaTexFreeAll(void);
int emotFaceReset(int);
int entryCountJoined(void);
int entryIsVersus(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlotOfs(int, int, int, int, int);
int hudFramePutNarrow(Stk3, float);
int hudImpactSpawn(int, Stk16, float);
int hudNumPut(int, Stk3, float);
int kmSetBackGroundPlane(int, int);
int kmyRegisterBGPlane(int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotReset(int, int);
int nlDispStripTrnsl(int, int);
float nlExp(float);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlSetCommonTextureOffset(int);
int nlSingleLine(int, int, int);
int nlSubVector3op(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int padLcdModeClear(void);
int playerSetup(int, int, int, int);
int prefetch(int);
int primVertexSet(int, int, int, int, int, Stk3);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int screenQuadPut(int, float);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uiScanlinesPut(void);
int uniformSlotReset(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int circuitDrawFrame(void);
int screenSphereVisibleRaised(Stk4 s, float f4);
int primRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int camInit(int a4, int a5, int a6, int a7);
int vmsfs_fsetparam(int a4, int a5, int a6);
void bodyLinePerp(Stk10 s);
int nlRotateAxeSC(int a4, float f4, float f5);
int nlChgObjectPolyAttrSub(int a4, int a5, int a6);
int ADXAMP_Create(int a4, int a5, int a6);
int primLineV(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int entryAllReady(void);
int strmCrowdLoop(int a4);
void sndEndingCheer(void);
int circuitMapInit(void);
int charaTexLoad(int a4, int a5);
float nlLdexpf(int a4, float f4);
int sprSet163Setup(int a4);
int kmtex_TextureSize_Palettized(int a4);
int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int fileLoadStart(int a4, int a5, int a6);
int kmiProcessVertex_03(int a4, int a5, int a6, int a7);
int nlLineSendHeader(int a4);
float nlTanh(int a4);
int nlSetBackColorZ(int a4, int a5, int a6, float f4);
int cpuDebugLine(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlsndBlockMove(int a4, int a5, int a6);
int cpuGiveUpCheck(int a4, float f4);
int hudValueDraw(int a4, int a5, int a6, int a7, float f4);
int fadeScreenStart(int a4, int a5, int a6, int a7);
int uniformTexLoad(int a4, int a5, int a6);
int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int swingBlurSpawn(int a4, int a5, int a6, int a7);
int charaTexCount(int a4);


void bodyLinePerp(Stk10 s)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u9;
    float u11;
    float u12;
    float u13;
    float u14;
    int stk[36];

    stk[18] = s.w[0];
    stk[19] = s.w[1];
    stk[20] = s.w[2];
    stk[21] = s.w[3];
    stk[22] = s.w[4];
    stk[23] = s.w[5];
    stk[24] = s.w[6];
    stk[25] = s.w[7];
    stk[26] = s.w[8];
    stk[27] = s.w[9];
    u0 = *(float *)(((((int)stk + 4) + 0x60) + 0x4));
    u1 = *(float *)(((((int)stk + 4) + 0x60) + 0x0));
    u2 = *(float *)(((((int)stk + 4) + 0x60) + 0x8));
    u3 = (u0 * u0);
    u3 = u3 + u1 * u1;
    u4 = u3;
    u4 = u4 + u2 * u2;
    if (u4 == 0.0f) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x44) + 0x0)))) = *(struct mv3 *)(0x8C1016D4); }
    } else {
        nlSubVector3op((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x54));
        u9 = (u0 * (*(float *)(((int)stk + 44))));
        u9 = u9 + u1 * (*(float *)(((int)stk + 40)));
        u11 = u9;
        u11 = u11 + u2 * (*(float *)(((int)stk + 48)));
        u12 = *(float *)&s.w[4];
        u12 = u12 + u1 * (u11 / u4);
        *(float *)(((int)stk + 16)) = u12;
        u13 = *(float *)&s.w[5];
        u13 = u13 + u0 * (u11 / u4);
        *(float *)(((int)stk + 20)) = u13;
        u14 = *(float *)&s.w[6];
        u14 = u14 + u2 * (u11 / u4);
        *(float *)(((int)stk + 24)) = u14;
        nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x48));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x44) + 0x0)))) = *(struct mv3 *)(((int)stk + 4)); }
    }
}


int entryAllReady(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t13;
    int t17;
    int t18;
    int t20;
    int t21;
    int t23;
    int t29;
    int t0;
    int t1;
    int t31;
    int t27;
    int t25;

    t2 = 0x8C185298;
    t3 = 0x8C343878;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)0x8C1852A0) {
            break;
        }
        t1 = (*(short *)((t2 + 0x0)));
        t0 = (*(short *)0x8C343262);
        t1 = (unsigned short)t1;
        t0 = (unsigned short)t0;
        t13 = ((t0 & t1) == 0);
        t1 = (*(int *)((t3 + 0x0)));
        if (!t13) {
            t4 = (t4 + 0x1);
        }
        t3 = (t3 + 0x4);
        if ((int)t1 > (int)0x1) {
            t5 = (t5 + 0x1);
        }
        t2 = (t2 + 0x2);
    }
    *(unsigned int *)0x8C343F38 = t4;
    *(unsigned int *)0x8C343F3C = t5;
    if ((*(int *)0x8C287ADC) == 4) {
        t17 = entryCountJoined();
        if (t17 == 1) {
            t18 = 0x1;
            if (t5 != 2) {
                t18 = 0x2;
            }
            t27 = t18;
        } else {
            t20 = entryIsVersus();
            if (t20 != 0) {
                t21 = 0x0;
                if (t5 == 4) {
                    t21 = 0x1;
                }
                t25 = t21;
            } else {
                t23 = 0x0;
                if (t5 == 2) {
                    t23 = 0x1;
                }
                t25 = t23;
            }
            t27 = t25;
        }
        t31 = t27;
    } else {
        t29 = 0x0;
        if ((int)t4 <= (int)t5) {
            t29 = 0x1;
        }
        t31 = t29;
    }
    return t31;
}

int strmCrowdLoop(int a4)
{
    float t18;
    float u19;

    if (a4 == 0) {
        *(unsigned int *)0x8C1D4B50 = 0x0;
        nlsndSeqRequest(0x503A9);
    } else {
        if ((*(int *)0x8C1D4B50) == 0x12C) {
            nlsndSeqRequest(0x503A9);
        }
        if ((*(int *)0x8C1D4B50) == 0x258) {
            nlsndSeqRequest(0x503A9);
        }
        if (((int)((int)(*(int *)0x8C1D4B50) % (int)0x64)) == 0) {
            t18 = nlRandom();
            u19 = *(float *)0x8C0D7FC0;
            if ((int)(t18 * u19) == 0) {
                nlsndSeqRequest(0x4A9);
            }
            if ((int)(t18 * u19) == 1) {
                nlsndSeqRequest(0x104A9);
            }
        }
        *(unsigned int *)0x8C1D4B50 = ((*(int *)0x8C1D4B50) + 0x1);
    }
    return (*(int *)0x8C1D4B50);
}

void sndEndingCheer(void)
{
    float t2;
    float t4;
    float u5;
    int t26;
    int t27;
    float u28;
    int t1;

    if (((*(int *)0x8C38BA70) != 0) && (t1 = *(int *)0x8C38BA74, t1 != 0)) {
        t2 = nlRandom();
        if ((int)(t2 * (*(float *)0x8C0D2AC0)) != 1) {
            t4 = nlRandom();
            u5 = *(float *)0x8C0D2AC4;
            if ((int)(t4 * u5) == 0) {
                nlsndSeqRequest(0x22A9);
            } else {
                if ((int)(t4 * u5) == 1) {
                    nlsndSeqRequest(0x122A9);
                } else {
                    if ((int)(t4 * u5) == 2) {
                        nlsndSeqRequest(0x222A9);
                    } else {
                        if ((int)(t4 * u5) == 3) {
                            nlsndSeqRequest(0x322A9);
                        }
                    }
                }
            }
            t26 = nlsndGetPackInfo(0x6, 0x10A0);
            t27 = *(int *)0x8C38BA64;
            u28 = *(float *)0x8C0D2AE0;
            if ((float)t26 > ((float)t27 * u28)) {
                nlsndSystemControl(0x6, 0x10A0, (int)((float)t27 * u28));
    return;
            }
            return;
        }
        return;
    }
}


int charaTexLoad(int a4, int a5)
{
    int t18;
    int t3;
    int t4;
    int t5;
    int t7;
    int t10;
    int t12;
    int t13;
    int stk[169];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t18 = (a4 << 2);
    if ((*(int *)((0x8C1AFA64 + (a4 << 2)))) == 0) {
        *(unsigned int *)((0x8C1AFA64 + (a4 << 2))) = 0x1;
        nlSetCommonTextureOffset((*(int *)(((a4 << 2) + 0x8C1B05DC))));
        t3 = *(int *)(((int)stk + 4));
        t4 = 0x0;
        for (;;) {
            t5 = charaTexCount(a4);
            if ((int)t4 >= (int)t5) {
                break;
            }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((t4 << 2) << 2) + (((int)stk + 4) + 0x4))) = *(struct mv4 *)(((*(int *)(((0x8C1B0594 + (a4 << 2)) + 0x0))) + ((t4 << 2) << 2))); }
            t7 = *(int *)(((((t4 << 2) << 2) + (((int)stk + 4) + 0x4)) + 0x8));
            t10 = (((t4 << 2) << 2) + (((int)stk + 4) + 0x4));
            t4 = (t4 + 0x1);
            *(unsigned int *)((t10 + 0x8)) = (t7 + (*(int *)((((t3 << 2) + 0x8C124AE0) + 0x0))));
        }
        t12 = 0x0;
        for (;;) {
            t13 = charaModelCount(a4);
            if ((int)t12 >= (int)t13) {
                break;
            }
            nlObjPutLoadTexture((*(int *)(((*(int *)(((0x8C1B054C + (a4 << 2)) + 0x0))) + (t12 << 2)))), (((int)stk + 4) + 0x4));
            t12 = (t12 + 0x1);
        }
        t18 = (emotFaceReset(a4));
    }
    return t18;
}


int sprSet163Setup(int a4)
{
    int t0;
    int t1;
    int t2;
    float u6;
    int t8;
    int stk[21];

    *(unsigned int *)(((int)stk + 20)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 20) + 0xC)) = *(struct mv8 *)(0x8C1248AC); }
    t0 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 24)) = ((t0 << 2) + 0x8C124884);
    t1 = *(int *)(((int)stk + 20));
    t2 = *(int *)((((t0 << 2) + 0x8C124884) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = ((((t1 << 2) + t1) << 2) << 2);
    sprInitRectF((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C), t2, (((int)stk + 20) + 0xC), 0x100, 0x100, 0x0);
    *(unsigned int *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x34)) = 0x5;
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x4)) = (*(float *)0x8C0C5314);
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x8)) = (*(float *)0x8C0C5318);
    u6 = *(float *)0x8C0C531C;
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0xC)) = u6;
    t8 = *(int *)(((int)stk + 28));
    sprInitRectF((t8 + 0x8C37BF9C), (*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (((int)stk + 20) + 0xC), 0x100, 0x100, 0x1);
    *(float *)(((t8 + 0x8C37BF9C) + 0x4)) = (*(float *)0x8C0C5324);
    *(float *)(((t8 + 0x8C37BF9C) + 0x8)) = (*(float *)0x8C0C5328);
    *(float *)(((t8 + 0x8C37BF9C) + 0xC)) = u6;
    return 0xC;
}


int fileLoadStart(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t12;
    int t13;
    int t18;

    if ((*(int *)0x8C34A1F8) != 0) {
        fileLoadClose();
    }
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1EC = 0x1;
    *(unsigned int *)0x8C34A1F0 = 0x0;
    t8 = 0x0;
    t9 = 0x1;
    for (;;) {
        if ((*(signed char *)((a5 + t8))) == 0) {
            break;
        }
        t9 = (*(signed char *)((a5 + t8)));
        t12 = (0x8C34A204 + t8);
        t8 = (t8 + 0x1);
        *(unsigned char *)((t12 + 0x0)) = t9;
    }
    t13 = 0x0;
    for (;;) {
        *(unsigned int *)0x8C34A1F8 = (ADXF_Open(a5, 0x0));
        *(unsigned int *)0x8C34B134 = ((*(int *)0x8C34B134) + 0x1);
        if ((*(int *)0x8C34A1F8) == 0) {
            if ((int)t13 < (int)0xA) {
                t13 = (t13 + 0x1);
                continue;
            }
            break;
        }
        if (a6 == 0) {
            t18 = ADXF_GetFsizeSct((*(int *)0x8C34A1F8));
            *(unsigned int *)0x8C34B13C = t18;
            ADXF_ReadNw32((*(int *)0x8C34A1F8), t18, a4);
            return 0x1;
        }
        *(unsigned int *)0x8C34B13C = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
        ADXF_ReadNw32((*(int *)0x8C34A1F8), ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1), a4);
        return 0x1;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}


int uniformTexLoad(int a4, int a5, int a6)
{
    int t26;

    if ((*(int *)((0x8C1891D4 + (a6 << 2)))) != a4) {
        if ((*(int *)(((0x8C34A238 + (a6 * 0x4C)) + 0x0))) != 0) {
            fileLoadCloseSlot(a6);
            *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
        }
    }
    if ((*(int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0))) == 0) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = a4;
        *(unsigned int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0)) = 0x1;
        cacheOcbiRange((a5 + 0x8CA80000), 0x20000);
        fileLoadStartSlotOfs(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C18911C))), 0x0, a5, a6);
    }
    t26 = fileLoadPollSlot(a6);
    if (t26 == 1) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
    }
    return t26;
}


int charaTexCount(int a4)
{
    int t0;

    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                t0 = 0x14;
            }
                break;
            case 2:
            {
                t0 = 0x12;
            }
                break;
            case 4:
            {
                t0 = 0x12;
            }
                break;
            case 6:
            {
                t0 = 0x13;
            }
                break;
            case 8:
            {
                t0 = 0x11;
            }
                break;
            case 10:
            {
                t0 = 0x12;
            }
                break;
            case 12:
            {
                t0 = 0x13;
            }
                break;
            case 14:
            {
                t0 = 0x11;
            }
                break;
            case 16:
            {
                t0 = 0x11;
            }
                break;
            case 18:
            {
                t0 = 0x11;
            }
                break;
            case 20:
            {
                t0 = 0x11;
            }
                break;
            case 22:
            {
                t0 = 0x13;
            }
                break;
            case 24:
            {
                t0 = 0x12;
            }
                break;
            case 26:
            {
                t0 = 0x12;
            }
                break;
            case 28:
            {
                t0 = 0x11;
            }
                break;
            case 30:
            {
                t0 = 0x12;
            }
                break;
            case 32:
            {
                t0 = 0x10;
            }
                break;
            default:
            {
                t0 = 0xF;
            }
                break;
        }
        return t0;
    }
    return 0x0;
}


