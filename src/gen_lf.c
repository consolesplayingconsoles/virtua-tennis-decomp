/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddCorners2(int, int);
int cpuDblAimAddCourt2(int, int);
int cpuDblAimAddDeep2(int, int);
int cpuDblAimAddRange2(int, int);
float cpuDistXZ(int, int);
float cpuLineXAtZ(Stk3, Stk3, float);
float cpuOppLineX(int);
int cpuShotRange(int, int, int, int, int, float, float, float, float);
int dbgMenuGetValue(int, int);
int exprPlayB(int, int, int);
int miniOnEvent(int, int);
int miniPlayerInput(int);
int motionAdvance(int);
extern int motionChange();
int motionIsEnd(int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlsndSeqRequest(int);
int padLcdSetMode(int, int, int, int, int, int);
int padVibRequest(int, int, int, int, int, int);
extern int playerCpuInput();
int playerDrawMarker(int, int, int, int, int, int, int, int, int);
int playerExec(int, int, int, int);
int playerReadPad(int);
int seFootLand(int, int, float);
int seShotHit2(int, int);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
float vecDistXZf(float, float, float, float);
int vecFromYaw(int, int, int, int, int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int vecTableGet(int, int, int, int, int);
int FUN_8c02414c(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_8c07c338(int a4, int a5);

int FUN_8c02414c(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[33];
    register int t10;
    register int t11;
    register int t19;
    register int t20;
    register int t28;
    register int t32;
    register int t39;
    register int t45;
    register int t46;
    int t59;
    register float u60;
    register float u63;
    register float u65;
    register float u66;
    register float u77;
    register float u69;
    register float u71;
    register float u72;
    int t87;
    register float u90;
    register float u93;
    register float u94;
    register float u103;
    register float u104;
    register float u133;
    register float u106;
    register float u108;
    register float u110;
    register float u125;
    register float u112;
    register float u119;
    register int t136;
    register int t138;
    register float u158;
    register float u159;
    register float u161;
    register float u163;
    register float u164;
    int t175;
    register float u178;
    register float u179;
    register float u180;
    register float u196;
    register float u184;
    register float u190;
    register float u199;
    register float u200;
    register int t204;
    register int t211;
    register int t209;
    register float u223;
    register float u214;
    register int t217;
    register float u226;
    register int t229;
    register float u261;
    register float u247;
    register float u253;
    register int t263;
    register int t264;
    register float u313;
    register float u314;
    register float u270;
    register float u271;
    register float u273;
    register float u275;
    register float u276;
    register float u277;
    register int t284;
    register int t287;
    register int t289;
    register int t292;
    register int t328;
    register int t331;
    register int t335;
    register float u337;
    register float u338;
    register float u340;
    register float u342;
    register float u343;
    register float u344;
    register int t351;
    register int t354;
    register int t356;
    register int t359;
    register int t391;
    register int t395;
    register int t408;
    register int t412;
    register float u459;
    register float u460;
    register float u414;
    register float u415;
    register float u417;
    register float u419;
    register float u420;
    register float u421;
    register int t428;
    register int t431;
    register int t433;
    register int t436;
    register float u617;
    register float u604;
    register int t550;
    register int t561;
    register int t558;
    register int t565;
    register int t568;
    register int t571;
    register float u573;
    register float u574;
    register int t577;
    register float u579;
    register float u580;
    register int t622;
    register int t624;
    register int t625;
    register int t628;
    register float u642;
    register float u658;
    register int t679;
    register int t732;
    register int t733;
    register int t734;
    register float u738;
    register int t1038;
    register int t1039;
    register int t1040;
    register float u1046;
    register int t1019;
    register int t744;
    register int t745;
    register int t746;
    register int t747;
    register int t764;
    register int t792;
    register float u818;
    register float u819;
    register float u821;
    register float u823;
    register float u828;
    register float u847;
    register int t848;
    register float u849;
    register float u865;
    register float u879;
    register float u880;
    register int t881;
    register float u884;
    register float u887;
    register float u888;
    register float u889;
    register float u890;
    register int t895;
    register float u904;
    register float u905;
    register float u906;
    register float u918;
    register float t908;
    register float u909;
    register int t910;
    register float u935;
    register int t949;
    register float t974;
    register int t975;
    register int t996;
    register int t1152;
    register int t1153;
    register int t1154;
    register float u1158;
    register int t1051;
    register int t1053;
    register int t1054;
    register int t1134;
    register float u1140;
    register int t1057;
    register int t1063;
    register int t1064;
    register float u1066;
    register float u1078;
    register int t1098;
    register int t1099;
    register float u1101;
    register float u1112;
    register int t1235;
    register int t1239;
    register float u1264;
    register int t1265;
    register int t1267;
    register int t1269;
    register int t1270;
    register float u1287;
    register int t30;
    register int t37;
    register float u84;
    register int t1247;
    register int t1248;
    register int t1249;
    register float u1255;
    register int t1214;
    register int t1215;
    register int t1216;
    register float u1222;
    register int t1191;
    register int t1192;
    register int t1193;
    register float u1199;
    register int t141;
    register float u236;
    register int t241;
    register int t242;
    register int t243;
    register int t244;
    register int t266;
    register int t267;
    register int t268;
    register float u495;
    register float u496;
    register float u302;
    register float u303;
    register float u326;
    register float u483;
    register float u484;
    register float u402;
    register float u403;
    register float u386;
    register float u387;
    register float u376;
    register float u377;
    register float u367;
    register float u368;
    register float u471;
    register float u472;
    register float u447;
    register float u448;
    register int t500;
    register int t534;
    register int t551;
    register int t552;
    register int t556;
    register int t563;
    register float u592;
    register int t1171;
    register int t1172;
    register int t1173;
    register float u1179;
    register int t696;
    register int t697;
    register int t698;
    register float u702;
    register int t655;
    register float u675;
    register int t676;
    register int t707;
    register int t708;
    register int t717;
    register int t718;
    register int t719;
    register float u723;
    register int t1020;
    register int t1021;
    register float u1027;
    register int t757;
    register int t758;
    register float u855;
    register int t858;
    register float u876;
    register float u877;
    register int t960;
    register int t978;
    register int t979;
    register int t1011;
    register int t1004;
    register int t1135;
    register int t1136;
    register int t1122;
    register float u1125;
    register int t1088;
    register float u1091;
    register int t1065;
    register int t1073;
    register int t1100;
    register int t1108;
    register int t1261;
    register int t1262;
    register int t1317;
    register int t1318;
    register int t1319;
    register int t1301;
    register float u1307;
    register int t1333;
    register int t1334;
    register int t1335;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102458)));
    *(unsigned char *)(((0xD48 + a4) + 0x0)) = (*(signed char *)(((0xD44 + a4) + 0x0)));
    *(unsigned char *)(((0xD48 + a4) + 0x1)) = (*(signed char *)(((0xD44 + a4) + 0x1)));
    *(unsigned char *)(((0xD48 + a4) + 0x2)) = (*(signed char *)(((0xD44 + a4) + 0x2)));
    *(unsigned char *)(((0xD48 + a4) + 0x3)) = (*(signed char *)(((0xD44 + a4) + 0x3)));
    if (((*(int *)0x8C295DDC) & 16) != 0) {
        t10 = *(int *)0x8C295DD8;
        t11 = *(int *)((a4 + 0xB5C));
        *(unsigned char *)(((0xD44 + a4) + 0x0)) = (*(signed char *)((((((t10 << 2) << 1) + 0x8C297A3C) + (t11 << 2)) + 0x0)));
        *(unsigned char *)(((0xD44 + a4) + 0x1)) = (*(signed char *)((((((t10 << 2) << 1) + 0x8C297A3C) + (t11 << 2)) + 0x1)));
        *(unsigned char *)(((0xD44 + a4) + 0x2)) = (*(signed char *)((((((t10 << 2) << 1) + 0x8C297A3C) + (t11 << 2)) + 0x2)));
        *(unsigned char *)(((0xD44 + a4) + 0x3)) = (*(signed char *)((((((t10 << 2) << 1) + 0x8C297A3C) + (t11 << 2)) + 0x3)));
    } else {
        if (((*(int *)0x8C287B3C) & 0x1) != 0) {
            t19 = *(int *)((a4 + 0xB5C));
            t20 = *(int *)0x8C287C1C;
            *(unsigned char *)(((0xD44 + a4) + 0x0)) = (*(signed char *)(((((t19 * 0x960) + 0x8C2920C8) + (t20 << 2)) + 0x0)));
            *(unsigned char *)(((0xD44 + a4) + 0x1)) = (*(signed char *)(((((t19 * 0x960) + 0x8C2920C8) + (t20 << 2)) + 0x1)));
            *(unsigned char *)(((0xD44 + a4) + 0x2)) = (*(signed char *)(((((t19 * 0x960) + 0x8C2920C8) + (t20 << 2)) + 0x2)));
            *(unsigned char *)(((0xD44 + a4) + 0x3)) = (*(signed char *)(((((t19 * 0x960) + 0x8C2920C8) + (t20 << 2)) + 0x3)));
        } else {
            if ((*(int *)(((((*(int *)((a4 + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
                t28 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x0);
                if (t28 != 0) {
                    if (((*(int *)0x8C287D5C) == 3) && (t30 = *(int *)0x8C2FBEB0, (t30 & 2) != 0)) {
                        miniPlayerInput(a4);
                    } else {
                        t32 = ((int (*)(int))(playerCpuInput))(a4);
                    }
                } else {
                    playerReadPad(a4);
                }
            } else {
                if (((*(int *)0x8C287D5C) == 3) && (t37 = *(int *)0x8C2FBEB0, (t37 & 2) != 0)) {
                    miniPlayerInput(a4);
                } else {
                    t39 = ((int (*)(int, int, int, int, float, float, float))(playerCpuInput))(a4, a5, a6, a7, f4, f5, f6);
                }
            }
            if ((*(int *)0x8C287C60) != 0) {
                *(unsigned short *)((a4 + 0xD44)) = 0x0;
                *(unsigned short *)((a4 + 0xD46)) = 0x0;
            }
            t45 = *(int *)((a4 + 0xB5C));
            t46 = *(int *)0x8C287C1C;
            *(unsigned char *)(((((t45 * 0x960) + 0x8C2920C8) + (t46 << 2)) + 0x0)) = (*(signed char *)(((0xD44 + a4) + 0x0)));
            *(unsigned char *)(((((t45 * 0x960) + 0x8C2920C8) + (t46 << 2)) + 0x1)) = (*(signed char *)(((0xD44 + a4) + 0x1)));
            *(unsigned char *)(((((t45 * 0x960) + 0x8C2920C8) + (t46 << 2)) + 0x2)) = (*(signed char *)(((0xD44 + a4) + 0x2)));
            *(unsigned char *)(((((t45 * 0x960) + 0x8C2920C8) + (t46 << 2)) + 0x3)) = (*(signed char *)(((0xD44 + a4) + 0x3)));
        }
    }
    t59 = *(short *)((a4 + 0xD46));
    u60 = *(float *)0x8C23D204;
    if (((((((0x10 & t59) == 0)) ? 1 : 0) ^ 0x1) - (-(((((t59 & 0x20) == 0)) ? 1 : 0) - 1))) == 1) {
        u63 = ((float)((((((0x10 & t59) == 0)) ? 1 : 0) ^ 0x1) - (-(((((t59 & 0x20) == 0)) ? 1 : 0) - 1))) * (*(float *)(((0xB00 + a4) + 0x0))));
        u65 = ((u63 * 0.800000012f) - (*(float *)(((0xB98 + a4) + 0x0))));
        u66 = (*(float *)((a4 + 0xB98)));
        u66 = u66 + 0.0199999996f * (u65 * u60);
        *(float *)((a4 + 0xB98)) = u66;
        u84 = (u65 * u60);
    } else {
        u77 = (float)((((((0x10 & t59) == 0)) ? 1 : 0) ^ 0x1) - (-(((((t59 & 0x20) == 0)) ? 1 : 0) - 1)));
        if (((((((0x10 & t59) == 0)) ? 1 : 0) ^ 0x1) - (-(((((t59 & 0x20) == 0)) ? 1 : 0) - 1))) == -1) {
            u69 = ((float)((((((0x10 & t59) == 0)) ? 1 : 0) ^ 0x1) - (-(((((t59 & 0x20) == 0)) ? 1 : 0) - 1))) * (*(float *)(((0xB00 + a4) + 0x0))));
            u71 = ((u69 * 0.949999988f) - (*(float *)(((0xB98 + a4) + 0x0))));
            u72 = (*(float *)((a4 + 0xB98)));
            u72 = u72 + 0.0199999996f * (u71 * u60);
            *(float *)((a4 + 0xB98)) = u72;
            u77 = (u71 * u60);
        }
        u84 = u77;
    }
    t87 = *(short *)((a4 + 0xD46));
    if (((((((0x40 & t87) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & t87) == 0)) ? 1 : 0) - 1))) != 0) {
        u90 = ((float)((((((0x40 & t87) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & t87) == 0)) ? 1 : 0) - 1))) * (*(float *)(((0xB00 + a4) + 0x0))));
        u93 = ((u90 * 1.20000005f) - (*(float *)(((0xB90 + a4) + 0x0))));
        u94 = (*(float *)((a4 + 0xB90)));
        u94 = u94 + 0.0199999996f * (u93 * (*(float *)0x8C23D204));
        *(float *)((a4 + 0xB90)) = u94;
    }
    u103 = *(float *)((a4 + 0xB00));
    u104 = *(float *)((a4 + 0xB98));
    u133 = (u104 * u103);
    if (0.5f > (u104 * u103)) {
        u106 = *(float *)((a4 + 0xB90));
        u108 = (-u106);
        if (!(0.0f > u106)) {
            u108 = (*(float *)((a4 + 0xB90)));
        }
        u110 = 0.829999983f;
        u110 = u110 + 0.660000026f * (u104 * u103);
        u125 = (u104 * u103);
        if (u108 > u110) {
            u112 = *(float *)((a4 + 0xB90));
            u119 = 0.829999983f;
            u119 = u119 + 0.660000026f * ((*(float *)((a4 + 0xB98))) * (*(float *)((a4 + 0xB00))));
            *(float *)((a4 + 0xB90)) = ((float)((u112 > 0.0f) - (0.0f > u112)) * u119);
            u125 = u112;
        }
        u133 = u125;
    }
    t136 = *(int *)((a4 + 0xB68));
    if (t136 != 0) {
        if (t136 != 1) {
            if (t136 == 2) {
                t138 = *(int *)((a4 + 0xB5C));
                *(int *)((int)stk + 12) = (((int)stk + 16) + 0x38);
                serveGetPos(t138, 0x20, 0xF49C0, 0x10E798, (((int)stk + 16) + 0x38));
                if (((*(int *)0x8C287D5C) == 3) && (t141 = *(int *)0x8C2FBEA8, t141 == 2)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x38)) = *(struct mv3 *)((0xAE8 + a4)); }
                }
                if ((*(int *)((a4 + 0x20))) == ((*(int *)0x8C2873D0) + (*(int *)((((((*(int *)(((int)stk + 16))) << 2) << 2) + 0x8C105F1C) + 0x0))))) {
                    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 16)));
                } else {
                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                }
                *(unsigned int *)((a4 + 0xC78)) = ((*(int *)((a4 + 0xC78))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                if ((*(int *)0x8C421F60) != 0) {
                    *(unsigned int *)((a4 + 0xC78)) = 0x1;
                }
                *(unsigned int *)(((int)stk + 40)) = 0x0;
                u158 = *(float *)((a4 + 0xAE8));
                u159 = *(float *)0x8C295588;
                u161 = ((-u158) + u159);
                if (!(0.0f > (u158 - u159))) {
                    u161 = (u158 - u159);
                }
                if (u161 > 1.0f) {
                    u163 = *(float *)((a4 + 0xAE8));
                    u164 = *(float *)0x8C295588;
                    *(float *)0x8C295588 = (u163 + (float)(((u164 - u163) > 0.0f) - (0.0f > (u164 - u163))));
                }
                t175 = *(short *)((a4 + 0xD46));
                u178 = (*(float *)0x8C295588);
                u178 = u178 + (*(float *)((a4 + 0xB00))) * (float)((((((((0x40 & t175) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & t175) == 0)) ? 1 : 0) - 1))) << 2) + ((((((0x40 & t175) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & t175) == 0)) ? 1 : 0) - 1))));
                *(float *)((a4 + 0xB6C)) = u178;
                u179 = *(float *)((a4 + 0xB6C));
                u180 = (-u179);
                if (!(0.0f > u179)) {
                    u180 = u179;
                }
                u196 = -10.0f;
                if (u180 > ((*(float *)0x8C287B40) + -10.0f)) {
                    u184 = *(float *)((a4 + 0xAE8));
                    u190 = -10.0f;
                    u190 = u190 + (*(float *)0x8C287B40) * (float)((u184 > 0.0f) - (0.0f > u184));
                    *(float *)((a4 + 0xB6C)) = u190;
                    *(unsigned int *)(((int)stk + 40)) = 0x1;
                    u196 = u190;
                }
                u199 = *(float *)((a4 + 0xB6C));
                u200 = (-u199);
                if (!(0.0f > u199)) {
                    u200 = u199;
                }
                if (!(7.0f > u200)) {
                    t204 = (u199 > 0.0f) - (0.0f > u199);
                    t211 = 0x1;
                    if ((*(float *)(((int)stk + 72))) > 0.0f) {
                    } else {
                        t209 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 72)))) {
                            t209 = 0xFFFFFFFF;
                        }
                        t211 = t209;
                    }
                    u223 = u199;
                    if (t204 != t211) {
                        u214 = *(float *)(((int)stk + 72));
                        t217 = (u214 > 0.0f) - (0.0f > u214);
                        *(float *)((a4 + 0xB6C)) = (float)(((t217 << 2) << 1) - t217);
                        *(unsigned int *)(((int)stk + 40)) = 0x1;
                        u223 = u214;
                    }
                    u236 = u223;
                } else {
                    u226 = *(float *)(((int)stk + 72));
                    t229 = (u226 > 0.0f) - (0.0f > u226);
                    *(float *)((a4 + 0xB6C)) = (float)(((t229 << 2) << 1) - t229);
                    *(unsigned int *)(((int)stk + 40)) = 0x1;
                    u236 = u226;
                }
                u261 = u236;
                if (((*(int *)(((((*(int *)((a4 + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) && (t241 = *(int *)(((int)stk + 16)), t242 = *(int *)0x8C2873D0, t243 = *(int *)((((t241 << 2) << 2) + 0x8C105F1C)), t244 = *(int *)((a4 + 0x20)), t244 == (t242 + t243))) {
                    u247 = *(float *)(((0xAF0 + a4) + 0x0));
                    u253 = (*(float *)((a4 + 0xAF0)));
                    u253 = u253 + 0.200000003f * (((float)((u247 > 0.0f) - (0.0f > u247)) * 124.849998f) - u247);
                    *(float *)((a4 + 0xAF0)) = u253;
                    u261 = u247;
                }
                t263 = *(int *)((a4 + 0x20));
                *(unsigned int *)(((int)stk + 52)) = t263;
                t264 = *(int *)0x8C2873D0;
                *(unsigned int *)(((int)stk + 48)) = t264;
                if ((t263 != (t264 + (*(int *)0x8C105F8C))) && (t266 = *(int *)(((int)stk + 48)), t267 = *(int *)0x8C105F9C, t268 = *(int *)(((int)stk + 52)), t268 != (t266 + t267))) {
                    u313 = u261;
                    u314 = u196;
                    if ((*(int *)(((int)stk + 40))) == 0) {
                        u270 = *(float *)((a4 + 0xAE8));
                        u271 = *(float *)((a4 + 0xB6C));
                        u273 = ((-u270) + u271);
                        if (!(0.0f > (u270 - u271))) {
                            u273 = (u270 - u271);
                        }
                        if (u273 > (1.0f + 1.0f)) {
                            u275 = *(float *)0x8C23D204;
                            u276 = *(float *)((a4 + 0xB6C));
                            u277 = *(float *)((a4 + 0xAE8));
                            if (0.0f > ((float)(((u277 - u276) > 0.0f) - (0.0f > (u277 - u276))) * (*(float *)((a4 + 0xB00))))) {
                                t284 = (*(int *)0x8C2873D0);
                                *(int *)((int)stk + 12) = t284;
                                t287 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((*(int *)((a4 + 0xD4C))) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t284, (u275 * 1.5f), (u277 - u276));
                            } else {
                                t289 = (*(int *)0x8C2873D0);
                                *(int *)((int)stk + 12) = t289;
                                t292 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((0x1 & ((*(int *)((a4 + 0xD4C))) + 0x1)) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t289, (u275 * 1.5f), (u277 - u276));
                            }
                        } else {
                            u302 = (u270 - u271);
                            u303 = u271;
                        }
                        u313 = u302;
                        u314 = u303;
                    }
                    u495 = u313;
                    u496 = u314;
                } else {
                    if (!(0.0f > ((*(float *)((a4 + 0xB6C))) - (*(float *)((a4 + 0xAE8)))))) {
                        u326 = ((*(float *)((a4 + 0xB6C))) - (*(float *)((a4 + 0xAE8))));
                    } else {
                        u326 = ((-(*(float *)((a4 + 0xB6C)))) + (*(float *)((a4 + 0xAE8))));
                    }
                    if ((1.0f + 1.0f) > u326) {
                        t328 = motionIsEnd(a4);
                        if (t328 == 0) {
                            if ((*(int *)(((int)stk + 40))) != 0) {
                                t331 = (*(int *)0x8C2873D0);
                                *(int *)((int)stk + 12) = t331;
                                t335 = ((int (*)(int, int, int, int, int, float))(motionChange))(a4, (*(int *)((((((*(int *)(((int)stk + 16))) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t331, (*(float *)0x8C23D204));
                                *(unsigned int *)((a4 + 0xB68)) = 0x1;
                            } else {
                                if ((*(int *)(((int)stk + 40))) == 0) {
                                    u337 = *(float *)((a4 + 0xAE8));
                                    u338 = *(float *)((a4 + 0xB6C));
                                    u340 = ((-u337) + u338);
                                    if (!(0.0f > (u337 - u338))) {
                                        u340 = (u337 - u338);
                                    }
                                    if (u340 > (1.0f + 1.0f)) {
                                        u342 = *(float *)0x8C23D204;
                                        u343 = *(float *)((a4 + 0xB6C));
                                        u344 = *(float *)((a4 + 0xAE8));
                                        if (0.0f > ((float)(((u344 - u343) > 0.0f) - (0.0f > (u344 - u343))) * (*(float *)((a4 + 0xB00))))) {
                                            t351 = (*(int *)0x8C2873D0);
                                            *(int *)((int)stk + 12) = t351;
                                            t354 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((*(int *)((a4 + 0xD4C))) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t351, (u342 * 1.5f), (u344 - u343));
                                        } else {
                                            t356 = (*(int *)0x8C2873D0);
                                            *(int *)((int)stk + 12) = t356;
                                            t359 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((0x1 & ((*(int *)((a4 + 0xD4C))) + 0x1)) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t356, (u342 * 1.5f), (u344 - u343));
                                        }
                                    } else {
                                        u367 = (u337 - u338);
                                        u368 = u338;
                                    }
                                    u376 = u367;
                                    u377 = u368;
                                }
                                u386 = u376;
                                u387 = u377;
                            }
                            u402 = u386;
                            u403 = u387;
                        } else {
                            t391 = (*(int *)0x8C2873D0);
                            *(int *)((int)stk + 12) = t391;
                            t395 = ((int (*)(int, int, int, int, int, float))(motionChange))(a4, (*(int *)((((((*(int *)(((int)stk + 16))) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t391, (*(float *)0x8C23D204));
                            *(unsigned int *)((a4 + 0xB68)) = 0x1;
                        }
                        u483 = u402;
                        u484 = u403;
                    } else {
                        if ((*(int *)(((int)stk + 40))) != 0) {
                            t408 = (*(int *)0x8C2873D0);
                            *(int *)((int)stk + 12) = t408;
                            t412 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)((((((*(int *)(((int)stk + 16))) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t408, (*(float *)0x8C23D204), u196);
                            *(unsigned int *)((a4 + 0xB68)) = 0x1;
                        } else {
                            u459 = u261;
                            u460 = u196;
                            if ((*(int *)(((int)stk + 40))) == 0) {
                                u414 = *(float *)((a4 + 0xAE8));
                                u415 = *(float *)((a4 + 0xB6C));
                                u417 = ((-u414) + u415);
                                if (!(0.0f > (u414 - u415))) {
                                    u417 = (u414 - u415);
                                }
                                if (u417 > (1.0f + 1.0f)) {
                                    u419 = *(float *)0x8C23D204;
                                    u420 = *(float *)((a4 + 0xB6C));
                                    u421 = *(float *)((a4 + 0xAE8));
                                    if (0.0f > ((float)(((u421 - u420) > 0.0f) - (0.0f > (u421 - u420))) * (*(float *)((a4 + 0xB00))))) {
                                        t428 = (*(int *)0x8C2873D0);
                                        *(int *)((int)stk + 12) = t428;
                                        t431 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((*(int *)((a4 + 0xD4C))) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t428, (u419 * 1.5f), (u421 - u420));
                                    } else {
                                        t433 = (*(int *)0x8C2873D0);
                                        *(int *)((int)stk + 12) = t433;
                                        t436 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((((0x1 & ((*(int *)((a4 + 0xD4C))) + 0x1)) + 0x7) << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x1, t433, (u419 * 1.5f), (u421 - u420));
                                    }
                                } else {
                                    u447 = (u414 - u415);
                                    u448 = u415;
                                }
                                u459 = u447;
                                u460 = u448;
                            }
                            u471 = u459;
                            u472 = u460;
                        }
                        u483 = u471;
                        u484 = u472;
                    }
                    u495 = u483;
                    u496 = u484;
                }
                u617 = u495;
                if (((*(int *)0x8C421F60) == 0) && (t500 = *(int *)0x8C287B4C, (int)t500 >= 0)) {
                } else {
                    u604 = u495;
                    if (((*(short *)((a4 + 0xD44))) == 0) && (t534 = *(int *)((a4 + 0xC78)), (int)t534 >= 0)) {
                    } else {
                        t550 = *(int *)0x8C287D5C;
                        t561 = 0x3;
                        if (((*(int *)((a4 + 0xCF0))) == 0) && ((t551 = *(short *)((a4 + 0xD46)), (t551 & 32) != 0) && (t552 = *(short *)((a4 + 0xD44)), t552 == 3))) {
                            t558 = 0x0;
                            if ((t550 == 3) && (t556 = *(int *)((a4 + 0xB5C)), t556 != 0)) {
                                t558 = 0x1;
                            }
                            t561 = (t558 + 0x9);
                        }
                        t565 = t561;
                        if ((t550 == 3) && (t563 = *(int *)0x8C2FBEA8, t563 == 1)) {
                            t565 = 0x9;
                        }
                        t568 = (*(int *)0x8C2873D0);
                        *(int *)((int)stk + 12) = t568;
                        t571 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)(((((t565 << 2) << 2) + 0x8C105F1C) + 0x0))), 0xA, 0x0, t568, (*(float *)0x8C23D204), u496);
                        *(unsigned int *)(((int)stk + 44)) = t565;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB90 + a4)) = *(struct mv3 *)(0x8C1016D4); }
                        *(float *)((a4 + 0xB98)) = ((*(float *)((a4 + 0xB00))) * 0.800000012f);
                        *(unsigned int *)((a4 + 0xC78)) = 0x8C;
                        *(unsigned int *)((a4 + 0xB68)) = 0x5;
                        *(unsigned int *)((a4 + 0xCC0)) = 0x1;
                        *(float *)0x8C291FA4 = 1.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F98) = *(struct mv3 *)((0xAE8 + a4)); }
                        *(float *)((a4 + 0xC90)) = 0.00470588217f;
                        u573 = *(float *)((a4 + 0xAF0));
                        u574 = *(float *)((a4 + 0xAE8));
                        t577 = (u574 > 0.0f) - (0.0f > u574);
                        *(int *)((int)stk + 12) = (0xCA4 + a4);
                        *(Stk3 *)((0xCA4 + a4)) = vecMake((u574 - (float)(((t577 << 2) + t577) << 1)), 10.0f, u573);
                        u579 = *(float *)((a4 + 0xAE8));
                        u580 = (-u579);
                        if (!(0.0f > u579)) {
                            u580 = u579;
                        }
                        *(float *)((a4 + 0xD00)) = u580;
                        if (5.0f > (*(float *)((a4 + 0xD00)))) {
                            *(float *)((a4 + 0xD00)) = 5.0f;
                        }
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x2);
                        if ((*(int *)0x8C287D5C) != 3) {
                            padLcdSetMode(0x14, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
                        } else {
                            u592 = 5.0f;
                        }
                        u604 = u592;
                    }
                    u617 = u604;
                }
                if ((*(short *)((a4 + 0xD46))) == 0) {
                    *(unsigned int *)((a4 + 0xCF0)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0xCF0)) = 0x1;
                }
                u1199 = u617;
            } else {
                if (t136 == 5) {
                    t622 = *(int *)0x8C2873D0;
                    t624 = *(int *)0x8C2873D0;
                    t625 = 0x3;
                    if ((*(int *)((a4 + 0x20))) == (0xF49C0 + t622)) {
                        t625 = 0x9;
                    }
                    t628 = t625;
                    if ((*(int *)((a4 + 0x20))) == (0x10E798 + t624)) {
                        t628 = 0xA;
                    }
                    if (t628 == 3) {
                        if ((*(int *)((a4 + 0xCC0))) == 1) {
                            if ((*(int *)0x8C287C60) == 0) {
                                u642 = (*(float *)((a4 + 0xC90)));
                                u642 = u642 + 0.0588235334f * ((*(float *)(((0xC90 + a4) + 0x0))) * (*(float *)0x8C23D204));
                                *(float *)((a4 + 0xC90)) = u642;
                            }
                            if ((*(float *)((a4 + 0xC90))) > 1.0f) {
                                *(float *)((a4 + 0xC90)) = 1.0f;
                                *(unsigned int *)((a4 + 0xCC0)) = 0x2;
                            }
                        } else {
                            if (((*(int *)0x8C287C60) == 0) && (t655 = *(int *)((a4 + 0xCC0)), t655 == 2)) {
                                u658 = (1.0f - ((*(float *)0x8C23D204) * 0.100000001f));
                                *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * u658);
                            }
                        }
                        if ((((*(int *)((a4 + 0xCC0))) != 2) && (u675 = *(float *)((a4 + 0xC90)), !(u675 > 0.100000001f))) || (t676 = *(short *)((a4 + 0xD44)), t676 == 0)) {
                        } else {
                            *(unsigned int *)((a4 + 0xCC0)) = 0x3;
                            t679 = 0x3;
                            if ((*(short *)((a4 + 0xD44))) == 2) {
                                *(float *)0x8C291F64 = 1.0f;
                                t679 = 0x5;
                            }
                            *(unsigned int *)((a4 + 0x20)) = ((*(int *)0x8C2873D0) + (*(int *)(((((t679 << 2) << 2) + 0x8C105F1C) + 0x0))));
                        }
                        playerDrawMarker(a4, 0x20, (0xF49C0 + t622), (0x10E798 + t624), *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16));
                    } else {
                        t696 = 0x20;
                        t697 = (0xF49C0 + t622);
                        t698 = (0x10E798 + t624);
                        u702 = u133;
                    }
                    *(unsigned int *)(((int)stk + 44)) = t628;
                    t732 = t696;
                    t733 = t697;
                    t734 = t698;
                    u738 = u702;
                    if ((((*(int *)0x8C421F60) == 0) && (t707 = *(int *)0x8C287B3C, (t707 & 1) == 0)) || (t708 = *(int *)0x8C287C60, t708 != 0)) {
                    } else {
                        if ((*(float *)((a4 + 0xC))) == (float)((*(int *)((((t628 << 2) << 2) + 0x8C105F24))) - 20)) {
                            exprPlayB(a4, 0x0, 0x1);
                        } else {
                            t717 = t696;
                            t718 = t697;
                            t719 = t698;
                            u723 = u702;
                        }
                        t732 = t717;
                        t733 = t718;
                        t734 = t719;
                        u738 = u723;
                    }
                    t1038 = t732;
                    t1039 = t733;
                    t1040 = t734;
                    u1046 = u738;
                    if ((*(int *)0x8C287C60) != 0) {
                    } else {
                        t1019 = t732;
                        if (!((*(float *)((a4 + 0xC))) > (float)(*(int *)((((t628 << 2) << 2) + 0x8C105F24))))) {
                            t1020 = t733;
                            t1021 = t734;
                            u1027 = u738;
                        } else {
                            *(unsigned int *)((a4 + 0xB68)) = 0x8;
                            *(unsigned int *)((a4 + 0xC40)) = 0x0;
                            *(unsigned int *)0x8C291F70 = 0x0;
                            *(unsigned int *)((a4 + 0xC50)) = 0x63;
                            *(unsigned int *)((a4 + 0xC54)) = 0x63;
                            t744 = 0xC54;
                            t745 = 0x8;
                            t746 = ((t628 << 2) << 2);
                            t747 = 0x8C287D84;
                            for (;;) {
                                if ((unsigned int)t747 >= (unsigned int)0x8C28B364) {
                                    break;
                                }
                                t744 = 0xB60;
                                t746 = 0x5;
                                t745 = (*(int *)((t747 + t744)));
                                t745 = (t745 & 0xFFFFFFF7);
                                *(unsigned int *)((t747 + t744)) = t745;
                                t744 = 0xD50;
                                *(unsigned int *)((t747 + t744)) = t746;
                                t747 = (t747 + 0xD78);
                            }
                            *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFE);
                            *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFD);
                            *(unsigned int *)0x8C291F78 = (((*(int *)0x8C291F78) | 0x4) & 0xFFFFFFF7);
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x2);
                            *(unsigned int *)0x8C1D126C = 0x0;
                            if (t628 == 3) {
                                *(unsigned int *)0x8C291F74 = 0x8;
                            } else {
                                *(unsigned int *)0x8C291F74 = 0x1D;
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F3C) = *(struct mv3 *)(0x8C291F30); }
                            if (((*(int *)0x8C287D5C) == 2) && ((t757 = *(int *)0x8C287B3C, (t757 & 1) == 0) && (t758 = *(int *)((a4 + 0xB5C)), (t758 & 1) == 0))) {
                                *(unsigned int *)0x8C2FBCB0 = ((*(int *)0x8C2FBCB0) + 0x1);
                                if ((*(float *)((a4 + 0xC90))) == 1.0f) {
                                    *(unsigned int *)0x8C2FBCB4 = ((*(int *)0x8C2FBCB4) + 0x1);
                                    if ((*(float *)((a4 + 0xC90))) == 1.0f) {
                                        *(float *)((a4 + 0xC90)) = (1.0f + 1.0f);
                                        if (((*(int *)0x8C287B3C) & 0x1) == 0) {
                                            t764 = *(int *)((a4 + 0xB5C));
                                            *(unsigned int *)(((((((t764 & 0x1) << 2) << 1) + (t764 & 0x1)) << 2) + 0x8C287B9C)) = ((*(int *)(((((((t764 & 0x1) << 2) << 1) + (t764 & 0x1)) << 2) + 0x8C287B9C))) + 0x1);
                                        }
                                        *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x10000);
                                    } else {
                                        *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 1.5f);
                                    }
                                } else {
                                    *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 1.5f);
                                }
                            } else {
                                if ((*(float *)((a4 + 0xC90))) == 1.0f) {
                                    *(float *)((a4 + 0xC90)) = (1.0f + 1.0f);
                                    if (((*(int *)0x8C287B3C) & 0x1) == 0) {
                                        t792 = *(int *)((a4 + 0xB5C));
                                        *(unsigned int *)(((((((t792 & 0x1) << 2) << 1) + (t792 & 0x1)) << 2) + 0x8C287B9C)) = ((*(int *)(((((((t792 & 0x1) << 2) << 1) + (t792 & 0x1)) << 2) + 0x8C287B9C))) + 0x1);
                                    }
                                    *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x10000);
                                } else {
                                    *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 1.5f);
                                }
                            }
                            u818 = *(float *)((a4 + 0xAE8));
                            u819 = (-u818);
                            if (!(0.0f > u818)) {
                                u819 = u818;
                            }
                            if (u819 > 15.0f) {
                                u821 = *(float *)(((0xAE8 + a4) + 0x0));
                                u823 = (u821 + -10.0f);
                                if (!(0.0f > ((-u821) + 10.0f))) {
                                    u823 = ((-u821) + 10.0f);
                                }
                                u828 = ((-(((u823 / (*(float *)0x8C287B40)) * 100.0f) / 255.0f)) + 1.0f);
                                *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * u828);
                            }
                            if ((*(float *)0x8C291F64) != 0.0f) {
                                *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 0.400000006f);
                            }
                            if (t628 == 3) {
                                u847 = *(float *)((a4 + 0xC90));
                                *(int *)((int)stk + 12) = 0x8C291F48;
                                u855 = ((-(u847 * 0.474999994f)) + 0.560000002f);
                            } else {
                                t848 = *(int *)0x8C291F74;
                                u849 = *(float *)((((((t848 << 1) + t848) << 2) << 1) + 0x8C105FCC));
                                *(int *)((int)stk + 12) = 0x8C291F48;
                                u855 = u849;
                            }
                            *(Stk3 *)(0x8C291F48) = vecMake(0.0f, u855, 0.0f);
                            *(float *)0x8C291F54 = 0.0f;
                            if (((*(int *)0x8C287D5C) == 3) && (t858 = *(int *)0x8C2FBEB0, (t858 & 4) != 0)) {
                                miniOnEvent(0x3, a4);
                                *(float *)(((int)stk + 36)) = ((*(float *)0x8C287B40) * (*(float *)((a4 + 0xB90))));
                                u876 = 118.849998f;
                                u877 = (*(float *)((a4 + 0xB00)));
                            } else {
                                u865 = *(float *)((a4 + 0xAE8));
                                *(float *)(((int)stk + 36)) = (((float)(-((u865 > 0.0f) - (0.0f > u865))) + (*(float *)((a4 + 0xB90)))) * 20.5750008f);
                                u876 = 64.0f;
                                u877 = (*(float *)((a4 + 0xB00)));
                            }
                            u879 = 1.0f;
                            u879 = u879 + u877 * (*(float *)((a4 + 0xB98)));
                            u880 = ((u877 * u876) / (1.0f + 1.0f));
                            *(float *)(((int)stk + 32)) = (u880 * u879);
                            t881 = *(int *)0x8C291F74;
                            u884 = *(float *)((((-(((((*(float *)0x8C291F64) == 0.0f)) ? 1 : 0) - 1)) << 2) + (((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10243C)));
                            u887 = 0.839999974f;
                            u887 = u887 + 0.100000001f * (*(float *)((a4 + 0xC90)));
                            u888 = ((*(float *)((((((t881 << 1) + t881) << 2) << 1) + 0x8C105FD8))) * u884);
                            u889 = (u888 * u887);
                            *(float *)(((int)stk + 28)) = (u889 * 0.163333341f);
                            *(float *)0x8C291F94 = (u889 * 0.163333341f);
                            u890 = *(float *)0x8C291F4C;
                            t895 = nlArcTan2(((*(float *)(((int)stk + 36))) - (*(float *)0x8C291F3C)), ((*(float *)(((int)stk + 32))) - (*(float *)0x8C291F44)));
                            *(int *)((int)stk + 12) = 0x8C291F48;
                            vecFromYaw(t895, 0x0, 0x0, 0x0, 0x8C291F48);
                            *(float *)(((int)stk + 56)) = (vecDistXZf((*(float *)0x8C291F3C), (*(float *)0x8C291F44), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 32)))));
                            u904 = *(float *)(((int)stk + 28));
                            u905 = ((*(float *)(((int)stk + 28))) * (*(float *)0x8C291F34));
                            u906 = (u905 * (1.0f + 1.0f));
                            u906 = u906 + u890 * u890;
                            *(float *)(((int)stk + 20)) = (((-u890) - _builtin_sqrtf(u906)) / (-(u904 * 1.0f)));
                            *(float *)(((int)stk + 24)) = 0.0f;
                            *(unsigned int *)(((int)stk + 16)) = 0x1;
                            u918 = (((-u890) - _builtin_sqrtf(u906)) / (-(u904 * 1.0f)));
                            if ((((-u890) - _builtin_sqrtf(u906)) / (-(u904 * 1.0f))) > 1.0f) {
                                for (;;) {
                                    t908 = nlPow(0.99000001f, (float)(*(int *)(((int)stk + 16))));
                                    u909 = *(float *)(((int)stk + 24));
                                    *(float *)(((int)stk + 24)) = (u909 + t908);
                                    t910 = *(int *)(((int)stk + 16));
                                    *(unsigned int *)(((int)stk + 16)) = (t910 + 0x1);
                                    if (!((*(float *)(((int)stk + 20))) > (float)(t910 + 0x1))) {
                                        break;
                                    }
                                }
                                u918 = (u909 + t908);
                            } else {
                                _builtin_sqrtf(u906);
                            }
                            nlScaleVector(0x8C291F48, 0x8C291F48, ((*(float *)(((int)stk + 56))) / (*(float *)(((int)stk + 24)))));
                            *(float *)0x8C291F4C = u890;
                            if ((*(float *)0x8C291F64) != 0.0f) {
                                nlPushUnitMatrix();
                                *(unsigned short *)(((int)stk + 16)) = ((nlArcTan2((*(float *)0x8C291F48), (*(float *)0x8C291F50))) + 0x4000);
                                if ((*(int *)((a4 + 0xD4C))) != 0) {
                                    *(unsigned short *)(((int)stk + 16)) = ((*(short *)(((int)stk + 16))) + 0x8000);
                                }
                                nlRotateAY((unsigned short)(*(short *)(((int)stk + 16))));
                                u935 = *(float *)((a4 + 0xC90));
                                *(int *)((int)stk + 12) = (((int)stk + 16) + 0x38);
                                *(Stk3 *)((((int)stk + 16) + 0x38)) = vecMake(0.0f, 0.0f, (u935 * 0.0250000004f));
                                nlCalcPoint((((int)stk + 16) + 0x38), (((int)stk + 16) + 0x38));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F64) = *(struct mv3 *)((((int)stk + 16) + 0x38)); }
                                nlPopMatrix(0x1);
                            }
                            *(unsigned int *)0x8C287B2C = 0x0;
                            *(unsigned int *)0x8C287AF8 = (*(int *)((a4 + 0xB5C)));
                            if ((*(int *)0x8C38BA70) != 0) {
                                t949 = *(int *)((a4 + 0xD6C));
                                if ((t949 != -1) && ((t949 != 4) && ((t949 != 5) && (t949 != 7)))) {
                                    if ((*(float *)0x8C291F64) != 0.0f) {
                                        t960 = (*(int *)((((((*(int *)((a4 + 0xD6C))) << 1) << 2) + 0x8C1023DC) + 0x4)));
                                    } else {
                                        t960 = (*(int *)((0x8C1023DC + (((*(int *)((a4 + 0xD6C))) << 1) << 2))));
                                    }
                                    nlsndSeqRequest(t960);
                                } else {
                                    seShotHit2(a4, 0x8C291F24);
                                }
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F48); }
                            t974 = vecLength(*(Stk3 *)(((int)stk + 4)));
                            t975 = (int)t974;
                            if ((int)(int)t974 > (int)0x7) {
                                t975 = 0x7;
                            }
                            if (((0x1 & (*(int *)0x8C287B3C)) == 0) && (t978 = *(int *)((a4 + 0xB5C)), t979 = *(int *)((((t978 << 2) + 0x8C287AE0) + 0x0)), t979 == 0)) {
                                *(int *)((int)stk + 12) = 0x5;
                                *(int *)((int)stk + 8) = 0xA;
                                padVibRequest((*(int *)((a4 + 0xB64))), t975, 0x7, 0x0, 0xA, 0x5);
                            }
                            if (t628 != 3) {
                            } else {
                                if (((*(short *)((a4 + 0xD46))) & 16) == 0) {
                                } else {
                                    t996 = 0x6;
                                    if ((*(int *)((a4 + 0x20))) == ((*(int *)0x8C2873D0) + (*(int *)0x8C105F4C))) {
                                        t996 = 0x4;
                                    }
                                    *(unsigned int *)((a4 + 0x20)) = ((*(int *)0x8C2873D0) + (*(int *)(((((t996 << 2) << 2) + 0x8C105F1C) + 0x0))));
                                    t1004 = 0x8C2873D0;
                                }
                                t1011 = t1004;
                            }
                            t1019 = t1011;
                        }
                        t1038 = t1019;
                        t1039 = t1020;
                        t1040 = t1021;
                        u1046 = u1027;
                    }
                    t1171 = t1038;
                    t1172 = t1039;
                    t1173 = t1040;
                    u1179 = u1046;
                } else {
                    t1152 = 0x20;
                    t1153 = 0xF49C0;
                    t1154 = 0x10E798;
                    u1158 = u133;
                    if (t136 == 8) {
                        t1051 = *(int *)0x8C2873D0;
                        t1053 = *(int *)0x8C2873D0;
                        t1054 = 0x3;
                        if ((*(int *)((a4 + 0x20))) == (0xF49C0 + t1051)) {
                            t1054 = 0x9;
                        }
                        t1134 = 0x20;
                        u1140 = u133;
                        if ((*(int *)((a4 + 0x20))) == (0x10E798 + t1053)) {
                            t1135 = (0xF49C0 + t1051);
                            t1136 = (0x10E798 + t1053);
                        } else {
                            t1057 = motionIsEnd(a4);
                            if (t1057 == 0) {
                                if ((float)(*(int *)((((t1054 << 2) << 2) + 0x8C105F28))) > (*(float *)((a4 + 0xC)))) {
                                } else {
                                    *(unsigned int *)((a4 + 0xB68)) = 0x0;
                                    *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFBFFFF);
                                    *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFFFDFF);
                                    t1063 = *(int *)0x8C2873D0;
                                    t1064 = *(int *)((a4 + 0x20));
                                    if ((t1064 != ((*(int *)0x8C105F4C) + t1063)) && ((t1065 = *(int *)0x8C105F6C, t1064 != (t1065 + t1063)) && (t1054 == 3))) {
                                        *(unsigned int *)((a4 + 0xB58)) = 0x21;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                        *(unsigned int *)((a4 + 0xBD4)) = 0x5;
                                        u1066 = *(float *)((a4 + 0xB00));
                                        *(int *)((int)stk + 12) = (0xB78 + a4);
                                        *(Stk3 *)((0xB78 + a4)) = vecMake(0.0f, 0.0f, u1066);
                                        *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C)));
                                    } else {
                                        *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD4)) = 0x0;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB6C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                        t1073 = t1063;
                                    }
                                    *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 0.25f);
                                    *(unsigned int *)((a4 + 0xCC0)) = 0x0;
                                    *(float *)((a4 + 0xB18)) = 1.0f;
                                    *(unsigned int *)((a4 + 0xD10)) = 0x0;
                                    u1078 = *(float *)((a4 + 0xAE8));
                                    *(unsigned int *)0x8C287B78 = (((-u1078) > 0.0f) - (0.0f > (-u1078)));
                                    *(unsigned int *)((a4 + 0xD40)) = 0x8C01DE1A;
                                    t1088 = t1073;
                                    u1091 = (-u1078);
                                }
                                t1122 = t1088;
                                u1125 = u1091;
                            } else {
                                *(unsigned int *)((a4 + 0xB68)) = 0x0;
                                *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFBFFFF);
                                *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFFFDFF);
                                t1098 = *(int *)0x8C2873D0;
                                t1099 = *(int *)((a4 + 0x20));
                                if ((t1099 != ((*(int *)0x8C105F4C) + t1098)) && ((t1100 = *(int *)0x8C105F6C, t1099 != (t1100 + t1098)) && (t1054 == 3))) {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x21;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                    *(unsigned int *)((a4 + 0xBD4)) = 0x5;
                                    u1101 = *(float *)((a4 + 0xB00));
                                    *(int *)((int)stk + 12) = (0xB78 + a4);
                                    *(Stk3 *)((0xB78 + a4)) = vecMake(0.0f, 0.0f, u1101);
                                    *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C)));
                                } else {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)((a4 + 0xBD4)) = 0x0;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB6C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                    t1108 = t1098;
                                }
                                *(float *)((a4 + 0xC90)) = ((*(float *)((a4 + 0xC90))) * 0.25f);
                                *(unsigned int *)((a4 + 0xCC0)) = 0x0;
                                *(float *)((a4 + 0xB18)) = 1.0f;
                                *(unsigned int *)((a4 + 0xD10)) = 0x0;
                                u1112 = *(float *)((a4 + 0xAE8));
                                *(unsigned int *)0x8C287B78 = (((-u1112) > 0.0f) - (0.0f > (-u1112)));
                                *(unsigned int *)((a4 + 0xD40)) = 0x8C01DE1A;
                                t1122 = t1108;
                                u1125 = (-u1112);
                            }
                            t1134 = t1122;
                            u1140 = u1125;
                        }
                        t1152 = t1134;
                        t1153 = t1135;
                        t1154 = t1136;
                        u1158 = u1140;
                    }
                    t1171 = t1152;
                    t1172 = t1153;
                    t1173 = t1154;
                    u1179 = u1158;
                }
                t1191 = t1171;
                t1192 = t1172;
                t1193 = t1173;
                u1199 = u1179;
            }
            t1214 = t1191;
            t1215 = t1192;
            t1216 = t1193;
            u1222 = u1199;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F98) = *(struct mv3 *)((0xAE8 + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F58) = *(struct mv3 *)(0x8C1016D4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F48) = *(struct mv3 *)(0x8C1016D4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F64) = *(struct mv3 *)(0x8C1016D4); }
            *(float *)0x8C291FA4 = 1.0f;
            *(unsigned int *)((a4 + 0xB68)) = 0x2;
            *(float *)((a4 + 0xC90)) = 0.0f;
            *(unsigned int *)((a4 + 0xCF0)) = 0x0;
            *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) & 0xFFFEFFFF);
            *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 16)));
            *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) | 0x8);
            t1214 = 0x20;
            t1215 = 0xF49C0;
            t1216 = 0x10E798;
            u1222 = u133;
        }
        t1247 = t1214;
        t1248 = t1215;
        t1249 = t1216;
        u1255 = u1222;
    } else {
        if ((0x20 & (*(int *)0x8C295DDC)) != 0) {
            *(unsigned int *)(((0xB68 + a4) + 0x0)) = 0xFFFFFFFF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + a4)) = *(struct mv3 *)(0x8C1016D4); }
        } else {
            *(unsigned int *)((a4 + 0xB68)) = 0x1;
        }
        *(unsigned int *)((a4 + 0xCA0)) = 0x0;
        *(float *)((a4 + 0xB18)) = 0.0f;
        *(unsigned int *)((a4 + 0xC60)) = 0x8;
        *(unsigned int *)((a4 + 0xD10)) = 0x2;
        *(unsigned int *)0x8C287B2C = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B84 = 0x0;
        *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) | 0x8);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFEFF);
        t1235 = (*(int *)0x8C2873D0);
        *(int *)((int)stk + 12) = t1235;
        t1239 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(a4, (*(int *)((((((*(int *)(((int)stk + 16))) << 2) << 2) + 0x8C105F1C) + 0x0))), 0x14, 0x1, t1235, (*(float *)0x8C23D204), u84);
        *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)((a4 + 0xC78)) = 0x4B0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C295588) = *(struct mv3 *)((0xAE8 + a4)); }
    }
    if ((((*(int *)0x8C291F78) & 8) != 0) && ((t1261 = *(int *)((a4 + 0xB68)), (int)t1261 > 0) && (t1262 = *(int *)0x8C287C60, t1262 == 0))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F24) = *(struct mv3 *)(0x8C291F30); }
        if ((int)(*(int *)(((int)stk + 44))) > (int)0xFFFFFFFF) {
            u1264 = *(float *)0x8C291FA4;
            t1265 = *(int *)(((int)stk + 44));
            *(unsigned int *)(((int)stk + 16)) = (((t1265 << 2) << 2) + 0x8C105F1C);
            t1267 = (int)((int)(int)u1264 % (int)(*(int *)(((((t1265 << 2) << 2) + 0x8C105F1C) + 0xC))));
            t1269 = *(int *)(((*(int *)(((int)stk + 16))) + 0x4));
            t1270 = *(int *)0x8C2873F0;
            *(int *)((int)stk + 12) = (((int)stk + 16) + 0x38);
            vecTableGet((t1270 + t1269), t1267, t1248, t1249, (((int)stk + 16) + 0x38));
            *(float *)0x8C291FA4 = ((*(float *)0x8C291FA4) + (*(float *)0x8C23D204));
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                *(float *)(((int)stk + 72)) = ((*(float *)(((int)stk + 72))) * (-1.0f));
            }
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0xB06))));
            nlCalcPoint((((int)stk + 16) + 0x38), (((int)stk + 16) + 0x38));
            nlPopMatrix(0x1);
            nlScaleVector((((int)stk + 16) + 0x38), (((int)stk + 16) + 0x38), (*(float *)((a4 + 0x4C))));
            u1287 = *(float *)0x8C291FA4;
            if ((u1287 > (1.0f + 1.0f)) && (15.0f > u1287)) {
                nlSubVector3op(0x8C291F98, (0xCC8 + a4), (((int)stk + 16) + 0x38));
            }
            nlAddVector3op(0x8C291F30, 0x8C291F98, (((int)stk + 16) + 0x38));
            if ((*(float *)0x8C291FA4) == (1.0f + 1.0f)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F30) = *(struct mv3 *)((0xCC8 + a4)); }
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F30) = *(struct mv3 *)((0xCC8 + a4)); }
            t1301 = t1247;
            u1307 = u1255;
        }
        seFootLand(0x8C291F24, t1301, u1307);
    } else {
        t1317 = t1247;
        t1318 = t1248;
        t1319 = t1249;
    }
    if ((*(int *)0x8C287C60) == 0) {
        motionAdvance(a4);
    } else {
        t1333 = t1317;
        t1334 = t1318;
        t1335 = t1319;
    }
    return (playerExec(a4, t1333, t1334, t1335));
}

