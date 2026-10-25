/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXF_GetStat(int);
int FUN_8c0eaf00(int, int, int);
int charaTexFreeAll(void);
int courtFraDrawNumber(int);
int entryClearJoined(void);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
extern int entryPortLeave();
int fileLoadClose(void);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int miniClearTables(void);
int miniEp2TargetSpawn(int);
int miniLobTargetSpawn(int);
int miniTargetSpawn(int, int, Stk3);
int miniWallTargetsInit(void);
float motionGetFrame(int);
int nlInitEvent(void);
int nlObjPut(int);
int nlObjPutSetGarbagedTexture(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int seFootSurface(float);
int selGridClear(void);
int set_event(int, int);
int sprAdvFree(void);
int sprListPut(int, int, int, float, float, float);
extern int sprPutAtAlpha();
int sprSet192Free(void);
int sprStartLoad(void);
int stageSoftReset(int);
int uniformTexRestore(int);
int vecMake(int, int, int, int, int, float, float, float);
int stageTexSetGarbaged(void);
int titleMenuLayout(int a4, int a5, int a6, int a7, float f4, float f5);
int courtFraDrawScoreboard(void);
int entrySelectInit(void);
int miniSetupObjects(void);
int cpuPointOverInput(int a4);
int evSkidMarkSpawn(int a4, int a5, int a6);

int stageTexSetGarbaged(void)
{
    int t18;
    int t28;
    int t38;
    int t48;
    int t58;
    int t67;
    int t76;
    int t86;
    int t96;
    int t106;
    int t116;
    int t125;
    int t134;
    int t144;
    int t153;
    int t162;
    int t170;
    int t172;
    int t176;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    L_8C0B1F98:;
    R11 = (0x0);
    R12 = (0xFFFFFFFF);
    R4 = (0x0);
    R5 = (0xA);
    R6 = (0x8C343F98);
    goto L_8C0B1FB4;
    L_8C0B1FB4:;
    if (((*(int *)((R6 + (R4 << 2)))) == 0)) goto L_8C0B1FE0;
    goto L_8C0B1FBE;
    L_8C0B1FBE:;
    R12 = (R4);
    goto L_8C0B1FE6;
    L_8C0B1FE6:;
    R10 = (0x8C0EA2A0);
    R13 = (0x8C0F1FF0);
    R14 = (0x8C188E88);
    if ((R12 != 2)) goto L_8C0B200E;
    goto L_8C0B1FF2;
    L_8C0B1FF2:;
    nlSetCommonTextureOffset(0x900);
    R8 = (R11);
    R9 = (0x8C186048);
    goto L_8C0B1FFC;
    L_8C0B1FFC:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t18 = (unsigned int)(R8 + 0x1) < (unsigned int)0x136;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t18) goto L_8C0B1FFC;
    goto L_8C0B200E;
    L_8C0B200E:;
    if ((R12 != 1)) goto L_8C0B2030;
    goto L_8C0B2014;
    L_8C0B2014:;
    nlSetCommonTextureOffset(0x500);
    R8 = (R11);
    R9 = (0x8C1865BC);
    goto L_8C0B201E;
    L_8C0B201E:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t28 = (unsigned int)(R8 + 0x1) < (unsigned int)0x11D;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t28) goto L_8C0B201E;
    goto L_8C0B2030;
    L_8C0B2030:;
    if ((R12 != 0)) goto L_8C0B2050;
    goto L_8C0B2034;
    L_8C0B2034:;
    nlSetCommonTextureOffset(0x700);
    R8 = (R11);
    R9 = (0x8C186AC8);
    goto L_8C0B203E;
    L_8C0B203E:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t38 = (unsigned int)(R8 + 0x1) < (unsigned int)0x12B;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t38) goto L_8C0B203E;
    goto L_8C0B2050;
    L_8C0B2050:;
    if ((R12 != 3)) goto L_8C0B2072;
    goto L_8C0B2056;
    L_8C0B2056:;
    nlSetCommonTextureOffset(0xB00);
    R8 = (R11);
    R9 = (0x8C18700C);
    goto L_8C0B2060;
    L_8C0B2060:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t48 = (unsigned int)(R8 + 0x1) < (unsigned int)0x119;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t48) goto L_8C0B2060;
    goto L_8C0B2072;
    L_8C0B2072:;
    R9 = (0xCB);
    if ((R12 != 5)) goto L_8C0B2098;
    goto L_8C0B207A;
    L_8C0B207A:;
    nlSetCommonTextureOffset(0x1600);
    *(unsigned int *)(((int)stk + 4)) = R11;
    R8 = (0x8C187A6C);
    goto L_8C0B2084;
    L_8C0B2084:;
    nlObjPutSetGarbagedTexture((*(int *)((R8 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t58 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t58 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t58 + 0x1) < (unsigned int)R9)) goto L_8C0B2084;
    goto L_8C0B2098;
    L_8C0B2098:;
    if ((R12 != 6)) goto L_8C0B20BE;
    goto L_8C0B209E;
    L_8C0B209E:;
    nlSetCommonTextureOffset(0x1700);
    *(unsigned int *)(((int)stk + 4)) = R11;
    R8 = (0x8C187DC4);
    goto L_8C0B20A8;
    L_8C0B20A8:;
    nlObjPutSetGarbagedTexture((*(int *)((R8 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t67 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t67 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t67 + 0x1) < (unsigned int)0xC5)) goto L_8C0B20A8;
    goto L_8C0B20BE;
    L_8C0B20BE:;
    if ((R12 != 7)) goto L_8C0B2126;
    goto L_8C0B20C4;
    L_8C0B20C4:;
    nlSetCommonTextureOffset(0x1900);
    *(unsigned int *)(((int)stk + 4)) = R11;
    goto L_8C0B2110;
    L_8C0B2110:;
    R8 = (0x8C1880F0);
    goto L_8C0B2112;
    L_8C0B2112:;
    nlObjPutSetGarbagedTexture((*(int *)((R8 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t76 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t76 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t76 + 0x1) < (unsigned int)R9)) goto L_8C0B2112;
    goto L_8C0B2126;
    L_8C0B2126:;
    if ((R12 != 8)) goto L_8C0B2148;
    goto L_8C0B212C;
    L_8C0B212C:;
    nlSetCommonTextureOffset(0x1E00);
    R8 = (R11);
    R9 = (0x8C188440);
    goto L_8C0B2136;
    L_8C0B2136:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t86 = (unsigned int)(R8 + 0x1) < (unsigned int)0xCA;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t86) goto L_8C0B2136;
    goto L_8C0B2148;
    L_8C0B2148:;
    if ((R12 != 9)) goto L_8C0B216A;
    goto L_8C0B214E;
    L_8C0B214E:;
    nlSetCommonTextureOffset(0x2400);
    R8 = (R11);
    R9 = (0x8C188794);
    goto L_8C0B2158;
    L_8C0B2158:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t96 = (unsigned int)(R8 + 0x1) < (unsigned int)0xE0;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t96) goto L_8C0B2158;
    goto L_8C0B216A;
    L_8C0B216A:;
    R8 = (0x8);
    if ((R12 != 10)) goto L_8C0B2190;
    goto L_8C0B2172;
    L_8C0B2172:;
    nlSetCommonTextureOffset(0x1080);
    *(unsigned int *)(((int)stk + 4)) = R11;
    R9 = (0x8C188B98);
    goto L_8C0B217C;
    L_8C0B217C:;
    nlObjPutSetGarbagedTexture((*(int *)((R9 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t106 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t106 + 0x1);
    R9 = ((R9 + 0x4));
    if (((unsigned int)(t106 + 0x1) < (unsigned int)R8)) goto L_8C0B217C;
    goto L_8C0B2190;
    L_8C0B2190:;
    R9 = (0x7);
    if ((R12 != 11)) goto L_8C0B21C0;
    goto L_8C0B2198;
    L_8C0B2198:;
    nlSetCommonTextureOffset(0x1100);
    *(unsigned int *)(((int)stk + 8)) = R11;
    *(unsigned int *)(((int)stk + 4)) = 0x8C188BB8;
    goto L_8C0B21A4;
    L_8C0B21A4:;
    nlObjPutSetGarbagedTexture((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t116 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t116 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    if (((unsigned int)(t116 + 0x1) < (unsigned int)R9)) goto L_8C0B21A4;
    goto L_8C0B21C0;
    L_8C0B21C0:;
    if ((R12 != 12)) goto L_8C0B21EE;
    goto L_8C0B21C6;
    L_8C0B21C6:;
    nlSetCommonTextureOffset(0x1180);
    *(unsigned int *)(((int)stk + 8)) = R11;
    *(unsigned int *)(((int)stk + 4)) = 0x8C188BD4;
    goto L_8C0B21D2;
    L_8C0B21D2:;
    nlObjPutSetGarbagedTexture((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t125 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t125 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    if (((unsigned int)(t125 + 0x1) < (unsigned int)R9)) goto L_8C0B21D2;
    goto L_8C0B21EE;
    L_8C0B21EE:;
    if ((R12 != 13)) goto L_8C0B221C;
    goto L_8C0B21F4;
    L_8C0B21F4:;
    nlSetCommonTextureOffset(0x1200);
    *(unsigned int *)(((int)stk + 8)) = R11;
    *(unsigned int *)(((int)stk + 4)) = 0x8C188BF0;
    goto L_8C0B2200;
    L_8C0B2200:;
    nlObjPutSetGarbagedTexture((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t134 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t134 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    if (((unsigned int)(t134 + 0x1) < (unsigned int)R8)) goto L_8C0B2200;
    goto L_8C0B221C;
    L_8C0B221C:;
    T_ = (((R12 == 14)));
    goto L_8C0B2250;
    L_8C0B2250:;
    if ((!T_)) goto L_8C0B227A;
    goto L_8C0B2252;
    L_8C0B2252:;
    nlSetCommonTextureOffset(0x1280);
    *(unsigned int *)(((int)stk + 8)) = R11;
    *(unsigned int *)(((int)stk + 4)) = 0x8C188C10;
    goto L_8C0B225E;
    L_8C0B225E:;
    nlObjPutSetGarbagedTexture((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t144 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t144 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    if (((unsigned int)(t144 + 0x1) < (unsigned int)R9)) goto L_8C0B225E;
    goto L_8C0B227A;
    L_8C0B227A:;
    if ((R12 != 15)) goto L_8C0B22A8;
    goto L_8C0B2280;
    L_8C0B2280:;
    nlSetCommonTextureOffset(0x1300);
    *(unsigned int *)(((int)stk + 8)) = R11;
    *(unsigned int *)(((int)stk + 4)) = 0x8C188C2C;
    goto L_8C0B228C;
    L_8C0B228C:;
    nlObjPutSetGarbagedTexture((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t153 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t153 + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    if (((unsigned int)(t153 + 0x1) < (unsigned int)R8)) goto L_8C0B228C;
    goto L_8C0B22A8;
    L_8C0B22A8:;
    if ((R12 != 16)) goto L_8C0B22CC;
    goto L_8C0B22AE;
    L_8C0B22AE:;
    nlSetCommonTextureOffset(0x1380);
    *(unsigned int *)(((int)stk + 4)) = R11;
    R8 = (0x8C188C4C);
    goto L_8C0B22B8;
    L_8C0B22B8:;
    nlObjPutSetGarbagedTexture((*(int *)((R8 + 0x0))));
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    t162 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t162 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t162 + 0x1) < (unsigned int)R9)) goto L_8C0B22B8;
    goto L_8C0B22CC;
    L_8C0B22CC:;
    R0 = (R12);
    if ((R12 != 17)) goto L_8C0B22EA;
    goto L_8C0B22D2;
    L_8C0B22D2:;
    nlSetCommonTextureOffset(0x1400);
    R12 = (0x8C188C68);
    goto L_8C0B22DA;
    L_8C0B22DA:;
    t170 = nlObjPutSetGarbagedTexture((*(int *)((R12 + 0x0))));
    t172 = (unsigned int)(R11 + 0x1) < (unsigned int)R9;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    R0 = (t170);
    R11 = ((R11 + 0x1));
    R12 = ((R12 + 0x4));
    if (t172) goto L_8C0B22DA;
    goto L_8C0B22EA;
    L_8C0B22EA:;
    return R0;
    L_8C0B1FE0:;
    t176 = (int)(R4 + 0x1) < (int)R5;
    R4 = ((R4 + 0x1));
    if (t176) goto L_8C0B1FB4;
    goto L_8C0B1FE6;
}

int titleMenuLayout(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t11;
    int t13;
    int t18;
    int t19;
    int t23;
    int t24;
    int t25;
    int t27;
    int t28;
    int t35;
    int t95;
    int t37;
    int t43;
    int t50;
    int t90;
    int t51;
    int t53;
    int t54;
    int t61;
    int t85;
    int t62;
    int t64;
    int t70;
    int t77;
    int t81;
    int stk[66];

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 68)) = (((int)stk + 48) + 0x24);
    vecMake(a4, a5, a6, a7, (((int)stk + 48) + 0x24), 0.0f, 0.0f, 0.449999988f);
    vecMake(0x0, 0x0, 0x0, 0x0, (0xC + (((int)stk + 48) + 0x24)), 256.0f, 0.0f, 0.449999988f);
    vecMake(0x0, 0x0, 0x0, 0x0, (0x18 + (((int)stk + 48) + 0x24)), 0.0f, 256.0f, 0.449999988f);
    vecMake(0x0, 0x0, 0x0, 0x0, (0x24 + (((int)stk + 48) + 0x24)), 256.0f, 256.0f, 0.449999988f);
    vecMake(0x0, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 48) + 0x24)), 512.0f, 0.0f, 0.449999988f);
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 48) + 0x24) + 0x3C);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 48) + 0x24) + 0x3C), 410.0f, 20.0f, 0.100000001f);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 48) + 0x24) + 0x48);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 48) + 0x24) + 0x48), 20.0f, 420.0f, 0.100000001f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 48) + 0x24) + 0x54), 25.0f, 113.0f, 0.200000003f);
    vecMake(0x0, 0x0, 0x0, 0x0, (0x60 + (((int)stk + 48) + 0x24)), 20.0f, 173.0f, 0.100000001f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 48) + 0x24) + 0x6C), 20.0f, 173.0f, 0.100000001f);
    *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 48) + 0x24) + 0x78);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 48) + 0x24) + 0x78), 200.0f, 239.0f, 0.100000001f);
    t11 = 0x0;
    for (;;) {
        *(float *)(((t11 + (((int)stk + 48) + 0x24)) + 0x8)) = ((*(float *)(((t11 + (((int)stk + 48) + 0x24)) + 0x8))) + f5);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x8C421F9C)) = *(struct mv3 *)((t11 + (((int)stk + 48) + 0x24))); }
        t13 = (t11 + (((int)stk + 48) + 0x24));
        t11 = (t11 + 0xC);
        if ((unsigned int)t11 >= (unsigned int)0x84) {
            break;
        }
    }
    t18 = 0x8C37DC1C;
    t19 = (*(int *)(((int)stk + 68)));
    for (;;) {
        if ((unsigned int)t19 >= (unsigned int)(*(int *)(((int)stk + 64)))) {
            break;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(t19); }
        t23 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(t18, 0x84, t13, 0x8C421F9C, *(Stk3 *)(t19), (*(float *)(((*(int *)(((int)stk + 60))) + 0x0))));
        t19 = (t19 + 0xC);
        t18 = (t18 + 0x50);
    }
    t24 = *(int *)(((int)stk + 52));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(t24); }
    t25 = *(int *)(((int)stk + 60));
    t27 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C37DF8C, 0x84, t13, 0x8C421F9C, *(Stk3 *)(t24), (*(float *)(((t25 + 0x8) + 0x0))));
    t28 = *(int *)(((int)stk + 52));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((t28 + 0x0))) + 162.0f), (*(float *)((t28 + 0x4))), (*(float *)((t28 + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
    t35 = *(int *)(((int)stk + 56));
    t95 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DFDC, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t25 + 0x8) + 0x0)))));
    if (t35 != 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((((int)stk + 48) + 0x24) + 0x54)); }
        t37 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DDAC, *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x54)), (*(float *)(((t25 + 0x8) + 0x0))));
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x0))) + 256.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
        t43 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DDFC, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t25 + 0x8) + 0x0))));
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x0))) + 512.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
        t50 = *(int *)(((int)stk + 56));
        t90 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DE4C, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t25 + 0x8) + 0x0)))));
        if (t50 == 0) {
            t51 = *(int *)(((int)stk + 48));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(t51); }
            t53 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DE9C, *(Stk3 *)(t51), (*(float *)(((t25 + 0x8) + 0x0))));
            t54 = *(int *)(((int)stk + 48));
            vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((t54 + 0x0))) + 256.0f), (*(float *)((t54 + 0x4))), (*(float *)((t54 + 0x8))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
            t61 = *(int *)(((int)stk + 56));
            t85 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DEEC, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t25 + 0x8) + 0x0)))));
            if (t61 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((((int)stk + 48) + 0x24) + 0x6C)); }
                t62 = *(int *)(((int)stk + 60));
                t64 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E11C, *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x6C)), (*(float *)(((t62 + 0x4) + 0x0))));
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x0))) + 256.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
                t70 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E16C, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t62 + 0x4) + 0x0))));
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x24), ((*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x0))) + 512.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
                t77 = *(int *)(((int)stk + 56));
                t81 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E1BC, *(Stk3 *)((((int)stk + 36) + 0x24)), (*(float *)(((t62 + 0x4) + 0x0)))));
                if (t77 == 0) {
                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 36), 256.0f, 305.0f, 0.100000001f);
                    t81 = (sprListPut(0x8C1D90C0, 0x1, 0xFF000000, (*(float *)(((t25 + 0x8) + 0x0))), 1.0f, 1.0f));
                }
                t85 = t81;
            }
            t90 = t85;
        }
        t95 = t90;
    }
    return t95;
}

