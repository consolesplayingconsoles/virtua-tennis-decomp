/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int angDiff(int, int);
int angLerp(int, int, float);
int camProject(int, int, Stk3);
int camWorldToView(Stk4);
int evSkidMarkSpawn(int, int, int);
int footMarkCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int ikSolve2Bone(int, int, int, float, float, float, float);
int motionBone(int, int, int, int, int, int);
int motionBoneOffset(int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int nlArcSin(float);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCopyMatrix(int, int, int, int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlLoadMatrix33on44(int);
int nlMultiMatrix(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
extern int nlRotateAX();
extern int nlRotateAY();
extern int nlRotateAZ();
int nlScale(float, float, float);
int nlSetTranslate(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int perfMark(int);
int perfPrint(void);
int playerDrawModel(int);
int seFootstepCheck(int, int, int, int, int, int, int, int, int);
int swingBlurSpawn(int);
int swingTrackTip(int, int, int, int, int, int, int, int, int);
float vecDist(Stk3, Stk3);
float vecDistXZ(Stk3, Stk3);
float vecDistXZf(float, float, float, float);
Stk3 vecMake(float, float, float);
int playerPut(int a4);

int playerPut(int a4)
{
    float u0;
    float u7;
    float u8;
    float u10;
    float u11;
    float u12;
    float u20;
    int t51;
    int t60;
    int t61;
    float u87;
    float u91;
    float t97;
    float t101;
    int t106;
    float u124;
    float u129;
    float t135;
    float t139;
    int t144;
    int t156;
    int t166;
    int t178;
    int t185;
    int t181;
    int t182;
    int t198;
    int t210;
    int t222;
    int t229;
    int t225;
    int t226;
    int t243;
    int t267;
    float u274;
    int t291;
    int t303;
    int t310;
    int t306;
    int t307;
    float u323;
    int t339;
    int t351;
    int t358;
    int t354;
    int t355;
    int t395;
    int t396;
    float t401;
    int t404;
    int t405;
    float u413;
    float u416;
    float t421;
    float u428;
    float u429;
    int t438;
    int t439;
    int t440;
    int t442;
    int t444;
    int t446;
    int t459;
    int t480;
    int t498;
    int t499;
    int t505;
    float u506;
    int t510;
    float u511;
    float u520;
    float u526;
    float u527;
    float u528;
    float u534;
    int t538;
    int t540;
    int t555;
    float u557;
    int t573;
    int t574;
    float t579;
    int t582;
    int t583;
    float u591;
    float u594;
    float t599;
    float u606;
    float u607;
    int t616;
    int t617;
    int t618;
    int t620;
    int t622;
    int t624;
    int t637;
    int t658;
    float u665;
    float u666;
    float u667;
    float u673;
    int t675;
    int t677;
    int t684;
    float t697;
    int t701;
    float t710;
    int t721;
    int t733;
    int t739;
    int t736;
    int t737;
    float t747;
    int t753;
    int t765;
    int t771;
    int t768;
    int t769;
    float u790;
    int t800;
    int t812;
    int t819;
    int t815;
    int t816;
    int t829;
    int t841;
    int t848;
    int t844;
    int t845;
    int t858;
    int t861;
    int t863;
    int t867;
    float u869;
    int t870;
    int t888;
    int t892;
    int t901;
    float u902;
    float u903;
    int t919;
    int t929;
    float u930;
    float u931;
    int t948;
    int t965;
    float u966;
    float u968;
    int t984;
    int t991;
    float u992;
    float u994;
    int t1010;
    int t1021;
    float u1022;
    float u1024;
    int t1042;
    int t1049;
    float u1050;
    float u1052;
    int t1069;
    int t1080;
    float u1081;
    float u1083;
    int t1101;
    int t1108;
    float u1109;
    float u1111;
    int t1129;
    int t1159;
    int t1161;
    int t1162;
    int t1163;
    int t1164;
    int t1165;
    float u18;
    float u96;
    float u134;
    int t174;
    int t218;
    int t299;
    int t347;
    int t500;
    int t1143;
    int t729;
    int t761;
    int t808;
    int t837;
    float u914;
    float u915;
    float u942;
    float u943;
    float u979;
    float u980;
    float u1005;
    float u1006;
    float u1035;
    float u1036;
    float u1063;
    float u1064;
    float u1094;
    float u1095;
    float u1122;
    float u1123;
    int t1157;
    int t1170;
    int t1171;
    int t1179;
    int t1180;
    int stk[535];

    u0 = *(float *)((a4 + 0xC7C));
    *(unsigned int *)(((int)stk + 60)) = 0x1;
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)((a4 + 0xAE8))), ((*(float *)((a4 + 0xAF8))) + -5.0f), (*(float *)((a4 + 0xAF0))));
    *(int *)((int)stk + 12) = (0x7BC + ((int)stk + 28));
    camWorldToView(*(Stk4 *)((int)stk + 12));
    if (!((*(float *)(((0x7BC + ((int)stk + 28)) + 0x8))) > 10.0f)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7BC + ((int)stk + 28))); }
        camProject((((int)stk + 16) + 0x1C), (((int)stk + 16) + 0x24), *(Stk3 *)(((int)stk + 16)));
        u7 = *(float *)(((int)stk + 44));
        u8 = u7;
        if (0.0f > u7) {
            u8 = (-u7);
        }
        u10 = *(float *)(((0x7BC + ((int)stk + 28)) + 0x8));
        u11 = *(float *)0x8C287A10;
        u12 = (-u10);
        if (!(0.0f > u10)) {
            u12 = u10;
        }
        if (!(u8 > (((u11 * 10.0f) / u12) + 320.0f))) {
            if (!(0.0f > (*(float *)(((int)stk + 52))))) {
                u18 = (*(float *)(((int)stk + 52)));
            } else {
                u18 = (-(*(float *)(((int)stk + 52))));
            }
            u20 = (-u10);
            if (!(0.0f > u10)) {
                u20 = u10;
            }
            if (u18 > (((u11 * 10.0f) / u20) + 240.0f)) {
                *(unsigned int *)(((int)stk + 60)) = 0x0;
            }
        } else {
            *(unsigned int *)(((int)stk + 60)) = 0x0;
        }
    } else {
        *(unsigned int *)(((int)stk + 60)) = 0x0;
    }
    if ((*(int *)((a4 + 0xB5C))) == 0) {
        perfMark(0x8C1077FC);
    }
    motionSetCurrent(a4);
    t51 = *(int *)((a4 + 0x38));
    if ((*(int *)((a4 + 0xD4C))) != 0) {
        nlScale((-1.0f), 1.0f, 1.0f);
        *(unsigned int *)(((int)stk + 64)) = 0xFFFFFFFF;
    } else {
        *(unsigned int *)(((int)stk + 64)) = 0x1;
    }
    motionRootBone(0x0, 0x5, 0x0, 0x0, *(int *)((int)stk + 28));
    t60 = ((int (*)(int))(nlRotateAY))(0x4000);
    t61 = ((int (*)(int))(nlRotateAZ))(0xFFFFC000);
    nlGetMatrix(((*(int *)((t51 + 0x18))) + 0xC0));
    nlGetMatrix((0xFC + ((int)stk + 28)));
    *(int *)((int)stk + 24) = (0xCE0 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xCE0 + a4));
    *(unsigned short *)(((int)stk + 28)) = (nlArcTan2((*(float *)(((int)stk + 296))), (*(float *)(((int)stk + 304)))));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiPushedMatrix();
    nlGetMatrix((0x780 + ((int)stk + 24)));
    *(unsigned short *)(((0xB0A + a4) + 0x0)) = (nlArcTan2((*(float *)(((int)stk + 1960))), (*(float *)(((int)stk + 1968)))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x20))) + 0xC0));
    motionBone(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x30))) + 0xC0));
    motionBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x0))) + 0xC0));
    u87 = *(float *)((a4 + 0x4C));
    nlTranslate((u87 * 1.15999997f), (-(u87 * 1.03999996f)), 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x7FC + ((int)stk + 24))) = *(struct mv3 *)((0xAB8 + a4)); }
    *(int *)((int)stk + 20) = (0xAB8 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xAB8 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x808 + ((int)stk + 24))) = *(struct mv3 *)((0xAB8 + a4)); }
    nlPushMatrix(0x0);
    u91 = *(float *)((a4 + 0x4C));
    *(float *)(((int)stk + 72)) = u91;
    nlTranslate(0.0f, (u91 * 0.0710000023f), (u91 * 0.910000026f));
    *(int *)((int)stk + 16) = (0x800 + ((int)stk + 20));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x800 + ((int)stk + 20)));
    nlPopMatrix(0x1);
    if (((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) > 0.0f) && (u96 = *(float *)(((int)stk + 2072)), 0.0f > u96)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7F8 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x808 + ((int)stk + 24))); }
        t97 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(unsigned short *)(((int)stk + 40)) = (nlArcTan2(((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) - (*(float *)(((int)stk + 2072)))), t97));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7F8 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x808 + ((int)stk + 24))); }
        t101 = vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(float *)(((int)stk + 80)) = t101;
        *(unsigned short *)(((int)stk + 48)) = (nlArcSin(((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) / t101)));
        t106 = ((int (*)(int))(nlRotateAZ))(((unsigned short)(*(short *)(((int)stk + 40))) - (unsigned short)(*(short *)(((int)stk + 48)))));
    }
    nlGetMatrix(((*(int *)((t51 + 0x50))) + 0xC0));
    nlPopMatrix(0x1);
    footMarkCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlPushMatrix(0x0);
    motionBone(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x24))) + 0xC0));
    motionBone(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x34))) + 0xC0));
    motionBone(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x4))) + 0xC0));
    u124 = *(float *)((a4 + 0x4C));
    *(float *)(((int)stk + 84)) = u124;
    nlTranslate(((*(float *)(((int)stk + 84))) * 1.15999997f), (-(u124 * 1.03999996f)), 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x7F8 + ((int)stk + 28))) = *(struct mv3 *)((0xAC4 + a4)); }
    *(int *)((int)stk + 24) = (0xAC4 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xAC4 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x808 + ((int)stk + 24))) = *(struct mv3 *)((0xAC4 + a4)); }
    nlPushMatrix(0x0);
    u129 = *(float *)((a4 + 0x4C));
    *(float *)(((int)stk + 76)) = u129;
    nlTranslate(0.0f, (u129 * 0.0710000023f), (u129 * 0.910000026f));
    *(int *)((int)stk + 20) = (0x7FC + ((int)stk + 24));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x7FC + ((int)stk + 24)));
    nlPopMatrix(0x1);
    if (((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) > 0.0f) && (u134 = *(float *)(((int)stk + 2072)), 0.0f > u134)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7F8 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x808 + ((int)stk + 24))); }
        t135 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(unsigned short *)(((int)stk + 40)) = (nlArcTan2(((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) - (*(float *)(((int)stk + 2072)))), t135));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7F8 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x808 + ((int)stk + 24))); }
        t139 = vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(unsigned short *)(((int)stk + 48)) = (nlArcSin(((*(float *)(((0x808 + ((int)stk + 24)) + 0x4))) / t139)));
        t144 = ((int (*)(int))(nlRotateAZ))(((unsigned short)(*(short *)(((int)stk + 40))) - (unsigned short)(*(short *)(((int)stk + 48)))));
    }
    nlGetMatrix(((*(int *)((t51 + 0x54))) + 0xC0));
    nlPopMatrix(0x1);
    footMarkCheck(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    seFootstepCheck(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16));
    evSkidMarkSpawn(a4, 0x1, 0x0);
    motionBone(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    t156 = ((int (*)(int))(nlRotateAY))(0x8000);
    if ((*(int *)((a4 + 0x38))) == 0x8C1570A4) {
        *(unsigned int *)(((int)stk + 32)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)((a4 + 0xB60))) & 0x20000);
    }
    nlPushMatrix(0x0);
    t166 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
    if ((int)(short)t166 >= 0) {
        t174 = (short)(angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28)))));
    } else {
        t174 = (-(short)(angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))))));
    }
    if ((int)t174 > (int)0x1000) {
        t178 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
        t185 = 0x1;
        if ((int)(short)t178 > 0) {
        } else {
            t181 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
            t182 = 0x0;
            if ((int)(short)t181 < 0) {
                t182 = 0xFFFFFFFF;
            }
            t185 = t182;
        }
        *(unsigned short *)((a4 + 0xB1C)) = ((((t185 << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
    }
    *(unsigned int *)(((int)stk + 36)) = (unsigned short)(*(short *)(((int)stk + 28)));
    if ((*(int *)(((int)stk + 32))) == 0) {
        t198 = ((int (*)(int))(nlRotateAX))((((*(short *)((a4 + 0xB1C))) - (*(int *)(((int)stk + 36)))) * (*(int *)(((int)stk + 64)))));
    }
    nlGetMatrix(((*(int *)((t51 + 0x8))) + 0xC0));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 60))) != 0) {
        t210 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
        if ((int)(short)t210 >= 0) {
            t218 = (short)(angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28)))));
        } else {
            t218 = (-(short)(angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))))));
        }
        if ((int)t218 > (int)0x1000) {
            t222 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
            t229 = 0x1;
            if ((int)(short)t222 > 0) {
            } else {
                t225 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
                t226 = 0x0;
                if ((int)(short)t225 < 0) {
                    t226 = 0xFFFFFFFF;
                }
                t229 = t226;
            }
            *(unsigned short *)((a4 + 0xB1E)) = ((((t229 << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
        }
        nlPushMatrix(0x0);
        nlLoadMatrix((0xFC + ((int)stk + 28)));
        if ((*(int *)(((int)stk + 32))) == 0) {
            t243 = ((int (*)(int))(nlRotateAX))((((-(*(short *)((a4 + 0xB1E)))) + (*(int *)(((int)stk + 36)))) * (*(int *)(((int)stk + 64)))));
        }
        nlGetMatrix(((*(int *)((t51 + 0xC))) + 0xC0));
        nlPopMatrix(0x1);
    }
    motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x28))) + 0xC0));
    nlGetMatrix((0xBC + ((int)stk + 28)));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiPushedMatrix();
    nlGetMatrix((0x17C + ((int)stk + 28)));
    *(unsigned short *)(((0xB0C + a4) + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 424))), (-(*(float *)(((int)stk + 432)))))));
    nlPopMatrix(0x1);
    t267 = nlArcTan2((*(float *)(((int)stk + 232))), (-(*(float *)(((int)stk + 240)))));
    if ((*(int *)(((int)stk + 60))) == 0) {
    } else {
        *(unsigned short *)(((int)stk + 40)) = (-t267);
        if ((*(int *)0x8C287C60) == 0) {
            *(int *)((int)stk + 24) = (a4 + 0xB20);
            u274 = (*(float *)(((a4 + 0xB20) + 0x0)));
            u274 = u274 + 0.0100000007f * (float)(short)(angDiff((*(short *)(((int)stk + 40))), (*(short *)((a4 + 0xB1C)))));
            *(float *)(((a4 + 0xB20) + 0x0)) = u274;
            *(int *)((int)stk + 24) = (0xB1C + a4);
            *(unsigned short *)(((0xB1C + a4) + 0x0)) = (int)((float)(*(short *)(((0xB1C + a4) + 0x0))) + ((float)(short)(angDiff((*(short *)(((int)stk + 40))), (*(short *)((a4 + 0xB1C))))) * 0.100000001f));
            *(unsigned short *)((a4 + 0xB1C)) = (int)((float)(*(short *)((a4 + 0xB1C))) + (*(float *)(((0xB20 + a4) + 0x0))));
        }
        t291 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
        if ((int)(short)t291 >= 0) {
            t299 = (short)(angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28)))));
        } else {
            t299 = (-(short)(angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))))));
        }
        if ((int)t299 > (int)0x1000) {
            t303 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
            t310 = 0x1;
            if ((int)(short)t303 > 0) {
            } else {
                t306 = angDiff((*(short *)((a4 + 0xB1C))), (*(short *)(((int)stk + 28))));
                t307 = 0x0;
                if ((int)(short)t306 < 0) {
                    t307 = 0xFFFFFFFF;
                }
                t310 = t307;
            }
            *(unsigned short *)((a4 + 0xB1C)) = ((((t310 << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
        }
        *(unsigned short *)(((int)stk + 40)) = (*(short *)((a4 + 0xB1C)));
        if ((*(int *)0x8C287C60) == 0) {
            *(int *)((int)stk + 24) = (a4 + 0xB24);
            u323 = (*(float *)(((a4 + 0xB24) + 0x0)));
            u323 = u323 + 0.0100000007f * (float)(short)(angDiff((*(short *)(((int)stk + 40))), (*(short *)((a4 + 0xB1E)))));
            *(float *)(((a4 + 0xB24) + 0x0)) = u323;
            *(int *)((int)stk + 24) = (0xB1E + a4);
            *(unsigned short *)(((0xB1E + a4) + 0x0)) = (int)((float)(*(short *)(((0xB1E + a4) + 0x0))) + ((float)(short)(angDiff((*(short *)(((int)stk + 40))), (*(short *)((a4 + 0xB1E))))) * 0.100000001f));
            *(unsigned short *)((a4 + 0xB1E)) = (int)((float)(*(short *)((a4 + 0xB1E))) + (*(float *)(((0xB24 + a4) + 0x0))));
        }
        t339 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
        if ((int)(short)t339 >= 0) {
            t347 = (short)(angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28)))));
        } else {
            t347 = (-(short)(angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))))));
        }
        if ((int)t347 > (int)0x1000) {
            t351 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
            t358 = 0x1;
            if ((int)(short)t351 > 0) {
            } else {
                t354 = angDiff((*(short *)((a4 + 0xB1E))), (*(short *)(((int)stk + 28))));
                t355 = 0x0;
                if ((int)(short)t354 < 0) {
                    t355 = 0xFFFFFFFF;
                }
                t358 = t355;
            }
            *(unsigned short *)((a4 + 0xB1E)) = ((((t358 << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
        }
    }
    nlPushMatrix(0x0);
    motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x14))) + 0xC0));
    nlGetMatrix(((*(int *)((t51 + 0x64))) + 0xC0));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlGetMatrix((0x3FC + ((int)stk + 28)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x11, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    *(int *)((int)stk + 24) = (0x7EC + ((int)stk + 28));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x7EC + ((int)stk + 28)));
    motionBone(0x12, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4));
    *(int *)((int)stk + 20) = (0xAC + ((int)stk + 24));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xAC + ((int)stk + 24)));
    motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix((0x784 + ((int)stk + 20)));
    *(int *)((int)stk + 16) = (0x7DC + ((int)stk + 20));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x7DC + ((int)stk + 20)));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    t395 = nlArcTan2(((*(float *)(((int)stk + 2032))) - (*(float *)(((int)stk + 2056)))), ((*(float *)(((int)stk + 2040))) - (*(float *)(((int)stk + 2064)))));
    t396 = ((int (*)(int))(nlRotateAY))((-t395));
    nlSubVector3op((0x7C8 + ((int)stk + 28)), (0xA8 + ((int)stk + 28)), (0x7EC + ((int)stk + 28)));
    nlCalcPoint((0x7C8 + ((int)stk + 28)), (0x7C8 + ((int)stk + 28)));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7EC + ((int)stk + 28))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7E0 + ((int)stk + 16))); }
    t401 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    t404 = nlArcTan2(((*(float *)(((int)stk + 2036))) - (*(float *)(((int)stk + 2060)))), t401);
    t405 = ((int (*)(int))(nlRotateAX))(t404);
    nlCalcPoint((0x7C8 + ((int)stk + 28)), (0x7C8 + ((int)stk + 28)));
    nlPopMatrix(0x1);
    *(unsigned short *)(((int)stk + 28)) = (nlArcTan2((-(*(float *)(((int)stk + 2020)))), (*(float *)(((int)stk + 2024)))));
    u413 = (*(float *)(((int)stk + 2036)));
    u413 = u413 + u0 * (*(float *)((a4 + 0xC84)));
    *(float *)(((int)stk + 2036)) = u413;
    u416 = (*(float *)(((int)stk + 2032)));
    u416 = u416 + u0 * (*(float *)((a4 + 0xC80)));
    *(float *)(((int)stk + 2032)) = u416;
    *(unsigned short *)(((int)stk + 36)) = ((nlArcTan2((u416 - (*(float *)(((int)stk + 2056)))), ((*(float *)(((int)stk + 2040))) - (*(float *)(((int)stk + 2064)))))) + 0xC000);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7D4 + ((int)stk + 28))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7F8 + ((int)stk + 16))); }
    t421 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    *(unsigned short *)(((int)stk + 32)) = (nlArcTan2(((*(float *)(((int)stk + 2036))) - (*(float *)(((int)stk + 2060)))), t421));
    nlPushMatrix(0x0);
    if (u0 != 0.0f) {
        motionBoneOffset(0x11);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7D4 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7F8 + ((int)stk + 16))); }
        *(float *)(((int)stk + 44)) = (vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
        u428 = *(float *)(((int)stk + 2060));
        u429 = *(float *)(((int)stk + 2036));
        *(float *)(((int)stk + 52)) = (u429 - u428);
        ikSolve2Bone((((int)stk + 28) + 0xC), (((int)stk + 28) + 0x14), 0x1, (*(float *)(((int)stk + 44))), (u429 - u428), (*(float *)((((*(int *)0x8C2873B8) + 0xD8) + 0x0))), (*(float *)((((*(int *)0x8C2873B8) + 0xA8) + 0x0))));
        nlLoadMatrix33on44(0x8C287938);
        t438 = ((int (*)(int))(nlRotateAY))((unsigned short)(*(short *)(((int)stk + 36))));
        t439 = *(short *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 36)) = (unsigned short)t439;
        t440 = ((int (*)(int))(nlRotateAZ))((unsigned short)t439);
        t442 = ((int (*)(int))(nlRotateAX))((unsigned short)(*(short *)(((int)stk + 28))));
        t444 = ((int (*)(int))(nlRotateAZ))((-(*(int *)(((int)stk + 36)))));
        t446 = ((int (*)(int))(nlRotateAZ))((-(unsigned short)(*(short *)(((int)stk + 48)))));
    } else {
        motionBone(0x11, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    }
    nlGetMatrix(((*(int *)((t51 + 0x48))) + 0xC0));
    nlPushMatrix(0x0);
    nlLoadMatrix((0x3FC + ((int)stk + 28)));
    nlMultiPushedMatrix();
    nlGetMatrix((0x63C + ((int)stk + 28)));
    nlPopMatrix(0x1);
    if (u0 != 0.0f) {
        motionBoneOffset(0x12);
        t459 = ((int (*)(int))(nlRotateAZ))((-(unsigned short)(*(short *)(((int)stk + 40)))));
    } else {
        motionBone(0x12, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    }
    nlGetMatrix(((*(int *)((t51 + 0x4C))) + 0xC0));
    motionBoneOffset(0xE);
    nlLoadMatrix33on44((0x77C + ((int)stk + 28)));
    *(int *)((int)stk + 24) = (0xA8 + ((int)stk + 28));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xA8 + ((int)stk + 28)));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiPushedMatrix();
    nlSetTranslate(0x8C1016D4);
    nlGetMatrix((0x77C + ((int)stk + 28)));
    nlPopMatrix(0x1);
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((int)stk + 196))), (*(float *)(((int)stk + 200))), (*(float *)(((int)stk + 204))));
    t480 = ((int (*)(int))(nlRotateAZ))((int)((float)(*(short *)((a4 + 0xC8C))) * u0));
    nlMultiMatrix((0x77C + ((int)stk + 28)));
    nlGetMatrix(((*(int *)((t51 + 0x3C))) + 0xC0));
    if ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) == 1) {
        motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    } else {
        motionRootBone(0x1, 0xA, 0x0, 0x0, *(int *)((int)stk + 28));
    }
    nlGetMatrix((0x47C + ((int)stk + 28)));
    nlPushMatrix(0x0);
    nlTranslate(1.0f, 0.0f, 0.0f);
    *(int *)((int)stk + 24) = (0xCD4 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xCD4 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x94 + ((int)stk + 24))) = *(struct mv3 *)((0xCD4 + a4)); }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(4.0f, 0.0f, 0.0f);
    *(int *)((int)stk + 20) = (0xD04 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xD04 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xA8 + ((int)stk + 28))) = *(struct mv3 *)((0xD04 + a4)); }
    t498 = nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0x8C10779C;
    *(unsigned int *)(((int)stk + 28)) = 0x8C1077CC;
    *(unsigned int *)(((int)stk + 56)) = 0x8C1077FC;
    t499 = t498;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 28))) >= (unsigned int)(*(int *)(((int)stk + 56)))) {
            break;
        }
        t499 = (nlPushMatrix(0x0));
        t499 = 0xC5C;
        t499 = (*(int *)((a4 + t499)));
        if (t499 == 12) {
            t505 = *(int *)(((int)stk + 28));
            t499 = 0x8;
            u506 = *(float *)((t505 + t499));
            t499 = 0x4;
            t499 = (nlTranslate((*(float *)((t505 + 0x0))), (*(float *)((t505 + t499))), u506));
        } else {
            t510 = *(int *)(((int)stk + 32));
            t499 = 0x8;
            u511 = *(float *)((t510 + t499));
            t499 = 0x4;
            t499 = (nlTranslate((*(float *)((t510 + 0x0))), (*(float *)((t510 + t499))), u511));
        }
        t500 = 0xBE0;
        t500 = (t500 + a4);
        t500 = (t500 + (*(int *)(((int)stk + 36))));
        *(int *)((int)stk + 24) = (0x30 + t500);
        t499 = (mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x30 + t500)));
        t499 = 0xB0;
        u520 = *(float *)((((int)stk + 28) + t499));
        t499 = 0x38;
        *(float *)((((0xBE0 + a4) + (*(int *)(((int)stk + 36)))) + t499)) = u520;
        t499 = (nlPopMatrix(0x1));
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0xC);
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0xC);
        t500 = (*(int *)(((int)stk + 28)));
        t500 = (t500 + 0xC);
        *(unsigned int *)(((int)stk + 28)) = t500;
    }
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 28)) = (0x63C + ((int)stk + 28));
    u526 = *(float *)(((0x63C + ((int)stk + 28)) + 0x24));
    u527 = *(float *)(((0x63C + ((int)stk + 28)) + 0x20));
    u528 = (-u527);
    if (!(0.0f > u527)) {
        u528 = u527;
    }
    *(unsigned short *)(((0xB4 + ((int)stk + 28)) + 0x0)) = (nlArcTan2((-u528), u526));
    *(unsigned short *)(((0xB4 + ((int)stk + 28)) + 0x0)) = (angLerp((*(short *)(((int)stk + 208))), 0x0, 0.5f));
    nlPushMatrix(0x0);
    u534 = *(float *)((a4 + 0x4C));
    *(float *)(((int)stk + 68)) = u534;
    nlTranslate(((*(float *)(((int)stk + 68))) * 2.0999999f), ((*(float *)(((int)stk + 68))) * 0.479999989f), (u534 * 0.600000024f));
    t538 = ((int (*)(int))(nlRotateAX))(0xFFFFC000);
    t540 = ((int (*)(int))(nlRotateAX))((-(*(short *)(((int)stk + 208)))));
    nlGetMatrix(((*(int *)((t51 + 0x60))) + 0xC0));
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlGetMatrix(((*(int *)((t51 + 0x10))) + 0xC0));
    nlGetMatrix(((*(int *)((t51 + 0x5C))) + 0xC0));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlGetMatrix((0x3BC + ((int)stk + 28)));
    nlPopMatrix(0x1);
    t555 = *(int *)((a4 + 0xC5C));
    u557 = u0;
    if (((*(int *)((((((t555 << 1) + t555) << 2) << 1) + 0x8C105FE0))) & 0x1000) == 0) {
        u557 = 0.0f;
    }
    nlPushMatrix(0x0);
    motionBone(0xF, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    *(int *)((int)stk + 24) = (0x7EC + ((int)stk + 28));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x7EC + ((int)stk + 28)));
    motionBone(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4));
    *(int *)((int)stk + 20) = (0xAC + ((int)stk + 24));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xAC + ((int)stk + 24)));
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix((0x784 + ((int)stk + 20)));
    *(int *)((int)stk + 16) = (0x7DC + ((int)stk + 20));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x7DC + ((int)stk + 20)));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    t573 = nlArcTan2(((*(float *)(((int)stk + 2032))) - (*(float *)(((int)stk + 2056)))), ((*(float *)(((int)stk + 2040))) - (*(float *)(((int)stk + 2064)))));
    t574 = ((int (*)(int))(nlRotateAY))((-t573));
    nlSubVector3op((0x7C8 + ((int)stk + 28)), (0xA8 + ((int)stk + 28)), (0x7EC + ((int)stk + 28)));
    nlCalcPoint((0x7C8 + ((int)stk + 28)), (0x7C8 + ((int)stk + 28)));
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7EC + ((int)stk + 28))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7E0 + ((int)stk + 16))); }
    t579 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    t582 = nlArcTan2(((*(float *)(((int)stk + 2036))) - (*(float *)(((int)stk + 2060)))), t579);
    t583 = ((int (*)(int))(nlRotateAX))(t582);
    nlCalcPoint((0x7C8 + ((int)stk + 28)), (0x7C8 + ((int)stk + 28)));
    nlPopMatrix(0x1);
    *(unsigned short *)(((int)stk + 36)) = (nlArcTan2((-(*(float *)(((int)stk + 2020)))), (*(float *)(((int)stk + 2024)))));
    u591 = (*(float *)(((int)stk + 2036)));
    u591 = u591 + u557 * (*(float *)((a4 + 0xC84)));
    *(float *)(((int)stk + 2036)) = u591;
    u594 = (*(float *)(((int)stk + 2032)));
    u594 = u594 + u557 * (*(float *)((a4 + 0xC80)));
    *(float *)(((int)stk + 2032)) = u594;
    *(unsigned short *)(((int)stk + 32)) = ((nlArcTan2((u594 - (*(float *)(((int)stk + 2056)))), ((*(float *)(((int)stk + 2040))) - (*(float *)(((int)stk + 2064)))))) + 0xC000);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7D4 + ((int)stk + 28))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7F8 + ((int)stk + 16))); }
    t599 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    *(unsigned short *)(((int)stk + 28)) = (nlArcTan2(((*(float *)(((int)stk + 2036))) - (*(float *)(((int)stk + 2060)))), t599));
    nlPushMatrix(0x0);
    if (u557 != 0.0f) {
        motionBoneOffset(0xF);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0x7D4 + ((int)stk + 28))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x7F8 + ((int)stk + 16))); }
        *(float *)(((int)stk + 44)) = (vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
        u606 = *(float *)(((int)stk + 2060));
        u607 = *(float *)(((int)stk + 2036));
        *(float *)(((int)stk + 52)) = (u607 - u606);
        ikSolve2Bone((((int)stk + 28) + 0xC), (((int)stk + 28) + 0x14), 0x1, (*(float *)(((int)stk + 44))), (u607 - u606), (*(float *)((((*(int *)0x8C2873B8) + 0xC0) + 0x0))), (*(float *)((((*(int *)0x8C2873B8) + 0x9C) + 0x0))));
        nlLoadMatrix33on44(0x8C287938);
        t616 = ((int (*)(int))(nlRotateAY))((unsigned short)(*(short *)(((int)stk + 32))));
        t617 = *(short *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 32)) = (unsigned short)t617;
        t618 = ((int (*)(int))(nlRotateAZ))((unsigned short)t617);
        t620 = ((int (*)(int))(nlRotateAX))((unsigned short)(*(short *)(((int)stk + 36))));
        t622 = ((int (*)(int))(nlRotateAZ))((-(*(int *)(((int)stk + 32)))));
        t624 = ((int (*)(int))(nlRotateAZ))((-(unsigned short)(*(short *)(((int)stk + 48)))));
    } else {
        motionBone(0xF, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    }
    nlGetMatrix(((*(int *)((t51 + 0x40))) + 0xC0));
    nlPushMatrix(0x0);
    nlLoadMatrix((0x3BC + ((int)stk + 28)));
    nlMultiPushedMatrix();
    nlGetMatrix((0x5BC + ((int)stk + 28)));
    nlPopMatrix(0x1);
    if (u557 != 0.0f) {
        motionBoneOffset(0x10);
        t637 = ((int (*)(int))(nlRotateAZ))((-(unsigned short)(*(short *)(((int)stk + 40)))));
    } else {
        motionBone(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    }
    nlGetMatrix(((*(int *)((t51 + 0x44))) + 0xC0));
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    nlLoadMatrix33on44((0x77C + ((int)stk + 28)));
    *(int *)((int)stk + 24) = (0xA8 + ((int)stk + 28));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xA8 + ((int)stk + 28)));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiPushedMatrix();
    nlSetTranslate(0x8C1016D4);
    nlGetMatrix((0x780 + ((int)stk + 24)));
    nlPopMatrix(0x1);
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((int)stk + 196))), (*(float *)(((int)stk + 200))), (*(float *)(((int)stk + 204))));
    t658 = ((int (*)(int))(nlRotateAZ))((int)((float)(*(short *)((a4 + 0xC8C))) * u557));
    nlMultiMatrix((0x780 + ((int)stk + 24)));
    nlGetMatrix(((*(int *)((t51 + 0x38))) + 0xC0));
    nlTranslate(0.899999976f, 0.0f, -0.519999981f);
    *(int *)((int)stk + 20) = (0xCC8 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xCC8 + a4));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 28)) = (0x5BC + ((int)stk + 28));
    u665 = *(float *)(((0x5BC + ((int)stk + 28)) + 0x24));
    u666 = *(float *)(((0x5BC + ((int)stk + 28)) + 0x20));
    u667 = (-u666);
    if (!(0.0f > u666)) {
        u667 = u666;
    }
    *(unsigned short *)(((0xB4 + ((int)stk + 28)) + 0x0)) = ((nlArcTan2(u667, u665)) - 32768);
    *(unsigned short *)(((0xB4 + ((int)stk + 28)) + 0x0)) = (angLerp((*(short *)(((int)stk + 208))), 0x0, 0.5f));
    nlPushMatrix(0x0);
    u673 = *(float *)((a4 + 0x4C));
    nlTranslate((u673 * 2.0999999f), (u673 * 0.479999989f), (-(u673 * 0.600000024f)));
    t675 = ((int (*)(int))(nlRotateAX))(0x4000);
    t677 = ((int (*)(int))(nlRotateAX))((*(short *)(((int)stk + 208))));
    nlGetMatrix(((*(int *)((t51 + 0x58))) + 0xC0));
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
    t684 = ((int (*)(int))(nlRotateAZ))(0xFFFFC000);
    nlTranslate(1.20000005f, 1.70000005f, 0.0f);
    *(int *)((int)stk + 24) = (0xAF4 + a4);
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xAF4 + a4));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiPushedMatrix();
    nlGetMatrix((0x77C + ((int)stk + 28)));
    nlPopMatrix(0x1);
    *(unsigned short *)(((((int)stk + 28) + 0x40) + 0x0)) = (nlArcTan2((*(float *)(((int)stk + 1944))), (*(float *)(((int)stk + 1952)))));
    t697 = vecDistXZf(0.0f, 0.0f, (*(float *)(((int)stk + 1944))), (*(float *)(((int)stk + 1952))));
    *(unsigned short *)(((((int)stk + 28) + 0x3C) + 0x0)) = (nlArcTan2((*(float *)(((int)stk + 1948))), t697));
    nlPopMatrix(0x1);
    t701 = *(int *)(((int)stk + 60));
    if (t701 == 0) {
        t1143 = t701;
    } else {
        nlPushMatrix(0x0);
        nlLoadMatrix((0x17C + ((int)stk + 28)));
        nlGetMatrix((0x77C + ((int)stk + 28)));
        *(unsigned short *)(((int)stk + 28)) = ((nlArcTan2((*(float *)(((int)stk + 1960))), (*(float *)(((int)stk + 1968))))) - 32768);
        t710 = vecDistXZf(0.0f, 0.0f, (*(float *)(((int)stk + 1960))), (*(float *)(((int)stk + 1968))));
        *(unsigned short *)(((int)stk + 32)) = (-(nlArcTan2((*(float *)(((int)stk + 1964))), t710)));
        nlPopMatrix(0x1);
        *(unsigned short *)(((int)stk + 56)) = (nlArcTan2(((*(float *)0x8C291F30) - (*(float *)((a4 + 0xAF4)))), ((*(float *)0x8C291F38) - (*(float *)((a4 + 0xAFC))))));
        t721 = angDiff((*(short *)(((int)stk + 56))), (*(short *)(((int)stk + 28))));
        if ((int)(short)t721 >= 0) {
            t729 = (short)(angDiff((*(short *)(((int)stk + 56))), (*(short *)(((int)stk + 28)))));
        } else {
            t729 = (-(short)(angDiff((*(short *)(((int)stk + 56))), (*(short *)(((int)stk + 28))))));
        }
        if ((int)t729 > (int)0x3000) {
            t733 = angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))));
            t739 = 0x1;
            if ((int)(short)t733 > 0) {
            } else {
                t736 = angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))));
                t737 = 0x0;
                if ((int)(short)t736 < 0) {
                    t737 = 0xFFFFFFFF;
                }
                t739 = t737;
            }
            *(unsigned short *)(((int)stk + 56)) = ((((((t739 << 1) + t739) << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xAF4 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F30); }
        t747 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(unsigned short *)(((int)stk + 36)) = (nlArcTan2(((*(float *)0x8C291F34) - (*(float *)((a4 + 0xAF8)))), t747));
        t753 = angDiff((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32))));
        if ((int)(short)t753 >= 0) {
            t761 = (short)(angDiff((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32)))));
        } else {
            t761 = (-(short)(angDiff((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32))))));
        }
        if ((int)t761 > (int)0x2000) {
            t765 = angDiff((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32))));
            t771 = 0x1;
            if ((int)(short)t765 > 0) {
            } else {
                t768 = angDiff((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32))));
                t769 = 0x0;
                if ((int)(short)t768 < 0) {
                    t769 = 0xFFFFFFFF;
                }
                t771 = t769;
            }
            *(unsigned short *)(((int)stk + 36)) = ((*(short *)(((int)stk + 32))) + ((((t771 << 8) << 2) << 2) << 1));
        }
        if ((*(int *)0x8C287C60) == 0) {
            *(int *)((int)stk + 24) = (0xB12 + a4);
            *(unsigned short *)(((0xB12 + a4) + 0x0)) = (int)((float)(*(short *)(((0xB12 + a4) + 0x0))) + ((float)(short)(angDiff((*(short *)(((int)stk + 56))), (*(short *)((a4 + 0xB12))))) * 0.100000001f));
            *(int *)((int)stk + 24) = (0xB10 + a4);
            *(unsigned short *)(((0xB10 + a4) + 0x0)) = (int)((float)(*(short *)(((0xB10 + a4) + 0x0))) + ((float)(short)(angDiff((*(short *)(((int)stk + 36))), (*(short *)((a4 + 0xB10))))) * 0.100000001f));
            u790 = (*(float *)((a4 + 0xB14)));
            u790 = u790 + 0.100000001f * ((*(float *)(((0xB18 + a4) + 0x0))) - (*(float *)(((0xB14 + a4) + 0x0))));
            *(float *)((a4 + 0xB14)) = u790;
        }
        t800 = angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))));
        if ((int)(short)t800 >= 0) {
            t808 = (short)(angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28)))));
        } else {
            t808 = (-(short)(angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))))));
        }
        if ((int)t808 > (int)0x3000) {
            t812 = angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))));
            t819 = 0x1;
            if ((int)(short)t812 > 0) {
            } else {
                t815 = angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 28))));
                t816 = 0x0;
                if ((int)(short)t815 < 0) {
                    t816 = 0xFFFFFFFF;
                }
                t819 = t816;
            }
            *(unsigned short *)((a4 + 0xB12)) = ((((((t819 << 1) + t819) << 8) << 2) << 2) + (*(short *)(((int)stk + 28))));
        }
        t829 = angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 32))));
        if ((int)(short)t829 >= 0) {
            t837 = (short)(angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 32)))));
        } else {
            t837 = (-(short)(angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 32))))));
        }
        if ((int)t837 > (int)0x2000) {
            t841 = angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 32))));
            t848 = 0x1;
            if ((int)(short)t841 > 0) {
            } else {
                t844 = angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 32))));
                t845 = 0x0;
                if ((int)(short)t844 < 0) {
                    t845 = 0xFFFFFFFF;
                }
                t848 = t845;
            }
            *(unsigned short *)(((0xB10 + a4) + 0x0)) = ((*(short *)(((int)stk + 32))) + ((((t848 << 8) << 2) << 2) << 1));
        }
        nlPushMatrix(0x0);
        motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4));
        t858 = ((int (*)(int))(nlRotateAZ))(0xFFFFC000);
        t861 = angDiff((*(short *)((a4 + 0xB10))), (*(short *)(((int)stk + 88))));
        t863 = ((int (*)(int))(nlRotateAZ))((int)((float)(short)t861 * (*(float *)((a4 + 0xB14)))));
        t867 = *(int *)(((int)stk + 64));
        u869 = ((float)(short)(angDiff((*(short *)((a4 + 0xB12))), (*(short *)(((int)stk + 92))))) * (*(float *)((a4 + 0xB14))));
        t870 = ((int (*)(int))(nlRotateAY))((int)(u869 * (float)t867));
        nlGetMatrix(((*(int *)(((((*(int *)0x8C294668) << 2) + t51) + 0x1C))) + 0xC0));
        nlPushMatrix(0x0);
        nlLoadMatrix(0x8C287978);
        nlMultiPushedMatrix();
        nlGetMatrix((0x77C + ((int)stk + 28)));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-1.04840004f, 2.17490005f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD60 + a4)) = *(struct mv3 *)((0xD54 + a4)); }
        *(int *)((int)stk + 24) = (0xD54 + a4);
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0xD54 + a4));
        nlSubVector3op((((int)stk + 28) + 0x44), (0xD54 + a4), (0xD60 + a4));
        *(unsigned short *)(((int)stk + 28)) = (nlArcTan2((*(float *)(((int)stk + 1944))), (*(float *)(((int)stk + 1952)))));
        nlPushUnitMatrix();
        t888 = ((int (*)(int))(nlRotateAY))((-(unsigned short)(*(short *)(((int)stk + 28)))));
        nlCalcPoint((((int)stk + 28) + 0x44), (((int)stk + 28) + 0x44));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t892 = *(int *)((a4 + 0x38));
        if ((t892 != 0x8C156D8C) && (t892 != 0x8C156E94)) {
        } else {
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB2C)) = ((*(float *)((a4 + 0xB2C))) - ((*(float *)(((((int)stk + 28) + 0x44) + 0x0))) * 100.0f));
                *(float *)((a4 + 0xB2C)) = ((*(float *)((a4 + 0xB2C))) + ((float)(-(*(short *)(((0xB28 + a4) + 0x0)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB28)) = (int)((float)(*(short *)((a4 + 0xB28))) * 0.99000001f);
                t901 = *(short *)((a4 + 0xB28));
                u902 = *(float *)((a4 + 0xB2C));
                u903 = ((-(float)t901) - u902);
                if (!(0.0f > ((float)t901 + u902))) {
                    u903 = ((float)t901 + u902);
                }
                if (u903 > 4096.0f) {
                    *(float *)((a4 + 0xB2C)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB28)) = (int)((float)(*(short *)((a4 + 0xB28))) + (*(float *)(((0xB2C + a4) + 0x0))));
                u914 = ((float)t901 + u902);
                u915 = u902;
            }
            t919 = ((int (*)(int, float, float))(nlRotateAY))((-(*(short *)((a4 + 0xB28)))), u914, u915);
            nlGetMatrix(((*(int *)((((((*(int *)0x8C29466C) << 2) + t51) + 0x68) + 0x0))) + 0xC0));
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB30)) = ((*(float *)((a4 + 0xB30))) - ((*(float *)(((((int)stk + 28) + 0x44) + 0x0))) * 100.0f));
                *(float *)((a4 + 0xB30)) = ((*(float *)((a4 + 0xB30))) + ((float)(-(*(short *)(((0xB2A + a4) + 0x0)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB2A)) = (int)((float)(*(short *)((a4 + 0xB2A))) * 0.99000001f);
                t929 = *(short *)((a4 + 0xB2A));
                u930 = *(float *)((a4 + 0xB30));
                u931 = ((-(float)t929) - u930);
                if (!(0.0f > ((float)t929 + u930))) {
                    u931 = ((float)t929 + u930);
                }
                if (u931 > 8192.0f) {
                    *(float *)((a4 + 0xB30)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB2A)) = (int)((float)(*(short *)((a4 + 0xB2A))) + (*(float *)(((0xB30 + a4) + 0x0))));
                u942 = u930;
                u943 = (float)t929;
            }
            t948 = ((int (*)(int, float, float))(nlRotateAY))(((-(*(short *)((a4 + 0xB2A)))) + (*(short *)((a4 + 0xB28)))), u942, u943);
            nlGetMatrix(((*(int *)((((((*(int *)0x8C29466C) << 2) + t51) + 0x6C) + 0x0))) + 0xC0));
        }
        if ((*(int *)((a4 + 0x38))) != 0x8C1573BC) {
        } else {
            nlPushMatrix(0x0);
            nlTranslate(-1.04840004f, 2.17490005f, 0.0f);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB4C)) = ((*(float *)((a4 + 0xB4C))) - ((*(float *)(((int)stk + 100))) * 200.0f));
                *(float *)((a4 + 0xB4C)) = ((*(float *)((a4 + 0xB4C))) + ((float)(-(*(short *)((a4 + 0xB3A)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB3A)) = (int)((float)(*(short *)((a4 + 0xB3A))) * 0.99000001f);
                t965 = *(short *)((a4 + 0xB3A));
                u966 = *(float *)((a4 + 0xB4C));
                u968 = ((-u966) - (float)t965);
                if (!(0.0f > ((float)t965 + u966))) {
                    u968 = ((float)t965 + u966);
                }
                if (u968 > 8192.0f) {
                    *(float *)((a4 + 0xB4C)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB3A)) = (int)((float)(*(short *)((a4 + 0xB3A))) + (*(float *)((a4 + 0xB4C))));
                u979 = ((float)t965 + u966);
                u980 = u966;
            }
            t984 = ((int (*)(int, float, float))(nlRotateAZ))((-(*(short *)((a4 + 0xB3A)))), u979, u980);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB40)) = ((*(float *)((a4 + 0xB40))) - ((*(float *)(((int)stk + 96))) * 200.0f));
                *(float *)((a4 + 0xB40)) = ((*(float *)((a4 + 0xB40))) + ((float)(-(*(short *)((a4 + 0xB34)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB34)) = (int)((float)(*(short *)((a4 + 0xB34))) * 0.99000001f);
                t991 = *(short *)((a4 + 0xB34));
                u992 = *(float *)((a4 + 0xB40));
                u994 = ((-u992) - (float)t991);
                if (!(0.0f > ((float)t991 + u992))) {
                    u994 = ((float)t991 + u992);
                }
                if (u994 > 8192.0f) {
                    *(float *)((a4 + 0xB40)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB34)) = (int)((float)(*(short *)((a4 + 0xB34))) + (*(float *)((a4 + 0xB40))));
                u1005 = u992;
                u1006 = (float)t991;
            }
            t1010 = ((int (*)(int, float, float))(nlRotateAX))((*(short *)((a4 + 0xB34))), u1005, u1006);
            nlGetMatrix(((*(int *)((((((*(int *)0x8C29466C) << 2) + t51) + 0x68) + 0x0))) + 0xC0));
            nlTranslate(-0.347499996f, -0.4736f, 0.0f);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB50)) = ((*(float *)((a4 + 0xB50))) - ((*(float *)(((int)stk + 100))) * 200.0f));
                *(float *)((a4 + 0xB50)) = ((*(float *)((a4 + 0xB50))) + ((float)(-(*(short *)((a4 + 0xB3C)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB3C)) = (int)((float)(*(short *)((a4 + 0xB3C))) * 0.99000001f);
                t1021 = *(short *)((a4 + 0xB3C));
                u1022 = *(float *)((a4 + 0xB50));
                u1024 = ((-u1022) - (float)t1021);
                if (!(0.0f > ((float)t1021 + u1022))) {
                    u1024 = ((float)t1021 + u1022);
                }
                if (u1024 > 8192.0f) {
                    *(float *)((a4 + 0xB50)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB3C)) = (int)((float)(*(short *)((a4 + 0xB3C))) + (*(float *)((a4 + 0xB50))));
                u1035 = ((float)t1021 + u1022);
                u1036 = u1022;
            }
            *(unsigned int *)(((int)stk + 28)) = (0xB3A + a4);
            t1042 = ((int (*)(int, float, float))(nlRotateAZ))(((-(*(short *)(((0xB3A + a4) + 0x2)))) + (*(short *)(((*(int *)(((int)stk + 28))) + 0x0)))), u1035, u1036);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB44)) = ((*(float *)((a4 + 0xB44))) - ((*(float *)(((int)stk + 96))) * 200.0f));
                *(float *)((a4 + 0xB44)) = ((*(float *)((a4 + 0xB44))) + ((float)(-(*(short *)((a4 + 0xB36)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB36)) = (int)((float)(*(short *)((a4 + 0xB36))) * 0.99000001f);
                t1049 = *(short *)((a4 + 0xB36));
                u1050 = *(float *)((a4 + 0xB44));
                u1052 = ((-u1050) - (float)t1049);
                if (!(0.0f > ((float)t1049 + u1050))) {
                    u1052 = ((float)t1049 + u1050);
                }
                if (u1052 > 16384.0f) {
                    *(float *)((a4 + 0xB44)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB36)) = (int)((float)(*(short *)((a4 + 0xB36))) + (*(float *)((a4 + 0xB44))));
                u1063 = (float)t1049;
                u1064 = ((float)t1049 + u1050);
            }
            *(unsigned int *)(((int)stk + 28)) = (0xB34 + a4);
            t1069 = ((int (*)(int, float, float))(nlRotateAX))(((*(short *)(((0xB34 + a4) + 0x2))) - (*(short *)(((0xB34 + a4) + 0x0)))), u1063, u1064);
            nlGetMatrix(((*(int *)((((((*(int *)0x8C29466C) << 2) + t51) + 0x6C) + 0x0))) + 0xC0));
            nlTranslate(0.0f, -0.685400009f, 0.0f);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB54)) = ((*(float *)((a4 + 0xB54))) - ((*(float *)(((int)stk + 100))) * 200.0f));
                *(float *)((a4 + 0xB54)) = ((*(float *)((a4 + 0xB54))) + ((float)(-(*(short *)((a4 + 0xB3E)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB3E)) = (int)((float)(*(short *)((a4 + 0xB3E))) * 0.99000001f);
                t1080 = *(short *)((a4 + 0xB3E));
                u1081 = *(float *)((a4 + 0xB54));
                u1083 = ((-u1081) - (float)t1080);
                if (!(0.0f > ((float)t1080 + u1081))) {
                    u1083 = ((float)t1080 + u1081);
                }
                if (u1083 > 8192.0f) {
                    *(float *)((a4 + 0xB54)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB3E)) = (int)((float)(*(short *)((a4 + 0xB3E))) + (*(float *)((a4 + 0xB54))));
                u1094 = (float)t1080;
                u1095 = u1081;
            }
            *(unsigned int *)(((int)stk + 28)) = (0xB3A + a4);
            t1101 = ((int (*)(int, float, float))(nlRotateAZ))(((-(*(short *)(((0xB3A + a4) + 0x4)))) + (*(short *)(((*(int *)(((int)stk + 28))) + 0x2)))), u1094, u1095);
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0xB48)) = ((*(float *)((a4 + 0xB48))) - ((*(float *)(((int)stk + 96))) * 200.0f));
                *(float *)((a4 + 0xB48)) = ((*(float *)((a4 + 0xB48))) + ((float)(-(*(short *)((a4 + 0xB38)))) / 100.0f));
                *(unsigned short *)((a4 + 0xB38)) = (int)((float)(*(short *)((a4 + 0xB38))) * 0.99000001f);
                t1108 = *(short *)((a4 + 0xB38));
                u1109 = *(float *)((a4 + 0xB48));
                u1111 = ((-u1109) - (float)t1108);
                if (!(0.0f > ((float)t1108 + u1109))) {
                    u1111 = ((float)t1108 + u1109);
                }
                if (u1111 > 24576.0f) {
                    *(float *)((a4 + 0xB48)) = 0.0f;
                }
                *(unsigned short *)((a4 + 0xB38)) = (int)((float)(*(short *)((a4 + 0xB38))) + (*(float *)((a4 + 0xB48))));
                u1122 = u1109;
                u1123 = (float)t1108;
            }
            *(unsigned int *)(((int)stk + 28)) = (0xB34 + a4);
            t1129 = ((int (*)(int, float, float))(nlRotateAX))(((*(short *)(((0xB34 + a4) + 0x4))) - (*(short *)(((*(int *)(((int)stk + 28))) + 0x2)))), u1122, u1123);
            nlGetMatrix(((*(int *)((((((*(int *)0x8C29466C) << 2) + t51) + 0x70) + 0x0))) + 0xC0));
            nlPopMatrix(0x1);
        }
        nlPopMatrix(0x1);
    }
    if ((*(int *)((a4 + 0xB5C))) == 0) {
        perfPrint();
        if ((*(int *)((a4 + 0xB5C))) == 0) {
            perfMark(0x8C107804);
        }
    } else {
        t1157 = t1143;
    }
    t1159 = *(int *)(((int)stk + 60));
    if (t1159 != 0) {
        t1161 = t1159;
        t1162 = t1157;
        t1163 = (0x1E0 + a4);
        t1164 = t51;
        t1165 = t51;
        for (;;) {
            if ((unsigned int)t1165 >= (unsigned int)(0x84 + t51)) {
                break;
            }
            t1161 = (*(int *)((t1165 + 0x0)));
            if (t1161 != 0) {
                t1162 = 0xC0;
                nlCopyMatrix(t1163, ((*(int *)((t1164 + 0x0))) + t1162), 0x0, 0x0, *(int *)((int)stk + 28));
            } else {
                t1170 = t1161;
                t1171 = t1162;
            }
            t1165 = (t1165 + 0x4);
            t1161 = t1170;
            t1162 = t1171;
            t1164 = (t1164 + 0x4);
            t1163 = (t1163 + 0x40);
        }
        nlCopyMatrix(((0x1E0 + a4) + 0x2C0), (0x47C + ((int)stk + 28)), 0x0, 0x0, *(int *)((int)stk + 28));
        swingTrackTip((*(int *)((a4 + 0xB5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16));
        playerDrawModel(a4);
        if (((*(int *)0x8C287C60) == 0) && ((t1179 = *(int *)((a4 + 0xD6C)), t1179 == -1) && (t1180 = *(int *)((a4 + 0xB60)), (t1180 & 0x10000) != 0))) {
            swingBlurSpawn((*(int *)((a4 + 0xB5C))));
        }
    }
    return (*(int *)(((int)stk + 60)));
}