int FUN_8c07c338(int a4, int a5)
{
    int stk[45];
    register int t0;
    register int t2;
    register float t8;
    register float t10;
    register float u13;
    register float u14;
    register int t18;
    register float t35;
    register float u38;
    register float u39;
    register int t43;
    register int t489;
    register float t66;
    register int t139;
    register float u67;
    register float u68;
    register float u69;
    register float u70;
    register float t78;
    register float u79;
    register float u80;
    register float u83;
    register int t127;
    register int t115;
    register float t92;
    register float u93;
    register float u98;
    register int t106;
    register float u151;
    register float u152;
    register float u154;
    register float u155;
    register float u158;
    register float u159;
    register float u161;
    register float u169;
    register float u170;
    register float u178;
    register float u179;
    register float u198;
    register float u199;
    register float u209;
    register float u216;
    register float u223;
    register int t230;
    register int t239;
    register float u232;
    register float u243;
    register float u244;
    register float u253;
    register float u263;
    register float u270;
    register int t277;
    register int t293;
    register float u279;
    register float u286;
    register int t299;
    register float u301;
    register float u307;
    register float u314;
    register float u335;
    register float u342;
    register int t349;
    register int t365;
    register float u351;
    register float u358;
    register float u388;
    register float u389;
    register float u394;
    register float u399;
    register float u400;
    register float u410;
    register float u416;
    register float u423;
    register int t443;
    register float u445;
    register int t451;
    register int t452;
    register float u455;
    register float u461;
    register int t498;
    register float u501;
    register float u502;
    register float u505;
    register float u506;
    register float u509;
    register float u510;
    register float u528;
    register float u529;
    register float u570;
    register float u571;
    register int t575;
    register float u587;
    register float u588;
    register float u618;
    register float u619;
    register float u637;
    register float u638;
    register float u679;
    register float u680;
    register float u684;
    register float u685;
    register float u708;
    register float u709;
    register float u713;
    register float u714;
    register int t717;
    register int t724;
    register int t725;
    register int t727;
    register int t728;
    register float u758;
    register float u759;
    register int t804;
    register int t4;
    register int t62;
    register int t55;
    register int t30;
    register int t24;
    register int t49;
    register float u88;
    register int t483;
    register int t383;
    register int t185;
    register float u192;
    register float u193;
    register int t377;
    register int t371;
    register int t329;
    register int t319;
    register float u324;
    register int t325;
    register int t478;
    register int t428;
    register float u436;
    register int t439;
    register float u469;
    register int t470;
    register int t799;
    register int t676;
    register int t616;
    register int t568;
    register int t560;
    register float u563;
    register float u564;
    register int t613;
    register int t585;
    register int t610;
    register int t796;
    register int t706;
    register int t793;
    register int t756;
    register int t744;
    register int t790;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        t2 = *(int *)((a4 + 0xB5C));
        *(unsigned int *)(((int)stk + 52)) = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if ((((*(int *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) && (t4 = *(int *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xB60)), (t4 & 0x100) == 0)) {
            if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
                t8 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                if (8.0f > t8) {
                    t30 = (a5 + (cpuDblAimAddRange2(a4, a5)));
                } else {
                    t10 = cpuOppLineX(a4);
                    if (0.150000006f > t10) {
                        t24 = (a5 + (cpuDblAimAddCorners2(a4, a5)));
                    } else {
                        u13 = *(float *)0x8C288874;
                        u14 = (-u13);
                        if (!(0.0f > u13)) {
                            u14 = u13;
                        }
                        t18 = a5;
                        if (47.5400009f > u14) {
                            t18 = (a5 + (cpuDblAimAddDeep2(a4, a5)));
                        }
                        t24 = t18;
                    }
                    t30 = t24;
                }
                t55 = t30;
            } else {
                t35 = cpuOppLineX(a4);
                if (0.150000006f > t35) {
                    t49 = (a5 + (cpuDblAimAddCorners2(a4, a5)));
                } else {
                    u38 = *(float *)0x8C288874;
                    u39 = (-u38);
                    if (!(0.0f > u38)) {
                        u39 = u38;
                    }
                    t43 = a5;
                    if (47.5400009f > u39) {
                        t43 = (a5 + (cpuDblAimAddDeep2(a4, a5)));
                    }
                    t49 = t43;
                }
                t55 = t49;
            }
            t62 = t55;
        } else {
            t62 = (a5 + (cpuDblAimAddCourt2(a4, a5)));
        }
        t489 = t62;
        if (t62 != 0) {
        } else {
            t66 = cpuDistXZ((0xAE8 + (((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84)), (0xAE8 + (((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84)));
            t139 = t62;
            if (!(t66 > 30.0f)) {
            } else {
                u67 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u68 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((u68 + u67) * 0.5f);
                *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = 0.0f;
                u69 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u70 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                *(float *)(((((int)stk + 52) + 0x44) + 0x8)) = ((u69 + u70) * 0.5f);
                *(float *)(((((int)stk + 52) + 0x38) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x44) + 0x0))));
                *(float *)(((((int)stk + 52) + 0x38) + 0x4)) = 0.0f;
                *(float *)(((((int)stk + 52) + 0x38) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x44) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
                *(float *)(((int)stk + 56)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
                t78 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))));
                u79 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u80 = *(float *)(((int)stk + 56));
                u83 = ((-u79) + u80);
                if (!(0.0f > (u79 - u80))) {
                    u83 = (u79 - u80);
                }
                t127 = t62;
                if (u83 > 20.0f) {
                    if (!(0.0f > ((*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))) - t78))) {
                        u88 = ((*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))) - t78);
                    } else {
                        u88 = ((-(*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + t78);
                    }
                    t115 = t62;
                    if (u88 > 20.0f) {
                        *(int *)((int)stk + 48) = (((int)stk + 52) + 0x8);
                        cpuShotRange(a4, (((int)stk + 48) + 0x30), (((int)stk + 48) + 0x24), (((int)stk + 48) + 0x18), (((int)stk + 52) + 0x8), t78, u79, 20.0f, (u79 - u80));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0xB9C + a4)); }
                        t92 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)), (*(float *)(((int)stk + 92))));
                        u93 = *(float *)(((int)stk + 96));
                        u98 = *(float *)(((int)stk + 84));
                        t106 = t62;
                        if ((((u93 - t92) > 0.0f) - (0.0f > (u93 - t92))) == (((t92 - u98) > 0.0f) - (0.0f > (t92 - u98)))) {
                            cpuAimPointSet(t62, 0x1, t92, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t106 = (t62 + 0x1);
                        }
                        t115 = t106;
                    }
                    t127 = t115;
                }
                t139 = t127;
            }
            u151 = *(float *)((a4 + 0xB9C));
            u152 = (-u151);
            if (!(0.0f > u151)) {
                u152 = u151;
            }
            if (!(u152 > 34.8499985f)) {
                u154 = *(float *)((a4 + 0xB9C));
                u155 = (-u154);
                if (!(0.0f > u154)) {
                    u155 = u154;
                }
                if (15.0f > u155) {
                    u158 = *(float *)((a4 + 0xB9C));
                    u159 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                    u161 = ((-u158) + u159);
                    if (!(0.0f > (u158 - u159))) {
                        u161 = (u158 - u159);
                    }
                    if (10.0f > u161) {
                        t185 = t139;
                        u192 = (((*(float *)((a4 + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)))) * 0.5f);
                        u193 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    } else {
                        u169 = *(float *)((a4 + 0xB9C));
                        u170 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                        cpuAimPointSet(t139, 0x1, ((float)(((u170 - u169) > 0.0f) - (0.0f > (u170 - u169))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        u178 = *(float *)((a4 + 0xB9C));
                        u179 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                        t185 = (t139 + 0x1);
                        u192 = ((float)(((u179 - u178) > 0.0f) - (0.0f > (u179 - u178))) * 54.8499985f);
                        u193 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    }
                    cpuAimPointSet(t185, 0x1, u192, u193);
                    t383 = (t185 + 0x1);
                } else {
                    u198 = *(float *)((a4 + 0xB9C));
                    u199 = *(float *)((a4 + 0xAE8));
                    if ((((u198 - u199) > 0.0f) - (0.0f > (u198 - u199))) != ((u198 > 0.0f) - (0.0f > u198))) {
                        u209 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)(-((u209 > 0.0f) - (0.0f > u209))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u216 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u216 > 0.0f) - (0.0f > u216))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u223 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)(-((u223 > 0.0f) - (0.0f > u223))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t230 = (int)((int)(nlRand()) % (int)0x5);
                        t239 = (((t139 + 0x1) + 0x1) + 0x1);
                        if (t230 == 0) {
                            u232 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u232 > 0.0f) - (0.0f > u232)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t239 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                        }
                        t377 = t239;
                    } else {
                        u243 = *(float *)((a4 + 0xB9C));
                        u244 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        if ((((u244 - u243) > 0.0f) - (0.0f > (u244 - u243))) != ((u243 > 0.0f) - (0.0f > u243))) {
                            u253 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            if ((((u253 - u243) > 0.0f) - (0.0f > (u253 - u243))) == ((u243 > 0.0f) - (0.0f > u243))) {
                                u263 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(t139, 0x1, ((float)(-((u263 > 0.0f) - (0.0f > u263))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                                u270 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u270 > 0.0f) - (0.0f > u270))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t277 = (int)((int)(nlRand()) % (int)0x5);
                                t293 = ((t139 + 0x1) + 0x1);
                                if (t277 != 0) {
                                } else {
                                    u279 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)((u279 > 0.0f) - (0.0f > u279)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    u286 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u286 > 0.0f) - (0.0f > u286)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t293 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                                }
                                t329 = t293;
                            } else {
                                t299 = (int)((int)(nlRand()) % (int)0x3);
                                if (t299 != 0) {
                                    u301 = *(float *)((a4 + 0xB9C));
                                    t319 = t139;
                                    u324 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t325 = ((u301 > 0.0f) - (0.0f > u301));
                                } else {
                                    u307 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(t139, 0x1, ((float)(-((u307 > 0.0f) - (0.0f > u307))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    u314 = *(float *)((a4 + 0xB9C));
                                    t319 = (t139 + 0x1);
                                    u324 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t325 = (-((u314 > 0.0f) - (0.0f > u314)));
                                }
                                cpuAimPointSet(t319, 0x1, ((float)t325 * 54.8499985f), u324);
                                t329 = (t319 + 0x1);
                            }
                            t371 = t329;
                        } else {
                            u335 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(t139, 0x1, ((float)(-((u335 > 0.0f) - (0.0f > u335))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                            u342 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u342 > 0.0f) - (0.0f > u342))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t349 = (int)((int)(nlRand()) % (int)0x5);
                            t365 = ((t139 + 0x1) + 0x1);
                            if (t349 != 0) {
                            } else {
                                u351 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)((u351 > 0.0f) - (0.0f > u351)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                u358 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u358 > 0.0f) - (0.0f > u358)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t365 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                            }
                            t371 = t365;
                        }
                        t377 = t371;
                    }
                    t383 = t377;
                }
                t483 = t383;
            } else {
                u388 = *(float *)((a4 + 0xB9C));
                u389 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u394 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                if ((((u389 - u388) > 0.0f) - (0.0f > (u389 - u388))) == (((u394 - u388) > 0.0f) - (0.0f > (u394 - u388)))) {
                    u399 = *(float *)((a4 + 0xB9C));
                    u400 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    if ((((u399 - u400) > 0.0f) - (0.0f > (u399 - u400))) == ((u399 > 0.0f) - (0.0f > u399))) {
                        u410 = *(float *)((a4 + 0xB9C));
                        t428 = t139;
                        u436 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t439 = ((u410 > 0.0f) - (0.0f > u410));
                    } else {
                        u416 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)(-((u416 > 0.0f) - (0.0f > u416))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        u423 = *(float *)((a4 + 0xB9C));
                        t428 = (t139 + 0x1);
                        u436 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        t439 = (-((u423 > 0.0f) - (0.0f > u423)));
                    }
                    cpuAimPointSet(t428, 0x1, ((float)t439 * 54.8499985f), u436);
                    t478 = (t428 + 0x1);
                } else {
                    t443 = (int)((int)(nlRand()) % (int)0x3);
                    if (t443 == 0) {
                        u445 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)((u445 > 0.0f) - (0.0f > u445)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    } else {
                        t451 = nlRand();
                        t452 = ((~(((~t451) + 0x1) & 0x1)) + 0x1);
                        if ((int)t451 >= 0) {
                            t452 = (t451 & 0x1);
                        }
                        if (t452 != 0) {
                            u455 = *(float *)((a4 + 0xB9C));
                            u469 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t470 = (-((u455 > 0.0f) - (0.0f > u455)));
                        } else {
                            u461 = *(float *)((a4 + 0xB9C));
                            u469 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                            t470 = (-((u461 > 0.0f) - (0.0f > u461)));
                        }
                        cpuAimPointSet(t139, 0x1, ((float)t470 * 54.8499985f), u469);
                    }
                    t478 = (t139 + 0x1);
                }
                t483 = t478;
            }
            t489 = t483;
        }
        t804 = t489;
    } else {
        t498 = serveGetServer();
        if (t498 != (*(int *)0x8C2888E0)) {
            u501 = *(float *)((a4 + 0xB9C));
            u502 = (-u501);
            if (!(0.0f > u501)) {
                u502 = u501;
            }
            if (!(18.6490002f > u502)) {
                u505 = *(float *)((a4 + 0xB9C));
                u506 = (-u505);
                if (!(0.0f > u505)) {
                    u506 = u505;
                }
                if (!(u506 > 43.8800011f)) {
                    u509 = *(float *)0x8C288874;
                    u510 = (-u509);
                    if (!(0.0f > u509)) {
                        u510 = u509;
                    }
                    if (35.6550026f > u510) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t568 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u528 = *(float *)0x8C288874;
                        u529 = (-u528);
                        if (!(0.0f > u528)) {
                            u529 = u528;
                        }
                        if (83.1949997f > u529) {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t560 = (((a5 + 0x1) + 0x1) + 0x1);
                            u563 = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f);
                            u564 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        } else {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (((*(float *)0x8C28886C) + (*(float *)0x8C28A35C)) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t560 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                            u563 = 0.0f;
                            u564 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        }
                        cpuAimPointSet(t560, 0x1, u563, u564);
                        t568 = (t560 + 0x1);
                    }
                    t616 = t568;
                } else {
                    u570 = *(float *)0x8C288874;
                    u571 = (-u570);
                    if (!(0.0f > u570)) {
                        u571 = u570;
                    }
                    if (35.6550026f > u571) {
                        t575 = (int)((int)(nlRand()) % (int)0x3);
                        if (t575 == 0) {
                            cpuAimPointSet(a5, 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t585 = (a5 + 0x1);
                        } else {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t585 = ((a5 + 0x1) + 0x1);
                        }
                        t613 = t585;
                    } else {
                        u587 = *(float *)0x8C288874;
                        u588 = (-u587);
                        if (!(0.0f > u587)) {
                            u588 = u587;
                        }
                        if (83.1949997f > u588) {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 27.4249992f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t610 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                        } else {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 27.4249992f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t610 = (((a5 + 0x1) + 0x1) + 0x1);
                        }
                        t613 = t610;
                    }
                    t616 = t613;
                }
                t676 = t616;
            } else {
                u618 = *(float *)0x8C288874;
                u619 = (-u618);
                if (!(0.0f > u618)) {
                    u619 = u618;
                }
                if (35.6550026f > u619) {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 42.7829971f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                } else {
                    u637 = *(float *)0x8C288874;
                    u638 = (-u637);
                    if (!(0.0f > u637)) {
                        u638 = u637;
                    }
                    if (83.1949997f > u638) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 16.4549999f), ((*(float *)((a4 + 0xB00))) * 83.1949997f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (((*(float *)0x8C28886C) + (*(float *)0x8C28A35C)) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    }
                }
                t676 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t799 = t676;
        } else {
            u679 = *(float *)((a4 + 0xB9C));
            u680 = (-u679);
            if (!(0.0f > u679)) {
                u680 = u679;
            }
            if (18.6490002f > u680) {
                u684 = *(float *)0x8C28A364;
                u685 = (-u684);
                if (!(0.0f > u684)) {
                    u685 = u684;
                }
                if (59.4249992f > u685) {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t706 = (((a5 + 0x1) + 0x1) + 0x1);
                } else {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t706 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t796 = t706;
            } else {
                u708 = *(float *)((a4 + 0xB9C));
                u709 = (-u708);
                if (!(0.0f > u708)) {
                    u709 = u708;
                }
                if (u709 > 43.8800011f) {
                    u713 = *(float *)0x8C28A364;
                    u714 = (-u713);
                    if (!(0.0f > u713)) {
                        u714 = u713;
                    }
                    if (59.4249992f > u714) {
                        t717 = (int)((int)(nlRand()) % (int)0x3);
                        if (t717 != 0) {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t744 = ((a5 + 0x1) + 0x1);
                        } else {
                            t724 = nlRand();
                            t725 = ((~(((~t724) + 0x1) & 0x1)) + 0x1);
                            if ((int)t724 >= 0) {
                                t725 = (t724 & 0x1);
                            }
                            if (t725 == 0) {
                                t727 = nlRand();
                                t728 = ((~(((~t727) + 0x1) & 0x3)) + 0x1);
                                if ((int)t727 >= 0) {
                                    t728 = (t727 & 0x3);
                                }
                                if (t728 != 0) {
                                    cpuAimPointSet(a5, 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                } else {
                                    cpuAimPointSet(a5, 0x2, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                }
                            } else {
                                cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            }
                            t744 = (a5 + 0x1);
                        }
                        t756 = t744;
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t756 = (((a5 + 0x1) + 0x1) + 0x1);
                    }
                    t793 = t756;
                } else {
                    u758 = *(float *)0x8C28A364;
                    u759 = (-u758);
                    if (!(0.0f > u758)) {
                        u759 = u758;
                    }
                    if (59.4249992f > u759) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t790 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t790 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t793 = t790;
                }
                t796 = t793;
            }
            t799 = t796;
        }
        t804 = t799;
    }
    return t804;
}