int courtFraDrawScoreboard(void)
{
    int t4;
    int t5;
    int t6;
    int t21;
    int t24;
    int t17;
    int t18;
    int t33;
    int t34;
    int t55;
    int t115;
    int t133;
    int t28;
    int t31;
    int t13;
    float u38;
    int t99;
    int t100;
    int stk[22];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x1C);
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x1C) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x1C) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x1C) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 20)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 16)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        t21 = 0x3;
        t24 = 0x3;
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
        } else {
            t17 = 0x6;
            t18 = 0x5;
            if ((*(int *)0x8C287B18) == 3) {
                t17 = 0x5;
                t18 = 0x6;
            }
            t21 = t17;
            t24 = t18;
        }
        t28 = t21;
        t31 = t24;
    } else {
        t28 = (*(int *)0x8C287B18);
        t31 = (*(int *)0x8C287B1C);
    }
    t33 = (int)((int)t28 % (int)0x64);
    t34 = (int)((int)t31 % (int)0x64);
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        u38 = 146.960007f;
    } else {
        nlPushMatrix(0x0);
        u38 = 139.169998f;
    }
    nlTranslate(-10.1499996f, u38, -410.23999f);
    nlObjPut(0xC88C2E8);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C120C90;
        nlTranslate((*(float *)0x8C120C90), (*(float *)0x8C120C94), (*(float *)0x8C120C98));
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C18A708))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t55 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 4)) = (t55 + 0xC);
        nlTranslate((*(float *)(((t55 + 0xC) + 0x0))), (*(float *)(((t55 + 0xC) + 0x4))), (*(float *)(((t55 + 0xC) + 0x8))));
        t99 = 0x8C18A708;
        t100 = ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 24)) = 0x8C120CD8;
        nlTranslate((*(float *)0x8C120CD8), (*(float *)0x8C120CDC), (*(float *)0x8C120CE0));
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C18A750))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C120CE4;
        nlTranslate((*(float *)0x8C120CE4), (*(float *)0x8C120CE8), (*(float *)0x8C120CEC));
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + 0x8C18A750))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C120CF0;
        nlTranslate((*(float *)0x8C120CF0), (*(float *)0x8C120CF4), (*(float *)0x8C120CF8));
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18A750))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C120CFC;
        nlTranslate((*(float *)0x8C120CFC), (*(float *)0x8C120D00), (*(float *)0x8C120D04));
        t99 = 0x8C18A750;
        t100 = ((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t100 + t99))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C120CC0;
    nlTranslate((*(float *)0x8C120CC0), (*(float *)0x8C120CC4), (*(float *)0x8C120CC8));
    nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C18A7B4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t115 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t115 + 0xC);
    nlTranslate((*(float *)(((t115 + 0xC) + 0x0))), (*(float *)(((t115 + 0xC) + 0x4))), (*(float *)(((t115 + 0xC) + 0x8))));
    nlObjPut((*(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C18A7B4))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C120CA8;
        nlTranslate((*(float *)0x8C120CA8), (*(float *)0x8C120CAC), (*(float *)0x8C120CB0));
        courtFraDrawNumber(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t133 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
        courtFraDrawNumber(t34);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C120CA8;
        nlTranslate((*(float *)0x8C120CA8), (*(float *)0x8C120CAC), (*(float *)0x8C120CB0));
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C18A798))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C120CB4), (*(float *)0x8C120CB8), (*(float *)0x8C120CBC));
        if ((int)t34 < (int)0x6) {
            nlObjPut((*(int *)(((t34 << 2) + 0x8C18A798))));
        }
    }
    return (nlPopMatrix(0x1));
}

