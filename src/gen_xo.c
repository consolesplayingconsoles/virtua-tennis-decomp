/* Straight-line functions with calls and guards (batch gen_xo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
int BupRequestSave(int, int, int, int);
int charaTexFreeAll(void);
int circuitMenuCursor(int, int);
float circuitNumDrawSign(int, int, int, float, float, float);
int circuitTaskAdd(int, int, int);
int circuitTaskTrim(int);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int cursorBoxPut(int, Stk3, float, float, float);
int gameModeSet(int, int, int);
int memmove(int, int, int);
int motionAdvance(int);
int motionIsEnd(int);
int motionRootAtFrame(int, int, int, int, int);
int muneSlotLoad(int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlDispStripTrnsl(int, int);
int nlLoadMatrix(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutSetSaturate(float, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlSin(int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int padDirRepeat(int, int);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primLineV(int, int, Stk6);
int primRectInc(int, int, int, int, int, int, int, int);
int sndSeCursor(void);
int sndSeDecide(void);
float sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uniformSlotLoad(int, int, int, int, int, int);
int unlockCountW0(void);
int unlockCountW1(void);
int unlockCountW2(void);
int unlockTestW0(int);
Stk3 vecMake(float, float, float);
int FUN_8c03504c(int a4);
int FUN_8c0561dc(int a4, int a5);
int FUN_8c0497cc(int a4, float f4, float f5, float f6);
float FUN_8c067dfc(int a4);

int FUN_8c03504c(int a4)
{
    int stk[72];
    register float u7;
    register int t9;
    register int t22;
    register int t34;
    register int t94;
    register float u110;
    register int t127;
    int t128;
    register float u134;
    register float u137;
    register float u140;
    register int t142;
    register float u156;
    register float u159;
    register float u162;
    register int t184;
    register float t189;
    register float u190;
    register int t219;
    register float t226;
    register float u227;
    register float u294;
    register int t311;
    int t312;
    register float u318;
    register float u321;
    register float u324;
    register int t326;
    register float u340;
    register float u343;
    register float u346;
    register int t367;
    register float t372;
    register float u373;
    register int t400;
    register float t407;
    register float u408;
    register int t476;
    register int t497;
    register int t514;
    register int t539;
    register int t563;
    int t565;
    register int t566;
    register int t600;
    register int t612;
    register int t632;
    register float t633;
    register float t636;
    register int t640;
    register float t641;
    register float t644;
    register int t648;
    register float t649;
    register float t652;
    register int t664;
    register float u710;
    register int t712;
    register int t725;
    register int t737;
    register int t797;
    register float u813;
    register int t830;
    int t831;
    register float u837;
    register float u840;
    register float u843;
    register int t845;
    register float u859;
    register float u862;
    register float u865;
    register int t887;
    register float t892;
    register float u893;
    register int t922;
    register float t929;
    register float u930;
    register float u997;
    register int t1014;
    int t1015;
    register float u1021;
    register float u1024;
    register float u1027;
    register int t1029;
    register float u1043;
    register float u1046;
    register float u1049;
    register int t1070;
    register float t1075;
    register float u1076;
    register int t1103;
    register float t1110;
    register float u1111;
    register int t1179;
    register int t1200;
    register int t1217;
    register int t1242;
    register int t1266;
    int t1268;
    register int t1269;
    register int t1303;
    register int t1315;
    register int t1335;
    register float t1336;
    register float t1339;
    register int t1343;
    register float t1344;
    register float t1347;
    register int t1351;
    register float t1352;
    register float t1355;
    register int t1379;
    register float u70;
    register float u71;
    register float u72;
    register int t95;
    register int t208;
    register int t211;
    register int t390;
    register int t393;
    register int t556;
    register int t486;
    register int t564;
    register float u619;
    register float u620;
    register int t657;
    register int t1364;
    register int t669;
    register int t670;
    register int t671;
    register int t672;
    register int t673;
    register int t674;
    register float u773;
    register float u774;
    register float u775;
    register int t798;
    register int t911;
    register int t914;
    register int t1093;
    register int t1096;
    register int t1259;
    register int t1189;
    register int t1267;
    register float u1322;
    register float u1323;
    register int t1360;

    *(unsigned int *)(((int)stk + 40)) = a4;
    *(unsigned int *)(((int)stk + 32)) = (((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C);
    if ((*(int *)0x8C2FBE0C) != (*(int *)(((int)stk + 40)))) {
        sprSheetSet(0x8C10A96C);
        sprSheetPut(0x0, 250.0f, 58.0f, 50.2999992f, (*(float *)0x8C2FBE94));
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 32) + 0x28) + 0x40);
        *(unsigned int *)(((int)stk + 56)) = 0x8C2876A8;
        *(unsigned int *)(((int)stk + 44)) = (((int)stk + 32) + 0x28);
        *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 32) + 0x28) + 0x10);
        u7 = 108.0f;
        for (;;) {
            sprSheetSet(0x8C10A8F0);
            t9 = *(int *)(((int)stk + 56));
            *(float *)((t9 + 0x10)) = ((*(float *)((t9 + 0x10))) * 209.0f);
            sprSheetPut(0x0, 33.0f, u7, 50.4000015f, (*(float *)0x8C2FBE94));
            sprSheetSet(0x8C10A914);
            sprSheetPut(0x0, 256.0f, u7, 50.4000015f, (*(float *)0x8C2FBE94));
            sprSheetSet((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C159D40))));
            sprSheetPut(0x0, 51.0f, (u7 + (1.0f + 1.0f)), 50.2999992f, (*(float *)0x8C2FBE94));
            { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 32) + 0x28)) = *(struct mv16 *)(0x8C10AA9C); }
            t22 = (*(int *)(((int)stk + 44)));
            for (;;) {
                *(float *)((t22 + 0x4)) = ((*(float *)((t22 + 0x4))) + u7);
                t22 = (t22 + 0x10);
                if ((unsigned int)t22 >= (unsigned int)(*(int *)(((int)stk + 48)))) {
                    break;
                }
            }
            *(unsigned int *)(((*(int *)(((int)stk + 44))) + 0xC)) = (((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8);
            *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0xC)) = (((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8);
            nlDispStripTrnsl(0x4, (((int)stk + 32) + 0x28));
            u7 = (u7 + 25.0f);
            if ((*(int *)(((int)stk + 36))) == 5) {
                u7 = (u7 + 17.0f);
            }
            t34 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t34 + 0x1);
            if ((int)(t34 + 0x1) >= (int)0x9) {
                break;
            }
        }
        *(Stk3 *)(((int)stk + 20)) = vecMake(640.0f, 0.0f, 50.5999985f);
        primRectInc(0x280, 0x1E0, ((((int)((*(float *)0x8C2FBE94) * 140.0f) << 16) << 8) | 0x0), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 50.0f, 50.5f);
        primRectInc(0x251, 0x2F, ((((int)((*(float *)0x8C2FBE94) * 192.0f) << 16) << 8) | 0xFF2100), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 97.0f, 50.5f);
        primRectInc(0x251, 0x109, ((((int)((*(float *)0x8C2FBE94) * 192.0f) << 16) << 8) | 0xFFD400), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 50.0f, 50.4000015f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 50.0f, 50.4000015f);
        primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 97.0f, 50.4000015f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 97.0f, 50.4000015f);
        primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 362.0f, 50.4000015f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 362.0f, 50.4000015f);
        primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
        *(Stk3 *)(((int)stk + 20)) = vecMake(23.0f, 362.0f, 50.4000015f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 50.0f, 50.4000015f);
        primLineV(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), *(Stk6 *)((int)stk + 8));
        *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 362.0f, 50.4000015f);
        *(Stk3 *)(((int)stk + 8)) = vecMake(616.0f, 50.0f, 50.4000015f);
        primLineV(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), *(Stk6 *)((int)stk + 8));
        if ((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) == 0) {
            *(unsigned int *)(((int)stk + 36)) = 0x1;
            *(float *)(((int)stk + 68)) = 1.0f;
        } else {
            *(unsigned int *)(((int)stk + 36)) = 0x0;
            *(float *)(((int)stk + 68)) = 0.5f;
            nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f);
        }
        sprSheetSet(0x8C10AA64);
        sprSheetPut(0x2000, 255.0f, 379.0f, 50.4500008f, (*(float *)0x8C2FBE94));
        *(Stk3 *)(((int)stk + 20)) = vecMake(238.0f, 377.0f, 50.5f);
        cursorBoxPut((*(int *)(((int)stk + 36))), *(Stk3 *)((int)stk + 20), (*(float *)0x8C2FBE94), 156.0f, (*(float *)(((int)stk + 68))));
        if ((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) == 1) {
            *(unsigned int *)(((int)stk + 32)) = 0x1;
            *(float *)(((int)stk + 64)) = 1.0f;
            u70 = 1.0f;
            u71 = 1.0f;
            u72 = 1.0f;
        } else {
            *(unsigned int *)(((int)stk + 32)) = 0x0;
            *(float *)(((int)stk + 64)) = 0.5f;
            u70 = 0.5f;
            u71 = 0.5f;
            u72 = 0.5f;
        }
        nlObjPutSetFadeColor(u70, u71, u72);
        sprSheetSet(0x8C10AA88);
        sprSheetPut(0x2000, 268.0f, 411.0f, 50.4500008f, (*(float *)0x8C2FBE94));
        *(Stk3 *)(((int)stk + 20)) = vecMake(238.0f, 409.0f, 50.5f);
        cursorBoxPut((*(int *)(((int)stk + 32))), *(Stk3 *)((int)stk + 20), (*(float *)0x8C2FBE94), 156.0f, (*(float *)(((int)stk + 64))));
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
        muneSlotLoad((*(int *)0x8C421F70), (*(int *)0x8C2889DC));
        if ((*(int *)((((*(int *)0x8C2889DC) << 2) + 0x8C1AFA64))) == 0) {
        } else {
            if (!((*(float *)0x8C2FBE94) > 0.899999976f)) {
            } else {
                uniformSlotLoad((*(int *)0x8C421F70), (*(signed char *)0x8C2FBC83), (*(int *)0x8C2889DC), 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4));
                t94 = unlockCountW0();
                if ((t94 != 0) && (t95 = *(signed char *)0x8C2FBC83, t95 != -1)) {
                    if ((int)(*(signed char *)0x8C2FBC83) <= (int)0xFFFFFFFF) {
                    } else {
                        if ((*(int *)((((*(signed char *)0x8C2FBC83) << 2) + (((*(int *)0x8C421F70) * 0x70) + 0x8C1AF8A4)))) == 0) {
                        } else {
                            nlMatrixMode(0x3);
                            nlUnitMatrix();
                            nlPerspective(0x2000, 1.33333337f, 0.300000012f, 3000.0f);
                            *(float *)0x8C287A10 = (320.0f / (nlTanf(0.522289753f)));
                            nlMatrixMode(0x1);
                            *(float *)0x8C287D98 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                            motionAdvance(0x8C287D84);
                            u110 = *(float *)0x8C287D90;
                            *(int *)((int)stk + 28) = (0xB8 + ((int)stk + 32));
                            motionRootAtFrame(0x8C287D84, (int)u110, 0x0, 0x0, (0xB8 + ((int)stk + 32)));
                            if ((*(int *)0x8C288AD0) != 0) {
                                *(float *)(((int)stk + 216)) = ((*(float *)(((int)stk + 216))) * (-1.0f));
                            }
                            nlPushUnitMatrix();
                            nlRotateAY((*(short *)0x8C28888A));
                            nlCalcPoint((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)));
                            nlPopMatrix(0x1);
                            nlScaleVector((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)), (*(float *)0x8C287D98));
                            nlAddVector(0x8C28886C, (0xB8 + ((int)stk + 32)));
                            t127 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                            *(unsigned int *)(((int)stk + 60)) = t127;
                            t128 = *(int *)((t127 + 0x8));
                            if (((-(((((0x20000 & t128) == 0)) ? 1 : 0) - 1)) == 0) && ((-(((((0x10000 & t128) == 0)) ? 1 : 0) - 1)) == 0)) {
                                if ((*(int *)0x8C2FBEA0) != 0) {
                                    u134 = (*(float *)0x8C28886C);
                                    u134 = u134 + 0.5f * ((-(*(float *)0x8C28886C)) + 14.0f);
                                    *(float *)0x8C28886C = u134;
                                    u137 = (*(float *)0x8C288870);
                                    u137 = u137 + 0.5f * ((-(*(float *)0x8C288870)) + -8.0f);
                                    *(float *)0x8C288870 = u137;
                                    u140 = (*(float *)0x8C288874);
                                    u140 = u140 + 0.5f * ((-(*(float *)0x8C288874)) + -45.0f);
                                    *(float *)0x8C288874 = u140;
                                    *(unsigned int *)0x8C2FBEA0 = ((*(int *)0x8C2FBEA0) - 1);
                                } else {
                                    t142 = motionIsEnd(0x8C287D84);
                                    if (t142 != 0) {
                                        *(int *)((int)stk + 28) = 0x8C28886C;
                                        *(Stk3 *)(0x8C28886C) = vecMake(14.0f, -8.0f, -45.0f);
                                    }
                                }
                            } else {
                                *(unsigned short *)0x8C28888A = ((*(short *)0x8C28888A) + ((short)((-(((((0x20000 & t128) == 0)) ? 1 : 0) - 1)) - (-(((((0x10000 & t128) == 0)) ? 1 : 0) - 1))) * (short)0x222));
                                u156 = (*(float *)0x8C28886C);
                                u156 = u156 + 0.100000001f * ((-(*(float *)0x8C28886C)) + 14.0f);
                                *(float *)0x8C28886C = u156;
                                u159 = (*(float *)0x8C288870);
                                u159 = u159 + 0.100000001f * ((-(*(float *)0x8C288870)) + -8.0f);
                                *(float *)0x8C288870 = u159;
                                u162 = (*(float *)0x8C288874);
                                u162 = u162 + 0.100000001f * ((-(*(float *)0x8C288874)) + -45.0f);
                                *(float *)0x8C288874 = u162;
                                *(unsigned int *)0x8C2FBEA0 = (int)((float)(*(int *)0x8C287DB4) - (*(float *)0x8C287D90));
                            }
                            *(float *)0x8C288AB8 = 0.0f;
                            *(float *)0x8C288ABC = 0.0f;
                            nlPushUnitMatrix();
                            nlTranslate((*(float *)0x8C28886C), (*(float *)0x8C288870), (*(float *)0x8C288874));
                            nlRotateAY((*(short *)0x8C28888A));
                            playerPut(0x8C287D84, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
                            nlPopMatrix(0x1);
                            nlPushMatrix(0x0);
                            t184 = *(signed char *)0x8C2FBC80;
                            if ((*(float *)0x8C2FBC74) == (*(float *)((((((unsigned char)t184 << 1) + (unsigned char)t184) << 2) + 0x8C1081DC)))) {
                                nlObjPutSetSaturate(0.0f, 1.0f);
                                t189 = nlSin(((*(int *)0x8C20D124) * 0x888));
                                u190 = 0.25f;
                                u190 = u190 + 0.25f * t189;
                                nlObjPutSetFadeColorOffset(u190, 0.0f, 0.0f);
                            }
                            nlLoadMatrix(0x8C288224);
                            if ((*(int *)0x8C288AF0) == -1) {
                                t208 = 0x8C10242C;
                                t211 = ((*(int *)0x8C2889DC) * 0x6C);
                            } else {
                                if ((*(int *)0x8C288AF0) == 6) {
                                    nlTranslate(0.0f, 0.25999999f, -0.709999979f);
                                }
                                t208 = 0x8C157548;
                                t211 = ((*(int *)0x8C288AF0) << 2);
                            }
                            nlObjPut((*(int *)((t211 + t208))));
                            nlObjPutSetSaturate((-1.0f), (-1.0f));
                            nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                            nlPopMatrix(0x1);
                            t219 = *(signed char *)0x8C2FBC81;
                            if ((*(float *)0x8C2FBC78) == (*(float *)((((((unsigned char)t219 << 1) + (unsigned char)t219) << 2) + 0x8C108218)))) {
                                nlPushMatrix(0x0);
                                *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287DBC);
                                nlObjPutSetSaturate(0.0f, 1.0f);
                                t226 = nlSin(((*(int *)0x8C20D124) * 0x888));
                                u227 = 0.25f;
                                u227 = u227 + 0.25f * t226;
                                nlObjPutSetFadeColorOffset(u227, 0.0f, 0.0f);
                                nlLoadMatrix(0x8C288464);
                                nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x50))) + 0x4))));
                                nlLoadMatrix(0x8C2884A4);
                                nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x54))) + 0x4))));
                                nlLoadMatrix(0x8C287F64);
                                nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) + 0x4))));
                                nlLoadMatrix(0x8C287FA4);
                                nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) + 0x4))));
                                nlObjPutSetSaturate((-1.0f), (-1.0f));
                                nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                                nlPopMatrix(0x1);
                            }
                            nlMatrixMode(0x3);
                            nlUnitMatrix();
                            nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
                            *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
                            nlMatrixMode(0x1);
                        }
                    }
                } else {
                    nlMatrixMode(0x3);
                    nlUnitMatrix();
                    nlPerspective(0x2000, 1.33333337f, 0.300000012f, 3000.0f);
                    *(float *)0x8C287A10 = (320.0f / (nlTanf(0.522289753f)));
                    nlMatrixMode(0x1);
                    *(float *)0x8C287D98 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                    motionAdvance(0x8C287D84);
                    u294 = *(float *)0x8C287D90;
                    *(int *)((int)stk + 28) = (0xB8 + ((int)stk + 32));
                    motionRootAtFrame(0x8C287D84, (int)u294, 0x0, 0x0, (0xB8 + ((int)stk + 32)));
                    if ((*(int *)0x8C288AD0) != 0) {
                        *(float *)(((int)stk + 216)) = ((*(float *)(((int)stk + 216))) * (-1.0f));
                    }
                    nlPushUnitMatrix();
                    nlRotateAY((*(short *)0x8C28888A));
                    nlCalcPoint((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)));
                    nlPopMatrix(0x1);
                    nlScaleVector((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)), (*(float *)0x8C287D98));
                    nlAddVector(0x8C28886C, (0xB8 + ((int)stk + 32)));
                    t311 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                    *(unsigned int *)(((int)stk + 60)) = t311;
                    t312 = *(int *)((t311 + 0x8));
                    if (((-(((((0x20000 & t312) == 0)) ? 1 : 0) - 1)) == 0) && ((-(((((0x10000 & t312) == 0)) ? 1 : 0) - 1)) == 0)) {
                        if ((*(int *)0x8C2FBEA0) != 0) {
                            u318 = (*(float *)0x8C28886C);
                            u318 = u318 + 0.5f * ((-(*(float *)0x8C28886C)) + 14.0f);
                            *(float *)0x8C28886C = u318;
                            u321 = (*(float *)0x8C288870);
                            u321 = u321 + 0.5f * ((-(*(float *)0x8C288870)) + -8.0f);
                            *(float *)0x8C288870 = u321;
                            u324 = (*(float *)0x8C288874);
                            u324 = u324 + 0.5f * ((-(*(float *)0x8C288874)) + -45.0f);
                            *(float *)0x8C288874 = u324;
                            *(unsigned int *)0x8C2FBEA0 = ((*(int *)0x8C2FBEA0) - 1);
                        } else {
                            t326 = motionIsEnd(0x8C287D84);
                            if (t326 != 0) {
                                *(int *)((int)stk + 28) = 0x8C28886C;
                                *(Stk3 *)(0x8C28886C) = vecMake(14.0f, -8.0f, -45.0f);
                            }
                        }
                    } else {
                        *(unsigned short *)0x8C28888A = ((*(short *)0x8C28888A) + ((short)((-(((((0x20000 & t312) == 0)) ? 1 : 0) - 1)) - (-(((((0x10000 & t312) == 0)) ? 1 : 0) - 1))) * (short)0x222));
                        u340 = (*(float *)0x8C28886C);
                        u340 = u340 + 0.100000001f * ((-(*(float *)0x8C28886C)) + 14.0f);
                        *(float *)0x8C28886C = u340;
                        u343 = (*(float *)0x8C288870);
                        u343 = u343 + 0.100000001f * ((-(*(float *)0x8C288870)) + -8.0f);
                        *(float *)0x8C288870 = u343;
                        u346 = (*(float *)0x8C288874);
                        u346 = u346 + 0.100000001f * ((-(*(float *)0x8C288874)) + -45.0f);
                        *(float *)0x8C288874 = u346;
                        *(unsigned int *)0x8C2FBEA0 = (int)((float)(*(int *)0x8C287DB4) - (*(float *)0x8C287D90));
                    }
                    *(float *)0x8C288AB8 = 0.0f;
                    *(float *)0x8C288ABC = 0.0f;
                    nlPushUnitMatrix();
                    nlTranslate((*(float *)0x8C28886C), (*(float *)0x8C288870), (*(float *)0x8C288874));
                    nlRotateAY((*(short *)0x8C28888A));
                    playerPut(0x8C287D84, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    t367 = *(signed char *)0x8C2FBC80;
                    if ((*(float *)0x8C2FBC74) == (*(float *)((((((unsigned char)t367 << 1) + (unsigned char)t367) << 2) + 0x8C1081DC)))) {
                        nlObjPutSetSaturate(0.0f, 1.0f);
                        t372 = nlSin(((*(int *)0x8C20D124) * 0x888));
                        u373 = 0.25f;
                        u373 = u373 + 0.25f * t372;
                        nlObjPutSetFadeColorOffset(u373, 0.0f, 0.0f);
                    }
                    nlLoadMatrix(0x8C288224);
                    if ((*(int *)0x8C288AF0) == -1) {
                        t390 = 0x8C10242C;
                        t393 = ((*(int *)0x8C2889DC) * 0x6C);
                    } else {
                        if ((*(int *)0x8C288AF0) == 6) {
                            nlTranslate(0.0f, 0.25999999f, -0.709999979f);
                        }
                        t390 = 0x8C157548;
                        t393 = ((*(int *)0x8C288AF0) << 2);
                    }
                    nlObjPut((*(int *)((t393 + t390))));
                    nlObjPutSetSaturate((-1.0f), (-1.0f));
                    nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                    nlPopMatrix(0x1);
                    t400 = *(signed char *)0x8C2FBC81;
                    if ((*(float *)0x8C2FBC78) == (*(float *)((((((unsigned char)t400 << 1) + (unsigned char)t400) << 2) + 0x8C108218)))) {
                        nlPushMatrix(0x0);
                        *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287DBC);
                        nlObjPutSetSaturate(0.0f, 1.0f);
                        t407 = nlSin(((*(int *)0x8C20D124) * 0x888));
                        u408 = 0.25f;
                        u408 = u408 + 0.25f * t407;
                        nlObjPutSetFadeColorOffset(u408, 0.0f, 0.0f);
                        nlLoadMatrix(0x8C288464);
                        nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                        nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x50))) + 0x4))));
                        nlLoadMatrix(0x8C2884A4);
                        nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                        nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x54))) + 0x4))));
                        nlLoadMatrix(0x8C287F64);
                        nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                        nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) + 0x4))));
                        nlLoadMatrix(0x8C287FA4);
                        nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                        nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) + 0x4))));
                        nlObjPutSetSaturate((-1.0f), (-1.0f));
                        nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                        nlPopMatrix(0x1);
                    }
                    nlMatrixMode(0x3);
                    nlUnitMatrix();
                    nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
                    *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
                    nlMatrixMode(0x1);
                }
            }
        }
        t476 = unlockCountW0();
        if (t476 == 0) {
            t556 = t476;
        } else {
            if ((*(int *)0x8C2FBE0C) == (*(int *)(((int)stk + 40)))) {
                *(unsigned int *)(((int)stk + 32)) = (padDirRepeat((*(int *)0x8C421F70), 0x40));
                *(unsigned int *)(((int)stk + 40)) = (padDirRepeat((*(int *)0x8C421F70), 0x80));
                if (((*(int *)(((int)stk + 32))) == 0) && (t486 = *(int *)(((int)stk + 40)), t486 == 0)) {
                } else {
                    sndSeCursor();
                }
                *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + ((-(((((*(int *)(((int)stk + 40))) == 0)) ? 1 : 0) - 1)) - (-(((((*(int *)(((int)stk + 32))) == 0)) ? 1 : 0) - 1))));
                if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                    *(unsigned char *)0x8C2FBC83 = 0x1B;
                }
                if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                    *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                    for (;;) {
                        t497 = unlockTestW0((*(signed char *)0x8C2FBC83));
                        if (t497 != 0) {
                            break;
                        }
                        if ((*(int *)(((int)stk + 32))) != 0) {
                            *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) - 1);
                        }
                        if ((*(int *)(((int)stk + 40))) != 0) {
                            *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + 0x1);
                        }
                        if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                            *(unsigned char *)0x8C2FBC83 = 0x1B;
                        }
                        if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                            *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                        }
                    }
                } else {
                    for (;;) {
                        t514 = unlockTestW0((*(signed char *)0x8C2FBC83));
                        if (t514 != 0) {
                            break;
                        }
                        if ((*(int *)(((int)stk + 32))) != 0) {
                            *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) - 1);
                        }
                        if ((*(int *)(((int)stk + 40))) != 0) {
                            *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + 0x1);
                        }
                        if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                            *(unsigned char *)0x8C2FBC83 = 0x1B;
                        }
                        if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                            *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                        }
                    }
                }
            }
            t539 = (int)((int)(*(int *)0x8C20D19C) % (int)0x1E);
            sprSheetSet(0x8C10A938);
            sprSheetPut(0x0, 446.0f, 268.0f, 0.5f, (*(float *)0x8C2FBE94));
            sprSheetSet(0x8C10A9E8);
            sprSheetPut(0x0, 425.0f, 278.0f, 0.5f, ((*(float *)0x8C2FBE94) * ((float)(0x1E - t539) / 30.0f)));
            sprSheetSet(0x8C10AA0C);
            sprSheetPut(0x0, 566.0f, 278.0f, 0.5f, ((*(float *)0x8C2FBE94) * ((float)(0x1E - t539) / 30.0f)));
            sprSheetSet(0x8C10A9A0);
            *(float *)0x8C2876B8 = ((*(float *)0x8C2876B8) * 173.0f);
            sprSheetPut(0x0, 417.0f, 262.0f, 0.600000024f, ((*(float *)0x8C2FBE94) * 0.699999988f));
            sprSheetSet(0x8C10A9C4);
            sprSheetPut(0x0, 591.0f, 262.0f, 0.600000024f, ((*(float *)0x8C2FBE94) * 0.699999988f));
        }
        *(unsigned int *)0x8C2FBE50 = 0x0;
        *(unsigned int *)0x8C2FBE4C = 0x0;
        t563 = t556;
        t565 = 0x8C2FBE4C;
        t566 = 0x0;
        for (;;) {
            if ((int)t566 >= (int)(*(int *)0x8C2FBC54)) {
                break;
            }
            t565 = t566;
            t564 = (*(int *)0x8C2FBC50);
            t565 = (*(int *)(((((((t566 << 2) + t565) << 2) << 1) + t564) + 0x0)));
            if (t565 == 0) {
                t565 = 0x20;
                if ((int)t566 < (int)t565) {
                    t564 = 0x8C2FBC64;
                    t565 = (*(int *)((t564 + 0x0)));
                    if ((((int)0x1 << (int)t566) & t565) != 0) {
                        t565 = 0x8C2FBE4C;
                        t564 = (*(int *)((t565 + 0x0)));
                        t564 = (t564 + 0x1);
                        *(unsigned int *)((t565 + 0x0)) = t564;
                    }
                } else {
                    t563 = 0x1;
                    t564 = 0x8C2FBC68;
                    t563 = ((int)t563 << (int)(t566 - 32));
                    if ((t563 & (*(int *)((t564 + 0x0)))) != 0) {
                        t565 = 0x8C2FBE4C;
                        t564 = (*(int *)((t565 + 0x0)));
                        t564 = (t564 + 0x1);
                        *(unsigned int *)((t565 + 0x0)) = t564;
                    }
                }
            }
            t563 = t566;
            t563 = (t563 << 2);
            t563 = (t563 + t566);
            t565 = (*(int *)0x8C2FBC50);
            t563 = (t563 << 2);
            t563 = (t563 << 1);
            t563 = (*(int *)((t565 + t563)));
            if (t563 == 1) {
                t565 = 0x20;
                if ((int)t566 < (int)t565) {
                    t564 = 0x8C2FBC64;
                    t565 = (*(int *)((t564 + 0x0)));
                    if ((((int)0x1 << (int)t566) & t565) != 0) {
                        t565 = 0x8C2FBE50;
                        t564 = (*(int *)((t565 + 0x0)));
                        t564 = (t564 + 0x1);
                        *(unsigned int *)((t565 + 0x0)) = t564;
                    }
                } else {
                    t563 = 0x1;
                    t564 = 0x8C2FBC68;
                    t563 = ((int)t563 << (int)(t566 - 32));
                    if ((t563 & (*(int *)((t564 + 0x0)))) != 0) {
                        t565 = 0x8C2FBE50;
                        t564 = (*(int *)((t565 + 0x0)));
                        t564 = (t564 + 0x1);
                        *(unsigned int *)((t565 + 0x0)) = t564;
                    }
                }
            }
            t566 = (t566 + 0x1);
        }
        sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C159B78))));
        t600 = *(signed char *)0x8C2FBC7C;
        if (((unsigned char)t600 == 4) || ((unsigned char)t600 == 6)) {
            *(float *)0x8C2878D8 = 4.0f;
        }
        sprSheetPut(0x0, 283.0f, 109.0f, 50.2999992f, (*(float *)0x8C2FBE94));
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x2, 0x8C159C08, 283.0f, 131.0f, 50.2999992f);
        if ((unsigned char)(*(signed char *)0x8C2FBC7D) != 0xFF) {
            sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7D) << 2) + 0x8C159B78))));
            t612 = *(signed char *)0x8C2FBC7D;
            if (((unsigned char)t612 == 4) || ((unsigned char)t612 == 6)) {
                *(float *)0x8C2878D8 = 4.0f;
            }
            u619 = 159.0f;
            u620 = (*(float *)0x8C2FBE94);
        } else {
            sprSheetSet(0x8C108A28);
            u619 = 156.0f;
            u620 = (*(float *)0x8C2FBE94);
        }
        sprSheetPut(0x0, 283.0f, u619, 50.2999992f, u620);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign((*(int *)0x8C2FBE4C), 0x0, 0x8C159C08, 283.0f, 181.0f, 50.2999992f);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign((*(int *)0x8C2FBE50), 0x0, 0x8C159C08, 283.0f, 206.0f, 50.2999992f);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign((*(int *)0x8C2FBC58), 0x9, 0x8C159C08, 283.0f, 231.0f, 50.2999992f);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        t632 = unlockCountW1();
        t633 = circuitNumDrawSign(t632, 0x0, 0x8C159C08, 283.0f, 273.0f, 50.2999992f);
        sprSheetSet(0x8C10AA30);
        t636 = sprSheetPut(0x0, t633, 273.0f, 50.2999992f, (*(float *)0x8C2FBE94));
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign(0x9, 0x0, 0x8C159C08, t636, 273.0f, 50.2999992f);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        t640 = unlockCountW2();
        t641 = circuitNumDrawSign(t640, 0x0, 0x8C159C08, 283.0f, 298.0f, 50.2999992f);
        sprSheetSet(0x8C10AA30);
        t644 = sprSheetPut(0x0, t641, 298.0f, 50.2999992f, (*(float *)0x8C2FBE94));
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign(0x5, 0x0, 0x8C159C08, t644, 298.0f, 50.2999992f);
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        t648 = unlockCountW0();
        t649 = circuitNumDrawSign(t648, 0x0, 0x8C159C08, 283.0f, 323.0f, 50.2999992f);
        sprSheetSet(0x8C10AA30);
        t652 = sprSheetPut(0x0, t649, 323.0f, 50.2999992f, (*(float *)0x8C2FBE94));
        *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
        circuitNumDrawSign(0x1C, 0x0, 0x8C159C08, t652, 323.0f, 50.2999992f);
        if (1.0f > (*(float *)0x8C2FBE94)) {
            *(float *)0x8C2FBE94 = ((*(float *)0x8C2FBE94) + 0.100000001f);
            t657 = 0x8C036160;
        }
        t1379 = t657;
    } else {
        if ((*(int *)(((*(int *)(((int)stk + 32))) + 0x10))) == 1) {
            *(unsigned int *)0x8C287C60 = 0x0;
            t1364 = (gameModeSet(0x0, 0x3, 0x0));
        } else {
            t664 = *(int *)(((int)stk + 32));
            *(int *)((int)stk + 28) = (0xC + t664);
            *(unsigned int *)(((0xC + t664) + 0x0)) = (circuitMenuCursor((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))), 0x2));
            if (((*(int *)0x8C2FBE10) == 0) && ((t669 = *(int *)0x8C421F70, t670 = *(int *)((0x8C29B898 + (t669 << 2))), t671 = *(int *)((t670 + 0x10)), (t671 & 5) != 0) || (t672 = *(int *)0x8C421F70, t673 = *(int *)((0x8C29B898 + (t672 << 2))), t674 = *(int *)((t673 + 0x10)), (t674 & 8) != 0))) {
                if ((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) == 0) {
                    charaTexFreeAll();
                    *(unsigned int *)0x8C2FBE6C = 0x0;
                    circuitTaskTrim((*(int *)(((int)stk + 40))));
                    *(unsigned int *)0x8C2FBE60 = 0x0;
                    sndSeDecide();
                    if ((*(signed char *)0x8C2FBC83) != (*(int *)0x8C2FBEA4)) {
                        memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
                        BupRequestSave(0x0, 0x8C108280, 0x8C40C2F4, 0x128);
                    }
                } else {
                    circuitTaskAdd(0x8C036164, 0x1B8, 0x199);
                    sndSeDecide();
                }
                *(unsigned int *)0x8C287C60 = 0x0;
            }
            sprSheetSet(0x8C10A96C);
            sprSheetPut(0x0, 250.0f, 58.0f, 50.2999992f, (*(float *)0x8C2FBE94));
            *(unsigned int *)(((int)stk + 36)) = 0x0;
            *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 32) + 0x28) + 0x40);
            *(unsigned int *)(((int)stk + 56)) = 0x8C2876A8;
            *(unsigned int *)(((int)stk + 44)) = (((int)stk + 32) + 0x28);
            *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 32) + 0x28) + 0x10);
            u710 = 108.0f;
            for (;;) {
                sprSheetSet(0x8C10A8F0);
                t712 = *(int *)(((int)stk + 56));
                *(float *)((t712 + 0x10)) = ((*(float *)((t712 + 0x10))) * 209.0f);
                sprSheetPut(0x0, 33.0f, u710, 50.4000015f, (*(float *)0x8C2FBE94));
                sprSheetSet(0x8C10A914);
                sprSheetPut(0x0, 256.0f, u710, 50.4000015f, (*(float *)0x8C2FBE94));
                sprSheetSet((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C159D40))));
                sprSheetPut(0x0, 51.0f, (u710 + (1.0f + 1.0f)), 50.2999992f, (*(float *)0x8C2FBE94));
                { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 32) + 0x28)) = *(struct mv16 *)(0x8C10AA9C); }
                t725 = (*(int *)(((int)stk + 44)));
                for (;;) {
                    *(float *)((t725 + 0x4)) = ((*(float *)((t725 + 0x4))) + u710);
                    t725 = (t725 + 0x10);
                    if ((unsigned int)t725 >= (unsigned int)(*(int *)(((int)stk + 48)))) {
                        break;
                    }
                }
                *(unsigned int *)(((*(int *)(((int)stk + 44))) + 0xC)) = (((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8);
                *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0xC)) = (((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8);
                nlDispStripTrnsl(0x4, (((int)stk + 32) + 0x28));
                u710 = (u710 + 25.0f);
                if ((*(int *)(((int)stk + 36))) == 5) {
                    u710 = (u710 + 17.0f);
                }
                t737 = *(int *)(((int)stk + 36));
                *(unsigned int *)(((int)stk + 36)) = (t737 + 0x1);
                if ((int)(t737 + 0x1) >= (int)0x9) {
                    break;
                }
            }
            *(Stk3 *)(((int)stk + 20)) = vecMake(640.0f, 0.0f, 50.5999985f);
            primRectInc(0x280, 0x1E0, ((((int)((*(float *)0x8C2FBE94) * 140.0f) << 16) << 8) | 0x0), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 50.0f, 50.5f);
            primRectInc(0x251, 0x2F, ((((int)((*(float *)0x8C2FBE94) * 192.0f) << 16) << 8) | 0xFF2100), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 97.0f, 50.5f);
            primRectInc(0x251, 0x109, ((((int)((*(float *)0x8C2FBE94) * 192.0f) << 16) << 8) | 0xFFD400), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 50.0f, 50.4000015f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 50.0f, 50.4000015f);
            primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 97.0f, 50.4000015f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 97.0f, 50.4000015f);
            primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 362.0f, 50.4000015f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 362.0f, 50.4000015f);
            primLineH(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            *(Stk3 *)(((int)stk + 20)) = vecMake(23.0f, 362.0f, 50.4000015f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(23.0f, 50.0f, 50.4000015f);
            primLineV(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), *(Stk6 *)((int)stk + 8));
            *(Stk3 *)(((int)stk + 20)) = vecMake(616.0f, 362.0f, 50.4000015f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(616.0f, 50.0f, 50.4000015f);
            primLineV(0x2, ((((int)((*(float *)0x8C2FBE94) * 255.0f) << 16) << 8) | 0xFFFFFF), *(Stk6 *)((int)stk + 8));
            if ((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) == 0) {
                *(unsigned int *)(((int)stk + 36)) = 0x1;
                *(float *)(((int)stk + 68)) = 1.0f;
            } else {
                *(unsigned int *)(((int)stk + 36)) = 0x0;
                *(float *)(((int)stk + 68)) = 0.5f;
                nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f);
            }
            sprSheetSet(0x8C10AA64);
            sprSheetPut(0x2000, 255.0f, 379.0f, 50.4500008f, (*(float *)0x8C2FBE94));
            *(Stk3 *)(((int)stk + 20)) = vecMake(238.0f, 377.0f, 50.5f);
            cursorBoxPut((*(int *)(((int)stk + 36))), *(Stk3 *)((int)stk + 20), (*(float *)0x8C2FBE94), 156.0f, (*(float *)(((int)stk + 68))));
            if ((*(int *)(((*(int *)(((int)stk + 32))) + 0xC))) == 1) {
                *(unsigned int *)(((int)stk + 32)) = 0x1;
                *(float *)(((int)stk + 64)) = 1.0f;
                u773 = 1.0f;
                u774 = 1.0f;
                u775 = 1.0f;
            } else {
                *(unsigned int *)(((int)stk + 32)) = 0x0;
                *(float *)(((int)stk + 64)) = 0.5f;
                u773 = 0.5f;
                u774 = 0.5f;
                u775 = 0.5f;
            }
            nlObjPutSetFadeColor(u773, u774, u775);
            sprSheetSet(0x8C10AA88);
            sprSheetPut(0x2000, 268.0f, 411.0f, 50.4500008f, (*(float *)0x8C2FBE94));
            *(Stk3 *)(((int)stk + 20)) = vecMake(238.0f, 409.0f, 50.5f);
            cursorBoxPut((*(int *)(((int)stk + 32))), *(Stk3 *)((int)stk + 20), (*(float *)0x8C2FBE94), 156.0f, (*(float *)(((int)stk + 64))));
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            muneSlotLoad((*(int *)0x8C421F70), (*(int *)0x8C2889DC));
            if ((*(int *)((((*(int *)0x8C2889DC) << 2) + 0x8C1AFA64))) == 0) {
            } else {
                if (!((*(float *)0x8C2FBE94) > 0.899999976f)) {
                } else {
                    uniformSlotLoad((*(int *)0x8C421F70), (*(signed char *)0x8C2FBC83), (*(int *)0x8C2889DC), 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4));
                    t797 = unlockCountW0();
                    if ((t797 != 0) && (t798 = *(signed char *)0x8C2FBC83, t798 != -1)) {
                        if ((int)(*(signed char *)0x8C2FBC83) <= (int)0xFFFFFFFF) {
                        } else {
                            if ((*(int *)((((*(signed char *)0x8C2FBC83) << 2) + (((*(int *)0x8C421F70) * 0x70) + 0x8C1AF8A4)))) == 0) {
                            } else {
                                nlMatrixMode(0x3);
                                nlUnitMatrix();
                                nlPerspective(0x2000, 1.33333337f, 0.300000012f, 3000.0f);
                                *(float *)0x8C287A10 = (320.0f / (nlTanf(0.522289753f)));
                                nlMatrixMode(0x1);
                                *(float *)0x8C287D98 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                                motionAdvance(0x8C287D84);
                                u813 = *(float *)0x8C287D90;
                                *(int *)((int)stk + 28) = (0xB8 + ((int)stk + 32));
                                motionRootAtFrame(0x8C287D84, (int)u813, 0x0, 0x0, (0xB8 + ((int)stk + 32)));
                                if ((*(int *)0x8C288AD0) != 0) {
                                    *(float *)(((int)stk + 216)) = ((*(float *)(((int)stk + 216))) * (-1.0f));
                                }
                                nlPushUnitMatrix();
                                nlRotateAY((*(short *)0x8C28888A));
                                nlCalcPoint((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)));
                                nlPopMatrix(0x1);
                                nlScaleVector((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)), (*(float *)0x8C287D98));
                                nlAddVector(0x8C28886C, (0xB8 + ((int)stk + 32)));
                                t830 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                                *(unsigned int *)(((int)stk + 60)) = t830;
                                t831 = *(int *)((t830 + 0x8));
                                if (((-(((((0x20000 & t831) == 0)) ? 1 : 0) - 1)) == 0) && ((-(((((0x10000 & t831) == 0)) ? 1 : 0) - 1)) == 0)) {
                                    if ((*(int *)0x8C2FBEA0) != 0) {
                                        u837 = (*(float *)0x8C28886C);
                                        u837 = u837 + 0.5f * ((-(*(float *)0x8C28886C)) + 14.0f);
                                        *(float *)0x8C28886C = u837;
                                        u840 = (*(float *)0x8C288870);
                                        u840 = u840 + 0.5f * ((-(*(float *)0x8C288870)) + -8.0f);
                                        *(float *)0x8C288870 = u840;
                                        u843 = (*(float *)0x8C288874);
                                        u843 = u843 + 0.5f * ((-(*(float *)0x8C288874)) + -45.0f);
                                        *(float *)0x8C288874 = u843;
                                        *(unsigned int *)0x8C2FBEA0 = ((*(int *)0x8C2FBEA0) - 1);
                                    } else {
                                        t845 = motionIsEnd(0x8C287D84);
                                        if (t845 != 0) {
                                            *(int *)((int)stk + 28) = 0x8C28886C;
                                            *(Stk3 *)(0x8C28886C) = vecMake(14.0f, -8.0f, -45.0f);
                                        }
                                    }
                                } else {
                                    *(unsigned short *)0x8C28888A = ((*(short *)0x8C28888A) + ((short)((-(((((0x20000 & t831) == 0)) ? 1 : 0) - 1)) - (-(((((0x10000 & t831) == 0)) ? 1 : 0) - 1))) * (short)0x222));
                                    u859 = (*(float *)0x8C28886C);
                                    u859 = u859 + 0.100000001f * ((-(*(float *)0x8C28886C)) + 14.0f);
                                    *(float *)0x8C28886C = u859;
                                    u862 = (*(float *)0x8C288870);
                                    u862 = u862 + 0.100000001f * ((-(*(float *)0x8C288870)) + -8.0f);
                                    *(float *)0x8C288870 = u862;
                                    u865 = (*(float *)0x8C288874);
                                    u865 = u865 + 0.100000001f * ((-(*(float *)0x8C288874)) + -45.0f);
                                    *(float *)0x8C288874 = u865;
                                    *(unsigned int *)0x8C2FBEA0 = (int)((float)(*(int *)0x8C287DB4) - (*(float *)0x8C287D90));
                                }
                                *(float *)0x8C288AB8 = 0.0f;
                                *(float *)0x8C288ABC = 0.0f;
                                nlPushUnitMatrix();
                                nlTranslate((*(float *)0x8C28886C), (*(float *)0x8C288870), (*(float *)0x8C288874));
                                nlRotateAY((*(short *)0x8C28888A));
                                playerPut(0x8C287D84, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
                                nlPopMatrix(0x1);
                                nlPushMatrix(0x0);
                                t887 = *(signed char *)0x8C2FBC80;
                                if ((*(float *)0x8C2FBC74) == (*(float *)((((((unsigned char)t887 << 1) + (unsigned char)t887) << 2) + 0x8C1081DC)))) {
                                    nlObjPutSetSaturate(0.0f, 1.0f);
                                    t892 = nlSin(((*(int *)0x8C20D124) * 0x888));
                                    u893 = 0.25f;
                                    u893 = u893 + 0.25f * t892;
                                    nlObjPutSetFadeColorOffset(u893, 0.0f, 0.0f);
                                }
                                nlLoadMatrix(0x8C288224);
                                if ((*(int *)0x8C288AF0) == -1) {
                                    t911 = 0x8C10242C;
                                    t914 = ((*(int *)0x8C2889DC) * 0x6C);
                                } else {
                                    if ((*(int *)0x8C288AF0) == 6) {
                                        nlTranslate(0.0f, 0.25999999f, -0.709999979f);
                                    }
                                    t911 = 0x8C157548;
                                    t914 = ((*(int *)0x8C288AF0) << 2);
                                }
                                nlObjPut((*(int *)((t914 + t911))));
                                nlObjPutSetSaturate((-1.0f), (-1.0f));
                                nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                                nlPopMatrix(0x1);
                                t922 = *(signed char *)0x8C2FBC81;
                                if ((*(float *)0x8C2FBC78) == (*(float *)((((((unsigned char)t922 << 1) + (unsigned char)t922) << 2) + 0x8C108218)))) {
                                    nlPushMatrix(0x0);
                                    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287DBC);
                                    nlObjPutSetSaturate(0.0f, 1.0f);
                                    t929 = nlSin(((*(int *)0x8C20D124) * 0x888));
                                    u930 = 0.25f;
                                    u930 = u930 + 0.25f * t929;
                                    nlObjPutSetFadeColorOffset(u930, 0.0f, 0.0f);
                                    nlLoadMatrix(0x8C288464);
                                    nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                    nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x50))) + 0x4))));
                                    nlLoadMatrix(0x8C2884A4);
                                    nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                    nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x54))) + 0x4))));
                                    nlLoadMatrix(0x8C287F64);
                                    nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                    nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) + 0x4))));
                                    nlLoadMatrix(0x8C287FA4);
                                    nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                                    nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) + 0x4))));
                                    nlObjPutSetSaturate((-1.0f), (-1.0f));
                                    nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                                    nlPopMatrix(0x1);
                                }
                                nlMatrixMode(0x3);
                                nlUnitMatrix();
                                nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
                                *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
                                nlMatrixMode(0x1);
                            }
                        }
                    } else {
                        nlMatrixMode(0x3);
                        nlUnitMatrix();
                        nlPerspective(0x2000, 1.33333337f, 0.300000012f, 3000.0f);
                        *(float *)0x8C287A10 = (320.0f / (nlTanf(0.522289753f)));
                        nlMatrixMode(0x1);
                        *(float *)0x8C287D98 = ((float)(*(int *)0x8C301BF0) * (*(float *)0x8C23D204));
                        motionAdvance(0x8C287D84);
                        u997 = *(float *)0x8C287D90;
                        *(int *)((int)stk + 28) = (0xB8 + ((int)stk + 32));
                        motionRootAtFrame(0x8C287D84, (int)u997, 0x0, 0x0, (0xB8 + ((int)stk + 32)));
                        if ((*(int *)0x8C288AD0) != 0) {
                            *(float *)(((int)stk + 216)) = ((*(float *)(((int)stk + 216))) * (-1.0f));
                        }
                        nlPushUnitMatrix();
                        nlRotateAY((*(short *)0x8C28888A));
                        nlCalcPoint((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)));
                        nlPopMatrix(0x1);
                        nlScaleVector((0xB8 + ((int)stk + 32)), (0xB8 + ((int)stk + 32)), (*(float *)0x8C287D98));
                        nlAddVector(0x8C28886C, (0xB8 + ((int)stk + 32)));
                        t1014 = *(int *)((((*(int *)0x8C421F70) << 2) + 0x8C29B898));
                        *(unsigned int *)(((int)stk + 60)) = t1014;
                        t1015 = *(int *)((t1014 + 0x8));
                        if (((-(((((0x20000 & t1015) == 0)) ? 1 : 0) - 1)) == 0) && ((-(((((0x10000 & t1015) == 0)) ? 1 : 0) - 1)) == 0)) {
                            if ((*(int *)0x8C2FBEA0) != 0) {
                                u1021 = (*(float *)0x8C28886C);
                                u1021 = u1021 + 0.5f * ((-(*(float *)0x8C28886C)) + 14.0f);
                                *(float *)0x8C28886C = u1021;
                                u1024 = (*(float *)0x8C288870);
                                u1024 = u1024 + 0.5f * ((-(*(float *)0x8C288870)) + -8.0f);
                                *(float *)0x8C288870 = u1024;
                                u1027 = (*(float *)0x8C288874);
                                u1027 = u1027 + 0.5f * ((-(*(float *)0x8C288874)) + -45.0f);
                                *(float *)0x8C288874 = u1027;
                                *(unsigned int *)0x8C2FBEA0 = ((*(int *)0x8C2FBEA0) - 1);
                            } else {
                                t1029 = motionIsEnd(0x8C287D84);
                                if (t1029 != 0) {
                                    *(int *)((int)stk + 28) = 0x8C28886C;
                                    *(Stk3 *)(0x8C28886C) = vecMake(14.0f, -8.0f, -45.0f);
                                }
                            }
                        } else {
                            *(unsigned short *)0x8C28888A = ((*(short *)0x8C28888A) + ((short)((-(((((0x20000 & t1015) == 0)) ? 1 : 0) - 1)) - (-(((((0x10000 & t1015) == 0)) ? 1 : 0) - 1))) * (short)0x222));
                            u1043 = (*(float *)0x8C28886C);
                            u1043 = u1043 + 0.100000001f * ((-(*(float *)0x8C28886C)) + 14.0f);
                            *(float *)0x8C28886C = u1043;
                            u1046 = (*(float *)0x8C288870);
                            u1046 = u1046 + 0.100000001f * ((-(*(float *)0x8C288870)) + -8.0f);
                            *(float *)0x8C288870 = u1046;
                            u1049 = (*(float *)0x8C288874);
                            u1049 = u1049 + 0.100000001f * ((-(*(float *)0x8C288874)) + -45.0f);
                            *(float *)0x8C288874 = u1049;
                            *(unsigned int *)0x8C2FBEA0 = (int)((float)(*(int *)0x8C287DB4) - (*(float *)0x8C287D90));
                        }
                        *(float *)0x8C288AB8 = 0.0f;
                        *(float *)0x8C288ABC = 0.0f;
                        nlPushUnitMatrix();
                        nlTranslate((*(float *)0x8C28886C), (*(float *)0x8C288870), (*(float *)0x8C288874));
                        nlRotateAY((*(short *)0x8C28888A));
                        playerPut(0x8C287D84, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
                        nlPopMatrix(0x1);
                        nlPushMatrix(0x0);
                        t1070 = *(signed char *)0x8C2FBC80;
                        if ((*(float *)0x8C2FBC74) == (*(float *)((((((unsigned char)t1070 << 1) + (unsigned char)t1070) << 2) + 0x8C1081DC)))) {
                            nlObjPutSetSaturate(0.0f, 1.0f);
                            t1075 = nlSin(((*(int *)0x8C20D124) * 0x888));
                            u1076 = 0.25f;
                            u1076 = u1076 + 0.25f * t1075;
                            nlObjPutSetFadeColorOffset(u1076, 0.0f, 0.0f);
                        }
                        nlLoadMatrix(0x8C288224);
                        if ((*(int *)0x8C288AF0) == -1) {
                            t1093 = 0x8C10242C;
                            t1096 = ((*(int *)0x8C2889DC) * 0x6C);
                        } else {
                            if ((*(int *)0x8C288AF0) == 6) {
                                nlTranslate(0.0f, 0.25999999f, -0.709999979f);
                            }
                            t1093 = 0x8C157548;
                            t1096 = ((*(int *)0x8C288AF0) << 2);
                        }
                        nlObjPut((*(int *)((t1096 + t1093))));
                        nlObjPutSetSaturate((-1.0f), (-1.0f));
                        nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                        nlPopMatrix(0x1);
                        t1103 = *(signed char *)0x8C2FBC81;
                        if ((*(float *)0x8C2FBC78) == (*(float *)((((((unsigned char)t1103 << 1) + (unsigned char)t1103) << 2) + 0x8C108218)))) {
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287DBC);
                            nlObjPutSetSaturate(0.0f, 1.0f);
                            t1110 = nlSin(((*(int *)0x8C20D124) * 0x888));
                            u1111 = 0.25f;
                            u1111 = u1111 + 0.25f * t1110;
                            nlObjPutSetFadeColorOffset(u1111, 0.0f, 0.0f);
                            nlLoadMatrix(0x8C288464);
                            nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                            nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x50))) + 0x4))));
                            nlLoadMatrix(0x8C2884A4);
                            nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                            nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x54))) + 0x4))));
                            nlLoadMatrix(0x8C287F64);
                            nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                            nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) + 0x4))));
                            nlLoadMatrix(0x8C287FA4);
                            nlScale(1.00999999f, 1.00999999f, 1.00999999f);
                            nlObjPut((*(int *)(((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) + 0x4))));
                            nlObjPutSetSaturate((-1.0f), (-1.0f));
                            nlObjPutSetFadeColorOffset(0.0f, 0.0f, 0.0f);
                            nlPopMatrix(0x1);
                        }
                        nlMatrixMode(0x3);
                        nlUnitMatrix();
                        nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
                        *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
                        nlMatrixMode(0x1);
                    }
                }
            }
            t1179 = unlockCountW0();
            if (t1179 == 0) {
                t1259 = t1179;
            } else {
                if ((*(int *)0x8C2FBE0C) == (*(int *)(((int)stk + 40)))) {
                    *(unsigned int *)(((int)stk + 32)) = (padDirRepeat((*(int *)0x8C421F70), 0x40));
                    *(unsigned int *)(((int)stk + 40)) = (padDirRepeat((*(int *)0x8C421F70), 0x80));
                    if (((*(int *)(((int)stk + 32))) == 0) && (t1189 = *(int *)(((int)stk + 40)), t1189 == 0)) {
                    } else {
                        sndSeCursor();
                    }
                    *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + ((-(((((*(int *)(((int)stk + 40))) == 0)) ? 1 : 0) - 1)) - (-(((((*(int *)(((int)stk + 32))) == 0)) ? 1 : 0) - 1))));
                    if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                        *(unsigned char *)0x8C2FBC83 = 0x1B;
                    }
                    if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                        *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                        for (;;) {
                            t1200 = unlockTestW0((*(signed char *)0x8C2FBC83));
                            if (t1200 != 0) {
                                break;
                            }
                            if ((*(int *)(((int)stk + 32))) != 0) {
                                *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) - 1);
                            }
                            if ((*(int *)(((int)stk + 40))) != 0) {
                                *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + 0x1);
                            }
                            if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                                *(unsigned char *)0x8C2FBC83 = 0x1B;
                            }
                            if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                                *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                            }
                        }
                    } else {
                        for (;;) {
                            t1217 = unlockTestW0((*(signed char *)0x8C2FBC83));
                            if (t1217 != 0) {
                                break;
                            }
                            if ((*(int *)(((int)stk + 32))) != 0) {
                                *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) - 1);
                            }
                            if ((*(int *)(((int)stk + 40))) != 0) {
                                *(unsigned char *)0x8C2FBC83 = ((*(signed char *)0x8C2FBC83) + 0x1);
                            }
                            if ((int)(*(signed char *)0x8C2FBC83) < (int)0xFFFFFFFF) {
                                *(unsigned char *)0x8C2FBC83 = 0x1B;
                            }
                            if ((int)(*(signed char *)0x8C2FBC83) > (int)0x1B) {
                                *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
                            }
                        }
                    }
                }
                t1242 = (int)((int)(*(int *)0x8C20D19C) % (int)0x1E);
                sprSheetSet(0x8C10A938);
                sprSheetPut(0x0, 446.0f, 268.0f, 0.5f, (*(float *)0x8C2FBE94));
                sprSheetSet(0x8C10A9E8);
                sprSheetPut(0x0, 425.0f, 278.0f, 0.5f, ((*(float *)0x8C2FBE94) * ((float)(0x1E - t1242) / 30.0f)));
                sprSheetSet(0x8C10AA0C);
                sprSheetPut(0x0, 566.0f, 278.0f, 0.5f, ((*(float *)0x8C2FBE94) * ((float)(0x1E - t1242) / 30.0f)));
                sprSheetSet(0x8C10A9A0);
                *(float *)0x8C2876B8 = ((*(float *)0x8C2876B8) * 173.0f);
                sprSheetPut(0x0, 417.0f, 262.0f, 0.600000024f, ((*(float *)0x8C2FBE94) * 0.699999988f));
                sprSheetSet(0x8C10A9C4);
                sprSheetPut(0x0, 591.0f, 262.0f, 0.600000024f, ((*(float *)0x8C2FBE94) * 0.699999988f));
            }
            *(unsigned int *)0x8C2FBE50 = 0x0;
            *(unsigned int *)0x8C2FBE4C = 0x0;
            t1266 = t1259;
            t1268 = 0x8C2FBE4C;
            t1269 = 0x0;
            for (;;) {
                if ((int)t1269 >= (int)(*(int *)0x8C2FBC54)) {
                    break;
                }
                t1268 = t1269;
                t1267 = (*(int *)0x8C2FBC50);
                t1268 = (*(int *)(((((((t1269 << 2) + t1268) << 2) << 1) + t1267) + 0x0)));
                if (t1268 == 0) {
                    t1268 = 0x20;
                    if ((int)t1269 < (int)t1268) {
                        t1267 = 0x8C2FBC64;
                        t1268 = (*(int *)((t1267 + 0x0)));
                        if ((((int)0x1 << (int)t1269) & t1268) != 0) {
                            t1268 = 0x8C2FBE4C;
                            t1267 = (*(int *)((t1268 + 0x0)));
                            t1267 = (t1267 + 0x1);
                            *(unsigned int *)((t1268 + 0x0)) = t1267;
                        }
                    } else {
                        t1266 = 0x1;
                        t1267 = 0x8C2FBC68;
                        t1266 = ((int)t1266 << (int)(t1269 - 32));
                        if ((t1266 & (*(int *)((t1267 + 0x0)))) != 0) {
                            t1268 = 0x8C2FBE4C;
                            t1267 = (*(int *)((t1268 + 0x0)));
                            t1267 = (t1267 + 0x1);
                            *(unsigned int *)((t1268 + 0x0)) = t1267;
                        }
                    }
                }
                t1266 = t1269;
                t1266 = (t1266 << 2);
                t1266 = (t1266 + t1269);
                t1268 = (*(int *)0x8C2FBC50);
                t1266 = (t1266 << 2);
                t1266 = (t1266 << 1);
                t1266 = (*(int *)((t1268 + t1266)));
                if (t1266 == 1) {
                    t1268 = 0x20;
                    if ((int)t1269 < (int)t1268) {
                        t1267 = 0x8C2FBC64;
                        t1268 = (*(int *)((t1267 + 0x0)));
                        if ((((int)0x1 << (int)t1269) & t1268) != 0) {
                            t1268 = 0x8C2FBE50;
                            t1267 = (*(int *)((t1268 + 0x0)));
                            t1267 = (t1267 + 0x1);
                            *(unsigned int *)((t1268 + 0x0)) = t1267;
                        }
                    } else {
                        t1266 = 0x1;
                        t1267 = 0x8C2FBC68;
                        t1266 = ((int)t1266 << (int)(t1269 - 32));
                        if ((t1266 & (*(int *)((t1267 + 0x0)))) != 0) {
                            t1268 = 0x8C2FBE50;
                            t1267 = (*(int *)((t1268 + 0x0)));
                            t1267 = (t1267 + 0x1);
                            *(unsigned int *)((t1268 + 0x0)) = t1267;
                        }
                    }
                }
                t1269 = (t1269 + 0x1);
            }
            sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C159B78))));
            t1303 = *(signed char *)0x8C2FBC7C;
            if (((unsigned char)t1303 == 4) || ((unsigned char)t1303 == 6)) {
                *(float *)0x8C2878D8 = 4.0f;
            }
            sprSheetPut(0x0, 283.0f, 109.0f, 50.2999992f, (*(float *)0x8C2FBE94));
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x2, 0x8C159C08, 283.0f, 131.0f, 50.2999992f);
            if ((unsigned char)(*(signed char *)0x8C2FBC7D) != 0xFF) {
                sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7D) << 2) + 0x8C159B78))));
                t1315 = *(signed char *)0x8C2FBC7D;
                if (((unsigned char)t1315 == 4) || ((unsigned char)t1315 == 6)) {
                    *(float *)0x8C2878D8 = 4.0f;
                }
                u1322 = 159.0f;
                u1323 = (*(float *)0x8C2FBE94);
            } else {
                sprSheetSet(0x8C108A28);
                u1322 = 156.0f;
                u1323 = (*(float *)0x8C2FBE94);
            }
            sprSheetPut(0x0, 283.0f, u1322, 50.2999992f, u1323);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign((*(int *)0x8C2FBE4C), 0x0, 0x8C159C08, 283.0f, 181.0f, 50.2999992f);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign((*(int *)0x8C2FBE50), 0x0, 0x8C159C08, 283.0f, 206.0f, 50.2999992f);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign((*(int *)0x8C2FBC58), 0x9, 0x8C159C08, 283.0f, 231.0f, 50.2999992f);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            t1335 = unlockCountW1();
            t1336 = circuitNumDrawSign(t1335, 0x0, 0x8C159C08, 283.0f, 273.0f, 50.2999992f);
            sprSheetSet(0x8C10AA30);
            t1339 = sprSheetPut(0x0, t1336, 273.0f, 50.2999992f, (*(float *)0x8C2FBE94));
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign(0x9, 0x0, 0x8C159C08, t1339, 273.0f, 50.2999992f);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            t1343 = unlockCountW2();
            t1344 = circuitNumDrawSign(t1343, 0x0, 0x8C159C08, 283.0f, 298.0f, 50.2999992f);
            sprSheetSet(0x8C10AA30);
            t1347 = sprSheetPut(0x0, t1344, 298.0f, 50.2999992f, (*(float *)0x8C2FBE94));
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign(0x5, 0x0, 0x8C159C08, t1347, 298.0f, 50.2999992f);
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            t1351 = unlockCountW0();
            t1352 = circuitNumDrawSign(t1351, 0x0, 0x8C159C08, 283.0f, 323.0f, 50.2999992f);
            sprSheetSet(0x8C10AA30);
            t1355 = sprSheetPut(0x0, t1352, 323.0f, 50.2999992f, (*(float *)0x8C2FBE94));
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE94);
            circuitNumDrawSign(0x1C, 0x0, 0x8C159C08, t1355, 323.0f, 50.2999992f);
            if (1.0f > (*(float *)0x8C2FBE94)) {
                *(float *)0x8C2FBE94 = ((*(float *)0x8C2FBE94) + 0.100000001f);
                t1360 = 0x8C036160;
            }
            t1364 = t1360;
        }
        t1379 = t1364;
    }
    return t1379;
}

int FUN_8c0561dc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (!(35.6550026f > u1)) {
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
            u2 = u0;
            u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
            if (!(0.0f > u2)) {
                u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u2 = u0;
                u2 = u2 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u1;
                u1 = u2;
            } else {
                u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u1 = ((-u0) - (u2 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
            }
            if (41.5974998f > u1) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t1 = (((a5 + 0x1) + 0x1) + 0x1);
            } else {
                u0 = *(float *)((a4 + 0xB9C));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (!(16.460001f > u1)) {
                    u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (16.460001f > u1) {
                        u0 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t2 = (a5 + 0x1);
                    } else {
                        u0 = *(float *)((a4 + 0xB9C));
                        u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        if (((u0 > 0.0f) - (0.0f > u0)) != ((u1 > 0.0f) - (0.0f > u1))) {
                            u0 = *(float *)((a4 + 0xB9C));
                            t3 = a5;
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t4 = ((u0 > 0.0f) - (0.0f > u0));
                        } else {
                            u0 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u0 = *(float *)((a4 + 0xB9C));
                            t3 = (a5 + 0x1);
                            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t4 = (-((u0 > 0.0f) - (0.0f > u0)));
                        }
                        cpuAimPointSet(t3, 0x1, ((float)t4 * 41.1500015f), u1);
                        t2 = (t3 + 0x1);
                    }
                    t3 = t2;
                } else {
                    u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (16.460001f > u1) {
                        u0 = *(float *)((a4 + 0xAE8));
                        u1 = *(float *)((a4 + 0xB9C));
                        u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u2 > 0.0f) - (0.0f > u2))) {
                            u0 = *(float *)((a4 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            u2 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t2 = (((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)));
                        } else {
                            u0 = *(float *)((a4 + 0xAE8));
                            u1 = *(float *)((a4 + 0xB9C));
                            u2 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
                            t2 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t2 * 41.1500015f), u2);
                        t2 = (a5 + 0x1);
                    } else {
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 23.7700005f));
                        t2 = ((a5 + 0x1) + 0x1);
                    }
                    t3 = t2;
                }
                t1 = t3;
            }
            t0 = t1;
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x3, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            t0 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t1 = t0;
    } else {
        u0 = *(float *)0x8C291F7C;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (u1 > 20.5750008f) {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t0 * 41.1500015f), u1);
        t1 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    return t1;
}

int FUN_8c0497cc(int a4, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    t3 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t4 = 0xA24;
        if ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                if (((int)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) < (int)(*(int *)((0x8C159F50 + ((*(int *)((a4 + 0xC58))) << 2))))) && (t0 = *(int *)0x8C2FCC5C, (int)t0 < (int)0x2)) {
                    *(unsigned char *)(((0x12B + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = 0x1;
                }
                u0 = *(float *)0x8C291F7C;
                u1 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u2 = ((*(float *)((a4 + 0xB00))) * u1);
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u0 = 0.0f;
                if (12.3450012f > u1) {
                } else {
                    u1 = *(float *)0x8C291F7C;
                    u3 = (-u1);
                    if (!(0.0f > u1)) {
                        u3 = u1;
                    }
                    if (28.8050003f > u3) {
                        u1 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u3 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 26.7474995f);
                    } else {
                        u3 = (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                    }
                    u0 = u3;
                }
                u1 = (-(u2 * 118.849998f));
                u2 = u0;
            } else {
                if ((int)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) >= (int)(*(int *)((0x8C159F50 + ((*(int *)((a4 + 0xC58))) << 2))))) {
                } else {
                    t0 = *(int *)((a4 + 0xC58));
                    if ((t0 != 8) && ((t0 != 12) && ((t0 != 14) && (t0 != 13)))) {
                        if (t0 != 11) {
                            if (t0 != 9) {
                                if (t0 == 15) {
                                    if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) == 0) {
                                        if (!((*(float *)((a4 + 0xC90))) > 1.20000005f)) {
                                        } else {
                                            u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                            } else {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                            }
                                            if (u3 > 40.0f) {
                                                t5 = (int)((int)(nlRand()) % (int)0x3);
                                                if (t5 == 0) {
                                                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x1;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((*(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C))) != 12) {
                                            if ((*(float *)((a4 + 0xC90))) > 1.0f) {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                                } else {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                    u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                                }
                                                if (u3 > 20.0f) {
                                                    u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                                                    t5 = (u0 > 0.0f) - (0.0f > u0);
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                    t6 = 0x1;
                                                    if ((u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) > 0.0f) {
                                                    } else {
                                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                        t7 = 0x0;
                                                        if (0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8))))) {
                                                            t7 = 0xFFFFFFFF;
                                                        }
                                                        t6 = t7;
                                                    }
                                                    if (t5 == (-t6)) {
                                                        t5 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t5 == 0) {
                                                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                        }
                                    }
                                } else {
                                    if (t0 == 10) {
                                        if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) == 0) {
                                            if (!((*(float *)((a4 + 0xC90))) > 1.20000005f)) {
                                            } else {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                                } else {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                    u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                                }
                                                if (u3 > 40.0f) {
                                                    t0 = (int)((int)(nlRand()) % (int)0x3);
                                                    if (t0 == 0) {
                                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x1;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((*(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C))) != 12) {
                                                if ((*(float *)((a4 + 0xC90))) > 1.0f) {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                        u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                                    } else {
                                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                        u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                                    }
                                                    if (u3 > 20.0f) {
                                                        u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                                                        t0 = (u0 > 0.0f) - (0.0f > u0);
                                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                        t5 = 0x1;
                                                        if ((u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) > 0.0f) {
                                                        } else {
                                                            u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                            t6 = 0x0;
                                                            if (0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8))))) {
                                                                t6 = 0xFFFFFFFF;
                                                            }
                                                            t5 = t6;
                                                        }
                                                        if (t0 == (-t5)) {
                                                            t0 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t0 == 0) {
                                                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) == 0) {
                                    if (!((*(float *)((a4 + 0xC90))) > 1.0f)) {
                                    } else {
                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                            u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                        } else {
                                            u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                            u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                        }
                                        if (u3 > 30.0f) {
                                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x1;
                                        }
                                    }
                                } else {
                                    if ((*(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C))) == 12) {
                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                    } else {
                                        if (!((*(float *)((a4 + 0xC90))) > 1.0f)) {
                                        } else {
                                            u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                            } else {
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                            }
                                            if (!(u3 > 20.0f)) {
                                            } else {
                                                u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                                                t0 = (u0 > 0.0f) - (0.0f > u0);
                                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                t5 = 0x1;
                                                if ((u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) > 0.0f) {
                                                } else {
                                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                                    t6 = 0x0;
                                                    if (0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8))))) {
                                                        t6 = 0xFFFFFFFF;
                                                    }
                                                    t5 = t6;
                                                }
                                                if (t0 != (-t5)) {
                                                } else {
                                                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (!((*(float *)((a4 + 0xC90))) > 1.0f)) {
                            } else {
                                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                if (!(0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)))))) {
                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u3 = (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C))));
                                } else {
                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    u3 = ((-(*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + u0);
                                }
                                if (!(u3 > 30.0f)) {
                                } else {
                                    u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
                                    t0 = (u0 > 0.0f) - (0.0f > u0);
                                    u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    t2 = 0x1;
                                    if ((u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)))) > 0.0f) {
                                    } else {
                                        u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        t5 = 0x0;
                                        if (0.0f > (u0 - (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8))))) {
                                            t5 = 0xFFFFFFFF;
                                        }
                                        t2 = t5;
                                    }
                                    if (t0 == t2) {
                                    } else {
                                        t0 = (int)((int)(nlRand()) % (int)0x3);
                                        if (t0 == 0) {
                                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((0x8C159F50 + ((*(int *)((a4 + 0xC58))) << 2))));
                    }
                }
                u0 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u3 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u4 = ((*(float *)((a4 + 0xB00))) * u3);
                u1 = (-(u4 * 118.849998f));
                u2 = (u0 * 0.5f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u2;
            *(float *)((a4 + 0xA3C)) = u1;
            t4 = 0xA3C;
        }
        t3 = t4;
    }
    return t3;
}

float FUN_8c067dfc(int a4)
{
    int stk[13];

    int R4;
    register int R5;
    int R8;
    register float F0;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    R4 = a4;
    v0_1 = *(int *)((R4 + 0xB5C));
    v0_6 = (0x54);
    v0_2 = (0x8C291F24);
    v0_0 = (((v0_1 * 0x160) + 0x8C2FC69C));
    v0_5 = ((((0x3 & (v0_1 + 0x2)) * 0xD78) + 0x8C287D84));
    v0_3 = (R4);
    R4 = ((((*(int *)(((((0x3 & (v0_1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C));
    v0_1 = (0x160);
    R8 = (0x4);
    if ((((*(int *)0x8C291F78) & 0x4) == 0)) goto L_8C067E4E;
    L_8C068288:;
    return F0;
    L_8C067E4E:;
    v0_6 = (0x12E);
    v0_1 = (0x2);
    if (((int)(unsigned char)(*(signed char *)((v0_0 + 0x12E))) < (int)0x2)) goto L_8C067E5E;
    goto L_8C068288;
    L_8C067E5E:;
    v0_4 = (0x0);
    if (!(((*(signed char *)((v0_0 + 0x12F))) != 0))) goto L_8C067F72;
    if (((int)(*(short *)((v0_0 + 0x118))) < (int)0x14)) goto L_8C067E7A;
    goto L_8C067F72;
    L_8C067F72:;
    if ((((*(int *)((v0_3 + 0xB60))) & R8) == 0)) goto L_8C067FC2;
    if (((int)(*(short *)((v0_0 + 0x118))) >= (int)0xF)) goto L_8C067FC2;
    w0_0 = cpuDistXZ((0xAE8 + v0_3), (0xBA8 + v0_3));
    F0 = (w0_0);
    if ((!(20.0f > w0_0))) goto L_8C067FC2;
    if (((R8 & (*(int *)((v0_5 + 0xB60)))) == 0)) goto L_8C067FBE;
    w0_0 = cpuDistXZ((0xAE8 + v0_3), (0xBA8 + v0_3));
    w0_1 = cpuDistXZ((0xAE8 + v0_5), (0xBA8 + v0_5));
    F0 = (w0_1);
    if ((!(w0_1 > w0_0))) goto L_8C067FC2;
    L_8C067FBE:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    L_8C067FC2:;
    w0_4 = *(float *)((v0_3 + 0xAF0));
    w0_5 = *(float *)((v0_5 + 0xAF0));
    v0_6 = (0xAF0);
    R4 = (0x100);
    w0_0 = (20.0f);
    w0_2 = (w0_4);
    w0_3 = ((w0_4 - w0_5));
    w0_1 = (w0_5);
    if ((0.0f > (w0_4 - w0_5))) goto L_8C067FF8;
    w0_1 = (w0_3);
    L_8C068000:;
    if ((!(w0_0 > w0_1))) goto L_8C06807E;
    if (((R4 & (*(int *)((v0_3 + 0xB60)))) == 0)) goto L_8C06803A;
    w0_0 = *(float *)((v0_3 + 0xAF0));
    v0_6 = (0xAF0);
    w0_1 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C06801A;
    w0_1 = ((*(float *)((v0_3 + v0_6))));
    L_8C06801C:;
    w0_0 = *(float *)((v0_2 + 0x14));
    v0_6 = (0x14);
    F0 = (0.0f);
    w0_2 = (w0_0);
    w0_1 = ((w0_1 + 5.0f));
    if ((0.0f > w0_0)) goto L_8C068030;
    w0_2 = ((*(float *)((v0_2 + v0_6))));
    L_8C068032:;
    if ((!(w0_2 > w0_1))) goto L_8C06803A;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    L_8C06803A:;
    v0_6 = (0x142);
    if (((*(signed char *)((v0_0 + 0x142))) != 0)) goto L_8C068046;
    goto L_8C068288;
    L_8C068046:;
    w0_1 = (0.0f);
    if ((!(((*(float *)((v0_3 + 0xB9C))) - (*(float *)((v0_3 + 0xAE8)))) > 0.0f))) goto L_8C06805A;
    v0_2 = (0x1);
    L_8C06806E:;
    v0_6 = (0x13D);
    if (!((v0_2 != (*(signed char *)((v0_0 + 0x13D)))))) goto L_8C068284;
    goto L_8C068288;
    L_8C068284:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    v0_6 = (0x12E);
    goto L_8C068288;
    L_8C06805A:;
    w0_0 = *(float *)((v0_3 + 0xAE8));
    w0_3 = *(float *)((v0_3 + 0xB9C));
    w0_2 = ((w0_3 - w0_0));
    if ((!(w0_1 > (w0_3 - w0_0)))) goto L_8C06806C;
    v0_2 = (0xFFFFFFFF);
    goto L_8C06806E;
    L_8C06806C:;
    v0_2 = (0x0);
    goto L_8C06806E;
    L_8C068030:;
    w0_2 = ((-w0_2));
    goto L_8C068032;
    L_8C06801A:;
    w0_1 = ((-w0_1));
    goto L_8C06801C;
    L_8C06807E:;
    w0_1 = *(float *)((v0_3 + v0_6));
    w0_2 = ((*(float *)((v0_5 + v0_6))));
    w0_3 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C06808C;
    w0_1 = (w0_3);
    L_8C068090:;
    if ((0.0f > w0_2)) goto L_8C06809A;
    w0_3 = (w0_2);
    L_8C06809E:;
    if ((!(w0_1 > w0_3))) goto L_8C068146;
    if ((((*(int *)((v0_3 + 0xB60))) & R4) == 0)) goto L_8C0680EC;
    w0_2 = *(float *)((v0_3 + 0xAF0));
    v0_6 = (0xAF0);
    w0_1 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C0680CC;
    w0_1 = ((*(float *)((v0_3 + v0_6))));
    L_8C0680CE:;
    w0_3 = *(float *)((v0_2 + 0x14));
    v0_6 = (0x14);
    F0 = (0.0f);
    w0_2 = (w0_3);
    w0_1 = ((w0_1 + 5.0f));
    if ((0.0f > w0_3)) goto L_8C0680E2;
    w0_2 = ((*(float *)((v0_2 + v0_6))));
    L_8C0680E4:;
    if ((!(w0_2 > w0_1))) goto L_8C0680EC;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    L_8C0680EC:;
    v0_6 = (0x12F);
    if (((*(signed char *)((v0_0 + 0x12F))) != 0)) goto L_8C0680F8;
    goto L_8C068288;
    L_8C0680F8:;
    v0_6 = (0x118);
    if (((int)(*(short *)((v0_0 + 0x118))) < (int)0x28)) goto L_8C068106;
    goto L_8C068288;
    L_8C068106:;
    if (((R4 & (*(int *)((v0_5 + 0xB60)))) == 0)) goto L_8C068134;
    w0_4 = *(float *)((v0_5 + 0xAE8));
    w0_5 = *(float *)((v0_5 + 0xB9C));
    v0_6 = (0xB9C);
    w0_2 = ((w0_4 - w0_5));
    w0_3 = (w0_4);
    w0_1 = (w0_5);
    if ((0.0f > (w0_4 - w0_5))) goto L_8C068124;
    w0_1 = (w0_2);
    L_8C06812C:;
    if ((w0_1 > w0_0)) goto L_8C068134;
    goto L_8C068288;
    L_8C068134:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    *(unsigned char *)((v0_0 + 0x12F)) = v0_4;
    *(unsigned char *)((v0_0 + 0xAF)) = v0_4;
    *(unsigned char *)((v0_0 + 0xAE)) = v0_4;
    v0_6 = (0xAE);
    goto L_8C068288;
    L_8C068124:;
    w0_1 = (((-w0_3) + w0_1));
    goto L_8C06812C;
    L_8C0680E2:;
    w0_2 = ((-w0_2));
    goto L_8C0680E4;
    L_8C0680CC:;
    w0_1 = ((-w0_1));
    goto L_8C0680CE;
    L_8C068146:;
    if (!(((int)(*(int *)0x8C2FCC5C) >= (int)v0_1))) goto L_8C06825E;
    w0_0 = *(float *)((v0_3 + v0_6));
    w0_3 = (w0_0);
    w0_1 = (0.0f);
    if ((!(w0_0 > 0.0f))) goto L_8C06815E;
    v0_6 = (0x1);
    goto L_8C068168;
    L_8C06825E:;
    w0_1 = *(float *)((v0_3 + 0xAE8));
    w0_4 = *(float *)((v0_3 + 0xB9C));
    w0_0 = ((w0_1 - w0_4));
    w0_2 = (w0_4);
    w0_3 = (w0_1);
    if ((0.0f > (w0_1 - w0_4))) goto L_8C068274;
    w0_1 = (w0_0);
    L_8C06827C:;
    v0_6 = (0x8C0682B0);
    if ((!(25.0f > w0_1))) goto L_8C068288;
    goto L_8C068284;
    L_8C068274:;
    w0_1 = (((-w0_3) + w0_2));
    goto L_8C06827C;
    L_8C068168:;
    w0_0 = *(float *)0x8C2FCC40;
    w0_1 = (float)v0_6;
    v0_6 = (0x8);
    w0_2 = (w0_0);
    w0_1 = w0_1;
    if ((0.0f > w0_0)) goto L_8C06817E;
    w0_3 = ((*(float *)((0x8C2FCC38 + v0_6))));
    L_8C068184:;
    if ((!(w0_3 > w0_1))) goto L_8C06825E;
    *(unsigned int *)(((int)stk + 8)) = 0x8C2FCC2C;
    w0_2 = *(float *)0x8C2FCC34;
    w0_3 = *(float *)((v0_3 + 0xAF0));
    v0_5 = (0x8C2FCC2C);
    R8 = (0x8C07F7E4);
    v0_4 = (0x8C2FCC2C);
    w0_4 = (10.0f);
    w0_0 = (w0_3);
    w0_1 = ((w0_2 - w0_3));
    w0_5 = (w0_2);
    if ((0.0f > (w0_2 - w0_3))) goto L_8C0681D4;
    w0_1 = (w0_1);
    L_8C0681DC:;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + 0xC);
    w0_5 = *(float *)(((v0_5 + 0xC) + 0x8));
    w0_2 = ((w0_0 - w0_5));
    w0_3 = (w0_5);
    if ((0.0f > (w0_0 - w0_5))) goto L_8C0681F4;
    w0_3 = (w0_2);
    L_8C0681FC:;
    if ((!(w0_3 > w0_1))) goto L_8C06824C;
    w0_0 = cpuDistXZ((0xAE8 + v0_3), v0_5);
    F0 = (w0_0);
    if ((6.0f > w0_0)) goto L_8C068284;
    w0_0 = cpuDistXZ((0xAE8 + v0_3), (v0_4 + 0xC));
    F0 = (w0_0);
    if ((!(w0_4 > w0_0))) goto L_8C068288;
    w0_0 = *(float *)((v0_4 + 0x8));
    v0_6 = (0x8);
    w0_2 = (0.0f);
    w0_1 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C06822E;
    w0_1 = ((*(float *)((v0_4 + v0_6))));
    L_8C068230:;
    w0_0 = *(float *)((v0_2 + 0x14));
    v0_6 = (0x14);
    w0_3 = (w0_0);
    if ((w0_2 > w0_0)) goto L_8C06823C;
    w0_3 = ((*(float *)((v0_2 + v0_6))));
    L_8C06823E:;
    v0_6 = (0x8C0682AC);
    w0_2 = (0.949999988f);
    if ((!((w0_3 * 0.949999988f) > w0_1))) goto L_8C068288;
    goto L_8C068284;
    L_8C06823C:;
    w0_3 = ((-w0_3));
    goto L_8C06823E;
    L_8C06822E:;
    w0_1 = ((-w0_1));
    goto L_8C068230;
    L_8C06824C:;
    w0_0 = cpuDistXZ((0xAE8 + v0_3), (v0_5 + 0xC));
    F0 = (w0_0);
    if ((w0_4 > w0_0)) goto L_8C068284;
    goto L_8C068288;
    L_8C0681F4:;
    w0_3 = (((-w0_0) + w0_3));
    goto L_8C0681FC;
    L_8C0681D4:;
    w0_1 = (((-w0_5) + w0_0));
    goto L_8C0681DC;
    L_8C06817E:;
    w0_3 = ((-(*(float *)((0x8C2FCC38 + v0_6)))));
    goto L_8C068184;
    L_8C06815E:;
    if ((!(w0_1 > w0_3))) goto L_8C068166;
    v0_6 = (0xFFFFFFFF);
    goto L_8C068168;
    L_8C068166:;
    v0_6 = (0x0);
    goto L_8C068168;
    L_8C06809A:;
    w0_3 = ((-w0_2));
    goto L_8C06809E;
    L_8C06808C:;
    w0_1 = ((-w0_3));
    goto L_8C068090;
    L_8C067FF8:;
    w0_1 = (((-w0_2) + w0_1));
    goto L_8C068000;
    L_8C067E7A:;
    v0_6 = (0xB9C);
    if ((0.0f > ((*(float *)((v0_3 + 0xB9C))) - (*(float *)((v0_3 + 0xAE8)))))) goto L_8C067E96;
    w0_1 = (((*(float *)((v0_3 + 0xB9C))) - (*(float *)((v0_3 + 0xAE8)))));
    L_8C067EA2:;
    if ((!(17.5f > w0_1))) goto L_8C067F72;
    w0_1 = *(float *)((v0_5 + 0xAF0));
    v0_6 = (0x14);
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C067EBA;
    w0_1 = (w0_0);
    L_8C067EBE:;
    w0_0 = *(float *)((v0_2 + v0_6));
    w0_2 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C067ECA;
    w0_3 = (w0_2);
    L_8C067ECE:;
    if ((w0_3 > w0_1)) goto L_8C067F6A;
    v0_6 = (0xB9C);
    if ((0.0f > ((*(float *)((v0_5 + 0xB9C))) - (*(float *)((v0_5 + 0xAE8)))))) goto L_8C067F10;
    w0_1 = (((*(float *)((v0_5 + 0xB9C))) - (*(float *)((v0_5 + 0xAE8)))));
    L_8C067F1C:;
    if ((w0_1 > 25.0f)) goto L_8C067F6A;
    w0_0 = *(float *)((R4 + 0x28));
    w0_2 = (w0_0);
    w0_1 = (0.0f);
    if ((!(w0_0 > 0.0f))) goto L_8C067F32;
    v0_6 = (0x1);
    L_8C067F3C:;
    if ((!(((*(float *)((v0_5 + 0xAE8))) - (*(float *)((v0_5 + 0xB9C)))) > 0.0f))) goto L_8C067F50;
    v0_7 = (0x1);
    L_8C067F66:;
    if ((v0_6 != v0_7)) goto L_8C067F72;
    L_8C067F6A:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    *(unsigned char *)((v0_0 + 0x12F)) = v0_4;
    goto L_8C067F72;
    L_8C067F50:;
    if ((!(0.0f > ((*(float *)((v0_5 + 0xAE8))) - (*(float *)((v0_5 + 0xB9C))))))) goto L_8C067F64;
    v0_7 = (0xFFFFFFFF);
    goto L_8C067F66;
    L_8C067F64:;
    v0_7 = (0x0);
    goto L_8C067F66;
    L_8C067F32:;
    if ((!(w0_1 > w0_2))) goto L_8C067F3A;
    v0_6 = (0xFFFFFFFF);
    goto L_8C067F3C;
    L_8C067F3A:;
    v0_6 = (0x0);
    goto L_8C067F3C;
    L_8C067F10:;
    w0_0 = *(float *)((v0_5 + 0xAE8));
    w0_2 = (w0_0);
    w0_1 = (((-(*(float *)((v0_5 + v0_6)))) + w0_0));
    goto L_8C067F1C;
    L_8C067ECA:;
    w0_3 = ((-w0_2));
    goto L_8C067ECE;
    L_8C067EBA:;
    w0_1 = ((-w0_0));
    goto L_8C067EBE;
    L_8C067E96:;
    w0_0 = *(float *)((v0_3 + 0xAE8));
    w0_2 = (w0_0);
    w0_1 = (((-(*(float *)((v0_3 + v0_6)))) + w0_0));
    goto L_8C067EA2;
}
