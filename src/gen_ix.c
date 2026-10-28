/* Straight-line functions with calls and guards (batch gen_ix): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int advDrawFigure(int);
int advFovKey(float);
int angLerp(int, int, float);
int bodyGroundFriction(int, int, int, int, int, float);
int bodyLinePerp(Stk4, Stk3, Stk3);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camInit(int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetTarget(void);
int exprPlayC(int, int);
int fadeScreenStart(int, int, int, int, int, int);
int mainSoftReset(int);
int matchSetSlowMotion(int, float);
int motionAdvance(int);
int motionBackup(int);
int motionChange(int, int, int, int, int, float);
int motionRootAtFrame(int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionRootFirst(int, int, int, int, int);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int mtxMultiKeepPos(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutTrnsl(int, float);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSetTrnslMode(int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int objListPutLerp(int, int, float);
int shadowLightMatrix(float);
int sklDrawNode(int);
int strmBgmFadeOut(int, int);
int strmCrowdCue(int, int, int);
int thunk_FUN_8c0eee50(int);
float vecDist(Stk3, Stk3);
float vecLength(Stk3, int);
Stk3 vecMake(float, float, float);
int advExec(int a4, int a5, int a6, int a7);
void bodyStep(int a4, int a5, int a6, int a7, int a8, float f4);

int advExec(int a4, int a5, int a6, int a7)
{
    int t1;
    int t1150;
    int t10;
    int t12;
    int t14;
    float u17;
    float u31;
    int t50;
    float u51;
    int t90;
    int t94;
    int t99;
    int t103;
    int t108;
    int t112;
    int t117;
    int t121;
    int t143;
    int t147;
    int t152;
    int t156;
    int t161;
    int t165;
    int t170;
    int t174;
    int t253;
    int t257;
    int t262;
    int t266;
    int t268;
    int t273;
    int t277;
    int t282;
    int t286;
    int t329;
    int t333;
    int t336;
    int t341;
    int t345;
    int t375;
    int t379;
    int t382;
    int t387;
    int t391;
    int t393;
    int t440;
    int t472;
    int t476;
    int t481;
    int t485;
    int t490;
    int t540;
    int t544;
    int t549;
    int t553;
    int t558;
    int t595;
    int t599;
    int t604;
    int t608;
    int t613;
    int t651;
    int t655;
    int t660;
    int t664;
    int t709;
    int t722;
    int t725;
    int t723;
    int t744;
    float t728;
    float u730;
    int t734;
    float u733;
    int t812;
    int t762;
    int t763;
    float u764;
    int t765;
    int t766;
    int t768;
    int t769;
    float u770;
    float u771;
    int t772;
    float u773;
    float u774;
    float u775;
    float u776;
    int t801;
    int t827;
    int t868;
    int t871;
    int t869;
    int t890;
    float t874;
    float u876;
    int t880;
    float u879;
    int t958;
    int t908;
    int t909;
    float u910;
    int t911;
    int t912;
    int t914;
    int t915;
    float u916;
    float u917;
    int t918;
    float u919;
    float u920;
    float u921;
    float u922;
    int t947;
    int t973;
    int t1015;
    int t1018;
    int t1016;
    int t1037;
    float t1021;
    float u1023;
    int t1027;
    float u1026;
    int t1105;
    int t1055;
    int t1056;
    float u1057;
    int t1058;
    int t1059;
    int t1061;
    int t1062;
    float u1063;
    float u1064;
    int t1065;
    float u1066;
    float u1067;
    float u1068;
    float u1069;
    int t1094;
    int t1120;
    int t1190;
    int t1199;
    int t1206;
    int t1211;
    int t1213;
    int t1215;
    int t1214;
    int t1245;
    int t11;
    int t13;
    int t82;
    int t87;
    int t140;
    int t240;
    int t326;
    int t372;
    int t423;
    int t469;
    int t537;
    int t592;
    int t648;
    int t1135;
    int t988;
    int t708;
    int t842;
    int t712;
    int t713;
    int t714;
    int t715;
    int t716;
    int t717;
    int t828;
    int t727;
    int t748;
    int t802;
    int t858;
    int t859;
    int t860;
    int t861;
    int t862;
    int t863;
    int t974;
    int t873;
    int t894;
    int t948;
    int t1005;
    int t1006;
    int t1007;
    int t1008;
    int t1009;
    int t1010;
    int t1121;
    int t1020;
    int t1041;
    int t1095;
    int t1239;
    int t1233;
    int t1227;
    int t1221;
    int stk[66];

    *(unsigned int *)0x8C295DE8 = ((*(int *)0x8C295DE8) + 0x1);
    t1 = *(int *)0x8C29B27C;
    if (t1 != 1) {
        t1150 = t1;
        if (t1 == 0) {
            *(unsigned int *)0x8C295DEC = ((*(int *)0x8C295DEC) - 1);
            *(unsigned int *)(((int)stk + 56)) = ((*(int *)0x8C295DDC) & 0x20);
            strmCrowdCue((*(int *)0x8C295DE8), (*(int *)0x8C295DF4), (*(int *)0x8C295DEC));
            nlSetTrnslMode(0x1, 0x6);
            *(unsigned int *)(((int)stk + 48)) = 0x8C158844;
            *(unsigned int *)(((int)stk + 40)) = 0x8C287D84;
            *(unsigned int *)(((int)stk + 36)) = 0x8C29B294;
            t10 = 0x8C02E14C;
            t12 = 0x8C287D84;
            t14 = 0x0;
            for (;;) {
                if ((int)t14 < (int)0x2) {
                    t13 = 0x1E0;
                    t12 = 0x8C013E78;
                    t13 = (t14 * t13);
                    t13 = (t13 + 0x8C29B294);
                    t10 = (motionAdvance(t13));
                    t10 = 0xC;
                    t12 = 0x8C02975E;
                    u17 = *(float *)((t13 + t10));
                    *(int *)((int)stk + 32) = (((int)stk + 36) + 0x58);
                    t10 = (motionRootAtFrame(t13, (int)u17, 0x0, 0x0, (((int)stk + 36) + 0x58)));
                    t10 = 0xC;
                    if ((float)(int)(*(float *)((t13 + t10))) > (*(float *)0x8C23D204)) {
                        t12 = 0x1E0;
                        t10 = 0x8C29B2A8;
                        t12 = (t14 * t12);
                        t10 = (nlScaleVector((((int)stk + 36) + 0x58), (((int)stk + 36) + 0x58), (*(float *)((t12 + t10)))));
                    }
                    t13 = t14;
                    t13 = (t13 << 1);
                    t12 = 0x8C29B838;
                    t13 = (t13 + t14);
                    t13 = (t13 << 2);
                    t13 = (t13 + t12);
                    t10 = (nlAddVector(t13, (((int)stk + 36) + 0x58)));
                    t12 = 0x8C0EFD20;
                    t10 = (nlPushMatrix(0x0));
                    t10 = 0x8;
                    u31 = *(float *)((t13 + t10));
                    t10 = 0x4;
                    t10 = (nlTranslate((*(float *)((t13 + 0x0))), (*(float *)((t13 + t10))), u31));
                    t10 = (motionSetCurrent((*(int *)(((int)stk + 36)))));
                    t12 = 0x8C015936;
                    t10 = (motionRootBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36)));
                    t13 = (*(int *)(((int)stk + 36)));
                    t12 = 0x8C0EEE50;
                    t13 = (*(int *)((t13 + 0x38)));
                    t10 = (nlGetMatrix(((*(int *)((t13 + 0x0))) + 0xC0)));
                    t10 = (motionRootBone(0x1, 0x1, 0x0, 0x0, *(int *)((int)stk + 36)));
                    *(unsigned int *)(((int)stk + 44)) = (t13 + 0x4);
                    t10 = (nlGetMatrix(((*(int *)(((t13 + 0x4) + 0x0))) + 0xC0)));
                    t10 = (sklDrawNode((*(int *)((t13 + 0x0)))));
                    t12 = 0x8C0EFCD0;
                    t10 = (nlPopMatrix(0x1));
                    t10 = (nlPushUnitMatrix());
                    t12 = 0x8C0EF5B0;
                    t10 = (nlLoadMatrix(0x8C287938));
                    t10 = 0xAF0;
                    t50 = *(int *)(((int)stk + 40));
                    t12 = 0x8C0F0480;
                    u51 = *(float *)((t50 + t10));
                    t10 = (t10 - 8);
                    t10 = (nlTranslate((*(float *)((t50 + t10))), 0.200000003f, u51));
                    t10 = (nlPushMatrix(0x0));
                    t12 = 0x8C0EFDE0;
                    t10 = (nlQuickInvertMatrix());
                    t10 = (nlGetMatrix((((int)stk + 36) + 0x18)));
                    t12 = 0x8C0EFCD0;
                    t10 = (nlPopMatrix(0x1));
                    t10 = (shadowLightMatrix(0.0f));
                    t12 = 0x8C0F2780;
                    t10 = (nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f));
                    t10 = (nlPushMatrix(0x0));
                    t10 = (nlMultiMatrix((((int)stk + 36) + 0x18)));
                    t10 = (nlMultiMatrix(((*(int *)((t13 + 0x0))) + 0xC0)));
                    t13 = (*(int *)(((int)stk + 48)));
                    t13 = (t13 + 0x8);
                    *(unsigned int *)(((int)stk + 48)) = t13;
                    t13 = (t13 - 8);
                    t10 = (nlObjPutTrnsl((*(int *)((t13 + 0x0))), 0.90196079f));
                    t12 = 0x8C0EFCD0;
                    t10 = (nlPopMatrix(0x1));
                    t10 = (nlPushMatrix(0x0));
                    t10 = (nlMultiMatrix((((int)stk + 36) + 0x18)));
                    t10 = (nlMultiMatrix(((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) + 0xC0)));
                    t12 = 0x8C0F2610;
                    t10 = (nlObjPutTrnsl((*(int *)((t13 + 0x4))), 0.90196079f));
                    t10 = (nlPopMatrix(0x1));
                    t12 = 0x8C0F2780;
                    t10 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                    t10 = (nlPopMatrix(0x1));
                    t12 = (*(int *)(((int)stk + 40)));
                    t14 = (t14 + 0x1);
                    t12 = (t12 + 0xD78);
                    *(unsigned int *)(((int)stk + 40)) = t12;
                    t11 = (*(int *)(((int)stk + 36)));
                    t11 = (t11 + 0x1E0);
                    *(unsigned int *)(((int)stk + 36)) = t11;
                    continue;
                }
                break;
            }
            nlSetTrnslMode(0x4, 0x5);
            if (((*(int *)0x8C295DF4) == 0) && (t82 = *(int *)0x8C295DEC, t82 == 1)) {
                matchSetSlowMotion(0x0, 0.0199999996f);
            }
            if (((*(int *)0x8C295DF4) == 0) && (t87 = *(int *)0x8C295DEC, (int)t87 <= 0)) {
                *(unsigned int *)(((int)stk + 40)) = 0x8C287D84;
                motionBackup(0x8C287D84);
                *(unsigned int *)(((int)stk + 36)) = 0x8C2873E0;
                t90 = (*(int *)0x8C2873E0);
                *(int *)((int)stk + 32) = t90;
                motionChange((*(int *)(((int)stk + 40))), 0xA508, 0x1, 0x0, t90, (*(float *)0x8C23D204));
                t94 = *(int *)(((int)stk + 40));
                *(int *)((int)stk + 28) = (0xAE8 + t94);
                motionRootFirst(t94, 0x0, 0x0, 0x0, (0xAE8 + t94));
                *(unsigned int *)(((int)stk + 40)) = 0x8C288AFC;
                motionBackup(0x8C288AFC);
                t99 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                *(int *)((int)stk + 24) = t99;
                motionChange((*(int *)(((int)stk + 40))), 0xEB98, 0x1, 0x0, t99, (*(float *)0x8C23D204));
                t103 = *(int *)(((int)stk + 40));
                *(int *)((int)stk + 20) = (0xAE8 + t103);
                motionRootFirst(t103, 0x0, 0x0, 0x0, (0xAE8 + t103));
                *(unsigned int *)(((int)stk + 40)) = 0x8C29B294;
                motionBackup(0x8C29B294);
                t108 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                *(int *)((int)stk + 16) = t108;
                motionChange((*(int *)(((int)stk + 40))), 0xB068, 0x1, 0x0, t108, (*(float *)0x8C23D204));
                t112 = *(int *)(((int)stk + 40));
                *(int *)((int)stk + 12) = 0x8C29B838;
                motionRootFirst(t112, 0x0, 0x0, 0x0, 0x8C29B838);
                *(unsigned int *)(((int)stk + 40)) = 0x8C29B474;
                motionBackup(0x8C29B474);
                t117 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                *(int *)((int)stk + 8) = t117;
                motionChange((*(int *)(((int)stk + 40))), 0xF6F8, 0x1, 0x0, t117, (*(float *)0x8C23D204));
                t121 = *(int *)(((int)stk + 40));
                *(int *)((int)stk + 4) = 0x8C29B844;
                motionRootFirst(t121, 0x0, 0x0, 0x0, 0x8C29B844);
                *(unsigned int *)0x8C295DF4 = 0x1;
                *(unsigned int *)0x8C295DEC = (int)(238.0f / (*(float *)0x8C23D204));
            }
            if ((*(int *)0x8C295DF4) == 1) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 1) && (t140 = *(int *)0x8C295DEC, (int)t140 <= 0)) {
                    *(unsigned int *)(((int)stk + 40)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C2873E0;
                    t143 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t143;
                    motionChange((*(int *)(((int)stk + 40))), 0x14FB0, 0x1, 0x0, t143, (*(float *)0x8C23D204));
                    t147 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 28) = (0xAE8 + t147);
                    motionRootFirst(t147, 0x0, 0x0, 0x0, (0xAE8 + t147));
                    *(unsigned int *)(((int)stk + 40)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t152 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                    *(int *)((int)stk + 24) = t152;
                    motionChange((*(int *)(((int)stk + 40))), 0x1B968, 0x1, 0x0, t152, (*(float *)0x8C23D204));
                    t156 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 20) = (0xAE8 + t156);
                    motionRootFirst(t156, 0x0, 0x0, 0x0, (0xAE8 + t156));
                    *(unsigned int *)(((int)stk + 40)) = 0x8C29B294;
                    motionBackup(0x8C29B294);
                    t161 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                    *(int *)((int)stk + 16) = t161;
                    motionChange((*(int *)(((int)stk + 40))), 0x160B0, 0x1, 0x0, t161, (*(float *)0x8C23D204));
                    t165 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 12) = 0x8C29B838;
                    motionRootFirst(t165, 0x0, 0x0, 0x0, 0x8C29B838);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C29B474;
                    motionBackup(0x8C29B474);
                    t170 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                    *(int *)((int)stk + 8) = t170;
                    motionChange((*(int *)(((int)stk + 40))), 0x1CA68, 0x1, 0x0, t170, (*(float *)0x8C23D204));
                    t174 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 4) = 0x8C29B844;
                    motionRootFirst(t174, 0x0, 0x0, 0x0, 0x8C29B844);
                    *(unsigned int *)0x8C295DF4 = 0x2;
                    *(unsigned int *)0x8C295DEC = (int)(359.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 4) {
                if ((float)(*(int *)0x8C295DEC) == (231.0f / (*(float *)0x8C23D204))) {
                    exprPlayC(0x8C288AFC, 0x1);
                }
                if ((*(int *)0x8C295DF4) == 4) {
                    if ((float)(*(int *)0x8C295DEC) == (231.0f / (*(float *)0x8C23D204))) {
                        exprPlayC(0x8C287D84, 0x1);
                    }
                }
            }
            if ((*(int *)0x8C295DF4) == 3) {
                *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                objListPutLerp(((*(int *)0x8C2873E8) + 0xB6E0), 0xC51E968, (*(float *)0x8C287D90));
                if (!(230.0f > (*(float *)(((*(int *)(((int)stk + 36))) + 0xC))))) {
                    *(unsigned int *)0x8C288A98 = 0x3;
                }
            }
            if (((*(int *)0x8C295DF4) == 2) && (t240 = *(int *)0x8C295DEC, t240 == 1)) {
                matchSetSlowMotion(0x0, 0.0199999996f);
            }
            if ((*(int *)0x8C295DF4) != 2) {
            } else {
                if ((int)(*(int *)0x8C295DEC) > 0) {
                } else {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t253 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t253;
                    motionChange((*(int *)(((int)stk + 36))), 0x240A8, 0x1, 0x0, t253, (*(float *)0x8C23D204));
                    t257 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t257);
                    motionRootFirst(t257, 0x0, 0x0, 0x0, (0xAE8 + t257));
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t262 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t262;
                    motionChange((*(int *)(((int)stk + 36))), 0x2CD88, 0x1, 0x0, t262, (*(float *)0x8C23D204));
                    t266 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t266);
                    motionRootFirst(t266, 0x0, 0x0, 0x0, (0xAE8 + t266));
                    t268 = *(int *)(((int)stk + 36));
                    *(unsigned int *)((t268 + 0xB60)) = ((*(int *)((t268 + 0xB60))) | 0x20000);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C29B294;
                    motionBackup(0x8C29B294);
                    t273 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 16) = t273;
                    motionChange((*(int *)(((int)stk + 36))), 0x25748, 0x1, 0x0, t273, (*(float *)0x8C23D204));
                    t277 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 12) = 0x8C29B838;
                    motionRootFirst(t277, 0x0, 0x0, 0x0, 0x8C29B838);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C29B474;
                    motionBackup(0x8C29B474);
                    t282 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 8) = t282;
                    motionChange((*(int *)(((int)stk + 36))), 0x2E428, 0x1, 0x0, t282, (*(float *)0x8C23D204));
                    t286 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 4) = 0x8C29B844;
                    motionRootFirst(t286, 0x0, 0x0, 0x0, 0x8C29B844);
                    *(unsigned int *)0x8C295DF4 = 0x3;
                    *(unsigned int *)0x8C295DEC = (int)(480.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 4) {
                objListPutLerp(((*(int *)0x8C2873E8) + 0x10788), 0xC51E968, (*(float *)0x8C287D90));
            }
            if ((*(int *)0x8C295DF4) == 3) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 3) && (t326 = *(int *)0x8C295DEC, (int)t326 <= 0)) {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t329 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t329;
                    motionChange((*(int *)(((int)stk + 36))), 0x33CE0, 0x1, 0x0, t329, (*(float *)0x8C23D204));
                    t333 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t333);
                    motionRootFirst(t333, 0x0, 0x0, 0x0, (0xAE8 + t333));
                    *(unsigned int *)(((*(int *)(((int)stk + 36))) + 0xD14)) = 0x3;
                    t336 = *(int *)(((int)stk + 36));
                    *(unsigned int *)((t336 + 0xB60)) = ((*(int *)((t336 + 0xB60))) | 0x20000);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t341 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t341;
                    motionChange((*(int *)(((int)stk + 36))), 0x39160, 0x1, 0x0, t341, (*(float *)0x8C23D204));
                    t345 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t345);
                    motionRootFirst(t345, 0x0, 0x0, 0x0, (0xAE8 + t345));
                    *(unsigned int *)0x8C295DF4 = 0x4;
                    *(unsigned int *)0x8C295DEC = (int)(360.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 4) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 4) && (t372 = *(int *)0x8C295DEC, (int)t372 <= 0)) {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t375 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t375;
                    motionChange((*(int *)(((int)stk + 36))), 0x3C9C0, 0x1, 0x0, t375, (*(float *)0x8C23D204));
                    t379 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t379);
                    motionRootFirst(t379, 0x0, 0x0, 0x0, (0xAE8 + t379));
                    *(unsigned int *)(((*(int *)(((int)stk + 36))) + 0xD14)) = 0x0;
                    t382 = *(int *)(((int)stk + 36));
                    *(unsigned int *)((t382 + 0xB60)) = ((*(int *)((t382 + 0xB60))) & 0xFFFDFFFF);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t387 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t387;
                    motionChange((*(int *)(((int)stk + 36))), 0x40220, 0x1, 0x0, t387, (*(float *)0x8C23D204));
                    t391 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t391);
                    motionRootFirst(t391, 0x0, 0x0, 0x0, (0xAE8 + t391));
                    t393 = *(int *)(((int)stk + 36));
                    *(unsigned int *)((t393 + 0xB60)) = ((*(int *)((t393 + 0xB60))) & 0xFFFDFFFF);
                    *(unsigned int *)0x8C295DF4 = 0x5;
                    *(unsigned int *)0x8C295DEC = (int)(240.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 5) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 5) && (t423 = *(int *)0x8C295DEC, (int)t423 <= 0)) {
                    *(unsigned int *)0x8C295DF4 = 0x6;
                    *(unsigned int *)0x8C295DEC = (int)(120.0f / (*(float *)0x8C23D204));
                    nlsndSeqRequest(0xC03A9);
                    *(unsigned int *)0x8C34B4F0 = 0x1;
                }
            }
            t440 = *(int *)0x8C295DF4;
            if (((int)t440 >= (int)0x7) && ((int)t440 <= (int)0x9)) {
                motionAdvance(0x8C29B654);
                nlPushMatrix(0x0);
                nlLoadMatrix(0x8C287938);
                advDrawFigure(0x8C29B654);
                nlPopMatrix(0x1);
            }
            if ((*(int *)0x8C295DF4) == 6) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFDFFFFF);
                }
                if (((*(int *)0x8C295DF4) == 6) && (t469 = *(int *)0x8C295DEC, (int)t469 <= 0)) {
                    *(unsigned int *)0x8C34B4F0 = 0x0;
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t472 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t472;
                    motionChange((*(int *)(((int)stk + 36))), 0x472C0, 0x1, 0x0, t472, (*(float *)0x8C23D204));
                    t476 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t476);
                    motionRootFirst(t476, 0x0, 0x0, 0x0, (0xAE8 + t476));
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t481 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t481;
                    motionChange((*(int *)(((int)stk + 36))), 0x4E360, 0x1, 0x0, t481, (*(float *)0x8C23D204));
                    t485 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t485);
                    motionRootFirst(t485, 0x0, 0x0, 0x0, (0xAE8 + t485));
                    motionBackup(0x8C29B654);
                    t490 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 16) = t490;
                    motionChange(0x8C29B654, 0x53D80, 0x1, 0x0, t490, (*(float *)0x8C23D204));
                    *(unsigned int *)0x8C295DF4 = 0x7;
                    *(unsigned int *)0x8C295DEC = (int)(480.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 8) {
                objListPutLerp(((*(int *)0x8C2873E8) + 0x1BD78), 0xC5B0600, (*(float *)0x8C287D90));
            }
            if ((*(int *)0x8C295DF4) == 7) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 7) && (t537 = *(int *)0x8C295DEC, (int)t537 <= 0)) {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t540 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t540;
                    motionChange((*(int *)(((int)stk + 36))), 0x5AE20, 0x1, 0x0, t540, (*(float *)0x8C23D204));
                    t544 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t544);
                    motionRootFirst(t544, 0x0, 0x0, 0x0, (0xAE8 + t544));
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t549 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t549;
                    motionChange((*(int *)(((int)stk + 36))), 0x61EC0, 0x1, 0x0, t549, (*(float *)0x8C23D204));
                    t553 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t553);
                    motionRootFirst(t553, 0x0, 0x0, 0x0, (0xAE8 + t553));
                    motionBackup(0x8C29B654);
                    t558 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 16) = t558;
                    motionChange(0x8C29B654, 0x678E0, 0x1, 0x0, t558, (*(float *)0x8C23D204));
                    *(unsigned int *)0x8C295DF4 = 0x8;
                    *(unsigned int *)0x8C295DEC = (int)(420.0f / (*(float *)0x8C23D204));
                }
            }
            if ((*(int *)0x8C295DF4) == 8) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 8) && (t592 = *(int *)0x8C295DEC, (int)t592 <= 0)) {
                    *(unsigned int *)(((int)stk + 40)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 36)) = 0x8C2873E0;
                    t595 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t595;
                    motionChange((*(int *)(((int)stk + 40))), 0x6A330, 0x1, 0x0, t595, (*(float *)0x8C23D204));
                    t599 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 28) = (0xAE8 + t599);
                    motionRootFirst(t599, 0x0, 0x0, 0x0, (0xAE8 + t599));
                    *(unsigned int *)(((int)stk + 40)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t604 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                    *(int *)((int)stk + 24) = t604;
                    motionChange((*(int *)(((int)stk + 40))), 0x6CD80, 0x1, 0x0, t604, (*(float *)0x8C23D204));
                    t608 = *(int *)(((int)stk + 40));
                    *(int *)((int)stk + 20) = (0xAE8 + t608);
                    motionRootFirst(t608, 0x0, 0x0, 0x0, (0xAE8 + t608));
                    motionBackup(0x8C29B654);
                    t613 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                    *(int *)((int)stk + 16) = t613;
                    motionChange(0x8C29B654, 0x6EF60, 0x1, 0x0, t613, (*(float *)0x8C23D204));
                    *(unsigned int *)0x8C295DF4 = 0x9;
                    *(unsigned int *)0x8C295DEC = (int)(180.0f / (*(float *)0x8C23D204));
                    nlsndSeqRequest(0x603A9);
                }
            }
            if ((*(int *)0x8C295DF4) == 9) {
                if ((*(int *)0x8C295DEC) == 1) {
                    matchSetSlowMotion(0x0, 0.0199999996f);
                }
                if (((*(int *)0x8C295DF4) == 9) && (t648 = *(int *)0x8C295DEC, (int)t648 <= 0)) {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C287D84;
                    motionBackup(0x8C287D84);
                    *(unsigned int *)(((int)stk + 40)) = 0x8C2873E0;
                    t651 = (*(int *)0x8C2873E0);
                    *(int *)((int)stk + 32) = t651;
                    motionChange((*(int *)(((int)stk + 36))), 0x76000, 0x1, 0x0, t651, (*(float *)0x8C23D204));
                    t655 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 28) = (0xAE8 + t655);
                    motionRootFirst(t655, 0x0, 0x0, 0x0, (0xAE8 + t655));
                    *(unsigned int *)(((int)stk + 36)) = 0x8C288AFC;
                    motionBackup(0x8C288AFC);
                    t660 = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                    *(int *)((int)stk + 24) = t660;
                    motionChange((*(int *)(((int)stk + 36))), 0x7D0A0, 0x1, 0x0, t660, (*(float *)0x8C23D204));
                    t664 = *(int *)(((int)stk + 36));
                    *(int *)((int)stk + 20) = (0xAE8 + t664);
                    motionRootFirst(t664, 0x0, 0x0, 0x0, (0xAE8 + t664));
                    *(unsigned int *)0x8C295DF4 = 0xA;
                    *(unsigned int *)0x8C295DEC = (int)(480.0f / (*(float *)0x8C23D204));
                    nlsndSeqRequest(0xD03A9);
                }
            }
            if ((*(int *)0x8C295DF4) == 10) {
                if ((*(int *)0x8C295DEC) == 60) {
                    fadeScreenStart(0x3, 0x0, 0x3C, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4));
                    *(float *)0x8C287D64 = 0.00899999961f;
                }
                if ((*(int *)0x8C295DF4) == 10) {
                    if ((*(int *)0x8C295DEC) == 2) {
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
                    }
                    if (((*(int *)0x8C295DF4) == 10) && (t708 = *(int *)0x8C295DEC, (int)t708 <= 0)) {
                        t709 = mainSoftReset(0x0);
                        *(unsigned int *)0x8C34B4F0 = 0x0;
                        t842 = t709;
                    } else {
                        if ((((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 8) == 0) && ((t712 = *(int *)0x8C29B89C, t713 = *(int *)((t712 + 0x10)), (t713 & 8) == 0) && ((t714 = *(int *)0x8C29B8A0, t715 = *(int *)((t714 + 0x10)), (t715 & 8) == 0) && (t716 = *(int *)0x8C29B8A4, t717 = *(int *)((t716 + 0x10)), (t717 & 8) == 0)))) {
                            t722 = *(int *)0x8C295DF4;
                            t725 = 0x1;
                            if (t722 == 9) {
                            } else {
                                t723 = 0x0;
                                if (t722 == 10) {
                                    t723 = 0x12C;
                                }
                                t725 = t723;
                            }
                            t744 = t722;
                            if ((t725 != 0) && (t727 = *(int *)0x8C295DEC, (int)t727 > (int)t725)) {
                                t728 = nlRandom();
                                u730 = 5.0f;
                                u730 = u730 + 0.100000001f * (float)((t725 - (*(int *)0x8C295DEC)) + 0xB4);
                                t734 = 0x8C02EDE0;
                                if (1.0f > (t728 * u730)) {
                                    *(float *)0x8C289830 = 0.0f;
                                    *(float *)0x8C288AB8 = 0.0f;
                                    *(float *)0x8C289834 = 0.100000001f;
                                    *(float *)0x8C288ABC = 0.100000001f;
                                    *(volatile int *)0x8C295DF4;
                                    *(int *)((int)stk + 32) = 0x8C28983A;
                                    u733 = -4096.0f;
                                    u733 = u733 + 8192.0f * (nlRandom());
                                    *(unsigned short *)0x8C28983A = (int)u733;
                                    *(unsigned short *)0x8C288AC2 = (int)u733;
                                    *(unsigned short *)0x8C289838 = 0x0;
                                    *(unsigned short *)0x8C288AC0 = 0x0;
                                    t734 = 0xD3C;
                                }
                                t744 = t734;
                            } else {
                                t748 = 0x8C29B898;
                            }
                            t812 = t744;
                            if ((*(int *)(((int)stk + 56))) == 0) {
                            } else {
                                if ((*(int *)0x8C295DF4) == 6) {
                                    camInit(t748);
                                    *(Stk3 *)(((int)stk + 24)) = vecMake(-128.0f, 32.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 91.0f));
                                    camSetTarget();
                                    *(Stk3 *)(((int)stk + 24)) = vecMake(-225.0f, 33.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 87.0f));
                                    camSetEye();
                                    *(float *)0x8C287A04 = 44.0f;
                                    camMoveBegin(1.0f, 1.0f);
                                    t802 = (camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28)));
                                } else {
                                    t762 = *(int *)0x8C295DF4;
                                    t763 = *(int *)(((((t762 << 2) << 1) + 0x8C15887C) + 0x4));
                                    *(unsigned int *)(((int)stk + 52)) = ((t763 * 0xD78) + 0x8C287D84);
                                    u764 = *(float *)((((t763 * 0xD78) + 0x8C287D84) + 0xC));
                                    t765 = *(int *)(((((t762 << 2) << 1) + 0x8C15887C) + 0x0));
                                    t766 = *(int *)0x8C2873E8;
                                    t768 = (int)((int)(int)u764 % (int)(*(int *)(((t766 + t765) + 0x0))));
                                    t769 = *(int *)((((t768 << 2) + (t766 + t765)) + 0x4));
                                    u770 = *(float *)(((t769 + (t766 + t765)) + 0x10));
                                    u771 = *(float *)(((t769 + (t766 + t765)) + 0xC));
                                    t772 = *(int *)(((((t768 + 0x1) << 2) + (t766 + t765)) + 0x4));
                                    u773 = *(float *)(((t769 + (t766 + t765)) + 0x8));
                                    *(int *)((int)stk + 32) = (((int)stk + 36) + 0x40);
                                    *(Stk3 *)((((int)stk + 36) + 0x40)) = vecMake(u773, u771, u770);
                                    u774 = *(float *)(((t772 + (t766 + t765)) + 0x10));
                                    u775 = *(float *)(((t772 + (t766 + t765)) + 0xC));
                                    u776 = *(float *)(((t772 + (t766 + t765)) + 0x8));
                                    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x38);
                                    *(Stk3 *)((((int)stk + 32) + 0x38)) = vecMake(u776, u775, u774);
                                    nlGetAverageVector((((int)stk + 36) + 0x40), (((int)stk + 36) + 0x34), (((int)stk + 36) + 0x4C), (1.0f - (u764 - (float)(int)u764)), (u764 - (float)(int)u764));
                                    *(unsigned short *)(((int)stk + 40)) = (angLerp((*(short *)(((t769 + (t766 + t765)) + 0x2))), (*(short *)(((t772 + (t766 + t765)) + 0x2))), (u764 - (float)(int)u764)));
                                    *(unsigned short *)(((int)stk + 36)) = (angLerp((*(short *)(((t769 + (t766 + t765)) + 0x4))), (*(short *)(((t772 + (t766 + t765)) + 0x4))), (u764 - (float)(int)u764)));
                                    *(unsigned short *)(((int)stk + 44)) = (angLerp((*(short *)(((t769 + (t766 + t765)) + 0x6))), (*(short *)(((t772 + (t766 + t765)) + 0x6))), (u764 - (float)(int)u764)));
                                    nlPushUnitMatrix();
                                    nlRotateAY(0x4000);
                                    nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 40)))));
                                    nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 36)))));
                                    nlRotateAZ((unsigned short)(*(short *)(((int)stk + 44))));
                                    nlTranslate((-(*(float *)(((int)stk + 112)))), (-(*(float *)(((int)stk + 116)))), (*(float *)(((int)stk + 120))));
                                    nlGetMatrix(0x8C2878F8);
                                    nlPopMatrix(0x1);
                                    t801 = advFovKey((float)t768);
                                    *(unsigned int *)0x8C287B44 = 0x1;
                                    t802 = t801;
                                }
                                t812 = t802;
                            }
                            t828 = t812;
                        } else {
                            t827 = mainSoftReset(0x1);
                            *(unsigned int *)0x8C34B4F0 = 0x0;
                            t828 = t827;
                        }
                        t842 = t828;
                    }
                    t988 = t842;
                } else {
                    if ((((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 8) == 0) && ((t858 = *(int *)0x8C29B89C, t859 = *(int *)((t858 + 0x10)), (t859 & 8) == 0) && ((t860 = *(int *)0x8C29B8A0, t861 = *(int *)((t860 + 0x10)), (t861 & 8) == 0) && (t862 = *(int *)0x8C29B8A4, t863 = *(int *)((t862 + 0x10)), (t863 & 8) == 0)))) {
                        t868 = *(int *)0x8C295DF4;
                        t871 = 0x1;
                        if (t868 == 9) {
                        } else {
                            t869 = 0x0;
                            if (t868 == 10) {
                                t869 = 0x12C;
                            }
                            t871 = t869;
                        }
                        t890 = t868;
                        if ((t871 != 0) && (t873 = *(int *)0x8C295DEC, (int)t873 > (int)t871)) {
                            t874 = nlRandom();
                            u876 = 5.0f;
                            u876 = u876 + 0.100000001f * (float)((t871 - (*(int *)0x8C295DEC)) + 0xB4);
                            t880 = 0x8C02EDE0;
                            if (1.0f > (t874 * u876)) {
                                *(float *)0x8C289830 = 0.0f;
                                *(float *)0x8C288AB8 = 0.0f;
                                *(float *)0x8C289834 = 0.100000001f;
                                *(float *)0x8C288ABC = 0.100000001f;
                                *(volatile int *)0x8C295DF4;
                                *(int *)((int)stk + 32) = 0x8C28983A;
                                u879 = -4096.0f;
                                u879 = u879 + 8192.0f * (nlRandom());
                                *(unsigned short *)0x8C28983A = (int)u879;
                                *(unsigned short *)0x8C288AC2 = (int)u879;
                                *(unsigned short *)0x8C289838 = 0x0;
                                *(unsigned short *)0x8C288AC0 = 0x0;
                                t880 = 0xD3C;
                            }
                            t890 = t880;
                        } else {
                            t894 = 0x8C29B898;
                        }
                        t958 = t890;
                        if ((*(int *)(((int)stk + 56))) == 0) {
                        } else {
                            if ((*(int *)0x8C295DF4) == 6) {
                                camInit(t894);
                                *(Stk3 *)(((int)stk + 24)) = vecMake(-128.0f, 32.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 91.0f));
                                camSetTarget();
                                *(Stk3 *)(((int)stk + 24)) = vecMake(-225.0f, 33.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 87.0f));
                                camSetEye();
                                *(float *)0x8C287A04 = 44.0f;
                                camMoveBegin(1.0f, 1.0f);
                                t948 = (camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28)));
                            } else {
                                t908 = *(int *)0x8C295DF4;
                                t909 = *(int *)(((((t908 << 2) << 1) + 0x8C15887C) + 0x4));
                                *(unsigned int *)(((int)stk + 52)) = ((t909 * 0xD78) + 0x8C287D84);
                                u910 = *(float *)((((t909 * 0xD78) + 0x8C287D84) + 0xC));
                                t911 = *(int *)(((((t908 << 2) << 1) + 0x8C15887C) + 0x0));
                                t912 = *(int *)0x8C2873E8;
                                t914 = (int)((int)(int)u910 % (int)(*(int *)(((t912 + t911) + 0x0))));
                                t915 = *(int *)((((t914 << 2) + (t912 + t911)) + 0x4));
                                u916 = *(float *)(((t915 + (t912 + t911)) + 0x10));
                                u917 = *(float *)(((t915 + (t912 + t911)) + 0xC));
                                t918 = *(int *)(((((t914 + 0x1) << 2) + (t912 + t911)) + 0x4));
                                u919 = *(float *)(((t915 + (t912 + t911)) + 0x8));
                                *(int *)((int)stk + 32) = (((int)stk + 36) + 0x40);
                                *(Stk3 *)((((int)stk + 36) + 0x40)) = vecMake(u919, u917, u916);
                                u920 = *(float *)(((t918 + (t912 + t911)) + 0x10));
                                u921 = *(float *)(((t918 + (t912 + t911)) + 0xC));
                                u922 = *(float *)(((t918 + (t912 + t911)) + 0x8));
                                *(int *)((int)stk + 28) = (((int)stk + 32) + 0x38);
                                *(Stk3 *)((((int)stk + 32) + 0x38)) = vecMake(u922, u921, u920);
                                nlGetAverageVector((((int)stk + 36) + 0x40), (((int)stk + 36) + 0x34), (((int)stk + 36) + 0x4C), (1.0f - (u910 - (float)(int)u910)), (u910 - (float)(int)u910));
                                *(unsigned short *)(((int)stk + 40)) = (angLerp((*(short *)(((t915 + (t912 + t911)) + 0x2))), (*(short *)(((t918 + (t912 + t911)) + 0x2))), (u910 - (float)(int)u910)));
                                *(unsigned short *)(((int)stk + 36)) = (angLerp((*(short *)(((t915 + (t912 + t911)) + 0x4))), (*(short *)(((t918 + (t912 + t911)) + 0x4))), (u910 - (float)(int)u910)));
                                *(unsigned short *)(((int)stk + 44)) = (angLerp((*(short *)(((t915 + (t912 + t911)) + 0x6))), (*(short *)(((t918 + (t912 + t911)) + 0x6))), (u910 - (float)(int)u910)));
                                nlPushUnitMatrix();
                                nlRotateAY(0x4000);
                                nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 40)))));
                                nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 36)))));
                                nlRotateAZ((unsigned short)(*(short *)(((int)stk + 44))));
                                nlTranslate((-(*(float *)(((int)stk + 112)))), (-(*(float *)(((int)stk + 116)))), (*(float *)(((int)stk + 120))));
                                nlGetMatrix(0x8C2878F8);
                                nlPopMatrix(0x1);
                                t947 = advFovKey((float)t914);
                                *(unsigned int *)0x8C287B44 = 0x1;
                                t948 = t947;
                            }
                            t958 = t948;
                        }
                        t974 = t958;
                    } else {
                        t973 = mainSoftReset(0x1);
                        *(unsigned int *)0x8C34B4F0 = 0x0;
                        t974 = t973;
                    }
                    t988 = t974;
                }
                t1135 = t988;
            } else {
                if ((((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 8) == 0) && ((t1005 = *(int *)0x8C29B89C, t1006 = *(int *)((t1005 + 0x10)), (t1006 & 8) == 0) && ((t1007 = *(int *)0x8C29B8A0, t1008 = *(int *)((t1007 + 0x10)), (t1008 & 8) == 0) && (t1009 = *(int *)0x8C29B8A4, t1010 = *(int *)((t1009 + 0x10)), (t1010 & 8) == 0)))) {
                    t1015 = *(int *)0x8C295DF4;
                    t1018 = 0x1;
                    if (t1015 == 9) {
                    } else {
                        t1016 = 0x0;
                        if (t1015 == 10) {
                            t1016 = 0x12C;
                        }
                        t1018 = t1016;
                    }
                    t1037 = t1015;
                    if ((t1018 != 0) && (t1020 = *(int *)0x8C295DEC, (int)t1020 > (int)t1018)) {
                        t1021 = nlRandom();
                        u1023 = 5.0f;
                        u1023 = u1023 + 0.100000001f * (float)((t1018 - (*(int *)0x8C295DEC)) + 0xB4);
                        t1027 = 0x8C02EDE0;
                        if (1.0f > (t1021 * u1023)) {
                            *(float *)0x8C289830 = 0.0f;
                            *(float *)0x8C288AB8 = 0.0f;
                            *(float *)0x8C289834 = 0.100000001f;
                            *(float *)0x8C288ABC = 0.100000001f;
                            *(volatile int *)0x8C295DF4;
                            *(int *)((int)stk + 32) = 0x8C28983A;
                            u1026 = -4096.0f;
                            u1026 = u1026 + 8192.0f * (nlRandom());
                            *(unsigned short *)0x8C28983A = (int)u1026;
                            *(unsigned short *)0x8C288AC2 = (int)u1026;
                            *(unsigned short *)0x8C289838 = 0x0;
                            *(unsigned short *)0x8C288AC0 = 0x0;
                            t1027 = 0xD3C;
                        }
                        t1037 = t1027;
                    } else {
                        t1041 = 0x8C29B898;
                    }
                    t1105 = t1037;
                    if ((*(int *)(((int)stk + 56))) == 0) {
                    } else {
                        if ((*(int *)0x8C295DF4) == 6) {
                            camInit(t1041);
                            *(Stk3 *)(((int)stk + 24)) = vecMake(-128.0f, 32.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 91.0f));
                            camSetTarget();
                            *(Stk3 *)(((int)stk + 24)) = vecMake(-225.0f, 33.0f, ((-(((float)(*(int *)0x8C295DEC) / (1.0f + 1.0f)) * 0.699999988f)) + 87.0f));
                            camSetEye();
                            *(float *)0x8C287A04 = 44.0f;
                            camMoveBegin(1.0f, 1.0f);
                            t1095 = (camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28)));
                        } else {
                            t1055 = *(int *)0x8C295DF4;
                            t1056 = *(int *)(((((t1055 << 2) << 1) + 0x8C15887C) + 0x4));
                            *(unsigned int *)(((int)stk + 52)) = ((t1056 * 0xD78) + 0x8C287D84);
                            u1057 = *(float *)((((t1056 * 0xD78) + 0x8C287D84) + 0xC));
                            t1058 = *(int *)(((((t1055 << 2) << 1) + 0x8C15887C) + 0x0));
                            t1059 = *(int *)0x8C2873E8;
                            t1061 = (int)((int)(int)u1057 % (int)(*(int *)(((t1059 + t1058) + 0x0))));
                            t1062 = *(int *)((((t1061 << 2) + (t1059 + t1058)) + 0x4));
                            u1063 = *(float *)(((t1062 + (t1059 + t1058)) + 0x10));
                            u1064 = *(float *)(((t1062 + (t1059 + t1058)) + 0xC));
                            t1065 = *(int *)(((((t1061 + 0x1) << 2) + (t1059 + t1058)) + 0x4));
                            u1066 = *(float *)(((t1062 + (t1059 + t1058)) + 0x8));
                            *(int *)((int)stk + 32) = (((int)stk + 36) + 0x40);
                            *(Stk3 *)((((int)stk + 36) + 0x40)) = vecMake(u1066, u1064, u1063);
                            u1067 = *(float *)(((t1065 + (t1059 + t1058)) + 0x10));
                            u1068 = *(float *)(((t1065 + (t1059 + t1058)) + 0xC));
                            u1069 = *(float *)(((t1065 + (t1059 + t1058)) + 0x8));
                            *(int *)((int)stk + 28) = (((int)stk + 32) + 0x38);
                            *(Stk3 *)((((int)stk + 32) + 0x38)) = vecMake(u1069, u1068, u1067);
                            nlGetAverageVector((((int)stk + 36) + 0x40), (((int)stk + 36) + 0x34), (((int)stk + 36) + 0x4C), (1.0f - (u1057 - (float)(int)u1057)), (u1057 - (float)(int)u1057));
                            *(unsigned short *)(((int)stk + 40)) = (angLerp((*(short *)(((t1062 + (t1059 + t1058)) + 0x2))), (*(short *)(((t1065 + (t1059 + t1058)) + 0x2))), (u1057 - (float)(int)u1057)));
                            *(unsigned short *)(((int)stk + 36)) = (angLerp((*(short *)(((t1062 + (t1059 + t1058)) + 0x4))), (*(short *)(((t1065 + (t1059 + t1058)) + 0x4))), (u1057 - (float)(int)u1057)));
                            *(unsigned short *)(((int)stk + 44)) = (angLerp((*(short *)(((t1062 + (t1059 + t1058)) + 0x6))), (*(short *)(((t1065 + (t1059 + t1058)) + 0x6))), (u1057 - (float)(int)u1057)));
                            nlPushUnitMatrix();
                            nlRotateAY(0x4000);
                            nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 40)))));
                            nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 36)))));
                            nlRotateAZ((unsigned short)(*(short *)(((int)stk + 44))));
                            nlTranslate((-(*(float *)(((int)stk + 112)))), (-(*(float *)(((int)stk + 116)))), (*(float *)(((int)stk + 120))));
                            nlGetMatrix(0x8C2878F8);
                            nlPopMatrix(0x1);
                            t1094 = advFovKey((float)t1061);
                            *(unsigned int *)0x8C287B44 = 0x1;
                            t1095 = t1094;
                        }
                        t1105 = t1095;
                    }
                    t1121 = t1105;
                } else {
                    t1120 = mainSoftReset(0x1);
                    *(unsigned int *)0x8C34B4F0 = 0x0;
                    t1121 = t1120;
                }
                t1135 = t1121;
            }
            t1150 = t1135;
        }
        t1245 = t1150;
    } else {
        if ((*(int *)0x8C295DE8) == 0x6CB) {
            fadeScreenStart(0x3, 0x0, 0x3C, a7, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4));
            *(float *)0x8C287D64 = 0.00899999961f;
        }
        if ((*(int *)0x8C295DE8) == 0x707) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
        }
        if ((int)(*(int *)0x8C295DE8) > (int)0x708) {
            strmBgmFadeOut(0x2, 0x0);
            t1190 = mainSoftReset(0x0);
            *(unsigned int *)0x8C34B4F0 = 0x0;
            t1239 = t1190;
        } else {
            if (((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 8) != 0) {
                t1199 = mainSoftReset(0x1);
                *(unsigned int *)0x8C34B4F0 = 0x0;
                t1233 = t1199;
            } else {
                if (((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 8) != 0) {
                    t1206 = mainSoftReset(0x1);
                    *(unsigned int *)0x8C34B4F0 = 0x0;
                    t1227 = t1206;
                } else {
                    if (((*(int *)(((*(int *)0x8C29B8A0) + 0x10))) & 8) != 0) {
                        t1211 = mainSoftReset(0x1);
                        *(unsigned int *)0x8C34B4F0 = 0x0;
                        t1221 = t1211;
                    } else {
                        t1213 = *(int *)(((*(int *)0x8C29B8A4) + 0x10));
                        t1215 = t1213;
                        if ((t1213 & 8) == 0) {
                        } else {
                            t1214 = mainSoftReset(0x1);
                            *(unsigned int *)0x8C34B4F0 = 0x0;
                            t1215 = t1214;
                        }
                        t1221 = t1215;
                    }
                    t1227 = t1221;
                }
                t1233 = t1227;
            }
            t1239 = t1233;
        }
        t1245 = t1239;
    }
    return t1245;
}

void bodyStep(int a4, int a5, int a6, int a7, int a8, float f4)
{
    float u0;
    float u6;
    float u13;
    float u14;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u84;
    float u85;
    float u87;
    float u88;
    float u89;
    float u92;
    float u93;
    float u100;
    float t103;
    float t113;
    float u114;
    float u115;
    float t118;
    float u130;
    float t133;
    int t202;
    int t207;
    int t234;
    int t235;
    int t243;
    int t73;
    float u75;
    int t47;
    int t48;
    int t50;
    float u51;
    float u52;
    float u53;
    int t211;
    int stk[85];

    stk[76] = a8;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAC + ((int)stk + 48))) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    u0 = *(float *)((a4 + 0x394));
    if (u0 != 0.0f) {
        u6 = 0.0f;
        if (f4 > ((*(float *)((a4 + 0x328))) - (*(float *)((a4 + 0x394))))) {
            u6 = ((f4 - (*(float *)((a4 + 0x328)))) + (*(float *)((a4 + 0x394))));
        }
        if ((f4 + (*(float *)((a4 + 0x310)))) > ((*(float *)((a4 + 0x328))) - (*(float *)((a4 + 0x394))))) {
            *(unsigned int *)((a4 + 0x3A0)) = 0x1;
            u13 = *(float *)((a4 + 0x32C));
            u14 = *(float *)((a4 + 0x324));
            *(int *)((int)stk + 44) = (0xAC + ((int)stk + 48));
            *(Stk3 *)((0xAC + ((int)stk + 48))) = vecMake(u14, f4, u13);
        }
        t73 = 0x0;
        u75 = u6;
    } else {
        t24 = (0xAC + ((int)stk + 48));
        t25 = 0x8C1016D4;
        t26 = a4;
        t27 = 0x0;
        t28 = 0x0;
        u29 = 0.0f;
        u30 = u0;
        u31 = f4;
        u32 = 0.0f;
        for (;;) {
            if ((int)t28 >= (int)(*(int *)((a4 + 0x398)))) {
                break;
            }
            t25 = t28;
            t25 = (t25 << 1);
            t24 = a4;
            t25 = (t25 + t28);
            t24 = (t24 + 0xC);
            t25 = (t25 << 2);
            t25 = (t25 + t24);
            u30 = (*(float *)((t25 + 0x4)));
            if (f4 > u30) {
                t25 = t28;
                t25 = (t25 << 1);
                t24 = a4;
                t25 = (t25 + t28);
                u29 = f4;
                t24 = (t24 + 0xC);
                t25 = (t25 << 2);
                t25 = (t25 + t24);
                u30 = (*(float *)((t25 + 0x4)));
                u29 = (u29 - u30);
                if (u29 > u32) {
                    t25 = t28;
                    t25 = (t25 << 1);
                    t24 = a4;
                    t25 = (t25 + t28);
                    u32 = f4;
                    t24 = (t24 + 0xC);
                    t27 = t28;
                    t25 = (t25 << 2);
                    t25 = (t25 + t24);
                    u30 = (*(float *)((t25 + 0x4)));
                    u32 = (u32 - u30);
                }
            }
            t25 = t28;
            u30 = (*(float *)((a4 + 0x310)));
            t24 = a4;
            u29 = f4;
            t24 = (t24 + 0xC);
            u29 = (u29 + u30);
            u30 = (*(float *)((((((t28 << 1) + t25) << 2) + t24) + 0x4)));
            if (u29 > u30) {
                t25 = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = t25;
                t25 = a4;
                t26 = 0xAC;
                t25 = (t25 + 0xC);
                t26 = (t26 + ((int)stk + 48));
                nlAddVector(t26, ((((t28 << 1) + t28) << 2) + t25));
                *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
            } else {
                t47 = t24;
                t48 = t25;
                t50 = t26;
                u51 = u29;
                u52 = u30;
                u53 = u31;
            }
            u29 = u51;
            u30 = u52;
            u31 = u53;
            t24 = t47;
            t28 = (t28 + 0x1);
            t25 = t48;
            t26 = t50;
        }
        if ((*(int *)(((int)stk + 48))) != 0) {
            nlScaleVector((0xAC + ((int)stk + 48)), (0xAC + ((int)stk + 48)), (1.0f / (float)(*(int *)(((int)stk + 48)))));
        }
        t73 = t27;
        u75 = u32;
    }
    *(int *)((int)stk + 44) = (0xB8 + ((int)stk + 48));
    bodyGroundFriction(a4, 0x0, 0x0, 0x0, (0xB8 + ((int)stk + 48)), f4);
    *(float *)((a4 + 0x340)) = ((*(float *)((a4 + 0x340))) - (*(float *)(((0x348 + a4) + 0x0))));
    if (!(u75 > 0.0f)) {
    } else {
        *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + u75);
        u84 = *(float *)((a4 + 0x340));
        u85 = (-u84);
        if (!(0.0f > u84)) {
            u85 = u84;
        }
        u87 = *(float *)((a4 + 0x34C));
        u88 = *(float *)((a4 + 0x314));
        u89 = ((u87 / u85) * u88);
        if (((u87 / u85) * u88) > 1.0f) {
            u89 = 1.0f;
        }
        *(float *)((a4 + 0x334)) = ((*(float *)((a4 + 0x334))) * u89);
        u92 = *(float *)((a4 + 0x340));
        u93 = (-u92);
        if (!(0.0f > u92)) {
            u93 = u92;
        }
        *(float *)((a4 + 0x340)) = (u93 * (*(float *)((a4 + 0x34C))));
        if ((*(float *)((a4 + 0x310))) > (*(float *)((a4 + 0x340)))) {
            *(float *)((a4 + 0x340)) = 0.0f;
        }
        if ((*(float *)((a4 + 0x340))) != 0.0f) {
            u100 = *(float *)((a4 + 0x340));
            *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
            *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake(0.0f, u100, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
            nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
            t103 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
            nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (640.0f / t103));
            nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(a4); }
        t113 = vecLength(*(Stk3 *)(((int)stk + 36)), *(int *)((int)stk + 36 + 12));
        if (t113 != 0.0f) {
            u114 = *(float *)((a4 + 0x0));
            u115 = *(float *)((a4 + 0x8));
            *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
            *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake((-u114), 0.0f, (-u115));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
            bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
            nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
            t118 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
            nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (200.0f / t118));
            nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
        }
    }
    if ((*(int *)((a4 + 0x3A0))) != 0) {
        u130 = *(float *)((a4 + 0x348));
        *(int *)((int)stk + 44) = (((int)stk + 48) + 0x14);
        *(Stk3 *)((((int)stk + 48) + 0x14)) = vecMake(0.0f, u130, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xBC + ((int)stk + 32))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x324 + a4)); }
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
        bodyLinePerp(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
        nlOuterProduct((((int)stk + 48) + 0x20), (((int)stk + 48) + 0x14), (((int)stk + 48) + 0x8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((0xAC + ((int)stk + 48))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x324 + a4)); }
        t133 = vecDist(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)));
        nlScaleVector((((int)stk + 48) + 0x8), (((int)stk + 48) + 0x8), (320.0f / t133));
        nlAddVector((0x330 + a4), (((int)stk + 48) + 0x8));
    }
    *(float *)((a4 + 0x324)) = ((*(float *)((a4 + 0x324))) + (*(float *)(((0xB8 + ((int)stk + 48)) + 0x0))));
    *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + (*(float *)(((0x340 + a4) + 0x0))));
    *(float *)((a4 + 0x32C)) = ((*(float *)((a4 + 0x32C))) + (*(float *)(((0xC0 + ((int)stk + 48)) + 0x0))));
    nlScaleVector((0x330 + a4), (0x330 + a4), 0.980000019f);
    nlPushUnitMatrix();
    nlRotateAX((int)(*(float *)((a4 + 0x330))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAY((int)(*(float *)((a4 + 0x334))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAZ((int)(*(float *)((a4 + 0x338))));
    mtxMultiKeepPos((0x350 + a4));
    thunk_FUN_8c0eee50((0x350 + a4));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAX((int)(*(float *)((a4 + 0x330))));
    nlGetMatrix((((int)stk + 48) + 0x6C));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAY((int)(*(float *)((a4 + 0x334))));
    mtxMultiKeepPos((((int)stk + 48) + 0x6C));
    thunk_FUN_8c0eee50((((int)stk + 48) + 0x6C));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlRotateAZ((int)(*(float *)((a4 + 0x338))));
    mtxMultiKeepPos((((int)stk + 48) + 0x6C));
    thunk_FUN_8c0eee50((((int)stk + 48) + 0x6C));
    nlCalcPoint((0x330 + a4), (0x330 + a4));
    nlPopMatrix(0x1);
    if (u75 > 0.0f) {
        if ((*(float *)((a4 + 0x394))) != 0.0f) {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
            nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
            *(int *)((int)stk + 44) = (0xC + a4);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xC + a4));
            nlPopMatrix(0x1);
            t211 = (0x10 + a4);
        } else {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
            mtxMultiKeepPos((0x350 + a4));
            *(unsigned int *)(((int)stk + 48)) = (((t73 << 1) + t73) << 2);
            t202 = *(int *)((a4 + 0x390));
            *(unsigned int *)(((int)stk + 52)) = ((((t73 << 1) + t73) << 2) + t202);
            nlTranslate((*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x0))), (*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x4))), (*(float *)((((((t73 << 1) + t73) << 2) + t202) + 0x8))));
            t207 = *(int *)(((int)stk + 48));
            *(int *)((int)stk + 44) = ((a4 + 0xC) + t207);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((a4 + 0xC) + t207));
            nlPopMatrix(0x1);
            t211 = (0x4 + ((a4 + 0xC) + (*(int *)(((int)stk + 48)))));
        }
        *(float *)((a4 + 0x328)) = ((*(float *)((a4 + 0x328))) + ((-(*(float *)((t211 + 0x0)))) + f4));
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
    mtxMultiKeepPos((0x350 + a4));
    nlGetMatrix((((int)stk + 48) + 0x2C));
    if ((*(float *)((a4 + 0x394))) == 0.0f) {
        t234 = 0x0;
        t235 = 0x0;
        for (;;) {
            if ((int)t234 >= (int)(*(int *)((a4 + 0x398)))) {
                break;
            }
            nlPushMatrix(0x0);
            t235 = t234;
            t235 = (t235 << 1);
            t235 = (t235 + t234);
            t235 = (t235 << 2);
            *(unsigned int *)(((int)stk + 48)) = t235;
            t235 = (t235 + (*(int *)((a4 + 0x390))));
            nlTranslate((*(float *)((t235 + 0x0))), (*(float *)((t235 + 0x4))), (*(float *)((t235 + 0x8))));
            t243 = *(int *)(((int)stk + 48));
            *(int *)((int)stk + 44) = ((a4 + 0xC) + t243);
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((a4 + 0xC) + t243));
            nlPopMatrix(0x1);
            t234 = (t234 + 0x1);
        }
    }
    nlPopMatrix(0x1);
    if ((*(float *)((a4 + 0x394))) != 0.0f) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x324))), (*(float *)((a4 + 0x328))), (*(float *)((a4 + 0x32C))));
        nlPushMatrix(0x0);
        nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
        *(int *)((int)stk + 44) = (0x18C + a4);
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x18C + a4));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        mtxMultiKeepPos((((int)stk + 44) + 0x70));
        nlTranslate(0.0f, (-(*(float *)((a4 + 0x394)))), 0.0f);
        *(int *)((int)stk + 40) = (0xC + a4);
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xC + a4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((*(int *)(((0x100 + ((int)stk + 48)) + 0x0)))) = *(struct mv16 *)((((int)stk + 48) + 0x2C)); }
}