int entrySelectInit(void)
{
    int t1;
    int t6;
    int t68;
    int t8;
    int t9;
    int t26;
    int t39;
    int t41;
    int t42;
    int t49;
    int t50;
    int t58;
    int t67;
    int t75;
    int t76;
    int t78;
    int t88;
    int t89;
    int t90;
    int t91;
    int t98;
    int t99;
    int t107;
    int t122;
    int t134;
    int t137;
    int t138;
    int t153;
    int t145;
    int t10;
    int t40;
    int t55;
    int t56;
    int t57;
    int t62;
    int t63;
    int t64;
    int t140;
    int t77;
    int t104;
    int t105;
    int t106;
    int t111;
    int t112;
    int t113;
    int stk[15];

    nlInitEvent();
    *(unsigned int *)0x8C343AC8 = 0x0;
    t1 = *(int *)0x8C287D5C;
    if ((t1 != 0) && ((t1 != 1) && (t1 != 2))) {
        
        t153 = t1;
    } else {
        t6 = *(int *)0x8C287ADC;
        if (t6 != 2) {
            t68 = t6;
            if (t6 != 4) {
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x8)) = *(struct mv4 *)(0x8C110FEC); }
                nlInitEvent();
                *(unsigned int *)0x8C34A1EC = 0x0;
                t8 = charaTexFreeAll();
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t9 = t8;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                        break;
                    }
                    t9 = (*(int *)(((int)stk + 4)));
                    t9 = (t9 * 0x38);
                    t9 = (t9 + 0x8C343264);
                    t9 = (*(int *)((t9 + 0x30)));
                    if (t9 != -1) {
                        t9 = (uniformTexRestore((*(int *)(((int)stk + 4)))));
                    }
                    t10 = (*(int *)(((int)stk + 4)));
                    t10 = (t10 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t10;
                }
                sprSet192Free();
                sprAdvFree();
                fileLoadStart(0x8CA80000, 0x8C110DF4, 0x0);
                for (;;) {
                    if ((*(int *)0x8C34A1F0) == 1) {
                        break;
                    }
                    t26 = ADXF_GetStat((*(int *)0x8C34A1F8));
                    if (t26 == -3) {
                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                    }
                    if ((*(int *)(((int)stk + 8))) != 0) {
                        fileLoadClose();
                        *(unsigned int *)0x8C34A1EC = 0x0;
                        fileLoadStart(0x8CA80000, 0x8C110DF4, 0x0);
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                    }
                    fileLoadPoll();
                    FUN_8c0eaf00(0x0, 0x0, 0x0);
                    frameHookNop();
                    nlWaitVSync();
                }
                t39 = (sprStartLoad());
                t41 = 0x8C185298;
                t42 = (((int)stk + 4) + 0x8);
                for (;;) {
                    if ((unsigned int)t41 >= (unsigned int)0x8C1852A0) {
                        break;
                    }
                    t40 = (*(short *)((t41 + 0x0)));
                    t39 = (*(short *)0x8C343262);
                    t40 = (unsigned short)t40;
                    t39 = (unsigned short)t39;
                    if ((t39 & t40) != 0) {
                        *(unsigned int *)((t42 + 0x0)) = 0x1;
                    }
                    t41 = (t41 + 0x2);
                    t42 = (t42 + 0x4);
                }
                t49 = 0x0;
                for (;;) {
                    if ((int)t49 >= (int)0x4) {
                        break;
                    }
                    t50 = ((int (*)(int, int, int))(entryPortLeave))(t49, 0x1, 0x8C1852A0);
                    t49 = (t49 + 0x1);
                }
                selGridClear();
                entryInit();
                entryClearJoined();
                t58 = 0x0;
                for (;;) {
                    if ((int)t58 >= (int)0x4) {
                        break;
                    }
                    t56 = ((int)stk + 4);
                    t57 = t58;
                    t56 = (t56 + 0x8);
                    t57 = (t57 << 2);
                    t57 = (t57 + t56);
                    t55 = (*(int *)((t57 + 0x0)));
                    if (t55 != 0) {
                        entryPortJoin(t58, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    } else {
                        t62 = t55;
                        t63 = t56;
                        t64 = t57;
                    }
                    t55 = t62;
                    t58 = (t58 + 0x1);
                    t56 = t63;
                    t57 = t64;
                }
                t67 = nlInitEvent();
                *(unsigned int *)0x8C34A1EC = 0x0;
                *(unsigned int *)0x8C20D14C = 0x1;
                *(unsigned int *)0x8C20D150 = 0x4;
                t68 = t67;
            }
            t145 = t68;
        } else {
            if ((t1 != 0) && (t1 != 2)) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x8)) = *(struct mv4 *)(0x8C110FDC); }
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t75 = charaTexFreeAll();
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t76 = t75;
                for (;;) {
                    t78 = *(int *)(((int)stk + 4));
                    if ((int)t78 >= (int)0x4) {
                        break;
                    }
                    t76 = (*(int *)(((int)stk + 4)));
                    t76 = (t76 * 0x38);
                    t76 = (t76 + 0x8C343264);
                    t76 = (*(int *)((t76 + 0x30)));
                    if (t76 != -1) {
                        t76 = (uniformTexRestore((*(int *)(((int)stk + 4)))));
                    }
                    t77 = (*(int *)(((int)stk + 4)));
                    t77 = (t77 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t77;
                }
                t88 = t76;
                t89 = t78;
                t90 = 0x8C185298;
                t91 = (((int)stk + 4) + 0x8);
                for (;;) {
                    if ((unsigned int)t90 >= (unsigned int)0x8C1852A0) {
                        break;
                    }
                    t89 = (*(short *)((t90 + 0x0)));
                    t88 = (*(short *)0x8C343262);
                    t89 = (unsigned short)t89;
                    t88 = (unsigned short)t88;
                    if ((t88 & t89) != 0) {
                        *(unsigned int *)((t91 + 0x0)) = 0x1;
                    }
                    t90 = (t90 + 0x2);
                    t91 = (t91 + 0x4);
                }
                t98 = 0x0;
                for (;;) {
                    if ((int)t98 >= (int)0x4) {
                        break;
                    }
                    t99 = ((int (*)(int, int, int))(entryPortLeave))(t98, 0x1, 0x8C1852A0);
                    t98 = (t98 + 0x1);
                }
                selGridClear();
                entryInit();
                entryClearJoined();
                t107 = 0x0;
                for (;;) {
                    if ((int)t107 >= (int)0x4) {
                        break;
                    }
                    t105 = ((int)stk + 4);
                    t106 = t107;
                    t105 = (t105 + 0x8);
                    t106 = (t106 << 2);
                    t106 = (t106 + t105);
                    t104 = (*(int *)((t106 + 0x0)));
                    if (t104 != 0) {
                        entryPortJoin(t107, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    } else {
                        t111 = t104;
                        t112 = t105;
                        t113 = t106;
                    }
                    t104 = t111;
                    t107 = (t107 + 0x1);
                    t105 = t112;
                    t106 = t113;
                }
                nlInitEvent();
                *(unsigned int *)0x8C34A1EC = 0x0;
                sprSet192Free();
                sprAdvFree();
                fileLoadStart(0x8CA80000, 0x8C110DF4, 0x0);
                for (;;) {
                    if ((*(int *)0x8C34A1F0) == 1) {
                        break;
                    }
                    t122 = ADXF_GetStat((*(int *)0x8C34A1F8));
                    if (t122 == -3) {
                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                    }
                    if ((*(int *)(((int)stk + 8))) != 0) {
                        fileLoadClose();
                        *(unsigned int *)0x8C34A1EC = 0x0;
                        fileLoadStart(0x8CA80000, 0x8C110DF4, 0x0);
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                    }
                    fileLoadPoll();
                    FUN_8c0eaf00(0x0, 0x0, 0x0);
                    frameHookNop();
                    nlWaitVSync();
                }
                t134 = sprStartLoad();
                *(unsigned int *)0x8C20D14C = 0x1;
                *(unsigned int *)0x8C20D150 = 0x4;
                t140 = t134;
            } else {
                stageSoftReset(t1);
                *(unsigned int *)0x8C20D14C = 0x0;
                *(unsigned int *)0x8C20D150 = 0x3;
                t137 = (selGridClear());
                t138 = 0x0;
                for (;;) {
                    if ((int)t138 >= (int)0x4) {
                        break;
                    }
                    t137 = (((int (*)(int, int))(entryPortLeave))(t138, 0x1));
                    t138 = (t138 + 0x1);
                }
                t140 = t137;
            }
            t145 = t140;
        }
        t153 = t145;
    }
    return t153;
}

