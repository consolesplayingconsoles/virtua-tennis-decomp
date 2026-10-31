/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
int ADXT_GetStat(int);
int ADXT_StartAfs(int, int, int);
int ADXT_Stop(int);
int BupRequestSave(int, int, int, int);
int FUN_8c0eaf00(int, int, int);
int cursorBoxPut(int, Stk3, float, float, float);
int logoWaveDraw(float);
float mathLerp(float, float, float);
float nlCos(int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int optionBarPut(Stk1);
int optionQuadPut(int, Stk3);
int padDirRepeat(int, int);
int padVibRequest(int, int, int, int, int, int);
int rankDispExec(int, int, int, int, int, int, int, int, int, int, int, int);
int rankDispLoad(void);
int rankSprTexFree(void);
int screenQuadPut(int, Stk6, float);
int sndDummy0(void);
int sndDummy1(void);
int sndSeCursor(void);
extern int sprListPut();
int sprPutCentered(int, int, int, int, int, float, float);
int strmBgmSetVol(int, int, int, int, int, int, int);
int strmSetStereo(int);
int strmVoiceSetVol(int);
int syCfgGetSoundMode(int);
int syCfgSetSoundMode(int);
int uiPanelPut(int, float);
int uiScanlinesPut(float);
Stk3 vecMake(float, float, float);
int winDrawA(int, int, float, float, float);
int FUN_8c0da9d0(int a4);

int FUN_8c0da9d0(int a4)
{
    int stk[99];
    register int t0;
    register int t2;
    register int t12;
    register int t14;
    register int t26;
    register int t28;
    register int t39;
    register int t67;
    register float u72;
    register int t77;
    register int t113;
    register float u123;
    register float u131;
    register int t132;
    register float u141;
    register int t142;
    register int t153;
    register int t160;
    register int t195;
    register int t199;
    register float u205;
    register int t214;
    register int t224;
    register int t234;
    register int t241;
    register int t276;
    register int t280;
    register float u286;
    register int t295;
    register int t305;
    register int t315;
    register int t322;
    register float u325;
    register int t333;
    register int t340;
    register int t341;
    register int t347;
    register int t348;
    register int t377;
    register int t381;
    register float u387;
    register int t396;
    register int t406;
    register int t416;
    register int t423;
    register float u426;
    register int t433;
    register float u442;
    register int t446;
    register int t451;
    register int t454;
    register float u460;
    register int t467;
    register int t472;
    register int t473;
    register int t474;
    register int t476;
    register int t481;
    register int t483;
    register int t484;
    register float u487;
    register int t494;
    register int t499;
    register int t500;
    register int t501;
    register int t503;
    register int t509;
    register int t511;
    register int t512;
    register int t537;
    register float u551;
    register int t560;
    register int t570;
    register int t580;
    register int t587;
    register float t602;
    register int t615;
    register int t650;
    register int t674;
    register int t675;
    register int t683;
    register int t744;
    register int t700;
    register int t705;
    register int t709;
    register int t723;
    register int t711;
    register int t718;
    register int t715;
    register int t736;
    register int t755;
    register int t761;
    register int t780;
    register int t800;
    register int t831;
    register int t863;
    register int t884;
    register int t907;
    register int t987;
    register int t1021;
    register int t1057;
    register int t1086;
    register int t1108;
    register int t1203;
    register int t1205;
    register int t1260;
    register int t1262;
    register int t1278;
    register int t1280;
    register int t1297;
    register int t1299;
    register int t1311;
    register int t1319;
    register int t1340;
    register int t1370;
    register int t1378;
    register int t3;
    register int t15;
    register int t69;
    register int t542;
    register float u608;
    register int t620;
    register int t621;
    register int t622;
    register int t623;
    register int t629;
    register int t647;
    register int t648;
    register int t649;
    register int t739;
    register int t701;
    register int t728;
    register int t772;
    register int t787;
    register int t1190;
    register int t1191;
    register int t1192;
    register int t1199;
    register int t1200;
    register int t1201;
    register int t1224;
    register int t1225;
    register int t1226;
    register int t1325;
    register int t1326;
    register int t1327;
    register int t1328;
    register int t1329;
    register int t1330;
    register int t1331;
    register int t1332;
    register int t1333;
    register int t1334;
    register int t1335;
    register int t1336;
    register int t1346;
    register int t1347;
    register int t1348;
    register int t1349;
    register int t1350;
    register int t1351;
    register int t1352;
    register int t1353;
    register int t1354;
    register int t1355;
    register int t1356;
    register int t1357;
    register int t1384;
    register int t1385;
    register int t1386;
    register int t1387;
    register int t1388;
    register int t1389;
    register int t1390;
    register int t1391;
    register int t1392;
    register int t1393;
    register int t1394;
    register int t1395;

    *(unsigned int *)(((0x154 + ((int)stk + 44)) + 0x0)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x134 + ((int)stk + 44))) = *(struct mv8 *)(0x8C12633C); }
    { struct mv14 { int w[14]; }; *(struct mv14 *)((0xFC + ((int)stk + 44))) = *(struct mv14 *)(0x8C12635C); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xEC + ((int)stk + 44))) = *(struct mv4 *)(0x8C126394); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xDC + ((int)stk + 44))) = *(struct mv4 *)(0x8C1263A4); }
    t0 = 0x8C1263B4;
    t2 = (((int)stk + 44) + 0x64);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C1263B4 + 120)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 44) + 0x28)) = *(struct mv4 *)(0x8C12642C); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 44) + 0x18)) = *(struct mv4 *)(0x8C12643C); }
    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C40C5C0 = 0x0;
        *(unsigned int *)0x8C40C470 = 0x0;
        *(unsigned int *)0x8C40C474 = 0x0;
        *(unsigned int *)0x8C1D56DC = 0x0;
        *(unsigned int *)0x8C40C480 = 0x0;
        *(unsigned int *)0x8C40C488 = 0x0;
        *(unsigned int *)0x8C40C484 = 0x0;
        sndDummy0();
        syCfgGetSoundMode(0x8C40C2F0);
        if ((*(int *)0x8C40C2F0) == 0) {
            *(unsigned int *)0x8C40C48C = 0x1;
        } else {
            *(unsigned int *)0x8C40C48C = 0x0;
        }
        t12 = 0x8C40C2F4;
        t14 = 0x8C40C490;
        for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)((0x8C40C2F4 + 296)) < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
        *(unsigned int *)0x8C40C5BC = 0x0;
        *(unsigned int *)0x8C29BBBC = 0x1;
    }
    FUN_8c0eaf00(0xFF000000, 0xFF000000, 0xFF000000);
    nlLocate(0x32, 0x34);
    if ((*(int *)0x8C40C470) == 9) {
        t26 = (*(int *)0x8C40C478);
        *(int *)((int)stk + 40) = t26;
        t28 = (*(int *)0x8C40C5C0);
        *(int *)((int)stk + 36) = t28;
        *(int *)((int)stk + 32) = 0x8C12644C;
        nlPrintf(0x8C12644C, t28, t26);
        *(int *)((int)stk + 28) = 0x8C126468;
        nlPrintf(0x8C126468);
        *(int *)((int)stk + 24) = 0x8C12647C;
        nlPrintf(0x8C12647C);
        *(int *)((int)stk + 20) = 0x8C126490;
        nlPrintf(0x8C126490);
        *(int *)((int)stk + 16) = 0x8C1264A0;
        nlPrintf(0x8C1264A0);
    }
    if ((*(int *)0x8C40C470) == 10) {
        t39 = (*(int *)0x8C40C47C);
        *(int *)((int)stk + 40) = t39;
        *(int *)((int)stk + 36) = 0x8C1264B4;
        nlPrintf(0x8C1264B4, t39);
    }
    if ((*(int *)0x8C1D56DC) == 1) {
        nlLocate(0x32, 0x28);
        *(int *)((int)stk + 40) = 0x8C1264C4;
        nlPrintf(0x8C1264C4);
        nlLocate(0x32, 0x29);
        *(int *)((int)stk + 36) = 0x8C1264DC;
        nlPrintf(0x8C1264DC);
        nlLocate(0x32, 0x2A);
        *(int *)((int)stk + 32) = 0x8C1264E0;
        nlPrintf(0x8C1264E0);
        nlLocate(0x2F, ((*(int *)0x8C40C480) + 0x29));
        *(int *)((int)stk + 28) = 0x8C1264E4;
        nlPrintf(0x8C1264E4);
    }
    if ((*(int *)0x8C1D56DC) == 2) {
        rankDispExec((*(int *)0x8C40C484), (*(int *)0x8C40C488), 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    } else {
        { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 44)) = *(struct mv6 *)(0x8C1264E8); }
        screenQuadPut(((int)stk + 44), *(Stk6 *)(((int)stk + 44)), 250.0f);
        logoWaveDraw(80.0f);
        uiScanlinesPut(75.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(0.0f, -15.0f, 70.0f);
        winDrawA(0x50, 0x0, 320.0f, 1.0f, 0.699999988f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(50.0f, 25.0f, 0.100000001f);
        t67 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D56E0, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        u72 = 0.5f;
        if (((int)(*(int *)0x8C40C470) >= 0) && (t69 = *(int *)0x8C40C470, (int)t69 <= (int)0x3)) {
            u72 = 1.0f;
        }
        *(float *)(((int)stk + 100)) = u72;
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(60.0f, 90.0f, 0.100000001f);
        t77 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D67C0, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        if ((*(int *)0x8C40C470) == 0) {
            *(float *)(((int)stk + 100)) = 1.0f;
            if (((int)((int)(*(int *)0x8C40C5B8) % (int)0x1E)) == 0) {
                *(float *)0x8C40C420 = 380.0f;
                *(float *)0x8C40C448 = 535.0f;
            }
            *(float *)0x8C40C420 = (mathLerp((*(float *)0x8C40C420), 360.0f, 0.200000003f));
            *(float *)0x8C40C448 = (mathLerp((*(float *)0x8C40C448), 550.0f, 0.200000003f));
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
            *(float *)0x8C40C420 = 360.0f;
            *(float *)0x8C40C448 = 550.0f;
        }
        *(unsigned int *)(((int)stk + 120)) = (((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 150.0f) & 0xFF) << 8)) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        if ((*(signed char *)0x8C1D775C) != (*(signed char *)0x8C40C2F4)) {
            *(unsigned int *)(((int)stk + 108)) = 0xFF;
        } else {
            *(unsigned int *)(((int)stk + 108)) = 0x0;
        }
        *(unsigned int *)(((int)stk + 112)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((float)(*(int *)(((int)stk + 108))) * (*(float *)(((int)stk + 100)))) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(85.0f, 120.0f, 0.100000001f);
        t113 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D616C, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 113.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 113.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = (*(int *)((((((unsigned char)(*(signed char *)0x8C40C2F4) << 1) << 2) + (0x140 + ((int)stk + 32))) + 0x0)));
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = ((*(int *)(((int)stk + 128))) + (((*(int *)((((0x140 + ((int)stk + 32)) + (((unsigned char)(*(signed char *)0x8C40C2F4) << 1) << 2)) + 0x4))) - 1) * 0x6C));
        *(float *)(((int)stk + 136)) = 120.0f;
        *(float *)(((int)stk + 140)) = 0.100000001f;
        *(float *)(((int)stk + 132)) = 469.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        u123 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x70);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u123, 0.0f);
        *(unsigned int *)(((int)stk + 128)) = ((*(int *)(((((int)stk + 44) + 0x54) + 0x0))) - (((*(int *)((((((unsigned char)(*(signed char *)0x8C40C2F4) << 1) << 2) + (0x134 + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        if ((*(signed char *)0x8C40C2F4) != 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C420) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            u131 = *(float *)(((int)stk + 100));
            t132 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D66E8, 0x1, (((0xFF & (int)(u131 * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, u131);
        }
        if ((unsigned char)(*(signed char *)0x8C40C2F4) != 3) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C448) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            u141 = *(float *)(((int)stk + 100));
            t142 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6754, 0x1, (((0xFF & (int)(u141 * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, u141);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        t153 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((unsigned char)(*(signed char *)0x8C40C2F4) << 1) << 2) + (0x140 + ((int)stk + 32))) + 0x4))), (*(int *)(((int)stk + 112))), *(Stk3 *)(((int)stk + 32)), 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
        *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
        *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        t160 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((unsigned char)(*(signed char *)0x8C40C2F4) << 1) << 2) + (0x14C + ((int)stk + 20))) + 0x4))), 0xFF000000, *(Stk3 *)(((int)stk + 20)), 1.0f, 1.0f, 1.0f);
        if ((*(int *)0x8C40C470) == 1) {
            *(float *)(((int)stk + 100)) = 1.0f;
            if (((int)((int)(*(int *)0x8C40C5B8) % (int)0x1E)) == 0) {
                *(float *)0x8C40C424 = 380.0f;
                *(float *)0x8C40C44C = 535.0f;
            }
            *(float *)0x8C40C424 = (mathLerp((*(float *)0x8C40C424), 360.0f, 0.200000003f));
            *(float *)0x8C40C44C = (mathLerp((*(float *)0x8C40C44C), 550.0f, 0.200000003f));
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
            *(float *)0x8C40C424 = 360.0f;
            *(float *)0x8C40C44C = 550.0f;
        }
        *(unsigned int *)(((int)stk + 120)) = (((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 150.0f) & 0xFF) << 8)) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        if ((*(signed char *)0x8C40C2F6) != (*(signed char *)0x8C1D775E)) {
            *(unsigned int *)(((int)stk + 108)) = 0xFF;
        } else {
            *(unsigned int *)(((int)stk + 108)) = 0x0;
        }
        *(unsigned int *)(((int)stk + 112)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((float)(*(int *)(((int)stk + 108))) * (*(float *)(((int)stk + 100)))) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(100.0f, 150.0f, 0.100000001f);
        t195 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6244, 0x2, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 143.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 143.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        t199 = *(signed char *)0x8C40C2F6;
        *(unsigned int *)(((int)stk + 124)) = (unsigned char)t199;
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = (*(int *)((((((unsigned char)t199 << 1) << 2) + (0x108 + ((int)stk + 32))) + 0x0)));
        *(unsigned int *)(((int)stk + 128)) = ((*(int *)(((((int)stk + 32) + 0x60) + 0x0))) + (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0x108 + ((int)stk + 32))) + 0x4))) - 1) * 0x6C));
        *(float *)(((int)stk + 136)) = 150.0f;
        *(float *)(((int)stk + 140)) = 0.100000001f;
        *(float *)(((int)stk + 132)) = 469.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        u205 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x70);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u205, 0.0f);
        *(unsigned int *)(((((int)stk + 44) + 0x54) + 0x0)) = ((*(int *)(((int)stk + 128))) - (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xFC + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        if ((*(signed char *)0x8C40C2F6) != 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C424) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t214 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D66E8, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        if ((unsigned char)(*(signed char *)0x8C40C2F6) != 6) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C44C) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t224 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6754, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        t234 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0x108 + ((int)stk + 32))) + 0x4))), (*(int *)(((int)stk + 112))), *(Stk3 *)(((int)stk + 32)), 1.0f, 1.0f, 1.0f);
        *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
        *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
        *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        t241 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0x114 + ((int)stk + 20))) + 0x4))), 0xFF000000, *(Stk3 *)(((int)stk + 20)), 1.0f, 1.0f, 1.0f);
        if ((*(int *)0x8C40C470) == 2) {
            *(float *)(((int)stk + 100)) = 1.0f;
            if (((int)((int)(*(int *)0x8C40C5B8) % (int)0x1E)) == 0) {
                *(float *)0x8C40C428 = 380.0f;
                *(float *)0x8C40C450 = 535.0f;
            }
            *(float *)0x8C40C428 = (mathLerp((*(float *)0x8C40C428), 360.0f, 0.200000003f));
            *(float *)0x8C40C450 = (mathLerp((*(float *)0x8C40C450), 550.0f, 0.200000003f));
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
            *(float *)0x8C40C428 = 360.0f;
            *(float *)0x8C40C450 = 550.0f;
        }
        *(unsigned int *)(((int)stk + 120)) = (((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 150.0f) & 0xFF) << 8)) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        if ((*(signed char *)0x8C1D7760) != (*(signed char *)0x8C40C2F8)) {
            *(unsigned int *)(((int)stk + 108)) = 0xFF;
        } else {
            *(unsigned int *)(((int)stk + 108)) = 0x0;
        }
        *(unsigned int *)(((int)stk + 112)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((float)(*(int *)(((int)stk + 108))) * (*(float *)(((int)stk + 100)))) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(130.0f, 180.0f, 0.100000001f);
        t276 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D61D8, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 173.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 173.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        t280 = *(signed char *)0x8C40C2F8;
        *(unsigned int *)(((int)stk + 124)) = (unsigned char)t280;
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = (*(int *)((((((unsigned char)t280 << 1) << 2) + (0xF8 + ((int)stk + 32))) + 0x0)));
        *(unsigned int *)(((int)stk + 128)) = ((*(int *)(((((int)stk + 32) + 0x60) + 0x0))) + (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xF8 + ((int)stk + 32))) + 0x4))) - 1) * 0x6C));
        *(float *)(((int)stk + 136)) = 180.0f;
        *(float *)(((int)stk + 140)) = 0.100000001f;
        *(float *)(((int)stk + 132)) = 469.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        u286 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x70);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u286, 0.0f);
        *(unsigned int *)(((((int)stk + 44) + 0x54) + 0x0)) = ((*(int *)(((int)stk + 128))) - (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xEC + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        if ((*(signed char *)0x8C40C2F8) != 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C428) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t295 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D66E8, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        if ((unsigned char)(*(signed char *)0x8C40C2F8) != 1) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C450) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t305 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6754, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        t315 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xF8 + ((int)stk + 32))) + 0x4))), (*(int *)(((int)stk + 112))), *(Stk3 *)(((int)stk + 32)), 1.0f, 1.0f, 1.0f);
        *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
        *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
        *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        t322 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0x104 + ((int)stk + 20))) + 0x4))), 0xFF000000, *(Stk3 *)(((int)stk + 20)), 1.0f, 1.0f, 1.0f);
        u325 = 0.5f;
        if ((*(int *)0x8C40C470) == 3) {
            u325 = 1.0f;
        }
        *(float *)(((int)stk + 100)) = u325;
        *(unsigned int *)(((int)stk + 120)) = (((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 150.0f) & 0xFF) << 8)) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(110.0f, 210.0f, 0.100000001f);
        t333 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D631C, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 203.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 203.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        if ((*(int *)0x8C40C470) == 3) {
            if (((*(int *)0x8C20D15C) & 32) != 0) {
                *(Stk3 *)(((int)stk + 32)) = vecMake(387.0f, 210.0f, 0.100000001f);
                t340 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D682C, 0x1, 0xFFFFFFFF, 1.0f, 1.0f, 1.0f);
                *(Stk3 *)(((int)stk + 32)) = vecMake(388.0f, 211.0f, 1.10000002f);
                t341 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D682C, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
            }
        } else {
            *(Stk3 *)(((int)stk + 32)) = vecMake(387.0f, 210.0f, 0.100000001f);
            t347 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D682C, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
            *(Stk3 *)(((int)stk + 32)) = vecMake(388.0f, 211.0f, 1.10000002f);
            t348 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D682C, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        }
        if ((*(int *)0x8C40C470) == 4) {
            *(float *)(((int)stk + 100)) = 1.0f;
            if (((int)((int)(*(int *)0x8C40C5B8) % (int)0x1E)) == 0) {
                *(float *)0x8C40C42C = 380.0f;
                *(float *)0x8C40C454 = 535.0f;
            }
            *(float *)0x8C40C42C = (mathLerp((*(float *)0x8C40C42C), 360.0f, 0.200000003f));
            *(float *)0x8C40C454 = (mathLerp((*(float *)0x8C40C454), 550.0f, 0.200000003f));
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
            *(float *)0x8C40C42C = 360.0f;
            *(float *)0x8C40C454 = 550.0f;
        }
        *(unsigned int *)(((((int)stk + 44) + 0x4C) + 0x0)) = ((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(130.0f, 250.0f, 0.100000001f);
        t377 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6388, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 243.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 243.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        t381 = *(int *)0x8C40C48C;
        *(unsigned int *)(((int)stk + 124)) = t381;
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = (*(int *)(((((t381 << 1) << 2) + (0xE8 + ((int)stk + 32))) + 0x0)));
        *(unsigned int *)(((((int)stk + 32) + 0x60) + 0x0)) = ((*(int *)(((int)stk + 128))) + (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xE8 + ((int)stk + 32))) + 0x4))) - 1) * 0x6C));
        *(float *)(((int)stk + 136)) = 250.0f;
        *(float *)(((int)stk + 140)) = 0.100000001f;
        *(float *)(((int)stk + 132)) = 469.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        u387 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x70);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u387, 0.0f);
        *(unsigned int *)(((((int)stk + 44) + 0x54) + 0x0)) = ((*(int *)(((int)stk + 128))) - (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xDC + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        if ((*(int *)0x8C40C48C) != 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C42C) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t396 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D66E8, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        if ((*(int *)0x8C40C48C) == 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C454) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t406 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6754, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        t416 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xE8 + ((int)stk + 32))) + 0x4))), (*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 32)), 1.0f, 1.0f, 1.0f);
        *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
        *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
        *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        t423 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xF4 + ((int)stk + 20))) + 0x4))), 0xFF000000, *(Stk3 *)(((int)stk + 20)), 1.0f, 1.0f, 1.0f);
        u426 = 0.5f;
        if ((*(int *)0x8C40C470) == 5) {
            u426 = 1.0f;
        }
        *(float *)(((int)stk + 100)) = u426;
        *(unsigned int *)(((((int)stk + 44) + 0x4C) + 0x0)) = ((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(115.0f, 280.0f, 0.100000001f);
        t433 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D64CC, 0x2, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 273.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 273.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        if ((*(int *)((((((*(int *)0x8C40C474) << 2) << 1) + (((int)stk + 44) + 0x64)) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 128)) = (*(int *)((((((*(int *)0x8C40C474) << 2) << 1) + (((int)stk + 44) + 0x64)) + 0x0)));
            *(float *)(((int)stk + 136)) = 280.0f;
            *(float *)(((int)stk + 140)) = 0.100000001f;
            *(float *)(((int)stk + 132)) = 469.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
            u442 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
            *(int *)((int)stk + 28) = (((int)stk + 32) + 0x64);
            sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), u442, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x68)); }
            t446 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), 0x1, (*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 16)), 1.0f, 1.0f, 1.0f);
            *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
            *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
            *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x74)); }
            t451 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), 0x1, 0xFF000000, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
        } else {
            nlLocate(0x3C, 0x23);
            t454 = (*(int *)0x8C40C474);
            *(int *)((int)stk + 40) = t454;
            *(int *)((int)stk + 36) = 0x8C126500;
            nlPrintf(0x8C126500, t454);
        }
        u460 = 0.5f;
        if ((*(int *)0x8C40C470) == 6) {
            u460 = 1.0f;
        }
        *(float *)(((int)stk + 100)) = u460;
        *(unsigned int *)(((((int)stk + 44) + 0x4C) + 0x0)) = ((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(105.0f, 310.0f, 0.100000001f);
        t467 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D63F4, 0x2, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 303.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 303.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        *(Stk3 *)(((int)stk + 32)) = vecMake(345.0f, 310.0f, 0.100000001f);
        t472 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6610, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(346.0f, 311.0f, 0.200000003f);
        t473 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6610, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        t474 = *(signed char *)0x8C40C2FC;
        *(float *)(((int)stk + 104)) = (float)(int)((float)(unsigned char)t474 + 423.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(((float)(int)((float)(unsigned char)t474 + 423.0f) + -15.0f), 311.0f, 0.100000001f);
        t476 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D69DC, 0x1, 0xFF000000, 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)(((int)stk + 104))) + -12.0f), 314.0f, 0.00999999978f);
        optionQuadPut((((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 16) | 0xFF000000), *(Stk3 *)((int)stk + 32));
        *(Stk3 *)(((int)stk + 32)) = vecMake(412.0f, 315.0f, 0.200000003f);
        t481 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6898, 0x3, 0xFF000000, 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(Stk3 *)(((int)stk + 32)) = vecMake(530.0f, 310.0f, 0.100000001f);
        t483 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D667C, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(531.0f, 311.0f, 0.200000003f);
        t484 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D667C, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        u487 = 0.5f;
        if ((*(int *)0x8C40C470) == 7) {
            u487 = 1.0f;
        }
        *(float *)(((int)stk + 100)) = u487;
        *(unsigned int *)(((((int)stk + 44) + 0x4C) + 0x0)) = ((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(115.0f, 340.0f, 0.100000001f);
        t494 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D65A4, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 333.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 333.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        *(Stk3 *)(((int)stk + 32)) = vecMake(345.0f, 340.0f, 0.100000001f);
        t499 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6610, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(346.0f, 341.0f, 0.200000003f);
        t500 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6610, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        t501 = *(signed char *)0x8C40C2FD;
        *(float *)(((int)stk + 104)) = (float)((unsigned char)t501 + 0x1A7);
        *(Stk3 *)(((int)stk + 32)) = vecMake(((float)((unsigned char)t501 + 0x1A7) + -15.0f), 341.0f, 0.100000001f);
        t503 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D69DC, 0x1, 0xFF000000, 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)(((int)stk + 104))) + -12.0f), 344.0f, 0.00999999978f);
        optionQuadPut(((((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | 0xFF000000), *(Stk3 *)((int)stk + 32));
        *(Stk3 *)(((int)stk + 32)) = vecMake(412.0f, 345.0f, 0.200000003f);
        t509 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6898, 0x3, 0xFF000000, 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
        *(Stk3 *)(((int)stk + 32)) = vecMake(530.0f, 340.0f, 0.100000001f);
        t511 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D667C, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(531.0f, 341.0f, 0.200000003f);
        t512 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D667C, 0x1, 0xFF000000, 1.0f, 1.0f, 1.0f);
        if ((*(int *)0x8C40C470) == 8) {
            *(float *)(((int)stk + 100)) = 1.0f;
            if (((int)((int)(*(int *)0x8C40C5B8) % (int)0x1E)) == 0) {
                *(float *)0x8C40C430 = 380.0f;
                *(float *)0x8C40C458 = 535.0f;
            }
            *(float *)0x8C40C430 = (mathLerp((*(float *)0x8C40C430), 360.0f, 0.200000003f));
            *(float *)0x8C40C458 = (mathLerp((*(float *)0x8C40C458), 550.0f, 0.200000003f));
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
            *(float *)0x8C40C430 = 360.0f;
            *(float *)0x8C40C458 = 550.0f;
        }
        *(unsigned int *)(((((int)stk + 44) + 0x4C) + 0x0)) = ((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8) | 0xFF000000);
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(120.0f, 380.0f, 0.100000001f);
        t537 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6100, 0x1, (*(int *)(((int)stk + 116))), 1.0f, 1.0f, 1.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(65.0f, 373.0f, 50.0f);
        uiPanelPut((*(int *)(((int)stk + 120))), 175.0f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(265.0f, 373.0f, 60.0f);
        optionBarPut(*(Stk1 *)((int)stk + 32));
        if ((((*(int *)0x8C40C300) & 1) != 0) && (t542 = *(int *)0x8C40C41C, t542 != 0)) {
            *(unsigned int *)(((int)stk + 124)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 124)) = 0x0;
        }
        *(unsigned int *)(((int)stk + 128)) = (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xEC + ((int)stk + 44))) + 0x0)));
        *(unsigned int *)(((((int)stk + 44) + 0x54) + 0x0)) = ((*(int *)(((int)stk + 128))) + (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xEC + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        *(float *)(((int)stk + 136)) = 380.0f;
        *(float *)(((int)stk + 140)) = 0.100000001f;
        *(float *)(((int)stk + 132)) = 469.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        u551 = *(float *)(((*(int *)(((int)stk + 128))) + 0x54));
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x64);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), u551, 0.0f);
        *(unsigned int *)(((((int)stk + 44) + 0x54) + 0x0)) = ((*(int *)(((int)stk + 128))) - (((*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xEC + ((int)stk + 44))) + 0x4))) - 1) * 0x6C));
        if (((*(int *)0x8C40C300) & 1) != 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C430) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t560 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D66E8, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        if (((*(int *)0x8C40C300) & 1) == 0) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(((*(float *)0x8C40C458) + -15.0f), ((*(float *)(((int)stk + 136))) + -4.0f), 0.100000001f);
            t570 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6754, 0x1, (((0xFF & (int)((*(float *)(((int)stk + 100))) * 255.0f)) << 8) | 0xFF000000), 1.0f, 1.0f, 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
        t580 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0xF8 + ((int)stk + 32))) + 0x4))), (*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 32)), 1.0f, 1.0f, 1.0f);
        *(float *)(((int)stk + 136)) = ((*(float *)(((int)stk + 136))) + 1.0f);
        *(float *)(((int)stk + 132)) = ((*(float *)(((int)stk + 132))) + 1.0f);
        *(float *)(((int)stk + 140)) = ((*(float *)(((int)stk + 140))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x64)); }
        t587 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 128))), (*(int *)((((((*(int *)(((int)stk + 124))) << 1) << 2) + (0x104 + ((int)stk + 20))) + 0x4))), 0xFF000000, *(Stk3 *)(((int)stk + 20)), 1.0f, 1.0f, 1.0f);
        if ((*(int *)0x8C40C470) == 11) {
            *(float *)(((int)stk + 100)) = 1.0f;
            *(unsigned int *)0x8C40C5BC = ((*(int *)0x8C40C5BC) + 0x200);
        } else {
            *(float *)(((int)stk + 100)) = 0.5f;
        }
        *(unsigned int *)(((int)stk + 116)) = ((((((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 16) | (((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF) << 8)) | ((int)((*(float *)(((int)stk + 100))) * 255.0f) & 0xFF)) | 0xFF000000);
        *(Stk3 *)(((int)stk + 32)) = vecMake(30.0f, 415.0f, 0.200000003f);
        cursorBoxPut(0x0, *(Stk3 *)((int)stk + 32), 1.0f, 0.0f, (*(float *)(((int)stk + 100))));
        if ((*(int *)0x8C40C470) == 11) {
            *(Stk3 *)(((int)stk + 32)) = vecMake(30.0f, 415.0f, 0.150000006f);
            t602 = nlCos((*(int *)0x8C40C5BC));
            if (!(0.0f > t602)) {
                u608 = (nlCos((*(int *)0x8C40C5BC)));
            } else {
                u608 = (-(nlCos((*(int *)0x8C40C5BC))));
            }
            cursorBoxPut(0x1, *(Stk3 *)((int)stk + 32), u608, 0.0f, 1.0f);
        }
        *(Stk3 *)(((int)stk + 32)) = vecMake(50.0f, 420.0f, 0.100000001f);
        t615 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D6A48, 0x1, 0xFF000000, 1.0f, 1.0f, (*(float *)(((int)stk + 100))));
    }
    if (((*(int *)0x8C40C470) != 0) && ((t620 = *(int *)0x8C40C470, t620 != 1) && ((t621 = *(int *)0x8C40C470, t621 != 2) && ((t622 = *(int *)0x8C40C470, t622 != 4) && (t623 = *(int *)0x8C40C470, t623 != 8))))) {
    } else {
        *(unsigned int *)0x8C40C5B8 = ((*(int *)0x8C40C5B8) + 0x1);
    }
    if (((*(int *)0x8C40C470) == 8) && (t629 = *(int *)0x8C40C41C, t629 == 0)) {
        *(unsigned int *)0x8C40C470 = 0xB;
    }
    if ((*(int *)0x8C1D56DC) != 0) {
        if ((*(int *)0x8C1D56DC) == 1) {
            if ((((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 16) == 0) && (t647 = *(int *)0x8C421F70, t648 = *(int *)((0x8C29B898 + (t647 << 2))), t649 = *(int *)((t648 + 0x10)), (t649 & 32) == 0)) {
            } else {
                t650 = *(int *)0x8C40C480;
                *(unsigned int *)0x8C40C480 = (t650 + 0x1);
                if ((int)(t650 + 0x1) > (int)0x1) {
                    *(unsigned int *)0x8C40C480 = 0x0;
                }
            }
            if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) != 0) {
                if ((*(int *)0x8C40C480) == 0) {
                    BupRequestSave(0x0, 0x8C126504, 0x8C40C2F4, 0x128);
                }
                *(unsigned int *)0x8C20D14C = 0x0;
                *(unsigned int *)0x8C20D150 = 0x3;
                *(unsigned int *)0x8C20D15C = 0x0;
                return 0x8C20D150;
            }
            t674 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10));
            t675 = t674;
            if ((t674 & 2) != 0) {
                *(unsigned int *)0x8C1D56DC = 0x0;
                t675 = 0x8C1D56DC;
            }
            *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
            if ((int)(*(int *)0x8C40C488) > 0) {
                *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
            }
            return t675;
        }
        t683 = *(int *)0x8C1D56DC;
        t744 = t683;
        if (t683 == 2) {
            if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 2) != 0) {
                *(unsigned int *)0x8C1D56DC = 0x0;
                *(unsigned int *)0x8C40C488 = 0x0;
                *(unsigned int *)0x8C40C484 = 0x0;
                rankSprTexFree();
            }
            if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) == 0) {
                t700 = padDirRepeat((*(int *)0x8C421F70), 0x80);
                if ((t700 != 0) && (t701 = *(int *)0x8C40C484, t701 == 0)) {
                    *(unsigned int *)0x8C40C484 = ((*(int *)0x8C40C484) + 0x1);
                    *(unsigned int *)0x8C40C488 = (0x1E - (*(int *)0x8C40C488));
                    t705 = 0x8C40C488;
                    if ((int)(*(int *)0x8C40C484) > (int)0x1) {
                        *(unsigned int *)0x8C40C484 = 0x0;
                        t705 = 0x8C40C484;
                    }
                    t728 = t705;
                } else {
                    t709 = padDirRepeat((*(int *)0x8C421F70), 0x40);
                    t723 = t709;
                    if (t709 != 0) {
                        t711 = *(int *)0x8C40C484;
                        t718 = t711;
                        if (t711 == 1) {
                            *(unsigned int *)0x8C40C484 = ((*(int *)0x8C40C484) + 0x1);
                            *(unsigned int *)0x8C40C488 = (0x1E - (*(int *)0x8C40C488));
                            t715 = 0x8C40C488;
                            if ((int)(*(int *)0x8C40C484) > (int)0x1) {
                                *(unsigned int *)0x8C40C484 = 0x0;
                                t715 = 0x8C40C484;
                            }
                            t718 = t715;
                        }
                        t723 = t718;
                    }
                    t728 = t723;
                }
                t739 = t728;
            } else {
                *(unsigned int *)0x8C40C484 = ((*(int *)0x8C40C484) + 0x1);
                *(unsigned int *)0x8C40C488 = (0x1E - (*(int *)0x8C40C488));
                t736 = 0x8C40C488;
                if ((int)(*(int *)0x8C40C484) > (int)0x1) {
                    *(unsigned int *)0x8C40C484 = 0x0;
                    t736 = 0x8C40C484;
                }
                t739 = t736;
            }
            t744 = t739;
        }
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        if ((int)(*(int *)0x8C40C488) > 0) {
            *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
        }
        return t744;
    }
    t755 = padDirRepeat((*(int *)0x8C421F70), 0x10);
    if (t755 != 0) {
        *(unsigned int *)0x8C40C470 = ((*(int *)0x8C40C470) - 1);
        sndSeCursor();
        *(unsigned int *)0x8C40C5B8 = 0x0;
        if ((*(int *)0x8C40C470) == 10) {
            t761 = 0x7;
            if ((*(int *)0x8C40C41C) != 0) {
                t761 = 0x8;
            }
            *(unsigned int *)0x8C40C470 = t761;
        }
        if ((int)(*(int *)0x8C40C470) < 0) {
            *(unsigned int *)0x8C40C470 = 0xB;
        }
        if (((*(int *)0x8C40C470) == 8) && (t772 = *(int *)0x8C40C41C, t772 == 0)) {
            *(unsigned int *)0x8C40C470 = ((*(int *)0x8C40C470) - 1);
        }
    }
    t780 = padDirRepeat((*(int *)0x8C421F70), 0x20);
    if (t780 != 0) {
        *(unsigned int *)0x8C40C470 = ((*(int *)0x8C40C470) + 0x1);
        sndSeCursor();
        *(unsigned int *)0x8C40C5B8 = 0x0;
        if ((int)(*(int *)0x8C40C470) > (int)0xB) {
            *(unsigned int *)0x8C40C470 = 0x0;
        }
        if (((*(int *)0x8C40C470) == 8) && (t787 = *(int *)0x8C40C41C, t787 == 0)) {
            *(unsigned int *)0x8C40C470 = ((*(int *)0x8C40C470) + 0x1);
        }
        if ((*(int *)0x8C40C470) == 9) {
            *(unsigned int *)0x8C40C470 = 0xB;
        }
    }
    t800 = padDirRepeat((*(int *)0x8C421F70), 0x80);
    if (t800 == 0) {
    } else {
        if ((*(int *)0x8C40C470) == 0) {
            if ((int)(unsigned char)(*(signed char *)0x8C40C2F4) >= (int)0x3) {
            } else {
                *(unsigned char *)0x8C40C2F4 = ((*(signed char *)0x8C40C2F4) + 0x1);
                sndSeCursor();
            }
        } else {
            t831 = *(int *)0x8C40C470;
            if (t831 == 1) {
                if ((int)(unsigned char)(*(signed char *)0x8C40C2F6) >= (int)0x6) {
                } else {
                    *(unsigned char *)0x8C40C2F6 = ((*(signed char *)0x8C40C2F6) + 0x1);
                    sndSeCursor();
                }
            } else {
                if (t831 == 2) {
                    if ((int)(unsigned char)(*(signed char *)0x8C40C2F8) >= (int)0x1) {
                    } else {
                        *(unsigned char *)0x8C40C2F8 = ((*(signed char *)0x8C40C2F8) + 0x1);
                        sndSeCursor();
                    }
                } else {
                    t863 = *(int *)0x8C40C470;
                    if (t863 == 4) {
                        if ((*(int *)0x8C40C48C) != 0) {
                        } else {
                            sndSeCursor();
                            strmSetStereo(0x1);
                            *(unsigned int *)0x8C40C48C = 0x1;
                        }
                    } else {
                        if (t863 == 6) {
                            *(unsigned char *)0x8C40C2FC = ((*(signed char *)0x8C40C2FC) + 0xA);
                            if ((int)(unsigned char)(*(signed char *)0x8C40C2FC) <= (int)0x50) {
                            } else {
                                *(unsigned char *)0x8C40C2FC = 0x50;
                            }
                        } else {
                            t884 = *(int *)0x8C40C470;
                            if (t884 == 7) {
                                *(unsigned char *)0x8C40C2FD = ((*(signed char *)0x8C40C2FD) + 0xA);
                                if ((int)(unsigned char)(*(signed char *)0x8C40C2FD) > (int)0x50) {
                                    *(unsigned char *)0x8C40C2FD = 0x50;
                                }
                                strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
                            } else {
                                if (t884 == 8) {
                                    if (((*(int *)0x8C40C300) & 1) == 0) {
                                        *(unsigned int *)0x8C40C300 = ((*(int *)0x8C40C300) | 0x1);
                                        *(unsigned int *)0x8C29BBB8 = 0x1;
                                        *(int *)((int)stk + 40) = 0x1E;
                                        *(int *)((int)stk + 36) = 0xA;
                                        padVibRequest((*(int *)0x8C421F70), 0x7, 0xF, 0x0, 0xA, 0x1E);
                                        sndSeCursor();
                                    }
                                } else {
                                    t907 = *(int *)0x8C40C470;
                                    if (t907 == 5) {
                                        *(unsigned int *)0x8C40C474 = ((*(int *)0x8C40C474) + 0x1);
                                        sndSeCursor();
                                        if ((unsigned int)(*(int *)0x8C40C474) > (unsigned int)0xE) {
                                            *(unsigned int *)0x8C40C474 = 0x0;
                                        }
                                    } else {
                                        if (t907 == 9) {
                                            *(unsigned int *)0x8C40C478 = ((*(int *)0x8C40C478) + 0x1);
                                            sndSeCursor();
                                            if ((int)(*(int *)0x8C40C478) > (int)((*(int *)(((((*(int *)0x8C40C5C0) << 2) + (((int)stk + 44) + 0x18)) + 0x0))) - 1)) {
                                                *(unsigned int *)0x8C40C478 = 0x0;
                                            }
                                        } else {
                                            if ((*(int *)0x8C40C470) == 10) {
                                                *(unsigned int *)0x8C40C47C = ((*(int *)0x8C40C47C) + 0x1);
                                                sndSeCursor();
                                                if ((int)(*(int *)0x8C40C47C) > (int)0x10B) {
                                                    *(unsigned int *)0x8C40C47C = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t987 = padDirRepeat((*(int *)0x8C421F70), 0x40);
    if (t987 == 0) {
    } else {
        if ((*(int *)0x8C40C470) == 0) {
            if ((int)(unsigned char)(*(signed char *)0x8C40C2F4) <= 0) {
            } else {
                *(unsigned char *)0x8C40C2F4 = ((*(signed char *)0x8C40C2F4) - 1);
                sndSeCursor();
            }
        } else {
            t1021 = *(int *)0x8C40C470;
            if (t1021 == 1) {
                if ((int)(unsigned char)(*(signed char *)0x8C40C2F6) <= 0) {
                } else {
                    *(unsigned char *)0x8C40C2F6 = ((*(signed char *)0x8C40C2F6) - 1);
                    sndSeCursor();
                }
            } else {
                if (t1021 == 2) {
                    if ((int)(unsigned char)(*(signed char *)0x8C40C2F8) <= 0) {
                    } else {
                        *(unsigned char *)0x8C40C2F8 = ((*(signed char *)0x8C40C2F8) - 1);
                        sndSeCursor();
                    }
                } else {
                    t1057 = *(int *)0x8C40C470;
                    if (t1057 == 4) {
                        if ((*(int *)0x8C40C48C) == 0) {
                        } else {
                            strmSetStereo(0x0);
                            *(unsigned int *)0x8C40C48C = 0x0;
                            sndSeCursor();
                        }
                    } else {
                        if (t1057 == 6) {
                            if ((int)(unsigned char)(*(signed char *)0x8C40C2FC) >= (int)0xA) {
                                *(unsigned char *)0x8C40C2FC = ((*(signed char *)0x8C40C2FC) - 0xA);
                            } else {
                                *(unsigned char *)0x8C40C2FC = 0x0;
                            }
                            strmBgmSetVol((unsigned char)(*(signed char *)0x8C40C2FC), 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8));
                        } else {
                            t1086 = *(int *)0x8C40C470;
                            if (t1086 == 7) {
                                if ((int)(unsigned char)(*(signed char *)0x8C40C2FD) >= (int)0xA) {
                                    *(unsigned char *)0x8C40C2FD = ((*(signed char *)0x8C40C2FD) - 0xA);
                                } else {
                                    *(unsigned char *)0x8C40C2FD = 0x0;
                                }
                                strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
                            } else {
                                if (t1086 == 8) {
                                    if (((*(int *)0x8C40C300) & 1) != 0) {
                                        *(unsigned int *)0x8C40C300 = ((*(int *)0x8C40C300) & 0xFFFFFFFE);
                                        *(unsigned int *)0x8C29BBB8 = 0x0;
                                        sndSeCursor();
                                    }
                                } else {
                                    t1108 = *(int *)0x8C40C470;
                                    if (t1108 == 5) {
                                        *(unsigned int *)0x8C40C474 = ((*(int *)0x8C40C474) - 1);
                                        sndSeCursor();
                                        if ((int)(*(int *)0x8C40C474) < 0) {
                                            *(unsigned int *)0x8C40C474 = 0xE;
                                        }
                                    } else {
                                        if (t1108 == 9) {
                                            *(unsigned int *)0x8C40C478 = ((*(int *)0x8C40C478) - 1);
                                            sndSeCursor();
                                            if ((int)(*(int *)0x8C40C478) < 0) {
                                                *(unsigned int *)0x8C40C478 = ((*(int *)(((((int)stk + 44) + 0x18) + ((*(int *)0x8C40C5C0) << 2)))) - 1);
                                            }
                                        } else {
                                            if ((*(int *)0x8C40C470) == 10) {
                                                *(unsigned int *)0x8C40C47C = ((*(int *)0x8C40C47C) - 1);
                                                sndSeCursor();
                                                if ((int)(*(int *)0x8C40C47C) < 0) {
                                                    *(unsigned int *)0x8C40C47C = 0x10B;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((*(int *)0x8C40C470) == 3) && (t1190 = *(int *)0x8C421F70, t1191 = *(int *)((0x8C29B898 + (t1190 << 2))), t1192 = *(int *)((t1191 + 0x10)), (t1192 & 5) != 0)) {
        *(unsigned int *)0x8C1D56DC = 0x2;
        rankDispLoad();
    }
    if (((*(int *)0x8C40C470) == 5) && (t1199 = *(int *)0x8C421F70, t1200 = *(int *)((0x8C29B898 + (t1199 << 2))), t1201 = *(int *)((t1200 + 0x10)), (t1201 & 5) != 0)) {
        *(unsigned int *)0x8C40C220 = 0x0;
        *(unsigned int *)0x8C40C22C = 0x0;
        t1203 = ADXT_GetStat((*(int *)0x8C38BA94));
        if (t1203 == 0) {
            t1205 = ADXT_GetStat((*(int *)0x8C38BA94));
            if (t1205 != 5) {
                ADXT_Stop((*(int *)0x8C38BA94));
            }
        } else {
            ADXT_Stop((*(int *)0x8C38BA94));
        }
        strmBgmSetVol(0x50, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8));
        ADXT_StartAfs((*(int *)0x8C38BA94), 0x0, (*(int *)((((((*(int *)0x8C40C474) << 2) << 1) + (((int)stk + 44) + 0x64)) + 0x4))));
        *(unsigned int *)0x8C40C26C = 0xFFFFFFFF;
    }
    if (((*(int *)0x8C40C470) == 9) && (t1224 = *(int *)0x8C421F70, t1225 = *(int *)((0x8C29B898 + (t1224 << 2))), t1226 = *(int *)((t1225 + 0x10)), (t1226 & 5) != 0)) {
        strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
        ADXT_StartAfs((*(int *)0x8C38BA98), (*(int *)(((((*(int *)0x8C40C5C0) << 2) + (((int)stk + 44) + 0x28)) + 0x0))), (*(int *)0x8C40C478));
    }
    if ((*(int *)0x8C40C470) == 10) {
        if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) != 0) {
            nlsndSystemControl(0x0, 0x300A0, 0x0);
            strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
            nlsndSeqRequest((*(int *)((((*(int *)0x8C40C47C) << 2) + 0x8C1D2550))));
        }
    }
    if ((*(int *)0x8C40C470) != 5) {
        t1260 = ADXT_GetStat((*(int *)0x8C38BA94));
        if (t1260 == 0) {
            t1262 = ADXT_GetStat((*(int *)0x8C38BA94));
            if (t1262 != 5) {
                ADXT_Stop((*(int *)0x8C38BA94));
            }
        } else {
            ADXT_Stop((*(int *)0x8C38BA94));
        }
    }
    if ((*(int *)0x8C40C470) != 9) {
        t1278 = ADXT_GetStat((*(int *)0x8C38BA98));
        if (t1278 == 0) {
            t1280 = ADXT_GetStat((*(int *)0x8C38BA98));
            if (t1280 != 5) {
                ADXT_Stop((*(int *)0x8C38BA98));
            }
        } else {
            ADXT_Stop((*(int *)0x8C38BA98));
        }
    }
    *(volatile int *)0x8C40C470;
    t1297 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10));
    if ((t1297 & 5) != 0) {
        t1299 = *(int *)0x8C40C470;
        if (t1299 != 11) {
            if ((*(int *)0x8C1D56DC) != 0) {
                *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
                if ((int)(*(int *)0x8C40C488) > 0) {
                    *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
                }
                return t1299;
            }
            t1311 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10));
            if ((t1311 & 2) == 0) {
                *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
                if ((int)(*(int *)0x8C40C488) > 0) {
                    *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
                }
                return t1311;
            }
            sndDummy1();
            *(unsigned int *)0x8C29BBBC = 0x0;
            t1319 = 0x0;
            if (((*(int *)0x8C40C300) & 1) != 0) {
                t1319 = 0x1;
            }
            *(unsigned int *)0x8C29BBB8 = t1319;
            syCfgSetSoundMode(((((*(int *)0x8C40C48C) == 0)) ? 1 : 0));
            if (((*(signed char *)0x8C40C2F4) == (*(signed char *)0x8C40C490)) && ((t1325 = *(signed char *)0x8C40C492, t1326 = *(signed char *)0x8C40C2F6, t1326 == t1325) && ((t1327 = *(signed char *)0x8C40C493, t1328 = *(signed char *)0x8C40C2F7, t1328 == t1327) && ((t1329 = *(signed char *)0x8C40C494, t1330 = *(signed char *)0x8C40C2F8, t1330 == t1329) && ((t1331 = *(signed char *)0x8C40C498, t1332 = *(signed char *)0x8C40C2FC, t1332 == t1331) && ((t1333 = *(signed char *)0x8C40C499, t1334 = *(signed char *)0x8C40C2FD, t1334 == t1333) && (t1335 = *(int *)0x8C40C49C, t1336 = *(int *)0x8C40C300, t1336 == t1335))))))) {
                *(unsigned int *)0x8C20D14C = 0x0;
                *(unsigned int *)0x8C20D150 = 0x3;
                *(unsigned int *)0x8C20D15C = 0x0;
                return 0x0;
            }
            BupRequestSave(0x0, 0x8C126504, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C20D14C = 0x0;
            *(unsigned int *)0x8C20D150 = 0x3;
            *(unsigned int *)0x8C20D15C = 0x0;
            return 0x8C20D150;
        }
        sndDummy1();
        *(unsigned int *)0x8C29BBBC = 0x0;
        t1340 = 0x0;
        if (((*(int *)0x8C40C300) & 1) != 0) {
            t1340 = 0x1;
        }
        *(unsigned int *)0x8C29BBB8 = t1340;
        syCfgSetSoundMode(((((*(int *)0x8C40C48C) == 0)) ? 1 : 0));
        if (((*(signed char *)0x8C40C2F4) == (*(signed char *)0x8C40C490)) && ((t1346 = *(signed char *)0x8C40C492, t1347 = *(signed char *)0x8C40C2F6, t1347 == t1346) && ((t1348 = *(signed char *)0x8C40C493, t1349 = *(signed char *)0x8C40C2F7, t1349 == t1348) && ((t1350 = *(signed char *)0x8C40C494, t1351 = *(signed char *)0x8C40C2F8, t1351 == t1350) && ((t1352 = *(signed char *)0x8C40C498, t1353 = *(signed char *)0x8C40C2FC, t1353 == t1352) && ((t1354 = *(signed char *)0x8C40C499, t1355 = *(signed char *)0x8C40C2FD, t1355 == t1354) && (t1356 = *(int *)0x8C40C49C, t1357 = *(int *)0x8C40C300, t1357 == t1356))))))) {
            *(unsigned int *)0x8C20D14C = 0x0;
            *(unsigned int *)0x8C20D150 = 0x3;
            *(unsigned int *)0x8C20D15C = 0x0;
            return 0x0;
        }
        BupRequestSave(0x0, 0x8C126504, 0x8C40C2F4, 0x128);
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C20D15C = 0x0;
        return 0x8C20D150;
    }
    if ((*(int *)0x8C1D56DC) != 0) {
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        if ((int)(*(int *)0x8C40C488) > 0) {
            *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
        }
        return t1297;
    }
    t1370 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10));
    if ((t1370 & 2) == 0) {
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        if ((int)(*(int *)0x8C40C488) > 0) {
            *(unsigned int *)0x8C40C488 = ((*(int *)0x8C40C488) - 1);
        }
        return t1370;
    }
    sndDummy1();
    *(unsigned int *)0x8C29BBBC = 0x0;
    t1378 = 0x0;
    if (((*(int *)0x8C40C300) & 1) != 0) {
        t1378 = 0x1;
    }
    *(unsigned int *)0x8C29BBB8 = t1378;
    syCfgSetSoundMode(((((*(int *)0x8C40C48C) == 0)) ? 1 : 0));
    if (((*(signed char *)0x8C40C2F4) == (*(signed char *)0x8C40C490)) && ((t1384 = *(signed char *)0x8C40C492, t1385 = *(signed char *)0x8C40C2F6, t1385 == t1384) && ((t1386 = *(signed char *)0x8C40C493, t1387 = *(signed char *)0x8C40C2F7, t1387 == t1386) && ((t1388 = *(signed char *)0x8C40C494, t1389 = *(signed char *)0x8C40C2F8, t1389 == t1388) && ((t1390 = *(signed char *)0x8C40C498, t1391 = *(signed char *)0x8C40C2FC, t1391 == t1390) && ((t1392 = *(signed char *)0x8C40C499, t1393 = *(signed char *)0x8C40C2FD, t1393 == t1392) && (t1394 = *(int *)0x8C40C49C, t1395 = *(int *)0x8C40C300, t1395 == t1394))))))) {
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C20D15C = 0x0;
        return 0x0;
    }
    BupRequestSave(0x0, 0x8C126504, 0x8C40C2F4, 0x128);
    *(unsigned int *)0x8C20D14C = 0x0;
    *(unsigned int *)0x8C20D150 = 0x3;
    *(unsigned int *)0x8C20D15C = 0x0;
    return 0x8C20D150;
}