int miniSetupObjects(void)
{
    int t2;
    int t5;
    int t8;
    int t12;
    int t14;
    int t19;
    int t28;
    int t39;
    int t41;
    int t42;
    int t44;
    int t46;
    int t48;
    int t52;
    int t54;
    int t56;
    int t58;
    int t60;
    int t62;
    int t82;
    int t66;
    int t68;
    int t70;
    int t72;
    int t74;
    int t76;
    int t78;
    int t109;
    int t111;
    int t113;
    int t115;
    int t117;
    int t130;
    int t132;
    int t134;
    int t136;
    int t138;
    int t142;
    int t144;
    int t146;
    int t148;
    int t149;
    int t150;
    int t152;
    int t154;
    int t156;
    int t158;
    int t160;
    int t162;
    int t164;
    int t166;
    int t121;
    int t100;
    int t91;
    int stk[14];

    *(unsigned int *)(((int)stk + 20)) = 0x8C287ACC;
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x8)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0xC)) = 0x0;
    t2 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t2 + 0x10)) = (*(int *)(((((*(int *)((t2 + 0x4))) * 0x64) + 0x8C10BB08) + 0x48)));
    t5 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t5 + 0x3C)) = (*(int *)(((((*(int *)((t5 + 0x4))) * 0x64) + 0x8C10BB08) + 0x4C)));
    t8 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t8 + 0x14)) = (*(int *)(((((*(int *)((t8 + 0x4))) * 0x64) + 0x8C10BB08) + 0x50)));
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x38)) = 0x0;
    t12 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t12 + 0x8)) = ((*(int *)((t12 + 0x8))) | 0x800);
    t14 = 0x8C2FBF54;
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)0x8C2FBFD4) {
            break;
        }
        *(unsigned int *)((t14 + 0x0)) = 0xFFFFFFFF;
        t14 = (t14 + 0x4);
    }
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x28)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((*(int *)(((*(int *)0x8C2FBEF0) + 0x4))) * 0x64) + 0x8C10BB08) + 0x60)));
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)(*(int *)(((((*(int *)(((*(int *)0x8C2FBEF0) + 0x4))) * 0x64) + 0x8C10BB08) + 0x58)))) {
            break;
        }
        t28 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
        if (t28 == 4) {
            miniLobTargetSpawn(t19);
        } else {
            if (t28 == 7) {
                miniEp2TargetSpawn(t19);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
                miniTargetSpawn((*(int *)(((*(int *)(((int)stk + 16))) + 0x18))), (t19 + 0x2), *(Stk3 *)(0x8C1016D4));
            }
        }
        t39 = (t19 << 2);
        t19 = (t19 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1C);
        *(unsigned int *)((t39 + 0x8C2FBF54)) = 0x0;
    }
    t41 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t41 != 3) {
        if (t41 != 1) {
            if (t41 != 2) {
                if (t41 != 4) {
                    if (t41 != 0) {
                        if (t41 == 5) {
                            t42 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t42 + 0x8)) = (0x1 | (*(int *)((t42 + 0x8))));
                            t44 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t44 + 0x8)) = (0x2 | (*(int *)((t44 + 0x8))));
                            t46 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t46 + 0x8)) = (0x4 | (*(int *)((t46 + 0x8))));
                            t48 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t48 + 0x8)) = ((*(int *)((t48 + 0x8))) | 0x40);
                            *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
                            *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
                            t100 = 0x6C;
                        } else {
                            if (t41 == 6) {
                                t52 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t52 + 0x8)) = (0x1 | (*(int *)((t52 + 0x8))));
                                t54 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t54 + 0x8)) = (0x2 | (*(int *)((t54 + 0x8))));
                                t56 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t56 + 0x8)) = (0x4 | (*(int *)((t56 + 0x8))));
                                t58 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t58 + 0x8)) = (0x8 | (*(int *)((t58 + 0x8))));
                                t60 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t60 + 0x8)) = ((*(int *)((t60 + 0x8))) | 0x400);
                                t62 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t62 + 0x8)) = ((*(int *)((t62 + 0x8))) | 0x40);
                                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
                                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
                                t91 = 0x6C;
                            } else {
                                t82 = t41;
                                if (t41 == 7) {
                                    t66 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t66 + 0x8)) = (0x1 | (*(int *)((t66 + 0x8))));
                                    t68 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t68 + 0x8)) = (0x2 | (*(int *)((t68 + 0x8))));
                                    t70 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t70 + 0x8)) = (0x4 | (*(int *)((t70 + 0x8))));
                                    t72 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t72 + 0x8)) = (0x8 | (*(int *)((t72 + 0x8))));
                                    t74 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t74 + 0x8)) = ((*(int *)((t74 + 0x8))) | 0x40);
                                    t76 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t76 + 0x8)) = ((*(int *)((t76 + 0x8))) | 0x80);
                                    t78 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t78 + 0x8)) = ((*(int *)((t78 + 0x8))) | 0x100);
                                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
                                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
                                    t82 = 0x6C;
                                }
                                t91 = t82;
                            }
                            t100 = t91;
                        }
                        t121 = t100;
                    } else {
                        t109 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t109 + 0x8)) = (0x1 | (*(int *)((t109 + 0x8))));
                        t111 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t111 + 0x8)) = (0x2 | (*(int *)((t111 + 0x8))));
                        t113 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t113 + 0x8)) = (0x4 | (*(int *)((t113 + 0x8))));
                        t115 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t115 + 0x8)) = (0x8 | (*(int *)((t115 + 0x8))));
                        t117 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t117 + 0x8)) = ((*(int *)((t117 + 0x8))) | 0x40);
                        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
                        *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
                        t121 = 0x6C;
                    }
                    return t121;
                }
                t130 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t130 + 0x8)) = (0x1 | (*(int *)((t130 + 0x8))));
                t132 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t132 + 0x8)) = (0x2 | (*(int *)((t132 + 0x8))));
                t134 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t134 + 0x8)) = (0x4 | (*(int *)((t134 + 0x8))));
                t136 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t136 + 0x8)) = (0x8 | (*(int *)((t136 + 0x8))));
                t138 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t138 + 0x8)) = ((*(int *)((t138 + 0x8))) | 0x40);
                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
                *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
                return miniClearTables();
            }
            t142 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t142 + 0x8)) = (0x1 | (*(int *)((t142 + 0x8))));
            t144 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t144 + 0x8)) = (0x8 | (*(int *)((t144 + 0x8))));
            t146 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t146 + 0x8)) = ((*(int *)((t146 + 0x8))) | 0x40);
            t148 = t41;
            t149 = 0x0;
            for (;;) {
                if ((unsigned int)t149 >= (unsigned int)0x2C) {
                    break;
                }
                t148 = t149;
                t149 = (t149 + 0x4);
                *(unsigned int *)((0x8C2FC134 + t148)) = 0x0;
                *(unsigned int *)((0x8C2FC160 + t148)) = 0x0;
            }
            return t148;
        }
        t150 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t150 + 0x8)) = (0x1 | (*(int *)((t150 + 0x8))));
        t152 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t152 + 0x8)) = (0x8 | (*(int *)((t152 + 0x8))));
        t154 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t154 + 0x8)) = (0x4 | (*(int *)((t154 + 0x8))));
        t156 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t156 + 0x8)) = ((*(int *)((t156 + 0x8))) | 0x40);
        return miniWallTargetsInit();
    }
    t158 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t158 + 0x8)) = (0x1 | (*(int *)((t158 + 0x8))));
    t160 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t160 + 0x8)) = (0x2 | (*(int *)((t160 + 0x8))));
    t162 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t162 + 0x8)) = (0x4 | (*(int *)((t162 + 0x8))));
    t164 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t164 + 0x8)) = (0x8 | (*(int *)((t164 + 0x8))));
    t166 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t166 + 0x8)) = ((*(int *)((t166 + 0x8))) | 0x40);
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x68)) = 0xA;
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x6C)) = 0xA;
    return 0x6C;
}

int cpuPointOverInput(int a4)
{
    float u1;
    float u8;
    int t20;
    int t32;
    int t86;
    int t88;
    float u96;
    float u107;
    int t114;
    int t129;
    int t130;
    int t134;
    int t135;
    int t137;
    int t141;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    int T_;
    R4 = a4;
    L_8C03DB78:;
    u1 = *(float *)0x8C291F7C;
    R14 = (0x8C291F24);
    R5 = ((((*(int *)((R4 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    R6 = (0x8C287ACC);
    F4 = (u1);
    if ((!(0.0f > u1))) goto L_8C03DB9E;
    goto L_8C03DB9C;
    L_8C03DB9C:;
    F4 = ((-F4));
    goto L_8C03DB9E;
    L_8C03DB9E:;
    u8 = *(float *)((R14 + 0x60));
    R0 = (0x60);
    R7 = (0x0);
    F5 = (u8);
    if ((!(0.0f > u8))) goto L_8C03DBAC;
    goto L_8C03DBAA;
    L_8C03DBAA:;
    F5 = ((-F5));
    goto L_8C03DBAC;
    L_8C03DBAC:;
    if (((int)(*(int *)((R6 + R0))) <= 0)) goto L_8C03DBD6;
    goto L_8C03DBB2;
    L_8C03DBB2:;
    *(unsigned short *)((R5 + 0x20)) = R7;
    *(unsigned short *)((R5 + 0x1E)) = R7;
    *(unsigned char *)((R5 + 0x1D)) = R7;
    *(float *)((R5 + 0x4)) = 0.0f;
    R0 = (0xB60);
    if ((((*(int *)((R4 + 0xB60))) & 0x100) == 0)) goto L_8C03DBD2;
    goto L_8C03DBCE;
    L_8C03DBCE:;
    goto L_8C03DD98;
    L_8C03DD98:;
    *(unsigned short *)((R5 + 0x1E)) = 0x3;
    R0 = (0x3);
    goto L_8C03DEA8;
    L_8C03DEA8:;
    return R0;
    L_8C03DBD2:;
    goto L_8C03DEA8;
    L_8C03DBD6:;
    t20 = *(int *)((R4 + 0xB60));
    R0 = (t20);
    if (((t20 & 1) != 0)) goto L_8C03DBE2;
    goto L_8C03DBDE;
    L_8C03DBDE:;
    goto L_8C03DEA8;
    L_8C03DBE2:;
    if ((((*(int *)((R14 + 0x54))) & 4) != 0)) goto L_8C03DBEE;
    goto L_8C03DBEA;
    L_8C03DBEA:;
    goto L_8C03DD9E;
    L_8C03DD9E:;
    R0 = (0xB4);
    if (((*(short *)((R5 + 0xB4))) == 0)) goto L_8C03DDAA;
    goto L_8C03DDA6;
    L_8C03DDA6:;
    goto L_8C03DE90;
    L_8C03DE90:;
    if (((*(short *)((R5 + R0))) != 1)) goto L_8C03DE9C;
    goto L_8C03DE96;
    L_8C03DE96:;
    *(unsigned short *)((R5 + 0x20)) = R7;
    goto L_8C03DEA4;
    L_8C03DEA4:;
    *(unsigned short *)((R5 + 0x1E)) = R7;
    R0 = (R7);
    goto L_8C03DEA8;
    L_8C03DE9C:;
    *(unsigned short *)((R5 + 0xB4)) = ((*(short *)((R5 + 0xB4))) - 1);
    goto L_8C03DEA4;
    L_8C03DDAA:;
    t32 = *(int *)0x8C2FCC1C;
    R4 = (t32);
    F6 = (0.5f);
    F7 = (20.5f);
    F8 = (119.349998f);
    F9 = (139.350006f);
    if (((int)t32 >= (int)0x5)) goto L_8C03DDFC;
    goto L_8C03DDC4;
    L_8C03DDC4:;
    R0 = (0x74);
    if ((!(F4 > ((*(float *)((R6 + 0x74))) + F6)))) goto L_8C03DDE8;
    goto L_8C03DDCE;
    L_8C03DDCE:;
    R0 = (0x74);
    if ((F4 > ((*(float *)((R6 + 0x74))) + 40.5f))) goto L_8C03DE58;
    goto L_8C03DDDC;
    L_8C03DDDC:;
    if ((F4 > ((*(float *)((R6 + R0))) + F7))) goto L_8C03DE86;
    goto L_8C03DDE4;
    L_8C03DDE4:;
    goto L_8C03DEA8;
    L_8C03DE86:;
    *(unsigned short *)((R5 + 0xB4)) = (*(short *)((R5 + 0x118)));
    R0 = (0xB4);
    goto L_8C03DEA8;
    L_8C03DE58:;
    *(unsigned short *)((R5 + 0x1E)) = R7;
    *(unsigned short *)((R5 + 0x20)) = R7;
    *(unsigned short *)((R5 + 0xB4)) = 0x1;
    R0 = (0xB4);
    goto L_8C03DEA8;
    L_8C03DDE8:;
    if ((!(F5 > F8))) goto L_8C03DEA8;
    goto L_8C03DDEC;
    L_8C03DDEC:;
    R0 = (0x8C03DE48);
    if ((F5 > 159.350006f)) goto L_8C03DE58;
    goto L_8C03DDF4;
    L_8C03DDF4:;
    if ((!(F5 > F9))) goto L_8C03DEA8;
    goto L_8C03DDF8;
    L_8C03DDF8:;
    goto L_8C03DE86;
    L_8C03DDFC:;
    if (((int)R4 >= (int)0xA)) goto L_8C03DE74;
    goto L_8C03DE02;
    L_8C03DE02:;
    R0 = (0x74);
    if ((!(F4 > ((*(float *)((R6 + 0x74))) + F6)))) goto L_8C03DE50;
    goto L_8C03DE0C;
    L_8C03DE0C:;
    if ((F4 > ((*(float *)((R6 + R0))) + F7))) goto L_8C03DE58;
    goto L_8C03DE14;
    L_8C03DE14:;
    R0 = (0x74);
    if ((!(F4 > ((*(float *)((R6 + 0x74))) + 10.5f)))) goto L_8C03DEA8;
    goto L_8C03DE22;
    L_8C03DE22:;
    goto L_8C03DE86;
    L_8C03DE50:;
    if ((!(F5 > F8))) goto L_8C03DEA8;
    goto L_8C03DE54;
    L_8C03DE54:;
    if ((!(F5 > F9))) goto L_8C03DE68;
    goto L_8C03DE58;
    L_8C03DE68:;
    R0 = (0x8C03DF18);
    if ((F5 > (*(float *)0x8C03DF18))) goto L_8C03DE86;
    goto L_8C03DE70;
    L_8C03DE70:;
    goto L_8C03DEA8;
    L_8C03DE74:;
    if ((F4 > ((*(float *)((R6 + 0x74))) + F6))) goto L_8C03DE86;
    goto L_8C03DE7E;
    L_8C03DE7E:;
    R0 = (0x8C03DF18);
    if ((!(F5 > (*(float *)0x8C03DF18)))) goto L_8C03DEA8;
    goto L_8C03DE86;
    L_8C03DBEE:;
    if ((((*(int *)0x8C287B3C) & 128) == 0)) goto L_8C03DC2A;
    goto L_8C03DBF6;
    L_8C03DBF6:;
    R0 = (0xB4);
    if (((*(short *)((R5 + 0xB4))) != 0)) goto L_8C03DC10;
    goto L_8C03DBFE;
    L_8C03DBFE:;
    *(unsigned short *)((R5 + R0)) = 0x1E;
    if (((*(int *)((R4 + 0xA24))) != 1)) goto L_8C03DC10;
    goto L_8C03DC0A;
    L_8C03DC0A:;
    *(unsigned int *)((R4 + 0xA24)) = 0x4;
    goto L_8C03DC10;
    L_8C03DC10:;
    if (((*(short *)((R5 + 0xB4))) != 1)) goto L_8C03DC22;
    goto L_8C03DC18;
    L_8C03DC18:;
    *(unsigned short *)((R5 + 0x1E)) = R7;
    *(unsigned short *)((R5 + 0x20)) = R7;
    goto L_8C03DC2A;
    L_8C03DC2A:;
    if ((((*(int *)0x8C287B3C) & 0x4000) == 0)) goto L_8C03DC94;
    goto L_8C03DC34;
    L_8C03DC34:;
    *(unsigned int *)(((int)stk + 4)) = (R6 + 0x44);
    t86 = (int)((int)(((*(int *)(((R6 + 0x44) + 0x0))) + (*(int *)(((R6 + 0x44) + 0x4)))) + 0x6) % (int)0x6);
    t88 = (int)((unsigned int)((int)((unsigned int)t86 + (unsigned int)0x0)) + ((((int)0x0 > (int)t86)) ? 1u : 0u));
    R0 = (((t88 >> 1) + 0x2));
    if (((int)((t88 >> 1) + 0x2) < 0)) goto L_8C03DC5C;
    goto L_8C03DC58;
    L_8C03DC58:;
    R0 = ((R0 & 0x1));
    goto L_8C03DC66;
    L_8C03DC66:;
    R13 = (((((-R0) + 0x1) << 1) - 1));
    goto L_8C03DCF2;
    L_8C03DCF2:;
    F6 = (41.6500015f);
    if ((F4 > 41.6500015f)) goto L_8C03DD2A;
    goto L_8C03DCFA;
    L_8C03DCFA:;
    u96 = *(float *)((R14 + 0x58));
    F2 = (u96);
    F3 = (0.0f);
    if ((!(u96 > 0.0f))) goto L_8C03DD08;
    goto L_8C03DD04;
    L_8C03DD04:;
    R2 = (0x1);
    goto L_8C03DD12;
    L_8C03DD12:;
    if ((R2 != R13)) goto L_8C03DD1E;
    goto L_8C03DD16;
    L_8C03DD16:;
    if ((F4 > 0.5f)) goto L_8C03DD2A;
    goto L_8C03DD1E;
    L_8C03DD1E:;
    R0 = (0x8C03DD58);
    if ((F5 > 64.5f)) goto L_8C03DD2A;
    goto L_8C03DD26;
    L_8C03DD26:;
    goto L_8C03DEA8;
    L_8C03DD2A:;
    if ((!(F4 > F6))) goto L_8C03DD3A;
    goto L_8C03DD2E;
    L_8C03DD2E:;
    if ((!(F4 > 46.6500015f))) goto L_8C03DD3A;
    goto L_8C03DD36;
    L_8C03DD36:;
    goto L_8C03DEA4;
    L_8C03DD3A:;
    u107 = *(float *)((R14 + 0x58));
    F2 = (u107);
    F3 = (0.0f);
    if ((!(u107 > 0.0f))) goto L_8C03DD48;
    goto L_8C03DD44;
    L_8C03DD44:;
    R2 = (0x1);
    goto L_8C03DD62;
    L_8C03DD62:;
    if ((R2 != R13)) goto L_8C03DD72;
    goto L_8C03DD66;
    L_8C03DD66:;
    if ((!(F4 > 5.5f))) goto L_8C03DD72;
    goto L_8C03DD6E;
    L_8C03DD6E:;
    goto L_8C03DEA4;
    L_8C03DD72:;
    t114 = *(int *)((R14 + 0x4C));
    R0 = (t114);
    if ((t114 == 1)) goto L_8C03DD7E;
    goto L_8C03DD7A;
    L_8C03DD7A:;
    goto L_8C03DEA8;
    L_8C03DD7E:;
    R0 = (0x5C);
    if (((*(int *)((R6 + 0x5C))) != 0)) goto L_8C03DD8A;
    goto L_8C03DD86;
    L_8C03DD86:;
    goto L_8C03DEA8;
    L_8C03DD8A:;
    if ((((*(int *)((R4 + 0xB60))) & 0x100) != 0)) goto L_8C03DD98;
    goto L_8C03DD94;
    L_8C03DD94:;
    goto L_8C03DEA4;
    L_8C03DD48:;
    if ((!(F3 > F2))) goto L_8C03DD60;
    goto L_8C03DD4C;
    L_8C03DD4C:;
    R2 = (0xFFFFFFFF);
    goto L_8C03DD62;
    L_8C03DD60:;
    R2 = (0x0);
    goto L_8C03DD62;
    L_8C03DD08:;
    if ((!(F3 > F2))) goto L_8C03DD10;
    goto L_8C03DD0C;
    L_8C03DD0C:;
    R2 = (0xFFFFFFFF);
    goto L_8C03DD12;
    L_8C03DD10:;
    R2 = (0x0);
    goto L_8C03DD12;
    L_8C03DC5C:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C03DC66;
    L_8C03DC94:;
    *(unsigned int *)(((int)stk + 4)) = (R6 + 0x44);
    t129 = *(int *)(((R6 + 0x44) + 0x0));
    t130 = *(int *)(((R6 + 0x44) + 0x4));
    R0 = (((t129 + t130) + 0x2));
    if (((int)((t129 + t130) + 0x2) < 0)) goto L_8C03DCAC;
    goto L_8C03DCA8;
    L_8C03DCA8:;
    R0 = ((R0 & 0x1));
    goto L_8C03DCB6;
    L_8C03DCB6:;
    *(unsigned int *)(((int)stk + 4)) = (R6 + 0x34);
    t134 = *(int *)(((R6 + 0x34) + 0x0));
    t135 = *(int *)(((R6 + 0x34) + 0x4));
    t137 = (int)((unsigned int)((int)((unsigned int)(t134 + t135) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t134 + t135))) ? 1u : 0u));
    t141 = ((-(R0 << 1)) + 0x1);
    R0 = (((t137 >> 1) + 0x2));
    R13 = t141;
    if (((int)((t137 >> 1) + 0x2) < 0)) goto L_8C03DCDE;
    goto L_8C03DCDA;
    L_8C03DCDA:;
    R0 = ((R0 & 0x1));
    goto L_8C03DCE8;
    L_8C03DCE8:;
    R13 = ((R13 * ((-(R0 << 1)) + 0x1)));
    goto L_8C03DCF2;
    L_8C03DCDE:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C03DCE8;
    L_8C03DCAC:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C03DCB6;
    L_8C03DC22:;
    *(unsigned short *)((R5 + 0xB4)) = ((*(short *)((R5 + 0xB4))) - 1);
    goto L_8C03DC2A;
}

int evSkidMarkSpawn(int a4, int a5, int a6)
{
    int t536;
    int t511;
    int t49;
    int t499;
    int t62;
    int t487;
    int t475;
    int t463;
    int t340;
    int t114;
    int t120;
    int t126;
    float u127;
    int t130;
    float t169;
    float t183;
    float u184;
    float t185;
    int t186;
    float u203;
    int t316;
    int t304;
    int t214;
    int t220;
    float u221;
    int t224;
    float t263;
    float t277;
    float u278;
    float t279;
    int t280;
    float u297;
    int t352;
    float u353;
    int t358;
    float t397;
    float t412;
    float u413;
    float t414;
    int t415;
    float u432;
    int t523;
    int t439;
    int t328;
    int t125;
    int t171;
    int t165;
    int t160;
    int t155;
    int t150;
    int t145;
    int t140;
    int t135;
    int t219;
    int t265;
    int t259;
    int t254;
    int t249;
    int t244;
    int t239;
    int t234;
    int t229;
    int t399;
    int t356;
    int t393;
    int t388;
    int t383;
    int t378;
    int t373;
    int t368;
    int t363;
    int t455;

    t536 = 0x8C0DA450;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        if (a5 == 0) {
            *(unsigned int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2))) = (*(int *)(((0xB58 + a4) + 0x0)));
            *(float *)((((*(int *)((a4 + 0xB5C))) << 2) + 0x8C40C2DC)) = 0.0f;
            t523 = 0x8C40C2DC;
        } else {
            t511 = 0x8C1D5690;
            if ((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D5690))) == 0) {
            } else {
                t49 = *(int *)0x8C20D14C;
                t499 = t49;
                if (t49 == 1) {
                } else {
                    t62 = *(int *)0x8C287B3C;
                    t487 = t62;
                    if ((t62 & 8) != 0) {
                    } else {
                        t475 = 0x60;
                        if ((int)(*(int *)0x8C287B2C) > 0) {
                        } else {
                            t463 = 0x60;
                            if ((int)(*(int *)0x8C1D56D8) >= (int)0x1E) {
                            } else {
                                if (a6 == 0) {
                                    t340 = 0xB58;
                                    if ((*(int *)((a4 + 0xB58))) == (*(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2))))) {
                                    } else {
                                        t114 = *(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2)));
                                        if (((int)t114 >= (int)0x31) && ((int)t114 <= (int)0x38)) {
                                            t120 = *(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2)));
                                            if (((int)t120 >= (int)0x31) && ((int)t120 <= (int)0x38)) {
                                                t125 = (*(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2))));
                                            } else {
                                                t125 = (*(int *)((a4 + 0xB58)));
                                            }
                                            t126 = set_event(0x38, 0x8C0DA350);
                                            u127 = *(float *)0x8C23D204;
                                            *(unsigned int *)((t126 + 0x34)) = (int)(1200.0f / u127);
                                            *(unsigned int *)((t126 + 0x30)) = (int)(1200.0f / u127);
                                            *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                            if (a6 == 0) {
                                                if (t125 != 49) {
                                                    if (t125 != 50) {
                                                        if (t125 != 51) {
                                                            if (t125 != 52) {
                                                                if (t125 != 53) {
                                                                    if (t125 != 54) {
                                                                        if (t125 != 55) {
                                                                            t130 = 0x8C1D56D8;
                                                                            if (t125 != 56) {
                                                                            } else {
                                                                                *(unsigned int *)((t126 + 0x24)) = 0x1;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                t130 = 0xFFFFE000;
                                                                            }
                                                                            t135 = t130;
                                                                        } else {
                                                                            *(unsigned int *)((t126 + 0x24)) = 0x0;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                            t135 = 0x4000;
                                                                        }
                                                                        t140 = t135;
                                                                    } else {
                                                                        *(unsigned int *)((t126 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t140 = 0x2000;
                                                                    }
                                                                    t145 = t140;
                                                                } else {
                                                                    *(unsigned int *)((t126 + 0x24)) = 0x1;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                    t145 = 0x0;
                                                                }
                                                                t150 = t145;
                                                            } else {
                                                                *(unsigned int *)((t126 + 0x24)) = 0x1;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t150 = 0xFFFFE000;
                                                            }
                                                            t155 = t150;
                                                        } else {
                                                            *(unsigned int *)((t126 + 0x24)) = 0x1;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t155 = 0x4000;
                                                        }
                                                        t160 = t155;
                                                    } else {
                                                        *(unsigned int *)((t126 + 0x24)) = 0x0;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                        t160 = 0x2000;
                                                    }
                                                    t165 = t160;
                                                } else {
                                                    *(unsigned int *)((t126 + 0x24)) = 0x0;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                    t165 = 0x0;
                                                }
                                                *(float *)((t126 + 0x2C)) = 1.20000005f;
                                                *(float *)((t126 + 0x28)) = 0.699999988f;
                                                t171 = t165;
                                            } else {
                                                t169 = nlRandom();
                                                *(unsigned int *)((t126 + 0x24)) = (int)(t169 * 1.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t126 + 0x14)) = *(struct mv3 *)((((((int)(t169 * 1.0f) << 1) + (int)(t169 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                                *(float *)((t126 + 0x2C)) = 1.0f;
                                                *(float *)((t126 + 0x28)) = 0.5f;
                                                t171 = 0x0;
                                            }
                                            *(float *)((t126 + 0x18)) = (*(float *)0x8C0DA758);
                                            t183 = nlRandom();
                                            u184 = *(float *)0x8C0DA75C;
                                            t185 = nlRandom();
                                            t186 = 0xFFFFFFFF;
                                            if ((int)(t185 * (1.0f + 1.0f)) == 0) {
                                                t186 = 0x1;
                                            }
                                            *(unsigned int *)((t126 + 0x20)) = (((*(short *)((a4 + 0xB04))) + t171) + ((int)(t183 * u184) * t186));
                                            if ((*(int *)0x8C1891E8) == 0) {
                                                *(float *)((t126 + 0x2C)) = ((*(float *)((t126 + 0x2C))) * 1.5f);
                                            }
                                            if (1.0f > (*(float *)((t126 + 0x2C)))) {
                                                *(float *)((t126 + 0x2C)) = 1.0f;
                                            }
                                            if ((*(float *)((t126 + 0x2C))) > (1.0f + 1.0f)) {
                                                *(float *)((t126 + 0x2C)) = (*(float *)0x8C0DA768);
                                            }
                                            u203 = *(float *)0x8C0DA76C;
                                            if (u203 > (*(float *)((t126 + 0x28)))) {
                                                *(float *)((t126 + 0x28)) = u203;
                                            }
                                            if ((*(float *)((t126 + 0x28))) > 0.5f) {
                                                *(float *)((t126 + 0x28)) = 0.5f;
                                            }
                                            t328 = (seFootSurface((*(float *)((t126 + 0x2C)))));
                                        } else {
                                            t316 = 0xB58;
                                            if ((int)(*(int *)((a4 + 0xB58))) < (int)0x31) {
                                            } else {
                                                t304 = 0xB58;
                                                if ((int)(*(int *)((a4 + 0xB58))) > (int)0x38) {
                                                } else {
                                                    t214 = *(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2)));
                                                    if (((int)t214 >= (int)0x31) && ((int)t214 <= (int)0x38)) {
                                                        t219 = (*(int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2))));
                                                    } else {
                                                        t219 = (*(int *)((a4 + 0xB58)));
                                                    }
                                                    t220 = set_event(0x38, 0x8C0DA350);
                                                    u221 = *(float *)0x8C23D204;
                                                    *(unsigned int *)((t220 + 0x34)) = (int)(1200.0f / u221);
                                                    *(unsigned int *)((t220 + 0x30)) = (int)(1200.0f / u221);
                                                    *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                                    if (a6 == 0) {
                                                        if (t219 != 49) {
                                                            if (t219 != 50) {
                                                                if (t219 != 51) {
                                                                    if (t219 != 52) {
                                                                        if (t219 != 53) {
                                                                            if (t219 != 54) {
                                                                                if (t219 != 55) {
                                                                                    t224 = 0x8C1D56D8;
                                                                                    if (t219 != 56) {
                                                                                    } else {
                                                                                        *(unsigned int *)((t220 + 0x24)) = 0x1;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                        t224 = 0xFFFFE000;
                                                                                    }
                                                                                    t229 = t224;
                                                                                } else {
                                                                                    *(unsigned int *)((t220 + 0x24)) = 0x0;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                                    t229 = 0x4000;
                                                                                }
                                                                                t234 = t229;
                                                                            } else {
                                                                                *(unsigned int *)((t220 + 0x24)) = 0x1;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                t234 = 0x2000;
                                                                            }
                                                                            t239 = t234;
                                                                        } else {
                                                                            *(unsigned int *)((t220 + 0x24)) = 0x1;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                            t239 = 0x0;
                                                                        }
                                                                        t244 = t239;
                                                                    } else {
                                                                        *(unsigned int *)((t220 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t244 = 0xFFFFE000;
                                                                    }
                                                                    t249 = t244;
                                                                } else {
                                                                    *(unsigned int *)((t220 + 0x24)) = 0x1;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                    t249 = 0x4000;
                                                                }
                                                                t254 = t249;
                                                            } else {
                                                                *(unsigned int *)((t220 + 0x24)) = 0x0;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t254 = 0x2000;
                                                            }
                                                            t259 = t254;
                                                        } else {
                                                            *(unsigned int *)((t220 + 0x24)) = 0x0;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t259 = 0x0;
                                                        }
                                                        *(float *)((t220 + 0x2C)) = 1.20000005f;
                                                        *(float *)((t220 + 0x28)) = 0.699999988f;
                                                        t265 = t259;
                                                    } else {
                                                        t263 = nlRandom();
                                                        *(unsigned int *)((t220 + 0x24)) = (int)(t263 * 1.0f);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t220 + 0x14)) = *(struct mv3 *)((((((int)(t263 * 1.0f) << 1) + (int)(t263 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                                        *(float *)((t220 + 0x2C)) = 1.0f;
                                                        *(float *)((t220 + 0x28)) = 0.5f;
                                                        t265 = 0x0;
                                                    }
                                                    *(float *)((t220 + 0x18)) = (*(float *)0x8C0DA758);
                                                    t277 = nlRandom();
                                                    u278 = *(float *)0x8C0DA75C;
                                                    t279 = nlRandom();
                                                    t280 = 0xFFFFFFFF;
                                                    if ((int)(t279 * (1.0f + 1.0f)) == 0) {
                                                        t280 = 0x1;
                                                    }
                                                    *(unsigned int *)((t220 + 0x20)) = (((*(short *)((a4 + 0xB04))) + t265) + ((int)(t277 * u278) * t280));
                                                    if ((*(int *)0x8C1891E8) == 0) {
                                                        *(float *)((t220 + 0x2C)) = ((*(float *)((t220 + 0x2C))) * 1.5f);
                                                    }
                                                    if (1.0f > (*(float *)((t220 + 0x2C)))) {
                                                        *(float *)((t220 + 0x2C)) = 1.0f;
                                                    }
                                                    if ((*(float *)((t220 + 0x2C))) > (1.0f + 1.0f)) {
                                                        *(float *)((t220 + 0x2C)) = (*(float *)0x8C0DA768);
                                                    }
                                                    u297 = *(float *)0x8C0DA76C;
                                                    if (u297 > (*(float *)((t220 + 0x28)))) {
                                                        *(float *)((t220 + 0x28)) = u297;
                                                    }
                                                    if ((*(float *)((t220 + 0x28))) > 0.5f) {
                                                        *(float *)((t220 + 0x28)) = 0.5f;
                                                    }
                                                    t304 = (seFootSurface((*(float *)((t220 + 0x2C)))));
                                                }
                                                t316 = t304;
                                            }
                                            t328 = t316;
                                        }
                                        t340 = t328;
                                    }
                                    t439 = t340;
                                } else {
                                    t352 = set_event(0x38, 0x8C0DA350);
                                    u353 = *(float *)0x8C23D204;
                                    *(unsigned int *)((t352 + 0x34)) = (int)(1200.0f / u353);
                                    *(unsigned int *)((t352 + 0x30)) = (int)(1200.0f / u353);
                                    *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                    if (a6 == 0) {
                                        if (t356 != 49) {
                                            if (t356 != 50) {
                                                if (t356 != 51) {
                                                    if (t356 != 52) {
                                                        if (t356 != 53) {
                                                            if (t356 != 54) {
                                                                if (t356 != 55) {
                                                                    t358 = 0x8C1D56D8;
                                                                    if (t356 != 56) {
                                                                    } else {
                                                                        *(unsigned int *)((t352 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t358 = 0xFFFFE000;
                                                                    }
                                                                    t363 = t358;
                                                                } else {
                                                                    *(unsigned int *)((t352 + 0x24)) = 0x0;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                    t363 = 0x4000;
                                                                }
                                                                t368 = t363;
                                                            } else {
                                                                *(unsigned int *)((t352 + 0x24)) = 0x1;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t368 = 0x2000;
                                                            }
                                                            t373 = t368;
                                                        } else {
                                                            *(unsigned int *)((t352 + 0x24)) = 0x1;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t373 = 0x0;
                                                        }
                                                        t378 = t373;
                                                    } else {
                                                        *(unsigned int *)((t352 + 0x24)) = 0x1;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                        t378 = 0xFFFFE000;
                                                    }
                                                    t383 = t378;
                                                } else {
                                                    *(unsigned int *)((t352 + 0x24)) = 0x1;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                    t383 = 0x4000;
                                                }
                                                t388 = t383;
                                            } else {
                                                *(unsigned int *)((t352 + 0x24)) = 0x0;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                t388 = 0x2000;
                                            }
                                            t393 = t388;
                                        } else {
                                            *(unsigned int *)((t352 + 0x24)) = 0x0;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                            t393 = 0x0;
                                        }
                                        *(float *)((t352 + 0x2C)) = 1.20000005f;
                                        *(float *)((t352 + 0x28)) = 0.699999988f;
                                        t399 = t393;
                                    } else {
                                        t397 = nlRandom();
                                        *(unsigned int *)((t352 + 0x24)) = (int)(t397 * 1.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t352 + 0x14)) = *(struct mv3 *)((((((int)(t397 * 1.0f) << 1) + (int)(t397 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                        *(float *)((t352 + 0x2C)) = 1.0f;
                                        *(float *)((t352 + 0x28)) = 0.5f;
                                        t399 = 0x0;
                                    }
                                    *(float *)((t352 + 0x18)) = (*(float *)0x8C0DA758);
                                    t412 = nlRandom();
                                    u413 = *(float *)0x8C0DA75C;
                                    t414 = nlRandom();
                                    t415 = 0xFFFFFFFF;
                                    if ((int)(t414 * (1.0f + 1.0f)) == 0) {
                                        t415 = 0x1;
                                    }
                                    *(unsigned int *)((t352 + 0x20)) = (((*(short *)((a4 + 0xB04))) + t399) + ((int)(t412 * u413) * t415));
                                    if ((*(int *)0x8C1891E8) == 0) {
                                        *(float *)((t352 + 0x2C)) = ((*(float *)((t352 + 0x2C))) * 1.5f);
                                    }
                                    if (1.0f > (*(float *)((t352 + 0x2C)))) {
                                        *(float *)((t352 + 0x2C)) = 1.0f;
                                    }
                                    if ((*(float *)((t352 + 0x2C))) > (1.0f + 1.0f)) {
                                        *(float *)((t352 + 0x2C)) = (*(float *)0x8C0DA768);
                                    }
                                    u432 = *(float *)0x8C0DA76C;
                                    if (u432 > (*(float *)((t352 + 0x28)))) {
                                        *(float *)((t352 + 0x28)) = u432;
                                    }
                                    if ((*(float *)((t352 + 0x28))) > 0.5f) {
                                        *(float *)((t352 + 0x28)) = 0.5f;
                                    }
                                    t439 = (seFootSurface((*(float *)((t352 + 0x2C)))));
                                }
                                if (a6 == 0) {
                                    *(unsigned int *)((0x8C40C2CC + ((*(int *)((a4 + 0xB5C))) << 2))) = (*(int *)(((0xB58 + a4) + 0x0)));
                                    *(float *)(((0x8C40C2DC + ((*(int *)((a4 + 0xB5C))) << 2)) + 0x0)) = (motionGetFrame(a4));
                                } else {
                                    t455 = t439;
                                }
                                t463 = t455;
                            }
                            t475 = t463;
                        }
                        t487 = t475;
                    }
                    t499 = t487;
                }
                t511 = t499;
            }
            t523 = t511;
        }
        t536 = t523;
    }
    return t536;
}
